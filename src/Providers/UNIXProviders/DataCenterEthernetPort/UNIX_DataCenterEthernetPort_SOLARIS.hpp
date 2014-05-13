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


UNIX_DataCenterEthernetPort::UNIX_DataCenterEthernetPort(void)
{
}

UNIX_DataCenterEthernetPort::~UNIX_DataCenterEthernetPort(void)
{
}

Boolean UNIX_DataCenterEthernetPort::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_DataCenterEthernetPort::getInstanceID() const
{
	return _instanceID;
}

void UNIX_DataCenterEthernetPort::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_DataCenterEthernetPort::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_DataCenterEthernetPort::getCaption() const
{
	return _caption;
}

void UNIX_DataCenterEthernetPort::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_DataCenterEthernetPort::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_DataCenterEthernetPort::getDescription() const
{
	return _description;
}

void UNIX_DataCenterEthernetPort::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_DataCenterEthernetPort::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_DataCenterEthernetPort::getElementName() const
{
	return _elementName;
}

void UNIX_DataCenterEthernetPort::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_DataCenterEthernetPort::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_DataCenterEthernetPort::getGeneration() const
{
	return _generation;
}

void UNIX_DataCenterEthernetPort::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_DataCenterEthernetPort::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_DataCenterEthernetPort::getInstallDate() const
{
	return _installDate;
}

void UNIX_DataCenterEthernetPort::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_DataCenterEthernetPort::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_DataCenterEthernetPort::getName() const
{
	return _name;
}

void UNIX_DataCenterEthernetPort::setName(String &value)
{
	_name = value;
}

Boolean UNIX_DataCenterEthernetPort::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_DataCenterEthernetPort::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_DataCenterEthernetPort::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_DataCenterEthernetPort::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_DataCenterEthernetPort::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_DataCenterEthernetPort::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_DataCenterEthernetPort::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_DataCenterEthernetPort::getStatus() const
{
	return _status;
}

void UNIX_DataCenterEthernetPort::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_DataCenterEthernetPort::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_DataCenterEthernetPort::getHealthState() const
{
	return _healthState;
}

void UNIX_DataCenterEthernetPort::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_DataCenterEthernetPort::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_DataCenterEthernetPort::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_DataCenterEthernetPort::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_DataCenterEthernetPort::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_DataCenterEthernetPort::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_DataCenterEthernetPort::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_DataCenterEthernetPort::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_DataCenterEthernetPort::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_DataCenterEthernetPort::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_DataCenterEthernetPort::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_DataCenterEthernetPort::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_DataCenterEthernetPort::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_DataCenterEthernetPort::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_DataCenterEthernetPort::getEnabledState() const
{
	return _enabledState;
}

void UNIX_DataCenterEthernetPort::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_DataCenterEthernetPort::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_DataCenterEthernetPort::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_DataCenterEthernetPort::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_DataCenterEthernetPort::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_DataCenterEthernetPort::getRequestedState() const
{
	return _requestedState;
}

void UNIX_DataCenterEthernetPort::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_DataCenterEthernetPort::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_DataCenterEthernetPort::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_DataCenterEthernetPort::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_DataCenterEthernetPort::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_DataCenterEthernetPort::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_DataCenterEthernetPort::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_DataCenterEthernetPort::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_DataCenterEthernetPort::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_DataCenterEthernetPort::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_DataCenterEthernetPort::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_DataCenterEthernetPort::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_DataCenterEthernetPort::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_DataCenterEthernetPort::getAllocationState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOCATION_STATE, getAllocationState());
	return true;
}

String UNIX_DataCenterEthernetPort::getAllocationState() const
{
	return _allocationState;
}

void UNIX_DataCenterEthernetPort::setAllocationState(String &value)
{
	_allocationState = value;
}

Boolean UNIX_DataCenterEthernetPort::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_DataCenterEthernetPort::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_DataCenterEthernetPort::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_DataCenterEthernetPort::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_DataCenterEthernetPort::getSystemName() const
{
	return _systemName;
}

void UNIX_DataCenterEthernetPort::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_DataCenterEthernetPort::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_DataCenterEthernetPort::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_DataCenterEthernetPort::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_DataCenterEthernetPort::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_DataCenterEthernetPort::getDeviceID() const
{
	return _deviceID;
}

void UNIX_DataCenterEthernetPort::setDeviceID(String &value)
{
	_deviceID = value;
}

Boolean UNIX_DataCenterEthernetPort::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_DataCenterEthernetPort::getPowerManagementSupported() const
{
	return _powerManagementSupported;
}

void UNIX_DataCenterEthernetPort::setPowerManagementSupported(Boolean &value)
{
	_powerManagementSupported = value;
}

Boolean UNIX_DataCenterEthernetPort::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_DataCenterEthernetPort::getPowerManagementCapabilities() const
{
	return _powerManagementCapabilities;
}

void UNIX_DataCenterEthernetPort::setPowerManagementCapabilities(Array<Uint16> &value)
{
	_powerManagementCapabilities = value;
}

Boolean UNIX_DataCenterEthernetPort::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_DataCenterEthernetPort::getAvailability() const
{
	return _availability;
}

void UNIX_DataCenterEthernetPort::setAvailability(Uint16 &value)
{
	_availability = value;
}

Boolean UNIX_DataCenterEthernetPort::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_DataCenterEthernetPort::getStatusInfo() const
{
	return _statusInfo;
}

void UNIX_DataCenterEthernetPort::setStatusInfo(Uint16 &value)
{
	_statusInfo = value;
}

Boolean UNIX_DataCenterEthernetPort::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_DataCenterEthernetPort::getLastErrorCode() const
{
	return _lastErrorCode;
}

void UNIX_DataCenterEthernetPort::setLastErrorCode(Uint32 &value)
{
	_lastErrorCode = value;
}

Boolean UNIX_DataCenterEthernetPort::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_DataCenterEthernetPort::getErrorDescription() const
{
	return _errorDescription;
}

void UNIX_DataCenterEthernetPort::setErrorDescription(String &value)
{
	_errorDescription = value;
}

Boolean UNIX_DataCenterEthernetPort::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_DataCenterEthernetPort::getErrorCleared() const
{
	return _errorCleared;
}

void UNIX_DataCenterEthernetPort::setErrorCleared(Boolean &value)
{
	_errorCleared = value;
}

Boolean UNIX_DataCenterEthernetPort::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_DataCenterEthernetPort::getOtherIdentifyingInfo() const
{
	return _otherIdentifyingInfo;
}

void UNIX_DataCenterEthernetPort::setOtherIdentifyingInfo(Array<String> &value)
{
	_otherIdentifyingInfo = value;
}

Boolean UNIX_DataCenterEthernetPort::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_DataCenterEthernetPort::getPowerOnHours() const
{
	return _powerOnHours;
}

void UNIX_DataCenterEthernetPort::setPowerOnHours(Uint64 &value)
{
	_powerOnHours = value;
}

Boolean UNIX_DataCenterEthernetPort::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_DataCenterEthernetPort::getTotalPowerOnHours() const
{
	return _totalPowerOnHours;
}

void UNIX_DataCenterEthernetPort::setTotalPowerOnHours(Uint64 &value)
{
	_totalPowerOnHours = value;
}

Boolean UNIX_DataCenterEthernetPort::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_DataCenterEthernetPort::getIdentifyingDescriptions() const
{
	return _identifyingDescriptions;
}

void UNIX_DataCenterEthernetPort::setIdentifyingDescriptions(Array<String> &value)
{
	_identifyingDescriptions = value;
}

Boolean UNIX_DataCenterEthernetPort::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_DataCenterEthernetPort::getAdditionalAvailability() const
{
	return _additionalAvailability;
}

void UNIX_DataCenterEthernetPort::setAdditionalAvailability(Array<Uint16> &value)
{
	_additionalAvailability = value;
}

Boolean UNIX_DataCenterEthernetPort::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_DataCenterEthernetPort::getMaxQuiesceTime() const
{
	return _maxQuiesceTime;
}

void UNIX_DataCenterEthernetPort::setMaxQuiesceTime(Uint64 &value)
{
	_maxQuiesceTime = value;
}

Boolean UNIX_DataCenterEthernetPort::getLocationIndicator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCATION_INDICATOR, getLocationIndicator());
	return true;
}

Uint16 UNIX_DataCenterEthernetPort::getLocationIndicator() const
{
	return _locationIndicator;
}

void UNIX_DataCenterEthernetPort::setLocationIndicator(Uint16 &value)
{
	_locationIndicator = value;
}

Boolean UNIX_DataCenterEthernetPort::getSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SPEED, getSpeed());
	return true;
}

Uint64 UNIX_DataCenterEthernetPort::getSpeed() const
{
	return _speed;
}

void UNIX_DataCenterEthernetPort::setSpeed(Uint64 &value)
{
	_speed = value;
}

Boolean UNIX_DataCenterEthernetPort::getMaxSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_SPEED, getMaxSpeed());
	return true;
}

Uint64 UNIX_DataCenterEthernetPort::getMaxSpeed() const
{
	return _maxSpeed;
}

void UNIX_DataCenterEthernetPort::setMaxSpeed(Uint64 &value)
{
	_maxSpeed = value;
}

Boolean UNIX_DataCenterEthernetPort::getRequestedSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_SPEED, getRequestedSpeed());
	return true;
}

Uint64 UNIX_DataCenterEthernetPort::getRequestedSpeed() const
{
	return _requestedSpeed;
}

void UNIX_DataCenterEthernetPort::setRequestedSpeed(Uint64 &value)
{
	_requestedSpeed = value;
}

Boolean UNIX_DataCenterEthernetPort::getUsageRestriction(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USAGE_RESTRICTION, getUsageRestriction());
	return true;
}

Uint16 UNIX_DataCenterEthernetPort::getUsageRestriction() const
{
	return _usageRestriction;
}

void UNIX_DataCenterEthernetPort::setUsageRestriction(Uint16 &value)
{
	_usageRestriction = value;
}

Boolean UNIX_DataCenterEthernetPort::getPortType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_TYPE, getPortType());
	return true;
}

Uint16 UNIX_DataCenterEthernetPort::getPortType() const
{
	return _portType;
}

void UNIX_DataCenterEthernetPort::setPortType(Uint16 &value)
{
	_portType = value;
}

Boolean UNIX_DataCenterEthernetPort::getOtherPortType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_PORT_TYPE, getOtherPortType());
	return true;
}

String UNIX_DataCenterEthernetPort::getOtherPortType() const
{
	return _otherPortType;
}

void UNIX_DataCenterEthernetPort::setOtherPortType(String &value)
{
	_otherPortType = value;
}

Boolean UNIX_DataCenterEthernetPort::getOtherNetworkPortType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_NETWORK_PORT_TYPE, getOtherNetworkPortType());
	return true;
}

String UNIX_DataCenterEthernetPort::getOtherNetworkPortType() const
{
	return _otherNetworkPortType;
}

void UNIX_DataCenterEthernetPort::setOtherNetworkPortType(String &value)
{
	_otherNetworkPortType = value;
}

Boolean UNIX_DataCenterEthernetPort::getPortNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_NUMBER, getPortNumber());
	return true;
}

Uint16 UNIX_DataCenterEthernetPort::getPortNumber() const
{
	return _portNumber;
}

void UNIX_DataCenterEthernetPort::setPortNumber(Uint16 &value)
{
	_portNumber = value;
}

Boolean UNIX_DataCenterEthernetPort::getLinkTechnology(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LINK_TECHNOLOGY, getLinkTechnology());
	return true;
}

Uint16 UNIX_DataCenterEthernetPort::getLinkTechnology() const
{
	return _linkTechnology;
}

void UNIX_DataCenterEthernetPort::setLinkTechnology(Uint16 &value)
{
	_linkTechnology = value;
}

Boolean UNIX_DataCenterEthernetPort::getOtherLinkTechnology(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_LINK_TECHNOLOGY, getOtherLinkTechnology());
	return true;
}

String UNIX_DataCenterEthernetPort::getOtherLinkTechnology() const
{
	return _otherLinkTechnology;
}

void UNIX_DataCenterEthernetPort::setOtherLinkTechnology(String &value)
{
	_otherLinkTechnology = value;
}

Boolean UNIX_DataCenterEthernetPort::getPermanentAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERMANENT_ADDRESS, getPermanentAddress());
	return true;
}

String UNIX_DataCenterEthernetPort::getPermanentAddress() const
{
	return _permanentAddress;
}

void UNIX_DataCenterEthernetPort::setPermanentAddress(String &value)
{
	_permanentAddress = value;
}

Boolean UNIX_DataCenterEthernetPort::getNetworkAddresses(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NETWORK_ADDRESSES, getNetworkAddresses());
	return true;
}

Array<String> UNIX_DataCenterEthernetPort::getNetworkAddresses() const
{
	return _networkAddresses;
}

void UNIX_DataCenterEthernetPort::setNetworkAddresses(Array<String> &value)
{
	_networkAddresses = value;
}

Boolean UNIX_DataCenterEthernetPort::getFullDuplex(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FULL_DUPLEX, getFullDuplex());
	return true;
}

Boolean UNIX_DataCenterEthernetPort::getFullDuplex() const
{
	return _fullDuplex;
}

void UNIX_DataCenterEthernetPort::setFullDuplex(Boolean &value)
{
	_fullDuplex = value;
}

Boolean UNIX_DataCenterEthernetPort::getAutoSense(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTO_SENSE, getAutoSense());
	return true;
}

Boolean UNIX_DataCenterEthernetPort::getAutoSense() const
{
	return _autoSense;
}

void UNIX_DataCenterEthernetPort::setAutoSense(Boolean &value)
{
	_autoSense = value;
}

Boolean UNIX_DataCenterEthernetPort::getSupportedMaximumTransmissionUnit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_MAXIMUM_TRANSMISSION_UNIT, getSupportedMaximumTransmissionUnit());
	return true;
}

