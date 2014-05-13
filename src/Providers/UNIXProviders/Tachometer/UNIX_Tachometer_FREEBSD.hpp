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


UNIX_Tachometer::UNIX_Tachometer(void)
{
}

UNIX_Tachometer::~UNIX_Tachometer(void)
{
}

Boolean UNIX_Tachometer::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_Tachometer::getInstanceID() const
{
	return _instanceID;
}

void UNIX_Tachometer::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_Tachometer::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_Tachometer::getCaption() const
{
	return _caption;
}

void UNIX_Tachometer::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_Tachometer::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_Tachometer::getDescription() const
{
	return _description;
}

void UNIX_Tachometer::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_Tachometer::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_Tachometer::getElementName() const
{
	return _elementName;
}

void UNIX_Tachometer::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_Tachometer::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_Tachometer::getGeneration() const
{
	return _generation;
}

void UNIX_Tachometer::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_Tachometer::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_Tachometer::getInstallDate() const
{
	return _installDate;
}

void UNIX_Tachometer::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_Tachometer::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_Tachometer::getName() const
{
	return _name;
}

void UNIX_Tachometer::setName(String &value)
{
	_name = value;
}

Boolean UNIX_Tachometer::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_Tachometer::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_Tachometer::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_Tachometer::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_Tachometer::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_Tachometer::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_Tachometer::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_Tachometer::getStatus() const
{
	return _status;
}

void UNIX_Tachometer::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_Tachometer::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_Tachometer::getHealthState() const
{
	return _healthState;
}

void UNIX_Tachometer::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_Tachometer::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_Tachometer::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_Tachometer::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_Tachometer::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_Tachometer::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_Tachometer::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_Tachometer::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_Tachometer::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_Tachometer::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_Tachometer::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_Tachometer::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_Tachometer::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_Tachometer::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_Tachometer::getEnabledState() const
{
	return _enabledState;
}

void UNIX_Tachometer::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_Tachometer::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_Tachometer::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_Tachometer::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_Tachometer::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_Tachometer::getRequestedState() const
{
	return _requestedState;
}

void UNIX_Tachometer::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_Tachometer::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_Tachometer::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_Tachometer::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_Tachometer::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_Tachometer::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_Tachometer::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_Tachometer::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_Tachometer::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_Tachometer::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_Tachometer::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_Tachometer::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_Tachometer::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_Tachometer::getAllocationState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOCATION_STATE, getAllocationState());
	return true;
}

String UNIX_Tachometer::getAllocationState() const
{
	return _allocationState;
}

void UNIX_Tachometer::setAllocationState(String &value)
{
	_allocationState = value;
}

Boolean UNIX_Tachometer::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_Tachometer::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_Tachometer::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_Tachometer::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_Tachometer::getSystemName() const
{
	return _systemName;
}

void UNIX_Tachometer::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_Tachometer::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_Tachometer::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_Tachometer::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_Tachometer::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_Tachometer::getDeviceID() const
{
	return _deviceID;
}

void UNIX_Tachometer::setDeviceID(String &value)
{
	_deviceID = value;
}

Boolean UNIX_Tachometer::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_Tachometer::getPowerManagementSupported() const
{
	return _powerManagementSupported;
}

void UNIX_Tachometer::setPowerManagementSupported(Boolean &value)
{
	_powerManagementSupported = value;
}

Boolean UNIX_Tachometer::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_Tachometer::getPowerManagementCapabilities() const
{
	return _powerManagementCapabilities;
}

void UNIX_Tachometer::setPowerManagementCapabilities(Array<Uint16> &value)
{
	_powerManagementCapabilities = value;
}

Boolean UNIX_Tachometer::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_Tachometer::getAvailability() const
{
	return _availability;
}

void UNIX_Tachometer::setAvailability(Uint16 &value)
{
	_availability = value;
}

Boolean UNIX_Tachometer::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_Tachometer::getStatusInfo() const
{
	return _statusInfo;
}

void UNIX_Tachometer::setStatusInfo(Uint16 &value)
{
	_statusInfo = value;
}

Boolean UNIX_Tachometer::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_Tachometer::getLastErrorCode() const
{
	return _lastErrorCode;
}

void UNIX_Tachometer::setLastErrorCode(Uint32 &value)
{
	_lastErrorCode = value;
}

