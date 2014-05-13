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


UNIX_Unimodem::UNIX_Unimodem(void)
{
}

UNIX_Unimodem::~UNIX_Unimodem(void)
{
}

Boolean UNIX_Unimodem::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_Unimodem::getInstanceID() const
{
	return _instanceID;
}

void UNIX_Unimodem::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_Unimodem::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_Unimodem::getCaption() const
{
	return _caption;
}

void UNIX_Unimodem::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_Unimodem::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_Unimodem::getDescription() const
{
	return _description;
}

void UNIX_Unimodem::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_Unimodem::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_Unimodem::getElementName() const
{
	return _elementName;
}

void UNIX_Unimodem::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_Unimodem::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_Unimodem::getGeneration() const
{
	return _generation;
}

void UNIX_Unimodem::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_Unimodem::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_Unimodem::getInstallDate() const
{
	return _installDate;
}

void UNIX_Unimodem::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_Unimodem::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_Unimodem::getName() const
{
	return _name;
}

void UNIX_Unimodem::setName(String &value)
{
	_name = value;
}

Boolean UNIX_Unimodem::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_Unimodem::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_Unimodem::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_Unimodem::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_Unimodem::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_Unimodem::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_Unimodem::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_Unimodem::getStatus() const
{
	return _status;
}

void UNIX_Unimodem::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_Unimodem::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_Unimodem::getHealthState() const
{
	return _healthState;
}

void UNIX_Unimodem::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_Unimodem::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_Unimodem::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_Unimodem::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_Unimodem::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_Unimodem::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_Unimodem::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_Unimodem::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_Unimodem::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_Unimodem::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_Unimodem::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_Unimodem::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_Unimodem::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_Unimodem::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_Unimodem::getEnabledState() const
{
	return _enabledState;
}

void UNIX_Unimodem::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_Unimodem::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_Unimodem::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_Unimodem::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_Unimodem::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_Unimodem::getRequestedState() const
{
	return _requestedState;
}

void UNIX_Unimodem::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_Unimodem::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_Unimodem::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_Unimodem::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_Unimodem::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_Unimodem::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_Unimodem::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_Unimodem::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_Unimodem::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_Unimodem::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_Unimodem::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_Unimodem::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_Unimodem::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_Unimodem::getAllocationState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOCATION_STATE, getAllocationState());
	return true;
}

String UNIX_Unimodem::getAllocationState() const
{
	return _allocationState;
}

void UNIX_Unimodem::setAllocationState(String &value)
{
	_allocationState = value;
}

Boolean UNIX_Unimodem::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_Unimodem::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_Unimodem::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_Unimodem::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_Unimodem::getSystemName() const
{
	return _systemName;
}

void UNIX_Unimodem::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_Unimodem::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_Unimodem::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_Unimodem::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_Unimodem::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_Unimodem::getDeviceID() const
{
	return _deviceID;
}

void UNIX_Unimodem::setDeviceID(String &value)
{
	_deviceID = value;
}

Boolean UNIX_Unimodem::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_Unimodem::getPowerManagementSupported() const
{
	return _powerManagementSupported;
}

void UNIX_Unimodem::setPowerManagementSupported(Boolean &value)
{
	_powerManagementSupported = value;
}

Boolean UNIX_Unimodem::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_Unimodem::getPowerManagementCapabilities() const
{
	return _powerManagementCapabilities;
}

void UNIX_Unimodem::setPowerManagementCapabilities(Array<Uint16> &value)
{
	_powerManagementCapabilities = value;
}

Boolean UNIX_Unimodem::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_Unimodem::getAvailability() const
{
	return _availability;
}

void UNIX_Unimodem::setAvailability(Uint16 &value)
{
	_availability = value;
}

Boolean UNIX_Unimodem::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_Unimodem::getStatusInfo() const
{
	return _statusInfo;
}

void UNIX_Unimodem::setStatusInfo(Uint16 &value)
{
	_statusInfo = value;
}

Boolean UNIX_Unimodem::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_Unimodem::getLastErrorCode() const
{
	return _lastErrorCode;
}

void UNIX_Unimodem::setLastErrorCode(Uint32 &value)
{
	_lastErrorCode = value;
}

Boolean UNIX_Unimodem::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_Unimodem::getErrorDescription() const
{
	return _errorDescription;
}

void UNIX_Unimodem::setErrorDescription(String &value)
{
	_errorDescription = value;
}

Boolean UNIX_Unimodem::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_Unimodem::getErrorCleared() const
{
	return _errorCleared;
}

void UNIX_Unimodem::setErrorCleared(Boolean &value)
{
	_errorCleared = value;
}

Boolean UNIX_Unimodem::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_Unimodem::getOtherIdentifyingInfo() const
{
	return _otherIdentifyingInfo;
}

void UNIX_Unimodem::setOtherIdentifyingInfo(Array<String> &value)
{
	_otherIdentifyingInfo = value;
}

Boolean UNIX_Unimodem::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_Unimodem::getPowerOnHours() const
{
	return _powerOnHours;
}

void UNIX_Unimodem::setPowerOnHours(Uint64 &value)
{
	_powerOnHours = value;
}

Boolean UNIX_Unimodem::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_Unimodem::getTotalPowerOnHours() const
{
	return _totalPowerOnHours;
}

void UNIX_Unimodem::setTotalPowerOnHours(Uint64 &value)
{
	_totalPowerOnHours = value;
}

Boolean UNIX_Unimodem::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_Unimodem::getIdentifyingDescriptions() const
{
	return _identifyingDescriptions;
}

void UNIX_Unimodem::setIdentifyingDescriptions(Array<String> &value)
{
	_identifyingDescriptions = value;
}

Boolean UNIX_Unimodem::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_Unimodem::getAdditionalAvailability() const
{
	return _additionalAvailability;
}

void UNIX_Unimodem::setAdditionalAvailability(Array<Uint16> &value)
{
	_additionalAvailability = value;
}

Boolean UNIX_Unimodem::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_Unimodem::getMaxQuiesceTime() const
{
	return _maxQuiesceTime;
}

void UNIX_Unimodem::setMaxQuiesceTime(Uint64 &value)
{
	_maxQuiesceTime = value;
}

Boolean UNIX_Unimodem::getLocationIndicator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCATION_INDICATOR, getLocationIndicator());
	return true;
}

Uint16 UNIX_Unimodem::getLocationIndicator() const
{
	return _locationIndicator;
}

void UNIX_Unimodem::setLocationIndicator(Uint16 &value)
{
	_locationIndicator = value;
}

Boolean UNIX_Unimodem::getFallbackEnabled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FALLBACK_ENABLED, getFallbackEnabled());
	return true;
}

Boolean UNIX_Unimodem::getFallbackEnabled() const
{
	return _fallbackEnabled;
}

void UNIX_Unimodem::setFallbackEnabled(Boolean &value)
{
	_fallbackEnabled = value;
}

Boolean UNIX_Unimodem::getCompressionSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPRESSION_SUPPORTED, getCompressionSupported());
	return true;
}

Array<Uint16> UNIX_Unimodem::getCompressionSupported() const
{
	return _compressionSupported;
}

void UNIX_Unimodem::setCompressionSupported(Array<Uint16> &value)
{
	_compressionSupported = value;
}

Boolean UNIX_Unimodem::getOtherCompressionDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_COMPRESSION_DESCRIPTION, getOtherCompressionDescription());
	return true;
}

String UNIX_Unimodem::getOtherCompressionDescription() const
{
	return _otherCompressionDescription;
}

void UNIX_Unimodem::setOtherCompressionDescription(String &value)
{
	_otherCompressionDescription = value;
}

Boolean UNIX_Unimodem::getCompressionInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPRESSION_INFO, getCompressionInfo());
	return true;
}

