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


UNIX_PassThroughModule::UNIX_PassThroughModule(void)
{
}

UNIX_PassThroughModule::~UNIX_PassThroughModule(void)
{
}

Boolean UNIX_PassThroughModule::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_PassThroughModule::getInstanceID() const
{
	return _instanceID;
}

void UNIX_PassThroughModule::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_PassThroughModule::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_PassThroughModule::getCaption() const
{
	return _caption;
}

void UNIX_PassThroughModule::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_PassThroughModule::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_PassThroughModule::getDescription() const
{
	return _description;
}

void UNIX_PassThroughModule::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_PassThroughModule::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_PassThroughModule::getElementName() const
{
	return _elementName;
}

void UNIX_PassThroughModule::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_PassThroughModule::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_PassThroughModule::getGeneration() const
{
	return _generation;
}

void UNIX_PassThroughModule::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_PassThroughModule::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_PassThroughModule::getInstallDate() const
{
	return _installDate;
}

void UNIX_PassThroughModule::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_PassThroughModule::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_PassThroughModule::getName() const
{
	return _name;
}

void UNIX_PassThroughModule::setName(String &value)
{
	_name = value;
}

Boolean UNIX_PassThroughModule::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_PassThroughModule::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_PassThroughModule::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_PassThroughModule::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_PassThroughModule::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_PassThroughModule::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_PassThroughModule::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_PassThroughModule::getStatus() const
{
	return _status;
}

void UNIX_PassThroughModule::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_PassThroughModule::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_PassThroughModule::getHealthState() const
{
	return _healthState;
}

void UNIX_PassThroughModule::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_PassThroughModule::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_PassThroughModule::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_PassThroughModule::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_PassThroughModule::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_PassThroughModule::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_PassThroughModule::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_PassThroughModule::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_PassThroughModule::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_PassThroughModule::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_PassThroughModule::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_PassThroughModule::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_PassThroughModule::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_PassThroughModule::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_PassThroughModule::getEnabledState() const
{
	return _enabledState;
}

void UNIX_PassThroughModule::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_PassThroughModule::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_PassThroughModule::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_PassThroughModule::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_PassThroughModule::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_PassThroughModule::getRequestedState() const
{
	return _requestedState;
}

void UNIX_PassThroughModule::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_PassThroughModule::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_PassThroughModule::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_PassThroughModule::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_PassThroughModule::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_PassThroughModule::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_PassThroughModule::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_PassThroughModule::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_PassThroughModule::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_PassThroughModule::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_PassThroughModule::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_PassThroughModule::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_PassThroughModule::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_PassThroughModule::getAllocationState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOCATION_STATE, getAllocationState());
	return true;
}

String UNIX_PassThroughModule::getAllocationState() const
{
	return _allocationState;
}

void UNIX_PassThroughModule::setAllocationState(String &value)
{
	_allocationState = value;
}

Boolean UNIX_PassThroughModule::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_PassThroughModule::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_PassThroughModule::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_PassThroughModule::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_PassThroughModule::getSystemName() const
{
	return _systemName;
}

void UNIX_PassThroughModule::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_PassThroughModule::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_PassThroughModule::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_PassThroughModule::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_PassThroughModule::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_PassThroughModule::getDeviceID() const
{
	return _deviceID;
}

void UNIX_PassThroughModule::setDeviceID(String &value)
{
	_deviceID = value;
}

Boolean UNIX_PassThroughModule::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_PassThroughModule::getPowerManagementSupported() const
{
	return _powerManagementSupported;
}

void UNIX_PassThroughModule::setPowerManagementSupported(Boolean &value)
{
	_powerManagementSupported = value;
}

Boolean UNIX_PassThroughModule::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_PassThroughModule::getPowerManagementCapabilities() const
{
	return _powerManagementCapabilities;
}

void UNIX_PassThroughModule::setPowerManagementCapabilities(Array<Uint16> &value)
{
	_powerManagementCapabilities = value;
}

Boolean UNIX_PassThroughModule::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_PassThroughModule::getAvailability() const
{
	return _availability;
}

void UNIX_PassThroughModule::setAvailability(Uint16 &value)
{
	_availability = value;
}

