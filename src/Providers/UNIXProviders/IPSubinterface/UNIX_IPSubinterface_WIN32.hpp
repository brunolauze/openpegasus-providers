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


UNIX_IPSubinterface::UNIX_IPSubinterface(void)
{
}

UNIX_IPSubinterface::~UNIX_IPSubinterface(void)
{
}

Boolean UNIX_IPSubinterface::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_IPSubinterface::getInstanceID() const
{
	return _instanceID;
}

void UNIX_IPSubinterface::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_IPSubinterface::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_IPSubinterface::getCaption() const
{
	return _caption;
}

void UNIX_IPSubinterface::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_IPSubinterface::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_IPSubinterface::getDescription() const
{
	return _description;
}

void UNIX_IPSubinterface::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_IPSubinterface::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_IPSubinterface::getElementName() const
{
	return _elementName;
}

void UNIX_IPSubinterface::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_IPSubinterface::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_IPSubinterface::getGeneration() const
{
	return _generation;
}

void UNIX_IPSubinterface::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_IPSubinterface::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_IPSubinterface::getInstallDate() const
{
	return _installDate;
}

void UNIX_IPSubinterface::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_IPSubinterface::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_IPSubinterface::getName() const
{
	return _name;
}

void UNIX_IPSubinterface::setName(String &value)
{
	_name = value;
}

Boolean UNIX_IPSubinterface::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_IPSubinterface::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_IPSubinterface::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_IPSubinterface::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_IPSubinterface::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_IPSubinterface::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_IPSubinterface::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_IPSubinterface::getStatus() const
{
	return _status;
}

void UNIX_IPSubinterface::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_IPSubinterface::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_IPSubinterface::getHealthState() const
{
	return _healthState;
}

void UNIX_IPSubinterface::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_IPSubinterface::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_IPSubinterface::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_IPSubinterface::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_IPSubinterface::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_IPSubinterface::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_IPSubinterface::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_IPSubinterface::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_IPSubinterface::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_IPSubinterface::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_IPSubinterface::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_IPSubinterface::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_IPSubinterface::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_IPSubinterface::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_IPSubinterface::getEnabledState() const
{
	return _enabledState;
}

void UNIX_IPSubinterface::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_IPSubinterface::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_IPSubinterface::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_IPSubinterface::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_IPSubinterface::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_IPSubinterface::getRequestedState() const
{
	return _requestedState;
}

void UNIX_IPSubinterface::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_IPSubinterface::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_IPSubinterface::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_IPSubinterface::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_IPSubinterface::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_IPSubinterface::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_IPSubinterface::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_IPSubinterface::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_IPSubinterface::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_IPSubinterface::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_IPSubinterface::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_IPSubinterface::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_IPSubinterface::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_IPSubinterface::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_IPSubinterface::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_IPSubinterface::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_IPSubinterface::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_IPSubinterface::getSystemName() const
{
	return _systemName;
}

void UNIX_IPSubinterface::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_IPSubinterface::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_IPSubinterface::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_IPSubinterface::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_IPSubinterface::getNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_FORMAT, getNameFormat());
	return true;
}

String UNIX_IPSubinterface::getNameFormat() const
{
	return _nameFormat;
}

void UNIX_IPSubinterface::setNameFormat(String &value)
{
	_nameFormat = value;
}

Boolean UNIX_IPSubinterface::getProtocolType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_TYPE, getProtocolType());
	return true;
}

Uint16 UNIX_IPSubinterface::getProtocolType() const
{
	return _protocolType;
}

void UNIX_IPSubinterface::setProtocolType(Uint16 &value)
{
	_protocolType = value;
}

Boolean UNIX_IPSubinterface::getProtocolIFType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_I_F_TYPE, getProtocolIFType());
	return true;
}

Uint16 UNIX_IPSubinterface::getProtocolIFType() const
{
	return _protocolIFType;
}

void UNIX_IPSubinterface::setProtocolIFType(Uint16 &value)
{
	_protocolIFType = value;
}

Boolean UNIX_IPSubinterface::getOtherTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TYPE_DESCRIPTION, getOtherTypeDescription());
	return true;
}

String UNIX_IPSubinterface::getOtherTypeDescription() const
{
	return _otherTypeDescription;
}

void UNIX_IPSubinterface::setOtherTypeDescription(String &value)
{
	_otherTypeDescription = value;
}

Boolean UNIX_IPSubinterface::getBroadcastResetSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BROADCAST_RESET_SUPPORTED, getBroadcastResetSupported());
	return true;
}

Boolean UNIX_IPSubinterface::getBroadcastResetSupported() const
{
	return _broadcastResetSupported;
}

