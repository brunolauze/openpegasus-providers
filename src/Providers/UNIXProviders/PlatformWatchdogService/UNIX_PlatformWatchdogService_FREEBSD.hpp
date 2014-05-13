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


UNIX_PlatformWatchdogService::UNIX_PlatformWatchdogService(void)
{
}

UNIX_PlatformWatchdogService::~UNIX_PlatformWatchdogService(void)
{
}

Boolean UNIX_PlatformWatchdogService::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_PlatformWatchdogService::getInstanceID() const
{
	return _instanceID;
}

void UNIX_PlatformWatchdogService::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_PlatformWatchdogService::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_PlatformWatchdogService::getCaption() const
{
	return _caption;
}

void UNIX_PlatformWatchdogService::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_PlatformWatchdogService::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_PlatformWatchdogService::getDescription() const
{
	return _description;
}

void UNIX_PlatformWatchdogService::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_PlatformWatchdogService::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_PlatformWatchdogService::getElementName() const
{
	return _elementName;
}

void UNIX_PlatformWatchdogService::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_PlatformWatchdogService::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_PlatformWatchdogService::getGeneration() const
{
	return _generation;
}

void UNIX_PlatformWatchdogService::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_PlatformWatchdogService::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_PlatformWatchdogService::getInstallDate() const
{
	return _installDate;
}

void UNIX_PlatformWatchdogService::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_PlatformWatchdogService::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_PlatformWatchdogService::getName() const
{
	return _name;
}

void UNIX_PlatformWatchdogService::setName(String &value)
{
	_name = value;
}

Boolean UNIX_PlatformWatchdogService::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_PlatformWatchdogService::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_PlatformWatchdogService::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_PlatformWatchdogService::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_PlatformWatchdogService::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_PlatformWatchdogService::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_PlatformWatchdogService::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_PlatformWatchdogService::getStatus() const
{
	return _status;
}

void UNIX_PlatformWatchdogService::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_PlatformWatchdogService::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_PlatformWatchdogService::getHealthState() const
{
	return _healthState;
}

void UNIX_PlatformWatchdogService::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_PlatformWatchdogService::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_PlatformWatchdogService::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_PlatformWatchdogService::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_PlatformWatchdogService::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_PlatformWatchdogService::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_PlatformWatchdogService::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_PlatformWatchdogService::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_PlatformWatchdogService::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_PlatformWatchdogService::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_PlatformWatchdogService::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_PlatformWatchdogService::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_PlatformWatchdogService::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_PlatformWatchdogService::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_PlatformWatchdogService::getEnabledState() const
{
	return _enabledState;
}

void UNIX_PlatformWatchdogService::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_PlatformWatchdogService::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_PlatformWatchdogService::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_PlatformWatchdogService::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_PlatformWatchdogService::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_PlatformWatchdogService::getRequestedState() const
{
	return _requestedState;
}

void UNIX_PlatformWatchdogService::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_PlatformWatchdogService::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_PlatformWatchdogService::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_PlatformWatchdogService::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_PlatformWatchdogService::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_PlatformWatchdogService::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_PlatformWatchdogService::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_PlatformWatchdogService::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_PlatformWatchdogService::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_PlatformWatchdogService::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_PlatformWatchdogService::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_PlatformWatchdogService::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_PlatformWatchdogService::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_PlatformWatchdogService::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_PlatformWatchdogService::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_PlatformWatchdogService::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_PlatformWatchdogService::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_PlatformWatchdogService::getSystemName() const
{
	return _systemName;
}

void UNIX_PlatformWatchdogService::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_PlatformWatchdogService::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_PlatformWatchdogService::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_PlatformWatchdogService::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_PlatformWatchdogService::getPrimaryOwnerName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_NAME, getPrimaryOwnerName());
	return true;
}

String UNIX_PlatformWatchdogService::getPrimaryOwnerName() const
{
	return _primaryOwnerName;
}

void UNIX_PlatformWatchdogService::setPrimaryOwnerName(String &value)
{
	_primaryOwnerName = value;
}

Boolean UNIX_PlatformWatchdogService::getPrimaryOwnerContact(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_CONTACT, getPrimaryOwnerContact());
	return true;
}