Uint16 UNIX_Unimodem::getCompressionInfo() const
{
	return _compressionInfo;
}

void UNIX_Unimodem::setCompressionInfo(Uint16 &value)
{
	_compressionInfo = value;
}

Boolean UNIX_Unimodem::getOtherCompressionInfoDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_COMPRESSION_INFO_DESCRIPTION, getOtherCompressionInfoDescription());
	return true;
}

String UNIX_Unimodem::getOtherCompressionInfoDescription() const
{
	return _otherCompressionInfoDescription;
}

void UNIX_Unimodem::setOtherCompressionInfoDescription(String &value)
{
	_otherCompressionInfoDescription = value;
}

Boolean UNIX_Unimodem::getModulationSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MODULATION_SUPPORTED, getModulationSupported());
	return true;
}

Array<Uint16> UNIX_Unimodem::getModulationSupported() const
{
	return _modulationSupported;
}

void UNIX_Unimodem::setModulationSupported(Array<Uint16> &value)
{
	_modulationSupported = value;
}

Boolean UNIX_Unimodem::getOtherModulationDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_MODULATION_DESCRIPTION, getOtherModulationDescription());
	return true;
}

String UNIX_Unimodem::getOtherModulationDescription() const
{
	return _otherModulationDescription;
}

void UNIX_Unimodem::setOtherModulationDescription(String &value)
{
	_otherModulationDescription = value;
}

Boolean UNIX_Unimodem::getModulationScheme(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MODULATION_SCHEME, getModulationScheme());
	return true;
}

Uint16 UNIX_Unimodem::getModulationScheme() const
{
	return _modulationScheme;
}

void UNIX_Unimodem::setModulationScheme(Uint16 &value)
{
	_modulationScheme = value;
}

Boolean UNIX_Unimodem::getOtherSchemeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SCHEME_DESCRIPTION, getOtherSchemeDescription());
	return true;
}

String UNIX_Unimodem::getOtherSchemeDescription() const
{
	return _otherSchemeDescription;
}

void UNIX_Unimodem::setOtherSchemeDescription(String &value)
{
	_otherSchemeDescription = value;
}

Boolean UNIX_Unimodem::getErrorControlSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CONTROL_SUPPORTED, getErrorControlSupported());
	return true;
}

Array<Uint16> UNIX_Unimodem::getErrorControlSupported() const
{
	return _errorControlSupported;
}

void UNIX_Unimodem::setErrorControlSupported(Array<Uint16> &value)
{
	_errorControlSupported = value;
}

Boolean UNIX_Unimodem::getOtherErrorControlDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ERROR_CONTROL_DESCRIPTION, getOtherErrorControlDescription());
	return true;
}

String UNIX_Unimodem::getOtherErrorControlDescription() const
{
	return _otherErrorControlDescription;
}

void UNIX_Unimodem::setOtherErrorControlDescription(String &value)
{
	_otherErrorControlDescription = value;
}

Boolean UNIX_Unimodem::getErrorControlInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CONTROL_INFO, getErrorControlInfo());
	return true;
}

Uint16 UNIX_Unimodem::getErrorControlInfo() const
{
	return _errorControlInfo;
}

void UNIX_Unimodem::setErrorControlInfo(Uint16 &value)
{
	_errorControlInfo = value;
}

Boolean UNIX_Unimodem::getOtherErrorControlInfoDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ERROR_CONTROL_INFO_DESCRIPTION, getOtherErrorControlInfoDescription());
	return true;
}

String UNIX_Unimodem::getOtherErrorControlInfoDescription() const
{
	return _otherErrorControlInfoDescription;
}

void UNIX_Unimodem::setOtherErrorControlInfoDescription(String &value)
{
	_otherErrorControlInfoDescription = value;
}

Boolean UNIX_Unimodem::getTimeOfLastReset(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_RESET, getTimeOfLastReset());
	return true;
}

CIMDateTime UNIX_Unimodem::getTimeOfLastReset() const
{
	return _timeOfLastReset;
}

void UNIX_Unimodem::setTimeOfLastReset(CIMDateTime &value)
{
	_timeOfLastReset = value;
}

Boolean UNIX_Unimodem::getCallSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CALL_SPEED, getCallSpeed());
	return true;
}

Uint32 UNIX_Unimodem::getCallSpeed() const
{
	return _callSpeed;
}

void UNIX_Unimodem::setCallSpeed(Uint32 &value)
{
	_callSpeed = value;
}

Boolean UNIX_Unimodem::getCallStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CALL_STATUS, getCallStatus());
	return true;
}

Uint16 UNIX_Unimodem::getCallStatus() const
{
	return _callStatus;
}

void UNIX_Unimodem::setCallStatus(Uint16 &value)
{
	_callStatus = value;
}

Boolean UNIX_Unimodem::getCharsSent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHARS_SENT, getCharsSent());
	return true;
}

Uint32 UNIX_Unimodem::getCharsSent() const
{
	return _charsSent;
}

void UNIX_Unimodem::setCharsSent(Uint32 &value)
{
	_charsSent = value;
}

Boolean UNIX_Unimodem::getCharsReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHARS_RECEIVED, getCharsReceived());
	return true;
}

Uint32 UNIX_Unimodem::getCharsReceived() const
{
	return _charsReceived;
}

void UNIX_Unimodem::setCharsReceived(Uint32 &value)
{
	_charsReceived = value;
}

Boolean UNIX_Unimodem::getCharsLost(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHARS_LOST, getCharsLost());
	return true;
}

Uint32 UNIX_Unimodem::getCharsLost() const
{
	return _charsLost;
}

void UNIX_Unimodem::setCharsLost(Uint32 &value)
{
	_charsLost = value;
}

Boolean UNIX_Unimodem::getBlocksSent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BLOCKS_SENT, getBlocksSent());
	return true;
}

Uint32 UNIX_Unimodem::getBlocksSent() const
{
	return _blocksSent;
}

void UNIX_Unimodem::setBlocksSent(Uint32 &value)
{
	_blocksSent = value;
}

Boolean UNIX_Unimodem::getBlocksResent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BLOCKS_RESENT, getBlocksResent());
	return true;
}

Uint32 UNIX_Unimodem::getBlocksResent() const
{
	return _blocksResent;
}

void UNIX_Unimodem::setBlocksResent(Uint32 &value)
{
	_blocksResent = value;
}

Boolean UNIX_Unimodem::getBlocksReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BLOCKS_RECEIVED, getBlocksReceived());
	return true;
}

Uint32 UNIX_Unimodem::getBlocksReceived() const
{
	return _blocksReceived;
}

void UNIX_Unimodem::setBlocksReceived(Uint32 &value)
{
	_blocksReceived = value;
}

Boolean UNIX_Unimodem::getBlockErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BLOCK_ERRORS, getBlockErrors());
	return true;
}

Uint32 UNIX_Unimodem::getBlockErrors() const
{
	return _blockErrors;
}

void UNIX_Unimodem::setBlockErrors(Uint32 &value)
{
	_blockErrors = value;
}

Boolean UNIX_Unimodem::getCallLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CALL_LENGTH, getCallLength());
	return true;
}

CIMDateTime UNIX_Unimodem::getCallLength() const
{
	return _callLength;
}

void UNIX_Unimodem::setCallLength(CIMDateTime &value)
{
	_callLength = value;
}

Boolean UNIX_Unimodem::getNumberDialed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_DIALED, getNumberDialed());
	return true;
}

String UNIX_Unimodem::getNumberDialed() const
{
	return _numberDialed;
}

void UNIX_Unimodem::setNumberDialed(String &value)
{
	_numberDialed = value;
}

Boolean UNIX_Unimodem::getCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITIES, getCapabilities());
	return true;
}

Array<Uint16> UNIX_Unimodem::getCapabilities() const
{
	return _capabilities;
}

