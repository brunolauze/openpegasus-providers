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


UNIX_CIFSSettingData::UNIX_CIFSSettingData(void)
{
}

UNIX_CIFSSettingData::~UNIX_CIFSSettingData(void)
{
}

Boolean UNIX_CIFSSettingData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_CIFSSettingData::getInstanceID() const
{
	return _instanceID;
}

void UNIX_CIFSSettingData::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_CIFSSettingData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_CIFSSettingData::getCaption() const
{
	return _caption;
}

void UNIX_CIFSSettingData::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_CIFSSettingData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_CIFSSettingData::getDescription() const
{
	return _description;
}

void UNIX_CIFSSettingData::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_CIFSSettingData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_CIFSSettingData::getElementName() const
{
	return _elementName;
}

void UNIX_CIFSSettingData::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_CIFSSettingData::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_CIFSSettingData::getGeneration() const
{
	return _generation;
}

void UNIX_CIFSSettingData::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_CIFSSettingData::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_CIFSSettingData::getConfigurationName() const
{
	return _configurationName;
}

void UNIX_CIFSSettingData::setConfigurationName(String &value)
{
	_configurationName = value;
}

Boolean UNIX_CIFSSettingData::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_CIFSSettingData::getChangeableType() const
{
	return _changeableType;
}

void UNIX_CIFSSettingData::setChangeableType(Uint16 &value)
{
	_changeableType = value;
}

Boolean UNIX_CIFSSettingData::getComponentSetting(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPONENT_SETTING, getComponentSetting());
	return true;
}

Array<String> UNIX_CIFSSettingData::getComponentSetting() const
{
	return _componentSetting;
}

void UNIX_CIFSSettingData::setComponentSetting(Array<String> &value)
{
	_componentSetting = value;
}

Boolean UNIX_CIFSSettingData::getSoID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ID, getSoID());
	return true;
}

String UNIX_CIFSSettingData::getSoID() const
{
	return _soID;
}

void UNIX_CIFSSettingData::setSoID(String &value)
{
	_soID = value;
}

Boolean UNIX_CIFSSettingData::getSoOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ORG_ID, getSoOrgID());
	return true;
}

String UNIX_CIFSSettingData::getSoOrgID() const
{
	return _soOrgID;
}

void UNIX_CIFSSettingData::setSoOrgID(String &value)
{
	_soOrgID = value;
}

Boolean UNIX_CIFSSettingData::getEnabled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED, getEnabled());
	return true;
}

Boolean UNIX_CIFSSettingData::getEnabled() const
{
	return _enabled;
}

void UNIX_CIFSSettingData::setEnabled(Boolean &value)
{
	_enabled = value;
}

Boolean UNIX_CIFSSettingData::getCharset(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHARSET, getCharset());
	return true;
}

Uint16 UNIX_CIFSSettingData::getCharset() const
{
	return _charset;
}

void UNIX_CIFSSettingData::setCharset(Uint16 &value)
{
	_charset = value;
}

Boolean UNIX_CIFSSettingData::getUseTCPOnly(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USE_TCP_ONLY, getUseTCPOnly());
	return true;
}

Boolean UNIX_CIFSSettingData::getUseTCPOnly() const
{
	return _useTCPOnly;
}

void UNIX_CIFSSettingData::setUseTCPOnly(Boolean &value)
{
	_useTCPOnly = value;
}

Boolean UNIX_CIFSSettingData::getNETBIOSName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_N_E_T_BIOS_NAME, getNETBIOSName());
	return true;
}

String UNIX_CIFSSettingData::getNETBIOSName() const
{
	return _nETBIOSName;
}

void UNIX_CIFSSettingData::setNETBIOSName(String &value)
{
	_nETBIOSName = value;
}

Boolean UNIX_CIFSSettingData::getWINSIP(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_W_I_N_S_IP, getWINSIP());
	return true;
}

