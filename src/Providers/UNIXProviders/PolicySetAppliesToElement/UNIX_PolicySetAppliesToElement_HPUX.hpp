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


UNIX_PolicySetAppliesToElement::UNIX_PolicySetAppliesToElement(void)
{
}

UNIX_PolicySetAppliesToElement::~UNIX_PolicySetAppliesToElement(void)
{
}

Boolean UNIX_PolicySetAppliesToElement::getPolicySet(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_SET, getPolicySet());
	return true;
}

CIMInstance UNIX_PolicySetAppliesToElement::getPolicySet() const
{
	return _policySet;
}

void UNIX_PolicySetAppliesToElement::setPolicySet(CIMInstance &value)
{
	_policySet = value;
}

Boolean UNIX_PolicySetAppliesToElement::getManagedElement(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANAGED_ELEMENT, getManagedElement());
	return true;
}

CIMInstance UNIX_PolicySetAppliesToElement::getManagedElement() const
{
	return _managedElement;
}

void UNIX_PolicySetAppliesToElement::setManagedElement(CIMInstance &value)
{
	_managedElement = value;
}


void UNIX_PolicySetAppliesToElement::clearInstance()
{

	_policySet = CIMInstance(CIMName("CIM_AccessControlPolicy"));
	// _managedElement = CIMInstance(CIMName("CIM_ManagedElement"));

}

Boolean UNIX_PolicySetAppliesToElement::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "PolicySet"))
			{
				CIMInstance policySetValue;
				property.getValue().get(policySetValue);
				setPolicySet(policySetValue);
			}
			else if (String::equal(property.getName().getString(), "ManagedElement"))
			{
				CIMInstance managedElementValue;
				property.getValue().get(managedElementValue);
				setManagedElement(managedElementValue);
			}
	}
	return true;
}


Boolean UNIX_PolicySetAppliesToElement::initialize()
{
	return false;
}

Boolean UNIX_PolicySetAppliesToElement::load(int &pIndex)
{
	
	_policySet = CIMInstance(CIMName("CIM_AccessControlPolicy"));
	// _managedElement = CIMInstance(CIMName("CIM_ManagedElement"));
	
	return false;
}

Boolean UNIX_PolicySetAppliesToElement::finalize()
{
	return false;
}


Boolean UNIX_PolicySetAppliesToElement::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String policySetKey;
	String managedElementKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_POLICY_SET)) policySetKey = kb.getValue();
		else if (keyName.equal(PROPERTY_MANAGED_ELEMENT)) managedElementKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getPolicySet().getPath().toString(), policySetKey)) && 
			(String::equalNoCase(getManagedElement().getPath().toString(), managedElementKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_PolicySetAppliesToElement::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PolicySetAppliesToElement::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PolicySetAppliesToElement::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PolicySetAppliesToElement::validateInstance()
{
	return true;
}