Uint64 UNIX_DataCenterEthernetPort::getSupportedMaximumTransmissionUnit() const
{
	return _supportedMaximumTransmissionUnit;
}

void UNIX_DataCenterEthernetPort::setSupportedMaximumTransmissionUnit(Uint64 &value)
{
	_supportedMaximumTransmissionUnit = value;
}

Boolean UNIX_DataCenterEthernetPort::getActiveMaximumTransmissionUnit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACTIVE_MAXIMUM_TRANSMISSION_UNIT, getActiveMaximumTransmissionUnit());
	return true;
}

Uint64 UNIX_DataCenterEthernetPort::getActiveMaximumTransmissionUnit() const
{
	return _activeMaximumTransmissionUnit;
}

void UNIX_DataCenterEthernetPort::setActiveMaximumTransmissionUnit(Uint64 &value)
{
	_activeMaximumTransmissionUnit = value;
}

Boolean UNIX_DataCenterEthernetPort::getMaxDataSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_DATA_SIZE, getMaxDataSize());
	return true;
}

Uint32 UNIX_DataCenterEthernetPort::getMaxDataSize() const
{
	return _maxDataSize;
}

void UNIX_DataCenterEthernetPort::setMaxDataSize(Uint32 &value)
{
	_maxDataSize = value;
}

Boolean UNIX_DataCenterEthernetPort::getCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITIES, getCapabilities());
	return true;
}

Array<Uint16> UNIX_DataCenterEthernetPort::getCapabilities() const
{
	return _capabilities;
}

void UNIX_DataCenterEthernetPort::setCapabilities(Array<Uint16> &value)
{
	_capabilities = value;
}

Boolean UNIX_DataCenterEthernetPort::getCapabilityDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITY_DESCRIPTIONS, getCapabilityDescriptions());
	return true;
}

Array<String> UNIX_DataCenterEthernetPort::getCapabilityDescriptions() const
{
	return _capabilityDescriptions;
}

void UNIX_DataCenterEthernetPort::setCapabilityDescriptions(Array<String> &value)
{
	_capabilityDescriptions = value;
}

Boolean UNIX_DataCenterEthernetPort::getEnabledCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_CAPABILITIES, getEnabledCapabilities());
	return true;
}

Array<Uint16> UNIX_DataCenterEthernetPort::getEnabledCapabilities() const
{
	return _enabledCapabilities;
}

void UNIX_DataCenterEthernetPort::setEnabledCapabilities(Array<Uint16> &value)
{
	_enabledCapabilities = value;
}

Boolean UNIX_DataCenterEthernetPort::getOtherEnabledCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_CAPABILITIES, getOtherEnabledCapabilities());
	return true;
}

Array<String> UNIX_DataCenterEthernetPort::getOtherEnabledCapabilities() const
{
	return _otherEnabledCapabilities;
}

void UNIX_DataCenterEthernetPort::setOtherEnabledCapabilities(Array<String> &value)
{
	_otherEnabledCapabilities = value;
}

Boolean UNIX_DataCenterEthernetPort::getPortDiscriminator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_DISCRIMINATOR, getPortDiscriminator());
	return true;
}

Array<String> UNIX_DataCenterEthernetPort::getPortDiscriminator() const
{
	return _portDiscriminator;
}

void UNIX_DataCenterEthernetPort::setPortDiscriminator(Array<String> &value)
{
	_portDiscriminator = value;
}

Boolean UNIX_DataCenterEthernetPort::getPVID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_P_V_ID, getPVID());
	return true;
}

Uint16 UNIX_DataCenterEthernetPort::getPVID() const
{
	return _pVID;
}

void UNIX_DataCenterEthernetPort::setPVID(Uint16 &value)
{
	_pVID = value;
}

Boolean UNIX_DataCenterEthernetPort::getPoEPowerEntityType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PO_E_POWER_ENTITY_TYPE, getPoEPowerEntityType());
	return true;
}

Uint16 UNIX_DataCenterEthernetPort::getPoEPowerEntityType() const
{
	return _poEPowerEntityType;
}

void UNIX_DataCenterEthernetPort::setPoEPowerEntityType(Uint16 &value)
{
	_poEPowerEntityType = value;
}

Boolean UNIX_DataCenterEthernetPort::getConfigPortVlanTxEnable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIG_PORT_VLAN_TX_ENABLE, getConfigPortVlanTxEnable());
	return true;
}

Boolean UNIX_DataCenterEthernetPort::getConfigPortVlanTxEnable() const
{
	return _configPortVlanTxEnable;
}

void UNIX_DataCenterEthernetPort::setConfigPortVlanTxEnable(Boolean &value)
{
	_configPortVlanTxEnable = value;
}

Boolean UNIX_DataCenterEthernetPort::getConfigManVidTxEnable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIG_MAN_VID_TX_ENABLE, getConfigManVidTxEnable());
	return true;
}

Boolean UNIX_DataCenterEthernetPort::getConfigManVidTxEnable() const
{
	return _configManVidTxEnable;
}

void UNIX_DataCenterEthernetPort::setConfigManVidTxEnable(Boolean &value)
{
	_configManVidTxEnable = value;
}

Boolean UNIX_DataCenterEthernetPort::getMessageTxInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MESSAGE_TX_INTERVAL, getMessageTxInterval());
	return true;
}

Uint16 UNIX_DataCenterEthernetPort::getMessageTxInterval() const
{
	return _messageTxInterval;
}

void UNIX_DataCenterEthernetPort::setMessageTxInterval(Uint16 &value)
{
	_messageTxInterval = value;
}

Boolean UNIX_DataCenterEthernetPort::getMessageTxHoldMultiplier(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MESSAGE_TX_HOLD_MULTIPLIER, getMessageTxHoldMultiplier());
	return true;
}

Uint8 UNIX_DataCenterEthernetPort::getMessageTxHoldMultiplier() const
{
	return _messageTxHoldMultiplier;
}

void UNIX_DataCenterEthernetPort::setMessageTxHoldMultiplier(Uint8 &value)
{
	_messageTxHoldMultiplier = value;
}

Boolean UNIX_DataCenterEthernetPort::getReinitDelay(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REINIT_DELAY, getReinitDelay());
	return true;
}

Uint8 UNIX_DataCenterEthernetPort::getReinitDelay() const
{
	return _reinitDelay;
}

void UNIX_DataCenterEthernetPort::setReinitDelay(Uint8 &value)
{
	_reinitDelay = value;
}

Boolean UNIX_DataCenterEthernetPort::getNotificationInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NOTIFICATION_INTERVAL, getNotificationInterval());
	return true;
}

Uint16 UNIX_DataCenterEthernetPort::getNotificationInterval() const
{
	return _notificationInterval;
}

void UNIX_DataCenterEthernetPort::setNotificationInterval(Uint16 &value)
{
	_notificationInterval = value;
}

Boolean UNIX_DataCenterEthernetPort::getTxCreditMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TX_CREDIT_MAX, getTxCreditMax());
	return true;
}

Uint8 UNIX_DataCenterEthernetPort::getTxCreditMax() const
{
	return _txCreditMax;
}

void UNIX_DataCenterEthernetPort::setTxCreditMax(Uint8 &value)
{
	_txCreditMax = value;
}

Boolean UNIX_DataCenterEthernetPort::getMessageFastTx(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MESSAGE_FAST_TX, getMessageFastTx());
	return true;
}

Uint16 UNIX_DataCenterEthernetPort::getMessageFastTx() const
{
	return _messageFastTx;
}

void UNIX_DataCenterEthernetPort::setMessageFastTx(Uint16 &value)
{
	_messageFastTx = value;
}

Boolean UNIX_DataCenterEthernetPort::getTxFastInit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TX_FAST_INIT, getTxFastInit());
	return true;
}

Uint8 UNIX_DataCenterEthernetPort::getTxFastInit() const
{
	return _txFastInit;
}

void UNIX_DataCenterEthernetPort::setTxFastInit(Uint8 &value)
{
	_txFastInit = value;
}

Boolean UNIX_DataCenterEthernetPort::getDestMacAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEST_MAC_ADDRESS, getDestMacAddress());
	return true;
}

Array<String> UNIX_DataCenterEthernetPort::getDestMacAddress() const
{
	return _destMacAddress;
}

void UNIX_DataCenterEthernetPort::setDestMacAddress(Array<String> &value)
{
	_destMacAddress = value;
}

Boolean UNIX_DataCenterEthernetPort::getPortConfigAdminStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_CONFIG_ADMIN_STATUS, getPortConfigAdminStatus());
	return true;
}

Array<Uint8> UNIX_DataCenterEthernetPort::getPortConfigAdminStatus() const
{
	return _portConfigAdminStatus;
}

void UNIX_DataCenterEthernetPort::setPortConfigAdminStatus(Array<Uint8> &value)
{
	_portConfigAdminStatus = value;
}

Boolean UNIX_DataCenterEthernetPort::getPortConfigNotificationEnable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_CONFIG_NOTIFICATION_ENABLE, getPortConfigNotificationEnable());
	return true;
}

Array<Boolean> UNIX_DataCenterEthernetPort::getPortConfigNotificationEnable() const
{
	return _portConfigNotificationEnable;
}

void UNIX_DataCenterEthernetPort::setPortConfigNotificationEnable(Array<Boolean> &value)
{
	_portConfigNotificationEnable = value;
}

Boolean UNIX_DataCenterEthernetPort::getPortConfigPortDescriptionTLVTxEnable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_CONFIG_PORT_DESCRIPTION_T_L_V_TX_ENABLE, getPortConfigPortDescriptionTLVTxEnable());
	return true;
}

Array<Boolean> UNIX_DataCenterEthernetPort::getPortConfigPortDescriptionTLVTxEnable() const
{
	return _portConfigPortDescriptionTLVTxEnable;
}

void UNIX_DataCenterEthernetPort::setPortConfigPortDescriptionTLVTxEnable(Array<Boolean> &value)
{
	_portConfigPortDescriptionTLVTxEnable = value;
}

Boolean UNIX_DataCenterEthernetPort::getPortConfigSystemNameTLVTxEnable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_CONFIG_SYSTEM_NAME_T_L_V_TX_ENABLE, getPortConfigSystemNameTLVTxEnable());
	return true;
}

Array<Boolean> UNIX_DataCenterEthernetPort::getPortConfigSystemNameTLVTxEnable() const
{
	return _portConfigSystemNameTLVTxEnable;
}

void UNIX_DataCenterEthernetPort::setPortConfigSystemNameTLVTxEnable(Array<Boolean> &value)
{
	_portConfigSystemNameTLVTxEnable = value;
}

Boolean UNIX_DataCenterEthernetPort::getPortConfigSystemDescriptionTLVTxEnable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_CONFIG_SYSTEM_DESCRIPTION_T_L_V_TX_ENABLE, getPortConfigSystemDescriptionTLVTxEnable());
	return true;
}

Array<Boolean> UNIX_DataCenterEthernetPort::getPortConfigSystemDescriptionTLVTxEnable() const
{
	return _portConfigSystemDescriptionTLVTxEnable;
}

void UNIX_DataCenterEthernetPort::setPortConfigSystemDescriptionTLVTxEnable(Array<Boolean> &value)
{
	_portConfigSystemDescriptionTLVTxEnable = value;
}

Boolean UNIX_DataCenterEthernetPort::getPortConfigSystemCapabilitiesTLVTxEnable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_CONFIG_SYSTEM_CAPABILITIES_T_L_V_TX_ENABLE, getPortConfigSystemCapabilitiesTLVTxEnable());
	return true;
}

Array<Boolean> UNIX_DataCenterEthernetPort::getPortConfigSystemCapabilitiesTLVTxEnable() const
{
	return _portConfigSystemCapabilitiesTLVTxEnable;
}

void UNIX_DataCenterEthernetPort::setPortConfigSystemCapabilitiesTLVTxEnable(Array<Boolean> &value)
{
	_portConfigSystemCapabilitiesTLVTxEnable = value;
}

Boolean UNIX_DataCenterEthernetPort::getManAddrConfigDestAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAN_ADDR_CONFIG_DEST_ADDRESS, getManAddrConfigDestAddress());
	return true;
}

Array<String> UNIX_DataCenterEthernetPort::getManAddrConfigDestAddress() const
{
	return _manAddrConfigDestAddress;
}

void UNIX_DataCenterEthernetPort::setManAddrConfigDestAddress(Array<String> &value)
{
	_manAddrConfigDestAddress = value;
}

Boolean UNIX_DataCenterEthernetPort::getManAddrConfigLocManAddrSubtype(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAN_ADDR_CONFIG_LOC_MAN_ADDR_SUBTYPE, getManAddrConfigLocManAddrSubtype());
	return true;
}

Array<Uint16> UNIX_DataCenterEthernetPort::getManAddrConfigLocManAddrSubtype() const
{
	return _manAddrConfigLocManAddrSubtype;
}

void UNIX_DataCenterEthernetPort::setManAddrConfigLocManAddrSubtype(Array<Uint16> &value)
{
	_manAddrConfigLocManAddrSubtype = value;
}

Boolean UNIX_DataCenterEthernetPort::getManAddrConfigLocManAddr(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAN_ADDR_CONFIG_LOC_MAN_ADDR, getManAddrConfigLocManAddr());
	return true;
}

Array<String> UNIX_DataCenterEthernetPort::getManAddrConfigLocManAddr() const
{
	return _manAddrConfigLocManAddr;
}

void UNIX_DataCenterEthernetPort::setManAddrConfigLocManAddr(Array<String> &value)
{
	_manAddrConfigLocManAddr = value;
}

Boolean UNIX_DataCenterEthernetPort::getManAddrConfigTxEnable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAN_ADDR_CONFIG_TX_ENABLE, getManAddrConfigTxEnable());
	return true;
}

