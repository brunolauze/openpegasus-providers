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


UNIX_VirtualComputerSystem::UNIX_VirtualComputerSystem(void)
{
}

UNIX_VirtualComputerSystem::~UNIX_VirtualComputerSystem(void)
{
}

Boolean UNIX_VirtualComputerSystem::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_VirtualComputerSystem::getInstanceID() const
{
	return _instanceID;
}

void UNIX_VirtualComputerSystem::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_VirtualComputerSystem::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_VirtualComputerSystem::getCaption() const
{
	return _caption;
}

void UNIX_VirtualComputerSystem::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_VirtualComputerSystem::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_VirtualComputerSystem::getDescription() const
{
	return _description;
}

void UNIX_VirtualComputerSystem::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_VirtualComputerSystem::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_VirtualComputerSystem::getElementName() const
{
	return _elementName;
}

void UNIX_VirtualComputerSystem::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_VirtualComputerSystem::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_VirtualComputerSystem::getGeneration() const
{
	return _generation;
}

void UNIX_VirtualComputerSystem::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_VirtualComputerSystem::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_VirtualComputerSystem::getInstallDate() const
{
	return _installDate;
}

void UNIX_VirtualComputerSystem::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_VirtualComputerSystem::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_VirtualComputerSystem::getName() const
{
	return _name;
}

void UNIX_VirtualComputerSystem::setName(String &value)
{
	_name = value;
}

Boolean UNIX_VirtualComputerSystem::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_VirtualComputerSystem::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_VirtualComputerSystem::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_VirtualComputerSystem::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_VirtualComputerSystem::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_VirtualComputerSystem::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_VirtualComputerSystem::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_VirtualComputerSystem::getStatus() const
{
	return _status;
}

void UNIX_VirtualComputerSystem::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_VirtualComputerSystem::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_VirtualComputerSystem::getHealthState() const
{
	return _healthState;
}

void UNIX_VirtualComputerSystem::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_VirtualComputerSystem::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_VirtualComputerSystem::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_VirtualComputerSystem::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_VirtualComputerSystem::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_VirtualComputerSystem::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_VirtualComputerSystem::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_VirtualComputerSystem::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_VirtualComputerSystem::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_VirtualComputerSystem::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_VirtualComputerSystem::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_VirtualComputerSystem::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_VirtualComputerSystem::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_VirtualComputerSystem::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_VirtualComputerSystem::getEnabledState() const
{
	return _enabledState;
}

void UNIX_VirtualComputerSystem::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_VirtualComputerSystem::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_VirtualComputerSystem::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_VirtualComputerSystem::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_VirtualComputerSystem::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_VirtualComputerSystem::getRequestedState() const
{
	return _requestedState;
}

void UNIX_VirtualComputerSystem::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_VirtualComputerSystem::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_VirtualComputerSystem::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_VirtualComputerSystem::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_VirtualComputerSystem::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_VirtualComputerSystem::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_VirtualComputerSystem::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_VirtualComputerSystem::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_VirtualComputerSystem::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_VirtualComputerSystem::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_VirtualComputerSystem::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_VirtualComputerSystem::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_VirtualComputerSystem::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_VirtualComputerSystem::getAllocationState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOCATION_STATE, getAllocationState());
	return true;
}

String UNIX_VirtualComputerSystem::getAllocationState() const
{
	return _allocationState;
}

void UNIX_VirtualComputerSystem::setAllocationState(String &value)
{
	_allocationState = value;
}

Boolean UNIX_VirtualComputerSystem::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_VirtualComputerSystem::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_VirtualComputerSystem::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_VirtualComputerSystem::getNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_FORMAT, getNameFormat());
	return true;
}

String UNIX_VirtualComputerSystem::getNameFormat() const
{
	return _nameFormat;
}

void UNIX_VirtualComputerSystem::setNameFormat(String &value)
{
	_nameFormat = value;
}

Boolean UNIX_VirtualComputerSystem::getPrimaryOwnerName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_NAME, getPrimaryOwnerName());
	return true;
}

String UNIX_VirtualComputerSystem::getPrimaryOwnerName() const
{
	return _primaryOwnerName;
}

void UNIX_VirtualComputerSystem::setPrimaryOwnerName(String &value)
{
	_primaryOwnerName = value;
}

Boolean UNIX_VirtualComputerSystem::getPrimaryOwnerContact(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_CONTACT, getPrimaryOwnerContact());
	return true;
}

String UNIX_VirtualComputerSystem::getPrimaryOwnerContact() const
{
	return _primaryOwnerContact;
}

void UNIX_VirtualComputerSystem::setPrimaryOwnerContact(String &value)
{
	_primaryOwnerContact = value;
}

Boolean UNIX_VirtualComputerSystem::getRoles(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ROLES, getRoles());
	return true;
}

Array<String> UNIX_VirtualComputerSystem::getRoles() const
{
	return _roles;
}

void UNIX_VirtualComputerSystem::setRoles(Array<String> &value)
{
	_roles = value;
}

Boolean UNIX_VirtualComputerSystem::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_VirtualComputerSystem::getOtherIdentifyingInfo() const
{
	return _otherIdentifyingInfo;
}

void UNIX_VirtualComputerSystem::setOtherIdentifyingInfo(Array<String> &value)
{
	_otherIdentifyingInfo = value;
}

