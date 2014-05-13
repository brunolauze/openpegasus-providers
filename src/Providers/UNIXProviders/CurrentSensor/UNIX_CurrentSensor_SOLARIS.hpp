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


UNIX_CurrentSensor::UNIX_CurrentSensor(void)
{
}

UNIX_CurrentSensor::~UNIX_CurrentSensor(void)
{
}

Boolean UNIX_CurrentSensor::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_CurrentSensor::getInstanceID() const
{
	return _instanceID;
}

void UNIX_CurrentSensor::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_CurrentSensor::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_CurrentSensor::getCaption() const
{
	return _caption;
}

void UNIX_CurrentSensor::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_CurrentSensor::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_CurrentSensor::getDescription() const
{
	return _description;
}

void UNIX_CurrentSensor::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_CurrentSensor::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_CurrentSensor::getElementName() const
{
	return _elementName;
}

void UNIX_CurrentSensor::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_CurrentSensor::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_CurrentSensor::getGeneration() const
{
	return _generation;
}

void UNIX_CurrentSensor::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_CurrentSensor::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_CurrentSensor::getInstallDate() const
{
	return _installDate;
}

void UNIX_CurrentSensor::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_CurrentSensor::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_CurrentSensor::getName() const
{
	return _name;
}

void UNIX_CurrentSensor::setName(String &value)
{
	_name = value;
}

Boolean UNIX_CurrentSensor::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_CurrentSensor::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_CurrentSensor::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_CurrentSensor::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_CurrentSensor::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_CurrentSensor::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_CurrentSensor::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_CurrentSensor::getStatus() const
{
	return _status;
}

void UNIX_CurrentSensor::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_CurrentSensor::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_CurrentSensor::getHealthState() const
{
	return _healthState;
}

void UNIX_CurrentSensor::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_CurrentSensor::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_CurrentSensor::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_CurrentSensor::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_CurrentSensor::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_CurrentSensor::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_CurrentSensor::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_CurrentSensor::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_CurrentSensor::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_CurrentSensor::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_CurrentSensor::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_CurrentSensor::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_CurrentSensor::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_CurrentSensor::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_CurrentSensor::getEnabledState() const
{
	return _enabledState;
}

void UNIX_CurrentSensor::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_CurrentSensor::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_CurrentSensor::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_CurrentSensor::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_CurrentSensor::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_CurrentSensor::getRequestedState() const
{
	return _requestedState;
}

void UNIX_CurrentSensor::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_CurrentSensor::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_CurrentSensor::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_CurrentSensor::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_CurrentSensor::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_CurrentSensor::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_CurrentSensor::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_CurrentSensor::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_CurrentSensor::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_CurrentSensor::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_CurrentSensor::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_CurrentSensor::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_CurrentSensor::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_CurrentSensor::getAllocationState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOCATION_STATE, getAllocationState());
	return true;
}

String UNIX_CurrentSensor::getAllocationState() const
{
	return _allocationState;
}

void UNIX_CurrentSensor::setAllocationState(String &value)
{
	_allocationState = value;
}

Boolean UNIX_CurrentSensor::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_CurrentSensor::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_CurrentSensor::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_CurrentSensor::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_CurrentSensor::getSystemName() const
{
	return _systemName;
}

void UNIX_CurrentSensor::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_CurrentSensor::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_CurrentSensor::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_CurrentSensor::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_CurrentSensor::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_CurrentSensor::getDeviceID() const
{
	return _deviceID;
}

void UNIX_CurrentSensor::setDeviceID(String &value)
{
	_deviceID = value;
}

Boolean UNIX_CurrentSensor::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_CurrentSensor::getPowerManagementSupported() const
{
	return _powerManagementSupported;
}

void UNIX_CurrentSensor::setPowerManagementSupported(Boolean &value)
{
	_powerManagementSupported = value;
}

Boolean UNIX_CurrentSensor::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_CurrentSensor::getPowerManagementCapabilities() const
{
	return _powerManagementCapabilities;
}

void UNIX_CurrentSensor::setPowerManagementCapabilities(Array<Uint16> &value)
{
	_powerManagementCapabilities = value;
}

Boolean UNIX_CurrentSensor::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_CurrentSensor::getAvailability() const
{
	return _availability;
}

