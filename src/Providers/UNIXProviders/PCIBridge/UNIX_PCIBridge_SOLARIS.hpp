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


UNIX_PCIBridge::UNIX_PCIBridge(void)
{
}

UNIX_PCIBridge::~UNIX_PCIBridge(void)
{
}

Boolean UNIX_PCIBridge::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_PCIBridge::getInstanceID() const
{
	return _instanceID;
}

void UNIX_PCIBridge::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_PCIBridge::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_PCIBridge::getCaption() const
{
	return _caption;
}

void UNIX_PCIBridge::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_PCIBridge::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_PCIBridge::getDescription() const
{
	return _description;
}

void UNIX_PCIBridge::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_PCIBridge::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_PCIBridge::getElementName() const
{
	return _elementName;
}

void UNIX_PCIBridge::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_PCIBridge::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_PCIBridge::getGeneration() const
{
	return _generation;
}

void UNIX_PCIBridge::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_PCIBridge::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_PCIBridge::getInstallDate() const
{
	return _installDate;
}

void UNIX_PCIBridge::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_PCIBridge::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_PCIBridge::getName() const
{
	return _name;
}

void UNIX_PCIBridge::setName(String &value)
{
	_name = value;
}

Boolean UNIX_PCIBridge::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_PCIBridge::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_PCIBridge::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_PCIBridge::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_PCIBridge::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_PCIBridge::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_PCIBridge::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_PCIBridge::getStatus() const
{
	return _status;
}

void UNIX_PCIBridge::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_PCIBridge::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_PCIBridge::getHealthState() const
{
	return _healthState;
}

void UNIX_PCIBridge::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_PCIBridge::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_PCIBridge::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_PCIBridge::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_PCIBridge::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_PCIBridge::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_PCIBridge::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_PCIBridge::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_PCIBridge::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_PCIBridge::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_PCIBridge::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_PCIBridge::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_PCIBridge::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_PCIBridge::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_PCIBridge::getEnabledState() const
{
	return _enabledState;
}

void UNIX_PCIBridge::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_PCIBridge::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_PCIBridge::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_PCIBridge::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_PCIBridge::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_PCIBridge::getRequestedState() const
{
	return _requestedState;
}

void UNIX_PCIBridge::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_PCIBridge::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_PCIBridge::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_PCIBridge::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_PCIBridge::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_PCIBridge::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_PCIBridge::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_PCIBridge::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_PCIBridge::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_PCIBridge::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_PCIBridge::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_PCIBridge::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_PCIBridge::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_PCIBridge::getAllocationState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOCATION_STATE, getAllocationState());
	return true;
}

String UNIX_PCIBridge::getAllocationState() const
{
	return _allocationState;
}

void UNIX_PCIBridge::setAllocationState(String &value)
{
	_allocationState = value;
}

Boolean UNIX_PCIBridge::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_PCIBridge::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_PCIBridge::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_PCIBridge::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_PCIBridge::getSystemName() const
{
	return _systemName;
}

void UNIX_PCIBridge::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_PCIBridge::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_PCIBridge::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_PCIBridge::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_PCIBridge::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_PCIBridge::getDeviceID() const
{
	return _deviceID;
}

void UNIX_PCIBridge::setDeviceID(String &value)
{
	_deviceID = value;
}

Boolean UNIX_PCIBridge::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_PCIBridge::getPowerManagementSupported() const
{
	return _powerManagementSupported;
}

void UNIX_PCIBridge::setPowerManagementSupported(Boolean &value)
{
	_powerManagementSupported = value;
}

Boolean UNIX_PCIBridge::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_PCIBridge::getPowerManagementCapabilities() const
{
	return _powerManagementCapabilities;
}

void UNIX_PCIBridge::setPowerManagementCapabilities(Array<Uint16> &value)
{
	_powerManagementCapabilities = value;
}

Boolean UNIX_PCIBridge::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_PCIBridge::getAvailability() const
{
	return _availability;
}

