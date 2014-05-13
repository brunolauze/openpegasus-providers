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


UNIX_AGPVideoDisplayController::UNIX_AGPVideoDisplayController(void)
{
}

UNIX_AGPVideoDisplayController::~UNIX_AGPVideoDisplayController(void)
{
}

Boolean UNIX_AGPVideoDisplayController::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_AGPVideoDisplayController::getInstanceID() const
{
	return _instanceID;
}

void UNIX_AGPVideoDisplayController::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_AGPVideoDisplayController::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_AGPVideoDisplayController::getCaption() const
{
	return _caption;
}

void UNIX_AGPVideoDisplayController::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_AGPVideoDisplayController::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_AGPVideoDisplayController::getDescription() const
{
	return _description;
}

void UNIX_AGPVideoDisplayController::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_AGPVideoDisplayController::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_AGPVideoDisplayController::getElementName() const
{
	return _elementName;
}

void UNIX_AGPVideoDisplayController::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_AGPVideoDisplayController::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_AGPVideoDisplayController::getGeneration() const
{
	return _generation;
}

void UNIX_AGPVideoDisplayController::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_AGPVideoDisplayController::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_AGPVideoDisplayController::getInstallDate() const
{
	return _installDate;
}

void UNIX_AGPVideoDisplayController::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_AGPVideoDisplayController::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_AGPVideoDisplayController::getName() const
{
	return _name;
}

void UNIX_AGPVideoDisplayController::setName(String &value)
{
	_name = value;
}

Boolean UNIX_AGPVideoDisplayController::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_AGPVideoDisplayController::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_AGPVideoDisplayController::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_AGPVideoDisplayController::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_AGPVideoDisplayController::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_AGPVideoDisplayController::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_AGPVideoDisplayController::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_AGPVideoDisplayController::getStatus() const
{
	return _status;
}

void UNIX_AGPVideoDisplayController::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_AGPVideoDisplayController::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_AGPVideoDisplayController::getHealthState() const
{
	return _healthState;
}

void UNIX_AGPVideoDisplayController::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_AGPVideoDisplayController::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_AGPVideoDisplayController::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_AGPVideoDisplayController::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_AGPVideoDisplayController::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_AGPVideoDisplayController::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_AGPVideoDisplayController::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_AGPVideoDisplayController::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_AGPVideoDisplayController::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_AGPVideoDisplayController::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_AGPVideoDisplayController::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_AGPVideoDisplayController::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_AGPVideoDisplayController::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_AGPVideoDisplayController::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_AGPVideoDisplayController::getEnabledState() const
{
	return _enabledState;
}

void UNIX_AGPVideoDisplayController::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_AGPVideoDisplayController::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_AGPVideoDisplayController::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_AGPVideoDisplayController::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_AGPVideoDisplayController::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_AGPVideoDisplayController::getRequestedState() const
{
	return _requestedState;
}

void UNIX_AGPVideoDisplayController::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_AGPVideoDisplayController::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_AGPVideoDisplayController::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_AGPVideoDisplayController::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_AGPVideoDisplayController::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_AGPVideoDisplayController::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_AGPVideoDisplayController::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_AGPVideoDisplayController::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_AGPVideoDisplayController::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_AGPVideoDisplayController::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_AGPVideoDisplayController::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_AGPVideoDisplayController::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_AGPVideoDisplayController::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_AGPVideoDisplayController::getAllocationState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOCATION_STATE, getAllocationState());
	return true;
}

String UNIX_AGPVideoDisplayController::getAllocationState() const
{
	return _allocationState;
}

void UNIX_AGPVideoDisplayController::setAllocationState(String &value)
{
	_allocationState = value;
}

Boolean UNIX_AGPVideoDisplayController::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_AGPVideoDisplayController::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_AGPVideoDisplayController::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_AGPVideoDisplayController::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_AGPVideoDisplayController::getSystemName() const
{
	return _systemName;
}

void UNIX_AGPVideoDisplayController::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_AGPVideoDisplayController::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_AGPVideoDisplayController::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_AGPVideoDisplayController::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_AGPVideoDisplayController::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_AGPVideoDisplayController::getDeviceID() const
{
	return _deviceID;
}

