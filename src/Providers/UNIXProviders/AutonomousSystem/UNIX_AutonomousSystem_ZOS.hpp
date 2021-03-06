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


UNIX_AutonomousSystem::UNIX_AutonomousSystem(void)
{
}

UNIX_AutonomousSystem::~UNIX_AutonomousSystem(void)
{
}

Boolean UNIX_AutonomousSystem::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_AutonomousSystem::getInstanceID() const
{
	return _instanceID;
}

void UNIX_AutonomousSystem::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_AutonomousSystem::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_AutonomousSystem::getCaption() const
{
	return _caption;
}

void UNIX_AutonomousSystem::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_AutonomousSystem::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_AutonomousSystem::getDescription() const
{
	return _description;
}

void UNIX_AutonomousSystem::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_AutonomousSystem::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_AutonomousSystem::getElementName() const
{
	return _elementName;
}

void UNIX_AutonomousSystem::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_AutonomousSystem::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_AutonomousSystem::getGeneration() const
{
	return _generation;
}

void UNIX_AutonomousSystem::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_AutonomousSystem::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_AutonomousSystem::getInstallDate() const
{
	return _installDate;
}

void UNIX_AutonomousSystem::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_AutonomousSystem::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_AutonomousSystem::getName() const
{
	return _name;
}

void UNIX_AutonomousSystem::setName(String &value)
{
	_name = value;
}

Boolean UNIX_AutonomousSystem::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_AutonomousSystem::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_AutonomousSystem::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_AutonomousSystem::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_AutonomousSystem::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_AutonomousSystem::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_AutonomousSystem::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_AutonomousSystem::getStatus() const
{
	return _status;
}

void UNIX_AutonomousSystem::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_AutonomousSystem::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_AutonomousSystem::getHealthState() const
{
	return _healthState;
}

void UNIX_AutonomousSystem::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_AutonomousSystem::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_AutonomousSystem::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_AutonomousSystem::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_AutonomousSystem::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_AutonomousSystem::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_AutonomousSystem::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_AutonomousSystem::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_AutonomousSystem::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_AutonomousSystem::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_AutonomousSystem::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_AutonomousSystem::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_AutonomousSystem::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_AutonomousSystem::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_AutonomousSystem::getEnabledState() const
{
	return _enabledState;
}

void UNIX_AutonomousSystem::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_AutonomousSystem::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_AutonomousSystem::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_AutonomousSystem::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_AutonomousSystem::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_AutonomousSystem::getRequestedState() const
{
	return _requestedState;
}

void UNIX_AutonomousSystem::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_AutonomousSystem::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_AutonomousSystem::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_AutonomousSystem::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_AutonomousSystem::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_AutonomousSystem::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_AutonomousSystem::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_AutonomousSystem::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_AutonomousSystem::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_AutonomousSystem::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_AutonomousSystem::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_AutonomousSystem::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_AutonomousSystem::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_AutonomousSystem::getAllocationState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOCATION_STATE, getAllocationState());
	return true;
}

String UNIX_AutonomousSystem::getAllocationState() const
{
	return _allocationState;
}

void UNIX_AutonomousSystem::setAllocationState(String &value)
{
	_allocationState = value;
}

Boolean UNIX_AutonomousSystem::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_AutonomousSystem::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_AutonomousSystem::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_AutonomousSystem::getNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_FORMAT, getNameFormat());
	return true;
}

String UNIX_AutonomousSystem::getNameFormat() const
{
	return _nameFormat;
}

void UNIX_AutonomousSystem::setNameFormat(String &value)
{
	_nameFormat = value;
}

Boolean UNIX_AutonomousSystem::getPrimaryOwnerName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_NAME, getPrimaryOwnerName());
	return true;
}

String UNIX_AutonomousSystem::getPrimaryOwnerName() const
{
	return _primaryOwnerName;
}

void UNIX_AutonomousSystem::setPrimaryOwnerName(String &value)
{
	_primaryOwnerName = value;
}

Boolean UNIX_AutonomousSystem::getPrimaryOwnerContact(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_CONTACT, getPrimaryOwnerContact());
	return true;
}

String UNIX_AutonomousSystem::getPrimaryOwnerContact() const
{
	return _primaryOwnerContact;
}

void UNIX_AutonomousSystem::setPrimaryOwnerContact(String &value)
{
	_primaryOwnerContact = value;
}

Boolean UNIX_AutonomousSystem::getRoles(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ROLES, getRoles());
	return true;
}

Array<String> UNIX_AutonomousSystem::getRoles() const
{
	return _roles;
}

void UNIX_AutonomousSystem::setRoles(Array<String> &value)
{
	_roles = value;
}

Boolean UNIX_AutonomousSystem::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_AutonomousSystem::getOtherIdentifyingInfo() const
{
	return _otherIdentifyingInfo;
}

void UNIX_AutonomousSystem::setOtherIdentifyingInfo(Array<String> &value)
{
	_otherIdentifyingInfo = value;
}

Boolean UNIX_AutonomousSystem::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_AutonomousSystem::getIdentifyingDescriptions() const
{
	return _identifyingDescriptions;
}

void UNIX_AutonomousSystem::setIdentifyingDescriptions(Array<String> &value)
{
	_identifyingDescriptions = value;
}

Boolean UNIX_AutonomousSystem::getASNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_A_S_NUMBER, getASNumber());
	return true;
}

Uint16 UNIX_AutonomousSystem::getASNumber() const
{
	return _aSNumber;
}

void UNIX_AutonomousSystem::setASNumber(Uint16 &value)
{
	_aSNumber = value;
}