void UNIX_PCIBridge::setAvailability(Uint16 &value)
{
	_availability = value;
}

Boolean UNIX_PCIBridge::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_PCIBridge::getStatusInfo() const
{
	return _statusInfo;
}

void UNIX_PCIBridge::setStatusInfo(Uint16 &value)
{
	_statusInfo = value;
}

Boolean UNIX_PCIBridge::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_PCIBridge::getLastErrorCode() const
{
	return _lastErrorCode;
}

void UNIX_PCIBridge::setLastErrorCode(Uint32 &value)
{
	_lastErrorCode = value;
}

Boolean UNIX_PCIBridge::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_PCIBridge::getErrorDescription() const
{
	return _errorDescription;
}

void UNIX_PCIBridge::setErrorDescription(String &value)
{
	_errorDescription = value;
}

Boolean UNIX_PCIBridge::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_PCIBridge::getErrorCleared() const
{
	return _errorCleared;
}

void UNIX_PCIBridge::setErrorCleared(Boolean &value)
{
	_errorCleared = value;
}

Boolean UNIX_PCIBridge::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_PCIBridge::getOtherIdentifyingInfo() const
{
	return _otherIdentifyingInfo;
}

void UNIX_PCIBridge::setOtherIdentifyingInfo(Array<String> &value)
{
	_otherIdentifyingInfo = value;
}

Boolean UNIX_PCIBridge::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_PCIBridge::getPowerOnHours() const
{
	return _powerOnHours;
}

void UNIX_PCIBridge::setPowerOnHours(Uint64 &value)
{
	_powerOnHours = value;
}

Boolean UNIX_PCIBridge::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_PCIBridge::getTotalPowerOnHours() const
{
	return _totalPowerOnHours;
}

void UNIX_PCIBridge::setTotalPowerOnHours(Uint64 &value)
{
	_totalPowerOnHours = value;
}

Boolean UNIX_PCIBridge::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_PCIBridge::getIdentifyingDescriptions() const
{
	return _identifyingDescriptions;
}

void UNIX_PCIBridge::setIdentifyingDescriptions(Array<String> &value)
{
	_identifyingDescriptions = value;
}

Boolean UNIX_PCIBridge::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_PCIBridge::getAdditionalAvailability() const
{
	return _additionalAvailability;
}

void UNIX_PCIBridge::setAdditionalAvailability(Array<Uint16> &value)
{
	_additionalAvailability = value;
}

Boolean UNIX_PCIBridge::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_PCIBridge::getMaxQuiesceTime() const
{
	return _maxQuiesceTime;
}

void UNIX_PCIBridge::setMaxQuiesceTime(Uint64 &value)
{
	_maxQuiesceTime = value;
}

Boolean UNIX_PCIBridge::getLocationIndicator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCATION_INDICATOR, getLocationIndicator());
	return true;
}

Uint16 UNIX_PCIBridge::getLocationIndicator() const
{
	return _locationIndicator;
}

void UNIX_PCIBridge::setLocationIndicator(Uint16 &value)
{
	_locationIndicator = value;
}

Boolean UNIX_PCIBridge::getTimeOfLastReset(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_RESET, getTimeOfLastReset());
	return true;
}

CIMDateTime UNIX_PCIBridge::getTimeOfLastReset() const
{
	return _timeOfLastReset;
}

void UNIX_PCIBridge::setTimeOfLastReset(CIMDateTime &value)
{
	_timeOfLastReset = value;
}

Boolean UNIX_PCIBridge::getProtocolSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_SUPPORTED, getProtocolSupported());
	return true;
}

Uint16 UNIX_PCIBridge::getProtocolSupported() const
{
	return _protocolSupported;
}

void UNIX_PCIBridge::setProtocolSupported(Uint16 &value)
{
	_protocolSupported = value;
}

Boolean UNIX_PCIBridge::getMaxNumberControlled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_NUMBER_CONTROLLED, getMaxNumberControlled());
	return true;
}