String UNIX_PlatformWatchdogService::getPrimaryOwnerContact() const
{
	return _primaryOwnerContact;
}

void UNIX_PlatformWatchdogService::setPrimaryOwnerContact(String &value)
{
	_primaryOwnerContact = value;
}

Boolean UNIX_PlatformWatchdogService::getStartMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_MODE, getStartMode());
	return true;
}

String UNIX_PlatformWatchdogService::getStartMode() const
{
	return _startMode;
}

void UNIX_PlatformWatchdogService::setStartMode(String &value)
{
	_startMode = value;
}

Boolean UNIX_PlatformWatchdogService::getStarted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTED, getStarted());
	return true;
}

Boolean UNIX_PlatformWatchdogService::getStarted() const
{
	return _started;
}

void UNIX_PlatformWatchdogService::setStarted(Boolean &value)
{
	_started = value;
}

Boolean UNIX_PlatformWatchdogService::getLoSID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LO_S_ID, getLoSID());
	return true;
}

String UNIX_PlatformWatchdogService::getLoSID() const
{
	return _loSID;
}

void UNIX_PlatformWatchdogService::setLoSID(String &value)
{
	_loSID = value;
}

Boolean UNIX_PlatformWatchdogService::getLoSOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LO_S_ORG_ID, getLoSOrgID());
	return true;
}

String UNIX_PlatformWatchdogService::getLoSOrgID() const
{
	return _loSOrgID;
}

void UNIX_PlatformWatchdogService::setLoSOrgID(String &value)
{
	_loSOrgID = value;
}

Boolean UNIX_PlatformWatchdogService::getMonitoredEntityType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MONITORED_ENTITY_TYPE, getMonitoredEntityType());
	return true;
}

Uint16 UNIX_PlatformWatchdogService::getMonitoredEntityType() const
{
	return _monitoredEntityType;
}

void UNIX_PlatformWatchdogService::setMonitoredEntityType(Uint16 &value)
{
	_monitoredEntityType = value;
}

Boolean UNIX_PlatformWatchdogService::getOtherMonitoredEntityTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_MONITORED_ENTITY_TYPE_DESCRIPTION, getOtherMonitoredEntityTypeDescription());
	return true;
}

String UNIX_PlatformWatchdogService::getOtherMonitoredEntityTypeDescription() const
{
	return _otherMonitoredEntityTypeDescription;
}

void UNIX_PlatformWatchdogService::setOtherMonitoredEntityTypeDescription(String &value)
{
	_otherMonitoredEntityTypeDescription = value;
}

Boolean UNIX_PlatformWatchdogService::getTimeoutInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIMEOUT_INTERVAL, getTimeoutInterval());
	return true;
}

CIMDateTime UNIX_PlatformWatchdogService::getTimeoutInterval() const
{
	return _timeoutInterval;
}

void UNIX_PlatformWatchdogService::setTimeoutInterval(CIMDateTime &value)
{
	_timeoutInterval = value;
}

Boolean UNIX_PlatformWatchdogService::getTimerExpired(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIMER_EXPIRED, getTimerExpired());
	return true;
}

Boolean UNIX_PlatformWatchdogService::getTimerExpired() const
{
	return _timerExpired;
}

void UNIX_PlatformWatchdogService::setTimerExpired(Boolean &value)
{
	_timerExpired = value;
}

Boolean UNIX_PlatformWatchdogService::getTimerResolution(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIMER_RESOLUTION, getTimerResolution());
	return true;
}

CIMDateTime UNIX_PlatformWatchdogService::getTimerResolution() const
{
	return _timerResolution;
}

void UNIX_PlatformWatchdogService::setTimerResolution(CIMDateTime &value)
{
	_timerResolution = value;
}

Boolean UNIX_PlatformWatchdogService::getCurrentTimerValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_TIMER_VALUE, getCurrentTimerValue());
	return true;
}

CIMDateTime UNIX_PlatformWatchdogService::getCurrentTimerValue() const
{
	return _currentTimerValue;
}

void UNIX_PlatformWatchdogService::setCurrentTimerValue(CIMDateTime &value)
{
	_currentTimerValue = value;
}

