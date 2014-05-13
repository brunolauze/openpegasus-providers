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


UNIX_DNSSettingData::UNIX_DNSSettingData(void)
{
}

UNIX_DNSSettingData::~UNIX_DNSSettingData(void)
{
}

Boolean UNIX_DNSSettingData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_DNSSettingData::getInstanceID() const
{
	return _instanceID;
}

void UNIX_DNSSettingData::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_DNSSettingData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_DNSSettingData::getCaption() const
{
	return _caption;
}

void UNIX_DNSSettingData::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_DNSSettingData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_DNSSettingData::getDescription() const
{
	return _description;
}

void UNIX_DNSSettingData::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_DNSSettingData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_DNSSettingData::getElementName() const
{
	return _elementName;
}

void UNIX_DNSSettingData::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_DNSSettingData::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_DNSSettingData::getGeneration() const
{
	return _generation;
}

void UNIX_DNSSettingData::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_DNSSettingData::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_DNSSettingData::getConfigurationName() const
{
	return _configurationName;
}

void UNIX_DNSSettingData::setConfigurationName(String &value)
{
	_configurationName = value;
}

Boolean UNIX_DNSSettingData::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_DNSSettingData::getChangeableType() const
{
	return _changeableType;
}

void UNIX_DNSSettingData::setChangeableType(Uint16 &value)
{
	_changeableType = value;
}

Boolean UNIX_DNSSettingData::getComponentSetting(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPONENT_SETTING, getComponentSetting());
	return true;
}

Array<String> UNIX_DNSSettingData::getComponentSetting() const
{
	return _componentSetting;
}

void UNIX_DNSSettingData::setComponentSetting(Array<String> &value)
{
	_componentSetting = value;
}

Boolean UNIX_DNSSettingData::getSoID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ID, getSoID());
	return true;
}

String UNIX_DNSSettingData::getSoID() const
{
	return _soID;
}

void UNIX_DNSSettingData::setSoID(String &value)
{
	_soID = value;
}

Boolean UNIX_DNSSettingData::getSoOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ORG_ID, getSoOrgID());
	return true;
}

String UNIX_DNSSettingData::getSoOrgID() const
{
	return _soOrgID;
}

void UNIX_DNSSettingData::setSoOrgID(String &value)
{
	_soOrgID = value;
}

Boolean UNIX_DNSSettingData::getAddressOrigin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESS_ORIGIN, getAddressOrigin());
	return true;
}

Uint16 UNIX_DNSSettingData::getAddressOrigin() const
{
	return _addressOrigin;
}

void UNIX_DNSSettingData::setAddressOrigin(Uint16 &value)
{
	_addressOrigin = value;
}

Boolean UNIX_DNSSettingData::getProtocolIFType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_I_F_TYPE, getProtocolIFType());
	return true;
}

Uint16 UNIX_DNSSettingData::getProtocolIFType() const
{
	return _protocolIFType;
}

void UNIX_DNSSettingData::setProtocolIFType(Uint16 &value)
{
	_protocolIFType = value;
}

Boolean UNIX_DNSSettingData::getAddressPrefixOrigin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESS_PREFIX_ORIGIN, getAddressPrefixOrigin());
	return true;
}

Uint16 UNIX_DNSSettingData::getAddressPrefixOrigin() const
{
	return _addressPrefixOrigin;
}

void UNIX_DNSSettingData::setAddressPrefixOrigin(Uint16 &value)
{
	_addressPrefixOrigin = value;
}

Boolean UNIX_DNSSettingData::getAddressSuffixOrigin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESS_SUFFIX_ORIGIN, getAddressSuffixOrigin());
	return true;
}

Uint16 UNIX_DNSSettingData::getAddressSuffixOrigin() const
{
	return _addressSuffixOrigin;
}

void UNIX_DNSSettingData::setAddressSuffixOrigin(Uint16 &value)
{
	_addressSuffixOrigin = value;
}

Boolean UNIX_DNSSettingData::getOtherAddressPrefixOriginDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ADDRESS_PREFIX_ORIGIN_DESCRIPTION, getOtherAddressPrefixOriginDescription());
	return true;
}