Uint32 UNIX_PCIBridge::getMaxNumberControlled() const
{
	return _maxNumberControlled;
}

void UNIX_PCIBridge::setMaxNumberControlled(Uint32 &value)
{
	_maxNumberControlled = value;
}

Boolean UNIX_PCIBridge::getProtocolDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_DESCRIPTION, getProtocolDescription());
	return true;
}

String UNIX_PCIBridge::getProtocolDescription() const
{
	return _protocolDescription;
}

void UNIX_PCIBridge::setProtocolDescription(String &value)
{
	_protocolDescription = value;
}

Boolean UNIX_PCIBridge::getCommandRegister(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMAND_REGISTER, getCommandRegister());
	return true;
}

Uint16 UNIX_PCIBridge::getCommandRegister() const
{
	return _commandRegister;
}

void UNIX_PCIBridge::setCommandRegister(Uint16 &value)
{
	_commandRegister = value;
}

Boolean UNIX_PCIBridge::getCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITIES, getCapabilities());
	return true;
}

Array<Uint16> UNIX_PCIBridge::getCapabilities() const
{
	return _capabilities;
}

void UNIX_PCIBridge::setCapabilities(Array<Uint16> &value)
{
	_capabilities = value;
}

Boolean UNIX_PCIBridge::getCapabilityDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITY_DESCRIPTIONS, getCapabilityDescriptions());
	return true;
}

Array<String> UNIX_PCIBridge::getCapabilityDescriptions() const
{
	return _capabilityDescriptions;
}

void UNIX_PCIBridge::setCapabilityDescriptions(Array<String> &value)
{
	_capabilityDescriptions = value;
}

Boolean UNIX_PCIBridge::getDeviceSelectTiming(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_SELECT_TIMING, getDeviceSelectTiming());
	return true;
}

Uint16 UNIX_PCIBridge::getDeviceSelectTiming() const
{
	return _deviceSelectTiming;
}

void UNIX_PCIBridge::setDeviceSelectTiming(Uint16 &value)
{
	_deviceSelectTiming = value;
}

Boolean UNIX_PCIBridge::getClassCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASS_CODE, getClassCode());
	return true;
}

Uint8 UNIX_PCIBridge::getClassCode() const
{
	return _classCode;
}

void UNIX_PCIBridge::setClassCode(Uint8 &value)
{
	_classCode = value;
}

Boolean UNIX_PCIBridge::getCacheLineSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CACHE_LINE_SIZE, getCacheLineSize());
	return true;
}

Uint8 UNIX_PCIBridge::getCacheLineSize() const
{
	return _cacheLineSize;
}

void UNIX_PCIBridge::setCacheLineSize(Uint8 &value)
{
	_cacheLineSize = value;
}

Boolean UNIX_PCIBridge::getLatencyTimer(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LATENCY_TIMER, getLatencyTimer());
	return true;
}

Uint8 UNIX_PCIBridge::getLatencyTimer() const
{
	return _latencyTimer;
}

void UNIX_PCIBridge::setLatencyTimer(Uint8 &value)
{
	_latencyTimer = value;
}

Boolean UNIX_PCIBridge::getInterruptPin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INTERRUPT_PIN, getInterruptPin());
	return true;
}

Uint16 UNIX_PCIBridge::getInterruptPin() const
{
	return _interruptPin;
}

void UNIX_PCIBridge::setInterruptPin(Uint16 &value)
{
	_interruptPin = value;
}

Boolean UNIX_PCIBridge::getExpansionROMBaseAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXPANSION_R_O_M_BASE_ADDRESS, getExpansionROMBaseAddress());
	return true;
}

Uint32 UNIX_PCIBridge::getExpansionROMBaseAddress() const
{
	return _expansionROMBaseAddress;
}

void UNIX_PCIBridge::setExpansionROMBaseAddress(Uint32 &value)
{
	_expansionROMBaseAddress = value;
}

