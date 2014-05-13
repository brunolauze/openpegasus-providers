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


UNIX_PowerSupply::UNIX_PowerSupply(void)
{
}

UNIX_PowerSupply::~UNIX_PowerSupply(void)
{
}

Boolean UNIX_PowerSupply::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_PowerSupply::getInstanceID() const
{
	return _instanceID;
}

void UNIX_PowerSupply::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_PowerSupply::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_PowerSupply::getCaption() const
{
	return _caption;
}

void UNIX_PowerSupply::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_PowerSupply::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_PowerSupply::getDescription() const
{
	return _description;
}

void UNIX_PowerSupply::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_PowerSupply::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_PowerSupply::getElementName() const
{
	return _elementName;
}

void UNIX_PowerSupply::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_PowerSupply::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_PowerSupply::getGeneration() const
{
	return _generation;
}

void UNIX_PowerSupply::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_PowerSupply::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_PowerSupply::getInstallDate() const
{
	return _installDate;
}

void UNIX_PowerSupply::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_PowerSupply::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_PowerSupply::getName() const
{
	return _name;
}

void UNIX_PowerSupply::setName(String &value)
{
	_name = value;
}

Boolean UNIX_PowerSupply::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_PowerSupply::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_PowerSupply::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_PowerSupply::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_PowerSupply::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_PowerSupply::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_PowerSupply::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_PowerSupply::getStatus() const
{
	return _status;
}

void UNIX_PowerSupply::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_PowerSupply::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_PowerSupply::getHealthState() const
{
	return _healthState;
}

void UNIX_PowerSupply::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_PowerSupply::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_PowerSupply::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_PowerSupply::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_PowerSupply::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_PowerSupply::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_PowerSupply::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_PowerSupply::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_PowerSupply::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_PowerSupply::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_PowerSupply::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_PowerSupply::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_PowerSupply::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_PowerSupply::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_PowerSupply::getEnabledState() const
{
	return _enabledState;
}

void UNIX_PowerSupply::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_PowerSupply::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_PowerSupply::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_PowerSupply::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_PowerSupply::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_PowerSupply::getRequestedState() const
{
	return _requestedState;
}

void UNIX_PowerSupply::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_PowerSupply::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_PowerSupply::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_PowerSupply::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_PowerSupply::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_PowerSupply::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_PowerSupply::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_PowerSupply::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_PowerSupply::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_PowerSupply::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_PowerSupply::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_PowerSupply::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_PowerSupply::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_PowerSupply::getAllocationState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOCATION_STATE, getAllocationState());
	return true;
}

String UNIX_PowerSupply::getAllocationState() const
{
	return _allocationState;
}

void UNIX_PowerSupply::setAllocationState(String &value)
{
	_allocationState = value;
}

Boolean UNIX_PowerSupply::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_PowerSupply::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_PowerSupply::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_PowerSupply::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_PowerSupply::getSystemName() const
{
	return _systemName;
}

void UNIX_PowerSupply::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_PowerSupply::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_PowerSupply::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_PowerSupply::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_PowerSupply::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_PowerSupply::getDeviceID() const
{
	return _deviceID;
}

void UNIX_PowerSupply::setDeviceID(String &value)
{
	_deviceID = value;
}

Boolean UNIX_PowerSupply::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_PowerSupply::getPowerManagementSupported() const
{
	return _powerManagementSupported;
}

void UNIX_PowerSupply::setPowerManagementSupported(Boolean &value)
{
	_powerManagementSupported = value;
}

Boolean UNIX_PowerSupply::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_PowerSupply::getPowerManagementCapabilities() const
{
	return _powerManagementCapabilities;
}

void UNIX_PowerSupply::setPowerManagementCapabilities(Array<Uint16> &value)
{
	_powerManagementCapabilities = value;
}

Boolean UNIX_PowerSupply::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_PowerSupply::getAvailability() const
{
	return _availability;
}