Array<Boolean> UNIX_DataCenterEthernetPort::getManAddrConfigTxEnable() const
{
	return _manAddrConfigTxEnable;
}

void UNIX_DataCenterEthernetPort::setManAddrConfigTxEnable(Array<Boolean> &value)
{
	_manAddrConfigTxEnable = value;
}

Boolean UNIX_DataCenterEthernetPort::getLocChassisIdSubtype(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_CHASSIS_ID_SUBTYPE, getLocChassisIdSubtype());
	return true;
}

Uint8 UNIX_DataCenterEthernetPort::getLocChassisIdSubtype() const
{
	return _locChassisIdSubtype;
}

void UNIX_DataCenterEthernetPort::setLocChassisIdSubtype(Uint8 &value)
{
	_locChassisIdSubtype = value;
}

Boolean UNIX_DataCenterEthernetPort::getLocChassisId(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_CHASSIS_ID, getLocChassisId());
	return true;
}

String UNIX_DataCenterEthernetPort::getLocChassisId() const
{
	return _locChassisId;
}

void UNIX_DataCenterEthernetPort::setLocChassisId(String &value)
{
	_locChassisId = value;
}

Boolean UNIX_DataCenterEthernetPort::getLocSysName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_SYS_NAME, getLocSysName());
	return true;
}

String UNIX_DataCenterEthernetPort::getLocSysName() const
{
	return _locSysName;
}

void UNIX_DataCenterEthernetPort::setLocSysName(String &value)
{
	_locSysName = value;
}

Boolean UNIX_DataCenterEthernetPort::getLocSysDesc(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_SYS_DESC, getLocSysDesc());
	return true;
}

String UNIX_DataCenterEthernetPort::getLocSysDesc() const
{
	return _locSysDesc;
}

void UNIX_DataCenterEthernetPort::setLocSysDesc(String &value)
{
	_locSysDesc = value;
}

Boolean UNIX_DataCenterEthernetPort::getLocSysCapSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_SYS_CAP_SUPPORTED, getLocSysCapSupported());
	return true;
}

Array<Uint8> UNIX_DataCenterEthernetPort::getLocSysCapSupported() const
{
	return _locSysCapSupported;
}

void UNIX_DataCenterEthernetPort::setLocSysCapSupported(Array<Uint8> &value)
{
	_locSysCapSupported = value;
}

Boolean UNIX_DataCenterEthernetPort::getLocSysCapEnabled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_SYS_CAP_ENABLED, getLocSysCapEnabled());
	return true;
}

Array<Boolean> UNIX_DataCenterEthernetPort::getLocSysCapEnabled() const
{
	return _locSysCapEnabled;
}

void UNIX_DataCenterEthernetPort::setLocSysCapEnabled(Array<Boolean> &value)
{
	_locSysCapEnabled = value;
}

Boolean UNIX_DataCenterEthernetPort::getLocPortIdSubtype(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_PORT_ID_SUBTYPE, getLocPortIdSubtype());
	return true;
}

Uint8 UNIX_DataCenterEthernetPort::getLocPortIdSubtype() const
{
	return _locPortIdSubtype;
}

void UNIX_DataCenterEthernetPort::setLocPortIdSubtype(Uint8 &value)
{
	_locPortIdSubtype = value;
}

Boolean UNIX_DataCenterEthernetPort::getLocPortID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_PORT_ID, getLocPortID());
	return true;
}

String UNIX_DataCenterEthernetPort::getLocPortID() const
{
	return _locPortID;
}

void UNIX_DataCenterEthernetPort::setLocPortID(String &value)
{
	_locPortID = value;
}

Boolean UNIX_DataCenterEthernetPort::getLocPortDesc(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_PORT_DESC, getLocPortDesc());
	return true;
}

String UNIX_DataCenterEthernetPort::getLocPortDesc() const
{
	return _locPortDesc;
}

void UNIX_DataCenterEthernetPort::setLocPortDesc(String &value)
{
	_locPortDesc = value;
}

Boolean UNIX_DataCenterEthernetPort::getLocTxSystemValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_TX_SYSTEM_VALUE, getLocTxSystemValue());
	return true;
}

Uint16 UNIX_DataCenterEthernetPort::getLocTxSystemValue() const
{
	return _locTxSystemValue;
}

void UNIX_DataCenterEthernetPort::setLocTxSystemValue(Uint16 &value)
{
	_locTxSystemValue = value;
}

Boolean UNIX_DataCenterEthernetPort::getRemTxSystemValueEcho(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_TX_SYSTEM_VALUE_ECHO, getRemTxSystemValueEcho());
	return true;
}

Uint16 UNIX_DataCenterEthernetPort::getRemTxSystemValueEcho() const
{
	return _remTxSystemValueEcho;
}

void UNIX_DataCenterEthernetPort::setRemTxSystemValueEcho(Uint16 &value)
{
	_remTxSystemValueEcho = value;
}

Boolean UNIX_DataCenterEthernetPort::getLocRxSystemValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_RX_SYSTEM_VALUE, getLocRxSystemValue());
	return true;
}

Uint16 UNIX_DataCenterEthernetPort::getLocRxSystemValue() const
{
	return _locRxSystemValue;
}

void UNIX_DataCenterEthernetPort::setLocRxSystemValue(Uint16 &value)
{
	_locRxSystemValue = value;
}

Boolean UNIX_DataCenterEthernetPort::getRemRxSystemValueEcho(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_RX_SYSTEM_VALUE_ECHO, getRemRxSystemValueEcho());
	return true;
}

Uint16 UNIX_DataCenterEthernetPort::getRemRxSystemValueEcho() const
{
	return _remRxSystemValueEcho;
}

void UNIX_DataCenterEthernetPort::setRemRxSystemValueEcho(Uint16 &value)
{
	_remRxSystemValueEcho = value;
}

Boolean UNIX_DataCenterEthernetPort::getLocFbSystemValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_FB_SYSTEM_VALUE, getLocFbSystemValue());
	return true;
}

Uint16 UNIX_DataCenterEthernetPort::getLocFbSystemValue() const
{
	return _locFbSystemValue;
}

void UNIX_DataCenterEthernetPort::setLocFbSystemValue(Uint16 &value)
{
	_locFbSystemValue = value;
}

Boolean UNIX_DataCenterEthernetPort::getRemTxSystemValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_TX_SYSTEM_VALUE, getRemTxSystemValue());
	return true;
}

Uint16 UNIX_DataCenterEthernetPort::getRemTxSystemValue() const
{
	return _remTxSystemValue;
}

void UNIX_DataCenterEthernetPort::setRemTxSystemValue(Uint16 &value)
{
	_remTxSystemValue = value;
}

Boolean UNIX_DataCenterEthernetPort::getLocTxSystemValueEcho(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_TX_SYSTEM_VALUE_ECHO, getLocTxSystemValueEcho());
	return true;
}

Uint16 UNIX_DataCenterEthernetPort::getLocTxSystemValueEcho() const
{
	return _locTxSystemValueEcho;
}

void UNIX_DataCenterEthernetPort::setLocTxSystemValueEcho(Uint16 &value)
{
	_locTxSystemValueEcho = value;
}

Boolean UNIX_DataCenterEthernetPort::getRemRxSystemValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_RX_SYSTEM_VALUE, getRemRxSystemValue());
	return true;
}

Uint16 UNIX_DataCenterEthernetPort::getRemRxSystemValue() const
{
	return _remRxSystemValue;
}

void UNIX_DataCenterEthernetPort::setRemRxSystemValue(Uint16 &value)
{
	_remRxSystemValue = value;
}

Boolean UNIX_DataCenterEthernetPort::getLocRxSystemValueEcho(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_RX_SYSTEM_VALUE_ECHO, getLocRxSystemValueEcho());
	return true;
}

Uint16 UNIX_DataCenterEthernetPort::getLocRxSystemValueEcho() const
{
	return _locRxSystemValueEcho;
}

void UNIX_DataCenterEthernetPort::setLocRxSystemValueEcho(Uint16 &value)
{
	_locRxSystemValueEcho = value;
}

Boolean UNIX_DataCenterEthernetPort::getLocResolvedTxSystemValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_RESOLVED_TX_SYSTEM_VALUE, getLocResolvedTxSystemValue());
	return true;
}

Uint16 UNIX_DataCenterEthernetPort::getLocResolvedTxSystemValue() const
{
	return _locResolvedTxSystemValue;
}

void UNIX_DataCenterEthernetPort::setLocResolvedTxSystemValue(Uint16 &value)
{
	_locResolvedTxSystemValue = value;
}

Boolean UNIX_DataCenterEthernetPort::getLocResolvedRxSystemValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_RESOLVED_RX_SYSTEM_VALUE, getLocResolvedRxSystemValue());
	return true;
}

Uint16 UNIX_DataCenterEthernetPort::getLocResolvedRxSystemValue() const
{
	return _locResolvedRxSystemValue;
}

void UNIX_DataCenterEthernetPort::setLocResolvedRxSystemValue(Uint16 &value)
{
	_locResolvedRxSystemValue = value;
}

Boolean UNIX_DataCenterEthernetPort::getMaximumFrameSizeTLVEnabled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAXIMUM_FRAME_SIZE_T_L_V_ENABLED, getMaximumFrameSizeTLVEnabled());
	return true;
}

Boolean UNIX_DataCenterEthernetPort::getMaximumFrameSizeTLVEnabled() const
{
	return _maximumFrameSizeTLVEnabled;
}

void UNIX_DataCenterEthernetPort::setMaximumFrameSizeTLVEnabled(Boolean &value)
{
	_maximumFrameSizeTLVEnabled = value;
}

Boolean UNIX_DataCenterEthernetPort::getLocManAddrSubType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_MAN_ADDR_SUB_TYPE, getLocManAddrSubType());
	return true;
}

Array<Uint16> UNIX_DataCenterEthernetPort::getLocManAddrSubType() const
{
	return _locManAddrSubType;
}

void UNIX_DataCenterEthernetPort::setLocManAddrSubType(Array<Uint16> &value)
{
	_locManAddrSubType = value;
}

Boolean UNIX_DataCenterEthernetPort::getLocManAddr(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_MAN_ADDR, getLocManAddr());
	return true;
}

Array<String> UNIX_DataCenterEthernetPort::getLocManAddr() const
{
	return _locManAddr;
}

void UNIX_DataCenterEthernetPort::setLocManAddr(Array<String> &value)
{
	_locManAddr = value;
}

Boolean UNIX_DataCenterEthernetPort::getLocManAddrIfSubtype(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_MAN_ADDR_IF_SUBTYPE, getLocManAddrIfSubtype());
	return true;
}

Array<Uint16> UNIX_DataCenterEthernetPort::getLocManAddrIfSubtype() const
{
	return _locManAddrIfSubtype;
}

void UNIX_DataCenterEthernetPort::setLocManAddrIfSubtype(Array<Uint16> &value)
{
	_locManAddrIfSubtype = value;
}

Boolean UNIX_DataCenterEthernetPort::getLocManAddrIfId(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_MAN_ADDR_IF_ID, getLocManAddrIfId());
	return true;
}

Array<Uint32> UNIX_DataCenterEthernetPort::getLocManAddrIfId() const
{
	return _locManAddrIfId;
}

void UNIX_DataCenterEthernetPort::setLocManAddrIfId(Array<Uint32> &value)
{
	_locManAddrIfId = value;
}

Boolean UNIX_DataCenterEthernetPort::getRemLocalDestMacAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_LOCAL_DEST_MAC_ADDRESS, getRemLocalDestMacAddress());
	return true;
}

Array<String> UNIX_DataCenterEthernetPort::getRemLocalDestMacAddress() const
{
	return _remLocalDestMacAddress;
}

void UNIX_DataCenterEthernetPort::setRemLocalDestMacAddress(Array<String> &value)
{
	_remLocalDestMacAddress = value;
}

Boolean UNIX_DataCenterEthernetPort::getRemManAddrSubType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_MAN_ADDR_SUB_TYPE, getRemManAddrSubType());
	return true;
}

Array<Uint16> UNIX_DataCenterEthernetPort::getRemManAddrSubType() const
{
	return _remManAddrSubType;
}

void UNIX_DataCenterEthernetPort::setRemManAddrSubType(Array<Uint16> &value)
{
	_remManAddrSubType = value;
}

Boolean UNIX_DataCenterEthernetPort::getRemManAddr(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_MAN_ADDR, getRemManAddr());
	return true;
}

Array<String> UNIX_DataCenterEthernetPort::getRemManAddr() const
{
	return _remManAddr;
}

void UNIX_DataCenterEthernetPort::setRemManAddr(Array<String> &value)
{
	_remManAddr = value;
}

Boolean UNIX_DataCenterEthernetPort::getRemManAddrIfSubtype(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_MAN_ADDR_IF_SUBTYPE, getRemManAddrIfSubtype());
	return true;
}

Array<Uint16> UNIX_DataCenterEthernetPort::getRemManAddrIfSubtype() const
{
	return _remManAddrIfSubtype;
}

void UNIX_DataCenterEthernetPort::setRemManAddrIfSubtype(Array<Uint16> &value)
{
	_remManAddrIfSubtype = value;
}

Boolean UNIX_DataCenterEthernetPort::getRemManAddrIfId(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_MAN_ADDR_IF_ID, getRemManAddrIfId());
	return true;
}

Array<Uint32> UNIX_DataCenterEthernetPort::getRemManAddrIfId() const
{
	return _remManAddrIfId;
}

void UNIX_DataCenterEthernetPort::setRemManAddrIfId(Array<Uint32> &value)
{
	_remManAddrIfId = value;
}

Boolean UNIX_DataCenterEthernetPort::getRemChassisIdSubtype(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_CHASSIS_ID_SUBTYPE, getRemChassisIdSubtype());
	return true;
}

