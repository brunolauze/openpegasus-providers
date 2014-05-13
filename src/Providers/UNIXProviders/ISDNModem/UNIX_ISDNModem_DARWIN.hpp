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


UNIX_ISDNModem::UNIX_ISDNModem(void)
{
}

UNIX_ISDNModem::~UNIX_ISDNModem(void)
{
}

Boolean UNIX_ISDNModem::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_ISDNModem::getInstanceID() const
{
	return _instanceID;
}

void UNIX_ISDNModem::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_ISDNModem::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_ISDNModem::getCaption() const
{
	return _caption;
}

void UNIX_ISDNModem::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_ISDNModem::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_ISDNModem::getDescription() const
{
	return _description;
}

void UNIX_ISDNModem::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_ISDNModem::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_ISDNModem::getElementName() const
{
	return _elementName;
}

void UNIX_ISDNModem::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_ISDNModem::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_ISDNModem::getGeneration() const
{
	return _generation;
}

void UNIX_ISDNModem::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_ISDNModem::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_ISDNModem::getInstallDate() const
{
	return _installDate;
}

void UNIX_ISDNModem::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_ISDNModem::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_ISDNModem::getName() const
{
	return _name;
}

void UNIX_ISDNModem::setName(String &value)
{
	_name = value;
}

Boolean UNIX_ISDNModem::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_ISDNModem::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_ISDNModem::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_ISDNModem::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_ISDNModem::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_ISDNModem::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_ISDNModem::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_ISDNModem::getStatus() const
{
	return _status;
}

void UNIX_ISDNModem::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_ISDNModem::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_ISDNModem::getHealthState() const
{
	return _healthState;
}

void UNIX_ISDNModem::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_ISDNModem::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_ISDNModem::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_ISDNModem::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_ISDNModem::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_ISDNModem::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_ISDNModem::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_ISDNModem::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_ISDNModem::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_ISDNModem::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_ISDNModem::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_ISDNModem::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_ISDNModem::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_ISDNModem::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_ISDNModem::getEnabledState() const
{
	return _enabledState;
}

void UNIX_ISDNModem::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_ISDNModem::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_ISDNModem::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_ISDNModem::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_ISDNModem::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_ISDNModem::getRequestedState() const
{
	return _requestedState;
}

void UNIX_ISDNModem::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_ISDNModem::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_ISDNModem::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_ISDNModem::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_ISDNModem::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_ISDNModem::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_ISDNModem::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_ISDNModem::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_ISDNModem::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_ISDNModem::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_ISDNModem::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_ISDNModem::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_ISDNModem::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_ISDNModem::getAllocationState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOCATION_STATE, getAllocationState());
	return true;
}

String UNIX_ISDNModem::getAllocationState() const
{
	return _allocationState;
}

void UNIX_ISDNModem::setAllocationState(String &value)
{
	_allocationState = value;
}

Boolean UNIX_ISDNModem::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_ISDNModem::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_ISDNModem::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_ISDNModem::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_ISDNModem::getSystemName() const
{
	return _systemName;
}

void UNIX_ISDNModem::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_ISDNModem::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_ISDNModem::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_ISDNModem::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_ISDNModem::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_ISDNModem::getDeviceID() const
{
	return _deviceID;
}

void UNIX_ISDNModem::setDeviceID(String &value)
{
	_deviceID = value;
}

Boolean UNIX_ISDNModem::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_ISDNModem::getPowerManagementSupported() const
{
	return _powerManagementSupported;
}

void UNIX_ISDNModem::setPowerManagementSupported(Boolean &value)
{
	_powerManagementSupported = value;
}

Boolean UNIX_ISDNModem::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_ISDNModem::getPowerManagementCapabilities() const
{
	return _powerManagementCapabilities;
}

void UNIX_ISDNModem::setPowerManagementCapabilities(Array<Uint16> &value)
{
	_powerManagementCapabilities = value;
}

Boolean UNIX_ISDNModem::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_ISDNModem::getAvailability() const
{
	return _availability;
}

void UNIX_ISDNModem::setAvailability(Uint16 &value)
{
	_availability = value;
}

Boolean UNIX_ISDNModem::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_ISDNModem::getStatusInfo() const
{
	return _statusInfo;
}

void UNIX_ISDNModem::setStatusInfo(Uint16 &value)
{
	_statusInfo = value;
}

Boolean UNIX_ISDNModem::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_ISDNModem::getLastErrorCode() const
{
	return _lastErrorCode;
}

