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


UNIX_DHCPSettingData::UNIX_DHCPSettingData(void)
{
}

UNIX_DHCPSettingData::~UNIX_DHCPSettingData(void)
{
}

Boolean UNIX_DHCPSettingData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_DHCPSettingData::getInstanceID() const
{
	return _instanceID;
}

void UNIX_DHCPSettingData::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_DHCPSettingData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_DHCPSettingData::getCaption() const
{
	return _caption;
}

void UNIX_DHCPSettingData::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_DHCPSettingData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_DHCPSettingData::getDescription() const
{
	return _description;
}

void UNIX_DHCPSettingData::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_DHCPSettingData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_DHCPSettingData::getElementName() const
{
	return _elementName;
}

void UNIX_DHCPSettingData::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_DHCPSettingData::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_DHCPSettingData::getGeneration() const
{
	return _generation;
}

void UNIX_DHCPSettingData::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_DHCPSettingData::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_DHCPSettingData::getConfigurationName() const
{
	return _configurationName;
}

void UNIX_DHCPSettingData::setConfigurationName(String &value)
{
	_configurationName = value;
}

Boolean UNIX_DHCPSettingData::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_DHCPSettingData::getChangeableType() const
{
	return _changeableType;
}

void UNIX_DHCPSettingData::setChangeableType(Uint16 &value)
{
	_changeableType = value;
}

Boolean UNIX_DHCPSettingData::getComponentSetting(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPONENT_SETTING, getComponentSetting());
	return true;
}

Array<String> UNIX_DHCPSettingData::getComponentSetting() const
{
	return _componentSetting;
}

void UNIX_DHCPSettingData::setComponentSetting(Array<String> &value)
{
	_componentSetting = value;
}

Boolean UNIX_DHCPSettingData::getSoID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ID, getSoID());
	return true;
}

String UNIX_DHCPSettingData::getSoID() const
{
	return _soID;
}

void UNIX_DHCPSettingData::setSoID(String &value)
{
	_soID = value;
}

Boolean UNIX_DHCPSettingData::getSoOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ORG_ID, getSoOrgID());
	return true;
}

String UNIX_DHCPSettingData::getSoOrgID() const
{
	return _soOrgID;
}

void UNIX_DHCPSettingData::setSoOrgID(String &value)
{
	_soOrgID = value;
}

Boolean UNIX_DHCPSettingData::getAddressOrigin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESS_ORIGIN, getAddressOrigin());
	return true;
}

Uint16 UNIX_DHCPSettingData::getAddressOrigin() const
{
	return _addressOrigin;
}

void UNIX_DHCPSettingData::setAddressOrigin(Uint16 &value)
{
	_addressOrigin = value;
}

Boolean UNIX_DHCPSettingData::getProtocolIFType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_I_F_TYPE, getProtocolIFType());
	return true;
}

Uint16 UNIX_DHCPSettingData::getProtocolIFType() const
{
	return _protocolIFType;
}

void UNIX_DHCPSettingData::setProtocolIFType(Uint16 &value)
{
	_protocolIFType = value;
}

Boolean UNIX_DHCPSettingData::getAddressPrefixOrigin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESS_PREFIX_ORIGIN, getAddressPrefixOrigin());
	return true;
}

Uint16 UNIX_DHCPSettingData::getAddressPrefixOrigin() const
{
	return _addressPrefixOrigin;
}

void UNIX_DHCPSettingData::setAddressPrefixOrigin(Uint16 &value)
{
	_addressPrefixOrigin = value;
}

Boolean UNIX_DHCPSettingData::getAddressSuffixOrigin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESS_SUFFIX_ORIGIN, getAddressSuffixOrigin());
	return true;
}

Uint16 UNIX_DHCPSettingData::getAddressSuffixOrigin() const
{
	return _addressSuffixOrigin;
}

void UNIX_DHCPSettingData::setAddressSuffixOrigin(Uint16 &value)
{
	_addressSuffixOrigin = value;
}

Boolean UNIX_DHCPSettingData::getOtherAddressPrefixOriginDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ADDRESS_PREFIX_ORIGIN_DESCRIPTION, getOtherAddressPrefixOriginDescription());
	return true;
}

