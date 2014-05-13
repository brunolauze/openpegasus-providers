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


UNIX_TierPolicyService::UNIX_TierPolicyService(void)
{
}

UNIX_TierPolicyService::~UNIX_TierPolicyService(void)
{
}

Boolean UNIX_TierPolicyService::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_TierPolicyService::getInstanceID() const
{
	return _instanceID;
}

void UNIX_TierPolicyService::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_TierPolicyService::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_TierPolicyService::getCaption() const
{
	return _caption;
}

void UNIX_TierPolicyService::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_TierPolicyService::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_TierPolicyService::getDescription() const
{
	return _description;
}

void UNIX_TierPolicyService::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_TierPolicyService::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_TierPolicyService::getElementName() const
{
	return _elementName;
}

void UNIX_TierPolicyService::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_TierPolicyService::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_TierPolicyService::getGeneration() const
{
	return _generation;
}

void UNIX_TierPolicyService::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_TierPolicyService::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_TierPolicyService::getInstallDate() const
{
	return _installDate;
}

void UNIX_TierPolicyService::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_TierPolicyService::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_TierPolicyService::getName() const
{
	return _name;
}

void UNIX_TierPolicyService::setName(String &value)
{
	_name = value;
}

Boolean UNIX_TierPolicyService::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_TierPolicyService::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_TierPolicyService::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_TierPolicyService::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_TierPolicyService::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_TierPolicyService::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_TierPolicyService::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_TierPolicyService::getStatus() const
{
	return _status;
}

void UNIX_TierPolicyService::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_TierPolicyService::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_TierPolicyService::getHealthState() const
{
	return _healthState;
}

void UNIX_TierPolicyService::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_TierPolicyService::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_TierPolicyService::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_TierPolicyService::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_TierPolicyService::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_TierPolicyService::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_TierPolicyService::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_TierPolicyService::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_TierPolicyService::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_TierPolicyService::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_TierPolicyService::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_TierPolicyService::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_TierPolicyService::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_TierPolicyService::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_TierPolicyService::getEnabledState() const
{
	return _enabledState;
}

void UNIX_TierPolicyService::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_TierPolicyService::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_TierPolicyService::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_TierPolicyService::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_TierPolicyService::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_TierPolicyService::getRequestedState() const
{
	return _requestedState;
}

void UNIX_TierPolicyService::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_TierPolicyService::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_TierPolicyService::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_TierPolicyService::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_TierPolicyService::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_TierPolicyService::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_TierPolicyService::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_TierPolicyService::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_TierPolicyService::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_TierPolicyService::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_TierPolicyService::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_TierPolicyService::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_TierPolicyService::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_TierPolicyService::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_TierPolicyService::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_TierPolicyService::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_TierPolicyService::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_TierPolicyService::getSystemName() const
{
	return _systemName;
}

void UNIX_TierPolicyService::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_TierPolicyService::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_TierPolicyService::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_TierPolicyService::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_TierPolicyService::getPrimaryOwnerName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_NAME, getPrimaryOwnerName());
	return true;
}

String UNIX_TierPolicyService::getPrimaryOwnerName() const
{
	return _primaryOwnerName;
}

void UNIX_TierPolicyService::setPrimaryOwnerName(String &value)
{
	_primaryOwnerName = value;
}

Boolean UNIX_TierPolicyService::getPrimaryOwnerContact(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_CONTACT, getPrimaryOwnerContact());
	return true;
}

String UNIX_TierPolicyService::getPrimaryOwnerContact() const
{
	return _primaryOwnerContact;
}

void UNIX_TierPolicyService::setPrimaryOwnerContact(String &value)
{
	_primaryOwnerContact = value;
}

Boolean UNIX_TierPolicyService::getStartMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_MODE, getStartMode());
	return true;
}

String UNIX_TierPolicyService::getStartMode() const
{
	return _startMode;
}

void UNIX_TierPolicyService::setStartMode(String &value)
{
	_startMode = value;
}

Boolean UNIX_TierPolicyService::getStarted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTED, getStarted());
	return true;
}

Boolean UNIX_TierPolicyService::getStarted() const
{
	return _started;
}

