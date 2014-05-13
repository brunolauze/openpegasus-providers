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


UNIX_ApplicationSystem::UNIX_ApplicationSystem(void)
{
}

UNIX_ApplicationSystem::~UNIX_ApplicationSystem(void)
{
}

Boolean UNIX_ApplicationSystem::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_ApplicationSystem::getInstanceID() const
{
	return _instanceID;
}

void UNIX_ApplicationSystem::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_ApplicationSystem::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_ApplicationSystem::getCaption() const
{
	return _caption;
}

void UNIX_ApplicationSystem::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_ApplicationSystem::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_ApplicationSystem::getDescription() const
{
	return _description;
}

void UNIX_ApplicationSystem::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_ApplicationSystem::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_ApplicationSystem::getElementName() const
{
	return _elementName;
}

void UNIX_ApplicationSystem::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_ApplicationSystem::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_ApplicationSystem::getGeneration() const
{
	return _generation;
}

void UNIX_ApplicationSystem::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_ApplicationSystem::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_ApplicationSystem::getInstallDate() const
{
	return _installDate;
}

void UNIX_ApplicationSystem::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_ApplicationSystem::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_ApplicationSystem::getName() const
{
	return _name;
}

void UNIX_ApplicationSystem::setName(String &value)
{
	_name = value;
}

Boolean UNIX_ApplicationSystem::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_ApplicationSystem::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_ApplicationSystem::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_ApplicationSystem::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_ApplicationSystem::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_ApplicationSystem::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_ApplicationSystem::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_ApplicationSystem::getStatus() const
{
	return _status;
}

void UNIX_ApplicationSystem::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_ApplicationSystem::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_ApplicationSystem::getHealthState() const
{
	return _healthState;
}

void UNIX_ApplicationSystem::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_ApplicationSystem::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_ApplicationSystem::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_ApplicationSystem::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_ApplicationSystem::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_ApplicationSystem::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_ApplicationSystem::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_ApplicationSystem::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_ApplicationSystem::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_ApplicationSystem::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_ApplicationSystem::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_ApplicationSystem::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_ApplicationSystem::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_ApplicationSystem::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_ApplicationSystem::getEnabledState() const
{
	return _enabledState;
}

void UNIX_ApplicationSystem::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_ApplicationSystem::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_ApplicationSystem::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_ApplicationSystem::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_ApplicationSystem::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_ApplicationSystem::getRequestedState() const
{
	return _requestedState;
}

void UNIX_ApplicationSystem::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_ApplicationSystem::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_ApplicationSystem::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_ApplicationSystem::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_ApplicationSystem::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_ApplicationSystem::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_ApplicationSystem::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_ApplicationSystem::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_ApplicationSystem::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_ApplicationSystem::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_ApplicationSystem::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_ApplicationSystem::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_ApplicationSystem::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_ApplicationSystem::getAllocationState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOCATION_STATE, getAllocationState());
	return true;
}

String UNIX_ApplicationSystem::getAllocationState() const
{
	return _allocationState;
}

void UNIX_ApplicationSystem::setAllocationState(String &value)
{
	_allocationState = value;
}

Boolean UNIX_ApplicationSystem::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_ApplicationSystem::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_ApplicationSystem::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_ApplicationSystem::getNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_FORMAT, getNameFormat());
	return true;
}

String UNIX_ApplicationSystem::getNameFormat() const
{
	return _nameFormat;
}

void UNIX_ApplicationSystem::setNameFormat(String &value)
{
	_nameFormat = value;
}

Boolean UNIX_ApplicationSystem::getPrimaryOwnerName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_NAME, getPrimaryOwnerName());
	return true;
}

String UNIX_ApplicationSystem::getPrimaryOwnerName() const
{
	return _primaryOwnerName;
}

void UNIX_ApplicationSystem::setPrimaryOwnerName(String &value)
{
	_primaryOwnerName = value;
}

Boolean UNIX_ApplicationSystem::getPrimaryOwnerContact(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_CONTACT, getPrimaryOwnerContact());
	return true;
}

String UNIX_ApplicationSystem::getPrimaryOwnerContact() const
{
	return _primaryOwnerContact;
}

void UNIX_ApplicationSystem::setPrimaryOwnerContact(String &value)
{
	_primaryOwnerContact = value;
}

Boolean UNIX_ApplicationSystem::getRoles(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ROLES, getRoles());
	return true;
}

Array<String> UNIX_ApplicationSystem::getRoles() const
{
	return _roles;
}

void UNIX_ApplicationSystem::setRoles(Array<String> &value)
{
	_roles = value;
}

Boolean UNIX_ApplicationSystem::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_ApplicationSystem::getOtherIdentifyingInfo() const
{
	return _otherIdentifyingInfo;
}