void UNIX_CurrentSensor::setAvailability(Uint16 &value)
{
	_availability = value;
}

Boolean UNIX_CurrentSensor::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_CurrentSensor::getStatusInfo() const
{
	return _statusInfo;
}

void UNIX_CurrentSensor::setStatusInfo(Uint16 &value)
{
	_statusInfo = value;
}

Boolean UNIX_CurrentSensor::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_CurrentSensor::getLastErrorCode() const
{
	return _lastErrorCode;
}

void UNIX_CurrentSensor::setLastErrorCode(Uint32 &value)
{
	_lastErrorCode = value;
}

Boolean UNIX_CurrentSensor::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_CurrentSensor::getErrorDescription() const
{
	return _errorDescription;
}

void UNIX_CurrentSensor::setErrorDescription(String &value)
{
	_errorDescription = value;
}

Boolean UNIX_CurrentSensor::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_CurrentSensor::getErrorCleared() const
{
	return _errorCleared;
}

void UNIX_CurrentSensor::setErrorCleared(Boolean &value)
{
	_errorCleared = value;
}

Boolean UNIX_CurrentSensor::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_CurrentSensor::getOtherIdentifyingInfo() const
{
	return _otherIdentifyingInfo;
}

void UNIX_CurrentSensor::setOtherIdentifyingInfo(Array<String> &value)
{
	_otherIdentifyingInfo = value;
}

Boolean UNIX_CurrentSensor::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_CurrentSensor::getPowerOnHours() const
{
	return _powerOnHours;
}

void UNIX_CurrentSensor::setPowerOnHours(Uint64 &value)
{
	_powerOnHours = value;
}

Boolean UNIX_CurrentSensor::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_CurrentSensor::getTotalPowerOnHours() const
{
	return _totalPowerOnHours;
}

void UNIX_CurrentSensor::setTotalPowerOnHours(Uint64 &value)
{
	_totalPowerOnHours = value;
}

Boolean UNIX_CurrentSensor::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_CurrentSensor::getIdentifyingDescriptions() const
{
	return _identifyingDescriptions;
}

void UNIX_CurrentSensor::setIdentifyingDescriptions(Array<String> &value)
{
	_identifyingDescriptions = value;
}

Boolean UNIX_CurrentSensor::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_CurrentSensor::getAdditionalAvailability() const
{
	return _additionalAvailability;
}

void UNIX_CurrentSensor::setAdditionalAvailability(Array<Uint16> &value)
{
	_additionalAvailability = value;
}

Boolean UNIX_CurrentSensor::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_CurrentSensor::getMaxQuiesceTime() const
{
	return _maxQuiesceTime;
}

void UNIX_CurrentSensor::setMaxQuiesceTime(Uint64 &value)
{
	_maxQuiesceTime = value;
}

Boolean UNIX_CurrentSensor::getLocationIndicator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCATION_INDICATOR, getLocationIndicator());
	return true;
}

Uint16 UNIX_CurrentSensor::getLocationIndicator() const
{
	return _locationIndicator;
}

void UNIX_CurrentSensor::setLocationIndicator(Uint16 &value)
{
	_locationIndicator = value;
}

Boolean UNIX_CurrentSensor::getSensorType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SENSOR_TYPE, getSensorType());
	return true;
}

Uint16 UNIX_CurrentSensor::getSensorType() const
{
	return _sensorType;
}

void UNIX_CurrentSensor::setSensorType(Uint16 &value)
{
	_sensorType = value;
}

Boolean UNIX_CurrentSensor::getOtherSensorTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SENSOR_TYPE_DESCRIPTION, getOtherSensorTypeDescription());
	return true;
}

String UNIX_CurrentSensor::getOtherSensorTypeDescription() const
{
	return _otherSensorTypeDescription;
}

void UNIX_CurrentSensor::setOtherSensorTypeDescription(String &value)
{
	_otherSensorTypeDescription = value;
}

Boolean UNIX_CurrentSensor::getPossibleStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POSSIBLE_STATES, getPossibleStates());
	return true;
}

Array<String> UNIX_CurrentSensor::getPossibleStates() const
{
	return _possibleStates;
}

void UNIX_CurrentSensor::setPossibleStates(Array<String> &value)
{
	_possibleStates = value;
}

