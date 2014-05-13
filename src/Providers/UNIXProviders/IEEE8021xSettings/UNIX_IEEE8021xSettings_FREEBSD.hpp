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


UNIX_IEEE8021xSettings::UNIX_IEEE8021xSettings(void)
{
}

UNIX_IEEE8021xSettings::~UNIX_IEEE8021xSettings(void)
{
}

Boolean UNIX_IEEE8021xSettings::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_IEEE8021xSettings::getInstanceID() const
{
	return _instanceID;
}

void UNIX_IEEE8021xSettings::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_IEEE8021xSettings::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_IEEE8021xSettings::getCaption() const
{
	return _caption;
}

void UNIX_IEEE8021xSettings::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_IEEE8021xSettings::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_IEEE8021xSettings::getDescription() const
{
	return _description;
}

void UNIX_IEEE8021xSettings::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_IEEE8021xSettings::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_IEEE8021xSettings::getElementName() const
{
	return _elementName;
}

void UNIX_IEEE8021xSettings::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_IEEE8021xSettings::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_IEEE8021xSettings::getGeneration() const
{
	return _generation;
}

void UNIX_IEEE8021xSettings::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_IEEE8021xSettings::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_IEEE8021xSettings::getConfigurationName() const
{
	return _configurationName;
}

void UNIX_IEEE8021xSettings::setConfigurationName(String &value)
{
	_configurationName = value;
}

Boolean UNIX_IEEE8021xSettings::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_IEEE8021xSettings::getChangeableType() const
{
	return _changeableType;
}

void UNIX_IEEE8021xSettings::setChangeableType(Uint16 &value)
{
	_changeableType = value;
}

Boolean UNIX_IEEE8021xSettings::getComponentSetting(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPONENT_SETTING, getComponentSetting());
	return true;
}

Array<String> UNIX_IEEE8021xSettings::getComponentSetting() const
{
	return _componentSetting;
}

void UNIX_IEEE8021xSettings::setComponentSetting(Array<String> &value)
{
	_componentSetting = value;
}

Boolean UNIX_IEEE8021xSettings::getSoID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ID, getSoID());
	return true;
}

String UNIX_IEEE8021xSettings::getSoID() const
{
	return _soID;
}

void UNIX_IEEE8021xSettings::setSoID(String &value)
{
	_soID = value;
}

Boolean UNIX_IEEE8021xSettings::getSoOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ORG_ID, getSoOrgID());
	return true;
}

String UNIX_IEEE8021xSettings::getSoOrgID() const
{
	return _soOrgID;
}

void UNIX_IEEE8021xSettings::setSoOrgID(String &value)
{
	_soOrgID = value;
}

Boolean UNIX_IEEE8021xSettings::getAuthenticationProtocol(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTHENTICATION_PROTOCOL, getAuthenticationProtocol());
	return true;
}

Uint16 UNIX_IEEE8021xSettings::getAuthenticationProtocol() const
{
	return _authenticationProtocol;
}

void UNIX_IEEE8021xSettings::setAuthenticationProtocol(Uint16 &value)
{
	_authenticationProtocol = value;
}

Boolean UNIX_IEEE8021xSettings::getRoamingIdentity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ROAMING_IDENTITY, getRoamingIdentity());
	return true;
}

String UNIX_IEEE8021xSettings::getRoamingIdentity() const
{
	return _roamingIdentity;
}

void UNIX_IEEE8021xSettings::setRoamingIdentity(String &value)
{
	_roamingIdentity = value;
}

Boolean UNIX_IEEE8021xSettings::getServerCertificateName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVER_CERTIFICATE_NAME, getServerCertificateName());
	return true;
}

String UNIX_IEEE8021xSettings::getServerCertificateName() const
{
	return _serverCertificateName;
}

void UNIX_IEEE8021xSettings::setServerCertificateName(String &value)
{
	_serverCertificateName = value;
}

Boolean UNIX_IEEE8021xSettings::getServerCertificateNameComparison(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVER_CERTIFICATE_NAME_COMPARISON, getServerCertificateNameComparison());
	return true;
}

Uint16 UNIX_IEEE8021xSettings::getServerCertificateNameComparison() const
{
	return _serverCertificateNameComparison;
}

void UNIX_IEEE8021xSettings::setServerCertificateNameComparison(Uint16 &value)
{
	_serverCertificateNameComparison = value;
}

Boolean UNIX_IEEE8021xSettings::getUsername(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USERNAME, getUsername());
	return true;
}

String UNIX_IEEE8021xSettings::getUsername() const
{
	return _username;
}

void UNIX_IEEE8021xSettings::setUsername(String &value)
{
	_username = value;
}

Boolean UNIX_IEEE8021xSettings::getPassword(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PASSWORD, getPassword());
	return true;
}

String UNIX_IEEE8021xSettings::getPassword() const
{
	return _password;
}

void UNIX_IEEE8021xSettings::setPassword(String &value)
{
	_password = value;
}

