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


UNIX_TokenRingAdapter::UNIX_TokenRingAdapter(void)
{
}

UNIX_TokenRingAdapter::~UNIX_TokenRingAdapter(void)
{
}

Boolean UNIX_TokenRingAdapter::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_TokenRingAdapter::getInstanceID() const
{
	return _instanceID;
}

void UNIX_TokenRingAdapter::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_TokenRingAdapter::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_TokenRingAdapter::getCaption() const
{
	return _caption;
}

void UNIX_TokenRingAdapter::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_TokenRingAdapter::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_TokenRingAdapter::getDescription() const
{
	return _description;
}

void UNIX_TokenRingAdapter::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_TokenRingAdapter::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_TokenRingAdapter::getElementName() const
{
	return _elementName;
}

void UNIX_TokenRingAdapter::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_TokenRingAdapter::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_TokenRingAdapter::getGeneration() const
{
	return _generation;
}

void UNIX_TokenRingAdapter::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_TokenRingAdapter::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_TokenRingAdapter::getInstallDate() const
{
	return _installDate;
}

void UNIX_TokenRingAdapter::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_TokenRingAdapter::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_TokenRingAdapter::getName() const
{
	return _name;
}

void UNIX_TokenRingAdapter::setName(String &value)
{
	_name = value;
}

Boolean UNIX_TokenRingAdapter::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_TokenRingAdapter::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_TokenRingAdapter::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_TokenRingAdapter::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_TokenRingAdapter::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_TokenRingAdapter::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_TokenRingAdapter::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_TokenRingAdapter::getStatus() const
{
	return _status;
}

void UNIX_TokenRingAdapter::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_TokenRingAdapter::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_TokenRingAdapter::getHealthState() const
{
	return _healthState;
}

void UNIX_TokenRingAdapter::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_TokenRingAdapter::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_TokenRingAdapter::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_TokenRingAdapter::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_TokenRingAdapter::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_TokenRingAdapter::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_TokenRingAdapter::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_TokenRingAdapter::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_TokenRingAdapter::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_TokenRingAdapter::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_TokenRingAdapter::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_TokenRingAdapter::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_TokenRingAdapter::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_TokenRingAdapter::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_TokenRingAdapter::getEnabledState() const
{
	return _enabledState;
}

void UNIX_TokenRingAdapter::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_TokenRingAdapter::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_TokenRingAdapter::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_TokenRingAdapter::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_TokenRingAdapter::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_TokenRingAdapter::getRequestedState() const
{
	return _requestedState;
}

void UNIX_TokenRingAdapter::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_TokenRingAdapter::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_TokenRingAdapter::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_TokenRingAdapter::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_TokenRingAdapter::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_TokenRingAdapter::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_TokenRingAdapter::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_TokenRingAdapter::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_TokenRingAdapter::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_TokenRingAdapter::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_TokenRingAdapter::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_TokenRingAdapter::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_TokenRingAdapter::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_TokenRingAdapter::getAllocationState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOCATION_STATE, getAllocationState());
	return true;
}

String UNIX_TokenRingAdapter::getAllocationState() const
{
	return _allocationState;
}

void UNIX_TokenRingAdapter::setAllocationState(String &value)
{
	_allocationState = value;
}

Boolean UNIX_TokenRingAdapter::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_TokenRingAdapter::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_TokenRingAdapter::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_TokenRingAdapter::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_TokenRingAdapter::getSystemName() const
{
	return _systemName;
}

void UNIX_TokenRingAdapter::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_TokenRingAdapter::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_TokenRingAdapter::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_TokenRingAdapter::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_TokenRingAdapter::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_TokenRingAdapter::getDeviceID() const
{
	return _deviceID;
}

void UNIX_TokenRingAdapter::setDeviceID(String &value)
{
	_deviceID = value;
}

Boolean UNIX_TokenRingAdapter::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_TokenRingAdapter::getPowerManagementSupported() const
{
	return _powerManagementSupported;
}

void UNIX_TokenRingAdapter::setPowerManagementSupported(Boolean &value)
{
	_powerManagementSupported = value;
}

