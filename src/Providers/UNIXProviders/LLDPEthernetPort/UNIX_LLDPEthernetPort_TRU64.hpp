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


UNIX_LLDPEthernetPort::UNIX_LLDPEthernetPort(void)
{
}

UNIX_LLDPEthernetPort::~UNIX_LLDPEthernetPort(void)
{
}

Boolean UNIX_LLDPEthernetPort::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_LLDPEthernetPort::getInstanceID() const
{
	return _instanceID;
}

void UNIX_LLDPEthernetPort::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_LLDPEthernetPort::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_LLDPEthernetPort::getCaption() const
{
	return _caption;
}

void UNIX_LLDPEthernetPort::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_LLDPEthernetPort::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_LLDPEthernetPort::getDescription() const
{
	return _description;
}

void UNIX_LLDPEthernetPort::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_LLDPEthernetPort::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_LLDPEthernetPort::getElementName() const
{
	return _elementName;
}

void UNIX_LLDPEthernetPort::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_LLDPEthernetPort::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_LLDPEthernetPort::getGeneration() const
{
	return _generation;
}

void UNIX_LLDPEthernetPort::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_LLDPEthernetPort::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_LLDPEthernetPort::getInstallDate() const
{
	return _installDate;
}

void UNIX_LLDPEthernetPort::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_LLDPEthernetPort::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_LLDPEthernetPort::getName() const
{
	return _name;
}

void UNIX_LLDPEthernetPort::setName(String &value)
{
	_name = value;
}

Boolean UNIX_LLDPEthernetPort::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_LLDPEthernetPort::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_LLDPEthernetPort::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_LLDPEthernetPort::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_LLDPEthernetPort::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_LLDPEthernetPort::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_LLDPEthernetPort::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_LLDPEthernetPort::getStatus() const
{
	return _status;
}

void UNIX_LLDPEthernetPort::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_LLDPEthernetPort::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_LLDPEthernetPort::getHealthState() const
{
	return _healthState;
}

void UNIX_LLDPEthernetPort::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_LLDPEthernetPort::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_LLDPEthernetPort::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_LLDPEthernetPort::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_LLDPEthernetPort::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_LLDPEthernetPort::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_LLDPEthernetPort::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_LLDPEthernetPort::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_LLDPEthernetPort::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_LLDPEthernetPort::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_LLDPEthernetPort::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_LLDPEthernetPort::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_LLDPEthernetPort::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_LLDPEthernetPort::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_LLDPEthernetPort::getEnabledState() const
{
	return _enabledState;
}

void UNIX_LLDPEthernetPort::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_LLDPEthernetPort::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_LLDPEthernetPort::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_LLDPEthernetPort::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_LLDPEthernetPort::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_LLDPEthernetPort::getRequestedState() const
{
	return _requestedState;
}

void UNIX_LLDPEthernetPort::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_LLDPEthernetPort::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_LLDPEthernetPort::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_LLDPEthernetPort::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_LLDPEthernetPort::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_LLDPEthernetPort::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_LLDPEthernetPort::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_LLDPEthernetPort::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_LLDPEthernetPort::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_LLDPEthernetPort::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_LLDPEthernetPort::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_LLDPEthernetPort::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_LLDPEthernetPort::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_LLDPEthernetPort::getAllocationState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOCATION_STATE, getAllocationState());
	return true;
}

String UNIX_LLDPEthernetPort::getAllocationState() const
{
	return _allocationState;
}

void UNIX_LLDPEthernetPort::setAllocationState(String &value)
{
	_allocationState = value;
}

Boolean UNIX_LLDPEthernetPort::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_LLDPEthernetPort::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_LLDPEthernetPort::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_LLDPEthernetPort::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_LLDPEthernetPort::getSystemName() const
{
	return _systemName;
}

void UNIX_LLDPEthernetPort::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_LLDPEthernetPort::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_LLDPEthernetPort::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_LLDPEthernetPort::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_LLDPEthernetPort::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_LLDPEthernetPort::getDeviceID() const
{
	return _deviceID;
}

void UNIX_LLDPEthernetPort::setDeviceID(String &value)
{
	_deviceID = value;
}

Boolean UNIX_LLDPEthernetPort::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_LLDPEthernetPort::getPowerManagementSupported() const
{
	return _powerManagementSupported;
}

void UNIX_LLDPEthernetPort::setPowerManagementSupported(Boolean &value)
{
	_powerManagementSupported = value;
}

Boolean UNIX_LLDPEthernetPort::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_LLDPEthernetPort::getPowerManagementCapabilities() const
{
	return _powerManagementCapabilities;
}

void UNIX_LLDPEthernetPort::setPowerManagementCapabilities(Array<Uint16> &value)
{
	_powerManagementCapabilities = value;
}

Boolean UNIX_LLDPEthernetPort::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_LLDPEthernetPort::getAvailability() const
{
	return _availability;
}

void UNIX_LLDPEthernetPort::setAvailability(Uint16 &value)
{
	_availability = value;
}

Boolean UNIX_LLDPEthernetPort::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_LLDPEthernetPort::getStatusInfo() const
{
	return _statusInfo;
}

void UNIX_LLDPEthernetPort::setStatusInfo(Uint16 &value)
{
	_statusInfo = value;
}

Boolean UNIX_LLDPEthernetPort::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_LLDPEthernetPort::getLastErrorCode() const
{
	return _lastErrorCode;
}

void UNIX_LLDPEthernetPort::setLastErrorCode(Uint32 &value)
{
	_lastErrorCode = value;
}

Boolean UNIX_LLDPEthernetPort::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_LLDPEthernetPort::getErrorDescription() const
{
	return _errorDescription;
}

void UNIX_LLDPEthernetPort::setErrorDescription(String &value)
{
	_errorDescription = value;
}

Boolean UNIX_LLDPEthernetPort::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_LLDPEthernetPort::getErrorCleared() const
{
	return _errorCleared;
}

void UNIX_LLDPEthernetPort::setErrorCleared(Boolean &value)
{
	_errorCleared = value;
}

Boolean UNIX_LLDPEthernetPort::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_LLDPEthernetPort::getOtherIdentifyingInfo() const
{
	return _otherIdentifyingInfo;
}

void UNIX_LLDPEthernetPort::setOtherIdentifyingInfo(Array<String> &value)
{
	_otherIdentifyingInfo = value;
}

Boolean UNIX_LLDPEthernetPort::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_LLDPEthernetPort::getPowerOnHours() const
{
	return _powerOnHours;
}

void UNIX_LLDPEthernetPort::setPowerOnHours(Uint64 &value)
{
	_powerOnHours = value;
}

Boolean UNIX_LLDPEthernetPort::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_LLDPEthernetPort::getTotalPowerOnHours() const
{
	return _totalPowerOnHours;
}

void UNIX_LLDPEthernetPort::setTotalPowerOnHours(Uint64 &value)
{
	_totalPowerOnHours = value;
}

Boolean UNIX_LLDPEthernetPort::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_LLDPEthernetPort::getIdentifyingDescriptions() const
{
	return _identifyingDescriptions;
}

void UNIX_LLDPEthernetPort::setIdentifyingDescriptions(Array<String> &value)
{
	_identifyingDescriptions = value;
}

Boolean UNIX_LLDPEthernetPort::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_LLDPEthernetPort::getAdditionalAvailability() const
{
	return _additionalAvailability;
}

void UNIX_LLDPEthernetPort::setAdditionalAvailability(Array<Uint16> &value)
{
	_additionalAvailability = value;
}

Boolean UNIX_LLDPEthernetPort::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_LLDPEthernetPort::getMaxQuiesceTime() const
{
	return _maxQuiesceTime;
}

void UNIX_LLDPEthernetPort::setMaxQuiesceTime(Uint64 &value)
{
	_maxQuiesceTime = value;
}

Boolean UNIX_LLDPEthernetPort::getLocationIndicator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCATION_INDICATOR, getLocationIndicator());
	return true;
}

Uint16 UNIX_LLDPEthernetPort::getLocationIndicator() const
{
	return _locationIndicator;
}

void UNIX_LLDPEthernetPort::setLocationIndicator(Uint16 &value)
{
	_locationIndicator = value;
}

Boolean UNIX_LLDPEthernetPort::getSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SPEED, getSpeed());
	return true;
}

Uint64 UNIX_LLDPEthernetPort::getSpeed() const
{
	return _speed;
}

void UNIX_LLDPEthernetPort::setSpeed(Uint64 &value)
{
	_speed = value;
}

Boolean UNIX_LLDPEthernetPort::getMaxSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_SPEED, getMaxSpeed());
	return true;
}

Uint64 UNIX_LLDPEthernetPort::getMaxSpeed() const
{
	return _maxSpeed;
}

void UNIX_LLDPEthernetPort::setMaxSpeed(Uint64 &value)
{
	_maxSpeed = value;
}

Boolean UNIX_LLDPEthernetPort::getRequestedSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_SPEED, getRequestedSpeed());
	return true;
}

Uint64 UNIX_LLDPEthernetPort::getRequestedSpeed() const
{
	return _requestedSpeed;
}

void UNIX_LLDPEthernetPort::setRequestedSpeed(Uint64 &value)
{
	_requestedSpeed = value;
}

Boolean UNIX_LLDPEthernetPort::getUsageRestriction(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USAGE_RESTRICTION, getUsageRestriction());
	return true;
}

Uint16 UNIX_LLDPEthernetPort::getUsageRestriction() const
{
	return _usageRestriction;
}

void UNIX_LLDPEthernetPort::setUsageRestriction(Uint16 &value)
{
	_usageRestriction = value;
}

Boolean UNIX_LLDPEthernetPort::getPortType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_TYPE, getPortType());
	return true;
}

Uint16 UNIX_LLDPEthernetPort::getPortType() const
{
	return _portType;
}

void UNIX_LLDPEthernetPort::setPortType(Uint16 &value)
{
	_portType = value;
}

Boolean UNIX_LLDPEthernetPort::getOtherPortType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_PORT_TYPE, getOtherPortType());
	return true;
}

