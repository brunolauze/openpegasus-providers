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


UNIX_PCIeSwitch::UNIX_PCIeSwitch(void)
{
}

UNIX_PCIeSwitch::~UNIX_PCIeSwitch(void)
{
}

Boolean UNIX_PCIeSwitch::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_PCIeSwitch::getInstanceID() const
{
	return _instanceID;
}

void UNIX_PCIeSwitch::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_PCIeSwitch::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_PCIeSwitch::getCaption() const
{
	return _caption;
}

void UNIX_PCIeSwitch::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_PCIeSwitch::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_PCIeSwitch::getDescription() const
{
	return _description;
}

void UNIX_PCIeSwitch::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_PCIeSwitch::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_PCIeSwitch::getElementName() const
{
	return _elementName;
}

void UNIX_PCIeSwitch::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_PCIeSwitch::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_PCIeSwitch::getGeneration() const
{
	return _generation;
}

void UNIX_PCIeSwitch::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_PCIeSwitch::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_PCIeSwitch::getInstallDate() const
{
	return _installDate;
}

void UNIX_PCIeSwitch::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_PCIeSwitch::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_PCIeSwitch::getName() const
{
	return _name;
}

void UNIX_PCIeSwitch::setName(String &value)
{
	_name = value;
}

Boolean UNIX_PCIeSwitch::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_PCIeSwitch::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_PCIeSwitch::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_PCIeSwitch::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_PCIeSwitch::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_PCIeSwitch::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_PCIeSwitch::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_PCIeSwitch::getStatus() const
{
	return _status;
}

void UNIX_PCIeSwitch::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_PCIeSwitch::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_PCIeSwitch::getHealthState() const
{
	return _healthState;
}

void UNIX_PCIeSwitch::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_PCIeSwitch::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_PCIeSwitch::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_PCIeSwitch::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_PCIeSwitch::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_PCIeSwitch::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_PCIeSwitch::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_PCIeSwitch::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_PCIeSwitch::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_PCIeSwitch::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_PCIeSwitch::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_PCIeSwitch::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_PCIeSwitch::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_PCIeSwitch::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_PCIeSwitch::getEnabledState() const
{
	return _enabledState;
}

void UNIX_PCIeSwitch::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_PCIeSwitch::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_PCIeSwitch::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_PCIeSwitch::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_PCIeSwitch::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_PCIeSwitch::getRequestedState() const
{
	return _requestedState;
}

void UNIX_PCIeSwitch::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_PCIeSwitch::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_PCIeSwitch::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_PCIeSwitch::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_PCIeSwitch::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_PCIeSwitch::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_PCIeSwitch::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_PCIeSwitch::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_PCIeSwitch::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_PCIeSwitch::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_PCIeSwitch::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_PCIeSwitch::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_PCIeSwitch::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_PCIeSwitch::getAllocationState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOCATION_STATE, getAllocationState());
	return true;
}

String UNIX_PCIeSwitch::getAllocationState() const
{
	return _allocationState;
}

void UNIX_PCIeSwitch::setAllocationState(String &value)
{
	_allocationState = value;
}

Boolean UNIX_PCIeSwitch::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_PCIeSwitch::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_PCIeSwitch::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_PCIeSwitch::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_PCIeSwitch::getSystemName() const
{
	return _systemName;
}

void UNIX_PCIeSwitch::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_PCIeSwitch::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_PCIeSwitch::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_PCIeSwitch::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_PCIeSwitch::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_PCIeSwitch::getDeviceID() const
{
	return _deviceID;
}

void UNIX_PCIeSwitch::setDeviceID(String &value)
{
	_deviceID = value;
}

Boolean UNIX_PCIeSwitch::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_PCIeSwitch::getPowerManagementSupported() const
{
	return _powerManagementSupported;
}

void UNIX_PCIeSwitch::setPowerManagementSupported(Boolean &value)
{
	_powerManagementSupported = value;
}

Boolean UNIX_PCIeSwitch::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_PCIeSwitch::getPowerManagementCapabilities() const
{
	return _powerManagementCapabilities;
}

