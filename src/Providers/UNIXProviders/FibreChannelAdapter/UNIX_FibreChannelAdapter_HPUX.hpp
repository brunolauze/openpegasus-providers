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


UNIX_FibreChannelAdapter::UNIX_FibreChannelAdapter(void)
{
}

UNIX_FibreChannelAdapter::~UNIX_FibreChannelAdapter(void)
{
}

Boolean UNIX_FibreChannelAdapter::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_FibreChannelAdapter::getInstanceID() const
{
	return _instanceID;
}

void UNIX_FibreChannelAdapter::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_FibreChannelAdapter::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_FibreChannelAdapter::getCaption() const
{
	return _caption;
}

void UNIX_FibreChannelAdapter::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_FibreChannelAdapter::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_FibreChannelAdapter::getDescription() const
{
	return _description;
}

void UNIX_FibreChannelAdapter::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_FibreChannelAdapter::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_FibreChannelAdapter::getElementName() const
{
	return _elementName;
}

void UNIX_FibreChannelAdapter::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_FibreChannelAdapter::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_FibreChannelAdapter::getGeneration() const
{
	return _generation;
}

void UNIX_FibreChannelAdapter::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_FibreChannelAdapter::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_FibreChannelAdapter::getInstallDate() const
{
	return _installDate;
}

void UNIX_FibreChannelAdapter::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_FibreChannelAdapter::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_FibreChannelAdapter::getName() const
{
	return _name;
}

void UNIX_FibreChannelAdapter::setName(String &value)
{
	_name = value;
}

Boolean UNIX_FibreChannelAdapter::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_FibreChannelAdapter::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_FibreChannelAdapter::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_FibreChannelAdapter::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_FibreChannelAdapter::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_FibreChannelAdapter::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_FibreChannelAdapter::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_FibreChannelAdapter::getStatus() const
{
	return _status;
}

void UNIX_FibreChannelAdapter::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_FibreChannelAdapter::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_FibreChannelAdapter::getHealthState() const
{
	return _healthState;
}

void UNIX_FibreChannelAdapter::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_FibreChannelAdapter::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_FibreChannelAdapter::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_FibreChannelAdapter::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_FibreChannelAdapter::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_FibreChannelAdapter::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_FibreChannelAdapter::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_FibreChannelAdapter::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_FibreChannelAdapter::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_FibreChannelAdapter::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_FibreChannelAdapter::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_FibreChannelAdapter::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_FibreChannelAdapter::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_FibreChannelAdapter::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_FibreChannelAdapter::getEnabledState() const
{
	return _enabledState;
}

void UNIX_FibreChannelAdapter::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_FibreChannelAdapter::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_FibreChannelAdapter::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_FibreChannelAdapter::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_FibreChannelAdapter::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_FibreChannelAdapter::getRequestedState() const
{
	return _requestedState;
}

void UNIX_FibreChannelAdapter::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_FibreChannelAdapter::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_FibreChannelAdapter::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_FibreChannelAdapter::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_FibreChannelAdapter::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_FibreChannelAdapter::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_FibreChannelAdapter::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_FibreChannelAdapter::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_FibreChannelAdapter::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_FibreChannelAdapter::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_FibreChannelAdapter::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_FibreChannelAdapter::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_FibreChannelAdapter::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_FibreChannelAdapter::getAllocationState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOCATION_STATE, getAllocationState());
	return true;
}

String UNIX_FibreChannelAdapter::getAllocationState() const
{
	return _allocationState;
}

void UNIX_FibreChannelAdapter::setAllocationState(String &value)
{
	_allocationState = value;
}

Boolean UNIX_FibreChannelAdapter::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_FibreChannelAdapter::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_FibreChannelAdapter::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_FibreChannelAdapter::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_FibreChannelAdapter::getSystemName() const
{
	return _systemName;
}

void UNIX_FibreChannelAdapter::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_FibreChannelAdapter::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_FibreChannelAdapter::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_FibreChannelAdapter::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_FibreChannelAdapter::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_FibreChannelAdapter::getDeviceID() const
{
	return _deviceID;
}

void UNIX_FibreChannelAdapter::setDeviceID(String &value)
{
	_deviceID = value;
}

Boolean UNIX_FibreChannelAdapter::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_FibreChannelAdapter::getPowerManagementSupported() const
{
	return _powerManagementSupported;
}

void UNIX_FibreChannelAdapter::setPowerManagementSupported(Boolean &value)
{
	_powerManagementSupported = value;
}

Boolean UNIX_FibreChannelAdapter::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_FibreChannelAdapter::getPowerManagementCapabilities() const
{
	return _powerManagementCapabilities;
}

void UNIX_FibreChannelAdapter::setPowerManagementCapabilities(Array<Uint16> &value)
{
	_powerManagementCapabilities = value;
}

