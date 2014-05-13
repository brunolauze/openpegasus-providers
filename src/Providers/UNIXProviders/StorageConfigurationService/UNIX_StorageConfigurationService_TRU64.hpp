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


UNIX_StorageConfigurationService::UNIX_StorageConfigurationService(void)
{
}

UNIX_StorageConfigurationService::~UNIX_StorageConfigurationService(void)
{
}

Boolean UNIX_StorageConfigurationService::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_StorageConfigurationService::getInstanceID() const
{
	return _instanceID;
}

void UNIX_StorageConfigurationService::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_StorageConfigurationService::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_StorageConfigurationService::getCaption() const
{
	return _caption;
}

void UNIX_StorageConfigurationService::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_StorageConfigurationService::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_StorageConfigurationService::getDescription() const
{
	return _description;
}

void UNIX_StorageConfigurationService::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_StorageConfigurationService::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_StorageConfigurationService::getElementName() const
{
	return _elementName;
}

void UNIX_StorageConfigurationService::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_StorageConfigurationService::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_StorageConfigurationService::getGeneration() const
{
	return _generation;
}

void UNIX_StorageConfigurationService::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_StorageConfigurationService::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_StorageConfigurationService::getInstallDate() const
{
	return _installDate;
}

void UNIX_StorageConfigurationService::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_StorageConfigurationService::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_StorageConfigurationService::getName() const
{
	return _name;
}

void UNIX_StorageConfigurationService::setName(String &value)
{
	_name = value;
}

Boolean UNIX_StorageConfigurationService::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_StorageConfigurationService::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_StorageConfigurationService::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_StorageConfigurationService::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_StorageConfigurationService::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_StorageConfigurationService::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_StorageConfigurationService::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_StorageConfigurationService::getStatus() const
{
	return _status;
}

void UNIX_StorageConfigurationService::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_StorageConfigurationService::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_StorageConfigurationService::getHealthState() const
{
	return _healthState;
}

void UNIX_StorageConfigurationService::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_StorageConfigurationService::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_StorageConfigurationService::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_StorageConfigurationService::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_StorageConfigurationService::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_StorageConfigurationService::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_StorageConfigurationService::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_StorageConfigurationService::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_StorageConfigurationService::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_StorageConfigurationService::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_StorageConfigurationService::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_StorageConfigurationService::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_StorageConfigurationService::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_StorageConfigurationService::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_StorageConfigurationService::getEnabledState() const
{
	return _enabledState;
}

void UNIX_StorageConfigurationService::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_StorageConfigurationService::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_StorageConfigurationService::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_StorageConfigurationService::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_StorageConfigurationService::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_StorageConfigurationService::getRequestedState() const
{
	return _requestedState;
}

void UNIX_StorageConfigurationService::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_StorageConfigurationService::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_StorageConfigurationService::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_StorageConfigurationService::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_StorageConfigurationService::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_StorageConfigurationService::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_StorageConfigurationService::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_StorageConfigurationService::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_StorageConfigurationService::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_StorageConfigurationService::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_StorageConfigurationService::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_StorageConfigurationService::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_StorageConfigurationService::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_StorageConfigurationService::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_StorageConfigurationService::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_StorageConfigurationService::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_StorageConfigurationService::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_StorageConfigurationService::getSystemName() const
{
	return _systemName;
}

void UNIX_StorageConfigurationService::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_StorageConfigurationService::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_StorageConfigurationService::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_StorageConfigurationService::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_StorageConfigurationService::getPrimaryOwnerName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_NAME, getPrimaryOwnerName());
	return true;
}

String UNIX_StorageConfigurationService::getPrimaryOwnerName() const
{
	return _primaryOwnerName;
}

void UNIX_StorageConfigurationService::setPrimaryOwnerName(String &value)
{
	_primaryOwnerName = value;
}

Boolean UNIX_StorageConfigurationService::getPrimaryOwnerContact(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_CONTACT, getPrimaryOwnerContact());
	return true;
}

String UNIX_StorageConfigurationService::getPrimaryOwnerContact() const
{
	return _primaryOwnerContact;
}