Boolean UNIX_Tachometer::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_Tachometer::getErrorDescription() const
{
	return _errorDescription;
}

void UNIX_Tachometer::setErrorDescription(String &value)
{
	_errorDescription = value;
}

Boolean UNIX_Tachometer::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_Tachometer::getErrorCleared() const
{
	return _errorCleared;
}

void UNIX_Tachometer::setErrorCleared(Boolean &value)
{
	_errorCleared = value;
}

Boolean UNIX_Tachometer::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_Tachometer::getOtherIdentifyingInfo() const
{
	return _otherIdentifyingInfo;
}

void UNIX_Tachometer::setOtherIdentifyingInfo(Array<String> &value)
{
	_otherIdentifyingInfo = value;
}

Boolean UNIX_Tachometer::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_Tachometer::getPowerOnHours() const
{
	return _powerOnHours;
}

void UNIX_Tachometer::setPowerOnHours(Uint64 &value)
{
	_powerOnHours = value;
}

Boolean UNIX_Tachometer::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_Tachometer::getTotalPowerOnHours() const
{
	return _totalPowerOnHours;
}

void UNIX_Tachometer::setTotalPowerOnHours(Uint64 &value)
{
	_totalPowerOnHours = value;
}

Boolean UNIX_Tachometer::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_Tachometer::getIdentifyingDescriptions() const
{
	return _identifyingDescriptions;
}

void UNIX_Tachometer::setIdentifyingDescriptions(Array<String> &value)
{
	_identifyingDescriptions = value;
}

Boolean UNIX_Tachometer::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_Tachometer::getAdditionalAvailability() const
{
	return _additionalAvailability;
}

void UNIX_Tachometer::setAdditionalAvailability(Array<Uint16> &value)
{
	_additionalAvailability = value;
}

Boolean UNIX_Tachometer::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_Tachometer::getMaxQuiesceTime() const
{
	return _maxQuiesceTime;
}

void UNIX_Tachometer::setMaxQuiesceTime(Uint64 &value)
{
	_maxQuiesceTime = value;
}

Boolean UNIX_Tachometer::getLocationIndicator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCATION_INDICATOR, getLocationIndicator());
	return true;
}

Uint16 UNIX_Tachometer::getLocationIndicator() const
{
	return _locationIndicator;
}

void UNIX_Tachometer::setLocationIndicator(Uint16 &value)
{
	_locationIndicator = value;
}

Boolean UNIX_Tachometer::getSensorType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SENSOR_TYPE, getSensorType());
	return true;
}

Uint16 UNIX_Tachometer::getSensorType() const
{
	return _sensorType;
}

void UNIX_Tachometer::setSensorType(Uint16 &value)
{
	_sensorType = value;
}

Boolean UNIX_Tachometer::getOtherSensorTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SENSOR_TYPE_DESCRIPTION, getOtherSensorTypeDescription());
	return true;
}

String UNIX_Tachometer::getOtherSensorTypeDescription() const
{
	return _otherSensorTypeDescription;
}

void UNIX_Tachometer::setOtherSensorTypeDescription(String &value)
{
	_otherSensorTypeDescription = value;
}

Boolean UNIX_Tachometer::getPossibleStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POSSIBLE_STATES, getPossibleStates());
	return true;
}

Array<String> UNIX_Tachometer::getPossibleStates() const
{
	return _possibleStates;
}

void UNIX_Tachometer::setPossibleStates(Array<String> &value)
{
	_possibleStates = value;
}

Boolean UNIX_Tachometer::getCurrentState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_STATE, getCurrentState());
	return true;
}

String UNIX_Tachometer::getCurrentState() const
{
	return _currentState;
}

void UNIX_Tachometer::setCurrentState(String &value)
{
	_currentState = value;
}

Boolean UNIX_Tachometer::getPollingInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLLING_INTERVAL, getPollingInterval());
	return true;
}

Uint64 UNIX_Tachometer::getPollingInterval() const
{
	return _pollingInterval;
}

void UNIX_Tachometer::setPollingInterval(Uint64 &value)
{
	_pollingInterval = value;
}

Boolean UNIX_Tachometer::getSensorContext(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SENSOR_CONTEXT, getSensorContext());
	return true;
}

String UNIX_Tachometer::getSensorContext() const
{
	return _sensorContext;
}

