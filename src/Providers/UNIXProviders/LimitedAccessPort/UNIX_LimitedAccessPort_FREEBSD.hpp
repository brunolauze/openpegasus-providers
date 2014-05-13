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


UNIX_LimitedAccessPort::UNIX_LimitedAccessPort(void)
{
}

UNIX_LimitedAccessPort::~UNIX_LimitedAccessPort(void)
{
}

Boolean UNIX_LimitedAccessPort::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_LimitedAccessPort::getInstanceID() const
{
	return _instanceID;
}

void UNIX_LimitedAccessPort::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_LimitedAccessPort::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_LimitedAccessPort::getCaption() const
{
	return _caption;
}

void UNIX_LimitedAccessPort::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_LimitedAccessPort::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_LimitedAccessPort::getDescription() const
{
	return _description;
}

void UNIX_LimitedAccessPort::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_LimitedAccessPort::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_LimitedAccessPort::getElementName() const
{
	return _elementName;
}

void UNIX_LimitedAccessPort::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_LimitedAccessPort::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_LimitedAccessPort::getGeneration() const
{
	return _generation;
}

void UNIX_LimitedAccessPort::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_LimitedAccessPort::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_LimitedAccessPort::getInstallDate() const
{
	return _installDate;
}

void UNIX_LimitedAccessPort::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_LimitedAccessPort::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_LimitedAccessPort::getName() const
{
	return _name;
}

void UNIX_LimitedAccessPort::setName(String &value)
{
	_name = value;
}

Boolean UNIX_LimitedAccessPort::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_LimitedAccessPort::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_LimitedAccessPort::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_LimitedAccessPort::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_LimitedAccessPort::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_LimitedAccessPort::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_LimitedAccessPort::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_LimitedAccessPort::getStatus() const
{
	return _status;
}

void UNIX_LimitedAccessPort::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_LimitedAccessPort::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_LimitedAccessPort::getHealthState() const
{
	return _healthState;
}

void UNIX_LimitedAccessPort::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_LimitedAccessPort::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_LimitedAccessPort::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_LimitedAccessPort::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_LimitedAccessPort::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_LimitedAccessPort::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_LimitedAccessPort::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_LimitedAccessPort::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_LimitedAccessPort::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_LimitedAccessPort::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_LimitedAccessPort::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_LimitedAccessPort::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_LimitedAccessPort::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_LimitedAccessPort::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_LimitedAccessPort::getEnabledState() const
{
	return _enabledState;
}

void UNIX_LimitedAccessPort::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_LimitedAccessPort::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_LimitedAccessPort::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_LimitedAccessPort::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_LimitedAccessPort::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_LimitedAccessPort::getRequestedState() const
{
	return _requestedState;
}

void UNIX_LimitedAccessPort::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_LimitedAccessPort::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_LimitedAccessPort::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_LimitedAccessPort::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_LimitedAccessPort::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_LimitedAccessPort::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_LimitedAccessPort::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_LimitedAccessPort::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_LimitedAccessPort::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_LimitedAccessPort::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_LimitedAccessPort::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_LimitedAccessPort::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_LimitedAccessPort::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_LimitedAccessPort::getAllocationState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOCATION_STATE, getAllocationState());
	return true;
}

String UNIX_LimitedAccessPort::getAllocationState() const
{
	return _allocationState;
}

void UNIX_LimitedAccessPort::setAllocationState(String &value)
{
	_allocationState = value;
}

Boolean UNIX_LimitedAccessPort::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_LimitedAccessPort::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_LimitedAccessPort::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_LimitedAccessPort::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_LimitedAccessPort::getSystemName() const
{
	return _systemName;
}

void UNIX_LimitedAccessPort::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_LimitedAccessPort::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_LimitedAccessPort::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_LimitedAccessPort::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_LimitedAccessPort::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_LimitedAccessPort::getDeviceID() const
{
	return _deviceID;
}

void UNIX_LimitedAccessPort::setDeviceID(String &value)
{
	_deviceID = value;
}

Boolean UNIX_LimitedAccessPort::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_LimitedAccessPort::getPowerManagementSupported() const
{
	return _powerManagementSupported;
}

void UNIX_LimitedAccessPort::setPowerManagementSupported(Boolean &value)
{
	_powerManagementSupported = value;
}

Boolean UNIX_LimitedAccessPort::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_LimitedAccessPort::getPowerManagementCapabilities() const
{
	return _powerManagementCapabilities;
}

void UNIX_LimitedAccessPort::setPowerManagementCapabilities(Array<Uint16> &value)
{
	_powerManagementCapabilities = value;
}