Boolean UNIX_PCIBridge::getSelfTestEnabled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SELF_TEST_ENABLED, getSelfTestEnabled());
	return true;
}

Boolean UNIX_PCIBridge::getSelfTestEnabled() const
{
	return _selfTestEnabled;
}

void UNIX_PCIBridge::setSelfTestEnabled(Boolean &value)
{
	_selfTestEnabled = value;
}

Boolean UNIX_PCIBridge::getBaseAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BASE_ADDRESS, getBaseAddress());
	return true;
}

Array<Uint32> UNIX_PCIBridge::getBaseAddress() const
{
	return _baseAddress;
}

void UNIX_PCIBridge::setBaseAddress(Array<Uint32> &value)
{
	_baseAddress = value;
}

Boolean UNIX_PCIBridge::getSubsystemID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUBSYSTEM_ID, getSubsystemID());
	return true;
}

Uint16 UNIX_PCIBridge::getSubsystemID() const
{
	return _subsystemID;
}

void UNIX_PCIBridge::setSubsystemID(Uint16 &value)
{
	_subsystemID = value;
}

Boolean UNIX_PCIBridge::getSubsystemVendorID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUBSYSTEM_VENDOR_ID, getSubsystemVendorID());
	return true;
}

Uint16 UNIX_PCIBridge::getSubsystemVendorID() const
{
	return _subsystemVendorID;
}

void UNIX_PCIBridge::setSubsystemVendorID(Uint16 &value)
{
	_subsystemVendorID = value;
}

Boolean UNIX_PCIBridge::getMinGrantTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIN_GRANT_TIME, getMinGrantTime());
	return true;
}

Uint8 UNIX_PCIBridge::getMinGrantTime() const
{
	return _minGrantTime;
}

void UNIX_PCIBridge::setMinGrantTime(Uint8 &value)
{
	_minGrantTime = value;
}

Boolean UNIX_PCIBridge::getMaxLatency(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_LATENCY, getMaxLatency());
	return true;
}

Uint8 UNIX_PCIBridge::getMaxLatency() const
{
	return _maxLatency;
}

void UNIX_PCIBridge::setMaxLatency(Uint8 &value)
{
	_maxLatency = value;
}

Boolean UNIX_PCIBridge::getBusNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BUS_NUMBER, getBusNumber());
	return true;
}

Uint8 UNIX_PCIBridge::getBusNumber() const
{
	return _busNumber;
}

void UNIX_PCIBridge::setBusNumber(Uint8 &value)
{
	_busNumber = value;
}

Boolean UNIX_PCIBridge::getDeviceNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_NUMBER, getDeviceNumber());
	return true;
}

Uint8 UNIX_PCIBridge::getDeviceNumber() const
{
	return _deviceNumber;
}

void UNIX_PCIBridge::setDeviceNumber(Uint8 &value)
{
	_deviceNumber = value;
}

Boolean UNIX_PCIBridge::getFunctionNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FUNCTION_NUMBER, getFunctionNumber());
	return true;
}

Uint8 UNIX_PCIBridge::getFunctionNumber() const
{
	return _functionNumber;
}

void UNIX_PCIBridge::setFunctionNumber(Uint8 &value)
{
	_functionNumber = value;
}

Boolean UNIX_PCIBridge::getPCIDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PCIDEVICE_ID, getPCIDeviceID());
	return true;
}

Uint16 UNIX_PCIBridge::getPCIDeviceID() const
{
	return _pCIDeviceID;
}

void UNIX_PCIBridge::setPCIDeviceID(Uint16 &value)
{
	_pCIDeviceID = value;
}

Boolean UNIX_PCIBridge::getVendorID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR_ID, getVendorID());
	return true;
}

Uint16 UNIX_PCIBridge::getVendorID() const
{
	return _vendorID;
}

void UNIX_PCIBridge::setVendorID(Uint16 &value)
{
	_vendorID = value;
}

