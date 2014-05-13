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


UNIX_AuthorizedSubject::UNIX_AuthorizedSubject(void)
{
}

UNIX_AuthorizedSubject::~UNIX_AuthorizedSubject(void)
{
}

Boolean UNIX_AuthorizedSubject::getPrivilege(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIVILEGE, getPrivilege());
	return true;
}

CIMInstance UNIX_AuthorizedSubject::getPrivilege() const
{
	return _privilege;
}

void UNIX_AuthorizedSubject::setPrivilege(CIMInstance &value)
{
	_privilege = value;
}

Boolean UNIX_AuthorizedSubject::getPrivilegedElement(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIVILEGED_ELEMENT, getPrivilegedElement());
	return true;
}

CIMInstance UNIX_AuthorizedSubject::getPrivilegedElement() const
{
	return _privilegedElement;
}

void UNIX_AuthorizedSubject::setPrivilegedElement(CIMInstance &value)
{
	_privilegedElement = value;
}


void UNIX_AuthorizedSubject::clearInstance()
{

	_privilege = CIMInstance(CIMName("CIM_AuthorizedPrivilege"));
	// _privilegedElement = CIMInstance(CIMName("CIM_ManagedElement"));

}

Boolean UNIX_AuthorizedSubject::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "Privilege"))
			{
				CIMInstance privilegeValue;
				property.getValue().get(privilegeValue);
				setPrivilege(privilegeValue);
			}
			else if (String::equal(property.getName().getString(), "PrivilegedElement"))
			{
				CIMInstance privilegedElementValue;
				property.getValue().get(privilegedElementValue);
				setPrivilegedElement(privilegedElementValue);
			}
	}
	return true;
}


Boolean UNIX_AuthorizedSubject::initialize()
{
	return false;
}

Boolean UNIX_AuthorizedSubject::load(int &pIndex)
{
	
	_privilege = CIMInstance(CIMName("CIM_AuthorizedPrivilege"));
	// _privilegedElement = CIMInstance(CIMName("CIM_ManagedElement"));
	
	return false;
}

Boolean UNIX_AuthorizedSubject::finalize()
{
	return false;
}


Boolean UNIX_AuthorizedSubject::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String privilegeKey;
	String privilegedElementKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_PRIVILEGE)) privilegeKey = kb.getValue();
		else if (keyName.equal(PROPERTY_PRIVILEGED_ELEMENT)) privilegedElementKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getPrivilege().getPath().toString(), privilegeKey)) && 
			(String::equalNoCase(getPrivilegedElement().getPath().toString(), privilegedElementKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_AuthorizedSubject::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AuthorizedSubject::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AuthorizedSubject::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AuthorizedSubject::validateInstance()
{
	return true;
}

