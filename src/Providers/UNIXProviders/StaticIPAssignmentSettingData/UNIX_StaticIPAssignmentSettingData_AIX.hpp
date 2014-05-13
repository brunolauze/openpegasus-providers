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


UNIX_StaticIPAssignmentSettingData::UNIX_StaticIPAssignmentSettingData(void)
{
}

UNIX_StaticIPAssignmentSettingData::~UNIX_StaticIPAssignmentSettingData(void)
{
}

Boolean UNIX_StaticIPAssignmentSettingData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_StaticIPAssignmentSettingData::getInstanceID() const
{
	return _instanceID;
}

void UNIX_StaticIPAssignmentSettingData::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_StaticIPAssignmentSettingData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_StaticIPAssignmentSettingData::getCaption() const
{
	return _caption;
}

void UNIX_StaticIPAssignmentSettingData::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_StaticIPAssignmentSettingData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_StaticIPAssignmentSettingData::getDescription() const
{
	return _description;
}

void UNIX_StaticIPAssignmentSettingData::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_StaticIPAssignmentSettingData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_StaticIPAssignmentSettingData::getElementName() const
{
	return _elementName;
}

void UNIX_StaticIPAssignmentSettingData::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_StaticIPAssignmentSettingData::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_StaticIPAssignmentSettingData::getGeneration() const
{
	return _generation;
}

void UNIX_StaticIPAssignmentSettingData::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_StaticIPAssignmentSettingData::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_StaticIPAssignmentSettingData::getConfigurationName() const
{
	return _configurationName;
}

void UNIX_StaticIPAssignmentSettingData::setConfigurationName(String &value)
{
	_configurationName = value;
}

Boolean UNIX_StaticIPAssignmentSettingData::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_StaticIPAssignmentSettingData::getChangeableType() const
{
	return _changeableType;
}

void UNIX_StaticIPAssignmentSettingData::setChangeableType(Uint16 &value)
{
	_changeableType = value;
}

Boolean UNIX_StaticIPAssignmentSettingData::getComponentSetting(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPONENT_SETTING, getComponentSetting());
	return true;
}

Array<String> UNIX_StaticIPAssignmentSettingData::getComponentSetting() const
{
	return _componentSetting;
}

void UNIX_StaticIPAssignmentSettingData::setComponentSetting(Array<String> &value)
{
	_componentSetting = value;
}

Boolean UNIX_StaticIPAssignmentSettingData::getSoID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ID, getSoID());
	return true;
}

String UNIX_StaticIPAssignmentSettingData::getSoID() const
{
	return _soID;
}

void UNIX_StaticIPAssignmentSettingData::setSoID(String &value)
{
	_soID = value;
}

Boolean UNIX_StaticIPAssignmentSettingData::getSoOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ORG_ID, getSoOrgID());
	return true;
}

String UNIX_StaticIPAssignmentSettingData::getSoOrgID() const
{
	return _soOrgID;
}

void UNIX_StaticIPAssignmentSettingData::setSoOrgID(String &value)
{
	_soOrgID = value;
}

Boolean UNIX_StaticIPAssignmentSettingData::getAddressOrigin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESS_ORIGIN, getAddressOrigin());
	return true;
}

Uint16 UNIX_StaticIPAssignmentSettingData::getAddressOrigin() const
{
	return _addressOrigin;
}

void UNIX_StaticIPAssignmentSettingData::setAddressOrigin(Uint16 &value)
{
	_addressOrigin = value;
}

Boolean UNIX_StaticIPAssignmentSettingData::getProtocolIFType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_I_F_TYPE, getProtocolIFType());
	return true;
}

Uint16 UNIX_StaticIPAssignmentSettingData::getProtocolIFType() const
{
	return _protocolIFType;
}

void UNIX_StaticIPAssignmentSettingData::setProtocolIFType(Uint16 &value)
{
	_protocolIFType = value;
}

Boolean UNIX_StaticIPAssignmentSettingData::getAddressPrefixOrigin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESS_PREFIX_ORIGIN, getAddressPrefixOrigin());
	return true;
}