Boolean UNIX_TokenRingAdapter::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_TokenRingAdapter::getPowerManagementCapabilities() const
{
	return _powerManagementCapabilities;
}

void UNIX_TokenRingAdapter::setPowerManagementCapabilities(Array<Uint16> &value)
{
	_powerManagementCapabilities = value;
}

Boolean UNIX_TokenRingAdapter::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_TokenRingAdapter::getAvailability() const
{
	return _availability;
}

void UNIX_TokenRingAdapter::setAvailability(Uint16 &value)
{
	_availability = value;
}

Boolean UNIX_TokenRingAdapter::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_TokenRingAdapter::getStatusInfo() const
{
	return _statusInfo;
}

void UNIX_TokenRingAdapter::setStatusInfo(Uint16 &value)
{
	_statusInfo = value;
}

Boolean UNIX_TokenRingAdapter::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_TokenRingAdapter::getLastErrorCode() const
{
	return _lastErrorCode;
}

void UNIX_TokenRingAdapter::setLastErrorCode(Uint32 &value)
{
	_lastErrorCode = value;
}

Boolean UNIX_TokenRingAdapter::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_TokenRingAdapter::getErrorDescription() const
{
	return _errorDescription;
}

void UNIX_TokenRingAdapter::setErrorDescription(String &value)
{
	_errorDescription = value;
}

Boolean UNIX_TokenRingAdapter::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_TokenRingAdapter::getErrorCleared() const
{
	return _errorCleared;
}

void UNIX_TokenRingAdapter::setErrorCleared(Boolean &value)
{
	_errorCleared = value;
}

Boolean UNIX_TokenRingAdapter::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_TokenRingAdapter::getOtherIdentifyingInfo() const
{
	return _otherIdentifyingInfo;
}

void UNIX_TokenRingAdapter::setOtherIdentifyingInfo(Array<String> &value)
{
	_otherIdentifyingInfo = value;
}

Boolean UNIX_TokenRingAdapter::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_TokenRingAdapter::getPowerOnHours() const
{
	return _powerOnHours;
}

void UNIX_TokenRingAdapter::setPowerOnHours(Uint64 &value)
{
	_powerOnHours = value;
}

Boolean UNIX_TokenRingAdapter::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_TokenRingAdapter::getTotalPowerOnHours() const
{
	return _totalPowerOnHours;
}

void UNIX_TokenRingAdapter::setTotalPowerOnHours(Uint64 &value)
{
	_totalPowerOnHours = value;
}

Boolean UNIX_TokenRingAdapter::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_TokenRingAdapter::getIdentifyingDescriptions() const
{
	return _identifyingDescriptions;
}

void UNIX_TokenRingAdapter::setIdentifyingDescriptions(Array<String> &value)
{
	_identifyingDescriptions = value;
}

Boolean UNIX_TokenRingAdapter::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_TokenRingAdapter::getAdditionalAvailability() const
{
	return _additionalAvailability;
}

void UNIX_TokenRingAdapter::setAdditionalAvailability(Array<Uint16> &value)
{
	_additionalAvailability = value;
}

Boolean UNIX_TokenRingAdapter::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_TokenRingAdapter::getMaxQuiesceTime() const
{
	return _maxQuiesceTime;
}

void UNIX_TokenRingAdapter::setMaxQuiesceTime(Uint64 &value)
{
	_maxQuiesceTime = value;
}

Boolean UNIX_TokenRingAdapter::getLocationIndicator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCATION_INDICATOR, getLocationIndicator());
	return true;
}

Uint16 UNIX_TokenRingAdapter::getLocationIndicator() const
{
	return _locationIndicator;
}

void UNIX_TokenRingAdapter::setLocationIndicator(Uint16 &value)
{
	_locationIndicator = value;
}

Boolean UNIX_TokenRingAdapter::getPermanentAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERMANENT_ADDRESS, getPermanentAddress());
	return true;
}

String UNIX_TokenRingAdapter::getPermanentAddress() const
{
	return _permanentAddress;
}