String UNIX_LLDPEthernetPort::getOtherPortType() const
{
	return _otherPortType;
}

void UNIX_LLDPEthernetPort::setOtherPortType(String &value)
{
	_otherPortType = value;
}

Boolean UNIX_LLDPEthernetPort::getOtherNetworkPortType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_NETWORK_PORT_TYPE, getOtherNetworkPortType());
	return true;
}

String UNIX_LLDPEthernetPort::getOtherNetworkPortType() const
{
	return _otherNetworkPortType;
}

void UNIX_LLDPEthernetPort::setOtherNetworkPortType(String &value)
{
	_otherNetworkPortType = value;
}

Boolean UNIX_LLDPEthernetPort::getPortNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_NUMBER, getPortNumber());
	return true;
}

Uint16 UNIX_LLDPEthernetPort::getPortNumber() const
{
	return _portNumber;
}

void UNIX_LLDPEthernetPort::setPortNumber(Uint16 &value)
{
	_portNumber = value;
}

Boolean UNIX_LLDPEthernetPort::getLinkTechnology(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LINK_TECHNOLOGY, getLinkTechnology());
	return true;
}

Uint16 UNIX_LLDPEthernetPort::getLinkTechnology() const
{
	return _linkTechnology;
}

void UNIX_LLDPEthernetPort::setLinkTechnology(Uint16 &value)
{
	_linkTechnology = value;
}

Boolean UNIX_LLDPEthernetPort::getOtherLinkTechnology(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_LINK_TECHNOLOGY, getOtherLinkTechnology());
	return true;
}

String UNIX_LLDPEthernetPort::getOtherLinkTechnology() const
{
	return _otherLinkTechnology;
}

void UNIX_LLDPEthernetPort::setOtherLinkTechnology(String &value)
{
	_otherLinkTechnology = value;
}

Boolean UNIX_LLDPEthernetPort::getPermanentAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERMANENT_ADDRESS, getPermanentAddress());
	return true;
}

String UNIX_LLDPEthernetPort::getPermanentAddress() const
{
	return _permanentAddress;
}

void UNIX_LLDPEthernetPort::setPermanentAddress(String &value)
{
	_permanentAddress = value;
}

Boolean UNIX_LLDPEthernetPort::getNetworkAddresses(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NETWORK_ADDRESSES, getNetworkAddresses());
	return true;
}

Array<String> UNIX_LLDPEthernetPort::getNetworkAddresses() const
{
	return _networkAddresses;
}

void UNIX_LLDPEthernetPort::setNetworkAddresses(Array<String> &value)
{
	_networkAddresses = value;
}

Boolean UNIX_LLDPEthernetPort::getFullDuplex(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FULL_DUPLEX, getFullDuplex());
	return true;
}

Boolean UNIX_LLDPEthernetPort::getFullDuplex() const
{
	return _fullDuplex;
}

void UNIX_LLDPEthernetPort::setFullDuplex(Boolean &value)
{
	_fullDuplex = value;
}

Boolean UNIX_LLDPEthernetPort::getAutoSense(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTO_SENSE, getAutoSense());
	return true;
}

Boolean UNIX_LLDPEthernetPort::getAutoSense() const
{
	return _autoSense;
}

void UNIX_LLDPEthernetPort::setAutoSense(Boolean &value)
{
	_autoSense = value;
}

Boolean UNIX_LLDPEthernetPort::getSupportedMaximumTransmissionUnit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_MAXIMUM_TRANSMISSION_UNIT, getSupportedMaximumTransmissionUnit());
	return true;
}

Uint64 UNIX_LLDPEthernetPort::getSupportedMaximumTransmissionUnit() const
{
	return _supportedMaximumTransmissionUnit;
}

void UNIX_LLDPEthernetPort::setSupportedMaximumTransmissionUnit(Uint64 &value)
{
	_supportedMaximumTransmissionUnit = value;
}

Boolean UNIX_LLDPEthernetPort::getActiveMaximumTransmissionUnit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACTIVE_MAXIMUM_TRANSMISSION_UNIT, getActiveMaximumTransmissionUnit());
	return true;
}

Uint64 UNIX_LLDPEthernetPort::getActiveMaximumTransmissionUnit() const
{
	return _activeMaximumTransmissionUnit;
}

void UNIX_LLDPEthernetPort::setActiveMaximumTransmissionUnit(Uint64 &value)
{
	_activeMaximumTransmissionUnit = value;
}

Boolean UNIX_LLDPEthernetPort::getMaxDataSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_DATA_SIZE, getMaxDataSize());
	return true;
}

Uint32 UNIX_LLDPEthernetPort::getMaxDataSize() const
{
	return _maxDataSize;
}

void UNIX_LLDPEthernetPort::setMaxDataSize(Uint32 &value)
{
	_maxDataSize = value;
}

Boolean UNIX_LLDPEthernetPort::getCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITIES, getCapabilities());
	return true;
}

Array<Uint16> UNIX_LLDPEthernetPort::getCapabilities() const
{
	return _capabilities;
}

void UNIX_LLDPEthernetPort::setCapabilities(Array<Uint16> &value)
{
	_capabilities = value;
}

Boolean UNIX_LLDPEthernetPort::getCapabilityDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITY_DESCRIPTIONS, getCapabilityDescriptions());
	return true;
}

Array<String> UNIX_LLDPEthernetPort::getCapabilityDescriptions() const
{
	return _capabilityDescriptions;
}

void UNIX_LLDPEthernetPort::setCapabilityDescriptions(Array<String> &value)
{
	_capabilityDescriptions = value;
}

Boolean UNIX_LLDPEthernetPort::getEnabledCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_CAPABILITIES, getEnabledCapabilities());
	return true;
}

Array<Uint16> UNIX_LLDPEthernetPort::getEnabledCapabilities() const
{
	return _enabledCapabilities;
}

void UNIX_LLDPEthernetPort::setEnabledCapabilities(Array<Uint16> &value)
{
	_enabledCapabilities = value;
}

Boolean UNIX_LLDPEthernetPort::getOtherEnabledCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_CAPABILITIES, getOtherEnabledCapabilities());
	return true;
}

Array<String> UNIX_LLDPEthernetPort::getOtherEnabledCapabilities() const
{
	return _otherEnabledCapabilities;
}

void UNIX_LLDPEthernetPort::setOtherEnabledCapabilities(Array<String> &value)
{
	_otherEnabledCapabilities = value;
}

Boolean UNIX_LLDPEthernetPort::getPortDiscriminator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_DISCRIMINATOR, getPortDiscriminator());
	return true;
}

Array<String> UNIX_LLDPEthernetPort::getPortDiscriminator() const
{
	return _portDiscriminator;
}

void UNIX_LLDPEthernetPort::setPortDiscriminator(Array<String> &value)
{
	_portDiscriminator = value;
}

Boolean UNIX_LLDPEthernetPort::getPVID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_P_V_ID, getPVID());
	return true;
}

Uint16 UNIX_LLDPEthernetPort::getPVID() const
{
	return _pVID;
}

void UNIX_LLDPEthernetPort::setPVID(Uint16 &value)
{
	_pVID = value;
}

Boolean UNIX_LLDPEthernetPort::getPoEPowerEntityType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PO_E_POWER_ENTITY_TYPE, getPoEPowerEntityType());
	return true;
}

Uint16 UNIX_LLDPEthernetPort::getPoEPowerEntityType() const
{
	return _poEPowerEntityType;
}

void UNIX_LLDPEthernetPort::setPoEPowerEntityType(Uint16 &value)
{
	_poEPowerEntityType = value;
}

Boolean UNIX_LLDPEthernetPort::getConfigPortVlanTxEnable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIG_PORT_VLAN_TX_ENABLE, getConfigPortVlanTxEnable());
	return true;
}

Boolean UNIX_LLDPEthernetPort::getConfigPortVlanTxEnable() const
{
	return _configPortVlanTxEnable;
}

void UNIX_LLDPEthernetPort::setConfigPortVlanTxEnable(Boolean &value)
{
	_configPortVlanTxEnable = value;
}

Boolean UNIX_LLDPEthernetPort::getConfigManVidTxEnable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIG_MAN_VID_TX_ENABLE, getConfigManVidTxEnable());
	return true;
}

Boolean UNIX_LLDPEthernetPort::getConfigManVidTxEnable() const
{
	return _configManVidTxEnable;
}

void UNIX_LLDPEthernetPort::setConfigManVidTxEnable(Boolean &value)
{
	_configManVidTxEnable = value;
}

Boolean UNIX_LLDPEthernetPort::getMessageTxInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MESSAGE_TX_INTERVAL, getMessageTxInterval());
	return true;
}

Uint16 UNIX_LLDPEthernetPort::getMessageTxInterval() const
{
	return _messageTxInterval;
}

void UNIX_LLDPEthernetPort::setMessageTxInterval(Uint16 &value)
{
	_messageTxInterval = value;
}

Boolean UNIX_LLDPEthernetPort::getMessageTxHoldMultiplier(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MESSAGE_TX_HOLD_MULTIPLIER, getMessageTxHoldMultiplier());
	return true;
}

Uint8 UNIX_LLDPEthernetPort::getMessageTxHoldMultiplier() const
{
	return _messageTxHoldMultiplier;
}

void UNIX_LLDPEthernetPort::setMessageTxHoldMultiplier(Uint8 &value)
{
	_messageTxHoldMultiplier = value;
}

Boolean UNIX_LLDPEthernetPort::getReinitDelay(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REINIT_DELAY, getReinitDelay());
	return true;
}

Uint8 UNIX_LLDPEthernetPort::getReinitDelay() const
{
	return _reinitDelay;
}

void UNIX_LLDPEthernetPort::setReinitDelay(Uint8 &value)
{
	_reinitDelay = value;
}

Boolean UNIX_LLDPEthernetPort::getNotificationInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NOTIFICATION_INTERVAL, getNotificationInterval());
	return true;
}