void UNIX_PCIeSwitch::setPowerManagementCapabilities(Array<Uint16> &value)
{
	_powerManagementCapabilities = value;
}

Boolean UNIX_PCIeSwitch::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_PCIeSwitch::getAvailability() const
{
	return _availability;
}

void UNIX_PCIeSwitch::setAvailability(Uint16 &value)
{
	_availability = value;
}

Boolean UNIX_PCIeSwitch::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_PCIeSwitch::getStatusInfo() const
{
	return _statusInfo;
}

void UNIX_PCIeSwitch::setStatusInfo(Uint16 &value)
{
	_statusInfo = value;
}

Boolean UNIX_PCIeSwitch::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_PCIeSwitch::getLastErrorCode() const
{
	return _lastErrorCode;
}

void UNIX_PCIeSwitch::setLastErrorCode(Uint32 &value)
{
	_lastErrorCode = value;
}

Boolean UNIX_PCIeSwitch::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_PCIeSwitch::getErrorDescription() const
{
	return _errorDescription;
}

void UNIX_PCIeSwitch::setErrorDescription(String &value)
{
	_errorDescription = value;
}

Boolean UNIX_PCIeSwitch::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_PCIeSwitch::getErrorCleared() const
{
	return _errorCleared;
}

void UNIX_PCIeSwitch::setErrorCleared(Boolean &value)
{
	_errorCleared = value;
}

Boolean UNIX_PCIeSwitch::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_PCIeSwitch::getOtherIdentifyingInfo() const
{
	return _otherIdentifyingInfo;
}

void UNIX_PCIeSwitch::setOtherIdentifyingInfo(Array<String> &value)
{
	_otherIdentifyingInfo = value;
}

Boolean UNIX_PCIeSwitch::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_PCIeSwitch::getPowerOnHours() const
{
	return _powerOnHours;
}

void UNIX_PCIeSwitch::setPowerOnHours(Uint64 &value)
{
	_powerOnHours = value;
}

Boolean UNIX_PCIeSwitch::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_PCIeSwitch::getTotalPowerOnHours() const
{
	return _totalPowerOnHours;
}

void UNIX_PCIeSwitch::setTotalPowerOnHours(Uint64 &value)
{
	_totalPowerOnHours = value;
}

Boolean UNIX_PCIeSwitch::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_PCIeSwitch::getIdentifyingDescriptions() const
{
	return _identifyingDescriptions;
}

void UNIX_PCIeSwitch::setIdentifyingDescriptions(Array<String> &value)
{
	_identifyingDescriptions = value;
}

Boolean UNIX_PCIeSwitch::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_PCIeSwitch::getAdditionalAvailability() const
{
	return _additionalAvailability;
}

void UNIX_PCIeSwitch::setAdditionalAvailability(Array<Uint16> &value)
{
	_additionalAvailability = value;
}

Boolean UNIX_PCIeSwitch::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_PCIeSwitch::getMaxQuiesceTime() const
{
	return _maxQuiesceTime;
}

void UNIX_PCIeSwitch::setMaxQuiesceTime(Uint64 &value)
{
	_maxQuiesceTime = value;
}

Boolean UNIX_PCIeSwitch::getLocationIndicator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCATION_INDICATOR, getLocationIndicator());
	return true;
}

Uint16 UNIX_PCIeSwitch::getLocationIndicator() const
{
	return _locationIndicator;
}

void UNIX_PCIeSwitch::setLocationIndicator(Uint16 &value)
{
	_locationIndicator = value;
}

Boolean UNIX_PCIeSwitch::getTimeOfLastReset(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_RESET, getTimeOfLastReset());
	return true;
}

CIMDateTime UNIX_PCIeSwitch::getTimeOfLastReset() const
{
	return _timeOfLastReset;
}

void UNIX_PCIeSwitch::setTimeOfLastReset(CIMDateTime &value)
{
	_timeOfLastReset = value;
}

Boolean UNIX_PCIeSwitch::getProtocolSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_SUPPORTED, getProtocolSupported());
	return true;
}

Uint16 UNIX_PCIeSwitch::getProtocolSupported() const
{
	return _protocolSupported;
}

