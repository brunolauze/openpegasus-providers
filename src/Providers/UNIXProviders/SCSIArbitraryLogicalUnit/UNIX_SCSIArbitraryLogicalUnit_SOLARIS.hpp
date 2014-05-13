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


UNIX_SCSIArbitraryLogicalUnit::UNIX_SCSIArbitraryLogicalUnit(void)
{
}

UNIX_SCSIArbitraryLogicalUnit::~UNIX_SCSIArbitraryLogicalUnit(void)
{
}

Boolean UNIX_SCSIArbitraryLogicalUnit::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_SCSIArbitraryLogicalUnit::getInstanceID() const
{
	return _instanceID;
}

void UNIX_SCSIArbitraryLogicalUnit::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_SCSIArbitraryLogicalUnit::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_SCSIArbitraryLogicalUnit::getCaption() const
{
	return _caption;
}

void UNIX_SCSIArbitraryLogicalUnit::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_SCSIArbitraryLogicalUnit::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_SCSIArbitraryLogicalUnit::getDescription() const
{
	return _description;
}

void UNIX_SCSIArbitraryLogicalUnit::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_SCSIArbitraryLogicalUnit::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_SCSIArbitraryLogicalUnit::getElementName() const
{
	return _elementName;
}

void UNIX_SCSIArbitraryLogicalUnit::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_SCSIArbitraryLogicalUnit::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_SCSIArbitraryLogicalUnit::getGeneration() const
{
	return _generation;
}

void UNIX_SCSIArbitraryLogicalUnit::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_SCSIArbitraryLogicalUnit::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_SCSIArbitraryLogicalUnit::getInstallDate() const
{
	return _installDate;
}

void UNIX_SCSIArbitraryLogicalUnit::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_SCSIArbitraryLogicalUnit::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_SCSIArbitraryLogicalUnit::getName() const
{
	return _name;
}

void UNIX_SCSIArbitraryLogicalUnit::setName(String &value)
{
	_name = value;
}

Boolean UNIX_SCSIArbitraryLogicalUnit::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_SCSIArbitraryLogicalUnit::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_SCSIArbitraryLogicalUnit::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_SCSIArbitraryLogicalUnit::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_SCSIArbitraryLogicalUnit::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_SCSIArbitraryLogicalUnit::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_SCSIArbitraryLogicalUnit::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_SCSIArbitraryLogicalUnit::getStatus() const
{
	return _status;
}

void UNIX_SCSIArbitraryLogicalUnit::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_SCSIArbitraryLogicalUnit::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_SCSIArbitraryLogicalUnit::getHealthState() const
{
	return _healthState;
}

void UNIX_SCSIArbitraryLogicalUnit::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_SCSIArbitraryLogicalUnit::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_SCSIArbitraryLogicalUnit::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_SCSIArbitraryLogicalUnit::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_SCSIArbitraryLogicalUnit::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_SCSIArbitraryLogicalUnit::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_SCSIArbitraryLogicalUnit::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_SCSIArbitraryLogicalUnit::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_SCSIArbitraryLogicalUnit::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_SCSIArbitraryLogicalUnit::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_SCSIArbitraryLogicalUnit::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_SCSIArbitraryLogicalUnit::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_SCSIArbitraryLogicalUnit::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_SCSIArbitraryLogicalUnit::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_SCSIArbitraryLogicalUnit::getEnabledState() const
{
	return _enabledState;
}

void UNIX_SCSIArbitraryLogicalUnit::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_SCSIArbitraryLogicalUnit::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_SCSIArbitraryLogicalUnit::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_SCSIArbitraryLogicalUnit::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_SCSIArbitraryLogicalUnit::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_SCSIArbitraryLogicalUnit::getRequestedState() const
{
	return _requestedState;
}

void UNIX_SCSIArbitraryLogicalUnit::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_SCSIArbitraryLogicalUnit::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_SCSIArbitraryLogicalUnit::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_SCSIArbitraryLogicalUnit::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_SCSIArbitraryLogicalUnit::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_SCSIArbitraryLogicalUnit::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_SCSIArbitraryLogicalUnit::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_SCSIArbitraryLogicalUnit::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_SCSIArbitraryLogicalUnit::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_SCSIArbitraryLogicalUnit::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_SCSIArbitraryLogicalUnit::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_SCSIArbitraryLogicalUnit::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_SCSIArbitraryLogicalUnit::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_SCSIArbitraryLogicalUnit::getAllocationState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOCATION_STATE, getAllocationState());
	return true;
}

String UNIX_SCSIArbitraryLogicalUnit::getAllocationState() const
{
	return _allocationState;
}