Array<Uint8> UNIX_DataCenterEthernetPort::getRemChassisIdSubtype() const
{
	return _remChassisIdSubtype;
}

void UNIX_DataCenterEthernetPort::setRemChassisIdSubtype(Array<Uint8> &value)
{
	_remChassisIdSubtype = value;
}

Boolean UNIX_DataCenterEthernetPort::getRemChassisId(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_CHASSIS_ID, getRemChassisId());
	return true;
}

Array<String> UNIX_DataCenterEthernetPort::getRemChassisId() const
{
	return _remChassisId;
}

void UNIX_DataCenterEthernetPort::setRemChassisId(Array<String> &value)
{
	_remChassisId = value;
}

Boolean UNIX_DataCenterEthernetPort::getRemSysName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_SYS_NAME, getRemSysName());
	return true;
}

Array<String> UNIX_DataCenterEthernetPort::getRemSysName() const
{
	return _remSysName;
}

void UNIX_DataCenterEthernetPort::setRemSysName(Array<String> &value)
{
	_remSysName = value;
}

Boolean UNIX_DataCenterEthernetPort::getRemSysDesc(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_SYS_DESC, getRemSysDesc());
	return true;
}

Array<String> UNIX_DataCenterEthernetPort::getRemSysDesc() const
{
	return _remSysDesc;
}

void UNIX_DataCenterEthernetPort::setRemSysDesc(Array<String> &value)
{
	_remSysDesc = value;
}

Boolean UNIX_DataCenterEthernetPort::getRemSysCapSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_SYS_CAP_SUPPORTED, getRemSysCapSupported());
	return true;
}

Array<Uint8> UNIX_DataCenterEthernetPort::getRemSysCapSupported() const
{
	return _remSysCapSupported;
}

void UNIX_DataCenterEthernetPort::setRemSysCapSupported(Array<Uint8> &value)
{
	_remSysCapSupported = value;
}

Boolean UNIX_DataCenterEthernetPort::getRemSysCapEnabled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_SYS_CAP_ENABLED, getRemSysCapEnabled());
	return true;
}

Array<Boolean> UNIX_DataCenterEthernetPort::getRemSysCapEnabled() const
{
	return _remSysCapEnabled;
}

void UNIX_DataCenterEthernetPort::setRemSysCapEnabled(Array<Boolean> &value)
{
	_remSysCapEnabled = value;
}

Boolean UNIX_DataCenterEthernetPort::getRemPortIdSubtype(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_PORT_ID_SUBTYPE, getRemPortIdSubtype());
	return true;
}

Array<Uint8> UNIX_DataCenterEthernetPort::getRemPortIdSubtype() const
{
	return _remPortIdSubtype;
}

void UNIX_DataCenterEthernetPort::setRemPortIdSubtype(Array<Uint8> &value)
{
	_remPortIdSubtype = value;
}

Boolean UNIX_DataCenterEthernetPort::getRemPortID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_PORT_ID, getRemPortID());
	return true;
}

Array<String> UNIX_DataCenterEthernetPort::getRemPortID() const
{
	return _remPortID;
}

void UNIX_DataCenterEthernetPort::setRemPortID(Array<String> &value)
{
	_remPortID = value;
}

Boolean UNIX_DataCenterEthernetPort::getRemPortDesc(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_PORT_DESC, getRemPortDesc());
	return true;
}

Array<String> UNIX_DataCenterEthernetPort::getRemPortDesc() const
{
	return _remPortDesc;
}

void UNIX_DataCenterEthernetPort::setRemPortDesc(Array<String> &value)
{
	_remPortDesc = value;
}

Boolean UNIX_DataCenterEthernetPort::getPfcLinkDelayAllowance(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PFC_LINK_DELAY_ALLOWANCE, getPfcLinkDelayAllowance());
	return true;
}

Uint32 UNIX_DataCenterEthernetPort::getPfcLinkDelayAllowance() const
{
	return _pfcLinkDelayAllowance;
}

void UNIX_DataCenterEthernetPort::setPfcLinkDelayAllowance(Uint32 &value)
{
	_pfcLinkDelayAllowance = value;
}

Boolean UNIX_DataCenterEthernetPort::getETSConfigurationTxEnable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_E_T_S_CONFIGURATION_TX_ENABLE, getETSConfigurationTxEnable());
	return true;
}

Boolean UNIX_DataCenterEthernetPort::getETSConfigurationTxEnable() const
{
	return _eTSConfigurationTxEnable;
}

void UNIX_DataCenterEthernetPort::setETSConfigurationTxEnable(Boolean &value)
{
	_eTSConfigurationTxEnable = value;
}

Boolean UNIX_DataCenterEthernetPort::getETSRecommendationTxEnable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_E_T_S_RECOMMENDATION_TX_ENABLE, getETSRecommendationTxEnable());
	return true;
}

Boolean UNIX_DataCenterEthernetPort::getETSRecommendationTxEnable() const
{
	return _eTSRecommendationTxEnable;
}

void UNIX_DataCenterEthernetPort::setETSRecommendationTxEnable(Boolean &value)
{
	_eTSRecommendationTxEnable = value;
}

Boolean UNIX_DataCenterEthernetPort::getPFCTxEnable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_P_FC_TX_ENABLE, getPFCTxEnable());
	return true;
}

Boolean UNIX_DataCenterEthernetPort::getPFCTxEnable() const
{
	return _pFCTxEnable;
}

void UNIX_DataCenterEthernetPort::setPFCTxEnable(Boolean &value)
{
	_pFCTxEnable = value;
}

Boolean UNIX_DataCenterEthernetPort::getApplicationPriorityTxEnable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_APPLICATION_PRIORITY_TX_ENABLE, getApplicationPriorityTxEnable());
	return true;
}

Boolean UNIX_DataCenterEthernetPort::getApplicationPriorityTxEnable() const
{
	return _applicationPriorityTxEnable;
}

void UNIX_DataCenterEthernetPort::setApplicationPriorityTxEnable(Boolean &value)
{
	_applicationPriorityTxEnable = value;
}

Boolean UNIX_DataCenterEthernetPort::getLocETSConCreditBasedShaperSupport(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_E_T_S_CON_CREDIT_BASED_SHAPER_SUPPORT, getLocETSConCreditBasedShaperSupport());
	return true;
}

Boolean UNIX_DataCenterEthernetPort::getLocETSConCreditBasedShaperSupport() const
{
	return _locETSConCreditBasedShaperSupport;
}

void UNIX_DataCenterEthernetPort::setLocETSConCreditBasedShaperSupport(Boolean &value)
{
	_locETSConCreditBasedShaperSupport = value;
}

Boolean UNIX_DataCenterEthernetPort::getLocETSConTrafficClassesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_E_T_S_CON_TRAFFIC_CLASSES_SUPPORTED, getLocETSConTrafficClassesSupported());
	return true;
}

Uint8 UNIX_DataCenterEthernetPort::getLocETSConTrafficClassesSupported() const
{
	return _locETSConTrafficClassesSupported;
}

void UNIX_DataCenterEthernetPort::setLocETSConTrafficClassesSupported(Uint8 &value)
{
	_locETSConTrafficClassesSupported = value;
}

Boolean UNIX_DataCenterEthernetPort::getLocETSConWilling(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_E_T_S_CON_WILLING, getLocETSConWilling());
	return true;
}

Boolean UNIX_DataCenterEthernetPort::getLocETSConWilling() const
{
	return _locETSConWilling;
}

void UNIX_DataCenterEthernetPort::setLocETSConWilling(Boolean &value)
{
	_locETSConWilling = value;
}

Boolean UNIX_DataCenterEthernetPort::getLocETSConPriority(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_E_T_S_CON_PRIORITY, getLocETSConPriority());
	return true;
}

Array<Uint8> UNIX_DataCenterEthernetPort::getLocETSConPriority() const
{
	return _locETSConPriority;
}

void UNIX_DataCenterEthernetPort::setLocETSConPriority(Array<Uint8> &value)
{
	_locETSConPriority = value;
}

Boolean UNIX_DataCenterEthernetPort::getLocETSConPriTrafficClass(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_E_T_S_CON_PRI_TRAFFIC_CLASS, getLocETSConPriTrafficClass());
	return true;
}

Array<Uint8> UNIX_DataCenterEthernetPort::getLocETSConPriTrafficClass() const
{
	return _locETSConPriTrafficClass;
}

void UNIX_DataCenterEthernetPort::setLocETSConPriTrafficClass(Array<Uint8> &value)
{
	_locETSConPriTrafficClass = value;
}

Boolean UNIX_DataCenterEthernetPort::getLocETSConTrafficClass(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_E_T_S_CON_TRAFFIC_CLASS, getLocETSConTrafficClass());
	return true;
}

Array<Uint8> UNIX_DataCenterEthernetPort::getLocETSConTrafficClass() const
{
	return _locETSConTrafficClass;
}

void UNIX_DataCenterEthernetPort::setLocETSConTrafficClass(Array<Uint8> &value)
{
	_locETSConTrafficClass = value;
}

Boolean UNIX_DataCenterEthernetPort::getLocETSConTrafficClassBandwidth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_E_T_S_CON_TRAFFIC_CLASS_BANDWIDTH, getLocETSConTrafficClassBandwidth());
	return true;
}

Array<Uint8> UNIX_DataCenterEthernetPort::getLocETSConTrafficClassBandwidth() const
{
	return _locETSConTrafficClassBandwidth;
}

void UNIX_DataCenterEthernetPort::setLocETSConTrafficClassBandwidth(Array<Uint8> &value)
{
	_locETSConTrafficClassBandwidth = value;
}

Boolean UNIX_DataCenterEthernetPort::getLocETSConTSATrafficClass(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_E_T_S_CON_T_S_A_TRAFFIC_CLASS, getLocETSConTSATrafficClass());
	return true;
}

Array<Uint8> UNIX_DataCenterEthernetPort::getLocETSConTSATrafficClass() const
{
	return _locETSConTSATrafficClass;
}

void UNIX_DataCenterEthernetPort::setLocETSConTSATrafficClass(Array<Uint8> &value)
{
	_locETSConTSATrafficClass = value;
}

Boolean UNIX_DataCenterEthernetPort::getLocETSConTrafficSelectionAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_E_T_S_CON_TRAFFIC_SELECTION_ALGORITHM, getLocETSConTrafficSelectionAlgorithm());
	return true;
}

Array<Uint8> UNIX_DataCenterEthernetPort::getLocETSConTrafficSelectionAlgorithm() const
{
	return _locETSConTrafficSelectionAlgorithm;
}

void UNIX_DataCenterEthernetPort::setLocETSConTrafficSelectionAlgorithm(Array<Uint8> &value)
{
	_locETSConTrafficSelectionAlgorithm = value;
}

Boolean UNIX_DataCenterEthernetPort::getLocETSRecoTrafficClass(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_E_T_S_RECO_TRAFFIC_CLASS, getLocETSRecoTrafficClass());
	return true;
}

Array<Uint8> UNIX_DataCenterEthernetPort::getLocETSRecoTrafficClass() const
{
	return _locETSRecoTrafficClass;
}

void UNIX_DataCenterEthernetPort::setLocETSRecoTrafficClass(Array<Uint8> &value)
{
	_locETSRecoTrafficClass = value;
}

Boolean UNIX_DataCenterEthernetPort::getLocETSRecoTrafficClassBandwidth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_E_T_S_RECO_TRAFFIC_CLASS_BANDWIDTH, getLocETSRecoTrafficClassBandwidth());
	return true;
}

Array<Uint64> UNIX_DataCenterEthernetPort::getLocETSRecoTrafficClassBandwidth() const
{
	return _locETSRecoTrafficClassBandwidth;
}

void UNIX_DataCenterEthernetPort::setLocETSRecoTrafficClassBandwidth(Array<Uint64> &value)
{
	_locETSRecoTrafficClassBandwidth = value;
}

Boolean UNIX_DataCenterEthernetPort::getLocETSRecoTSATrafficClass(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_E_T_S_RECO_T_S_A_TRAFFIC_CLASS, getLocETSRecoTSATrafficClass());
	return true;
}

Array<Uint8> UNIX_DataCenterEthernetPort::getLocETSRecoTSATrafficClass() const
{
	return _locETSRecoTSATrafficClass;
}

void UNIX_DataCenterEthernetPort::setLocETSRecoTSATrafficClass(Array<Uint8> &value)
{
	_locETSRecoTSATrafficClass = value;
}

Boolean UNIX_DataCenterEthernetPort::getLocETSRecoTrafficSelectionAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_E_T_S_RECO_TRAFFIC_SELECTION_ALGORITHM, getLocETSRecoTrafficSelectionAlgorithm());
	return true;
}

Array<Uint8> UNIX_DataCenterEthernetPort::getLocETSRecoTrafficSelectionAlgorithm() const
{
	return _locETSRecoTrafficSelectionAlgorithm;
}

void UNIX_DataCenterEthernetPort::setLocETSRecoTrafficSelectionAlgorithm(Array<Uint8> &value)
{
	_locETSRecoTrafficSelectionAlgorithm = value;
}

Boolean UNIX_DataCenterEthernetPort::getLocPFCWilling(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_P_FC_WILLING, getLocPFCWilling());
	return true;
}

Boolean UNIX_DataCenterEthernetPort::getLocPFCWilling() const
{
	return _locPFCWilling;
}

void UNIX_DataCenterEthernetPort::setLocPFCWilling(Boolean &value)
{
	_locPFCWilling = value;
}

Boolean UNIX_DataCenterEthernetPort::getLocPFCMBC(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_P_FC_M_B_C, getLocPFCMBC());
	return true;
}

Boolean UNIX_DataCenterEthernetPort::getLocPFCMBC() const
{
	return _locPFCMBC;
}

