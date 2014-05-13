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


UNIX_StorageLibrary::UNIX_StorageLibrary(void)
{
}

UNIX_StorageLibrary::~UNIX_StorageLibrary(void)
{
}

Boolean UNIX_StorageLibrary::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_StorageLibrary::getInstanceID() const
{
	return _instanceID;
}

void UNIX_StorageLibrary::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_StorageLibrary::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_StorageLibrary::getCaption() const
{
	return _caption;
}

void UNIX_StorageLibrary::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_StorageLibrary::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_StorageLibrary::getDescription() const
{
	return _description;
}

void UNIX_StorageLibrary::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_StorageLibrary::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_StorageLibrary::getElementName() const
{
	return _elementName;
}

void UNIX_StorageLibrary::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_StorageLibrary::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_StorageLibrary::getGeneration() const
{
	return _generation;
}

void UNIX_StorageLibrary::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_StorageLibrary::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_StorageLibrary::getInstallDate() const
{
	return _installDate;
}

void UNIX_StorageLibrary::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_StorageLibrary::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_StorageLibrary::getName() const
{
	return _name;
}

void UNIX_StorageLibrary::setName(String &value)
{
	_name = value;
}

Boolean UNIX_StorageLibrary::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_StorageLibrary::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_StorageLibrary::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_StorageLibrary::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_StorageLibrary::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_StorageLibrary::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_StorageLibrary::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_StorageLibrary::getStatus() const
{
	return _status;
}

void UNIX_StorageLibrary::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_StorageLibrary::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_StorageLibrary::getHealthState() const
{
	return _healthState;
}

void UNIX_StorageLibrary::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_StorageLibrary::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_StorageLibrary::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_StorageLibrary::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_StorageLibrary::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_StorageLibrary::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_StorageLibrary::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_StorageLibrary::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_StorageLibrary::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_StorageLibrary::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_StorageLibrary::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_StorageLibrary::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_StorageLibrary::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_StorageLibrary::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_StorageLibrary::getEnabledState() const
{
	return _enabledState;
}

void UNIX_StorageLibrary::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_StorageLibrary::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_StorageLibrary::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_StorageLibrary::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_StorageLibrary::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_StorageLibrary::getRequestedState() const
{
	return _requestedState;
}

void UNIX_StorageLibrary::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_StorageLibrary::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_StorageLibrary::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_StorageLibrary::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_StorageLibrary::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_StorageLibrary::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_StorageLibrary::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_StorageLibrary::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_StorageLibrary::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_StorageLibrary::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_StorageLibrary::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_StorageLibrary::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_StorageLibrary::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_StorageLibrary::getAllocationState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOCATION_STATE, getAllocationState());
	return true;
}

String UNIX_StorageLibrary::getAllocationState() const
{
	return _allocationState;
}

void UNIX_StorageLibrary::setAllocationState(String &value)
{
	_allocationState = value;
}

Boolean UNIX_StorageLibrary::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_StorageLibrary::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_StorageLibrary::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_StorageLibrary::getNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_FORMAT, getNameFormat());
	return true;
}

String UNIX_StorageLibrary::getNameFormat() const
{
	return _nameFormat;
}

void UNIX_StorageLibrary::setNameFormat(String &value)
{
	_nameFormat = value;
}

Boolean UNIX_StorageLibrary::getPrimaryOwnerName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_NAME, getPrimaryOwnerName());
	return true;
}

String UNIX_StorageLibrary::getPrimaryOwnerName() const
{
	return _primaryOwnerName;
}

void UNIX_StorageLibrary::setPrimaryOwnerName(String &value)
{
	_primaryOwnerName = value;
}

Boolean UNIX_StorageLibrary::getPrimaryOwnerContact(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_CONTACT, getPrimaryOwnerContact());
	return true;
}

String UNIX_StorageLibrary::getPrimaryOwnerContact() const
{
	return _primaryOwnerContact;
}

void UNIX_StorageLibrary::setPrimaryOwnerContact(String &value)
{
	_primaryOwnerContact = value;
}

Boolean UNIX_StorageLibrary::getRoles(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ROLES, getRoles());
	return true;
}