Uint16 UNIX_StaticIPAssignmentSettingData::getAddressPrefixOrigin() const
{
	return _addressPrefixOrigin;
}

void UNIX_StaticIPAssignmentSettingData::setAddressPrefixOrigin(Uint16 &value)
{
	_addressPrefixOrigin = value;
}

Boolean UNIX_StaticIPAssignmentSettingData::getAddressSuffixOrigin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESS_SUFFIX_ORIGIN, getAddressSuffixOrigin());
	return true;
}

Uint16 UNIX_StaticIPAssignmentSettingData::getAddressSuffixOrigin() const
{
	return _addressSuffixOrigin;
}

void UNIX_StaticIPAssignmentSettingData::setAddressSuffixOrigin(Uint16 &value)
{
	_addressSuffixOrigin = value;
}

Boolean UNIX_StaticIPAssignmentSettingData::getOtherAddressPrefixOriginDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ADDRESS_PREFIX_ORIGIN_DESCRIPTION, getOtherAddressPrefixOriginDescription());
	return true;
}

String UNIX_StaticIPAssignmentSettingData::getOtherAddressPrefixOriginDescription() const
{
	return _otherAddressPrefixOriginDescription;
}

void UNIX_StaticIPAssignmentSettingData::setOtherAddressPrefixOriginDescription(String &value)
{
	_otherAddressPrefixOriginDescription = value;
}

Boolean UNIX_StaticIPAssignmentSettingData::getOtherAddressSuffixOriginDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ADDRESS_SUFFIX_ORIGIN_DESCRIPTION, getOtherAddressSuffixOriginDescription());
	return true;
}

String UNIX_StaticIPAssignmentSettingData::getOtherAddressSuffixOriginDescription() const
{
	return _otherAddressSuffixOriginDescription;
}

void UNIX_StaticIPAssignmentSettingData::setOtherAddressSuffixOriginDescription(String &value)
{
	_otherAddressSuffixOriginDescription = value;
}

Boolean UNIX_StaticIPAssignmentSettingData::getIPv4Address(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IPV_4_ADDRESS, getIPv4Address());
	return true;
}

String UNIX_StaticIPAssignmentSettingData::getIPv4Address() const
{
	return _iPv4Address;
}

void UNIX_StaticIPAssignmentSettingData::setIPv4Address(String &value)
{
	_iPv4Address = value;
}

Boolean UNIX_StaticIPAssignmentSettingData::getSubnetMask(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUBNET_MASK, getSubnetMask());
	return true;
}

String UNIX_StaticIPAssignmentSettingData::getSubnetMask() const
{
	return _subnetMask;
}

void UNIX_StaticIPAssignmentSettingData::setSubnetMask(String &value)
{
	_subnetMask = value;
}

Boolean UNIX_StaticIPAssignmentSettingData::getGatewayIPv4Address(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GATEWAY_IPV_4_ADDRESS, getGatewayIPv4Address());
	return true;
}

String UNIX_StaticIPAssignmentSettingData::getGatewayIPv4Address() const
{
	return _gatewayIPv4Address;
}

void UNIX_StaticIPAssignmentSettingData::setGatewayIPv4Address(String &value)
{
	_gatewayIPv4Address = value;
}

Boolean UNIX_StaticIPAssignmentSettingData::getGatewayIPv6Address(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GATEWAY_IPV_6_ADDRESS, getGatewayIPv6Address());
	return true;
}

String UNIX_StaticIPAssignmentSettingData::getGatewayIPv6Address() const
{
	return _gatewayIPv6Address;
}

void UNIX_StaticIPAssignmentSettingData::setGatewayIPv6Address(String &value)
{
	_gatewayIPv6Address = value;
}

Boolean UNIX_StaticIPAssignmentSettingData::getIPv6Address(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IPV_6_ADDRESS, getIPv6Address());
	return true;
}

String UNIX_StaticIPAssignmentSettingData::getIPv6Address() const
{
	return _iPv6Address;
}

void UNIX_StaticIPAssignmentSettingData::setIPv6Address(String &value)
{
	_iPv6Address = value;
}