Boolean UNIX_CurrentSensor::getCurrentState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_STATE, getCurrentState());
	return true;
}

String UNIX_CurrentSensor::getCurrentState() const
{
	return _currentState;
}

void UNIX_CurrentSensor::setCurrentState(String &value)
{
	_currentState = value;
}

Boolean UNIX_CurrentSensor::getPollingInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLLING_INTERVAL, getPollingInterval());
	return true;
}

Uint64 UNIX_CurrentSensor::getPollingInterval() const
{
	return _pollingInterval;
}

void UNIX_CurrentSensor::setPollingInterval(Uint64 &value)
{
	_pollingInterval = value;
}

Boolean UNIX_CurrentSensor::getSensorContext(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SENSOR_CONTEXT, getSensorContext());
	return true;
}

String UNIX_CurrentSensor::getSensorContext() const
{
	return _sensorContext;
}

void UNIX_CurrentSensor::setSensorContext(String &value)
{
	_sensorContext = value;
}

Boolean UNIX_CurrentSensor::getBaseUnits(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BASE_UNITS, getBaseUnits());
	return true;
}

Uint16 UNIX_CurrentSensor::getBaseUnits() const
{
	return _baseUnits;
}

void UNIX_CurrentSensor::setBaseUnits(Uint16 &value)
{
	_baseUnits = value;
}

Boolean UNIX_CurrentSensor::getUnitModifier(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNIT_MODIFIER, getUnitModifier());
	return true;
}

Sint32 UNIX_CurrentSensor::getUnitModifier() const
{
	return _unitModifier;
}

void UNIX_CurrentSensor::setUnitModifier(Sint32 &value)
{
	_unitModifier = value;
}

Boolean UNIX_CurrentSensor::getRateUnits(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_UNITS, getRateUnits());
	return true;
}

Uint16 UNIX_CurrentSensor::getRateUnits() const
{
	return _rateUnits;
}

void UNIX_CurrentSensor::setRateUnits(Uint16 &value)
{
	_rateUnits = value;
}

Boolean UNIX_CurrentSensor::getCurrentReading(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_READING, getCurrentReading());
	return true;
}

Sint32 UNIX_CurrentSensor::getCurrentReading() const
{
	return _currentReading;
}

void UNIX_CurrentSensor::setCurrentReading(Sint32 &value)
{
	_currentReading = value;
}

Boolean UNIX_CurrentSensor::getNominalReading(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NOMINAL_READING, getNominalReading());
	return true;
}

Sint32 UNIX_CurrentSensor::getNominalReading() const
{
	return _nominalReading;
}

void UNIX_CurrentSensor::setNominalReading(Sint32 &value)
{
	_nominalReading = value;
}

Boolean UNIX_CurrentSensor::getNormalMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NORMAL_MAX, getNormalMax());
	return true;
}

Sint32 UNIX_CurrentSensor::getNormalMax() const
{
	return _normalMax;
}

void UNIX_CurrentSensor::setNormalMax(Sint32 &value)
{
	_normalMax = value;
}

Boolean UNIX_CurrentSensor::getNormalMin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NORMAL_MIN, getNormalMin());
	return true;
}

Sint32 UNIX_CurrentSensor::getNormalMin() const
{
	return _normalMin;
}

void UNIX_CurrentSensor::setNormalMin(Sint32 &value)
{
	_normalMin = value;
}

Boolean UNIX_CurrentSensor::getMaxReadable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_READABLE, getMaxReadable());
	return true;
}

Sint32 UNIX_CurrentSensor::getMaxReadable() const
{
	return _maxReadable;
}

void UNIX_CurrentSensor::setMaxReadable(Sint32 &value)
{
	_maxReadable = value;
}

Boolean UNIX_CurrentSensor::getMinReadable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIN_READABLE, getMinReadable());
	return true;
}

Sint32 UNIX_CurrentSensor::getMinReadable() const
{
	return _minReadable;
}

void UNIX_CurrentSensor::setMinReadable(Sint32 &value)
{
	_minReadable = value;
}

Boolean UNIX_CurrentSensor::getResolution(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESOLUTION, getResolution());
	return true;
}

Uint32 UNIX_CurrentSensor::getResolution() const
{
	return _resolution;
}