Uint16 UNIX_LLDPEthernetPort::getNotificationInterval() const
{
	return _notificationInterval;
}

void UNIX_LLDPEthernetPort::setNotificationInterval(Uint16 &value)
{
	_notificationInterval = value;
}

Boolean UNIX_LLDPEthernetPort::getTxCreditMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TX_CREDIT_MAX, getTxCreditMax());
	return true;
}

Uint8 UNIX_LLDPEthernetPort::getTxCreditMax() const
{
	return _txCreditMax;
}

void UNIX_LLDPEthernetPort::setTxCreditMax(Uint8 &value)
{
	_txCreditMax = value;
}

Boolean UNIX_LLDPEthernetPort::getMessageFastTx(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MESSAGE_FAST_TX, getMessageFastTx());
	return true;
}

Uint16 UNIX_LLDPEthernetPort::getMessageFastTx() const
{
	return _messageFastTx;
}

void UNIX_LLDPEthernetPort::setMessageFastTx(Uint16 &value)
{
	_messageFastTx = value;
}

Boolean UNIX_LLDPEthernetPort::getTxFastInit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TX_FAST_INIT, getTxFastInit());
	return true;
}

Uint8 UNIX_LLDPEthernetPort::getTxFastInit() const
{
	return _txFastInit;
}

void UNIX_LLDPEthernetPort::setTxFastInit(Uint8 &value)
{
	_txFastInit = value;
}

Boolean UNIX_LLDPEthernetPort::getDestMacAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEST_MAC_ADDRESS, getDestMacAddress());
	return true;
}

Array<String> UNIX_LLDPEthernetPort::getDestMacAddress() const
{
	return _destMacAddress;
}

void UNIX_LLDPEthernetPort::setDestMacAddress(Array<String> &value)
{
	_destMacAddress = value;
}

Boolean UNIX_LLDPEthernetPort::getPortConfigAdminStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_CONFIG_ADMIN_STATUS, getPortConfigAdminStatus());
	return true;
}

Array<Uint8> UNIX_LLDPEthernetPort::getPortConfigAdminStatus() const
{
	return _portConfigAdminStatus;
}

void UNIX_LLDPEthernetPort::setPortConfigAdminStatus(Array<Uint8> &value)
{
	_portConfigAdminStatus = value;
}

Boolean UNIX_LLDPEthernetPort::getPortConfigNotificationEnable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_CONFIG_NOTIFICATION_ENABLE, getPortConfigNotificationEnable());
	return true;
}

Array<Boolean> UNIX_LLDPEthernetPort::getPortConfigNotificationEnable() const
{
	return _portConfigNotificationEnable;
}

void UNIX_LLDPEthernetPort::setPortConfigNotificationEnable(Array<Boolean> &value)
{
	_portConfigNotificationEnable = value;
}

Boolean UNIX_LLDPEthernetPort::getPortConfigPortDescriptionTLVTxEnable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_CONFIG_PORT_DESCRIPTION_T_L_V_TX_ENABLE, getPortConfigPortDescriptionTLVTxEnable());
	return true;
}

Array<Boolean> UNIX_LLDPEthernetPort::getPortConfigPortDescriptionTLVTxEnable() const
{
	return _portConfigPortDescriptionTLVTxEnable;
}

void UNIX_LLDPEthernetPort::setPortConfigPortDescriptionTLVTxEnable(Array<Boolean> &value)
{
	_portConfigPortDescriptionTLVTxEnable = value;
}

Boolean UNIX_LLDPEthernetPort::getPortConfigSystemNameTLVTxEnable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_CONFIG_SYSTEM_NAME_T_L_V_TX_ENABLE, getPortConfigSystemNameTLVTxEnable());
	return true;
}

Array<Boolean> UNIX_LLDPEthernetPort::getPortConfigSystemNameTLVTxEnable() const
{
	return _portConfigSystemNameTLVTxEnable;
}

void UNIX_LLDPEthernetPort::setPortConfigSystemNameTLVTxEnable(Array<Boolean> &value)
{
	_portConfigSystemNameTLVTxEnable = value;
}

Boolean UNIX_LLDPEthernetPort::getPortConfigSystemDescriptionTLVTxEnable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_CONFIG_SYSTEM_DESCRIPTION_T_L_V_TX_ENABLE, getPortConfigSystemDescriptionTLVTxEnable());
	return true;
}

Array<Boolean> UNIX_LLDPEthernetPort::getPortConfigSystemDescriptionTLVTxEnable() const
{
	return _portConfigSystemDescriptionTLVTxEnable;
}

void UNIX_LLDPEthernetPort::setPortConfigSystemDescriptionTLVTxEnable(Array<Boolean> &value)
{
	_portConfigSystemDescriptionTLVTxEnable = value;
}

Boolean UNIX_LLDPEthernetPort::getPortConfigSystemCapabilitiesTLVTxEnable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_CONFIG_SYSTEM_CAPABILITIES_T_L_V_TX_ENABLE, getPortConfigSystemCapabilitiesTLVTxEnable());
	return true;
}

Array<Boolean> UNIX_LLDPEthernetPort::getPortConfigSystemCapabilitiesTLVTxEnable() const
{
	return _portConfigSystemCapabilitiesTLVTxEnable;
}

void UNIX_LLDPEthernetPort::setPortConfigSystemCapabilitiesTLVTxEnable(Array<Boolean> &value)
{
	_portConfigSystemCapabilitiesTLVTxEnable = value;
}

Boolean UNIX_LLDPEthernetPort::getManAddrConfigDestAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAN_ADDR_CONFIG_DEST_ADDRESS, getManAddrConfigDestAddress());
	return true;
}

Array<String> UNIX_LLDPEthernetPort::getManAddrConfigDestAddress() const
{
	return _manAddrConfigDestAddress;
}

void UNIX_LLDPEthernetPort::setManAddrConfigDestAddress(Array<String> &value)
{
	_manAddrConfigDestAddress = value;
}

Boolean UNIX_LLDPEthernetPort::getManAddrConfigLocManAddrSubtype(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAN_ADDR_CONFIG_LOC_MAN_ADDR_SUBTYPE, getManAddrConfigLocManAddrSubtype());
	return true;
}

Array<Uint16> UNIX_LLDPEthernetPort::getManAddrConfigLocManAddrSubtype() const
{
	return _manAddrConfigLocManAddrSubtype;
}

void UNIX_LLDPEthernetPort::setManAddrConfigLocManAddrSubtype(Array<Uint16> &value)
{
	_manAddrConfigLocManAddrSubtype = value;
}

Boolean UNIX_LLDPEthernetPort::getManAddrConfigLocManAddr(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAN_ADDR_CONFIG_LOC_MAN_ADDR, getManAddrConfigLocManAddr());
	return true;
}

Array<String> UNIX_LLDPEthernetPort::getManAddrConfigLocManAddr() const
{
	return _manAddrConfigLocManAddr;
}

void UNIX_LLDPEthernetPort::setManAddrConfigLocManAddr(Array<String> &value)
{
	_manAddrConfigLocManAddr = value;
}

Boolean UNIX_LLDPEthernetPort::getManAddrConfigTxEnable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAN_ADDR_CONFIG_TX_ENABLE, getManAddrConfigTxEnable());
	return true;
}

Array<Boolean> UNIX_LLDPEthernetPort::getManAddrConfigTxEnable() const
{
	return _manAddrConfigTxEnable;
}

void UNIX_LLDPEthernetPort::setManAddrConfigTxEnable(Array<Boolean> &value)
{
	_manAddrConfigTxEnable = value;
}

Boolean UNIX_LLDPEthernetPort::getLocChassisIdSubtype(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_CHASSIS_ID_SUBTYPE, getLocChassisIdSubtype());
	return true;
}

Uint8 UNIX_LLDPEthernetPort::getLocChassisIdSubtype() const
{
	return _locChassisIdSubtype;
}

void UNIX_LLDPEthernetPort::setLocChassisIdSubtype(Uint8 &value)
{
	_locChassisIdSubtype = value;
}

Boolean UNIX_LLDPEthernetPort::getLocChassisId(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_CHASSIS_ID, getLocChassisId());
	return true;
}

String UNIX_LLDPEthernetPort::getLocChassisId() const
{
	return _locChassisId;
}

void UNIX_LLDPEthernetPort::setLocChassisId(String &value)
{
	_locChassisId = value;
}

Boolean UNIX_LLDPEthernetPort::getLocSysName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_SYS_NAME, getLocSysName());
	return true;
}

String UNIX_LLDPEthernetPort::getLocSysName() const
{
	return _locSysName;
}

void UNIX_LLDPEthernetPort::setLocSysName(String &value)
{
	_locSysName = value;
}

Boolean UNIX_LLDPEthernetPort::getLocSysDesc(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_SYS_DESC, getLocSysDesc());
	return true;
}

String UNIX_LLDPEthernetPort::getLocSysDesc() const
{
	return _locSysDesc;
}

void UNIX_LLDPEthernetPort::setLocSysDesc(String &value)
{
	_locSysDesc = value;
}

Boolean UNIX_LLDPEthernetPort::getLocSysCapSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_SYS_CAP_SUPPORTED, getLocSysCapSupported());
	return true;
}

Array<Uint8> UNIX_LLDPEthernetPort::getLocSysCapSupported() const
{
	return _locSysCapSupported;
}

void UNIX_LLDPEthernetPort::setLocSysCapSupported(Array<Uint8> &value)
{
	_locSysCapSupported = value;
}

Boolean UNIX_LLDPEthernetPort::getLocSysCapEnabled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_SYS_CAP_ENABLED, getLocSysCapEnabled());
	return true;
}

Array<Boolean> UNIX_LLDPEthernetPort::getLocSysCapEnabled() const
{
	return _locSysCapEnabled;
}

void UNIX_LLDPEthernetPort::setLocSysCapEnabled(Array<Boolean> &value)
{
	_locSysCapEnabled = value;
}

Boolean UNIX_LLDPEthernetPort::getLocPortIdSubtype(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_PORT_ID_SUBTYPE, getLocPortIdSubtype());
	return true;
}