void UNIX_IPSubinterface::setBroadcastResetSupported(Boolean &value)
{
	_broadcastResetSupported = value;
}

Boolean UNIX_IPSubinterface::getIPv4Address(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IPV_4_ADDRESS, getIPv4Address());
	return true;
}

String UNIX_IPSubinterface::getIPv4Address() const
{
	return _iPv4Address;
}

void UNIX_IPSubinterface::setIPv4Address(String &value)
{
	_iPv4Address = value;
}

Boolean UNIX_IPSubinterface::getIPv6Address(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IPV_6_ADDRESS, getIPv6Address());
	return true;
}

String UNIX_IPSubinterface::getIPv6Address() const
{
	return _iPv6Address;
}

void UNIX_IPSubinterface::setIPv6Address(String &value)
{
	_iPv6Address = value;
}

Boolean UNIX_IPSubinterface::getAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESS, getAddress());
	return true;
}

String UNIX_IPSubinterface::getAddress() const
{
	return _address;
}

void UNIX_IPSubinterface::setAddress(String &value)
{
	_address = value;
}

Boolean UNIX_IPSubinterface::getSubnetMask(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUBNET_MASK, getSubnetMask());
	return true;
}

String UNIX_IPSubinterface::getSubnetMask() const
{
	return _subnetMask;
}

void UNIX_IPSubinterface::setSubnetMask(String &value)
{
	_subnetMask = value;
}

Boolean UNIX_IPSubinterface::getPrefixLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PREFIX_LENGTH, getPrefixLength());
	return true;
}

Uint8 UNIX_IPSubinterface::getPrefixLength() const
{
	return _prefixLength;
}

void UNIX_IPSubinterface::setPrefixLength(Uint8 &value)
{
	_prefixLength = value;
}

Boolean UNIX_IPSubinterface::getAddressType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESS_TYPE, getAddressType());
	return true;
}

Uint16 UNIX_IPSubinterface::getAddressType() const
{
	return _addressType;
}

void UNIX_IPSubinterface::setAddressType(Uint16 &value)
{
	_addressType = value;
}

Boolean UNIX_IPSubinterface::getIPVersionSupport(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IP_VERSION_SUPPORT, getIPVersionSupport());
	return true;
}

Uint16 UNIX_IPSubinterface::getIPVersionSupport() const
{
	return _iPVersionSupport;
}

void UNIX_IPSubinterface::setIPVersionSupport(Uint16 &value)
{
	_iPVersionSupport = value;
}

Boolean UNIX_IPSubinterface::getAddressOrigin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESS_ORIGIN, getAddressOrigin());
	return true;
}

Uint16 UNIX_IPSubinterface::getAddressOrigin() const
{
	return _addressOrigin;
}

void UNIX_IPSubinterface::setAddressOrigin(Uint16 &value)
{
	_addressOrigin = value;
}

Boolean UNIX_IPSubinterface::getIPv6AddressType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IPV_6_ADDRESS_TYPE, getIPv6AddressType());
	return true;
}

Uint16 UNIX_IPSubinterface::getIPv6AddressType() const
{
	return _iPv6AddressType;
}

void UNIX_IPSubinterface::setIPv6AddressType(Uint16 &value)
{
	_iPv6AddressType = value;
}

Boolean UNIX_IPSubinterface::getIPv6SubnetPrefixLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IPV_6_SUBNET_PREFIX_LENGTH, getIPv6SubnetPrefixLength());
	return true;
}

Uint16 UNIX_IPSubinterface::getIPv6SubnetPrefixLength() const
{
	return _iPv6SubnetPrefixLength;
}

void UNIX_IPSubinterface::setIPv6SubnetPrefixLength(Uint16 &value)
{
	_iPv6SubnetPrefixLength = value;
}

Boolean UNIX_IPSubinterface::getAddressPrefixOrigin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESS_PREFIX_ORIGIN, getAddressPrefixOrigin());
	return true;
}

Uint16 UNIX_IPSubinterface::getAddressPrefixOrigin() const
{
	return _addressPrefixOrigin;
}

void UNIX_IPSubinterface::setAddressPrefixOrigin(Uint16 &value)
{
	_addressPrefixOrigin = value;
}

Boolean UNIX_IPSubinterface::getAddressSuffixOrigin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESS_SUFFIX_ORIGIN, getAddressSuffixOrigin());
	return true;
}

Uint16 UNIX_IPSubinterface::getAddressSuffixOrigin() const
{
	return _addressSuffixOrigin;
}

void UNIX_IPSubinterface::setAddressSuffixOrigin(Uint16 &value)
{
	_addressSuffixOrigin = value;
}