Boolean UNIX_PlatformWatchdogService::getTimeOfLastExpiration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_EXPIRATION, getTimeOfLastExpiration());
	return true;
}

CIMDateTime UNIX_PlatformWatchdogService::getTimeOfLastExpiration() const
{
	return _timeOfLastExpiration;
}

void UNIX_PlatformWatchdogService::setTimeOfLastExpiration(CIMDateTime &value)
{
	_timeOfLastExpiration = value;
}

Boolean UNIX_PlatformWatchdogService::getActionOnExpiration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACTION_ON_EXPIRATION, getActionOnExpiration());
	return true;
}

Uint16 UNIX_PlatformWatchdogService::getActionOnExpiration() const
{
	return _actionOnExpiration;
}

void UNIX_PlatformWatchdogService::setActionOnExpiration(Uint16 &value)
{
	_actionOnExpiration = value;
}

Boolean UNIX_PlatformWatchdogService::getOtherActionOnExpiration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ACTION_ON_EXPIRATION, getOtherActionOnExpiration());
	return true;
}

String UNIX_PlatformWatchdogService::getOtherActionOnExpiration() const
{
	return _otherActionOnExpiration;
}

void UNIX_PlatformWatchdogService::setOtherActionOnExpiration(String &value)
{
	_otherActionOnExpiration = value;
}


void UNIX_PlatformWatchdogService::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PlatformWatchdogService");
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
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_creationClassName = String("UNIX_PlatformWatchdogService");
	_primaryOwnerName = String ("");
	_primaryOwnerContact = String ("");
	_startMode = String ("");
	_started = Boolean(false);
	_loSID = String ("");
	_loSOrgID = String ("");
	_monitoredEntityType = Uint16(0);
	_otherMonitoredEntityTypeDescription = String ("");
	_timeoutInterval = CIMHelper::getCurrentTime();
	_timerExpired = Boolean(false);
	_timerResolution = CIMHelper::getCurrentTime();
	_currentTimerValue = CIMHelper::getCurrentTime();
	_timeOfLastExpiration = CIMHelper::getCurrentTime();
	_actionOnExpiration = Uint16(0);
	_otherActionOnExpiration = String ("");

}

Boolean UNIX_PlatformWatchdogService::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "PrimaryOwnerName"))
			{
				String primaryOwnerNameValue;
				property.getValue().get(primaryOwnerNameValue);
				setPrimaryOwnerName(primaryOwnerNameValue);
			}
			else if (String::equal(property.getName().getString(), "PrimaryOwnerContact"))
			{
				String primaryOwnerContactValue;
				property.getValue().get(primaryOwnerContactValue);
				setPrimaryOwnerContact(primaryOwnerContactValue);
			}
			else if (String::equal(property.getName().getString(), "StartMode"))
			{
				String startModeValue;
				property.getValue().get(startModeValue);
				setStartMode(startModeValue);
			}
			else if (String::equal(property.getName().getString(), "Started"))
			{
				Boolean startedValue;
				property.getValue().get(startedValue);
				setStarted(startedValue);
			}
			else if (String::equal(property.getName().getString(), "LoSID"))
			{
				String loSIDValue;
				property.getValue().get(loSIDValue);
				setLoSID(loSIDValue);
			}
			else if (String::equal(property.getName().getString(), "LoSOrgID"))
			{
				String loSOrgIDValue;
				property.getValue().get(loSOrgIDValue);
				setLoSOrgID(loSOrgIDValue);
			}
			else if (String::equal(property.getName().getString(), "MonitoredEntityType"))
			{
				Uint16 monitoredEntityTypeValue;
				property.getValue().get(monitoredEntityTypeValue);
				setMonitoredEntityType(monitoredEntityTypeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherMonitoredEntityTypeDescription"))
			{
				String otherMonitoredEntityTypeDescriptionValue;
				property.getValue().get(otherMonitoredEntityTypeDescriptionValue);
				setOtherMonitoredEntityTypeDescription(otherMonitoredEntityTypeDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "TimeoutInterval"))
			{
				CIMDateTime timeoutIntervalValue;
				property.getValue().get(timeoutIntervalValue);
				setTimeoutInterval(timeoutIntervalValue);
			}
			else if (String::equal(property.getName().getString(), "TimerExpired"))
			{
				Boolean timerExpiredValue;
				property.getValue().get(timerExpiredValue);
				setTimerExpired(timerExpiredValue);
			}
			else if (String::equal(property.getName().getString(), "TimerResolution"))
			{
				CIMDateTime timerResolutionValue;
				property.getValue().get(timerResolutionValue);
				setTimerResolution(timerResolutionValue);
			}
			else if (String::equal(property.getName().getString(), "CurrentTimerValue"))
			{
				CIMDateTime currentTimerValueValue;
				property.getValue().get(currentTimerValueValue);
				setCurrentTimerValue(currentTimerValueValue);
			}
			else if (String::equal(property.getName().getString(), "TimeOfLastExpiration"))
			{
				CIMDateTime timeOfLastExpirationValue;
				property.getValue().get(timeOfLastExpirationValue);
				setTimeOfLastExpiration(timeOfLastExpirationValue);
			}
			else if (String::equal(property.getName().getString(), "ActionOnExpiration"))
			{
				Uint16 actionOnExpirationValue;
				property.getValue().get(actionOnExpirationValue);
				setActionOnExpiration(actionOnExpirationValue);
			}
			else if (String::equal(property.getName().getString(), "OtherActionOnExpiration"))
			{
				String otherActionOnExpirationValue;
				property.getValue().get(otherActionOnExpirationValue);
				setOtherActionOnExpiration(otherActionOnExpirationValue);
			}
	}
	return true;
}