void UNIX_TierPolicyService::setStarted(Boolean &value)
{
	_started = value;
}

Boolean UNIX_TierPolicyService::getLoSID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LO_S_ID, getLoSID());
	return true;
}

String UNIX_TierPolicyService::getLoSID() const
{
	return _loSID;
}

void UNIX_TierPolicyService::setLoSID(String &value)
{
	_loSID = value;
}

Boolean UNIX_TierPolicyService::getLoSOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LO_S_ORG_ID, getLoSOrgID());
	return true;
}

String UNIX_TierPolicyService::getLoSOrgID() const
{
	return _loSOrgID;
}

void UNIX_TierPolicyService::setLoSOrgID(String &value)
{
	_loSOrgID = value;
}


void UNIX_TierPolicyService::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("TierPolicyService");
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
	_creationClassName = String("UNIX_TierPolicyService");
	_primaryOwnerName = String ("");
	_primaryOwnerContact = String ("");
	_startMode = String ("");
	_started = Boolean(false);
	_loSID = String ("");
	_loSOrgID = String ("");

}

Boolean UNIX_TierPolicyService::loadInstance(const CIMInstance &instance)
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

Uint32 UNIX_TierPolicyService::invokeRequestStateChange(
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

Uint32 UNIX_TierPolicyService::invokeStartService()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method StartService */
	
	
	
	return returnValue;
}

Uint32 UNIX_TierPolicyService::invokeStopService()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method StopService */
	
	
	
	return returnValue;
}

