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


UNIX_IBPortController::UNIX_IBPortController(void)
{
}

UNIX_IBPortController::~UNIX_IBPortController(void)
{
}

Boolean UNIX_IBPortController::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_IBPortController::getInstanceID() const
{
	return _instanceID;
}

void UNIX_IBPortController::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_IBPortController::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_IBPortController::getCaption() const
{
	return _caption;
}

void UNIX_IBPortController::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_IBPortController::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_IBPortController::getDescription() const
{
	return _description;
}

void UNIX_IBPortController::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_IBPortController::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_IBPortController::getElementName() const
{
	return _elementName;
}

void UNIX_IBPortController::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_IBPortController::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_IBPortController::getGeneration() const
{
	return _generation;
}

void UNIX_IBPortController::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_IBPortController::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_IBPortController::getInstallDate() const
{
	return _installDate;
}

void UNIX_IBPortController::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_IBPortController::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_IBPortController::getName() const
{
	return _name;
}

void UNIX_IBPortController::setName(String &value)
{
	_name = value;
}

Boolean UNIX_IBPortController::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_IBPortController::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_IBPortController::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_IBPortController::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_IBPortController::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_IBPortController::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_IBPortController::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_IBPortController::getStatus() const
{
	return _status;
}

void UNIX_IBPortController::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_IBPortController::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_IBPortController::getHealthState() const
{
	return _healthState;
}

void UNIX_IBPortController::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_IBPortController::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_IBPortController::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_IBPortController::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_IBPortController::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_IBPortController::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_IBPortController::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_IBPortController::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_IBPortController::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_IBPortController::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_IBPortController::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_IBPortController::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_IBPortController::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_IBPortController::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_IBPortController::getEnabledState() const
{
	return _enabledState;
}

void UNIX_IBPortController::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_IBPortController::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_IBPortController::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_IBPortController::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_IBPortController::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_IBPortController::getRequestedState() const
{
	return _requestedState;
}

void UNIX_IBPortController::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_IBPortController::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_IBPortController::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_IBPortController::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_IBPortController::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_IBPortController::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_IBPortController::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_IBPortController::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_IBPortController::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_IBPortController::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_IBPortController::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_IBPortController::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_IBPortController::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_IBPortController::getAllocationState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOCATION_STATE, getAllocationState());
	return true;
}

String UNIX_IBPortController::getAllocationState() const
{
	return _allocationState;
}

void UNIX_IBPortController::setAllocationState(String &value)
{
	_allocationState = value;
}

Boolean UNIX_IBPortController::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_IBPortController::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_IBPortController::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_IBPortController::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_IBPortController::getSystemName() const
{
	return _systemName;
}

void UNIX_IBPortController::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_IBPortController::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_IBPortController::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_IBPortController::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_IBPortController::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_IBPortController::getDeviceID() const
{
	return _deviceID;
}

void UNIX_IBPortController::setDeviceID(String &value)
{
	_deviceID = value;
}

Boolean UNIX_IBPortController::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_IBPortController::getPowerManagementSupported() const
{
	return _powerManagementSupported;
}

void UNIX_IBPortController::setPowerManagementSupported(Boolean &value)
{
	_powerManagementSupported = value;
}

Boolean UNIX_IBPortController::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_IBPortController::getPowerManagementCapabilities() const
{
	return _powerManagementCapabilities;
}

void UNIX_IBPortController::setPowerManagementCapabilities(Array<Uint16> &value)
{
	_powerManagementCapabilities = value;
}

Boolean UNIX_IBPortController::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_IBPortController::getAvailability() const
{
	return _availability;
}

void UNIX_IBPortController::setAvailability(Uint16 &value)
{
	_availability = value;
}

Boolean UNIX_IBPortController::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_IBPortController::getStatusInfo() const
{
	return _statusInfo;
}

void UNIX_IBPortController::setStatusInfo(Uint16 &value)
{
	_statusInfo = value;
}

Boolean UNIX_IBPortController::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_IBPortController::getLastErrorCode() const
{
	return _lastErrorCode;
}

void UNIX_IBPortController::setLastErrorCode(Uint32 &value)
{
	_lastErrorCode = value;
}

Boolean UNIX_IBPortController::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_IBPortController::getErrorDescription() const
{
	return _errorDescription;
}

void UNIX_IBPortController::setErrorDescription(String &value)
{
	_errorDescription = value;
}

Boolean UNIX_IBPortController::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_IBPortController::getErrorCleared() const
{
	return _errorCleared;
}