void UNIX_AGPVideoDisplayController::setDeviceID(String &value)
{
	_deviceID = value;
}

Boolean UNIX_AGPVideoDisplayController::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_AGPVideoDisplayController::getPowerManagementSupported() const
{
	return _powerManagementSupported;
}

void UNIX_AGPVideoDisplayController::setPowerManagementSupported(Boolean &value)
{
	_powerManagementSupported = value;
}

Boolean UNIX_AGPVideoDisplayController::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_AGPVideoDisplayController::getPowerManagementCapabilities() const
{
	return _powerManagementCapabilities;
}

void UNIX_AGPVideoDisplayController::setPowerManagementCapabilities(Array<Uint16> &value)
{
	_powerManagementCapabilities = value;
}

Boolean UNIX_AGPVideoDisplayController::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_AGPVideoDisplayController::getAvailability() const
{
	return _availability;
}

void UNIX_AGPVideoDisplayController::setAvailability(Uint16 &value)
{
	_availability = value;
}

Boolean UNIX_AGPVideoDisplayController::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_AGPVideoDisplayController::getStatusInfo() const
{
	return _statusInfo;
}

void UNIX_AGPVideoDisplayController::setStatusInfo(Uint16 &value)
{
	_statusInfo = value;
}

Boolean UNIX_AGPVideoDisplayController::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_AGPVideoDisplayController::getLastErrorCode() const
{
	return _lastErrorCode;
}

void UNIX_AGPVideoDisplayController::setLastErrorCode(Uint32 &value)
{
	_lastErrorCode = value;
}

Boolean UNIX_AGPVideoDisplayController::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_AGPVideoDisplayController::getErrorDescription() const
{
	return _errorDescription;
}

void UNIX_AGPVideoDisplayController::setErrorDescription(String &value)
{
	_errorDescription = value;
}

Boolean UNIX_AGPVideoDisplayController::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_AGPVideoDisplayController::getErrorCleared() const
{
	return _errorCleared;
}

void UNIX_AGPVideoDisplayController::setErrorCleared(Boolean &value)
{
	_errorCleared = value;
}

Boolean UNIX_AGPVideoDisplayController::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_AGPVideoDisplayController::getOtherIdentifyingInfo() const
{
	return _otherIdentifyingInfo;
}

void UNIX_AGPVideoDisplayController::setOtherIdentifyingInfo(Array<String> &value)
{
	_otherIdentifyingInfo = value;
}

Boolean UNIX_AGPVideoDisplayController::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_AGPVideoDisplayController::getPowerOnHours() const
{
	return _powerOnHours;
}

void UNIX_AGPVideoDisplayController::setPowerOnHours(Uint64 &value)
{
	_powerOnHours = value;
}

Boolean UNIX_AGPVideoDisplayController::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_AGPVideoDisplayController::getTotalPowerOnHours() const
{
	return _totalPowerOnHours;
}

void UNIX_AGPVideoDisplayController::setTotalPowerOnHours(Uint64 &value)
{
	_totalPowerOnHours = value;
}

Boolean UNIX_AGPVideoDisplayController::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_AGPVideoDisplayController::getIdentifyingDescriptions() const
{
	return _identifyingDescriptions;
}

void UNIX_AGPVideoDisplayController::setIdentifyingDescriptions(Array<String> &value)
{
	_identifyingDescriptions = value;
}

Boolean UNIX_AGPVideoDisplayController::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_AGPVideoDisplayController::getAdditionalAvailability() const
{
	return _additionalAvailability;
}

void UNIX_AGPVideoDisplayController::setAdditionalAvailability(Array<Uint16> &value)
{
	_additionalAvailability = value;
}

Boolean UNIX_AGPVideoDisplayController::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_AGPVideoDisplayController::getMaxQuiesceTime() const
{
	return _maxQuiesceTime;
}

void UNIX_AGPVideoDisplayController::setMaxQuiesceTime(Uint64 &value)
{
	_maxQuiesceTime = value;
}

Boolean UNIX_AGPVideoDisplayController::getLocationIndicator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCATION_INDICATOR, getLocationIndicator());
	return true;
}