Array<String> UNIX_CIFSSettingData::getWINSIP() const
{
	return _wINSIP;
}

void UNIX_CIFSSettingData::setWINSIP(Array<String> &value)
{
	_wINSIP = value;
}

Boolean UNIX_CIFSSettingData::getAuthenticationDomain(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTHENTICATION_DOMAIN, getAuthenticationDomain());
	return true;
}

String UNIX_CIFSSettingData::getAuthenticationDomain() const
{
	return _authenticationDomain;
}

void UNIX_CIFSSettingData::setAuthenticationDomain(String &value)
{
	_authenticationDomain = value;
}

Boolean UNIX_CIFSSettingData::getAuthenticationMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTHENTICATION_MODE, getAuthenticationMode());
	return true;
}

Uint8 UNIX_CIFSSettingData::getAuthenticationMode() const
{
	return _authenticationMode;
}

void UNIX_CIFSSettingData::setAuthenticationMode(Uint8 &value)
{
	_authenticationMode = value;
}

Boolean UNIX_CIFSSettingData::getUseKerberos(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USE_KERBEROS, getUseKerberos());
	return true;
}

Boolean UNIX_CIFSSettingData::getUseKerberos() const
{
	return _useKerberos;
}

void UNIX_CIFSSettingData::setUseKerberos(Boolean &value)
{
	_useKerberos = value;
}

Boolean UNIX_CIFSSettingData::getUseOpportunisticLocking(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USE_OPPORTUNISTIC_LOCKING, getUseOpportunisticLocking());
	return true;
}

Boolean UNIX_CIFSSettingData::getUseOpportunisticLocking() const
{
	return _useOpportunisticLocking;
}

void UNIX_CIFSSettingData::setUseOpportunisticLocking(Boolean &value)
{
	_useOpportunisticLocking = value;
}

Boolean UNIX_CIFSSettingData::getSMBSigningOnly(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_M_B_SIGNING_ONLY, getSMBSigningOnly());
	return true;
}

Boolean UNIX_CIFSSettingData::getSMBSigningOnly() const
{
	return _sMBSigningOnly;
}

void UNIX_CIFSSettingData::setSMBSigningOnly(Boolean &value)
{
	_sMBSigningOnly = value;
}

Boolean UNIX_CIFSSettingData::getClientsConnectAnonymously(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLIENTS_CONNECT_ANONYMOUSLY, getClientsConnectAnonymously());
	return true;
}

Boolean UNIX_CIFSSettingData::getClientsConnectAnonymously() const
{
	return _clientsConnectAnonymously;
}

void UNIX_CIFSSettingData::setClientsConnectAnonymously(Boolean &value)
{
	_clientsConnectAnonymously = value;
}

Boolean UNIX_CIFSSettingData::getJoinDomainAnonymously(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_JOIN_DOMAIN_ANONYMOUSLY, getJoinDomainAnonymously());
	return true;
}

Boolean UNIX_CIFSSettingData::getJoinDomainAnonymously() const
{
	return _joinDomainAnonymously;
}

void UNIX_CIFSSettingData::setJoinDomainAnonymously(Boolean &value)
{
	_joinDomainAnonymously = value;
}

Boolean UNIX_CIFSSettingData::getDomainControllerUser(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DOMAIN_CONTROLLER_USER, getDomainControllerUser());
	return true;
}

String UNIX_CIFSSettingData::getDomainControllerUser() const
{
	return _domainControllerUser;
}

void UNIX_CIFSSettingData::setDomainControllerUser(String &value)
{
	_domainControllerUser = value;
}

Boolean UNIX_CIFSSettingData::getDomainControllerPassword(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DOMAIN_CONTROLLER_PASSWORD, getDomainControllerPassword());
	return true;
}

String UNIX_CIFSSettingData::getDomainControllerPassword() const
{
	return _domainControllerPassword;
}

void UNIX_CIFSSettingData::setDomainControllerPassword(String &value)
{
	_domainControllerPassword = value;
}

