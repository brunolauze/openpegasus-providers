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


UNIX_Battery::UNIX_Battery(void)
{
}

UNIX_Battery::~UNIX_Battery(void)
{
}

Boolean UNIX_Battery::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_Battery::getInstanceID() const
{
	return _instanceID;
}

void UNIX_Battery::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_Battery::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_Battery::getCaption() const
{
	return _caption;
}

void UNIX_Battery::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_Battery::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_Battery::getDescription() const
{
	return _description;
}

void UNIX_Battery::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_Battery::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_Battery::getElementName() const
{
	return _elementName;
}

void UNIX_Battery::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_Battery::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_Battery::getGeneration() const
{
	return _generation;
}

void UNIX_Battery::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_Battery::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_Battery::getInstallDate() const
{
	return _installDate;
}

void UNIX_Battery::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_Battery::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_Battery::getName() const
{
	return _name;
}

void UNIX_Battery::setName(String &value)
{
	_name = value;
}

Boolean UNIX_Battery::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_Battery::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_Battery::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_Battery::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_Battery::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_Battery::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_Battery::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_Battery::getStatus() const
{
	return _status;
}

void UNIX_Battery::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_Battery::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_Battery::getHealthState() const
{
	return _healthState;
}

void UNIX_Battery::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_Battery::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_Battery::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_Battery::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_Battery::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_Battery::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_Battery::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_Battery::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_Battery::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_Battery::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_Battery::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_Battery::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_Battery::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_Battery::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_Battery::getEnabledState() const
{
	return _enabledState;
}

void UNIX_Battery::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_Battery::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_Battery::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_Battery::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_Battery::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_Battery::getRequestedState() const
{
	return _requestedState;
}

void UNIX_Battery::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_Battery::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_Battery::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_Battery::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_Battery::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_Battery::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_Battery::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_Battery::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_Battery::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_Battery::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_Battery::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_Battery::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_Battery::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_Battery::getAllocationState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOCATION_STATE, getAllocationState());
	return true;
}

String UNIX_Battery::getAllocationState() const
{
	return _allocationState;
}

void UNIX_Battery::setAllocationState(String &value)
{
	_allocationState = value;
}

Boolean UNIX_Battery::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_Battery::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_Battery::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_Battery::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_Battery::getSystemName() const
{
	return _systemName;
}

void UNIX_Battery::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_Battery::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_Battery::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_Battery::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_Battery::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_Battery::getDeviceID() const
{
	return _deviceID;
}

void UNIX_Battery::setDeviceID(String &value)
{
	_deviceID = value;
}

Boolean UNIX_Battery::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_Battery::getPowerManagementSupported() const
{
	return _powerManagementSupported;
}

void UNIX_Battery::setPowerManagementSupported(Boolean &value)
{
	_powerManagementSupported = value;
}

Boolean UNIX_Battery::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_Battery::getPowerManagementCapabilities() const
{
	return _powerManagementCapabilities;
}

void UNIX_Battery::setPowerManagementCapabilities(Array<Uint16> &value)
{
	_powerManagementCapabilities = value;
}

Boolean UNIX_Battery::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_Battery::getAvailability() const
{
	return _availability;
}

void UNIX_Battery::setAvailability(Uint16 &value)
{
	_availability = value;
}

Boolean UNIX_Battery::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_Battery::getStatusInfo() const
{
	return _statusInfo;
}

void UNIX_Battery::setStatusInfo(Uint16 &value)
{
	_statusInfo = value;
}

Boolean UNIX_Battery::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_Battery::getLastErrorCode() const
{
	return _lastErrorCode;
}

void UNIX_Battery::setLastErrorCode(Uint32 &value)
{
	_lastErrorCode = value;
}

Boolean UNIX_Battery::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_Battery::getErrorDescription() const
{
	return _errorDescription;
}

void UNIX_Battery::setErrorDescription(String &value)
{
	_errorDescription = value;
}

Boolean UNIX_Battery::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_Battery::getErrorCleared() const
{
	return _errorCleared;
}

void UNIX_Battery::setErrorCleared(Boolean &value)
{
	_errorCleared = value;
}

Boolean UNIX_Battery::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_Battery::getOtherIdentifyingInfo() const
{
	return _otherIdentifyingInfo;
}

void UNIX_Battery::setOtherIdentifyingInfo(Array<String> &value)
{
	_otherIdentifyingInfo = value;
}

Boolean UNIX_Battery::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_Battery::getPowerOnHours() const
{
	return _powerOnHours;
}

