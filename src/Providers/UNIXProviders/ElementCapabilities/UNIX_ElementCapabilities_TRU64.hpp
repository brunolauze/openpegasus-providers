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


UNIX_ElementCapabilities::UNIX_ElementCapabilities(void)
{
}

UNIX_ElementCapabilities::~UNIX_ElementCapabilities(void)
{
}

Boolean UNIX_ElementCapabilities::getManagedElement(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANAGED_ELEMENT, getManagedElement());
	return true;
}

CIMInstance UNIX_ElementCapabilities::getManagedElement() const
{
	return _managedElement;
}

void UNIX_ElementCapabilities::setManagedElement(CIMInstance &value)
{
	_managedElement = value;
}

Boolean UNIX_ElementCapabilities::getCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITIES, getCapabilities());
	return true;
}

CIMInstance UNIX_ElementCapabilities::getCapabilities() const
{
	return _capabilities;
}

void UNIX_ElementCapabilities::setCapabilities(CIMInstance &value)
{
	_capabilities = value;
}

Boolean UNIX_ElementCapabilities::getCharacteristics(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHARACTERISTICS, getCharacteristics());
	return true;
}

Array<Uint16> UNIX_ElementCapabilities::getCharacteristics() const
{
	return _characteristics;
}

void UNIX_ElementCapabilities::setCharacteristics(Array<Uint16> &value)
{
	_characteristics = value;
}


void UNIX_ElementCapabilities::clearInstance()
{

	// _managedElement = CIMInstance(CIMName("CIM_ManagedElement"));
	_capabilities = CIMInstance(CIMName("CIM_RedundancySetCapabilities"));
	_characteristics.clear();

}

Boolean UNIX_ElementCapabilities::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "ManagedElement"))
			{
				CIMInstance managedElementValue;
				property.getValue().get(managedElementValue);
				setManagedElement(managedElementValue);
			}
			else if (String::equal(property.getName().getString(), "Capabilities"))
			{
				CIMInstance capabilitiesValue;
				property.getValue().get(capabilitiesValue);
				setCapabilities(capabilitiesValue);
			}
			else if (String::equal(property.getName().getString(), "Characteristics"))
			{
				Array<Uint16> characteristicsValue;
				property.getValue().get(characteristicsValue);
				setCharacteristics(characteristicsValue);
			}
	}
	return true;
}


Boolean UNIX_ElementCapabilities::initialize()
{
	return false;
}

Boolean UNIX_ElementCapabilities::load(int &pIndex)
{
	
	// _managedElement = CIMInstance(CIMName("CIM_ManagedElement"));
	_capabilities = CIMInstance(CIMName("CIM_RedundancySetCapabilities"));
	_characteristics.clear();
	
	return false;
}

Boolean UNIX_ElementCapabilities::finalize()
{
	return false;
}


Boolean UNIX_ElementCapabilities::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String managedElementKey;
	String capabilitiesKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_MANAGED_ELEMENT)) managedElementKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CAPABILITIES)) capabilitiesKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getManagedElement().getPath().toString(), managedElementKey)) && 
			(String::equalNoCase(getCapabilities().getPath().toString(), capabilitiesKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_ElementCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ElementCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ElementCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ElementCapabilities::validateInstance()
{
	return true;
}