Boolean UNIX_CIFSSettingData::getCIFSDomainController(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_C_I_FS_DOMAIN_CONTROLLER, getCIFSDomainController());
	return true;
}

String UNIX_CIFSSettingData::getCIFSDomainController() const
{
	return _cIFSDomainController;
}

void UNIX_CIFSSettingData::setCIFSDomainController(String &value)
{
	_cIFSDomainController = value;
}

Boolean UNIX_CIFSSettingData::getCASupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_C_A_SUPPORTED, getCASupported());
	return true;
}

Boolean UNIX_CIFSSettingData::getCASupported() const
{
	return _cASupported;
}

void UNIX_CIFSSettingData::setCASupported(Boolean &value)
{
	_cASupported = value;
}

Boolean UNIX_CIFSSettingData::getMultiChannelSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MULTI_CHANNEL_SUPPORTED, getMultiChannelSupported());
	return true;
}

Boolean UNIX_CIFSSettingData::getMultiChannelSupported() const
{
	return _multiChannelSupported;
}

void UNIX_CIFSSettingData::setMultiChannelSupported(Boolean &value)
{
	_multiChannelSupported = value;
}

Boolean UNIX_CIFSSettingData::getProtocolVersions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_VERSIONS, getProtocolVersions());
	return true;
}

Array<String> UNIX_CIFSSettingData::getProtocolVersions() const
{
	return _protocolVersions;
}

void UNIX_CIFSSettingData::setProtocolVersions(Array<String> &value)
{
	_protocolVersions = value;
}


void UNIX_CIFSSettingData::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("CIFSSettingData");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_enabled = Boolean(false);
	_charset = Uint16(0);
	_useTCPOnly = Boolean(false);
	_nETBIOSName = String ("");
	_wINSIP.clear();
	_authenticationDomain = String ("");
	_authenticationMode = Uint8(0);
	_useKerberos = Boolean(false);
	_useOpportunisticLocking = Boolean(false);
	_sMBSigningOnly = Boolean(false);
	_clientsConnectAnonymously = Boolean(false);
	_joinDomainAnonymously = Boolean(false);
	_domainControllerUser = String ("");
	_domainControllerPassword = String ("");
	_cIFSDomainController = String ("");
	_cASupported = Boolean(false);
	_multiChannelSupported = Boolean(false);
	_protocolVersions.clear();

}