Uint16 UNIX_AGPVideoDisplayController::getLocationIndicator() const
{
	return _locationIndicator;
}

void UNIX_AGPVideoDisplayController::setLocationIndicator(Uint16 &value)
{
	_locationIndicator = value;
}

Boolean UNIX_AGPVideoDisplayController::getTimeOfLastReset(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_RESET, getTimeOfLastReset());
	return true;
}

CIMDateTime UNIX_AGPVideoDisplayController::getTimeOfLastReset() const
{
	return _timeOfLastReset;
}

void UNIX_AGPVideoDisplayController::setTimeOfLastReset(CIMDateTime &value)
{
	_timeOfLastReset = value;
}

Boolean UNIX_AGPVideoDisplayController::getProtocolSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_SUPPORTED, getProtocolSupported());
	return true;
}

Uint16 UNIX_AGPVideoDisplayController::getProtocolSupported() const
{
	return _protocolSupported;
}

void UNIX_AGPVideoDisplayController::setProtocolSupported(Uint16 &value)
{
	_protocolSupported = value;
}

Boolean UNIX_AGPVideoDisplayController::getMaxNumberControlled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_NUMBER_CONTROLLED, getMaxNumberControlled());
	return true;
}

Uint32 UNIX_AGPVideoDisplayController::getMaxNumberControlled() const
{
	return _maxNumberControlled;
}

void UNIX_AGPVideoDisplayController::setMaxNumberControlled(Uint32 &value)
{
	_maxNumberControlled = value;
}

Boolean UNIX_AGPVideoDisplayController::getProtocolDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_DESCRIPTION, getProtocolDescription());
	return true;
}

String UNIX_AGPVideoDisplayController::getProtocolDescription() const
{
	return _protocolDescription;
}

void UNIX_AGPVideoDisplayController::setProtocolDescription(String &value)
{
	_protocolDescription = value;
}

Boolean UNIX_AGPVideoDisplayController::getVideoProcessor(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VIDEO_PROCESSOR, getVideoProcessor());
	return true;
}

String UNIX_AGPVideoDisplayController::getVideoProcessor() const
{
	return _videoProcessor;
}

void UNIX_AGPVideoDisplayController::setVideoProcessor(String &value)
{
	_videoProcessor = value;
}

Boolean UNIX_AGPVideoDisplayController::getVideoMemoryType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VIDEO_MEMORY_TYPE, getVideoMemoryType());
	return true;
}

Uint16 UNIX_AGPVideoDisplayController::getVideoMemoryType() const
{
	return _videoMemoryType;
}

void UNIX_AGPVideoDisplayController::setVideoMemoryType(Uint16 &value)
{
	_videoMemoryType = value;
}

Boolean UNIX_AGPVideoDisplayController::getOtherVideoMemoryType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_VIDEO_MEMORY_TYPE, getOtherVideoMemoryType());
	return true;
}

String UNIX_AGPVideoDisplayController::getOtherVideoMemoryType() const
{
	return _otherVideoMemoryType;
}

void UNIX_AGPVideoDisplayController::setOtherVideoMemoryType(String &value)
{
	_otherVideoMemoryType = value;
}

Boolean UNIX_AGPVideoDisplayController::getNumberOfVideoPages(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_VIDEO_PAGES, getNumberOfVideoPages());
	return true;
}

Uint32 UNIX_AGPVideoDisplayController::getNumberOfVideoPages() const
{
	return _numberOfVideoPages;
}

void UNIX_AGPVideoDisplayController::setNumberOfVideoPages(Uint32 &value)
{
	_numberOfVideoPages = value;
}

Boolean UNIX_AGPVideoDisplayController::getMaxMemorySupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_MEMORY_SUPPORTED, getMaxMemorySupported());
	return true;
}

Uint32 UNIX_AGPVideoDisplayController::getMaxMemorySupported() const
{
	return _maxMemorySupported;
}

void UNIX_AGPVideoDisplayController::setMaxMemorySupported(Uint32 &value)
{
	_maxMemorySupported = value;
}

Boolean UNIX_AGPVideoDisplayController::getAcceleratorCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCELERATOR_CAPABILITIES, getAcceleratorCapabilities());
	return true;
}

