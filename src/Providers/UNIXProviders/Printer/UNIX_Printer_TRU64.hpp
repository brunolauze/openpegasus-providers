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


UNIX_Printer::UNIX_Printer(void)
{
}

UNIX_Printer::~UNIX_Printer(void)
{
}

Boolean UNIX_Printer::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_Printer::getInstanceID() const
{
	return _instanceID;
}

void UNIX_Printer::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_Printer::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_Printer::getCaption() const
{
	return _caption;
}

void UNIX_Printer::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_Printer::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_Printer::getDescription() const
{
	return _description;
}

void UNIX_Printer::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_Printer::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_Printer::getElementName() const
{
	return _elementName;
}

void UNIX_Printer::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_Printer::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_Printer::getGeneration() const
{
	return _generation;
}

void UNIX_Printer::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_Printer::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_Printer::getInstallDate() const
{
	return _installDate;
}

void UNIX_Printer::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_Printer::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_Printer::getName() const
{
	return _name;
}

void UNIX_Printer::setName(String &value)
{
	_name = value;
}

Boolean UNIX_Printer::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_Printer::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_Printer::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_Printer::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_Printer::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_Printer::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_Printer::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_Printer::getStatus() const
{
	return _status;
}

void UNIX_Printer::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_Printer::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_Printer::getHealthState() const
{
	return _healthState;
}

void UNIX_Printer::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_Printer::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_Printer::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_Printer::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_Printer::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_Printer::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_Printer::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_Printer::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_Printer::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_Printer::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_Printer::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_Printer::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_Printer::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_Printer::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_Printer::getEnabledState() const
{
	return _enabledState;
}

void UNIX_Printer::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_Printer::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_Printer::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_Printer::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_Printer::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_Printer::getRequestedState() const
{
	return _requestedState;
}

void UNIX_Printer::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_Printer::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_Printer::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_Printer::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_Printer::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_Printer::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_Printer::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_Printer::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_Printer::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_Printer::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_Printer::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_Printer::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_Printer::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_Printer::getAllocationState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOCATION_STATE, getAllocationState());
	return true;
}

String UNIX_Printer::getAllocationState() const
{
	return _allocationState;
}

void UNIX_Printer::setAllocationState(String &value)
{
	_allocationState = value;
}

Boolean UNIX_Printer::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_Printer::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_Printer::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_Printer::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_Printer::getSystemName() const
{
	return _systemName;
}

void UNIX_Printer::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_Printer::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_Printer::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_Printer::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_Printer::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_Printer::getDeviceID() const
{
	return _deviceID;
}

void UNIX_Printer::setDeviceID(String &value)
{
	_deviceID = value;
}

Boolean UNIX_Printer::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_Printer::getPowerManagementSupported() const
{
	return _powerManagementSupported;
}

void UNIX_Printer::setPowerManagementSupported(Boolean &value)
{
	_powerManagementSupported = value;
}

Boolean UNIX_Printer::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_Printer::getPowerManagementCapabilities() const
{
	return _powerManagementCapabilities;
}

void UNIX_Printer::setPowerManagementCapabilities(Array<Uint16> &value)
{
	_powerManagementCapabilities = value;
}

Boolean UNIX_Printer::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_Printer::getAvailability() const
{
	return _availability;
}

void UNIX_Printer::setAvailability(Uint16 &value)
{
	_availability = value;
}

Boolean UNIX_Printer::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_Printer::getStatusInfo() const
{
	return _statusInfo;
}

void UNIX_Printer::setStatusInfo(Uint16 &value)
{
	_statusInfo = value;
}

Boolean UNIX_Printer::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_Printer::getLastErrorCode() const
{
	return _lastErrorCode;
}

void UNIX_Printer::setLastErrorCode(Uint32 &value)
{
	_lastErrorCode = value;
}

Boolean UNIX_Printer::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_Printer::getErrorDescription() const
{
	return _errorDescription;
}

void UNIX_Printer::setErrorDescription(String &value)
{
	_errorDescription = value;
}

Boolean UNIX_Printer::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_Printer::getErrorCleared() const
{
	return _errorCleared;
}

void UNIX_Printer::setErrorCleared(Boolean &value)
{
	_errorCleared = value;
}

