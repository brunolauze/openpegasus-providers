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


UNIX_Watchdog::UNIX_Watchdog(void)
{
}

UNIX_Watchdog::~UNIX_Watchdog(void)
{
}

Boolean UNIX_Watchdog::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_Watchdog::getInstanceID() const
{
	return _instanceID;
}

void UNIX_Watchdog::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_Watchdog::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_Watchdog::getCaption() const
{
	return _caption;
}

void UNIX_Watchdog::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_Watchdog::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_Watchdog::getDescription() const
{
	return _description;
}

void UNIX_Watchdog::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_Watchdog::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_Watchdog::getElementName() const
{
	return _elementName;
}

void UNIX_Watchdog::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_Watchdog::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_Watchdog::getGeneration() const
{
	return _generation;
}

void UNIX_Watchdog::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_Watchdog::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_Watchdog::getInstallDate() const
{
	return _installDate;
}

void UNIX_Watchdog::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_Watchdog::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_Watchdog::getName() const
{
	return _name;
}

void UNIX_Watchdog::setName(String &value)
{
	_name = value;
}

Boolean UNIX_Watchdog::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_Watchdog::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_Watchdog::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_Watchdog::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_Watchdog::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_Watchdog::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_Watchdog::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_Watchdog::getStatus() const
{
	return _status;
}

void UNIX_Watchdog::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_Watchdog::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_Watchdog::getHealthState() const
{
	return _healthState;
}

void UNIX_Watchdog::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_Watchdog::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_Watchdog::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_Watchdog::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_Watchdog::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_Watchdog::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_Watchdog::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_Watchdog::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_Watchdog::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_Watchdog::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_Watchdog::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_Watchdog::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_Watchdog::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_Watchdog::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_Watchdog::getEnabledState() const
{
	return _enabledState;
}

void UNIX_Watchdog::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_Watchdog::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_Watchdog::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_Watchdog::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_Watchdog::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_Watchdog::getRequestedState() const
{
	return _requestedState;
}

void UNIX_Watchdog::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_Watchdog::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_Watchdog::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_Watchdog::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_Watchdog::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_Watchdog::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_Watchdog::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_Watchdog::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_Watchdog::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_Watchdog::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_Watchdog::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_Watchdog::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_Watchdog::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_Watchdog::getAllocationState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOCATION_STATE, getAllocationState());
	return true;
}

String UNIX_Watchdog::getAllocationState() const
{
	return _allocationState;
}

void UNIX_Watchdog::setAllocationState(String &value)
{
	_allocationState = value;
}

Boolean UNIX_Watchdog::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_Watchdog::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_Watchdog::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_Watchdog::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_Watchdog::getSystemName() const
{
	return _systemName;
}

void UNIX_Watchdog::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_Watchdog::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_Watchdog::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_Watchdog::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_Watchdog::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_Watchdog::getDeviceID() const
{
	return _deviceID;
}

void UNIX_Watchdog::setDeviceID(String &value)
{
	_deviceID = value;
}

Boolean UNIX_Watchdog::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_Watchdog::getPowerManagementSupported() const
{
	return _powerManagementSupported;
}

void UNIX_Watchdog::setPowerManagementSupported(Boolean &value)
{
	_powerManagementSupported = value;
}

Boolean UNIX_Watchdog::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_Watchdog::getPowerManagementCapabilities() const
{
	return _powerManagementCapabilities;
}

void UNIX_Watchdog::setPowerManagementCapabilities(Array<Uint16> &value)
{
	_powerManagementCapabilities = value;
}

Boolean UNIX_Watchdog::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_Watchdog::getAvailability() const
{
	return _availability;
}

void UNIX_Watchdog::setAvailability(Uint16 &value)
{
	_availability = value;
}

Boolean UNIX_Watchdog::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_Watchdog::getStatusInfo() const
{
	return _statusInfo;
}

void UNIX_Watchdog::setStatusInfo(Uint16 &value)
{
	_statusInfo = value;
}

Boolean UNIX_Watchdog::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_Watchdog::getLastErrorCode() const
{
	return _lastErrorCode;
}

void UNIX_Watchdog::setLastErrorCode(Uint32 &value)
{
	_lastErrorCode = value;
}

Boolean UNIX_Watchdog::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_Watchdog::getErrorDescription() const
{
	return _errorDescription;
}

void UNIX_Watchdog::setErrorDescription(String &value)
{
	_errorDescription = value;
}

Boolean UNIX_Watchdog::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_Watchdog::getErrorCleared() const
{
	return _errorCleared;
}