void UNIX_CurrentSensor::setResolution(Uint32 &value)
{
	_resolution = value;
}

Boolean UNIX_CurrentSensor::getTolerance(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOLERANCE, getTolerance());
	return true;
}

Sint32 UNIX_CurrentSensor::getTolerance() const
{
	return _tolerance;
}

void UNIX_CurrentSensor::setTolerance(Sint32 &value)
{
	_tolerance = value;
}

Boolean UNIX_CurrentSensor::getAccuracy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCURACY, getAccuracy());
	return true;
}

Sint32 UNIX_CurrentSensor::getAccuracy() const
{
	return _accuracy;
}

void UNIX_CurrentSensor::setAccuracy(Sint32 &value)
{
	_accuracy = value;
}

Boolean UNIX_CurrentSensor::getIsLinear(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_LINEAR, getIsLinear());
	return true;
}

Boolean UNIX_CurrentSensor::getIsLinear() const
{
	return _isLinear;
}

void UNIX_CurrentSensor::setIsLinear(Boolean &value)
{
	_isLinear = value;
}

Boolean UNIX_CurrentSensor::getHysteresis(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HYSTERESIS, getHysteresis());
	return true;
}

Uint32 UNIX_CurrentSensor::getHysteresis() const
{
	return _hysteresis;
}

void UNIX_CurrentSensor::setHysteresis(Uint32 &value)
{
	_hysteresis = value;
}

Boolean UNIX_CurrentSensor::getLowerThresholdNonCritical(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOWER_THRESHOLD_NON_CRITICAL, getLowerThresholdNonCritical());
	return true;
}

Sint32 UNIX_CurrentSensor::getLowerThresholdNonCritical() const
{
	return _lowerThresholdNonCritical;
}

void UNIX_CurrentSensor::setLowerThresholdNonCritical(Sint32 &value)
{
	_lowerThresholdNonCritical = value;
}

Boolean UNIX_CurrentSensor::getUpperThresholdNonCritical(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UPPER_THRESHOLD_NON_CRITICAL, getUpperThresholdNonCritical());
	return true;
}

Sint32 UNIX_CurrentSensor::getUpperThresholdNonCritical() const
{
	return _upperThresholdNonCritical;
}

void UNIX_CurrentSensor::setUpperThresholdNonCritical(Sint32 &value)
{
	_upperThresholdNonCritical = value;
}

Boolean UNIX_CurrentSensor::getLowerThresholdCritical(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOWER_THRESHOLD_CRITICAL, getLowerThresholdCritical());
	return true;
}

Sint32 UNIX_CurrentSensor::getLowerThresholdCritical() const
{
	return _lowerThresholdCritical;
}

void UNIX_CurrentSensor::setLowerThresholdCritical(Sint32 &value)
{
	_lowerThresholdCritical = value;
}

Boolean UNIX_CurrentSensor::getUpperThresholdCritical(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UPPER_THRESHOLD_CRITICAL, getUpperThresholdCritical());
	return true;
}

Sint32 UNIX_CurrentSensor::getUpperThresholdCritical() const
{
	return _upperThresholdCritical;
}

void UNIX_CurrentSensor::setUpperThresholdCritical(Sint32 &value)
{
	_upperThresholdCritical = value;
}

Boolean UNIX_CurrentSensor::getLowerThresholdFatal(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOWER_THRESHOLD_FATAL, getLowerThresholdFatal());
	return true;
}

Sint32 UNIX_CurrentSensor::getLowerThresholdFatal() const
{
	return _lowerThresholdFatal;
}

void UNIX_CurrentSensor::setLowerThresholdFatal(Sint32 &value)
{
	_lowerThresholdFatal = value;
}

Boolean UNIX_CurrentSensor::getUpperThresholdFatal(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UPPER_THRESHOLD_FATAL, getUpperThresholdFatal());
	return true;
}

Sint32 UNIX_CurrentSensor::getUpperThresholdFatal() const
{
	return _upperThresholdFatal;
}

void UNIX_CurrentSensor::setUpperThresholdFatal(Sint32 &value)
{
	_upperThresholdFatal = value;
}

Boolean UNIX_CurrentSensor::getSupportedThresholds(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_THRESHOLDS, getSupportedThresholds());
	return true;
}