void UNIX_StorageConfigurationService::setPrimaryOwnerContact(String &value)
{
	_primaryOwnerContact = value;
}

Boolean UNIX_StorageConfigurationService::getStartMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_MODE, getStartMode());
	return true;
}

String UNIX_StorageConfigurationService::getStartMode() const
{
	return _startMode;
}

void UNIX_StorageConfigurationService::setStartMode(String &value)
{
	_startMode = value;
}

Boolean UNIX_StorageConfigurationService::getStarted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTED, getStarted());
	return true;
}

Boolean UNIX_StorageConfigurationService::getStarted() const
{
	return _started;
}

void UNIX_StorageConfigurationService::setStarted(Boolean &value)
{
	_started = value;
}

Boolean UNIX_StorageConfigurationService::getLoSID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LO_S_ID, getLoSID());
	return true;
}

String UNIX_StorageConfigurationService::getLoSID() const
{
	return _loSID;
}

void UNIX_StorageConfigurationService::setLoSID(String &value)
{
	_loSID = value;
}

Boolean UNIX_StorageConfigurationService::getLoSOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LO_S_ORG_ID, getLoSOrgID());
	return true;
}

String UNIX_StorageConfigurationService::getLoSOrgID() const
{
	return _loSOrgID;
}

void UNIX_StorageConfigurationService::setLoSOrgID(String &value)
{
	_loSOrgID = value;
}


void UNIX_StorageConfigurationService::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("StorageConfigurationService");
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
	_creationClassName = String("UNIX_StorageConfigurationService");
	_primaryOwnerName = String ("");
	_primaryOwnerContact = String ("");
	_startMode = String ("");
	_started = Boolean(false);
	_loSID = String ("");
	_loSOrgID = String ("");

}

Boolean UNIX_StorageConfigurationService::loadInstance(const CIMInstance &instance)
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

Uint32 UNIX_StorageConfigurationService::invokeRequestStateChange(
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

Uint32 UNIX_StorageConfigurationService::invokeStartService()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method StartService */
	
	
	
	return returnValue;
}

Uint32 UNIX_StorageConfigurationService::invokeStopService()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method StopService */
	
	
	
	return returnValue;
}

