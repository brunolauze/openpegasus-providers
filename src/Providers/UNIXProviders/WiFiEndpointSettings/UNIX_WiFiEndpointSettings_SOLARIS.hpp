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


UNIX_WiFiEndpointSettings::UNIX_WiFiEndpointSettings(void)
{
}

UNIX_WiFiEndpointSettings::~UNIX_WiFiEndpointSettings(void)
{
}

Boolean UNIX_WiFiEndpointSettings::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_WiFiEndpointSettings::getInstanceID() const
{
	return _instanceID;
}

void UNIX_WiFiEndpointSettings::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_WiFiEndpointSettings::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_WiFiEndpointSettings::getCaption() const
{
	return _caption;
}

void UNIX_WiFiEndpointSettings::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_WiFiEndpointSettings::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_WiFiEndpointSettings::getDescription() const
{
	return _description;
}

void UNIX_WiFiEndpointSettings::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_WiFiEndpointSettings::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_WiFiEndpointSettings::getElementName() const
{
	return _elementName;
}

void UNIX_WiFiEndpointSettings::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_WiFiEndpointSettings::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_WiFiEndpointSettings::getGeneration() const
{
	return _generation;
}

void UNIX_WiFiEndpointSettings::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_WiFiEndpointSettings::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_WiFiEndpointSettings::getConfigurationName() const
{
	return _configurationName;
}

void UNIX_WiFiEndpointSettings::setConfigurationName(String &value)
{
	_configurationName = value;
}

Boolean UNIX_WiFiEndpointSettings::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_WiFiEndpointSettings::getChangeableType() const
{
	return _changeableType;
}

void UNIX_WiFiEndpointSettings::setChangeableType(Uint16 &value)
{
	_changeableType = value;
}

Boolean UNIX_WiFiEndpointSettings::getComponentSetting(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPONENT_SETTING, getComponentSetting());
	return true;
}

Array<String> UNIX_WiFiEndpointSettings::getComponentSetting() const
{
	return _componentSetting;
}

void UNIX_WiFiEndpointSettings::setComponentSetting(Array<String> &value)
{
	_componentSetting = value;
}

Boolean UNIX_WiFiEndpointSettings::getSoID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ID, getSoID());
	return true;
}

String UNIX_WiFiEndpointSettings::getSoID() const
{
	return _soID;
}

void UNIX_WiFiEndpointSettings::setSoID(String &value)
{
	_soID = value;
}

Boolean UNIX_WiFiEndpointSettings::getSoOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ORG_ID, getSoOrgID());
	return true;
}

String UNIX_WiFiEndpointSettings::getSoOrgID() const
{
	return _soOrgID;
}

void UNIX_WiFiEndpointSettings::setSoOrgID(String &value)
{
	_soOrgID = value;
}

Boolean UNIX_WiFiEndpointSettings::getPriority(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIORITY, getPriority());
	return true;
}

Uint8 UNIX_WiFiEndpointSettings::getPriority() const
{
	return _priority;
}

void UNIX_WiFiEndpointSettings::setPriority(Uint8 &value)
{
	_priority = value;
}

Boolean UNIX_WiFiEndpointSettings::getSSID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_S_ID, getSSID());
	return true;
}

String UNIX_WiFiEndpointSettings::getSSID() const
{
	return _sSID;
}

void UNIX_WiFiEndpointSettings::setSSID(String &value)
{
	_sSID = value;
}

Boolean UNIX_WiFiEndpointSettings::getBSSType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_B_S_S_TYPE, getBSSType());
	return true;
}

Uint16 UNIX_WiFiEndpointSettings::getBSSType() const
{
	return _bSSType;
}

void UNIX_WiFiEndpointSettings::setBSSType(Uint16 &value)
{
	_bSSType = value;
}

Boolean UNIX_WiFiEndpointSettings::getEncryptionMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENCRYPTION_METHOD, getEncryptionMethod());
	return true;
}

Uint16 UNIX_WiFiEndpointSettings::getEncryptionMethod() const
{
	return _encryptionMethod;
}

void UNIX_WiFiEndpointSettings::setEncryptionMethod(Uint16 &value)
{
	_encryptionMethod = value;
}

Boolean UNIX_WiFiEndpointSettings::getOtherEncryptionMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENCRYPTION_METHOD, getOtherEncryptionMethod());
	return true;
}

String UNIX_WiFiEndpointSettings::getOtherEncryptionMethod() const
{
	return _otherEncryptionMethod;
}

void UNIX_WiFiEndpointSettings::setOtherEncryptionMethod(String &value)
{
	_otherEncryptionMethod = value;
}

Boolean UNIX_WiFiEndpointSettings::getAuthenticationMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTHENTICATION_METHOD, getAuthenticationMethod());
	return true;
}

Uint16 UNIX_WiFiEndpointSettings::getAuthenticationMethod() const
{
	return _authenticationMethod;
}

void UNIX_WiFiEndpointSettings::setAuthenticationMethod(Uint16 &value)
{
	_authenticationMethod = value;
}

Boolean UNIX_WiFiEndpointSettings::getOtherAuthenticationMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_AUTHENTICATION_METHOD, getOtherAuthenticationMethod());
	return true;
}

String UNIX_WiFiEndpointSettings::getOtherAuthenticationMethod() const
{
	return _otherAuthenticationMethod;
}

void UNIX_WiFiEndpointSettings::setOtherAuthenticationMethod(String &value)
{
	_otherAuthenticationMethod = value;
}