void UNIX_PowerSupply::setAvailability(Uint16 &value)
{
	_availability = value;
}

Boolean UNIX_PowerSupply::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_PowerSupply::getStatusInfo() const
{
	return _statusInfo;
}

void UNIX_PowerSupply::setStatusInfo(Uint16 &value)
{
	_statusInfo = value;
}

Boolean UNIX_PowerSupply::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_PowerSupply::getLastErrorCode() const
{
	return _lastErrorCode;
}

void UNIX_PowerSupply::setLastErrorCode(Uint32 &value)
{
	_lastErrorCode = value;
}

Boolean UNIX_PowerSupply::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_PowerSupply::getErrorDescription() const
{
	return _errorDescription;
}

void UNIX_PowerSupply::setErrorDescription(String &value)
{
	_errorDescription = value;
}

Boolean UNIX_PowerSupply::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_PowerSupply::getErrorCleared() const
{
	return _errorCleared;
}

void UNIX_PowerSupply::setErrorCleared(Boolean &value)
{
	_errorCleared = value;
}

Boolean UNIX_PowerSupply::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_PowerSupply::getOtherIdentifyingInfo() const
{
	return _otherIdentifyingInfo;
}

void UNIX_PowerSupply::setOtherIdentifyingInfo(Array<String> &value)
{
	_otherIdentifyingInfo = value;
}

Boolean UNIX_PowerSupply::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_PowerSupply::getPowerOnHours() const
{
	return _powerOnHours;
}

void UNIX_PowerSupply::setPowerOnHours(Uint64 &value)
{
	_powerOnHours = value;
}

Boolean UNIX_PowerSupply::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_PowerSupply::getTotalPowerOnHours() const
{
	return _totalPowerOnHours;
}

void UNIX_PowerSupply::setTotalPowerOnHours(Uint64 &value)
{
	_totalPowerOnHours = value;
}

Boolean UNIX_PowerSupply::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_PowerSupply::getIdentifyingDescriptions() const
{
	return _identifyingDescriptions;
}

void UNIX_PowerSupply::setIdentifyingDescriptions(Array<String> &value)
{
	_identifyingDescriptions = value;
}

Boolean UNIX_PowerSupply::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_PowerSupply::getAdditionalAvailability() const
{
	return _additionalAvailability;
}

void UNIX_PowerSupply::setAdditionalAvailability(Array<Uint16> &value)
{
	_additionalAvailability = value;
}

Boolean UNIX_PowerSupply::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_PowerSupply::getMaxQuiesceTime() const
{
	return _maxQuiesceTime;
}

void UNIX_PowerSupply::setMaxQuiesceTime(Uint64 &value)
{
	_maxQuiesceTime = value;
}

Boolean UNIX_PowerSupply::getLocationIndicator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCATION_INDICATOR, getLocationIndicator());
	return true;
}

Uint16 UNIX_PowerSupply::getLocationIndicator() const
{
	return _locationIndicator;
}

void UNIX_PowerSupply::setLocationIndicator(Uint16 &value)
{
	_locationIndicator = value;
}

Boolean UNIX_PowerSupply::getRatedMaxOutputPower(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATED_MAX_OUTPUT_POWER, getRatedMaxOutputPower());
	return true;
}

Uint32 UNIX_PowerSupply::getRatedMaxOutputPower() const
{
	return _ratedMaxOutputPower;
}

void UNIX_PowerSupply::setRatedMaxOutputPower(Uint32 &value)
{
	_ratedMaxOutputPower = value;
}

Boolean UNIX_PowerSupply::getOutputPowerUnits(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OUTPUT_POWER_UNITS, getOutputPowerUnits());
	return true;
}

String UNIX_PowerSupply::getOutputPowerUnits() const
{
	return _outputPowerUnits;
}

void UNIX_PowerSupply::setOutputPowerUnits(String &value)
{
	_outputPowerUnits = value;
}

