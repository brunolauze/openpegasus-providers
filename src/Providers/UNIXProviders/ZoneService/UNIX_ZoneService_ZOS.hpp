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


UNIX_ZoneService::UNIX_ZoneService(void)
{
}

UNIX_ZoneService::~UNIX_ZoneService(void)
{
}

Boolean UNIX_ZoneService::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_ZoneService::getInstanceID() const
{
	return _instanceID;
}

void UNIX_ZoneService::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_ZoneService::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_ZoneService::getCaption() const
{
	return _caption;
}

void UNIX_ZoneService::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_ZoneService::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_ZoneService::getDescription() const
{
	return _description;
}

void UNIX_ZoneService::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_ZoneService::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_ZoneService::getElementName() const
{
	return _elementName;
}

void UNIX_ZoneService::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_ZoneService::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_ZoneService::getGeneration() const
{
	return _generation;
}

void UNIX_ZoneService::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_ZoneService::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_ZoneService::getInstallDate() const
{
	return _installDate;
}

void UNIX_ZoneService::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_ZoneService::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_ZoneService::getName() const
{
	return _name;
}

void UNIX_ZoneService::setName(String &value)
{
	_name = value;
}

Boolean UNIX_ZoneService::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_ZoneService::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_ZoneService::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_ZoneService::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_ZoneService::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_ZoneService::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_ZoneService::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_ZoneService::getStatus() const
{
	return _status;
}

void UNIX_ZoneService::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_ZoneService::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_ZoneService::getHealthState() const
{
	return _healthState;
}

void UNIX_ZoneService::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_ZoneService::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_ZoneService::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_ZoneService::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_ZoneService::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_ZoneService::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_ZoneService::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_ZoneService::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_ZoneService::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_ZoneService::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_ZoneService::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_ZoneService::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_ZoneService::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_ZoneService::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_ZoneService::getEnabledState() const
{
	return _enabledState;
}

void UNIX_ZoneService::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_ZoneService::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_ZoneService::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_ZoneService::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_ZoneService::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_ZoneService::getRequestedState() const
{
	return _requestedState;
}

void UNIX_ZoneService::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_ZoneService::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_ZoneService::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_ZoneService::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_ZoneService::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_ZoneService::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_ZoneService::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_ZoneService::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_ZoneService::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_ZoneService::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_ZoneService::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_ZoneService::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_ZoneService::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_ZoneService::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_ZoneService::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_ZoneService::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_ZoneService::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_ZoneService::getSystemName() const
{
	return _systemName;
}

void UNIX_ZoneService::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_ZoneService::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_ZoneService::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_ZoneService::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_ZoneService::getPrimaryOwnerName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_NAME, getPrimaryOwnerName());
	return true;
}

String UNIX_ZoneService::getPrimaryOwnerName() const
{
	return _primaryOwnerName;
}

void UNIX_ZoneService::setPrimaryOwnerName(String &value)
{
	_primaryOwnerName = value;
}

Boolean UNIX_ZoneService::getPrimaryOwnerContact(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_CONTACT, getPrimaryOwnerContact());
	return true;
}

String UNIX_ZoneService::getPrimaryOwnerContact() const
{
	return _primaryOwnerContact;
}

void UNIX_ZoneService::setPrimaryOwnerContact(String &value)
{
	_primaryOwnerContact = value;
}

Boolean UNIX_ZoneService::getStartMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_MODE, getStartMode());
	return true;
}

String UNIX_ZoneService::getStartMode() const
{
	return _startMode;
}

void UNIX_ZoneService::setStartMode(String &value)
{
	_startMode = value;
}

Boolean UNIX_ZoneService::getStarted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTED, getStarted());
	return true;
}

Boolean UNIX_ZoneService::getStarted() const
{
	return _started;
}

void UNIX_ZoneService::setStarted(Boolean &value)
{
	_started = value;
}

Boolean UNIX_ZoneService::getLoSID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LO_S_ID, getLoSID());
	return true;
}

String UNIX_ZoneService::getLoSID() const
{
	return _loSID;
}

void UNIX_ZoneService::setLoSID(String &value)
{
	_loSID = value;
}

Boolean UNIX_ZoneService::getLoSOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LO_S_ORG_ID, getLoSOrgID());
	return true;
}

