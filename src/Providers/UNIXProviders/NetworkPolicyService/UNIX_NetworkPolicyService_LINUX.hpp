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


UNIX_NetworkPolicyService::UNIX_NetworkPolicyService(void)
{
}

UNIX_NetworkPolicyService::~UNIX_NetworkPolicyService(void)
{
}

Boolean UNIX_NetworkPolicyService::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_NetworkPolicyService::getInstanceID() const
{
	return _instanceID;
}

void UNIX_NetworkPolicyService::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_NetworkPolicyService::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_NetworkPolicyService::getCaption() const
{
	return _caption;
}

void UNIX_NetworkPolicyService::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_NetworkPolicyService::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_NetworkPolicyService::getDescription() const
{
	return _description;
}

void UNIX_NetworkPolicyService::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_NetworkPolicyService::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_NetworkPolicyService::getElementName() const
{
	return _elementName;
}

void UNIX_NetworkPolicyService::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_NetworkPolicyService::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_NetworkPolicyService::getGeneration() const
{
	return _generation;
}

void UNIX_NetworkPolicyService::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_NetworkPolicyService::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_NetworkPolicyService::getInstallDate() const
{
	return _installDate;
}

void UNIX_NetworkPolicyService::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_NetworkPolicyService::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_NetworkPolicyService::getName() const
{
	return _name;
}

void UNIX_NetworkPolicyService::setName(String &value)
{
	_name = value;
}

Boolean UNIX_NetworkPolicyService::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_NetworkPolicyService::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_NetworkPolicyService::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_NetworkPolicyService::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_NetworkPolicyService::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_NetworkPolicyService::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_NetworkPolicyService::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_NetworkPolicyService::getStatus() const
{
	return _status;
}

void UNIX_NetworkPolicyService::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_NetworkPolicyService::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_NetworkPolicyService::getHealthState() const
{
	return _healthState;
}

void UNIX_NetworkPolicyService::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_NetworkPolicyService::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_NetworkPolicyService::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_NetworkPolicyService::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_NetworkPolicyService::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_NetworkPolicyService::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_NetworkPolicyService::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_NetworkPolicyService::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_NetworkPolicyService::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_NetworkPolicyService::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_NetworkPolicyService::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_NetworkPolicyService::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_NetworkPolicyService::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_NetworkPolicyService::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_NetworkPolicyService::getEnabledState() const
{
	return _enabledState;
}

void UNIX_NetworkPolicyService::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_NetworkPolicyService::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_NetworkPolicyService::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_NetworkPolicyService::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_NetworkPolicyService::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_NetworkPolicyService::getRequestedState() const
{
	return _requestedState;
}

void UNIX_NetworkPolicyService::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_NetworkPolicyService::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_NetworkPolicyService::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_NetworkPolicyService::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_NetworkPolicyService::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_NetworkPolicyService::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_NetworkPolicyService::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_NetworkPolicyService::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_NetworkPolicyService::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_NetworkPolicyService::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_NetworkPolicyService::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_NetworkPolicyService::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_NetworkPolicyService::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_NetworkPolicyService::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_NetworkPolicyService::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_NetworkPolicyService::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_NetworkPolicyService::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_NetworkPolicyService::getSystemName() const
{
	return _systemName;
}

void UNIX_NetworkPolicyService::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_NetworkPolicyService::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_NetworkPolicyService::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_NetworkPolicyService::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_NetworkPolicyService::getPrimaryOwnerName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_NAME, getPrimaryOwnerName());
	return true;
}

String UNIX_NetworkPolicyService::getPrimaryOwnerName() const
{
	return _primaryOwnerName;
}

void UNIX_NetworkPolicyService::setPrimaryOwnerName(String &value)
{
	_primaryOwnerName = value;
}

Boolean UNIX_NetworkPolicyService::getPrimaryOwnerContact(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_CONTACT, getPrimaryOwnerContact());
	return true;
}

String UNIX_NetworkPolicyService::getPrimaryOwnerContact() const
{
	return _primaryOwnerContact;
}

void UNIX_NetworkPolicyService::setPrimaryOwnerContact(String &value)
{
	_primaryOwnerContact = value;
}

Boolean UNIX_NetworkPolicyService::getStartMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_MODE, getStartMode());
	return true;
}

String UNIX_NetworkPolicyService::getStartMode() const
{
	return _startMode;
}

void UNIX_NetworkPolicyService::setStartMode(String &value)
{
	_startMode = value;
}

Boolean UNIX_NetworkPolicyService::getStarted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTED, getStarted());
	return true;
}

Boolean UNIX_NetworkPolicyService::getStarted() const
{
	return _started;
}

void UNIX_NetworkPolicyService::setStarted(Boolean &value)
{
	_started = value;
}

Boolean UNIX_NetworkPolicyService::getLoSID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LO_S_ID, getLoSID());
	return true;
}