void UNIX_PCIeSwitch::setProtocolSupported(Uint16 &value)
{
	_protocolSupported = value;
}

Boolean UNIX_PCIeSwitch::getMaxNumberControlled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_NUMBER_CONTROLLED, getMaxNumberControlled());
	return true;
}

Uint32 UNIX_PCIeSwitch::getMaxNumberControlled() const
{
	return _maxNumberControlled;
}

void UNIX_PCIeSwitch::setMaxNumberControlled(Uint32 &value)
{
	_maxNumberControlled = value;
}

Boolean UNIX_PCIeSwitch::getProtocolDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_DESCRIPTION, getProtocolDescription());
	return true;
}

String UNIX_PCIeSwitch::getProtocolDescription() const
{
	return _protocolDescription;
}

void UNIX_PCIeSwitch::setProtocolDescription(String &value)
{
	_protocolDescription = value;
}

Boolean UNIX_PCIeSwitch::getCommandRegister(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMAND_REGISTER, getCommandRegister());
	return true;
}

Uint16 UNIX_PCIeSwitch::getCommandRegister() const
{
	return _commandRegister;
}

void UNIX_PCIeSwitch::setCommandRegister(Uint16 &value)
{
	_commandRegister = value;
}

Boolean UNIX_PCIeSwitch::getCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITIES, getCapabilities());
	return true;
}

Array<Uint16> UNIX_PCIeSwitch::getCapabilities() const
{
	return _capabilities;
}

void UNIX_PCIeSwitch::setCapabilities(Array<Uint16> &value)
{
	_capabilities = value;
}

Boolean UNIX_PCIeSwitch::getCapabilityDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITY_DESCRIPTIONS, getCapabilityDescriptions());
	return true;
}

Array<String> UNIX_PCIeSwitch::getCapabilityDescriptions() const
{
	return _capabilityDescriptions;
}

void UNIX_PCIeSwitch::setCapabilityDescriptions(Array<String> &value)
{
	_capabilityDescriptions = value;
}

Boolean UNIX_PCIeSwitch::getDeviceSelectTiming(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_SELECT_TIMING, getDeviceSelectTiming());
	return true;
}

Uint16 UNIX_PCIeSwitch::getDeviceSelectTiming() const
{
	return _deviceSelectTiming;
}

void UNIX_PCIeSwitch::setDeviceSelectTiming(Uint16 &value)
{
	_deviceSelectTiming = value;
}

Boolean UNIX_PCIeSwitch::getClassCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASS_CODE, getClassCode());
	return true;
}

Uint8 UNIX_PCIeSwitch::getClassCode() const
{
	return _classCode;
}

void UNIX_PCIeSwitch::setClassCode(Uint8 &value)
{
	_classCode = value;
}

Boolean UNIX_PCIeSwitch::getCacheLineSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CACHE_LINE_SIZE, getCacheLineSize());
	return true;
}

Uint8 UNIX_PCIeSwitch::getCacheLineSize() const
{
	return _cacheLineSize;
}

void UNIX_PCIeSwitch::setCacheLineSize(Uint8 &value)
{
	_cacheLineSize = value;
}

Boolean UNIX_PCIeSwitch::getLatencyTimer(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LATENCY_TIMER, getLatencyTimer());
	return true;
}

Uint8 UNIX_PCIeSwitch::getLatencyTimer() const
{
	return _latencyTimer;
}

void UNIX_PCIeSwitch::setLatencyTimer(Uint8 &value)
{
	_latencyTimer = value;
}

Boolean UNIX_PCIeSwitch::getInterruptPin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INTERRUPT_PIN, getInterruptPin());
	return true;
}

Uint16 UNIX_PCIeSwitch::getInterruptPin() const
{
	return _interruptPin;
}

void UNIX_PCIeSwitch::setInterruptPin(Uint16 &value)
{
	_interruptPin = value;
}

Boolean UNIX_PCIeSwitch::getExpansionROMBaseAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXPANSION_R_O_M_BASE_ADDRESS, getExpansionROMBaseAddress());
	return true;
}

