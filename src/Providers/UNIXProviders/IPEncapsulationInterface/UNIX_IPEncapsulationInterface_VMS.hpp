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


UNIX_IPEncapsulationInterface::UNIX_IPEncapsulationInterface(void)
{
}

UNIX_IPEncapsulationInterface::~UNIX_IPEncapsulationInterface(void)
{
}

Boolean UNIX_IPEncapsulationInterface::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_IPEncapsulationInterface::getInstanceID() const
{
	return _instanceID;
}

void UNIX_IPEncapsulationInterface::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_IPEncapsulationInterface::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_IPEncapsulationInterface::getCaption() const
{
	return _caption;
}

void UNIX_IPEncapsulationInterface::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_IPEncapsulationInterface::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_IPEncapsulationInterface::getDescription() const
{
	return _description;
}

void UNIX_IPEncapsulationInterface::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_IPEncapsulationInterface::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_IPEncapsulationInterface::getElementName() const
{
	return _elementName;
}

void UNIX_IPEncapsulationInterface::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_IPEncapsulationInterface::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_IPEncapsulationInterface::getGeneration() const
{
	return _generation;
}

void UNIX_IPEncapsulationInterface::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_IPEncapsulationInterface::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_IPEncapsulationInterface::getInstallDate() const
{
	return _installDate;
}

void UNIX_IPEncapsulationInterface::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_IPEncapsulationInterface::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_IPEncapsulationInterface::getName() const
{
	return _name;
}

void UNIX_IPEncapsulationInterface::setName(String &value)
{
	_name = value;
}

Boolean UNIX_IPEncapsulationInterface::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_IPEncapsulationInterface::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_IPEncapsulationInterface::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_IPEncapsulationInterface::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_IPEncapsulationInterface::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_IPEncapsulationInterface::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_IPEncapsulationInterface::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_IPEncapsulationInterface::getStatus() const
{
	return _status;
}

void UNIX_IPEncapsulationInterface::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_IPEncapsulationInterface::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_IPEncapsulationInterface::getHealthState() const
{
	return _healthState;
}

void UNIX_IPEncapsulationInterface::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_IPEncapsulationInterface::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_IPEncapsulationInterface::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_IPEncapsulationInterface::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_IPEncapsulationInterface::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_IPEncapsulationInterface::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_IPEncapsulationInterface::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_IPEncapsulationInterface::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_IPEncapsulationInterface::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_IPEncapsulationInterface::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_IPEncapsulationInterface::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_IPEncapsulationInterface::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_IPEncapsulationInterface::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_IPEncapsulationInterface::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_IPEncapsulationInterface::getEnabledState() const
{
	return _enabledState;
}

void UNIX_IPEncapsulationInterface::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_IPEncapsulationInterface::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_IPEncapsulationInterface::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_IPEncapsulationInterface::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_IPEncapsulationInterface::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_IPEncapsulationInterface::getRequestedState() const
{
	return _requestedState;
}

void UNIX_IPEncapsulationInterface::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_IPEncapsulationInterface::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_IPEncapsulationInterface::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_IPEncapsulationInterface::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_IPEncapsulationInterface::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_IPEncapsulationInterface::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_IPEncapsulationInterface::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_IPEncapsulationInterface::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_IPEncapsulationInterface::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_IPEncapsulationInterface::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_IPEncapsulationInterface::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_IPEncapsulationInterface::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_IPEncapsulationInterface::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_IPEncapsulationInterface::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_IPEncapsulationInterface::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_IPEncapsulationInterface::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_IPEncapsulationInterface::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_IPEncapsulationInterface::getSystemName() const
{
	return _systemName;
}

void UNIX_IPEncapsulationInterface::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_IPEncapsulationInterface::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_IPEncapsulationInterface::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_IPEncapsulationInterface::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_IPEncapsulationInterface::getNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_FORMAT, getNameFormat());
	return true;
}

String UNIX_IPEncapsulationInterface::getNameFormat() const
{
	return _nameFormat;
}

void UNIX_IPEncapsulationInterface::setNameFormat(String &value)
{
	_nameFormat = value;
}

Boolean UNIX_IPEncapsulationInterface::getProtocolType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_TYPE, getProtocolType());
	return true;
}

