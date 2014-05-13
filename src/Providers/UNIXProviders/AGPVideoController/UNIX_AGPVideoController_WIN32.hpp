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


UNIX_AGPVideoController::UNIX_AGPVideoController(void)
{
}

UNIX_AGPVideoController::~UNIX_AGPVideoController(void)
{
}

Boolean UNIX_AGPVideoController::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_AGPVideoController::getInstanceID() const
{
	return _instanceID;
}

void UNIX_AGPVideoController::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_AGPVideoController::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_AGPVideoController::getCaption() const
{
	return _caption;
}

void UNIX_AGPVideoController::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_AGPVideoController::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_AGPVideoController::getDescription() const
{
	return _description;
}

void UNIX_AGPVideoController::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_AGPVideoController::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_AGPVideoController::getElementName() const
{
	return _elementName;
}

void UNIX_AGPVideoController::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_AGPVideoController::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_AGPVideoController::getGeneration() const
{
	return _generation;
}

void UNIX_AGPVideoController::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_AGPVideoController::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_AGPVideoController::getInstallDate() const
{
	return _installDate;
}

void UNIX_AGPVideoController::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_AGPVideoController::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_AGPVideoController::getName() const
{
	return _name;
}

void UNIX_AGPVideoController::setName(String &value)
{
	_name = value;
}

Boolean UNIX_AGPVideoController::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_AGPVideoController::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_AGPVideoController::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_AGPVideoController::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_AGPVideoController::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_AGPVideoController::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_AGPVideoController::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_AGPVideoController::getStatus() const
{
	return _status;
}

void UNIX_AGPVideoController::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_AGPVideoController::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_AGPVideoController::getHealthState() const
{
	return _healthState;
}

void UNIX_AGPVideoController::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_AGPVideoController::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_AGPVideoController::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_AGPVideoController::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_AGPVideoController::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_AGPVideoController::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_AGPVideoController::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_AGPVideoController::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_AGPVideoController::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_AGPVideoController::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_AGPVideoController::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_AGPVideoController::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_AGPVideoController::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_AGPVideoController::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_AGPVideoController::getEnabledState() const
{
	return _enabledState;
}

void UNIX_AGPVideoController::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_AGPVideoController::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_AGPVideoController::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_AGPVideoController::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_AGPVideoController::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_AGPVideoController::getRequestedState() const
{
	return _requestedState;
}

void UNIX_AGPVideoController::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_AGPVideoController::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_AGPVideoController::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_AGPVideoController::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_AGPVideoController::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_AGPVideoController::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_AGPVideoController::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_AGPVideoController::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_AGPVideoController::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_AGPVideoController::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_AGPVideoController::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_AGPVideoController::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_AGPVideoController::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_AGPVideoController::getAllocationState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOCATION_STATE, getAllocationState());
	return true;
}

String UNIX_AGPVideoController::getAllocationState() const
{
	return _allocationState;
}

void UNIX_AGPVideoController::setAllocationState(String &value)
{
	_allocationState = value;
}

Boolean UNIX_AGPVideoController::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_AGPVideoController::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_AGPVideoController::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_AGPVideoController::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_AGPVideoController::getSystemName() const
{
	return _systemName;
}

void UNIX_AGPVideoController::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_AGPVideoController::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_AGPVideoController::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_AGPVideoController::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_AGPVideoController::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_AGPVideoController::getDeviceID() const
{
	return _deviceID;
}

void UNIX_AGPVideoController::setDeviceID(String &value)
{
	_deviceID = value;
}

Boolean UNIX_AGPVideoController::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_AGPVideoController::getPowerManagementSupported() const
{
	return _powerManagementSupported;
}

void UNIX_AGPVideoController::setPowerManagementSupported(Boolean &value)
{
	_powerManagementSupported = value;
}

Boolean UNIX_AGPVideoController::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_AGPVideoController::getPowerManagementCapabilities() const
{
	return _powerManagementCapabilities;
}

