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


UNIX_AccountCapabilities::UNIX_AccountCapabilities(void)
{
}

UNIX_AccountCapabilities::~UNIX_AccountCapabilities(void)
{
}

Boolean UNIX_AccountCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_AccountCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_AccountCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_AccountCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_AccountCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_AccountCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_AccountCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_AccountCapabilities::getDescription() const
{
	return _description;
}

void UNIX_AccountCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_AccountCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_AccountCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_AccountCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_AccountCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_AccountCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_AccountCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_AccountCapabilities::getElementNameEditSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME_EDIT_SUPPORTED, getElementNameEditSupported());
	return true;
}

Boolean UNIX_AccountCapabilities::getElementNameEditSupported() const
{
	return _elementNameEditSupported;
}

void UNIX_AccountCapabilities::setElementNameEditSupported(Boolean &value)
{
	_elementNameEditSupported = value;
}

Boolean UNIX_AccountCapabilities::getMaxElementNameLen(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_ELEMENT_NAME_LEN, getMaxElementNameLen());
	return true;
}

Uint16 UNIX_AccountCapabilities::getMaxElementNameLen() const
{
	return _maxElementNameLen;
}

void UNIX_AccountCapabilities::setMaxElementNameLen(Uint16 &value)
{
	_maxElementNameLen = value;
}

Boolean UNIX_AccountCapabilities::getRequestedStatesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATES_SUPPORTED, getRequestedStatesSupported());
	return true;
}

Array<Uint16> UNIX_AccountCapabilities::getRequestedStatesSupported() const
{
	return _requestedStatesSupported;
}

void UNIX_AccountCapabilities::setRequestedStatesSupported(Array<Uint16> &value)
{
	_requestedStatesSupported = value;
}

Boolean UNIX_AccountCapabilities::getElementNameMask(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME_MASK, getElementNameMask());
	return true;
}

String UNIX_AccountCapabilities::getElementNameMask() const
{
	return _elementNameMask;
}

void UNIX_AccountCapabilities::setElementNameMask(String &value)
{
	_elementNameMask = value;
}

Boolean UNIX_AccountCapabilities::getStateAwareness(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATE_AWARENESS, getStateAwareness());
	return true;
}

Array<Uint16> UNIX_AccountCapabilities::getStateAwareness() const
{
	return _stateAwareness;
}

void UNIX_AccountCapabilities::setStateAwareness(Array<Uint16> &value)
{
	_stateAwareness = value;
}

Boolean UNIX_AccountCapabilities::getPasswordHistory(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PASSWORD_HISTORY, getPasswordHistory());
	return true;
}

Uint16 UNIX_AccountCapabilities::getPasswordHistory() const
{
	return _passwordHistory;
}

void UNIX_AccountCapabilities::setPasswordHistory(Uint16 &value)
{
	_passwordHistory = value;
}

Boolean UNIX_AccountCapabilities::getMaximumPasswordAge(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAXIMUM_PASSWORD_AGE, getMaximumPasswordAge());
	return true;
}

CIMDateTime UNIX_AccountCapabilities::getMaximumPasswordAge() const
{
	return _maximumPasswordAge;
}

void UNIX_AccountCapabilities::setMaximumPasswordAge(CIMDateTime &value)
{
	_maximumPasswordAge = value;
}

Boolean UNIX_AccountCapabilities::getComplexPasswordRulesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPLEX_PASSWORD_RULES_SUPPORTED, getComplexPasswordRulesSupported());
	return true;
}

Array<Uint16> UNIX_AccountCapabilities::getComplexPasswordRulesSupported() const
{
	return _complexPasswordRulesSupported;
}

void UNIX_AccountCapabilities::setComplexPasswordRulesSupported(Array<Uint16> &value)
{
	_complexPasswordRulesSupported = value;
}

Boolean UNIX_AccountCapabilities::getDisableOnInactivity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DISABLE_ON_INACTIVITY, getDisableOnInactivity());
	return true;
}

Boolean UNIX_AccountCapabilities::getDisableOnInactivity() const
{
	return _disableOnInactivity;
}

void UNIX_AccountCapabilities::setDisableOnInactivity(Boolean &value)
{
	_disableOnInactivity = value;
}


void UNIX_AccountCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("AccountCapabilities");
	_generation = Uint64(0);
	_elementNameEditSupported = Boolean(false);
	_maxElementNameLen = Uint16(0);
	_requestedStatesSupported.clear();
	_elementNameMask = String ("");
	_stateAwareness.clear();
	_passwordHistory = Uint16(0);
	_maximumPasswordAge = CIMHelper::getCurrentTime();
	_complexPasswordRulesSupported.clear();
	_disableOnInactivity = Boolean(false);

}

Boolean UNIX_AccountCapabilities::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "PasswordHistory"))
			{
				Uint16 passwordHistoryValue;
				property.getValue().get(passwordHistoryValue);
				setPasswordHistory(passwordHistoryValue);
			}
			else if (String::equal(property.getName().getString(), "MaximumPasswordAge"))
			{
				CIMDateTime maximumPasswordAgeValue;
				property.getValue().get(maximumPasswordAgeValue);
				setMaximumPasswordAge(maximumPasswordAgeValue);
			}
			else if (String::equal(property.getName().getString(), "ComplexPasswordRulesSupported"))
			{
				Array<Uint16> complexPasswordRulesSupportedValue;
				property.getValue().get(complexPasswordRulesSupportedValue);
				setComplexPasswordRulesSupported(complexPasswordRulesSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "DisableOnInactivity"))
			{
				Boolean disableOnInactivityValue;
				property.getValue().get(disableOnInactivityValue);
				setDisableOnInactivity(disableOnInactivityValue);
			}
	}
	return true;
}

Uint16 UNIX_AccountCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}


Boolean UNIX_AccountCapabilities::initialize()
{
	return false;
}

Boolean UNIX_AccountCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("AccountCapabilities");
	_generation = Uint64(0);
	_elementNameEditSupported = Boolean(false);
	_maxElementNameLen = Uint16(0);
	_requestedStatesSupported.clear();
	_elementNameMask = String ("");
	_stateAwareness.clear();
	_passwordHistory = Uint16(0);
	_maximumPasswordAge = CIMHelper::getCurrentTime();
	_complexPasswordRulesSupported.clear();
	_disableOnInactivity = Boolean(false);
	
	return false;
}

Boolean UNIX_AccountCapabilities::finalize()
{
	return false;
}


Boolean UNIX_AccountCapabilities::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_AccountCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AccountCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AccountCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AccountCapabilities::validateInstance()
{
	return true;
}

