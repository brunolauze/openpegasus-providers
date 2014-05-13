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


UNIX_BinarySensor::UNIX_BinarySensor(void)
{
}

UNIX_BinarySensor::~UNIX_BinarySensor(void)
{
}

Boolean UNIX_BinarySensor::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_BinarySensor::getInstanceID() const
{
	return _instanceID;
}

void UNIX_BinarySensor::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_BinarySensor::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_BinarySensor::getCaption() const
{
	return _caption;
}

void UNIX_BinarySensor::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_BinarySensor::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_BinarySensor::getDescription() const
{
	return _description;
}

void UNIX_BinarySensor::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_BinarySensor::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_BinarySensor::getElementName() const
{
	return _elementName;
}

void UNIX_BinarySensor::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_BinarySensor::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_BinarySensor::getGeneration() const
{
	return _generation;
}

void UNIX_BinarySensor::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_BinarySensor::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_BinarySensor::getInstallDate() const
{
	return _installDate;
}

void UNIX_BinarySensor::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_BinarySensor::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_BinarySensor::getName() const
{
	return _name;
}

void UNIX_BinarySensor::setName(String &value)
{
	_name = value;
}

Boolean UNIX_BinarySensor::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_BinarySensor::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_BinarySensor::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_BinarySensor::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_BinarySensor::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_BinarySensor::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_BinarySensor::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_BinarySensor::getStatus() const
{
	return _status;
}

void UNIX_BinarySensor::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_BinarySensor::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_BinarySensor::getHealthState() const
{
	return _healthState;
}

void UNIX_BinarySensor::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_BinarySensor::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_BinarySensor::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_BinarySensor::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_BinarySensor::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_BinarySensor::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_BinarySensor::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_BinarySensor::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_BinarySensor::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_BinarySensor::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_BinarySensor::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_BinarySensor::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_BinarySensor::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_BinarySensor::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_BinarySensor::getEnabledState() const
{
	return _enabledState;
}

void UNIX_BinarySensor::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_BinarySensor::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_BinarySensor::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_BinarySensor::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_BinarySensor::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_BinarySensor::getRequestedState() const
{
	return _requestedState;
}

void UNIX_BinarySensor::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_BinarySensor::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_BinarySensor::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_BinarySensor::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_BinarySensor::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_BinarySensor::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_BinarySensor::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_BinarySensor::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_BinarySensor::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_BinarySensor::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_BinarySensor::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_BinarySensor::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_BinarySensor::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_BinarySensor::getAllocationState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOCATION_STATE, getAllocationState());
	return true;
}

String UNIX_BinarySensor::getAllocationState() const
{
	return _allocationState;
}

void UNIX_BinarySensor::setAllocationState(String &value)
{
	_allocationState = value;
}

Boolean UNIX_BinarySensor::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_BinarySensor::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_BinarySensor::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_BinarySensor::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_BinarySensor::getSystemName() const
{
	return _systemName;
}

void UNIX_BinarySensor::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_BinarySensor::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_BinarySensor::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_BinarySensor::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_BinarySensor::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_BinarySensor::getDeviceID() const
{
	return _deviceID;
}

void UNIX_BinarySensor::setDeviceID(String &value)
{
	_deviceID = value;
}

Boolean UNIX_BinarySensor::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_BinarySensor::getPowerManagementSupported() const
{
	return _powerManagementSupported;
}

void UNIX_BinarySensor::setPowerManagementSupported(Boolean &value)
{
	_powerManagementSupported = value;
}

Boolean UNIX_BinarySensor::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_BinarySensor::getPowerManagementCapabilities() const
{
	return _powerManagementCapabilities;
}

void UNIX_BinarySensor::setPowerManagementCapabilities(Array<Uint16> &value)
{
	_powerManagementCapabilities = value;
}

Boolean UNIX_BinarySensor::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_BinarySensor::getAvailability() const
{
	return _availability;
}

void UNIX_BinarySensor::setAvailability(Uint16 &value)
{
	_availability = value;
}

Boolean UNIX_BinarySensor::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_BinarySensor::getStatusInfo() const
{
	return _statusInfo;
}

void UNIX_BinarySensor::setStatusInfo(Uint16 &value)
{
	_statusInfo = value;
}

Boolean UNIX_BinarySensor::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_BinarySensor::getLastErrorCode() const
{
	return _lastErrorCode;
}

void UNIX_BinarySensor::setLastErrorCode(Uint32 &value)
{
	_lastErrorCode = value;
}

