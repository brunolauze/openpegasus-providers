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


UNIX_PowerManagementCapabilities::UNIX_PowerManagementCapabilities(void)
{
}

UNIX_PowerManagementCapabilities::~UNIX_PowerManagementCapabilities(void)
{
}

Boolean UNIX_PowerManagementCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_PowerManagementCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_PowerManagementCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_PowerManagementCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_PowerManagementCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_PowerManagementCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_PowerManagementCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_PowerManagementCapabilities::getDescription() const
{
	return _description;
}

void UNIX_PowerManagementCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_PowerManagementCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_PowerManagementCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_PowerManagementCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_PowerManagementCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_PowerManagementCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_PowerManagementCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_PowerManagementCapabilities::getPowerCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_CAPABILITIES, getPowerCapabilities());
	return true;
}

Array<Uint16> UNIX_PowerManagementCapabilities::getPowerCapabilities() const
{
	return _powerCapabilities;
}

void UNIX_PowerManagementCapabilities::setPowerCapabilities(Array<Uint16> &value)
{
	_powerCapabilities = value;
}

Boolean UNIX_PowerManagementCapabilities::getOtherPowerCapabilitiesDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_POWER_CAPABILITIES_DESCRIPTIONS, getOtherPowerCapabilitiesDescriptions());
	return true;
}

Array<String> UNIX_PowerManagementCapabilities::getOtherPowerCapabilitiesDescriptions() const
{
	return _otherPowerCapabilitiesDescriptions;
}

void UNIX_PowerManagementCapabilities::setOtherPowerCapabilitiesDescriptions(Array<String> &value)
{
	_otherPowerCapabilitiesDescriptions = value;
}

Boolean UNIX_PowerManagementCapabilities::getPowerStatesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_STATES_SUPPORTED, getPowerStatesSupported());
	return true;
}

Array<Uint16> UNIX_PowerManagementCapabilities::getPowerStatesSupported() const
{
	return _powerStatesSupported;
}

void UNIX_PowerManagementCapabilities::setPowerStatesSupported(Array<Uint16> &value)
{
	_powerStatesSupported = value;
}

Boolean UNIX_PowerManagementCapabilities::getPowerChangeCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_CHANGE_CAPABILITIES, getPowerChangeCapabilities());
	return true;
}

Array<Uint16> UNIX_PowerManagementCapabilities::getPowerChangeCapabilities() const
{
	return _powerChangeCapabilities;
}

void UNIX_PowerManagementCapabilities::setPowerChangeCapabilities(Array<Uint16> &value)
{
	_powerChangeCapabilities = value;
}

Boolean UNIX_PowerManagementCapabilities::getOtherPowerChangeCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_POWER_CHANGE_CAPABILITIES, getOtherPowerChangeCapabilities());
	return true;
}

String UNIX_PowerManagementCapabilities::getOtherPowerChangeCapabilities() const
{
	return _otherPowerChangeCapabilities;
}

void UNIX_PowerManagementCapabilities::setOtherPowerChangeCapabilities(String &value)
{
	_otherPowerChangeCapabilities = value;
}

Boolean UNIX_PowerManagementCapabilities::getRequestedPowerStatesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_POWER_STATES_SUPPORTED, getRequestedPowerStatesSupported());
	return true;
}

Array<Uint16> UNIX_PowerManagementCapabilities::getRequestedPowerStatesSupported() const
{
	return _requestedPowerStatesSupported;
}

void UNIX_PowerManagementCapabilities::setRequestedPowerStatesSupported(Array<Uint16> &value)
{
	_requestedPowerStatesSupported = value;
}


void UNIX_PowerManagementCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PowerManagementCapabilities");
	_generation = Uint64(0);
	_powerCapabilities.clear();
	_otherPowerCapabilitiesDescriptions.clear();
	_powerStatesSupported.clear();
	_powerChangeCapabilities.clear();
	_otherPowerChangeCapabilities = String ("");
	_requestedPowerStatesSupported.clear();

}

Boolean UNIX_PowerManagementCapabilities::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "PowerCapabilities"))
			{
				Array<Uint16> powerCapabilitiesValue;
				property.getValue().get(powerCapabilitiesValue);
				setPowerCapabilities(powerCapabilitiesValue);
			}
			else if (String::equal(property.getName().getString(), "OtherPowerCapabilitiesDescriptions"))
			{
				Array<String> otherPowerCapabilitiesDescriptionsValue;
				property.getValue().get(otherPowerCapabilitiesDescriptionsValue);
				setOtherPowerCapabilitiesDescriptions(otherPowerCapabilitiesDescriptionsValue);
			}
			else if (String::equal(property.getName().getString(), "PowerStatesSupported"))
			{
				Array<Uint16> powerStatesSupportedValue;
				property.getValue().get(powerStatesSupportedValue);
				setPowerStatesSupported(powerStatesSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "PowerChangeCapabilities"))
			{
				Array<Uint16> powerChangeCapabilitiesValue;
				property.getValue().get(powerChangeCapabilitiesValue);
				setPowerChangeCapabilities(powerChangeCapabilitiesValue);
			}
			else if (String::equal(property.getName().getString(), "OtherPowerChangeCapabilities"))
			{
				String otherPowerChangeCapabilitiesValue;
				property.getValue().get(otherPowerChangeCapabilitiesValue);
				setOtherPowerChangeCapabilities(otherPowerChangeCapabilitiesValue);
			}
			else if (String::equal(property.getName().getString(), "RequestedPowerStatesSupported"))
			{
				Array<Uint16> requestedPowerStatesSupportedValue;
				property.getValue().get(requestedPowerStatesSupportedValue);
				setRequestedPowerStatesSupported(requestedPowerStatesSupportedValue);
			}
	}
	return true;
}

Uint16 UNIX_PowerManagementCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}


Boolean UNIX_PowerManagementCapabilities::initialize()
{
	return false;
}

Boolean UNIX_PowerManagementCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PowerManagementCapabilities");
	_generation = Uint64(0);
	_powerCapabilities.clear();
	_otherPowerCapabilitiesDescriptions.clear();
	_powerStatesSupported.clear();
	_powerChangeCapabilities.clear();
	_otherPowerChangeCapabilities = String ("");
	_requestedPowerStatesSupported.clear();
	
	return false;
}

Boolean UNIX_PowerManagementCapabilities::finalize()
{
	return false;
}


Boolean UNIX_PowerManagementCapabilities::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_PowerManagementCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PowerManagementCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PowerManagementCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PowerManagementCapabilities::validateInstance()
{
	return true;
}