Boolean UNIX_PassThroughModule::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_PassThroughModule::getStatusInfo() const
{
	return _statusInfo;
}

void UNIX_PassThroughModule::setStatusInfo(Uint16 &value)
{
	_statusInfo = value;
}

Boolean UNIX_PassThroughModule::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_PassThroughModule::getLastErrorCode() const
{
	return _lastErrorCode;
}

void UNIX_PassThroughModule::setLastErrorCode(Uint32 &value)
{
	_lastErrorCode = value;
}

Boolean UNIX_PassThroughModule::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_PassThroughModule::getErrorDescription() const
{
	return _errorDescription;
}

void UNIX_PassThroughModule::setErrorDescription(String &value)
{
	_errorDescription = value;
}

Boolean UNIX_PassThroughModule::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_PassThroughModule::getErrorCleared() const
{
	return _errorCleared;
}

void UNIX_PassThroughModule::setErrorCleared(Boolean &value)
{
	_errorCleared = value;
}

Boolean UNIX_PassThroughModule::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_PassThroughModule::getOtherIdentifyingInfo() const
{
	return _otherIdentifyingInfo;
}

void UNIX_PassThroughModule::setOtherIdentifyingInfo(Array<String> &value)
{
	_otherIdentifyingInfo = value;
}

Boolean UNIX_PassThroughModule::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_PassThroughModule::getPowerOnHours() const
{
	return _powerOnHours;
}

void UNIX_PassThroughModule::setPowerOnHours(Uint64 &value)
{
	_powerOnHours = value;
}

Boolean UNIX_PassThroughModule::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_PassThroughModule::getTotalPowerOnHours() const
{
	return _totalPowerOnHours;
}

void UNIX_PassThroughModule::setTotalPowerOnHours(Uint64 &value)
{
	_totalPowerOnHours = value;
}

Boolean UNIX_PassThroughModule::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_PassThroughModule::getIdentifyingDescriptions() const
{
	return _identifyingDescriptions;
}

void UNIX_PassThroughModule::setIdentifyingDescriptions(Array<String> &value)
{
	_identifyingDescriptions = value;
}

Boolean UNIX_PassThroughModule::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_PassThroughModule::getAdditionalAvailability() const
{
	return _additionalAvailability;
}

void UNIX_PassThroughModule::setAdditionalAvailability(Array<Uint16> &value)
{
	_additionalAvailability = value;
}

Boolean UNIX_PassThroughModule::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_PassThroughModule::getMaxQuiesceTime() const
{
	return _maxQuiesceTime;
}

void UNIX_PassThroughModule::setMaxQuiesceTime(Uint64 &value)
{
	_maxQuiesceTime = value;
}

Boolean UNIX_PassThroughModule::getLocationIndicator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCATION_INDICATOR, getLocationIndicator());
	return true;
}

Uint16 UNIX_PassThroughModule::getLocationIndicator() const
{
	return _locationIndicator;
}

void UNIX_PassThroughModule::setLocationIndicator(Uint16 &value)
{
	_locationIndicator = value;
}

Boolean UNIX_PassThroughModule::getModuleNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MODULE_NUMBER, getModuleNumber());
	return true;
}

Uint16 UNIX_PassThroughModule::getModuleNumber() const
{
	return _moduleNumber;
}

void UNIX_PassThroughModule::setModuleNumber(Uint16 &value)
{
	_moduleNumber = value;
}

Boolean UNIX_PassThroughModule::getLogicalModuleType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOGICAL_MODULE_TYPE, getLogicalModuleType());
	return true;
}

Uint16 UNIX_PassThroughModule::getLogicalModuleType() const
{
	return _logicalModuleType;
}

void UNIX_PassThroughModule::setLogicalModuleType(Uint16 &value)
{
	_logicalModuleType = value;
}

Boolean UNIX_PassThroughModule::getOtherLogicalModuleTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_LOGICAL_MODULE_TYPE_DESCRIPTION, getOtherLogicalModuleTypeDescription());
	return true;
}

String UNIX_PassThroughModule::getOtherLogicalModuleTypeDescription() const
{
	return _otherLogicalModuleTypeDescription;
}