Boolean UNIX_BinarySensor::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_BinarySensor::getErrorDescription() const
{
	return _errorDescription;
}

void UNIX_BinarySensor::setErrorDescription(String &value)
{
	_errorDescription = value;
}

Boolean UNIX_BinarySensor::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_BinarySensor::getErrorCleared() const
{
	return _errorCleared;
}

void UNIX_BinarySensor::setErrorCleared(Boolean &value)
{
	_errorCleared = value;
}

Boolean UNIX_BinarySensor::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_BinarySensor::getOtherIdentifyingInfo() const
{
	return _otherIdentifyingInfo;
}

void UNIX_BinarySensor::setOtherIdentifyingInfo(Array<String> &value)
{
	_otherIdentifyingInfo = value;
}

Boolean UNIX_BinarySensor::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_BinarySensor::getPowerOnHours() const
{
	return _powerOnHours;
}

void UNIX_BinarySensor::setPowerOnHours(Uint64 &value)
{
	_powerOnHours = value;
}

Boolean UNIX_BinarySensor::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_BinarySensor::getTotalPowerOnHours() const
{
	return _totalPowerOnHours;
}

void UNIX_BinarySensor::setTotalPowerOnHours(Uint64 &value)
{
	_totalPowerOnHours = value;
}

Boolean UNIX_BinarySensor::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_BinarySensor::getIdentifyingDescriptions() const
{
	return _identifyingDescriptions;
}

void UNIX_BinarySensor::setIdentifyingDescriptions(Array<String> &value)
{
	_identifyingDescriptions = value;
}

Boolean UNIX_BinarySensor::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_BinarySensor::getAdditionalAvailability() const
{
	return _additionalAvailability;
}

void UNIX_BinarySensor::setAdditionalAvailability(Array<Uint16> &value)
{
	_additionalAvailability = value;
}

Boolean UNIX_BinarySensor::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_BinarySensor::getMaxQuiesceTime() const
{
	return _maxQuiesceTime;
}

void UNIX_BinarySensor::setMaxQuiesceTime(Uint64 &value)
{
	_maxQuiesceTime = value;
}

Boolean UNIX_BinarySensor::getLocationIndicator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCATION_INDICATOR, getLocationIndicator());
	return true;
}

Uint16 UNIX_BinarySensor::getLocationIndicator() const
{
	return _locationIndicator;
}

void UNIX_BinarySensor::setLocationIndicator(Uint16 &value)
{
	_locationIndicator = value;
}

Boolean UNIX_BinarySensor::getSensorType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SENSOR_TYPE, getSensorType());
	return true;
}

Uint16 UNIX_BinarySensor::getSensorType() const
{
	return _sensorType;
}

void UNIX_BinarySensor::setSensorType(Uint16 &value)
{
	_sensorType = value;
}

Boolean UNIX_BinarySensor::getOtherSensorTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SENSOR_TYPE_DESCRIPTION, getOtherSensorTypeDescription());
	return true;
}

String UNIX_BinarySensor::getOtherSensorTypeDescription() const
{
	return _otherSensorTypeDescription;
}

void UNIX_BinarySensor::setOtherSensorTypeDescription(String &value)
{
	_otherSensorTypeDescription = value;
}

Boolean UNIX_BinarySensor::getPossibleStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POSSIBLE_STATES, getPossibleStates());
	return true;
}

Array<String> UNIX_BinarySensor::getPossibleStates() const
{
	return _possibleStates;
}

void UNIX_BinarySensor::setPossibleStates(Array<String> &value)
{
	_possibleStates = value;
}

Boolean UNIX_BinarySensor::getCurrentState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_STATE, getCurrentState());
	return true;
}

String UNIX_BinarySensor::getCurrentState() const
{
	return _currentState;
}

void UNIX_BinarySensor::setCurrentState(String &value)
{
	_currentState = value;
}

Boolean UNIX_BinarySensor::getPollingInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLLING_INTERVAL, getPollingInterval());
	return true;
}

Uint64 UNIX_BinarySensor::getPollingInterval() const
{
	return _pollingInterval;
}

void UNIX_BinarySensor::setPollingInterval(Uint64 &value)
{
	_pollingInterval = value;
}

Boolean UNIX_BinarySensor::getSensorContext(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SENSOR_CONTEXT, getSensorContext());
	return true;
}

String UNIX_BinarySensor::getSensorContext() const
{
	return _sensorContext;
}