Boolean UNIX_FibreChannelAdapter::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_FibreChannelAdapter::getAvailability() const
{
	return _availability;
}

void UNIX_FibreChannelAdapter::setAvailability(Uint16 &value)
{
	_availability = value;
}

Boolean UNIX_FibreChannelAdapter::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_FibreChannelAdapter::getStatusInfo() const
{
	return _statusInfo;
}

void UNIX_FibreChannelAdapter::setStatusInfo(Uint16 &value)
{
	_statusInfo = value;
}

Boolean UNIX_FibreChannelAdapter::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_FibreChannelAdapter::getLastErrorCode() const
{
	return _lastErrorCode;
}

void UNIX_FibreChannelAdapter::setLastErrorCode(Uint32 &value)
{
	_lastErrorCode = value;
}

Boolean UNIX_FibreChannelAdapter::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_FibreChannelAdapter::getErrorDescription() const
{
	return _errorDescription;
}

void UNIX_FibreChannelAdapter::setErrorDescription(String &value)
{
	_errorDescription = value;
}

Boolean UNIX_FibreChannelAdapter::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_FibreChannelAdapter::getErrorCleared() const
{
	return _errorCleared;
}

void UNIX_FibreChannelAdapter::setErrorCleared(Boolean &value)
{
	_errorCleared = value;
}

Boolean UNIX_FibreChannelAdapter::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_FibreChannelAdapter::getOtherIdentifyingInfo() const
{
	return _otherIdentifyingInfo;
}

void UNIX_FibreChannelAdapter::setOtherIdentifyingInfo(Array<String> &value)
{
	_otherIdentifyingInfo = value;
}

Boolean UNIX_FibreChannelAdapter::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_FibreChannelAdapter::getPowerOnHours() const
{
	return _powerOnHours;
}

void UNIX_FibreChannelAdapter::setPowerOnHours(Uint64 &value)
{
	_powerOnHours = value;
}

Boolean UNIX_FibreChannelAdapter::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_FibreChannelAdapter::getTotalPowerOnHours() const
{
	return _totalPowerOnHours;
}

void UNIX_FibreChannelAdapter::setTotalPowerOnHours(Uint64 &value)
{
	_totalPowerOnHours = value;
}

Boolean UNIX_FibreChannelAdapter::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_FibreChannelAdapter::getIdentifyingDescriptions() const
{
	return _identifyingDescriptions;
}

void UNIX_FibreChannelAdapter::setIdentifyingDescriptions(Array<String> &value)
{
	_identifyingDescriptions = value;
}

Boolean UNIX_FibreChannelAdapter::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_FibreChannelAdapter::getAdditionalAvailability() const
{
	return _additionalAvailability;
}

void UNIX_FibreChannelAdapter::setAdditionalAvailability(Array<Uint16> &value)
{
	_additionalAvailability = value;
}

Boolean UNIX_FibreChannelAdapter::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_FibreChannelAdapter::getMaxQuiesceTime() const
{
	return _maxQuiesceTime;
}

void UNIX_FibreChannelAdapter::setMaxQuiesceTime(Uint64 &value)
{
	_maxQuiesceTime = value;
}

Boolean UNIX_FibreChannelAdapter::getLocationIndicator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCATION_INDICATOR, getLocationIndicator());
	return true;
}

Uint16 UNIX_FibreChannelAdapter::getLocationIndicator() const
{
	return _locationIndicator;
}

void UNIX_FibreChannelAdapter::setLocationIndicator(Uint16 &value)
{
	_locationIndicator = value;
}

Boolean UNIX_FibreChannelAdapter::getPermanentAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERMANENT_ADDRESS, getPermanentAddress());
	return true;
}

String UNIX_FibreChannelAdapter::getPermanentAddress() const
{
	return _permanentAddress;
}

void UNIX_FibreChannelAdapter::setPermanentAddress(String &value)
{
	_permanentAddress = value;
}

Boolean UNIX_FibreChannelAdapter::getNetworkAddresses(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NETWORK_ADDRESSES, getNetworkAddresses());
	return true;
}

Array<String> UNIX_FibreChannelAdapter::getNetworkAddresses() const
{
	return _networkAddresses;
}

void UNIX_FibreChannelAdapter::setNetworkAddresses(Array<String> &value)
{
	_networkAddresses = value;
}

Boolean UNIX_FibreChannelAdapter::getSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SPEED, getSpeed());
	return true;
}

Uint64 UNIX_FibreChannelAdapter::getSpeed() const
{
	return _speed;
}

void UNIX_FibreChannelAdapter::setSpeed(Uint64 &value)
{
	_speed = value;
}

Boolean UNIX_FibreChannelAdapter::getMaxSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_SPEED, getMaxSpeed());
	return true;
}

Uint64 UNIX_FibreChannelAdapter::getMaxSpeed() const
{
	return _maxSpeed;
}

