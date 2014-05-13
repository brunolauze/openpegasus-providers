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


UNIX_FlatPanel::UNIX_FlatPanel(void)
{
}

UNIX_FlatPanel::~UNIX_FlatPanel(void)
{
}

Boolean UNIX_FlatPanel::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_FlatPanel::getInstanceID() const
{
	return _instanceID;
}

void UNIX_FlatPanel::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_FlatPanel::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_FlatPanel::getCaption() const
{
	return _caption;
}

void UNIX_FlatPanel::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_FlatPanel::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_FlatPanel::getDescription() const
{
	return _description;
}

void UNIX_FlatPanel::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_FlatPanel::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_FlatPanel::getElementName() const
{
	return _elementName;
}

void UNIX_FlatPanel::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_FlatPanel::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_FlatPanel::getGeneration() const
{
	return _generation;
}

void UNIX_FlatPanel::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_FlatPanel::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_FlatPanel::getInstallDate() const
{
	return _installDate;
}

void UNIX_FlatPanel::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_FlatPanel::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_FlatPanel::getName() const
{
	return _name;
}

void UNIX_FlatPanel::setName(String &value)
{
	_name = value;
}

Boolean UNIX_FlatPanel::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_FlatPanel::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_FlatPanel::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_FlatPanel::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_FlatPanel::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_FlatPanel::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_FlatPanel::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_FlatPanel::getStatus() const
{
	return _status;
}

void UNIX_FlatPanel::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_FlatPanel::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_FlatPanel::getHealthState() const
{
	return _healthState;
}

void UNIX_FlatPanel::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_FlatPanel::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_FlatPanel::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_FlatPanel::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_FlatPanel::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_FlatPanel::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_FlatPanel::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_FlatPanel::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_FlatPanel::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_FlatPanel::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_FlatPanel::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_FlatPanel::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_FlatPanel::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_FlatPanel::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_FlatPanel::getEnabledState() const
{
	return _enabledState;
}

void UNIX_FlatPanel::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_FlatPanel::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_FlatPanel::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_FlatPanel::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_FlatPanel::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_FlatPanel::getRequestedState() const
{
	return _requestedState;
}

void UNIX_FlatPanel::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_FlatPanel::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_FlatPanel::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_FlatPanel::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_FlatPanel::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_FlatPanel::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_FlatPanel::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_FlatPanel::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_FlatPanel::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_FlatPanel::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_FlatPanel::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_FlatPanel::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_FlatPanel::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_FlatPanel::getAllocationState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOCATION_STATE, getAllocationState());
	return true;
}

String UNIX_FlatPanel::getAllocationState() const
{
	return _allocationState;
}

void UNIX_FlatPanel::setAllocationState(String &value)
{
	_allocationState = value;
}

Boolean UNIX_FlatPanel::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_FlatPanel::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_FlatPanel::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_FlatPanel::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_FlatPanel::getSystemName() const
{
	return _systemName;
}

void UNIX_FlatPanel::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_FlatPanel::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_FlatPanel::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_FlatPanel::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_FlatPanel::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_FlatPanel::getDeviceID() const
{
	return _deviceID;
}

void UNIX_FlatPanel::setDeviceID(String &value)
{
	_deviceID = value;
}

Boolean UNIX_FlatPanel::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_FlatPanel::getPowerManagementSupported() const
{
	return _powerManagementSupported;
}

void UNIX_FlatPanel::setPowerManagementSupported(Boolean &value)
{
	_powerManagementSupported = value;
}

Boolean UNIX_FlatPanel::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_FlatPanel::getPowerManagementCapabilities() const
{
	return _powerManagementCapabilities;
}

void UNIX_FlatPanel::setPowerManagementCapabilities(Array<Uint16> &value)
{
	_powerManagementCapabilities = value;
}

Boolean UNIX_FlatPanel::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_FlatPanel::getAvailability() const
{
	return _availability;
}

void UNIX_FlatPanel::setAvailability(Uint16 &value)
{
	_availability = value;
}