void UNIX_Battery::setPowerOnHours(Uint64 &value)
{
	_powerOnHours = value;
}

Boolean UNIX_Battery::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_Battery::getTotalPowerOnHours() const
{
	return _totalPowerOnHours;
}

void UNIX_Battery::setTotalPowerOnHours(Uint64 &value)
{
	_totalPowerOnHours = value;
}

Boolean UNIX_Battery::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_Battery::getIdentifyingDescriptions() const
{
	return _identifyingDescriptions;
}

void UNIX_Battery::setIdentifyingDescriptions(Array<String> &value)
{
	_identifyingDescriptions = value;
}

Boolean UNIX_Battery::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_Battery::getAdditionalAvailability() const
{
	return _additionalAvailability;
}

void UNIX_Battery::setAdditionalAvailability(Array<Uint16> &value)
{
	_additionalAvailability = value;
}

Boolean UNIX_Battery::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_Battery::getMaxQuiesceTime() const
{
	return _maxQuiesceTime;
}

void UNIX_Battery::setMaxQuiesceTime(Uint64 &value)
{
	_maxQuiesceTime = value;
}

Boolean UNIX_Battery::getLocationIndicator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCATION_INDICATOR, getLocationIndicator());
	return true;
}

Uint16 UNIX_Battery::getLocationIndicator() const
{
	return _locationIndicator;
}

void UNIX_Battery::setLocationIndicator(Uint16 &value)
{
	_locationIndicator = value;
}

Boolean UNIX_Battery::getRatedMaxOutputPower(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATED_MAX_OUTPUT_POWER, getRatedMaxOutputPower());
	return true;
}

Uint32 UNIX_Battery::getRatedMaxOutputPower() const
{
	return _ratedMaxOutputPower;
}

void UNIX_Battery::setRatedMaxOutputPower(Uint32 &value)
{
	_ratedMaxOutputPower = value;
}

Boolean UNIX_Battery::getOutputPowerUnits(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OUTPUT_POWER_UNITS, getOutputPowerUnits());
	return true;
}

String UNIX_Battery::getOutputPowerUnits() const
{
	return _outputPowerUnits;
}

void UNIX_Battery::setOutputPowerUnits(String &value)
{
	_outputPowerUnits = value;
}

Boolean UNIX_Battery::getIsACOutput(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_A_C_OUTPUT, getIsACOutput());
	return true;
}

Boolean UNIX_Battery::getIsACOutput() const
{
	return _isACOutput;
}

void UNIX_Battery::setIsACOutput(Boolean &value)
{
	_isACOutput = value;
}

Boolean UNIX_Battery::getBatteryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BATTERY_STATUS, getBatteryStatus());
	return true;
}

Uint16 UNIX_Battery::getBatteryStatus() const
{
	return _batteryStatus;
}

void UNIX_Battery::setBatteryStatus(Uint16 &value)
{
	_batteryStatus = value;
}

Boolean UNIX_Battery::getTimeOnBattery(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_ON_BATTERY, getTimeOnBattery());
	return true;
}

Uint32 UNIX_Battery::getTimeOnBattery() const
{
	return _timeOnBattery;
}

void UNIX_Battery::setTimeOnBattery(Uint32 &value)
{
	_timeOnBattery = value;
}

Boolean UNIX_Battery::getEstimatedRunTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ESTIMATED_RUN_TIME, getEstimatedRunTime());
	return true;
}

Uint32 UNIX_Battery::getEstimatedRunTime() const
{
	return _estimatedRunTime;
}

void UNIX_Battery::setEstimatedRunTime(Uint32 &value)
{
	_estimatedRunTime = value;
}

Boolean UNIX_Battery::getEstimatedChargeRemaining(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ESTIMATED_CHARGE_REMAINING, getEstimatedChargeRemaining());
	return true;
}

Uint16 UNIX_Battery::getEstimatedChargeRemaining() const
{
	return _estimatedChargeRemaining;
}

void UNIX_Battery::setEstimatedChargeRemaining(Uint16 &value)
{
	_estimatedChargeRemaining = value;
}

Boolean UNIX_Battery::getChemistry(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHEMISTRY, getChemistry());
	return true;
}

Uint16 UNIX_Battery::getChemistry() const
{
	return _chemistry;
}

void UNIX_Battery::setChemistry(Uint16 &value)
{
	_chemistry = value;
}

Boolean UNIX_Battery::getDesignCapacity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESIGN_CAPACITY, getDesignCapacity());
	return true;
}