Uint32 UNIX_StorageConfigurationService::invokeChangeAffectedElementsAssignedSequence(
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

Uint32 UNIX_StorageConfigurationService::invokeCreateOrModifyStoragePool(
		String &inElementName,
		CIMInstance &inJob,
		CIMInstance &inGoal,
		Uint64 &inSize,
		Array<String> &inInPools,
		Array<String> &inInExtents,
		CIMInstance &inPool
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ConcreteJob inJobObject;
	inJobObject.loadInstance(inJob);
	
	UNIX_StorageSetting inGoalObject;
	inGoalObject.loadInstance(inGoal);
	
	UNIX_StoragePool inPoolObject;
	inPoolObject.loadInstance(inPool);
	
	/* Execute method CreateOrModifyStoragePool */
	
	
	
	return returnValue;
}

Uint32 UNIX_StorageConfigurationService::invokeCreateOrModifyElementFromStoragePool(
		String &inElementName,
		Uint16 &inElementType,
		CIMInstance &inJob,
		CIMInstance &inGoal,
		Uint64 &inSize,
		CIMInstance &inInPool,
		CIMInstance &inTheElement
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ConcreteJob inJobObject;
	inJobObject.loadInstance(inJob);
	
	UNIX_StoragePool inInPoolObject;
	inInPoolObject.loadInstance(inInPool);
	
	/* Execute method CreateOrModifyElementFromStoragePool */
	
	
	
	return returnValue;
}

Uint32 UNIX_StorageConfigurationService::invokeDeleteStoragePool(
		CIMInstance &inJob,
		CIMInstance &inPool
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ConcreteJob inJobObject;
	inJobObject.loadInstance(inJob);
	
	UNIX_StoragePool inPoolObject;
	inPoolObject.loadInstance(inPool);
	
	/* Execute method DeleteStoragePool */
	
	
	
	return returnValue;
}

Uint32 UNIX_StorageConfigurationService::invokeReturnToStoragePool(
		CIMInstance &inJob,
		CIMInstance &inTheElement
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ConcreteJob inJobObject;
	inJobObject.loadInstance(inJob);
	
	/* Execute method ReturnToStoragePool */
	
	
	
	return returnValue;
}

Uint32 UNIX_StorageConfigurationService::invokeCreateReplica(
		String &inElementName,
		CIMInstance &inJob,
		CIMInstance &inSourceElement,
		CIMInstance &inTargetElement,
		CIMInstance &inTargetSettingGoal,
		CIMInstance &inTargetPool,
		Uint16 &inCopyType
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ConcreteJob inJobObject;
	inJobObject.loadInstance(inJob);
	
	UNIX_StorageSetting inTargetSettingGoalObject;
	inTargetSettingGoalObject.loadInstance(inTargetSettingGoal);
	
	UNIX_StoragePool inTargetPoolObject;
	inTargetPoolObject.loadInstance(inTargetPool);
	
	/* Execute method CreateReplica */
	
	
	
	return returnValue;
}

Uint32 UNIX_StorageConfigurationService::invokeModifySynchronization(
		Uint16 &inOperation,
		CIMInstance &inJob,
		CIMInstance &inSynchronization
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ConcreteJob inJobObject;
	inJobObject.loadInstance(inJob);
	
	/* Execute method ModifySynchronization */
	
	
	
	return returnValue;
}

Uint32 UNIX_StorageConfigurationService::invokeAttachReplica(
		CIMInstance &inJob,
		CIMInstance &inSourceElement,
		CIMInstance &inTargetElement,
		Uint16 &inCopyType
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ConcreteJob inJobObject;
	inJobObject.loadInstance(inJob);
	
	/* Execute method AttachReplica */
	
	
	
	return returnValue;
}

Uint32 UNIX_StorageConfigurationService::invokeAttachOrModifyReplica(
		CIMInstance &inJob,
		CIMInstance &inSourceElement,
		CIMInstance &inTargetElement,
		Uint16 &inCopyType,
		String &inGoal,
		CIMInstance &inReplicationPipe
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ConcreteJob inJobObject;
	inJobObject.loadInstance(inJob);
	
	/* Execute method AttachOrModifyReplica */
	
	
	
	return returnValue;
}

Uint32 UNIX_StorageConfigurationService::invokeCreateOrModifyReplicationPipe(
		String &inPipeElementName,
		CIMInstance &inSourceSystem,
		CIMInstance &inTargetSystem,
		CIMInstance &inSourceEndpoint,
		CIMInstance &inTargetEndpoint,
		String &inGoal,
		CIMInstance &inReplicationPipe
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ComputerSystem inSourceSystemObject;
	inSourceSystemObject.loadInstance(inSourceSystem);
	
	UNIX_ComputerSystem inTargetSystemObject;
	inTargetSystemObject.loadInstance(inTargetSystem);
	
	/* Execute method CreateOrModifyReplicationPipe */
	
	
	
	return returnValue;
}

Uint32 UNIX_StorageConfigurationService::invokeCreateReplicationBuffer(
		CIMInstance &inJob,
		CIMInstance &inHost,
		CIMInstance &inTargetElement,
		CIMInstance &inTargetPool,
		CIMInstance &inReplicaBuffer
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ConcreteJob inJobObject;
	inJobObject.loadInstance(inJob);
	
	UNIX_StoragePool inTargetPoolObject;
	inTargetPoolObject.loadInstance(inTargetPool);
	
	/* Execute method CreateReplicationBuffer */
	
	
	
	return returnValue;
}

Uint32 UNIX_StorageConfigurationService::invokeCreateOrModifyElementFromElements(
		String &inElementName,
		Uint16 &inElementType,
		CIMInstance &inJob,
		CIMInstance &inGoal,
		Uint64 &inSize,
		CIMInstance &inInElements,
		CIMInstance &inTheElement
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ConcreteJob inJobObject;
	inJobObject.loadInstance(inJob);
	
	/* Execute method CreateOrModifyElementFromElements */
	
	
	
	return returnValue;
}

Uint32 UNIX_StorageConfigurationService::invokeScsiScan(
		CIMInstance &inJob,
		Uint16 &inConnectionType,
		String &inOtherConnectionType,
		CIMInstance &inInitiators,
		Array<String> &inTargets,
		Array<String> &inLogicalUnits
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ConcreteJob inJobObject;
	inJobObject.loadInstance(inJob);
	
	UNIX_SCSIProtocolEndpoint inInitiatorsObject;
	inInitiatorsObject.loadInstance(inInitiators);
	
	/* Execute method ScsiScan */
	
	
	
	return returnValue;
}

Uint32 UNIX_StorageConfigurationService::invokeRequestUsageChange(
		Uint16 &inOperation,
		Uint16 &inUsageValue,
		String &inOtherUsageDescription,
		CIMInstance &inJob,
		CIMInstance &inTheElement
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ConcreteJob inJobObject;
	inJobObject.loadInstance(inJob);
	
	/* Execute method RequestUsageChange */
	
	
	
	return returnValue;
}

Uint32 UNIX_StorageConfigurationService::invokeGetElementsBasedOnUsage(
		Uint16 &inElementType,
		Uint16 &inUsage,
		Uint16 &inCriteria,
		CIMInstance &inThePool,
		CIMInstance &inTheElements
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_StoragePool inThePoolObject;
	inThePoolObject.loadInstance(inThePool);
	
	/* Execute method GetElementsBasedOnUsage */
	
	
	
	return returnValue;
}

Uint32 UNIX_StorageConfigurationService::invokeAssignStorageResourceAffinity(
		Uint16 &inResourceType,
		CIMInstance &inJob,
		CIMInstance &inStorageProcessor,
		CIMInstance &inStorageResources
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ConcreteJob inJobObject;
	inJobObject.loadInstance(inJob);
	
	UNIX_ComputerSystem inStorageProcessorObject;
	inStorageProcessorObject.loadInstance(inStorageProcessor);
	
	/* Execute method AssignStorageResourceAffinity */
	
	
	
	return returnValue;
}

Uint32 UNIX_StorageConfigurationService::invokeReturnElementsToStoragePool(
		Uint16 &inOptions,
		CIMInstance &inJob,
		CIMInstance &inTheElements
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ConcreteJob inJobObject;
	inJobObject.loadInstance(inJob);
	
	/* Execute method ReturnElementsToStoragePool */
	
	
	
	return returnValue;
}

Uint32 UNIX_StorageConfigurationService::invokeCreateElementsFromStoragePools(
		Array<String> &inElementNames,
		Uint16 &inElementType,
		Uint64 &inElementCount,
		CIMInstance &inJob,
		CIMInstance &inGoal,
		Uint64 &inSize,
		CIMInstance &inInPools,
		CIMInstance &inTheElements
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ConcreteJob inJobObject;
	inJobObject.loadInstance(inJob);
	
	UNIX_StoragePool inInPoolsObject;
	inInPoolsObject.loadInstance(inInPools);
	
	/* Execute method CreateElementsFromStoragePools */
	
	
	
	return returnValue;
}


Boolean UNIX_StorageConfigurationService::initialize()
{
	return false;
}

Boolean UNIX_StorageConfigurationService::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("StorageConfigurationService");
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
	_creationClassName = String("UNIX_StorageConfigurationService");
	_primaryOwnerName = String ("");
	_primaryOwnerContact = String ("");
	_startMode = String ("");
	_started = Boolean(false);
	_loSID = String ("");
	_loSOrgID = String ("");
	
	return false;
}

Boolean UNIX_StorageConfigurationService::finalize()
{
	return false;
}

Boolean UNIX_StorageConfigurationService::loadByName(const String name)
{
	return false;
}

Boolean UNIX_StorageConfigurationService::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_StorageConfigurationService::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StorageConfigurationService::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StorageConfigurationService::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StorageConfigurationService::validateInstance()
{
	return true;
}

