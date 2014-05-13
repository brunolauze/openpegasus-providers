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


UNIX_EthernetAdapter::UNIX_EthernetAdapter(void)
{
}

UNIX_EthernetAdapter::~UNIX_EthernetAdapter(void)
{
}

Boolean UNIX_EthernetAdapter::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_EthernetAdapter::getInstanceID() const
{
	return _instanceID;
}

void UNIX_EthernetAdapter::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_EthernetAdapter::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_EthernetAdapter::getCaption() const
{
	return _caption;
}

void UNIX_EthernetAdapter::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_EthernetAdapter::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_EthernetAdapter::getDescription() const
{
	return _description;
}

void UNIX_EthernetAdapter::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_EthernetAdapter::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_EthernetAdapter::getElementName() const
{
	return _elementName;
}

void UNIX_EthernetAdapter::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_EthernetAdapter::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_EthernetAdapter::getGeneration() const
{
	return _generation;
}

void UNIX_EthernetAdapter::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_EthernetAdapter::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_EthernetAdapter::getInstallDate() const
{
	return _installDate;
}

void UNIX_EthernetAdapter::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_EthernetAdapter::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_EthernetAdapter::getName() const
{
	return _name;
}

void UNIX_EthernetAdapter::setName(String &value)
{
	_name = value;
}

Boolean UNIX_EthernetAdapter::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_EthernetAdapter::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_EthernetAdapter::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_EthernetAdapter::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_EthernetAdapter::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_EthernetAdapter::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_EthernetAdapter::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_EthernetAdapter::getStatus() const
{
	return _status;
}

void UNIX_EthernetAdapter::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_EthernetAdapter::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_EthernetAdapter::getHealthState() const
{
	return _healthState;
}

void UNIX_EthernetAdapter::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_EthernetAdapter::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_EthernetAdapter::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_EthernetAdapter::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_EthernetAdapter::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_EthernetAdapter::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_EthernetAdapter::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_EthernetAdapter::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_EthernetAdapter::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_EthernetAdapter::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_EthernetAdapter::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_EthernetAdapter::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_EthernetAdapter::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_EthernetAdapter::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_EthernetAdapter::getEnabledState() const
{
	return _enabledState;
}

void UNIX_EthernetAdapter::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_EthernetAdapter::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_EthernetAdapter::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_EthernetAdapter::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_EthernetAdapter::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_EthernetAdapter::getRequestedState() const
{
	return _requestedState;
}

void UNIX_EthernetAdapter::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_EthernetAdapter::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_EthernetAdapter::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_EthernetAdapter::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_EthernetAdapter::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_EthernetAdapter::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_EthernetAdapter::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_EthernetAdapter::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_EthernetAdapter::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_EthernetAdapter::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_EthernetAdapter::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_EthernetAdapter::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_EthernetAdapter::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_EthernetAdapter::getAllocationState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOCATION_STATE, getAllocationState());
	return true;
}

String UNIX_EthernetAdapter::getAllocationState() const
{
	return _allocationState;
}

void UNIX_EthernetAdapter::setAllocationState(String &value)
{
	_allocationState = value;
}

Boolean UNIX_EthernetAdapter::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_EthernetAdapter::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_EthernetAdapter::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_EthernetAdapter::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_EthernetAdapter::getSystemName() const
{
	return _systemName;
}

void UNIX_EthernetAdapter::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_EthernetAdapter::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_EthernetAdapter::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_EthernetAdapter::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_EthernetAdapter::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_EthernetAdapter::getDeviceID() const
{
	return _deviceID;
}

void UNIX_EthernetAdapter::setDeviceID(String &value)
{
	_deviceID = value;
}

Boolean UNIX_EthernetAdapter::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_EthernetAdapter::getPowerManagementSupported() const
{
	return _powerManagementSupported;
}

void UNIX_EthernetAdapter::setPowerManagementSupported(Boolean &value)
{
	_powerManagementSupported = value;
}

Boolean UNIX_EthernetAdapter::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_EthernetAdapter::getPowerManagementCapabilities() const
{
	return _powerManagementCapabilities;
}

void UNIX_EthernetAdapter::setPowerManagementCapabilities(Array<Uint16> &value)
{
	_powerManagementCapabilities = value;
}

