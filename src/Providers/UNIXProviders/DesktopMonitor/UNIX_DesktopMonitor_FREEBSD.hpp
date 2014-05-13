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


UNIX_DesktopMonitor::UNIX_DesktopMonitor(void)
{
}

UNIX_DesktopMonitor::~UNIX_DesktopMonitor(void)
{
}

Boolean UNIX_DesktopMonitor::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_DesktopMonitor::getInstanceID() const
{
	return _instanceID;
}

void UNIX_DesktopMonitor::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_DesktopMonitor::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_DesktopMonitor::getCaption() const
{
	return _caption;
}

void UNIX_DesktopMonitor::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_DesktopMonitor::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_DesktopMonitor::getDescription() const
{
	return _description;
}

void UNIX_DesktopMonitor::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_DesktopMonitor::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_DesktopMonitor::getElementName() const
{
	return _elementName;
}

void UNIX_DesktopMonitor::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_DesktopMonitor::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_DesktopMonitor::getGeneration() const
{
	return _generation;
}

void UNIX_DesktopMonitor::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_DesktopMonitor::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_DesktopMonitor::getInstallDate() const
{
	return _installDate;
}

void UNIX_DesktopMonitor::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_DesktopMonitor::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_DesktopMonitor::getName() const
{
	return _name;
}

void UNIX_DesktopMonitor::setName(String &value)
{
	_name = value;
}

Boolean UNIX_DesktopMonitor::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_DesktopMonitor::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_DesktopMonitor::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_DesktopMonitor::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_DesktopMonitor::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_DesktopMonitor::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_DesktopMonitor::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_DesktopMonitor::getStatus() const
{
	return _status;
}

void UNIX_DesktopMonitor::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_DesktopMonitor::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_DesktopMonitor::getHealthState() const
{
	return _healthState;
}

void UNIX_DesktopMonitor::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_DesktopMonitor::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_DesktopMonitor::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_DesktopMonitor::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_DesktopMonitor::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_DesktopMonitor::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_DesktopMonitor::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_DesktopMonitor::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_DesktopMonitor::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_DesktopMonitor::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_DesktopMonitor::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_DesktopMonitor::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_DesktopMonitor::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_DesktopMonitor::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_DesktopMonitor::getEnabledState() const
{
	return _enabledState;
}

void UNIX_DesktopMonitor::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_DesktopMonitor::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_DesktopMonitor::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_DesktopMonitor::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_DesktopMonitor::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_DesktopMonitor::getRequestedState() const
{
	return _requestedState;
}

void UNIX_DesktopMonitor::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_DesktopMonitor::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_DesktopMonitor::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_DesktopMonitor::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_DesktopMonitor::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_DesktopMonitor::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_DesktopMonitor::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_DesktopMonitor::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_DesktopMonitor::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_DesktopMonitor::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_DesktopMonitor::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_DesktopMonitor::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_DesktopMonitor::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_DesktopMonitor::getAllocationState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOCATION_STATE, getAllocationState());
	return true;
}

String UNIX_DesktopMonitor::getAllocationState() const
{
	return _allocationState;
}

void UNIX_DesktopMonitor::setAllocationState(String &value)
{
	_allocationState = value;
}

Boolean UNIX_DesktopMonitor::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_DesktopMonitor::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_DesktopMonitor::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_DesktopMonitor::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_DesktopMonitor::getSystemName() const
{
	return _systemName;
}

void UNIX_DesktopMonitor::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_DesktopMonitor::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_DesktopMonitor::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_DesktopMonitor::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_DesktopMonitor::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_DesktopMonitor::getDeviceID() const
{
	return _deviceID;
}

void UNIX_DesktopMonitor::setDeviceID(String &value)
{
	_deviceID = value;
}

Boolean UNIX_DesktopMonitor::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_DesktopMonitor::getPowerManagementSupported() const
{
	return _powerManagementSupported;
}

void UNIX_DesktopMonitor::setPowerManagementSupported(Boolean &value)
{
	_powerManagementSupported = value;
}

Boolean UNIX_DesktopMonitor::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_DesktopMonitor::getPowerManagementCapabilities() const
{
	return _powerManagementCapabilities;
}

