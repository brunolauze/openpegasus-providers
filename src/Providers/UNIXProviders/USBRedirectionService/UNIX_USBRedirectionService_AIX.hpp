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


UNIX_USBRedirectionService::UNIX_USBRedirectionService(void)
{
}

UNIX_USBRedirectionService::~UNIX_USBRedirectionService(void)
{
}

Boolean UNIX_USBRedirectionService::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_USBRedirectionService::getInstanceID() const
{
	return _instanceID;
}

void UNIX_USBRedirectionService::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_USBRedirectionService::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_USBRedirectionService::getCaption() const
{
	return _caption;
}

void UNIX_USBRedirectionService::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_USBRedirectionService::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_USBRedirectionService::getDescription() const
{
	return _description;
}

void UNIX_USBRedirectionService::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_USBRedirectionService::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_USBRedirectionService::getElementName() const
{
	return _elementName;
}

void UNIX_USBRedirectionService::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_USBRedirectionService::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_USBRedirectionService::getGeneration() const
{
	return _generation;
}

void UNIX_USBRedirectionService::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_USBRedirectionService::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_USBRedirectionService::getInstallDate() const
{
	return _installDate;
}

void UNIX_USBRedirectionService::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_USBRedirectionService::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_USBRedirectionService::getName() const
{
	return _name;
}

void UNIX_USBRedirectionService::setName(String &value)
{
	_name = value;
}

Boolean UNIX_USBRedirectionService::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_USBRedirectionService::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_USBRedirectionService::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_USBRedirectionService::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_USBRedirectionService::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_USBRedirectionService::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_USBRedirectionService::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_USBRedirectionService::getStatus() const
{
	return _status;
}

void UNIX_USBRedirectionService::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_USBRedirectionService::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_USBRedirectionService::getHealthState() const
{
	return _healthState;
}

void UNIX_USBRedirectionService::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_USBRedirectionService::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_USBRedirectionService::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_USBRedirectionService::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_USBRedirectionService::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_USBRedirectionService::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_USBRedirectionService::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_USBRedirectionService::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_USBRedirectionService::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_USBRedirectionService::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_USBRedirectionService::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_USBRedirectionService::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_USBRedirectionService::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_USBRedirectionService::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_USBRedirectionService::getEnabledState() const
{
	return _enabledState;
}

void UNIX_USBRedirectionService::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_USBRedirectionService::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_USBRedirectionService::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_USBRedirectionService::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_USBRedirectionService::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_USBRedirectionService::getRequestedState() const
{
	return _requestedState;
}

void UNIX_USBRedirectionService::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_USBRedirectionService::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_USBRedirectionService::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_USBRedirectionService::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_USBRedirectionService::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_USBRedirectionService::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_USBRedirectionService::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_USBRedirectionService::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_USBRedirectionService::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_USBRedirectionService::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_USBRedirectionService::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_USBRedirectionService::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_USBRedirectionService::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_USBRedirectionService::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_USBRedirectionService::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_USBRedirectionService::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_USBRedirectionService::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_USBRedirectionService::getSystemName() const
{
	return _systemName;
}

void UNIX_USBRedirectionService::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_USBRedirectionService::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_USBRedirectionService::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_USBRedirectionService::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_USBRedirectionService::getPrimaryOwnerName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_NAME, getPrimaryOwnerName());
	return true;
}

String UNIX_USBRedirectionService::getPrimaryOwnerName() const
{
	return _primaryOwnerName;
}

void UNIX_USBRedirectionService::setPrimaryOwnerName(String &value)
{
	_primaryOwnerName = value;
}

Boolean UNIX_USBRedirectionService::getPrimaryOwnerContact(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_CONTACT, getPrimaryOwnerContact());
	return true;
}

String UNIX_USBRedirectionService::getPrimaryOwnerContact() const
{
	return _primaryOwnerContact;
}

void UNIX_USBRedirectionService::setPrimaryOwnerContact(String &value)
{
	_primaryOwnerContact = value;
}