Boolean UNIX_IEEE8021xSettings::getDomain(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DOMAIN, getDomain());
	return true;
}

String UNIX_IEEE8021xSettings::getDomain() const
{
	return _domain;
}

void UNIX_IEEE8021xSettings::setDomain(String &value)
{
	_domain = value;
}

Boolean UNIX_IEEE8021xSettings::getProtectedAccessCredential(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTECTED_ACCESS_CREDENTIAL, getProtectedAccessCredential());
	return true;
}

Array<Uint8> UNIX_IEEE8021xSettings::getProtectedAccessCredential() const
{
	return _protectedAccessCredential;
}

void UNIX_IEEE8021xSettings::setProtectedAccessCredential(Array<Uint8> &value)
{
	_protectedAccessCredential = value;
}

Boolean UNIX_IEEE8021xSettings::getPACPassword(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_P_A_C_PASSWORD, getPACPassword());
	return true;
}

String UNIX_IEEE8021xSettings::getPACPassword() const
{
	return _pACPassword;
}

void UNIX_IEEE8021xSettings::setPACPassword(String &value)
{
	_pACPassword = value;
}

Boolean UNIX_IEEE8021xSettings::getPSK(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_P_S_K, getPSK());
	return true;
}

Array<Uint8> UNIX_IEEE8021xSettings::getPSK() const
{
	return _pSK;
}

void UNIX_IEEE8021xSettings::setPSK(Array<Uint8> &value)
{
	_pSK = value;
}


void UNIX_IEEE8021xSettings::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("IEEE8021xSettings");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_authenticationProtocol = Uint16(0);
	_roamingIdentity = String ("");
	_serverCertificateName = String ("");
	_serverCertificateNameComparison = Uint16(0);
	_username = String ("");
	_password = String ("");
	_domain = String ("");
	_protectedAccessCredential.clear();
	_pACPassword = String ("");
	_pSK.clear();

}

Boolean UNIX_IEEE8021xSettings::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "AuthenticationProtocol"))
			{
				Uint16 authenticationProtocolValue;
				property.getValue().get(authenticationProtocolValue);
				setAuthenticationProtocol(authenticationProtocolValue);
			}
			else if (String::equal(property.getName().getString(), "RoamingIdentity"))
			{
				String roamingIdentityValue;
				property.getValue().get(roamingIdentityValue);
				setRoamingIdentity(roamingIdentityValue);
			}
			else if (String::equal(property.getName().getString(), "ServerCertificateName"))
			{
				String serverCertificateNameValue;
				property.getValue().get(serverCertificateNameValue);
				setServerCertificateName(serverCertificateNameValue);
			}
			else if (String::equal(property.getName().getString(), "ServerCertificateNameComparison"))
			{
				Uint16 serverCertificateNameComparisonValue;
				property.getValue().get(serverCertificateNameComparisonValue);
				setServerCertificateNameComparison(serverCertificateNameComparisonValue);
			}
			else if (String::equal(property.getName().getString(), "Username"))
			{
				String usernameValue;
				property.getValue().get(usernameValue);
				setUsername(usernameValue);
			}
			else if (String::equal(property.getName().getString(), "Password"))
			{
				String passwordValue;
				property.getValue().get(passwordValue);
				setPassword(passwordValue);
			}
			else if (String::equal(property.getName().getString(), "Domain"))
			{
				String domainValue;
				property.getValue().get(domainValue);
				setDomain(domainValue);
			}
			else if (String::equal(property.getName().getString(), "ProtectedAccessCredential"))
			{
				Array<Uint8> protectedAccessCredentialValue;
				property.getValue().get(protectedAccessCredentialValue);
				setProtectedAccessCredential(protectedAccessCredentialValue);
			}
			else if (String::equal(property.getName().getString(), "PACPassword"))
			{
				String pACPasswordValue;
				property.getValue().get(pACPasswordValue);
				setPACPassword(pACPasswordValue);
			}
			else if (String::equal(property.getName().getString(), "PSK"))
			{
				Array<Uint8> pSKValue;
				property.getValue().get(pSKValue);
				setPSK(pSKValue);
			}
	}
	return true;
}


Boolean UNIX_IEEE8021xSettings::initialize()
{
	return false;
}

Boolean UNIX_IEEE8021xSettings::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("IEEE8021xSettings");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_authenticationProtocol = Uint16(0);
	_roamingIdentity = String ("");
	_serverCertificateName = String ("");
	_serverCertificateNameComparison = Uint16(0);
	_username = String ("");
	_password = String ("");
	_domain = String ("");
	_protectedAccessCredential.clear();
	_pACPassword = String ("");
	_pSK.clear();
	
	return false;
}

Boolean UNIX_IEEE8021xSettings::finalize()
{
	return false;
}


Boolean UNIX_IEEE8021xSettings::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_IEEE8021xSettings::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IEEE8021xSettings::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IEEE8021xSettings::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IEEE8021xSettings::validateInstance()
{
	return true;
}