Boolean UNIX_Printer::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_Printer::getOtherIdentifyingInfo() const
{
	return _otherIdentifyingInfo;
}

void UNIX_Printer::setOtherIdentifyingInfo(Array<String> &value)
{
	_otherIdentifyingInfo = value;
}

Boolean UNIX_Printer::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_Printer::getPowerOnHours() const
{
	return _powerOnHours;
}

void UNIX_Printer::setPowerOnHours(Uint64 &value)
{
	_powerOnHours = value;
}

Boolean UNIX_Printer::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_Printer::getTotalPowerOnHours() const
{
	return _totalPowerOnHours;
}

void UNIX_Printer::setTotalPowerOnHours(Uint64 &value)
{
	_totalPowerOnHours = value;
}

Boolean UNIX_Printer::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_Printer::getIdentifyingDescriptions() const
{
	return _identifyingDescriptions;
}

void UNIX_Printer::setIdentifyingDescriptions(Array<String> &value)
{
	_identifyingDescriptions = value;
}

Boolean UNIX_Printer::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_Printer::getAdditionalAvailability() const
{
	return _additionalAvailability;
}

void UNIX_Printer::setAdditionalAvailability(Array<Uint16> &value)
{
	_additionalAvailability = value;
}

Boolean UNIX_Printer::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_Printer::getMaxQuiesceTime() const
{
	return _maxQuiesceTime;
}

void UNIX_Printer::setMaxQuiesceTime(Uint64 &value)
{
	_maxQuiesceTime = value;
}

Boolean UNIX_Printer::getLocationIndicator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCATION_INDICATOR, getLocationIndicator());
	return true;
}

Uint16 UNIX_Printer::getLocationIndicator() const
{
	return _locationIndicator;
}

void UNIX_Printer::setLocationIndicator(Uint16 &value)
{
	_locationIndicator = value;
}

Boolean UNIX_Printer::getPrinterStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRINTER_STATUS, getPrinterStatus());
	return true;
}

Uint16 UNIX_Printer::getPrinterStatus() const
{
	return _printerStatus;
}

void UNIX_Printer::setPrinterStatus(Uint16 &value)
{
	_printerStatus = value;
}

Boolean UNIX_Printer::getDetectedErrorState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETECTED_ERROR_STATE, getDetectedErrorState());
	return true;
}

Uint16 UNIX_Printer::getDetectedErrorState() const
{
	return _detectedErrorState;
}

void UNIX_Printer::setDetectedErrorState(Uint16 &value)
{
	_detectedErrorState = value;
}

Boolean UNIX_Printer::getErrorInformation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_INFORMATION, getErrorInformation());
	return true;
}

Array<String> UNIX_Printer::getErrorInformation() const
{
	return _errorInformation;
}

void UNIX_Printer::setErrorInformation(Array<String> &value)
{
	_errorInformation = value;
}

Boolean UNIX_Printer::getPaperSizesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PAPER_SIZES_SUPPORTED, getPaperSizesSupported());
	return true;
}

Array<Uint16> UNIX_Printer::getPaperSizesSupported() const
{
	return _paperSizesSupported;
}

void UNIX_Printer::setPaperSizesSupported(Array<Uint16> &value)
{
	_paperSizesSupported = value;
}

Boolean UNIX_Printer::getPaperTypesAvailable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PAPER_TYPES_AVAILABLE, getPaperTypesAvailable());
	return true;
}

Array<String> UNIX_Printer::getPaperTypesAvailable() const
{
	return _paperTypesAvailable;
}

void UNIX_Printer::setPaperTypesAvailable(Array<String> &value)
{
	_paperTypesAvailable = value;
}

Boolean UNIX_Printer::getDefaultPaperType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEFAULT_PAPER_TYPE, getDefaultPaperType());
	return true;
}

String UNIX_Printer::getDefaultPaperType() const
{
	return _defaultPaperType;
}

void UNIX_Printer::setDefaultPaperType(String &value)
{
	_defaultPaperType = value;
}

Boolean UNIX_Printer::getCurrentPaperType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_PAPER_TYPE, getCurrentPaperType());
	return true;
}

String UNIX_Printer::getCurrentPaperType() const
{
	return _currentPaperType;
}