Boolean UNIX_FlatPanel::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_FlatPanel::getStatusInfo() const
{
	return _statusInfo;
}

void UNIX_FlatPanel::setStatusInfo(Uint16 &value)
{
	_statusInfo = value;
}

Boolean UNIX_FlatPanel::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_FlatPanel::getLastErrorCode() const
{
	return _lastErrorCode;
}

void UNIX_FlatPanel::setLastErrorCode(Uint32 &value)
{
	_lastErrorCode = value;
}

Boolean UNIX_FlatPanel::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_FlatPanel::getErrorDescription() const
{
	return _errorDescription;
}

void UNIX_FlatPanel::setErrorDescription(String &value)
{
	_errorDescription = value;
}

Boolean UNIX_FlatPanel::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_FlatPanel::getErrorCleared() const
{
	return _errorCleared;
}

void UNIX_FlatPanel::setErrorCleared(Boolean &value)
{
	_errorCleared = value;
}

Boolean UNIX_FlatPanel::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_FlatPanel::getOtherIdentifyingInfo() const
{
	return _otherIdentifyingInfo;
}

void UNIX_FlatPanel::setOtherIdentifyingInfo(Array<String> &value)
{
	_otherIdentifyingInfo = value;
}

Boolean UNIX_FlatPanel::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_FlatPanel::getPowerOnHours() const
{
	return _powerOnHours;
}

void UNIX_FlatPanel::setPowerOnHours(Uint64 &value)
{
	_powerOnHours = value;
}

Boolean UNIX_FlatPanel::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_FlatPanel::getTotalPowerOnHours() const
{
	return _totalPowerOnHours;
}

void UNIX_FlatPanel::setTotalPowerOnHours(Uint64 &value)
{
	_totalPowerOnHours = value;
}

Boolean UNIX_FlatPanel::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_FlatPanel::getIdentifyingDescriptions() const
{
	return _identifyingDescriptions;
}

void UNIX_FlatPanel::setIdentifyingDescriptions(Array<String> &value)
{
	_identifyingDescriptions = value;
}

Boolean UNIX_FlatPanel::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_FlatPanel::getAdditionalAvailability() const
{
	return _additionalAvailability;
}

void UNIX_FlatPanel::setAdditionalAvailability(Array<Uint16> &value)
{
	_additionalAvailability = value;
}

Boolean UNIX_FlatPanel::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_FlatPanel::getMaxQuiesceTime() const
{
	return _maxQuiesceTime;
}

void UNIX_FlatPanel::setMaxQuiesceTime(Uint64 &value)
{
	_maxQuiesceTime = value;
}

Boolean UNIX_FlatPanel::getLocationIndicator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCATION_INDICATOR, getLocationIndicator());
	return true;
}

Uint16 UNIX_FlatPanel::getLocationIndicator() const
{
	return _locationIndicator;
}

void UNIX_FlatPanel::setLocationIndicator(Uint16 &value)
{
	_locationIndicator = value;
}

Boolean UNIX_FlatPanel::getIsLocked(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_LOCKED, getIsLocked());
	return true;
}

Boolean UNIX_FlatPanel::getIsLocked() const
{
	return _isLocked;
}

void UNIX_FlatPanel::setIsLocked(Boolean &value)
{
	_isLocked = value;
}

Boolean UNIX_FlatPanel::getContrast(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONTRAST, getContrast());
	return true;
}

Uint32 UNIX_FlatPanel::getContrast() const
{
	return _contrast;
}

void UNIX_FlatPanel::setContrast(Uint32 &value)
{
	_contrast = value;
}

Boolean UNIX_FlatPanel::getDisplayCharacteristics(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DISPLAY_CHARACTERISTICS, getDisplayCharacteristics());
	return true;
}

Array<Uint16> UNIX_FlatPanel::getDisplayCharacteristics() const
{
	return _displayCharacteristics;
}

void UNIX_FlatPanel::setDisplayCharacteristics(Array<Uint16> &value)
{
	_displayCharacteristics = value;
}

Boolean UNIX_FlatPanel::getMaxContrast(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_CONTRAST, getMaxContrast());
	return true;
}