void UNIX_FibreChannelAdapter::setMaxSpeed(Uint64 &value)
{
	_maxSpeed = value;
}

Boolean UNIX_FibreChannelAdapter::getFullDuplex(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FULL_DUPLEX, getFullDuplex());
	return true;
}

Boolean UNIX_FibreChannelAdapter::getFullDuplex() const
{
	return _fullDuplex;
}

void UNIX_FibreChannelAdapter::setFullDuplex(Boolean &value)
{
	_fullDuplex = value;
}

Boolean UNIX_FibreChannelAdapter::getAutoSense(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTO_SENSE, getAutoSense());
	return true;
}

Boolean UNIX_FibreChannelAdapter::getAutoSense() const
{
	return _autoSense;
}

void UNIX_FibreChannelAdapter::setAutoSense(Boolean &value)
{
	_autoSense = value;
}

Boolean UNIX_FibreChannelAdapter::getOctetsTransmitted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OCTETS_TRANSMITTED, getOctetsTransmitted());
	return true;
}

Uint64 UNIX_FibreChannelAdapter::getOctetsTransmitted() const
{
	return _octetsTransmitted;
}

void UNIX_FibreChannelAdapter::setOctetsTransmitted(Uint64 &value)
{
	_octetsTransmitted = value;
}

Boolean UNIX_FibreChannelAdapter::getOctetsReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OCTETS_RECEIVED, getOctetsReceived());
	return true;
}

Uint64 UNIX_FibreChannelAdapter::getOctetsReceived() const
{
	return _octetsReceived;
}

void UNIX_FibreChannelAdapter::setOctetsReceived(Uint64 &value)
{
	_octetsReceived = value;
}

Boolean UNIX_FibreChannelAdapter::getMaxFrameSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_FRAME_SIZE, getMaxFrameSize());
	return true;
}

Uint64 UNIX_FibreChannelAdapter::getMaxFrameSize() const
{
	return _maxFrameSize;
}

void UNIX_FibreChannelAdapter::setMaxFrameSize(Uint64 &value)
{
	_maxFrameSize = value;
}

Boolean UNIX_FibreChannelAdapter::getSupportedCOS(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_C_OS, getSupportedCOS());
	return true;
}

Array<Uint16> UNIX_FibreChannelAdapter::getSupportedCOS() const
{
	return _supportedCOS;
}

void UNIX_FibreChannelAdapter::setSupportedCOS(Array<Uint16> &value)
{
	_supportedCOS = value;
}

Boolean UNIX_FibreChannelAdapter::getFC4TypesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FC_4_TYPES_SUPPORTED, getFC4TypesSupported());
	return true;
}

Array<Uint16> UNIX_FibreChannelAdapter::getFC4TypesSupported() const
{
	return _fC4TypesSupported;
}

void UNIX_FibreChannelAdapter::setFC4TypesSupported(Array<Uint16> &value)
{
	_fC4TypesSupported = value;
}

Boolean UNIX_FibreChannelAdapter::getFC4VendorUniqueTypes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FC_4_VENDOR_UNIQUE_TYPES, getFC4VendorUniqueTypes());
	return true;
}

Array<Uint16> UNIX_FibreChannelAdapter::getFC4VendorUniqueTypes() const
{
	return _fC4VendorUniqueTypes;
}

void UNIX_FibreChannelAdapter::setFC4VendorUniqueTypes(Array<Uint16> &value)
{
	_fC4VendorUniqueTypes = value;
}

Boolean UNIX_FibreChannelAdapter::getCurrentFC4Types(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_FC_4_TYPES, getCurrentFC4Types());
	return true;
}

Array<Uint16> UNIX_FibreChannelAdapter::getCurrentFC4Types() const
{
	return _currentFC4Types;
}

void UNIX_FibreChannelAdapter::setCurrentFC4Types(Array<Uint16> &value)
{
	_currentFC4Types = value;
}

Boolean UNIX_FibreChannelAdapter::getCurrentFC4VendorTypes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_FC_4_VENDOR_TYPES, getCurrentFC4VendorTypes());
	return true;
}

Array<Uint16> UNIX_FibreChannelAdapter::getCurrentFC4VendorTypes() const
{
	return _currentFC4VendorTypes;
}

void UNIX_FibreChannelAdapter::setCurrentFC4VendorTypes(Array<Uint16> &value)
{
	_currentFC4VendorTypes = value;
}

Boolean UNIX_FibreChannelAdapter::getCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITIES, getCapabilities());
	return true;
}

Array<Uint16> UNIX_FibreChannelAdapter::getCapabilities() const
{
	return _capabilities;
}

void UNIX_FibreChannelAdapter::setCapabilities(Array<Uint16> &value)
{
	_capabilities = value;
}

Boolean UNIX_FibreChannelAdapter::getCapabilityDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITY_DESCRIPTIONS, getCapabilityDescriptions());
	return true;
}

