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


UNIX_ControllerConfigurationService::UNIX_ControllerConfigurationService(void)
{
}

UNIX_ControllerConfigurationService::~UNIX_ControllerConfigurationService(void)
{
}

Boolean UNIX_ControllerConfigurationService::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_ControllerConfigurationService::getInstanceID() const
{
	return _instanceID;
}

void UNIX_ControllerConfigurationService::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_ControllerConfigurationService::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_ControllerConfigurationService::getCaption() const
{
	return _caption;
}

void UNIX_ControllerConfigurationService::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_ControllerConfigurationService::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_ControllerConfigurationService::getDescription() const
{
	return _description;
}

void UNIX_ControllerConfigurationService::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_ControllerConfigurationService::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_ControllerConfigurationService::getElementName() const
{
	return _elementName;
}

void UNIX_ControllerConfigurationService::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_ControllerConfigurationService::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_ControllerConfigurationService::getGeneration() const
{
	return _generation;
}

void UNIX_ControllerConfigurationService::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_ControllerConfigurationService::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_ControllerConfigurationService::getInstallDate() const
{
	return _installDate;
}

void UNIX_ControllerConfigurationService::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_ControllerConfigurationService::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_ControllerConfigurationService::getName() const
{
	return _name;
}

void UNIX_ControllerConfigurationService::setName(String &value)
{
	_name = value;
}

Boolean UNIX_ControllerConfigurationService::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_ControllerConfigurationService::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_ControllerConfigurationService::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_ControllerConfigurationService::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_ControllerConfigurationService::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_ControllerConfigurationService::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_ControllerConfigurationService::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_ControllerConfigurationService::getStatus() const
{
	return _status;
}

void UNIX_ControllerConfigurationService::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_ControllerConfigurationService::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_ControllerConfigurationService::getHealthState() const
{
	return _healthState;
}

void UNIX_ControllerConfigurationService::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_ControllerConfigurationService::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_ControllerConfigurationService::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_ControllerConfigurationService::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_ControllerConfigurationService::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_ControllerConfigurationService::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_ControllerConfigurationService::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_ControllerConfigurationService::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_ControllerConfigurationService::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_ControllerConfigurationService::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_ControllerConfigurationService::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_ControllerConfigurationService::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_ControllerConfigurationService::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_ControllerConfigurationService::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_ControllerConfigurationService::getEnabledState() const
{
	return _enabledState;
}

void UNIX_ControllerConfigurationService::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_ControllerConfigurationService::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_ControllerConfigurationService::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_ControllerConfigurationService::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_ControllerConfigurationService::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_ControllerConfigurationService::getRequestedState() const
{
	return _requestedState;
}

void UNIX_ControllerConfigurationService::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_ControllerConfigurationService::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_ControllerConfigurationService::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_ControllerConfigurationService::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_ControllerConfigurationService::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_ControllerConfigurationService::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_ControllerConfigurationService::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_ControllerConfigurationService::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_ControllerConfigurationService::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_ControllerConfigurationService::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_ControllerConfigurationService::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_ControllerConfigurationService::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_ControllerConfigurationService::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_ControllerConfigurationService::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_ControllerConfigurationService::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_ControllerConfigurationService::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_ControllerConfigurationService::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_ControllerConfigurationService::getSystemName() const
{
	return _systemName;
}

void UNIX_ControllerConfigurationService::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_ControllerConfigurationService::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_ControllerConfigurationService::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_ControllerConfigurationService::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_ControllerConfigurationService::getPrimaryOwnerName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_NAME, getPrimaryOwnerName());
	return true;
}

String UNIX_ControllerConfigurationService::getPrimaryOwnerName() const
{
	return _primaryOwnerName;
}

void UNIX_ControllerConfigurationService::setPrimaryOwnerName(String &value)
{
	_primaryOwnerName = value;
}

Boolean UNIX_ControllerConfigurationService::getPrimaryOwnerContact(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_CONTACT, getPrimaryOwnerContact());
	return true;
}

String UNIX_ControllerConfigurationService::getPrimaryOwnerContact() const
{
	return _primaryOwnerContact;
}