Uint8 UNIX_LLDPEthernetPort::getLocPortIdSubtype() const
{
	return _locPortIdSubtype;
}

void UNIX_LLDPEthernetPort::setLocPortIdSubtype(Uint8 &value)
{
	_locPortIdSubtype = value;
}

Boolean UNIX_LLDPEthernetPort::getLocPortID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_PORT_ID, getLocPortID());
	return true;
}

String UNIX_LLDPEthernetPort::getLocPortID() const
{
	return _locPortID;
}

void UNIX_LLDPEthernetPort::setLocPortID(String &value)
{
	_locPortID = value;
}

Boolean UNIX_LLDPEthernetPort::getLocPortDesc(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_PORT_DESC, getLocPortDesc());
	return true;
}

String UNIX_LLDPEthernetPort::getLocPortDesc() const
{
	return _locPortDesc;
}

void UNIX_LLDPEthernetPort::setLocPortDesc(String &value)
{
	_locPortDesc = value;
}

Boolean UNIX_LLDPEthernetPort::getLocTxSystemValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_TX_SYSTEM_VALUE, getLocTxSystemValue());
	return true;
}

Uint16 UNIX_LLDPEthernetPort::getLocTxSystemValue() const
{
	return _locTxSystemValue;
}

void UNIX_LLDPEthernetPort::setLocTxSystemValue(Uint16 &value)
{
	_locTxSystemValue = value;
}

Boolean UNIX_LLDPEthernetPort::getRemTxSystemValueEcho(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_TX_SYSTEM_VALUE_ECHO, getRemTxSystemValueEcho());
	return true;
}

Uint16 UNIX_LLDPEthernetPort::getRemTxSystemValueEcho() const
{
	return _remTxSystemValueEcho;
}

void UNIX_LLDPEthernetPort::setRemTxSystemValueEcho(Uint16 &value)
{
	_remTxSystemValueEcho = value;
}

Boolean UNIX_LLDPEthernetPort::getLocRxSystemValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_RX_SYSTEM_VALUE, getLocRxSystemValue());
	return true;
}

Uint16 UNIX_LLDPEthernetPort::getLocRxSystemValue() const
{
	return _locRxSystemValue;
}

void UNIX_LLDPEthernetPort::setLocRxSystemValue(Uint16 &value)
{
	_locRxSystemValue = value;
}

Boolean UNIX_LLDPEthernetPort::getRemRxSystemValueEcho(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_RX_SYSTEM_VALUE_ECHO, getRemRxSystemValueEcho());
	return true;
}

Uint16 UNIX_LLDPEthernetPort::getRemRxSystemValueEcho() const
{
	return _remRxSystemValueEcho;
}

void UNIX_LLDPEthernetPort::setRemRxSystemValueEcho(Uint16 &value)
{
	_remRxSystemValueEcho = value;
}

Boolean UNIX_LLDPEthernetPort::getLocFbSystemValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_FB_SYSTEM_VALUE, getLocFbSystemValue());
	return true;
}

Uint16 UNIX_LLDPEthernetPort::getLocFbSystemValue() const
{
	return _locFbSystemValue;
}

void UNIX_LLDPEthernetPort::setLocFbSystemValue(Uint16 &value)
{
	_locFbSystemValue = value;
}

Boolean UNIX_LLDPEthernetPort::getRemTxSystemValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_TX_SYSTEM_VALUE, getRemTxSystemValue());
	return true;
}

Uint16 UNIX_LLDPEthernetPort::getRemTxSystemValue() const
{
	return _remTxSystemValue;
}

void UNIX_LLDPEthernetPort::setRemTxSystemValue(Uint16 &value)
{
	_remTxSystemValue = value;
}

Boolean UNIX_LLDPEthernetPort::getLocTxSystemValueEcho(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_TX_SYSTEM_VALUE_ECHO, getLocTxSystemValueEcho());
	return true;
}

Uint16 UNIX_LLDPEthernetPort::getLocTxSystemValueEcho() const
{
	return _locTxSystemValueEcho;
}

void UNIX_LLDPEthernetPort::setLocTxSystemValueEcho(Uint16 &value)
{
	_locTxSystemValueEcho = value;
}

Boolean UNIX_LLDPEthernetPort::getRemRxSystemValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_RX_SYSTEM_VALUE, getRemRxSystemValue());
	return true;
}

Uint16 UNIX_LLDPEthernetPort::getRemRxSystemValue() const
{
	return _remRxSystemValue;
}

void UNIX_LLDPEthernetPort::setRemRxSystemValue(Uint16 &value)
{
	_remRxSystemValue = value;
}

Boolean UNIX_LLDPEthernetPort::getLocRxSystemValueEcho(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_RX_SYSTEM_VALUE_ECHO, getLocRxSystemValueEcho());
	return true;
}

Uint16 UNIX_LLDPEthernetPort::getLocRxSystemValueEcho() const
{
	return _locRxSystemValueEcho;
}

void UNIX_LLDPEthernetPort::setLocRxSystemValueEcho(Uint16 &value)
{
	_locRxSystemValueEcho = value;
}

Boolean UNIX_LLDPEthernetPort::getLocResolvedTxSystemValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_RESOLVED_TX_SYSTEM_VALUE, getLocResolvedTxSystemValue());
	return true;
}

Uint16 UNIX_LLDPEthernetPort::getLocResolvedTxSystemValue() const
{
	return _locResolvedTxSystemValue;
}

void UNIX_LLDPEthernetPort::setLocResolvedTxSystemValue(Uint16 &value)
{
	_locResolvedTxSystemValue = value;
}

Boolean UNIX_LLDPEthernetPort::getLocResolvedRxSystemValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_RESOLVED_RX_SYSTEM_VALUE, getLocResolvedRxSystemValue());
	return true;
}

Uint16 UNIX_LLDPEthernetPort::getLocResolvedRxSystemValue() const
{
	return _locResolvedRxSystemValue;
}

void UNIX_LLDPEthernetPort::setLocResolvedRxSystemValue(Uint16 &value)
{
	_locResolvedRxSystemValue = value;
}

Boolean UNIX_LLDPEthernetPort::getMaximumFrameSizeTLVEnabled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAXIMUM_FRAME_SIZE_T_L_V_ENABLED, getMaximumFrameSizeTLVEnabled());
	return true;
}

Boolean UNIX_LLDPEthernetPort::getMaximumFrameSizeTLVEnabled() const
{
	return _maximumFrameSizeTLVEnabled;
}

void UNIX_LLDPEthernetPort::setMaximumFrameSizeTLVEnabled(Boolean &value)
{
	_maximumFrameSizeTLVEnabled = value;
}

Boolean UNIX_LLDPEthernetPort::getLocManAddrSubType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_MAN_ADDR_SUB_TYPE, getLocManAddrSubType());
	return true;
}

Array<Uint16> UNIX_LLDPEthernetPort::getLocManAddrSubType() const
{
	return _locManAddrSubType;
}

void UNIX_LLDPEthernetPort::setLocManAddrSubType(Array<Uint16> &value)
{
	_locManAddrSubType = value;
}

Boolean UNIX_LLDPEthernetPort::getLocManAddr(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_MAN_ADDR, getLocManAddr());
	return true;
}

Array<String> UNIX_LLDPEthernetPort::getLocManAddr() const
{
	return _locManAddr;
}

void UNIX_LLDPEthernetPort::setLocManAddr(Array<String> &value)
{
	_locManAddr = value;
}

Boolean UNIX_LLDPEthernetPort::getLocManAddrIfSubtype(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_MAN_ADDR_IF_SUBTYPE, getLocManAddrIfSubtype());
	return true;
}

Array<Uint16> UNIX_LLDPEthernetPort::getLocManAddrIfSubtype() const
{
	return _locManAddrIfSubtype;
}

void UNIX_LLDPEthernetPort::setLocManAddrIfSubtype(Array<Uint16> &value)
{
	_locManAddrIfSubtype = value;
}

Boolean UNIX_LLDPEthernetPort::getLocManAddrIfId(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_MAN_ADDR_IF_ID, getLocManAddrIfId());
	return true;
}

Array<Uint32> UNIX_LLDPEthernetPort::getLocManAddrIfId() const
{
	return _locManAddrIfId;
}

void UNIX_LLDPEthernetPort::setLocManAddrIfId(Array<Uint32> &value)
{
	_locManAddrIfId = value;
}

Boolean UNIX_LLDPEthernetPort::getRemLocalDestMacAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_LOCAL_DEST_MAC_ADDRESS, getRemLocalDestMacAddress());
	return true;
}

Array<String> UNIX_LLDPEthernetPort::getRemLocalDestMacAddress() const
{
	return _remLocalDestMacAddress;
}

void UNIX_LLDPEthernetPort::setRemLocalDestMacAddress(Array<String> &value)
{
	_remLocalDestMacAddress = value;
}

Boolean UNIX_LLDPEthernetPort::getRemManAddrSubType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_MAN_ADDR_SUB_TYPE, getRemManAddrSubType());
	return true;
}

Array<Uint16> UNIX_LLDPEthernetPort::getRemManAddrSubType() const
{
	return _remManAddrSubType;
}

void UNIX_LLDPEthernetPort::setRemManAddrSubType(Array<Uint16> &value)
{
	_remManAddrSubType = value;
}

Boolean UNIX_LLDPEthernetPort::getRemManAddr(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_MAN_ADDR, getRemManAddr());
	return true;
}

Array<String> UNIX_LLDPEthernetPort::getRemManAddr() const
{
	return _remManAddr;
}

void UNIX_LLDPEthernetPort::setRemManAddr(Array<String> &value)
{
	_remManAddr = value;
}

Boolean UNIX_LLDPEthernetPort::getRemManAddrIfSubtype(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_MAN_ADDR_IF_SUBTYPE, getRemManAddrIfSubtype());
	return true;
}

Array<Uint16> UNIX_LLDPEthernetPort::getRemManAddrIfSubtype() const
{
	return _remManAddrIfSubtype;
}