void UNIX_PassThroughModule::setOtherLogicalModuleTypeDescription(String &value)
{
	_otherLogicalModuleTypeDescription = value;
}

Boolean UNIX_PassThroughModule::getLinkTechnologies(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LINK_TECHNOLOGIES, getLinkTechnologies());
	return true;
}

Array<Uint16> UNIX_PassThroughModule::getLinkTechnologies() const
{
	return _linkTechnologies;
}

void UNIX_PassThroughModule::setLinkTechnologies(Array<Uint16> &value)
{
	_linkTechnologies = value;
}

Boolean UNIX_PassThroughModule::getOtherLinkTechnologies(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_LINK_TECHNOLOGIES, getOtherLinkTechnologies());
	return true;
}

Array<String> UNIX_PassThroughModule::getOtherLinkTechnologies() const
{
	return _otherLinkTechnologies;
}

void UNIX_PassThroughModule::setOtherLinkTechnologies(Array<String> &value)
{
	_otherLinkTechnologies = value;
}

Boolean UNIX_PassThroughModule::getIsProgrammable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_PROGRAMMABLE, getIsProgrammable());
	return true;
}

Boolean UNIX_PassThroughModule::getIsProgrammable() const
{
	return _isProgrammable;
}

void UNIX_PassThroughModule::setIsProgrammable(Boolean &value)
{
	_isProgrammable = value;
}

Boolean UNIX_PassThroughModule::getNumberOfPorts(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_PORTS, getNumberOfPorts());
	return true;
}

Uint16 UNIX_PassThroughModule::getNumberOfPorts() const
{
	return _numberOfPorts;
}

void UNIX_PassThroughModule::setNumberOfPorts(Uint16 &value)
{
	_numberOfPorts = value;
}

Boolean UNIX_PassThroughModule::getInternalPorts(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INTERNAL_PORTS, getInternalPorts());
	return true;
}

Array<Uint16> UNIX_PassThroughModule::getInternalPorts() const
{
	return _internalPorts;
}

void UNIX_PassThroughModule::setInternalPorts(Array<Uint16> &value)
{
	_internalPorts = value;
}

Boolean UNIX_PassThroughModule::getExternalPorts(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTERNAL_PORTS, getExternalPorts());
	return true;
}

Array<Uint16> UNIX_PassThroughModule::getExternalPorts() const
{
	return _externalPorts;
}

void UNIX_PassThroughModule::setExternalPorts(Array<Uint16> &value)
{
	_externalPorts = value;
}


void UNIX_PassThroughModule::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PassThroughModule");
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
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_creationClassName = String("UNIX_PassThroughModule");
	_deviceID = String ("");
	_powerManagementSupported = Boolean(false);
	_powerManagementCapabilities.clear();
	_availability = Uint16(0);
	_statusInfo = Uint16(0);
	_lastErrorCode = Uint32(0);
	_errorDescription = String ("");
	_errorCleared = Boolean(false);
	_otherIdentifyingInfo.clear();
	_powerOnHours = Uint64(0);
	_totalPowerOnHours = Uint64(0);
	_identifyingDescriptions.clear();
	_additionalAvailability.clear();
	_maxQuiesceTime = Uint64(0);
	_locationIndicator = Uint16(0);
	_moduleNumber = Uint16(0);
	_logicalModuleType = Uint16(0);
	_otherLogicalModuleTypeDescription = String ("");
	_linkTechnologies.clear();
	_otherLinkTechnologies.clear();
	_isProgrammable = Boolean(false);
	_numberOfPorts = Uint16(0);
	_internalPorts.clear();
	_externalPorts.clear();

}