Boolean UNIX_PCIBridge::getRevisionID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REVISION_ID, getRevisionID());
	return true;
}

Uint8 UNIX_PCIBridge::getRevisionID() const
{
	return _revisionID;
}

void UNIX_PCIBridge::setRevisionID(Uint8 &value)
{
	_revisionID = value;
}

Boolean UNIX_PCIBridge::getBaseAddress64(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BASE_ADDRESS_6_4, getBaseAddress64());
	return true;
}

Array<Uint64> UNIX_PCIBridge::getBaseAddress64() const
{
	return _baseAddress64;
}

void UNIX_PCIBridge::setBaseAddress64(Array<Uint64> &value)
{
	_baseAddress64 = value;
}

Boolean UNIX_PCIBridge::getBridgeType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BRIDGE_TYPE, getBridgeType());
	return true;
}

Uint16 UNIX_PCIBridge::getBridgeType() const
{
	return _bridgeType;
}

void UNIX_PCIBridge::setBridgeType(Uint16 &value)
{
	_bridgeType = value;
}

Boolean UNIX_PCIBridge::getSecondaryLatencyTimer(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SECONDARY_LATENCY_TIMER, getSecondaryLatencyTimer());
	return true;
}

Uint8 UNIX_PCIBridge::getSecondaryLatencyTimer() const
{
	return _secondaryLatencyTimer;
}

void UNIX_PCIBridge::setSecondaryLatencyTimer(Uint8 &value)
{
	_secondaryLatencyTimer = value;
}

Boolean UNIX_PCIBridge::getSubordinateBusNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUBORDINATE_BUS_NUMBER, getSubordinateBusNumber());
	return true;
}

Uint8 UNIX_PCIBridge::getSubordinateBusNumber() const
{
	return _subordinateBusNumber;
}

void UNIX_PCIBridge::setSubordinateBusNumber(Uint8 &value)
{
	_subordinateBusNumber = value;
}

Boolean UNIX_PCIBridge::getSecondayBusNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SECONDAY_BUS_NUMBER, getSecondayBusNumber());
	return true;
}

Uint8 UNIX_PCIBridge::getSecondayBusNumber() const
{
	return _secondayBusNumber;
}

void UNIX_PCIBridge::setSecondayBusNumber(Uint8 &value)
{
	_secondayBusNumber = value;
}

Boolean UNIX_PCIBridge::getPrimaryBusNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_BUS_NUMBER, getPrimaryBusNumber());
	return true;
}

Uint8 UNIX_PCIBridge::getPrimaryBusNumber() const
{
	return _primaryBusNumber;
}

void UNIX_PCIBridge::setPrimaryBusNumber(Uint8 &value)
{
	_primaryBusNumber = value;
}

Boolean UNIX_PCIBridge::getSecondaryStatusRegister(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SECONDARY_STATUS_REGISTER, getSecondaryStatusRegister());
	return true;
}

Uint16 UNIX_PCIBridge::getSecondaryStatusRegister() const
{
	return _secondaryStatusRegister;
}

void UNIX_PCIBridge::setSecondaryStatusRegister(Uint16 &value)
{
	_secondaryStatusRegister = value;
}

Boolean UNIX_PCIBridge::getSecondaryBusDeviceSelectTiming(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SECONDARY_BUS_DEVICE_SELECT_TIMING, getSecondaryBusDeviceSelectTiming());
	return true;
}

Uint16 UNIX_PCIBridge::getSecondaryBusDeviceSelectTiming() const
{
	return _secondaryBusDeviceSelectTiming;
}

void UNIX_PCIBridge::setSecondaryBusDeviceSelectTiming(Uint16 &value)
{
	_secondaryBusDeviceSelectTiming = value;
}

Boolean UNIX_PCIBridge::getIOLimit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IO_LIMIT, getIOLimit());
	return true;
}

Uint8 UNIX_PCIBridge::getIOLimit() const
{
	return _iOLimit;
}