Boolean UNIX_EthernetAdapter::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_EthernetAdapter::getAvailability() const
{
	return _availability;
}

void UNIX_EthernetAdapter::setAvailability(Uint16 &value)
{
	_availability = value;
}

Boolean UNIX_EthernetAdapter::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_EthernetAdapter::getStatusInfo() const
{
	return _statusInfo;
}

void UNIX_EthernetAdapter::setStatusInfo(Uint16 &value)
{
	_statusInfo = value;
}

Boolean UNIX_EthernetAdapter::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_EthernetAdapter::getLastErrorCode() const
{
	return _lastErrorCode;
}

void UNIX_EthernetAdapter::setLastErrorCode(Uint32 &value)
{
	_lastErrorCode = value;
}

Boolean UNIX_EthernetAdapter::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_EthernetAdapter::getErrorDescription() const
{
	return _errorDescription;
}

void UNIX_EthernetAdapter::setErrorDescription(String &value)
{
	_errorDescription = value;
}

Boolean UNIX_EthernetAdapter::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_EthernetAdapter::getErrorCleared() const
{
	return _errorCleared;
}

void UNIX_EthernetAdapter::setErrorCleared(Boolean &value)
{
	_errorCleared = value;
}

Boolean UNIX_EthernetAdapter::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_EthernetAdapter::getOtherIdentifyingInfo() const
{
	return _otherIdentifyingInfo;
}

void UNIX_EthernetAdapter::setOtherIdentifyingInfo(Array<String> &value)
{
	_otherIdentifyingInfo = value;
}

Boolean UNIX_EthernetAdapter::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_EthernetAdapter::getPowerOnHours() const
{
	return _powerOnHours;
}

void UNIX_EthernetAdapter::setPowerOnHours(Uint64 &value)
{
	_powerOnHours = value;
}

Boolean UNIX_EthernetAdapter::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_EthernetAdapter::getTotalPowerOnHours() const
{
	return _totalPowerOnHours;
}

void UNIX_EthernetAdapter::setTotalPowerOnHours(Uint64 &value)
{
	_totalPowerOnHours = value;
}

Boolean UNIX_EthernetAdapter::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_EthernetAdapter::getIdentifyingDescriptions() const
{
	return _identifyingDescriptions;
}

void UNIX_EthernetAdapter::setIdentifyingDescriptions(Array<String> &value)
{
	_identifyingDescriptions = value;
}

Boolean UNIX_EthernetAdapter::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_EthernetAdapter::getAdditionalAvailability() const
{
	return _additionalAvailability;
}

void UNIX_EthernetAdapter::setAdditionalAvailability(Array<Uint16> &value)
{
	_additionalAvailability = value;
}

Boolean UNIX_EthernetAdapter::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_EthernetAdapter::getMaxQuiesceTime() const
{
	return _maxQuiesceTime;
}

void UNIX_EthernetAdapter::setMaxQuiesceTime(Uint64 &value)
{
	_maxQuiesceTime = value;
}

Boolean UNIX_EthernetAdapter::getLocationIndicator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCATION_INDICATOR, getLocationIndicator());
	return true;
}

Uint16 UNIX_EthernetAdapter::getLocationIndicator() const
{
	return _locationIndicator;
}

void UNIX_EthernetAdapter::setLocationIndicator(Uint16 &value)
{
	_locationIndicator = value;
}

Boolean UNIX_EthernetAdapter::getPermanentAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERMANENT_ADDRESS, getPermanentAddress());
	return true;
}

String UNIX_EthernetAdapter::getPermanentAddress() const
{
	return _permanentAddress;
}

void UNIX_EthernetAdapter::setPermanentAddress(String &value)
{
	_permanentAddress = value;
}

Boolean UNIX_EthernetAdapter::getNetworkAddresses(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NETWORK_ADDRESSES, getNetworkAddresses());
	return true;
}

Array<String> UNIX_EthernetAdapter::getNetworkAddresses() const
{
	return _networkAddresses;
}

void UNIX_EthernetAdapter::setNetworkAddresses(Array<String> &value)
{
	_networkAddresses = value;
}

Boolean UNIX_EthernetAdapter::getSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SPEED, getSpeed());
	return true;
}

Uint64 UNIX_EthernetAdapter::getSpeed() const
{
	return _speed;
}

void UNIX_EthernetAdapter::setSpeed(Uint64 &value)
{
	_speed = value;
}