Boolean UNIX_PassThroughModule::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "DeviceID"))
			{
				String deviceIDValue;
				property.getValue().get(deviceIDValue);
				setDeviceID(deviceIDValue);
			}
			else if (String::equal(property.getName().getString(), "PowerManagementSupported"))
			{
				Boolean powerManagementSupportedValue;
				property.getValue().get(powerManagementSupportedValue);
				setPowerManagementSupported(powerManagementSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "PowerManagementCapabilities"))
			{
				Array<Uint16> powerManagementCapabilitiesValue;
				property.getValue().get(powerManagementCapabilitiesValue);
				setPowerManagementCapabilities(powerManagementCapabilitiesValue);
			}
			else if (String::equal(property.getName().getString(), "Availability"))
			{
				Uint16 availabilityValue;
				property.getValue().get(availabilityValue);
				setAvailability(availabilityValue);
			}
			else if (String::equal(property.getName().getString(), "StatusInfo"))
			{
				Uint16 statusInfoValue;
				property.getValue().get(statusInfoValue);
				setStatusInfo(statusInfoValue);
			}
			else if (String::equal(property.getName().getString(), "LastErrorCode"))
			{
				Uint32 lastErrorCodeValue;
				property.getValue().get(lastErrorCodeValue);
				setLastErrorCode(lastErrorCodeValue);
			}
			else if (String::equal(property.getName().getString(), "ErrorDescription"))
			{
				String errorDescriptionValue;
				property.getValue().get(errorDescriptionValue);
				setErrorDescription(errorDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "ErrorCleared"))
			{
				Boolean errorClearedValue;
				property.getValue().get(errorClearedValue);
				setErrorCleared(errorClearedValue);
			}
			else if (String::equal(property.getName().getString(), "OtherIdentifyingInfo"))
			{
				Array<String> otherIdentifyingInfoValue;
				property.getValue().get(otherIdentifyingInfoValue);
				setOtherIdentifyingInfo(otherIdentifyingInfoValue);
			}
			else if (String::equal(property.getName().getString(), "PowerOnHours"))
			{
				Uint64 powerOnHoursValue;
				property.getValue().get(powerOnHoursValue);
				setPowerOnHours(powerOnHoursValue);
			}
			else if (String::equal(property.getName().getString(), "TotalPowerOnHours"))
			{
				Uint64 totalPowerOnHoursValue;
				property.getValue().get(totalPowerOnHoursValue);
				setTotalPowerOnHours(totalPowerOnHoursValue);
			}
			else if (String::equal(property.getName().getString(), "IdentifyingDescriptions"))
			{
				Array<String> identifyingDescriptionsValue;
				property.getValue().get(identifyingDescriptionsValue);
				setIdentifyingDescriptions(identifyingDescriptionsValue);
			}
			else if (String::equal(property.getName().getString(), "AdditionalAvailability"))
			{
				Array<Uint16> additionalAvailabilityValue;
				property.getValue().get(additionalAvailabilityValue);
				setAdditionalAvailability(additionalAvailabilityValue);
			}
			else if (String::equal(property.getName().getString(), "MaxQuiesceTime"))
			{
				Uint64 maxQuiesceTimeValue;
				property.getValue().get(maxQuiesceTimeValue);
				setMaxQuiesceTime(maxQuiesceTimeValue);
			}
			else if (String::equal(property.getName().getString(), "LocationIndicator"))
			{
				Uint16 locationIndicatorValue;
				property.getValue().get(locationIndicatorValue);
				setLocationIndicator(locationIndicatorValue);
			}
			else if (String::equal(property.getName().getString(), "ModuleNumber"))
			{
				Uint16 moduleNumberValue;
				property.getValue().get(moduleNumberValue);
				setModuleNumber(moduleNumberValue);
			}
			else if (String::equal(property.getName().getString(), "LogicalModuleType"))
			{
				Uint16 logicalModuleTypeValue;
				property.getValue().get(logicalModuleTypeValue);
				setLogicalModuleType(logicalModuleTypeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherLogicalModuleTypeDescription"))
			{
				String otherLogicalModuleTypeDescriptionValue;
				property.getValue().get(otherLogicalModuleTypeDescriptionValue);
				setOtherLogicalModuleTypeDescription(otherLogicalModuleTypeDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "LinkTechnologies"))
			{
				Array<Uint16> linkTechnologiesValue;
				property.getValue().get(linkTechnologiesValue);
				setLinkTechnologies(linkTechnologiesValue);
			}
			else if (String::equal(property.getName().getString(), "OtherLinkTechnologies"))
			{
				Array<String> otherLinkTechnologiesValue;
				property.getValue().get(otherLinkTechnologiesValue);
				setOtherLinkTechnologies(otherLinkTechnologiesValue);
			}
			else if (String::equal(property.getName().getString(), "IsProgrammable"))
			{
				Boolean isProgrammableValue;
				property.getValue().get(isProgrammableValue);
				setIsProgrammable(isProgrammableValue);
			}
			else if (String::equal(property.getName().getString(), "NumberOfPorts"))
			{
				Uint16 numberOfPortsValue;
				property.getValue().get(numberOfPortsValue);
				setNumberOfPorts(numberOfPortsValue);
			}
			else if (String::equal(property.getName().getString(), "InternalPorts"))
			{
				Array<Uint16> internalPortsValue;
				property.getValue().get(internalPortsValue);
				setInternalPorts(internalPortsValue);
			}
			else if (String::equal(property.getName().getString(), "ExternalPorts"))
			{
				Array<Uint16> externalPortsValue;
				property.getValue().get(externalPortsValue);
				setExternalPorts(externalPortsValue);
			}
	}
	return true;
}