Array<Uint16> UNIX_AGPVideoDisplayController::getAcceleratorCapabilities() const
{
	return _acceleratorCapabilities;
}

void UNIX_AGPVideoDisplayController::setAcceleratorCapabilities(Array<Uint16> &value)
{
	_acceleratorCapabilities = value;
}

Boolean UNIX_AGPVideoDisplayController::getCapabilityDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITY_DESCRIPTIONS, getCapabilityDescriptions());
	return true;
}

Array<String> UNIX_AGPVideoDisplayController::getCapabilityDescriptions() const
{
	return _capabilityDescriptions;
}

void UNIX_AGPVideoDisplayController::setCapabilityDescriptions(Array<String> &value)
{
	_capabilityDescriptions = value;
}

Boolean UNIX_AGPVideoDisplayController::getOtherVideoArchitecture(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_VIDEO_ARCHITECTURE, getOtherVideoArchitecture());
	return true;
}

String UNIX_AGPVideoDisplayController::getOtherVideoArchitecture() const
{
	return _otherVideoArchitecture;
}

void UNIX_AGPVideoDisplayController::setOtherVideoArchitecture(String &value)
{
	_otherVideoArchitecture = value;
}

Boolean UNIX_AGPVideoDisplayController::getVideoArchitecture(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VIDEO_ARCHITECTURE, getVideoArchitecture());
	return true;
}

Uint16 UNIX_AGPVideoDisplayController::getVideoArchitecture() const
{
	return _videoArchitecture;
}

void UNIX_AGPVideoDisplayController::setVideoArchitecture(Uint16 &value)
{
	_videoArchitecture = value;
}

Boolean UNIX_AGPVideoDisplayController::getNonlocalVideoMemorySize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NONLOCAL_VIDEO_MEMORY_SIZE, getNonlocalVideoMemorySize());
	return true;
}

Uint32 UNIX_AGPVideoDisplayController::getNonlocalVideoMemorySize() const
{
	return _nonlocalVideoMemorySize;
}

void UNIX_AGPVideoDisplayController::setNonlocalVideoMemorySize(Uint32 &value)
{
	_nonlocalVideoMemorySize = value;
}

Boolean UNIX_AGPVideoDisplayController::getLocalBusWidth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCAL_BUS_WIDTH, getLocalBusWidth());
	return true;
}

Uint32 UNIX_AGPVideoDisplayController::getLocalBusWidth() const
{
	return _localBusWidth;
}

void UNIX_AGPVideoDisplayController::setLocalBusWidth(Uint32 &value)
{
	_localBusWidth = value;
}

Boolean UNIX_AGPVideoDisplayController::getUsageModel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USAGE_MODEL, getUsageModel());
	return true;
}

Uint16 UNIX_AGPVideoDisplayController::getUsageModel() const
{
	return _usageModel;
}

void UNIX_AGPVideoDisplayController::setUsageModel(Uint16 &value)
{
	_usageModel = value;
}

Boolean UNIX_AGPVideoDisplayController::getOtherUsageModel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_USAGE_MODEL, getOtherUsageModel());
	return true;
}

String UNIX_AGPVideoDisplayController::getOtherUsageModel() const
{
	return _otherUsageModel;
}

void UNIX_AGPVideoDisplayController::setOtherUsageModel(String &value)
{
	_otherUsageModel = value;
}

Boolean UNIX_AGPVideoDisplayController::getDataTransferRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_TRANSFER_RATE, getDataTransferRate());
	return true;
}

Uint16 UNIX_AGPVideoDisplayController::getDataTransferRate() const
{
	return _dataTransferRate;
}

void UNIX_AGPVideoDisplayController::setDataTransferRate(Uint16 &value)
{
	_dataTransferRate = value;
}

Boolean UNIX_AGPVideoDisplayController::getOtherDataTransferRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_DATA_TRANSFER_RATE, getOtherDataTransferRate());
	return true;
}

String UNIX_AGPVideoDisplayController::getOtherDataTransferRate() const
{
	return _otherDataTransferRate;
}