String UNIX_NetworkPolicyService::getLoSID() const
{
	return _loSID;
}

void UNIX_NetworkPolicyService::setLoSID(String &value)
{
	_loSID = value;
}

Boolean UNIX_NetworkPolicyService::getLoSOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LO_S_ORG_ID, getLoSOrgID());
	return true;
}

String UNIX_NetworkPolicyService::getLoSOrgID() const
{
	return _loSOrgID;
}

void UNIX_NetworkPolicyService::setLoSOrgID(String &value)
{
	_loSOrgID = value;
}

Boolean UNIX_NetworkPolicyService::getServiceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVICE_TYPE, getServiceType());
	return true;
}

Uint16 UNIX_NetworkPolicyService::getServiceType() const
{
	return _serviceType;
}

void UNIX_NetworkPolicyService::setServiceType(Uint16 &value)
{
	_serviceType = value;
}

Boolean UNIX_NetworkPolicyService::getOtherServiceTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SERVICE_TYPE_DESCRIPTION, getOtherServiceTypeDescription());
	return true;
}

String UNIX_NetworkPolicyService::getOtherServiceTypeDescription() const
{
	return _otherServiceTypeDescription;
}

void UNIX_NetworkPolicyService::setOtherServiceTypeDescription(String &value)
{
	_otherServiceTypeDescription = value;
}

Boolean UNIX_NetworkPolicyService::getServiceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVICE_ID, getServiceID());
	return true;
}

String UNIX_NetworkPolicyService::getServiceID() const
{
	return _serviceID;
}

void UNIX_NetworkPolicyService::setServiceID(String &value)
{
	_serviceID = value;
}

Boolean UNIX_NetworkPolicyService::getServiceIDType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVICE_ID_TYPE, getServiceIDType());
	return true;
}

Uint16 UNIX_NetworkPolicyService::getServiceIDType() const
{
	return _serviceIDType;
}

void UNIX_NetworkPolicyService::setServiceIDType(Uint16 &value)
{
	_serviceIDType = value;
}


void UNIX_NetworkPolicyService::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("NetworkPolicyService");
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
	_creationClassName = String("UNIX_NetworkPolicyService");
	_primaryOwnerName = String ("");
	_primaryOwnerContact = String ("");
	_startMode = String ("");
	_started = Boolean(false);
	_loSID = String ("");
	_loSOrgID = String ("");
	_serviceType = Uint16(0);
	_otherServiceTypeDescription = String ("");
	_serviceID = String ("");
	_serviceIDType = Uint16(0);

}

Boolean UNIX_NetworkPolicyService::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "ServiceType"))
			{
				Uint16 serviceTypeValue;
				property.getValue().get(serviceTypeValue);
				setServiceType(serviceTypeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherServiceTypeDescription"))
			{
				String otherServiceTypeDescriptionValue;
				property.getValue().get(otherServiceTypeDescriptionValue);
				setOtherServiceTypeDescription(otherServiceTypeDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "ServiceID"))
			{
				String serviceIDValue;
				property.getValue().get(serviceIDValue);
				setServiceID(serviceIDValue);
			}
			else if (String::equal(property.getName().getString(), "ServiceIDType"))
			{
				Uint16 serviceIDTypeValue;
				property.getValue().get(serviceIDTypeValue);
				setServiceIDType(serviceIDTypeValue);
			}
	}
	return true;
}

Uint32 UNIX_NetworkPolicyService::invokeRequestStateChange(
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

Uint32 UNIX_NetworkPolicyService::invokeStartService()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method StartService */
	
	
	
	return returnValue;
}

Uint32 UNIX_NetworkPolicyService::invokeStopService()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method StopService */
	
	
	
	return returnValue;
}

Uint32 UNIX_NetworkPolicyService::invokeChangeAffectedElementsAssignedSequence(
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


Boolean UNIX_NetworkPolicyService::initialize()
{
	return false;
}

Boolean UNIX_NetworkPolicyService::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("NetworkPolicyService");
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
	_creationClassName = String("UNIX_NetworkPolicyService");
	_primaryOwnerName = String ("");
	_primaryOwnerContact = String ("");
	_startMode = String ("");
	_started = Boolean(false);
	_loSID = String ("");
	_loSOrgID = String ("");
	_serviceType = Uint16(0);
	_otherServiceTypeDescription = String ("");
	_serviceID = String ("");
	_serviceIDType = Uint16(0);
	
	return false;
}

Boolean UNIX_NetworkPolicyService::finalize()
{
	return false;
}

Boolean UNIX_NetworkPolicyService::loadByName(const String name)
{
	return false;
}

Boolean UNIX_NetworkPolicyService::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_NetworkPolicyService::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_NetworkPolicyService::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_NetworkPolicyService::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_NetworkPolicyService::validateInstance()
{
	return true;
}