Boolean UNIX_EthernetAdapter::getMaxSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_SPEED, getMaxSpeed());
	return true;
}

Uint64 UNIX_EthernetAdapter::getMaxSpeed() const
{
	return _maxSpeed;
}

void UNIX_EthernetAdapter::setMaxSpeed(Uint64 &value)
{
	_maxSpeed = value;
}

Boolean UNIX_EthernetAdapter::getFullDuplex(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FULL_DUPLEX, getFullDuplex());
	return true;
}

Boolean UNIX_EthernetAdapter::getFullDuplex() const
{
	return _fullDuplex;
}

void UNIX_EthernetAdapter::setFullDuplex(Boolean &value)
{
	_fullDuplex = value;
}

Boolean UNIX_EthernetAdapter::getAutoSense(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTO_SENSE, getAutoSense());
	return true;
}

Boolean UNIX_EthernetAdapter::getAutoSense() const
{
	return _autoSense;
}

void UNIX_EthernetAdapter::setAutoSense(Boolean &value)
{
	_autoSense = value;
}

Boolean UNIX_EthernetAdapter::getOctetsTransmitted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OCTETS_TRANSMITTED, getOctetsTransmitted());
	return true;
}

Uint64 UNIX_EthernetAdapter::getOctetsTransmitted() const
{
	return _octetsTransmitted;
}

void UNIX_EthernetAdapter::setOctetsTransmitted(Uint64 &value)
{
	_octetsTransmitted = value;
}

Boolean UNIX_EthernetAdapter::getOctetsReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OCTETS_RECEIVED, getOctetsReceived());
	return true;
}

Uint64 UNIX_EthernetAdapter::getOctetsReceived() const
{
	return _octetsReceived;
}

void UNIX_EthernetAdapter::setOctetsReceived(Uint64 &value)
{
	_octetsReceived = value;
}

Boolean UNIX_EthernetAdapter::getMaxDataSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_DATA_SIZE, getMaxDataSize());
	return true;
}

Uint32 UNIX_EthernetAdapter::getMaxDataSize() const
{
	return _maxDataSize;
}

void UNIX_EthernetAdapter::setMaxDataSize(Uint32 &value)
{
	_maxDataSize = value;
}

Boolean UNIX_EthernetAdapter::getCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITIES, getCapabilities());
	return true;
}

Array<Uint16> UNIX_EthernetAdapter::getCapabilities() const
{
	return _capabilities;
}

void UNIX_EthernetAdapter::setCapabilities(Array<Uint16> &value)
{
	_capabilities = value;
}

Boolean UNIX_EthernetAdapter::getCapabilityDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITY_DESCRIPTIONS, getCapabilityDescriptions());
	return true;
}

Array<String> UNIX_EthernetAdapter::getCapabilityDescriptions() const
{
	return _capabilityDescriptions;
}

void UNIX_EthernetAdapter::setCapabilityDescriptions(Array<String> &value)
{
	_capabilityDescriptions = value;
}

Boolean UNIX_EthernetAdapter::getEnabledCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_CAPABILITIES, getEnabledCapabilities());
	return true;
}

Array<Uint16> UNIX_EthernetAdapter::getEnabledCapabilities() const
{
	return _enabledCapabilities;
}

void UNIX_EthernetAdapter::setEnabledCapabilities(Array<Uint16> &value)
{
	_enabledCapabilities = value;
}

Boolean UNIX_EthernetAdapter::getSymbolErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYMBOL_ERRORS, getSymbolErrors());
	return true;
}

Uint32 UNIX_EthernetAdapter::getSymbolErrors() const
{
	return _symbolErrors;
}

void UNIX_EthernetAdapter::setSymbolErrors(Uint32 &value)
{
	_symbolErrors = value;
}

Boolean UNIX_EthernetAdapter::getTotalPacketsTransmitted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_PACKETS_TRANSMITTED, getTotalPacketsTransmitted());
	return true;
}

Uint64 UNIX_EthernetAdapter::getTotalPacketsTransmitted() const
{
	return _totalPacketsTransmitted;
}

void UNIX_EthernetAdapter::setTotalPacketsTransmitted(Uint64 &value)
{
	_totalPacketsTransmitted = value;
}