Uint16 UNIX_IPEncapsulationInterface::getProtocolType() const
{
	return _protocolType;
}

void UNIX_IPEncapsulationInterface::setProtocolType(Uint16 &value)
{
	_protocolType = value;
}

Boolean UNIX_IPEncapsulationInterface::getProtocolIFType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_I_F_TYPE, getProtocolIFType());
	return true;
}

Uint16 UNIX_IPEncapsulationInterface::getProtocolIFType() const
{
	return _protocolIFType;
}

void UNIX_IPEncapsulationInterface::setProtocolIFType(Uint16 &value)
{
	_protocolIFType = value;
}

Boolean UNIX_IPEncapsulationInterface::getOtherTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TYPE_DESCRIPTION, getOtherTypeDescription());
	return true;
}

String UNIX_IPEncapsulationInterface::getOtherTypeDescription() const
{
	return _otherTypeDescription;
}

void UNIX_IPEncapsulationInterface::setOtherTypeDescription(String &value)
{
	_otherTypeDescription = value;
}

Boolean UNIX_IPEncapsulationInterface::getBroadcastResetSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BROADCAST_RESET_SUPPORTED, getBroadcastResetSupported());
	return true;
}

Boolean UNIX_IPEncapsulationInterface::getBroadcastResetSupported() const
{
	return _broadcastResetSupported;
}

void UNIX_IPEncapsulationInterface::setBroadcastResetSupported(Boolean &value)
{
	_broadcastResetSupported = value;
}

Boolean UNIX_IPEncapsulationInterface::getIPv4Address(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IPV_4_ADDRESS, getIPv4Address());
	return true;
}

String UNIX_IPEncapsulationInterface::getIPv4Address() const
{
	return _iPv4Address;
}

void UNIX_IPEncapsulationInterface::setIPv4Address(String &value)
{
	_iPv4Address = value;
}

Boolean UNIX_IPEncapsulationInterface::getIPv6Address(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IPV_6_ADDRESS, getIPv6Address());
	return true;
}

String UNIX_IPEncapsulationInterface::getIPv6Address() const
{
	return _iPv6Address;
}

void UNIX_IPEncapsulationInterface::setIPv6Address(String &value)
{
	_iPv6Address = value;
}

Boolean UNIX_IPEncapsulationInterface::getAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESS, getAddress());
	return true;
}

String UNIX_IPEncapsulationInterface::getAddress() const
{
	return _address;
}

void UNIX_IPEncapsulationInterface::setAddress(String &value)
{
	_address = value;
}

Boolean UNIX_IPEncapsulationInterface::getSubnetMask(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUBNET_MASK, getSubnetMask());
	return true;
}

String UNIX_IPEncapsulationInterface::getSubnetMask() const
{
	return _subnetMask;
}

void UNIX_IPEncapsulationInterface::setSubnetMask(String &value)
{
	_subnetMask = value;
}

Boolean UNIX_IPEncapsulationInterface::getPrefixLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PREFIX_LENGTH, getPrefixLength());
	return true;
}

Uint8 UNIX_IPEncapsulationInterface::getPrefixLength() const
{
	return _prefixLength;
}

void UNIX_IPEncapsulationInterface::setPrefixLength(Uint8 &value)
{
	_prefixLength = value;
}

Boolean UNIX_IPEncapsulationInterface::getAddressType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESS_TYPE, getAddressType());
	return true;
}

Uint16 UNIX_IPEncapsulationInterface::getAddressType() const
{
	return _addressType;
}

void UNIX_IPEncapsulationInterface::setAddressType(Uint16 &value)
{
	_addressType = value;
}

Boolean UNIX_IPEncapsulationInterface::getIPVersionSupport(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IP_VERSION_SUPPORT, getIPVersionSupport());
	return true;
}

Uint16 UNIX_IPEncapsulationInterface::getIPVersionSupport() const
{
	return _iPVersionSupport;
}

void UNIX_IPEncapsulationInterface::setIPVersionSupport(Uint16 &value)
{
	_iPVersionSupport = value;
}