void UNIX_AGPVideoController::setPowerManagementCapabilities(Array<Uint16> &value)
{
	_powerManagementCapabilities = value;
}

Boolean UNIX_AGPVideoController::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_AGPVideoController::getAvailability() const
{
	return _availability;
}

void UNIX_AGPVideoController::setAvailability(Uint16 &value)
{
	_availability = value;
}

Boolean UNIX_AGPVideoController::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_AGPVideoController::getStatusInfo() const
{
	return _statusInfo;
}

void UNIX_AGPVideoController::setStatusInfo(Uint16 &value)
{
	_statusInfo = value;
}

Boolean UNIX_AGPVideoController::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_AGPVideoController::getLastErrorCode() const
{
	return _lastErrorCode;
}

void UNIX_AGPVideoController::setLastErrorCode(Uint32 &value)
{
	_lastErrorCode = value;
}

Boolean UNIX_AGPVideoController::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_AGPVideoController::getErrorDescription() const
{
	return _errorDescription;
}

void UNIX_AGPVideoController::setErrorDescription(String &value)
{
	_errorDescription = value;
}

Boolean UNIX_AGPVideoController::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_AGPVideoController::getErrorCleared() const
{
	return _errorCleared;
}

void UNIX_AGPVideoController::setErrorCleared(Boolean &value)
{
	_errorCleared = value;
}

Boolean UNIX_AGPVideoController::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_AGPVideoController::getOtherIdentifyingInfo() const
{
	return _otherIdentifyingInfo;
}

void UNIX_AGPVideoController::setOtherIdentifyingInfo(Array<String> &value)
{
	_otherIdentifyingInfo = value;
}

Boolean UNIX_AGPVideoController::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_AGPVideoController::getPowerOnHours() const
{
	return _powerOnHours;
}

void UNIX_AGPVideoController::setPowerOnHours(Uint64 &value)
{
	_powerOnHours = value;
}

Boolean UNIX_AGPVideoController::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_AGPVideoController::getTotalPowerOnHours() const
{
	return _totalPowerOnHours;
}

void UNIX_AGPVideoController::setTotalPowerOnHours(Uint64 &value)
{
	_totalPowerOnHours = value;
}

Boolean UNIX_AGPVideoController::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_AGPVideoController::getIdentifyingDescriptions() const
{
	return _identifyingDescriptions;
}

void UNIX_AGPVideoController::setIdentifyingDescriptions(Array<String> &value)
{
	_identifyingDescriptions = value;
}

Boolean UNIX_AGPVideoController::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_AGPVideoController::getAdditionalAvailability() const
{
	return _additionalAvailability;
}

void UNIX_AGPVideoController::setAdditionalAvailability(Array<Uint16> &value)
{
	_additionalAvailability = value;
}

Boolean UNIX_AGPVideoController::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_AGPVideoController::getMaxQuiesceTime() const
{
	return _maxQuiesceTime;
}

void UNIX_AGPVideoController::setMaxQuiesceTime(Uint64 &value)
{
	_maxQuiesceTime = value;
}

Boolean UNIX_AGPVideoController::getLocationIndicator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCATION_INDICATOR, getLocationIndicator());
	return true;
}

Uint16 UNIX_AGPVideoController::getLocationIndicator() const
{
	return _locationIndicator;
}

void UNIX_AGPVideoController::setLocationIndicator(Uint16 &value)
{
	_locationIndicator = value;
}

Boolean UNIX_AGPVideoController::getTimeOfLastReset(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_RESET, getTimeOfLastReset());
	return true;
}

CIMDateTime UNIX_AGPVideoController::getTimeOfLastReset() const
{
	return _timeOfLastReset;
}

void UNIX_AGPVideoController::setTimeOfLastReset(CIMDateTime &value)
{
	_timeOfLastReset = value;
}