void UNIX_AGPVideoDisplayController::setOtherDataTransferRate(String &value)
{
	_otherDataTransferRate = value;
}

Boolean UNIX_AGPVideoDisplayController::getAddressingMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESSING_MODE, getAddressingMode());
	return true;
}

Uint16 UNIX_AGPVideoDisplayController::getAddressingMode() const
{
	return _addressingMode;
}

void UNIX_AGPVideoDisplayController::setAddressingMode(Uint16 &value)
{
	_addressingMode = value;
}

Boolean UNIX_AGPVideoDisplayController::getOtherAddressingMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ADDRESSING_MODE, getOtherAddressingMode());
	return true;
}

String UNIX_AGPVideoDisplayController::getOtherAddressingMode() const
{
	return _otherAddressingMode;
}

void UNIX_AGPVideoDisplayController::setOtherAddressingMode(String &value)
{
	_otherAddressingMode = value;
}

Boolean UNIX_AGPVideoDisplayController::getMaximumAGPCommandQueuePath(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAXIMUM_AGP_COMMAND_QUEUE_PATH, getMaximumAGPCommandQueuePath());
	return true;
}

Uint32 UNIX_AGPVideoDisplayController::getMaximumAGPCommandQueuePath() const
{
	return _maximumAGPCommandQueuePath;
}

void UNIX_AGPVideoDisplayController::setMaximumAGPCommandQueuePath(Uint32 &value)
{
	_maximumAGPCommandQueuePath = value;
}

Boolean UNIX_AGPVideoDisplayController::getMaxNumberOfPipelinedAGPTransactions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_NUMBER_OF_PIPELINED_AGP_TRANSACTIONS, getMaxNumberOfPipelinedAGPTransactions());
	return true;
}

Uint32 UNIX_AGPVideoDisplayController::getMaxNumberOfPipelinedAGPTransactions() const
{
	return _maxNumberOfPipelinedAGPTransactions;
}

void UNIX_AGPVideoDisplayController::setMaxNumberOfPipelinedAGPTransactions(Uint32 &value)
{
	_maxNumberOfPipelinedAGPTransactions = value;
}

Boolean UNIX_AGPVideoDisplayController::getGraphicsApertureSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GRAPHICS_APERTURE_SIZE, getGraphicsApertureSize());
	return true;
}

Uint32 UNIX_AGPVideoDisplayController::getGraphicsApertureSize() const
{
	return _graphicsApertureSize;
}

void UNIX_AGPVideoDisplayController::setGraphicsApertureSize(Uint32 &value)
{
	_graphicsApertureSize = value;
}

Boolean UNIX_AGPVideoDisplayController::getAGPSpecificationVersionConformance(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AGP_SPECIFICATION_VERSION_CONFORMANCE, getAGPSpecificationVersionConformance());
	return true;
}

String UNIX_AGPVideoDisplayController::getAGPSpecificationVersionConformance() const
{
	return _aGPSpecificationVersionConformance;
}

void UNIX_AGPVideoDisplayController::setAGPSpecificationVersionConformance(String &value)
{
	_aGPSpecificationVersionConformance = value;
}


void UNIX_AGPVideoDisplayController::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("AGPVideoDisplayController");
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
	_creationClassName = String("UNIX_AGPVideoDisplayController");
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
	_videoProcessor = String ("");
	_videoMemoryType = Uint16(0);
	_otherVideoMemoryType = String ("");
	_numberOfVideoPages = Uint32(0);
	_maxMemorySupported = Uint32(0);
	_acceleratorCapabilities.clear();
	_capabilityDescriptions.clear();
	_otherVideoArchitecture = String ("");
	_videoArchitecture = Uint16(0);
	_nonlocalVideoMemorySize = Uint32(0);
	_localBusWidth = Uint32(0);
	_usageModel = Uint16(0);
	_otherUsageModel = String ("");
	_dataTransferRate = Uint16(0);
	_otherDataTransferRate = String ("");
	_addressingMode = Uint16(0);
	_otherAddressingMode = String ("");
	_maximumAGPCommandQueuePath = Uint32(0);
	_maxNumberOfPipelinedAGPTransactions = Uint32(0);
	_graphicsApertureSize = Uint32(0);
	_aGPSpecificationVersionConformance = String ("");

}

