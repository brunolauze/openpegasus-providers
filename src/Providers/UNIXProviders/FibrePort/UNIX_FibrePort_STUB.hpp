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


UNIX_FibrePort::UNIX_FibrePort(void)
{
}

UNIX_FibrePort::~UNIX_FibrePort(void)
{
}

Boolean UNIX_FibrePort::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_FibrePort::getInstanceID() const
{
	return _instanceID;
}

void UNIX_FibrePort::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_FibrePort::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_FibrePort::getCaption() const
{
	return _caption;
}

void UNIX_FibrePort::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_FibrePort::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_FibrePort::getDescription() const
{
	return _description;
}

void UNIX_FibrePort::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_FibrePort::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_FibrePort::getElementName() const
{
	return _elementName;
}

void UNIX_FibrePort::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_FibrePort::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_FibrePort::getGeneration() const
{
	return _generation;
}

void UNIX_FibrePort::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_FibrePort::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_FibrePort::getInstallDate() const
{
	return _installDate;
}

void UNIX_FibrePort::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_FibrePort::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_FibrePort::getName() const
{
	return _name;
}

void UNIX_FibrePort::setName(String &value)
{
	_name = value;
}

Boolean UNIX_FibrePort::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_FibrePort::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_FibrePort::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_FibrePort::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_FibrePort::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_FibrePort::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_FibrePort::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_FibrePort::getStatus() const
{
	return _status;
}

void UNIX_FibrePort::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_FibrePort::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_FibrePort::getHealthState() const
{
	return _healthState;
}

void UNIX_FibrePort::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_FibrePort::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_FibrePort::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_FibrePort::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_FibrePort::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_FibrePort::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_FibrePort::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_FibrePort::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_FibrePort::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_FibrePort::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_FibrePort::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_FibrePort::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_FibrePort::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_FibrePort::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_FibrePort::getEnabledState() const
{
	return _enabledState;
}

void UNIX_FibrePort::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_FibrePort::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_FibrePort::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_FibrePort::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_FibrePort::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_FibrePort::getRequestedState() const
{
	return _requestedState;
}

void UNIX_FibrePort::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_FibrePort::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_FibrePort::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_FibrePort::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_FibrePort::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_FibrePort::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_FibrePort::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_FibrePort::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_FibrePort::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_FibrePort::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_FibrePort::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_FibrePort::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_FibrePort::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_FibrePort::getAllocationState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOCATION_STATE, getAllocationState());
	return true;
}

String UNIX_FibrePort::getAllocationState() const
{
	return _allocationState;
}

void UNIX_FibrePort::setAllocationState(String &value)
{
	_allocationState = value;
}

Boolean UNIX_FibrePort::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_FibrePort::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_FibrePort::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_FibrePort::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_FibrePort::getSystemName() const
{
	return _systemName;
}

void UNIX_FibrePort::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_FibrePort::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_FibrePort::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_FibrePort::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_FibrePort::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_FibrePort::getDeviceID() const
{
	return _deviceID;
}

void UNIX_FibrePort::setDeviceID(String &value)
{
	_deviceID = value;
}

Boolean UNIX_FibrePort::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_FibrePort::getPowerManagementSupported() const
{
	return _powerManagementSupported;
}

void UNIX_FibrePort::setPowerManagementSupported(Boolean &value)
{
	_powerManagementSupported = value;
}

Boolean UNIX_FibrePort::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_FibrePort::getPowerManagementCapabilities() const
{
	return _powerManagementCapabilities;
}

void UNIX_FibrePort::setPowerManagementCapabilities(Array<Uint16> &value)
{
	_powerManagementCapabilities = value;
}

Boolean UNIX_FibrePort::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_FibrePort::getAvailability() const
{
	return _availability;
}

void UNIX_FibrePort::setAvailability(Uint16 &value)
{
	_availability = value;
}

Boolean UNIX_FibrePort::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_FibrePort::getStatusInfo() const
{
	return _statusInfo;
}