Boolean UNIX_AGPVideoController::getProtocolSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_SUPPORTED, getProtocolSupported());
	return true;
}

Uint16 UNIX_AGPVideoController::getProtocolSupported() const
{
	return _protocolSupported;
}

void UNIX_AGPVideoController::setProtocolSupported(Uint16 &value)
{
	_protocolSupported = value;
}

Boolean UNIX_AGPVideoController::getMaxNumberControlled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_NUMBER_CONTROLLED, getMaxNumberControlled());
	return true;
}

Uint32 UNIX_AGPVideoController::getMaxNumberControlled() const
{
	return _maxNumberControlled;
}

void UNIX_AGPVideoController::setMaxNumberControlled(Uint32 &value)
{
	_maxNumberControlled = value;
}

Boolean UNIX_AGPVideoController::getProtocolDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_DESCRIPTION, getProtocolDescription());
	return true;
}

String UNIX_AGPVideoController::getProtocolDescription() const
{
	return _protocolDescription;
}

void UNIX_AGPVideoController::setProtocolDescription(String &value)
{
	_protocolDescription = value;
}

Boolean UNIX_AGPVideoController::getVideoProcessor(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VIDEO_PROCESSOR, getVideoProcessor());
	return true;
}

String UNIX_AGPVideoController::getVideoProcessor() const
{
	return _videoProcessor;
}

void UNIX_AGPVideoController::setVideoProcessor(String &value)
{
	_videoProcessor = value;
}

Boolean UNIX_AGPVideoController::getVideoMemoryType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VIDEO_MEMORY_TYPE, getVideoMemoryType());
	return true;
}

Uint16 UNIX_AGPVideoController::getVideoMemoryType() const
{
	return _videoMemoryType;
}

void UNIX_AGPVideoController::setVideoMemoryType(Uint16 &value)
{
	_videoMemoryType = value;
}

Boolean UNIX_AGPVideoController::getNumberOfVideoPages(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_VIDEO_PAGES, getNumberOfVideoPages());
	return true;
}

Uint32 UNIX_AGPVideoController::getNumberOfVideoPages() const
{
	return _numberOfVideoPages;
}

void UNIX_AGPVideoController::setNumberOfVideoPages(Uint32 &value)
{
	_numberOfVideoPages = value;
}

Boolean UNIX_AGPVideoController::getMaxMemorySupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_MEMORY_SUPPORTED, getMaxMemorySupported());
	return true;
}

Uint32 UNIX_AGPVideoController::getMaxMemorySupported() const
{
	return _maxMemorySupported;
}

void UNIX_AGPVideoController::setMaxMemorySupported(Uint32 &value)
{
	_maxMemorySupported = value;
}

Boolean UNIX_AGPVideoController::getAcceleratorCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCELERATOR_CAPABILITIES, getAcceleratorCapabilities());
	return true;
}

Array<Uint16> UNIX_AGPVideoController::getAcceleratorCapabilities() const
{
	return _acceleratorCapabilities;
}

void UNIX_AGPVideoController::setAcceleratorCapabilities(Array<Uint16> &value)
{
	_acceleratorCapabilities = value;
}

Boolean UNIX_AGPVideoController::getCapabilityDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITY_DESCRIPTIONS, getCapabilityDescriptions());
	return true;
}

Array<String> UNIX_AGPVideoController::getCapabilityDescriptions() const
{
	return _capabilityDescriptions;
}

void UNIX_AGPVideoController::setCapabilityDescriptions(Array<String> &value)
{
	_capabilityDescriptions = value;
}

Boolean UNIX_AGPVideoController::getCurrentBitsPerPixel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_BITS_PER_PIXEL, getCurrentBitsPerPixel());
	return true;
}

Uint32 UNIX_AGPVideoController::getCurrentBitsPerPixel() const
{
	return _currentBitsPerPixel;
}

void UNIX_AGPVideoController::setCurrentBitsPerPixel(Uint32 &value)
{
	_currentBitsPerPixel = value;
}

