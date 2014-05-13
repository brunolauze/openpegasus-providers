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


UNIX_WakeUpService::UNIX_WakeUpService(void)
{
}

UNIX_WakeUpService::~UNIX_WakeUpService(void)
{
}

Boolean UNIX_WakeUpService::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_WakeUpService::getInstanceID() const
{
	return _instanceID;
}

void UNIX_WakeUpService::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_WakeUpService::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_WakeUpService::getCaption() const
{
	return _caption;
}

void UNIX_WakeUpService::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_WakeUpService::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_WakeUpService::getDescription() const
{
	return _description;
}

void UNIX_WakeUpService::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_WakeUpService::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_WakeUpService::getElementName() const
{
	return _elementName;
}

void UNIX_WakeUpService::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_WakeUpService::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_WakeUpService::getGeneration() const
{
	return _generation;
}

void UNIX_WakeUpService::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_WakeUpService::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_WakeUpService::getInstallDate() const
{
	return _installDate;
}

void UNIX_WakeUpService::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_WakeUpService::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_WakeUpService::getName() const
{
	return _name;
}

void UNIX_WakeUpService::setName(String &value)
{
	_name = value;
}

Boolean UNIX_WakeUpService::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_WakeUpService::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_WakeUpService::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_WakeUpService::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_WakeUpService::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_WakeUpService::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_WakeUpService::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_WakeUpService::getStatus() const
{
	return _status;
}

void UNIX_WakeUpService::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_WakeUpService::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_WakeUpService::getHealthState() const
{
	return _healthState;
}

void UNIX_WakeUpService::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_WakeUpService::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_WakeUpService::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_WakeUpService::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_WakeUpService::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_WakeUpService::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_WakeUpService::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_WakeUpService::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_WakeUpService::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_WakeUpService::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_WakeUpService::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_WakeUpService::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_WakeUpService::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_WakeUpService::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_WakeUpService::getEnabledState() const
{
	return _enabledState;
}

void UNIX_WakeUpService::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_WakeUpService::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_WakeUpService::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_WakeUpService::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_WakeUpService::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_WakeUpService::getRequestedState() const
{
	return _requestedState;
}

void UNIX_WakeUpService::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_WakeUpService::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_WakeUpService::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_WakeUpService::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_WakeUpService::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_WakeUpService::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_WakeUpService::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_WakeUpService::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_WakeUpService::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_WakeUpService::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_WakeUpService::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_WakeUpService::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_WakeUpService::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_WakeUpService::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_WakeUpService::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_WakeUpService::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_WakeUpService::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_WakeUpService::getSystemName() const
{
	return _systemName;
}

void UNIX_WakeUpService::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_WakeUpService::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_WakeUpService::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_WakeUpService::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_WakeUpService::getPrimaryOwnerName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_NAME, getPrimaryOwnerName());
	return true;
}

String UNIX_WakeUpService::getPrimaryOwnerName() const
{
	return _primaryOwnerName;
}

void UNIX_WakeUpService::setPrimaryOwnerName(String &value)
{
	_primaryOwnerName = value;
}

Boolean UNIX_WakeUpService::getPrimaryOwnerContact(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_CONTACT, getPrimaryOwnerContact());
	return true;
}

String UNIX_WakeUpService::getPrimaryOwnerContact() const
{
	return _primaryOwnerContact;
}

void UNIX_WakeUpService::setPrimaryOwnerContact(String &value)
{
	_primaryOwnerContact = value;
}

Boolean UNIX_WakeUpService::getStartMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_MODE, getStartMode());
	return true;
}

String UNIX_WakeUpService::getStartMode() const
{
	return _startMode;
}

void UNIX_WakeUpService::setStartMode(String &value)
{
	_startMode = value;
}

Boolean UNIX_WakeUpService::getStarted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTED, getStarted());
	return true;
}

Boolean UNIX_WakeUpService::getStarted() const
{
	return _started;
}

void UNIX_WakeUpService::setStarted(Boolean &value)
{
	_started = value;
}

Boolean UNIX_WakeUpService::getLoSID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LO_S_ID, getLoSID());
	return true;
}

String UNIX_WakeUpService::getLoSID() const
{
	return _loSID;
}

void UNIX_WakeUpService::setLoSID(String &value)
{
	_loSID = value;
}

Boolean UNIX_WakeUpService::getLoSOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LO_S_ORG_ID, getLoSOrgID());
	return true;
}

String UNIX_WakeUpService::getLoSOrgID() const
{
	return _loSOrgID;
}

void UNIX_WakeUpService::setLoSOrgID(String &value)
{
	_loSOrgID = value;
}

Boolean UNIX_WakeUpService::getWakeUpType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WAKE_UP_TYPE, getWakeUpType());
	return true;
}

