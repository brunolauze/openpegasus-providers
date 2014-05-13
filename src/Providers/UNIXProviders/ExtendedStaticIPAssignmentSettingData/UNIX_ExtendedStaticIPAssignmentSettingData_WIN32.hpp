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


UNIX_ExtendedStaticIPAssignmentSettingData::UNIX_ExtendedStaticIPAssignmentSettingData(void)
{
}

UNIX_ExtendedStaticIPAssignmentSettingData::~UNIX_ExtendedStaticIPAssignmentSettingData(void)
{
}

Boolean UNIX_ExtendedStaticIPAssignmentSettingData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_ExtendedStaticIPAssignmentSettingData::getInstanceID() const
{
	return _instanceID;
}

void UNIX_ExtendedStaticIPAssignmentSettingData::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_ExtendedStaticIPAssignmentSettingData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_ExtendedStaticIPAssignmentSettingData::getCaption() const
{
	return _caption;
}

void UNIX_ExtendedStaticIPAssignmentSettingData::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_ExtendedStaticIPAssignmentSettingData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_ExtendedStaticIPAssignmentSettingData::getDescription() const
{
	return _description;
}

void UNIX_ExtendedStaticIPAssignmentSettingData::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_ExtendedStaticIPAssignmentSettingData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_ExtendedStaticIPAssignmentSettingData::getElementName() const
{
	return _elementName;
}

void UNIX_ExtendedStaticIPAssignmentSettingData::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_ExtendedStaticIPAssignmentSettingData::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_ExtendedStaticIPAssignmentSettingData::getGeneration() const
{
	return _generation;
}

void UNIX_ExtendedStaticIPAssignmentSettingData::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_ExtendedStaticIPAssignmentSettingData::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_ExtendedStaticIPAssignmentSettingData::getConfigurationName() const
{
	return _configurationName;
}

void UNIX_ExtendedStaticIPAssignmentSettingData::setConfigurationName(String &value)
{
	_configurationName = value;
}

Boolean UNIX_ExtendedStaticIPAssignmentSettingData::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_ExtendedStaticIPAssignmentSettingData::getChangeableType() const
{
	return _changeableType;
}

void UNIX_ExtendedStaticIPAssignmentSettingData::setChangeableType(Uint16 &value)
{
	_changeableType = value;
}

Boolean UNIX_ExtendedStaticIPAssignmentSettingData::getComponentSetting(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPONENT_SETTING, getComponentSetting());
	return true;
}

Array<String> UNIX_ExtendedStaticIPAssignmentSettingData::getComponentSetting() const
{
	return _componentSetting;
}

void UNIX_ExtendedStaticIPAssignmentSettingData::setComponentSetting(Array<String> &value)
{
	_componentSetting = value;
}

Boolean UNIX_ExtendedStaticIPAssignmentSettingData::getSoID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ID, getSoID());
	return true;
}

String UNIX_ExtendedStaticIPAssignmentSettingData::getSoID() const
{
	return _soID;
}

void UNIX_ExtendedStaticIPAssignmentSettingData::setSoID(String &value)
{
	_soID = value;
}

Boolean UNIX_ExtendedStaticIPAssignmentSettingData::getSoOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ORG_ID, getSoOrgID());
	return true;
}

String UNIX_ExtendedStaticIPAssignmentSettingData::getSoOrgID() const
{
	return _soOrgID;
}

void UNIX_ExtendedStaticIPAssignmentSettingData::setSoOrgID(String &value)
{
	_soOrgID = value;
}

Boolean UNIX_ExtendedStaticIPAssignmentSettingData::getAddressOrigin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESS_ORIGIN, getAddressOrigin());
	return true;
}

Uint16 UNIX_ExtendedStaticIPAssignmentSettingData::getAddressOrigin() const
{
	return _addressOrigin;
}

void UNIX_ExtendedStaticIPAssignmentSettingData::setAddressOrigin(Uint16 &value)
{
	_addressOrigin = value;
}

Boolean UNIX_ExtendedStaticIPAssignmentSettingData::getProtocolIFType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_I_F_TYPE, getProtocolIFType());
	return true;
}

Uint16 UNIX_ExtendedStaticIPAssignmentSettingData::getProtocolIFType() const
{
	return _protocolIFType;
}

void UNIX_ExtendedStaticIPAssignmentSettingData::setProtocolIFType(Uint16 &value)
{
	_protocolIFType = value;
}

Boolean UNIX_ExtendedStaticIPAssignmentSettingData::getAddressPrefixOrigin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESS_PREFIX_ORIGIN, getAddressPrefixOrigin());
	return true;
}

Uint16 UNIX_ExtendedStaticIPAssignmentSettingData::getAddressPrefixOrigin() const
{
	return _addressPrefixOrigin;
}

void UNIX_ExtendedStaticIPAssignmentSettingData::setAddressPrefixOrigin(Uint16 &value)
{
	_addressPrefixOrigin = value;
}

Boolean UNIX_ExtendedStaticIPAssignmentSettingData::getAddressSuffixOrigin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESS_SUFFIX_ORIGIN, getAddressSuffixOrigin());
	return true;
}

Uint16 UNIX_ExtendedStaticIPAssignmentSettingData::getAddressSuffixOrigin() const
{
	return _addressSuffixOrigin;
}

void UNIX_ExtendedStaticIPAssignmentSettingData::setAddressSuffixOrigin(Uint16 &value)
{
	_addressSuffixOrigin = value;
}