Boolean UNIX_AGPVideoController::getCurrentHorizontalResolution(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_HORIZONTAL_RESOLUTION, getCurrentHorizontalResolution());
	return true;
}

Uint32 UNIX_AGPVideoController::getCurrentHorizontalResolution() const
{
	return _currentHorizontalResolution;
}

void UNIX_AGPVideoController::setCurrentHorizontalResolution(Uint32 &value)
{
	_currentHorizontalResolution = value;
}

Boolean UNIX_AGPVideoController::getCurrentVerticalResolution(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_VERTICAL_RESOLUTION, getCurrentVerticalResolution());
	return true;
}

Uint32 UNIX_AGPVideoController::getCurrentVerticalResolution() const
{
	return _currentVerticalResolution;
}

void UNIX_AGPVideoController::setCurrentVerticalResolution(Uint32 &value)
{
	_currentVerticalResolution = value;
}

Boolean UNIX_AGPVideoController::getMaxRefreshRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_REFRESH_RATE, getMaxRefreshRate());
	return true;
}

Uint32 UNIX_AGPVideoController::getMaxRefreshRate() const
{
	return _maxRefreshRate;
}

void UNIX_AGPVideoController::setMaxRefreshRate(Uint32 &value)
{
	_maxRefreshRate = value;
}

Boolean UNIX_AGPVideoController::getMinRefreshRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIN_REFRESH_RATE, getMinRefreshRate());
	return true;
}

Uint32 UNIX_AGPVideoController::getMinRefreshRate() const
{
	return _minRefreshRate;
}

void UNIX_AGPVideoController::setMinRefreshRate(Uint32 &value)
{
	_minRefreshRate = value;
}

Boolean UNIX_AGPVideoController::getCurrentRefreshRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_REFRESH_RATE, getCurrentRefreshRate());
	return true;
}

Uint32 UNIX_AGPVideoController::getCurrentRefreshRate() const
{
	return _currentRefreshRate;
}

void UNIX_AGPVideoController::setCurrentRefreshRate(Uint32 &value)
{
	_currentRefreshRate = value;
}

Boolean UNIX_AGPVideoController::getCurrentScanMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_SCAN_MODE, getCurrentScanMode());
	return true;
}

Uint16 UNIX_AGPVideoController::getCurrentScanMode() const
{
	return _currentScanMode;
}

void UNIX_AGPVideoController::setCurrentScanMode(Uint16 &value)
{
	_currentScanMode = value;
}

Boolean UNIX_AGPVideoController::getCurrentNumberOfRows(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_NUMBER_OF_ROWS, getCurrentNumberOfRows());
	return true;
}

Uint32 UNIX_AGPVideoController::getCurrentNumberOfRows() const
{
	return _currentNumberOfRows;
}

void UNIX_AGPVideoController::setCurrentNumberOfRows(Uint32 &value)
{
	_currentNumberOfRows = value;
}

Boolean UNIX_AGPVideoController::getCurrentNumberOfColumns(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_NUMBER_OF_COLUMNS, getCurrentNumberOfColumns());
	return true;
}

Uint32 UNIX_AGPVideoController::getCurrentNumberOfColumns() const
{
	return _currentNumberOfColumns;
}

void UNIX_AGPVideoController::setCurrentNumberOfColumns(Uint32 &value)
{
	_currentNumberOfColumns = value;
}

Boolean UNIX_AGPVideoController::getCurrentNumberOfColors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_NUMBER_OF_COLORS, getCurrentNumberOfColors());
	return true;
}

Uint64 UNIX_AGPVideoController::getCurrentNumberOfColors() const
{
	return _currentNumberOfColors;
}

void UNIX_AGPVideoController::setCurrentNumberOfColors(Uint64 &value)
{
	_currentNumberOfColors = value;
}

Boolean UNIX_AGPVideoController::getCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITIES, getCapabilities());
	return true;
}