Boolean UNIX_LimitedAccessPort::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_LimitedAccessPort::getAvailability() const
{
	return _availability;
}

void UNIX_LimitedAccessPort::setAvailability(Uint16 &value)
{
	_availability = value;
}

Boolean UNIX_LimitedAccessPort::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_LimitedAccessPort::getStatusInfo() const
{
	return _statusInfo;
}

void UNIX_LimitedAccessPort::setStatusInfo(Uint16 &value)
{
	_statusInfo = value;
}

Boolean UNIX_LimitedAccessPort::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_LimitedAccessPort::getLastErrorCode() const
{
	return _lastErrorCode;
}

void UNIX_LimitedAccessPort::setLastErrorCode(Uint32 &value)
{
	_lastErrorCode = value;
}

Boolean UNIX_LimitedAccessPort::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_LimitedAccessPort::getErrorDescription() const
{
	return _errorDescription;
}

void UNIX_LimitedAccessPort::setErrorDescription(String &value)
{
	_errorDescription = value;
}

Boolean UNIX_LimitedAccessPort::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_LimitedAccessPort::getErrorCleared() const
{
	return _errorCleared;
}

void UNIX_LimitedAccessPort::setErrorCleared(Boolean &value)
{
	_errorCleared = value;
}

Boolean UNIX_LimitedAccessPort::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_LimitedAccessPort::getOtherIdentifyingInfo() const
{
	return _otherIdentifyingInfo;
}

void UNIX_LimitedAccessPort::setOtherIdentifyingInfo(Array<String> &value)
{
	_otherIdentifyingInfo = value;
}

Boolean UNIX_LimitedAccessPort::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_LimitedAccessPort::getPowerOnHours() const
{
	return _powerOnHours;
}

void UNIX_LimitedAccessPort::setPowerOnHours(Uint64 &value)
{
	_powerOnHours = value;
}

Boolean UNIX_LimitedAccessPort::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_LimitedAccessPort::getTotalPowerOnHours() const
{
	return _totalPowerOnHours;
}

void UNIX_LimitedAccessPort::setTotalPowerOnHours(Uint64 &value)
{
	_totalPowerOnHours = value;
}

Boolean UNIX_LimitedAccessPort::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_LimitedAccessPort::getIdentifyingDescriptions() const
{
	return _identifyingDescriptions;
}

void UNIX_LimitedAccessPort::setIdentifyingDescriptions(Array<String> &value)
{
	_identifyingDescriptions = value;
}

Boolean UNIX_LimitedAccessPort::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_LimitedAccessPort::getAdditionalAvailability() const
{
	return _additionalAvailability;
}

void UNIX_LimitedAccessPort::setAdditionalAvailability(Array<Uint16> &value)
{
	_additionalAvailability = value;
}

Boolean UNIX_LimitedAccessPort::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_LimitedAccessPort::getMaxQuiesceTime() const
{
	return _maxQuiesceTime;
}

void UNIX_LimitedAccessPort::setMaxQuiesceTime(Uint64 &value)
{
	_maxQuiesceTime = value;
}

Boolean UNIX_LimitedAccessPort::getLocationIndicator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCATION_INDICATOR, getLocationIndicator());
	return true;
}

Uint16 UNIX_LimitedAccessPort::getLocationIndicator() const
{
	return _locationIndicator;
}

void UNIX_LimitedAccessPort::setLocationIndicator(Uint16 &value)
{
	_locationIndicator = value;
}

Boolean UNIX_LimitedAccessPort::getLocked(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCKED, getLocked());
	return true;
}

Boolean UNIX_LimitedAccessPort::getLocked() const
{
	return _locked;
}

void UNIX_LimitedAccessPort::setLocked(Boolean &value)
{
	_locked = value;
}

Boolean UNIX_LimitedAccessPort::getExtended(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENDED, getExtended());
	return true;
}

Boolean UNIX_LimitedAccessPort::getExtended() const
{
	return _extended;
}

void UNIX_LimitedAccessPort::setExtended(Boolean &value)
{
	_extended = value;
}

Boolean UNIX_LimitedAccessPort::getExtendTimeout(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTEND_TIMEOUT, getExtendTimeout());
	return true;
}

Uint32 UNIX_LimitedAccessPort::getExtendTimeout() const
{
	return _extendTimeout;
}

void UNIX_LimitedAccessPort::setExtendTimeout(Uint32 &value)
{
	_extendTimeout = value;
}