Uint32 UNIX_Battery::getDesignCapacity() const
{
	return _designCapacity;
}

void UNIX_Battery::setDesignCapacity(Uint32 &value)
{
	_designCapacity = value;
}

Boolean UNIX_Battery::getFullChargeCapacity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FULL_CHARGE_CAPACITY, getFullChargeCapacity());
	return true;
}

Uint32 UNIX_Battery::getFullChargeCapacity() const
{
	return _fullChargeCapacity;
}

void UNIX_Battery::setFullChargeCapacity(Uint32 &value)
{
	_fullChargeCapacity = value;
}

Boolean UNIX_Battery::getDesignVoltage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESIGN_VOLTAGE, getDesignVoltage());
	return true;
}

Uint64 UNIX_Battery::getDesignVoltage() const
{
	return _designVoltage;
}

void UNIX_Battery::setDesignVoltage(Uint64 &value)
{
	_designVoltage = value;
}

Boolean UNIX_Battery::getSmartBatteryVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SMART_BATTERY_VERSION, getSmartBatteryVersion());
	return true;
}

String UNIX_Battery::getSmartBatteryVersion() const
{
	return _smartBatteryVersion;
}

void UNIX_Battery::setSmartBatteryVersion(String &value)
{
	_smartBatteryVersion = value;
}

Boolean UNIX_Battery::getTimeToFullCharge(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_TO_FULL_CHARGE, getTimeToFullCharge());
	return true;
}

Uint32 UNIX_Battery::getTimeToFullCharge() const
{
	return _timeToFullCharge;
}

void UNIX_Battery::setTimeToFullCharge(Uint32 &value)
{
	_timeToFullCharge = value;
}

Boolean UNIX_Battery::getExpectedLife(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXPECTED_LIFE, getExpectedLife());
	return true;
}

Uint32 UNIX_Battery::getExpectedLife() const
{
	return _expectedLife;
}

void UNIX_Battery::setExpectedLife(Uint32 &value)
{
	_expectedLife = value;
}

Boolean UNIX_Battery::getMaxRechargeTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_RECHARGE_TIME, getMaxRechargeTime());
	return true;
}

Uint32 UNIX_Battery::getMaxRechargeTime() const
{
	return _maxRechargeTime;
}

void UNIX_Battery::setMaxRechargeTime(Uint32 &value)
{
	_maxRechargeTime = value;
}

Boolean UNIX_Battery::getRechargeCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECHARGE_COUNT, getRechargeCount());
	return true;
}

Uint32 UNIX_Battery::getRechargeCount() const
{
	return _rechargeCount;
}

void UNIX_Battery::setRechargeCount(Uint32 &value)
{
	_rechargeCount = value;
}

Boolean UNIX_Battery::getMaxRechargeCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_RECHARGE_COUNT, getMaxRechargeCount());
	return true;
}

Uint32 UNIX_Battery::getMaxRechargeCount() const
{
	return _maxRechargeCount;
}

void UNIX_Battery::setMaxRechargeCount(Uint32 &value)
{
	_maxRechargeCount = value;
}

Boolean UNIX_Battery::getRemainingCapacity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMAINING_CAPACITY, getRemainingCapacity());
	return true;
}

Uint32 UNIX_Battery::getRemainingCapacity() const
{
	return _remainingCapacity;
}

void UNIX_Battery::setRemainingCapacity(Uint32 &value)
{
	_remainingCapacity = value;
}

Boolean UNIX_Battery::getRemainingCapacityMaxError(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMAINING_CAPACITY_MAX_ERROR, getRemainingCapacityMaxError());
	return true;
}

Uint8 UNIX_Battery::getRemainingCapacityMaxError() const
{
	return _remainingCapacityMaxError;
}

void UNIX_Battery::setRemainingCapacityMaxError(Uint8 &value)
{
	_remainingCapacityMaxError = value;
}

Boolean UNIX_Battery::getChargingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHARGING_STATUS, getChargingStatus());
	return true;
}

Uint16 UNIX_Battery::getChargingStatus() const
{
	return _chargingStatus;
}

void UNIX_Battery::setChargingStatus(Uint16 &value)
{
	_chargingStatus = value;
}

Boolean UNIX_Battery::getOtherChemistryDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_CHEMISTRY_DESCRIPTION, getOtherChemistryDescription());
	return true;
}

String UNIX_Battery::getOtherChemistryDescription() const
{
	return _otherChemistryDescription;
}