Boolean UNIX_USBRedirectionService::getStartMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_MODE, getStartMode());
	return true;
}

String UNIX_USBRedirectionService::getStartMode() const
{
	return _startMode;
}

void UNIX_USBRedirectionService::setStartMode(String &value)
{
	_startMode = value;
}

Boolean UNIX_USBRedirectionService::getStarted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTED, getStarted());
	return true;
}

Boolean UNIX_USBRedirectionService::getStarted() const
{
	return _started;
}

void UNIX_USBRedirectionService::setStarted(Boolean &value)
{
	_started = value;
}

Boolean UNIX_USBRedirectionService::getLoSID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LO_S_ID, getLoSID());
	return true;
}

String UNIX_USBRedirectionService::getLoSID() const
{
	return _loSID;
}

void UNIX_USBRedirectionService::setLoSID(String &value)
{
	_loSID = value;
}

Boolean UNIX_USBRedirectionService::getLoSOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LO_S_ORG_ID, getLoSOrgID());
	return true;
}

String UNIX_USBRedirectionService::getLoSOrgID() const
{
	return _loSOrgID;
}

void UNIX_USBRedirectionService::setLoSOrgID(String &value)
{
	_loSOrgID = value;
}

Boolean UNIX_USBRedirectionService::getRedirectionServiceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REDIRECTION_SERVICE_TYPE, getRedirectionServiceType());
	return true;
}

Array<Uint16> UNIX_USBRedirectionService::getRedirectionServiceType() const
{
	return _redirectionServiceType;
}

void UNIX_USBRedirectionService::setRedirectionServiceType(Array<Uint16> &value)
{
	_redirectionServiceType = value;
}

Boolean UNIX_USBRedirectionService::getOtherRedirectionServiceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_REDIRECTION_SERVICE_TYPE, getOtherRedirectionServiceType());
	return true;
}

String UNIX_USBRedirectionService::getOtherRedirectionServiceType() const
{
	return _otherRedirectionServiceType;
}

void UNIX_USBRedirectionService::setOtherRedirectionServiceType(String &value)
{
	_otherRedirectionServiceType = value;
}

Boolean UNIX_USBRedirectionService::getMaxCurrentEnabledSAPs(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_CURRENT_ENABLED_SAPS, getMaxCurrentEnabledSAPs());
	return true;
}

Uint16 UNIX_USBRedirectionService::getMaxCurrentEnabledSAPs() const
{
	return _maxCurrentEnabledSAPs;
}

void UNIX_USBRedirectionService::setMaxCurrentEnabledSAPs(Uint16 &value)
{
	_maxCurrentEnabledSAPs = value;
}

Boolean UNIX_USBRedirectionService::getSharingMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SHARING_MODE, getSharingMode());
	return true;
}

Uint16 UNIX_USBRedirectionService::getSharingMode() const
{
	return _sharingMode;
}

void UNIX_USBRedirectionService::setSharingMode(Uint16 &value)
{
	_sharingMode = value;
}


void UNIX_USBRedirectionService::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("USBRedirectionService");
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
	_creationClassName = String("UNIX_USBRedirectionService");
	_primaryOwnerName = String ("");
	_primaryOwnerContact = String ("");
	_startMode = String ("");
	_started = Boolean(false);
	_loSID = String ("");
	_loSOrgID = String ("");
	_redirectionServiceType.clear();
	_otherRedirectionServiceType = String ("");
	_maxCurrentEnabledSAPs = Uint16(0);
	_sharingMode = Uint16(0);

}