void UNIX_LLDPEthernetPort::setRemManAddrIfSubtype(Array<Uint16> &value)
{
	_remManAddrIfSubtype = value;
}

Boolean UNIX_LLDPEthernetPort::getRemManAddrIfId(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_MAN_ADDR_IF_ID, getRemManAddrIfId());
	return true;
}

Array<Uint32> UNIX_LLDPEthernetPort::getRemManAddrIfId() const
{
	return _remManAddrIfId;
}

void UNIX_LLDPEthernetPort::setRemManAddrIfId(Array<Uint32> &value)
{
	_remManAddrIfId = value;
}

Boolean UNIX_LLDPEthernetPort::getRemChassisIdSubtype(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_CHASSIS_ID_SUBTYPE, getRemChassisIdSubtype());
	return true;
}

Array<Uint8> UNIX_LLDPEthernetPort::getRemChassisIdSubtype() const
{
	return _remChassisIdSubtype;
}

void UNIX_LLDPEthernetPort::setRemChassisIdSubtype(Array<Uint8> &value)
{
	_remChassisIdSubtype = value;
}

Boolean UNIX_LLDPEthernetPort::getRemChassisId(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_CHASSIS_ID, getRemChassisId());
	return true;
}

Array<String> UNIX_LLDPEthernetPort::getRemChassisId() const
{
	return _remChassisId;
}

void UNIX_LLDPEthernetPort::setRemChassisId(Array<String> &value)
{
	_remChassisId = value;
}

Boolean UNIX_LLDPEthernetPort::getRemSysName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_SYS_NAME, getRemSysName());
	return true;
}

Array<String> UNIX_LLDPEthernetPort::getRemSysName() const
{
	return _remSysName;
}

void UNIX_LLDPEthernetPort::setRemSysName(Array<String> &value)
{
	_remSysName = value;
}

Boolean UNIX_LLDPEthernetPort::getRemSysDesc(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_SYS_DESC, getRemSysDesc());
	return true;
}

Array<String> UNIX_LLDPEthernetPort::getRemSysDesc() const
{
	return _remSysDesc;
}

void UNIX_LLDPEthernetPort::setRemSysDesc(Array<String> &value)
{
	_remSysDesc = value;
}

Boolean UNIX_LLDPEthernetPort::getRemSysCapSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_SYS_CAP_SUPPORTED, getRemSysCapSupported());
	return true;
}

Array<Uint8> UNIX_LLDPEthernetPort::getRemSysCapSupported() const
{
	return _remSysCapSupported;
}

void UNIX_LLDPEthernetPort::setRemSysCapSupported(Array<Uint8> &value)
{
	_remSysCapSupported = value;
}

Boolean UNIX_LLDPEthernetPort::getRemSysCapEnabled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_SYS_CAP_ENABLED, getRemSysCapEnabled());
	return true;
}

Array<Boolean> UNIX_LLDPEthernetPort::getRemSysCapEnabled() const
{
	return _remSysCapEnabled;
}

void UNIX_LLDPEthernetPort::setRemSysCapEnabled(Array<Boolean> &value)
{
	_remSysCapEnabled = value;
}

Boolean UNIX_LLDPEthernetPort::getRemPortIdSubtype(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_PORT_ID_SUBTYPE, getRemPortIdSubtype());
	return true;
}

Array<Uint8> UNIX_LLDPEthernetPort::getRemPortIdSubtype() const
{
	return _remPortIdSubtype;
}

void UNIX_LLDPEthernetPort::setRemPortIdSubtype(Array<Uint8> &value)
{
	_remPortIdSubtype = value;
}

Boolean UNIX_LLDPEthernetPort::getRemPortID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_PORT_ID, getRemPortID());
	return true;
}

Array<String> UNIX_LLDPEthernetPort::getRemPortID() const
{
	return _remPortID;
}

void UNIX_LLDPEthernetPort::setRemPortID(Array<String> &value)
{
	_remPortID = value;
}

Boolean UNIX_LLDPEthernetPort::getRemPortDesc(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_PORT_DESC, getRemPortDesc());
	return true;
}

Array<String> UNIX_LLDPEthernetPort::getRemPortDesc() const
{
	return _remPortDesc;
}

void UNIX_LLDPEthernetPort::setRemPortDesc(Array<String> &value)
{
	_remPortDesc = value;
}


void UNIX_LLDPEthernetPort::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("LLDPEthernetPort");
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
	_allocationState = String ("");
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_creationClassName = String("UNIX_LLDPEthernetPort");
	_deviceID = String ("");
	_powerManagementSupported = Boolean(false);
	_powerManagementCapabilities.clear();
	_availability = Uint16(0);
	_statusInfo = Uint16(0);
	_lastErrorCode = Uint32(0);
	_errorDescription = String ("");
	_errorCleared = Boolean(false);
	_otherIdentifyingInfo.clear();
	_powerOnHours = Uint64(0);
	_totalPowerOnHours = Uint64(0);
	_identifyingDescriptions.clear();
	_additionalAvailability.clear();
	_maxQuiesceTime = Uint64(0);
	_locationIndicator = Uint16(0);
	_speed = Uint64(0);
	_maxSpeed = Uint64(0);
	_requestedSpeed = Uint64(0);
	_usageRestriction = Uint16(0);
	_portType = Uint16(0);
	_otherPortType = String ("");
	_otherNetworkPortType = String ("");
	_portNumber = Uint16(0);
	_linkTechnology = Uint16(0);
	_otherLinkTechnology = String ("");
	_permanentAddress = String ("");
	_networkAddresses.clear();
	_fullDuplex = Boolean(false);
	_autoSense = Boolean(false);
	_supportedMaximumTransmissionUnit = Uint64(0);
	_activeMaximumTransmissionUnit = Uint64(0);
	_maxDataSize = Uint32(0);
	_capabilities.clear();
	_capabilityDescriptions.clear();
	_enabledCapabilities.clear();
	_otherEnabledCapabilities.clear();
	_portDiscriminator.clear();
	_pVID = Uint16(0);
	_poEPowerEntityType = Uint16(0);
	_configPortVlanTxEnable = Boolean(false);
	_configManVidTxEnable = Boolean(false);
	_messageTxInterval = Uint16(0);
	_messageTxHoldMultiplier = Uint8(0);
	_reinitDelay = Uint8(0);
	_notificationInterval = Uint16(0);
	_txCreditMax = Uint8(0);
	_messageFastTx = Uint16(0);
	_txFastInit = Uint8(0);
	_destMacAddress.clear();
	_portConfigAdminStatus.clear();
	_portConfigNotificationEnable.clear();
	_portConfigPortDescriptionTLVTxEnable.clear();
	_portConfigSystemNameTLVTxEnable.clear();
	_portConfigSystemDescriptionTLVTxEnable.clear();
	_portConfigSystemCapabilitiesTLVTxEnable.clear();
	_manAddrConfigDestAddress.clear();
	_manAddrConfigLocManAddrSubtype.clear();
	_manAddrConfigLocManAddr.clear();
	_manAddrConfigTxEnable.clear();
	_locChassisIdSubtype = Uint8(0);
	_locChassisId = String ("");
	_locSysName = String ("");
	_locSysDesc = String ("");
	_locSysCapSupported.clear();
	_locSysCapEnabled.clear();
	_locPortIdSubtype = Uint8(0);
	_locPortID = String ("");
	_locPortDesc = String ("");
	_locTxSystemValue = Uint16(0);
	_remTxSystemValueEcho = Uint16(0);
	_locRxSystemValue = Uint16(0);
	_remRxSystemValueEcho = Uint16(0);
	_locFbSystemValue = Uint16(0);
	_remTxSystemValue = Uint16(0);
	_locTxSystemValueEcho = Uint16(0);
	_remRxSystemValue = Uint16(0);
	_locRxSystemValueEcho = Uint16(0);
	_locResolvedTxSystemValue = Uint16(0);
	_locResolvedRxSystemValue = Uint16(0);
	_maximumFrameSizeTLVEnabled = Boolean(false);
	_locManAddrSubType.clear();
	_locManAddr.clear();
	_locManAddrIfSubtype.clear();
	_locManAddrIfId.clear();
	_remLocalDestMacAddress.clear();
	_remManAddrSubType.clear();
	_remManAddr.clear();
	_remManAddrIfSubtype.clear();
	_remManAddrIfId.clear();
	_remChassisIdSubtype.clear();
	_remChassisId.clear();
	_remSysName.clear();
	_remSysDesc.clear();
	_remSysCapSupported.clear();
	_remSysCapEnabled.clear();
	_remPortIdSubtype.clear();
	_remPortID.clear();
	_remPortDesc.clear();

}