void UNIX_DataCenterEthernetPort::setLocPFCMBC(Boolean &value)
{
	_locPFCMBC = value;
}

Boolean UNIX_DataCenterEthernetPort::getLocPFCCap(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_P_FC_CAP, getLocPFCCap());
	return true;
}

Uint8 UNIX_DataCenterEthernetPort::getLocPFCCap() const
{
	return _locPFCCap;
}

void UNIX_DataCenterEthernetPort::setLocPFCCap(Uint8 &value)
{
	_locPFCCap = value;
}

Boolean UNIX_DataCenterEthernetPort::getLocPFCEnablePriority(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_P_FC_ENABLE_PRIORITY, getLocPFCEnablePriority());
	return true;
}

Array<Uint8> UNIX_DataCenterEthernetPort::getLocPFCEnablePriority() const
{
	return _locPFCEnablePriority;
}

void UNIX_DataCenterEthernetPort::setLocPFCEnablePriority(Array<Uint8> &value)
{
	_locPFCEnablePriority = value;
}

Boolean UNIX_DataCenterEthernetPort::getLocPFCEnableEnabled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_P_FC_ENABLE_ENABLED, getLocPFCEnableEnabled());
	return true;
}

Array<Boolean> UNIX_DataCenterEthernetPort::getLocPFCEnableEnabled() const
{
	return _locPFCEnableEnabled;
}

void UNIX_DataCenterEthernetPort::setLocPFCEnableEnabled(Array<Boolean> &value)
{
	_locPFCEnableEnabled = value;
}

Boolean UNIX_DataCenterEthernetPort::getLocApplicationPriorityAESelector(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_APPLICATION_PRIORITY_A_E_SELECTOR, getLocApplicationPriorityAESelector());
	return true;
}

Array<Uint16> UNIX_DataCenterEthernetPort::getLocApplicationPriorityAESelector() const
{
	return _locApplicationPriorityAESelector;
}

void UNIX_DataCenterEthernetPort::setLocApplicationPriorityAESelector(Array<Uint16> &value)
{
	_locApplicationPriorityAESelector = value;
}

Boolean UNIX_DataCenterEthernetPort::getLocApplicationPriorityAEProtocol(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_APPLICATION_PRIORITY_A_E_PROTOCOL, getLocApplicationPriorityAEProtocol());
	return true;
}

Array<Uint16> UNIX_DataCenterEthernetPort::getLocApplicationPriorityAEProtocol() const
{
	return _locApplicationPriorityAEProtocol;
}

void UNIX_DataCenterEthernetPort::setLocApplicationPriorityAEProtocol(Array<Uint16> &value)
{
	_locApplicationPriorityAEProtocol = value;
}

Boolean UNIX_DataCenterEthernetPort::getLocApplicationPriorityAEPriority(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_APPLICATION_PRIORITY_A_E_PRIORITY, getLocApplicationPriorityAEPriority());
	return true;
}

Array<Uint8> UNIX_DataCenterEthernetPort::getLocApplicationPriorityAEPriority() const
{
	return _locApplicationPriorityAEPriority;
}

void UNIX_DataCenterEthernetPort::setLocApplicationPriorityAEPriority(Array<Uint8> &value)
{
	_locApplicationPriorityAEPriority = value;
}

Boolean UNIX_DataCenterEthernetPort::getRemETSConCreditBasedShaperSupport(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_E_T_S_CON_CREDIT_BASED_SHAPER_SUPPORT, getRemETSConCreditBasedShaperSupport());
	return true;
}

Boolean UNIX_DataCenterEthernetPort::getRemETSConCreditBasedShaperSupport() const
{
	return _remETSConCreditBasedShaperSupport;
}

void UNIX_DataCenterEthernetPort::setRemETSConCreditBasedShaperSupport(Boolean &value)
{
	_remETSConCreditBasedShaperSupport = value;
}

Boolean UNIX_DataCenterEthernetPort::getRemETSConTrafficClassesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_E_T_S_CON_TRAFFIC_CLASSES_SUPPORTED, getRemETSConTrafficClassesSupported());
	return true;
}

Uint8 UNIX_DataCenterEthernetPort::getRemETSConTrafficClassesSupported() const
{
	return _remETSConTrafficClassesSupported;
}

void UNIX_DataCenterEthernetPort::setRemETSConTrafficClassesSupported(Uint8 &value)
{
	_remETSConTrafficClassesSupported = value;
}

Boolean UNIX_DataCenterEthernetPort::getRemETSConWilling(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_E_T_S_CON_WILLING, getRemETSConWilling());
	return true;
}

Boolean UNIX_DataCenterEthernetPort::getRemETSConWilling() const
{
	return _remETSConWilling;
}

void UNIX_DataCenterEthernetPort::setRemETSConWilling(Boolean &value)
{
	_remETSConWilling = value;
}

Boolean UNIX_DataCenterEthernetPort::getRemETSConPriority(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_E_T_S_CON_PRIORITY, getRemETSConPriority());
	return true;
}

Array<Uint8> UNIX_DataCenterEthernetPort::getRemETSConPriority() const
{
	return _remETSConPriority;
}

void UNIX_DataCenterEthernetPort::setRemETSConPriority(Array<Uint8> &value)
{
	_remETSConPriority = value;
}

Boolean UNIX_DataCenterEthernetPort::getRemETSConPriTrafficClass(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_E_T_S_CON_PRI_TRAFFIC_CLASS, getRemETSConPriTrafficClass());
	return true;
}

Array<Uint8> UNIX_DataCenterEthernetPort::getRemETSConPriTrafficClass() const
{
	return _remETSConPriTrafficClass;
}

void UNIX_DataCenterEthernetPort::setRemETSConPriTrafficClass(Array<Uint8> &value)
{
	_remETSConPriTrafficClass = value;
}

Boolean UNIX_DataCenterEthernetPort::getRemETSConTrafficClass(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_E_T_S_CON_TRAFFIC_CLASS, getRemETSConTrafficClass());
	return true;
}

Array<Uint8> UNIX_DataCenterEthernetPort::getRemETSConTrafficClass() const
{
	return _remETSConTrafficClass;
}

void UNIX_DataCenterEthernetPort::setRemETSConTrafficClass(Array<Uint8> &value)
{
	_remETSConTrafficClass = value;
}

Boolean UNIX_DataCenterEthernetPort::getRemETSConTrafficClassBandwidth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_E_T_S_CON_TRAFFIC_CLASS_BANDWIDTH, getRemETSConTrafficClassBandwidth());
	return true;
}

Array<Uint8> UNIX_DataCenterEthernetPort::getRemETSConTrafficClassBandwidth() const
{
	return _remETSConTrafficClassBandwidth;
}

void UNIX_DataCenterEthernetPort::setRemETSConTrafficClassBandwidth(Array<Uint8> &value)
{
	_remETSConTrafficClassBandwidth = value;
}

Boolean UNIX_DataCenterEthernetPort::getRemETSConTSATrafficClass(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_E_T_S_CON_T_S_A_TRAFFIC_CLASS, getRemETSConTSATrafficClass());
	return true;
}

Array<Uint8> UNIX_DataCenterEthernetPort::getRemETSConTSATrafficClass() const
{
	return _remETSConTSATrafficClass;
}

void UNIX_DataCenterEthernetPort::setRemETSConTSATrafficClass(Array<Uint8> &value)
{
	_remETSConTSATrafficClass = value;
}

Boolean UNIX_DataCenterEthernetPort::getRemETSConTrafficSelectionAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_E_T_S_CON_TRAFFIC_SELECTION_ALGORITHM, getRemETSConTrafficSelectionAlgorithm());
	return true;
}

Array<Uint8> UNIX_DataCenterEthernetPort::getRemETSConTrafficSelectionAlgorithm() const
{
	return _remETSConTrafficSelectionAlgorithm;
}

void UNIX_DataCenterEthernetPort::setRemETSConTrafficSelectionAlgorithm(Array<Uint8> &value)
{
	_remETSConTrafficSelectionAlgorithm = value;
}

Boolean UNIX_DataCenterEthernetPort::getRemETSRecoTrafficClass(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_E_T_S_RECO_TRAFFIC_CLASS, getRemETSRecoTrafficClass());
	return true;
}

Array<Uint8> UNIX_DataCenterEthernetPort::getRemETSRecoTrafficClass() const
{
	return _remETSRecoTrafficClass;
}

void UNIX_DataCenterEthernetPort::setRemETSRecoTrafficClass(Array<Uint8> &value)
{
	_remETSRecoTrafficClass = value;
}

Boolean UNIX_DataCenterEthernetPort::getRemETSRecoTrafficClassBandwidth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_E_T_S_RECO_TRAFFIC_CLASS_BANDWIDTH, getRemETSRecoTrafficClassBandwidth());
	return true;
}

Array<Uint64> UNIX_DataCenterEthernetPort::getRemETSRecoTrafficClassBandwidth() const
{
	return _remETSRecoTrafficClassBandwidth;
}

void UNIX_DataCenterEthernetPort::setRemETSRecoTrafficClassBandwidth(Array<Uint64> &value)
{
	_remETSRecoTrafficClassBandwidth = value;
}

Boolean UNIX_DataCenterEthernetPort::getRemETSRecoTSATrafficClass(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_E_T_S_RECO_T_S_A_TRAFFIC_CLASS, getRemETSRecoTSATrafficClass());
	return true;
}

Array<Uint8> UNIX_DataCenterEthernetPort::getRemETSRecoTSATrafficClass() const
{
	return _remETSRecoTSATrafficClass;
}

void UNIX_DataCenterEthernetPort::setRemETSRecoTSATrafficClass(Array<Uint8> &value)
{
	_remETSRecoTSATrafficClass = value;
}

Boolean UNIX_DataCenterEthernetPort::getRemETSRecoTrafficSelectionAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_E_T_S_RECO_TRAFFIC_SELECTION_ALGORITHM, getRemETSRecoTrafficSelectionAlgorithm());
	return true;
}

Array<Uint8> UNIX_DataCenterEthernetPort::getRemETSRecoTrafficSelectionAlgorithm() const
{
	return _remETSRecoTrafficSelectionAlgorithm;
}

void UNIX_DataCenterEthernetPort::setRemETSRecoTrafficSelectionAlgorithm(Array<Uint8> &value)
{
	_remETSRecoTrafficSelectionAlgorithm = value;
}

Boolean UNIX_DataCenterEthernetPort::getRemPFCWilling(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_P_FC_WILLING, getRemPFCWilling());
	return true;
}

Boolean UNIX_DataCenterEthernetPort::getRemPFCWilling() const
{
	return _remPFCWilling;
}

void UNIX_DataCenterEthernetPort::setRemPFCWilling(Boolean &value)
{
	_remPFCWilling = value;
}

Boolean UNIX_DataCenterEthernetPort::getRemPFCMBC(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_P_FC_M_B_C, getRemPFCMBC());
	return true;
}

Boolean UNIX_DataCenterEthernetPort::getRemPFCMBC() const
{
	return _remPFCMBC;
}

void UNIX_DataCenterEthernetPort::setRemPFCMBC(Boolean &value)
{
	_remPFCMBC = value;
}

Boolean UNIX_DataCenterEthernetPort::getRemPFCCap(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_P_FC_CAP, getRemPFCCap());
	return true;
}

Uint8 UNIX_DataCenterEthernetPort::getRemPFCCap() const
{
	return _remPFCCap;
}

void UNIX_DataCenterEthernetPort::setRemPFCCap(Uint8 &value)
{
	_remPFCCap = value;
}

Boolean UNIX_DataCenterEthernetPort::getRemPFCEnablePriority(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_P_FC_ENABLE_PRIORITY, getRemPFCEnablePriority());
	return true;
}

Array<Uint8> UNIX_DataCenterEthernetPort::getRemPFCEnablePriority() const
{
	return _remPFCEnablePriority;
}

void UNIX_DataCenterEthernetPort::setRemPFCEnablePriority(Array<Uint8> &value)
{
	_remPFCEnablePriority = value;
}

Boolean UNIX_DataCenterEthernetPort::getRemPFCEnableEnabled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_P_FC_ENABLE_ENABLED, getRemPFCEnableEnabled());
	return true;
}

Array<Boolean> UNIX_DataCenterEthernetPort::getRemPFCEnableEnabled() const
{
	return _remPFCEnableEnabled;
}

void UNIX_DataCenterEthernetPort::setRemPFCEnableEnabled(Array<Boolean> &value)
{
	_remPFCEnableEnabled = value;
}

Boolean UNIX_DataCenterEthernetPort::getRemApplicationPriorityAESelector(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_APPLICATION_PRIORITY_A_E_SELECTOR, getRemApplicationPriorityAESelector());
	return true;
}

Array<Uint16> UNIX_DataCenterEthernetPort::getRemApplicationPriorityAESelector() const
{
	return _remApplicationPriorityAESelector;
}

void UNIX_DataCenterEthernetPort::setRemApplicationPriorityAESelector(Array<Uint16> &value)
{
	_remApplicationPriorityAESelector = value;
}

Boolean UNIX_DataCenterEthernetPort::getRemApplicationPriorityAEProtocol(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_APPLICATION_PRIORITY_A_E_PROTOCOL, getRemApplicationPriorityAEProtocol());
	return true;
}

Array<Uint16> UNIX_DataCenterEthernetPort::getRemApplicationPriorityAEProtocol() const
{
	return _remApplicationPriorityAEProtocol;
}

void UNIX_DataCenterEthernetPort::setRemApplicationPriorityAEProtocol(Array<Uint16> &value)
{
	_remApplicationPriorityAEProtocol = value;
}

Boolean UNIX_DataCenterEthernetPort::getRemApplicationPriorityAEPriority(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_APPLICATION_PRIORITY_A_E_PRIORITY, getRemApplicationPriorityAEPriority());
	return true;
}

