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


UNIX_ComputerSystem::UNIX_ComputerSystem(void)
{
}

UNIX_ComputerSystem::~UNIX_ComputerSystem(void)
{
}

Boolean UNIX_ComputerSystem::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_ComputerSystem::getInstanceID() const
{
	return _instanceID;
}

void UNIX_ComputerSystem::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_ComputerSystem::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_ComputerSystem::getCaption() const
{
	return _caption;
}

void UNIX_ComputerSystem::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_ComputerSystem::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_ComputerSystem::getDescription() const
{
	return _description;
}

void UNIX_ComputerSystem::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_ComputerSystem::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_ComputerSystem::getElementName() const
{
	return _elementName;
}

void UNIX_ComputerSystem::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_ComputerSystem::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_ComputerSystem::getGeneration() const
{
	return _generation;
}

void UNIX_ComputerSystem::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_ComputerSystem::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_ComputerSystem::getInstallDate() const
{
	return _installDate;
}

void UNIX_ComputerSystem::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_ComputerSystem::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_ComputerSystem::getName() const
{
	return _name;
}

void UNIX_ComputerSystem::setName(String &value)
{
	_name = value;
}

Boolean UNIX_ComputerSystem::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_ComputerSystem::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_ComputerSystem::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_ComputerSystem::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_ComputerSystem::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_ComputerSystem::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_ComputerSystem::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_ComputerSystem::getStatus() const
{
	return _status;
}

void UNIX_ComputerSystem::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_ComputerSystem::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_ComputerSystem::getHealthState() const
{
	return _healthState;
}

void UNIX_ComputerSystem::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_ComputerSystem::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_ComputerSystem::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_ComputerSystem::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_ComputerSystem::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_ComputerSystem::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_ComputerSystem::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_ComputerSystem::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_ComputerSystem::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_ComputerSystem::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_ComputerSystem::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_ComputerSystem::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_ComputerSystem::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_ComputerSystem::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_ComputerSystem::getEnabledState() const
{
	return _enabledState;
}

void UNIX_ComputerSystem::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_ComputerSystem::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_ComputerSystem::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_ComputerSystem::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_ComputerSystem::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_ComputerSystem::getRequestedState() const
{
	return _requestedState;
}

void UNIX_ComputerSystem::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_ComputerSystem::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_ComputerSystem::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_ComputerSystem::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_ComputerSystem::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_ComputerSystem::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_ComputerSystem::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_ComputerSystem::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_ComputerSystem::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_ComputerSystem::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_ComputerSystem::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_ComputerSystem::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_ComputerSystem::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_ComputerSystem::getAllocationState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOCATION_STATE, getAllocationState());
	return true;
}

String UNIX_ComputerSystem::getAllocationState() const
{
	return _allocationState;
}

void UNIX_ComputerSystem::setAllocationState(String &value)
{
	_allocationState = value;
}

Boolean UNIX_ComputerSystem::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_ComputerSystem::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_ComputerSystem::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_ComputerSystem::getNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_FORMAT, getNameFormat());
	return true;
}

String UNIX_ComputerSystem::getNameFormat() const
{
	return _nameFormat;
}

void UNIX_ComputerSystem::setNameFormat(String &value)
{
	_nameFormat = value;
}

Boolean UNIX_ComputerSystem::getPrimaryOwnerName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_NAME, getPrimaryOwnerName());
	return true;
}

String UNIX_ComputerSystem::getPrimaryOwnerName() const
{
	return _primaryOwnerName;
}

void UNIX_ComputerSystem::setPrimaryOwnerName(String &value)
{
	_primaryOwnerName = value;
}

Boolean UNIX_ComputerSystem::getPrimaryOwnerContact(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_CONTACT, getPrimaryOwnerContact());
	return true;
}

String UNIX_ComputerSystem::getPrimaryOwnerContact() const
{
	return _primaryOwnerContact;
}

void UNIX_ComputerSystem::setPrimaryOwnerContact(String &value)
{
	_primaryOwnerContact = value;
}

Boolean UNIX_ComputerSystem::getRoles(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ROLES, getRoles());
	return true;
}

Array<String> UNIX_ComputerSystem::getRoles() const
{
	return _roles;
}

void UNIX_ComputerSystem::setRoles(Array<String> &value)
{
	_roles = value;
}

Boolean UNIX_ComputerSystem::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_ComputerSystem::getOtherIdentifyingInfo() const
{
	return _otherIdentifyingInfo;
}

void UNIX_ComputerSystem::setOtherIdentifyingInfo(Array<String> &value)
{
	_otherIdentifyingInfo = value;
}

Boolean UNIX_ComputerSystem::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_ComputerSystem::getIdentifyingDescriptions() const
{
	return _identifyingDescriptions;
}

void UNIX_ComputerSystem::setIdentifyingDescriptions(Array<String> &value)
{
	_identifyingDescriptions = value;
}

Boolean UNIX_ComputerSystem::getDedicated(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEDICATED, getDedicated());
	return true;
}

Array<Uint16> UNIX_ComputerSystem::getDedicated() const
{
	return _dedicated;
}

void UNIX_ComputerSystem::setDedicated(Array<Uint16> &value)
{
	_dedicated = value;
}

