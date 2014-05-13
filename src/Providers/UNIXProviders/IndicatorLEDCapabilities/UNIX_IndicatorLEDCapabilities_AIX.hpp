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


UNIX_IndicatorLEDCapabilities::UNIX_IndicatorLEDCapabilities(void)
{
}

UNIX_IndicatorLEDCapabilities::~UNIX_IndicatorLEDCapabilities(void)
{
}

Boolean UNIX_IndicatorLEDCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_IndicatorLEDCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_IndicatorLEDCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_IndicatorLEDCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_IndicatorLEDCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_IndicatorLEDCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_IndicatorLEDCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_IndicatorLEDCapabilities::getDescription() const
{
	return _description;
}

void UNIX_IndicatorLEDCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_IndicatorLEDCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_IndicatorLEDCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_IndicatorLEDCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_IndicatorLEDCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_IndicatorLEDCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_IndicatorLEDCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_IndicatorLEDCapabilities::getElementNameEditSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME_EDIT_SUPPORTED, getElementNameEditSupported());
	return true;
}

Boolean UNIX_IndicatorLEDCapabilities::getElementNameEditSupported() const
{
	return _elementNameEditSupported;
}

void UNIX_IndicatorLEDCapabilities::setElementNameEditSupported(Boolean &value)
{
	_elementNameEditSupported = value;
}

Boolean UNIX_IndicatorLEDCapabilities::getMaxElementNameLen(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_ELEMENT_NAME_LEN, getMaxElementNameLen());
	return true;
}

Uint16 UNIX_IndicatorLEDCapabilities::getMaxElementNameLen() const
{
	return _maxElementNameLen;
}

void UNIX_IndicatorLEDCapabilities::setMaxElementNameLen(Uint16 &value)
{
	_maxElementNameLen = value;
}

Boolean UNIX_IndicatorLEDCapabilities::getRequestedStatesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATES_SUPPORTED, getRequestedStatesSupported());
	return true;
}

Array<Uint16> UNIX_IndicatorLEDCapabilities::getRequestedStatesSupported() const
{
	return _requestedStatesSupported;
}

void UNIX_IndicatorLEDCapabilities::setRequestedStatesSupported(Array<Uint16> &value)
{
	_requestedStatesSupported = value;
}

Boolean UNIX_IndicatorLEDCapabilities::getElementNameMask(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME_MASK, getElementNameMask());
	return true;
}

String UNIX_IndicatorLEDCapabilities::getElementNameMask() const
{
	return _elementNameMask;
}

void UNIX_IndicatorLEDCapabilities::setElementNameMask(String &value)
{
	_elementNameMask = value;
}

Boolean UNIX_IndicatorLEDCapabilities::getStateAwareness(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATE_AWARENESS, getStateAwareness());
	return true;
}

Array<Uint16> UNIX_IndicatorLEDCapabilities::getStateAwareness() const
{
	return _stateAwareness;
}

void UNIX_IndicatorLEDCapabilities::setStateAwareness(Array<Uint16> &value)
{
	_stateAwareness = value;
}

Boolean UNIX_IndicatorLEDCapabilities::getSupportedIndicatedConditions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_INDICATED_CONDITIONS, getSupportedIndicatedConditions());
	return true;
}

Array<Uint16> UNIX_IndicatorLEDCapabilities::getSupportedIndicatedConditions() const
{
	return _supportedIndicatedConditions;
}

void UNIX_IndicatorLEDCapabilities::setSupportedIndicatedConditions(Array<Uint16> &value)
{
	_supportedIndicatedConditions = value;
}

Boolean UNIX_IndicatorLEDCapabilities::getOtherSupportedIndicatedConditionDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SUPPORTED_INDICATED_CONDITION_DESCRIPTIONS, getOtherSupportedIndicatedConditionDescriptions());
	return true;
}

Array<String> UNIX_IndicatorLEDCapabilities::getOtherSupportedIndicatedConditionDescriptions() const
{
	return _otherSupportedIndicatedConditionDescriptions;
}

void UNIX_IndicatorLEDCapabilities::setOtherSupportedIndicatedConditionDescriptions(Array<String> &value)
{
	_otherSupportedIndicatedConditionDescriptions = value;
}

Boolean UNIX_IndicatorLEDCapabilities::getSupportedControlModes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_CONTROL_MODES, getSupportedControlModes());
	return true;
}

Array<Uint16> UNIX_IndicatorLEDCapabilities::getSupportedControlModes() const
{
	return _supportedControlModes;
}

void UNIX_IndicatorLEDCapabilities::setSupportedControlModes(Array<Uint16> &value)
{
	_supportedControlModes = value;
}

Boolean UNIX_IndicatorLEDCapabilities::getSupportedColors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_COLORS, getSupportedColors());
	return true;
}

Array<Uint16> UNIX_IndicatorLEDCapabilities::getSupportedColors() const
{
	return _supportedColors;
}

void UNIX_IndicatorLEDCapabilities::setSupportedColors(Array<Uint16> &value)
{
	_supportedColors = value;
}

Boolean UNIX_IndicatorLEDCapabilities::getOtherSupportedColorDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SUPPORTED_COLOR_DESCRIPTIONS, getOtherSupportedColorDescriptions());
	return true;
}

Array<String> UNIX_IndicatorLEDCapabilities::getOtherSupportedColorDescriptions() const
{
	return _otherSupportedColorDescriptions;
}

void UNIX_IndicatorLEDCapabilities::setOtherSupportedColorDescriptions(Array<String> &value)
{
	_otherSupportedColorDescriptions = value;
}