void UNIX_ISDNModem::setLastErrorCode(Uint32 &value)
{
	_lastErrorCode = value;
}

Boolean UNIX_ISDNModem::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_ISDNModem::getErrorDescription() const
{
	return _errorDescription;
}

void UNIX_ISDNModem::setErrorDescription(String &value)
{
	_errorDescription = value;
}

Boolean UNIX_ISDNModem::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_ISDNModem::getErrorCleared() const
{
	return _errorCleared;
}

void UNIX_ISDNModem::setErrorCleared(Boolean &value)
{
	_errorCleared = value;
}

Boolean UNIX_ISDNModem::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_ISDNModem::getOtherIdentifyingInfo() const
{
	return _otherIdentifyingInfo;
}

void UNIX_ISDNModem::setOtherIdentifyingInfo(Array<String> &value)
{
	_otherIdentifyingInfo = value;
}

Boolean UNIX_ISDNModem::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_ISDNModem::getPowerOnHours() const
{
	return _powerOnHours;
}

void UNIX_ISDNModem::setPowerOnHours(Uint64 &value)
{
	_powerOnHours = value;
}

Boolean UNIX_ISDNModem::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_ISDNModem::getTotalPowerOnHours() const
{
	return _totalPowerOnHours;
}

void UNIX_ISDNModem::setTotalPowerOnHours(Uint64 &value)
{
	_totalPowerOnHours = value;
}

Boolean UNIX_ISDNModem::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_ISDNModem::getIdentifyingDescriptions() const
{
	return _identifyingDescriptions;
}

void UNIX_ISDNModem::setIdentifyingDescriptions(Array<String> &value)
{
	_identifyingDescriptions = value;
}

Boolean UNIX_ISDNModem::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_ISDNModem::getAdditionalAvailability() const
{
	return _additionalAvailability;
}

void UNIX_ISDNModem::setAdditionalAvailability(Array<Uint16> &value)
{
	_additionalAvailability = value;
}

Boolean UNIX_ISDNModem::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_ISDNModem::getMaxQuiesceTime() const
{
	return _maxQuiesceTime;
}

void UNIX_ISDNModem::setMaxQuiesceTime(Uint64 &value)
{
	_maxQuiesceTime = value;
}

Boolean UNIX_ISDNModem::getLocationIndicator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCATION_INDICATOR, getLocationIndicator());
	return true;
}

Uint16 UNIX_ISDNModem::getLocationIndicator() const
{
	return _locationIndicator;
}

void UNIX_ISDNModem::setLocationIndicator(Uint16 &value)
{
	_locationIndicator = value;
}

Boolean UNIX_ISDNModem::getFallbackEnabled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FALLBACK_ENABLED, getFallbackEnabled());
	return true;
}

Boolean UNIX_ISDNModem::getFallbackEnabled() const
{
	return _fallbackEnabled;
}

void UNIX_ISDNModem::setFallbackEnabled(Boolean &value)
{
	_fallbackEnabled = value;
}

Boolean UNIX_ISDNModem::getCompressionSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPRESSION_SUPPORTED, getCompressionSupported());
	return true;
}

Array<Uint16> UNIX_ISDNModem::getCompressionSupported() const
{
	return _compressionSupported;
}

void UNIX_ISDNModem::setCompressionSupported(Array<Uint16> &value)
{
	_compressionSupported = value;
}

Boolean UNIX_ISDNModem::getOtherCompressionDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_COMPRESSION_DESCRIPTION, getOtherCompressionDescription());
	return true;
}

String UNIX_ISDNModem::getOtherCompressionDescription() const
{
	return _otherCompressionDescription;
}

void UNIX_ISDNModem::setOtherCompressionDescription(String &value)
{
	_otherCompressionDescription = value;
}

Boolean UNIX_ISDNModem::getCompressionInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPRESSION_INFO, getCompressionInfo());
	return true;
}

Uint16 UNIX_ISDNModem::getCompressionInfo() const
{
	return _compressionInfo;
}

void UNIX_ISDNModem::setCompressionInfo(Uint16 &value)
{
	_compressionInfo = value;
}

Boolean UNIX_ISDNModem::getOtherCompressionInfoDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_COMPRESSION_INFO_DESCRIPTION, getOtherCompressionInfoDescription());
	return true;
}

String UNIX_ISDNModem::getOtherCompressionInfoDescription() const
{
	return _otherCompressionInfoDescription;
}

void UNIX_ISDNModem::setOtherCompressionInfoDescription(String &value)
{
	_otherCompressionInfoDescription = value;
}