String UNIX_DHCPSettingData::getOtherAddressPrefixOriginDescription() const
{
	return _otherAddressPrefixOriginDescription;
}

void UNIX_DHCPSettingData::setOtherAddressPrefixOriginDescription(String &value)
{
	_otherAddressPrefixOriginDescription = value;
}

Boolean UNIX_DHCPSettingData::getOtherAddressSuffixOriginDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ADDRESS_SUFFIX_ORIGIN_DESCRIPTION, getOtherAddressSuffixOriginDescription());
	return true;
}

String UNIX_DHCPSettingData::getOtherAddressSuffixOriginDescription() const
{
	return _otherAddressSuffixOriginDescription;
}

void UNIX_DHCPSettingData::setOtherAddressSuffixOriginDescription(String &value)
{
	_otherAddressSuffixOriginDescription = value;
}

Boolean UNIX_DHCPSettingData::getRequestedIPv4Address(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_IPV_4_ADDRESS, getRequestedIPv4Address());
	return true;
}

String UNIX_DHCPSettingData::getRequestedIPv4Address() const
{
	return _requestedIPv4Address;
}

void UNIX_DHCPSettingData::setRequestedIPv4Address(String &value)
{
	_requestedIPv4Address = value;
}

Boolean UNIX_DHCPSettingData::getRequestedLeaseTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_LEASE_TIME, getRequestedLeaseTime());
	return true;
}

Uint32 UNIX_DHCPSettingData::getRequestedLeaseTime() const
{
	return _requestedLeaseTime;
}

void UNIX_DHCPSettingData::setRequestedLeaseTime(Uint32 &value)
{
	_requestedLeaseTime = value;
}

Boolean UNIX_DHCPSettingData::getClientIdentifier(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLIENT_IDENTIFIER, getClientIdentifier());
	return true;
}

String UNIX_DHCPSettingData::getClientIdentifier() const
{
	return _clientIdentifier;
}

void UNIX_DHCPSettingData::setClientIdentifier(String &value)
{
	_clientIdentifier = value;
}

Boolean UNIX_DHCPSettingData::getVendorClassIdentifier(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR_CLASS_IDENTIFIER, getVendorClassIdentifier());
	return true;
}

String UNIX_DHCPSettingData::getVendorClassIdentifier() const
{
	return _vendorClassIdentifier;
}

void UNIX_DHCPSettingData::setVendorClassIdentifier(String &value)
{
	_vendorClassIdentifier = value;
}

Boolean UNIX_DHCPSettingData::getRequestedOptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_OPTIONS, getRequestedOptions());
	return true;
}

Array<Uint16> UNIX_DHCPSettingData::getRequestedOptions() const
{
	return _requestedOptions;
}

void UNIX_DHCPSettingData::setRequestedOptions(Array<Uint16> &value)
{
	_requestedOptions = value;
}

Boolean UNIX_DHCPSettingData::getRequiredOptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUIRED_OPTIONS, getRequiredOptions());
	return true;
}

Array<Uint16> UNIX_DHCPSettingData::getRequiredOptions() const
{
	return _requiredOptions;
}

void UNIX_DHCPSettingData::setRequiredOptions(Array<Uint16> &value)
{
	_requiredOptions = value;
}

Boolean UNIX_DHCPSettingData::getIPv6RequestedOptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IPV_6_REQUESTED_OPTIONS, getIPv6RequestedOptions());
	return true;
}

Array<Uint16> UNIX_DHCPSettingData::getIPv6RequestedOptions() const
{
	return _iPv6RequestedOptions;
}

void UNIX_DHCPSettingData::setIPv6RequestedOptions(Array<Uint16> &value)
{
	_iPv6RequestedOptions = value;
}

Boolean UNIX_DHCPSettingData::getIPv6RequiredOptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IPV_6_REQUIRED_OPTIONS, getIPv6RequiredOptions());
	return true;
}

Array<Uint16> UNIX_DHCPSettingData::getIPv6RequiredOptions() const
{
	return _iPv6RequiredOptions;
}

void UNIX_DHCPSettingData::setIPv6RequiredOptions(Array<Uint16> &value)
{
	_iPv6RequiredOptions = value;
}

