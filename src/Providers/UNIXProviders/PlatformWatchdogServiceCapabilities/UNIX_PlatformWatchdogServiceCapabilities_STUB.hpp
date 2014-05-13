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


UNIX_PlatformWatchdogServiceCapabilities::UNIX_PlatformWatchdogServiceCapabilities(void)
{
}

UNIX_PlatformWatchdogServiceCapabilities::~UNIX_PlatformWatchdogServiceCapabilities(void)
{
}

Boolean UNIX_PlatformWatchdogServiceCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_PlatformWatchdogServiceCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_PlatformWatchdogServiceCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_PlatformWatchdogServiceCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_PlatformWatchdogServiceCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_PlatformWatchdogServiceCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_PlatformWatchdogServiceCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_PlatformWatchdogServiceCapabilities::getDescription() const
{
	return _description;
}

void UNIX_PlatformWatchdogServiceCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_PlatformWatchdogServiceCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_PlatformWatchdogServiceCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_PlatformWatchdogServiceCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_PlatformWatchdogServiceCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_PlatformWatchdogServiceCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_PlatformWatchdogServiceCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_PlatformWatchdogServiceCapabilities::getElementNameEditSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME_EDIT_SUPPORTED, getElementNameEditSupported());
	return true;
}

Boolean UNIX_PlatformWatchdogServiceCapabilities::getElementNameEditSupported() const
{
	return _elementNameEditSupported;
}

void UNIX_PlatformWatchdogServiceCapabilities::setElementNameEditSupported(Boolean &value)
{
	_elementNameEditSupported = value;
}

Boolean UNIX_PlatformWatchdogServiceCapabilities::getMaxElementNameLen(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_ELEMENT_NAME_LEN, getMaxElementNameLen());
	return true;
}

Uint16 UNIX_PlatformWatchdogServiceCapabilities::getMaxElementNameLen() const
{
	return _maxElementNameLen;
}

void UNIX_PlatformWatchdogServiceCapabilities::setMaxElementNameLen(Uint16 &value)
{
	_maxElementNameLen = value;
}

Boolean UNIX_PlatformWatchdogServiceCapabilities::getRequestedStatesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATES_SUPPORTED, getRequestedStatesSupported());
	return true;
}

Array<Uint16> UNIX_PlatformWatchdogServiceCapabilities::getRequestedStatesSupported() const
{
	return _requestedStatesSupported;
}

void UNIX_PlatformWatchdogServiceCapabilities::setRequestedStatesSupported(Array<Uint16> &value)
{
	_requestedStatesSupported = value;
}

Boolean UNIX_PlatformWatchdogServiceCapabilities::getElementNameMask(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME_MASK, getElementNameMask());
	return true;
}

String UNIX_PlatformWatchdogServiceCapabilities::getElementNameMask() const
{
	return _elementNameMask;
}

void UNIX_PlatformWatchdogServiceCapabilities::setElementNameMask(String &value)
{
	_elementNameMask = value;
}

Boolean UNIX_PlatformWatchdogServiceCapabilities::getStateAwareness(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATE_AWARENESS, getStateAwareness());
	return true;
}

Array<Uint16> UNIX_PlatformWatchdogServiceCapabilities::getStateAwareness() const
{
	return _stateAwareness;
}

void UNIX_PlatformWatchdogServiceCapabilities::setStateAwareness(Array<Uint16> &value)
{
	_stateAwareness = value;
}

Boolean UNIX_PlatformWatchdogServiceCapabilities::getActionOnExpirationSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACTION_ON_EXPIRATION_SUPPORTED, getActionOnExpirationSupported());
	return true;
}

Array<Uint16> UNIX_PlatformWatchdogServiceCapabilities::getActionOnExpirationSupported() const
{
	return _actionOnExpirationSupported;
}

void UNIX_PlatformWatchdogServiceCapabilities::setActionOnExpirationSupported(Array<Uint16> &value)
{
	_actionOnExpirationSupported = value;
}

Boolean UNIX_PlatformWatchdogServiceCapabilities::getWatchdogTimerDataSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WATCHDOG_TIMER_DATA_SUPPORTED, getWatchdogTimerDataSupported());
	return true;
}

Array<Uint16> UNIX_PlatformWatchdogServiceCapabilities::getWatchdogTimerDataSupported() const
{
	return _watchdogTimerDataSupported;
}

void UNIX_PlatformWatchdogServiceCapabilities::setWatchdogTimerDataSupported(Array<Uint16> &value)
{
	_watchdogTimerDataSupported = value;
}

Boolean UNIX_PlatformWatchdogServiceCapabilities::getLastExpirationDataSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_EXPIRATION_DATA_SUPPORTED, getLastExpirationDataSupported());
	return true;
}

Array<Uint16> UNIX_PlatformWatchdogServiceCapabilities::getLastExpirationDataSupported() const
{
	return _lastExpirationDataSupported;
}

void UNIX_PlatformWatchdogServiceCapabilities::setLastExpirationDataSupported(Array<Uint16> &value)
{
	_lastExpirationDataSupported = value;
}


void UNIX_PlatformWatchdogServiceCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PlatformWatchdogServiceCapabilities");
	_generation = Uint64(0);
	_elementNameEditSupported = Boolean(false);
	_maxElementNameLen = Uint16(0);
	_requestedStatesSupported.clear();
	_elementNameMask = String ("");
	_stateAwareness.clear();
	_actionOnExpirationSupported.clear();
	_watchdogTimerDataSupported.clear();
	_lastExpirationDataSupported.clear();

}

Boolean UNIX_PlatformWatchdogServiceCapabilities::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "ActionOnExpirationSupported"))
			{
				Array<Uint16> actionOnExpirationSupportedValue;
				property.getValue().get(actionOnExpirationSupportedValue);
				setActionOnExpirationSupported(actionOnExpirationSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "WatchdogTimerDataSupported"))
			{
				Array<Uint16> watchdogTimerDataSupportedValue;
				property.getValue().get(watchdogTimerDataSupportedValue);
				setWatchdogTimerDataSupported(watchdogTimerDataSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "LastExpirationDataSupported"))
			{
				Array<Uint16> lastExpirationDataSupportedValue;
				property.getValue().get(lastExpirationDataSupportedValue);
				setLastExpirationDataSupported(lastExpirationDataSupportedValue);
			}
	}
	return true;
}

Uint16 UNIX_PlatformWatchdogServiceCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}


Boolean UNIX_PlatformWatchdogServiceCapabilities::initialize()
{
	return false;
}

Boolean UNIX_PlatformWatchdogServiceCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PlatformWatchdogServiceCapabilities");
	_generation = Uint64(0);
	_elementNameEditSupported = Boolean(false);
	_maxElementNameLen = Uint16(0);
	_requestedStatesSupported.clear();
	_elementNameMask = String ("");
	_stateAwareness.clear();
	_actionOnExpirationSupported.clear();
	_watchdogTimerDataSupported.clear();
	_lastExpirationDataSupported.clear();
	
	return false;
}

Boolean UNIX_PlatformWatchdogServiceCapabilities::finalize()
{
	return false;
}


Boolean UNIX_PlatformWatchdogServiceCapabilities::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_PlatformWatchdogServiceCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PlatformWatchdogServiceCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PlatformWatchdogServiceCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PlatformWatchdogServiceCapabilities::validateInstance()
{
	return true;
}