void UNIX_DesktopMonitor::setPowerManagementCapabilities(Array<Uint16> &value)
{
	_powerManagementCapabilities = value;
}

Boolean UNIX_DesktopMonitor::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_DesktopMonitor::getAvailability() const
{
	return _availability;
}

void UNIX_DesktopMonitor::setAvailability(Uint16 &value)
{
	_availability = value;
}

Boolean UNIX_DesktopMonitor::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_DesktopMonitor::getStatusInfo() const
{
	return _statusInfo;
}

void UNIX_DesktopMonitor::setStatusInfo(Uint16 &value)
{
	_statusInfo = value;
}

Boolean UNIX_DesktopMonitor::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_DesktopMonitor::getLastErrorCode() const
{
	return _lastErrorCode;
}

void UNIX_DesktopMonitor::setLastErrorCode(Uint32 &value)
{
	_lastErrorCode = value;
}

Boolean UNIX_DesktopMonitor::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_DesktopMonitor::getErrorDescription() const
{
	return _errorDescription;
}

void UNIX_DesktopMonitor::setErrorDescription(String &value)
{
	_errorDescription = value;
}

Boolean UNIX_DesktopMonitor::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_DesktopMonitor::getErrorCleared() const
{
	return _errorCleared;
}

void UNIX_DesktopMonitor::setErrorCleared(Boolean &value)
{
	_errorCleared = value;
}

Boolean UNIX_DesktopMonitor::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_DesktopMonitor::getOtherIdentifyingInfo() const
{
	return _otherIdentifyingInfo;
}

void UNIX_DesktopMonitor::setOtherIdentifyingInfo(Array<String> &value)
{
	_otherIdentifyingInfo = value;
}

Boolean UNIX_DesktopMonitor::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_DesktopMonitor::getPowerOnHours() const
{
	return _powerOnHours;
}

void UNIX_DesktopMonitor::setPowerOnHours(Uint64 &value)
{
	_powerOnHours = value;
}

Boolean UNIX_DesktopMonitor::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_DesktopMonitor::getTotalPowerOnHours() const
{
	return _totalPowerOnHours;
}

void UNIX_DesktopMonitor::setTotalPowerOnHours(Uint64 &value)
{
	_totalPowerOnHours = value;
}

Boolean UNIX_DesktopMonitor::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_DesktopMonitor::getIdentifyingDescriptions() const
{
	return _identifyingDescriptions;
}

void UNIX_DesktopMonitor::setIdentifyingDescriptions(Array<String> &value)
{
	_identifyingDescriptions = value;
}

Boolean UNIX_DesktopMonitor::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_DesktopMonitor::getAdditionalAvailability() const
{
	return _additionalAvailability;
}

void UNIX_DesktopMonitor::setAdditionalAvailability(Array<Uint16> &value)
{
	_additionalAvailability = value;
}

Boolean UNIX_DesktopMonitor::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_DesktopMonitor::getMaxQuiesceTime() const
{
	return _maxQuiesceTime;
}

void UNIX_DesktopMonitor::setMaxQuiesceTime(Uint64 &value)
{
	_maxQuiesceTime = value;
}

Boolean UNIX_DesktopMonitor::getLocationIndicator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCATION_INDICATOR, getLocationIndicator());
	return true;
}

Uint16 UNIX_DesktopMonitor::getLocationIndicator() const
{
	return _locationIndicator;
}

void UNIX_DesktopMonitor::setLocationIndicator(Uint16 &value)
{
	_locationIndicator = value;
}

Boolean UNIX_DesktopMonitor::getIsLocked(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_LOCKED, getIsLocked());
	return true;
}

Boolean UNIX_DesktopMonitor::getIsLocked() const
{
	return _isLocked;
}

void UNIX_DesktopMonitor::setIsLocked(Boolean &value)
{
	_isLocked = value;
}

Boolean UNIX_DesktopMonitor::getContrast(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONTRAST, getContrast());
	return true;
}

Uint32 UNIX_DesktopMonitor::getContrast() const
{
	return _contrast;
}

void UNIX_DesktopMonitor::setContrast(Uint32 &value)
{
	_contrast = value;
}