void UNIX_BinarySensor::setSensorContext(String &value)
{
	_sensorContext = value;
}

Boolean UNIX_BinarySensor::getCurrentReading(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_READING, getCurrentReading());
	return true;
}

Boolean UNIX_BinarySensor::getCurrentReading() const
{
	return _currentReading;
}

void UNIX_BinarySensor::setCurrentReading(Boolean &value)
{
	_currentReading = value;
}

Boolean UNIX_BinarySensor::getExpectedReading(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXPECTED_READING, getExpectedReading());
	return true;
}

Boolean UNIX_BinarySensor::getExpectedReading() const
{
	return _expectedReading;
}

void UNIX_BinarySensor::setExpectedReading(Boolean &value)
{
	_expectedReading = value;
}

Boolean UNIX_BinarySensor::getInterpretationOfTrue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INTERPRETATION_OF_TRUE, getInterpretationOfTrue());
	return true;
}

String UNIX_BinarySensor::getInterpretationOfTrue() const
{
	return _interpretationOfTrue;
}

void UNIX_BinarySensor::setInterpretationOfTrue(String &value)
{
	_interpretationOfTrue = value;
}

Boolean UNIX_BinarySensor::getInterpretationOfFalse(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INTERPRETATION_OF_FALSE, getInterpretationOfFalse());
	return true;
}

String UNIX_BinarySensor::getInterpretationOfFalse() const
{
	return _interpretationOfFalse;
}

void UNIX_BinarySensor::setInterpretationOfFalse(String &value)
{
	_interpretationOfFalse = value;
}


void UNIX_BinarySensor::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("BinarySensor");
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
	_creationClassName = String("UNIX_BinarySensor");
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
	_currentReading = Boolean(false);
	_expectedReading = Boolean(false);
	_interpretationOfTrue = String ("");
	_interpretationOfFalse = String ("");

}

Boolean UNIX_BinarySensor::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "CurrentReading"))
			{
				Boolean currentReadingValue;
				property.getValue().get(currentReadingValue);
				setCurrentReading(currentReadingValue);
			}
			else if (String::equal(property.getName().getString(), "ExpectedReading"))
			{
				Boolean expectedReadingValue;
				property.getValue().get(expectedReadingValue);
				setExpectedReading(expectedReadingValue);
			}
			else if (String::equal(property.getName().getString(), "InterpretationOfTrue"))
			{
				String interpretationOfTrueValue;
				property.getValue().get(interpretationOfTrueValue);
				setInterpretationOfTrue(interpretationOfTrueValue);
			}
			else if (String::equal(property.getName().getString(), "InterpretationOfFalse"))
			{
				String interpretationOfFalseValue;
				property.getValue().get(interpretationOfFalseValue);
				setInterpretationOfFalse(interpretationOfFalseValue);
			}
	}
	return true;
}

Uint32 UNIX_BinarySensor::invokeRequestStateChange(
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

Uint32 UNIX_BinarySensor::invokeSetPowerState(
		Uint16 &inPowerState,
		CIMDateTime &inTime
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SetPowerState */
	
	
	
	return returnValue;
}

Uint32 UNIX_BinarySensor::invokeReset()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method Reset */
	
	
	
	return returnValue;
}

Uint32 UNIX_BinarySensor::invokeEnableDevice(
		Boolean &inEnabled
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method EnableDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_BinarySensor::invokeOnlineDevice(
		Boolean &inOnline
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method OnlineDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_BinarySensor::invokeQuiesceDevice(
		Boolean &inQuiesce
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method QuiesceDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_BinarySensor::invokeSaveProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SaveProperties */
	
	
	
	return returnValue;
}

Uint32 UNIX_BinarySensor::invokeRestoreProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method RestoreProperties */
	
	
	
	return returnValue;
}


Boolean UNIX_BinarySensor::initialize()
{
	return false;
}

Boolean UNIX_BinarySensor::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("BinarySensor");
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
	_creationClassName = String("UNIX_BinarySensor");
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
	_currentReading = Boolean(false);
	_expectedReading = Boolean(false);
	_interpretationOfTrue = String ("");
	_interpretationOfFalse = String ("");
	
	return false;
}

Boolean UNIX_BinarySensor::finalize()
{
	return false;
}

Boolean UNIX_BinarySensor::loadByName(const String name)
{
	return false;
}

Boolean UNIX_BinarySensor::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_BinarySensor::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BinarySensor::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BinarySensor::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BinarySensor::validateInstance()
{
	return true;
}

