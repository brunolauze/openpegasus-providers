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


UNIX_SwitchVirtualInterface::UNIX_SwitchVirtualInterface(void)
{
}

UNIX_SwitchVirtualInterface::~UNIX_SwitchVirtualInterface(void)
{
}

Boolean UNIX_SwitchVirtualInterface::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_SwitchVirtualInterface::getInstanceID() const
{
	return _instanceID;
}

void UNIX_SwitchVirtualInterface::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_SwitchVirtualInterface::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_SwitchVirtualInterface::getCaption() const
{
	return _caption;
}

void UNIX_SwitchVirtualInterface::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_SwitchVirtualInterface::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_SwitchVirtualInterface::getDescription() const
{
	return _description;
}

void UNIX_SwitchVirtualInterface::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_SwitchVirtualInterface::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_SwitchVirtualInterface::getElementName() const
{
	return _elementName;
}

void UNIX_SwitchVirtualInterface::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_SwitchVirtualInterface::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_SwitchVirtualInterface::getGeneration() const
{
	return _generation;
}

void UNIX_SwitchVirtualInterface::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_SwitchVirtualInterface::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_SwitchVirtualInterface::getInstallDate() const
{
	return _installDate;
}

void UNIX_SwitchVirtualInterface::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_SwitchVirtualInterface::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_SwitchVirtualInterface::getName() const
{
	return _name;
}

void UNIX_SwitchVirtualInterface::setName(String &value)
{
	_name = value;
}

Boolean UNIX_SwitchVirtualInterface::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_SwitchVirtualInterface::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_SwitchVirtualInterface::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_SwitchVirtualInterface::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_SwitchVirtualInterface::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_SwitchVirtualInterface::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_SwitchVirtualInterface::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_SwitchVirtualInterface::getStatus() const
{
	return _status;
}

void UNIX_SwitchVirtualInterface::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_SwitchVirtualInterface::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_SwitchVirtualInterface::getHealthState() const
{
	return _healthState;
}

void UNIX_SwitchVirtualInterface::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_SwitchVirtualInterface::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_SwitchVirtualInterface::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_SwitchVirtualInterface::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_SwitchVirtualInterface::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_SwitchVirtualInterface::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_SwitchVirtualInterface::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_SwitchVirtualInterface::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_SwitchVirtualInterface::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_SwitchVirtualInterface::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_SwitchVirtualInterface::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_SwitchVirtualInterface::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_SwitchVirtualInterface::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_SwitchVirtualInterface::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_SwitchVirtualInterface::getEnabledState() const
{
	return _enabledState;
}

void UNIX_SwitchVirtualInterface::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_SwitchVirtualInterface::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_SwitchVirtualInterface::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_SwitchVirtualInterface::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_SwitchVirtualInterface::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_SwitchVirtualInterface::getRequestedState() const
{
	return _requestedState;
}

void UNIX_SwitchVirtualInterface::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_SwitchVirtualInterface::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_SwitchVirtualInterface::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_SwitchVirtualInterface::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_SwitchVirtualInterface::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_SwitchVirtualInterface::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_SwitchVirtualInterface::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_SwitchVirtualInterface::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_SwitchVirtualInterface::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_SwitchVirtualInterface::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_SwitchVirtualInterface::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_SwitchVirtualInterface::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_SwitchVirtualInterface::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_SwitchVirtualInterface::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_SwitchVirtualInterface::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_SwitchVirtualInterface::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_SwitchVirtualInterface::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_SwitchVirtualInterface::getSystemName() const
{
	return _systemName;
}

void UNIX_SwitchVirtualInterface::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_SwitchVirtualInterface::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_SwitchVirtualInterface::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_SwitchVirtualInterface::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_SwitchVirtualInterface::getNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_FORMAT, getNameFormat());
	return true;
}

String UNIX_SwitchVirtualInterface::getNameFormat() const
{
	return _nameFormat;
}

void UNIX_SwitchVirtualInterface::setNameFormat(String &value)
{
	_nameFormat = value;
}

Boolean UNIX_SwitchVirtualInterface::getProtocolType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_TYPE, getProtocolType());
	return true;
}