Array<String> UNIX_FibreChannelAdapter::getCapabilityDescriptions() const
{
	return _capabilityDescriptions;
}

void UNIX_FibreChannelAdapter::setCapabilityDescriptions(Array<String> &value)
{
	_capabilityDescriptions = value;
}

Boolean UNIX_FibreChannelAdapter::getReceiveBufferErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECEIVE_BUFFER_ERRORS, getReceiveBufferErrors());
	return true;
}

Uint64 UNIX_FibreChannelAdapter::getReceiveBufferErrors() const
{
	return _receiveBufferErrors;
}

void UNIX_FibreChannelAdapter::setReceiveBufferErrors(Uint64 &value)
{
	_receiveBufferErrors = value;
}

Boolean UNIX_FibreChannelAdapter::getReceiveEndErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECEIVE_END_ERRORS, getReceiveEndErrors());
	return true;
}

Uint64 UNIX_FibreChannelAdapter::getReceiveEndErrors() const
{
	return _receiveEndErrors;
}

void UNIX_FibreChannelAdapter::setReceiveEndErrors(Uint64 &value)
{
	_receiveEndErrors = value;
}

Boolean UNIX_FibreChannelAdapter::getResourceAllocationTimeout(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESOURCE_ALLOCATION_TIMEOUT, getResourceAllocationTimeout());
	return true;
}

Uint64 UNIX_FibreChannelAdapter::getResourceAllocationTimeout() const
{
	return _resourceAllocationTimeout;
}

void UNIX_FibreChannelAdapter::setResourceAllocationTimeout(Uint64 &value)
{
	_resourceAllocationTimeout = value;
}

Boolean UNIX_FibreChannelAdapter::getErrorDetectTimeout(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DETECT_TIMEOUT, getErrorDetectTimeout());
	return true;
}

Uint64 UNIX_FibreChannelAdapter::getErrorDetectTimeout() const
{
	return _errorDetectTimeout;
}

void UNIX_FibreChannelAdapter::setErrorDetectTimeout(Uint64 &value)
{
	_errorDetectTimeout = value;
}

Boolean UNIX_FibreChannelAdapter::getClass1SequencesSent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASS_1_SEQUENCES_SENT, getClass1SequencesSent());
	return true;
}

Uint64 UNIX_FibreChannelAdapter::getClass1SequencesSent() const
{
	return _class1SequencesSent;
}

void UNIX_FibreChannelAdapter::setClass1SequencesSent(Uint64 &value)
{
	_class1SequencesSent = value;
}

Boolean UNIX_FibreChannelAdapter::getClass2SequencesSent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASS_2_SEQUENCES_SENT, getClass2SequencesSent());
	return true;
}

Uint64 UNIX_FibreChannelAdapter::getClass2SequencesSent() const
{
	return _class2SequencesSent;
}

void UNIX_FibreChannelAdapter::setClass2SequencesSent(Uint64 &value)
{
	_class2SequencesSent = value;
}

Boolean UNIX_FibreChannelAdapter::getClass3SequencesSent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASS_3_SEQUENCES_SENT, getClass3SequencesSent());
	return true;
}

Uint64 UNIX_FibreChannelAdapter::getClass3SequencesSent() const
{
	return _class3SequencesSent;
}

void UNIX_FibreChannelAdapter::setClass3SequencesSent(Uint64 &value)
{
	_class3SequencesSent = value;
}

Boolean UNIX_FibreChannelAdapter::getClass4SequencesSent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASS_4_SEQUENCES_SENT, getClass4SequencesSent());
	return true;
}

Uint64 UNIX_FibreChannelAdapter::getClass4SequencesSent() const
{
	return _class4SequencesSent;
}

void UNIX_FibreChannelAdapter::setClass4SequencesSent(Uint64 &value)
{
	_class4SequencesSent = value;
}

Boolean UNIX_FibreChannelAdapter::getClass2OctetsReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASS_2_OCTETS_RECEIVED, getClass2OctetsReceived());
	return true;
}

Uint64 UNIX_FibreChannelAdapter::getClass2OctetsReceived() const
{
	return _class2OctetsReceived;
}

void UNIX_FibreChannelAdapter::setClass2OctetsReceived(Uint64 &value)
{
	_class2OctetsReceived = value;
}

Boolean UNIX_FibreChannelAdapter::getClass2OctetsTransmitted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASS_2_OCTETS_TRANSMITTED, getClass2OctetsTransmitted());
	return true;
}

Uint64 UNIX_FibreChannelAdapter::getClass2OctetsTransmitted() const
{
	return _class2OctetsTransmitted;
}

void UNIX_FibreChannelAdapter::setClass2OctetsTransmitted(Uint64 &value)
{
	_class2OctetsTransmitted = value;
}