void UNIX_Printer::setCurrentPaperType(String &value)
{
	_currentPaperType = value;
}

Boolean UNIX_Printer::getLanguagesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LANGUAGES_SUPPORTED, getLanguagesSupported());
	return true;
}

Array<Uint16> UNIX_Printer::getLanguagesSupported() const
{
	return _languagesSupported;
}

void UNIX_Printer::setLanguagesSupported(Array<Uint16> &value)
{
	_languagesSupported = value;
}

Boolean UNIX_Printer::getMimeTypesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIME_TYPES_SUPPORTED, getMimeTypesSupported());
	return true;
}

Array<String> UNIX_Printer::getMimeTypesSupported() const
{
	return _mimeTypesSupported;
}

void UNIX_Printer::setMimeTypesSupported(Array<String> &value)
{
	_mimeTypesSupported = value;
}

Boolean UNIX_Printer::getCurrentLanguage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_LANGUAGE, getCurrentLanguage());
	return true;
}

Uint16 UNIX_Printer::getCurrentLanguage() const
{
	return _currentLanguage;
}

void UNIX_Printer::setCurrentLanguage(Uint16 &value)
{
	_currentLanguage = value;
}

Boolean UNIX_Printer::getCurrentMimeType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_MIME_TYPE, getCurrentMimeType());
	return true;
}

String UNIX_Printer::getCurrentMimeType() const
{
	return _currentMimeType;
}

void UNIX_Printer::setCurrentMimeType(String &value)
{
	_currentMimeType = value;
}

Boolean UNIX_Printer::getDefaultLanguage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEFAULT_LANGUAGE, getDefaultLanguage());
	return true;
}

Uint16 UNIX_Printer::getDefaultLanguage() const
{
	return _defaultLanguage;
}

void UNIX_Printer::setDefaultLanguage(Uint16 &value)
{
	_defaultLanguage = value;
}

Boolean UNIX_Printer::getDefaultMimeType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEFAULT_MIME_TYPE, getDefaultMimeType());
	return true;
}

String UNIX_Printer::getDefaultMimeType() const
{
	return _defaultMimeType;
}

void UNIX_Printer::setDefaultMimeType(String &value)
{
	_defaultMimeType = value;
}

Boolean UNIX_Printer::getJobCountSinceLastReset(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_JOB_COUNT_SINCE_LAST_RESET, getJobCountSinceLastReset());
	return true;
}

Uint32 UNIX_Printer::getJobCountSinceLastReset() const
{
	return _jobCountSinceLastReset;
}

void UNIX_Printer::setJobCountSinceLastReset(Uint32 &value)
{
	_jobCountSinceLastReset = value;
}

Boolean UNIX_Printer::getTimeOfLastReset(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_RESET, getTimeOfLastReset());
	return true;
}

CIMDateTime UNIX_Printer::getTimeOfLastReset() const
{
	return _timeOfLastReset;
}

void UNIX_Printer::setTimeOfLastReset(CIMDateTime &value)
{
	_timeOfLastReset = value;
}

Boolean UNIX_Printer::getCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITIES, getCapabilities());
	return true;
}

Array<Uint16> UNIX_Printer::getCapabilities() const
{
	return _capabilities;
}

void UNIX_Printer::setCapabilities(Array<Uint16> &value)
{
	_capabilities = value;
}

Boolean UNIX_Printer::getCapabilityDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITY_DESCRIPTIONS, getCapabilityDescriptions());
	return true;
}

Array<String> UNIX_Printer::getCapabilityDescriptions() const
{
	return _capabilityDescriptions;
}

void UNIX_Printer::setCapabilityDescriptions(Array<String> &value)
{
	_capabilityDescriptions = value;
}

Boolean UNIX_Printer::getDefaultCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEFAULT_CAPABILITIES, getDefaultCapabilities());
	return true;
}

Array<Uint16> UNIX_Printer::getDefaultCapabilities() const
{
	return _defaultCapabilities;
}

void UNIX_Printer::setDefaultCapabilities(Array<Uint16> &value)
{
	_defaultCapabilities = value;
}

Boolean UNIX_Printer::getCurrentCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_CAPABILITIES, getCurrentCapabilities());
	return true;
}