Uint32 UNIX_PCIeSwitch::getExpansionROMBaseAddress() const
{
	return _expansionROMBaseAddress;
}

void UNIX_PCIeSwitch::setExpansionROMBaseAddress(Uint32 &value)
{
	_expansionROMBaseAddress = value;
}

Boolean UNIX_PCIeSwitch::getSelfTestEnabled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SELF_TEST_ENABLED, getSelfTestEnabled());
	return true;
}

Boolean UNIX_PCIeSwitch::getSelfTestEnabled() const
{
	return _selfTestEnabled;
}

void UNIX_PCIeSwitch::setSelfTestEnabled(Boolean &value)
{
	_selfTestEnabled = value;
}

Boolean UNIX_PCIeSwitch::getBaseAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BASE_ADDRESS, getBaseAddress());
	return true;
}

Array<Uint32> UNIX_PCIeSwitch::getBaseAddress() const
{
	return _baseAddress;
}

void UNIX_PCIeSwitch::setBaseAddress(Array<Uint32> &value)
{
	_baseAddress = value;
}

Boolean UNIX_PCIeSwitch::getSubsystemID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUBSYSTEM_ID, getSubsystemID());
	return true;
}

Uint16 UNIX_PCIeSwitch::getSubsystemID() const
{
	return _subsystemID;
}

void UNIX_PCIeSwitch::setSubsystemID(Uint16 &value)
{
	_subsystemID = value;
}

Boolean UNIX_PCIeSwitch::getSubsystemVendorID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUBSYSTEM_VENDOR_ID, getSubsystemVendorID());
	return true;
}

Uint16 UNIX_PCIeSwitch::getSubsystemVendorID() const
{
	return _subsystemVendorID;
}

void UNIX_PCIeSwitch::setSubsystemVendorID(Uint16 &value)
{
	_subsystemVendorID = value;
}

Boolean UNIX_PCIeSwitch::getMinGrantTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIN_GRANT_TIME, getMinGrantTime());
	return true;
}

Uint8 UNIX_PCIeSwitch::getMinGrantTime() const
{
	return _minGrantTime;
}

void UNIX_PCIeSwitch::setMinGrantTime(Uint8 &value)
{
	_minGrantTime = value;
}

Boolean UNIX_PCIeSwitch::getMaxLatency(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_LATENCY, getMaxLatency());
	return true;
}

Uint8 UNIX_PCIeSwitch::getMaxLatency() const
{
	return _maxLatency;
}

void UNIX_PCIeSwitch::setMaxLatency(Uint8 &value)
{
	_maxLatency = value;
}

Boolean UNIX_PCIeSwitch::getBusNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BUS_NUMBER, getBusNumber());
	return true;
}

Uint8 UNIX_PCIeSwitch::getBusNumber() const
{
	return _busNumber;
}

void UNIX_PCIeSwitch::setBusNumber(Uint8 &value)
{
	_busNumber = value;
}

Boolean UNIX_PCIeSwitch::getDeviceNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_NUMBER, getDeviceNumber());
	return true;
}

Uint8 UNIX_PCIeSwitch::getDeviceNumber() const
{
	return _deviceNumber;
}

void UNIX_PCIeSwitch::setDeviceNumber(Uint8 &value)
{
	_deviceNumber = value;
}

Boolean UNIX_PCIeSwitch::getFunctionNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FUNCTION_NUMBER, getFunctionNumber());
	return true;
}

Uint8 UNIX_PCIeSwitch::getFunctionNumber() const
{
	return _functionNumber;
}

void UNIX_PCIeSwitch::setFunctionNumber(Uint8 &value)
{
	_functionNumber = value;
}

Boolean UNIX_PCIeSwitch::getPCIDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PCIDEVICE_ID, getPCIDeviceID());
	return true;
}

Uint16 UNIX_PCIeSwitch::getPCIDeviceID() const
{
	return _pCIDeviceID;
}

void UNIX_PCIeSwitch::setPCIDeviceID(Uint16 &value)
{
	_pCIDeviceID = value;
}