void UNIX_ControllerConfigurationService::setPrimaryOwnerContact(String &value)
{
	_primaryOwnerContact = value;
}

Boolean UNIX_ControllerConfigurationService::getStartMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_MODE, getStartMode());
	return true;
}

String UNIX_ControllerConfigurationService::getStartMode() const
{
	return _startMode;
}

void UNIX_ControllerConfigurationService::setStartMode(String &value)
{
	_startMode = value;
}

Boolean UNIX_ControllerConfigurationService::getStarted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTED, getStarted());
	return true;
}

Boolean UNIX_ControllerConfigurationService::getStarted() const
{
	return _started;
}

void UNIX_ControllerConfigurationService::setStarted(Boolean &value)
{
	_started = value;
}

Boolean UNIX_ControllerConfigurationService::getLoSID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LO_S_ID, getLoSID());
	return true;
}

String UNIX_ControllerConfigurationService::getLoSID() const
{
	return _loSID;
}

void UNIX_ControllerConfigurationService::setLoSID(String &value)
{
	_loSID = value;
}

Boolean UNIX_ControllerConfigurationService::getLoSOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LO_S_ORG_ID, getLoSOrgID());
	return true;
}

String UNIX_ControllerConfigurationService::getLoSOrgID() const
{
	return _loSOrgID;
}

void UNIX_ControllerConfigurationService::setLoSOrgID(String &value)
{
	_loSOrgID = value;
}


void UNIX_ControllerConfigurationService::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("ControllerConfigurationService");
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
	_creationClassName = String("UNIX_ControllerConfigurationService");
	_primaryOwnerName = String ("");
	_primaryOwnerContact = String ("");
	_startMode = String ("");
	_started = Boolean(false);
	_loSID = String ("");
	_loSOrgID = String ("");

}

Boolean UNIX_ControllerConfigurationService::loadInstance(const CIMInstance &instance)
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

Uint32 UNIX_ControllerConfigurationService::invokeRequestStateChange(
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

Uint32 UNIX_ControllerConfigurationService::invokeStartService()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method StartService */
	
	
	
	return returnValue;
}

Uint32 UNIX_ControllerConfigurationService::invokeStopService()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method StopService */
	
	
	
	return returnValue;
}