Array<Uint16> UNIX_Printer::getCurrentCapabilities() const
{
	return _currentCapabilities;
}

void UNIX_Printer::setCurrentCapabilities(Array<Uint16> &value)
{
	_currentCapabilities = value;
}

Boolean UNIX_Printer::getMaxCopies(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_COPIES, getMaxCopies());
	return true;
}

Uint32 UNIX_Printer::getMaxCopies() const
{
	return _maxCopies;
}

void UNIX_Printer::setMaxCopies(Uint32 &value)
{
	_maxCopies = value;
}

Boolean UNIX_Printer::getDefaultCopies(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEFAULT_COPIES, getDefaultCopies());
	return true;
}

Uint32 UNIX_Printer::getDefaultCopies() const
{
	return _defaultCopies;
}

void UNIX_Printer::setDefaultCopies(Uint32 &value)
{
	_defaultCopies = value;
}

Boolean UNIX_Printer::getMaxNumberUp(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_NUMBER_UP, getMaxNumberUp());
	return true;
}

Uint32 UNIX_Printer::getMaxNumberUp() const
{
	return _maxNumberUp;
}

void UNIX_Printer::setMaxNumberUp(Uint32 &value)
{
	_maxNumberUp = value;
}

Boolean UNIX_Printer::getDefaultNumberUp(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEFAULT_NUMBER_UP, getDefaultNumberUp());
	return true;
}

Uint32 UNIX_Printer::getDefaultNumberUp() const
{
	return _defaultNumberUp;
}

void UNIX_Printer::setDefaultNumberUp(Uint32 &value)
{
	_defaultNumberUp = value;
}

Boolean UNIX_Printer::getHorizontalResolution(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HORIZONTAL_RESOLUTION, getHorizontalResolution());
	return true;
}

Uint32 UNIX_Printer::getHorizontalResolution() const
{
	return _horizontalResolution;
}

void UNIX_Printer::setHorizontalResolution(Uint32 &value)
{
	_horizontalResolution = value;
}

Boolean UNIX_Printer::getVerticalResolution(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERTICAL_RESOLUTION, getVerticalResolution());
	return true;
}

Uint32 UNIX_Printer::getVerticalResolution() const
{
	return _verticalResolution;
}

void UNIX_Printer::setVerticalResolution(Uint32 &value)
{
	_verticalResolution = value;
}

Boolean UNIX_Printer::getCharSetsSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHAR_SETS_SUPPORTED, getCharSetsSupported());
	return true;
}

Array<String> UNIX_Printer::getCharSetsSupported() const
{
	return _charSetsSupported;
}

void UNIX_Printer::setCharSetsSupported(Array<String> &value)
{
	_charSetsSupported = value;
}

Boolean UNIX_Printer::getCurrentCharSet(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_CHAR_SET, getCurrentCharSet());
	return true;
}

String UNIX_Printer::getCurrentCharSet() const
{
	return _currentCharSet;
}

void UNIX_Printer::setCurrentCharSet(String &value)
{
	_currentCharSet = value;
}

Boolean UNIX_Printer::getNaturalLanguagesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NATURAL_LANGUAGES_SUPPORTED, getNaturalLanguagesSupported());
	return true;
}

Array<String> UNIX_Printer::getNaturalLanguagesSupported() const
{
	return _naturalLanguagesSupported;
}

void UNIX_Printer::setNaturalLanguagesSupported(Array<String> &value)
{
	_naturalLanguagesSupported = value;
}

Boolean UNIX_Printer::getCurrentNaturalLanguage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_NATURAL_LANGUAGE, getCurrentNaturalLanguage());
	return true;
}

String UNIX_Printer::getCurrentNaturalLanguage() const
{
	return _currentNaturalLanguage;
}

void UNIX_Printer::setCurrentNaturalLanguage(String &value)
{
	_currentNaturalLanguage = value;
}

Boolean UNIX_Printer::getMaxSizeSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_SIZE_SUPPORTED, getMaxSizeSupported());
	return true;
}

Uint32 UNIX_Printer::getMaxSizeSupported() const
{
	return _maxSizeSupported;
}

void UNIX_Printer::setMaxSizeSupported(Uint32 &value)
{
	_maxSizeSupported = value;
}

