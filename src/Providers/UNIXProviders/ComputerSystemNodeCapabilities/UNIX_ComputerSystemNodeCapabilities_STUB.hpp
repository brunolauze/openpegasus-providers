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


UNIX_ComputerSystemNodeCapabilities::UNIX_ComputerSystemNodeCapabilities(void)
{
}

UNIX_ComputerSystemNodeCapabilities::~UNIX_ComputerSystemNodeCapabilities(void)
{
}

Boolean UNIX_ComputerSystemNodeCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_ComputerSystemNodeCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_ComputerSystemNodeCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_ComputerSystemNodeCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_ComputerSystemNodeCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_ComputerSystemNodeCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_ComputerSystemNodeCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_ComputerSystemNodeCapabilities::getDescription() const
{
	return _description;
}

void UNIX_ComputerSystemNodeCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_ComputerSystemNodeCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_ComputerSystemNodeCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_ComputerSystemNodeCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_ComputerSystemNodeCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_ComputerSystemNodeCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_ComputerSystemNodeCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_ComputerSystemNodeCapabilities::getBatterySupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BATTERY_SUPPORTED, getBatterySupported());
	return true;
}

Uint16 UNIX_ComputerSystemNodeCapabilities::getBatterySupported() const
{
	return _batterySupported;
}

void UNIX_ComputerSystemNodeCapabilities::setBatterySupported(Uint16 &value)
{
	_batterySupported = value;
}

Boolean UNIX_ComputerSystemNodeCapabilities::getECCSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_E_C_CSUPPORTED, getECCSupported());
	return true;
}

Uint16 UNIX_ComputerSystemNodeCapabilities::getECCSupported() const
{
	return _eCCSupported;
}

void UNIX_ComputerSystemNodeCapabilities::setECCSupported(Uint16 &value)
{
	_eCCSupported = value;
}


void UNIX_ComputerSystemNodeCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("ComputerSystemNodeCapabilities");
	_generation = Uint64(0);
	_batterySupported = Uint16(0);
	_eCCSupported = Uint16(0);

}

Boolean UNIX_ComputerSystemNodeCapabilities::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "InstanceID"))
			{
				String instanceIDValue;
				property.getValue().get(instanceIDValue);
				setInstanceID(instanceIDValue);
			}
			else if (String::equal(property.getName().getString(), "Caption"))
			{
				String captionValue;
				property.getValue().get(captionValue);
				setCaption(captionValue);
			}
			else if (String::equal(property.getName().getString(), "Description"))
			{
				String descriptionValue;
				property.getValue().get(descriptionValue);
				setDescription(descriptionValue);
			}
			else if (String::equal(property.getName().getString(), "ElementName"))
			{
				String elementNameValue;
				property.getValue().get(elementNameValue);
				setElementName(elementNameValue);
			}
			else if (String::equal(property.getName().getString(), "Generation"))
			{
				Uint64 generationValue;
				property.getValue().get(generationValue);
				setGeneration(generationValue);
			}
			else if (String::equal(property.getName().getString(), "BatterySupported"))
			{
				Uint16 batterySupportedValue;
				property.getValue().get(batterySupportedValue);
				setBatterySupported(batterySupportedValue);
			}
			else if (String::equal(property.getName().getString(), "ECCSupported"))
			{
				Uint16 eCCSupportedValue;
				property.getValue().get(eCCSupportedValue);
				setECCSupported(eCCSupportedValue);
			}
	}
	return true;
}

Uint16 UNIX_ComputerSystemNodeCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}


Boolean UNIX_ComputerSystemNodeCapabilities::initialize()
{
	return false;
}

Boolean UNIX_ComputerSystemNodeCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("ComputerSystemNodeCapabilities");
	_generation = Uint64(0);
	_batterySupported = Uint16(0);
	_eCCSupported = Uint16(0);
	
	return false;
}

Boolean UNIX_ComputerSystemNodeCapabilities::finalize()
{
	return false;
}


Boolean UNIX_ComputerSystemNodeCapabilities::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String instanceIDKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_INSTANCE_ID)) instanceIDKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getInstanceID(), instanceIDKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_ComputerSystemNodeCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ComputerSystemNodeCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ComputerSystemNodeCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ComputerSystemNodeCapabilities::validateInstance()
{
	return true;
}