Uint32 UNIX_PassThroughModule::invokeRequestStateChange(
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

Uint32 UNIX_PassThroughModule::invokeSetPowerState(
		Uint16 &inPowerState,
		CIMDateTime &inTime
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SetPowerState */
	
	
	
	return returnValue;
}

Uint32 UNIX_PassThroughModule::invokeReset()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method Reset */
	
	
	
	return returnValue;
}

Uint32 UNIX_PassThroughModule::invokeEnableDevice(
		Boolean &inEnabled
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method EnableDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_PassThroughModule::invokeOnlineDevice(
		Boolean &inOnline
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method OnlineDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_PassThroughModule::invokeQuiesceDevice(
		Boolean &inQuiesce
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method QuiesceDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_PassThroughModule::invokeSaveProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SaveProperties */
	
	
	
	return returnValue;
}

Uint32 UNIX_PassThroughModule::invokeRestoreProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method RestoreProperties */
	
	
	
	return returnValue;
}

Uint32 UNIX_PassThroughModule::invokeAssignPorts(
		Boolean &inMapped,
		Uint16 &inInternalPort,
		Uint16 &inExternalPort
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method AssignPorts */
	
	
	
	return returnValue;
}


Boolean UNIX_PassThroughModule::initialize()
{
	return false;
}

Boolean UNIX_PassThroughModule::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PassThroughModule");
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
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_creationClassName = String("UNIX_PassThroughModule");
	_deviceID = String ("");
	_powerManagementSupported = Boolean(false);
	_powerManagementCapabilities.clear();
	_availability = Uint16(0);
	_statusInfo = Uint16(0);
	_lastErrorCode = Uint32(0);
	_errorDescription = String ("");
	_errorCleared = Boolean(false);
	_otherIdentifyingInfo.clear();
	_powerOnHours = Uint64(0);
	_totalPowerOnHours = Uint64(0);
	_identifyingDescriptions.clear();
	_additionalAvailability.clear();
	_maxQuiesceTime = Uint64(0);
	_locationIndicator = Uint16(0);
	_moduleNumber = Uint16(0);
	_logicalModuleType = Uint16(0);
	_otherLogicalModuleTypeDescription = String ("");
	_linkTechnologies.clear();
	_otherLinkTechnologies.clear();
	_isProgrammable = Boolean(false);
	_numberOfPorts = Uint16(0);
	_internalPorts.clear();
	_externalPorts.clear();
	
	return false;
}

Boolean UNIX_PassThroughModule::finalize()
{
	return false;
}

Boolean UNIX_PassThroughModule::loadByName(const String name)
{
	return false;
}

Boolean UNIX_PassThroughModule::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String systemCreationClassNameKey;
	String systemNameKey;
	String creationClassNameKey;
	String deviceIDKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SYSTEM_CREATION_CLASS_NAME)) systemCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SYSTEM_NAME)) systemNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_DEVICE_ID)) deviceIDKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getSystemCreationClassName(), systemCreationClassNameKey)) && 
			(String::equalNoCase(getSystemName(), systemNameKey)) && 
			(String::equalNoCase(getCreationClassName(), creationClassNameKey)) && 
			(String::equalNoCase(getDeviceID(), deviceIDKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_PassThroughModule::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PassThroughModule::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PassThroughModule::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PassThroughModule::validateInstance()
{
	return true;
}

