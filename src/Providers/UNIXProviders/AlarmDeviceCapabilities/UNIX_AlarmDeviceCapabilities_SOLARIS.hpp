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


UNIX_AlarmDeviceCapabilities::UNIX_AlarmDeviceCapabilities(void)
{
}

UNIX_AlarmDeviceCapabilities::~UNIX_AlarmDeviceCapabilities(void)
{
}

Boolean UNIX_AlarmDeviceCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_AlarmDeviceCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_AlarmDeviceCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_AlarmDeviceCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_AlarmDeviceCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_AlarmDeviceCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_AlarmDeviceCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_AlarmDeviceCapabilities::getDescription() const
{
	return _description;
}

void UNIX_AlarmDeviceCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_AlarmDeviceCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_AlarmDeviceCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_AlarmDeviceCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_AlarmDeviceCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_AlarmDeviceCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_AlarmDeviceCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_AlarmDeviceCapabilities::getElementNameEditSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME_EDIT_SUPPORTED, getElementNameEditSupported());
	return true;
}

Boolean UNIX_AlarmDeviceCapabilities::getElementNameEditSupported() const
{
	return _elementNameEditSupported;
}

void UNIX_AlarmDeviceCapabilities::setElementNameEditSupported(Boolean &value)
{
	_elementNameEditSupported = value;
}

Boolean UNIX_AlarmDeviceCapabilities::getMaxElementNameLen(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_ELEMENT_NAME_LEN, getMaxElementNameLen());
	return true;
}

Uint16 UNIX_AlarmDeviceCapabilities::getMaxElementNameLen() const
{
	return _maxElementNameLen;
}

void UNIX_AlarmDeviceCapabilities::setMaxElementNameLen(Uint16 &value)
{
	_maxElementNameLen = value;
}

Boolean UNIX_AlarmDeviceCapabilities::getRequestedStatesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATES_SUPPORTED, getRequestedStatesSupported());
	return true;
}

Array<Uint16> UNIX_AlarmDeviceCapabilities::getRequestedStatesSupported() const
{
	return _requestedStatesSupported;
}

void UNIX_AlarmDeviceCapabilities::setRequestedStatesSupported(Array<Uint16> &value)
{
	_requestedStatesSupported = value;
}

Boolean UNIX_AlarmDeviceCapabilities::getElementNameMask(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME_MASK, getElementNameMask());
	return true;
}

String UNIX_AlarmDeviceCapabilities::getElementNameMask() const
{
	return _elementNameMask;
}

void UNIX_AlarmDeviceCapabilities::setElementNameMask(String &value)
{
	_elementNameMask = value;
}

Boolean UNIX_AlarmDeviceCapabilities::getStateAwareness(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATE_AWARENESS, getStateAwareness());
	return true;
}

Array<Uint16> UNIX_AlarmDeviceCapabilities::getStateAwareness() const
{
	return _stateAwareness;
}

void UNIX_AlarmDeviceCapabilities::setStateAwareness(Array<Uint16> &value)
{
	_stateAwareness = value;
}

Boolean UNIX_AlarmDeviceCapabilities::getRequestedAlarmStatesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_ALARM_STATES_SUPPORTED, getRequestedAlarmStatesSupported());
	return true;
}

Array<Uint16> UNIX_AlarmDeviceCapabilities::getRequestedAlarmStatesSupported() const
{
	return _requestedAlarmStatesSupported;
}

void UNIX_AlarmDeviceCapabilities::setRequestedAlarmStatesSupported(Array<Uint16> &value)
{
	_requestedAlarmStatesSupported = value;
}

Boolean UNIX_AlarmDeviceCapabilities::getAlarmIndicatorTypesConfigurable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALARM_INDICATOR_TYPES_CONFIGURABLE, getAlarmIndicatorTypesConfigurable());
	return true;
}

Array<Uint16> UNIX_AlarmDeviceCapabilities::getAlarmIndicatorTypesConfigurable() const
{
	return _alarmIndicatorTypesConfigurable;
}

void UNIX_AlarmDeviceCapabilities::setAlarmIndicatorTypesConfigurable(Array<Uint16> &value)
{
	_alarmIndicatorTypesConfigurable = value;
}


void UNIX_AlarmDeviceCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("AlarmDeviceCapabilities");
	_generation = Uint64(0);
	_elementNameEditSupported = Boolean(false);
	_maxElementNameLen = Uint16(0);
	_requestedStatesSupported.clear();
	_elementNameMask = String ("");
	_stateAwareness.clear();
	_requestedAlarmStatesSupported.clear();
	_alarmIndicatorTypesConfigurable.clear();

}

Boolean UNIX_AlarmDeviceCapabilities::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "RequestedAlarmStatesSupported"))
			{
				Array<Uint16> requestedAlarmStatesSupportedValue;
				property.getValue().get(requestedAlarmStatesSupportedValue);
				setRequestedAlarmStatesSupported(requestedAlarmStatesSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "AlarmIndicatorTypesConfigurable"))
			{
				Array<Uint16> alarmIndicatorTypesConfigurableValue;
				property.getValue().get(alarmIndicatorTypesConfigurableValue);
				setAlarmIndicatorTypesConfigurable(alarmIndicatorTypesConfigurableValue);
			}
	}
	return true;
}

Uint16 UNIX_AlarmDeviceCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}


Boolean UNIX_AlarmDeviceCapabilities::initialize()
{
	return false;
}

Boolean UNIX_AlarmDeviceCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("AlarmDeviceCapabilities");
	_generation = Uint64(0);
	_elementNameEditSupported = Boolean(false);
	_maxElementNameLen = Uint16(0);
	_requestedStatesSupported.clear();
	_elementNameMask = String ("");
	_stateAwareness.clear();
	_requestedAlarmStatesSupported.clear();
	_alarmIndicatorTypesConfigurable.clear();
	
	return false;
}

Boolean UNIX_AlarmDeviceCapabilities::finalize()
{
	return false;
}


Boolean UNIX_AlarmDeviceCapabilities::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_AlarmDeviceCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AlarmDeviceCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AlarmDeviceCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AlarmDeviceCapabilities::validateInstance()
{
	return true;
}