Boolean UNIX_WiFiEndpointSettings::getKeys(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_KEYS, getKeys());
	return true;
}

Array<String> UNIX_WiFiEndpointSettings::getKeys() const
{
	return _keys;
}

void UNIX_WiFiEndpointSettings::setKeys(Array<String> &value)
{
	_keys = value;
}

Boolean UNIX_WiFiEndpointSettings::getKeyIndex(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_KEY_INDEX, getKeyIndex());
	return true;
}

Uint8 UNIX_WiFiEndpointSettings::getKeyIndex() const
{
	return _keyIndex;
}

void UNIX_WiFiEndpointSettings::setKeyIndex(Uint8 &value)
{
	_keyIndex = value;
}

Boolean UNIX_WiFiEndpointSettings::getPSKValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_P_S_K_VALUE, getPSKValue());
	return true;
}

Array<Uint8> UNIX_WiFiEndpointSettings::getPSKValue() const
{
	return _pSKValue;
}

void UNIX_WiFiEndpointSettings::setPSKValue(Array<Uint8> &value)
{
	_pSKValue = value;
}

Boolean UNIX_WiFiEndpointSettings::getPSKPassPhrase(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_P_S_K_PASS_PHRASE, getPSKPassPhrase());
	return true;
}

String UNIX_WiFiEndpointSettings::getPSKPassPhrase() const
{
	return _pSKPassPhrase;
}

void UNIX_WiFiEndpointSettings::setPSKPassPhrase(String &value)
{
	_pSKPassPhrase = value;
}


void UNIX_WiFiEndpointSettings::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("WiFiEndpointSettings");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_priority = Uint8(0);
	_sSID = String ("");
	_bSSType = Uint16(0);
	_encryptionMethod = Uint16(0);
	_otherEncryptionMethod = String ("");
	_authenticationMethod = Uint16(0);
	_otherAuthenticationMethod = String ("");
	_keys.clear();
	_keyIndex = Uint8(0);
	_pSKValue.clear();
	_pSKPassPhrase = String ("");

}

Boolean UNIX_WiFiEndpointSettings::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "Priority"))
			{
				Uint8 priorityValue;
				property.getValue().get(priorityValue);
				setPriority(priorityValue);
			}
			else if (String::equal(property.getName().getString(), "SSID"))
			{
				String sSIDValue;
				property.getValue().get(sSIDValue);
				setSSID(sSIDValue);
			}
			else if (String::equal(property.getName().getString(), "BSSType"))
			{
				Uint16 bSSTypeValue;
				property.getValue().get(bSSTypeValue);
				setBSSType(bSSTypeValue);
			}
			else if (String::equal(property.getName().getString(), "EncryptionMethod"))
			{
				Uint16 encryptionMethodValue;
				property.getValue().get(encryptionMethodValue);
				setEncryptionMethod(encryptionMethodValue);
			}
			else if (String::equal(property.getName().getString(), "OtherEncryptionMethod"))
			{
				String otherEncryptionMethodValue;
				property.getValue().get(otherEncryptionMethodValue);
				setOtherEncryptionMethod(otherEncryptionMethodValue);
			}
			else if (String::equal(property.getName().getString(), "AuthenticationMethod"))
			{
				Uint16 authenticationMethodValue;
				property.getValue().get(authenticationMethodValue);
				setAuthenticationMethod(authenticationMethodValue);
			}
			else if (String::equal(property.getName().getString(), "OtherAuthenticationMethod"))
			{
				String otherAuthenticationMethodValue;
				property.getValue().get(otherAuthenticationMethodValue);
				setOtherAuthenticationMethod(otherAuthenticationMethodValue);
			}
			else if (String::equal(property.getName().getString(), "Keys"))
			{
				Array<String> keysValue;
				property.getValue().get(keysValue);
				setKeys(keysValue);
			}
			else if (String::equal(property.getName().getString(), "KeyIndex"))
			{
				Uint8 keyIndexValue;
				property.getValue().get(keyIndexValue);
				setKeyIndex(keyIndexValue);
			}
			else if (String::equal(property.getName().getString(), "PSKValue"))
			{
				Array<Uint8> pSKValueValue;
				property.getValue().get(pSKValueValue);
				setPSKValue(pSKValueValue);
			}
			else if (String::equal(property.getName().getString(), "PSKPassPhrase"))
			{
				String pSKPassPhraseValue;
				property.getValue().get(pSKPassPhraseValue);
				setPSKPassPhrase(pSKPassPhraseValue);
			}
	}
	return true;
}


Boolean UNIX_WiFiEndpointSettings::initialize()
{
	return false;
}

Boolean UNIX_WiFiEndpointSettings::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("WiFiEndpointSettings");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_priority = Uint8(0);
	_sSID = String ("");
	_bSSType = Uint16(0);
	_encryptionMethod = Uint16(0);
	_otherEncryptionMethod = String ("");
	_authenticationMethod = Uint16(0);
	_otherAuthenticationMethod = String ("");
	_keys.clear();
	_keyIndex = Uint8(0);
	_pSKValue.clear();
	_pSKPassPhrase = String ("");
	
	return false;
}

Boolean UNIX_WiFiEndpointSettings::finalize()
{
	return false;
}


Boolean UNIX_WiFiEndpointSettings::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_WiFiEndpointSettings::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_WiFiEndpointSettings::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_WiFiEndpointSettings::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_WiFiEndpointSettings::validateInstance()
{
	return true;
}