Boolean UNIX_USBRedirectionService::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "RedirectionServiceType"))
			{
				Array<Uint16> redirectionServiceTypeValue;
				property.getValue().get(redirectionServiceTypeValue);
				setRedirectionServiceType(redirectionServiceTypeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherRedirectionServiceType"))
			{
				String otherRedirectionServiceTypeValue;
				property.getValue().get(otherRedirectionServiceTypeValue);
				setOtherRedirectionServiceType(otherRedirectionServiceTypeValue);
			}
			else if (String::equal(property.getName().getString(), "MaxCurrentEnabledSAPs"))
			{
				Uint16 maxCurrentEnabledSAPsValue;
				property.getValue().get(maxCurrentEnabledSAPsValue);
				setMaxCurrentEnabledSAPs(maxCurrentEnabledSAPsValue);
			}
			else if (String::equal(property.getName().getString(), "SharingMode"))
			{
				Uint16 sharingModeValue;
				property.getValue().get(sharingModeValue);
				setSharingMode(sharingModeValue);
			}
	}
	return true;
}

Uint32 UNIX_USBRedirectionService::invokeRequestStateChange(
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

Uint32 UNIX_USBRedirectionService::invokeStartService()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method StartService */
	
	
	
	return returnValue;
}

Uint32 UNIX_USBRedirectionService::invokeStopService()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method StopService */
	
	
	
	return returnValue;
}

Uint32 UNIX_USBRedirectionService::invokeChangeAffectedElementsAssignedSequence(
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

Uint32 UNIX_USBRedirectionService::invokeCreateRedirectionSAP(
		String &inNewUSBRedirectionSAP,
		Array<Uint16> &inNewSAPRequestedStatesSupported,
		CIMInstance &inUSBDevices,
		Boolean &inCreateDevices,
		Array<String> &inNewUSBDevices,
		CIMInstance &inRedirectedLogicalDevices,
		String &inNewRemoteServiceAccessPoint,
		CIMInstance &inSAP,
		CIMInstance &inJob
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_USBDevice inUSBDevicesObject;
	inUSBDevicesObject.loadInstance(inUSBDevices);
	
	UNIX_USBRedirectionSAP inSAPObject;
	inSAPObject.loadInstance(inSAP);
	
	UNIX_ConcreteJob inJobObject;
	inJobObject.loadInstance(inJob);
	
	/* Execute method CreateRedirectionSAP */
	
	
	
	return returnValue;
}

Uint32 UNIX_USBRedirectionService::invokeDeleteRedirectionSAP(
		CIMInstance &inSAP,
		Boolean &inDeleteUSBDevices,
		CIMInstance &inJob
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_USBRedirectionSAP inSAPObject;
	inSAPObject.loadInstance(inSAP);
	
	UNIX_ConcreteJob inJobObject;
	inJobObject.loadInstance(inJob);
	
	/* Execute method DeleteRedirectionSAP */
	
	
	
	return returnValue;
}

Uint32 UNIX_USBRedirectionService::invokeCreateUSBDevice(
		String &inNewUSBDevice,
		CIMInstance &inRedirectedLogicalDevice,
		CIMInstance &inUSBDevice,
		CIMInstance &inJob
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_USBDevice inUSBDeviceObject;
	inUSBDeviceObject.loadInstance(inUSBDevice);
	
	UNIX_ConcreteJob inJobObject;
	inJobObject.loadInstance(inJob);
	
	/* Execute method CreateUSBDevice */
	
	
	
	return returnValue;
}


Boolean UNIX_USBRedirectionService::initialize()
{
	return false;
}

Boolean UNIX_USBRedirectionService::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("USBRedirectionService");
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
	_creationClassName = String("UNIX_USBRedirectionService");
	_primaryOwnerName = String ("");
	_primaryOwnerContact = String ("");
	_startMode = String ("");
	_started = Boolean(false);
	_loSID = String ("");
	_loSOrgID = String ("");
	_redirectionServiceType.clear();
	_otherRedirectionServiceType = String ("");
	_maxCurrentEnabledSAPs = Uint16(0);
	_sharingMode = Uint16(0);
	
	return false;
}

Boolean UNIX_USBRedirectionService::finalize()
{
	return false;
}

Boolean UNIX_USBRedirectionService::loadByName(const String name)
{
	return false;
}

Boolean UNIX_USBRedirectionService::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_USBRedirectionService::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_USBRedirectionService::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_USBRedirectionService::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_USBRedirectionService::validateInstance()
{
	return true;
}