Boolean UNIX_IPSubinterface::getOtherAddressPrefixOriginDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ADDRESS_PREFIX_ORIGIN_DESCRIPTION, getOtherAddressPrefixOriginDescription());
	return true;
}

String UNIX_IPSubinterface::getOtherAddressPrefixOriginDescription() const
{
	return _otherAddressPrefixOriginDescription;
}

void UNIX_IPSubinterface::setOtherAddressPrefixOriginDescription(String &value)
{
	_otherAddressPrefixOriginDescription = value;
}

Boolean UNIX_IPSubinterface::getOtherAddressSuffixOriginDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ADDRESS_SUFFIX_ORIGIN_DESCRIPTION, getOtherAddressSuffixOriginDescription());
	return true;
}

String UNIX_IPSubinterface::getOtherAddressSuffixOriginDescription() const
{
	return _otherAddressSuffixOriginDescription;
}

void UNIX_IPSubinterface::setOtherAddressSuffixOriginDescription(String &value)
{
	_otherAddressSuffixOriginDescription = value;
}

Boolean UNIX_IPSubinterface::getEncapsulationType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENCAPSULATION_TYPE, getEncapsulationType());
	return true;
}

Uint16 UNIX_IPSubinterface::getEncapsulationType() const
{
	return _encapsulationType;
}

void UNIX_IPSubinterface::setEncapsulationType(Uint16 &value)
{
	_encapsulationType = value;
}

Boolean UNIX_IPSubinterface::getParentInterface(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PARENT_INTERFACE, getParentInterface());
	return true;
}

String UNIX_IPSubinterface::getParentInterface() const
{
	return _parentInterface;
}

void UNIX_IPSubinterface::setParentInterface(String &value)
{
	_parentInterface = value;
}

Boolean UNIX_IPSubinterface::getEncapsulationValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENCAPSULATION_VALUE, getEncapsulationValue());
	return true;
}

String UNIX_IPSubinterface::getEncapsulationValue() const
{
	return _encapsulationValue;
}

void UNIX_IPSubinterface::setEncapsulationValue(String &value)
{
	_encapsulationValue = value;
}

Boolean UNIX_IPSubinterface::getOtherEncapsulationType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENCAPSULATION_TYPE, getOtherEncapsulationType());
	return true;
}

String UNIX_IPSubinterface::getOtherEncapsulationType() const
{
	return _otherEncapsulationType;
}

void UNIX_IPSubinterface::setOtherEncapsulationType(String &value)
{
	_otherEncapsulationType = value;
}


void UNIX_IPSubinterface::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("IPSubinterface");
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
	_creationClassName = String("UNIX_IPSubinterface");
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
	_encapsulationType = Uint16(0);
	_parentInterface = String ("");
	_encapsulationValue = String ("");
	_otherEncapsulationType = String ("");

}

Boolean UNIX_IPSubinterface::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "EncapsulationType"))
			{
				Uint16 encapsulationTypeValue;
				property.getValue().get(encapsulationTypeValue);
				setEncapsulationType(encapsulationTypeValue);
			}
			else if (String::equal(property.getName().getString(), "ParentInterface"))
			{
				String parentInterfaceValue;
				property.getValue().get(parentInterfaceValue);
				setParentInterface(parentInterfaceValue);
			}
			else if (String::equal(property.getName().getString(), "EncapsulationValue"))
			{
				String encapsulationValueValue;
				property.getValue().get(encapsulationValueValue);
				setEncapsulationValue(encapsulationValueValue);
			}
			else if (String::equal(property.getName().getString(), "OtherEncapsulationType"))
			{
				String otherEncapsulationTypeValue;
				property.getValue().get(otherEncapsulationTypeValue);
				setOtherEncapsulationType(otherEncapsulationTypeValue);
			}
	}
	return true;
}

Uint32 UNIX_IPSubinterface::invokeRequestStateChange(
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

Uint32 UNIX_IPSubinterface::invokeBroadcastReset()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method BroadcastReset */
	
	
	
	return returnValue;
}


Boolean UNIX_IPSubinterface::initialize()
{
	return false;
}

Boolean UNIX_IPSubinterface::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("IPSubinterface");
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
	_creationClassName = String("UNIX_IPSubinterface");
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
	_encapsulationType = Uint16(0);
	_parentInterface = String ("");
	_encapsulationValue = String ("");
	_otherEncapsulationType = String ("");
	
	return false;
}

Boolean UNIX_IPSubinterface::finalize()
{
	return false;
}

Boolean UNIX_IPSubinterface::loadByName(const String name)
{
	return false;
}

Boolean UNIX_IPSubinterface::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_IPSubinterface::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IPSubinterface::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IPSubinterface::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IPSubinterface::validateInstance()
{
	return true;
}