Uint16 UNIX_SwitchVirtualInterface::getProtocolType() const
{
	return _protocolType;
}

void UNIX_SwitchVirtualInterface::setProtocolType(Uint16 &value)
{
	_protocolType = value;
}

Boolean UNIX_SwitchVirtualInterface::getProtocolIFType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_I_F_TYPE, getProtocolIFType());
	return true;
}

Uint16 UNIX_SwitchVirtualInterface::getProtocolIFType() const
{
	return _protocolIFType;
}

void UNIX_SwitchVirtualInterface::setProtocolIFType(Uint16 &value)
{
	_protocolIFType = value;
}

Boolean UNIX_SwitchVirtualInterface::getOtherTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TYPE_DESCRIPTION, getOtherTypeDescription());
	return true;
}

String UNIX_SwitchVirtualInterface::getOtherTypeDescription() const
{
	return _otherTypeDescription;
}

void UNIX_SwitchVirtualInterface::setOtherTypeDescription(String &value)
{
	_otherTypeDescription = value;
}

Boolean UNIX_SwitchVirtualInterface::getBroadcastResetSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BROADCAST_RESET_SUPPORTED, getBroadcastResetSupported());
	return true;
}

Boolean UNIX_SwitchVirtualInterface::getBroadcastResetSupported() const
{
	return _broadcastResetSupported;
}

void UNIX_SwitchVirtualInterface::setBroadcastResetSupported(Boolean &value)
{
	_broadcastResetSupported = value;
}

Boolean UNIX_SwitchVirtualInterface::getIPv4Address(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IPV_4_ADDRESS, getIPv4Address());
	return true;
}

String UNIX_SwitchVirtualInterface::getIPv4Address() const
{
	return _iPv4Address;
}

void UNIX_SwitchVirtualInterface::setIPv4Address(String &value)
{
	_iPv4Address = value;
}

Boolean UNIX_SwitchVirtualInterface::getIPv6Address(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IPV_6_ADDRESS, getIPv6Address());
	return true;
}

String UNIX_SwitchVirtualInterface::getIPv6Address() const
{
	return _iPv6Address;
}

void UNIX_SwitchVirtualInterface::setIPv6Address(String &value)
{
	_iPv6Address = value;
}

Boolean UNIX_SwitchVirtualInterface::getAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESS, getAddress());
	return true;
}

String UNIX_SwitchVirtualInterface::getAddress() const
{
	return _address;
}

void UNIX_SwitchVirtualInterface::setAddress(String &value)
{
	_address = value;
}

Boolean UNIX_SwitchVirtualInterface::getSubnetMask(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUBNET_MASK, getSubnetMask());
	return true;
}

String UNIX_SwitchVirtualInterface::getSubnetMask() const
{
	return _subnetMask;
}

void UNIX_SwitchVirtualInterface::setSubnetMask(String &value)
{
	_subnetMask = value;
}

Boolean UNIX_SwitchVirtualInterface::getPrefixLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PREFIX_LENGTH, getPrefixLength());
	return true;
}

Uint8 UNIX_SwitchVirtualInterface::getPrefixLength() const
{
	return _prefixLength;
}

void UNIX_SwitchVirtualInterface::setPrefixLength(Uint8 &value)
{
	_prefixLength = value;
}

Boolean UNIX_SwitchVirtualInterface::getAddressType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESS_TYPE, getAddressType());
	return true;
}

Uint16 UNIX_SwitchVirtualInterface::getAddressType() const
{
	return _addressType;
}

void UNIX_SwitchVirtualInterface::setAddressType(Uint16 &value)
{
	_addressType = value;
}

Boolean UNIX_SwitchVirtualInterface::getIPVersionSupport(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IP_VERSION_SUPPORT, getIPVersionSupport());
	return true;
}

Uint16 UNIX_SwitchVirtualInterface::getIPVersionSupport() const
{
	return _iPVersionSupport;
}

void UNIX_SwitchVirtualInterface::setIPVersionSupport(Uint16 &value)
{
	_iPVersionSupport = value;
}