void UNIX_IBPortController::setErrorCleared(Boolean &value)
{
	_errorCleared = value;
}

Boolean UNIX_IBPortController::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_IBPortController::getOtherIdentifyingInfo() const
{
	return _otherIdentifyingInfo;
}

void UNIX_IBPortController::setOtherIdentifyingInfo(Array<String> &value)
{
	_otherIdentifyingInfo = value;
}

Boolean UNIX_IBPortController::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_IBPortController::getPowerOnHours() const
{
	return _powerOnHours;
}

void UNIX_IBPortController::setPowerOnHours(Uint64 &value)
{
	_powerOnHours = value;
}

Boolean UNIX_IBPortController::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_IBPortController::getTotalPowerOnHours() const
{
	return _totalPowerOnHours;
}

void UNIX_IBPortController::setTotalPowerOnHours(Uint64 &value)
{
	_totalPowerOnHours = value;
}

Boolean UNIX_IBPortController::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_IBPortController::getIdentifyingDescriptions() const
{
	return _identifyingDescriptions;
}

void UNIX_IBPortController::setIdentifyingDescriptions(Array<String> &value)
{
	_identifyingDescriptions = value;
}

Boolean UNIX_IBPortController::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_IBPortController::getAdditionalAvailability() const
{
	return _additionalAvailability;
}

void UNIX_IBPortController::setAdditionalAvailability(Array<Uint16> &value)
{
	_additionalAvailability = value;
}

Boolean UNIX_IBPortController::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_IBPortController::getMaxQuiesceTime() const
{
	return _maxQuiesceTime;
}

void UNIX_IBPortController::setMaxQuiesceTime(Uint64 &value)
{
	_maxQuiesceTime = value;
}

Boolean UNIX_IBPortController::getLocationIndicator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCATION_INDICATOR, getLocationIndicator());
	return true;
}

Uint16 UNIX_IBPortController::getLocationIndicator() const
{
	return _locationIndicator;
}

void UNIX_IBPortController::setLocationIndicator(Uint16 &value)
{
	_locationIndicator = value;
}

Boolean UNIX_IBPortController::getTimeOfLastReset(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_RESET, getTimeOfLastReset());
	return true;
}

CIMDateTime UNIX_IBPortController::getTimeOfLastReset() const
{
	return _timeOfLastReset;
}

void UNIX_IBPortController::setTimeOfLastReset(CIMDateTime &value)
{
	_timeOfLastReset = value;
}

Boolean UNIX_IBPortController::getProtocolSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_SUPPORTED, getProtocolSupported());
	return true;
}

Uint16 UNIX_IBPortController::getProtocolSupported() const
{
	return _protocolSupported;
}

void UNIX_IBPortController::setProtocolSupported(Uint16 &value)
{
	_protocolSupported = value;
}

Boolean UNIX_IBPortController::getMaxNumberControlled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_NUMBER_CONTROLLED, getMaxNumberControlled());
	return true;
}

Uint32 UNIX_IBPortController::getMaxNumberControlled() const
{
	return _maxNumberControlled;
}

void UNIX_IBPortController::setMaxNumberControlled(Uint32 &value)
{
	_maxNumberControlled = value;
}

Boolean UNIX_IBPortController::getProtocolDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_DESCRIPTION, getProtocolDescription());
	return true;
}

String UNIX_IBPortController::getProtocolDescription() const
{
	return _protocolDescription;
}

void UNIX_IBPortController::setProtocolDescription(String &value)
{
	_protocolDescription = value;
}

Boolean UNIX_IBPortController::getControllerType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONTROLLER_TYPE, getControllerType());
	return true;
}

Uint16 UNIX_IBPortController::getControllerType() const
{
	return _controllerType;
}

void UNIX_IBPortController::setControllerType(Uint16 &value)
{
	_controllerType = value;
}

Boolean UNIX_IBPortController::getOtherControllerType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_CONTROLLER_TYPE, getOtherControllerType());
	return true;
}

String UNIX_IBPortController::getOtherControllerType() const
{
	return _otherControllerType;
}

void UNIX_IBPortController::setOtherControllerType(String &value)
{
	_otherControllerType = value;
}

Boolean UNIX_IBPortController::getControllerVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONTROLLER_VERSION, getControllerVersion());
	return true;
}

Uint16 UNIX_IBPortController::getControllerVersion() const
{
	return _controllerVersion;
}

void UNIX_IBPortController::setControllerVersion(Uint16 &value)
{
	_controllerVersion = value;
}