void UNIX_FibrePort::setStatusInfo(Uint16 &value)
{
	_statusInfo = value;
}

Boolean UNIX_FibrePort::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_FibrePort::getLastErrorCode() const
{
	return _lastErrorCode;
}

void UNIX_FibrePort::setLastErrorCode(Uint32 &value)
{
	_lastErrorCode = value;
}

Boolean UNIX_FibrePort::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_FibrePort::getErrorDescription() const
{
	return _errorDescription;
}

void UNIX_FibrePort::setErrorDescription(String &value)
{
	_errorDescription = value;
}

Boolean UNIX_FibrePort::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_FibrePort::getErrorCleared() const
{
	return _errorCleared;
}

void UNIX_FibrePort::setErrorCleared(Boolean &value)
{
	_errorCleared = value;
}

Boolean UNIX_FibrePort::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_FibrePort::getOtherIdentifyingInfo() const
{
	return _otherIdentifyingInfo;
}

void UNIX_FibrePort::setOtherIdentifyingInfo(Array<String> &value)
{
	_otherIdentifyingInfo = value;
}

Boolean UNIX_FibrePort::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_FibrePort::getPowerOnHours() const
{
	return _powerOnHours;
}

void UNIX_FibrePort::setPowerOnHours(Uint64 &value)
{
	_powerOnHours = value;
}

Boolean UNIX_FibrePort::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_FibrePort::getTotalPowerOnHours() const
{
	return _totalPowerOnHours;
}

void UNIX_FibrePort::setTotalPowerOnHours(Uint64 &value)
{
	_totalPowerOnHours = value;
}

Boolean UNIX_FibrePort::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_FibrePort::getIdentifyingDescriptions() const
{
	return _identifyingDescriptions;
}

void UNIX_FibrePort::setIdentifyingDescriptions(Array<String> &value)
{
	_identifyingDescriptions = value;
}

Boolean UNIX_FibrePort::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_FibrePort::getAdditionalAvailability() const
{
	return _additionalAvailability;
}

void UNIX_FibrePort::setAdditionalAvailability(Array<Uint16> &value)
{
	_additionalAvailability = value;
}

Boolean UNIX_FibrePort::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_FibrePort::getMaxQuiesceTime() const
{
	return _maxQuiesceTime;
}

void UNIX_FibrePort::setMaxQuiesceTime(Uint64 &value)
{
	_maxQuiesceTime = value;
}

Boolean UNIX_FibrePort::getLocationIndicator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCATION_INDICATOR, getLocationIndicator());
	return true;
}

Uint16 UNIX_FibrePort::getLocationIndicator() const
{
	return _locationIndicator;
}

void UNIX_FibrePort::setLocationIndicator(Uint16 &value)
{
	_locationIndicator = value;
}

Boolean UNIX_FibrePort::getSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SPEED, getSpeed());
	return true;
}

Uint64 UNIX_FibrePort::getSpeed() const
{
	return _speed;
}

void UNIX_FibrePort::setSpeed(Uint64 &value)
{
	_speed = value;
}

Boolean UNIX_FibrePort::getMaxSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_SPEED, getMaxSpeed());
	return true;
}

Uint64 UNIX_FibrePort::getMaxSpeed() const
{
	return _maxSpeed;
}

void UNIX_FibrePort::setMaxSpeed(Uint64 &value)
{
	_maxSpeed = value;
}

Boolean UNIX_FibrePort::getRequestedSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_SPEED, getRequestedSpeed());
	return true;
}

Uint64 UNIX_FibrePort::getRequestedSpeed() const
{
	return _requestedSpeed;
}

void UNIX_FibrePort::setRequestedSpeed(Uint64 &value)
{
	_requestedSpeed = value;
}

Boolean UNIX_FibrePort::getUsageRestriction(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USAGE_RESTRICTION, getUsageRestriction());
	return true;
}

Uint16 UNIX_FibrePort::getUsageRestriction() const
{
	return _usageRestriction;
}

void UNIX_FibrePort::setUsageRestriction(Uint16 &value)
{
	_usageRestriction = value;
}