Boolean UNIX_EthernetAdapter::getTotalPacketsReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_PACKETS_RECEIVED, getTotalPacketsReceived());
	return true;
}

Uint64 UNIX_EthernetAdapter::getTotalPacketsReceived() const
{
	return _totalPacketsReceived;
}

void UNIX_EthernetAdapter::setTotalPacketsReceived(Uint64 &value)
{
	_totalPacketsReceived = value;
}

Boolean UNIX_EthernetAdapter::getAlignmentErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALIGNMENT_ERRORS, getAlignmentErrors());
	return true;
}

Uint32 UNIX_EthernetAdapter::getAlignmentErrors() const
{
	return _alignmentErrors;
}

void UNIX_EthernetAdapter::setAlignmentErrors(Uint32 &value)
{
	_alignmentErrors = value;
}

Boolean UNIX_EthernetAdapter::getFCSErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FCS_ERRORS, getFCSErrors());
	return true;
}

Uint32 UNIX_EthernetAdapter::getFCSErrors() const
{
	return _fCSErrors;
}

void UNIX_EthernetAdapter::setFCSErrors(Uint32 &value)
{
	_fCSErrors = value;
}

Boolean UNIX_EthernetAdapter::getSingleCollisionFrames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SINGLE_COLLISION_FRAMES, getSingleCollisionFrames());
	return true;
}

Uint32 UNIX_EthernetAdapter::getSingleCollisionFrames() const
{
	return _singleCollisionFrames;
}

void UNIX_EthernetAdapter::setSingleCollisionFrames(Uint32 &value)
{
	_singleCollisionFrames = value;
}

Boolean UNIX_EthernetAdapter::getMultipleCollisionFrames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MULTIPLE_COLLISION_FRAMES, getMultipleCollisionFrames());
	return true;
}

Uint32 UNIX_EthernetAdapter::getMultipleCollisionFrames() const
{
	return _multipleCollisionFrames;
}

void UNIX_EthernetAdapter::setMultipleCollisionFrames(Uint32 &value)
{
	_multipleCollisionFrames = value;
}

Boolean UNIX_EthernetAdapter::getSQETestErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_Q_E_TEST_ERRORS, getSQETestErrors());
	return true;
}

Uint32 UNIX_EthernetAdapter::getSQETestErrors() const
{
	return _sQETestErrors;
}

void UNIX_EthernetAdapter::setSQETestErrors(Uint32 &value)
{
	_sQETestErrors = value;
}

Boolean UNIX_EthernetAdapter::getDeferredTransmissions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEFERRED_TRANSMISSIONS, getDeferredTransmissions());
	return true;
}

Uint32 UNIX_EthernetAdapter::getDeferredTransmissions() const
{
	return _deferredTransmissions;
}

void UNIX_EthernetAdapter::setDeferredTransmissions(Uint32 &value)
{
	_deferredTransmissions = value;
}

Boolean UNIX_EthernetAdapter::getLateCollisions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LATE_COLLISIONS, getLateCollisions());
	return true;
}

Uint32 UNIX_EthernetAdapter::getLateCollisions() const
{
	return _lateCollisions;
}

void UNIX_EthernetAdapter::setLateCollisions(Uint32 &value)
{
	_lateCollisions = value;
}

Boolean UNIX_EthernetAdapter::getExcessiveCollisions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXCESSIVE_COLLISIONS, getExcessiveCollisions());
	return true;
}

Uint32 UNIX_EthernetAdapter::getExcessiveCollisions() const
{
	return _excessiveCollisions;
}

void UNIX_EthernetAdapter::setExcessiveCollisions(Uint32 &value)
{
	_excessiveCollisions = value;
}

Boolean UNIX_EthernetAdapter::getInternalMACTransmitErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INTERNAL_M_A_C_TRANSMIT_ERRORS, getInternalMACTransmitErrors());
	return true;
}

Uint32 UNIX_EthernetAdapter::getInternalMACTransmitErrors() const
{
	return _internalMACTransmitErrors;
}

void UNIX_EthernetAdapter::setInternalMACTransmitErrors(Uint32 &value)
{
	_internalMACTransmitErrors = value;
}

Boolean UNIX_EthernetAdapter::getInternalMACReceiveErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INTERNAL_M_A_C_RECEIVE_ERRORS, getInternalMACReceiveErrors());
	return true;
}

