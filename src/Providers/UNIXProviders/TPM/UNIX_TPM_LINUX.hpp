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


UNIX_TPM::UNIX_TPM(void)
{
}

UNIX_TPM::~UNIX_TPM(void)
{
}

Boolean UNIX_TPM::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_TPM::getInstanceID() const
{
	return _instanceID;
}

void UNIX_TPM::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_TPM::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_TPM::getCaption() const
{
	return _caption;
}

void UNIX_TPM::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_TPM::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_TPM::getDescription() const
{
	return _description;
}

void UNIX_TPM::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_TPM::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_TPM::getElementName() const
{
	return _elementName;
}

void UNIX_TPM::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_TPM::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_TPM::getGeneration() const
{
	return _generation;
}

void UNIX_TPM::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_TPM::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_TPM::getInstallDate() const
{
	return _installDate;
}

void UNIX_TPM::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_TPM::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_TPM::getName() const
{
	return _name;
}

void UNIX_TPM::setName(String &value)
{
	_name = value;
}

Boolean UNIX_TPM::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_TPM::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_TPM::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_TPM::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_TPM::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_TPM::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_TPM::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_TPM::getStatus() const
{
	return _status;
}

void UNIX_TPM::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_TPM::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_TPM::getHealthState() const
{
	return _healthState;
}

void UNIX_TPM::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_TPM::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_TPM::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_TPM::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_TPM::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_TPM::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_TPM::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_TPM::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_TPM::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_TPM::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_TPM::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_TPM::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_TPM::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_TPM::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_TPM::getEnabledState() const
{
	return _enabledState;
}

void UNIX_TPM::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_TPM::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_TPM::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_TPM::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_TPM::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_TPM::getRequestedState() const
{
	return _requestedState;
}

void UNIX_TPM::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_TPM::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_TPM::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_TPM::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_TPM::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_TPM::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_TPM::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_TPM::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_TPM::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_TPM::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_TPM::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_TPM::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_TPM::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_TPM::getAllocationState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOCATION_STATE, getAllocationState());
	return true;
}

String UNIX_TPM::getAllocationState() const
{
	return _allocationState;
}

void UNIX_TPM::setAllocationState(String &value)
{
	_allocationState = value;
}

Boolean UNIX_TPM::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_TPM::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_TPM::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_TPM::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_TPM::getSystemName() const
{
	return _systemName;
}

void UNIX_TPM::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_TPM::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_TPM::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_TPM::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_TPM::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_TPM::getDeviceID() const
{
	return _deviceID;
}

void UNIX_TPM::setDeviceID(String &value)
{
	_deviceID = value;
}

Boolean UNIX_TPM::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_TPM::getPowerManagementSupported() const
{
	return _powerManagementSupported;
}

void UNIX_TPM::setPowerManagementSupported(Boolean &value)
{
	_powerManagementSupported = value;
}

Boolean UNIX_TPM::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_TPM::getPowerManagementCapabilities() const
{
	return _powerManagementCapabilities;
}

void UNIX_TPM::setPowerManagementCapabilities(Array<Uint16> &value)
{
	_powerManagementCapabilities = value;
}

Boolean UNIX_TPM::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_TPM::getAvailability() const
{
	return _availability;
}

void UNIX_TPM::setAvailability(Uint16 &value)
{
	_availability = value;
}

Boolean UNIX_TPM::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_TPM::getStatusInfo() const
{
	return _statusInfo;
}

void UNIX_TPM::setStatusInfo(Uint16 &value)
{
	_statusInfo = value;
}

Boolean UNIX_TPM::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_TPM::getLastErrorCode() const
{
	return _lastErrorCode;
}

void UNIX_TPM::setLastErrorCode(Uint32 &value)
{
	_lastErrorCode = value;
}

Boolean UNIX_TPM::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_TPM::getErrorDescription() const
{
	return _errorDescription;
}

void UNIX_TPM::setErrorDescription(String &value)
{
	_errorDescription = value;
}

Boolean UNIX_TPM::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_TPM::getErrorCleared() const
{
	return _errorCleared;
}

void UNIX_TPM::setErrorCleared(Boolean &value)
{
	_errorCleared = value;
}

Boolean UNIX_TPM::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_TPM::getOtherIdentifyingInfo() const
{
	return _otherIdentifyingInfo;
}

void UNIX_TPM::setOtherIdentifyingInfo(Array<String> &value)
{
	_otherIdentifyingInfo = value;
}

Boolean UNIX_TPM::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_TPM::getPowerOnHours() const
{
	return _powerOnHours;
}

void UNIX_TPM::setPowerOnHours(Uint64 &value)
{
	_powerOnHours = value;
}

Boolean UNIX_TPM::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_TPM::getTotalPowerOnHours() const
{
	return _totalPowerOnHours;
}

void UNIX_TPM::setTotalPowerOnHours(Uint64 &value)
{
	_totalPowerOnHours = value;
}

Boolean UNIX_TPM::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_TPM::getIdentifyingDescriptions() const
{
	return _identifyingDescriptions;
}

void UNIX_TPM::setIdentifyingDescriptions(Array<String> &value)
{
	_identifyingDescriptions = value;
}