Boolean UNIX_LimitedAccessPort::getLastExtended(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_EXTENDED, getLastExtended());
	return true;
}

CIMDateTime UNIX_LimitedAccessPort::getLastExtended() const
{
	return _lastExtended;
}

void UNIX_LimitedAccessPort::setLastExtended(CIMDateTime &value)
{
	_lastExtended = value;
}

Boolean UNIX_LimitedAccessPort::getImportCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IMPORT_COUNT, getImportCount());
	return true;
}

Uint64 UNIX_LimitedAccessPort::getImportCount() const
{
	return _importCount;
}

void UNIX_LimitedAccessPort::setImportCount(Uint64 &value)
{
	_importCount = value;
}

Boolean UNIX_LimitedAccessPort::getExportCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXPORT_COUNT, getExportCount());
	return true;
}

Uint64 UNIX_LimitedAccessPort::getExportCount() const
{
	return _exportCount;
}

void UNIX_LimitedAccessPort::setExportCount(Uint64 &value)
{
	_exportCount = value;
}

Boolean UNIX_LimitedAccessPort::getDirection(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DIRECTION, getDirection());
	return true;
}

Uint16 UNIX_LimitedAccessPort::getDirection() const
{
	return _direction;
}

void UNIX_LimitedAccessPort::setDirection(Uint16 &value)
{
	_direction = value;
}


void UNIX_LimitedAccessPort::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("LimitedAccessPort");
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
	_creationClassName = String("UNIX_LimitedAccessPort");
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
	_locked = Boolean(false);
	_extended = Boolean(false);
	_extendTimeout = Uint32(0);
	_lastExtended = CIMHelper::getCurrentTime();
	_importCount = Uint64(0);
	_exportCount = Uint64(0);
	_direction = Uint16(0);

}

Boolean UNIX_LimitedAccessPort::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "Locked"))
			{
				Boolean lockedValue;
				property.getValue().get(lockedValue);
				setLocked(lockedValue);
			}
			else if (String::equal(property.getName().getString(), "Extended"))
			{
				Boolean extendedValue;
				property.getValue().get(extendedValue);
				setExtended(extendedValue);
			}
			else if (String::equal(property.getName().getString(), "ExtendTimeout"))
			{
				Uint32 extendTimeoutValue;
				property.getValue().get(extendTimeoutValue);
				setExtendTimeout(extendTimeoutValue);
			}
			else if (String::equal(property.getName().getString(), "LastExtended"))
			{
				CIMDateTime lastExtendedValue;
				property.getValue().get(lastExtendedValue);
				setLastExtended(lastExtendedValue);
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

Uint32 UNIX_LimitedAccessPort::invokeRequestStateChange(
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

Uint32 UNIX_LimitedAccessPort::invokeSetPowerState(
		Uint16 &inPowerState,
		CIMDateTime &inTime
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SetPowerState */
	
	
	
	return returnValue;
}

Uint32 UNIX_LimitedAccessPort::invokeReset()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method Reset */
	
	
	
	return returnValue;
}

Uint32 UNIX_LimitedAccessPort::invokeEnableDevice(
		Boolean &inEnabled
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method EnableDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_LimitedAccessPort::invokeOnlineDevice(
		Boolean &inOnline
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method OnlineDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_LimitedAccessPort::invokeQuiesceDevice(
		Boolean &inQuiesce
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method QuiesceDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_LimitedAccessPort::invokeSaveProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SaveProperties */
	
	
	
	return returnValue;
}

Uint32 UNIX_LimitedAccessPort::invokeRestoreProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method RestoreProperties */
	
	
	
	return returnValue;
}


Boolean UNIX_LimitedAccessPort::initialize()
{
	return false;
}

Boolean UNIX_LimitedAccessPort::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("LimitedAccessPort");
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
	_creationClassName = String("UNIX_LimitedAccessPort");
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
	_locked = Boolean(false);
	_extended = Boolean(false);
	_extendTimeout = Uint32(0);
	_lastExtended = CIMHelper::getCurrentTime();
	_importCount = Uint64(0);
	_exportCount = Uint64(0);
	_direction = Uint16(0);
	
	return false;
}

Boolean UNIX_LimitedAccessPort::finalize()
{
	return false;
}

Boolean UNIX_LimitedAccessPort::loadByName(const String name)
{
	return false;
}

Boolean UNIX_LimitedAccessPort::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_LimitedAccessPort::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_LimitedAccessPort::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_LimitedAccessPort::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_LimitedAccessPort::validateInstance()
{
	return true;
}