Uint32 UNIX_FlatPanel::getMaxContrast() const
{
	return _maxContrast;
}

void UNIX_FlatPanel::setMaxContrast(Uint32 &value)
{
	_maxContrast = value;
}

Boolean UNIX_FlatPanel::getBrightness(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BRIGHTNESS, getBrightness());
	return true;
}

Uint32 UNIX_FlatPanel::getBrightness() const
{
	return _brightness;
}

void UNIX_FlatPanel::setBrightness(Uint32 &value)
{
	_brightness = value;
}

Boolean UNIX_FlatPanel::getColorModePreset(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COLOR_MODE_PRESET, getColorModePreset());
	return true;
}

Uint16 UNIX_FlatPanel::getColorModePreset() const
{
	return _colorModePreset;
}

void UNIX_FlatPanel::setColorModePreset(Uint16 &value)
{
	_colorModePreset = value;
}

Boolean UNIX_FlatPanel::getColorModePresetCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COLOR_MODE_PRESET_CAPABILITIES, getColorModePresetCapabilities());
	return true;
}

Array<Uint16> UNIX_FlatPanel::getColorModePresetCapabilities() const
{
	return _colorModePresetCapabilities;
}

void UNIX_FlatPanel::setColorModePresetCapabilities(Array<Uint16> &value)
{
	_colorModePresetCapabilities = value;
}

Boolean UNIX_FlatPanel::getCurrentResolutionH(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_RESOLUTION_H, getCurrentResolutionH());
	return true;
}

Uint16 UNIX_FlatPanel::getCurrentResolutionH() const
{
	return _currentResolutionH;
}

void UNIX_FlatPanel::setCurrentResolutionH(Uint16 &value)
{
	_currentResolutionH = value;
}

Boolean UNIX_FlatPanel::getCurrentResolutionV(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_RESOLUTION_V, getCurrentResolutionV());
	return true;
}

Uint16 UNIX_FlatPanel::getCurrentResolutionV() const
{
	return _currentResolutionV;
}

void UNIX_FlatPanel::setCurrentResolutionV(Uint16 &value)
{
	_currentResolutionV = value;
}

Boolean UNIX_FlatPanel::getDisplayMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DISPLAY_MODE, getDisplayMode());
	return true;
}

Uint16 UNIX_FlatPanel::getDisplayMode() const
{
	return _displayMode;
}

void UNIX_FlatPanel::setDisplayMode(Uint16 &value)
{
	_displayMode = value;
}

Boolean UNIX_FlatPanel::getDisplayModeCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DISPLAY_MODE_CAPABILITIES, getDisplayModeCapabilities());
	return true;
}

Array<Uint16> UNIX_FlatPanel::getDisplayModeCapabilities() const
{
	return _displayModeCapabilities;
}

void UNIX_FlatPanel::setDisplayModeCapabilities(Array<Uint16> &value)
{
	_displayModeCapabilities = value;
}

Boolean UNIX_FlatPanel::getDisplayTechnologyType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DISPLAY_TECHNOLOGY_TYPE, getDisplayTechnologyType());
	return true;
}

Uint16 UNIX_FlatPanel::getDisplayTechnologyType() const
{
	return _displayTechnologyType;
}

void UNIX_FlatPanel::setDisplayTechnologyType(Uint16 &value)
{
	_displayTechnologyType = value;
}

Boolean UNIX_FlatPanel::getFrequencyH(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FREQUENCY_H, getFrequencyH());
	return true;
}

Uint32 UNIX_FlatPanel::getFrequencyH() const
{
	return _frequencyH;
}

void UNIX_FlatPanel::setFrequencyH(Uint32 &value)
{
	_frequencyH = value;
}

Boolean UNIX_FlatPanel::getFrequencyV(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FREQUENCY_V, getFrequencyV());
	return true;
}

Uint32 UNIX_FlatPanel::getFrequencyV() const
{
	return _frequencyV;
}

void UNIX_FlatPanel::setFrequencyV(Uint32 &value)
{
	_frequencyV = value;
}