void UNIX_Tachometer::setSensorContext(String &value)
{
	_sensorContext = value;
}

Boolean UNIX_Tachometer::getBaseUnits(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BASE_UNITS, getBaseUnits());
	return true;
}

Uint16 UNIX_Tachometer::getBaseUnits() const
{
	return _baseUnits;
}

void UNIX_Tachometer::setBaseUnits(Uint16 &value)
{
	_baseUnits = value;
}

Boolean UNIX_Tachometer::getUnitModifier(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNIT_MODIFIER, getUnitModifier());
	return true;
}

Sint32 UNIX_Tachometer::getUnitModifier() const
{
	return _unitModifier;
}

void UNIX_Tachometer::setUnitModifier(Sint32 &value)
{
	_unitModifier = value;
}

Boolean UNIX_Tachometer::getRateUnits(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_UNITS, getRateUnits());
	return true;
}

Uint16 UNIX_Tachometer::getRateUnits() const
{
	return _rateUnits;
}

void UNIX_Tachometer::setRateUnits(Uint16 &value)
{
	_rateUnits = value;
}

Boolean UNIX_Tachometer::getCurrentReading(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_READING, getCurrentReading());
	return true;
}

Sint32 UNIX_Tachometer::getCurrentReading() const
{
	return _currentReading;
}

void UNIX_Tachometer::setCurrentReading(Sint32 &value)
{
	_currentReading = value;
}

Boolean UNIX_Tachometer::getNominalReading(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NOMINAL_READING, getNominalReading());
	return true;
}

Sint32 UNIX_Tachometer::getNominalReading() const
{
	return _nominalReading;
}

void UNIX_Tachometer::setNominalReading(Sint32 &value)
{
	_nominalReading = value;
}

Boolean UNIX_Tachometer::getNormalMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NORMAL_MAX, getNormalMax());
	return true;
}

Sint32 UNIX_Tachometer::getNormalMax() const
{
	return _normalMax;
}

void UNIX_Tachometer::setNormalMax(Sint32 &value)
{
	_normalMax = value;
}

Boolean UNIX_Tachometer::getNormalMin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NORMAL_MIN, getNormalMin());
	return true;
}

Sint32 UNIX_Tachometer::getNormalMin() const
{
	return _normalMin;
}

void UNIX_Tachometer::setNormalMin(Sint32 &value)
{
	_normalMin = value;
}

Boolean UNIX_Tachometer::getMaxReadable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_READABLE, getMaxReadable());
	return true;
}

Sint32 UNIX_Tachometer::getMaxReadable() const
{
	return _maxReadable;
}

void UNIX_Tachometer::setMaxReadable(Sint32 &value)
{
	_maxReadable = value;
}

Boolean UNIX_Tachometer::getMinReadable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIN_READABLE, getMinReadable());
	return true;
}

Sint32 UNIX_Tachometer::getMinReadable() const
{
	return _minReadable;
}

void UNIX_Tachometer::setMinReadable(Sint32 &value)
{
	_minReadable = value;
}

Boolean UNIX_Tachometer::getResolution(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESOLUTION, getResolution());
	return true;
}

Uint32 UNIX_Tachometer::getResolution() const
{
	return _resolution;
}

void UNIX_Tachometer::setResolution(Uint32 &value)
{
	_resolution = value;
}

Boolean UNIX_Tachometer::getTolerance(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOLERANCE, getTolerance());
	return true;
}

Sint32 UNIX_Tachometer::getTolerance() const
{
	return _tolerance;
}

void UNIX_Tachometer::setTolerance(Sint32 &value)
{
	_tolerance = value;
}

Boolean UNIX_Tachometer::getAccuracy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCURACY, getAccuracy());
	return true;
}

Sint32 UNIX_Tachometer::getAccuracy() const
{
	return _accuracy;
}

void UNIX_Tachometer::setAccuracy(Sint32 &value)
{
	_accuracy = value;
}

Boolean UNIX_Tachometer::getIsLinear(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_LINEAR, getIsLinear());
	return true;
}

Boolean UNIX_Tachometer::getIsLinear() const
{
	return _isLinear;
}

void UNIX_Tachometer::setIsLinear(Boolean &value)
{
	_isLinear = value;
}

