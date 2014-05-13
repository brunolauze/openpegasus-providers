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


UNIX_OpaqueManagementDataService::UNIX_OpaqueManagementDataService(void)
{
}

UNIX_OpaqueManagementDataService::~UNIX_OpaqueManagementDataService(void)
{
}

Boolean UNIX_OpaqueManagementDataService::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_OpaqueManagementDataService::getInstanceID() const
{
	return _instanceID;
}

void UNIX_OpaqueManagementDataService::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_OpaqueManagementDataService::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_OpaqueManagementDataService::getCaption() const
{
	return _caption;
}

void UNIX_OpaqueManagementDataService::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_OpaqueManagementDataService::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_OpaqueManagementDataService::getDescription() const
{
	return _description;
}

void UNIX_OpaqueManagementDataService::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_OpaqueManagementDataService::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_OpaqueManagementDataService::getElementName() const
{
	return _elementName;
}

void UNIX_OpaqueManagementDataService::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_OpaqueManagementDataService::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_OpaqueManagementDataService::getGeneration() const
{
	return _generation;
}

void UNIX_OpaqueManagementDataService::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_OpaqueManagementDataService::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_OpaqueManagementDataService::getInstallDate() const
{
	return _installDate;
}

void UNIX_OpaqueManagementDataService::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_OpaqueManagementDataService::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_OpaqueManagementDataService::getName() const
{
	return _name;
}

void UNIX_OpaqueManagementDataService::setName(String &value)
{
	_name = value;
}

Boolean UNIX_OpaqueManagementDataService::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_OpaqueManagementDataService::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_OpaqueManagementDataService::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_OpaqueManagementDataService::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_OpaqueManagementDataService::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_OpaqueManagementDataService::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_OpaqueManagementDataService::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_OpaqueManagementDataService::getStatus() const
{
	return _status;
}

void UNIX_OpaqueManagementDataService::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_OpaqueManagementDataService::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_OpaqueManagementDataService::getHealthState() const
{
	return _healthState;
}

void UNIX_OpaqueManagementDataService::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_OpaqueManagementDataService::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_OpaqueManagementDataService::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_OpaqueManagementDataService::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_OpaqueManagementDataService::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_OpaqueManagementDataService::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_OpaqueManagementDataService::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_OpaqueManagementDataService::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_OpaqueManagementDataService::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_OpaqueManagementDataService::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_OpaqueManagementDataService::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_OpaqueManagementDataService::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_OpaqueManagementDataService::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_OpaqueManagementDataService::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_OpaqueManagementDataService::getEnabledState() const
{
	return _enabledState;
}

void UNIX_OpaqueManagementDataService::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_OpaqueManagementDataService::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_OpaqueManagementDataService::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_OpaqueManagementDataService::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_OpaqueManagementDataService::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_OpaqueManagementDataService::getRequestedState() const
{
	return _requestedState;
}

void UNIX_OpaqueManagementDataService::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_OpaqueManagementDataService::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_OpaqueManagementDataService::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_OpaqueManagementDataService::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_OpaqueManagementDataService::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_OpaqueManagementDataService::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_OpaqueManagementDataService::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_OpaqueManagementDataService::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_OpaqueManagementDataService::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_OpaqueManagementDataService::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_OpaqueManagementDataService::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_OpaqueManagementDataService::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_OpaqueManagementDataService::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_OpaqueManagementDataService::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_OpaqueManagementDataService::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_OpaqueManagementDataService::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_OpaqueManagementDataService::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_OpaqueManagementDataService::getSystemName() const
{
	return _systemName;
}

void UNIX_OpaqueManagementDataService::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_OpaqueManagementDataService::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_OpaqueManagementDataService::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_OpaqueManagementDataService::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_OpaqueManagementDataService::getPrimaryOwnerName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_NAME, getPrimaryOwnerName());
	return true;
}

String UNIX_OpaqueManagementDataService::getPrimaryOwnerName() const
{
	return _primaryOwnerName;
}

void UNIX_OpaqueManagementDataService::setPrimaryOwnerName(String &value)
{
	_primaryOwnerName = value;
}

Boolean UNIX_OpaqueManagementDataService::getPrimaryOwnerContact(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_CONTACT, getPrimaryOwnerContact());
	return true;
}

String UNIX_OpaqueManagementDataService::getPrimaryOwnerContact() const
{
	return _primaryOwnerContact;
}

void UNIX_OpaqueManagementDataService::setPrimaryOwnerContact(String &value)
{
	_primaryOwnerContact = value;
}

Boolean UNIX_OpaqueManagementDataService::getStartMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_MODE, getStartMode());
	return true;
}

String UNIX_OpaqueManagementDataService::getStartMode() const
{
	return _startMode;
}