Boolean UNIX_ISDNModem::getModulationSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MODULATION_SUPPORTED, getModulationSupported());
	return true;
}

Array<Uint16> UNIX_ISDNModem::getModulationSupported() const
{
	return _modulationSupported;
}

void UNIX_ISDNModem::setModulationSupported(Array<Uint16> &value)
{
	_modulationSupported = value;
}

Boolean UNIX_ISDNModem::getOtherModulationDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_MODULATION_DESCRIPTION, getOtherModulationDescription());
	return true;
}

String UNIX_ISDNModem::getOtherModulationDescription() const
{
	return _otherModulationDescription;
}

void UNIX_ISDNModem::setOtherModulationDescription(String &value)
{
	_otherModulationDescription = value;
}

Boolean UNIX_ISDNModem::getModulationScheme(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MODULATION_SCHEME, getModulationScheme());
	return true;
}

Uint16 UNIX_ISDNModem::getModulationScheme() const
{
	return _modulationScheme;
}

void UNIX_ISDNModem::setModulationScheme(Uint16 &value)
{
	_modulationScheme = value;
}

Boolean UNIX_ISDNModem::getOtherSchemeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SCHEME_DESCRIPTION, getOtherSchemeDescription());
	return true;
}

String UNIX_ISDNModem::getOtherSchemeDescription() const
{
	return _otherSchemeDescription;
}

void UNIX_ISDNModem::setOtherSchemeDescription(String &value)
{
	_otherSchemeDescription = value;
}

Boolean UNIX_ISDNModem::getErrorControlSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CONTROL_SUPPORTED, getErrorControlSupported());
	return true;
}

Array<Uint16> UNIX_ISDNModem::getErrorControlSupported() const
{
	return _errorControlSupported;
}

void UNIX_ISDNModem::setErrorControlSupported(Array<Uint16> &value)
{
	_errorControlSupported = value;
}

Boolean UNIX_ISDNModem::getOtherErrorControlDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ERROR_CONTROL_DESCRIPTION, getOtherErrorControlDescription());
	return true;
}

String UNIX_ISDNModem::getOtherErrorControlDescription() const
{
	return _otherErrorControlDescription;
}

void UNIX_ISDNModem::setOtherErrorControlDescription(String &value)
{
	_otherErrorControlDescription = value;
}

Boolean UNIX_ISDNModem::getErrorControlInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CONTROL_INFO, getErrorControlInfo());
	return true;
}

Uint16 UNIX_ISDNModem::getErrorControlInfo() const
{
	return _errorControlInfo;
}

void UNIX_ISDNModem::setErrorControlInfo(Uint16 &value)
{
	_errorControlInfo = value;
}

Boolean UNIX_ISDNModem::getOtherErrorControlInfoDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ERROR_CONTROL_INFO_DESCRIPTION, getOtherErrorControlInfoDescription());
	return true;
}

String UNIX_ISDNModem::getOtherErrorControlInfoDescription() const
{
	return _otherErrorControlInfoDescription;
}

void UNIX_ISDNModem::setOtherErrorControlInfoDescription(String &value)
{
	_otherErrorControlInfoDescription = value;
}

Boolean UNIX_ISDNModem::getTimeOfLastReset(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_RESET, getTimeOfLastReset());
	return true;
}

CIMDateTime UNIX_ISDNModem::getTimeOfLastReset() const
{
	return _timeOfLastReset;
}

void UNIX_ISDNModem::setTimeOfLastReset(CIMDateTime &value)
{
	_timeOfLastReset = value;
}

Boolean UNIX_ISDNModem::getCallSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CALL_SPEED, getCallSpeed());
	return true;
}

Uint32 UNIX_ISDNModem::getCallSpeed() const
{
	return _callSpeed;
}

void UNIX_ISDNModem::setCallSpeed(Uint32 &value)
{
	_callSpeed = value;
}

Boolean UNIX_ISDNModem::getCallStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CALL_STATUS, getCallStatus());
	return true;
}

Uint16 UNIX_ISDNModem::getCallStatus() const
{
	return _callStatus;
}

void UNIX_ISDNModem::setCallStatus(Uint16 &value)
{
	_callStatus = value;
}

Boolean UNIX_ISDNModem::getCharsSent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHARS_SENT, getCharsSent());
	return true;
}

Uint32 UNIX_ISDNModem::getCharsSent() const
{
	return _charsSent;
}

void UNIX_ISDNModem::setCharsSent(Uint32 &value)
{
	_charsSent = value;
}