Boolean UNIX_FibrePort::getPortType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_TYPE, getPortType());
	return true;
}

Uint16 UNIX_FibrePort::getPortType() const
{
	return _portType;
}

void UNIX_FibrePort::setPortType(Uint16 &value)
{
	_portType = value;
}

Boolean UNIX_FibrePort::getOtherPortType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_PORT_TYPE, getOtherPortType());
	return true;
}

String UNIX_FibrePort::getOtherPortType() const
{
	return _otherPortType;
}

void UNIX_FibrePort::setOtherPortType(String &value)
{
	_otherPortType = value;
}

Boolean UNIX_FibrePort::getAddressIdentifier(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESS_IDENTIFIER, getAddressIdentifier());
	return true;
}

Uint32 UNIX_FibrePort::getAddressIdentifier() const
{
	return _addressIdentifier;
}

void UNIX_FibrePort::setAddressIdentifier(Uint32 &value)
{
	_addressIdentifier = value;
}

Boolean UNIX_FibrePort::getSupportedPortTypes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_PORT_TYPES, getSupportedPortTypes());
	return true;
}

Array<Uint16> UNIX_FibrePort::getSupportedPortTypes() const
{
	return _supportedPortTypes;
}

void UNIX_FibrePort::setSupportedPortTypes(Array<Uint16> &value)
{
	_supportedPortTypes = value;
}

Boolean UNIX_FibrePort::getPortTypeVersions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_TYPE_VERSIONS, getPortTypeVersions());
	return true;
}

Array<String> UNIX_FibrePort::getPortTypeVersions() const
{
	return _portTypeVersions;
}

void UNIX_FibrePort::setPortTypeVersions(Array<String> &value)
{
	_portTypeVersions = value;
}

Boolean UNIX_FibrePort::getEnabledPortTypes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_PORT_TYPES, getEnabledPortTypes());
	return true;
}

Array<Uint16> UNIX_FibrePort::getEnabledPortTypes() const
{
	return _enabledPortTypes;
}

void UNIX_FibrePort::setEnabledPortTypes(Array<Uint16> &value)
{
	_enabledPortTypes = value;
}

Boolean UNIX_FibrePort::getEnabledVersions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_VERSIONS, getEnabledVersions());
	return true;
}

Array<String> UNIX_FibrePort::getEnabledVersions() const
{
	return _enabledVersions;
}

void UNIX_FibrePort::setEnabledVersions(Array<String> &value)
{
	_enabledVersions = value;
}

Boolean UNIX_FibrePort::getCurrentPortType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_PORT_TYPE, getCurrentPortType());
	return true;
}

Uint16 UNIX_FibrePort::getCurrentPortType() const
{
	return _currentPortType;
}

void UNIX_FibrePort::setCurrentPortType(Uint16 &value)
{
	_currentPortType = value;
}

Boolean UNIX_FibrePort::getCurrentVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_VERSION, getCurrentVersion());
	return true;
}

String UNIX_FibrePort::getCurrentVersion() const
{
	return _currentVersion;
}

void UNIX_FibrePort::setCurrentVersion(String &value)
{
	_currentVersion = value;
}

Boolean UNIX_FibrePort::getAliasAddresses(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALIAS_ADDRESSES, getAliasAddresses());
	return true;
}

Array<Uint32> UNIX_FibrePort::getAliasAddresses() const
{
	return _aliasAddresses;
}

void UNIX_FibrePort::setAliasAddresses(Array<Uint32> &value)
{
	_aliasAddresses = value;
}

Boolean UNIX_FibrePort::getLossOfSignalCounter(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOSS_OF_SIGNAL_COUNTER, getLossOfSignalCounter());
	return true;
}

Uint64 UNIX_FibrePort::getLossOfSignalCounter() const
{
	return _lossOfSignalCounter;
}

void UNIX_FibrePort::setLossOfSignalCounter(Uint64 &value)
{
	_lossOfSignalCounter = value;
}