Boolean UNIX_PCIeSwitch::getVendorID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR_ID, getVendorID());
	return true;
}

Uint16 UNIX_PCIeSwitch::getVendorID() const
{
	return _vendorID;
}

void UNIX_PCIeSwitch::setVendorID(Uint16 &value)
{
	_vendorID = value;
}

Boolean UNIX_PCIeSwitch::getRevisionID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REVISION_ID, getRevisionID());
	return true;
}

Uint8 UNIX_PCIeSwitch::getRevisionID() const
{
	return _revisionID;
}

void UNIX_PCIeSwitch::setRevisionID(Uint8 &value)
{
	_revisionID = value;
}

Boolean UNIX_PCIeSwitch::getBaseAddress64(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BASE_ADDRESS_6_4, getBaseAddress64());
	return true;
}

Array<Uint64> UNIX_PCIeSwitch::getBaseAddress64() const
{
	return _baseAddress64;
}

void UNIX_PCIeSwitch::setBaseAddress64(Array<Uint64> &value)
{
	_baseAddress64 = value;
}

Boolean UNIX_PCIeSwitch::getNumberOfPorts(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_PORTS, getNumberOfPorts());
	return true;
}

Uint16 UNIX_PCIeSwitch::getNumberOfPorts() const
{
	return _numberOfPorts;
}

void UNIX_PCIeSwitch::setNumberOfPorts(Uint16 &value)
{
	_numberOfPorts = value;
}

Boolean UNIX_PCIeSwitch::getSecondaryBusNumbers(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SECONDARY_BUS_NUMBERS, getSecondaryBusNumbers());
	return true;
}

Array<Uint8> UNIX_PCIeSwitch::getSecondaryBusNumbers() const
{
	return _secondaryBusNumbers;
}

void UNIX_PCIeSwitch::setSecondaryBusNumbers(Array<Uint8> &value)
{
	_secondaryBusNumbers = value;
}


void UNIX_PCIeSwitch::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PCIeSwitch");
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
	_creationClassName = String("UNIX_PCIeSwitch");
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
	_timeOfLastReset = CIMHelper::getCurrentTime();
	_protocolSupported = Uint16(0);
	_maxNumberControlled = Uint32(0);
	_protocolDescription = String ("");
	_commandRegister = Uint16(0);
	_capabilities.clear();
	_capabilityDescriptions.clear();
	_deviceSelectTiming = Uint16(0);
	_classCode = Uint8(0);
	_cacheLineSize = Uint8(0);
	_latencyTimer = Uint8(0);
	_interruptPin = Uint16(0);
	_expansionROMBaseAddress = Uint32(0);
	_selfTestEnabled = Boolean(false);
	_baseAddress.clear();
	_subsystemID = Uint16(0);
	_subsystemVendorID = Uint16(0);
	_minGrantTime = Uint8(0);
	_maxLatency = Uint8(0);
	_busNumber = Uint8(0);
	_deviceNumber = Uint8(0);
	_functionNumber = Uint8(0);
	_pCIDeviceID = Uint16(0);
	_vendorID = Uint16(0);
	_revisionID = Uint8(0);
	_baseAddress64.clear();
	_numberOfPorts = Uint16(0);
	_secondaryBusNumbers.clear();

}