Array<String> UNIX_StorageLibrary::getRoles() const
{
	return _roles;
}

void UNIX_StorageLibrary::setRoles(Array<String> &value)
{
	_roles = value;
}

Boolean UNIX_StorageLibrary::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_StorageLibrary::getOtherIdentifyingInfo() const
{
	return _otherIdentifyingInfo;
}

void UNIX_StorageLibrary::setOtherIdentifyingInfo(Array<String> &value)
{
	_otherIdentifyingInfo = value;
}

Boolean UNIX_StorageLibrary::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_StorageLibrary::getIdentifyingDescriptions() const
{
	return _identifyingDescriptions;
}

void UNIX_StorageLibrary::setIdentifyingDescriptions(Array<String> &value)
{
	_identifyingDescriptions = value;
}

Boolean UNIX_StorageLibrary::getCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITIES, getCapabilities());
	return true;
}

Array<Uint16> UNIX_StorageLibrary::getCapabilities() const
{
	return _capabilities;
}

void UNIX_StorageLibrary::setCapabilities(Array<Uint16> &value)
{
	_capabilities = value;
}

Boolean UNIX_StorageLibrary::getOverfilled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OVERFILLED, getOverfilled());
	return true;
}

Boolean UNIX_StorageLibrary::getOverfilled() const
{
	return _overfilled;
}

void UNIX_StorageLibrary::setOverfilled(Boolean &value)
{
	_overfilled = value;
}

Boolean UNIX_StorageLibrary::getAuditNeeded(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUDIT_NEEDED, getAuditNeeded());
	return true;
}

Boolean UNIX_StorageLibrary::getAuditNeeded() const
{
	return _auditNeeded;
}

void UNIX_StorageLibrary::setAuditNeeded(Boolean &value)
{
	_auditNeeded = value;
}

Boolean UNIX_StorageLibrary::getAuditInProgress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUDIT_IN_PROGRESS, getAuditInProgress());
	return true;
}

Boolean UNIX_StorageLibrary::getAuditInProgress() const
{
	return _auditInProgress;
}

void UNIX_StorageLibrary::setAuditInProgress(Boolean &value)
{
	_auditInProgress = value;
}

Boolean UNIX_StorageLibrary::getMaxAuditTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_AUDIT_TIME, getMaxAuditTime());
	return true;
}

Uint64 UNIX_StorageLibrary::getMaxAuditTime() const
{
	return _maxAuditTime;
}

void UNIX_StorageLibrary::setMaxAuditTime(Uint64 &value)
{
	_maxAuditTime = value;
}

Boolean UNIX_StorageLibrary::getAutomated(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTOMATED, getAutomated());
	return true;
}

Boolean UNIX_StorageLibrary::getAutomated() const
{
	return _automated;
}

void UNIX_StorageLibrary::setAutomated(Boolean &value)
{
	_automated = value;
}

Boolean UNIX_StorageLibrary::getRoboticsEnabled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ROBOTICS_ENABLED, getRoboticsEnabled());
	return true;
}

Boolean UNIX_StorageLibrary::getRoboticsEnabled() const
{
	return _roboticsEnabled;
}

void UNIX_StorageLibrary::setRoboticsEnabled(Boolean &value)
{
	_roboticsEnabled = value;
}


void UNIX_StorageLibrary::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("StorageLibrary");
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
	_allocationState = String ("");
	_creationClassName = String("UNIX_StorageLibrary");
	_nameFormat = String ("");
	_primaryOwnerName = String ("");
	_primaryOwnerContact = String ("");
	_roles.clear();
	_otherIdentifyingInfo.clear();
	_identifyingDescriptions.clear();
	_capabilities.clear();
	_overfilled = Boolean(false);
	_auditNeeded = Boolean(false);
	_auditInProgress = Boolean(false);
	_maxAuditTime = Uint64(0);
	_automated = Boolean(false);
	_roboticsEnabled = Boolean(false);

}

