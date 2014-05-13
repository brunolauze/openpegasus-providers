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


UNIX_ReplicationService::UNIX_ReplicationService(void)
{
}

UNIX_ReplicationService::~UNIX_ReplicationService(void)
{
}

Boolean UNIX_ReplicationService::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_ReplicationService::getInstanceID() const
{
	return _instanceID;
}

void UNIX_ReplicationService::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_ReplicationService::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_ReplicationService::getCaption() const
{
	return _caption;
}

void UNIX_ReplicationService::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_ReplicationService::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_ReplicationService::getDescription() const
{
	return _description;
}

void UNIX_ReplicationService::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_ReplicationService::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_ReplicationService::getElementName() const
{
	return _elementName;
}

void UNIX_ReplicationService::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_ReplicationService::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_ReplicationService::getGeneration() const
{
	return _generation;
}

void UNIX_ReplicationService::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_ReplicationService::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_ReplicationService::getInstallDate() const
{
	return _installDate;
}

void UNIX_ReplicationService::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_ReplicationService::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_ReplicationService::getName() const
{
	return _name;
}

void UNIX_ReplicationService::setName(String &value)
{
	_name = value;
}

Boolean UNIX_ReplicationService::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_ReplicationService::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_ReplicationService::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_ReplicationService::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_ReplicationService::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_ReplicationService::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_ReplicationService::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_ReplicationService::getStatus() const
{
	return _status;
}

void UNIX_ReplicationService::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_ReplicationService::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_ReplicationService::getHealthState() const
{
	return _healthState;
}

void UNIX_ReplicationService::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_ReplicationService::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_ReplicationService::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_ReplicationService::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_ReplicationService::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_ReplicationService::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_ReplicationService::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_ReplicationService::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_ReplicationService::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_ReplicationService::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_ReplicationService::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_ReplicationService::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_ReplicationService::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_ReplicationService::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_ReplicationService::getEnabledState() const
{
	return _enabledState;
}

void UNIX_ReplicationService::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_ReplicationService::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_ReplicationService::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_ReplicationService::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_ReplicationService::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_ReplicationService::getRequestedState() const
{
	return _requestedState;
}

void UNIX_ReplicationService::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_ReplicationService::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_ReplicationService::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_ReplicationService::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_ReplicationService::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_ReplicationService::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_ReplicationService::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_ReplicationService::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_ReplicationService::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_ReplicationService::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_ReplicationService::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_ReplicationService::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_ReplicationService::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_ReplicationService::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_ReplicationService::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_ReplicationService::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_ReplicationService::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_ReplicationService::getSystemName() const
{
	return _systemName;
}

void UNIX_ReplicationService::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_ReplicationService::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_ReplicationService::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_ReplicationService::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_ReplicationService::getPrimaryOwnerName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_NAME, getPrimaryOwnerName());
	return true;
}

String UNIX_ReplicationService::getPrimaryOwnerName() const
{
	return _primaryOwnerName;
}

void UNIX_ReplicationService::setPrimaryOwnerName(String &value)
{
	_primaryOwnerName = value;
}

Boolean UNIX_ReplicationService::getPrimaryOwnerContact(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_CONTACT, getPrimaryOwnerContact());
	return true;
}

String UNIX_ReplicationService::getPrimaryOwnerContact() const
{
	return _primaryOwnerContact;
}

void UNIX_ReplicationService::setPrimaryOwnerContact(String &value)
{
	_primaryOwnerContact = value;
}

Boolean UNIX_ReplicationService::getStartMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_MODE, getStartMode());
	return true;
}

String UNIX_ReplicationService::getStartMode() const
{
	return _startMode;
}

void UNIX_ReplicationService::setStartMode(String &value)
{
	_startMode = value;
}

Boolean UNIX_ReplicationService::getStarted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTED, getStarted());
	return true;
}

Boolean UNIX_ReplicationService::getStarted() const
{
	return _started;
}

void UNIX_ReplicationService::setStarted(Boolean &value)
{
	_started = value;
}

Boolean UNIX_ReplicationService::getLoSID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LO_S_ID, getLoSID());
	return true;
}