Boolean UNIX_ExtendedStaticIPAssignmentSettingData::getOtherAddressPrefixOriginDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ADDRESS_PREFIX_ORIGIN_DESCRIPTION, getOtherAddressPrefixOriginDescription());
	return true;
}

String UNIX_ExtendedStaticIPAssignmentSettingData::getOtherAddressPrefixOriginDescription() const
{
	return _otherAddressPrefixOriginDescription;
}

void UNIX_ExtendedStaticIPAssignmentSettingData::setOtherAddressPrefixOriginDescription(String &value)
{
	_otherAddressPrefixOriginDescription = value;
}

Boolean UNIX_ExtendedStaticIPAssignmentSettingData::getOtherAddressSuffixOriginDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ADDRESS_SUFFIX_ORIGIN_DESCRIPTION, getOtherAddressSuffixOriginDescription());
	return true;
}

String UNIX_ExtendedStaticIPAssignmentSettingData::getOtherAddressSuffixOriginDescription() const
{
	return _otherAddressSuffixOriginDescription;
}

void UNIX_ExtendedStaticIPAssignmentSettingData::setOtherAddressSuffixOriginDescription(String &value)
{
	_otherAddressSuffixOriginDescription = value;
}

Boolean UNIX_ExtendedStaticIPAssignmentSettingData::getIPAddresses(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IP_ADDRESSES, getIPAddresses());
	return true;
}

Array<String> UNIX_ExtendedStaticIPAssignmentSettingData::getIPAddresses() const
{
	return _iPAddresses;
}

void UNIX_ExtendedStaticIPAssignmentSettingData::setIPAddresses(Array<String> &value)
{
	_iPAddresses = value;
}

Boolean UNIX_ExtendedStaticIPAssignmentSettingData::getIPv6SubnetPrefixLengths(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IPV_6_SUBNET_PREFIX_LENGTHS, getIPv6SubnetPrefixLengths());
	return true;
}

Array<Uint16> UNIX_ExtendedStaticIPAssignmentSettingData::getIPv6SubnetPrefixLengths() const
{
	return _iPv6SubnetPrefixLengths;
}

void UNIX_ExtendedStaticIPAssignmentSettingData::setIPv6SubnetPrefixLengths(Array<Uint16> &value)
{
	_iPv6SubnetPrefixLengths = value;
}

Boolean UNIX_ExtendedStaticIPAssignmentSettingData::getSubnetMasks(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUBNET_MASKS, getSubnetMasks());
	return true;
}

Array<String> UNIX_ExtendedStaticIPAssignmentSettingData::getSubnetMasks() const
{
	return _subnetMasks;
}

void UNIX_ExtendedStaticIPAssignmentSettingData::setSubnetMasks(Array<String> &value)
{
	_subnetMasks = value;
}

Boolean UNIX_ExtendedStaticIPAssignmentSettingData::getGatewayAddresses(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GATEWAY_ADDRESSES, getGatewayAddresses());
	return true;
}

Array<String> UNIX_ExtendedStaticIPAssignmentSettingData::getGatewayAddresses() const
{
	return _gatewayAddresses;
}

void UNIX_ExtendedStaticIPAssignmentSettingData::setGatewayAddresses(Array<String> &value)
{
	_gatewayAddresses = value;
}


void UNIX_ExtendedStaticIPAssignmentSettingData::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("ExtendedStaticIPAssignmentSettingData");
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
	_iPAddresses.clear();
	_iPv6SubnetPrefixLengths.clear();
	_subnetMasks.clear();
	_gatewayAddresses.clear();

}

Boolean UNIX_ExtendedStaticIPAssignmentSettingData::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "IPAddresses"))
			{
				Array<String> iPAddressesValue;
				property.getValue().get(iPAddressesValue);
				setIPAddresses(iPAddressesValue);
			}
			else if (String::equal(property.getName().getString(), "IPv6SubnetPrefixLengths"))
			{
				Array<Uint16> iPv6SubnetPrefixLengthsValue;
				property.getValue().get(iPv6SubnetPrefixLengthsValue);
				setIPv6SubnetPrefixLengths(iPv6SubnetPrefixLengthsValue);
			}
			else if (String::equal(property.getName().getString(), "SubnetMasks"))
			{
				Array<String> subnetMasksValue;
				property.getValue().get(subnetMasksValue);
				setSubnetMasks(subnetMasksValue);
			}
			else if (String::equal(property.getName().getString(), "GatewayAddresses"))
			{
				Array<String> gatewayAddressesValue;
				property.getValue().get(gatewayAddressesValue);
				setGatewayAddresses(gatewayAddressesValue);
			}
	}
	return true;
}


Boolean UNIX_ExtendedStaticIPAssignmentSettingData::initialize()
{
	return false;
}

Boolean UNIX_ExtendedStaticIPAssignmentSettingData::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("ExtendedStaticIPAssignmentSettingData");
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
	_iPAddresses.clear();
	_iPv6SubnetPrefixLengths.clear();
	_subnetMasks.clear();
	_gatewayAddresses.clear();
	
	return false;
}

Boolean UNIX_ExtendedStaticIPAssignmentSettingData::finalize()
{
	return false;
}


Boolean UNIX_ExtendedStaticIPAssignmentSettingData::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_ExtendedStaticIPAssignmentSettingData::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ExtendedStaticIPAssignmentSettingData::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ExtendedStaticIPAssignmentSettingData::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ExtendedStaticIPAssignmentSettingData::validateInstance()
{
	return true;
}