Array<Uint8> UNIX_DataCenterEthernetPort::getRemApplicationPriorityAEPriority() const
{
	return _remApplicationPriorityAEPriority;
}

void UNIX_DataCenterEthernetPort::setRemApplicationPriorityAEPriority(Array<Uint8> &value)
{
	_remApplicationPriorityAEPriority = value;
}

Boolean UNIX_DataCenterEthernetPort::getAdminETSConCreditBasedShaperSupport(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADMIN_E_T_S_CON_CREDIT_BASED_SHAPER_SUPPORT, getAdminETSConCreditBasedShaperSupport());
	return true;
}

Boolean UNIX_DataCenterEthernetPort::getAdminETSConCreditBasedShaperSupport() const
{
	return _adminETSConCreditBasedShaperSupport;
}

void UNIX_DataCenterEthernetPort::setAdminETSConCreditBasedShaperSupport(Boolean &value)
{
	_adminETSConCreditBasedShaperSupport = value;
}

Boolean UNIX_DataCenterEthernetPort::getAdminETSConTrafficClassesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADMIN_E_T_S_CON_TRAFFIC_CLASSES_SUPPORTED, getAdminETSConTrafficClassesSupported());
	return true;
}

Uint8 UNIX_DataCenterEthernetPort::getAdminETSConTrafficClassesSupported() const
{
	return _adminETSConTrafficClassesSupported;
}

void UNIX_DataCenterEthernetPort::setAdminETSConTrafficClassesSupported(Uint8 &value)
{
	_adminETSConTrafficClassesSupported = value;
}

Boolean UNIX_DataCenterEthernetPort::getAdminETSConWilling(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADMIN_E_T_S_CON_WILLING, getAdminETSConWilling());
	return true;
}

Boolean UNIX_DataCenterEthernetPort::getAdminETSConWilling() const
{
	return _adminETSConWilling;
}

void UNIX_DataCenterEthernetPort::setAdminETSConWilling(Boolean &value)
{
	_adminETSConWilling = value;
}

Boolean UNIX_DataCenterEthernetPort::getAdminETSConPriority(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADMIN_E_T_S_CON_PRIORITY, getAdminETSConPriority());
	return true;
}

Array<Uint8> UNIX_DataCenterEthernetPort::getAdminETSConPriority() const
{
	return _adminETSConPriority;
}

void UNIX_DataCenterEthernetPort::setAdminETSConPriority(Array<Uint8> &value)
{
	_adminETSConPriority = value;
}

Boolean UNIX_DataCenterEthernetPort::getAdminETSConPriTrafficClass(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADMIN_E_T_S_CON_PRI_TRAFFIC_CLASS, getAdminETSConPriTrafficClass());
	return true;
}

Array<Uint8> UNIX_DataCenterEthernetPort::getAdminETSConPriTrafficClass() const
{
	return _adminETSConPriTrafficClass;
}

void UNIX_DataCenterEthernetPort::setAdminETSConPriTrafficClass(Array<Uint8> &value)
{
	_adminETSConPriTrafficClass = value;
}

Boolean UNIX_DataCenterEthernetPort::getAdminETSConTrafficClass(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADMIN_E_T_S_CON_TRAFFIC_CLASS, getAdminETSConTrafficClass());
	return true;
}

Array<Uint8> UNIX_DataCenterEthernetPort::getAdminETSConTrafficClass() const
{
	return _adminETSConTrafficClass;
}

void UNIX_DataCenterEthernetPort::setAdminETSConTrafficClass(Array<Uint8> &value)
{
	_adminETSConTrafficClass = value;
}

Boolean UNIX_DataCenterEthernetPort::getAdminETSConTrafficClassBandwidth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADMIN_E_T_S_CON_TRAFFIC_CLASS_BANDWIDTH, getAdminETSConTrafficClassBandwidth());
	return true;
}

Array<Uint8> UNIX_DataCenterEthernetPort::getAdminETSConTrafficClassBandwidth() const
{
	return _adminETSConTrafficClassBandwidth;
}

void UNIX_DataCenterEthernetPort::setAdminETSConTrafficClassBandwidth(Array<Uint8> &value)
{
	_adminETSConTrafficClassBandwidth = value;
}

Boolean UNIX_DataCenterEthernetPort::getAdminETSConTSATrafficClass(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADMIN_E_T_S_CON_T_S_A_TRAFFIC_CLASS, getAdminETSConTSATrafficClass());
	return true;
}

Array<Uint8> UNIX_DataCenterEthernetPort::getAdminETSConTSATrafficClass() const
{
	return _adminETSConTSATrafficClass;
}

void UNIX_DataCenterEthernetPort::setAdminETSConTSATrafficClass(Array<Uint8> &value)
{
	_adminETSConTSATrafficClass = value;
}

Boolean UNIX_DataCenterEthernetPort::getAdminETSConTrafficSelectionAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADMIN_E_T_S_CON_TRAFFIC_SELECTION_ALGORITHM, getAdminETSConTrafficSelectionAlgorithm());
	return true;
}

Array<Uint8> UNIX_DataCenterEthernetPort::getAdminETSConTrafficSelectionAlgorithm() const
{
	return _adminETSConTrafficSelectionAlgorithm;
}

void UNIX_DataCenterEthernetPort::setAdminETSConTrafficSelectionAlgorithm(Array<Uint8> &value)
{
	_adminETSConTrafficSelectionAlgorithm = value;
}

Boolean UNIX_DataCenterEthernetPort::getAdminETSRecoTrafficClass(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADMIN_E_T_S_RECO_TRAFFIC_CLASS, getAdminETSRecoTrafficClass());
	return true;
}

Array<Uint8> UNIX_DataCenterEthernetPort::getAdminETSRecoTrafficClass() const
{
	return _adminETSRecoTrafficClass;
}

void UNIX_DataCenterEthernetPort::setAdminETSRecoTrafficClass(Array<Uint8> &value)
{
	_adminETSRecoTrafficClass = value;
}

Boolean UNIX_DataCenterEthernetPort::getAdminETSRecoTrafficClassBandwidth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADMIN_E_T_S_RECO_TRAFFIC_CLASS_BANDWIDTH, getAdminETSRecoTrafficClassBandwidth());
	return true;
}

Array<Uint64> UNIX_DataCenterEthernetPort::getAdminETSRecoTrafficClassBandwidth() const
{
	return _adminETSRecoTrafficClassBandwidth;
}

void UNIX_DataCenterEthernetPort::setAdminETSRecoTrafficClassBandwidth(Array<Uint64> &value)
{
	_adminETSRecoTrafficClassBandwidth = value;
}

Boolean UNIX_DataCenterEthernetPort::getAdminETSRecoTSATrafficClass(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADMIN_E_T_S_RECO_T_S_A_TRAFFIC_CLASS, getAdminETSRecoTSATrafficClass());
	return true;
}

Array<Uint8> UNIX_DataCenterEthernetPort::getAdminETSRecoTSATrafficClass() const
{
	return _adminETSRecoTSATrafficClass;
}

void UNIX_DataCenterEthernetPort::setAdminETSRecoTSATrafficClass(Array<Uint8> &value)
{
	_adminETSRecoTSATrafficClass = value;
}

Boolean UNIX_DataCenterEthernetPort::getAdminETSRecoTrafficSelectionAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADMIN_E_T_S_RECO_TRAFFIC_SELECTION_ALGORITHM, getAdminETSRecoTrafficSelectionAlgorithm());
	return true;
}

Array<Uint8> UNIX_DataCenterEthernetPort::getAdminETSRecoTrafficSelectionAlgorithm() const
{
	return _adminETSRecoTrafficSelectionAlgorithm;
}

void UNIX_DataCenterEthernetPort::setAdminETSRecoTrafficSelectionAlgorithm(Array<Uint8> &value)
{
	_adminETSRecoTrafficSelectionAlgorithm = value;
}

Boolean UNIX_DataCenterEthernetPort::getAdminPFCWilling(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADMIN_P_FC_WILLING, getAdminPFCWilling());
	return true;
}

Boolean UNIX_DataCenterEthernetPort::getAdminPFCWilling() const
{
	return _adminPFCWilling;
}

void UNIX_DataCenterEthernetPort::setAdminPFCWilling(Boolean &value)
{
	_adminPFCWilling = value;
}

Boolean UNIX_DataCenterEthernetPort::getAdminPFCMBC(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADMIN_P_FC_M_B_C, getAdminPFCMBC());
	return true;
}

Boolean UNIX_DataCenterEthernetPort::getAdminPFCMBC() const
{
	return _adminPFCMBC;
}

void UNIX_DataCenterEthernetPort::setAdminPFCMBC(Boolean &value)
{
	_adminPFCMBC = value;
}

Boolean UNIX_DataCenterEthernetPort::getAdminPFCCap(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADMIN_P_FC_CAP, getAdminPFCCap());
	return true;
}

Uint8 UNIX_DataCenterEthernetPort::getAdminPFCCap() const
{
	return _adminPFCCap;
}

void UNIX_DataCenterEthernetPort::setAdminPFCCap(Uint8 &value)
{
	_adminPFCCap = value;
}

Boolean UNIX_DataCenterEthernetPort::getAdminPFCEnablePriority(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADMIN_P_FC_ENABLE_PRIORITY, getAdminPFCEnablePriority());
	return true;
}

Array<Uint8> UNIX_DataCenterEthernetPort::getAdminPFCEnablePriority() const
{
	return _adminPFCEnablePriority;
}

void UNIX_DataCenterEthernetPort::setAdminPFCEnablePriority(Array<Uint8> &value)
{
	_adminPFCEnablePriority = value;
}

Boolean UNIX_DataCenterEthernetPort::getAdminPFCEnableEnabled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADMIN_P_FC_ENABLE_ENABLED, getAdminPFCEnableEnabled());
	return true;
}

Array<Boolean> UNIX_DataCenterEthernetPort::getAdminPFCEnableEnabled() const
{
	return _adminPFCEnableEnabled;
}

void UNIX_DataCenterEthernetPort::setAdminPFCEnableEnabled(Array<Boolean> &value)
{
	_adminPFCEnableEnabled = value;
}

Boolean UNIX_DataCenterEthernetPort::getAdminApplicationPriorityAESelector(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADMIN_APPLICATION_PRIORITY_A_E_SELECTOR, getAdminApplicationPriorityAESelector());
	return true;
}

Array<Uint16> UNIX_DataCenterEthernetPort::getAdminApplicationPriorityAESelector() const
{
	return _adminApplicationPriorityAESelector;
}

void UNIX_DataCenterEthernetPort::setAdminApplicationPriorityAESelector(Array<Uint16> &value)
{
	_adminApplicationPriorityAESelector = value;
}

Boolean UNIX_DataCenterEthernetPort::getAdminApplicationPriorityAEProtocol(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADMIN_APPLICATION_PRIORITY_A_E_PROTOCOL, getAdminApplicationPriorityAEProtocol());
	return true;
}

Array<Uint16> UNIX_DataCenterEthernetPort::getAdminApplicationPriorityAEProtocol() const
{
	return _adminApplicationPriorityAEProtocol;
}

void UNIX_DataCenterEthernetPort::setAdminApplicationPriorityAEProtocol(Array<Uint16> &value)
{
	_adminApplicationPriorityAEProtocol = value;
}

Boolean UNIX_DataCenterEthernetPort::getAdminApplicationPriorityAEPriority(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADMIN_APPLICATION_PRIORITY_A_E_PRIORITY, getAdminApplicationPriorityAEPriority());
	return true;
}

Array<Uint8> UNIX_DataCenterEthernetPort::getAdminApplicationPriorityAEPriority() const
{
	return _adminApplicationPriorityAEPriority;
}

void UNIX_DataCenterEthernetPort::setAdminApplicationPriorityAEPriority(Array<Uint8> &value)
{
	_adminApplicationPriorityAEPriority = value;
}


void UNIX_DataCenterEthernetPort::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("DataCenterEthernetPort");
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
	_creationClassName = String("UNIX_DataCenterEthernetPort");
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
	_pfcLinkDelayAllowance = Uint32(0);
	_eTSConfigurationTxEnable = Boolean(false);
	_eTSRecommendationTxEnable = Boolean(false);
	_pFCTxEnable = Boolean(false);
	_applicationPriorityTxEnable = Boolean(false);
	_locETSConCreditBasedShaperSupport = Boolean(false);
	_locETSConTrafficClassesSupported = Uint8(0);
	_locETSConWilling = Boolean(false);
	_locETSConPriority.clear();
	_locETSConPriTrafficClass.clear();
	_locETSConTrafficClass.clear();
	_locETSConTrafficClassBandwidth.clear();
	_locETSConTSATrafficClass.clear();
	_locETSConTrafficSelectionAlgorithm.clear();
	_locETSRecoTrafficClass.clear();
	_locETSRecoTrafficClassBandwidth.clear();
	_locETSRecoTSATrafficClass.clear();
	_locETSRecoTrafficSelectionAlgorithm.clear();
	_locPFCWilling = Boolean(false);
	_locPFCMBC = Boolean(false);
	_locPFCCap = Uint8(0);
	_locPFCEnablePriority.clear();
	_locPFCEnableEnabled.clear();
	_locApplicationPriorityAESelector.clear();
	_locApplicationPriorityAEProtocol.clear();
	_locApplicationPriorityAEPriority.clear();
	_remETSConCreditBasedShaperSupport = Boolean(false);
	_remETSConTrafficClassesSupported = Uint8(0);
	_remETSConWilling = Boolean(false);
	_remETSConPriority.clear();
	_remETSConPriTrafficClass.clear();
	_remETSConTrafficClass.clear();
	_remETSConTrafficClassBandwidth.clear();
	_remETSConTSATrafficClass.clear();
	_remETSConTrafficSelectionAlgorithm.clear();
	_remETSRecoTrafficClass.clear();
	_remETSRecoTrafficClassBandwidth.clear();
	_remETSRecoTSATrafficClass.clear();
	_remETSRecoTrafficSelectionAlgorithm.clear();
	_remPFCWilling = Boolean(false);
	_remPFCMBC = Boolean(false);
	_remPFCCap = Uint8(0);
	_remPFCEnablePriority.clear();
	_remPFCEnableEnabled.clear();
	_remApplicationPriorityAESelector.clear();
	_remApplicationPriorityAEProtocol.clear();
	_remApplicationPriorityAEPriority.clear();
	_adminETSConCreditBasedShaperSupport = Boolean(false);
	_adminETSConTrafficClassesSupported = Uint8(0);
	_adminETSConWilling = Boolean(false);
	_adminETSConPriority.clear();
	_adminETSConPriTrafficClass.clear();
	_adminETSConTrafficClass.clear();
	_adminETSConTrafficClassBandwidth.clear();
	_adminETSConTSATrafficClass.clear();
	_adminETSConTrafficSelectionAlgorithm.clear();
	_adminETSRecoTrafficClass.clear();
	_adminETSRecoTrafficClassBandwidth.clear();
	_adminETSRecoTSATrafficClass.clear();
	_adminETSRecoTrafficSelectionAlgorithm.clear();
	_adminPFCWilling = Boolean(false);
	_adminPFCMBC = Boolean(false);
	_adminPFCCap = Uint8(0);
	_adminPFCEnablePriority.clear();
	_adminPFCEnableEnabled.clear();
	_adminApplicationPriorityAESelector.clear();
	_adminApplicationPriorityAEProtocol.clear();
	_adminApplicationPriorityAEPriority.clear();

}