Uint16 UNIX_WakeUpService::getWakeUpType() const
{
	return _wakeUpType;
}

void UNIX_WakeUpService::setWakeUpType(Uint16 &value)
{
	_wakeUpType = value;
}

Boolean UNIX_WakeUpService::getOtherWakeUpTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_WAKE_UP_TYPE_DESCRIPTION, getOtherWakeUpTypeDescription());
	return true;
}

String UNIX_WakeUpService::getOtherWakeUpTypeDescription() const
{
	return _otherWakeUpTypeDescription;
}

void UNIX_WakeUpService::setOtherWakeUpTypeDescription(String &value)
{
	_otherWakeUpTypeDescription = value;
}

Boolean UNIX_WakeUpService::getFilterType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FILTER_TYPE, getFilterType());
	return true;
}

Uint16 UNIX_WakeUpService::getFilterType() const
{
	return _filterType;
}

void UNIX_WakeUpService::setFilterType(Uint16 &value)
{
	_filterType = value;
}

Boolean UNIX_WakeUpService::getFilterData(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FILTER_DATA, getFilterData());
	return true;
}

Array<Uint8> UNIX_WakeUpService::getFilterData() const
{
	return _filterData;
}

void UNIX_WakeUpService::setFilterData(Array<Uint8> &value)
{
	_filterData = value;
}

Boolean UNIX_WakeUpService::getOtherFilterTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_FILTER_TYPE_DESCRIPTION, getOtherFilterTypeDescription());
	return true;
}

String UNIX_WakeUpService::getOtherFilterTypeDescription() const
{
	return _otherFilterTypeDescription;
}

void UNIX_WakeUpService::setOtherFilterTypeDescription(String &value)
{
	_otherFilterTypeDescription = value;
}


void UNIX_WakeUpService::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("WakeUpService");
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
	_creationClassName = String("UNIX_WakeUpService");
	_primaryOwnerName = String ("");
	_primaryOwnerContact = String ("");
	_startMode = String ("");
	_started = Boolean(false);
	_loSID = String ("");
	_loSOrgID = String ("");
	_wakeUpType = Uint16(0);
	_otherWakeUpTypeDescription = String ("");
	_filterType = Uint16(0);
	_filterData.clear();
	_otherFilterTypeDescription = String ("");

}

Boolean UNIX_WakeUpService::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "WakeUpType"))
			{
				Uint16 wakeUpTypeValue;
				property.getValue().get(wakeUpTypeValue);
				setWakeUpType(wakeUpTypeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherWakeUpTypeDescription"))
			{
				String otherWakeUpTypeDescriptionValue;
				property.getValue().get(otherWakeUpTypeDescriptionValue);
				setOtherWakeUpTypeDescription(otherWakeUpTypeDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "FilterType"))
			{
				Uint16 filterTypeValue;
				property.getValue().get(filterTypeValue);
				setFilterType(filterTypeValue);
			}
			else if (String::equal(property.getName().getString(), "FilterData"))
			{
				Array<Uint8> filterDataValue;
				property.getValue().get(filterDataValue);
				setFilterData(filterDataValue);
			}
			else if (String::equal(property.getName().getString(), "OtherFilterTypeDescription"))
			{
				String otherFilterTypeDescriptionValue;
				property.getValue().get(otherFilterTypeDescriptionValue);
				setOtherFilterTypeDescription(otherFilterTypeDescriptionValue);
			}
	}
	return true;
}

Uint32 UNIX_WakeUpService::invokeRequestStateChange(
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

Uint32 UNIX_WakeUpService::invokeStartService()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method StartService */
	
	
	
	return returnValue;
}

Uint32 UNIX_WakeUpService::invokeStopService()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method StopService */
	
	
	
	return returnValue;
}

Uint32 UNIX_WakeUpService::invokeChangeAffectedElementsAssignedSequence(
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


Boolean UNIX_WakeUpService::initialize()
{
	return false;
}

Boolean UNIX_WakeUpService::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("WakeUpService");
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
	_creationClassName = String("UNIX_WakeUpService");
	_primaryOwnerName = String ("");
	_primaryOwnerContact = String ("");
	_startMode = String ("");
	_started = Boolean(false);
	_loSID = String ("");
	_loSOrgID = String ("");
	_wakeUpType = Uint16(0);
	_otherWakeUpTypeDescription = String ("");
	_filterType = Uint16(0);
	_filterData.clear();
	_otherFilterTypeDescription = String ("");
	
	return false;
}

Boolean UNIX_WakeUpService::finalize()
{
	return false;
}

Boolean UNIX_WakeUpService::loadByName(const String name)
{
	return false;
}

Boolean UNIX_WakeUpService::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_WakeUpService::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_WakeUpService::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_WakeUpService::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_WakeUpService::validateInstance()
{
	return true;
}