Boolean UNIX_DesktopMonitor::getDisplayCharacteristics(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DISPLAY_CHARACTERISTICS, getDisplayCharacteristics());
	return true;
}

Array<Uint16> UNIX_DesktopMonitor::getDisplayCharacteristics() const
{
	return _displayCharacteristics;
}

void UNIX_DesktopMonitor::setDisplayCharacteristics(Array<Uint16> &value)
{
	_displayCharacteristics = value;
}

Boolean UNIX_DesktopMonitor::getMaxContrast(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_CONTRAST, getMaxContrast());
	return true;
}

Uint32 UNIX_DesktopMonitor::getMaxContrast() const
{
	return _maxContrast;
}

void UNIX_DesktopMonitor::setMaxContrast(Uint32 &value)
{
	_maxContrast = value;
}

Boolean UNIX_DesktopMonitor::getBrightness(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BRIGHTNESS, getBrightness());
	return true;
}

Uint32 UNIX_DesktopMonitor::getBrightness() const
{
	return _brightness;
}

void UNIX_DesktopMonitor::setBrightness(Uint32 &value)
{
	_brightness = value;
}

Boolean UNIX_DesktopMonitor::getColorModePreset(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COLOR_MODE_PRESET, getColorModePreset());
	return true;
}

Uint16 UNIX_DesktopMonitor::getColorModePreset() const
{
	return _colorModePreset;
}

void UNIX_DesktopMonitor::setColorModePreset(Uint16 &value)
{
	_colorModePreset = value;
}

Boolean UNIX_DesktopMonitor::getColorModePresetCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COLOR_MODE_PRESET_CAPABILITIES, getColorModePresetCapabilities());
	return true;
}

Array<Uint16> UNIX_DesktopMonitor::getColorModePresetCapabilities() const
{
	return _colorModePresetCapabilities;
}

void UNIX_DesktopMonitor::setColorModePresetCapabilities(Array<Uint16> &value)
{
	_colorModePresetCapabilities = value;
}

Boolean UNIX_DesktopMonitor::getCurrentResolutionH(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_RESOLUTION_H, getCurrentResolutionH());
	return true;
}

Uint16 UNIX_DesktopMonitor::getCurrentResolutionH() const
{
	return _currentResolutionH;
}

void UNIX_DesktopMonitor::setCurrentResolutionH(Uint16 &value)
{
	_currentResolutionH = value;
}

Boolean UNIX_DesktopMonitor::getCurrentResolutionV(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_RESOLUTION_V, getCurrentResolutionV());
	return true;
}

Uint16 UNIX_DesktopMonitor::getCurrentResolutionV() const
{
	return _currentResolutionV;
}

void UNIX_DesktopMonitor::setCurrentResolutionV(Uint16 &value)
{
	_currentResolutionV = value;
}

Boolean UNIX_DesktopMonitor::getDisplayMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DISPLAY_MODE, getDisplayMode());
	return true;
}

Uint16 UNIX_DesktopMonitor::getDisplayMode() const
{
	return _displayMode;
}

void UNIX_DesktopMonitor::setDisplayMode(Uint16 &value)
{
	_displayMode = value;
}

Boolean UNIX_DesktopMonitor::getDisplayModeCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DISPLAY_MODE_CAPABILITIES, getDisplayModeCapabilities());
	return true;
}

Array<Uint16> UNIX_DesktopMonitor::getDisplayModeCapabilities() const
{
	return _displayModeCapabilities;
}

void UNIX_DesktopMonitor::setDisplayModeCapabilities(Array<Uint16> &value)
{
	_displayModeCapabilities = value;
}

Boolean UNIX_DesktopMonitor::getDisplayTechnologyType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DISPLAY_TECHNOLOGY_TYPE, getDisplayTechnologyType());
	return true;
}

Uint16 UNIX_DesktopMonitor::getDisplayTechnologyType() const
{
	return _displayTechnologyType;
}

void UNIX_DesktopMonitor::setDisplayTechnologyType(Uint16 &value)
{
	_displayTechnologyType = value;
}

Boolean UNIX_DesktopMonitor::getFrequencyH(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FREQUENCY_H, getFrequencyH());
	return true;
}