Array<Uint16> UNIX_AGPVideoController::getCapabilities() const
{
	return _capabilities;
}

void UNIX_AGPVideoController::setCapabilities(Array<Uint16> &value)
{
	_capabilities = value;
}

Boolean UNIX_AGPVideoController::getNonlocalVideoMemorySize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NONLOCAL_VIDEO_MEMORY_SIZE, getNonlocalVideoMemorySize());
	return true;
}

Uint32 UNIX_AGPVideoController::getNonlocalVideoMemorySize() const
{
	return _nonlocalVideoMemorySize;
}

void UNIX_AGPVideoController::setNonlocalVideoMemorySize(Uint32 &value)
{
	_nonlocalVideoMemorySize = value;
}

Boolean UNIX_AGPVideoController::getLocalBusWidth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCAL_BUS_WIDTH, getLocalBusWidth());
	return true;
}

Uint32 UNIX_AGPVideoController::getLocalBusWidth() const
{
	return _localBusWidth;
}

void UNIX_AGPVideoController::setLocalBusWidth(Uint32 &value)
{
	_localBusWidth = value;
}

Boolean UNIX_AGPVideoController::getUsageModel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USAGE_MODEL, getUsageModel());
	return true;
}

Uint16 UNIX_AGPVideoController::getUsageModel() const
{
	return _usageModel;
}

void UNIX_AGPVideoController::setUsageModel(Uint16 &value)
{
	_usageModel = value;
}

Boolean UNIX_AGPVideoController::getDataTransferRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_TRANSFER_RATE, getDataTransferRate());
	return true;
}

Uint16 UNIX_AGPVideoController::getDataTransferRate() const
{
	return _dataTransferRate;
}

void UNIX_AGPVideoController::setDataTransferRate(Uint16 &value)
{
	_dataTransferRate = value;
}

Boolean UNIX_AGPVideoController::getAddressingMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESSING_MODE, getAddressingMode());
	return true;
}

Uint16 UNIX_AGPVideoController::getAddressingMode() const
{
	return _addressingMode;
}

void UNIX_AGPVideoController::setAddressingMode(Uint16 &value)
{
	_addressingMode = value;
}

Boolean UNIX_AGPVideoController::getMaximumAGPCommandQueuePath(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAXIMUM_AGP_COMMAND_QUEUE_PATH, getMaximumAGPCommandQueuePath());
	return true;
}

Uint32 UNIX_AGPVideoController::getMaximumAGPCommandQueuePath() const
{
	return _maximumAGPCommandQueuePath;
}

void UNIX_AGPVideoController::setMaximumAGPCommandQueuePath(Uint32 &value)
{
	_maximumAGPCommandQueuePath = value;
}

Boolean UNIX_AGPVideoController::getMaxNumberOfPipelinedAGPTransactions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_NUMBER_OF_PIPELINED_AGP_TRANSACTIONS, getMaxNumberOfPipelinedAGPTransactions());
	return true;
}

Uint32 UNIX_AGPVideoController::getMaxNumberOfPipelinedAGPTransactions() const
{
	return _maxNumberOfPipelinedAGPTransactions;
}

void UNIX_AGPVideoController::setMaxNumberOfPipelinedAGPTransactions(Uint32 &value)
{
	_maxNumberOfPipelinedAGPTransactions = value;
}

Boolean UNIX_AGPVideoController::getGraphicsApertureSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GRAPHICS_APERTURE_SIZE, getGraphicsApertureSize());
	return true;
}

Uint32 UNIX_AGPVideoController::getGraphicsApertureSize() const
{
	return _graphicsApertureSize;
}

void UNIX_AGPVideoController::setGraphicsApertureSize(Uint32 &value)
{
	_graphicsApertureSize = value;
}