String UNIX_ZoneService::getLoSOrgID() const
{
	return _loSOrgID;
}

void UNIX_ZoneService::setLoSOrgID(String &value)
{
	_loSOrgID = value;
}

Boolean UNIX_ZoneService::getSessionState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SESSION_STATE, getSessionState());
	return true;
}

Uint16 UNIX_ZoneService::getSessionState() const
{
	return _sessionState;
}

void UNIX_ZoneService::setSessionState(Uint16 &value)
{
	_sessionState = value;
}

Boolean UNIX_ZoneService::getRequestedSessionState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_SESSION_STATE, getRequestedSessionState());
	return true;
}

Uint16 UNIX_ZoneService::getRequestedSessionState() const
{
	return _requestedSessionState;
}

void UNIX_ZoneService::setRequestedSessionState(Uint16 &value)
{
	_requestedSessionState = value;
}

Boolean UNIX_ZoneService::getDefaultZoningState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEFAULT_ZONING_STATE, getDefaultZoningState());
	return true;
}

Uint16 UNIX_ZoneService::getDefaultZoningState() const
{
	return _defaultZoningState;
}

void UNIX_ZoneService::setDefaultZoningState(Uint16 &value)
{
	_defaultZoningState = value;
}

Boolean UNIX_ZoneService::getConfigurationID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_ID, getConfigurationID());
	return true;
}

String UNIX_ZoneService::getConfigurationID() const
{
	return _configurationID;
}

void UNIX_ZoneService::setConfigurationID(String &value)
{
	_configurationID = value;
}


void UNIX_ZoneService::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("ZoneService");
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
	_creationClassName = String("UNIX_ZoneService");
	_primaryOwnerName = String ("");
	_primaryOwnerContact = String ("");
	_startMode = String ("");
	_started = Boolean(false);
	_loSID = String ("");
	_loSOrgID = String ("");
	_sessionState = Uint16(0);
	_requestedSessionState = Uint16(0);
	_defaultZoningState = Uint16(0);
	_configurationID = String ("");

}

Boolean UNIX_ZoneService::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "SessionState"))
			{
				Uint16 sessionStateValue;
				property.getValue().get(sessionStateValue);
				setSessionState(sessionStateValue);
			}
			else if (String::equal(property.getName().getString(), "RequestedSessionState"))
			{
				Uint16 requestedSessionStateValue;
				property.getValue().get(requestedSessionStateValue);
				setRequestedSessionState(requestedSessionStateValue);
			}
			else if (String::equal(property.getName().getString(), "DefaultZoningState"))
			{
				Uint16 defaultZoningStateValue;
				property.getValue().get(defaultZoningStateValue);
				setDefaultZoningState(defaultZoningStateValue);
			}
			else if (String::equal(property.getName().getString(), "ConfigurationID"))
			{
				String configurationIDValue;
				property.getValue().get(configurationIDValue);
				setConfigurationID(configurationIDValue);
			}
	}
	return true;
}

Uint32 UNIX_ZoneService::invokeRequestStateChange(
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

Uint32 UNIX_ZoneService::invokeStartService()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method StartService */
	
	
	
	return returnValue;
}

Uint32 UNIX_ZoneService::invokeStopService()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method StopService */
	
	
	
	return returnValue;
}