void UNIX_ApplicationSystem::setOtherIdentifyingInfo(Array<String> &value)
{
	_otherIdentifyingInfo = value;
}

Boolean UNIX_ApplicationSystem::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_ApplicationSystem::getIdentifyingDescriptions() const
{
	return _identifyingDescriptions;
}

void UNIX_ApplicationSystem::setIdentifyingDescriptions(Array<String> &value)
{
	_identifyingDescriptions = value;
}

Boolean UNIX_ApplicationSystem::getDistribution(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DISTRIBUTION, getDistribution());
	return true;
}

Uint16 UNIX_ApplicationSystem::getDistribution() const
{
	return _distribution;
}

void UNIX_ApplicationSystem::setDistribution(Uint16 &value)
{
	_distribution = value;
}

Boolean UNIX_ApplicationSystem::getStartupTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTUP_TIME, getStartupTime());
	return true;
}

CIMDateTime UNIX_ApplicationSystem::getStartupTime() const
{
	return _startupTime;
}

void UNIX_ApplicationSystem::setStartupTime(CIMDateTime &value)
{
	_startupTime = value;
}

Boolean UNIX_ApplicationSystem::getServingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVING_STATUS, getServingStatus());
	return true;
}

Uint16 UNIX_ApplicationSystem::getServingStatus() const
{
	return _servingStatus;
}

void UNIX_ApplicationSystem::setServingStatus(Uint16 &value)
{
	_servingStatus = value;
}

Boolean UNIX_ApplicationSystem::getLastServingStatusUpdate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_SERVING_STATUS_UPDATE, getLastServingStatusUpdate());
	return true;
}

CIMDateTime UNIX_ApplicationSystem::getLastServingStatusUpdate() const
{
	return _lastServingStatusUpdate;
}

void UNIX_ApplicationSystem::setLastServingStatusUpdate(CIMDateTime &value)
{
	_lastServingStatusUpdate = value;
}


void UNIX_ApplicationSystem::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("ApplicationSystem");
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
	_creationClassName = String("UNIX_ApplicationSystem");
	_nameFormat = String ("");
	_primaryOwnerName = String ("");
	_primaryOwnerContact = String ("");
	_roles.clear();
	_otherIdentifyingInfo.clear();
	_identifyingDescriptions.clear();
	_distribution = Uint16(0);
	_startupTime = CIMHelper::getCurrentTime();
	_servingStatus = Uint16(0);
	_lastServingStatusUpdate = CIMHelper::getCurrentTime();

}

Boolean UNIX_ApplicationSystem::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "Distribution"))
			{
				Uint16 distributionValue;
				property.getValue().get(distributionValue);
				setDistribution(distributionValue);
			}
			else if (String::equal(property.getName().getString(), "StartupTime"))
			{
				CIMDateTime startupTimeValue;
				property.getValue().get(startupTimeValue);
				setStartupTime(startupTimeValue);
			}
			else if (String::equal(property.getName().getString(), "ServingStatus"))
			{
				Uint16 servingStatusValue;
				property.getValue().get(servingStatusValue);
				setServingStatus(servingStatusValue);
			}
			else if (String::equal(property.getName().getString(), "LastServingStatusUpdate"))
			{
				CIMDateTime lastServingStatusUpdateValue;
				property.getValue().get(lastServingStatusUpdateValue);
				setLastServingStatusUpdate(lastServingStatusUpdateValue);
			}
	}
	return true;
}

Uint32 UNIX_ApplicationSystem::invokeRequestStateChange(
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

Uint16 UNIX_ApplicationSystem::invokeStartApplication()
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method StartApplication */
	
	
	
	return returnValue;
}

Uint16 UNIX_ApplicationSystem::invokeStopApplication()
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method StopApplication */
	
	
	
	return returnValue;
}


Boolean UNIX_ApplicationSystem::initialize()
{
	return false;
}

Boolean UNIX_ApplicationSystem::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("ApplicationSystem");
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
	_creationClassName = String("UNIX_ApplicationSystem");
	_nameFormat = String ("");
	_primaryOwnerName = String ("");
	_primaryOwnerContact = String ("");
	_roles.clear();
	_otherIdentifyingInfo.clear();
	_identifyingDescriptions.clear();
	_distribution = Uint16(0);
	_startupTime = CIMHelper::getCurrentTime();
	_servingStatus = Uint16(0);
	_lastServingStatusUpdate = CIMHelper::getCurrentTime();
	
	return false;
}

Boolean UNIX_ApplicationSystem::finalize()
{
	return false;
}

Boolean UNIX_ApplicationSystem::loadByName(const String name)
{
	return false;
}

Boolean UNIX_ApplicationSystem::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_ApplicationSystem::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ApplicationSystem::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ApplicationSystem::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ApplicationSystem::validateInstance()
{
	return true;
}