Boolean UNIX_StaticIPAssignmentSettingData::getIPv6AddressType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IPV_6_ADDRESS_TYPE, getIPv6AddressType());
	return true;
}

Uint16 UNIX_StaticIPAssignmentSettingData::getIPv6AddressType() const
{
	return _iPv6AddressType;
}

void UNIX_StaticIPAssignmentSettingData::setIPv6AddressType(Uint16 &value)
{
	_iPv6AddressType = value;
}

Boolean UNIX_StaticIPAssignmentSettingData::getIPv6SubnetPrefixLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IPV_6_SUBNET_PREFIX_LENGTH, getIPv6SubnetPrefixLength());
	return true;
}

Uint16 UNIX_StaticIPAssignmentSettingData::getIPv6SubnetPrefixLength() const
{
	return _iPv6SubnetPrefixLength;
}

void UNIX_StaticIPAssignmentSettingData::setIPv6SubnetPrefixLength(Uint16 &value)
{
	_iPv6SubnetPrefixLength = value;
}


void UNIX_StaticIPAssignmentSettingData::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("StaticIPAssignmentSettingData");
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
	_iPv4Address = String ("");
	_subnetMask = String ("");
	_gatewayIPv4Address = String ("");
	_gatewayIPv6Address = String ("");
	_iPv6Address = String ("");
	_iPv6AddressType = Uint16(0);
	_iPv6SubnetPrefixLength = Uint16(0);

}

Boolean UNIX_StaticIPAssignmentSettingData::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "IPv4Address"))
			{
				String iPv4AddressValue;
				property.getValue().get(iPv4AddressValue);
				setIPv4Address(iPv4AddressValue);
			}
			else if (String::equal(property.getName().getString(), "SubnetMask"))
			{
				String subnetMaskValue;
				property.getValue().get(subnetMaskValue);
				setSubnetMask(subnetMaskValue);
			}
			else if (String::equal(property.getName().getString(), "GatewayIPv4Address"))
			{
				String gatewayIPv4AddressValue;
				property.getValue().get(gatewayIPv4AddressValue);
				setGatewayIPv4Address(gatewayIPv4AddressValue);
			}
			else if (String::equal(property.getName().getString(), "GatewayIPv6Address"))
			{
				String gatewayIPv6AddressValue;
				property.getValue().get(gatewayIPv6AddressValue);
				setGatewayIPv6Address(gatewayIPv6AddressValue);
			}
			else if (String::equal(property.getName().getString(), "IPv6Address"))
			{
				String iPv6AddressValue;
				property.getValue().get(iPv6AddressValue);
				setIPv6Address(iPv6AddressValue);
			}
			else if (String::equal(property.getName().getString(), "IPv6AddressType"))
			{
				Uint16 iPv6AddressTypeValue;
				property.getValue().get(iPv6AddressTypeValue);
				setIPv6AddressType(iPv6AddressTypeValue);
			}
			else if (String::equal(property.getName().getString(), "IPv6SubnetPrefixLength"))
			{
				Uint16 iPv6SubnetPrefixLengthValue;
				property.getValue().get(iPv6SubnetPrefixLengthValue);
				setIPv6SubnetPrefixLength(iPv6SubnetPrefixLengthValue);
			}
	}
	return true;
}


Boolean UNIX_StaticIPAssignmentSettingData::initialize()
{
	return false;
}

Boolean UNIX_StaticIPAssignmentSettingData::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("StaticIPAssignmentSettingData");
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
	_iPv4Address = String ("");
	_subnetMask = String ("");
	_gatewayIPv4Address = String ("");
	_gatewayIPv6Address = String ("");
	_iPv6Address = String ("");
	_iPv6AddressType = Uint16(0);
	_iPv6SubnetPrefixLength = Uint16(0);
	
	return false;
}

Boolean UNIX_StaticIPAssignmentSettingData::finalize()
{
	return false;
}


Boolean UNIX_StaticIPAssignmentSettingData::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_StaticIPAssignmentSettingData::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StaticIPAssignmentSettingData::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StaticIPAssignmentSettingData::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StaticIPAssignmentSettingData::validateInstance()
{
	return true;
}