Boolean UNIX_FibreChannelAdapter::getClass2FramesReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASS_2_FRAMES_RECEIVED, getClass2FramesReceived());
	return true;
}

Uint64 UNIX_FibreChannelAdapter::getClass2FramesReceived() const
{
	return _class2FramesReceived;
}

void UNIX_FibreChannelAdapter::setClass2FramesReceived(Uint64 &value)
{
	_class2FramesReceived = value;
}

Boolean UNIX_FibreChannelAdapter::getClass2FramesTransmitted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASS_2_FRAMES_TRANSMITTED, getClass2FramesTransmitted());
	return true;
}

Uint64 UNIX_FibreChannelAdapter::getClass2FramesTransmitted() const
{
	return _class2FramesTransmitted;
}

void UNIX_FibreChannelAdapter::setClass2FramesTransmitted(Uint64 &value)
{
	_class2FramesTransmitted = value;
}

Boolean UNIX_FibreChannelAdapter::getClass2DiscardFrames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASS_2_DISCARD_FRAMES, getClass2DiscardFrames());
	return true;
}

Uint64 UNIX_FibreChannelAdapter::getClass2DiscardFrames() const
{
	return _class2DiscardFrames;
}

void UNIX_FibreChannelAdapter::setClass2DiscardFrames(Uint64 &value)
{
	_class2DiscardFrames = value;
}

Boolean UNIX_FibreChannelAdapter::getClass3OctetsReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASS_3_OCTETS_RECEIVED, getClass3OctetsReceived());
	return true;
}

Uint64 UNIX_FibreChannelAdapter::getClass3OctetsReceived() const
{
	return _class3OctetsReceived;
}

void UNIX_FibreChannelAdapter::setClass3OctetsReceived(Uint64 &value)
{
	_class3OctetsReceived = value;
}

Boolean UNIX_FibreChannelAdapter::getClass3OctetsTransmitted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASS_3_OCTETS_TRANSMITTED, getClass3OctetsTransmitted());
	return true;
}

Uint64 UNIX_FibreChannelAdapter::getClass3OctetsTransmitted() const
{
	return _class3OctetsTransmitted;
}

void UNIX_FibreChannelAdapter::setClass3OctetsTransmitted(Uint64 &value)
{
	_class3OctetsTransmitted = value;
}

Boolean UNIX_FibreChannelAdapter::getClass3FramesReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASS_3_FRAMES_RECEIVED, getClass3FramesReceived());
	return true;
}

Uint64 UNIX_FibreChannelAdapter::getClass3FramesReceived() const
{
	return _class3FramesReceived;
}

void UNIX_FibreChannelAdapter::setClass3FramesReceived(Uint64 &value)
{
	_class3FramesReceived = value;
}

Boolean UNIX_FibreChannelAdapter::getClass3FramesTransmitted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASS_3_FRAMES_TRANSMITTED, getClass3FramesTransmitted());
	return true;
}

Uint64 UNIX_FibreChannelAdapter::getClass3FramesTransmitted() const
{
	return _class3FramesTransmitted;
}

void UNIX_FibreChannelAdapter::setClass3FramesTransmitted(Uint64 &value)
{
	_class3FramesTransmitted = value;
}

Boolean UNIX_FibreChannelAdapter::getClass3DiscardFrames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASS_3_DISCARD_FRAMES, getClass3DiscardFrames());
	return true;
}

Uint64 UNIX_FibreChannelAdapter::getClass3DiscardFrames() const
{
	return _class3DiscardFrames;
}

void UNIX_FibreChannelAdapter::setClass3DiscardFrames(Uint64 &value)
{
	_class3DiscardFrames = value;
}

Boolean UNIX_FibreChannelAdapter::getParityErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PARITY_ERRORS, getParityErrors());
	return true;
}

Uint64 UNIX_FibreChannelAdapter::getParityErrors() const
{
	return _parityErrors;
}

void UNIX_FibreChannelAdapter::setParityErrors(Uint64 &value)
{
	_parityErrors = value;
}

Boolean UNIX_FibreChannelAdapter::getFrameTimeouts(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FRAME_TIMEOUTS, getFrameTimeouts());
	return true;
}

Uint64 UNIX_FibreChannelAdapter::getFrameTimeouts() const
{
	return _frameTimeouts;
}

void UNIX_FibreChannelAdapter::setFrameTimeouts(Uint64 &value)
{
	_frameTimeouts = value;
}

Boolean UNIX_FibreChannelAdapter::getBufferCreditErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BUFFER_CREDIT_ERRORS, getBufferCreditErrors());
	return true;
}

Uint64 UNIX_FibreChannelAdapter::getBufferCreditErrors() const
{
	return _bufferCreditErrors;
}

void UNIX_FibreChannelAdapter::setBufferCreditErrors(Uint64 &value)
{
	_bufferCreditErrors = value;
}