Uint32 UNIX_EthernetAdapter::getInternalMACReceiveErrors() const
{
	return _internalMACReceiveErrors;
}

void UNIX_EthernetAdapter::setInternalMACReceiveErrors(Uint32 &value)
{
	_internalMACReceiveErrors = value;
}

Boolean UNIX_EthernetAdapter::getCarrierSenseErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CARRIER_SENSE_ERRORS, getCarrierSenseErrors());
	return true;
}

Uint32 UNIX_EthernetAdapter::getCarrierSenseErrors() const
{
	return _carrierSenseErrors;
}

void UNIX_EthernetAdapter::setCarrierSenseErrors(Uint32 &value)
{
	_carrierSenseErrors = value;
}

Boolean UNIX_EthernetAdapter::getFrameTooLongs(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FRAME_TOO_LONGS, getFrameTooLongs());
	return true;
}

Uint32 UNIX_EthernetAdapter::getFrameTooLongs() const
{
	return _frameTooLongs;
}

void UNIX_EthernetAdapter::setFrameTooLongs(Uint32 &value)
{
	_frameTooLongs = value;
}


void UNIX_EthernetAdapter::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("EthernetAdapter");
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
	_creationClassName = String("UNIX_EthernetAdapter");
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
	_maxDataSize = Uint32(0);
	_capabilities.clear();
	_capabilityDescriptions.clear();
	_enabledCapabilities.clear();
	_symbolErrors = Uint32(0);
	_totalPacketsTransmitted = Uint64(0);
	_totalPacketsReceived = Uint64(0);
	_alignmentErrors = Uint32(0);
	_fCSErrors = Uint32(0);
	_singleCollisionFrames = Uint32(0);
	_multipleCollisionFrames = Uint32(0);
	_sQETestErrors = Uint32(0);
	_deferredTransmissions = Uint32(0);
	_lateCollisions = Uint32(0);
	_excessiveCollisions = Uint32(0);
	_internalMACTransmitErrors = Uint32(0);
	_internalMACReceiveErrors = Uint32(0);
	_carrierSenseErrors = Uint32(0);
	_frameTooLongs = Uint32(0);

}

Boolean UNIX_EthernetAdapter::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "SymbolErrors"))
			{
				Uint32 symbolErrorsValue;
				property.getValue().get(symbolErrorsValue);
				setSymbolErrors(symbolErrorsValue);
			}
			else if (String::equal(property.getName().getString(), "TotalPacketsTransmitted"))
			{
				Uint64 totalPacketsTransmittedValue;
				property.getValue().get(totalPacketsTransmittedValue);
				setTotalPacketsTransmitted(totalPacketsTransmittedValue);
			}
			else if (String::equal(property.getName().getString(), "TotalPacketsReceived"))
			{
				Uint64 totalPacketsReceivedValue;
				property.getValue().get(totalPacketsReceivedValue);
				setTotalPacketsReceived(totalPacketsReceivedValue);
			}
			else if (String::equal(property.getName().getString(), "AlignmentErrors"))
			{
				Uint32 alignmentErrorsValue;
				property.getValue().get(alignmentErrorsValue);
				setAlignmentErrors(alignmentErrorsValue);
			}
			else if (String::equal(property.getName().getString(), "FCSErrors"))
			{
				Uint32 fCSErrorsValue;
				property.getValue().get(fCSErrorsValue);
				setFCSErrors(fCSErrorsValue);
			}
			else if (String::equal(property.getName().getString(), "SingleCollisionFrames"))
			{
				Uint32 singleCollisionFramesValue;
				property.getValue().get(singleCollisionFramesValue);
				setSingleCollisionFrames(singleCollisionFramesValue);
			}
			else if (String::equal(property.getName().getString(), "MultipleCollisionFrames"))
			{
				Uint32 multipleCollisionFramesValue;
				property.getValue().get(multipleCollisionFramesValue);
				setMultipleCollisionFrames(multipleCollisionFramesValue);
			}
			else if (String::equal(property.getName().getString(), "SQETestErrors"))
			{
				Uint32 sQETestErrorsValue;
				property.getValue().get(sQETestErrorsValue);
				setSQETestErrors(sQETestErrorsValue);
			}
			else if (String::equal(property.getName().getString(), "DeferredTransmissions"))
			{
				Uint32 deferredTransmissionsValue;
				property.getValue().get(deferredTransmissionsValue);
				setDeferredTransmissions(deferredTransmissionsValue);
			}
			else if (String::equal(property.getName().getString(), "LateCollisions"))
			{
				Uint32 lateCollisionsValue;
				property.getValue().get(lateCollisionsValue);
				setLateCollisions(lateCollisionsValue);
			}
			else if (String::equal(property.getName().getString(), "ExcessiveCollisions"))
			{
				Uint32 excessiveCollisionsValue;
				property.getValue().get(excessiveCollisionsValue);
				setExcessiveCollisions(excessiveCollisionsValue);
			}
			else if (String::equal(property.getName().getString(), "InternalMACTransmitErrors"))
			{
				Uint32 internalMACTransmitErrorsValue;
				property.getValue().get(internalMACTransmitErrorsValue);
				setInternalMACTransmitErrors(internalMACTransmitErrorsValue);
			}
			else if (String::equal(property.getName().getString(), "InternalMACReceiveErrors"))
			{
				Uint32 internalMACReceiveErrorsValue;
				property.getValue().get(internalMACReceiveErrorsValue);
				setInternalMACReceiveErrors(internalMACReceiveErrorsValue);
			}
			else if (String::equal(property.getName().getString(), "CarrierSenseErrors"))
			{
				Uint32 carrierSenseErrorsValue;
				property.getValue().get(carrierSenseErrorsValue);
				setCarrierSenseErrors(carrierSenseErrorsValue);
			}
			else if (String::equal(property.getName().getString(), "FrameTooLongs"))
			{
				Uint32 frameTooLongsValue;
				property.getValue().get(frameTooLongsValue);
				setFrameTooLongs(frameTooLongsValue);
			}
	}
	return true;
}