Boolean UNIX_TPM::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_TPM::getAdditionalAvailability() const
{
	return _additionalAvailability;
}

void UNIX_TPM::setAdditionalAvailability(Array<Uint16> &value)
{
	_additionalAvailability = value;
}

Boolean UNIX_TPM::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_TPM::getMaxQuiesceTime() const
{
	return _maxQuiesceTime;
}

void UNIX_TPM::setMaxQuiesceTime(Uint64 &value)
{
	_maxQuiesceTime = value;
}

Boolean UNIX_TPM::getLocationIndicator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCATION_INDICATOR, getLocationIndicator());
	return true;
}

Uint16 UNIX_TPM::getLocationIndicator() const
{
	return _locationIndicator;
}

void UNIX_TPM::setLocationIndicator(Uint16 &value)
{
	_locationIndicator = value;
}

Boolean UNIX_TPM::getTPMSpecMajorVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TPM_SPEC_MAJOR_VERSION, getTPMSpecMajorVersion());
	return true;
}

Uint32 UNIX_TPM::getTPMSpecMajorVersion() const
{
	return _tPMSpecMajorVersion;
}

void UNIX_TPM::setTPMSpecMajorVersion(Uint32 &value)
{
	_tPMSpecMajorVersion = value;
}

Boolean UNIX_TPM::getTPMSpecMinorVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TPM_SPEC_MINOR_VERSION, getTPMSpecMinorVersion());
	return true;
}

Uint32 UNIX_TPM::getTPMSpecMinorVersion() const
{
	return _tPMSpecMinorVersion;
}

void UNIX_TPM::setTPMSpecMinorVersion(Uint32 &value)
{
	_tPMSpecMinorVersion = value;
}

Boolean UNIX_TPM::getTPMManafucturerMajorRevision(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TPM_MANAFUCTURER_MAJOR_REVISION, getTPMManafucturerMajorRevision());
	return true;
}

Uint32 UNIX_TPM::getTPMManafucturerMajorRevision() const
{
	return _tPMManafucturerMajorRevision;
}

void UNIX_TPM::setTPMManafucturerMajorRevision(Uint32 &value)
{
	_tPMManafucturerMajorRevision = value;
}

Boolean UNIX_TPM::getTPMManufacturerMinorRevision(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TPM_MANUFACTURER_MINOR_REVISION, getTPMManufacturerMinorRevision());
	return true;
}

Uint32 UNIX_TPM::getTPMManufacturerMinorRevision() const
{
	return _tPMManufacturerMinorRevision;
}

void UNIX_TPM::setTPMManufacturerMinorRevision(Uint32 &value)
{
	_tPMManufacturerMinorRevision = value;
}

Boolean UNIX_TPM::getTPMManufacturerInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TPM_MANUFACTURER_INFO, getTPMManufacturerInfo());
	return true;
}

String UNIX_TPM::getTPMManufacturerInfo() const
{
	return _tPMManufacturerInfo;
}

void UNIX_TPM::setTPMManufacturerInfo(String &value)
{
	_tPMManufacturerInfo = value;
}

Boolean UNIX_TPM::getTPMManufacturerId(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TPM_MANUFACTURER_ID, getTPMManufacturerId());
	return true;
}

Uint32 UNIX_TPM::getTPMManufacturerId() const
{
	return _tPMManufacturerId;
}

void UNIX_TPM::setTPMManufacturerId(Uint32 &value)
{
	_tPMManufacturerId = value;
}

Boolean UNIX_TPM::getTPMState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TPM_STATE, getTPMState());
	return true;
}

Uint16 UNIX_TPM::getTPMState() const
{
	return _tPMState;
}

void UNIX_TPM::setTPMState(Uint16 &value)
{
	_tPMState = value;
}

Boolean UNIX_TPM::getTransitioningToTPMState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_TPM_STATE, getTransitioningToTPMState());
	return true;
}

Uint16 UNIX_TPM::getTransitioningToTPMState() const
{
	return _transitioningToTPMState;
}

void UNIX_TPM::setTransitioningToTPMState(Uint16 &value)
{
	_transitioningToTPMState = value;
}

Boolean UNIX_TPM::getAvailableRequestedTPMStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_TPM_STATES, getAvailableRequestedTPMStates());
	return true;
}

Array<Uint16> UNIX_TPM::getAvailableRequestedTPMStates() const
{
	return _availableRequestedTPMStates;
}

void UNIX_TPM::setAvailableRequestedTPMStates(Array<Uint16> &value)
{
	_availableRequestedTPMStates = value;
}


void UNIX_TPM::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("TPM");
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
	_creationClassName = String("UNIX_TPM");
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
	_tPMSpecMajorVersion = Uint32(0);
	_tPMSpecMinorVersion = Uint32(0);
	_tPMManafucturerMajorRevision = Uint32(0);
	_tPMManufacturerMinorRevision = Uint32(0);
	_tPMManufacturerInfo = String ("");
	_tPMManufacturerId = Uint32(0);
	_tPMState = Uint16(0);
	_transitioningToTPMState = Uint16(0);
	_availableRequestedTPMStates.clear();

}