String UNIX_DNSSettingData::getOtherAddressPrefixOriginDescription() const
{
	return _otherAddressPrefixOriginDescription;
}

void UNIX_DNSSettingData::setOtherAddressPrefixOriginDescription(String &value)
{
	_otherAddressPrefixOriginDescription = value;
}

Boolean UNIX_DNSSettingData::getOtherAddressSuffixOriginDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ADDRESS_SUFFIX_ORIGIN_DESCRIPTION, getOtherAddressSuffixOriginDescription());
	return true;
}

String UNIX_DNSSettingData::getOtherAddressSuffixOriginDescription() const
{
	return _otherAddressSuffixOriginDescription;
}

void UNIX_DNSSettingData::setOtherAddressSuffixOriginDescription(String &value)
{
	_otherAddressSuffixOriginDescription = value;
}

Boolean UNIX_DNSSettingData::getDomainName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DOMAIN_NAME, getDomainName());
	return true;
}

String UNIX_DNSSettingData::getDomainName() const
{
	return _domainName;
}

void UNIX_DNSSettingData::setDomainName(String &value)
{
	_domainName = value;
}

Boolean UNIX_DNSSettingData::getRequestedHostname(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_HOSTNAME, getRequestedHostname());
	return true;
}

String UNIX_DNSSettingData::getRequestedHostname() const
{
	return _requestedHostname;
}

void UNIX_DNSSettingData::setRequestedHostname(String &value)
{
	_requestedHostname = value;
}

Boolean UNIX_DNSSettingData::getUseSuffixWhenRegistering(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USE_SUFFIX_WHEN_REGISTERING, getUseSuffixWhenRegistering());
	return true;
}

Boolean UNIX_DNSSettingData::getUseSuffixWhenRegistering() const
{
	return _useSuffixWhenRegistering;
}

void UNIX_DNSSettingData::setUseSuffixWhenRegistering(Boolean &value)
{
	_useSuffixWhenRegistering = value;
}

Boolean UNIX_DNSSettingData::getRegisterThisConnectionsAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REGISTER_THIS_CONNECTIONS_ADDRESS, getRegisterThisConnectionsAddress());
	return true;
}

Boolean UNIX_DNSSettingData::getRegisterThisConnectionsAddress() const
{
	return _registerThisConnectionsAddress;
}

void UNIX_DNSSettingData::setRegisterThisConnectionsAddress(Boolean &value)
{
	_registerThisConnectionsAddress = value;
}

Boolean UNIX_DNSSettingData::getDNSServerAddresses(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DNS_SERVER_ADDRESSES, getDNSServerAddresses());
	return true;
}

Array<String> UNIX_DNSSettingData::getDNSServerAddresses() const
{
	return _dNSServerAddresses;
}

void UNIX_DNSSettingData::setDNSServerAddresses(Array<String> &value)
{
	_dNSServerAddresses = value;
}

Boolean UNIX_DNSSettingData::getDHCPOptionsToUse(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DHCP_OPTIONS_TO_USE, getDHCPOptionsToUse());
	return true;
}

Array<Uint16> UNIX_DNSSettingData::getDHCPOptionsToUse() const
{
	return _dHCPOptionsToUse;
}

void UNIX_DNSSettingData::setDHCPOptionsToUse(Array<Uint16> &value)
{
	_dHCPOptionsToUse = value;
}


void UNIX_DNSSettingData::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("DNSSettingData");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_addressOrigin = Uint16(0);
	_protocolIFType = Uint16(0);
	_addressPrefixOrigin = Uint16(0);
	_addressSuffixOrigin = Uint16(0);
	_otherAddressPrefixOriginDescription = String ("");
	_otherAddressSuffixOriginDescription = String ("");
	_domainName = String ("");
	_requestedHostname = String ("");
	_useSuffixWhenRegistering = Boolean(false);
	_registerThisConnectionsAddress = Boolean(false);
	_dNSServerAddresses.clear();
	_dHCPOptionsToUse.clear();

}