Uint32 UNIX_DesktopMonitor::getFrequencyH() const
{
	return _frequencyH;
}

void UNIX_DesktopMonitor::setFrequencyH(Uint32 &value)
{
	_frequencyH = value;
}

Boolean UNIX_DesktopMonitor::getFrequencyV(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FREQUENCY_V, getFrequencyV());
	return true;
}

Uint32 UNIX_DesktopMonitor::getFrequencyV() const
{
	return _frequencyV;
}

void UNIX_DesktopMonitor::setFrequencyV(Uint32 &value)
{
	_frequencyV = value;
}

Boolean UNIX_DesktopMonitor::getInputSource(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INPUT_SOURCE, getInputSource());
	return true;
}

Uint16 UNIX_DesktopMonitor::getInputSource() const
{
	return _inputSource;
}

void UNIX_DesktopMonitor::setInputSource(Uint16 &value)
{
	_inputSource = value;
}

Boolean UNIX_DesktopMonitor::getInputSourceCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INPUT_SOURCE_CAPABILITIES, getInputSourceCapabilities());
	return true;
}

Array<Uint16> UNIX_DesktopMonitor::getInputSourceCapabilities() const
{
	return _inputSourceCapabilities;
}

void UNIX_DesktopMonitor::setInputSourceCapabilities(Array<Uint16> &value)
{
	_inputSourceCapabilities = value;
}

Boolean UNIX_DesktopMonitor::getMCCSVersionNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_M_C_CS_VERSION_NUMBER, getMCCSVersionNumber());
	return true;
}

String UNIX_DesktopMonitor::getMCCSVersionNumber() const
{
	return _mCCSVersionNumber;
}

void UNIX_DesktopMonitor::setMCCSVersionNumber(String &value)
{
	_mCCSVersionNumber = value;
}

Boolean UNIX_DesktopMonitor::getMaxBrightness(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_BRIGHTNESS, getMaxBrightness());
	return true;
}

Uint32 UNIX_DesktopMonitor::getMaxBrightness() const
{
	return _maxBrightness;
}

void UNIX_DesktopMonitor::setMaxBrightness(Uint32 &value)
{
	_maxBrightness = value;
}

Boolean UNIX_DesktopMonitor::getOtherScalerManufacturerDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SCALER_MANUFACTURER_DESCRIPTION, getOtherScalerManufacturerDescription());
	return true;
}

String UNIX_DesktopMonitor::getOtherScalerManufacturerDescription() const
{
	return _otherScalerManufacturerDescription;
}

void UNIX_DesktopMonitor::setOtherScalerManufacturerDescription(String &value)
{
	_otherScalerManufacturerDescription = value;
}

Boolean UNIX_DesktopMonitor::getPerformAutoSetup(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERFORM_AUTO_SETUP, getPerformAutoSetup());
	return true;
}

Uint16 UNIX_DesktopMonitor::getPerformAutoSetup() const
{
	return _performAutoSetup;
}

void UNIX_DesktopMonitor::setPerformAutoSetup(Uint16 &value)
{
	_performAutoSetup = value;
}

Boolean UNIX_DesktopMonitor::getScalerManufacturer(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SCALER_MANUFACTURER, getScalerManufacturer());
	return true;
}

Uint16 UNIX_DesktopMonitor::getScalerManufacturer() const
{
	return _scalerManufacturer;
}

void UNIX_DesktopMonitor::setScalerManufacturer(Uint16 &value)
{
	_scalerManufacturer = value;
}

Boolean UNIX_DesktopMonitor::getDisplayType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DISPLAY_TYPE, getDisplayType());
	return true;
}

Uint16 UNIX_DesktopMonitor::getDisplayType() const
{
	return _displayType;
}

void UNIX_DesktopMonitor::setDisplayType(Uint16 &value)
{
	_displayType = value;
}

Boolean UNIX_DesktopMonitor::getBandwidth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BANDWIDTH, getBandwidth());
	return true;
}

Uint32 UNIX_DesktopMonitor::getBandwidth() const
{
	return _bandwidth;
}

void UNIX_DesktopMonitor::setBandwidth(Uint32 &value)
{
	_bandwidth = value;
}