Boolean UNIX_StorageLibrary::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "AllocationState"))
			{
				String allocationStateValue;
				property.getValue().get(allocationStateValue);
				setAllocationState(allocationStateValue);
			}
			else if (String::equal(property.getName().getString(), "CreationClassName"))
			{
				String creationClassNameValue;
				property.getValue().get(creationClassNameValue);
				setCreationClassName(creationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "NameFormat"))
			{
				String nameFormatValue;
				property.getValue().get(nameFormatValue);
				setNameFormat(nameFormatValue);
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
			else if (String::equal(property.getName().getString(), "Roles"))
			{
				Array<String> rolesValue;
				property.getValue().get(rolesValue);
				setRoles(rolesValue);
			}
			else if (String::equal(property.getName().getString(), "OtherIdentifyingInfo"))
			{
				Array<String> otherIdentifyingInfoValue;
				property.getValue().get(otherIdentifyingInfoValue);
				setOtherIdentifyingInfo(otherIdentifyingInfoValue);
			}
			else if (String::equal(property.getName().getString(), "IdentifyingDescriptions"))
			{
				Array<String> identifyingDescriptionsValue;
				property.getValue().get(identifyingDescriptionsValue);
				setIdentifyingDescriptions(identifyingDescriptionsValue);
			}
			else if (String::equal(property.getName().getString(), "Capabilities"))
			{
				Array<Uint16> capabilitiesValue;
				property.getValue().get(capabilitiesValue);
				setCapabilities(capabilitiesValue);
			}
			else if (String::equal(property.getName().getString(), "Overfilled"))
			{
				Boolean overfilledValue;
				property.getValue().get(overfilledValue);
				setOverfilled(overfilledValue);
			}
			else if (String::equal(property.getName().getString(), "AuditNeeded"))
			{
				Boolean auditNeededValue;
				property.getValue().get(auditNeededValue);
				setAuditNeeded(auditNeededValue);
			}
			else if (String::equal(property.getName().getString(), "AuditInProgress"))
			{
				Boolean auditInProgressValue;
				property.getValue().get(auditInProgressValue);
				setAuditInProgress(auditInProgressValue);
			}
			else if (String::equal(property.getName().getString(), "MaxAuditTime"))
			{
				Uint64 maxAuditTimeValue;
				property.getValue().get(maxAuditTimeValue);
				setMaxAuditTime(maxAuditTimeValue);
			}
			else if (String::equal(property.getName().getString(), "Automated"))
			{
				Boolean automatedValue;
				property.getValue().get(automatedValue);
				setAutomated(automatedValue);
			}
			else if (String::equal(property.getName().getString(), "RoboticsEnabled"))
			{
				Boolean roboticsEnabledValue;
				property.getValue().get(roboticsEnabledValue);
				setRoboticsEnabled(roboticsEnabledValue);
			}
	}
	return true;
}

Uint32 UNIX_StorageLibrary::invokeRequestStateChange(
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

Uint32 UNIX_StorageLibrary::invokeEnableRobotics(
		Boolean &inEnable
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method EnableRobotics */
	
	
	
	return returnValue;
}


Boolean UNIX_StorageLibrary::initialize()
{
	return false;
}

Boolean UNIX_StorageLibrary::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("StorageLibrary");
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
	_allocationState = String ("");
	_creationClassName = String("UNIX_StorageLibrary");
	_nameFormat = String ("");
	_primaryOwnerName = String ("");
	_primaryOwnerContact = String ("");
	_roles.clear();
	_otherIdentifyingInfo.clear();
	_identifyingDescriptions.clear();
	_capabilities.clear();
	_overfilled = Boolean(false);
	_auditNeeded = Boolean(false);
	_auditInProgress = Boolean(false);
	_maxAuditTime = Uint64(0);
	_automated = Boolean(false);
	_roboticsEnabled = Boolean(false);
	
	return false;
}

Boolean UNIX_StorageLibrary::finalize()
{
	return false;
}

Boolean UNIX_StorageLibrary::loadByName(const String name)
{
	return false;
}

Boolean UNIX_StorageLibrary::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String creationClassNameKey;
	String nameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getCreationClassName(), creationClassNameKey)) && 
			(String::equalNoCase(getName(), nameKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_StorageLibrary::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StorageLibrary::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StorageLibrary::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StorageLibrary::validateInstance()
{
	return true;
}

