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


UNIX_InterLibraryPort::UNIX_InterLibraryPort(void)
{
}

UNIX_InterLibraryPort::~UNIX_InterLibraryPort(void)
{
}

Boolean UNIX_InterLibraryPort::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_InterLibraryPort::getInstanceID() const
{
	return _instanceID;
}

void UNIX_InterLibraryPort::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_InterLibraryPort::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_InterLibraryPort::getCaption() const
{
	return _caption;
}

void UNIX_InterLibraryPort::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_InterLibraryPort::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_InterLibraryPort::getDescription() const
{
	return _description;
}

void UNIX_InterLibraryPort::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_InterLibraryPort::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_InterLibraryPort::getElementName() const
{
	return _elementName;
}

void UNIX_InterLibraryPort::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_InterLibraryPort::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_InterLibraryPort::getGeneration() const
{
	return _generation;
}

void UNIX_InterLibraryPort::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_InterLibraryPort::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_InterLibraryPort::getInstallDate() const
{
	return _installDate;
}

void UNIX_InterLibraryPort::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_InterLibraryPort::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_InterLibraryPort::getName() const
{
	return _name;
}

void UNIX_InterLibraryPort::setName(String &value)
{
	_name = value;
}

Boolean UNIX_InterLibraryPort::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_InterLibraryPort::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_InterLibraryPort::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_InterLibraryPort::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_InterLibraryPort::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_InterLibraryPort::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_InterLibraryPort::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_InterLibraryPort::getStatus() const
{
	return _status;
}

void UNIX_InterLibraryPort::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_InterLibraryPort::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_InterLibraryPort::getHealthState() const
{
	return _healthState;
}

void UNIX_InterLibraryPort::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_InterLibraryPort::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_InterLibraryPort::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_InterLibraryPort::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_InterLibraryPort::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_InterLibraryPort::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_InterLibraryPort::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_InterLibraryPort::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_InterLibraryPort::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_InterLibraryPort::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_InterLibraryPort::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_InterLibraryPort::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_InterLibraryPort::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_InterLibraryPort::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_InterLibraryPort::getEnabledState() const
{
	return _enabledState;
}

void UNIX_InterLibraryPort::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_InterLibraryPort::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_InterLibraryPort::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_InterLibraryPort::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_InterLibraryPort::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_InterLibraryPort::getRequestedState() const
{
	return _requestedState;
}

void UNIX_InterLibraryPort::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_InterLibraryPort::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_InterLibraryPort::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_InterLibraryPort::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_InterLibraryPort::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_InterLibraryPort::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_InterLibraryPort::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_InterLibraryPort::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_InterLibraryPort::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_InterLibraryPort::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_InterLibraryPort::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_InterLibraryPort::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_InterLibraryPort::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_InterLibraryPort::getAllocationState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOCATION_STATE, getAllocationState());
	return true;
}

String UNIX_InterLibraryPort::getAllocationState() const
{
	return _allocationState;
}

void UNIX_InterLibraryPort::setAllocationState(String &value)
{
	_allocationState = value;
}

Boolean UNIX_InterLibraryPort::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_InterLibraryPort::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_InterLibraryPort::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_InterLibraryPort::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_InterLibraryPort::getSystemName() const
{
	return _systemName;
}

void UNIX_InterLibraryPort::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_InterLibraryPort::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_InterLibraryPort::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_InterLibraryPort::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_InterLibraryPort::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_InterLibraryPort::getDeviceID() const
{
	return _deviceID;
}

void UNIX_InterLibraryPort::setDeviceID(String &value)
{
	_deviceID = value;
}

Boolean UNIX_InterLibraryPort::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_InterLibraryPort::getPowerManagementSupported() const
{
	return _powerManagementSupported;
}

void UNIX_InterLibraryPort::setPowerManagementSupported(Boolean &value)
{
	_powerManagementSupported = value;
}