Uint32 UNIX_EthernetAdapter::invokeRequestStateChange(
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

Uint32 UNIX_EthernetAdapter::invokeSetPowerState(
		Uint16 &inPowerState,
		CIMDateTime &inTime
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SetPowerState */
	
	
	
	return returnValue;
}

Uint32 UNIX_EthernetAdapter::invokeReset()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method Reset */
	
	
	
	return returnValue;
}

Uint32 UNIX_EthernetAdapter::invokeEnableDevice(
		Boolean &inEnabled
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method EnableDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_EthernetAdapter::invokeOnlineDevice(
		Boolean &inOnline
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method OnlineDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_EthernetAdapter::invokeQuiesceDevice(
		Boolean &inQuiesce
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method QuiesceDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_EthernetAdapter::invokeSaveProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SaveProperties */
	
	
	
	return returnValue;
}

Uint32 UNIX_EthernetAdapter::invokeRestoreProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method RestoreProperties */
	
	
	
	return returnValue;
}


Boolean UNIX_EthernetAdapter::initialize()
{
	return false;
}

Boolean UNIX_EthernetAdapter::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("EthernetAdapter");
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
	_creationClassName = String("UNIX_EthernetAdapter");
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
	_maxDataSize = Uint32(0);
	_capabilities.clear();
	_capabilityDescriptions.clear();
	_enabledCapabilities.clear();
	_symbolErrors = Uint32(0);
	_totalPacketsTransmitted = Uint64(0);
	_totalPacketsReceived = Uint64(0);
	_alignmentErrors = Uint32(0);
	_fCSErrors = Uint32(0);
	_singleCollisionFrames = Uint32(0);
	_multipleCollisionFrames = Uint32(0);
	_sQETestErrors = Uint32(0);
	_deferredTransmissions = Uint32(0);
	_lateCollisions = Uint32(0);
	_excessiveCollisions = Uint32(0);
	_internalMACTransmitErrors = Uint32(0);
	_internalMACReceiveErrors = Uint32(0);
	_carrierSenseErrors = Uint32(0);
	_frameTooLongs = Uint32(0);
	
	return false;
}

Boolean UNIX_EthernetAdapter::finalize()
{
	return false;
}

Boolean UNIX_EthernetAdapter::loadByName(const String name)
{
	return false;
}

Boolean UNIX_EthernetAdapter::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_EthernetAdapter::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_EthernetAdapter::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_EthernetAdapter::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_EthernetAdapter::validateInstance()
{
	return true;
}