Boolean UNIX_FlatPanel::getInputSource(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INPUT_SOURCE, getInputSource());
	return true;
}

Uint16 UNIX_FlatPanel::getInputSource() const
{
	return _inputSource;
}

void UNIX_FlatPanel::setInputSource(Uint16 &value)
{
	_inputSource = value;
}

Boolean UNIX_FlatPanel::getInputSourceCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INPUT_SOURCE_CAPABILITIES, getInputSourceCapabilities());
	return true;
}

Array<Uint16> UNIX_FlatPanel::getInputSourceCapabilities() const
{
	return _inputSourceCapabilities;
}

void UNIX_FlatPanel::setInputSourceCapabilities(Array<Uint16> &value)
{
	_inputSourceCapabilities = value;
}

Boolean UNIX_FlatPanel::getMCCSVersionNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_M_C_CS_VERSION_NUMBER, getMCCSVersionNumber());
	return true;
}

String UNIX_FlatPanel::getMCCSVersionNumber() const
{
	return _mCCSVersionNumber;
}

void UNIX_FlatPanel::setMCCSVersionNumber(String &value)
{
	_mCCSVersionNumber = value;
}

Boolean UNIX_FlatPanel::getMaxBrightness(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_BRIGHTNESS, getMaxBrightness());
	return true;
}

Uint32 UNIX_FlatPanel::getMaxBrightness() const
{
	return _maxBrightness;
}

void UNIX_FlatPanel::setMaxBrightness(Uint32 &value)
{
	_maxBrightness = value;
}

Boolean UNIX_FlatPanel::getOtherScalerManufacturerDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SCALER_MANUFACTURER_DESCRIPTION, getOtherScalerManufacturerDescription());
	return true;
}

String UNIX_FlatPanel::getOtherScalerManufacturerDescription() const
{
	return _otherScalerManufacturerDescription;
}

void UNIX_FlatPanel::setOtherScalerManufacturerDescription(String &value)
{
	_otherScalerManufacturerDescription = value;
}

Boolean UNIX_FlatPanel::getPerformAutoSetup(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERFORM_AUTO_SETUP, getPerformAutoSetup());
	return true;
}

Uint16 UNIX_FlatPanel::getPerformAutoSetup() const
{
	return _performAutoSetup;
}

void UNIX_FlatPanel::setPerformAutoSetup(Uint16 &value)
{
	_performAutoSetup = value;
}

Boolean UNIX_FlatPanel::getScalerManufacturer(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SCALER_MANUFACTURER, getScalerManufacturer());
	return true;
}

Uint16 UNIX_FlatPanel::getScalerManufacturer() const
{
	return _scalerManufacturer;
}

void UNIX_FlatPanel::setScalerManufacturer(Uint16 &value)
{
	_scalerManufacturer = value;
}

Boolean UNIX_FlatPanel::getHorizontalResolution(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HORIZONTAL_RESOLUTION, getHorizontalResolution());
	return true;
}

Uint32 UNIX_FlatPanel::getHorizontalResolution() const
{
	return _horizontalResolution;
}

void UNIX_FlatPanel::setHorizontalResolution(Uint32 &value)
{
	_horizontalResolution = value;
}

Boolean UNIX_FlatPanel::getVerticalResolution(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERTICAL_RESOLUTION, getVerticalResolution());
	return true;
}

Uint32 UNIX_FlatPanel::getVerticalResolution() const
{
	return _verticalResolution;
}

void UNIX_FlatPanel::setVerticalResolution(Uint32 &value)
{
	_verticalResolution = value;
}

Boolean UNIX_FlatPanel::getScanMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SCAN_MODE, getScanMode());
	return true;
}

Uint16 UNIX_FlatPanel::getScanMode() const
{
	return _scanMode;
}

void UNIX_FlatPanel::setScanMode(Uint16 &value)
{
	_scanMode = value;
}

Boolean UNIX_FlatPanel::getDisplayType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DISPLAY_TYPE, getDisplayType());
	return true;
}