Boolean UNIX_AutonomousSystem::getIsSingleHomed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_SINGLE_HOMED, getIsSingleHomed());
	return true;
}

Boolean UNIX_AutonomousSystem::getIsSingleHomed() const
{
	return _isSingleHomed;
}

void UNIX_AutonomousSystem::setIsSingleHomed(Boolean &value)
{
	_isSingleHomed = value;
}

Boolean UNIX_AutonomousSystem::getIsTransit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_TRANSIT, getIsTransit());
	return true;
}

Boolean UNIX_AutonomousSystem::getIsTransit() const
{
	return _isTransit;
}

void UNIX_AutonomousSystem::setIsTransit(Boolean &value)
{
	_isTransit = value;
}

Boolean UNIX_AutonomousSystem::getRequireIGPSync(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUIRE_I_G_P_SYNC, getRequireIGPSync());
	return true;
}

Boolean UNIX_AutonomousSystem::getRequireIGPSync() const
{
	return _requireIGPSync;
}

void UNIX_AutonomousSystem::setRequireIGPSync(Boolean &value)
{
	_requireIGPSync = value;
}

Boolean UNIX_AutonomousSystem::getRoutingUpdateSource(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ROUTING_UPDATE_SOURCE, getRoutingUpdateSource());
	return true;
}

Uint16 UNIX_AutonomousSystem::getRoutingUpdateSource() const
{
	return _routingUpdateSource;
}

void UNIX_AutonomousSystem::setRoutingUpdateSource(Uint16 &value)
{
	_routingUpdateSource = value;
}

Boolean UNIX_AutonomousSystem::getAggregationType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AGGREGATION_TYPE, getAggregationType());
	return true;
}

Uint16 UNIX_AutonomousSystem::getAggregationType() const
{
	return _aggregationType;
}

void UNIX_AutonomousSystem::setAggregationType(Uint16 &value)
{
	_aggregationType = value;
}

Boolean UNIX_AutonomousSystem::getExtASNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXT_A_S_NUMBER, getExtASNumber());
	return true;
}

String UNIX_AutonomousSystem::getExtASNumber() const
{
	return _extASNumber;
}

void UNIX_AutonomousSystem::setExtASNumber(String &value)
{
	_extASNumber = value;
}


void UNIX_AutonomousSystem::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("AutonomousSystem");
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
	_creationClassName = String("UNIX_AutonomousSystem");
	_nameFormat = String ("");
	_primaryOwnerName = String ("");
	_primaryOwnerContact = String ("");
	_roles.clear();
	_otherIdentifyingInfo.clear();
	_identifyingDescriptions.clear();
	_aSNumber = Uint16(0);
	_isSingleHomed = Boolean(false);
	_isTransit = Boolean(false);
	_requireIGPSync = Boolean(false);
	_routingUpdateSource = Uint16(0);
	_aggregationType = Uint16(0);
	_extASNumber = String ("");

}

Boolean UNIX_AutonomousSystem::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "ASNumber"))
			{
				Uint16 aSNumberValue;
				property.getValue().get(aSNumberValue);
				setASNumber(aSNumberValue);
			}
			else if (String::equal(property.getName().getString(), "IsSingleHomed"))
			{
				Boolean isSingleHomedValue;
				property.getValue().get(isSingleHomedValue);
				setIsSingleHomed(isSingleHomedValue);
			}
			else if (String::equal(property.getName().getString(), "IsTransit"))
			{
				Boolean isTransitValue;
				property.getValue().get(isTransitValue);
				setIsTransit(isTransitValue);
			}
			else if (String::equal(property.getName().getString(), "RequireIGPSync"))
			{
				Boolean requireIGPSyncValue;
				property.getValue().get(requireIGPSyncValue);
				setRequireIGPSync(requireIGPSyncValue);
			}
			else if (String::equal(property.getName().getString(), "RoutingUpdateSource"))
			{
				Uint16 routingUpdateSourceValue;
				property.getValue().get(routingUpdateSourceValue);
				setRoutingUpdateSource(routingUpdateSourceValue);
			}
			else if (String::equal(property.getName().getString(), "AggregationType"))
			{
				Uint16 aggregationTypeValue;
				property.getValue().get(aggregationTypeValue);
				setAggregationType(aggregationTypeValue);
			}
			else if (String::equal(property.getName().getString(), "ExtASNumber"))
			{
				String extASNumberValue;
				property.getValue().get(extASNumberValue);
				setExtASNumber(extASNumberValue);
			}
	}
	return true;
}

Uint32 UNIX_AutonomousSystem::invokeRequestStateChange(
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


Boolean UNIX_AutonomousSystem::initialize()
{
	return false;
}

Boolean UNIX_AutonomousSystem::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("AutonomousSystem");
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
	_creationClassName = String("UNIX_AutonomousSystem");
	_nameFormat = String ("");
	_primaryOwnerName = String ("");
	_primaryOwnerContact = String ("");
	_roles.clear();
	_otherIdentifyingInfo.clear();
	_identifyingDescriptions.clear();
	_aSNumber = Uint16(0);
	_isSingleHomed = Boolean(false);
	_isTransit = Boolean(false);
	_requireIGPSync = Boolean(false);
	_routingUpdateSource = Uint16(0);
	_aggregationType = Uint16(0);
	_extASNumber = String ("");
	
	return false;
}

Boolean UNIX_AutonomousSystem::finalize()
{
	return false;
}

Boolean UNIX_AutonomousSystem::loadByName(const String name)
{
	return false;
}

Boolean UNIX_AutonomousSystem::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_AutonomousSystem::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AutonomousSystem::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AutonomousSystem::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AutonomousSystem::validateInstance()
{
	return true;
}