Boolean UNIX_IPEncapsulationInterface::getAddressOrigin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESS_ORIGIN, getAddressOrigin());
	return true;
}

Uint16 UNIX_IPEncapsulationInterface::getAddressOrigin() const
{
	return _addressOrigin;
}

void UNIX_IPEncapsulationInterface::setAddressOrigin(Uint16 &value)
{
	_addressOrigin = value;
}

Boolean UNIX_IPEncapsulationInterface::getIPv6AddressType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IPV_6_ADDRESS_TYPE, getIPv6AddressType());
	return true;
}

Uint16 UNIX_IPEncapsulationInterface::getIPv6AddressType() const
{
	return _iPv6AddressType;
}

void UNIX_IPEncapsulationInterface::setIPv6AddressType(Uint16 &value)
{
	_iPv6AddressType = value;
}

Boolean UNIX_IPEncapsulationInterface::getIPv6SubnetPrefixLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IPV_6_SUBNET_PREFIX_LENGTH, getIPv6SubnetPrefixLength());
	return true;
}

Uint16 UNIX_IPEncapsulationInterface::getIPv6SubnetPrefixLength() const
{
	return _iPv6SubnetPrefixLength;
}

void UNIX_IPEncapsulationInterface::setIPv6SubnetPrefixLength(Uint16 &value)
{
	_iPv6SubnetPrefixLength = value;
}

Boolean UNIX_IPEncapsulationInterface::getAddressPrefixOrigin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESS_PREFIX_ORIGIN, getAddressPrefixOrigin());
	return true;
}

Uint16 UNIX_IPEncapsulationInterface::getAddressPrefixOrigin() const
{
	return _addressPrefixOrigin;
}

void UNIX_IPEncapsulationInterface::setAddressPrefixOrigin(Uint16 &value)
{
	_addressPrefixOrigin = value;
}

Boolean UNIX_IPEncapsulationInterface::getAddressSuffixOrigin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESS_SUFFIX_ORIGIN, getAddressSuffixOrigin());
	return true;
}

Uint16 UNIX_IPEncapsulationInterface::getAddressSuffixOrigin() const
{
	return _addressSuffixOrigin;
}

void UNIX_IPEncapsulationInterface::setAddressSuffixOrigin(Uint16 &value)
{
	_addressSuffixOrigin = value;
}

Boolean UNIX_IPEncapsulationInterface::getOtherAddressPrefixOriginDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ADDRESS_PREFIX_ORIGIN_DESCRIPTION, getOtherAddressPrefixOriginDescription());
	return true;
}

String UNIX_IPEncapsulationInterface::getOtherAddressPrefixOriginDescription() const
{
	return _otherAddressPrefixOriginDescription;
}

void UNIX_IPEncapsulationInterface::setOtherAddressPrefixOriginDescription(String &value)
{
	_otherAddressPrefixOriginDescription = value;
}

Boolean UNIX_IPEncapsulationInterface::getOtherAddressSuffixOriginDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ADDRESS_SUFFIX_ORIGIN_DESCRIPTION, getOtherAddressSuffixOriginDescription());
	return true;
}

String UNIX_IPEncapsulationInterface::getOtherAddressSuffixOriginDescription() const
{
	return _otherAddressSuffixOriginDescription;
}

void UNIX_IPEncapsulationInterface::setOtherAddressSuffixOriginDescription(String &value)
{
	_otherAddressSuffixOriginDescription = value;
}

Boolean UNIX_IPEncapsulationInterface::getEncapsulationMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENCAPSULATION_MODE, getEncapsulationMode());
	return true;
}

Uint16 UNIX_IPEncapsulationInterface::getEncapsulationMode() const
{
	return _encapsulationMode;
}

void UNIX_IPEncapsulationInterface::setEncapsulationMode(Uint16 &value)
{
	_encapsulationMode = value;
}

Boolean UNIX_IPEncapsulationInterface::getOtherEncapsulationMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENCAPSULATION_MODE, getOtherEncapsulationMode());
	return true;
}

String UNIX_IPEncapsulationInterface::getOtherEncapsulationMode() const
{
	return _otherEncapsulationMode;
}

void UNIX_IPEncapsulationInterface::setOtherEncapsulationMode(String &value)
{
	_otherEncapsulationMode = value;
}