Boolean UNIX_FibreChannelAdapter::getEndCreditErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_END_CREDIT_ERRORS, getEndCreditErrors());
	return true;
}

Uint64 UNIX_FibreChannelAdapter::getEndCreditErrors() const
{
	return _endCreditErrors;
}

void UNIX_FibreChannelAdapter::setEndCreditErrors(Uint64 &value)
{
	_endCreditErrors = value;
}

Boolean UNIX_FibreChannelAdapter::getOutOfOrderFramesReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OUT_OF_ORDER_FRAMES_RECEIVED, getOutOfOrderFramesReceived());
	return true;
}

Uint64 UNIX_FibreChannelAdapter::getOutOfOrderFramesReceived() const
{
	return _outOfOrderFramesReceived;
}

void UNIX_FibreChannelAdapter::setOutOfOrderFramesReceived(Uint64 &value)
{
	_outOfOrderFramesReceived = value;
}


void UNIX_FibreChannelAdapter::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("FibreChannelAdapter");
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
	_creationClassName = String("UNIX_FibreChannelAdapter");
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
	_permanentAddress = String ("");
	_networkAddresses.clear();
	_speed = Uint64(0);
	_maxSpeed = Uint64(0);
	_fullDuplex = Boolean(false);
	_autoSense = Boolean(false);
	_octetsTransmitted = Uint64(0);
	_octetsReceived = Uint64(0);
	_maxFrameSize = Uint64(0);
	_supportedCOS.clear();
	_fC4TypesSupported.clear();
	_fC4VendorUniqueTypes.clear();
	_currentFC4Types.clear();
	_currentFC4VendorTypes.clear();
	_capabilities.clear();
	_capabilityDescriptions.clear();
	_receiveBufferErrors = Uint64(0);
	_receiveEndErrors = Uint64(0);
	_resourceAllocationTimeout = Uint64(0);
	_errorDetectTimeout = Uint64(0);
	_class1SequencesSent = Uint64(0);
	_class2SequencesSent = Uint64(0);
	_class3SequencesSent = Uint64(0);
	_class4SequencesSent = Uint64(0);
	_class2OctetsReceived = Uint64(0);
	_class2OctetsTransmitted = Uint64(0);
	_class2FramesReceived = Uint64(0);
	_class2FramesTransmitted = Uint64(0);
	_class2DiscardFrames = Uint64(0);
	_class3OctetsReceived = Uint64(0);
	_class3OctetsTransmitted = Uint64(0);
	_class3FramesReceived = Uint64(0);
	_class3FramesTransmitted = Uint64(0);
	_class3DiscardFrames = Uint64(0);
	_parityErrors = Uint64(0);
	_frameTimeouts = Uint64(0);
	_bufferCreditErrors = Uint64(0);
	_endCreditErrors = Uint64(0);
	_outOfOrderFramesReceived = Uint64(0);

}