Boolean UNIX_InterLibraryPort::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_InterLibraryPort::getPowerManagementCapabilities() const
{
	return _powerManagementCapabilities;
}

void UNIX_InterLibraryPort::setPowerManagementCapabilities(Array<Uint16> &value)
{
	_powerManagementCapabilities = value;
}

Boolean UNIX_InterLibraryPort::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_InterLibraryPort::getAvailability() const
{
	return _availability;
}

void UNIX_InterLibraryPort::setAvailability(Uint16 &value)
{
	_availability = value;
}

Boolean UNIX_InterLibraryPort::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_InterLibraryPort::getStatusInfo() const
{
	return _statusInfo;
}

void UNIX_InterLibraryPort::setStatusInfo(Uint16 &value)
{
	_statusInfo = value;
}

Boolean UNIX_InterLibraryPort::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_InterLibraryPort::getLastErrorCode() const
{
	return _lastErrorCode;
}

void UNIX_InterLibraryPort::setLastErrorCode(Uint32 &value)
{
	_lastErrorCode = value;
}

Boolean UNIX_InterLibraryPort::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_InterLibraryPort::getErrorDescription() const
{
	return _errorDescription;
}

void UNIX_InterLibraryPort::setErrorDescription(String &value)
{
	_errorDescription = value;
}

Boolean UNIX_InterLibraryPort::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_InterLibraryPort::getErrorCleared() const
{
	return _errorCleared;
}

void UNIX_InterLibraryPort::setErrorCleared(Boolean &value)
{
	_errorCleared = value;
}

Boolean UNIX_InterLibraryPort::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_InterLibraryPort::getOtherIdentifyingInfo() const
{
	return _otherIdentifyingInfo;
}

void UNIX_InterLibraryPort::setOtherIdentifyingInfo(Array<String> &value)
{
	_otherIdentifyingInfo = value;
}

Boolean UNIX_InterLibraryPort::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_InterLibraryPort::getPowerOnHours() const
{
	return _powerOnHours;
}

void UNIX_InterLibraryPort::setPowerOnHours(Uint64 &value)
{
	_powerOnHours = value;
}

Boolean UNIX_InterLibraryPort::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_InterLibraryPort::getTotalPowerOnHours() const
{
	return _totalPowerOnHours;
}

void UNIX_InterLibraryPort::setTotalPowerOnHours(Uint64 &value)
{
	_totalPowerOnHours = value;
}

Boolean UNIX_InterLibraryPort::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_InterLibraryPort::getIdentifyingDescriptions() const
{
	return _identifyingDescriptions;
}

void UNIX_InterLibraryPort::setIdentifyingDescriptions(Array<String> &value)
{
	_identifyingDescriptions = value;
}

Boolean UNIX_InterLibraryPort::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_InterLibraryPort::getAdditionalAvailability() const
{
	return _additionalAvailability;
}

void UNIX_InterLibraryPort::setAdditionalAvailability(Array<Uint16> &value)
{
	_additionalAvailability = value;
}

Boolean UNIX_InterLibraryPort::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_InterLibraryPort::getMaxQuiesceTime() const
{
	return _maxQuiesceTime;
}

void UNIX_InterLibraryPort::setMaxQuiesceTime(Uint64 &value)
{
	_maxQuiesceTime = value;
}

Boolean UNIX_InterLibraryPort::getLocationIndicator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCATION_INDICATOR, getLocationIndicator());
	return true;
}

Uint16 UNIX_InterLibraryPort::getLocationIndicator() const
{
	return _locationIndicator;
}

void UNIX_InterLibraryPort::setLocationIndicator(Uint16 &value)
{
	_locationIndicator = value;
}

Boolean UNIX_InterLibraryPort::getLastAccessed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ACCESSED, getLastAccessed());
	return true;
}

CIMDateTime UNIX_InterLibraryPort::getLastAccessed() const
{
	return _lastAccessed;
}

void UNIX_InterLibraryPort::setLastAccessed(CIMDateTime &value)
{
	_lastAccessed = value;
}