Boolean UNIX_AGPVideoDisplayController::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "VideoProcessor"))
			{
				String videoProcessorValue;
				property.getValue().get(videoProcessorValue);
				setVideoProcessor(videoProcessorValue);
			}
			else if (String::equal(property.getName().getString(), "VideoMemoryType"))
			{
				Uint16 videoMemoryTypeValue;
				property.getValue().get(videoMemoryTypeValue);
				setVideoMemoryType(videoMemoryTypeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherVideoMemoryType"))
			{
				String otherVideoMemoryTypeValue;
				property.getValue().get(otherVideoMemoryTypeValue);
				setOtherVideoMemoryType(otherVideoMemoryTypeValue);
			}
			else if (String::equal(property.getName().getString(), "NumberOfVideoPages"))
			{
				Uint32 numberOfVideoPagesValue;
				property.getValue().get(numberOfVideoPagesValue);
				setNumberOfVideoPages(numberOfVideoPagesValue);
			}
			else if (String::equal(property.getName().getString(), "MaxMemorySupported"))
			{
				Uint32 maxMemorySupportedValue;
				property.getValue().get(maxMemorySupportedValue);
				setMaxMemorySupported(maxMemorySupportedValue);
			}
			else if (String::equal(property.getName().getString(), "AcceleratorCapabilities"))
			{
				Array<Uint16> acceleratorCapabilitiesValue;
				property.getValue().get(acceleratorCapabilitiesValue);
				setAcceleratorCapabilities(acceleratorCapabilitiesValue);
			}
			else if (String::equal(property.getName().getString(), "CapabilityDescriptions"))
			{
				Array<String> capabilityDescriptionsValue;
				property.getValue().get(capabilityDescriptionsValue);
				setCapabilityDescriptions(capabilityDescriptionsValue);
			}
			else if (String::equal(property.getName().getString(), "OtherVideoArchitecture"))
			{
				String otherVideoArchitectureValue;
				property.getValue().get(otherVideoArchitectureValue);
				setOtherVideoArchitecture(otherVideoArchitectureValue);
			}
			else if (String::equal(property.getName().getString(), "VideoArchitecture"))
			{
				Uint16 videoArchitectureValue;
				property.getValue().get(videoArchitectureValue);
				setVideoArchitecture(videoArchitectureValue);
			}
			else if (String::equal(property.getName().getString(), "NonlocalVideoMemorySize"))
			{
				Uint32 nonlocalVideoMemorySizeValue;
				property.getValue().get(nonlocalVideoMemorySizeValue);
				setNonlocalVideoMemorySize(nonlocalVideoMemorySizeValue);
			}
			else if (String::equal(property.getName().getString(), "LocalBusWidth"))
			{
				Uint32 localBusWidthValue;
				property.getValue().get(localBusWidthValue);
				setLocalBusWidth(localBusWidthValue);
			}
			else if (String::equal(property.getName().getString(), "UsageModel"))
			{
				Uint16 usageModelValue;
				property.getValue().get(usageModelValue);
				setUsageModel(usageModelValue);
			}
			else if (String::equal(property.getName().getString(), "OtherUsageModel"))
			{
				String otherUsageModelValue;
				property.getValue().get(otherUsageModelValue);
				setOtherUsageModel(otherUsageModelValue);
			}
			else if (String::equal(property.getName().getString(), "DataTransferRate"))
			{
				Uint16 dataTransferRateValue;
				property.getValue().get(dataTransferRateValue);
				setDataTransferRate(dataTransferRateValue);
			}
			else if (String::equal(property.getName().getString(), "OtherDataTransferRate"))
			{
				String otherDataTransferRateValue;
				property.getValue().get(otherDataTransferRateValue);
				setOtherDataTransferRate(otherDataTransferRateValue);
			}
			else if (String::equal(property.getName().getString(), "AddressingMode"))
			{
				Uint16 addressingModeValue;
				property.getValue().get(addressingModeValue);
				setAddressingMode(addressingModeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherAddressingMode"))
			{
				String otherAddressingModeValue;
				property.getValue().get(otherAddressingModeValue);
				setOtherAddressingMode(otherAddressingModeValue);
			}
			else if (String::equal(property.getName().getString(), "MaximumAGPCommandQueuePath"))
			{
				Uint32 maximumAGPCommandQueuePathValue;
				property.getValue().get(maximumAGPCommandQueuePathValue);
				setMaximumAGPCommandQueuePath(maximumAGPCommandQueuePathValue);
			}
			else if (String::equal(property.getName().getString(), "MaxNumberOfPipelinedAGPTransactions"))
			{
				Uint32 maxNumberOfPipelinedAGPTransactionsValue;
				property.getValue().get(maxNumberOfPipelinedAGPTransactionsValue);
				setMaxNumberOfPipelinedAGPTransactions(maxNumberOfPipelinedAGPTransactionsValue);
			}
			else if (String::equal(property.getName().getString(), "GraphicsApertureSize"))
			{
				Uint32 graphicsApertureSizeValue;
				property.getValue().get(graphicsApertureSizeValue);
				setGraphicsApertureSize(graphicsApertureSizeValue);
			}
			else if (String::equal(property.getName().getString(), "AGPSpecificationVersionConformance"))
			{
				String aGPSpecificationVersionConformanceValue;
				property.getValue().get(aGPSpecificationVersionConformanceValue);
				setAGPSpecificationVersionConformance(aGPSpecificationVersionConformanceValue);
			}
	}
	return true;
}

Uint32 UNIX_AGPVideoDisplayController::invokeRequestStateChange(
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

Uint32 UNIX_AGPVideoDisplayController::invokeSetPowerState(
		Uint16 &inPowerState,
		CIMDateTime &inTime
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SetPowerState */
	
	
	
	return returnValue;
}

Uint32 UNIX_AGPVideoDisplayController::invokeReset()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method Reset */
	
	
	
	return returnValue;
}

Uint32 UNIX_AGPVideoDisplayController::invokeEnableDevice(
		Boolean &inEnabled
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method EnableDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_AGPVideoDisplayController::invokeOnlineDevice(
		Boolean &inOnline
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method OnlineDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_AGPVideoDisplayController::invokeQuiesceDevice(
		Boolean &inQuiesce
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method QuiesceDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_AGPVideoDisplayController::invokeSaveProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SaveProperties */
	
	
	
	return returnValue;
}

Uint32 UNIX_AGPVideoDisplayController::invokeRestoreProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method RestoreProperties */
	
	
	
	return returnValue;
}


Boolean UNIX_AGPVideoDisplayController::initialize()
{
	return false;
}

Boolean UNIX_AGPVideoDisplayController::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("AGPVideoDisplayController");
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
	_creationClassName = String("UNIX_AGPVideoDisplayController");
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
	_videoProcessor = String ("");
	_videoMemoryType = Uint16(0);
	_otherVideoMemoryType = String ("");
	_numberOfVideoPages = Uint32(0);
	_maxMemorySupported = Uint32(0);
	_acceleratorCapabilities.clear();
	_capabilityDescriptions.clear();
	_otherVideoArchitecture = String ("");
	_videoArchitecture = Uint16(0);
	_nonlocalVideoMemorySize = Uint32(0);
	_localBusWidth = Uint32(0);
	_usageModel = Uint16(0);
	_otherUsageModel = String ("");
	_dataTransferRate = Uint16(0);
	_otherDataTransferRate = String ("");
	_addressingMode = Uint16(0);
	_otherAddressingMode = String ("");
	_maximumAGPCommandQueuePath = Uint32(0);
	_maxNumberOfPipelinedAGPTransactions = Uint32(0);
	_graphicsApertureSize = Uint32(0);
	_aGPSpecificationVersionConformance = String ("");
	
	return false;
}

Boolean UNIX_AGPVideoDisplayController::finalize()
{
	return false;
}

Boolean UNIX_AGPVideoDisplayController::loadByName(const String name)
{
	return false;
}

Boolean UNIX_AGPVideoDisplayController::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_AGPVideoDisplayController::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AGPVideoDisplayController::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AGPVideoDisplayController::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AGPVideoDisplayController::validateInstance()
{
	return true;
}