Boolean UNIX_CIFSSettingData::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "Enabled"))
			{
				Boolean enabledValue;
				property.getValue().get(enabledValue);
				setEnabled(enabledValue);
			}
			else if (String::equal(property.getName().getString(), "Charset"))
			{
				Uint16 charsetValue;
				property.getValue().get(charsetValue);
				setCharset(charsetValue);
			}
			else if (String::equal(property.getName().getString(), "UseTCPOnly"))
			{
				Boolean useTCPOnlyValue;
				property.getValue().get(useTCPOnlyValue);
				setUseTCPOnly(useTCPOnlyValue);
			}
			else if (String::equal(property.getName().getString(), "NETBIOSName"))
			{
				String nETBIOSNameValue;
				property.getValue().get(nETBIOSNameValue);
				setNETBIOSName(nETBIOSNameValue);
			}
			else if (String::equal(property.getName().getString(), "WINSIP"))
			{
				Array<String> wINSIPValue;
				property.getValue().get(wINSIPValue);
				setWINSIP(wINSIPValue);
			}
			else if (String::equal(property.getName().getString(), "AuthenticationDomain"))
			{
				String authenticationDomainValue;
				property.getValue().get(authenticationDomainValue);
				setAuthenticationDomain(authenticationDomainValue);
			}
			else if (String::equal(property.getName().getString(), "AuthenticationMode"))
			{
				Uint8 authenticationModeValue;
				property.getValue().get(authenticationModeValue);
				setAuthenticationMode(authenticationModeValue);
			}
			else if (String::equal(property.getName().getString(), "UseKerberos"))
			{
				Boolean useKerberosValue;
				property.getValue().get(useKerberosValue);
				setUseKerberos(useKerberosValue);
			}
			else if (String::equal(property.getName().getString(), "UseOpportunisticLocking"))
			{
				Boolean useOpportunisticLockingValue;
				property.getValue().get(useOpportunisticLockingValue);
				setUseOpportunisticLocking(useOpportunisticLockingValue);
			}
			else if (String::equal(property.getName().getString(), "SMBSigningOnly"))
			{
				Boolean sMBSigningOnlyValue;
				property.getValue().get(sMBSigningOnlyValue);
				setSMBSigningOnly(sMBSigningOnlyValue);
			}
			else if (String::equal(property.getName().getString(), "ClientsConnectAnonymously"))
			{
				Boolean clientsConnectAnonymouslyValue;
				property.getValue().get(clientsConnectAnonymouslyValue);
				setClientsConnectAnonymously(clientsConnectAnonymouslyValue);
			}
			else if (String::equal(property.getName().getString(), "JoinDomainAnonymously"))
			{
				Boolean joinDomainAnonymouslyValue;
				property.getValue().get(joinDomainAnonymouslyValue);
				setJoinDomainAnonymously(joinDomainAnonymouslyValue);
			}
			else if (String::equal(property.getName().getString(), "DomainControllerUser"))
			{
				String domainControllerUserValue;
				property.getValue().get(domainControllerUserValue);
				setDomainControllerUser(domainControllerUserValue);
			}
			else if (String::equal(property.getName().getString(), "DomainControllerPassword"))
			{
				String domainControllerPasswordValue;
				property.getValue().get(domainControllerPasswordValue);
				setDomainControllerPassword(domainControllerPasswordValue);
			}
			else if (String::equal(property.getName().getString(), "CIFSDomainController"))
			{
				String cIFSDomainControllerValue;
				property.getValue().get(cIFSDomainControllerValue);
				setCIFSDomainController(cIFSDomainControllerValue);
			}
			else if (String::equal(property.getName().getString(), "CASupported"))
			{
				Boolean cASupportedValue;
				property.getValue().get(cASupportedValue);
				setCASupported(cASupportedValue);
			}
			else if (String::equal(property.getName().getString(), "MultiChannelSupported"))
			{
				Boolean multiChannelSupportedValue;
				property.getValue().get(multiChannelSupportedValue);
				setMultiChannelSupported(multiChannelSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "ProtocolVersions"))
			{
				Array<String> protocolVersionsValue;
				property.getValue().get(protocolVersionsValue);
				setProtocolVersions(protocolVersionsValue);
			}
	}
	return true;
}


Boolean UNIX_CIFSSettingData::initialize()
{
	return false;
}

Boolean UNIX_CIFSSettingData::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("CIFSSettingData");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_enabled = Boolean(false);
	_charset = Uint16(0);
	_useTCPOnly = Boolean(false);
	_nETBIOSName = String ("");
	_wINSIP.clear();
	_authenticationDomain = String ("");
	_authenticationMode = Uint8(0);
	_useKerberos = Boolean(false);
	_useOpportunisticLocking = Boolean(false);
	_sMBSigningOnly = Boolean(false);
	_clientsConnectAnonymously = Boolean(false);
	_joinDomainAnonymously = Boolean(false);
	_domainControllerUser = String ("");
	_domainControllerPassword = String ("");
	_cIFSDomainController = String ("");
	_cASupported = Boolean(false);
	_multiChannelSupported = Boolean(false);
	_protocolVersions.clear();
	
	return false;
}

Boolean UNIX_CIFSSettingData::finalize()
{
	return false;
}


Boolean UNIX_CIFSSettingData::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_CIFSSettingData::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_CIFSSettingData::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_CIFSSettingData::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_CIFSSettingData::validateInstance()
{
	return true;
}