void UNIX_PCIBridge::setIOLimit(Uint8 &value)
{
	_iOLimit = value;
}

Boolean UNIX_PCIBridge::getIOBase(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IO_BASE, getIOBase());
	return true;
}

Uint8 UNIX_PCIBridge::getIOBase() const
{
	return _iOBase;
}

void UNIX_PCIBridge::setIOBase(Uint8 &value)
{
	_iOBase = value;
}

Boolean UNIX_PCIBridge::getMemoryLimit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MEMORY_LIMIT, getMemoryLimit());
	return true;
}

Uint16 UNIX_PCIBridge::getMemoryLimit() const
{
	return _memoryLimit;
}

void UNIX_PCIBridge::setMemoryLimit(Uint16 &value)
{
	_memoryLimit = value;
}

Boolean UNIX_PCIBridge::getMemoryBase(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MEMORY_BASE, getMemoryBase());
	return true;
}

Uint16 UNIX_PCIBridge::getMemoryBase() const
{
	return _memoryBase;
}

void UNIX_PCIBridge::setMemoryBase(Uint16 &value)
{
	_memoryBase = value;
}

Boolean UNIX_PCIBridge::getPrefetchMemoryLimit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PREFETCH_MEMORY_LIMIT, getPrefetchMemoryLimit());
	return true;
}

Uint16 UNIX_PCIBridge::getPrefetchMemoryLimit() const
{
	return _prefetchMemoryLimit;
}

void UNIX_PCIBridge::setPrefetchMemoryLimit(Uint16 &value)
{
	_prefetchMemoryLimit = value;
}

Boolean UNIX_PCIBridge::getPrefetchMemoryBase(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PREFETCH_MEMORY_BASE, getPrefetchMemoryBase());
	return true;
}

Uint16 UNIX_PCIBridge::getPrefetchMemoryBase() const
{
	return _prefetchMemoryBase;
}

void UNIX_PCIBridge::setPrefetchMemoryBase(Uint16 &value)
{
	_prefetchMemoryBase = value;
}

Boolean UNIX_PCIBridge::getPrefetchLimitUpper32(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PREFETCH_LIMIT_UPPER_3_2, getPrefetchLimitUpper32());
	return true;
}

Uint32 UNIX_PCIBridge::getPrefetchLimitUpper32() const
{
	return _prefetchLimitUpper32;
}

void UNIX_PCIBridge::setPrefetchLimitUpper32(Uint32 &value)
{
	_prefetchLimitUpper32 = value;
}

Boolean UNIX_PCIBridge::getPrefetchBaseUpper32(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PREFETCH_BASE_UPPER_3_2, getPrefetchBaseUpper32());
	return true;
}

Uint32 UNIX_PCIBridge::getPrefetchBaseUpper32() const
{
	return _prefetchBaseUpper32;
}

void UNIX_PCIBridge::setPrefetchBaseUpper32(Uint32 &value)
{
	_prefetchBaseUpper32 = value;
}

Boolean UNIX_PCIBridge::getIOLimitUpper16(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IO_LIMIT_UPPER_1_6, getIOLimitUpper16());
	return true;
}

Uint16 UNIX_PCIBridge::getIOLimitUpper16() const
{
	return _iOLimitUpper16;
}

void UNIX_PCIBridge::setIOLimitUpper16(Uint16 &value)
{
	_iOLimitUpper16 = value;
}

Boolean UNIX_PCIBridge::getIOBaseUpper16(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IO_BASE_UPPER_1_6, getIOBaseUpper16());
	return true;
}

Uint16 UNIX_PCIBridge::getIOBaseUpper16() const
{
	return _iOBaseUpper16;
}

void UNIX_PCIBridge::setIOBaseUpper16(Uint16 &value)
{
	_iOBaseUpper16 = value;
}