void UNIX_Unimodem::setCapabilities(Array<Uint16> &value)
{
	_capabilities = value;
}

Boolean UNIX_Unimodem::getCapabilityDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITY_DESCRIPTIONS, getCapabilityDescriptions());
	return true;
}

Array<String> UNIX_Unimodem::getCapabilityDescriptions() const
{
	return _capabilityDescriptions;
}

void UNIX_Unimodem::setCapabilityDescriptions(Array<String> &value)
{
	_capabilityDescriptions = value;
}

Boolean UNIX_Unimodem::getEnabledCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_CAPABILITIES, getEnabledCapabilities());
	return true;
}

Array<Uint16> UNIX_Unimodem::getEnabledCapabilities() const
{
	return _enabledCapabilities;
}

void UNIX_Unimodem::setEnabledCapabilities(Array<Uint16> &value)
{
	_enabledCapabilities = value;
}

Boolean UNIX_Unimodem::getMaxBaudRateToSerialPort(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_BAUD_RATE_TO_SERIAL_PORT, getMaxBaudRateToSerialPort());
	return true;
}

Uint32 UNIX_Unimodem::getMaxBaudRateToSerialPort() const
{
	return _maxBaudRateToSerialPort;
}

void UNIX_Unimodem::setMaxBaudRateToSerialPort(Uint32 &value)
{
	_maxBaudRateToSerialPort = value;
}

Boolean UNIX_Unimodem::getMaxBaudRateToPhone(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_BAUD_RATE_TO_PHONE, getMaxBaudRateToPhone());
	return true;
}

Uint32 UNIX_Unimodem::getMaxBaudRateToPhone() const
{
	return _maxBaudRateToPhone;
}

void UNIX_Unimodem::setMaxBaudRateToPhone(Uint32 &value)
{
	_maxBaudRateToPhone = value;
}

Boolean UNIX_Unimodem::getSupportsSynchronousConnect(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTS_SYNCHRONOUS_CONNECT, getSupportsSynchronousConnect());
	return true;
}

Boolean UNIX_Unimodem::getSupportsSynchronousConnect() const
{
	return _supportsSynchronousConnect;
}

void UNIX_Unimodem::setSupportsSynchronousConnect(Boolean &value)
{
	_supportsSynchronousConnect = value;
}

Boolean UNIX_Unimodem::getDialType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DIAL_TYPE, getDialType());
	return true;
}

Uint16 UNIX_Unimodem::getDialType() const
{
	return _dialType;
}

void UNIX_Unimodem::setDialType(Uint16 &value)
{
	_dialType = value;
}

Boolean UNIX_Unimodem::getInactivityTimeout(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INACTIVITY_TIMEOUT, getInactivityTimeout());
	return true;
}

Uint32 UNIX_Unimodem::getInactivityTimeout() const
{
	return _inactivityTimeout;
}

void UNIX_Unimodem::setInactivityTimeout(Uint32 &value)
{
	_inactivityTimeout = value;
}

Boolean UNIX_Unimodem::getSpeakerVolumeInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SPEAKER_VOLUME_INFO, getSpeakerVolumeInfo());
	return true;
}

Uint16 UNIX_Unimodem::getSpeakerVolumeInfo() const
{
	return _speakerVolumeInfo;
}

void UNIX_Unimodem::setSpeakerVolumeInfo(Uint16 &value)
{
	_speakerVolumeInfo = value;
}

Boolean UNIX_Unimodem::getCountriesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COUNTRIES_SUPPORTED, getCountriesSupported());
	return true;
}

Array<String> UNIX_Unimodem::getCountriesSupported() const
{
	return _countriesSupported;
}

void UNIX_Unimodem::setCountriesSupported(Array<String> &value)
{
	_countriesSupported = value;
}

Boolean UNIX_Unimodem::getCountrySelected(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COUNTRY_SELECTED, getCountrySelected());
	return true;
}

String UNIX_Unimodem::getCountrySelected() const
{
	return _countrySelected;
}

void UNIX_Unimodem::setCountrySelected(String &value)
{
	_countrySelected = value;
}

Boolean UNIX_Unimodem::getRingsBeforeAnswer(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RINGS_BEFORE_ANSWER, getRingsBeforeAnswer());
	return true;
}

Uint8 UNIX_Unimodem::getRingsBeforeAnswer() const
{
	return _ringsBeforeAnswer;
}

void UNIX_Unimodem::setRingsBeforeAnswer(Uint8 &value)
{
	_ringsBeforeAnswer = value;
}

Boolean UNIX_Unimodem::getMaxNumberOfPasswords(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_NUMBER_OF_PASSWORDS, getMaxNumberOfPasswords());
	return true;
}

Uint16 UNIX_Unimodem::getMaxNumberOfPasswords() const
{
	return _maxNumberOfPasswords;
}

void UNIX_Unimodem::setMaxNumberOfPasswords(Uint16 &value)
{
	_maxNumberOfPasswords = value;
}

Boolean UNIX_Unimodem::getCurrentPasswords(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_PASSWORDS, getCurrentPasswords());
	return true;
}

Array<String> UNIX_Unimodem::getCurrentPasswords() const
{
	return _currentPasswords;
}

void UNIX_Unimodem::setCurrentPasswords(Array<String> &value)
{
	_currentPasswords = value;
}

Boolean UNIX_Unimodem::getSupportsCallback(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTS_CALLBACK, getSupportsCallback());
	return true;
}

Boolean UNIX_Unimodem::getSupportsCallback() const
{
	return _supportsCallback;
}

void UNIX_Unimodem::setSupportsCallback(Boolean &value)
{
	_supportsCallback = value;
}

Boolean UNIX_Unimodem::getAnswerMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ANSWER_MODE, getAnswerMode());
	return true;
}

Uint16 UNIX_Unimodem::getAnswerMode() const
{
	return _answerMode;
}

void UNIX_Unimodem::setAnswerMode(Uint16 &value)
{
	_answerMode = value;
}

Boolean UNIX_Unimodem::getEqualization(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EQUALIZATION, getEqualization());
	return true;
}

Uint16 UNIX_Unimodem::getEqualization() const
{
	return _equalization;
}

void UNIX_Unimodem::setEqualization(Uint16 &value)
{
	_equalization = value;
}

Boolean UNIX_Unimodem::getBlackListedNumbers(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BLACK_LISTED_NUMBERS, getBlackListedNumbers());
	return true;
}

Array<String> UNIX_Unimodem::getBlackListedNumbers() const
{
	return _blackListedNumbers;
}

void UNIX_Unimodem::setBlackListedNumbers(Array<String> &value)
{
	_blackListedNumbers = value;
}

Boolean UNIX_Unimodem::getCallSetupResultCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CALL_SETUP_RESULT_CODE, getCallSetupResultCode());
	return true;
}

Uint16 UNIX_Unimodem::getCallSetupResultCode() const
{
	return _callSetupResultCode;
}

void UNIX_Unimodem::setCallSetupResultCode(Uint16 &value)
{
	_callSetupResultCode = value;
}

Boolean UNIX_Unimodem::getMultiMediaMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MULTI_MEDIA_MODE, getMultiMediaMode());
	return true;
}

Uint16 UNIX_Unimodem::getMultiMediaMode() const
{
	return _multiMediaMode;
}

void UNIX_Unimodem::setMultiMediaMode(Uint16 &value)
{
	_multiMediaMode = value;
}

Boolean UNIX_Unimodem::getDTEDCEInterfaceMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_D_T_E_D_C_E_INTERFACE_MODE, getDTEDCEInterfaceMode());
	return true;
}

Uint16 UNIX_Unimodem::getDTEDCEInterfaceMode() const
{
	return _dTEDCEInterfaceMode;
}