Boolean UNIX_InterLibraryPort::getImportCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IMPORT_COUNT, getImportCount());
	return true;
}

Uint64 UNIX_InterLibraryPort::getImportCount() const
{
	return _importCount;
}

void UNIX_InterLibraryPort::setImportCount(Uint64 &value)
{
	_importCount = value;
}

Boolean UNIX_InterLibraryPort::getExportCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXPORT_COUNT, getExportCount());
	return true;
}

Uint64 UNIX_InterLibraryPort::getExportCount() const
{
	return _exportCount;
}

void UNIX_InterLibraryPort::setExportCount(Uint64 &value)
{
	_exportCount = value;
}

Boolean UNIX_InterLibraryPort::getDirection(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DIRECTION, getDirection());
	return true;
}

Uint16 UNIX_InterLibraryPort::getDirection() const
{
	return _direction;
}

void UNIX_InterLibraryPort::setDirection(Uint16 &value)
{
	_direction = value;
}


void UNIX_InterLibraryPort::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("InterLibraryPort");
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
	_creationClassName = String("UNIX_InterLibraryPort");
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
	_lastAccessed = CIMHelper::getCurrentTime();
	_importCount = Uint64(0);
	_exportCount = Uint64(0);
	_direction = Uint16(0);

}

Boolean UNIX_InterLibraryPort::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "LastAccessed"))
			{
				CIMDateTime lastAccessedValue;
				property.getValue().get(lastAccessedValue);
				setLastAccessed(lastAccessedValue);
			}
			else if (String::equal(property.getName().getString(), "ImportCount"))
			{
				Uint64 importCountValue;
				property.getValue().get(importCountValue);
				setImportCount(importCountValue);
			}
			else if (String::equal(property.getName().getString(), "ExportCount"))
			{
				Uint64 exportCountValue;
				property.getValue().get(exportCountValue);
				setExportCount(exportCountValue);
			}
			else if (String::equal(property.getName().getString(), "Direction"))
			{
				Uint16 directionValue;
				property.getValue().get(directionValue);
				setDirection(directionValue);
			}
	}
	return true;
}

Uint32 UNIX_InterLibraryPort::invokeRequestStateChange(
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

Uint32 UNIX_InterLibraryPort::invokeSetPowerState(
		Uint16 &inPowerState,
		CIMDateTime &inTime
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SetPowerState */
	
	
	
	return returnValue;
}

Uint32 UNIX_InterLibraryPort::invokeReset()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method Reset */
	
	
	
	return returnValue;
}

Uint32 UNIX_InterLibraryPort::invokeEnableDevice(
		Boolean &inEnabled
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method EnableDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_InterLibraryPort::invokeOnlineDevice(
		Boolean &inOnline
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method OnlineDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_InterLibraryPort::invokeQuiesceDevice(
		Boolean &inQuiesce
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method QuiesceDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_InterLibraryPort::invokeSaveProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SaveProperties */
	
	
	
	return returnValue;
}

Uint32 UNIX_InterLibraryPort::invokeRestoreProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method RestoreProperties */
	
	
	
	return returnValue;
}


Boolean UNIX_InterLibraryPort::initialize()
{
	return false;
}

Boolean UNIX_InterLibraryPort::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("InterLibraryPort");
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
	_creationClassName = String("UNIX_InterLibraryPort");
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
	_lastAccessed = CIMHelper::getCurrentTime();
	_importCount = Uint64(0);
	_exportCount = Uint64(0);
	_direction = Uint16(0);
	
	return false;
}

Boolean UNIX_InterLibraryPort::finalize()
{
	return false;
}

Boolean UNIX_InterLibraryPort::loadByName(const String name)
{
	return false;
}

Boolean UNIX_InterLibraryPort::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_InterLibraryPort::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_InterLibraryPort::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_InterLibraryPort::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_InterLibraryPort::validateInstance()
{
	return true;
}