Boolean UNIX_Tachometer::getHysteresis(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HYSTERESIS, getHysteresis());
	return true;
}

Uint32 UNIX_Tachometer::getHysteresis() const
{
	return _hysteresis;
}

void UNIX_Tachometer::setHysteresis(Uint32 &value)
{
	_hysteresis = value;
}

Boolean UNIX_Tachometer::getLowerThresholdNonCritical(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOWER_THRESHOLD_NON_CRITICAL, getLowerThresholdNonCritical());
	return true;
}

Sint32 UNIX_Tachometer::getLowerThresholdNonCritical() const
{
	return _lowerThresholdNonCritical;
}

void UNIX_Tachometer::setLowerThresholdNonCritical(Sint32 &value)
{
	_lowerThresholdNonCritical = value;
}

Boolean UNIX_Tachometer::getUpperThresholdNonCritical(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UPPER_THRESHOLD_NON_CRITICAL, getUpperThresholdNonCritical());
	return true;
}

Sint32 UNIX_Tachometer::getUpperThresholdNonCritical() const
{
	return _upperThresholdNonCritical;
}

void UNIX_Tachometer::setUpperThresholdNonCritical(Sint32 &value)
{
	_upperThresholdNonCritical = value;
}

Boolean UNIX_Tachometer::getLowerThresholdCritical(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOWER_THRESHOLD_CRITICAL, getLowerThresholdCritical());
	return true;
}

Sint32 UNIX_Tachometer::getLowerThresholdCritical() const
{
	return _lowerThresholdCritical;
}

void UNIX_Tachometer::setLowerThresholdCritical(Sint32 &value)
{
	_lowerThresholdCritical = value;
}

Boolean UNIX_Tachometer::getUpperThresholdCritical(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UPPER_THRESHOLD_CRITICAL, getUpperThresholdCritical());
	return true;
}

Sint32 UNIX_Tachometer::getUpperThresholdCritical() const
{
	return _upperThresholdCritical;
}

void UNIX_Tachometer::setUpperThresholdCritical(Sint32 &value)
{
	_upperThresholdCritical = value;
}

Boolean UNIX_Tachometer::getLowerThresholdFatal(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOWER_THRESHOLD_FATAL, getLowerThresholdFatal());
	return true;
}

Sint32 UNIX_Tachometer::getLowerThresholdFatal() const
{
	return _lowerThresholdFatal;
}

void UNIX_Tachometer::setLowerThresholdFatal(Sint32 &value)
{
	_lowerThresholdFatal = value;
}

Boolean UNIX_Tachometer::getUpperThresholdFatal(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UPPER_THRESHOLD_FATAL, getUpperThresholdFatal());
	return true;
}

Sint32 UNIX_Tachometer::getUpperThresholdFatal() const
{
	return _upperThresholdFatal;
}

void UNIX_Tachometer::setUpperThresholdFatal(Sint32 &value)
{
	_upperThresholdFatal = value;
}

Boolean UNIX_Tachometer::getSupportedThresholds(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_THRESHOLDS, getSupportedThresholds());
	return true;
}

Array<Uint16> UNIX_Tachometer::getSupportedThresholds() const
{
	return _supportedThresholds;
}

void UNIX_Tachometer::setSupportedThresholds(Array<Uint16> &value)
{
	_supportedThresholds = value;
}

Boolean UNIX_Tachometer::getEnabledThresholds(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_THRESHOLDS, getEnabledThresholds());
	return true;
}

Array<Uint16> UNIX_Tachometer::getEnabledThresholds() const
{
	return _enabledThresholds;
}

void UNIX_Tachometer::setEnabledThresholds(Array<Uint16> &value)
{
	_enabledThresholds = value;
}

Boolean UNIX_Tachometer::getSettableThresholds(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SETTABLE_THRESHOLDS, getSettableThresholds());
	return true;
}

Array<Uint16> UNIX_Tachometer::getSettableThresholds() const
{
	return _settableThresholds;
}

void UNIX_Tachometer::setSettableThresholds(Array<Uint16> &value)
{
	_settableThresholds = value;
}

Boolean UNIX_Tachometer::getProgrammaticAccuracy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROGRAMMATIC_ACCURACY, getProgrammaticAccuracy());
	return true;
}