Array<Uint16> UNIX_CurrentSensor::getSupportedThresholds() const
{
	return _supportedThresholds;
}

void UNIX_CurrentSensor::setSupportedThresholds(Array<Uint16> &value)
{
	_supportedThresholds = value;
}

Boolean UNIX_CurrentSensor::getEnabledThresholds(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_THRESHOLDS, getEnabledThresholds());
	return true;
}

Array<Uint16> UNIX_CurrentSensor::getEnabledThresholds() const
{
	return _enabledThresholds;
}

void UNIX_CurrentSensor::setEnabledThresholds(Array<Uint16> &value)
{
	_enabledThresholds = value;
}

Boolean UNIX_CurrentSensor::getSettableThresholds(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SETTABLE_THRESHOLDS, getSettableThresholds());
	return true;
}

Array<Uint16> UNIX_CurrentSensor::getSettableThresholds() const
{
	return _settableThresholds;
}

void UNIX_CurrentSensor::setSettableThresholds(Array<Uint16> &value)
{
	_settableThresholds = value;
}

Boolean UNIX_CurrentSensor::getProgrammaticAccuracy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROGRAMMATIC_ACCURACY, getProgrammaticAccuracy());
	return true;
}

Uint32 UNIX_CurrentSensor::getProgrammaticAccuracy() const
{
	return _programmaticAccuracy;
}

void UNIX_CurrentSensor::setProgrammaticAccuracy(Uint32 &value)
{
	_programmaticAccuracy = value;
}

Boolean UNIX_CurrentSensor::getAccuracyUnits(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCURACY_UNITS, getAccuracyUnits());
	return true;
}

String UNIX_CurrentSensor::getAccuracyUnits() const
{
	return _accuracyUnits;
}

void UNIX_CurrentSensor::setAccuracyUnits(String &value)
{
	_accuracyUnits = value;
}

Boolean UNIX_CurrentSensor::getValueFormulation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VALUE_FORMULATION, getValueFormulation());
	return true;
}

Uint16 UNIX_CurrentSensor::getValueFormulation() const
{
	return _valueFormulation;
}

void UNIX_CurrentSensor::setValueFormulation(Uint16 &value)
{
	_valueFormulation = value;
}


void UNIX_CurrentSensor::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("CurrentSensor");
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
	_creationClassName = String("UNIX_CurrentSensor");
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

Boolean UNIX_CurrentSensor::loadInstance(const CIMInstance &instance)
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

Uint32 UNIX_CurrentSensor::invokeRequestStateChange(
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

Uint32 UNIX_CurrentSensor::invokeSetPowerState(
		Uint16 &inPowerState,
		CIMDateTime &inTime
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SetPowerState */
	
	
	
	return returnValue;
}

Uint32 UNIX_CurrentSensor::invokeReset()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method Reset */
	
	
	
	return returnValue;
}

Uint32 UNIX_CurrentSensor::invokeEnableDevice(
		Boolean &inEnabled
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method EnableDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_CurrentSensor::invokeOnlineDevice(
		Boolean &inOnline
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method OnlineDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_CurrentSensor::invokeQuiesceDevice(
		Boolean &inQuiesce
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method QuiesceDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_CurrentSensor::invokeSaveProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SaveProperties */
	
	
	
	return returnValue;
}

Uint32 UNIX_CurrentSensor::invokeRestoreProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method RestoreProperties */
	
	
	
	return returnValue;
}

Uint32 UNIX_CurrentSensor::invokeRestoreDefaultThresholds()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method RestoreDefaultThresholds */
	
	
	
	return returnValue;
}

Uint32 UNIX_CurrentSensor::invokeGetNonLinearFactors(
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


Boolean UNIX_CurrentSensor::initialize()
{
	return false;
}

Boolean UNIX_CurrentSensor::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("CurrentSensor");
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
	_creationClassName = String("UNIX_CurrentSensor");
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

Boolean UNIX_CurrentSensor::finalize()
{
	return false;
}

Boolean UNIX_CurrentSensor::loadByName(const String name)
{
	return false;
}

Boolean UNIX_CurrentSensor::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_CurrentSensor::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_CurrentSensor::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_CurrentSensor::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_CurrentSensor::validateInstance()
{
	return true;
}

