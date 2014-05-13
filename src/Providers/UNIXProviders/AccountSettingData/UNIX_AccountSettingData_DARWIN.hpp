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


UNIX_AccountSettingData::UNIX_AccountSettingData(void)
{
}

UNIX_AccountSettingData::~UNIX_AccountSettingData(void)
{
}

Boolean UNIX_AccountSettingData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_AccountSettingData::getInstanceID() const
{
	return _instanceID;
}

void UNIX_AccountSettingData::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_AccountSettingData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_AccountSettingData::getCaption() const
{
	return _caption;
}

void UNIX_AccountSettingData::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_AccountSettingData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_AccountSettingData::getDescription() const
{
	return _description;
}

void UNIX_AccountSettingData::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_AccountSettingData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_AccountSettingData::getElementName() const
{
	return _elementName;
}

void UNIX_AccountSettingData::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_AccountSettingData::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_AccountSettingData::getGeneration() const
{
	return _generation;
}

void UNIX_AccountSettingData::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_AccountSettingData::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_AccountSettingData::getConfigurationName() const
{
	return _configurationName;
}

void UNIX_AccountSettingData::setConfigurationName(String &value)
{
	_configurationName = value;
}

Boolean UNIX_AccountSettingData::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_AccountSettingData::getChangeableType() const
{
	return _changeableType;
}

void UNIX_AccountSettingData::setChangeableType(Uint16 &value)
{
	_changeableType = value;
}

Boolean UNIX_AccountSettingData::getComponentSetting(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPONENT_SETTING, getComponentSetting());
	return true;
}

Array<String> UNIX_AccountSettingData::getComponentSetting() const
{
	return _componentSetting;
}

void UNIX_AccountSettingData::setComponentSetting(Array<String> &value)
{
	_componentSetting = value;
}

Boolean UNIX_AccountSettingData::getSoID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ID, getSoID());
	return true;
}

String UNIX_AccountSettingData::getSoID() const
{
	return _soID;
}

void UNIX_AccountSettingData::setSoID(String &value)
{
	_soID = value;
}

Boolean UNIX_AccountSettingData::getSoOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ORG_ID, getSoOrgID());
	return true;
}

String UNIX_AccountSettingData::getSoOrgID() const
{
	return _soOrgID;
}

void UNIX_AccountSettingData::setSoOrgID(String &value)
{
	_soOrgID = value;
}

Boolean UNIX_AccountSettingData::getComplexPasswordRulesEnforced(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPLEX_PASSWORD_RULES_ENFORCED, getComplexPasswordRulesEnforced());
	return true;
}

Array<Uint16> UNIX_AccountSettingData::getComplexPasswordRulesEnforced() const
{
	return _complexPasswordRulesEnforced;
}

void UNIX_AccountSettingData::setComplexPasswordRulesEnforced(Array<Uint16> &value)
{
	_complexPasswordRulesEnforced = value;
}

Boolean UNIX_AccountSettingData::getInactivityTimeout(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INACTIVITY_TIMEOUT, getInactivityTimeout());
	return true;
}

CIMDateTime UNIX_AccountSettingData::getInactivityTimeout() const
{
	return _inactivityTimeout;
}

void UNIX_AccountSettingData::setInactivityTimeout(CIMDateTime &value)
{
	_inactivityTimeout = value;
}

Boolean UNIX_AccountSettingData::getMaximumPasswordExpiration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAXIMUM_PASSWORD_EXPIRATION, getMaximumPasswordExpiration());
	return true;
}

CIMDateTime UNIX_AccountSettingData::getMaximumPasswordExpiration() const
{
	return _maximumPasswordExpiration;
}

void UNIX_AccountSettingData::setMaximumPasswordExpiration(CIMDateTime &value)
{
	_maximumPasswordExpiration = value;
}

Boolean UNIX_AccountSettingData::getMaximumSuccessiveLoginFailures(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAXIMUM_SUCCESSIVE_LOGIN_FAILURES, getMaximumSuccessiveLoginFailures());
	return true;
}

Uint16 UNIX_AccountSettingData::getMaximumSuccessiveLoginFailures() const
{
	return _maximumSuccessiveLoginFailures;
}