Boolean UNIX_DNSSettingData::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "AddressOrigin"))
			{
				Uint16 addressOriginValue;
				property.getValue().get(addressOriginValue);
				setAddressOrigin(addressOriginValue);
			}
			else if (String::equal(property.getName().getString(), "ProtocolIFType"))
			{
				Uint16 protocolIFTypeValue;
				property.getValue().get(protocolIFTypeValue);
				setProtocolIFType(protocolIFTypeValue);
			}
			else if (String::equal(property.getName().getString(), "AddressPrefixOrigin"))
			{
				Uint16 addressPrefixOriginValue;
				property.getValue().get(addressPrefixOriginValue);
				setAddressPrefixOrigin(addressPrefixOriginValue);
			}
			else if (String::equal(property.getName().getString(), "AddressSuffixOrigin"))
			{
				Uint16 addressSuffixOriginValue;
				property.getValue().get(addressSuffixOriginValue);
				setAddressSuffixOrigin(addressSuffixOriginValue);
			}
			else if (String::equal(property.getName().getString(), "OtherAddressPrefixOriginDescription"))
			{
				String otherAddressPrefixOriginDescriptionValue;
				property.getValue().get(otherAddressPrefixOriginDescriptionValue);
				setOtherAddressPrefixOriginDescription(otherAddressPrefixOriginDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "OtherAddressSuffixOriginDescription"))
			{
				String otherAddressSuffixOriginDescriptionValue;
				property.getValue().get(otherAddressSuffixOriginDescriptionValue);
				setOtherAddressSuffixOriginDescription(otherAddressSuffixOriginDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "DomainName"))
			{
				String domainNameValue;
				property.getValue().get(domainNameValue);
				setDomainName(domainNameValue);
			}
			else if (String::equal(property.getName().getString(), "RequestedHostname"))
			{
				String requestedHostnameValue;
				property.getValue().get(requestedHostnameValue);
				setRequestedHostname(requestedHostnameValue);
			}
			else if (String::equal(property.getName().getString(), "UseSuffixWhenRegistering"))
			{
				Boolean useSuffixWhenRegisteringValue;
				property.getValue().get(useSuffixWhenRegisteringValue);
				setUseSuffixWhenRegistering(useSuffixWhenRegisteringValue);
			}
			else if (String::equal(property.getName().getString(), "RegisterThisConnectionsAddress"))
			{
				Boolean registerThisConnectionsAddressValue;
				property.getValue().get(registerThisConnectionsAddressValue);
				setRegisterThisConnectionsAddress(registerThisConnectionsAddressValue);
			}
			else if (String::equal(property.getName().getString(), "DNSServerAddresses"))
			{
				Array<String> dNSServerAddressesValue;
				property.getValue().get(dNSServerAddressesValue);
				setDNSServerAddresses(dNSServerAddressesValue);
			}
			else if (String::equal(property.getName().getString(), "DHCPOptionsToUse"))
			{
				Array<Uint16> dHCPOptionsToUseValue;
				property.getValue().get(dHCPOptionsToUseValue);
				setDHCPOptionsToUse(dHCPOptionsToUseValue);
			}
	}
	return true;
}


Boolean UNIX_DNSSettingData::initialize()
{
	return false;
}

Boolean UNIX_DNSSettingData::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("DNSSettingData");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_addressOrigin = Uint16(0);
	_protocolIFType = Uint16(0);
	_addressPrefixOrigin = Uint16(0);
	_addressSuffixOrigin = Uint16(0);
	_otherAddressPrefixOriginDescription = String ("");
	_otherAddressSuffixOriginDescription = String ("");
	_domainName = String ("");
	_requestedHostname = String ("");
	_useSuffixWhenRegistering = Boolean(false);
	_registerThisConnectionsAddress = Boolean(false);
	_dNSServerAddresses.clear();
	_dHCPOptionsToUse.clear();
	
	return false;
}

Boolean UNIX_DNSSettingData::finalize()
{
	return false;
}


Boolean UNIX_DNSSettingData::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_DNSSettingData::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DNSSettingData::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DNSSettingData::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DNSSettingData::validateInstance()
{
	return true;
}