void UNIX_TokenRingAdapter::setPermanentAddress(String &value)
{
	_permanentAddress = value;
}

Boolean UNIX_TokenRingAdapter::getNetworkAddresses(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NETWORK_ADDRESSES, getNetworkAddresses());
	return true;
}

Array<String> UNIX_TokenRingAdapter::getNetworkAddresses() const
{
	return _networkAddresses;
}

void UNIX_TokenRingAdapter::setNetworkAddresses(Array<String> &value)
{
	_networkAddresses = value;
}

Boolean UNIX_TokenRingAdapter::getSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SPEED, getSpeed());
	return true;
}

Uint64 UNIX_TokenRingAdapter::getSpeed() const
{
	return _speed;
}

void UNIX_TokenRingAdapter::setSpeed(Uint64 &value)
{
	_speed = value;
}

Boolean UNIX_TokenRingAdapter::getMaxSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_SPEED, getMaxSpeed());
	return true;
}

Uint64 UNIX_TokenRingAdapter::getMaxSpeed() const
{
	return _maxSpeed;
}

void UNIX_TokenRingAdapter::setMaxSpeed(Uint64 &value)
{
	_maxSpeed = value;
}

Boolean UNIX_TokenRingAdapter::getFullDuplex(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FULL_DUPLEX, getFullDuplex());
	return true;
}

Boolean UNIX_TokenRingAdapter::getFullDuplex() const
{
	return _fullDuplex;
}

void UNIX_TokenRingAdapter::setFullDuplex(Boolean &value)
{
	_fullDuplex = value;
}

Boolean UNIX_TokenRingAdapter::getAutoSense(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTO_SENSE, getAutoSense());
	return true;
}

Boolean UNIX_TokenRingAdapter::getAutoSense() const
{
	return _autoSense;
}

void UNIX_TokenRingAdapter::setAutoSense(Boolean &value)
{
	_autoSense = value;
}

Boolean UNIX_TokenRingAdapter::getOctetsTransmitted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OCTETS_TRANSMITTED, getOctetsTransmitted());
	return true;
}

Uint64 UNIX_TokenRingAdapter::getOctetsTransmitted() const
{
	return _octetsTransmitted;
}

void UNIX_TokenRingAdapter::setOctetsTransmitted(Uint64 &value)
{
	_octetsTransmitted = value;
}

Boolean UNIX_TokenRingAdapter::getOctetsReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OCTETS_RECEIVED, getOctetsReceived());
	return true;
}

Uint64 UNIX_TokenRingAdapter::getOctetsReceived() const
{
	return _octetsReceived;
}

void UNIX_TokenRingAdapter::setOctetsReceived(Uint64 &value)
{
	_octetsReceived = value;
}

Boolean UNIX_TokenRingAdapter::getMaxDataSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_DATA_SIZE, getMaxDataSize());
	return true;
}

Uint32 UNIX_TokenRingAdapter::getMaxDataSize() const
{
	return _maxDataSize;
}

void UNIX_TokenRingAdapter::setMaxDataSize(Uint32 &value)
{
	_maxDataSize = value;
}

Boolean UNIX_TokenRingAdapter::getCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITIES, getCapabilities());
	return true;
}

Array<Uint16> UNIX_TokenRingAdapter::getCapabilities() const
{
	return _capabilities;
}

void UNIX_TokenRingAdapter::setCapabilities(Array<Uint16> &value)
{
	_capabilities = value;
}

Boolean UNIX_TokenRingAdapter::getCapabilityDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITY_DESCRIPTIONS, getCapabilityDescriptions());
	return true;
}

Array<String> UNIX_TokenRingAdapter::getCapabilityDescriptions() const
{
	return _capabilityDescriptions;
}

void UNIX_TokenRingAdapter::setCapabilityDescriptions(Array<String> &value)
{
	_capabilityDescriptions = value;
}

Boolean UNIX_TokenRingAdapter::getEnabledCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_CAPABILITIES, getEnabledCapabilities());
	return true;
}

Array<Uint16> UNIX_TokenRingAdapter::getEnabledCapabilities() const
{
	return _enabledCapabilities;
}