Boolean UNIX_SwitchVirtualInterface::getAddressOrigin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESS_ORIGIN, getAddressOrigin());
	return true;
}

Uint16 UNIX_SwitchVirtualInterface::getAddressOrigin() const
{
	return _addressOrigin;
}

void UNIX_SwitchVirtualInterface::setAddressOrigin(Uint16 &value)
{
	_addressOrigin = value;
}

Boolean UNIX_SwitchVirtualInterface::getIPv6AddressType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IPV_6_ADDRESS_TYPE, getIPv6AddressType());
	return true;
}

Uint16 UNIX_SwitchVirtualInterface::getIPv6AddressType() const
{
	return _iPv6AddressType;
}

void UNIX_SwitchVirtualInterface::setIPv6AddressType(Uint16 &value)
{
	_iPv6AddressType = value;
}

Boolean UNIX_SwitchVirtualInterface::getIPv6SubnetPrefixLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IPV_6_SUBNET_PREFIX_LENGTH, getIPv6SubnetPrefixLength());
	return true;
}

Uint16 UNIX_SwitchVirtualInterface::getIPv6SubnetPrefixLength() const
{
	return _iPv6SubnetPrefixLength;
}

void UNIX_SwitchVirtualInterface::setIPv6SubnetPrefixLength(Uint16 &value)
{
	_iPv6SubnetPrefixLength = value;
}

Boolean UNIX_SwitchVirtualInterface::getAddressPrefixOrigin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESS_PREFIX_ORIGIN, getAddressPrefixOrigin());
	return true;
}

Uint16 UNIX_SwitchVirtualInterface::getAddressPrefixOrigin() const
{
	return _addressPrefixOrigin;
}

void UNIX_SwitchVirtualInterface::setAddressPrefixOrigin(Uint16 &value)
{
	_addressPrefixOrigin = value;
}

Boolean UNIX_SwitchVirtualInterface::getAddressSuffixOrigin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESS_SUFFIX_ORIGIN, getAddressSuffixOrigin());
	return true;
}

Uint16 UNIX_SwitchVirtualInterface::getAddressSuffixOrigin() const
{
	return _addressSuffixOrigin;
}

void UNIX_SwitchVirtualInterface::setAddressSuffixOrigin(Uint16 &value)
{
	_addressSuffixOrigin = value;
}

Boolean UNIX_SwitchVirtualInterface::getOtherAddressPrefixOriginDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ADDRESS_PREFIX_ORIGIN_DESCRIPTION, getOtherAddressPrefixOriginDescription());
	return true;
}

String UNIX_SwitchVirtualInterface::getOtherAddressPrefixOriginDescription() const
{
	return _otherAddressPrefixOriginDescription;
}

void UNIX_SwitchVirtualInterface::setOtherAddressPrefixOriginDescription(String &value)
{
	_otherAddressPrefixOriginDescription = value;
}

Boolean UNIX_SwitchVirtualInterface::getOtherAddressSuffixOriginDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ADDRESS_SUFFIX_ORIGIN_DESCRIPTION, getOtherAddressSuffixOriginDescription());
	return true;
}

String UNIX_SwitchVirtualInterface::getOtherAddressSuffixOriginDescription() const
{
	return _otherAddressSuffixOriginDescription;
}

void UNIX_SwitchVirtualInterface::setOtherAddressSuffixOriginDescription(String &value)
{
	_otherAddressSuffixOriginDescription = value;
}

Boolean UNIX_SwitchVirtualInterface::getVLANId(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VLAN_ID, getVLANId());
	return true;
}

Uint16 UNIX_SwitchVirtualInterface::getVLANId() const
{
	return _vLANId;
}

void UNIX_SwitchVirtualInterface::setVLANId(Uint16 &value)
{
	_vLANId = value;
}