Boolean UNIX_AGPVideoController::getAGPSpecificationVersionConformance(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AGP_SPECIFICATION_VERSION_CONFORMANCE, getAGPSpecificationVersionConformance());
	return true;
}

String UNIX_AGPVideoController::getAGPSpecificationVersionConformance() const
{
	return _aGPSpecificationVersionConformance;
}

void UNIX_AGPVideoController::setAGPSpecificationVersionConformance(String &value)
{
	_aGPSpecificationVersionConformance = value;
}


void UNIX_AGPVideoController::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("AGPVideoController");
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
	_creationClassName = String("UNIX_AGPVideoController");
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
	_numberOfVideoPages = Uint32(0);
	_maxMemorySupported = Uint32(0);
	_acceleratorCapabilities.clear();
	_capabilityDescriptions.clear();
	_currentBitsPerPixel = Uint32(0);
	_currentHorizontalResolution = Uint32(0);
	_currentVerticalResolution = Uint32(0);
	_maxRefreshRate = Uint32(0);
	_minRefreshRate = Uint32(0);
	_currentRefreshRate = Uint32(0);
	_currentScanMode = Uint16(0);
	_currentNumberOfRows = Uint32(0);
	_currentNumberOfColumns = Uint32(0);
	_currentNumberOfColors = Uint64(0);
	_capabilities.clear();
	_nonlocalVideoMemorySize = Uint32(0);
	_localBusWidth = Uint32(0);
	_usageModel = Uint16(0);
	_dataTransferRate = Uint16(0);
	_addressingMode = Uint16(0);
	_maximumAGPCommandQueuePath = Uint32(0);
	_maxNumberOfPipelinedAGPTransactions = Uint32(0);
	_graphicsApertureSize = Uint32(0);
	_aGPSpecificationVersionConformance = String ("");

}