Boolean UNIX_DataCenterEthernetPort::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "PfcLinkDelayAllowance"))
			{
				Uint32 pfcLinkDelayAllowanceValue;
				property.getValue().get(pfcLinkDelayAllowanceValue);
				setPfcLinkDelayAllowance(pfcLinkDelayAllowanceValue);
			}
			else if (String::equal(property.getName().getString(), "ETSConfigurationTxEnable"))
			{
				Boolean eTSConfigurationTxEnableValue;
				property.getValue().get(eTSConfigurationTxEnableValue);
				setETSConfigurationTxEnable(eTSConfigurationTxEnableValue);
			}
			else if (String::equal(property.getName().getString(), "ETSRecommendationTxEnable"))
			{
				Boolean eTSRecommendationTxEnableValue;
				property.getValue().get(eTSRecommendationTxEnableValue);
				setETSRecommendationTxEnable(eTSRecommendationTxEnableValue);
			}
			else if (String::equal(property.getName().getString(), "PFCTxEnable"))
			{
				Boolean pFCTxEnableValue;
				property.getValue().get(pFCTxEnableValue);
				setPFCTxEnable(pFCTxEnableValue);
			}
			else if (String::equal(property.getName().getString(), "ApplicationPriorityTxEnable"))
			{
				Boolean applicationPriorityTxEnableValue;
				property.getValue().get(applicationPriorityTxEnableValue);
				setApplicationPriorityTxEnable(applicationPriorityTxEnableValue);
			}
			else if (String::equal(property.getName().getString(), "LocETSConCreditBasedShaperSupport"))
			{
				Boolean locETSConCreditBasedShaperSupportValue;
				property.getValue().get(locETSConCreditBasedShaperSupportValue);
				setLocETSConCreditBasedShaperSupport(locETSConCreditBasedShaperSupportValue);
			}
			else if (String::equal(property.getName().getString(), "LocETSConTrafficClassesSupported"))
			{
				Uint8 locETSConTrafficClassesSupportedValue;
				property.getValue().get(locETSConTrafficClassesSupportedValue);
				setLocETSConTrafficClassesSupported(locETSConTrafficClassesSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "LocETSConWilling"))
			{
				Boolean locETSConWillingValue;
				property.getValue().get(locETSConWillingValue);
				setLocETSConWilling(locETSConWillingValue);
			}
			else if (String::equal(property.getName().getString(), "LocETSConPriority"))
			{
				Array<Uint8> locETSConPriorityValue;
				property.getValue().get(locETSConPriorityValue);
				setLocETSConPriority(locETSConPriorityValue);
			}
			else if (String::equal(property.getName().getString(), "LocETSConPriTrafficClass"))
			{
				Array<Uint8> locETSConPriTrafficClassValue;
				property.getValue().get(locETSConPriTrafficClassValue);
				setLocETSConPriTrafficClass(locETSConPriTrafficClassValue);
			}
			else if (String::equal(property.getName().getString(), "LocETSConTrafficClass"))
			{
				Array<Uint8> locETSConTrafficClassValue;
				property.getValue().get(locETSConTrafficClassValue);
				setLocETSConTrafficClass(locETSConTrafficClassValue);
			}
			else if (String::equal(property.getName().getString(), "LocETSConTrafficClassBandwidth"))
			{
				Array<Uint8> locETSConTrafficClassBandwidthValue;
				property.getValue().get(locETSConTrafficClassBandwidthValue);
				setLocETSConTrafficClassBandwidth(locETSConTrafficClassBandwidthValue);
			}
			else if (String::equal(property.getName().getString(), "LocETSConTSATrafficClass"))
			{
				Array<Uint8> locETSConTSATrafficClassValue;
				property.getValue().get(locETSConTSATrafficClassValue);
				setLocETSConTSATrafficClass(locETSConTSATrafficClassValue);
			}
			else if (String::equal(property.getName().getString(), "LocETSConTrafficSelectionAlgorithm"))
			{
				Array<Uint8> locETSConTrafficSelectionAlgorithmValue;
				property.getValue().get(locETSConTrafficSelectionAlgorithmValue);
				setLocETSConTrafficSelectionAlgorithm(locETSConTrafficSelectionAlgorithmValue);
			}
			else if (String::equal(property.getName().getString(), "LocETSRecoTrafficClass"))
			{
				Array<Uint8> locETSRecoTrafficClassValue;
				property.getValue().get(locETSRecoTrafficClassValue);
				setLocETSRecoTrafficClass(locETSRecoTrafficClassValue);
			}
			else if (String::equal(property.getName().getString(), "LocETSRecoTrafficClassBandwidth"))
			{
				Array<Uint64> locETSRecoTrafficClassBandwidthValue;
				property.getValue().get(locETSRecoTrafficClassBandwidthValue);
				setLocETSRecoTrafficClassBandwidth(locETSRecoTrafficClassBandwidthValue);
			}
			else if (String::equal(property.getName().getString(), "LocETSRecoTSATrafficClass"))
			{
				Array<Uint8> locETSRecoTSATrafficClassValue;
				property.getValue().get(locETSRecoTSATrafficClassValue);
				setLocETSRecoTSATrafficClass(locETSRecoTSATrafficClassValue);
			}
			else if (String::equal(property.getName().getString(), "LocETSRecoTrafficSelectionAlgorithm"))
			{
				Array<Uint8> locETSRecoTrafficSelectionAlgorithmValue;
				property.getValue().get(locETSRecoTrafficSelectionAlgorithmValue);
				setLocETSRecoTrafficSelectionAlgorithm(locETSRecoTrafficSelectionAlgorithmValue);
			}
			else if (String::equal(property.getName().getString(), "LocPFCWilling"))
			{
				Boolean locPFCWillingValue;
				property.getValue().get(locPFCWillingValue);
				setLocPFCWilling(locPFCWillingValue);
			}
			else if (String::equal(property.getName().getString(), "LocPFCMBC"))
			{
				Boolean locPFCMBCValue;
				property.getValue().get(locPFCMBCValue);
				setLocPFCMBC(locPFCMBCValue);
			}
			else if (String::equal(property.getName().getString(), "LocPFCCap"))
			{
				Uint8 locPFCCapValue;
				property.getValue().get(locPFCCapValue);
				setLocPFCCap(locPFCCapValue);
			}
			else if (String::equal(property.getName().getString(), "LocPFCEnablePriority"))
			{
				Array<Uint8> locPFCEnablePriorityValue;
				property.getValue().get(locPFCEnablePriorityValue);
				setLocPFCEnablePriority(locPFCEnablePriorityValue);
			}
			else if (String::equal(property.getName().getString(), "LocPFCEnableEnabled"))
			{
				Array<Boolean> locPFCEnableEnabledValue;
				property.getValue().get(locPFCEnableEnabledValue);
				setLocPFCEnableEnabled(locPFCEnableEnabledValue);
			}
			else if (String::equal(property.getName().getString(), "LocApplicationPriorityAESelector"))
			{
				Array<Uint16> locApplicationPriorityAESelectorValue;
				property.getValue().get(locApplicationPriorityAESelectorValue);
				setLocApplicationPriorityAESelector(locApplicationPriorityAESelectorValue);
			}
			else if (String::equal(property.getName().getString(), "LocApplicationPriorityAEProtocol"))
			{
				Array<Uint16> locApplicationPriorityAEProtocolValue;
				property.getValue().get(locApplicationPriorityAEProtocolValue);
				setLocApplicationPriorityAEProtocol(locApplicationPriorityAEProtocolValue);
			}
			else if (String::equal(property.getName().getString(), "LocApplicationPriorityAEPriority"))
			{
				Array<Uint8> locApplicationPriorityAEPriorityValue;
				property.getValue().get(locApplicationPriorityAEPriorityValue);
				setLocApplicationPriorityAEPriority(locApplicationPriorityAEPriorityValue);
			}
			else if (String::equal(property.getName().getString(), "RemETSConCreditBasedShaperSupport"))
			{
				Boolean remETSConCreditBasedShaperSupportValue;
				property.getValue().get(remETSConCreditBasedShaperSupportValue);
				setRemETSConCreditBasedShaperSupport(remETSConCreditBasedShaperSupportValue);
			}
			else if (String::equal(property.getName().getString(), "RemETSConTrafficClassesSupported"))
			{
				Uint8 remETSConTrafficClassesSupportedValue;
				property.getValue().get(remETSConTrafficClassesSupportedValue);
				setRemETSConTrafficClassesSupported(remETSConTrafficClassesSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "RemETSConWilling"))
			{
				Boolean remETSConWillingValue;
				property.getValue().get(remETSConWillingValue);
				setRemETSConWilling(remETSConWillingValue);
			}
			else if (String::equal(property.getName().getString(), "RemETSConPriority"))
			{
				Array<Uint8> remETSConPriorityValue;
				property.getValue().get(remETSConPriorityValue);
				setRemETSConPriority(remETSConPriorityValue);
			}
			else if (String::equal(property.getName().getString(), "RemETSConPriTrafficClass"))
			{
				Array<Uint8> remETSConPriTrafficClassValue;
				property.getValue().get(remETSConPriTrafficClassValue);
				setRemETSConPriTrafficClass(remETSConPriTrafficClassValue);
			}
			else if (String::equal(property.getName().getString(), "RemETSConTrafficClass"))
			{
				Array<Uint8> remETSConTrafficClassValue;
				property.getValue().get(remETSConTrafficClassValue);
				setRemETSConTrafficClass(remETSConTrafficClassValue);
			}
			else if (String::equal(property.getName().getString(), "RemETSConTrafficClassBandwidth"))
			{
				Array<Uint8> remETSConTrafficClassBandwidthValue;
				property.getValue().get(remETSConTrafficClassBandwidthValue);
				setRemETSConTrafficClassBandwidth(remETSConTrafficClassBandwidthValue);
			}
			else if (String::equal(property.getName().getString(), "RemETSConTSATrafficClass"))
			{
				Array<Uint8> remETSConTSATrafficClassValue;
				property.getValue().get(remETSConTSATrafficClassValue);
				setRemETSConTSATrafficClass(remETSConTSATrafficClassValue);
			}
			else if (String::equal(property.getName().getString(), "RemETSConTrafficSelectionAlgorithm"))
			{
				Array<Uint8> remETSConTrafficSelectionAlgorithmValue;
				property.getValue().get(remETSConTrafficSelectionAlgorithmValue);
				setRemETSConTrafficSelectionAlgorithm(remETSConTrafficSelectionAlgorithmValue);
			}
			else if (String::equal(property.getName().getString(), "RemETSRecoTrafficClass"))
			{
				Array<Uint8> remETSRecoTrafficClassValue;
				property.getValue().get(remETSRecoTrafficClassValue);
				setRemETSRecoTrafficClass(remETSRecoTrafficClassValue);
			}
			else if (String::equal(property.getName().getString(), "RemETSRecoTrafficClassBandwidth"))
			{
				Array<Uint64> remETSRecoTrafficClassBandwidthValue;
				property.getValue().get(remETSRecoTrafficClassBandwidthValue);
				setRemETSRecoTrafficClassBandwidth(remETSRecoTrafficClassBandwidthValue);
			}
			else if (String::equal(property.getName().getString(), "RemETSRecoTSATrafficClass"))
			{
				Array<Uint8> remETSRecoTSATrafficClassValue;
				property.getValue().get(remETSRecoTSATrafficClassValue);
				setRemETSRecoTSATrafficClass(remETSRecoTSATrafficClassValue);
			}
			else if (String::equal(property.getName().getString(), "RemETSRecoTrafficSelectionAlgorithm"))
			{
				Array<Uint8> remETSRecoTrafficSelectionAlgorithmValue;
				property.getValue().get(remETSRecoTrafficSelectionAlgorithmValue);
				setRemETSRecoTrafficSelectionAlgorithm(remETSRecoTrafficSelectionAlgorithmValue);
			}
			else if (String::equal(property.getName().getString(), "RemPFCWilling"))
			{
				Boolean remPFCWillingValue;
				property.getValue().get(remPFCWillingValue);
				setRemPFCWilling(remPFCWillingValue);
			}
			else if (String::equal(property.getName().getString(), "RemPFCMBC"))
			{
				Boolean remPFCMBCValue;
				property.getValue().get(remPFCMBCValue);
				setRemPFCMBC(remPFCMBCValue);
			}
			else if (String::equal(property.getName().getString(), "RemPFCCap"))
			{
				Uint8 remPFCCapValue;
				property.getValue().get(remPFCCapValue);
				setRemPFCCap(remPFCCapValue);
			}
			else if (String::equal(property.getName().getString(), "RemPFCEnablePriority"))
			{
				Array<Uint8> remPFCEnablePriorityValue;
				property.getValue().get(remPFCEnablePriorityValue);
				setRemPFCEnablePriority(remPFCEnablePriorityValue);
			}
			else if (String::equal(property.getName().getString(), "RemPFCEnableEnabled"))
			{
				Array<Boolean> remPFCEnableEnabledValue;
				property.getValue().get(remPFCEnableEnabledValue);
				setRemPFCEnableEnabled(remPFCEnableEnabledValue);
			}
			else if (String::equal(property.getName().getString(), "RemApplicationPriorityAESelector"))
			{
				Array<Uint16> remApplicationPriorityAESelectorValue;
				property.getValue().get(remApplicationPriorityAESelectorValue);
				setRemApplicationPriorityAESelector(remApplicationPriorityAESelectorValue);
			}
			else if (String::equal(property.getName().getString(), "RemApplicationPriorityAEProtocol"))
			{
				Array<Uint16> remApplicationPriorityAEProtocolValue;
				property.getValue().get(remApplicationPriorityAEProtocolValue);
				setRemApplicationPriorityAEProtocol(remApplicationPriorityAEProtocolValue);
			}
			else if (String::equal(property.getName().getString(), "RemApplicationPriorityAEPriority"))
			{
				Array<Uint8> remApplicationPriorityAEPriorityValue;
				property.getValue().get(remApplicationPriorityAEPriorityValue);
				setRemApplicationPriorityAEPriority(remApplicationPriorityAEPriorityValue);
			}
			else if (String::equal(property.getName().getString(), "AdminETSConCreditBasedShaperSupport"))
			{
				Boolean adminETSConCreditBasedShaperSupportValue;
				property.getValue().get(adminETSConCreditBasedShaperSupportValue);
				setAdminETSConCreditBasedShaperSupport(adminETSConCreditBasedShaperSupportValue);
			}
			else if (String::equal(property.getName().getString(), "AdminETSConTrafficClassesSupported"))
			{
				Uint8 adminETSConTrafficClassesSupportedValue;
				property.getValue().get(adminETSConTrafficClassesSupportedValue);
				setAdminETSConTrafficClassesSupported(adminETSConTrafficClassesSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "AdminETSConWilling"))
			{
				Boolean adminETSConWillingValue;
				property.getValue().get(adminETSConWillingValue);
				setAdminETSConWilling(adminETSConWillingValue);
			}
			else if (String::equal(property.getName().getString(), "AdminETSConPriority"))
			{
				Array<Uint8> adminETSConPriorityValue;
				property.getValue().get(adminETSConPriorityValue);
				setAdminETSConPriority(adminETSConPriorityValue);
			}
			else if (String::equal(property.getName().getString(), "AdminETSConPriTrafficClass"))
			{
				Array<Uint8> adminETSConPriTrafficClassValue;
				property.getValue().get(adminETSConPriTrafficClassValue);
				setAdminETSConPriTrafficClass(adminETSConPriTrafficClassValue);
			}
			else if (String::equal(property.getName().getString(), "AdminETSConTrafficClass"))
			{
				Array<Uint8> adminETSConTrafficClassValue;
				property.getValue().get(adminETSConTrafficClassValue);
				setAdminETSConTrafficClass(adminETSConTrafficClassValue);
			}
			else if (String::equal(property.getName().getString(), "AdminETSConTrafficClassBandwidth"))
			{
				Array<Uint8> adminETSConTrafficClassBandwidthValue;
				property.getValue().get(adminETSConTrafficClassBandwidthValue);
				setAdminETSConTrafficClassBandwidth(adminETSConTrafficClassBandwidthValue);
			}
			else if (String::equal(property.getName().getString(), "AdminETSConTSATrafficClass"))
			{
				Array<Uint8> adminETSConTSATrafficClassValue;
				property.getValue().get(adminETSConTSATrafficClassValue);
				setAdminETSConTSATrafficClass(adminETSConTSATrafficClassValue);
			}
			else if (String::equal(property.getName().getString(), "AdminETSConTrafficSelectionAlgorithm"))
			{
				Array<Uint8> adminETSConTrafficSelectionAlgorithmValue;
				property.getValue().get(adminETSConTrafficSelectionAlgorithmValue);
				setAdminETSConTrafficSelectionAlgorithm(adminETSConTrafficSelectionAlgorithmValue);
			}
			else if (String::equal(property.getName().getString(), "AdminETSRecoTrafficClass"))
			{
				Array<Uint8> adminETSRecoTrafficClassValue;
				property.getValue().get(adminETSRecoTrafficClassValue);
				setAdminETSRecoTrafficClass(adminETSRecoTrafficClassValue);
			}
			else if (String::equal(property.getName().getString(), "AdminETSRecoTrafficClassBandwidth"))
			{
				Array<Uint64> adminETSRecoTrafficClassBandwidthValue;
				property.getValue().get(adminETSRecoTrafficClassBandwidthValue);
				setAdminETSRecoTrafficClassBandwidth(adminETSRecoTrafficClassBandwidthValue);
			}
			else if (String::equal(property.getName().getString(), "AdminETSRecoTSATrafficClass"))
			{
				Array<Uint8> adminETSRecoTSATrafficClassValue;
				property.getValue().get(adminETSRecoTSATrafficClassValue);
				setAdminETSRecoTSATrafficClass(adminETSRecoTSATrafficClassValue);
			}
			else if (String::equal(property.getName().getString(), "AdminETSRecoTrafficSelectionAlgorithm"))
			{
				Array<Uint8> adminETSRecoTrafficSelectionAlgorithmValue;
				property.getValue().get(adminETSRecoTrafficSelectionAlgorithmValue);
				setAdminETSRecoTrafficSelectionAlgorithm(adminETSRecoTrafficSelectionAlgorithmValue);
			}
			else if (String::equal(property.getName().getString(), "AdminPFCWilling"))
			{
				Boolean adminPFCWillingValue;
				property.getValue().get(adminPFCWillingValue);
				setAdminPFCWilling(adminPFCWillingValue);
			}
			else if (String::equal(property.getName().getString(), "AdminPFCMBC"))
			{
				Boolean adminPFCMBCValue;
				property.getValue().get(adminPFCMBCValue);
				setAdminPFCMBC(adminPFCMBCValue);
			}
			else if (String::equal(property.getName().getString(), "AdminPFCCap"))
			{
				Uint8 adminPFCCapValue;
				property.getValue().get(adminPFCCapValue);
				setAdminPFCCap(adminPFCCapValue);
			}
			else if (String::equal(property.getName().getString(), "AdminPFCEnablePriority"))
			{
				Array<Uint8> adminPFCEnablePriorityValue;
				property.getValue().get(adminPFCEnablePriorityValue);
				setAdminPFCEnablePriority(adminPFCEnablePriorityValue);
			}
			else if (String::equal(property.getName().getString(), "AdminPFCEnableEnabled"))
			{
				Array<Boolean> adminPFCEnableEnabledValue;
				property.getValue().get(adminPFCEnableEnabledValue);
				setAdminPFCEnableEnabled(adminPFCEnableEnabledValue);
			}
			else if (String::equal(property.getName().getString(), "AdminApplicationPriorityAESelector"))
			{
				Array<Uint16> adminApplicationPriorityAESelectorValue;
				property.getValue().get(adminApplicationPriorityAESelectorValue);
				setAdminApplicationPriorityAESelector(adminApplicationPriorityAESelectorValue);
			}
			else if (String::equal(property.getName().getString(), "AdminApplicationPriorityAEProtocol"))
			{
				Array<Uint16> adminApplicationPriorityAEProtocolValue;
				property.getValue().get(adminApplicationPriorityAEProtocolValue);
				setAdminApplicationPriorityAEProtocol(adminApplicationPriorityAEProtocolValue);
			}
			else if (String::equal(property.getName().getString(), "AdminApplicationPriorityAEPriority"))
			{
				Array<Uint8> adminApplicationPriorityAEPriorityValue;
				property.getValue().get(adminApplicationPriorityAEPriorityValue);
				setAdminApplicationPriorityAEPriority(adminApplicationPriorityAEPriorityValue);
			}
	}
	return true;
}