void UNIX_OpaqueManagementDataService::setStartMode(String &value)
{
	_startMode = value;
}

Boolean UNIX_OpaqueManagementDataService::getStarted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTED, getStarted());
	return true;
}

Boolean UNIX_OpaqueManagementDataService::getStarted() const
{
	return _started;
}

void UNIX_OpaqueManagementDataService::setStarted(Boolean &value)
{
	_started = value;
}

Boolean UNIX_OpaqueManagementDataService::getLoSID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LO_S_ID, getLoSID());
	return true;
}

String UNIX_OpaqueManagementDataService::getLoSID() const
{
	return _loSID;
}

void UNIX_OpaqueManagementDataService::setLoSID(String &value)
{
	_loSID = value;
}

Boolean UNIX_OpaqueManagementDataService::getLoSOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LO_S_ORG_ID, getLoSOrgID());
	return true;
}

String UNIX_OpaqueManagementDataService::getLoSOrgID() const
{
	return _loSOrgID;
}

void UNIX_OpaqueManagementDataService::setLoSOrgID(String &value)
{
	_loSOrgID = value;
}

Boolean UNIX_OpaqueManagementDataService::getAvailableStorage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_STORAGE, getAvailableStorage());
	return true;
}

Uint64 UNIX_OpaqueManagementDataService::getAvailableStorage() const
{
	return _availableStorage;
}

void UNIX_OpaqueManagementDataService::setAvailableStorage(Uint64 &value)
{
	_availableStorage = value;
}

Boolean UNIX_OpaqueManagementDataService::getLockTimeout(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCK_TIMEOUT, getLockTimeout());
	return true;
}

CIMDateTime UNIX_OpaqueManagementDataService::getLockTimeout() const
{
	return _lockTimeout;
}

void UNIX_OpaqueManagementDataService::setLockTimeout(CIMDateTime &value)
{
	_lockTimeout = value;
}

Boolean UNIX_OpaqueManagementDataService::getMaxCreateSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_CREATE_SIZE, getMaxCreateSize());
	return true;
}

Uint64 UNIX_OpaqueManagementDataService::getMaxCreateSize() const
{
	return _maxCreateSize;
}

void UNIX_OpaqueManagementDataService::setMaxCreateSize(Uint64 &value)
{
	_maxCreateSize = value;
}


void UNIX_OpaqueManagementDataService::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("OpaqueManagementDataService");
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
	_creationClassName = String("UNIX_OpaqueManagementDataService");
	_primaryOwnerName = String ("");
	_primaryOwnerContact = String ("");
	_startMode = String ("");
	_started = Boolean(false);
	_loSID = String ("");
	_loSOrgID = String ("");
	_availableStorage = Uint64(0);
	_lockTimeout = CIMHelper::getCurrentTime();
	_maxCreateSize = Uint64(0);

}

Boolean UNIX_OpaqueManagementDataService::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "AvailableStorage"))
			{
				Uint64 availableStorageValue;
				property.getValue().get(availableStorageValue);
				setAvailableStorage(availableStorageValue);
			}
			else if (String::equal(property.getName().getString(), "LockTimeout"))
			{
				CIMDateTime lockTimeoutValue;
				property.getValue().get(lockTimeoutValue);
				setLockTimeout(lockTimeoutValue);
			}
			else if (String::equal(property.getName().getString(), "MaxCreateSize"))
			{
				Uint64 maxCreateSizeValue;
				property.getValue().get(maxCreateSizeValue);
				setMaxCreateSize(maxCreateSizeValue);
			}
	}
	return true;
}

Uint32 UNIX_OpaqueManagementDataService::invokeRequestStateChange(
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

Uint32 UNIX_OpaqueManagementDataService::invokeStartService()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method StartService */
	
	
	
	return returnValue;
}

Uint32 UNIX_OpaqueManagementDataService::invokeStopService()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method StopService */
	
	
	
	return returnValue;
}