void UNIX_TokenRingAdapter::setEnabledCapabilities(Array<Uint16> &value)
{
	_enabledCapabilities = value;
}

Boolean UNIX_TokenRingAdapter::getRingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RING_STATUS, getRingStatus());
	return true;
}

Uint32 UNIX_TokenRingAdapter::getRingStatus() const
{
	return _ringStatus;
}

void UNIX_TokenRingAdapter::setRingStatus(Uint32 &value)
{
	_ringStatus = value;
}

Boolean UNIX_TokenRingAdapter::getRingState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RING_STATE, getRingState());
	return true;
}

Uint16 UNIX_TokenRingAdapter::getRingState() const
{
	return _ringState;
}

void UNIX_TokenRingAdapter::setRingState(Uint16 &value)
{
	_ringState = value;
}

Boolean UNIX_TokenRingAdapter::getRingOpenStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RING_OPEN_STATUS, getRingOpenStatus());
	return true;
}

Uint16 UNIX_TokenRingAdapter::getRingOpenStatus() const
{
	return _ringOpenStatus;
}

void UNIX_TokenRingAdapter::setRingOpenStatus(Uint16 &value)
{
	_ringOpenStatus = value;
}

Boolean UNIX_TokenRingAdapter::getRingSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RING_SPEED, getRingSpeed());
	return true;
}

Uint16 UNIX_TokenRingAdapter::getRingSpeed() const
{
	return _ringSpeed;
}

void UNIX_TokenRingAdapter::setRingSpeed(Uint16 &value)
{
	_ringSpeed = value;
}

Boolean UNIX_TokenRingAdapter::getBurstErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BURST_ERRORS, getBurstErrors());
	return true;
}

Uint32 UNIX_TokenRingAdapter::getBurstErrors() const
{
	return _burstErrors;
}

void UNIX_TokenRingAdapter::setBurstErrors(Uint32 &value)
{
	_burstErrors = value;
}

Boolean UNIX_TokenRingAdapter::getACErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_A_C_ERRORS, getACErrors());
	return true;
}

Uint32 UNIX_TokenRingAdapter::getACErrors() const
{
	return _aCErrors;
}

void UNIX_TokenRingAdapter::setACErrors(Uint32 &value)
{
	_aCErrors = value;
}

Boolean UNIX_TokenRingAdapter::getAbortTransErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ABORT_TRANS_ERRORS, getAbortTransErrors());
	return true;
}

Uint32 UNIX_TokenRingAdapter::getAbortTransErrors() const
{
	return _abortTransErrors;
}

void UNIX_TokenRingAdapter::setAbortTransErrors(Uint32 &value)
{
	_abortTransErrors = value;
}

Boolean UNIX_TokenRingAdapter::getInternalErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INTERNAL_ERRORS, getInternalErrors());
	return true;
}

Uint32 UNIX_TokenRingAdapter::getInternalErrors() const
{
	return _internalErrors;
}

void UNIX_TokenRingAdapter::setInternalErrors(Uint32 &value)
{
	_internalErrors = value;
}

Boolean UNIX_TokenRingAdapter::getLostFrameErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOST_FRAME_ERRORS, getLostFrameErrors());
	return true;
}

Uint32 UNIX_TokenRingAdapter::getLostFrameErrors() const
{
	return _lostFrameErrors;
}

void UNIX_TokenRingAdapter::setLostFrameErrors(Uint32 &value)
{
	_lostFrameErrors = value;
}

Boolean UNIX_TokenRingAdapter::getReceiveCongestions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECEIVE_CONGESTIONS, getReceiveCongestions());
	return true;
}

Uint32 UNIX_TokenRingAdapter::getReceiveCongestions() const
{
	return _receiveCongestions;
}

void UNIX_TokenRingAdapter::setReceiveCongestions(Uint32 &value)
{
	_receiveCongestions = value;
}

Boolean UNIX_TokenRingAdapter::getFrameCopiedErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FRAME_COPIED_ERRORS, getFrameCopiedErrors());
	return true;
}