Uint16 UNIX_FlatPanel::getDisplayType() const
{
	return _displayType;
}

void UNIX_FlatPanel::setDisplayType(Uint16 &value)
{
	_displayType = value;
}

Boolean UNIX_FlatPanel::getLightSource(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LIGHT_SOURCE, getLightSource());
	return true;
}

Uint16 UNIX_FlatPanel::getLightSource() const
{
	return _lightSource;
}

void UNIX_FlatPanel::setLightSource(Uint16 &value)
{
	_lightSource = value;
}

Boolean UNIX_FlatPanel::getSupportsColor(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTS_COLOR, getSupportsColor());
	return true;
}

Boolean UNIX_FlatPanel::getSupportsColor() const
{
	return _supportsColor;
}

void UNIX_FlatPanel::setSupportsColor(Boolean &value)
{
	_supportsColor = value;
}

Boolean UNIX_FlatPanel::getBuiltIn(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BUILT_IN, getBuiltIn());
	return true;
}

Uint16 UNIX_FlatPanel::getBuiltIn() const
{
	return _builtIn;
}

void UNIX_FlatPanel::setBuiltIn(Uint16 &value)
{
	_builtIn = value;
}


void UNIX_FlatPanel::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("FlatPanel");
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
	_creationClassName = String("UNIX_FlatPanel");
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
	_isLocked = Boolean(false);
	_contrast = Uint32(0);
	_displayCharacteristics.clear();
	_maxContrast = Uint32(0);
	_brightness = Uint32(0);
	_colorModePreset = Uint16(0);
	_colorModePresetCapabilities.clear();
	_currentResolutionH = Uint16(0);
	_currentResolutionV = Uint16(0);
	_displayMode = Uint16(0);
	_displayModeCapabilities.clear();
	_displayTechnologyType = Uint16(0);
	_frequencyH = Uint32(0);
	_frequencyV = Uint32(0);
	_inputSource = Uint16(0);
	_inputSourceCapabilities.clear();
	_mCCSVersionNumber = String ("");
	_maxBrightness = Uint32(0);
	_otherScalerManufacturerDescription = String ("");
	_performAutoSetup = Uint16(0);
	_scalerManufacturer = Uint16(0);
	_horizontalResolution = Uint32(0);
	_verticalResolution = Uint32(0);
	_scanMode = Uint16(0);
	_displayType = Uint16(0);
	_lightSource = Uint16(0);
	_supportsColor = Boolean(false);
	_builtIn = Uint16(0);

}