Boolean UNIX_ISDNModem::getCharsReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHARS_RECEIVED, getCharsReceived());
	return true;
}

Uint32 UNIX_ISDNModem::getCharsReceived() const
{
	return _charsReceived;
}

void UNIX_ISDNModem::setCharsReceived(Uint32 &value)
{
	_charsReceived = value;
}

Boolean UNIX_ISDNModem::getCharsLost(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHARS_LOST, getCharsLost());
	return true;
}

Uint32 UNIX_ISDNModem::getCharsLost() const
{
	return _charsLost;
}

void UNIX_ISDNModem::setCharsLost(Uint32 &value)
{
	_charsLost = value;
}

Boolean UNIX_ISDNModem::getBlocksSent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BLOCKS_SENT, getBlocksSent());
	return true;
}

Uint32 UNIX_ISDNModem::getBlocksSent() const
{
	return _blocksSent;
}

void UNIX_ISDNModem::setBlocksSent(Uint32 &value)
{
	_blocksSent = value;
}

Boolean UNIX_ISDNModem::getBlocksResent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BLOCKS_RESENT, getBlocksResent());
	return true;
}

Uint32 UNIX_ISDNModem::getBlocksResent() const
{
	return _blocksResent;
}

void UNIX_ISDNModem::setBlocksResent(Uint32 &value)
{
	_blocksResent = value;
}

Boolean UNIX_ISDNModem::getBlocksReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BLOCKS_RECEIVED, getBlocksReceived());
	return true;
}

Uint32 UNIX_ISDNModem::getBlocksReceived() const
{
	return _blocksReceived;
}

void UNIX_ISDNModem::setBlocksReceived(Uint32 &value)
{
	_blocksReceived = value;
}

Boolean UNIX_ISDNModem::getBlockErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BLOCK_ERRORS, getBlockErrors());
	return true;
}

Uint32 UNIX_ISDNModem::getBlockErrors() const
{
	return _blockErrors;
}

void UNIX_ISDNModem::setBlockErrors(Uint32 &value)
{
	_blockErrors = value;
}

Boolean UNIX_ISDNModem::getCallLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CALL_LENGTH, getCallLength());
	return true;
}

CIMDateTime UNIX_ISDNModem::getCallLength() const
{
	return _callLength;
}

void UNIX_ISDNModem::setCallLength(CIMDateTime &value)
{
	_callLength = value;
}

Boolean UNIX_ISDNModem::getNumberDialed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_DIALED, getNumberDialed());
	return true;
}

String UNIX_ISDNModem::getNumberDialed() const
{
	return _numberDialed;
}

void UNIX_ISDNModem::setNumberDialed(String &value)
{
	_numberDialed = value;
}


void UNIX_ISDNModem::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("ISDNModem");
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
	_creationClassName = String("UNIX_ISDNModem");
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

}

Boolean UNIX_ISDNModem::loadInstance(const CIMInstance &instance)
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
	}
	return true;
}

Uint32 UNIX_ISDNModem::invokeRequestStateChange(
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

Uint32 UNIX_ISDNModem::invokeSetPowerState(
		Uint16 &inPowerState,
		CIMDateTime &inTime
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SetPowerState */
	
	
	
	return returnValue;
}

Uint32 UNIX_ISDNModem::invokeReset()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method Reset */
	
	
	
	return returnValue;
}

Uint32 UNIX_ISDNModem::invokeEnableDevice(
		Boolean &inEnabled
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method EnableDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_ISDNModem::invokeOnlineDevice(
		Boolean &inOnline
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method OnlineDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_ISDNModem::invokeQuiesceDevice(
		Boolean &inQuiesce
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method QuiesceDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_ISDNModem::invokeSaveProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SaveProperties */
	
	
	
	return returnValue;
}

Uint32 UNIX_ISDNModem::invokeRestoreProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method RestoreProperties */
	
	
	
	return returnValue;
}


Boolean UNIX_ISDNModem::initialize()
{
	return false;
}

Boolean UNIX_ISDNModem::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("ISDNModem");
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
	_creationClassName = String("UNIX_ISDNModem");
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
	
	return false;
}

Boolean UNIX_ISDNModem::finalize()
{
	return false;
}

Boolean UNIX_ISDNModem::loadByName(const String name)
{
	return false;
}

Boolean UNIX_ISDNModem::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_ISDNModem::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ISDNModem::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ISDNModem::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ISDNModem::validateInstance()
{
	return true;
}