Uint32 UNIX_Tachometer::getProgrammaticAccuracy() const
{
	return _programmaticAccuracy;
}

void UNIX_Tachometer::setProgrammaticAccuracy(Uint32 &value)
{
	_programmaticAccuracy = value;
}

Boolean UNIX_Tachometer::getAccuracyUnits(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCURACY_UNITS, getAccuracyUnits());
	return true;
}

String UNIX_Tachometer::getAccuracyUnits() const
{
	return _accuracyUnits;
}

void UNIX_Tachometer::setAccuracyUnits(String &value)
{
	_accuracyUnits = value;
}

Boolean UNIX_Tachometer::getValueFormulation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VALUE_FORMULATION, getValueFormulation());
	return true;
}

Uint16 UNIX_Tachometer::getValueFormulation() const
{
	return _valueFormulation;
}

void UNIX_Tachometer::setValueFormulation(Uint16 &value)
{
	_valueFormulation = value;
}


void UNIX_Tachometer::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("Tachometer");
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
	_creationClassName = String("UNIX_Tachometer");
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
	_sensorType = Uint16(0);
	_otherSensorTypeDescription = String ("");
	_possibleStates.clear();
	_currentState = String ("");
	_pollingInterval = Uint64(0);
	_sensorContext = String ("");
	_baseUnits = Uint16(0);
	_unitModifier = Sint32(0);
	_rateUnits = Uint16(0);
	_currentReading = Sint32(0);
	_nominalReading = Sint32(0);
	_normalMax = Sint32(0);
	_normalMin = Sint32(0);
	_maxReadable = Sint32(0);
	_minReadable = Sint32(0);
	_resolution = Uint32(0);
	_tolerance = Sint32(0);
	_accuracy = Sint32(0);
	_isLinear = Boolean(false);
	_hysteresis = Uint32(0);
	_lowerThresholdNonCritical = Sint32(0);
	_upperThresholdNonCritical = Sint32(0);
	_lowerThresholdCritical = Sint32(0);
	_upperThresholdCritical = Sint32(0);
	_lowerThresholdFatal = Sint32(0);
	_upperThresholdFatal = Sint32(0);
	_supportedThresholds.clear();
	_enabledThresholds.clear();
	_settableThresholds.clear();
	_programmaticAccuracy = Uint32(0);
	_accuracyUnits = String ("");
	_valueFormulation = Uint16(0);

}