Boolean UNIX_FlatPanel::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "IsLocked"))
			{
				Boolean isLockedValue;
				property.getValue().get(isLockedValue);
				setIsLocked(isLockedValue);
			}
			else if (String::equal(property.getName().getString(), "Contrast"))
			{
				Uint32 contrastValue;
				property.getValue().get(contrastValue);
				setContrast(contrastValue);
			}
			else if (String::equal(property.getName().getString(), "DisplayCharacteristics"))
			{
				Array<Uint16> displayCharacteristicsValue;
				property.getValue().get(displayCharacteristicsValue);
				setDisplayCharacteristics(displayCharacteristicsValue);
			}
			else if (String::equal(property.getName().getString(), "MaxContrast"))
			{
				Uint32 maxContrastValue;
				property.getValue().get(maxContrastValue);
				setMaxContrast(maxContrastValue);
			}
			else if (String::equal(property.getName().getString(), "Brightness"))
			{
				Uint32 brightnessValue;
				property.getValue().get(brightnessValue);
				setBrightness(brightnessValue);
			}
			else if (String::equal(property.getName().getString(), "ColorModePreset"))
			{
				Uint16 colorModePresetValue;
				property.getValue().get(colorModePresetValue);
				setColorModePreset(colorModePresetValue);
			}
			else if (String::equal(property.getName().getString(), "ColorModePresetCapabilities"))
			{
				Array<Uint16> colorModePresetCapabilitiesValue;
				property.getValue().get(colorModePresetCapabilitiesValue);
				setColorModePresetCapabilities(colorModePresetCapabilitiesValue);
			}
			else if (String::equal(property.getName().getString(), "CurrentResolutionH"))
			{
				Uint16 currentResolutionHValue;
				property.getValue().get(currentResolutionHValue);
				setCurrentResolutionH(currentResolutionHValue);
			}
			else if (String::equal(property.getName().getString(), "CurrentResolutionV"))
			{
				Uint16 currentResolutionVValue;
				property.getValue().get(currentResolutionVValue);
				setCurrentResolutionV(currentResolutionVValue);
			}
			else if (String::equal(property.getName().getString(), "DisplayMode"))
			{
				Uint16 displayModeValue;
				property.getValue().get(displayModeValue);
				setDisplayMode(displayModeValue);
			}
			else if (String::equal(property.getName().getString(), "DisplayModeCapabilities"))
			{
				Array<Uint16> displayModeCapabilitiesValue;
				property.getValue().get(displayModeCapabilitiesValue);
				setDisplayModeCapabilities(displayModeCapabilitiesValue);
			}
			else if (String::equal(property.getName().getString(), "DisplayTechnologyType"))
			{
				Uint16 displayTechnologyTypeValue;
				property.getValue().get(displayTechnologyTypeValue);
				setDisplayTechnologyType(displayTechnologyTypeValue);
			}
			else if (String::equal(property.getName().getString(), "FrequencyH"))
			{
				Uint32 frequencyHValue;
				property.getValue().get(frequencyHValue);
				setFrequencyH(frequencyHValue);
			}
			else if (String::equal(property.getName().getString(), "FrequencyV"))
			{
				Uint32 frequencyVValue;
				property.getValue().get(frequencyVValue);
				setFrequencyV(frequencyVValue);
			}
			else if (String::equal(property.getName().getString(), "InputSource"))
			{
				Uint16 inputSourceValue;
				property.getValue().get(inputSourceValue);
				setInputSource(inputSourceValue);
			}
			else if (String::equal(property.getName().getString(), "InputSourceCapabilities"))
			{
				Array<Uint16> inputSourceCapabilitiesValue;
				property.getValue().get(inputSourceCapabilitiesValue);
				setInputSourceCapabilities(inputSourceCapabilitiesValue);
			}
			else if (String::equal(property.getName().getString(), "MCCSVersionNumber"))
			{
				String mCCSVersionNumberValue;
				property.getValue().get(mCCSVersionNumberValue);
				setMCCSVersionNumber(mCCSVersionNumberValue);
			}
			else if (String::equal(property.getName().getString(), "MaxBrightness"))
			{
				Uint32 maxBrightnessValue;
				property.getValue().get(maxBrightnessValue);
				setMaxBrightness(maxBrightnessValue);
			}
			else if (String::equal(property.getName().getString(), "OtherScalerManufacturerDescription"))
			{
				String otherScalerManufacturerDescriptionValue;
				property.getValue().get(otherScalerManufacturerDescriptionValue);
				setOtherScalerManufacturerDescription(otherScalerManufacturerDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "PerformAutoSetup"))
			{
				Uint16 performAutoSetupValue;
				property.getValue().get(performAutoSetupValue);
				setPerformAutoSetup(performAutoSetupValue);
			}
			else if (String::equal(property.getName().getString(), "ScalerManufacturer"))
			{
				Uint16 scalerManufacturerValue;
				property.getValue().get(scalerManufacturerValue);
				setScalerManufacturer(scalerManufacturerValue);
			}
			else if (String::equal(property.getName().getString(), "HorizontalResolution"))
			{
				Uint32 horizontalResolutionValue;
				property.getValue().get(horizontalResolutionValue);
				setHorizontalResolution(horizontalResolutionValue);
			}
			else if (String::equal(property.getName().getString(), "VerticalResolution"))
			{
				Uint32 verticalResolutionValue;
				property.getValue().get(verticalResolutionValue);
				setVerticalResolution(verticalResolutionValue);
			}
			else if (String::equal(property.getName().getString(), "ScanMode"))
			{
				Uint16 scanModeValue;
				property.getValue().get(scanModeValue);
				setScanMode(scanModeValue);
			}
			else if (String::equal(property.getName().getString(), "DisplayType"))
			{
				Uint16 displayTypeValue;
				property.getValue().get(displayTypeValue);
				setDisplayType(displayTypeValue);
			}
			else if (String::equal(property.getName().getString(), "LightSource"))
			{
				Uint16 lightSourceValue;
				property.getValue().get(lightSourceValue);
				setLightSource(lightSourceValue);
			}
			else if (String::equal(property.getName().getString(), "SupportsColor"))
			{
				Boolean supportsColorValue;
				property.getValue().get(supportsColorValue);
				setSupportsColor(supportsColorValue);
			}
			else if (String::equal(property.getName().getString(), "BuiltIn"))
			{
				Uint16 builtInValue;
				property.getValue().get(builtInValue);
				setBuiltIn(builtInValue);
			}
	}
	return true;
}

