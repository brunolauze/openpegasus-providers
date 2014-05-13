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


UNIX_OrgStructure::UNIX_OrgStructure(void)
{
}

UNIX_OrgStructure::~UNIX_OrgStructure(void)
{
}

Boolean UNIX_OrgStructure::getParent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PARENT, getParent());
	return true;
}

CIMInstance UNIX_OrgStructure::getParent() const
{
	return _parent;
}

void UNIX_OrgStructure::setParent(CIMInstance &value)
{
	_parent = value;
}

Boolean UNIX_OrgStructure::getChild(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHILD, getChild());
	return true;
}

CIMInstance UNIX_OrgStructure::getChild() const
{
	return _child;
}

void UNIX_OrgStructure::setChild(CIMInstance &value)
{
	_child = value;
}


void UNIX_OrgStructure::clearInstance()
{

	_parent = CIMInstance(CIMName("CIM_OrgUnit"));
	_child = CIMInstance(CIMName("CIM_OrgUnit"));

}

Boolean UNIX_OrgStructure::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "Parent"))
			{
				CIMInstance parentValue;
				property.getValue().get(parentValue);
				setParent(parentValue);
			}
			else if (String::equal(property.getName().getString(), "Child"))
			{
				CIMInstance childValue;
				property.getValue().get(childValue);
				setChild(childValue);
			}
	}
	return true;
}


Boolean UNIX_OrgStructure::initialize()
{
	return false;
}

Boolean UNIX_OrgStructure::load(int &pIndex)
{
	
	_parent = CIMInstance(CIMName("CIM_OrgUnit"));
	_child = CIMInstance(CIMName("CIM_OrgUnit"));
	
	return false;
}

Boolean UNIX_OrgStructure::finalize()
{
	return false;
}


Boolean UNIX_OrgStructure::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String parentKey;
	String childKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_PARENT)) parentKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CHILD)) childKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getParent().getPath().toString(), parentKey)) && 
			(String::equalNoCase(getChild().getPath().toString(), childKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_OrgStructure::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_OrgStructure::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_OrgStructure::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_OrgStructure::validateInstance()
{
	return true;
}