Boolean UNIX_PowerSupply::getIsACOutput(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_A_C_OUTPUT, getIsACOutput());
	return true;
}

Boolean UNIX_PowerSupply::getIsACOutput() const
{
	return _isACOutput;
}

void UNIX_PowerSupply::setIsACOutput(Boolean &value)
{
	_isACOutput = value;
}

Boolean UNIX_PowerSupply::getIsSwitchingSupply(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_SWITCHING_SUPPLY, getIsSwitchingSupply());
	return true;
}

Boolean UNIX_PowerSupply::getIsSwitchingSupply() const
{
	return _isSwitchingSupply;
}

void UNIX_PowerSupply::setIsSwitchingSupply(Boolean &value)
{
	_isSwitchingSupply = value;
}

Boolean UNIX_PowerSupply::getRange1InputVoltageLow(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RANGE_1_INPUT_VOLTAGE_LOW, getRange1InputVoltageLow());
	return true;
}

Uint32 UNIX_PowerSupply::getRange1InputVoltageLow() const
{
	return _range1InputVoltageLow;
}

void UNIX_PowerSupply::setRange1InputVoltageLow(Uint32 &value)
{
	_range1InputVoltageLow = value;
}

Boolean UNIX_PowerSupply::getRange1InputVoltageHigh(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RANGE_1_INPUT_VOLTAGE_HIGH, getRange1InputVoltageHigh());
	return true;
}

Uint32 UNIX_PowerSupply::getRange1InputVoltageHigh() const
{
	return _range1InputVoltageHigh;
}

void UNIX_PowerSupply::setRange1InputVoltageHigh(Uint32 &value)
{
	_range1InputVoltageHigh = value;
}

Boolean UNIX_PowerSupply::getRange1InputFrequencyLow(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RANGE_1_INPUT_FREQUENCY_LOW, getRange1InputFrequencyLow());
	return true;
}

Uint32 UNIX_PowerSupply::getRange1InputFrequencyLow() const
{
	return _range1InputFrequencyLow;
}

void UNIX_PowerSupply::setRange1InputFrequencyLow(Uint32 &value)
{
	_range1InputFrequencyLow = value;
}

Boolean UNIX_PowerSupply::getRange1InputFrequencyHigh(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RANGE_1_INPUT_FREQUENCY_HIGH, getRange1InputFrequencyHigh());
	return true;
}

Uint32 UNIX_PowerSupply::getRange1InputFrequencyHigh() const
{
	return _range1InputFrequencyHigh;
}

void UNIX_PowerSupply::setRange1InputFrequencyHigh(Uint32 &value)
{
	_range1InputFrequencyHigh = value;
}

Boolean UNIX_PowerSupply::getRange2InputVoltageLow(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RANGE_2_INPUT_VOLTAGE_LOW, getRange2InputVoltageLow());
	return true;
}

Uint32 UNIX_PowerSupply::getRange2InputVoltageLow() const
{
	return _range2InputVoltageLow;
}

void UNIX_PowerSupply::setRange2InputVoltageLow(Uint32 &value)
{
	_range2InputVoltageLow = value;
}

Boolean UNIX_PowerSupply::getRange2InputVoltageHigh(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RANGE_2_INPUT_VOLTAGE_HIGH, getRange2InputVoltageHigh());
	return true;
}

Uint32 UNIX_PowerSupply::getRange2InputVoltageHigh() const
{
	return _range2InputVoltageHigh;
}

void UNIX_PowerSupply::setRange2InputVoltageHigh(Uint32 &value)
{
	_range2InputVoltageHigh = value;
}

Boolean UNIX_PowerSupply::getRange2InputFrequencyLow(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RANGE_2_INPUT_FREQUENCY_LOW, getRange2InputFrequencyLow());
	return true;
}

Uint32 UNIX_PowerSupply::getRange2InputFrequencyLow() const
{
	return _range2InputFrequencyLow;
}