void UNIX_SwitchVirtualInterface::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("SwitchVirtualInterface");
	_generation = Uint64(0);
	_installDate = CIMHelper::getCurrentTime();
	_name = String ("");
	_operationalStatus.clear();
	_statusDescriptions.clear();
	_status = String(DEFAULT_STATUS);
	_healthState = Uint16(DEFAULT_HEALTH_STATE);
	_communicationStatus = Uint16(0);
	_detailedStatus = Uint16(0);
	_operatingStatus = Uint16(DEFAULT_OPERATING_STATUS);
	_primaryStatus = Uint16(DEFAULT_PRIMARY_STATUS);
	_enabledState = Uint16(DEFAULT_ENABLED_STATE);
	_otherEnabledState = String ("");
	_requestedState = Uint16(0);
	_enabledDefault = Uint16(0);
	_timeOfLastStateChange = CIMHelper::getCurrentTime();
	_availableRequestedStates.clear();
	_transitioningToState = Uint16(0);
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_creationClassName = String("UNIX_SwitchVirtualInterface");
	_nameFormat = String ("");
	_protocolType = Uint16(0);
	_protocolIFType = Uint16(0);
	_otherTypeDescription = String ("");
	_broadcastResetSupported = Boolean(false);
	_iPv4Address = String ("");
	_iPv6Address = String ("");
	_address = String ("");
	_subnetMask = String ("");
	_prefixLength = Uint8(0);
	_addressType = Uint16(0);
	_iPVersionSupport = Uint16(0);
	_addressOrigin = Uint16(0);
	_iPv6AddressType = Uint16(0);
	_iPv6SubnetPrefixLength = Uint16(0);
	_addressPrefixOrigin = Uint16(0);
	_addressSuffixOrigin = Uint16(0);
	_otherAddressPrefixOriginDescription = String ("");
	_otherAddressSuffixOriginDescription = String ("");
	_vLANId = Uint16(0);

}