Boolean UNIX_FibrePort::getLossOfSyncCounter(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOSS_OF_SYNC_COUNTER, getLossOfSyncCounter());
	return true;
}

Uint64 UNIX_FibrePort::getLossOfSyncCounter() const
{
	return _lossOfSyncCounter;
}

void UNIX_FibrePort::setLossOfSyncCounter(Uint64 &value)
{
	_lossOfSyncCounter = value;
}

Boolean UNIX_FibrePort::getCRCErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_C_R_C_ERRORS, getCRCErrors());
	return true;
}

Uint64 UNIX_FibrePort::getCRCErrors() const
{
	return _cRCErrors;
}

void UNIX_FibrePort::setCRCErrors(Uint64 &value)
{
	_cRCErrors = value;
}

Boolean UNIX_FibrePort::getInvalidTransmissionWords(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INVALID_TRANSMISSION_WORDS, getInvalidTransmissionWords());
	return true;
}

Uint64 UNIX_FibrePort::getInvalidTransmissionWords() const
{
	return _invalidTransmissionWords;
}

void UNIX_FibrePort::setInvalidTransmissionWords(Uint64 &value)
{
	_invalidTransmissionWords = value;
}

Boolean UNIX_FibrePort::getFramesTooShort(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FRAMES_TOO_SHORT, getFramesTooShort());
	return true;
}

Uint64 UNIX_FibrePort::getFramesTooShort() const
{
	return _framesTooShort;
}

void UNIX_FibrePort::setFramesTooShort(Uint64 &value)
{
	_framesTooShort = value;
}

Boolean UNIX_FibrePort::getFramesTooLong(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FRAMES_TOO_LONG, getFramesTooLong());
	return true;
}

Uint64 UNIX_FibrePort::getFramesTooLong() const
{
	return _framesTooLong;
}

void UNIX_FibrePort::setFramesTooLong(Uint64 &value)
{
	_framesTooLong = value;
}

Boolean UNIX_FibrePort::getElasticityBufferUnderruns(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELASTICITY_BUFFER_UNDERRUNS, getElasticityBufferUnderruns());
	return true;
}

Uint64 UNIX_FibrePort::getElasticityBufferUnderruns() const
{
	return _elasticityBufferUnderruns;
}

void UNIX_FibrePort::setElasticityBufferUnderruns(Uint64 &value)
{
	_elasticityBufferUnderruns = value;
}

Boolean UNIX_FibrePort::getElasticityBufferOverruns(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELASTICITY_BUFFER_OVERRUNS, getElasticityBufferOverruns());
	return true;
}

Uint64 UNIX_FibrePort::getElasticityBufferOverruns() const
{
	return _elasticityBufferOverruns;
}

void UNIX_FibrePort::setElasticityBufferOverruns(Uint64 &value)
{
	_elasticityBufferOverruns = value;
}

Boolean UNIX_FibrePort::getReceiverTransmitterTimeout(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECEIVER_TRANSMITTER_TIMEOUT, getReceiverTransmitterTimeout());
	return true;
}

Uint64 UNIX_FibrePort::getReceiverTransmitterTimeout() const
{
	return _receiverTransmitterTimeout;
}

void UNIX_FibrePort::setReceiverTransmitterTimeout(Uint64 &value)
{
	_receiverTransmitterTimeout = value;
}

Boolean UNIX_FibrePort::getBypassedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BYPASSED_STATE, getBypassedState());
	return true;
}

Uint16 UNIX_FibrePort::getBypassedState() const
{
	return _bypassedState;
}

void UNIX_FibrePort::setBypassedState(Uint16 &value)
{
	_bypassedState = value;
}

Boolean UNIX_FibrePort::getConnectedMedia(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONNECTED_MEDIA, getConnectedMedia());
	return true;
}

Uint16 UNIX_FibrePort::getConnectedMedia() const
{
	return _connectedMedia;
}

void UNIX_FibrePort::setConnectedMedia(Uint16 &value)
{
	_connectedMedia = value;
}