Boolean UNIX_Tachometer::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "SensorType"))
			{
				Uint16 sensorTypeValue;
				property.getValue().get(sensorTypeValue);
				setSensorType(sensorTypeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherSensorTypeDescription"))
			{
				String otherSensorTypeDescriptionValue;
				property.getValue().get(otherSensorTypeDescriptionValue);
				setOtherSensorTypeDescription(otherSensorTypeDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "PossibleStates"))
			{
				Array<String> possibleStatesValue;
				property.getValue().get(possibleStatesValue);
				setPossibleStates(possibleStatesValue);
			}
			else if (String::equal(property.getName().getString(), "CurrentState"))
			{
				String currentStateValue;
				property.getValue().get(currentStateValue);
				setCurrentState(currentStateValue);
			}
			else if (String::equal(property.getName().getString(), "PollingInterval"))
			{
				Uint64 pollingIntervalValue;
				property.getValue().get(pollingIntervalValue);
				setPollingInterval(pollingIntervalValue);
			}
			else if (String::equal(property.getName().getString(), "SensorContext"))
			{
				String sensorContextValue;
				property.getValue().get(sensorContextValue);
				setSensorContext(sensorContextValue);
			}
			else if (String::equal(property.getName().getString(), "BaseUnits"))
			{
				Uint16 baseUnitsValue;
				property.getValue().get(baseUnitsValue);
				setBaseUnits(baseUnitsValue);
			}
			else if (String::equal(property.getName().getString(), "UnitModifier"))
			{
				Sint32 unitModifierValue;
				property.getValue().get(unitModifierValue);
				setUnitModifier(unitModifierValue);
			}
			else if (String::equal(property.getName().getString(), "RateUnits"))
			{
				Uint16 rateUnitsValue;
				property.getValue().get(rateUnitsValue);
				setRateUnits(rateUnitsValue);
			}
			else if (String::equal(property.getName().getString(), "CurrentReading"))
			{
				Sint32 currentReadingValue;
				property.getValue().get(currentReadingValue);
				setCurrentReading(currentReadingValue);
			}
			else if (String::equal(property.getName().getString(), "NominalReading"))
			{
				Sint32 nominalReadingValue;
				property.getValue().get(nominalReadingValue);
				setNominalReading(nominalReadingValue);
			}
			else if (String::equal(property.getName().getString(), "NormalMax"))
			{
				Sint32 normalMaxValue;
				property.getValue().get(normalMaxValue);
				setNormalMax(normalMaxValue);
			}
			else if (String::equal(property.getName().getString(), "NormalMin"))
			{
				Sint32 normalMinValue;
				property.getValue().get(normalMinValue);
				setNormalMin(normalMinValue);
			}
			else if (String::equal(property.getName().getString(), "MaxReadable"))
			{
				Sint32 maxReadableValue;
				property.getValue().get(maxReadableValue);
				setMaxReadable(maxReadableValue);
			}
			else if (String::equal(property.getName().getString(), "MinReadable"))
			{
				Sint32 minReadableValue;
				property.getValue().get(minReadableValue);
				setMinReadable(minReadableValue);
			}
			else if (String::equal(property.getName().getString(), "Resolution"))
			{
				Uint32 resolutionValue;
				property.getValue().get(resolutionValue);
				setResolution(resolutionValue);
			}
			else if (String::equal(property.getName().getString(), "Tolerance"))
			{
				Sint32 toleranceValue;
				property.getValue().get(toleranceValue);
				setTolerance(toleranceValue);
			}
			else if (String::equal(property.getName().getString(), "Accuracy"))
			{
				Sint32 accuracyValue;
				property.getValue().get(accuracyValue);
				setAccuracy(accuracyValue);
			}
			else if (String::equal(property.getName().getString(), "IsLinear"))
			{
				Boolean isLinearValue;
				property.getValue().get(isLinearValue);
				setIsLinear(isLinearValue);
			}
			else if (String::equal(property.getName().getString(), "Hysteresis"))
			{
				Uint32 hysteresisValue;
				property.getValue().get(hysteresisValue);
				setHysteresis(hysteresisValue);
			}
			else if (String::equal(property.getName().getString(), "LowerThresholdNonCritical"))
			{
				Sint32 lowerThresholdNonCriticalValue;
				property.getValue().get(lowerThresholdNonCriticalValue);
				setLowerThresholdNonCritical(lowerThresholdNonCriticalValue);
			}
			else if (String::equal(property.getName().getString(), "UpperThresholdNonCritical"))
			{
				Sint32 upperThresholdNonCriticalValue;
				property.getValue().get(upperThresholdNonCriticalValue);
				setUpperThresholdNonCritical(upperThresholdNonCriticalValue);
			}
			else if (String::equal(property.getName().getString(), "LowerThresholdCritical"))
			{
				Sint32 lowerThresholdCriticalValue;
				property.getValue().get(lowerThresholdCriticalValue);
				setLowerThresholdCritical(lowerThresholdCriticalValue);
			}
			else if (String::equal(property.getName().getString(), "UpperThresholdCritical"))
			{
				Sint32 upperThresholdCriticalValue;
				property.getValue().get(upperThresholdCriticalValue);
				setUpperThresholdCritical(upperThresholdCriticalValue);
			}
			else if (String::equal(property.getName().getString(), "LowerThresholdFatal"))
			{
				Sint32 lowerThresholdFatalValue;
				property.getValue().get(lowerThresholdFatalValue);
				setLowerThresholdFatal(lowerThresholdFatalValue);
			}
			else if (String::equal(property.getName().getString(), "UpperThresholdFatal"))
			{
				Sint32 upperThresholdFatalValue;
				property.getValue().get(upperThresholdFatalValue);
				setUpperThresholdFatal(upperThresholdFatalValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedThresholds"))
			{
				Array<Uint16> supportedThresholdsValue;
				property.getValue().get(supportedThresholdsValue);
				setSupportedThresholds(supportedThresholdsValue);
			}
			else if (String::equal(property.getName().getString(), "EnabledThresholds"))
			{
				Array<Uint16> enabledThresholdsValue;
				property.getValue().get(enabledThresholdsValue);
				setEnabledThresholds(enabledThresholdsValue);
			}
			else if (String::equal(property.getName().getString(), "SettableThresholds"))
			{
				Array<Uint16> settableThresholdsValue;
				property.getValue().get(settableThresholdsValue);
				setSettableThresholds(settableThresholdsValue);
			}
			else if (String::equal(property.getName().getString(), "ProgrammaticAccuracy"))
			{
				Uint32 programmaticAccuracyValue;
				property.getValue().get(programmaticAccuracyValue);
				setProgrammaticAccuracy(programmaticAccuracyValue);
			}
			else if (String::equal(property.getName().getString(), "AccuracyUnits"))
			{
				String accuracyUnitsValue;
				property.getValue().get(accuracyUnitsValue);
				setAccuracyUnits(accuracyUnitsValue);
			}
			else if (String::equal(property.getName().getString(), "ValueFormulation"))
			{
				Uint16 valueFormulationValue;
				property.getValue().get(valueFormulationValue);
				setValueFormulation(valueFormulationValue);
			}
	}
	return true;
}

Uint32 UNIX_Tachometer::invokeRequestStateChange(
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

Uint32 UNIX_Tachometer::invokeSetPowerState(
		Uint16 &inPowerState,
		CIMDateTime &inTime
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SetPowerState */
	
	
	
	return returnValue;
}

Uint32 UNIX_Tachometer::invokeReset()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method Reset */
	
	
	
	return returnValue;
}

Uint32 UNIX_Tachometer::invokeEnableDevice(
		Boolean &inEnabled
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method EnableDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_Tachometer::invokeOnlineDevice(
		Boolean &inOnline
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method OnlineDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_Tachometer::invokeQuiesceDevice(
		Boolean &inQuiesce
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method QuiesceDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_Tachometer::invokeSaveProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SaveProperties */
	
	
	
	return returnValue;
}

Uint32 UNIX_Tachometer::invokeRestoreProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method RestoreProperties */
	
	
	
	return returnValue;
}

Uint32 UNIX_Tachometer::invokeRestoreDefaultThresholds()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method RestoreDefaultThresholds */
	
	
	
	return returnValue;
}

Uint32 UNIX_Tachometer::invokeGetNonLinearFactors(
		Sint32 &inSensorReading,
		Sint32 &inAccuracy,
		Uint32 &inResolution,
		Sint32 &inTolerance,
		Uint32 &inHysteresis
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method GetNonLinearFactors */
	
	
	
	return returnValue;
}


Boolean UNIX_Tachometer::initialize()
{
	return false;
}

Boolean UNIX_Tachometer::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("Tachometer");
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
	_creationClassName = String("UNIX_Tachometer");
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
	_sensorType = Uint16(0);
	_otherSensorTypeDescription = String ("");
	_possibleStates.clear();
	_currentState = String ("");
	_pollingInterval = Uint64(0);
	_sensorContext = String ("");
	_baseUnits = Uint16(0);
	_unitModifier = Sint32(0);
	_rateUnits = Uint16(0);
	_currentReading = Sint32(0);
	_nominalReading = Sint32(0);
	_normalMax = Sint32(0);
	_normalMin = Sint32(0);
	_maxReadable = Sint32(0);
	_minReadable = Sint32(0);
	_resolution = Uint32(0);
	_tolerance = Sint32(0);
	_accuracy = Sint32(0);
	_isLinear = Boolean(false);
	_hysteresis = Uint32(0);
	_lowerThresholdNonCritical = Sint32(0);
	_upperThresholdNonCritical = Sint32(0);
	_lowerThresholdCritical = Sint32(0);
	_upperThresholdCritical = Sint32(0);
	_lowerThresholdFatal = Sint32(0);
	_upperThresholdFatal = Sint32(0);
	_supportedThresholds.clear();
	_enabledThresholds.clear();
	_settableThresholds.clear();
	_programmaticAccuracy = Uint32(0);
	_accuracyUnits = String ("");
	_valueFormulation = Uint16(0);
	
	return false;
}

Boolean UNIX_Tachometer::finalize()
{
	return false;
}

Boolean UNIX_Tachometer::loadByName(const String name)
{
	return false;
}

Boolean UNIX_Tachometer::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_Tachometer::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Tachometer::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Tachometer::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Tachometer::validateInstance()
{
	return true;
}