Uint32 UNIX_PlatformWatchdogService::invokeRequestStateChange(
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

Uint32 UNIX_PlatformWatchdogService::invokeStartService()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method StartService */
	
	
	
	return returnValue;
}

Uint32 UNIX_PlatformWatchdogService::invokeStopService()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method StopService */
	
	
	
	return returnValue;
}

Uint32 UNIX_PlatformWatchdogService::invokeChangeAffectedElementsAssignedSequence(
		CIMInstance &inManagedElements,
		Array<Uint16> &inAssignedSequence,
		CIMInstance &inJob
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ConcreteJob inJobObject;
	inJobObject.loadInstance(inJob);
	
	/* Execute method ChangeAffectedElementsAssignedSequence */
	
	
	
	return returnValue;
}


Boolean UNIX_PlatformWatchdogService::initialize()
{
	return false;
}

Boolean UNIX_PlatformWatchdogService::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PlatformWatchdogService");
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
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_creationClassName = String("UNIX_PlatformWatchdogService");
	_primaryOwnerName = String ("");
	_primaryOwnerContact = String ("");
	_startMode = String ("");
	_started = Boolean(false);
	_loSID = String ("");
	_loSOrgID = String ("");
	_monitoredEntityType = Uint16(0);
	_otherMonitoredEntityTypeDescription = String ("");
	_timeoutInterval = CIMHelper::getCurrentTime();
	_timerExpired = Boolean(false);
	_timerResolution = CIMHelper::getCurrentTime();
	_currentTimerValue = CIMHelper::getCurrentTime();
	_timeOfLastExpiration = CIMHelper::getCurrentTime();
	_actionOnExpiration = Uint16(0);
	_otherActionOnExpiration = String ("");
	
	return false;
}

Boolean UNIX_PlatformWatchdogService::finalize()
{
	return false;
}

Boolean UNIX_PlatformWatchdogService::loadByName(const String name)
{
	return false;
}

Boolean UNIX_PlatformWatchdogService::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String systemCreationClassNameKey;
	String systemNameKey;
	String creationClassNameKey;
	String nameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SYSTEM_CREATION_CLASS_NAME)) systemCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SYSTEM_NAME)) systemNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getSystemCreationClassName(), systemCreationClassNameKey)) && 
			(String::equalNoCase(getSystemName(), systemNameKey)) && 
			(String::equalNoCase(getCreationClassName(), creationClassNameKey)) && 
			(String::equalNoCase(getName(), nameKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_PlatformWatchdogService::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PlatformWatchdogService::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PlatformWatchdogService::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PlatformWatchdogService::validateInstance()
{
	return true;
}