void UNIX_PowerSupply::setRange2InputFrequencyLow(Uint32 &value)
{
	_range2InputFrequencyLow = value;
}

Boolean UNIX_PowerSupply::getRange2InputFrequencyHigh(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RANGE_2_INPUT_FREQUENCY_HIGH, getRange2InputFrequencyHigh());
	return true;
}

Uint32 UNIX_PowerSupply::getRange2InputFrequencyHigh() const
{
	return _range2InputFrequencyHigh;
}

void UNIX_PowerSupply::setRange2InputFrequencyHigh(Uint32 &value)
{
	_range2InputFrequencyHigh = value;
}

Boolean UNIX_PowerSupply::getActiveInputVoltage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACTIVE_INPUT_VOLTAGE, getActiveInputVoltage());
	return true;
}

Uint16 UNIX_PowerSupply::getActiveInputVoltage() const
{
	return _activeInputVoltage;
}

void UNIX_PowerSupply::setActiveInputVoltage(Uint16 &value)
{
	_activeInputVoltage = value;
}

Boolean UNIX_PowerSupply::getTypeOfRangeSwitching(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TYPE_OF_RANGE_SWITCHING, getTypeOfRangeSwitching());
	return true;
}

Uint16 UNIX_PowerSupply::getTypeOfRangeSwitching() const
{
	return _typeOfRangeSwitching;
}

void UNIX_PowerSupply::setTypeOfRangeSwitching(Uint16 &value)
{
	_typeOfRangeSwitching = value;
}

Boolean UNIX_PowerSupply::getTotalOutputPower(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_OUTPUT_POWER, getTotalOutputPower());
	return true;
}

Uint32 UNIX_PowerSupply::getTotalOutputPower() const
{
	return _totalOutputPower;
}

void UNIX_PowerSupply::setTotalOutputPower(Uint32 &value)
{
	_totalOutputPower = value;
}

Boolean UNIX_PowerSupply::getRange1MaxOutputPower(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RANGE_1_MAX_OUTPUT_POWER, getRange1MaxOutputPower());
	return true;
}

Uint32 UNIX_PowerSupply::getRange1MaxOutputPower() const
{
	return _range1MaxOutputPower;
}

void UNIX_PowerSupply::setRange1MaxOutputPower(Uint32 &value)
{
	_range1MaxOutputPower = value;
}

Boolean UNIX_PowerSupply::getRange2MaxOutputPower(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RANGE_2_MAX_OUTPUT_POWER, getRange2MaxOutputPower());
	return true;
}

Uint32 UNIX_PowerSupply::getRange2MaxOutputPower() const
{
	return _range2MaxOutputPower;
}

void UNIX_PowerSupply::setRange2MaxOutputPower(Uint32 &value)
{
	_range2MaxOutputPower = value;
}

Boolean UNIX_PowerSupply::getRange1MaxInputPower(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RANGE_1_MAX_INPUT_POWER, getRange1MaxInputPower());
	return true;
}

Uint32 UNIX_PowerSupply::getRange1MaxInputPower() const
{
	return _range1MaxInputPower;
}

void UNIX_PowerSupply::setRange1MaxInputPower(Uint32 &value)
{
	_range1MaxInputPower = value;
}

Boolean UNIX_PowerSupply::getRange2MaxInputPower(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RANGE_2_MAX_INPUT_POWER, getRange2MaxInputPower());
	return true;
}

Uint32 UNIX_PowerSupply::getRange2MaxInputPower() const
{
	return _range2MaxInputPower;
}

void UNIX_PowerSupply::setRange2MaxInputPower(Uint32 &value)
{
	_range2MaxInputPower = value;
}

Boolean UNIX_PowerSupply::getInputPowerUnits(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INPUT_POWER_UNITS, getInputPowerUnits());
	return true;
}