void UNIX_Battery::setOtherChemistryDescription(String &value)
{
	_otherChemistryDescription = value;
}

Boolean UNIX_Battery::getHealthPercent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_PERCENT, getHealthPercent());
	return true;
}

Uint8 UNIX_Battery::getHealthPercent() const
{
	return _healthPercent;
}

void UNIX_Battery::setHealthPercent(Uint8 &value)
{
	_healthPercent = value;
}

Boolean UNIX_Battery::getPermanentErrorInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERMANENT_ERROR_INFO, getPermanentErrorInfo());
	return true;
}

Uint16 UNIX_Battery::getPermanentErrorInfo() const
{
	return _permanentErrorInfo;
}

void UNIX_Battery::setPermanentErrorInfo(Uint16 &value)
{
	_permanentErrorInfo = value;
}


void UNIX_Battery::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("Battery");
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
	_creationClassName = String("UNIX_Battery");
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
	_batteryStatus = Uint16(0);
	_timeOnBattery = Uint32(0);
	_estimatedRunTime = Uint32(0);
	_estimatedChargeRemaining = Uint16(0);
	_chemistry = Uint16(0);
	_designCapacity = Uint32(0);
	_fullChargeCapacity = Uint32(0);
	_designVoltage = Uint64(0);
	_smartBatteryVersion = String ("");
	_timeToFullCharge = Uint32(0);
	_expectedLife = Uint32(0);
	_maxRechargeTime = Uint32(0);
	_rechargeCount = Uint32(0);
	_maxRechargeCount = Uint32(0);
	_remainingCapacity = Uint32(0);
	_remainingCapacityMaxError = Uint8(0);
	_chargingStatus = Uint16(0);
	_otherChemistryDescription = String ("");
	_healthPercent = Uint8(0);
	_permanentErrorInfo = Uint16(0);

}

Boolean UNIX_Battery::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "BatteryStatus"))
			{
				Uint16 batteryStatusValue;
				property.getValue().get(batteryStatusValue);
				setBatteryStatus(batteryStatusValue);
			}
			else if (String::equal(property.getName().getString(), "TimeOnBattery"))
			{
				Uint32 timeOnBatteryValue;
				property.getValue().get(timeOnBatteryValue);
				setTimeOnBattery(timeOnBatteryValue);
			}
			else if (String::equal(property.getName().getString(), "EstimatedRunTime"))
			{
				Uint32 estimatedRunTimeValue;
				property.getValue().get(estimatedRunTimeValue);
				setEstimatedRunTime(estimatedRunTimeValue);
			}
			else if (String::equal(property.getName().getString(), "EstimatedChargeRemaining"))
			{
				Uint16 estimatedChargeRemainingValue;
				property.getValue().get(estimatedChargeRemainingValue);
				setEstimatedChargeRemaining(estimatedChargeRemainingValue);
			}
			else if (String::equal(property.getName().getString(), "Chemistry"))
			{
				Uint16 chemistryValue;
				property.getValue().get(chemistryValue);
				setChemistry(chemistryValue);
			}
			else if (String::equal(property.getName().getString(), "DesignCapacity"))
			{
				Uint32 designCapacityValue;
				property.getValue().get(designCapacityValue);
				setDesignCapacity(designCapacityValue);
			}
			else if (String::equal(property.getName().getString(), "FullChargeCapacity"))
			{
				Uint32 fullChargeCapacityValue;
				property.getValue().get(fullChargeCapacityValue);
				setFullChargeCapacity(fullChargeCapacityValue);
			}
			else if (String::equal(property.getName().getString(), "DesignVoltage"))
			{
				Uint64 designVoltageValue;
				property.getValue().get(designVoltageValue);
				setDesignVoltage(designVoltageValue);
			}
			else if (String::equal(property.getName().getString(), "SmartBatteryVersion"))
			{
				String smartBatteryVersionValue;
				property.getValue().get(smartBatteryVersionValue);
				setSmartBatteryVersion(smartBatteryVersionValue);
			}
			else if (String::equal(property.getName().getString(), "TimeToFullCharge"))
			{
				Uint32 timeToFullChargeValue;
				property.getValue().get(timeToFullChargeValue);
				setTimeToFullCharge(timeToFullChargeValue);
			}
			else if (String::equal(property.getName().getString(), "ExpectedLife"))
			{
				Uint32 expectedLifeValue;
				property.getValue().get(expectedLifeValue);
				setExpectedLife(expectedLifeValue);
			}
			else if (String::equal(property.getName().getString(), "MaxRechargeTime"))
			{
				Uint32 maxRechargeTimeValue;
				property.getValue().get(maxRechargeTimeValue);
				setMaxRechargeTime(maxRechargeTimeValue);
			}
			else if (String::equal(property.getName().getString(), "RechargeCount"))
			{
				Uint32 rechargeCountValue;
				property.getValue().get(rechargeCountValue);
				setRechargeCount(rechargeCountValue);
			}
			else if (String::equal(property.getName().getString(), "MaxRechargeCount"))
			{
				Uint32 maxRechargeCountValue;
				property.getValue().get(maxRechargeCountValue);
				setMaxRechargeCount(maxRechargeCountValue);
			}
			else if (String::equal(property.getName().getString(), "RemainingCapacity"))
			{
				Uint32 remainingCapacityValue;
				property.getValue().get(remainingCapacityValue);
				setRemainingCapacity(remainingCapacityValue);
			}
			else if (String::equal(property.getName().getString(), "RemainingCapacityMaxError"))
			{
				Uint8 remainingCapacityMaxErrorValue;
				property.getValue().get(remainingCapacityMaxErrorValue);
				setRemainingCapacityMaxError(remainingCapacityMaxErrorValue);
			}
			else if (String::equal(property.getName().getString(), "ChargingStatus"))
			{
				Uint16 chargingStatusValue;
				property.getValue().get(chargingStatusValue);
				setChargingStatus(chargingStatusValue);
			}
			else if (String::equal(property.getName().getString(), "OtherChemistryDescription"))
			{
				String otherChemistryDescriptionValue;
				property.getValue().get(otherChemistryDescriptionValue);
				setOtherChemistryDescription(otherChemistryDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "HealthPercent"))
			{
				Uint8 healthPercentValue;
				property.getValue().get(healthPercentValue);
				setHealthPercent(healthPercentValue);
			}
			else if (String::equal(property.getName().getString(), "PermanentErrorInfo"))
			{
				Uint16 permanentErrorInfoValue;
				property.getValue().get(permanentErrorInfoValue);
				setPermanentErrorInfo(permanentErrorInfoValue);
			}
	}
	return true;
}