Boolean UNIX_IBPortController::getAdapterDiagnosticCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADAPTER_DIAGNOSTIC_CODE, getAdapterDiagnosticCode());
	return true;
}

Uint32 UNIX_IBPortController::getAdapterDiagnosticCode() const
{
	return _adapterDiagnosticCode;
}

void UNIX_IBPortController::setAdapterDiagnosticCode(Uint32 &value)
{
	_adapterDiagnosticCode = value;
}


void UNIX_IBPortController::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("IBPortController");
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
	_creationClassName = String("UNIX_IBPortController");
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
	_timeOfLastReset = CIMHelper::getCurrentTime();
	_protocolSupported = Uint16(0);
	_maxNumberControlled = Uint32(0);
	_protocolDescription = String ("");
	_controllerType = Uint16(0);
	_otherControllerType = String ("");
	_controllerVersion = Uint16(0);
	_adapterDiagnosticCode = Uint32(0);

}

Boolean UNIX_IBPortController::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "TimeOfLastReset"))
			{
				CIMDateTime timeOfLastResetValue;
				property.getValue().get(timeOfLastResetValue);
				setTimeOfLastReset(timeOfLastResetValue);
			}
			else if (String::equal(property.getName().getString(), "ProtocolSupported"))
			{
				Uint16 protocolSupportedValue;
				property.getValue().get(protocolSupportedValue);
				setProtocolSupported(protocolSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "MaxNumberControlled"))
			{
				Uint32 maxNumberControlledValue;
				property.getValue().get(maxNumberControlledValue);
				setMaxNumberControlled(maxNumberControlledValue);
			}
			else if (String::equal(property.getName().getString(), "ProtocolDescription"))
			{
				String protocolDescriptionValue;
				property.getValue().get(protocolDescriptionValue);
				setProtocolDescription(protocolDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "ControllerType"))
			{
				Uint16 controllerTypeValue;
				property.getValue().get(controllerTypeValue);
				setControllerType(controllerTypeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherControllerType"))
			{
				String otherControllerTypeValue;
				property.getValue().get(otherControllerTypeValue);
				setOtherControllerType(otherControllerTypeValue);
			}
			else if (String::equal(property.getName().getString(), "ControllerVersion"))
			{
				Uint16 controllerVersionValue;
				property.getValue().get(controllerVersionValue);
				setControllerVersion(controllerVersionValue);
			}
			else if (String::equal(property.getName().getString(), "AdapterDiagnosticCode"))
			{
				Uint32 adapterDiagnosticCodeValue;
				property.getValue().get(adapterDiagnosticCodeValue);
				setAdapterDiagnosticCode(adapterDiagnosticCodeValue);
			}
	}
	return true;
}

Uint32 UNIX_IBPortController::invokeRequestStateChange(
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

Uint32 UNIX_IBPortController::invokeSetPowerState(
		Uint16 &inPowerState,
		CIMDateTime &inTime
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SetPowerState */
	
	
	
	return returnValue;
}

Uint32 UNIX_IBPortController::invokeReset()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method Reset */
	
	
	
	return returnValue;
}

Uint32 UNIX_IBPortController::invokeEnableDevice(
		Boolean &inEnabled
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method EnableDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_IBPortController::invokeOnlineDevice(
		Boolean &inOnline
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method OnlineDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_IBPortController::invokeQuiesceDevice(
		Boolean &inQuiesce
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method QuiesceDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_IBPortController::invokeSaveProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SaveProperties */
	
	
	
	return returnValue;
}

Uint32 UNIX_IBPortController::invokeRestoreProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method RestoreProperties */
	
	
	
	return returnValue;
}


Boolean UNIX_IBPortController::initialize()
{
	return false;
}

Boolean UNIX_IBPortController::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("IBPortController");
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
	_creationClassName = String("UNIX_IBPortController");
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
	_timeOfLastReset = CIMHelper::getCurrentTime();
	_protocolSupported = Uint16(0);
	_maxNumberControlled = Uint32(0);
	_protocolDescription = String ("");
	_controllerType = Uint16(0);
	_otherControllerType = String ("");
	_controllerVersion = Uint16(0);
	_adapterDiagnosticCode = Uint32(0);
	
	return false;
}

Boolean UNIX_IBPortController::finalize()
{
	return false;
}

Boolean UNIX_IBPortController::loadByName(const String name)
{
	return false;
}

Boolean UNIX_IBPortController::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_IBPortController::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IBPortController::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IBPortController::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IBPortController::validateInstance()
{
	return true;
}

