//%LICENSE////////////////////////////////////////////////////////////////
//
// Licensed to The Open Group (TOG) under one or more contributor license
// agreements.  Refer to the OpenPegasusNOTICE.txt file distributed with
// this work for additional information regarding copyright ownership.
// Each contributor licenses this file to you under the OpenPegasus Open
// Source License; you may not use this file except in compliance with the
// License.
//
// Permission is hereby granted, free of charge, to any person obtaining a
// copy of this software and associated documentation files (the "Software"),
// to deal in the Software without restriction, including without limitation
// the rights to use, copy, modify, merge, publish, distribute, sublicense,
// and/or sell copies of the Software, and to permit persons to whom the
// Software is furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included
// in all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
// OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
// MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
// IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
// CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
// TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
// SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//
//////////////////////////////////////////////////////////////////////////
//
//%/////////////////////////////////////////////////////////////////////////


using PROVIDER_LIB_NS::CIMHelper;


UNIX_ElementInPolicyRoleCollection::UNIX_ElementInPolicyRoleCollection(void)
{
}

UNIX_ElementInPolicyRoleCollection::~UNIX_ElementInPolicyRoleCollection(void)
{
}

Boolean UNIX_ElementInPolicyRoleCollection::getCollection(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COLLECTION, getCollection());
	return true;
}

CIMInstance UNIX_ElementInPolicyRoleCollection::getCollection() const
{
	return _collection;
}

void UNIX_ElementInPolicyRoleCollection::setCollection(CIMInstance &value)
{
	_collection = value;
}

Boolean UNIX_ElementInPolicyRoleCollection::getMember(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MEMBER, getMember());
	return true;
}

CIMInstance UNIX_ElementInPolicyRoleCollection::getMember() const
{
	return _member;
}

void UNIX_ElementInPolicyRoleCollection::setMember(CIMInstance &value)
{
	_member = value;
}


void UNIX_ElementInPolicyRoleCollection::clearInstance()
{

	_collection = CIMInstance(CIMName("CIM_PolicyRoleCollection"));
	// _member = CIMInstance(CIMName("CIM_ManagedElement"));

}

Boolean UNIX_ElementInPolicyRoleCollection::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "Collection"))
			{
				CIMInstance collectionValue;
				property.getValue().get(collectionValue);
				setCollection(collectionValue);
			}
			else if (String::equal(property.getName().getString(), "Member"))
			{
				CIMInstance memberValue;
				property.getValue().get(memberValue);
				setMember(memberValue);
			}
	}
	return true;
}


Boolean UNIX_ElementInPolicyRoleCollection::initialize()
{
	return false;
}

Boolean UNIX_ElementInPolicyRoleCollection::load(int &pIndex)
{
	
	_collection = CIMInstance(CIMName("CIM_PolicyRoleCollection"));
	// _member = CIMInstance(CIMName("CIM_ManagedElement"));
	
	return false;
}

Boolean UNIX_ElementInPolicyRoleCollection::finalize()
{
	return false;
}


Boolean UNIX_ElementInPolicyRoleCollection::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String collectionKey;
	String memberKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_COLLECTION)) collectionKey = kb.getValue();
		else if (keyName.equal(PROPERTY_MEMBER)) memberKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getCollection().getPath().toString(), collectionKey)) && 
			(String::equalNoCase(getMember().getPath().toString(), memberKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_ElementInPolicyRoleCollection::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ElementInPolicyRoleCollection::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ElementInPolicyRoleCollection::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ElementInPolicyRoleCollection::validateInstance()
{
	return true;
}