Uint32 UNIX_TierPolicyService::invokeChangeAffectedElementsAssignedSequence(
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

Uint32 UNIX_TierPolicyService::invokeCreateStorageTier(
		String &inElementName,
		CIMInstance &inMembers,
		String &inTierSettingData,
		CIMInstance &inGoal,
		CIMInstance &inTierDomain,
		CIMInstance &inJob,
		CIMInstance &inStorageTier
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ConcreteJob inJobObject;
	inJobObject.loadInstance(inJob);
	
	UNIX_StorageTier inStorageTierObject;
	inStorageTierObject.loadInstance(inStorageTier);
	
	/* Execute method CreateStorageTier */
	
	
	
	return returnValue;
}

Uint32 UNIX_TierPolicyService::invokeDeleteStorageTier(
		String &inTierSettingData,
		CIMInstance &inJob,
		CIMInstance &inStorageTier,
		Boolean &inForce
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ConcreteJob inJobObject;
	inJobObject.loadInstance(inJob);
	
	UNIX_StorageTier inStorageTierObject;
	inStorageTierObject.loadInstance(inStorageTier);
	
	/* Execute method DeleteStorageTier */
	
	
	
	return returnValue;
}

Uint32 UNIX_TierPolicyService::invokeAddToStorageTier(
		CIMInstance &inMembers,
		String &inTierSettingData,
		CIMInstance &inGoal,
		CIMInstance &inJob,
		CIMInstance &inStorageTier
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ConcreteJob inJobObject;
	inJobObject.loadInstance(inJob);
	
	UNIX_StorageTier inStorageTierObject;
	inStorageTierObject.loadInstance(inStorageTier);
	
	/* Execute method AddToStorageTier */
	
	
	
	return returnValue;
}

Uint32 UNIX_TierPolicyService::invokeRemoveFromStorageTier(
		CIMInstance &inMembers,
		String &inTierSettingData,
		CIMInstance &inJob,
		CIMInstance &inStorageTier
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ConcreteJob inJobObject;
	inJobObject.loadInstance(inJob);
	
	UNIX_StorageTier inStorageTierObject;
	inStorageTierObject.loadInstance(inStorageTier);
	
	/* Execute method RemoveFromStorageTier */
	
	
	
	return returnValue;
}

Uint32 UNIX_TierPolicyService::invokeCreateTierDomain(
		String &inElementName,
		String &inTierSettingData,
		CIMInstance &inJob,
		CIMInstance &inTierDomain
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ConcreteJob inJobObject;
	inJobObject.loadInstance(inJob);
	
	/* Execute method CreateTierDomain */
	
	
	
	return returnValue;
}

Uint32 UNIX_TierPolicyService::invokeDeleteTierDomain(
		CIMInstance &inJob,
		Boolean &inForce,
		CIMInstance &inTierDomain
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ConcreteJob inJobObject;
	inJobObject.loadInstance(inJob);
	
	/* Execute method DeleteTierDomain */
	
	
	
	return returnValue;
}

Uint32 UNIX_TierPolicyService::invokeModifyStorageTierDomainAssociation(
		CIMInstance &inRemoveFromTierDomain,
		CIMInstance &inAddToTierDomain,
		String &inTierSettingData,
		CIMInstance &inJob,
		CIMInstance &inStorageTier
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ConcreteJob inJobObject;
	inJobObject.loadInstance(inJob);
	
	UNIX_StorageTier inStorageTierObject;
	inStorageTierObject.loadInstance(inStorageTier);
	
	/* Execute method ModifyStorageTierDomainAssociation */
	
	
	
	return returnValue;
}

Uint32 UNIX_TierPolicyService::invokeGetStorageTierCandidateObjects(
		CIMInstance &inInElements,
		String &inTierSettingData,
		CIMInstance &inGoal,
		CIMInstance &inJob,
		CIMInstance &inCandidates
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ConcreteJob inJobObject;
	inJobObject.loadInstance(inJob);
	
	/* Execute method GetStorageTierCandidateObjects */
	
	
	
	return returnValue;
}

Uint32 UNIX_TierPolicyService::invokeCreateStorageTierPolicyRule(
		String &inPolicyRuleName,
		Uint16 &inActivity,
		Uint16 &inPolicyState,
		CIMInstance &inTiers,
		Array<Uint16> &inMaxPercentAllocated,
		CIMInstance &inInElements,
		String &inTierPolicySettingData,
		String &inPolicyTimePeriodCondition,
		Boolean &inConditionNegated,
		Uint16 &inTimePeriodCondition,
		CIMInstance &inJob,
		CIMInstance &inPolicyRule
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_StorageTier inTiersObject;
	inTiersObject.loadInstance(inTiers);
	
	UNIX_ConcreteJob inJobObject;
	inJobObject.loadInstance(inJob);
	
	/* Execute method CreateStorageTierPolicyRule */
	
	
	
	return returnValue;
}

Uint32 UNIX_TierPolicyService::invokeDeleteStorageTierPolicyRule(
		CIMInstance &inPolicyRule,
		CIMInstance &inJob,
		Boolean &inForce
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ConcreteJob inJobObject;
	inJobObject.loadInstance(inJob);
	
	/* Execute method DeleteStorageTierPolicyRule */
	
	
	
	return returnValue;
}

Uint32 UNIX_TierPolicyService::invokeModifyStorageTierPolicyRule(
		Uint16 &inOperation,
		String &inPolicyRuleName,
		CIMInstance &inTiers,
		Array<Uint16> &inMaxPercentAllocated,
		CIMInstance &inInElements,
		String &inTierPolicySettingData,
		String &inPolicyTimePeriodCondition,
		Boolean &inConditionNegated,
		CIMInstance &inJob,
		CIMInstance &inPolicyRule
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_StorageTier inTiersObject;
	inTiersObject.loadInstance(inTiers);
	
	UNIX_ConcreteJob inJobObject;
	inJobObject.loadInstance(inJob);
	
	/* Execute method ModifyStorageTierPolicyRule */
	
	
	
	return returnValue;
}


Boolean UNIX_TierPolicyService::initialize()
{
	return false;
}

Boolean UNIX_TierPolicyService::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("TierPolicyService");
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
	_creationClassName = String("UNIX_TierPolicyService");
	_primaryOwnerName = String ("");
	_primaryOwnerContact = String ("");
	_startMode = String ("");
	_started = Boolean(false);
	_loSID = String ("");
	_loSOrgID = String ("");
	
	return false;
}

Boolean UNIX_TierPolicyService::finalize()
{
	return false;
}

Boolean UNIX_TierPolicyService::loadByName(const String name)
{
	return false;
}

Boolean UNIX_TierPolicyService::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_TierPolicyService::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_TierPolicyService::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_TierPolicyService::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_TierPolicyService::validateInstance()
{
	return true;
}