Uint32 UNIX_DataCenterEthernetPort::invokeRequestStateChange(
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

Uint32 UNIX_DataCenterEthernetPort::invokeSetPowerState(
		Uint16 &inPowerState,
		CIMDateTime &inTime
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SetPowerState */
	
	
	
	return returnValue;
}

Uint32 UNIX_DataCenterEthernetPort::invokeReset()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method Reset */
	
	
	
	return returnValue;
}

Uint32 UNIX_DataCenterEthernetPort::invokeEnableDevice(
		Boolean &inEnabled
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method EnableDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_DataCenterEthernetPort::invokeOnlineDevice(
		Boolean &inOnline
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method OnlineDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_DataCenterEthernetPort::invokeQuiesceDevice(
		Boolean &inQuiesce
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method QuiesceDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_DataCenterEthernetPort::invokeSaveProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SaveProperties */
	
	
	
	return returnValue;
}

Uint32 UNIX_DataCenterEthernetPort::invokeRestoreProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method RestoreProperties */
	
	
	
	return returnValue;
}


Boolean UNIX_DataCenterEthernetPort::initialize()
{
	return false;
}

Boolean UNIX_DataCenterEthernetPort::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("DataCenterEthernetPort");
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
	_creationClassName = String("UNIX_DataCenterEthernetPort");
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
	_pfcLinkDelayAllowance = Uint32(0);
	_eTSConfigurationTxEnable = Boolean(false);
	_eTSRecommendationTxEnable = Boolean(false);
	_pFCTxEnable = Boolean(false);
	_applicationPriorityTxEnable = Boolean(false);
	_locETSConCreditBasedShaperSupport = Boolean(false);
	_locETSConTrafficClassesSupported = Uint8(0);
	_locETSConWilling = Boolean(false);
	_locETSConPriority.clear();
	_locETSConPriTrafficClass.clear();
	_locETSConTrafficClass.clear();
	_locETSConTrafficClassBandwidth.clear();
	_locETSConTSATrafficClass.clear();
	_locETSConTrafficSelectionAlgorithm.clear();
	_locETSRecoTrafficClass.clear();
	_locETSRecoTrafficClassBandwidth.clear();
	_locETSRecoTSATrafficClass.clear();
	_locETSRecoTrafficSelectionAlgorithm.clear();
	_locPFCWilling = Boolean(false);
	_locPFCMBC = Boolean(false);
	_locPFCCap = Uint8(0);
	_locPFCEnablePriority.clear();
	_locPFCEnableEnabled.clear();
	_locApplicationPriorityAESelector.clear();
	_locApplicationPriorityAEProtocol.clear();
	_locApplicationPriorityAEPriority.clear();
	_remETSConCreditBasedShaperSupport = Boolean(false);
	_remETSConTrafficClassesSupported = Uint8(0);
	_remETSConWilling = Boolean(false);
	_remETSConPriority.clear();
	_remETSConPriTrafficClass.clear();
	_remETSConTrafficClass.clear();
	_remETSConTrafficClassBandwidth.clear();
	_remETSConTSATrafficClass.clear();
	_remETSConTrafficSelectionAlgorithm.clear();
	_remETSRecoTrafficClass.clear();
	_remETSRecoTrafficClassBandwidth.clear();
	_remETSRecoTSATrafficClass.clear();
	_remETSRecoTrafficSelectionAlgorithm.clear();
	_remPFCWilling = Boolean(false);
	_remPFCMBC = Boolean(false);
	_remPFCCap = Uint8(0);
	_remPFCEnablePriority.clear();
	_remPFCEnableEnabled.clear();
	_remApplicationPriorityAESelector.clear();
	_remApplicationPriorityAEProtocol.clear();
	_remApplicationPriorityAEPriority.clear();
	_adminETSConCreditBasedShaperSupport = Boolean(false);
	_adminETSConTrafficClassesSupported = Uint8(0);
	_adminETSConWilling = Boolean(false);
	_adminETSConPriority.clear();
	_adminETSConPriTrafficClass.clear();
	_adminETSConTrafficClass.clear();
	_adminETSConTrafficClassBandwidth.clear();
	_adminETSConTSATrafficClass.clear();
	_adminETSConTrafficSelectionAlgorithm.clear();
	_adminETSRecoTrafficClass.clear();
	_adminETSRecoTrafficClassBandwidth.clear();
	_adminETSRecoTSATrafficClass.clear();
	_adminETSRecoTrafficSelectionAlgorithm.clear();
	_adminPFCWilling = Boolean(false);
	_adminPFCMBC = Boolean(false);
	_adminPFCCap = Uint8(0);
	_adminPFCEnablePriority.clear();
	_adminPFCEnableEnabled.clear();
	_adminApplicationPriorityAESelector.clear();
	_adminApplicationPriorityAEProtocol.clear();
	_adminApplicationPriorityAEPriority.clear();
	
	return false;
}

Boolean UNIX_DataCenterEthernetPort::finalize()
{
	return false;
}

Boolean UNIX_DataCenterEthernetPort::loadByName(const String name)
{
	return false;
}

Boolean UNIX_DataCenterEthernetPort::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_DataCenterEthernetPort::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DataCenterEthernetPort::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DataCenterEthernetPort::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DataCenterEthernetPort::validateInstance()
{
	return true;
}