Boolean UNIX_AGPVideoController::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "CurrentBitsPerPixel"))
			{
				Uint32 currentBitsPerPixelValue;
				property.getValue().get(currentBitsPerPixelValue);
				setCurrentBitsPerPixel(currentBitsPerPixelValue);
			}
			else if (String::equal(property.getName().getString(), "CurrentHorizontalResolution"))
			{
				Uint32 currentHorizontalResolutionValue;
				property.getValue().get(currentHorizontalResolutionValue);
				setCurrentHorizontalResolution(currentHorizontalResolutionValue);
			}
			else if (String::equal(property.getName().getString(), "CurrentVerticalResolution"))
			{
				Uint32 currentVerticalResolutionValue;
				property.getValue().get(currentVerticalResolutionValue);
				setCurrentVerticalResolution(currentVerticalResolutionValue);
			}
			else if (String::equal(property.getName().getString(), "MaxRefreshRate"))
			{
				Uint32 maxRefreshRateValue;
				property.getValue().get(maxRefreshRateValue);
				setMaxRefreshRate(maxRefreshRateValue);
			}
			else if (String::equal(property.getName().getString(), "MinRefreshRate"))
			{
				Uint32 minRefreshRateValue;
				property.getValue().get(minRefreshRateValue);
				setMinRefreshRate(minRefreshRateValue);
			}
			else if (String::equal(property.getName().getString(), "CurrentRefreshRate"))
			{
				Uint32 currentRefreshRateValue;
				property.getValue().get(currentRefreshRateValue);
				setCurrentRefreshRate(currentRefreshRateValue);
			}
			else if (String::equal(property.getName().getString(), "CurrentScanMode"))
			{
				Uint16 currentScanModeValue;
				property.getValue().get(currentScanModeValue);
				setCurrentScanMode(currentScanModeValue);
			}
			else if (String::equal(property.getName().getString(), "CurrentNumberOfRows"))
			{
				Uint32 currentNumberOfRowsValue;
				property.getValue().get(currentNumberOfRowsValue);
				setCurrentNumberOfRows(currentNumberOfRowsValue);
			}
			else if (String::equal(property.getName().getString(), "CurrentNumberOfColumns"))
			{
				Uint32 currentNumberOfColumnsValue;
				property.getValue().get(currentNumberOfColumnsValue);
				setCurrentNumberOfColumns(currentNumberOfColumnsValue);
			}
			else if (String::equal(property.getName().getString(), "CurrentNumberOfColors"))
			{
				Uint64 currentNumberOfColorsValue;
				property.getValue().get(currentNumberOfColorsValue);
				setCurrentNumberOfColors(currentNumberOfColorsValue);
			}
			else if (String::equal(property.getName().getString(), "Capabilities"))
			{
				Array<Uint16> capabilitiesValue;
				property.getValue().get(capabilitiesValue);
				setCapabilities(capabilitiesValue);
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
			else if (String::equal(property.getName().getString(), "DataTransferRate"))
			{
				Uint16 dataTransferRateValue;
				property.getValue().get(dataTransferRateValue);
				setDataTransferRate(dataTransferRateValue);
			}
			else if (String::equal(property.getName().getString(), "AddressingMode"))
			{
				Uint16 addressingModeValue;
				property.getValue().get(addressingModeValue);
				setAddressingMode(addressingModeValue);
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

Uint32 UNIX_AGPVideoController::invokeRequestStateChange(
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

Uint32 UNIX_AGPVideoController::invokeSetPowerState(
		Uint16 &inPowerState,
		CIMDateTime &inTime
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SetPowerState */
	
	
	
	return returnValue;
}

Uint32 UNIX_AGPVideoController::invokeReset()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method Reset */
	
	
	
	return returnValue;
}

Uint32 UNIX_AGPVideoController::invokeEnableDevice(
		Boolean &inEnabled
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method EnableDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_AGPVideoController::invokeOnlineDevice(
		Boolean &inOnline
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method OnlineDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_AGPVideoController::invokeQuiesceDevice(
		Boolean &inQuiesce
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method QuiesceDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_AGPVideoController::invokeSaveProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SaveProperties */
	
	
	
	return returnValue;
}

Uint32 UNIX_AGPVideoController::invokeRestoreProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method RestoreProperties */
	
	
	
	return returnValue;
}


Boolean UNIX_AGPVideoController::initialize()
{
	return false;
}

Boolean UNIX_AGPVideoController::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("AGPVideoController");
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
	_creationClassName = String("UNIX_AGPVideoController");
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
	_numberOfVideoPages = Uint32(0);
	_maxMemorySupported = Uint32(0);
	_acceleratorCapabilities.clear();
	_capabilityDescriptions.clear();
	_currentBitsPerPixel = Uint32(0);
	_currentHorizontalResolution = Uint32(0);
	_currentVerticalResolution = Uint32(0);
	_maxRefreshRate = Uint32(0);
	_minRefreshRate = Uint32(0);
	_currentRefreshRate = Uint32(0);
	_currentScanMode = Uint16(0);
	_currentNumberOfRows = Uint32(0);
	_currentNumberOfColumns = Uint32(0);
	_currentNumberOfColors = Uint64(0);
	_capabilities.clear();
	_nonlocalVideoMemorySize = Uint32(0);
	_localBusWidth = Uint32(0);
	_usageModel = Uint16(0);
	_dataTransferRate = Uint16(0);
	_addressingMode = Uint16(0);
	_maximumAGPCommandQueuePath = Uint32(0);
	_maxNumberOfPipelinedAGPTransactions = Uint32(0);
	_graphicsApertureSize = Uint32(0);
	_aGPSpecificationVersionConformance = String ("");
	
	return false;
}

Boolean UNIX_AGPVideoController::finalize()
{
	return false;
}

Boolean UNIX_AGPVideoController::loadByName(const String name)
{
	return false;
}

Boolean UNIX_AGPVideoController::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_AGPVideoController::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AGPVideoController::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AGPVideoController::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AGPVideoController::validateInstance()
{
	return true;
}