void UNIX_Watchdog::setErrorCleared(Boolean &value)
{
	_errorCleared = value;
}

Boolean UNIX_Watchdog::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_Watchdog::getOtherIdentifyingInfo() const
{
	return _otherIdentifyingInfo;
}

void UNIX_Watchdog::setOtherIdentifyingInfo(Array<String> &value)
{
	_otherIdentifyingInfo = value;
}

Boolean UNIX_Watchdog::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_Watchdog::getPowerOnHours() const
{
	return _powerOnHours;
}

void UNIX_Watchdog::setPowerOnHours(Uint64 &value)
{
	_powerOnHours = value;
}

Boolean UNIX_Watchdog::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_Watchdog::getTotalPowerOnHours() const
{
	return _totalPowerOnHours;
}

void UNIX_Watchdog::setTotalPowerOnHours(Uint64 &value)
{
	_totalPowerOnHours = value;
}

Boolean UNIX_Watchdog::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_Watchdog::getIdentifyingDescriptions() const
{
	return _identifyingDescriptions;
}

void UNIX_Watchdog::setIdentifyingDescriptions(Array<String> &value)
{
	_identifyingDescriptions = value;
}

Boolean UNIX_Watchdog::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_Watchdog::getAdditionalAvailability() const
{
	return _additionalAvailability;
}

void UNIX_Watchdog::setAdditionalAvailability(Array<Uint16> &value)
{
	_additionalAvailability = value;
}

Boolean UNIX_Watchdog::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_Watchdog::getMaxQuiesceTime() const
{
	return _maxQuiesceTime;
}

void UNIX_Watchdog::setMaxQuiesceTime(Uint64 &value)
{
	_maxQuiesceTime = value;
}

Boolean UNIX_Watchdog::getLocationIndicator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCATION_INDICATOR, getLocationIndicator());
	return true;
}

Uint16 UNIX_Watchdog::getLocationIndicator() const
{
	return _locationIndicator;
}

void UNIX_Watchdog::setLocationIndicator(Uint16 &value)
{
	_locationIndicator = value;
}

Boolean UNIX_Watchdog::getMonitoredEntity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MONITORED_ENTITY, getMonitoredEntity());
	return true;
}

Uint16 UNIX_Watchdog::getMonitoredEntity() const
{
	return _monitoredEntity;
}

void UNIX_Watchdog::setMonitoredEntity(Uint16 &value)
{
	_monitoredEntity = value;
}

Boolean UNIX_Watchdog::getMonitoredEntityDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MONITORED_ENTITY_DESCRIPTION, getMonitoredEntityDescription());
	return true;
}

String UNIX_Watchdog::getMonitoredEntityDescription() const
{
	return _monitoredEntityDescription;
}

void UNIX_Watchdog::setMonitoredEntityDescription(String &value)
{
	_monitoredEntityDescription = value;
}

Boolean UNIX_Watchdog::getTimeoutInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIMEOUT_INTERVAL, getTimeoutInterval());
	return true;
}

Uint32 UNIX_Watchdog::getTimeoutInterval() const
{
	return _timeoutInterval;
}

void UNIX_Watchdog::setTimeoutInterval(Uint32 &value)
{
	_timeoutInterval = value;
}

Boolean UNIX_Watchdog::getTimerResolution(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIMER_RESOLUTION, getTimerResolution());
	return true;
}

Uint32 UNIX_Watchdog::getTimerResolution() const
{
	return _timerResolution;
}

void UNIX_Watchdog::setTimerResolution(Uint32 &value)
{
	_timerResolution = value;
}

Boolean UNIX_Watchdog::getTimeOfLastExpiration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_EXPIRATION, getTimeOfLastExpiration());
	return true;
}

CIMDateTime UNIX_Watchdog::getTimeOfLastExpiration() const
{
	return _timeOfLastExpiration;
}

void UNIX_Watchdog::setTimeOfLastExpiration(CIMDateTime &value)
{
	_timeOfLastExpiration = value;
}

Boolean UNIX_Watchdog::getMonitoredEntityOnLastExpiration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MONITORED_ENTITY_ON_LAST_EXPIRATION, getMonitoredEntityOnLastExpiration());
	return true;
}

Uint16 UNIX_Watchdog::getMonitoredEntityOnLastExpiration() const
{
	return _monitoredEntityOnLastExpiration;
}

void UNIX_Watchdog::setMonitoredEntityOnLastExpiration(Uint16 &value)
{
	_monitoredEntityOnLastExpiration = value;
}