Uint32 UNIX_Battery::invokeRequestStateChange(
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

Uint32 UNIX_Battery::invokeSetPowerState(
		Uint16 &inPowerState,
		CIMDateTime &inTime
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SetPowerState */
	
	
	
	return returnValue;
}

Uint32 UNIX_Battery::invokeReset()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method Reset */
	
	
	
	return returnValue;
}

Uint32 UNIX_Battery::invokeEnableDevice(
		Boolean &inEnabled
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method EnableDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_Battery::invokeOnlineDevice(
		Boolean &inOnline
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method OnlineDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_Battery::invokeQuiesceDevice(
		Boolean &inQuiesce
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method QuiesceDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_Battery::invokeSaveProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SaveProperties */
	
	
	
	return returnValue;
}

Uint32 UNIX_Battery::invokeRestoreProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method RestoreProperties */
	
	
	
	return returnValue;
}


Boolean UNIX_Battery::initialize()
{
	return false;
}

Boolean UNIX_Battery::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("Battery");
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
	_creationClassName = String("UNIX_Battery");
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
	_batteryStatus = Uint16(0);
	_timeOnBattery = Uint32(0);
	_estimatedRunTime = Uint32(0);
	_estimatedChargeRemaining = Uint16(0);
	_chemistry = Uint16(0);
	_designCapacity = Uint32(0);
	_fullChargeCapacity = Uint32(0);
	_designVoltage = Uint64(0);
	_smartBatteryVersion = String ("");
	_timeToFullCharge = Uint32(0);
	_expectedLife = Uint32(0);
	_maxRechargeTime = Uint32(0);
	_rechargeCount = Uint32(0);
	_maxRechargeCount = Uint32(0);
	_remainingCapacity = Uint32(0);
	_remainingCapacityMaxError = Uint8(0);
	_chargingStatus = Uint16(0);
	_otherChemistryDescription = String ("");
	_healthPercent = Uint8(0);
	_permanentErrorInfo = Uint16(0);
	
	return false;
}

Boolean UNIX_Battery::finalize()
{
	return false;
}

Boolean UNIX_Battery::loadByName(const String name)
{
	return false;
}

Boolean UNIX_Battery::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_Battery::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Battery::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Battery::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Battery::validateInstance()
{
	return true;
}