Boolean UNIX_PCIeSwitch::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "TimeOfLastReset"))
			{
				CIMDateTime timeOfLastResetValue;
				property.getValue().get(timeOfLastResetValue);
				setTimeOfLastReset(timeOfLastResetValue);
			}
			else if (String::equal(property.getName().getString(), "ProtocolSupported"))
			{
				Uint16 protocolSupportedValue;
				property.getValue().get(protocolSupportedValue);
				setProtocolSupported(protocolSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "MaxNumberControlled"))
			{
				Uint32 maxNumberControlledValue;
				property.getValue().get(maxNumberControlledValue);
				setMaxNumberControlled(maxNumberControlledValue);
			}
			else if (String::equal(property.getName().getString(), "ProtocolDescription"))
			{
				String protocolDescriptionValue;
				property.getValue().get(protocolDescriptionValue);
				setProtocolDescription(protocolDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "CommandRegister"))
			{
				Uint16 commandRegisterValue;
				property.getValue().get(commandRegisterValue);
				setCommandRegister(commandRegisterValue);
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
			else if (String::equal(property.getName().getString(), "DeviceSelectTiming"))
			{
				Uint16 deviceSelectTimingValue;
				property.getValue().get(deviceSelectTimingValue);
				setDeviceSelectTiming(deviceSelectTimingValue);
			}
			else if (String::equal(property.getName().getString(), "ClassCode"))
			{
				Uint8 classCodeValue;
				property.getValue().get(classCodeValue);
				setClassCode(classCodeValue);
			}
			else if (String::equal(property.getName().getString(), "CacheLineSize"))
			{
				Uint8 cacheLineSizeValue;
				property.getValue().get(cacheLineSizeValue);
				setCacheLineSize(cacheLineSizeValue);
			}
			else if (String::equal(property.getName().getString(), "LatencyTimer"))
			{
				Uint8 latencyTimerValue;
				property.getValue().get(latencyTimerValue);
				setLatencyTimer(latencyTimerValue);
			}
			else if (String::equal(property.getName().getString(), "InterruptPin"))
			{
				Uint16 interruptPinValue;
				property.getValue().get(interruptPinValue);
				setInterruptPin(interruptPinValue);
			}
			else if (String::equal(property.getName().getString(), "ExpansionROMBaseAddress"))
			{
				Uint32 expansionROMBaseAddressValue;
				property.getValue().get(expansionROMBaseAddressValue);
				setExpansionROMBaseAddress(expansionROMBaseAddressValue);
			}
			else if (String::equal(property.getName().getString(), "SelfTestEnabled"))
			{
				Boolean selfTestEnabledValue;
				property.getValue().get(selfTestEnabledValue);
				setSelfTestEnabled(selfTestEnabledValue);
			}
			else if (String::equal(property.getName().getString(), "BaseAddress"))
			{
				Array<Uint32> baseAddressValue;
				property.getValue().get(baseAddressValue);
				setBaseAddress(baseAddressValue);
			}
			else if (String::equal(property.getName().getString(), "SubsystemID"))
			{
				Uint16 subsystemIDValue;
				property.getValue().get(subsystemIDValue);
				setSubsystemID(subsystemIDValue);
			}
			else if (String::equal(property.getName().getString(), "SubsystemVendorID"))
			{
				Uint16 subsystemVendorIDValue;
				property.getValue().get(subsystemVendorIDValue);
				setSubsystemVendorID(subsystemVendorIDValue);
			}
			else if (String::equal(property.getName().getString(), "MinGrantTime"))
			{
				Uint8 minGrantTimeValue;
				property.getValue().get(minGrantTimeValue);
				setMinGrantTime(minGrantTimeValue);
			}
			else if (String::equal(property.getName().getString(), "MaxLatency"))
			{
				Uint8 maxLatencyValue;
				property.getValue().get(maxLatencyValue);
				setMaxLatency(maxLatencyValue);
			}
			else if (String::equal(property.getName().getString(), "BusNumber"))
			{
				Uint8 busNumberValue;
				property.getValue().get(busNumberValue);
				setBusNumber(busNumberValue);
			}
			else if (String::equal(property.getName().getString(), "DeviceNumber"))
			{
				Uint8 deviceNumberValue;
				property.getValue().get(deviceNumberValue);
				setDeviceNumber(deviceNumberValue);
			}
			else if (String::equal(property.getName().getString(), "FunctionNumber"))
			{
				Uint8 functionNumberValue;
				property.getValue().get(functionNumberValue);
				setFunctionNumber(functionNumberValue);
			}
			else if (String::equal(property.getName().getString(), "PCIDeviceID"))
			{
				Uint16 pCIDeviceIDValue;
				property.getValue().get(pCIDeviceIDValue);
				setPCIDeviceID(pCIDeviceIDValue);
			}
			else if (String::equal(property.getName().getString(), "VendorID"))
			{
				Uint16 vendorIDValue;
				property.getValue().get(vendorIDValue);
				setVendorID(vendorIDValue);
			}
			else if (String::equal(property.getName().getString(), "RevisionID"))
			{
				Uint8 revisionIDValue;
				property.getValue().get(revisionIDValue);
				setRevisionID(revisionIDValue);
			}
			else if (String::equal(property.getName().getString(), "BaseAddress64"))
			{
				Array<Uint64> baseAddress64Value;
				property.getValue().get(baseAddress64Value);
				setBaseAddress64(baseAddress64Value);
			}
			else if (String::equal(property.getName().getString(), "NumberOfPorts"))
			{
				Uint16 numberOfPortsValue;
				property.getValue().get(numberOfPortsValue);
				setNumberOfPorts(numberOfPortsValue);
			}
			else if (String::equal(property.getName().getString(), "SecondaryBusNumbers"))
			{
				Array<Uint8> secondaryBusNumbersValue;
				property.getValue().get(secondaryBusNumbersValue);
				setSecondaryBusNumbers(secondaryBusNumbersValue);
			}
	}
	return true;
}