void UNIX_Unimodem::setDTEDCEInterfaceMode(Uint16 &value)
{
	_dTEDCEInterfaceMode = value;
}

Boolean UNIX_Unimodem::getTransmitCarrierNegotiation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSMIT_CARRIER_NEGOTIATION, getTransmitCarrierNegotiation());
	return true;
}

Uint16 UNIX_Unimodem::getTransmitCarrierNegotiation() const
{
	return _transmitCarrierNegotiation;
}

void UNIX_Unimodem::setTransmitCarrierNegotiation(Uint16 &value)
{
	_transmitCarrierNegotiation = value;
}

Boolean UNIX_Unimodem::getReceiveCarrierNegotiation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECEIVE_CARRIER_NEGOTIATION, getReceiveCarrierNegotiation());
	return true;
}

Uint16 UNIX_Unimodem::getReceiveCarrierNegotiation() const
{
	return _receiveCarrierNegotiation;
}

void UNIX_Unimodem::setReceiveCarrierNegotiation(Uint16 &value)
{
	_receiveCarrierNegotiation = value;
}

Boolean UNIX_Unimodem::getInitialTransmitCarrierDataRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INITIAL_TRANSMIT_CARRIER_DATA_RATE, getInitialTransmitCarrierDataRate());
	return true;
}

Uint32 UNIX_Unimodem::getInitialTransmitCarrierDataRate() const
{
	return _initialTransmitCarrierDataRate;
}

void UNIX_Unimodem::setInitialTransmitCarrierDataRate(Uint32 &value)
{
	_initialTransmitCarrierDataRate = value;
}

Boolean UNIX_Unimodem::getInitialReceiveCarrierDataRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INITIAL_RECEIVE_CARRIER_DATA_RATE, getInitialReceiveCarrierDataRate());
	return true;
}

Uint32 UNIX_Unimodem::getInitialReceiveCarrierDataRate() const
{
	return _initialReceiveCarrierDataRate;
}

void UNIX_Unimodem::setInitialReceiveCarrierDataRate(Uint32 &value)
{
	_initialReceiveCarrierDataRate = value;
}

Boolean UNIX_Unimodem::getCarrierRetrainsRequested(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CARRIER_RETRAINS_REQUESTED, getCarrierRetrainsRequested());
	return true;
}

Uint8 UNIX_Unimodem::getCarrierRetrainsRequested() const
{
	return _carrierRetrainsRequested;
}

void UNIX_Unimodem::setCarrierRetrainsRequested(Uint8 &value)
{
	_carrierRetrainsRequested = value;
}

Boolean UNIX_Unimodem::getCarrierRetrainsGranted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CARRIER_RETRAINS_GRANTED, getCarrierRetrainsGranted());
	return true;
}

Uint8 UNIX_Unimodem::getCarrierRetrainsGranted() const
{
	return _carrierRetrainsGranted;
}

void UNIX_Unimodem::setCarrierRetrainsGranted(Uint8 &value)
{
	_carrierRetrainsGranted = value;
}

Boolean UNIX_Unimodem::getFinalTransmitCarrierDataRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FINAL_TRANSMIT_CARRIER_DATA_RATE, getFinalTransmitCarrierDataRate());
	return true;
}

Uint32 UNIX_Unimodem::getFinalTransmitCarrierDataRate() const
{
	return _finalTransmitCarrierDataRate;
}

void UNIX_Unimodem::setFinalTransmitCarrierDataRate(Uint32 &value)
{
	_finalTransmitCarrierDataRate = value;
}

Boolean UNIX_Unimodem::getFinalReceiveCarrierDataRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FINAL_RECEIVE_CARRIER_DATA_RATE, getFinalReceiveCarrierDataRate());
	return true;
}

Uint32 UNIX_Unimodem::getFinalReceiveCarrierDataRate() const
{
	return _finalReceiveCarrierDataRate;
}

void UNIX_Unimodem::setFinalReceiveCarrierDataRate(Uint32 &value)
{
	_finalReceiveCarrierDataRate = value;
}

Boolean UNIX_Unimodem::getTerminationCause(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TERMINATION_CAUSE, getTerminationCause());
	return true;
}

Uint16 UNIX_Unimodem::getTerminationCause() const
{
	return _terminationCause;
}

void UNIX_Unimodem::setTerminationCause(Uint16 &value)
{
	_terminationCause = value;
}

Boolean UNIX_Unimodem::getUnimodemRevision(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNIMODEM_REVISION, getUnimodemRevision());
	return true;
}

String UNIX_Unimodem::getUnimodemRevision() const
{
	return _unimodemRevision;
}

void UNIX_Unimodem::setUnimodemRevision(String &value)
{
	_unimodemRevision = value;
}

Boolean UNIX_Unimodem::getEstimatedNoiseLevel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ESTIMATED_NOISE_LEVEL, getEstimatedNoiseLevel());
	return true;
}

Uint32 UNIX_Unimodem::getEstimatedNoiseLevel() const
{
	return _estimatedNoiseLevel;
}

void UNIX_Unimodem::setEstimatedNoiseLevel(Uint32 &value)
{
	_estimatedNoiseLevel = value;
}

Boolean UNIX_Unimodem::getNormalizedMeanSquaredError(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NORMALIZED_MEAN_SQUARED_ERROR, getNormalizedMeanSquaredError());
	return true;
}

Uint32 UNIX_Unimodem::getNormalizedMeanSquaredError() const
{
	return _normalizedMeanSquaredError;
}

void UNIX_Unimodem::setNormalizedMeanSquaredError(Uint32 &value)
{
	_normalizedMeanSquaredError = value;
}

Boolean UNIX_Unimodem::getTemporaryCarrierLossEventCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TEMPORARY_CARRIER_LOSS_EVENT_COUNT, getTemporaryCarrierLossEventCount());
	return true;
}

Uint8 UNIX_Unimodem::getTemporaryCarrierLossEventCount() const
{
	return _temporaryCarrierLossEventCount;
}

void UNIX_Unimodem::setTemporaryCarrierLossEventCount(Uint8 &value)
{
	_temporaryCarrierLossEventCount = value;
}

Boolean UNIX_Unimodem::getCarrierRenegotiationEventCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CARRIER_RENEGOTIATION_EVENT_COUNT, getCarrierRenegotiationEventCount());
	return true;
}

Uint8 UNIX_Unimodem::getCarrierRenegotiationEventCount() const
{
	return _carrierRenegotiationEventCount;
}

void UNIX_Unimodem::setCarrierRenegotiationEventCount(Uint8 &value)
{
	_carrierRenegotiationEventCount = value;
}

Boolean UNIX_Unimodem::getErrorControlFrameSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CONTROL_FRAME_SIZE, getErrorControlFrameSize());
	return true;
}

Uint16 UNIX_Unimodem::getErrorControlFrameSize() const
{
	return _errorControlFrameSize;
}

void UNIX_Unimodem::setErrorControlFrameSize(Uint16 &value)
{
	_errorControlFrameSize = value;
}

Boolean UNIX_Unimodem::getErrorControlLinkTimeouts(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CONTROL_LINK_TIMEOUTS, getErrorControlLinkTimeouts());
	return true;
}

Uint8 UNIX_Unimodem::getErrorControlLinkTimeouts() const
{
	return _errorControlLinkTimeouts;
}

void UNIX_Unimodem::setErrorControlLinkTimeouts(Uint8 &value)
{
	_errorControlLinkTimeouts = value;
}

Boolean UNIX_Unimodem::getErrorControlLinkNAKs(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CONTROL_LINK_N_A_KS, getErrorControlLinkNAKs());
	return true;
}

Uint8 UNIX_Unimodem::getErrorControlLinkNAKs() const
{
	return _errorControlLinkNAKs;
}