Boolean UNIX_FibreChannelAdapter::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "OctetsTransmitted"))
			{
				Uint64 octetsTransmittedValue;
				property.getValue().get(octetsTransmittedValue);
				setOctetsTransmitted(octetsTransmittedValue);
			}
			else if (String::equal(property.getName().getString(), "OctetsReceived"))
			{
				Uint64 octetsReceivedValue;
				property.getValue().get(octetsReceivedValue);
				setOctetsReceived(octetsReceivedValue);
			}
			else if (String::equal(property.getName().getString(), "MaxFrameSize"))
			{
				Uint64 maxFrameSizeValue;
				property.getValue().get(maxFrameSizeValue);
				setMaxFrameSize(maxFrameSizeValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedCOS"))
			{
				Array<Uint16> supportedCOSValue;
				property.getValue().get(supportedCOSValue);
				setSupportedCOS(supportedCOSValue);
			}
			else if (String::equal(property.getName().getString(), "FC4TypesSupported"))
			{
				Array<Uint16> fC4TypesSupportedValue;
				property.getValue().get(fC4TypesSupportedValue);
				setFC4TypesSupported(fC4TypesSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "FC4VendorUniqueTypes"))
			{
				Array<Uint16> fC4VendorUniqueTypesValue;
				property.getValue().get(fC4VendorUniqueTypesValue);
				setFC4VendorUniqueTypes(fC4VendorUniqueTypesValue);
			}
			else if (String::equal(property.getName().getString(), "CurrentFC4Types"))
			{
				Array<Uint16> currentFC4TypesValue;
				property.getValue().get(currentFC4TypesValue);
				setCurrentFC4Types(currentFC4TypesValue);
			}
			else if (String::equal(property.getName().getString(), "CurrentFC4VendorTypes"))
			{
				Array<Uint16> currentFC4VendorTypesValue;
				property.getValue().get(currentFC4VendorTypesValue);
				setCurrentFC4VendorTypes(currentFC4VendorTypesValue);
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
			else if (String::equal(property.getName().getString(), "ReceiveBufferErrors"))
			{
				Uint64 receiveBufferErrorsValue;
				property.getValue().get(receiveBufferErrorsValue);
				setReceiveBufferErrors(receiveBufferErrorsValue);
			}
			else if (String::equal(property.getName().getString(), "ReceiveEndErrors"))
			{
				Uint64 receiveEndErrorsValue;
				property.getValue().get(receiveEndErrorsValue);
				setReceiveEndErrors(receiveEndErrorsValue);
			}
			else if (String::equal(property.getName().getString(), "ResourceAllocationTimeout"))
			{
				Uint64 resourceAllocationTimeoutValue;
				property.getValue().get(resourceAllocationTimeoutValue);
				setResourceAllocationTimeout(resourceAllocationTimeoutValue);
			}
			else if (String::equal(property.getName().getString(), "ErrorDetectTimeout"))
			{
				Uint64 errorDetectTimeoutValue;
				property.getValue().get(errorDetectTimeoutValue);
				setErrorDetectTimeout(errorDetectTimeoutValue);
			}
			else if (String::equal(property.getName().getString(), "Class1SequencesSent"))
			{
				Uint64 class1SequencesSentValue;
				property.getValue().get(class1SequencesSentValue);
				setClass1SequencesSent(class1SequencesSentValue);
			}
			else if (String::equal(property.getName().getString(), "Class2SequencesSent"))
			{
				Uint64 class2SequencesSentValue;
				property.getValue().get(class2SequencesSentValue);
				setClass2SequencesSent(class2SequencesSentValue);
			}
			else if (String::equal(property.getName().getString(), "Class3SequencesSent"))
			{
				Uint64 class3SequencesSentValue;
				property.getValue().get(class3SequencesSentValue);
				setClass3SequencesSent(class3SequencesSentValue);
			}
			else if (String::equal(property.getName().getString(), "Class4SequencesSent"))
			{
				Uint64 class4SequencesSentValue;
				property.getValue().get(class4SequencesSentValue);
				setClass4SequencesSent(class4SequencesSentValue);
			}
			else if (String::equal(property.getName().getString(), "Class2OctetsReceived"))
			{
				Uint64 class2OctetsReceivedValue;
				property.getValue().get(class2OctetsReceivedValue);
				setClass2OctetsReceived(class2OctetsReceivedValue);
			}
			else if (String::equal(property.getName().getString(), "Class2OctetsTransmitted"))
			{
				Uint64 class2OctetsTransmittedValue;
				property.getValue().get(class2OctetsTransmittedValue);
				setClass2OctetsTransmitted(class2OctetsTransmittedValue);
			}
			else if (String::equal(property.getName().getString(), "Class2FramesReceived"))
			{
				Uint64 class2FramesReceivedValue;
				property.getValue().get(class2FramesReceivedValue);
				setClass2FramesReceived(class2FramesReceivedValue);
			}
			else if (String::equal(property.getName().getString(), "Class2FramesTransmitted"))
			{
				Uint64 class2FramesTransmittedValue;
				property.getValue().get(class2FramesTransmittedValue);
				setClass2FramesTransmitted(class2FramesTransmittedValue);
			}
			else if (String::equal(property.getName().getString(), "Class2DiscardFrames"))
			{
				Uint64 class2DiscardFramesValue;
				property.getValue().get(class2DiscardFramesValue);
				setClass2DiscardFrames(class2DiscardFramesValue);
			}
			else if (String::equal(property.getName().getString(), "Class3OctetsReceived"))
			{
				Uint64 class3OctetsReceivedValue;
				property.getValue().get(class3OctetsReceivedValue);
				setClass3OctetsReceived(class3OctetsReceivedValue);
			}
			else if (String::equal(property.getName().getString(), "Class3OctetsTransmitted"))
			{
				Uint64 class3OctetsTransmittedValue;
				property.getValue().get(class3OctetsTransmittedValue);
				setClass3OctetsTransmitted(class3OctetsTransmittedValue);
			}
			else if (String::equal(property.getName().getString(), "Class3FramesReceived"))
			{
				Uint64 class3FramesReceivedValue;
				property.getValue().get(class3FramesReceivedValue);
				setClass3FramesReceived(class3FramesReceivedValue);
			}
			else if (String::equal(property.getName().getString(), "Class3FramesTransmitted"))
			{
				Uint64 class3FramesTransmittedValue;
				property.getValue().get(class3FramesTransmittedValue);
				setClass3FramesTransmitted(class3FramesTransmittedValue);
			}
			else if (String::equal(property.getName().getString(), "Class3DiscardFrames"))
			{
				Uint64 class3DiscardFramesValue;
				property.getValue().get(class3DiscardFramesValue);
				setClass3DiscardFrames(class3DiscardFramesValue);
			}
			else if (String::equal(property.getName().getString(), "ParityErrors"))
			{
				Uint64 parityErrorsValue;
				property.getValue().get(parityErrorsValue);
				setParityErrors(parityErrorsValue);
			}
			else if (String::equal(property.getName().getString(), "FrameTimeouts"))
			{
				Uint64 frameTimeoutsValue;
				property.getValue().get(frameTimeoutsValue);
				setFrameTimeouts(frameTimeoutsValue);
			}
			else if (String::equal(property.getName().getString(), "BufferCreditErrors"))
			{
				Uint64 bufferCreditErrorsValue;
				property.getValue().get(bufferCreditErrorsValue);
				setBufferCreditErrors(bufferCreditErrorsValue);
			}
			else if (String::equal(property.getName().getString(), "EndCreditErrors"))
			{
				Uint64 endCreditErrorsValue;
				property.getValue().get(endCreditErrorsValue);
				setEndCreditErrors(endCreditErrorsValue);
			}
			else if (String::equal(property.getName().getString(), "OutOfOrderFramesReceived"))
			{
				Uint64 outOfOrderFramesReceivedValue;
				property.getValue().get(outOfOrderFramesReceivedValue);
				setOutOfOrderFramesReceived(outOfOrderFramesReceivedValue);
			}
	}
	return true;
}

Uint32 UNIX_FibreChannelAdapter::invokeRequestStateChange(
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

Uint32 UNIX_FibreChannelAdapter::invokeSetPowerState(
		Uint16 &inPowerState,
		CIMDateTime &inTime
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SetPowerState */
	
	
	
	return returnValue;
}

Uint32 UNIX_FibreChannelAdapter::invokeReset()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method Reset */
	
	
	
	return returnValue;
}

Uint32 UNIX_FibreChannelAdapter::invokeEnableDevice(
		Boolean &inEnabled
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method EnableDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_FibreChannelAdapter::invokeOnlineDevice(
		Boolean &inOnline
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method OnlineDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_FibreChannelAdapter::invokeQuiesceDevice(
		Boolean &inQuiesce
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method QuiesceDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_FibreChannelAdapter::invokeSaveProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SaveProperties */
	
	
	
	return returnValue;
}

Uint32 UNIX_FibreChannelAdapter::invokeRestoreProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method RestoreProperties */
	
	
	
	return returnValue;
}


Boolean UNIX_FibreChannelAdapter::initialize()
{
	return false;
}

Boolean UNIX_FibreChannelAdapter::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("FibreChannelAdapter");
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
	_creationClassName = String("UNIX_FibreChannelAdapter");
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
	_permanentAddress = String ("");
	_networkAddresses.clear();
	_speed = Uint64(0);
	_maxSpeed = Uint64(0);
	_fullDuplex = Boolean(false);
	_autoSense = Boolean(false);
	_octetsTransmitted = Uint64(0);
	_octetsReceived = Uint64(0);
	_maxFrameSize = Uint64(0);
	_supportedCOS.clear();
	_fC4TypesSupported.clear();
	_fC4VendorUniqueTypes.clear();
	_currentFC4Types.clear();
	_currentFC4VendorTypes.clear();
	_capabilities.clear();
	_capabilityDescriptions.clear();
	_receiveBufferErrors = Uint64(0);
	_receiveEndErrors = Uint64(0);
	_resourceAllocationTimeout = Uint64(0);
	_errorDetectTimeout = Uint64(0);
	_class1SequencesSent = Uint64(0);
	_class2SequencesSent = Uint64(0);
	_class3SequencesSent = Uint64(0);
	_class4SequencesSent = Uint64(0);
	_class2OctetsReceived = Uint64(0);
	_class2OctetsTransmitted = Uint64(0);
	_class2FramesReceived = Uint64(0);
	_class2FramesTransmitted = Uint64(0);
	_class2DiscardFrames = Uint64(0);
	_class3OctetsReceived = Uint64(0);
	_class3OctetsTransmitted = Uint64(0);
	_class3FramesReceived = Uint64(0);
	_class3FramesTransmitted = Uint64(0);
	_class3DiscardFrames = Uint64(0);
	_parityErrors = Uint64(0);
	_frameTimeouts = Uint64(0);
	_bufferCreditErrors = Uint64(0);
	_endCreditErrors = Uint64(0);
	_outOfOrderFramesReceived = Uint64(0);
	
	return false;
}

Boolean UNIX_FibreChannelAdapter::finalize()
{
	return false;
}

Boolean UNIX_FibreChannelAdapter::loadByName(const String name)
{
	return false;
}

Boolean UNIX_FibreChannelAdapter::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_FibreChannelAdapter::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FibreChannelAdapter::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FibreChannelAdapter::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FibreChannelAdapter::validateInstance()
{
	return true;
}