void UNIX_PCIBridge::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PCIBridge");
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
	_creationClassName = String("UNIX_PCIBridge");
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
	_bridgeType = Uint16(0);
	_secondaryLatencyTimer = Uint8(0);
	_subordinateBusNumber = Uint8(0);
	_secondayBusNumber = Uint8(0);
	_primaryBusNumber = Uint8(0);
	_secondaryStatusRegister = Uint16(0);
	_secondaryBusDeviceSelectTiming = Uint16(0);
	_iOLimit = Uint8(0);
	_iOBase = Uint8(0);
	_memoryLimit = Uint16(0);
	_memoryBase = Uint16(0);
	_prefetchMemoryLimit = Uint16(0);
	_prefetchMemoryBase = Uint16(0);
	_prefetchLimitUpper32 = Uint32(0);
	_prefetchBaseUpper32 = Uint32(0);
	_iOLimitUpper16 = Uint16(0);
	_iOBaseUpper16 = Uint16(0);

}

Boolean UNIX_PCIBridge::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "BridgeType"))
			{
				Uint16 bridgeTypeValue;
				property.getValue().get(bridgeTypeValue);
				setBridgeType(bridgeTypeValue);
			}
			else if (String::equal(property.getName().getString(), "SecondaryLatencyTimer"))
			{
				Uint8 secondaryLatencyTimerValue;
				property.getValue().get(secondaryLatencyTimerValue);
				setSecondaryLatencyTimer(secondaryLatencyTimerValue);
			}
			else if (String::equal(property.getName().getString(), "SubordinateBusNumber"))
			{
				Uint8 subordinateBusNumberValue;
				property.getValue().get(subordinateBusNumberValue);
				setSubordinateBusNumber(subordinateBusNumberValue);
			}
			else if (String::equal(property.getName().getString(), "SecondayBusNumber"))
			{
				Uint8 secondayBusNumberValue;
				property.getValue().get(secondayBusNumberValue);
				setSecondayBusNumber(secondayBusNumberValue);
			}
			else if (String::equal(property.getName().getString(), "PrimaryBusNumber"))
			{
				Uint8 primaryBusNumberValue;
				property.getValue().get(primaryBusNumberValue);
				setPrimaryBusNumber(primaryBusNumberValue);
			}
			else if (String::equal(property.getName().getString(), "SecondaryStatusRegister"))
			{
				Uint16 secondaryStatusRegisterValue;
				property.getValue().get(secondaryStatusRegisterValue);
				setSecondaryStatusRegister(secondaryStatusRegisterValue);
			}
			else if (String::equal(property.getName().getString(), "SecondaryBusDeviceSelectTiming"))
			{
				Uint16 secondaryBusDeviceSelectTimingValue;
				property.getValue().get(secondaryBusDeviceSelectTimingValue);
				setSecondaryBusDeviceSelectTiming(secondaryBusDeviceSelectTimingValue);
			}
			else if (String::equal(property.getName().getString(), "IOLimit"))
			{
				Uint8 iOLimitValue;
				property.getValue().get(iOLimitValue);
				setIOLimit(iOLimitValue);
			}
			else if (String::equal(property.getName().getString(), "IOBase"))
			{
				Uint8 iOBaseValue;
				property.getValue().get(iOBaseValue);
				setIOBase(iOBaseValue);
			}
			else if (String::equal(property.getName().getString(), "MemoryLimit"))
			{
				Uint16 memoryLimitValue;
				property.getValue().get(memoryLimitValue);
				setMemoryLimit(memoryLimitValue);
			}
			else if (String::equal(property.getName().getString(), "MemoryBase"))
			{
				Uint16 memoryBaseValue;
				property.getValue().get(memoryBaseValue);
				setMemoryBase(memoryBaseValue);
			}
			else if (String::equal(property.getName().getString(), "PrefetchMemoryLimit"))
			{
				Uint16 prefetchMemoryLimitValue;
				property.getValue().get(prefetchMemoryLimitValue);
				setPrefetchMemoryLimit(prefetchMemoryLimitValue);
			}
			else if (String::equal(property.getName().getString(), "PrefetchMemoryBase"))
			{
				Uint16 prefetchMemoryBaseValue;
				property.getValue().get(prefetchMemoryBaseValue);
				setPrefetchMemoryBase(prefetchMemoryBaseValue);
			}
			else if (String::equal(property.getName().getString(), "PrefetchLimitUpper32"))
			{
				Uint32 prefetchLimitUpper32Value;
				property.getValue().get(prefetchLimitUpper32Value);
				setPrefetchLimitUpper32(prefetchLimitUpper32Value);
			}
			else if (String::equal(property.getName().getString(), "PrefetchBaseUpper32"))
			{
				Uint32 prefetchBaseUpper32Value;
				property.getValue().get(prefetchBaseUpper32Value);
				setPrefetchBaseUpper32(prefetchBaseUpper32Value);
			}
			else if (String::equal(property.getName().getString(), "IOLimitUpper16"))
			{
				Uint16 iOLimitUpper16Value;
				property.getValue().get(iOLimitUpper16Value);
				setIOLimitUpper16(iOLimitUpper16Value);
			}
			else if (String::equal(property.getName().getString(), "IOBaseUpper16"))
			{
				Uint16 iOBaseUpper16Value;
				property.getValue().get(iOBaseUpper16Value);
				setIOBaseUpper16(iOBaseUpper16Value);
			}
	}
	return true;
}