String UNIX_PowerSupply::getInputPowerUnits() const
{
	return _inputPowerUnits;
}

void UNIX_PowerSupply::setInputPowerUnits(String &value)
{
	_inputPowerUnits = value;
}

Boolean UNIX_PowerSupply::getIsACInput(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_A_C_INPUT, getIsACInput());
	return true;
}

Boolean UNIX_PowerSupply::getIsACInput() const
{
	return _isACInput;
}

void UNIX_PowerSupply::setIsACInput(Boolean &value)
{
	_isACInput = value;
}

Boolean UNIX_PowerSupply::getNumberOfPhasesUtilized(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_PHASES_UTILIZED, getNumberOfPhasesUtilized());
	return true;
}

Uint32 UNIX_PowerSupply::getNumberOfPhasesUtilized() const
{
	return _numberOfPhasesUtilized;
}

void UNIX_PowerSupply::setNumberOfPhasesUtilized(Uint32 &value)
{
	_numberOfPhasesUtilized = value;
}

Boolean UNIX_PowerSupply::getNominalPhaseWiring(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NOMINAL_PHASE_WIRING, getNominalPhaseWiring());
	return true;
}

Array<Uint32> UNIX_PowerSupply::getNominalPhaseWiring() const
{
	return _nominalPhaseWiring;
}

void UNIX_PowerSupply::setNominalPhaseWiring(Array<Uint32> &value)
{
	_nominalPhaseWiring = value;
}


void UNIX_PowerSupply::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PowerSupply");
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
	_creationClassName = String("UNIX_PowerSupply");
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
	_ratedMaxOutputPower = Uint32(0);
	_outputPowerUnits = String ("");
	_isACOutput = Boolean(false);
	_isSwitchingSupply = Boolean(false);
	_range1InputVoltageLow = Uint32(0);
	_range1InputVoltageHigh = Uint32(0);
	_range1InputFrequencyLow = Uint32(0);
	_range1InputFrequencyHigh = Uint32(0);
	_range2InputVoltageLow = Uint32(0);
	_range2InputVoltageHigh = Uint32(0);
	_range2InputFrequencyLow = Uint32(0);
	_range2InputFrequencyHigh = Uint32(0);
	_activeInputVoltage = Uint16(0);
	_typeOfRangeSwitching = Uint16(0);
	_totalOutputPower = Uint32(0);
	_range1MaxOutputPower = Uint32(0);
	_range2MaxOutputPower = Uint32(0);
	_range1MaxInputPower = Uint32(0);
	_range2MaxInputPower = Uint32(0);
	_inputPowerUnits = String ("");
	_isACInput = Boolean(false);
	_numberOfPhasesUtilized = Uint32(0);
	_nominalPhaseWiring.clear();

}