void UNIX_Unimodem::setErrorControlLinkNAKs(Uint8 &value)
{
	_errorControlLinkNAKs = value;
}

Boolean UNIX_Unimodem::getTransmitFlowControl(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSMIT_FLOW_CONTROL, getTransmitFlowControl());
	return true;
}

Uint16 UNIX_Unimodem::getTransmitFlowControl() const
{
	return _transmitFlowControl;
}

void UNIX_Unimodem::setTransmitFlowControl(Uint16 &value)
{
	_transmitFlowControl = value;
}

Boolean UNIX_Unimodem::getReceiveFlowControl(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECEIVE_FLOW_CONTROL, getReceiveFlowControl());
	return true;
}

Uint16 UNIX_Unimodem::getReceiveFlowControl() const
{
	return _receiveFlowControl;
}

void UNIX_Unimodem::setReceiveFlowControl(Uint16 &value)
{
	_receiveFlowControl = value;
}

Boolean UNIX_Unimodem::getTransmitCharsSentFromDTE(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSMIT_CHARS_SENT_FROM_D_T_E, getTransmitCharsSentFromDTE());
	return true;
}

Uint64 UNIX_Unimodem::getTransmitCharsSentFromDTE() const
{
	return _transmitCharsSentFromDTE;
}

void UNIX_Unimodem::setTransmitCharsSentFromDTE(Uint64 &value)
{
	_transmitCharsSentFromDTE = value;
}

Boolean UNIX_Unimodem::getReceiveCharsSentToDTE(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECEIVE_CHARS_SENT_TO_D_T_E, getReceiveCharsSentToDTE());
	return true;
}

Uint64 UNIX_Unimodem::getReceiveCharsSentToDTE() const
{
	return _receiveCharsSentToDTE;
}

void UNIX_Unimodem::setReceiveCharsSentToDTE(Uint64 &value)
{
	_receiveCharsSentToDTE = value;
}

Boolean UNIX_Unimodem::getTransmitCharsLost(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSMIT_CHARS_LOST, getTransmitCharsLost());
	return true;
}

Uint64 UNIX_Unimodem::getTransmitCharsLost() const
{
	return _transmitCharsLost;
}

void UNIX_Unimodem::setTransmitCharsLost(Uint64 &value)
{
	_transmitCharsLost = value;
}

Boolean UNIX_Unimodem::getReceiveCharsLost(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECEIVE_CHARS_LOST, getReceiveCharsLost());
	return true;
}

Uint64 UNIX_Unimodem::getReceiveCharsLost() const
{
	return _receiveCharsLost;
}

void UNIX_Unimodem::setReceiveCharsLost(Uint64 &value)
{
	_receiveCharsLost = value;
}

Boolean UNIX_Unimodem::getTransmitIFrameCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSMIT_I_FRAME_COUNT, getTransmitIFrameCount());
	return true;
}

Uint64 UNIX_Unimodem::getTransmitIFrameCount() const
{
	return _transmitIFrameCount;
}

void UNIX_Unimodem::setTransmitIFrameCount(Uint64 &value)
{
	_transmitIFrameCount = value;
}

Boolean UNIX_Unimodem::getReceiveIFrameCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECEIVE_I_FRAME_COUNT, getReceiveIFrameCount());
	return true;
}

Uint64 UNIX_Unimodem::getReceiveIFrameCount() const
{
	return _receiveIFrameCount;
}

void UNIX_Unimodem::setReceiveIFrameCount(Uint64 &value)
{
	_receiveIFrameCount = value;
}

Boolean UNIX_Unimodem::getTransmitIFrameErrorCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSMIT_I_FRAME_ERROR_COUNT, getTransmitIFrameErrorCount());
	return true;
}

Uint64 UNIX_Unimodem::getTransmitIFrameErrorCount() const
{
	return _transmitIFrameErrorCount;
}

void UNIX_Unimodem::setTransmitIFrameErrorCount(Uint64 &value)
{
	_transmitIFrameErrorCount = value;
}

Boolean UNIX_Unimodem::getReceivedIFrameErrorCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECEIVED_I_FRAME_ERROR_COUNT, getReceivedIFrameErrorCount());
	return true;
}

Uint64 UNIX_Unimodem::getReceivedIFrameErrorCount() const
{
	return _receivedIFrameErrorCount;
}

void UNIX_Unimodem::setReceivedIFrameErrorCount(Uint64 &value)
{
	_receivedIFrameErrorCount = value;
}

Boolean UNIX_Unimodem::getCallWaitingEventCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CALL_WAITING_EVENT_COUNT, getCallWaitingEventCount());
	return true;
}

Uint8 UNIX_Unimodem::getCallWaitingEventCount() const
{
	return _callWaitingEventCount;
}

void UNIX_Unimodem::setCallWaitingEventCount(Uint8 &value)
{
	_callWaitingEventCount = value;
}


void UNIX_Unimodem::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("Unimodem");
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
	_creationClassName = String("UNIX_Unimodem");
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
	_fallbackEnabled = Boolean(false);
	_compressionSupported.clear();
	_otherCompressionDescription = String ("");
	_compressionInfo = Uint16(0);
	_otherCompressionInfoDescription = String ("");
	_modulationSupported.clear();
	_otherModulationDescription = String ("");
	_modulationScheme = Uint16(0);
	_otherSchemeDescription = String ("");
	_errorControlSupported.clear();
	_otherErrorControlDescription = String ("");
	_errorControlInfo = Uint16(0);
	_otherErrorControlInfoDescription = String ("");
	_timeOfLastReset = CIMHelper::getCurrentTime();
	_callSpeed = Uint32(0);
	_callStatus = Uint16(0);
	_charsSent = Uint32(0);
	_charsReceived = Uint32(0);
	_charsLost = Uint32(0);
	_blocksSent = Uint32(0);
	_blocksResent = Uint32(0);
	_blocksReceived = Uint32(0);
	_blockErrors = Uint32(0);
	_callLength = CIMHelper::getCurrentTime();
	_numberDialed = String ("");
	_capabilities.clear();
	_capabilityDescriptions.clear();
	_enabledCapabilities.clear();
	_maxBaudRateToSerialPort = Uint32(0);
	_maxBaudRateToPhone = Uint32(0);
	_supportsSynchronousConnect = Boolean(false);
	_dialType = Uint16(0);
	_inactivityTimeout = Uint32(0);
	_speakerVolumeInfo = Uint16(0);
	_countriesSupported.clear();
	_countrySelected = String ("");
	_ringsBeforeAnswer = Uint8(0);
	_maxNumberOfPasswords = Uint16(0);
	_currentPasswords.clear();
	_supportsCallback = Boolean(false);
	_answerMode = Uint16(0);
	_equalization = Uint16(0);
	_blackListedNumbers.clear();
	_callSetupResultCode = Uint16(0);
	_multiMediaMode = Uint16(0);
	_dTEDCEInterfaceMode = Uint16(0);
	_transmitCarrierNegotiation = Uint16(0);
	_receiveCarrierNegotiation = Uint16(0);
	_initialTransmitCarrierDataRate = Uint32(0);
	_initialReceiveCarrierDataRate = Uint32(0);
	_carrierRetrainsRequested = Uint8(0);
	_carrierRetrainsGranted = Uint8(0);
	_finalTransmitCarrierDataRate = Uint32(0);
	_finalReceiveCarrierDataRate = Uint32(0);
	_terminationCause = Uint16(0);
	_unimodemRevision = String ("");
	_estimatedNoiseLevel = Uint32(0);
	_normalizedMeanSquaredError = Uint32(0);
	_temporaryCarrierLossEventCount = Uint8(0);
	_carrierRenegotiationEventCount = Uint8(0);
	_errorControlFrameSize = Uint16(0);
	_errorControlLinkTimeouts = Uint8(0);
	_errorControlLinkNAKs = Uint8(0);
	_transmitFlowControl = Uint16(0);
	_receiveFlowControl = Uint16(0);
	_transmitCharsSentFromDTE = Uint64(0);
	_receiveCharsSentToDTE = Uint64(0);
	_transmitCharsLost = Uint64(0);
	_receiveCharsLost = Uint64(0);
	_transmitIFrameCount = Uint64(0);
	_receiveIFrameCount = Uint64(0);
	_transmitIFrameErrorCount = Uint64(0);
	_receivedIFrameErrorCount = Uint64(0);
	_callWaitingEventCount = Uint8(0);

}