Boolean UNIX_Printer::getAvailableJobSheets(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_JOB_SHEETS, getAvailableJobSheets());
	return true;
}

Array<String> UNIX_Printer::getAvailableJobSheets() const
{
	return _availableJobSheets;
}

void UNIX_Printer::setAvailableJobSheets(Array<String> &value)
{
	_availableJobSheets = value;
}

Boolean UNIX_Printer::getMarkingTechnology(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MARKING_TECHNOLOGY, getMarkingTechnology());
	return true;
}

Uint16 UNIX_Printer::getMarkingTechnology() const
{
	return _markingTechnology;
}

void UNIX_Printer::setMarkingTechnology(Uint16 &value)
{
	_markingTechnology = value;
}

Boolean UNIX_Printer::getCurrentOperator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_OPERATOR, getCurrentOperator());
	return true;
}

String UNIX_Printer::getCurrentOperator() const
{
	return _currentOperator;
}

void UNIX_Printer::setCurrentOperator(String &value)
{
	_currentOperator = value;
}

Boolean UNIX_Printer::getServicePerson(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVICE_PERSON, getServicePerson());
	return true;
}

String UNIX_Printer::getServicePerson() const
{
	return _servicePerson;
}

void UNIX_Printer::setServicePerson(String &value)
{
	_servicePerson = value;
}

Boolean UNIX_Printer::getSerialNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERIAL_NUMBER, getSerialNumber());
	return true;
}

String UNIX_Printer::getSerialNumber() const
{
	return _serialNumber;
}

void UNIX_Printer::setSerialNumber(String &value)
{
	_serialNumber = value;
}

Boolean UNIX_Printer::getCriticalAlerts(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CRITICAL_ALERTS, getCriticalAlerts());
	return true;
}

Uint32 UNIX_Printer::getCriticalAlerts() const
{
	return _criticalAlerts;
}

void UNIX_Printer::setCriticalAlerts(Uint32 &value)
{
	_criticalAlerts = value;
}

Boolean UNIX_Printer::getAllAlerts(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALL_ALERTS, getAllAlerts());
	return true;
}

Uint32 UNIX_Printer::getAllAlerts() const
{
	return _allAlerts;
}

void UNIX_Printer::setAllAlerts(Uint32 &value)
{
	_allAlerts = value;
}

Boolean UNIX_Printer::getConsoleDisabled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONSOLE_DISABLED, getConsoleDisabled());
	return true;
}

Boolean UNIX_Printer::getConsoleDisabled() const
{
	return _consoleDisabled;
}

void UNIX_Printer::setConsoleDisabled(Boolean &value)
{
	_consoleDisabled = value;
}

Boolean UNIX_Printer::getConsoleNaturalLanguage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONSOLE_NATURAL_LANGUAGE, getConsoleNaturalLanguage());
	return true;
}

String UNIX_Printer::getConsoleNaturalLanguage() const
{
	return _consoleNaturalLanguage;
}

void UNIX_Printer::setConsoleNaturalLanguage(String &value)
{
	_consoleNaturalLanguage = value;
}

Boolean UNIX_Printer::getConsoleDisplayBufferText(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONSOLE_DISPLAY_BUFFER_TEXT, getConsoleDisplayBufferText());
	return true;
}

Array<String> UNIX_Printer::getConsoleDisplayBufferText() const
{
	return _consoleDisplayBufferText;
}

void UNIX_Printer::setConsoleDisplayBufferText(Array<String> &value)
{
	_consoleDisplayBufferText = value;
}