void UNIX_FibrePort::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("FibrePort");
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
	_creationClassName = String("UNIX_FibrePort");
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
	_addressIdentifier = Uint32(0);
	_supportedPortTypes.clear();
	_portTypeVersions.clear();
	_enabledPortTypes.clear();
	_enabledVersions.clear();
	_currentPortType = Uint16(0);
	_currentVersion = String ("");
	_aliasAddresses.clear();
	_lossOfSignalCounter = Uint64(0);
	_lossOfSyncCounter = Uint64(0);
	_cRCErrors = Uint64(0);
	_invalidTransmissionWords = Uint64(0);
	_framesTooShort = Uint64(0);
	_framesTooLong = Uint64(0);
	_elasticityBufferUnderruns = Uint64(0);
	_elasticityBufferOverruns = Uint64(0);
	_receiverTransmitterTimeout = Uint64(0);
	_bypassedState = Uint16(0);
	_connectedMedia = Uint16(0);

}

Boolean UNIX_FibrePort::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "AddressIdentifier"))
			{
				Uint32 addressIdentifierValue;
				property.getValue().get(addressIdentifierValue);
				setAddressIdentifier(addressIdentifierValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedPortTypes"))
			{
				Array<Uint16> supportedPortTypesValue;
				property.getValue().get(supportedPortTypesValue);
				setSupportedPortTypes(supportedPortTypesValue);
			}
			else if (String::equal(property.getName().getString(), "PortTypeVersions"))
			{
				Array<String> portTypeVersionsValue;
				property.getValue().get(portTypeVersionsValue);
				setPortTypeVersions(portTypeVersionsValue);
			}
			else if (String::equal(property.getName().getString(), "EnabledPortTypes"))
			{
				Array<Uint16> enabledPortTypesValue;
				property.getValue().get(enabledPortTypesValue);
				setEnabledPortTypes(enabledPortTypesValue);
			}
			else if (String::equal(property.getName().getString(), "EnabledVersions"))
			{
				Array<String> enabledVersionsValue;
				property.getValue().get(enabledVersionsValue);
				setEnabledVersions(enabledVersionsValue);
			}
			else if (String::equal(property.getName().getString(), "CurrentPortType"))
			{
				Uint16 currentPortTypeValue;
				property.getValue().get(currentPortTypeValue);
				setCurrentPortType(currentPortTypeValue);
			}
			else if (String::equal(property.getName().getString(), "CurrentVersion"))
			{
				String currentVersionValue;
				property.getValue().get(currentVersionValue);
				setCurrentVersion(currentVersionValue);
			}
			else if (String::equal(property.getName().getString(), "AliasAddresses"))
			{
				Array<Uint32> aliasAddressesValue;
				property.getValue().get(aliasAddressesValue);
				setAliasAddresses(aliasAddressesValue);
			}
			else if (String::equal(property.getName().getString(), "LossOfSignalCounter"))
			{
				Uint64 lossOfSignalCounterValue;
				property.getValue().get(lossOfSignalCounterValue);
				setLossOfSignalCounter(lossOfSignalCounterValue);
			}
			else if (String::equal(property.getName().getString(), "LossOfSyncCounter"))
			{
				Uint64 lossOfSyncCounterValue;
				property.getValue().get(lossOfSyncCounterValue);
				setLossOfSyncCounter(lossOfSyncCounterValue);
			}
			else if (String::equal(property.getName().getString(), "CRCErrors"))
			{
				Uint64 cRCErrorsValue;
				property.getValue().get(cRCErrorsValue);
				setCRCErrors(cRCErrorsValue);
			}
			else if (String::equal(property.getName().getString(), "InvalidTransmissionWords"))
			{
				Uint64 invalidTransmissionWordsValue;
				property.getValue().get(invalidTransmissionWordsValue);
				setInvalidTransmissionWords(invalidTransmissionWordsValue);
			}
			else if (String::equal(property.getName().getString(), "FramesTooShort"))
			{
				Uint64 framesTooShortValue;
				property.getValue().get(framesTooShortValue);
				setFramesTooShort(framesTooShortValue);
			}
			else if (String::equal(property.getName().getString(), "FramesTooLong"))
			{
				Uint64 framesTooLongValue;
				property.getValue().get(framesTooLongValue);
				setFramesTooLong(framesTooLongValue);
			}
			else if (String::equal(property.getName().getString(), "ElasticityBufferUnderruns"))
			{
				Uint64 elasticityBufferUnderrunsValue;
				property.getValue().get(elasticityBufferUnderrunsValue);
				setElasticityBufferUnderruns(elasticityBufferUnderrunsValue);
			}
			else if (String::equal(property.getName().getString(), "ElasticityBufferOverruns"))
			{
				Uint64 elasticityBufferOverrunsValue;
				property.getValue().get(elasticityBufferOverrunsValue);
				setElasticityBufferOverruns(elasticityBufferOverrunsValue);
			}
			else if (String::equal(property.getName().getString(), "ReceiverTransmitterTimeout"))
			{
				Uint64 receiverTransmitterTimeoutValue;
				property.getValue().get(receiverTransmitterTimeoutValue);
				setReceiverTransmitterTimeout(receiverTransmitterTimeoutValue);
			}
			else if (String::equal(property.getName().getString(), "BypassedState"))
			{
				Uint16 bypassedStateValue;
				property.getValue().get(bypassedStateValue);
				setBypassedState(bypassedStateValue);
			}
			else if (String::equal(property.getName().getString(), "ConnectedMedia"))
			{
				Uint16 connectedMediaValue;
				property.getValue().get(connectedMediaValue);
				setConnectedMedia(connectedMediaValue);
			}
	}
	return true;
}