Boolean UNIX_PowerSupply::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "RatedMaxOutputPower"))
			{
				Uint32 ratedMaxOutputPowerValue;
				property.getValue().get(ratedMaxOutputPowerValue);
				setRatedMaxOutputPower(ratedMaxOutputPowerValue);
			}
			else if (String::equal(property.getName().getString(), "OutputPowerUnits"))
			{
				String outputPowerUnitsValue;
				property.getValue().get(outputPowerUnitsValue);
				setOutputPowerUnits(outputPowerUnitsValue);
			}
			else if (String::equal(property.getName().getString(), "IsACOutput"))
			{
				Boolean isACOutputValue;
				property.getValue().get(isACOutputValue);
				setIsACOutput(isACOutputValue);
			}
			else if (String::equal(property.getName().getString(), "IsSwitchingSupply"))
			{
				Boolean isSwitchingSupplyValue;
				property.getValue().get(isSwitchingSupplyValue);
				setIsSwitchingSupply(isSwitchingSupplyValue);
			}
			else if (String::equal(property.getName().getString(), "Range1InputVoltageLow"))
			{
				Uint32 range1InputVoltageLowValue;
				property.getValue().get(range1InputVoltageLowValue);
				setRange1InputVoltageLow(range1InputVoltageLowValue);
			}
			else if (String::equal(property.getName().getString(), "Range1InputVoltageHigh"))
			{
				Uint32 range1InputVoltageHighValue;
				property.getValue().get(range1InputVoltageHighValue);
				setRange1InputVoltageHigh(range1InputVoltageHighValue);
			}
			else if (String::equal(property.getName().getString(), "Range1InputFrequencyLow"))
			{
				Uint32 range1InputFrequencyLowValue;
				property.getValue().get(range1InputFrequencyLowValue);
				setRange1InputFrequencyLow(range1InputFrequencyLowValue);
			}
			else if (String::equal(property.getName().getString(), "Range1InputFrequencyHigh"))
			{
				Uint32 range1InputFrequencyHighValue;
				property.getValue().get(range1InputFrequencyHighValue);
				setRange1InputFrequencyHigh(range1InputFrequencyHighValue);
			}
			else if (String::equal(property.getName().getString(), "Range2InputVoltageLow"))
			{
				Uint32 range2InputVoltageLowValue;
				property.getValue().get(range2InputVoltageLowValue);
				setRange2InputVoltageLow(range2InputVoltageLowValue);
			}
			else if (String::equal(property.getName().getString(), "Range2InputVoltageHigh"))
			{
				Uint32 range2InputVoltageHighValue;
				property.getValue().get(range2InputVoltageHighValue);
				setRange2InputVoltageHigh(range2InputVoltageHighValue);
			}
			else if (String::equal(property.getName().getString(), "Range2InputFrequencyLow"))
			{
				Uint32 range2InputFrequencyLowValue;
				property.getValue().get(range2InputFrequencyLowValue);
				setRange2InputFrequencyLow(range2InputFrequencyLowValue);
			}
			else if (String::equal(property.getName().getString(), "Range2InputFrequencyHigh"))
			{
				Uint32 range2InputFrequencyHighValue;
				property.getValue().get(range2InputFrequencyHighValue);
				setRange2InputFrequencyHigh(range2InputFrequencyHighValue);
			}
			else if (String::equal(property.getName().getString(), "ActiveInputVoltage"))
			{
				Uint16 activeInputVoltageValue;
				property.getValue().get(activeInputVoltageValue);
				setActiveInputVoltage(activeInputVoltageValue);
			}
			else if (String::equal(property.getName().getString(), "TypeOfRangeSwitching"))
			{
				Uint16 typeOfRangeSwitchingValue;
				property.getValue().get(typeOfRangeSwitchingValue);
				setTypeOfRangeSwitching(typeOfRangeSwitchingValue);
			}
			else if (String::equal(property.getName().getString(), "TotalOutputPower"))
			{
				Uint32 totalOutputPowerValue;
				property.getValue().get(totalOutputPowerValue);
				setTotalOutputPower(totalOutputPowerValue);
			}
			else if (String::equal(property.getName().getString(), "Range1MaxOutputPower"))
			{
				Uint32 range1MaxOutputPowerValue;
				property.getValue().get(range1MaxOutputPowerValue);
				setRange1MaxOutputPower(range1MaxOutputPowerValue);
			}
			else if (String::equal(property.getName().getString(), "Range2MaxOutputPower"))
			{
				Uint32 range2MaxOutputPowerValue;
				property.getValue().get(range2MaxOutputPowerValue);
				setRange2MaxOutputPower(range2MaxOutputPowerValue);
			}
			else if (String::equal(property.getName().getString(), "Range1MaxInputPower"))
			{
				Uint32 range1MaxInputPowerValue;
				property.getValue().get(range1MaxInputPowerValue);
				setRange1MaxInputPower(range1MaxInputPowerValue);
			}
			else if (String::equal(property.getName().getString(), "Range2MaxInputPower"))
			{
				Uint32 range2MaxInputPowerValue;
				property.getValue().get(range2MaxInputPowerValue);
				setRange2MaxInputPower(range2MaxInputPowerValue);
			}
			else if (String::equal(property.getName().getString(), "InputPowerUnits"))
			{
				String inputPowerUnitsValue;
				property.getValue().get(inputPowerUnitsValue);
				setInputPowerUnits(inputPowerUnitsValue);
			}
			else if (String::equal(property.getName().getString(), "IsACInput"))
			{
				Boolean isACInputValue;
				property.getValue().get(isACInputValue);
				setIsACInput(isACInputValue);
			}
			else if (String::equal(property.getName().getString(), "NumberOfPhasesUtilized"))
			{
				Uint32 numberOfPhasesUtilizedValue;
				property.getValue().get(numberOfPhasesUtilizedValue);
				setNumberOfPhasesUtilized(numberOfPhasesUtilizedValue);
			}
			else if (String::equal(property.getName().getString(), "NominalPhaseWiring"))
			{
				Array<Uint32> nominalPhaseWiringValue;
				property.getValue().get(nominalPhaseWiringValue);
				setNominalPhaseWiring(nominalPhaseWiringValue);
			}
	}
	return true;
}