Uint32 UNIX_TokenRingAdapter::getFrameCopiedErrors() const
{
	return _frameCopiedErrors;
}

void UNIX_TokenRingAdapter::setFrameCopiedErrors(Uint32 &value)
{
	_frameCopiedErrors = value;
}

Boolean UNIX_TokenRingAdapter::getTokenErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOKEN_ERRORS, getTokenErrors());
	return true;
}

Uint32 UNIX_TokenRingAdapter::getTokenErrors() const
{
	return _tokenErrors;
}

void UNIX_TokenRingAdapter::setTokenErrors(Uint32 &value)
{
	_tokenErrors = value;
}

Boolean UNIX_TokenRingAdapter::getSoftErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SOFT_ERRORS, getSoftErrors());
	return true;
}

Uint32 UNIX_TokenRingAdapter::getSoftErrors() const
{
	return _softErrors;
}

void UNIX_TokenRingAdapter::setSoftErrors(Uint32 &value)
{
	_softErrors = value;
}

Boolean UNIX_TokenRingAdapter::getHardErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HARD_ERRORS, getHardErrors());
	return true;
}

Uint32 UNIX_TokenRingAdapter::getHardErrors() const
{
	return _hardErrors;
}

void UNIX_TokenRingAdapter::setHardErrors(Uint32 &value)
{
	_hardErrors = value;
}

Boolean UNIX_TokenRingAdapter::getSignalLossCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SIGNAL_LOSS_COUNT, getSignalLossCount());
	return true;
}

Uint32 UNIX_TokenRingAdapter::getSignalLossCount() const
{
	return _signalLossCount;
}

void UNIX_TokenRingAdapter::setSignalLossCount(Uint32 &value)
{
	_signalLossCount = value;
}

Boolean UNIX_TokenRingAdapter::getTransmittedBeacons(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSMITTED_BEACONS, getTransmittedBeacons());
	return true;
}

Uint32 UNIX_TokenRingAdapter::getTransmittedBeacons() const
{
	return _transmittedBeacons;
}

void UNIX_TokenRingAdapter::setTransmittedBeacons(Uint32 &value)
{
	_transmittedBeacons = value;
}

Boolean UNIX_TokenRingAdapter::getRecoverys(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECOVERYS, getRecoverys());
	return true;
}

Uint32 UNIX_TokenRingAdapter::getRecoverys() const
{
	return _recoverys;
}

void UNIX_TokenRingAdapter::setRecoverys(Uint32 &value)
{
	_recoverys = value;
}

Boolean UNIX_TokenRingAdapter::getLobeWires(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOBE_WIRES, getLobeWires());
	return true;
}

Uint32 UNIX_TokenRingAdapter::getLobeWires() const
{
	return _lobeWires;
}

void UNIX_TokenRingAdapter::setLobeWires(Uint32 &value)
{
	_lobeWires = value;
}

Boolean UNIX_TokenRingAdapter::getRemoves(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMOVES, getRemoves());
	return true;
}

Uint32 UNIX_TokenRingAdapter::getRemoves() const
{
	return _removes;
}

void UNIX_TokenRingAdapter::setRemoves(Uint32 &value)
{
	_removes = value;
}

Boolean UNIX_TokenRingAdapter::getSingles(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SINGLES, getSingles());
	return true;
}

Uint32 UNIX_TokenRingAdapter::getSingles() const
{
	return _singles;
}

void UNIX_TokenRingAdapter::setSingles(Uint32 &value)
{
	_singles = value;
}

Boolean UNIX_TokenRingAdapter::getFrequencyErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FREQUENCY_ERRORS, getFrequencyErrors());
	return true;
}

Uint32 UNIX_TokenRingAdapter::getFrequencyErrors() const
{
	return _frequencyErrors;
}

void UNIX_TokenRingAdapter::setFrequencyErrors(Uint32 &value)
{
	_frequencyErrors = value;
}