void UNIX_Printer::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("Printer");
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
	_creationClassName = String("UNIX_Printer");
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
	_printerStatus = Uint16(0);
	_detectedErrorState = Uint16(0);
	_errorInformation.clear();
	_paperSizesSupported.clear();
	_paperTypesAvailable.clear();
	_defaultPaperType = String ("");
	_currentPaperType = String ("");
	_languagesSupported.clear();
	_mimeTypesSupported.clear();
	_currentLanguage = Uint16(0);
	_currentMimeType = String ("");
	_defaultLanguage = Uint16(0);
	_defaultMimeType = String ("");
	_jobCountSinceLastReset = Uint32(0);
	_timeOfLastReset = CIMHelper::getCurrentTime();
	_capabilities.clear();
	_capabilityDescriptions.clear();
	_defaultCapabilities.clear();
	_currentCapabilities.clear();
	_maxCopies = Uint32(0);
	_defaultCopies = Uint32(0);
	_maxNumberUp = Uint32(0);
	_defaultNumberUp = Uint32(0);
	_horizontalResolution = Uint32(0);
	_verticalResolution = Uint32(0);
	_charSetsSupported.clear();
	_currentCharSet = String ("");
	_naturalLanguagesSupported.clear();
	_currentNaturalLanguage = String ("");
	_maxSizeSupported = Uint32(0);
	_availableJobSheets.clear();
	_markingTechnology = Uint16(0);
	_currentOperator = String ("");
	_servicePerson = String ("");
	_serialNumber = String ("");
	_criticalAlerts = Uint32(0);
	_allAlerts = Uint32(0);
	_consoleDisabled = Boolean(false);
	_consoleNaturalLanguage = String ("");
	_consoleDisplayBufferText.clear();

}