Boolean UNIX_LLDPEthernetPort::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "AllocationState"))
			{
				String allocationStateValue;
				property.getValue().get(allocationStateValue);
				setAllocationState(allocationStateValue);
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
			else if (String::equal(property.getName().getString(), "DeviceID"))
			{
				String deviceIDValue;
				property.getValue().get(deviceIDValue);
				setDeviceID(deviceIDValue);
			}
			else if (String::equal(property.getName().getString(), "PowerManagementSupported"))
			{
				Boolean powerManagementSupportedValue;
				property.getValue().get(powerManagementSupportedValue);
				setPowerManagementSupported(powerManagementSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "PowerManagementCapabilities"))
			{
				Array<Uint16> powerManagementCapabilitiesValue;
				property.getValue().get(powerManagementCapabilitiesValue);
				setPowerManagementCapabilities(powerManagementCapabilitiesValue);
			}
			else if (String::equal(property.getName().getString(), "Availability"))
			{
				Uint16 availabilityValue;
				property.getValue().get(availabilityValue);
				setAvailability(availabilityValue);
			}
			else if (String::equal(property.getName().getString(), "StatusInfo"))
			{
				Uint16 statusInfoValue;
				property.getValue().get(statusInfoValue);
				setStatusInfo(statusInfoValue);
			}
			else if (String::equal(property.getName().getString(), "LastErrorCode"))
			{
				Uint32 lastErrorCodeValue;
				property.getValue().get(lastErrorCodeValue);
				setLastErrorCode(lastErrorCodeValue);
			}
			else if (String::equal(property.getName().getString(), "ErrorDescription"))
			{
				String errorDescriptionValue;
				property.getValue().get(errorDescriptionValue);
				setErrorDescription(errorDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "ErrorCleared"))
			{
				Boolean errorClearedValue;
				property.getValue().get(errorClearedValue);
				setErrorCleared(errorClearedValue);
			}
			else if (String::equal(property.getName().getString(), "OtherIdentifyingInfo"))
			{
				Array<String> otherIdentifyingInfoValue;
				property.getValue().get(otherIdentifyingInfoValue);
				setOtherIdentifyingInfo(otherIdentifyingInfoValue);
			}
			else if (String::equal(property.getName().getString(), "PowerOnHours"))
			{
				Uint64 powerOnHoursValue;
				property.getValue().get(powerOnHoursValue);
				setPowerOnHours(powerOnHoursValue);
			}
			else if (String::equal(property.getName().getString(), "TotalPowerOnHours"))
			{
				Uint64 totalPowerOnHoursValue;
				property.getValue().get(totalPowerOnHoursValue);
				setTotalPowerOnHours(totalPowerOnHoursValue);
			}
			else if (String::equal(property.getName().getString(), "IdentifyingDescriptions"))
			{
				Array<String> identifyingDescriptionsValue;
				property.getValue().get(identifyingDescriptionsValue);
				setIdentifyingDescriptions(identifyingDescriptionsValue);
			}
			else if (String::equal(property.getName().getString(), "AdditionalAvailability"))
			{
				Array<Uint16> additionalAvailabilityValue;
				property.getValue().get(additionalAvailabilityValue);
				setAdditionalAvailability(additionalAvailabilityValue);
			}
			else if (String::equal(property.getName().getString(), "MaxQuiesceTime"))
			{
				Uint64 maxQuiesceTimeValue;
				property.getValue().get(maxQuiesceTimeValue);
				setMaxQuiesceTime(maxQuiesceTimeValue);
			}
			else if (String::equal(property.getName().getString(), "LocationIndicator"))
			{
				Uint16 locationIndicatorValue;
				property.getValue().get(locationIndicatorValue);
				setLocationIndicator(locationIndicatorValue);
			}
			else if (String::equal(property.getName().getString(), "Speed"))
			{
				Uint64 speedValue;
				property.getValue().get(speedValue);
				setSpeed(speedValue);
			}
			else if (String::equal(property.getName().getString(), "MaxSpeed"))
			{
				Uint64 maxSpeedValue;
				property.getValue().get(maxSpeedValue);
				setMaxSpeed(maxSpeedValue);
			}
			else if (String::equal(property.getName().getString(), "RequestedSpeed"))
			{
				Uint64 requestedSpeedValue;
				property.getValue().get(requestedSpeedValue);
				setRequestedSpeed(requestedSpeedValue);
			}
			else if (String::equal(property.getName().getString(), "UsageRestriction"))
			{
				Uint16 usageRestrictionValue;
				property.getValue().get(usageRestrictionValue);
				setUsageRestriction(usageRestrictionValue);
			}
			else if (String::equal(property.getName().getString(), "PortType"))
			{
				Uint16 portTypeValue;
				property.getValue().get(portTypeValue);
				setPortType(portTypeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherPortType"))
			{
				String otherPortTypeValue;
				property.getValue().get(otherPortTypeValue);
				setOtherPortType(otherPortTypeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherNetworkPortType"))
			{
				String otherNetworkPortTypeValue;
				property.getValue().get(otherNetworkPortTypeValue);
				setOtherNetworkPortType(otherNetworkPortTypeValue);
			}
			else if (String::equal(property.getName().getString(), "PortNumber"))
			{
				Uint16 portNumberValue;
				property.getValue().get(portNumberValue);
				setPortNumber(portNumberValue);
			}
			else if (String::equal(property.getName().getString(), "LinkTechnology"))
			{
				Uint16 linkTechnologyValue;
				property.getValue().get(linkTechnologyValue);
				setLinkTechnology(linkTechnologyValue);
			}
			else if (String::equal(property.getName().getString(), "OtherLinkTechnology"))
			{
				String otherLinkTechnologyValue;
				property.getValue().get(otherLinkTechnologyValue);
				setOtherLinkTechnology(otherLinkTechnologyValue);
			}
			else if (String::equal(property.getName().getString(), "PermanentAddress"))
			{
				String permanentAddressValue;
				property.getValue().get(permanentAddressValue);
				setPermanentAddress(permanentAddressValue);
			}
			else if (String::equal(property.getName().getString(), "NetworkAddresses"))
			{
				Array<String> networkAddressesValue;
				property.getValue().get(networkAddressesValue);
				setNetworkAddresses(networkAddressesValue);
			}
			else if (String::equal(property.getName().getString(), "FullDuplex"))
			{
				Boolean fullDuplexValue;
				property.getValue().get(fullDuplexValue);
				setFullDuplex(fullDuplexValue);
			}
			else if (String::equal(property.getName().getString(), "AutoSense"))
			{
				Boolean autoSenseValue;
				property.getValue().get(autoSenseValue);
				setAutoSense(autoSenseValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedMaximumTransmissionUnit"))
			{
				Uint64 supportedMaximumTransmissionUnitValue;
				property.getValue().get(supportedMaximumTransmissionUnitValue);
				setSupportedMaximumTransmissionUnit(supportedMaximumTransmissionUnitValue);
			}
			else if (String::equal(property.getName().getString(), "ActiveMaximumTransmissionUnit"))
			{
				Uint64 activeMaximumTransmissionUnitValue;
				property.getValue().get(activeMaximumTransmissionUnitValue);
				setActiveMaximumTransmissionUnit(activeMaximumTransmissionUnitValue);
			}
			else if (String::equal(property.getName().getString(), "MaxDataSize"))
			{
				Uint32 maxDataSizeValue;
				property.getValue().get(maxDataSizeValue);
				setMaxDataSize(maxDataSizeValue);
			}
			else if (String::equal(property.getName().getString(), "Capabilities"))
			{
				Array<Uint16> capabilitiesValue;
				property.getValue().get(capabilitiesValue);
				setCapabilities(capabilitiesValue);
			}
			else if (String::equal(property.getName().getString(), "CapabilityDescriptions"))
			{
				Array<String> capabilityDescriptionsValue;
				property.getValue().get(capabilityDescriptionsValue);
				setCapabilityDescriptions(capabilityDescriptionsValue);
			}
			else if (String::equal(property.getName().getString(), "EnabledCapabilities"))
			{
				Array<Uint16> enabledCapabilitiesValue;
				property.getValue().get(enabledCapabilitiesValue);
				setEnabledCapabilities(enabledCapabilitiesValue);
			}
			else if (String::equal(property.getName().getString(), "OtherEnabledCapabilities"))
			{
				Array<String> otherEnabledCapabilitiesValue;
				property.getValue().get(otherEnabledCapabilitiesValue);
				setOtherEnabledCapabilities(otherEnabledCapabilitiesValue);
			}
			else if (String::equal(property.getName().getString(), "PortDiscriminator"))
			{
				Array<String> portDiscriminatorValue;
				property.getValue().get(portDiscriminatorValue);
				setPortDiscriminator(portDiscriminatorValue);
			}
			else if (String::equal(property.getName().getString(), "PVID"))
			{
				Uint16 pVIDValue;
				property.getValue().get(pVIDValue);
				setPVID(pVIDValue);
			}
			else if (String::equal(property.getName().getString(), "PoEPowerEntityType"))
			{
				Uint16 poEPowerEntityTypeValue;
				property.getValue().get(poEPowerEntityTypeValue);
				setPoEPowerEntityType(poEPowerEntityTypeValue);
			}
			else if (String::equal(property.getName().getString(), "ConfigPortVlanTxEnable"))
			{
				Boolean configPortVlanTxEnableValue;
				property.getValue().get(configPortVlanTxEnableValue);
				setConfigPortVlanTxEnable(configPortVlanTxEnableValue);
			}
			else if (String::equal(property.getName().getString(), "ConfigManVidTxEnable"))
			{
				Boolean configManVidTxEnableValue;
				property.getValue().get(configManVidTxEnableValue);
				setConfigManVidTxEnable(configManVidTxEnableValue);
			}
			else if (String::equal(property.getName().getString(), "MessageTxInterval"))
			{
				Uint16 messageTxIntervalValue;
				property.getValue().get(messageTxIntervalValue);
				setMessageTxInterval(messageTxIntervalValue);
			}
			else if (String::equal(property.getName().getString(), "MessageTxHoldMultiplier"))
			{
				Uint8 messageTxHoldMultiplierValue;
				property.getValue().get(messageTxHoldMultiplierValue);
				setMessageTxHoldMultiplier(messageTxHoldMultiplierValue);
			}
			else if (String::equal(property.getName().getString(), "ReinitDelay"))
			{
				Uint8 reinitDelayValue;
				property.getValue().get(reinitDelayValue);
				setReinitDelay(reinitDelayValue);
			}
			else if (String::equal(property.getName().getString(), "NotificationInterval"))
			{
				Uint16 notificationIntervalValue;
				property.getValue().get(notificationIntervalValue);
				setNotificationInterval(notificationIntervalValue);
			}
			else if (String::equal(property.getName().getString(), "TxCreditMax"))
			{
				Uint8 txCreditMaxValue;
				property.getValue().get(txCreditMaxValue);
				setTxCreditMax(txCreditMaxValue);
			}
			else if (String::equal(property.getName().getString(), "MessageFastTx"))
			{
				Uint16 messageFastTxValue;
				property.getValue().get(messageFastTxValue);
				setMessageFastTx(messageFastTxValue);
			}
			else if (String::equal(property.getName().getString(), "TxFastInit"))
			{
				Uint8 txFastInitValue;
				property.getValue().get(txFastInitValue);
				setTxFastInit(txFastInitValue);
			}
			else if (String::equal(property.getName().getString(), "DestMacAddress"))
			{
				Array<String> destMacAddressValue;
				property.getValue().get(destMacAddressValue);
				setDestMacAddress(destMacAddressValue);
			}
			else if (String::equal(property.getName().getString(), "PortConfigAdminStatus"))
			{
				Array<Uint8> portConfigAdminStatusValue;
				property.getValue().get(portConfigAdminStatusValue);
				setPortConfigAdminStatus(portConfigAdminStatusValue);
			}
			else if (String::equal(property.getName().getString(), "PortConfigNotificationEnable"))
			{
				Array<Boolean> portConfigNotificationEnableValue;
				property.getValue().get(portConfigNotificationEnableValue);
				setPortConfigNotificationEnable(portConfigNotificationEnableValue);
			}
			else if (String::equal(property.getName().getString(), "PortConfigPortDescriptionTLVTxEnable"))
			{
				Array<Boolean> portConfigPortDescriptionTLVTxEnableValue;
				property.getValue().get(portConfigPortDescriptionTLVTxEnableValue);
				setPortConfigPortDescriptionTLVTxEnable(portConfigPortDescriptionTLVTxEnableValue);
			}
			else if (String::equal(property.getName().getString(), "PortConfigSystemNameTLVTxEnable"))
			{
				Array<Boolean> portConfigSystemNameTLVTxEnableValue;
				property.getValue().get(portConfigSystemNameTLVTxEnableValue);
				setPortConfigSystemNameTLVTxEnable(portConfigSystemNameTLVTxEnableValue);
			}
			else if (String::equal(property.getName().getString(), "PortConfigSystemDescriptionTLVTxEnable"))
			{
				Array<Boolean> portConfigSystemDescriptionTLVTxEnableValue;
				property.getValue().get(portConfigSystemDescriptionTLVTxEnableValue);
				setPortConfigSystemDescriptionTLVTxEnable(portConfigSystemDescriptionTLVTxEnableValue);
			}
			else if (String::equal(property.getName().getString(), "PortConfigSystemCapabilitiesTLVTxEnable"))
			{
				Array<Boolean> portConfigSystemCapabilitiesTLVTxEnableValue;
				property.getValue().get(portConfigSystemCapabilitiesTLVTxEnableValue);
				setPortConfigSystemCapabilitiesTLVTxEnable(portConfigSystemCapabilitiesTLVTxEnableValue);
			}
			else if (String::equal(property.getName().getString(), "ManAddrConfigDestAddress"))
			{
				Array<String> manAddrConfigDestAddressValue;
				property.getValue().get(manAddrConfigDestAddressValue);
				setManAddrConfigDestAddress(manAddrConfigDestAddressValue);
			}
			else if (String::equal(property.getName().getString(), "ManAddrConfigLocManAddrSubtype"))
			{
				Array<Uint16> manAddrConfigLocManAddrSubtypeValue;
				property.getValue().get(manAddrConfigLocManAddrSubtypeValue);
				setManAddrConfigLocManAddrSubtype(manAddrConfigLocManAddrSubtypeValue);
			}
			else if (String::equal(property.getName().getString(), "ManAddrConfigLocManAddr"))
			{
				Array<String> manAddrConfigLocManAddrValue;
				property.getValue().get(manAddrConfigLocManAddrValue);
				setManAddrConfigLocManAddr(manAddrConfigLocManAddrValue);
			}
			else if (String::equal(property.getName().getString(), "ManAddrConfigTxEnable"))
			{
				Array<Boolean> manAddrConfigTxEnableValue;
				property.getValue().get(manAddrConfigTxEnableValue);
				setManAddrConfigTxEnable(manAddrConfigTxEnableValue);
			}
			else if (String::equal(property.getName().getString(), "LocChassisIdSubtype"))
			{
				Uint8 locChassisIdSubtypeValue;
				property.getValue().get(locChassisIdSubtypeValue);
				setLocChassisIdSubtype(locChassisIdSubtypeValue);
			}
			else if (String::equal(property.getName().getString(), "LocChassisId"))
			{
				String locChassisIdValue;
				property.getValue().get(locChassisIdValue);
				setLocChassisId(locChassisIdValue);
			}
			else if (String::equal(property.getName().getString(), "LocSysName"))
			{
				String locSysNameValue;
				property.getValue().get(locSysNameValue);
				setLocSysName(locSysNameValue);
			}
			else if (String::equal(property.getName().getString(), "LocSysDesc"))
			{
				String locSysDescValue;
				property.getValue().get(locSysDescValue);
				setLocSysDesc(locSysDescValue);
			}
			else if (String::equal(property.getName().getString(), "LocSysCapSupported"))
			{
				Array<Uint8> locSysCapSupportedValue;
				property.getValue().get(locSysCapSupportedValue);
				setLocSysCapSupported(locSysCapSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "LocSysCapEnabled"))
			{
				Array<Boolean> locSysCapEnabledValue;
				property.getValue().get(locSysCapEnabledValue);
				setLocSysCapEnabled(locSysCapEnabledValue);
			}
			else if (String::equal(property.getName().getString(), "LocPortIdSubtype"))
			{
				Uint8 locPortIdSubtypeValue;
				property.getValue().get(locPortIdSubtypeValue);
				setLocPortIdSubtype(locPortIdSubtypeValue);
			}
			else if (String::equal(property.getName().getString(), "LocPortID"))
			{
				String locPortIDValue;
				property.getValue().get(locPortIDValue);
				setLocPortID(locPortIDValue);
			}
			else if (String::equal(property.getName().getString(), "LocPortDesc"))
			{
				String locPortDescValue;
				property.getValue().get(locPortDescValue);
				setLocPortDesc(locPortDescValue);
			}
			else if (String::equal(property.getName().getString(), "LocTxSystemValue"))
			{
				Uint16 locTxSystemValueValue;
				property.getValue().get(locTxSystemValueValue);
				setLocTxSystemValue(locTxSystemValueValue);
			}
			else if (String::equal(property.getName().getString(), "RemTxSystemValueEcho"))
			{
				Uint16 remTxSystemValueEchoValue;
				property.getValue().get(remTxSystemValueEchoValue);
				setRemTxSystemValueEcho(remTxSystemValueEchoValue);
			}
			else if (String::equal(property.getName().getString(), "LocRxSystemValue"))
			{
				Uint16 locRxSystemValueValue;
				property.getValue().get(locRxSystemValueValue);
				setLocRxSystemValue(locRxSystemValueValue);
			}
			else if (String::equal(property.getName().getString(), "RemRxSystemValueEcho"))
			{
				Uint16 remRxSystemValueEchoValue;
				property.getValue().get(remRxSystemValueEchoValue);
				setRemRxSystemValueEcho(remRxSystemValueEchoValue);
			}
			else if (String::equal(property.getName().getString(), "LocFbSystemValue"))
			{
				Uint16 locFbSystemValueValue;
				property.getValue().get(locFbSystemValueValue);
				setLocFbSystemValue(locFbSystemValueValue);
			}
			else if (String::equal(property.getName().getString(), "RemTxSystemValue"))
			{
				Uint16 remTxSystemValueValue;
				property.getValue().get(remTxSystemValueValue);
				setRemTxSystemValue(remTxSystemValueValue);
			}
			else if (String::equal(property.getName().getString(), "LocTxSystemValueEcho"))
			{
				Uint16 locTxSystemValueEchoValue;
				property.getValue().get(locTxSystemValueEchoValue);
				setLocTxSystemValueEcho(locTxSystemValueEchoValue);
			}
			else if (String::equal(property.getName().getString(), "RemRxSystemValue"))
			{
				Uint16 remRxSystemValueValue;
				property.getValue().get(remRxSystemValueValue);
				setRemRxSystemValue(remRxSystemValueValue);
			}
			else if (String::equal(property.getName().getString(), "LocRxSystemValueEcho"))
			{
				Uint16 locRxSystemValueEchoValue;
				property.getValue().get(locRxSystemValueEchoValue);
				setLocRxSystemValueEcho(locRxSystemValueEchoValue);
			}
			else if (String::equal(property.getName().getString(), "LocResolvedTxSystemValue"))
			{
				Uint16 locResolvedTxSystemValueValue;
				property.getValue().get(locResolvedTxSystemValueValue);
				setLocResolvedTxSystemValue(locResolvedTxSystemValueValue);
			}
			else if (String::equal(property.getName().getString(), "LocResolvedRxSystemValue"))
			{
				Uint16 locResolvedRxSystemValueValue;
				property.getValue().get(locResolvedRxSystemValueValue);
				setLocResolvedRxSystemValue(locResolvedRxSystemValueValue);
			}
			else if (String::equal(property.getName().getString(), "MaximumFrameSizeTLVEnabled"))
			{
				Boolean maximumFrameSizeTLVEnabledValue;
				property.getValue().get(maximumFrameSizeTLVEnabledValue);
				setMaximumFrameSizeTLVEnabled(maximumFrameSizeTLVEnabledValue);
			}
			else if (String::equal(property.getName().getString(), "LocManAddrSubType"))
			{
				Array<Uint16> locManAddrSubTypeValue;
				property.getValue().get(locManAddrSubTypeValue);
				setLocManAddrSubType(locManAddrSubTypeValue);
			}
			else if (String::equal(property.getName().getString(), "LocManAddr"))
			{
				Array<String> locManAddrValue;
				property.getValue().get(locManAddrValue);
				setLocManAddr(locManAddrValue);
			}
			else if (String::equal(property.getName().getString(), "LocManAddrIfSubtype"))
			{
				Array<Uint16> locManAddrIfSubtypeValue;
				property.getValue().get(locManAddrIfSubtypeValue);
				setLocManAddrIfSubtype(locManAddrIfSubtypeValue);
			}
			else if (String::equal(property.getName().getString(), "LocManAddrIfId"))
			{
				Array<Uint32> locManAddrIfIdValue;
				property.getValue().get(locManAddrIfIdValue);
				setLocManAddrIfId(locManAddrIfIdValue);
			}
			else if (String::equal(property.getName().getString(), "RemLocalDestMacAddress"))
			{
				Array<String> remLocalDestMacAddressValue;
				property.getValue().get(remLocalDestMacAddressValue);
				setRemLocalDestMacAddress(remLocalDestMacAddressValue);
			}
			else if (String::equal(property.getName().getString(), "RemManAddrSubType"))
			{
				Array<Uint16> remManAddrSubTypeValue;
				property.getValue().get(remManAddrSubTypeValue);
				setRemManAddrSubType(remManAddrSubTypeValue);
			}
			else if (String::equal(property.getName().getString(), "RemManAddr"))
			{
				Array<String> remManAddrValue;
				property.getValue().get(remManAddrValue);
				setRemManAddr(remManAddrValue);
			}
			else if (String::equal(property.getName().getString(), "RemManAddrIfSubtype"))
			{
				Array<Uint16> remManAddrIfSubtypeValue;
				property.getValue().get(remManAddrIfSubtypeValue);
				setRemManAddrIfSubtype(remManAddrIfSubtypeValue);
			}
			else if (String::equal(property.getName().getString(), "RemManAddrIfId"))
			{
				Array<Uint32> remManAddrIfIdValue;
				property.getValue().get(remManAddrIfIdValue);
				setRemManAddrIfId(remManAddrIfIdValue);
			}
			else if (String::equal(property.getName().getString(), "RemChassisIdSubtype"))
			{
				Array<Uint8> remChassisIdSubtypeValue;
				property.getValue().get(remChassisIdSubtypeValue);
				setRemChassisIdSubtype(remChassisIdSubtypeValue);
			}
			else if (String::equal(property.getName().getString(), "RemChassisId"))
			{
				Array<String> remChassisIdValue;
				property.getValue().get(remChassisIdValue);
				setRemChassisId(remChassisIdValue);
			}
			else if (String::equal(property.getName().getString(), "RemSysName"))
			{
				Array<String> remSysNameValue;
				property.getValue().get(remSysNameValue);
				setRemSysName(remSysNameValue);
			}
			else if (String::equal(property.getName().getString(), "RemSysDesc"))
			{
				Array<String> remSysDescValue;
				property.getValue().get(remSysDescValue);
				setRemSysDesc(remSysDescValue);
			}
			else if (String::equal(property.getName().getString(), "RemSysCapSupported"))
			{
				Array<Uint8> remSysCapSupportedValue;
				property.getValue().get(remSysCapSupportedValue);
				setRemSysCapSupported(remSysCapSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "RemSysCapEnabled"))
			{
				Array<Boolean> remSysCapEnabledValue;
				property.getValue().get(remSysCapEnabledValue);
				setRemSysCapEnabled(remSysCapEnabledValue);
			}
			else if (String::equal(property.getName().getString(), "RemPortIdSubtype"))
			{
				Array<Uint8> remPortIdSubtypeValue;
				property.getValue().get(remPortIdSubtypeValue);
				setRemPortIdSubtype(remPortIdSubtypeValue);
			}
			else if (String::equal(property.getName().getString(), "RemPortID"))
			{
				Array<String> remPortIDValue;
				property.getValue().get(remPortIDValue);
				setRemPortID(remPortIDValue);
			}
			else if (String::equal(property.getName().getString(), "RemPortDesc"))
			{
				Array<String> remPortDescValue;
				property.getValue().get(remPortDescValue);
				setRemPortDesc(remPortDescValue);
			}
	}
	return true;
}

Uint32 UNIX_LLDPEthernetPort::invokeRequestStateChange(
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

Uint32 UNIX_LLDPEthernetPort::invokeSetPowerState(
		Uint16 &inPowerState,
		CIMDateTime &inTime
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SetPowerState */
	
	
	
	return returnValue;
}

Uint32 UNIX_LLDPEthernetPort::invokeReset()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method Reset */
	
	
	
	return returnValue;
}

Uint32 UNIX_LLDPEthernetPort::invokeEnableDevice(
		Boolean &inEnabled
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method EnableDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_LLDPEthernetPort::invokeOnlineDevice(
		Boolean &inOnline
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method OnlineDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_LLDPEthernetPort::invokeQuiesceDevice(
		Boolean &inQuiesce
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method QuiesceDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_LLDPEthernetPort::invokeSaveProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SaveProperties */
	
	
	
	return returnValue;
}

Uint32 UNIX_LLDPEthernetPort::invokeRestoreProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method RestoreProperties */
	
	
	
	return returnValue;
}


Boolean UNIX_LLDPEthernetPort::initialize()
{
	return false;
}

Boolean UNIX_LLDPEthernetPort::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("LLDPEthernetPort");
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
	_allocationState = String ("");
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_creationClassName = String("UNIX_LLDPEthernetPort");
	_deviceID = String ("");
	_powerManagementSupported = Boolean(false);
	_powerManagementCapabilities.clear();
	_availability = Uint16(0);
	_statusInfo = Uint16(0);
	_lastErrorCode = Uint32(0);
	_errorDescription = String ("");
	_errorCleared = Boolean(false);
	_otherIdentifyingInfo.clear();
	_powerOnHours = Uint64(0);
	_totalPowerOnHours = Uint64(0);
	_identifyingDescriptions.clear();
	_additionalAvailability.clear();
	_maxQuiesceTime = Uint64(0);
	_locationIndicator = Uint16(0);
	_speed = Uint64(0);
	_maxSpeed = Uint64(0);
	_requestedSpeed = Uint64(0);
	_usageRestriction = Uint16(0);
	_portType = Uint16(0);
	_otherPortType = String ("");
	_otherNetworkPortType = String ("");
	_portNumber = Uint16(0);
	_linkTechnology = Uint16(0);
	_otherLinkTechnology = String ("");
	_permanentAddress = String ("");
	_networkAddresses.clear();
	_fullDuplex = Boolean(false);
	_autoSense = Boolean(false);
	_supportedMaximumTransmissionUnit = Uint64(0);
	_activeMaximumTransmissionUnit = Uint64(0);
	_maxDataSize = Uint32(0);
	_capabilities.clear();
	_capabilityDescriptions.clear();
	_enabledCapabilities.clear();
	_otherEnabledCapabilities.clear();
	_portDiscriminator.clear();
	_pVID = Uint16(0);
	_poEPowerEntityType = Uint16(0);
	_configPortVlanTxEnable = Boolean(false);
	_configManVidTxEnable = Boolean(false);
	_messageTxInterval = Uint16(0);
	_messageTxHoldMultiplier = Uint8(0);
	_reinitDelay = Uint8(0);
	_notificationInterval = Uint16(0);
	_txCreditMax = Uint8(0);
	_messageFastTx = Uint16(0);
	_txFastInit = Uint8(0);
	_destMacAddress.clear();
	_portConfigAdminStatus.clear();
	_portConfigNotificationEnable.clear();
	_portConfigPortDescriptionTLVTxEnable.clear();
	_portConfigSystemNameTLVTxEnable.clear();
	_portConfigSystemDescriptionTLVTxEnable.clear();
	_portConfigSystemCapabilitiesTLVTxEnable.clear();
	_manAddrConfigDestAddress.clear();
	_manAddrConfigLocManAddrSubtype.clear();
	_manAddrConfigLocManAddr.clear();
	_manAddrConfigTxEnable.clear();
	_locChassisIdSubtype = Uint8(0);
	_locChassisId = String ("");
	_locSysName = String ("");
	_locSysDesc = String ("");
	_locSysCapSupported.clear();
	_locSysCapEnabled.clear();
	_locPortIdSubtype = Uint8(0);
	_locPortID = String ("");
	_locPortDesc = String ("");
	_locTxSystemValue = Uint16(0);
	_remTxSystemValueEcho = Uint16(0);
	_locRxSystemValue = Uint16(0);
	_remRxSystemValueEcho = Uint16(0);
	_locFbSystemValue = Uint16(0);
	_remTxSystemValue = Uint16(0);
	_locTxSystemValueEcho = Uint16(0);
	_remRxSystemValue = Uint16(0);
	_locRxSystemValueEcho = Uint16(0);
	_locResolvedTxSystemValue = Uint16(0);
	_locResolvedRxSystemValue = Uint16(0);
	_maximumFrameSizeTLVEnabled = Boolean(false);
	_locManAddrSubType.clear();
	_locManAddr.clear();
	_locManAddrIfSubtype.clear();
	_locManAddrIfId.clear();
	_remLocalDestMacAddress.clear();
	_remManAddrSubType.clear();
	_remManAddr.clear();
	_remManAddrIfSubtype.clear();
	_remManAddrIfId.clear();
	_remChassisIdSubtype.clear();
	_remChassisId.clear();
	_remSysName.clear();
	_remSysDesc.clear();
	_remSysCapSupported.clear();
	_remSysCapEnabled.clear();
	_remPortIdSubtype.clear();
	_remPortID.clear();
	_remPortDesc.clear();
	
	return false;
}

Boolean UNIX_LLDPEthernetPort::finalize()
{
	return false;
}

Boolean UNIX_LLDPEthernetPort::loadByName(const String name)
{
	return false;
}

Boolean UNIX_LLDPEthernetPort::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String systemCreationClassNameKey;
	String systemNameKey;
	String creationClassNameKey;
	String deviceIDKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SYSTEM_CREATION_CLASS_NAME)) systemCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SYSTEM_NAME)) systemNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_DEVICE_ID)) deviceIDKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getSystemCreationClassName(), systemCreationClassNameKey)) && 
			(String::equalNoCase(getSystemName(), systemNameKey)) && 
			(String::equalNoCase(getCreationClassName(), creationClassNameKey)) && 
			(String::equalNoCase(getDeviceID(), deviceIDKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_LLDPEthernetPort::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_LLDPEthernetPort::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_LLDPEthernetPort::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_LLDPEthernetPort::validateInstance()
{
	return true;
}