Boolean UNIX_VirtualComputerSystem::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_VirtualComputerSystem::getIdentifyingDescriptions() const
{
	return _identifyingDescriptions;
}

void UNIX_VirtualComputerSystem::setIdentifyingDescriptions(Array<String> &value)
{
	_identifyingDescriptions = value;
}

Boolean UNIX_VirtualComputerSystem::getDedicated(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEDICATED, getDedicated());
	return true;
}

Array<Uint16> UNIX_VirtualComputerSystem::getDedicated() const
{
	return _dedicated;
}

void UNIX_VirtualComputerSystem::setDedicated(Array<Uint16> &value)
{
	_dedicated = value;
}

Boolean UNIX_VirtualComputerSystem::getOtherDedicatedDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_DEDICATED_DESCRIPTIONS, getOtherDedicatedDescriptions());
	return true;
}

Array<String> UNIX_VirtualComputerSystem::getOtherDedicatedDescriptions() const
{
	return _otherDedicatedDescriptions;
}

void UNIX_VirtualComputerSystem::setOtherDedicatedDescriptions(Array<String> &value)
{
	_otherDedicatedDescriptions = value;
}

Boolean UNIX_VirtualComputerSystem::getResetCapability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESET_CAPABILITY, getResetCapability());
	return true;
}

Uint16 UNIX_VirtualComputerSystem::getResetCapability() const
{
	return _resetCapability;
}

void UNIX_VirtualComputerSystem::setResetCapability(Uint16 &value)
{
	_resetCapability = value;
}

Boolean UNIX_VirtualComputerSystem::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_VirtualComputerSystem::getPowerManagementCapabilities() const
{
	return _powerManagementCapabilities;
}

void UNIX_VirtualComputerSystem::setPowerManagementCapabilities(Array<Uint16> &value)
{
	_powerManagementCapabilities = value;
}

Boolean UNIX_VirtualComputerSystem::getVirtualSystem(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VIRTUAL_SYSTEM, getVirtualSystem());
	return true;
}

String UNIX_VirtualComputerSystem::getVirtualSystem() const
{
	return _virtualSystem;
}

void UNIX_VirtualComputerSystem::setVirtualSystem(String &value)
{
	_virtualSystem = value;
}


void UNIX_VirtualComputerSystem::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("VirtualComputerSystem");
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
	_creationClassName = String("UNIX_VirtualComputerSystem");
	_nameFormat = String ("");
	_primaryOwnerName = String ("");
	_primaryOwnerContact = String ("");
	_roles.clear();
	_otherIdentifyingInfo.clear();
	_identifyingDescriptions.clear();
	_dedicated.clear();
	_otherDedicatedDescriptions.clear();
	_resetCapability = Uint16(0);
	_powerManagementCapabilities.clear();
	_virtualSystem = String ("");

}

Boolean UNIX_VirtualComputerSystem::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "Dedicated"))
			{
				Array<Uint16> dedicatedValue;
				property.getValue().get(dedicatedValue);
				setDedicated(dedicatedValue);
			}
			else if (String::equal(property.getName().getString(), "OtherDedicatedDescriptions"))
			{
				Array<String> otherDedicatedDescriptionsValue;
				property.getValue().get(otherDedicatedDescriptionsValue);
				setOtherDedicatedDescriptions(otherDedicatedDescriptionsValue);
			}
			else if (String::equal(property.getName().getString(), "ResetCapability"))
			{
				Uint16 resetCapabilityValue;
				property.getValue().get(resetCapabilityValue);
				setResetCapability(resetCapabilityValue);
			}
			else if (String::equal(property.getName().getString(), "PowerManagementCapabilities"))
			{
				Array<Uint16> powerManagementCapabilitiesValue;
				property.getValue().get(powerManagementCapabilitiesValue);
				setPowerManagementCapabilities(powerManagementCapabilitiesValue);
			}
			else if (String::equal(property.getName().getString(), "VirtualSystem"))
			{
				String virtualSystemValue;
				property.getValue().get(virtualSystemValue);
				setVirtualSystem(virtualSystemValue);
			}
	}
	return true;
}

Uint32 UNIX_VirtualComputerSystem::invokeRequestStateChange(
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

Uint32 UNIX_VirtualComputerSystem::invokeSetPowerState(
		Uint32 &inPowerState,
		CIMDateTime &inTime
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SetPowerState */
	
	
	
	return returnValue;
}


Boolean UNIX_VirtualComputerSystem::initialize()
{
	return false;
}

Boolean UNIX_VirtualComputerSystem::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("VirtualComputerSystem");
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
	_creationClassName = String("UNIX_VirtualComputerSystem");
	_nameFormat = String ("");
	_primaryOwnerName = String ("");
	_primaryOwnerContact = String ("");
	_roles.clear();
	_otherIdentifyingInfo.clear();
	_identifyingDescriptions.clear();
	_dedicated.clear();
	_otherDedicatedDescriptions.clear();
	_resetCapability = Uint16(0);
	_powerManagementCapabilities.clear();
	_virtualSystem = String ("");
	
	return false;
}

Boolean UNIX_VirtualComputerSystem::finalize()
{
	return false;
}

Boolean UNIX_VirtualComputerSystem::loadByName(const String name)
{
	return false;
}

Boolean UNIX_VirtualComputerSystem::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_VirtualComputerSystem::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VirtualComputerSystem::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VirtualComputerSystem::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VirtualComputerSystem::validateInstance()
{
	return true;
}