Boolean UNIX_Printer::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "PrinterStatus"))
			{
				Uint16 printerStatusValue;
				property.getValue().get(printerStatusValue);
				setPrinterStatus(printerStatusValue);
			}
			else if (String::equal(property.getName().getString(), "DetectedErrorState"))
			{
				Uint16 detectedErrorStateValue;
				property.getValue().get(detectedErrorStateValue);
				setDetectedErrorState(detectedErrorStateValue);
			}
			else if (String::equal(property.getName().getString(), "ErrorInformation"))
			{
				Array<String> errorInformationValue;
				property.getValue().get(errorInformationValue);
				setErrorInformation(errorInformationValue);
			}
			else if (String::equal(property.getName().getString(), "PaperSizesSupported"))
			{
				Array<Uint16> paperSizesSupportedValue;
				property.getValue().get(paperSizesSupportedValue);
				setPaperSizesSupported(paperSizesSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "PaperTypesAvailable"))
			{
				Array<String> paperTypesAvailableValue;
				property.getValue().get(paperTypesAvailableValue);
				setPaperTypesAvailable(paperTypesAvailableValue);
			}
			else if (String::equal(property.getName().getString(), "DefaultPaperType"))
			{
				String defaultPaperTypeValue;
				property.getValue().get(defaultPaperTypeValue);
				setDefaultPaperType(defaultPaperTypeValue);
			}
			else if (String::equal(property.getName().getString(), "CurrentPaperType"))
			{
				String currentPaperTypeValue;
				property.getValue().get(currentPaperTypeValue);
				setCurrentPaperType(currentPaperTypeValue);
			}
			else if (String::equal(property.getName().getString(), "LanguagesSupported"))
			{
				Array<Uint16> languagesSupportedValue;
				property.getValue().get(languagesSupportedValue);
				setLanguagesSupported(languagesSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "MimeTypesSupported"))
			{
				Array<String> mimeTypesSupportedValue;
				property.getValue().get(mimeTypesSupportedValue);
				setMimeTypesSupported(mimeTypesSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "CurrentLanguage"))
			{
				Uint16 currentLanguageValue;
				property.getValue().get(currentLanguageValue);
				setCurrentLanguage(currentLanguageValue);
			}
			else if (String::equal(property.getName().getString(), "CurrentMimeType"))
			{
				String currentMimeTypeValue;
				property.getValue().get(currentMimeTypeValue);
				setCurrentMimeType(currentMimeTypeValue);
			}
			else if (String::equal(property.getName().getString(), "DefaultLanguage"))
			{
				Uint16 defaultLanguageValue;
				property.getValue().get(defaultLanguageValue);
				setDefaultLanguage(defaultLanguageValue);
			}
			else if (String::equal(property.getName().getString(), "DefaultMimeType"))
			{
				String defaultMimeTypeValue;
				property.getValue().get(defaultMimeTypeValue);
				setDefaultMimeType(defaultMimeTypeValue);
			}
			else if (String::equal(property.getName().getString(), "JobCountSinceLastReset"))
			{
				Uint32 jobCountSinceLastResetValue;
				property.getValue().get(jobCountSinceLastResetValue);
				setJobCountSinceLastReset(jobCountSinceLastResetValue);
			}
			else if (String::equal(property.getName().getString(), "TimeOfLastReset"))
			{
				CIMDateTime timeOfLastResetValue;
				property.getValue().get(timeOfLastResetValue);
				setTimeOfLastReset(timeOfLastResetValue);
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
			else if (String::equal(property.getName().getString(), "DefaultCapabilities"))
			{
				Array<Uint16> defaultCapabilitiesValue;
				property.getValue().get(defaultCapabilitiesValue);
				setDefaultCapabilities(defaultCapabilitiesValue);
			}
			else if (String::equal(property.getName().getString(), "CurrentCapabilities"))
			{
				Array<Uint16> currentCapabilitiesValue;
				property.getValue().get(currentCapabilitiesValue);
				setCurrentCapabilities(currentCapabilitiesValue);
			}
			else if (String::equal(property.getName().getString(), "MaxCopies"))
			{
				Uint32 maxCopiesValue;
				property.getValue().get(maxCopiesValue);
				setMaxCopies(maxCopiesValue);
			}
			else if (String::equal(property.getName().getString(), "DefaultCopies"))
			{
				Uint32 defaultCopiesValue;
				property.getValue().get(defaultCopiesValue);
				setDefaultCopies(defaultCopiesValue);
			}
			else if (String::equal(property.getName().getString(), "MaxNumberUp"))
			{
				Uint32 maxNumberUpValue;
				property.getValue().get(maxNumberUpValue);
				setMaxNumberUp(maxNumberUpValue);
			}
			else if (String::equal(property.getName().getString(), "DefaultNumberUp"))
			{
				Uint32 defaultNumberUpValue;
				property.getValue().get(defaultNumberUpValue);
				setDefaultNumberUp(defaultNumberUpValue);
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
			else if (String::equal(property.getName().getString(), "CharSetsSupported"))
			{
				Array<String> charSetsSupportedValue;
				property.getValue().get(charSetsSupportedValue);
				setCharSetsSupported(charSetsSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "CurrentCharSet"))
			{
				String currentCharSetValue;
				property.getValue().get(currentCharSetValue);
				setCurrentCharSet(currentCharSetValue);
			}
			else if (String::equal(property.getName().getString(), "NaturalLanguagesSupported"))
			{
				Array<String> naturalLanguagesSupportedValue;
				property.getValue().get(naturalLanguagesSupportedValue);
				setNaturalLanguagesSupported(naturalLanguagesSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "CurrentNaturalLanguage"))
			{
				String currentNaturalLanguageValue;
				property.getValue().get(currentNaturalLanguageValue);
				setCurrentNaturalLanguage(currentNaturalLanguageValue);
			}
			else if (String::equal(property.getName().getString(), "MaxSizeSupported"))
			{
				Uint32 maxSizeSupportedValue;
				property.getValue().get(maxSizeSupportedValue);
				setMaxSizeSupported(maxSizeSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "AvailableJobSheets"))
			{
				Array<String> availableJobSheetsValue;
				property.getValue().get(availableJobSheetsValue);
				setAvailableJobSheets(availableJobSheetsValue);
			}
			else if (String::equal(property.getName().getString(), "MarkingTechnology"))
			{
				Uint16 markingTechnologyValue;
				property.getValue().get(markingTechnologyValue);
				setMarkingTechnology(markingTechnologyValue);
			}
			else if (String::equal(property.getName().getString(), "CurrentOperator"))
			{
				String currentOperatorValue;
				property.getValue().get(currentOperatorValue);
				setCurrentOperator(currentOperatorValue);
			}
			else if (String::equal(property.getName().getString(), "ServicePerson"))
			{
				String servicePersonValue;
				property.getValue().get(servicePersonValue);
				setServicePerson(servicePersonValue);
			}
			else if (String::equal(property.getName().getString(), "SerialNumber"))
			{
				String serialNumberValue;
				property.getValue().get(serialNumberValue);
				setSerialNumber(serialNumberValue);
			}
			else if (String::equal(property.getName().getString(), "CriticalAlerts"))
			{
				Uint32 criticalAlertsValue;
				property.getValue().get(criticalAlertsValue);
				setCriticalAlerts(criticalAlertsValue);
			}
			else if (String::equal(property.getName().getString(), "AllAlerts"))
			{
				Uint32 allAlertsValue;
				property.getValue().get(allAlertsValue);
				setAllAlerts(allAlertsValue);
			}
			else if (String::equal(property.getName().getString(), "ConsoleDisabled"))
			{
				Boolean consoleDisabledValue;
				property.getValue().get(consoleDisabledValue);
				setConsoleDisabled(consoleDisabledValue);
			}
			else if (String::equal(property.getName().getString(), "ConsoleNaturalLanguage"))
			{
				String consoleNaturalLanguageValue;
				property.getValue().get(consoleNaturalLanguageValue);
				setConsoleNaturalLanguage(consoleNaturalLanguageValue);
			}
			else if (String::equal(property.getName().getString(), "ConsoleDisplayBufferText"))
			{
				Array<String> consoleDisplayBufferTextValue;
				property.getValue().get(consoleDisplayBufferTextValue);
				setConsoleDisplayBufferText(consoleDisplayBufferTextValue);
			}
	}
	return true;
}