Uint32 UNIX_PowerSupply::invokeRequestStateChange(
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

Uint32 UNIX_PowerSupply::invokeSetPowerState(
		Uint16 &inPowerState,
		CIMDateTime &inTime
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SetPowerState */
	
	
	
	return returnValue;
}

Uint32 UNIX_PowerSupply::invokeReset()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method Reset */
	
	
	
	return returnValue;
}

Uint32 UNIX_PowerSupply::invokeEnableDevice(
		Boolean &inEnabled
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method EnableDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_PowerSupply::invokeOnlineDevice(
		Boolean &inOnline
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method OnlineDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_PowerSupply::invokeQuiesceDevice(
		Boolean &inQuiesce
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method QuiesceDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_PowerSupply::invokeSaveProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SaveProperties */
	
	
	
	return returnValue;
}

Uint32 UNIX_PowerSupply::invokeRestoreProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method RestoreProperties */
	
	
	
	return returnValue;
}


Boolean UNIX_PowerSupply::initialize()
{
	return false;
}

Boolean UNIX_PowerSupply::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PowerSupply");
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
	_creationClassName = String("UNIX_PowerSupply");
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
	_ratedMaxOutputPower = Uint32(0);
	_outputPowerUnits = String ("");
	_isACOutput = Boolean(false);
	_isSwitchingSupply = Boolean(false);
	_range1InputVoltageLow = Uint32(0);
	_range1InputVoltageHigh = Uint32(0);
	_range1InputFrequencyLow = Uint32(0);
	_range1InputFrequencyHigh = Uint32(0);
	_range2InputVoltageLow = Uint32(0);
	_range2InputVoltageHigh = Uint32(0);
	_range2InputFrequencyLow = Uint32(0);
	_range2InputFrequencyHigh = Uint32(0);
	_activeInputVoltage = Uint16(0);
	_typeOfRangeSwitching = Uint16(0);
	_totalOutputPower = Uint32(0);
	_range1MaxOutputPower = Uint32(0);
	_range2MaxOutputPower = Uint32(0);
	_range1MaxInputPower = Uint32(0);
	_range2MaxInputPower = Uint32(0);
	_inputPowerUnits = String ("");
	_isACInput = Boolean(false);
	_numberOfPhasesUtilized = Uint32(0);
	_nominalPhaseWiring.clear();
	
	return false;
}

Boolean UNIX_PowerSupply::finalize()
{
	return false;
}

Boolean UNIX_PowerSupply::loadByName(const String name)
{
	return false;
}

Boolean UNIX_PowerSupply::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_PowerSupply::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PowerSupply::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PowerSupply::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PowerSupply::validateInstance()
{
	return true;
}