Boolean UNIX_SwitchVirtualInterface::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "InstallDate"))
			{
				CIMDateTime installDateValue;
				property.getValue().get(installDateValue);
				setInstallDate(installDateValue);
			}
			else if (String::equal(property.getName().getString(), "Name"))
			{
				String nameValue;
				property.getValue().get(nameValue);
				setName(nameValue);
			}
			else if (String::equal(property.getName().getString(), "OperationalStatus"))
			{
				Array<Uint16> operationalStatusValue;
				property.getValue().get(operationalStatusValue);
				setOperationalStatus(operationalStatusValue);
			}
			else if (String::equal(property.getName().getString(), "StatusDescriptions"))
			{
				Array<String> statusDescriptionsValue;
				property.getValue().get(statusDescriptionsValue);
				setStatusDescriptions(statusDescriptionsValue);
			}
			else if (String::equal(property.getName().getString(), "Status"))
			{
				String statusValue;
				property.getValue().get(statusValue);
				setStatus(statusValue);
			}
			else if (String::equal(property.getName().getString(), "HealthState"))
			{
				Uint16 healthStateValue;
				property.getValue().get(healthStateValue);
				setHealthState(healthStateValue);
			}
			else if (String::equal(property.getName().getString(), "CommunicationStatus"))
			{
				Uint16 communicationStatusValue;
				property.getValue().get(communicationStatusValue);
				setCommunicationStatus(communicationStatusValue);
			}
			else if (String::equal(property.getName().getString(), "DetailedStatus"))
			{
				Uint16 detailedStatusValue;
				property.getValue().get(detailedStatusValue);
				setDetailedStatus(detailedStatusValue);
			}
			else if (String::equal(property.getName().getString(), "OperatingStatus"))
			{
				Uint16 operatingStatusValue;
				property.getValue().get(operatingStatusValue);
				setOperatingStatus(operatingStatusValue);
			}
			else if (String::equal(property.getName().getString(), "PrimaryStatus"))
			{
				Uint16 primaryStatusValue;
				property.getValue().get(primaryStatusValue);
				setPrimaryStatus(primaryStatusValue);
			}
			else if (String::equal(property.getName().getString(), "EnabledState"))
			{
				Uint16 enabledStateValue;
				property.getValue().get(enabledStateValue);
				setEnabledState(enabledStateValue);
			}
			else if (String::equal(property.getName().getString(), "OtherEnabledState"))
			{
				String otherEnabledStateValue;
				property.getValue().get(otherEnabledStateValue);
				setOtherEnabledState(otherEnabledStateValue);
			}
			else if (String::equal(property.getName().getString(), "RequestedState"))
			{
				Uint16 requestedStateValue;
				property.getValue().get(requestedStateValue);
				setRequestedState(requestedStateValue);
			}
			else if (String::equal(property.getName().getString(), "EnabledDefault"))
			{
				Uint16 enabledDefaultValue;
				property.getValue().get(enabledDefaultValue);
				setEnabledDefault(enabledDefaultValue);
			}
			else if (String::equal(property.getName().getString(), "TimeOfLastStateChange"))
			{
				CIMDateTime timeOfLastStateChangeValue;
				property.getValue().get(timeOfLastStateChangeValue);
				setTimeOfLastStateChange(timeOfLastStateChangeValue);
			}
			else if (String::equal(property.getName().getString(), "AvailableRequestedStates"))
			{
				Array<Uint16> availableRequestedStatesValue;
				property.getValue().get(availableRequestedStatesValue);
				setAvailableRequestedStates(availableRequestedStatesValue);
			}
			else if (String::equal(property.getName().getString(), "TransitioningToState"))
			{
				Uint16 transitioningToStateValue;
				property.getValue().get(transitioningToStateValue);
				setTransitioningToState(transitioningToStateValue);
			}
			else if (String::equal(property.getName().getString(), "SystemCreationClassName"))
			{
				String systemCreationClassNameValue;
				property.getValue().get(systemCreationClassNameValue);
				setSystemCreationClassName(systemCreationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "SystemName"))
			{
				String systemNameValue;
				property.getValue().get(systemNameValue);
				setSystemName(systemNameValue);
			}
			else if (String::equal(property.getName().getString(), "CreationClassName"))
			{
				String creationClassNameValue;
				property.getValue().get(creationClassNameValue);
				setCreationClassName(creationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "NameFormat"))
			{
				String nameFormatValue;
				property.getValue().get(nameFormatValue);
				setNameFormat(nameFormatValue);
			}
			else if (String::equal(property.getName().getString(), "ProtocolType"))
			{
				Uint16 protocolTypeValue;
				property.getValue().get(protocolTypeValue);
				setProtocolType(protocolTypeValue);
			}
			else if (String::equal(property.getName().getString(), "ProtocolIFType"))
			{
				Uint16 protocolIFTypeValue;
				property.getValue().get(protocolIFTypeValue);
				setProtocolIFType(protocolIFTypeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherTypeDescription"))
			{
				String otherTypeDescriptionValue;
				property.getValue().get(otherTypeDescriptionValue);
				setOtherTypeDescription(otherTypeDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "BroadcastResetSupported"))
			{
				Boolean broadcastResetSupportedValue;
				property.getValue().get(broadcastResetSupportedValue);
				setBroadcastResetSupported(broadcastResetSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "IPv4Address"))
			{
				String iPv4AddressValue;
				property.getValue().get(iPv4AddressValue);
				setIPv4Address(iPv4AddressValue);
			}
			else if (String::equal(property.getName().getString(), "IPv6Address"))
			{
				String iPv6AddressValue;
				property.getValue().get(iPv6AddressValue);
				setIPv6Address(iPv6AddressValue);
			}
			else if (String::equal(property.getName().getString(), "Address"))
			{
				String addressValue;
				property.getValue().get(addressValue);
				setAddress(addressValue);
			}
			else if (String::equal(property.getName().getString(), "SubnetMask"))
			{
				String subnetMaskValue;
				property.getValue().get(subnetMaskValue);
				setSubnetMask(subnetMaskValue);
			}
			else if (String::equal(property.getName().getString(), "PrefixLength"))
			{
				Uint8 prefixLengthValue;
				property.getValue().get(prefixLengthValue);
				setPrefixLength(prefixLengthValue);
			}
			else if (String::equal(property.getName().getString(), "AddressType"))
			{
				Uint16 addressTypeValue;
				property.getValue().get(addressTypeValue);
				setAddressType(addressTypeValue);
			}
			else if (String::equal(property.getName().getString(), "IPVersionSupport"))
			{
				Uint16 iPVersionSupportValue;
				property.getValue().get(iPVersionSupportValue);
				setIPVersionSupport(iPVersionSupportValue);
			}
			else if (String::equal(property.getName().getString(), "AddressOrigin"))
			{
				Uint16 addressOriginValue;
				property.getValue().get(addressOriginValue);
				setAddressOrigin(addressOriginValue);
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
			else if (String::equal(property.getName().getString(), "VLANId"))
			{
				Uint16 vLANIdValue;
				property.getValue().get(vLANIdValue);
				setVLANId(vLANIdValue);
			}
	}
	return true;
}

Uint32 UNIX_SwitchVirtualInterface::invokeRequestStateChange(
		Uint16 &inRequestedState,
		CIMInstance &inJob,
		CIMDateTime &inTimeoutPeriod
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ConcreteJob inJobObject;
	inJobObject.loadInstance(inJob);
	
	/* Execute method RequestStateChange */
	
	
	
	return returnValue;
}

Uint32 UNIX_SwitchVirtualInterface::invokeBroadcastReset()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method BroadcastReset */
	
	
	
	return returnValue;
}