void UNIX_AccountSettingData::setMaximumSuccessiveLoginFailures(Uint16 &value)
{
	_maximumSuccessiveLoginFailures = value;
}

Boolean UNIX_AccountSettingData::getPasswordHistoryDepth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PASSWORD_HISTORY_DEPTH, getPasswordHistoryDepth());
	return true;
}

Uint16 UNIX_AccountSettingData::getPasswordHistoryDepth() const
{
	return _passwordHistoryDepth;
}

void UNIX_AccountSettingData::setPasswordHistoryDepth(Uint16 &value)
{
	_passwordHistoryDepth = value;
}


void UNIX_AccountSettingData::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("AccountSettingData");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_complexPasswordRulesEnforced.clear();
	_inactivityTimeout = CIMHelper::getCurrentTime();
	_maximumPasswordExpiration = CIMHelper::getCurrentTime();
	_maximumSuccessiveLoginFailures = Uint16(0);
	_passwordHistoryDepth = Uint16(0);

}

Boolean UNIX_AccountSettingData::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "ConfigurationName"))
			{
				String configurationNameValue;
				property.getValue().get(configurationNameValue);
				setConfigurationName(configurationNameValue);
			}
			else if (String::equal(property.getName().getString(), "ChangeableType"))
			{
				Uint16 changeableTypeValue;
				property.getValue().get(changeableTypeValue);
				setChangeableType(changeableTypeValue);
			}
			else if (String::equal(property.getName().getString(), "ComponentSetting"))
			{
				Array<String> componentSettingValue;
				property.getValue().get(componentSettingValue);
				setComponentSetting(componentSettingValue);
			}
			else if (String::equal(property.getName().getString(), "SoID"))
			{
				String soIDValue;
				property.getValue().get(soIDValue);
				setSoID(soIDValue);
			}
			else if (String::equal(property.getName().getString(), "SoOrgID"))
			{
				String soOrgIDValue;
				property.getValue().get(soOrgIDValue);
				setSoOrgID(soOrgIDValue);
			}
			else if (String::equal(property.getName().getString(), "ComplexPasswordRulesEnforced"))
			{
				Array<Uint16> complexPasswordRulesEnforcedValue;
				property.getValue().get(complexPasswordRulesEnforcedValue);
				setComplexPasswordRulesEnforced(complexPasswordRulesEnforcedValue);
			}
			else if (String::equal(property.getName().getString(), "InactivityTimeout"))
			{
				CIMDateTime inactivityTimeoutValue;
				property.getValue().get(inactivityTimeoutValue);
				setInactivityTimeout(inactivityTimeoutValue);
			}
			else if (String::equal(property.getName().getString(), "MaximumPasswordExpiration"))
			{
				CIMDateTime maximumPasswordExpirationValue;
				property.getValue().get(maximumPasswordExpirationValue);
				setMaximumPasswordExpiration(maximumPasswordExpirationValue);
			}
			else if (String::equal(property.getName().getString(), "MaximumSuccessiveLoginFailures"))
			{
				Uint16 maximumSuccessiveLoginFailuresValue;
				property.getValue().get(maximumSuccessiveLoginFailuresValue);
				setMaximumSuccessiveLoginFailures(maximumSuccessiveLoginFailuresValue);
			}
			else if (String::equal(property.getName().getString(), "PasswordHistoryDepth"))
			{
				Uint16 passwordHistoryDepthValue;
				property.getValue().get(passwordHistoryDepthValue);
				setPasswordHistoryDepth(passwordHistoryDepthValue);
			}
	}
	return true;
}


Boolean UNIX_AccountSettingData::initialize()
{
	return false;
}

Boolean UNIX_AccountSettingData::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("AccountSettingData");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_complexPasswordRulesEnforced.clear();
	_inactivityTimeout = CIMHelper::getCurrentTime();
	_maximumPasswordExpiration = CIMHelper::getCurrentTime();
	_maximumSuccessiveLoginFailures = Uint16(0);
	_passwordHistoryDepth = Uint16(0);
	
	return false;
}

Boolean UNIX_AccountSettingData::finalize()
{
	return false;
}


Boolean UNIX_AccountSettingData::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_AccountSettingData::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AccountSettingData::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AccountSettingData::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AccountSettingData::validateInstance()
{
	return true;
}