Boolean UNIX_TPM::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "TPMSpecMajorVersion"))
			{
				Uint32 tPMSpecMajorVersionValue;
				property.getValue().get(tPMSpecMajorVersionValue);
				setTPMSpecMajorVersion(tPMSpecMajorVersionValue);
			}
			else if (String::equal(property.getName().getString(), "TPMSpecMinorVersion"))
			{
				Uint32 tPMSpecMinorVersionValue;
				property.getValue().get(tPMSpecMinorVersionValue);
				setTPMSpecMinorVersion(tPMSpecMinorVersionValue);
			}
			else if (String::equal(property.getName().getString(), "TPMManafucturerMajorRevision"))
			{
				Uint32 tPMManafucturerMajorRevisionValue;
				property.getValue().get(tPMManafucturerMajorRevisionValue);
				setTPMManafucturerMajorRevision(tPMManafucturerMajorRevisionValue);
			}
			else if (String::equal(property.getName().getString(), "TPMManufacturerMinorRevision"))
			{
				Uint32 tPMManufacturerMinorRevisionValue;
				property.getValue().get(tPMManufacturerMinorRevisionValue);
				setTPMManufacturerMinorRevision(tPMManufacturerMinorRevisionValue);
			}
			else if (String::equal(property.getName().getString(), "TPMManufacturerInfo"))
			{
				String tPMManufacturerInfoValue;
				property.getValue().get(tPMManufacturerInfoValue);
				setTPMManufacturerInfo(tPMManufacturerInfoValue);
			}
			else if (String::equal(property.getName().getString(), "TPMManufacturerId"))
			{
				Uint32 tPMManufacturerIdValue;
				property.getValue().get(tPMManufacturerIdValue);
				setTPMManufacturerId(tPMManufacturerIdValue);
			}
			else if (String::equal(property.getName().getString(), "TPMState"))
			{
				Uint16 tPMStateValue;
				property.getValue().get(tPMStateValue);
				setTPMState(tPMStateValue);
			}
			else if (String::equal(property.getName().getString(), "TransitioningToTPMState"))
			{
				Uint16 transitioningToTPMStateValue;
				property.getValue().get(transitioningToTPMStateValue);
				setTransitioningToTPMState(transitioningToTPMStateValue);
			}
			else if (String::equal(property.getName().getString(), "AvailableRequestedTPMStates"))
			{
				Array<Uint16> availableRequestedTPMStatesValue;
				property.getValue().get(availableRequestedTPMStatesValue);
				setAvailableRequestedTPMStates(availableRequestedTPMStatesValue);
			}
	}
	return true;
}

Uint32 UNIX_TPM::invokeRequestStateChange(
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

Uint32 UNIX_TPM::invokeSetPowerState(
		Uint16 &inPowerState,
		CIMDateTime &inTime
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SetPowerState */
	
	
	
	return returnValue;
}

Uint32 UNIX_TPM::invokeReset()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method Reset */
	
	
	
	return returnValue;
}

Uint32 UNIX_TPM::invokeEnableDevice(
		Boolean &inEnabled
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method EnableDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_TPM::invokeOnlineDevice(
		Boolean &inOnline
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method OnlineDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_TPM::invokeQuiesceDevice(
		Boolean &inQuiesce
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method QuiesceDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_TPM::invokeSaveProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SaveProperties */
	
	
	
	return returnValue;
}

Uint32 UNIX_TPM::invokeRestoreProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method RestoreProperties */
	
	
	
	return returnValue;
}

Uint32 UNIX_TPM::invokeRequestTPMStateChange(
		Uint16 &inRequestedTPMState,
		String &inAuthorizationToken,
		CIMInstance &inJob,
		CIMDateTime &inTimeoutPeriod
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ConcreteJob inJobObject;
	inJobObject.loadInstance(inJob);
	
	/* Execute method RequestTPMStateChange */
	
	
	
	return returnValue;
}

Uint32 UNIX_TPM::invokeChangeOwnerAuth(
		String &inOldOwnerAuth,
		String &inNewOwnerAuth
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ChangeOwnerAuth */
	
	
	
	return returnValue;
}


Boolean UNIX_TPM::initialize()
{
	return false;
}

Boolean UNIX_TPM::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("TPM");
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
	_creationClassName = String("UNIX_TPM");
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
	_tPMSpecMajorVersion = Uint32(0);
	_tPMSpecMinorVersion = Uint32(0);
	_tPMManafucturerMajorRevision = Uint32(0);
	_tPMManufacturerMinorRevision = Uint32(0);
	_tPMManufacturerInfo = String ("");
	_tPMManufacturerId = Uint32(0);
	_tPMState = Uint16(0);
	_transitioningToTPMState = Uint16(0);
	_availableRequestedTPMStates.clear();
	
	return false;
}

Boolean UNIX_TPM::finalize()
{
	return false;
}

Boolean UNIX_TPM::loadByName(const String name)
{
	return false;
}

Boolean UNIX_TPM::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_TPM::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_TPM::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_TPM::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_TPM::validateInstance()
{
	return true;
}