Uint32 UNIX_PCIBridge::invokeRequestStateChange(
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

Uint32 UNIX_PCIBridge::invokeSetPowerState(
		Uint16 &inPowerState,
		CIMDateTime &inTime
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SetPowerState */
	
	
	
	return returnValue;
}

Uint32 UNIX_PCIBridge::invokeReset()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method Reset */
	
	
	
	return returnValue;
}

Uint32 UNIX_PCIBridge::invokeEnableDevice(
		Boolean &inEnabled
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method EnableDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_PCIBridge::invokeOnlineDevice(
		Boolean &inOnline
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method OnlineDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_PCIBridge::invokeQuiesceDevice(
		Boolean &inQuiesce
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method QuiesceDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_PCIBridge::invokeSaveProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SaveProperties */
	
	
	
	return returnValue;
}

Uint32 UNIX_PCIBridge::invokeRestoreProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method RestoreProperties */
	
	
	
	return returnValue;
}

Uint8 UNIX_PCIBridge::invokeBISTExecution()
{
	Uint8 returnValue = Uint8(0);
	
	/* Execute method BISTExecution */
	
	
	
	return returnValue;
}


Boolean UNIX_PCIBridge::initialize()
{
	return false;
}

Boolean UNIX_PCIBridge::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PCIBridge");
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
	_creationClassName = String("UNIX_PCIBridge");
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
	_bridgeType = Uint16(0);
	_secondaryLatencyTimer = Uint8(0);
	_subordinateBusNumber = Uint8(0);
	_secondayBusNumber = Uint8(0);
	_primaryBusNumber = Uint8(0);
	_secondaryStatusRegister = Uint16(0);
	_secondaryBusDeviceSelectTiming = Uint16(0);
	_iOLimit = Uint8(0);
	_iOBase = Uint8(0);
	_memoryLimit = Uint16(0);
	_memoryBase = Uint16(0);
	_prefetchMemoryLimit = Uint16(0);
	_prefetchMemoryBase = Uint16(0);
	_prefetchLimitUpper32 = Uint32(0);
	_prefetchBaseUpper32 = Uint32(0);
	_iOLimitUpper16 = Uint16(0);
	_iOBaseUpper16 = Uint16(0);
	
	return false;
}

Boolean UNIX_PCIBridge::finalize()
{
	return false;
}

Boolean UNIX_PCIBridge::loadByName(const String name)
{
	return false;
}

Boolean UNIX_PCIBridge::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_PCIBridge::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PCIBridge::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PCIBridge::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PCIBridge::validateInstance()
{
	return true;
}