void UNIX_SCSIArbitraryLogicalUnit::setAllocationState(String &value)
{
	_allocationState = value;
}

Boolean UNIX_SCSIArbitraryLogicalUnit::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_SCSIArbitraryLogicalUnit::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_SCSIArbitraryLogicalUnit::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_SCSIArbitraryLogicalUnit::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_SCSIArbitraryLogicalUnit::getSystemName() const
{
	return _systemName;
}

void UNIX_SCSIArbitraryLogicalUnit::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_SCSIArbitraryLogicalUnit::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_SCSIArbitraryLogicalUnit::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_SCSIArbitraryLogicalUnit::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_SCSIArbitraryLogicalUnit::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_SCSIArbitraryLogicalUnit::getDeviceID() const
{
	return _deviceID;
}

void UNIX_SCSIArbitraryLogicalUnit::setDeviceID(String &value)
{
	_deviceID = value;
}

Boolean UNIX_SCSIArbitraryLogicalUnit::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_SCSIArbitraryLogicalUnit::getPowerManagementSupported() const
{
	return _powerManagementSupported;
}

void UNIX_SCSIArbitraryLogicalUnit::setPowerManagementSupported(Boolean &value)
{
	_powerManagementSupported = value;
}

Boolean UNIX_SCSIArbitraryLogicalUnit::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_SCSIArbitraryLogicalUnit::getPowerManagementCapabilities() const
{
	return _powerManagementCapabilities;
}

void UNIX_SCSIArbitraryLogicalUnit::setPowerManagementCapabilities(Array<Uint16> &value)
{
	_powerManagementCapabilities = value;
}

Boolean UNIX_SCSIArbitraryLogicalUnit::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_SCSIArbitraryLogicalUnit::getAvailability() const
{
	return _availability;
}

void UNIX_SCSIArbitraryLogicalUnit::setAvailability(Uint16 &value)
{
	_availability = value;
}

Boolean UNIX_SCSIArbitraryLogicalUnit::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_SCSIArbitraryLogicalUnit::getStatusInfo() const
{
	return _statusInfo;
}

void UNIX_SCSIArbitraryLogicalUnit::setStatusInfo(Uint16 &value)
{
	_statusInfo = value;
}

Boolean UNIX_SCSIArbitraryLogicalUnit::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_SCSIArbitraryLogicalUnit::getLastErrorCode() const
{
	return _lastErrorCode;
}

void UNIX_SCSIArbitraryLogicalUnit::setLastErrorCode(Uint32 &value)
{
	_lastErrorCode = value;
}

Boolean UNIX_SCSIArbitraryLogicalUnit::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_SCSIArbitraryLogicalUnit::getErrorDescription() const
{
	return _errorDescription;
}

void UNIX_SCSIArbitraryLogicalUnit::setErrorDescription(String &value)
{
	_errorDescription = value;
}

Boolean UNIX_SCSIArbitraryLogicalUnit::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_SCSIArbitraryLogicalUnit::getErrorCleared() const
{
	return _errorCleared;
}

void UNIX_SCSIArbitraryLogicalUnit::setErrorCleared(Boolean &value)
{
	_errorCleared = value;
}

Boolean UNIX_SCSIArbitraryLogicalUnit::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_SCSIArbitraryLogicalUnit::getOtherIdentifyingInfo() const
{
	return _otherIdentifyingInfo;
}

void UNIX_SCSIArbitraryLogicalUnit::setOtherIdentifyingInfo(Array<String> &value)
{
	_otherIdentifyingInfo = value;
}

Boolean UNIX_SCSIArbitraryLogicalUnit::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_SCSIArbitraryLogicalUnit::getPowerOnHours() const
{
	return _powerOnHours;
}

void UNIX_SCSIArbitraryLogicalUnit::setPowerOnHours(Uint64 &value)
{
	_powerOnHours = value;
}

Boolean UNIX_SCSIArbitraryLogicalUnit::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_SCSIArbitraryLogicalUnit::getTotalPowerOnHours() const
{
	return _totalPowerOnHours;
}

void UNIX_SCSIArbitraryLogicalUnit::setTotalPowerOnHours(Uint64 &value)
{
	_totalPowerOnHours = value;
}

Boolean UNIX_SCSIArbitraryLogicalUnit::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_SCSIArbitraryLogicalUnit::getIdentifyingDescriptions() const
{
	return _identifyingDescriptions;
}

void UNIX_SCSIArbitraryLogicalUnit::setIdentifyingDescriptions(Array<String> &value)
{
	_identifyingDescriptions = value;
}