Boolean UNIX_DHCPSettingData::getRequestedIPv6Address(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_IPV_6_ADDRESS, getRequestedIPv6Address());
	return true;
}

String UNIX_DHCPSettingData::getRequestedIPv6Address() const
{
	return _requestedIPv6Address;
}

void UNIX_DHCPSettingData::setRequestedIPv6Address(String &value)
{
	_requestedIPv6Address = value;
}


void UNIX_DHCPSettingData::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("DHCPSettingData");
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
	_requestedIPv4Address = String ("");
	_requestedLeaseTime = Uint32(0);
	_clientIdentifier = String ("");
	_vendorClassIdentifier = String ("");
	_requestedOptions.clear();
	_requiredOptions.clear();
	_iPv6RequestedOptions.clear();
	_iPv6RequiredOptions.clear();
	_requestedIPv6Address = String ("");

}

Boolean UNIX_DHCPSettingData::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "RequestedIPv4Address"))
			{
				String requestedIPv4AddressValue;
				property.getValue().get(requestedIPv4AddressValue);
				setRequestedIPv4Address(requestedIPv4AddressValue);
			}
			else if (String::equal(property.getName().getString(), "RequestedLeaseTime"))
			{
				Uint32 requestedLeaseTimeValue;
				property.getValue().get(requestedLeaseTimeValue);
				setRequestedLeaseTime(requestedLeaseTimeValue);
			}
			else if (String::equal(property.getName().getString(), "ClientIdentifier"))
			{
				String clientIdentifierValue;
				property.getValue().get(clientIdentifierValue);
				setClientIdentifier(clientIdentifierValue);
			}
			else if (String::equal(property.getName().getString(), "VendorClassIdentifier"))
			{
				String vendorClassIdentifierValue;
				property.getValue().get(vendorClassIdentifierValue);
				setVendorClassIdentifier(vendorClassIdentifierValue);
			}
			else if (String::equal(property.getName().getString(), "RequestedOptions"))
			{
				Array<Uint16> requestedOptionsValue;
				property.getValue().get(requestedOptionsValue);
				setRequestedOptions(requestedOptionsValue);
			}
			else if (String::equal(property.getName().getString(), "RequiredOptions"))
			{
				Array<Uint16> requiredOptionsValue;
				property.getValue().get(requiredOptionsValue);
				setRequiredOptions(requiredOptionsValue);
			}
			else if (String::equal(property.getName().getString(), "IPv6RequestedOptions"))
			{
				Array<Uint16> iPv6RequestedOptionsValue;
				property.getValue().get(iPv6RequestedOptionsValue);
				setIPv6RequestedOptions(iPv6RequestedOptionsValue);
			}
			else if (String::equal(property.getName().getString(), "IPv6RequiredOptions"))
			{
				Array<Uint16> iPv6RequiredOptionsValue;
				property.getValue().get(iPv6RequiredOptionsValue);
				setIPv6RequiredOptions(iPv6RequiredOptionsValue);
			}
			else if (String::equal(property.getName().getString(), "RequestedIPv6Address"))
			{
				String requestedIPv6AddressValue;
				property.getValue().get(requestedIPv6AddressValue);
				setRequestedIPv6Address(requestedIPv6AddressValue);
			}
	}
	return true;
}


Boolean UNIX_DHCPSettingData::initialize()
{
	return false;
}

Boolean UNIX_DHCPSettingData::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("DHCPSettingData");
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
	_requestedIPv4Address = String ("");
	_requestedLeaseTime = Uint32(0);
	_clientIdentifier = String ("");
	_vendorClassIdentifier = String ("");
	_requestedOptions.clear();
	_requiredOptions.clear();
	_iPv6RequestedOptions.clear();
	_iPv6RequiredOptions.clear();
	_requestedIPv6Address = String ("");
	
	return false;
}

Boolean UNIX_DHCPSettingData::finalize()
{
	return false;
}


Boolean UNIX_DHCPSettingData::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_DHCPSettingData::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DHCPSettingData::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DHCPSettingData::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DHCPSettingData::validateInstance()
{
	return true;
}