Boolean UNIX_IndicatorLEDCapabilities::getSupportedControlPatterns(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_CONTROL_PATTERNS, getSupportedControlPatterns());
	return true;
}

Array<String> UNIX_IndicatorLEDCapabilities::getSupportedControlPatterns() const
{
	return _supportedControlPatterns;
}

void UNIX_IndicatorLEDCapabilities::setSupportedControlPatterns(Array<String> &value)
{
	_supportedControlPatterns = value;
}

Boolean UNIX_IndicatorLEDCapabilities::getSupportedActivationStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_ACTIVATION_STATES, getSupportedActivationStates());
	return true;
}

Array<Uint16> UNIX_IndicatorLEDCapabilities::getSupportedActivationStates() const
{
	return _supportedActivationStates;
}

void UNIX_IndicatorLEDCapabilities::setSupportedActivationStates(Array<Uint16> &value)
{
	_supportedActivationStates = value;
}


void UNIX_IndicatorLEDCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("IndicatorLEDCapabilities");
	_generation = Uint64(0);
	_elementNameEditSupported = Boolean(false);
	_maxElementNameLen = Uint16(0);
	_requestedStatesSupported.clear();
	_elementNameMask = String ("");
	_stateAwareness.clear();
	_supportedIndicatedConditions.clear();
	_otherSupportedIndicatedConditionDescriptions.clear();
	_supportedControlModes.clear();
	_supportedColors.clear();
	_otherSupportedColorDescriptions.clear();
	_supportedControlPatterns.clear();
	_supportedActivationStates.clear();

}

Boolean UNIX_IndicatorLEDCapabilities::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "ElementNameEditSupported"))
			{
				Boolean elementNameEditSupportedValue;
				property.getValue().get(elementNameEditSupportedValue);
				setElementNameEditSupported(elementNameEditSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "MaxElementNameLen"))
			{
				Uint16 maxElementNameLenValue;
				property.getValue().get(maxElementNameLenValue);
				setMaxElementNameLen(maxElementNameLenValue);
			}
			else if (String::equal(property.getName().getString(), "RequestedStatesSupported"))
			{
				Array<Uint16> requestedStatesSupportedValue;
				property.getValue().get(requestedStatesSupportedValue);
				setRequestedStatesSupported(requestedStatesSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "ElementNameMask"))
			{
				String elementNameMaskValue;
				property.getValue().get(elementNameMaskValue);
				setElementNameMask(elementNameMaskValue);
			}
			else if (String::equal(property.getName().getString(), "StateAwareness"))
			{
				Array<Uint16> stateAwarenessValue;
				property.getValue().get(stateAwarenessValue);
				setStateAwareness(stateAwarenessValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedIndicatedConditions"))
			{
				Array<Uint16> supportedIndicatedConditionsValue;
				property.getValue().get(supportedIndicatedConditionsValue);
				setSupportedIndicatedConditions(supportedIndicatedConditionsValue);
			}
			else if (String::equal(property.getName().getString(), "OtherSupportedIndicatedConditionDescriptions"))
			{
				Array<String> otherSupportedIndicatedConditionDescriptionsValue;
				property.getValue().get(otherSupportedIndicatedConditionDescriptionsValue);
				setOtherSupportedIndicatedConditionDescriptions(otherSupportedIndicatedConditionDescriptionsValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedControlModes"))
			{
				Array<Uint16> supportedControlModesValue;
				property.getValue().get(supportedControlModesValue);
				setSupportedControlModes(supportedControlModesValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedColors"))
			{
				Array<Uint16> supportedColorsValue;
				property.getValue().get(supportedColorsValue);
				setSupportedColors(supportedColorsValue);
			}
			else if (String::equal(property.getName().getString(), "OtherSupportedColorDescriptions"))
			{
				Array<String> otherSupportedColorDescriptionsValue;
				property.getValue().get(otherSupportedColorDescriptionsValue);
				setOtherSupportedColorDescriptions(otherSupportedColorDescriptionsValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedControlPatterns"))
			{
				Array<String> supportedControlPatternsValue;
				property.getValue().get(supportedControlPatternsValue);
				setSupportedControlPatterns(supportedControlPatternsValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedActivationStates"))
			{
				Array<Uint16> supportedActivationStatesValue;
				property.getValue().get(supportedActivationStatesValue);
				setSupportedActivationStates(supportedActivationStatesValue);
			}
	}
	return true;
}

Uint16 UNIX_IndicatorLEDCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}


Boolean UNIX_IndicatorLEDCapabilities::initialize()
{
	return false;
}

Boolean UNIX_IndicatorLEDCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("IndicatorLEDCapabilities");
	_generation = Uint64(0);
	_elementNameEditSupported = Boolean(false);
	_maxElementNameLen = Uint16(0);
	_requestedStatesSupported.clear();
	_elementNameMask = String ("");
	_stateAwareness.clear();
	_supportedIndicatedConditions.clear();
	_otherSupportedIndicatedConditionDescriptions.clear();
	_supportedControlModes.clear();
	_supportedColors.clear();
	_otherSupportedColorDescriptions.clear();
	_supportedControlPatterns.clear();
	_supportedActivationStates.clear();
	
	return false;
}

Boolean UNIX_IndicatorLEDCapabilities::finalize()
{
	return false;
}


Boolean UNIX_IndicatorLEDCapabilities::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_IndicatorLEDCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IndicatorLEDCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IndicatorLEDCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IndicatorLEDCapabilities::validateInstance()
{
	return true;
}