Boolean UNIX_DesktopMonitor::getScreenHeight(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SCREEN_HEIGHT, getScreenHeight());
	return true;
}

Uint32 UNIX_DesktopMonitor::getScreenHeight() const
{
	return _screenHeight;
}

void UNIX_DesktopMonitor::setScreenHeight(Uint32 &value)
{
	_screenHeight = value;
}

Boolean UNIX_DesktopMonitor::getScreenWidth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SCREEN_WIDTH, getScreenWidth());
	return true;
}

Uint32 UNIX_DesktopMonitor::getScreenWidth() const
{
	return _screenWidth;
}

void UNIX_DesktopMonitor::setScreenWidth(Uint32 &value)
{
	_screenWidth = value;
}


void UNIX_DesktopMonitor::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("DesktopMonitor");
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
	_creationClassName = String("UNIX_DesktopMonitor");
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
	_displayType = Uint16(0);
	_bandwidth = Uint32(0);
	_screenHeight = Uint32(0);
	_screenWidth = Uint32(0);

}

Boolean UNIX_DesktopMonitor::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "DisplayType"))
			{
				Uint16 displayTypeValue;
				property.getValue().get(displayTypeValue);
				setDisplayType(displayTypeValue);
			}
			else if (String::equal(property.getName().getString(), "Bandwidth"))
			{
				Uint32 bandwidthValue;
				property.getValue().get(bandwidthValue);
				setBandwidth(bandwidthValue);
			}
			else if (String::equal(property.getName().getString(), "ScreenHeight"))
			{
				Uint32 screenHeightValue;
				property.getValue().get(screenHeightValue);
				setScreenHeight(screenHeightValue);
			}
			else if (String::equal(property.getName().getString(), "ScreenWidth"))
			{
				Uint32 screenWidthValue;
				property.getValue().get(screenWidthValue);
				setScreenWidth(screenWidthValue);
			}
	}
	return true;
}

Uint32 UNIX_DesktopMonitor::invokeRequestStateChange(
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

Uint32 UNIX_DesktopMonitor::invokeSetPowerState(
		Uint16 &inPowerState,
		CIMDateTime &inTime
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SetPowerState */
	
	
	
	return returnValue;
}

Uint32 UNIX_DesktopMonitor::invokeReset()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method Reset */
	
	
	
	return returnValue;
}

Uint32 UNIX_DesktopMonitor::invokeEnableDevice(
		Boolean &inEnabled
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method EnableDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_DesktopMonitor::invokeOnlineDevice(
		Boolean &inOnline
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method OnlineDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_DesktopMonitor::invokeQuiesceDevice(
		Boolean &inQuiesce
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method QuiesceDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_DesktopMonitor::invokeSaveProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SaveProperties */
	
	
	
	return returnValue;
}

Uint32 UNIX_DesktopMonitor::invokeRestoreProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method RestoreProperties */
	
	
	
	return returnValue;
}

Uint32 UNIX_DesktopMonitor::invokeButtonLock(
		Uint16 &inOSDParam,
		Uint16 &inPowerButtonParam
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ButtonLock */
	
	
	
	return returnValue;
}

Uint32 UNIX_DesktopMonitor::invokeRestoreFactoryDefault(
		Uint16 &inRestoreMode
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method RestoreFactoryDefault */
	
	
	
	return returnValue;
}


Boolean UNIX_DesktopMonitor::initialize()
{
	return false;
}

Boolean UNIX_DesktopMonitor::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("DesktopMonitor");
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
	_creationClassName = String("UNIX_DesktopMonitor");
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
	_displayType = Uint16(0);
	_bandwidth = Uint32(0);
	_screenHeight = Uint32(0);
	_screenWidth = Uint32(0);
	
	return false;
}

Boolean UNIX_DesktopMonitor::finalize()
{
	return false;
}

Boolean UNIX_DesktopMonitor::loadByName(const String name)
{
	return false;
}

Boolean UNIX_DesktopMonitor::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_DesktopMonitor::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DesktopMonitor::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DesktopMonitor::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DesktopMonitor::validateInstance()
{
	return true;
}