Uint32 UNIX_OpaqueManagementDataService::invokeChangeAffectedElementsAssignedSequence(
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

Uint32 UNIX_OpaqueManagementDataService::invokeAssignAccess(
		CIMInstance &inIdentity,
		CIMInstance &inOpaqueManagementData,
		Array<Uint16> &inActivities
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_OpaqueManagementData inOpaqueManagementDataObject;
	inOpaqueManagementDataObject.loadInstance(inOpaqueManagementData);
	
	/* Execute method AssignAccess */
	
	
	
	return returnValue;
}

Uint32 UNIX_OpaqueManagementDataService::invokeCreate(
		Uint64 &inMaxSize,
		String &inDataFormat,
		String &inElementName,
		CIMInstance &inOwner,
		CIMInstance &inBasedOnExtent,
		CIMInstance &inOpaqueManagementData,
		CIMInstance &inJob
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_OpaqueManagementData inOpaqueManagementDataObject;
	inOpaqueManagementDataObject.loadInstance(inOpaqueManagementData);
	
	UNIX_ConcreteJob inJobObject;
	inJobObject.loadInstance(inJob);
	
	/* Execute method Create */
	
	
	
	return returnValue;
}

Uint32 UNIX_OpaqueManagementDataService::invokeExportToURI(
		CIMInstance &inOpaqueManagementData,
		Uint64 &inOffset,
		Uint64 &inLength,
		String &inExportURI,
		Array<Uint8> &inLockToken,
		CIMInstance &inJob
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_OpaqueManagementData inOpaqueManagementDataObject;
	inOpaqueManagementDataObject.loadInstance(inOpaqueManagementData);
	
	UNIX_ConcreteJob inJobObject;
	inJobObject.loadInstance(inJob);
	
	/* Execute method ExportToURI */
	
	
	
	return returnValue;
}

Uint32 UNIX_OpaqueManagementDataService::invokeImportFromURI(
		CIMInstance &inOpaqueManagementData,
		Uint64 &inOffset,
		Uint64 &inLength,
		Boolean &inTruncate,
		String &inImportURI,
		Array<Uint8> &inLockToken,
		CIMInstance &inJob
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_OpaqueManagementData inOpaqueManagementDataObject;
	inOpaqueManagementDataObject.loadInstance(inOpaqueManagementData);
	
	UNIX_ConcreteJob inJobObject;
	inJobObject.loadInstance(inJob);
	
	/* Execute method ImportFromURI */
	
	
	
	return returnValue;
}

Uint32 UNIX_OpaqueManagementDataService::invokeLock(
		CIMInstance &inOpaqueManagementData,
		Boolean &inLock,
		Array<Uint8> &inLockToken
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_OpaqueManagementData inOpaqueManagementDataObject;
	inOpaqueManagementDataObject.loadInstance(inOpaqueManagementData);
	
	/* Execute method Lock */
	
	
	
	return returnValue;
}

Uint32 UNIX_OpaqueManagementDataService::invokeRead(
		CIMInstance &inOpaqueManagementData,
		Uint64 &inOffset,
		Uint64 &inLength,
		Array<Uint8> &inData,
		Array<Uint8> &inLockToken
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_OpaqueManagementData inOpaqueManagementDataObject;
	inOpaqueManagementDataObject.loadInstance(inOpaqueManagementData);
	
	/* Execute method Read */
	
	
	
	return returnValue;
}

Uint32 UNIX_OpaqueManagementDataService::invokeReassignOwnership(
		CIMInstance &inNewOwner,
		CIMInstance &inOpaqueManagementData
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_OpaqueManagementData inOpaqueManagementDataObject;
	inOpaqueManagementDataObject.loadInstance(inOpaqueManagementData);
	
	/* Execute method ReassignOwnership */
	
	
	
	return returnValue;
}

Uint32 UNIX_OpaqueManagementDataService::invokeWrite(
		CIMInstance &inOpaqueManagementData,
		Uint64 &inOffset,
		Uint64 &inLength,
		Boolean &inTruncate,
		Array<Uint8> &inData,
		Array<Uint8> &inLockToken,
		CIMInstance &inJob
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_OpaqueManagementData inOpaqueManagementDataObject;
	inOpaqueManagementDataObject.loadInstance(inOpaqueManagementData);
	
	UNIX_ConcreteJob inJobObject;
	inJobObject.loadInstance(inJob);
	
	/* Execute method Write */
	
	
	
	return returnValue;
}


Boolean UNIX_OpaqueManagementDataService::initialize()
{
	return false;
}

Boolean UNIX_OpaqueManagementDataService::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("OpaqueManagementDataService");
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
	_creationClassName = String("UNIX_OpaqueManagementDataService");
	_primaryOwnerName = String ("");
	_primaryOwnerContact = String ("");
	_startMode = String ("");
	_started = Boolean(false);
	_loSID = String ("");
	_loSOrgID = String ("");
	_availableStorage = Uint64(0);
	_lockTimeout = CIMHelper::getCurrentTime();
	_maxCreateSize = Uint64(0);
	
	return false;
}

Boolean UNIX_OpaqueManagementDataService::finalize()
{
	return false;
}

Boolean UNIX_OpaqueManagementDataService::loadByName(const String name)
{
	return false;
}

Boolean UNIX_OpaqueManagementDataService::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_OpaqueManagementDataService::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_OpaqueManagementDataService::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_OpaqueManagementDataService::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_OpaqueManagementDataService::validateInstance()
{
	return true;
}