Uint32 UNIX_ControllerConfigurationService::invokeChangeAffectedElementsAssignedSequence(
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

Uint32 UNIX_ControllerConfigurationService::invokeCreateProtocolControllerWithPorts(
		String &inElementName,
		Array<String> &inPorts,
		Uint16 &inProtocol,
		CIMInstance &inPrivilege,
		CIMInstance &inIdentity,
		CIMInstance &inProtocolController
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_Privilege inPrivilegeObject;
	inPrivilegeObject.loadInstance(inPrivilege);
	
	UNIX_ProtocolController inProtocolControllerObject;
	inProtocolControllerObject.loadInstance(inProtocolController);
	
	/* Execute method CreateProtocolControllerWithPorts */
	
	
	
	return returnValue;
}

Uint32 UNIX_ControllerConfigurationService::invokeDeleteProtocolController(
		CIMInstance &inProtocolController,
		Boolean &inDeleteChildrenProtocolControllers,
		Boolean &inDeleteUnits
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ProtocolController inProtocolControllerObject;
	inProtocolControllerObject.loadInstance(inProtocolController);
	
	/* Execute method DeleteProtocolController */
	
	
	
	return returnValue;
}

Uint32 UNIX_ControllerConfigurationService::invokeAttachDevice(
		CIMInstance &inProtocolController,
		CIMInstance &inDevice,
		String &inDeviceNumber
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ProtocolController inProtocolControllerObject;
	inProtocolControllerObject.loadInstance(inProtocolController);
	
	/* Execute method AttachDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_ControllerConfigurationService::invokeDetachDevice(
		CIMInstance &inProtocolController,
		CIMInstance &inDevice
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ProtocolController inProtocolControllerObject;
	inProtocolControllerObject.loadInstance(inProtocolController);
	
	/* Execute method DetachDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_ControllerConfigurationService::invokeExposePaths(
		CIMInstance &inJob,
		Array<String> &inLUNames,
		Array<String> &inInitiatorPortIDs,
		Array<String> &inTargetPortIDs,
		Array<String> &inDeviceNumbers,
		Array<Uint16> &inDeviceAccesses,
		CIMInstance &inProtocolControllers
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ConcreteJob inJobObject;
	inJobObject.loadInstance(inJob);
	
	UNIX_SCSIProtocolController inProtocolControllersObject;
	inProtocolControllersObject.loadInstance(inProtocolControllers);
	
	/* Execute method ExposePaths */
	
	
	
	return returnValue;
}

Uint32 UNIX_ControllerConfigurationService::invokeHidePaths(
		CIMInstance &inJob,
		Array<String> &inLUNames,
		Array<String> &inInitiatorPortIDs,
		Array<String> &inTargetPortIDs,
		CIMInstance &inProtocolControllers
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ConcreteJob inJobObject;
	inJobObject.loadInstance(inJob);
	
	UNIX_SCSIProtocolController inProtocolControllersObject;
	inProtocolControllersObject.loadInstance(inProtocolControllers);
	
	/* Execute method HidePaths */
	
	
	
	return returnValue;
}

Uint32 UNIX_ControllerConfigurationService::invokeExposeDefaultLUs(
		CIMInstance &inJob,
		Array<String> &inLUNames,
		Array<String> &inTargetPortIDs,
		Array<String> &inDeviceNumbers,
		Array<Uint16> &inDeviceAccesses,
		CIMInstance &inProtocolControllers
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ConcreteJob inJobObject;
	inJobObject.loadInstance(inJob);
	
	UNIX_SCSIProtocolController inProtocolControllersObject;
	inProtocolControllersObject.loadInstance(inProtocolControllers);
	
	/* Execute method ExposeDefaultLUs */
	
	
	
	return returnValue;
}

Uint32 UNIX_ControllerConfigurationService::invokeHideDefaultLUs(
		CIMInstance &inJob,
		Array<String> &inLUNames,
		Array<String> &inTargetPortIDs,
		CIMInstance &inProtocolControllers
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ConcreteJob inJobObject;
	inJobObject.loadInstance(inJob);
	
	UNIX_SCSIProtocolController inProtocolControllersObject;
	inProtocolControllersObject.loadInstance(inProtocolControllers);
	
	/* Execute method HideDefaultLUs */
	
	
	
	return returnValue;
}

Uint32 UNIX_ControllerConfigurationService::invokeExposePathsWithNameAndHostType(
		CIMInstance &inJob,
		Array<String> &inLUNames,
		Array<String> &inInitiatorPortIDs,
		Array<String> &inTargetPortIDs,
		Array<String> &inDeviceNumbers,
		Array<Uint16> &inDeviceAccesses,
		String &inElementName,
		CIMInstance &inClientSettingData,
		CIMInstance &inProtocolControllers
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ConcreteJob inJobObject;
	inJobObject.loadInstance(inJob);
	
	UNIX_StorageClientSettingData inClientSettingDataObject;
	inClientSettingDataObject.loadInstance(inClientSettingData);
	
	UNIX_SCSIProtocolController inProtocolControllersObject;
	inProtocolControllersObject.loadInstance(inProtocolControllers);
	
	/* Execute method ExposePathsWithNameAndHostType */
	
	
	
	return returnValue;
}


Boolean UNIX_ControllerConfigurationService::initialize()
{
	return false;
}

Boolean UNIX_ControllerConfigurationService::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("ControllerConfigurationService");
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
	_creationClassName = String("UNIX_ControllerConfigurationService");
	_primaryOwnerName = String ("");
	_primaryOwnerContact = String ("");
	_startMode = String ("");
	_started = Boolean(false);
	_loSID = String ("");
	_loSOrgID = String ("");
	
	return false;
}

Boolean UNIX_ControllerConfigurationService::finalize()
{
	return false;
}

Boolean UNIX_ControllerConfigurationService::loadByName(const String name)
{
	return false;
}

Boolean UNIX_ControllerConfigurationService::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_ControllerConfigurationService::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ControllerConfigurationService::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ControllerConfigurationService::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ControllerConfigurationService::validateInstance()
{
	return true;
}