Uint32 UNIX_FibrePort::invokeRequestStateChange(
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

Uint32 UNIX_FibrePort::invokeSetPowerState(
		Uint16 &inPowerState,
		CIMDateTime &inTime
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SetPowerState */
	
	
	
	return returnValue;
}

Uint32 UNIX_FibrePort::invokeReset()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method Reset */
	
	
	
	return returnValue;
}

Uint32 UNIX_FibrePort::invokeEnableDevice(
		Boolean &inEnabled
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method EnableDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_FibrePort::invokeOnlineDevice(
		Boolean &inOnline
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method OnlineDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_FibrePort::invokeQuiesceDevice(
		Boolean &inQuiesce
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method QuiesceDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_FibrePort::invokeSaveProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SaveProperties */
	
	
	
	return returnValue;
}

Uint32 UNIX_FibrePort::invokeRestoreProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method RestoreProperties */
	
	
	
	return returnValue;
}


Boolean UNIX_FibrePort::initialize()
{
	return false;
}

Boolean UNIX_FibrePort::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("FibrePort");
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
	_creationClassName = String("UNIX_FibrePort");
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
	_addressIdentifier = Uint32(0);
	_supportedPortTypes.clear();
	_portTypeVersions.clear();
	_enabledPortTypes.clear();
	_enabledVersions.clear();
	_currentPortType = Uint16(0);
	_currentVersion = String ("");
	_aliasAddresses.clear();
	_lossOfSignalCounter = Uint64(0);
	_lossOfSyncCounter = Uint64(0);
	_cRCErrors = Uint64(0);
	_invalidTransmissionWords = Uint64(0);
	_framesTooShort = Uint64(0);
	_framesTooLong = Uint64(0);
	_elasticityBufferUnderruns = Uint64(0);
	_elasticityBufferOverruns = Uint64(0);
	_receiverTransmitterTimeout = Uint64(0);
	_bypassedState = Uint16(0);
	_connectedMedia = Uint16(0);
	
	return false;
}

Boolean UNIX_FibrePort::finalize()
{
	return false;
}

Boolean UNIX_FibrePort::loadByName(const String name)
{
	return false;
}

Boolean UNIX_FibrePort::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_FibrePort::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FibrePort::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FibrePort::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FibrePort::validateInstance()
{
	return true;
}