void UNIX_TokenRingAdapter::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("TokenRingAdapter");
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
	_creationClassName = String("UNIX_TokenRingAdapter");
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
	_ringStatus = Uint32(0);
	_ringState = Uint16(0);
	_ringOpenStatus = Uint16(0);
	_ringSpeed = Uint16(0);
	_burstErrors = Uint32(0);
	_aCErrors = Uint32(0);
	_abortTransErrors = Uint32(0);
	_internalErrors = Uint32(0);
	_lostFrameErrors = Uint32(0);
	_receiveCongestions = Uint32(0);
	_frameCopiedErrors = Uint32(0);
	_tokenErrors = Uint32(0);
	_softErrors = Uint32(0);
	_hardErrors = Uint32(0);
	_signalLossCount = Uint32(0);
	_transmittedBeacons = Uint32(0);
	_recoverys = Uint32(0);
	_lobeWires = Uint32(0);
	_removes = Uint32(0);
	_singles = Uint32(0);
	_frequencyErrors = Uint32(0);

}

Boolean UNIX_TokenRingAdapter::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "RingStatus"))
			{
				Uint32 ringStatusValue;
				property.getValue().get(ringStatusValue);
				setRingStatus(ringStatusValue);
			}
			else if (String::equal(property.getName().getString(), "RingState"))
			{
				Uint16 ringStateValue;
				property.getValue().get(ringStateValue);
				setRingState(ringStateValue);
			}
			else if (String::equal(property.getName().getString(), "RingOpenStatus"))
			{
				Uint16 ringOpenStatusValue;
				property.getValue().get(ringOpenStatusValue);
				setRingOpenStatus(ringOpenStatusValue);
			}
			else if (String::equal(property.getName().getString(), "RingSpeed"))
			{
				Uint16 ringSpeedValue;
				property.getValue().get(ringSpeedValue);
				setRingSpeed(ringSpeedValue);
			}
			else if (String::equal(property.getName().getString(), "BurstErrors"))
			{
				Uint32 burstErrorsValue;
				property.getValue().get(burstErrorsValue);
				setBurstErrors(burstErrorsValue);
			}
			else if (String::equal(property.getName().getString(), "ACErrors"))
			{
				Uint32 aCErrorsValue;
				property.getValue().get(aCErrorsValue);
				setACErrors(aCErrorsValue);
			}
			else if (String::equal(property.getName().getString(), "AbortTransErrors"))
			{
				Uint32 abortTransErrorsValue;
				property.getValue().get(abortTransErrorsValue);
				setAbortTransErrors(abortTransErrorsValue);
			}
			else if (String::equal(property.getName().getString(), "InternalErrors"))
			{
				Uint32 internalErrorsValue;
				property.getValue().get(internalErrorsValue);
				setInternalErrors(internalErrorsValue);
			}
			else if (String::equal(property.getName().getString(), "LostFrameErrors"))
			{
				Uint32 lostFrameErrorsValue;
				property.getValue().get(lostFrameErrorsValue);
				setLostFrameErrors(lostFrameErrorsValue);
			}
			else if (String::equal(property.getName().getString(), "ReceiveCongestions"))
			{
				Uint32 receiveCongestionsValue;
				property.getValue().get(receiveCongestionsValue);
				setReceiveCongestions(receiveCongestionsValue);
			}
			else if (String::equal(property.getName().getString(), "FrameCopiedErrors"))
			{
				Uint32 frameCopiedErrorsValue;
				property.getValue().get(frameCopiedErrorsValue);
				setFrameCopiedErrors(frameCopiedErrorsValue);
			}
			else if (String::equal(property.getName().getString(), "TokenErrors"))
			{
				Uint32 tokenErrorsValue;
				property.getValue().get(tokenErrorsValue);
				setTokenErrors(tokenErrorsValue);
			}
			else if (String::equal(property.getName().getString(), "SoftErrors"))
			{
				Uint32 softErrorsValue;
				property.getValue().get(softErrorsValue);
				setSoftErrors(softErrorsValue);
			}
			else if (String::equal(property.getName().getString(), "HardErrors"))
			{
				Uint32 hardErrorsValue;
				property.getValue().get(hardErrorsValue);
				setHardErrors(hardErrorsValue);
			}
			else if (String::equal(property.getName().getString(), "SignalLossCount"))
			{
				Uint32 signalLossCountValue;
				property.getValue().get(signalLossCountValue);
				setSignalLossCount(signalLossCountValue);
			}
			else if (String::equal(property.getName().getString(), "TransmittedBeacons"))
			{
				Uint32 transmittedBeaconsValue;
				property.getValue().get(transmittedBeaconsValue);
				setTransmittedBeacons(transmittedBeaconsValue);
			}
			else if (String::equal(property.getName().getString(), "Recoverys"))
			{
				Uint32 recoverysValue;
				property.getValue().get(recoverysValue);
				setRecoverys(recoverysValue);
			}
			else if (String::equal(property.getName().getString(), "LobeWires"))
			{
				Uint32 lobeWiresValue;
				property.getValue().get(lobeWiresValue);
				setLobeWires(lobeWiresValue);
			}
			else if (String::equal(property.getName().getString(), "Removes"))
			{
				Uint32 removesValue;
				property.getValue().get(removesValue);
				setRemoves(removesValue);
			}
			else if (String::equal(property.getName().getString(), "Singles"))
			{
				Uint32 singlesValue;
				property.getValue().get(singlesValue);
				setSingles(singlesValue);
			}
			else if (String::equal(property.getName().getString(), "FrequencyErrors"))
			{
				Uint32 frequencyErrorsValue;
				property.getValue().get(frequencyErrorsValue);
				setFrequencyErrors(frequencyErrorsValue);
			}
	}
	return true;
}