Boolean UNIX_SCSIArbitraryLogicalUnit::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_SCSIArbitraryLogicalUnit::getAdditionalAvailability() const
{
	return _additionalAvailability;
}

void UNIX_SCSIArbitraryLogicalUnit::setAdditionalAvailability(Array<Uint16> &value)
{
	_additionalAvailability = value;
}

Boolean UNIX_SCSIArbitraryLogicalUnit::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_SCSIArbitraryLogicalUnit::getMaxQuiesceTime() const
{
	return _maxQuiesceTime;
}

void UNIX_SCSIArbitraryLogicalUnit::setMaxQuiesceTime(Uint64 &value)
{
	_maxQuiesceTime = value;
}

Boolean UNIX_SCSIArbitraryLogicalUnit::getLocationIndicator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCATION_INDICATOR, getLocationIndicator());
	return true;
}

Uint16 UNIX_SCSIArbitraryLogicalUnit::getLocationIndicator() const
{
	return _locationIndicator;
}

void UNIX_SCSIArbitraryLogicalUnit::setLocationIndicator(Uint16 &value)
{
	_locationIndicator = value;
}

Boolean UNIX_SCSIArbitraryLogicalUnit::getDeviceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_TYPE, getDeviceType());
	return true;
}

Uint16 UNIX_SCSIArbitraryLogicalUnit::getDeviceType() const
{
	return _deviceType;
}

void UNIX_SCSIArbitraryLogicalUnit::setDeviceType(Uint16 &value)
{
	_deviceType = value;
}

Boolean UNIX_SCSIArbitraryLogicalUnit::getOtherDeviceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_DEVICE_TYPE, getOtherDeviceType());
	return true;
}

String UNIX_SCSIArbitraryLogicalUnit::getOtherDeviceType() const
{
	return _otherDeviceType;
}

void UNIX_SCSIArbitraryLogicalUnit::setOtherDeviceType(String &value)
{
	_otherDeviceType = value;
}


void UNIX_SCSIArbitraryLogicalUnit::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("SCSIArbitraryLogicalUnit");
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
	_creationClassName = String("UNIX_SCSIArbitraryLogicalUnit");
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
	_deviceType = Uint16(0);
	_otherDeviceType = String ("");

}

Boolean UNIX_SCSIArbitraryLogicalUnit::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "DeviceType"))
			{
				Uint16 deviceTypeValue;
				property.getValue().get(deviceTypeValue);
				setDeviceType(deviceTypeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherDeviceType"))
			{
				String otherDeviceTypeValue;
				property.getValue().get(otherDeviceTypeValue);
				setOtherDeviceType(otherDeviceTypeValue);
			}
	}
	return true;
}

Uint32 UNIX_SCSIArbitraryLogicalUnit::invokeRequestStateChange(
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

Uint32 UNIX_SCSIArbitraryLogicalUnit::invokeSetPowerState(
		Uint16 &inPowerState,
		CIMDateTime &inTime
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SetPowerState */
	
	
	
	return returnValue;
}

Uint32 UNIX_SCSIArbitraryLogicalUnit::invokeReset()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method Reset */
	
	
	
	return returnValue;
}

Uint32 UNIX_SCSIArbitraryLogicalUnit::invokeEnableDevice(
		Boolean &inEnabled
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method EnableDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_SCSIArbitraryLogicalUnit::invokeOnlineDevice(
		Boolean &inOnline
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method OnlineDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_SCSIArbitraryLogicalUnit::invokeQuiesceDevice(
		Boolean &inQuiesce
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method QuiesceDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_SCSIArbitraryLogicalUnit::invokeSaveProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SaveProperties */
	
	
	
	return returnValue;
}

Uint32 UNIX_SCSIArbitraryLogicalUnit::invokeRestoreProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method RestoreProperties */
	
	
	
	return returnValue;
}


Boolean UNIX_SCSIArbitraryLogicalUnit::initialize()
{
	return false;
}

Boolean UNIX_SCSIArbitraryLogicalUnit::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("SCSIArbitraryLogicalUnit");
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
	_creationClassName = String("UNIX_SCSIArbitraryLogicalUnit");
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
	_deviceType = Uint16(0);
	_otherDeviceType = String ("");
	
	return false;
}

Boolean UNIX_SCSIArbitraryLogicalUnit::finalize()
{
	return false;
}

Boolean UNIX_SCSIArbitraryLogicalUnit::loadByName(const String name)
{
	return false;
}

Boolean UNIX_SCSIArbitraryLogicalUnit::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_SCSIArbitraryLogicalUnit::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SCSIArbitraryLogicalUnit::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SCSIArbitraryLogicalUnit::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SCSIArbitraryLogicalUnit::validateInstance()
{
	return true;
}