Boolean UNIX_Unimodem::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "FallbackEnabled"))
			{
				Boolean fallbackEnabledValue;
				property.getValue().get(fallbackEnabledValue);
				setFallbackEnabled(fallbackEnabledValue);
			}
			else if (String::equal(property.getName().getString(), "CompressionSupported"))
			{
				Array<Uint16> compressionSupportedValue;
				property.getValue().get(compressionSupportedValue);
				setCompressionSupported(compressionSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "OtherCompressionDescription"))
			{
				String otherCompressionDescriptionValue;
				property.getValue().get(otherCompressionDescriptionValue);
				setOtherCompressionDescription(otherCompressionDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "CompressionInfo"))
			{
				Uint16 compressionInfoValue;
				property.getValue().get(compressionInfoValue);
				setCompressionInfo(compressionInfoValue);
			}
			else if (String::equal(property.getName().getString(), "OtherCompressionInfoDescription"))
			{
				String otherCompressionInfoDescriptionValue;
				property.getValue().get(otherCompressionInfoDescriptionValue);
				setOtherCompressionInfoDescription(otherCompressionInfoDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "ModulationSupported"))
			{
				Array<Uint16> modulationSupportedValue;
				property.getValue().get(modulationSupportedValue);
				setModulationSupported(modulationSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "OtherModulationDescription"))
			{
				String otherModulationDescriptionValue;
				property.getValue().get(otherModulationDescriptionValue);
				setOtherModulationDescription(otherModulationDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "ModulationScheme"))
			{
				Uint16 modulationSchemeValue;
				property.getValue().get(modulationSchemeValue);
				setModulationScheme(modulationSchemeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherSchemeDescription"))
			{
				String otherSchemeDescriptionValue;
				property.getValue().get(otherSchemeDescriptionValue);
				setOtherSchemeDescription(otherSchemeDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "ErrorControlSupported"))
			{
				Array<Uint16> errorControlSupportedValue;
				property.getValue().get(errorControlSupportedValue);
				setErrorControlSupported(errorControlSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "OtherErrorControlDescription"))
			{
				String otherErrorControlDescriptionValue;
				property.getValue().get(otherErrorControlDescriptionValue);
				setOtherErrorControlDescription(otherErrorControlDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "ErrorControlInfo"))
			{
				Uint16 errorControlInfoValue;
				property.getValue().get(errorControlInfoValue);
				setErrorControlInfo(errorControlInfoValue);
			}
			else if (String::equal(property.getName().getString(), "OtherErrorControlInfoDescription"))
			{
				String otherErrorControlInfoDescriptionValue;
				property.getValue().get(otherErrorControlInfoDescriptionValue);
				setOtherErrorControlInfoDescription(otherErrorControlInfoDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "TimeOfLastReset"))
			{
				CIMDateTime timeOfLastResetValue;
				property.getValue().get(timeOfLastResetValue);
				setTimeOfLastReset(timeOfLastResetValue);
			}
			else if (String::equal(property.getName().getString(), "CallSpeed"))
			{
				Uint32 callSpeedValue;
				property.getValue().get(callSpeedValue);
				setCallSpeed(callSpeedValue);
			}
			else if (String::equal(property.getName().getString(), "CallStatus"))
			{
				Uint16 callStatusValue;
				property.getValue().get(callStatusValue);
				setCallStatus(callStatusValue);
			}
			else if (String::equal(property.getName().getString(), "CharsSent"))
			{
				Uint32 charsSentValue;
				property.getValue().get(charsSentValue);
				setCharsSent(charsSentValue);
			}
			else if (String::equal(property.getName().getString(), "CharsReceived"))
			{
				Uint32 charsReceivedValue;
				property.getValue().get(charsReceivedValue);
				setCharsReceived(charsReceivedValue);
			}
			else if (String::equal(property.getName().getString(), "CharsLost"))
			{
				Uint32 charsLostValue;
				property.getValue().get(charsLostValue);
				setCharsLost(charsLostValue);
			}
			else if (String::equal(property.getName().getString(), "BlocksSent"))
			{
				Uint32 blocksSentValue;
				property.getValue().get(blocksSentValue);
				setBlocksSent(blocksSentValue);
			}
			else if (String::equal(property.getName().getString(), "BlocksResent"))
			{
				Uint32 blocksResentValue;
				property.getValue().get(blocksResentValue);
				setBlocksResent(blocksResentValue);
			}
			else if (String::equal(property.getName().getString(), "BlocksReceived"))
			{
				Uint32 blocksReceivedValue;
				property.getValue().get(blocksReceivedValue);
				setBlocksReceived(blocksReceivedValue);
			}
			else if (String::equal(property.getName().getString(), "BlockErrors"))
			{
				Uint32 blockErrorsValue;
				property.getValue().get(blockErrorsValue);
				setBlockErrors(blockErrorsValue);
			}
			else if (String::equal(property.getName().getString(), "CallLength"))
			{
				CIMDateTime callLengthValue;
				property.getValue().get(callLengthValue);
				setCallLength(callLengthValue);
			}
			else if (String::equal(property.getName().getString(), "NumberDialed"))
			{
				String numberDialedValue;
				property.getValue().get(numberDialedValue);
				setNumberDialed(numberDialedValue);
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
			else if (String::equal(property.getName().getString(), "MaxBaudRateToSerialPort"))
			{
				Uint32 maxBaudRateToSerialPortValue;
				property.getValue().get(maxBaudRateToSerialPortValue);
				setMaxBaudRateToSerialPort(maxBaudRateToSerialPortValue);
			}
			else if (String::equal(property.getName().getString(), "MaxBaudRateToPhone"))
			{
				Uint32 maxBaudRateToPhoneValue;
				property.getValue().get(maxBaudRateToPhoneValue);
				setMaxBaudRateToPhone(maxBaudRateToPhoneValue);
			}
			else if (String::equal(property.getName().getString(), "SupportsSynchronousConnect"))
			{
				Boolean supportsSynchronousConnectValue;
				property.getValue().get(supportsSynchronousConnectValue);
				setSupportsSynchronousConnect(supportsSynchronousConnectValue);
			}
			else if (String::equal(property.getName().getString(), "DialType"))
			{
				Uint16 dialTypeValue;
				property.getValue().get(dialTypeValue);
				setDialType(dialTypeValue);
			}
			else if (String::equal(property.getName().getString(), "InactivityTimeout"))
			{
				Uint32 inactivityTimeoutValue;
				property.getValue().get(inactivityTimeoutValue);
				setInactivityTimeout(inactivityTimeoutValue);
			}
			else if (String::equal(property.getName().getString(), "SpeakerVolumeInfo"))
			{
				Uint16 speakerVolumeInfoValue;
				property.getValue().get(speakerVolumeInfoValue);
				setSpeakerVolumeInfo(speakerVolumeInfoValue);
			}
			else if (String::equal(property.getName().getString(), "CountriesSupported"))
			{
				Array<String> countriesSupportedValue;
				property.getValue().get(countriesSupportedValue);
				setCountriesSupported(countriesSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "CountrySelected"))
			{
				String countrySelectedValue;
				property.getValue().get(countrySelectedValue);
				setCountrySelected(countrySelectedValue);
			}
			else if (String::equal(property.getName().getString(), "RingsBeforeAnswer"))
			{
				Uint8 ringsBeforeAnswerValue;
				property.getValue().get(ringsBeforeAnswerValue);
				setRingsBeforeAnswer(ringsBeforeAnswerValue);
			}
			else if (String::equal(property.getName().getString(), "MaxNumberOfPasswords"))
			{
				Uint16 maxNumberOfPasswordsValue;
				property.getValue().get(maxNumberOfPasswordsValue);
				setMaxNumberOfPasswords(maxNumberOfPasswordsValue);
			}
			else if (String::equal(property.getName().getString(), "CurrentPasswords"))
			{
				Array<String> currentPasswordsValue;
				property.getValue().get(currentPasswordsValue);
				setCurrentPasswords(currentPasswordsValue);
			}
			else if (String::equal(property.getName().getString(), "SupportsCallback"))
			{
				Boolean supportsCallbackValue;
				property.getValue().get(supportsCallbackValue);
				setSupportsCallback(supportsCallbackValue);
			}
			else if (String::equal(property.getName().getString(), "AnswerMode"))
			{
				Uint16 answerModeValue;
				property.getValue().get(answerModeValue);
				setAnswerMode(answerModeValue);
			}
			else if (String::equal(property.getName().getString(), "Equalization"))
			{
				Uint16 equalizationValue;
				property.getValue().get(equalizationValue);
				setEqualization(equalizationValue);
			}
			else if (String::equal(property.getName().getString(), "BlackListedNumbers"))
			{
				Array<String> blackListedNumbersValue;
				property.getValue().get(blackListedNumbersValue);
				setBlackListedNumbers(blackListedNumbersValue);
			}
			else if (String::equal(property.getName().getString(), "CallSetupResultCode"))
			{
				Uint16 callSetupResultCodeValue;
				property.getValue().get(callSetupResultCodeValue);
				setCallSetupResultCode(callSetupResultCodeValue);
			}
			else if (String::equal(property.getName().getString(), "MultiMediaMode"))
			{
				Uint16 multiMediaModeValue;
				property.getValue().get(multiMediaModeValue);
				setMultiMediaMode(multiMediaModeValue);
			}
			else if (String::equal(property.getName().getString(), "DTEDCEInterfaceMode"))
			{
				Uint16 dTEDCEInterfaceModeValue;
				property.getValue().get(dTEDCEInterfaceModeValue);
				setDTEDCEInterfaceMode(dTEDCEInterfaceModeValue);
			}
			else if (String::equal(property.getName().getString(), "TransmitCarrierNegotiation"))
			{
				Uint16 transmitCarrierNegotiationValue;
				property.getValue().get(transmitCarrierNegotiationValue);
				setTransmitCarrierNegotiation(transmitCarrierNegotiationValue);
			}
			else if (String::equal(property.getName().getString(), "ReceiveCarrierNegotiation"))
			{
				Uint16 receiveCarrierNegotiationValue;
				property.getValue().get(receiveCarrierNegotiationValue);
				setReceiveCarrierNegotiation(receiveCarrierNegotiationValue);
			}
			else if (String::equal(property.getName().getString(), "InitialTransmitCarrierDataRate"))
			{
				Uint32 initialTransmitCarrierDataRateValue;
				property.getValue().get(initialTransmitCarrierDataRateValue);
				setInitialTransmitCarrierDataRate(initialTransmitCarrierDataRateValue);
			}
			else if (String::equal(property.getName().getString(), "InitialReceiveCarrierDataRate"))
			{
				Uint32 initialReceiveCarrierDataRateValue;
				property.getValue().get(initialReceiveCarrierDataRateValue);
				setInitialReceiveCarrierDataRate(initialReceiveCarrierDataRateValue);
			}
			else if (String::equal(property.getName().getString(), "CarrierRetrainsRequested"))
			{
				Uint8 carrierRetrainsRequestedValue;
				property.getValue().get(carrierRetrainsRequestedValue);
				setCarrierRetrainsRequested(carrierRetrainsRequestedValue);
			}
			else if (String::equal(property.getName().getString(), "CarrierRetrainsGranted"))
			{
				Uint8 carrierRetrainsGrantedValue;
				property.getValue().get(carrierRetrainsGrantedValue);
				setCarrierRetrainsGranted(carrierRetrainsGrantedValue);
			}
			else if (String::equal(property.getName().getString(), "FinalTransmitCarrierDataRate"))
			{
				Uint32 finalTransmitCarrierDataRateValue;
				property.getValue().get(finalTransmitCarrierDataRateValue);
				setFinalTransmitCarrierDataRate(finalTransmitCarrierDataRateValue);
			}
			else if (String::equal(property.getName().getString(), "FinalReceiveCarrierDataRate"))
			{
				Uint32 finalReceiveCarrierDataRateValue;
				property.getValue().get(finalReceiveCarrierDataRateValue);
				setFinalReceiveCarrierDataRate(finalReceiveCarrierDataRateValue);
			}
			else if (String::equal(property.getName().getString(), "TerminationCause"))
			{
				Uint16 terminationCauseValue;
				property.getValue().get(terminationCauseValue);
				setTerminationCause(terminationCauseValue);
			}
			else if (String::equal(property.getName().getString(), "UnimodemRevision"))
			{
				String unimodemRevisionValue;
				property.getValue().get(unimodemRevisionValue);
				setUnimodemRevision(unimodemRevisionValue);
			}
			else if (String::equal(property.getName().getString(), "EstimatedNoiseLevel"))
			{
				Uint32 estimatedNoiseLevelValue;
				property.getValue().get(estimatedNoiseLevelValue);
				setEstimatedNoiseLevel(estimatedNoiseLevelValue);
			}
			else if (String::equal(property.getName().getString(), "NormalizedMeanSquaredError"))
			{
				Uint32 normalizedMeanSquaredErrorValue;
				property.getValue().get(normalizedMeanSquaredErrorValue);
				setNormalizedMeanSquaredError(normalizedMeanSquaredErrorValue);
			}
			else if (String::equal(property.getName().getString(), "TemporaryCarrierLossEventCount"))
			{
				Uint8 temporaryCarrierLossEventCountValue;
				property.getValue().get(temporaryCarrierLossEventCountValue);
				setTemporaryCarrierLossEventCount(temporaryCarrierLossEventCountValue);
			}
			else if (String::equal(property.getName().getString(), "CarrierRenegotiationEventCount"))
			{
				Uint8 carrierRenegotiationEventCountValue;
				property.getValue().get(carrierRenegotiationEventCountValue);
				setCarrierRenegotiationEventCount(carrierRenegotiationEventCountValue);
			}
			else if (String::equal(property.getName().getString(), "ErrorControlFrameSize"))
			{
				Uint16 errorControlFrameSizeValue;
				property.getValue().get(errorControlFrameSizeValue);
				setErrorControlFrameSize(errorControlFrameSizeValue);
			}
			else if (String::equal(property.getName().getString(), "ErrorControlLinkTimeouts"))
			{
				Uint8 errorControlLinkTimeoutsValue;
				property.getValue().get(errorControlLinkTimeoutsValue);
				setErrorControlLinkTimeouts(errorControlLinkTimeoutsValue);
			}
			else if (String::equal(property.getName().getString(), "ErrorControlLinkNAKs"))
			{
				Uint8 errorControlLinkNAKsValue;
				property.getValue().get(errorControlLinkNAKsValue);
				setErrorControlLinkNAKs(errorControlLinkNAKsValue);
			}
			else if (String::equal(property.getName().getString(), "TransmitFlowControl"))
			{
				Uint16 transmitFlowControlValue;
				property.getValue().get(transmitFlowControlValue);
				setTransmitFlowControl(transmitFlowControlValue);
			}
			else if (String::equal(property.getName().getString(), "ReceiveFlowControl"))
			{
				Uint16 receiveFlowControlValue;
				property.getValue().get(receiveFlowControlValue);
				setReceiveFlowControl(receiveFlowControlValue);
			}
			else if (String::equal(property.getName().getString(), "TransmitCharsSentFromDTE"))
			{
				Uint64 transmitCharsSentFromDTEValue;
				property.getValue().get(transmitCharsSentFromDTEValue);
				setTransmitCharsSentFromDTE(transmitCharsSentFromDTEValue);
			}
			else if (String::equal(property.getName().getString(), "ReceiveCharsSentToDTE"))
			{
				Uint64 receiveCharsSentToDTEValue;
				property.getValue().get(receiveCharsSentToDTEValue);
				setReceiveCharsSentToDTE(receiveCharsSentToDTEValue);
			}
			else if (String::equal(property.getName().getString(), "TransmitCharsLost"))
			{
				Uint64 transmitCharsLostValue;
				property.getValue().get(transmitCharsLostValue);
				setTransmitCharsLost(transmitCharsLostValue);
			}
			else if (String::equal(property.getName().getString(), "ReceiveCharsLost"))
			{
				Uint64 receiveCharsLostValue;
				property.getValue().get(receiveCharsLostValue);
				setReceiveCharsLost(receiveCharsLostValue);
			}
			else if (String::equal(property.getName().getString(), "TransmitIFrameCount"))
			{
				Uint64 transmitIFrameCountValue;
				property.getValue().get(transmitIFrameCountValue);
				setTransmitIFrameCount(transmitIFrameCountValue);
			}
			else if (String::equal(property.getName().getString(), "ReceiveIFrameCount"))
			{
				Uint64 receiveIFrameCountValue;
				property.getValue().get(receiveIFrameCountValue);
				setReceiveIFrameCount(receiveIFrameCountValue);
			}
			else if (String::equal(property.getName().getString(), "TransmitIFrameErrorCount"))
			{
				Uint64 transmitIFrameErrorCountValue;
				property.getValue().get(transmitIFrameErrorCountValue);
				setTransmitIFrameErrorCount(transmitIFrameErrorCountValue);
			}
			else if (String::equal(property.getName().getString(), "ReceivedIFrameErrorCount"))
			{
				Uint64 receivedIFrameErrorCountValue;
				property.getValue().get(receivedIFrameErrorCountValue);
				setReceivedIFrameErrorCount(receivedIFrameErrorCountValue);
			}
			else if (String::equal(property.getName().getString(), "CallWaitingEventCount"))
			{
				Uint8 callWaitingEventCountValue;
				property.getValue().get(callWaitingEventCountValue);
				setCallWaitingEventCount(callWaitingEventCountValue);
			}
	}
	return true;
}

Uint32 UNIX_Unimodem::invokeRequestStateChange(
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

Uint32 UNIX_Unimodem::invokeSetPowerState(
		Uint16 &inPowerState,
		CIMDateTime &inTime
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SetPowerState */
	
	
	
	return returnValue;
}

Uint32 UNIX_Unimodem::invokeReset()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method Reset */
	
	
	
	return returnValue;
}

Uint32 UNIX_Unimodem::invokeEnableDevice(
		Boolean &inEnabled
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method EnableDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_Unimodem::invokeOnlineDevice(
		Boolean &inOnline
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method OnlineDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_Unimodem::invokeQuiesceDevice(
		Boolean &inQuiesce
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method QuiesceDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_Unimodem::invokeSaveProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SaveProperties */
	
	
	
	return returnValue;
}

Uint32 UNIX_Unimodem::invokeRestoreProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method RestoreProperties */
	
	
	
	return returnValue;
}


Boolean UNIX_Unimodem::initialize()
{
	return false;
}

Boolean UNIX_Unimodem::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("Unimodem");
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
	_creationClassName = String("UNIX_Unimodem");
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
	_fallbackEnabled = Boolean(false);
	_compressionSupported.clear();
	_otherCompressionDescription = String ("");
	_compressionInfo = Uint16(0);
	_otherCompressionInfoDescription = String ("");
	_modulationSupported.clear();
	_otherModulationDescription = String ("");
	_modulationScheme = Uint16(0);
	_otherSchemeDescription = String ("");
	_errorControlSupported.clear();
	_otherErrorControlDescription = String ("");
	_errorControlInfo = Uint16(0);
	_otherErrorControlInfoDescription = String ("");
	_timeOfLastReset = CIMHelper::getCurrentTime();
	_callSpeed = Uint32(0);
	_callStatus = Uint16(0);
	_charsSent = Uint32(0);
	_charsReceived = Uint32(0);
	_charsLost = Uint32(0);
	_blocksSent = Uint32(0);
	_blocksResent = Uint32(0);
	_blocksReceived = Uint32(0);
	_blockErrors = Uint32(0);
	_callLength = CIMHelper::getCurrentTime();
	_numberDialed = String ("");
	_capabilities.clear();
	_capabilityDescriptions.clear();
	_enabledCapabilities.clear();
	_maxBaudRateToSerialPort = Uint32(0);
	_maxBaudRateToPhone = Uint32(0);
	_supportsSynchronousConnect = Boolean(false);
	_dialType = Uint16(0);
	_inactivityTimeout = Uint32(0);
	_speakerVolumeInfo = Uint16(0);
	_countriesSupported.clear();
	_countrySelected = String ("");
	_ringsBeforeAnswer = Uint8(0);
	_maxNumberOfPasswords = Uint16(0);
	_currentPasswords.clear();
	_supportsCallback = Boolean(false);
	_answerMode = Uint16(0);
	_equalization = Uint16(0);
	_blackListedNumbers.clear();
	_callSetupResultCode = Uint16(0);
	_multiMediaMode = Uint16(0);
	_dTEDCEInterfaceMode = Uint16(0);
	_transmitCarrierNegotiation = Uint16(0);
	_receiveCarrierNegotiation = Uint16(0);
	_initialTransmitCarrierDataRate = Uint32(0);
	_initialReceiveCarrierDataRate = Uint32(0);
	_carrierRetrainsRequested = Uint8(0);
	_carrierRetrainsGranted = Uint8(0);
	_finalTransmitCarrierDataRate = Uint32(0);
	_finalReceiveCarrierDataRate = Uint32(0);
	_terminationCause = Uint16(0);
	_unimodemRevision = String ("");
	_estimatedNoiseLevel = Uint32(0);
	_normalizedMeanSquaredError = Uint32(0);
	_temporaryCarrierLossEventCount = Uint8(0);
	_carrierRenegotiationEventCount = Uint8(0);
	_errorControlFrameSize = Uint16(0);
	_errorControlLinkTimeouts = Uint8(0);
	_errorControlLinkNAKs = Uint8(0);
	_transmitFlowControl = Uint16(0);
	_receiveFlowControl = Uint16(0);
	_transmitCharsSentFromDTE = Uint64(0);
	_receiveCharsSentToDTE = Uint64(0);
	_transmitCharsLost = Uint64(0);
	_receiveCharsLost = Uint64(0);
	_transmitIFrameCount = Uint64(0);
	_receiveIFrameCount = Uint64(0);
	_transmitIFrameErrorCount = Uint64(0);
	_receivedIFrameErrorCount = Uint64(0);
	_callWaitingEventCount = Uint8(0);
	
	return false;
}

Boolean UNIX_Unimodem::finalize()
{
	return false;
}

Boolean UNIX_Unimodem::loadByName(const String name)
{
	return false;
}

Boolean UNIX_Unimodem::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_Unimodem::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Unimodem::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Unimodem::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Unimodem::validateInstance()
{
	return true;
}