Uint32 UNIX_ZoneService::invokeChangeAffectedElementsAssignedSequence(
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

Uint32 UNIX_ZoneService::invokeCreateZoneSet(
		String &inZoneSetName,
		CIMInstance &inZoneSet
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ZoneSet inZoneSetObject;
	inZoneSetObject.loadInstance(inZoneSet);
	
	/* Execute method CreateZoneSet */
	
	
	
	return returnValue;
}

Uint32 UNIX_ZoneService::invokeCreateZone(
		String &inZoneName,
		Uint16 &inZoneType,
		Uint16 &inZoneSubType,
		CIMInstance &inZone
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_Zone inZoneObject;
	inZoneObject.loadInstance(inZone);
	
	/* Execute method CreateZone */
	
	
	
	return returnValue;
}

Uint32 UNIX_ZoneService::invokeCreateZoneAlias(
		String &inCollectionAlias,
		CIMInstance &inZoneAlias
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_NamedAddressCollection inZoneAliasObject;
	inZoneAliasObject.loadInstance(inZoneAlias);
	
	/* Execute method CreateZoneAlias */
	
	
	
	return returnValue;
}

Uint32 UNIX_ZoneService::invokeCreateZoneMembershipSettingData(
		Uint16 &inConnectivityMemberType,
		String &inConnectivityMemberID,
		CIMInstance &inSystemSpecificCollection,
		CIMInstance &inZoneMembershipSettingData
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ZoneMembershipSettingData inZoneMembershipSettingDataObject;
	inZoneMembershipSettingDataObject.loadInstance(inZoneMembershipSettingData);
	
	/* Execute method CreateZoneMembershipSettingData */
	
	
	
	return returnValue;
}

Uint32 UNIX_ZoneService::invokeAddZone(
		CIMInstance &inZoneSet,
		CIMInstance &inZone
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ZoneSet inZoneSetObject;
	inZoneSetObject.loadInstance(inZoneSet);
	
	UNIX_Zone inZoneObject;
	inZoneObject.loadInstance(inZone);
	
	/* Execute method AddZone */
	
	
	
	return returnValue;
}

Uint32 UNIX_ZoneService::invokeAddZoneMembershipSettingData(
		CIMInstance &inSystemSpecificCollection,
		CIMInstance &inZoneMembershipSettingData
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ZoneMembershipSettingData inZoneMembershipSettingDataObject;
	inZoneMembershipSettingDataObject.loadInstance(inZoneMembershipSettingData);
	
	/* Execute method AddZoneMembershipSettingData */
	
	
	
	return returnValue;
}

Uint32 UNIX_ZoneService::invokeAddZoneAlias(
		CIMInstance &inZone,
		CIMInstance &inZoneAlias
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_Zone inZoneObject;
	inZoneObject.loadInstance(inZone);
	
	UNIX_NamedAddressCollection inZoneAliasObject;
	inZoneAliasObject.loadInstance(inZoneAlias);
	
	/* Execute method AddZoneAlias */
	
	
	
	return returnValue;
}

Uint32 UNIX_ZoneService::invokeActivateZoneSet(
		CIMInstance &inZoneSet,
		Boolean &inActivate
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ZoneSet inZoneSetObject;
	inZoneSetObject.loadInstance(inZoneSet);
	
	/* Execute method ActivateZoneSet */
	
	
	
	return returnValue;
}

Uint32 UNIX_ZoneService::invokeSessionControl(
		Uint16 &inRequestedSessionState
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SessionControl */
	
	
	
	return returnValue;
}

Uint32 UNIX_ZoneService::invokeActivateZoneSetWithJob(
		CIMInstance &inZoneSet,
		Boolean &inActivate,
		String &inConfigurationID,
		CIMInstance &inJob
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ZoneSet inZoneSetObject;
	inZoneSetObject.loadInstance(inZoneSet);
	
	UNIX_ConcreteJob inJobObject;
	inJobObject.loadInstance(inJob);
	
	/* Execute method ActivateZoneSetWithJob */
	
	
	
	return returnValue;
}

Uint32 UNIX_ZoneService::invokeSessionControlWithJob(
		Uint16 &inRequestedSessionState,
		String &inConfigurationID,
		CIMInstance &inJob
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ConcreteJob inJobObject;
	inJobObject.loadInstance(inJob);
	
	/* Execute method SessionControlWithJob */
	
	
	
	return returnValue;
}


Boolean UNIX_ZoneService::initialize()
{
	return false;
}

Boolean UNIX_ZoneService::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("ZoneService");
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
	_creationClassName = String("UNIX_ZoneService");
	_primaryOwnerName = String ("");
	_primaryOwnerContact = String ("");
	_startMode = String ("");
	_started = Boolean(false);
	_loSID = String ("");
	_loSOrgID = String ("");
	_sessionState = Uint16(0);
	_requestedSessionState = Uint16(0);
	_defaultZoningState = Uint16(0);
	_configurationID = String ("");
	
	return false;
}

Boolean UNIX_ZoneService::finalize()
{
	return false;
}

Boolean UNIX_ZoneService::loadByName(const String name)
{
	return false;
}

Boolean UNIX_ZoneService::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_ZoneService::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ZoneService::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ZoneService::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ZoneService::validateInstance()
{
	return true;
}