Uint32 UNIX_Printer::invokeRequestStateChange(
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

Uint32 UNIX_Printer::invokeSetPowerState(
		Uint16 &inPowerState,
		CIMDateTime &inTime
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SetPowerState */
	
	
	
	return returnValue;
}

Uint32 UNIX_Printer::invokeReset()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method Reset */
	
	
	
	return returnValue;
}

Uint32 UNIX_Printer::invokeEnableDevice(
		Boolean &inEnabled
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method EnableDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_Printer::invokeOnlineDevice(
		Boolean &inOnline
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method OnlineDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_Printer::invokeQuiesceDevice(
		Boolean &inQuiesce
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method QuiesceDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_Printer::invokeSaveProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SaveProperties */
	
	
	
	return returnValue;
}

Uint32 UNIX_Printer::invokeRestoreProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method RestoreProperties */
	
	
	
	return returnValue;
}


Boolean UNIX_Printer::initialize()
{
	return false;
}

Boolean UNIX_Printer::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("Printer");
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
	_creationClassName = String("UNIX_Printer");
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
	_printerStatus = Uint16(0);
	_detectedErrorState = Uint16(0);
	_errorInformation.clear();
	_paperSizesSupported.clear();
	_paperTypesAvailable.clear();
	_defaultPaperType = String ("");
	_currentPaperType = String ("");
	_languagesSupported.clear();
	_mimeTypesSupported.clear();
	_currentLanguage = Uint16(0);
	_currentMimeType = String ("");
	_defaultLanguage = Uint16(0);
	_defaultMimeType = String ("");
	_jobCountSinceLastReset = Uint32(0);
	_timeOfLastReset = CIMHelper::getCurrentTime();
	_capabilities.clear();
	_capabilityDescriptions.clear();
	_defaultCapabilities.clear();
	_currentCapabilities.clear();
	_maxCopies = Uint32(0);
	_defaultCopies = Uint32(0);
	_maxNumberUp = Uint32(0);
	_defaultNumberUp = Uint32(0);
	_horizontalResolution = Uint32(0);
	_verticalResolution = Uint32(0);
	_charSetsSupported.clear();
	_currentCharSet = String ("");
	_naturalLanguagesSupported.clear();
	_currentNaturalLanguage = String ("");
	_maxSizeSupported = Uint32(0);
	_availableJobSheets.clear();
	_markingTechnology = Uint16(0);
	_currentOperator = String ("");
	_servicePerson = String ("");
	_serialNumber = String ("");
	_criticalAlerts = Uint32(0);
	_allAlerts = Uint32(0);
	_consoleDisabled = Boolean(false);
	_consoleNaturalLanguage = String ("");
	_consoleDisplayBufferText.clear();
	
	return false;
}

Boolean UNIX_Printer::finalize()
{
	return false;
}

Boolean UNIX_Printer::loadByName(const String name)
{
	return false;
}

Boolean UNIX_Printer::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_Printer::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Printer::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Printer::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Printer::validateInstance()
{
	return true;
}