Boolean UNIX_Watchdog::getActionOnExpiration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACTION_ON_EXPIRATION, getActionOnExpiration());
	return true;
}

Uint16 UNIX_Watchdog::getActionOnExpiration() const
{
	return _actionOnExpiration;
}

void UNIX_Watchdog::setActionOnExpiration(Uint16 &value)
{
	_actionOnExpiration = value;
}


void UNIX_Watchdog::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("Watchdog");
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
	_creationClassName = String("UNIX_Watchdog");
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
	_monitoredEntity = Uint16(0);
	_monitoredEntityDescription = String ("");
	_timeoutInterval = Uint32(0);
	_timerResolution = Uint32(0);
	_timeOfLastExpiration = CIMHelper::getCurrentTime();
	_monitoredEntityOnLastExpiration = Uint16(0);
	_actionOnExpiration = Uint16(0);

}

Boolean UNIX_Watchdog::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "MonitoredEntity"))
			{
				Uint16 monitoredEntityValue;
				property.getValue().get(monitoredEntityValue);
				setMonitoredEntity(monitoredEntityValue);
			}
			else if (String::equal(property.getName().getString(), "MonitoredEntityDescription"))
			{
				String monitoredEntityDescriptionValue;
				property.getValue().get(monitoredEntityDescriptionValue);
				setMonitoredEntityDescription(monitoredEntityDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "TimeoutInterval"))
			{
				Uint32 timeoutIntervalValue;
				property.getValue().get(timeoutIntervalValue);
				setTimeoutInterval(timeoutIntervalValue);
			}
			else if (String::equal(property.getName().getString(), "TimerResolution"))
			{
				Uint32 timerResolutionValue;
				property.getValue().get(timerResolutionValue);
				setTimerResolution(timerResolutionValue);
			}
			else if (String::equal(property.getName().getString(), "TimeOfLastExpiration"))
			{
				CIMDateTime timeOfLastExpirationValue;
				property.getValue().get(timeOfLastExpirationValue);
				setTimeOfLastExpiration(timeOfLastExpirationValue);
			}
			else if (String::equal(property.getName().getString(), "MonitoredEntityOnLastExpiration"))
			{
				Uint16 monitoredEntityOnLastExpirationValue;
				property.getValue().get(monitoredEntityOnLastExpirationValue);
				setMonitoredEntityOnLastExpiration(monitoredEntityOnLastExpirationValue);
			}
			else if (String::equal(property.getName().getString(), "ActionOnExpiration"))
			{
				Uint16 actionOnExpirationValue;
				property.getValue().get(actionOnExpirationValue);
				setActionOnExpiration(actionOnExpirationValue);
			}
	}
	return true;
}

Uint32 UNIX_Watchdog::invokeRequestStateChange(
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

Uint32 UNIX_Watchdog::invokeSetPowerState(
		Uint16 &inPowerState,
		CIMDateTime &inTime
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SetPowerState */
	
	
	
	return returnValue;
}

Uint32 UNIX_Watchdog::invokeReset()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method Reset */
	
	
	
	return returnValue;
}

Uint32 UNIX_Watchdog::invokeEnableDevice(
		Boolean &inEnabled
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method EnableDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_Watchdog::invokeOnlineDevice(
		Boolean &inOnline
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method OnlineDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_Watchdog::invokeQuiesceDevice(
		Boolean &inQuiesce
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method QuiesceDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_Watchdog::invokeSaveProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SaveProperties */
	
	
	
	return returnValue;
}

Uint32 UNIX_Watchdog::invokeRestoreProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method RestoreProperties */
	
	
	
	return returnValue;
}

Uint32 UNIX_Watchdog::invokeKeepAlive()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method KeepAlive */
	
	
	
	return returnValue;
}


Boolean UNIX_Watchdog::initialize()
{
	return false;
}

Boolean UNIX_Watchdog::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("Watchdog");
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
	_creationClassName = String("UNIX_Watchdog");
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
	_monitoredEntity = Uint16(0);
	_monitoredEntityDescription = String ("");
	_timeoutInterval = Uint32(0);
	_timerResolution = Uint32(0);
	_timeOfLastExpiration = CIMHelper::getCurrentTime();
	_monitoredEntityOnLastExpiration = Uint16(0);
	_actionOnExpiration = Uint16(0);
	
	return false;
}

Boolean UNIX_Watchdog::finalize()
{
	return false;
}

Boolean UNIX_Watchdog::loadByName(const String name)
{
	return false;
}

Boolean UNIX_Watchdog::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_Watchdog::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Watchdog::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Watchdog::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Watchdog::validateInstance()
{
	return true;
}