Uint32 UNIX_FlatPanel::invokeRequestStateChange(
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

Uint32 UNIX_FlatPanel::invokeSetPowerState(
		Uint16 &inPowerState,
		CIMDateTime &inTime
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SetPowerState */
	
	
	
	return returnValue;
}

Uint32 UNIX_FlatPanel::invokeReset()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method Reset */
	
	
	
	return returnValue;
}

Uint32 UNIX_FlatPanel::invokeEnableDevice(
		Boolean &inEnabled
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method EnableDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_FlatPanel::invokeOnlineDevice(
		Boolean &inOnline
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method OnlineDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_FlatPanel::invokeQuiesceDevice(
		Boolean &inQuiesce
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method QuiesceDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_FlatPanel::invokeSaveProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SaveProperties */
	
	
	
	return returnValue;
}

Uint32 UNIX_FlatPanel::invokeRestoreProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method RestoreProperties */
	
	
	
	return returnValue;
}

Uint32 UNIX_FlatPanel::invokeButtonLock(
		Uint16 &inOSDParam,
		Uint16 &inPowerButtonParam
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ButtonLock */
	
	
	
	return returnValue;
}

Uint32 UNIX_FlatPanel::invokeRestoreFactoryDefault(
		Uint16 &inRestoreMode
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method RestoreFactoryDefault */
	
	
	
	return returnValue;
}


Boolean UNIX_FlatPanel::initialize()
{
	return false;
}

Boolean UNIX_FlatPanel::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("FlatPanel");
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
	_creationClassName = String("UNIX_FlatPanel");
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
	_isLocked = Boolean(false);
	_contrast = Uint32(0);
	_displayCharacteristics.clear();
	_maxContrast = Uint32(0);
	_brightness = Uint32(0);
	_colorModePreset = Uint16(0);
	_colorModePresetCapabilities.clear();
	_currentResolutionH = Uint16(0);
	_currentResolutionV = Uint16(0);
	_displayMode = Uint16(0);
	_displayModeCapabilities.clear();
	_displayTechnologyType = Uint16(0);
	_frequencyH = Uint32(0);
	_frequencyV = Uint32(0);
	_inputSource = Uint16(0);
	_inputSourceCapabilities.clear();
	_mCCSVersionNumber = String ("");
	_maxBrightness = Uint32(0);
	_otherScalerManufacturerDescription = String ("");
	_performAutoSetup = Uint16(0);
	_scalerManufacturer = Uint16(0);
	_horizontalResolution = Uint32(0);
	_verticalResolution = Uint32(0);
	_scanMode = Uint16(0);
	_displayType = Uint16(0);
	_lightSource = Uint16(0);
	_supportsColor = Boolean(false);
	_builtIn = Uint16(0);
	
	return false;
}

Boolean UNIX_FlatPanel::finalize()
{
	return false;
}

Boolean UNIX_FlatPanel::loadByName(const String name)
{
	return false;
}

Boolean UNIX_FlatPanel::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_FlatPanel::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FlatPanel::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FlatPanel::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FlatPanel::validateInstance()
{
	return true;
}