Boolean UNIX_IPEncapsulationInterface::getVRFContext(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_V_R_FCONTEXT, getVRFContext());
	return true;
}

String UNIX_IPEncapsulationInterface::getVRFContext() const
{
	return _vRFContext;
}

void UNIX_IPEncapsulationInterface::setVRFContext(String &value)
{
	_vRFContext = value;
}

Boolean UNIX_IPEncapsulationInterface::getOuterlDestinationIPAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OUTERL_DESTINATION_IP_ADDRESS, getOuterlDestinationIPAddress());
	return true;
}

String UNIX_IPEncapsulationInterface::getOuterlDestinationIPAddress() const
{
	return _outerlDestinationIPAddress;
}

void UNIX_IPEncapsulationInterface::setOuterlDestinationIPAddress(String &value)
{
	_outerlDestinationIPAddress = value;
}

Boolean UNIX_IPEncapsulationInterface::getTunnelSourceInterface(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TUNNEL_SOURCE_INTERFACE, getTunnelSourceInterface());
	return true;
}

String UNIX_IPEncapsulationInterface::getTunnelSourceInterface() const
{
	return _tunnelSourceInterface;
}

void UNIX_IPEncapsulationInterface::setTunnelSourceInterface(String &value)
{
	_tunnelSourceInterface = value;
}


void UNIX_IPEncapsulationInterface::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("IPEncapsulationInterface");
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
	_creationClassName = String("UNIX_IPEncapsulationInterface");
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
	_encapsulationMode = Uint16(0);
	_otherEncapsulationMode = String ("");
	_vRFContext = String ("");
	_outerlDestinationIPAddress = String ("");
	_tunnelSourceInterface = String ("");

}

Boolean UNIX_IPEncapsulationInterface::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "EncapsulationMode"))
			{
				Uint16 encapsulationModeValue;
				property.getValue().get(encapsulationModeValue);
				setEncapsulationMode(encapsulationModeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherEncapsulationMode"))
			{
				String otherEncapsulationModeValue;
				property.getValue().get(otherEncapsulationModeValue);
				setOtherEncapsulationMode(otherEncapsulationModeValue);
			}
			else if (String::equal(property.getName().getString(), "VRFContext"))
			{
				String vRFContextValue;
				property.getValue().get(vRFContextValue);
				setVRFContext(vRFContextValue);
			}
			else if (String::equal(property.getName().getString(), "OuterlDestinationIPAddress"))
			{
				String outerlDestinationIPAddressValue;
				property.getValue().get(outerlDestinationIPAddressValue);
				setOuterlDestinationIPAddress(outerlDestinationIPAddressValue);
			}
			else if (String::equal(property.getName().getString(), "TunnelSourceInterface"))
			{
				String tunnelSourceInterfaceValue;
				property.getValue().get(tunnelSourceInterfaceValue);
				setTunnelSourceInterface(tunnelSourceInterfaceValue);
			}
	}
	return true;
}

Uint32 UNIX_IPEncapsulationInterface::invokeRequestStateChange(
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

Uint32 UNIX_IPEncapsulationInterface::invokeBroadcastReset()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method BroadcastReset */
	
	
	
	return returnValue;
}


Boolean UNIX_IPEncapsulationInterface::initialize()
{
	return false;
}

Boolean UNIX_IPEncapsulationInterface::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("IPEncapsulationInterface");
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
	_creationClassName = String("UNIX_IPEncapsulationInterface");
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
	_encapsulationMode = Uint16(0);
	_otherEncapsulationMode = String ("");
	_vRFContext = String ("");
	_outerlDestinationIPAddress = String ("");
	_tunnelSourceInterface = String ("");
	
	return false;
}

Boolean UNIX_IPEncapsulationInterface::finalize()
{
	return false;
}

Boolean UNIX_IPEncapsulationInterface::loadByName(const String name)
{
	return false;
}

Boolean UNIX_IPEncapsulationInterface::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_IPEncapsulationInterface::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IPEncapsulationInterface::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IPEncapsulationInterface::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IPEncapsulationInterface::validateInstance()
{
	return true;
}