Uint32 UNIX_PCIeSwitch::invokeRequestStateChange(
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

Uint32 UNIX_PCIeSwitch::invokeSetPowerState(
		Uint16 &inPowerState,
		CIMDateTime &inTime
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SetPowerState */
	
	
	
	return returnValue;
}

Uint32 UNIX_PCIeSwitch::invokeReset()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method Reset */
	
	
	
	return returnValue;
}

Uint32 UNIX_PCIeSwitch::invokeEnableDevice(
		Boolean &inEnabled
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method EnableDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_PCIeSwitch::invokeOnlineDevice(
		Boolean &inOnline
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method OnlineDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_PCIeSwitch::invokeQuiesceDevice(
		Boolean &inQuiesce
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method QuiesceDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_PCIeSwitch::invokeSaveProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SaveProperties */
	
	
	
	return returnValue;
}

Uint32 UNIX_PCIeSwitch::invokeRestoreProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method RestoreProperties */
	
	
	
	return returnValue;
}

Uint8 UNIX_PCIeSwitch::invokeBISTExecution()
{
	Uint8 returnValue = Uint8(0);
	
	/* Execute method BISTExecution */
	
	
	
	return returnValue;
}


Boolean UNIX_PCIeSwitch::initialize()
{
	return false;
}

Boolean UNIX_PCIeSwitch::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PCIeSwitch");
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
	_creationClassName = String("UNIX_PCIeSwitch");
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
	_timeOfLastReset = CIMHelper::getCurrentTime();
	_protocolSupported = Uint16(0);
	_maxNumberControlled = Uint32(0);
	_protocolDescription = String ("");
	_commandRegister = Uint16(0);
	_capabilities.clear();
	_capabilityDescriptions.clear();
	_deviceSelectTiming = Uint16(0);
	_classCode = Uint8(0);
	_cacheLineSize = Uint8(0);
	_latencyTimer = Uint8(0);
	_interruptPin = Uint16(0);
	_expansionROMBaseAddress = Uint32(0);
	_selfTestEnabled = Boolean(false);
	_baseAddress.clear();
	_subsystemID = Uint16(0);
	_subsystemVendorID = Uint16(0);
	_minGrantTime = Uint8(0);
	_maxLatency = Uint8(0);
	_busNumber = Uint8(0);
	_deviceNumber = Uint8(0);
	_functionNumber = Uint8(0);
	_pCIDeviceID = Uint16(0);
	_vendorID = Uint16(0);
	_revisionID = Uint8(0);
	_baseAddress64.clear();
	_numberOfPorts = Uint16(0);
	_secondaryBusNumbers.clear();
	
	return false;
}

Boolean UNIX_PCIeSwitch::finalize()
{
	return false;
}

Boolean UNIX_PCIeSwitch::loadByName(const String name)
{
	return false;
}

Boolean UNIX_PCIeSwitch::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_PCIeSwitch::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PCIeSwitch::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PCIeSwitch::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PCIeSwitch::validateInstance()
{
	return true;
}