Boolean UNIX_SwitchVirtualInterface::initialize()
{
	return false;
}

Boolean UNIX_SwitchVirtualInterface::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("SwitchVirtualInterface");
	_generation = Uint64(0);
	_installDate = CIMHelper::getCurrentTime();
	_name = String ("");
	_operationalStatus.clear();
	_statusDescriptions.clear();
	_status = String(DEFAULT_STATUS);
	_healthState = Uint16(DEFAULT_HEALTH_STATE);
	_communicationStatus = Uint16(0);
	_detailedStatus = Uint16(0);
	_operatingStatus = Uint16(DEFAULT_OPERATING_STATUS);
	_primaryStatus = Uint16(DEFAULT_PRIMARY_STATUS);
	_enabledState = Uint16(DEFAULT_ENABLED_STATE);
	_otherEnabledState = String ("");
	_requestedState = Uint16(0);
	_enabledDefault = Uint16(0);
	_timeOfLastStateChange = CIMHelper::getCurrentTime();
	_availableRequestedStates.clear();
	_transitioningToState = Uint16(0);
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_creationClassName = String("UNIX_SwitchVirtualInterface");
	_nameFormat = String ("");
	_protocolType = Uint16(0);
	_protocolIFType = Uint16(0);
	_otherTypeDescription = String ("");
	_broadcastResetSupported = Boolean(false);
	_iPv4Address = String ("");
	_iPv6Address = String ("");
	_address = String ("");
	_subnetMask = String ("");
	_prefixLength = Uint8(0);
	_addressType = Uint16(0);
	_iPVersionSupport = Uint16(0);
	_addressOrigin = Uint16(0);
	_iPv6AddressType = Uint16(0);
	_iPv6SubnetPrefixLength = Uint16(0);
	_addressPrefixOrigin = Uint16(0);
	_addressSuffixOrigin = Uint16(0);
	_otherAddressPrefixOriginDescription = String ("");
	_otherAddressSuffixOriginDescription = String ("");
	_vLANId = Uint16(0);
	
	return false;
}

Boolean UNIX_SwitchVirtualInterface::finalize()
{
	return false;
}

Boolean UNIX_SwitchVirtualInterface::loadByName(const String name)
{
	return false;
}

Boolean UNIX_SwitchVirtualInterface::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String systemCreationClassNameKey;
	String systemNameKey;
	String creationClassNameKey;
	String nameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SYSTEM_CREATION_CLASS_NAME)) systemCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SYSTEM_NAME)) systemNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getSystemCreationClassName(), systemCreationClassNameKey)) && 
			(String::equalNoCase(getSystemName(), systemNameKey)) && 
			(String::equalNoCase(getCreationClassName(), creationClassNameKey)) && 
			(String::equalNoCase(getName(), nameKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_SwitchVirtualInterface::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SwitchVirtualInterface::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SwitchVirtualInterface::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SwitchVirtualInterface::validateInstance()
{
	return true;
}