String UNIX_ReplicationService::getLoSID() const
{
	return _loSID;
}

void UNIX_ReplicationService::setLoSID(String &value)
{
	_loSID = value;
}

Boolean UNIX_ReplicationService::getLoSOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LO_S_ORG_ID, getLoSOrgID());
	return true;
}

String UNIX_ReplicationService::getLoSOrgID() const
{
	return _loSOrgID;
}

void UNIX_ReplicationService::setLoSOrgID(String &value)
{
	_loSOrgID = value;
}


void UNIX_ReplicationService::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("ReplicationService");
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
	_creationClassName = String("UNIX_ReplicationService");
	_primaryOwnerName = String ("");
	_primaryOwnerContact = String ("");
	_startMode = String ("");
	_started = Boolean(false);
	_loSID = String ("");
	_loSOrgID = String ("");

}

Boolean UNIX_ReplicationService::loadInstance(const CIMInstance &instance)
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
	}
	return true;
}

Uint32 UNIX_ReplicationService::invokeRequestStateChange(
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

Uint32 UNIX_ReplicationService::invokeStartService()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method StartService */
	
	
	
	return returnValue;
}

Uint32 UNIX_ReplicationService::invokeStopService()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method StopService */
	
	
	
	return returnValue;
}

Uint32 UNIX_ReplicationService::invokeChangeAffectedElementsAssignedSequence(
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

Uint32 UNIX_ReplicationService::invokeCreateGroup(
		String &inGroupName,
		CIMInstance &inMembers,
		Boolean &inPersistent,
		Boolean &inDeleteOnEmptyElement,
		Boolean &inDeleteOnUnassociated,
		CIMInstance &inServiceAccessPoint,
		CIMInstance &inReplicationGroup,
		String &inReplicationSettingData
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ReplicationGroup inReplicationGroupObject;
	inReplicationGroupObject.loadInstance(inReplicationGroup);
	
	/* Execute method CreateGroup */
	
	
	
	return returnValue;
}

Uint32 UNIX_ReplicationService::invokeDeleteGroup(
		CIMInstance &inReplicationGroup,
		CIMInstance &inServiceAccessPoint,
		Boolean &inRemoveElements,
		String &inReplicationSettingData
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ReplicationGroup inReplicationGroupObject;
	inReplicationGroupObject.loadInstance(inReplicationGroup);
	
	/* Execute method DeleteGroup */
	
	
	
	return returnValue;
}

Uint32 UNIX_ReplicationService::invokeAddMembers(
		CIMInstance &inMembers,
		CIMInstance &inReplicationGroup,
		CIMInstance &inServiceAccessPoint,
		String &inReplicationSettingData
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ReplicationGroup inReplicationGroupObject;
	inReplicationGroupObject.loadInstance(inReplicationGroup);
	
	/* Execute method AddMembers */
	
	
	
	return returnValue;
}

Uint32 UNIX_ReplicationService::invokeRemoveMembers(
		CIMInstance &inMembers,
		Boolean &inDeleteOnEmptyElement,
		CIMInstance &inReplicationGroup,
		CIMInstance &inServiceAccessPoint,
		String &inReplicationSettingData
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ReplicationGroup inReplicationGroupObject;
	inReplicationGroupObject.loadInstance(inReplicationGroup);
	
	/* Execute method RemoveMembers */
	
	
	
	return returnValue;
}

Uint32 UNIX_ReplicationService::invokeCreateElementReplica(
		String &inElementName,
		Uint16 &inSyncType,
		Uint16 &inMode,
		CIMInstance &inSourceElement,
		CIMInstance &inSourceAccessPoint,
		CIMInstance &inTargetElement,
		CIMInstance &inTargetAccessPoint,
		String &inReplicationSettingData,
		CIMInstance &inJob,
		CIMInstance &inSynchronization,
		CIMInstance &inTargetSettingGoal,
		CIMInstance &inTargetPool,
		Uint16 &inWaitForCopyState,
		CIMInstance &inConnectivityCollection
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ConcreteJob inJobObject;
	inJobObject.loadInstance(inJob);
	
	UNIX_Synchronized inSynchronizationObject;
	inSynchronizationObject.loadInstance(inSynchronization);
	
	UNIX_ResourcePool inTargetPoolObject;
	inTargetPoolObject.loadInstance(inTargetPool);
	
	/* Execute method CreateElementReplica */
	
	
	
	return returnValue;
}

Uint32 UNIX_ReplicationService::invokeCreateGroupReplica(
		String &inRelationshipName,
		Uint16 &inSyncType,
		Uint16 &inMode,
		CIMInstance &inSourceGroup,
		CIMInstance &inSourceElement,
		CIMInstance &inSourceAccessPoint,
		CIMInstance &inTargetGroup,
		Uint64 &inTargetElementCount,
		CIMInstance &inTargetAccessPoint,
		Uint16 &inConsistency,
		String &inReplicationSettingData,
		CIMInstance &inJob,
		CIMInstance &inSynchronization,
		CIMInstance &inTargetSettingGoal,
		CIMInstance &inTargetPool,
		Uint16 &inWaitForCopyState,
		CIMInstance &inConnectivityCollection
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ReplicationGroup inSourceGroupObject;
	inSourceGroupObject.loadInstance(inSourceGroup);
	
	UNIX_ReplicationGroup inTargetGroupObject;
	inTargetGroupObject.loadInstance(inTargetGroup);
	
	UNIX_ConcreteJob inJobObject;
	inJobObject.loadInstance(inJob);
	
	UNIX_Synchronized inSynchronizationObject;
	inSynchronizationObject.loadInstance(inSynchronization);
	
	UNIX_ResourcePool inTargetPoolObject;
	inTargetPoolObject.loadInstance(inTargetPool);
	
	/* Execute method CreateGroupReplica */
	
	
	
	return returnValue;
}

Uint32 UNIX_ReplicationService::invokeCreateSynchronizationAspect(
		String &inName,
		Uint16 &inSyncType,
		Uint16 &inMode,
		CIMInstance &inSourceGroup,
		CIMInstance &inSourceElement,
		CIMInstance &inSourceAccessPoint,
		Uint16 &inConsistency,
		String &inReplicationSettingData,
		CIMInstance &inJob,
		CIMInstance &inSettingsState
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ReplicationGroup inSourceGroupObject;
	inSourceGroupObject.loadInstance(inSourceGroup);
	
	UNIX_ConcreteJob inJobObject;
	inJobObject.loadInstance(inJob);
	
	UNIX_SettingsDefineState inSettingsStateObject;
	inSettingsStateObject.loadInstance(inSettingsState);
	
	/* Execute method CreateSynchronizationAspect */
	
	
	
	return returnValue;
}

Uint32 UNIX_ReplicationService::invokeModifyReplicaSynchronization(
		Uint16 &inOperation,
		CIMInstance &inSynchronization,
		String &inReplicationSettingData,
		CIMInstance &inSyncPair,
		CIMInstance &inJob,
		CIMInstance &inSettingsState,
		Boolean &inForce,
		Uint16 &inWaitForCopyState
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_Synchronized inSynchronizationObject;
	inSynchronizationObject.loadInstance(inSynchronization);
	
	UNIX_Synchronized inSyncPairObject;
	inSyncPairObject.loadInstance(inSyncPair);
	
	UNIX_ConcreteJob inJobObject;
	inJobObject.loadInstance(inJob);
	
	UNIX_SettingsDefineState inSettingsStateObject;
	inSettingsStateObject.loadInstance(inSettingsState);
	
	/* Execute method ModifyReplicaSynchronization */
	
	
	
	return returnValue;
}

Uint32 UNIX_ReplicationService::invokeModifyListSynchronization(
		Uint16 &inOperation,
		CIMInstance &inSynchronization,
		String &inReplicationSettingData,
		CIMInstance &inJob,
		CIMInstance &inSettingsState,
		Boolean &inForce,
		Uint16 &inWaitForCopyState
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_Synchronized inSynchronizationObject;
	inSynchronizationObject.loadInstance(inSynchronization);
	
	UNIX_ConcreteJob inJobObject;
	inJobObject.loadInstance(inJob);
	
	UNIX_SettingsDefineState inSettingsStateObject;
	inSettingsStateObject.loadInstance(inSettingsState);
	
	/* Execute method ModifyListSynchronization */
	
	
	
	return returnValue;
}

Uint32 UNIX_ReplicationService::invokeModifySettingsDefineState(
		Uint16 &inOperation,
		CIMInstance &inSettingsState,
		CIMInstance &inTargetElement,
		CIMInstance &inTargetGroup,
		Uint64 &inTargetElementCount,
		CIMInstance &inTargetAccessPoint,
		CIMInstance &inSynchronization,
		String &inReplicationSettingData,
		CIMInstance &inJob,
		CIMInstance &inTargetSettingGoal,
		CIMInstance &inTargetPool,
		Uint16 &inWaitForCopyState
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_SettingsDefineState inSettingsStateObject;
	inSettingsStateObject.loadInstance(inSettingsState);
	
	UNIX_ReplicationGroup inTargetGroupObject;
	inTargetGroupObject.loadInstance(inTargetGroup);
	
	UNIX_Synchronized inSynchronizationObject;
	inSynchronizationObject.loadInstance(inSynchronization);
	
	UNIX_ConcreteJob inJobObject;
	inJobObject.loadInstance(inJob);
	
	UNIX_ResourcePool inTargetPoolObject;
	inTargetPoolObject.loadInstance(inTargetPool);
	
	/* Execute method ModifySettingsDefineState */
	
	
	
	return returnValue;
}

Uint32 UNIX_ReplicationService::invokeGetAvailableTargetElements(
		CIMInstance &inSourceElement,
		Uint16 &inSyncType,
		Uint16 &inMode,
		String &inReplicationSettingData,
		CIMInstance &inTargetAccessPoint,
		CIMInstance &inTargetSettingGoal,
		CIMInstance &inTargetPools,
		CIMInstance &inJob,
		CIMInstance &inCandidates
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ResourcePool inTargetPoolsObject;
	inTargetPoolsObject.loadInstance(inTargetPools);
	
	UNIX_ConcreteJob inJobObject;
	inJobObject.loadInstance(inJob);
	
	/* Execute method GetAvailableTargetElements */
	
	
	
	return returnValue;
}

Uint32 UNIX_ReplicationService::invokeGetPeerSystems(
		Uint16 &inOptions,
		CIMInstance &inJob,
		CIMInstance &inSystems
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ConcreteJob inJobObject;
	inJobObject.loadInstance(inJob);
	
	UNIX_ComputerSystem inSystemsObject;
	inSystemsObject.loadInstance(inSystems);
	
	/* Execute method GetPeerSystems */
	
	
	
	return returnValue;
}

Uint32 UNIX_ReplicationService::invokeGetReplicationRelationships(
		Uint16 &inType,
		Uint16 &inSyncType,
		Uint16 &inMode,
		Uint16 &inLocality,
		Uint16 &inCopyState,
		CIMInstance &inJob,
		CIMInstance &inSynchronizations
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ConcreteJob inJobObject;
	inJobObject.loadInstance(inJob);
	
	UNIX_Synchronized inSynchronizationsObject;
	inSynchronizationsObject.loadInstance(inSynchronizations);
	
	/* Execute method GetReplicationRelationships */
	
	
	
	return returnValue;
}

Uint32 UNIX_ReplicationService::invokeGetServiceAccessPoints(
		CIMInstance &inSystem,
		CIMInstance &inJob,
		CIMInstance &inServiceAccessPoints
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ComputerSystem inSystemObject;
	inSystemObject.loadInstance(inSystem);
	
	UNIX_ConcreteJob inJobObject;
	inJobObject.loadInstance(inJob);
	
	/* Execute method GetServiceAccessPoints */
	
	
	
	return returnValue;
}

Uint32 UNIX_ReplicationService::invokeAddReplicationEntity(
		String &inReplicationEntity,
		Boolean &inPersistent,
		String &inInstanceNamespace,
		CIMInstance &inReplicationEntityPath
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ReplicationEntity inReplicationEntityPathObject;
	inReplicationEntityPathObject.loadInstance(inReplicationEntityPath);
	
	/* Execute method AddReplicationEntity */
	
	
	
	return returnValue;
}

Uint32 UNIX_ReplicationService::invokeAddServiceAccessPoint(
		String &inServiceAccessPoint,
		String &inInstanceNamespace,
		CIMInstance &inServiceAccessPointPath
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method AddServiceAccessPoint */
	
	
	
	return returnValue;
}

Uint32 UNIX_ReplicationService::invokeAddSharedSecret(
		String &inSharedSecret,
		CIMInstance &inServiceAccessPoint,
		String &inInstanceNamespace,
		CIMInstance &inSharedSecretPath
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_SharedSecret inSharedSecretPathObject;
	inSharedSecretPathObject.loadInstance(inSharedSecretPath);
	
	/* Execute method AddSharedSecret */
	
	
	
	return returnValue;
}

Uint32 UNIX_ReplicationService::invokeCreateListReplica(
		Array<String> &inElementNames,
		Uint16 &inSyncType,
		Uint16 &inMode,
		CIMInstance &inSourceElements,
		CIMInstance &inSourceAccessPoint,
		CIMInstance &inTargetElements,
		CIMInstance &inTargetAccessPoint,
		String &inReplicationSettingData,
		CIMInstance &inJob,
		CIMInstance &inSynchronizations,
		CIMInstance &inTargetSettingGoal,
		CIMInstance &inTargetPool,
		Uint16 &inWaitForCopyState,
		CIMInstance &inConnectivityCollection
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ConcreteJob inJobObject;
	inJobObject.loadInstance(inJob);
	
	UNIX_Synchronized inSynchronizationsObject;
	inSynchronizationsObject.loadInstance(inSynchronizations);
	
	UNIX_ResourcePool inTargetPoolObject;
	inTargetPoolObject.loadInstance(inTargetPool);
	
	/* Execute method CreateListReplica */
	
	
	
	return returnValue;
}

Uint32 UNIX_ReplicationService::invokeCreateGroupReplicaFromElements(
		String &inRelationshipName,
		Uint16 &inSyncType,
		Uint16 &inMode,
		CIMInstance &inSourceElements,
		String &inSourceGroupName,
		CIMInstance &inSourceAccessPoint,
		CIMInstance &inTargetGroup,
		CIMInstance &inTargetAccessPoint,
		Uint16 &inConsistency,
		String &inReplicationSettingData,
		CIMInstance &inJob,
		CIMInstance &inSynchronization,
		CIMInstance &inTargetSettingGoal,
		CIMInstance &inTargetPool,
		Uint16 &inWaitForCopyState,
		CIMInstance &inConnectivityCollection
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ReplicationGroup inTargetGroupObject;
	inTargetGroupObject.loadInstance(inTargetGroup);
	
	UNIX_ConcreteJob inJobObject;
	inJobObject.loadInstance(inJob);
	
	UNIX_Synchronized inSynchronizationObject;
	inSynchronizationObject.loadInstance(inSynchronization);
	
	UNIX_ResourcePool inTargetPoolObject;
	inTargetPoolObject.loadInstance(inTargetPool);
	
	/* Execute method CreateGroupReplicaFromElements */
	
	
	
	return returnValue;
}

Uint32 UNIX_ReplicationService::invokeGetReplicationRelationshipInstances(
		Uint16 &inType,
		Uint16 &inSyncType,
		Uint16 &inMode,
		Uint16 &inLocality,
		Uint16 &inCopyState,
		CIMInstance &inJob,
		Array<String> &inSynchronizations
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ConcreteJob inJobObject;
	inJobObject.loadInstance(inJob);
	
	/* Execute method GetReplicationRelationshipInstances */
	
	
	
	return returnValue;
}

Uint32 UNIX_ReplicationService::invokeModifyListSettingsDefineState(
		Uint16 &inOperation,
		CIMInstance &inSettingsStates,
		CIMInstance &inTargetElements,
		CIMInstance &inTargetGroups,
		Uint64 &inTargetElementCount,
		CIMInstance &inTargetAccessPoint,
		CIMInstance &inSynchronizations,
		String &inReplicationSettingData,
		CIMInstance &inJob,
		CIMInstance &inTargetSettingGoal,
		CIMInstance &inTargetPool,
		Uint16 &inWaitForCopyState
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_SettingsDefineState inSettingsStatesObject;
	inSettingsStatesObject.loadInstance(inSettingsStates);
	
	UNIX_ReplicationGroup inTargetGroupsObject;
	inTargetGroupsObject.loadInstance(inTargetGroups);
	
	UNIX_Synchronized inSynchronizationsObject;
	inSynchronizationsObject.loadInstance(inSynchronizations);
	
	UNIX_ConcreteJob inJobObject;
	inJobObject.loadInstance(inJob);
	
	UNIX_ResourcePool inTargetPoolObject;
	inTargetPoolObject.loadInstance(inTargetPool);
	
	/* Execute method ModifyListSettingsDefineState */
	
	
	
	return returnValue;
}

Uint32 UNIX_ReplicationService::invokeAddToRemoteReplicationCollection(
		CIMInstance &inLocalAccessPoints,
		CIMInstance &inRemoteAccessPoints,
		CIMInstance &inRemoteComputerSystem,
		CIMInstance &inJob,
		CIMInstance &inConnectivityCollection
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ComputerSystem inRemoteComputerSystemObject;
	inRemoteComputerSystemObject.loadInstance(inRemoteComputerSystem);
	
	UNIX_ConcreteJob inJobObject;
	inJobObject.loadInstance(inJob);
	
	/* Execute method AddToRemoteReplicationCollection */
	
	
	
	return returnValue;
}

Uint32 UNIX_ReplicationService::invokeCreateRemoteReplicationCollection(
		String &inElementName,
		CIMInstance &inLocalAccessPoints,
		CIMInstance &inRemoteAccessPoints,
		CIMInstance &inRemoteComputerSystem,
		Boolean &inActive,
		Boolean &inDeleteOnUnassociated,
		CIMInstance &inJob,
		CIMInstance &inConnectivityCollection,
		String &inReplicationSettingData
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ComputerSystem inRemoteComputerSystemObject;
	inRemoteComputerSystemObject.loadInstance(inRemoteComputerSystem);
	
	UNIX_ConcreteJob inJobObject;
	inJobObject.loadInstance(inJob);
	
	/* Execute method CreateRemoteReplicationCollection */
	
	
	
	return returnValue;
}

Uint32 UNIX_ReplicationService::invokeRemoveFromRemoteReplicationCollection(
		CIMInstance &inLocalAccessPoints,
		CIMInstance &inRemoteAccessPoints,
		CIMInstance &inRemoteComputerSystem,
		CIMInstance &inJob,
		CIMInstance &inConnectivityCollection
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ComputerSystem inRemoteComputerSystemObject;
	inRemoteComputerSystemObject.loadInstance(inRemoteComputerSystem);
	
	UNIX_ConcreteJob inJobObject;
	inJobObject.loadInstance(inJob);
	
	/* Execute method RemoveFromRemoteReplicationCollection */
	
	
	
	return returnValue;
}


Boolean UNIX_ReplicationService::initialize()
{
	return false;
}

Boolean UNIX_ReplicationService::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("ReplicationService");
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
	_creationClassName = String("UNIX_ReplicationService");
	_primaryOwnerName = String ("");
	_primaryOwnerContact = String ("");
	_startMode = String ("");
	_started = Boolean(false);
	_loSID = String ("");
	_loSOrgID = String ("");
	
	return false;
}

Boolean UNIX_ReplicationService::finalize()
{
	return false;
}

Boolean UNIX_ReplicationService::loadByName(const String name)
{
	return false;
}

Boolean UNIX_ReplicationService::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_ReplicationService::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ReplicationService::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ReplicationService::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ReplicationService::validateInstance()
{
	return true;
}