Uint32 UNIX_TokenRingAdapter::invokeRequestStateChange(
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

Uint32 UNIX_TokenRingAdapter::invokeSetPowerState(
		Uint16 &inPowerState,
		CIMDateTime &inTime
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SetPowerState */
	
	
	
	return returnValue;
}

Uint32 UNIX_TokenRingAdapter::invokeReset()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method Reset */
	
	
	
	return returnValue;
}

Uint32 UNIX_TokenRingAdapter::invokeEnableDevice(
		Boolean &inEnabled
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method EnableDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_TokenRingAdapter::invokeOnlineDevice(
		Boolean &inOnline
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method OnlineDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_TokenRingAdapter::invokeQuiesceDevice(
		Boolean &inQuiesce
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method QuiesceDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_TokenRingAdapter::invokeSaveProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SaveProperties */
	
	
	
	return returnValue;
}

Uint32 UNIX_TokenRingAdapter::invokeRestoreProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method RestoreProperties */
	
	
	
	return returnValue;
}


Boolean UNIX_TokenRingAdapter::initialize()
{
	return false;
}

Boolean UNIX_TokenRingAdapter::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("TokenRingAdapter");
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
	_creationClassName = String("UNIX_TokenRingAdapter");
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
	_ringStatus = Uint32(0);
	_ringState = Uint16(0);
	_ringOpenStatus = Uint16(0);
	_ringSpeed = Uint16(0);
	_burstErrors = Uint32(0);
	_aCErrors = Uint32(0);
	_abortTransErrors = Uint32(0);
	_internalErrors = Uint32(0);
	_lostFrameErrors = Uint32(0);
	_receiveCongestions = Uint32(0);
	_frameCopiedErrors = Uint32(0);
	_tokenErrors = Uint32(0);
	_softErrors = Uint32(0);
	_hardErrors = Uint32(0);
	_signalLossCount = Uint32(0);
	_transmittedBeacons = Uint32(0);
	_recoverys = Uint32(0);
	_lobeWires = Uint32(0);
	_removes = Uint32(0);
	_singles = Uint32(0);
	_frequencyErrors = Uint32(0);
	
	return false;
}

Boolean UNIX_TokenRingAdapter::finalize()
{
	return false;
}

Boolean UNIX_TokenRingAdapter::loadByName(const String name)
{
	return false;
}

Boolean UNIX_TokenRingAdapter::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_TokenRingAdapter::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_TokenRingAdapter::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_TokenRingAdapter::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_TokenRingAdapter::validateInstance()
{
	return true;
}

