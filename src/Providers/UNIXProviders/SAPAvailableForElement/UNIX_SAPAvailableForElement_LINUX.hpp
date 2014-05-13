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


UNIX_SAPAvailableForElement::UNIX_SAPAvailableForElement(void)
{
}

UNIX_SAPAvailableForElement::~UNIX_SAPAvailableForElement(void)
{
}

Boolean UNIX_SAPAvailableForElement::getAvailableSAP(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_SAP, getAvailableSAP());
	return true;
}

CIMInstance UNIX_SAPAvailableForElement::getAvailableSAP() const
{
	return _availableSAP;
}

void UNIX_SAPAvailableForElement::setAvailableSAP(CIMInstance &value)
{
	_availableSAP = value;
}

Boolean UNIX_SAPAvailableForElement::getManagedElement(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANAGED_ELEMENT, getManagedElement());
	return true;
}

CIMInstance UNIX_SAPAvailableForElement::getManagedElement() const
{
	return _managedElement;
}

void UNIX_SAPAvailableForElement::setManagedElement(CIMInstance &value)
{
	_managedElement = value;
}


void UNIX_SAPAvailableForElement::clearInstance()
{

	_availableSAP = CIMInstance(CIMName("CIM_ClusteringSAP"));
	// _managedElement = CIMInstance(CIMName("CIM_ManagedElement"));

}

Boolean UNIX_SAPAvailableForElement::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "AvailableSAP"))
			{
				CIMInstance availableSAPValue;
				property.getValue().get(availableSAPValue);
				setAvailableSAP(availableSAPValue);
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


Boolean UNIX_SAPAvailableForElement::initialize()
{
	return false;
}

Boolean UNIX_SAPAvailableForElement::load(int &pIndex)
{
	
	_availableSAP = CIMInstance(CIMName("CIM_ClusteringSAP"));
	// _managedElement = CIMInstance(CIMName("CIM_ManagedElement"));
	
	return false;
}

Boolean UNIX_SAPAvailableForElement::finalize()
{
	return false;
}


Boolean UNIX_SAPAvailableForElement::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String availableSAPKey;
	String managedElementKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_AVAILABLE_SAP)) availableSAPKey = kb.getValue();
		else if (keyName.equal(PROPERTY_MANAGED_ELEMENT)) managedElementKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getAvailableSAP().getPath().toString(), availableSAPKey)) && 
			(String::equalNoCase(getManagedElement().getPath().toString(), managedElementKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_SAPAvailableForElement::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SAPAvailableForElement::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SAPAvailableForElement::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SAPAvailableForElement::validateInstance()
{
	return true;
}