Boolean UNIX_ComputerSystem::getOtherDedicatedDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_DEDICATED_DESCRIPTIONS, getOtherDedicatedDescriptions());
	return true;
}

Array<String> UNIX_ComputerSystem::getOtherDedicatedDescriptions() const
{
	return _otherDedicatedDescriptions;
}

void UNIX_ComputerSystem::setOtherDedicatedDescriptions(Array<String> &value)
{
	_otherDedicatedDescriptions = value;
}

Boolean UNIX_ComputerSystem::getResetCapability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESET_CAPABILITY, getResetCapability());
	return true;
}

Uint16 UNIX_ComputerSystem::getResetCapability() const
{
	return _resetCapability;
}

void UNIX_ComputerSystem::setResetCapability(Uint16 &value)
{
	_resetCapability = value;
}

Boolean UNIX_ComputerSystem::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_ComputerSystem::getPowerManagementCapabilities() const
{
	return _powerManagementCapabilities;
}

void UNIX_ComputerSystem::setPowerManagementCapabilities(Array<Uint16> &value)
{
	_powerManagementCapabilities = value;
}

Boolean UNIX_ComputerSystem::getInitialLoadInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INITIAL_LOAD_INFO, getInitialLoadInfo());
	return true;
}

Array<String> UNIX_ComputerSystem::getInitialLoadInfo() const
{
	return _initialLoadInfo;
}

void UNIX_ComputerSystem::setInitialLoadInfo(Array<String> &value)
{
	_initialLoadInfo = value;
}

Boolean UNIX_ComputerSystem::getLastLoadInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_LOAD_INFO, getLastLoadInfo());
	return true;
}

String UNIX_ComputerSystem::getLastLoadInfo() const
{
	return _lastLoadInfo;
}

void UNIX_ComputerSystem::setLastLoadInfo(String &value)
{
	_lastLoadInfo = value;
}

Boolean UNIX_ComputerSystem::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_ComputerSystem::getPowerManagementSupported() const
{
	return _powerManagementSupported;
}

void UNIX_ComputerSystem::setPowerManagementSupported(Boolean &value)
{
	_powerManagementSupported = value;
}

Boolean UNIX_ComputerSystem::getPowerState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_STATE, getPowerState());
	return true;
}

Uint16 UNIX_ComputerSystem::getPowerState() const
{
	return _powerState;
}

void UNIX_ComputerSystem::setPowerState(Uint16 &value)
{
	_powerState = value;
}

Boolean UNIX_ComputerSystem::getWakeUpType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WAKE_UP_TYPE, getWakeUpType());
	return true;
}

Uint16 UNIX_ComputerSystem::getWakeUpType() const
{
	return _wakeUpType;
}

void UNIX_ComputerSystem::setWakeUpType(Uint16 &value)
{
	_wakeUpType = value;
}


void UNIX_ComputerSystem::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("ComputerSystem");
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
	_creationClassName = String("UNIX_ComputerSystem");
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
	_initialLoadInfo.clear();
	_lastLoadInfo = String ("");
	_powerManagementSupported = Boolean(false);
	_powerState = Uint16(0);
	_wakeUpType = Uint16(0);

}

Boolean UNIX_ComputerSystem::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "InitialLoadInfo"))
			{
				Array<String> initialLoadInfoValue;
				property.getValue().get(initialLoadInfoValue);
				setInitialLoadInfo(initialLoadInfoValue);
			}
			else if (String::equal(property.getName().getString(), "LastLoadInfo"))
			{
				String lastLoadInfoValue;
				property.getValue().get(lastLoadInfoValue);
				setLastLoadInfo(lastLoadInfoValue);
			}
			else if (String::equal(property.getName().getString(), "PowerManagementSupported"))
			{
				Boolean powerManagementSupportedValue;
				property.getValue().get(powerManagementSupportedValue);
				setPowerManagementSupported(powerManagementSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "PowerState"))
			{
				Uint16 powerStateValue;
				property.getValue().get(powerStateValue);
				setPowerState(powerStateValue);
			}
			else if (String::equal(property.getName().getString(), "WakeUpType"))
			{
				Uint16 wakeUpTypeValue;
				property.getValue().get(wakeUpTypeValue);
				setWakeUpType(wakeUpTypeValue);
			}
	}
	return true;
}

Uint32 UNIX_ComputerSystem::invokeRequestStateChange(
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

Uint32 UNIX_ComputerSystem::invokeSetPowerState(
		Uint32 &inPowerState,
		CIMDateTime &inTime
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SetPowerState */
	
	
	
	return returnValue;
}


Boolean UNIX_ComputerSystem::initialize()
{
	return false;
}

Boolean UNIX_ComputerSystem::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("ComputerSystem");
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
	_creationClassName = String("UNIX_ComputerSystem");
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
	_initialLoadInfo.clear();
	_lastLoadInfo = String ("");
	_powerManagementSupported = Boolean(false);
	_powerState = Uint16(0);
	_wakeUpType = Uint16(0);
	
	return false;
}

Boolean UNIX_ComputerSystem::finalize()
{
	return false;
}

Boolean UNIX_ComputerSystem::loadByName(const String name)
{
	return false;
}

Boolean UNIX_ComputerSystem::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_ComputerSystem::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ComputerSystem::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ComputerSystem::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ComputerSystem::validateInstance()
{
	return true;
}

