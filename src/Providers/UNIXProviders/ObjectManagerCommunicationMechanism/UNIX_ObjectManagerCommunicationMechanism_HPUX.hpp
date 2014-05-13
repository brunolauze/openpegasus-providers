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


UNIX_ObjectManagerCommunicationMechanism::UNIX_ObjectManagerCommunicationMechanism(void)
{
}

UNIX_ObjectManagerCommunicationMechanism::~UNIX_ObjectManagerCommunicationMechanism(void)
{
}

Boolean UNIX_ObjectManagerCommunicationMechanism::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_ObjectManagerCommunicationMechanism::getInstanceID() const
{
	return _instanceID;
}

void UNIX_ObjectManagerCommunicationMechanism::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_ObjectManagerCommunicationMechanism::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_ObjectManagerCommunicationMechanism::getCaption() const
{
	return _caption;
}

void UNIX_ObjectManagerCommunicationMechanism::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_ObjectManagerCommunicationMechanism::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_ObjectManagerCommunicationMechanism::getDescription() const
{
	return _description;
}

void UNIX_ObjectManagerCommunicationMechanism::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_ObjectManagerCommunicationMechanism::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_ObjectManagerCommunicationMechanism::getElementName() const
{
	return _elementName;
}

void UNIX_ObjectManagerCommunicationMechanism::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_ObjectManagerCommunicationMechanism::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_ObjectManagerCommunicationMechanism::getGeneration() const
{
	return _generation;
}

void UNIX_ObjectManagerCommunicationMechanism::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_ObjectManagerCommunicationMechanism::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_ObjectManagerCommunicationMechanism::getInstallDate() const
{
	return _installDate;
}

void UNIX_ObjectManagerCommunicationMechanism::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_ObjectManagerCommunicationMechanism::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_ObjectManagerCommunicationMechanism::getName() const
{
	return _name;
}

void UNIX_ObjectManagerCommunicationMechanism::setName(String &value)
{
	_name = value;
}

Boolean UNIX_ObjectManagerCommunicationMechanism::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_ObjectManagerCommunicationMechanism::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_ObjectManagerCommunicationMechanism::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_ObjectManagerCommunicationMechanism::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_ObjectManagerCommunicationMechanism::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_ObjectManagerCommunicationMechanism::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_ObjectManagerCommunicationMechanism::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_ObjectManagerCommunicationMechanism::getStatus() const
{
	return _status;
}

void UNIX_ObjectManagerCommunicationMechanism::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_ObjectManagerCommunicationMechanism::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_ObjectManagerCommunicationMechanism::getHealthState() const
{
	return _healthState;
}

void UNIX_ObjectManagerCommunicationMechanism::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_ObjectManagerCommunicationMechanism::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_ObjectManagerCommunicationMechanism::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_ObjectManagerCommunicationMechanism::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_ObjectManagerCommunicationMechanism::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_ObjectManagerCommunicationMechanism::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_ObjectManagerCommunicationMechanism::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_ObjectManagerCommunicationMechanism::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_ObjectManagerCommunicationMechanism::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_ObjectManagerCommunicationMechanism::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_ObjectManagerCommunicationMechanism::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_ObjectManagerCommunicationMechanism::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_ObjectManagerCommunicationMechanism::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_ObjectManagerCommunicationMechanism::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_ObjectManagerCommunicationMechanism::getEnabledState() const
{
	return _enabledState;
}

void UNIX_ObjectManagerCommunicationMechanism::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_ObjectManagerCommunicationMechanism::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_ObjectManagerCommunicationMechanism::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_ObjectManagerCommunicationMechanism::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_ObjectManagerCommunicationMechanism::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_ObjectManagerCommunicationMechanism::getRequestedState() const
{
	return _requestedState;
}

void UNIX_ObjectManagerCommunicationMechanism::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_ObjectManagerCommunicationMechanism::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_ObjectManagerCommunicationMechanism::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_ObjectManagerCommunicationMechanism::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_ObjectManagerCommunicationMechanism::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_ObjectManagerCommunicationMechanism::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_ObjectManagerCommunicationMechanism::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_ObjectManagerCommunicationMechanism::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_ObjectManagerCommunicationMechanism::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_ObjectManagerCommunicationMechanism::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_ObjectManagerCommunicationMechanism::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_ObjectManagerCommunicationMechanism::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_ObjectManagerCommunicationMechanism::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_ObjectManagerCommunicationMechanism::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_ObjectManagerCommunicationMechanism::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_ObjectManagerCommunicationMechanism::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_ObjectManagerCommunicationMechanism::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_ObjectManagerCommunicationMechanism::getSystemName() const
{
	return _systemName;
}

void UNIX_ObjectManagerCommunicationMechanism::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_ObjectManagerCommunicationMechanism::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_ObjectManagerCommunicationMechanism::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_ObjectManagerCommunicationMechanism::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_ObjectManagerCommunicationMechanism::getCommunicationMechanism(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_MECHANISM, getCommunicationMechanism());
	return true;
}

Uint16 UNIX_ObjectManagerCommunicationMechanism::getCommunicationMechanism() const
{
	return _communicationMechanism;
}

void UNIX_ObjectManagerCommunicationMechanism::setCommunicationMechanism(Uint16 &value)
{
	_communicationMechanism = value;
}

Boolean UNIX_ObjectManagerCommunicationMechanism::getOtherCommunicationMechanismDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_COMMUNICATION_MECHANISM_DESCRIPTION, getOtherCommunicationMechanismDescription());
	return true;
}

String UNIX_ObjectManagerCommunicationMechanism::getOtherCommunicationMechanismDescription() const
{
	return _otherCommunicationMechanismDescription;
}

void UNIX_ObjectManagerCommunicationMechanism::setOtherCommunicationMechanismDescription(String &value)
{
	_otherCommunicationMechanismDescription = value;
}

Boolean UNIX_ObjectManagerCommunicationMechanism::getFunctionalProfilesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FUNCTIONAL_PROFILES_SUPPORTED, getFunctionalProfilesSupported());
	return true;
}

Array<Uint16> UNIX_ObjectManagerCommunicationMechanism::getFunctionalProfilesSupported() const
{
	return _functionalProfilesSupported;
}

void UNIX_ObjectManagerCommunicationMechanism::setFunctionalProfilesSupported(Array<Uint16> &value)
{
	_functionalProfilesSupported = value;
}

Boolean UNIX_ObjectManagerCommunicationMechanism::getFunctionalProfileDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FUNCTIONAL_PROFILE_DESCRIPTIONS, getFunctionalProfileDescriptions());
	return true;
}

Array<String> UNIX_ObjectManagerCommunicationMechanism::getFunctionalProfileDescriptions() const
{
	return _functionalProfileDescriptions;
}

void UNIX_ObjectManagerCommunicationMechanism::setFunctionalProfileDescriptions(Array<String> &value)
{
	_functionalProfileDescriptions = value;
}

Boolean UNIX_ObjectManagerCommunicationMechanism::getMultipleOperationsSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MULTIPLE_OPERATIONS_SUPPORTED, getMultipleOperationsSupported());
	return true;
}

Boolean UNIX_ObjectManagerCommunicationMechanism::getMultipleOperationsSupported() const
{
	return _multipleOperationsSupported;
}

void UNIX_ObjectManagerCommunicationMechanism::setMultipleOperationsSupported(Boolean &value)
{
	_multipleOperationsSupported = value;
}

Boolean UNIX_ObjectManagerCommunicationMechanism::getAuthenticationMechanismsSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTHENTICATION_MECHANISMS_SUPPORTED, getAuthenticationMechanismsSupported());
	return true;
}

Array<Uint16> UNIX_ObjectManagerCommunicationMechanism::getAuthenticationMechanismsSupported() const
{
	return _authenticationMechanismsSupported;
}

void UNIX_ObjectManagerCommunicationMechanism::setAuthenticationMechanismsSupported(Array<Uint16> &value)
{
	_authenticationMechanismsSupported = value;
}

Boolean UNIX_ObjectManagerCommunicationMechanism::getAuthenticationMechanismDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTHENTICATION_MECHANISM_DESCRIPTIONS, getAuthenticationMechanismDescriptions());
	return true;
}

Array<String> UNIX_ObjectManagerCommunicationMechanism::getAuthenticationMechanismDescriptions() const
{
	return _authenticationMechanismDescriptions;
}

void UNIX_ObjectManagerCommunicationMechanism::setAuthenticationMechanismDescriptions(Array<String> &value)
{
	_authenticationMechanismDescriptions = value;
}

Boolean UNIX_ObjectManagerCommunicationMechanism::getVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERSION, getVersion());
	return true;
}

String UNIX_ObjectManagerCommunicationMechanism::getVersion() const
{
	return _version;
}

void UNIX_ObjectManagerCommunicationMechanism::setVersion(String &value)
{
	_version = value;
}

Boolean UNIX_ObjectManagerCommunicationMechanism::getAdvertiseTypes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADVERTISE_TYPES, getAdvertiseTypes());
	return true;
}

Array<Uint16> UNIX_ObjectManagerCommunicationMechanism::getAdvertiseTypes() const
{
	return _advertiseTypes;
}

void UNIX_ObjectManagerCommunicationMechanism::setAdvertiseTypes(Array<Uint16> &value)
{
	_advertiseTypes = value;
}

Boolean UNIX_ObjectManagerCommunicationMechanism::getAdvertiseTypeDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADVERTISE_TYPE_DESCRIPTIONS, getAdvertiseTypeDescriptions());
	return true;
}

Array<String> UNIX_ObjectManagerCommunicationMechanism::getAdvertiseTypeDescriptions() const
{
	return _advertiseTypeDescriptions;
}

void UNIX_ObjectManagerCommunicationMechanism::setAdvertiseTypeDescriptions(Array<String> &value)
{
	_advertiseTypeDescriptions = value;
}


void UNIX_ObjectManagerCommunicationMechanism::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("ObjectManagerCommunicationMechanism");
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
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_creationClassName = String("UNIX_ObjectManagerCommunicationMechanism");
	_communicationMechanism = Uint16(0);
	_otherCommunicationMechanismDescription = String ("");
	_functionalProfilesSupported.clear();
	_functionalProfileDescriptions.clear();
	_multipleOperationsSupported = Boolean(false);
	_authenticationMechanismsSupported.clear();
	_authenticationMechanismDescriptions.clear();
	_version = String ("");
	_advertiseTypes.clear();
	_advertiseTypeDescriptions.clear();

}

Boolean UNIX_ObjectManagerCommunicationMechanism::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "CommunicationMechanism"))
			{
				Uint16 communicationMechanismValue;
				property.getValue().get(communicationMechanismValue);
				setCommunicationMechanism(communicationMechanismValue);
			}
			else if (String::equal(property.getName().getString(), "OtherCommunicationMechanismDescription"))
			{
				String otherCommunicationMechanismDescriptionValue;
				property.getValue().get(otherCommunicationMechanismDescriptionValue);
				setOtherCommunicationMechanismDescription(otherCommunicationMechanismDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "FunctionalProfilesSupported"))
			{
				Array<Uint16> functionalProfilesSupportedValue;
				property.getValue().get(functionalProfilesSupportedValue);
				setFunctionalProfilesSupported(functionalProfilesSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "FunctionalProfileDescriptions"))
			{
				Array<String> functionalProfileDescriptionsValue;
				property.getValue().get(functionalProfileDescriptionsValue);
				setFunctionalProfileDescriptions(functionalProfileDescriptionsValue);
			}
			else if (String::equal(property.getName().getString(), "MultipleOperationsSupported"))
			{
				Boolean multipleOperationsSupportedValue;
				property.getValue().get(multipleOperationsSupportedValue);
				setMultipleOperationsSupported(multipleOperationsSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "AuthenticationMechanismsSupported"))
			{
				Array<Uint16> authenticationMechanismsSupportedValue;
				property.getValue().get(authenticationMechanismsSupportedValue);
				setAuthenticationMechanismsSupported(authenticationMechanismsSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "AuthenticationMechanismDescriptions"))
			{
				Array<String> authenticationMechanismDescriptionsValue;
				property.getValue().get(authenticationMechanismDescriptionsValue);
				setAuthenticationMechanismDescriptions(authenticationMechanismDescriptionsValue);
			}
			else if (String::equal(property.getName().getString(), "Version"))
			{
				String versionValue;
				property.getValue().get(versionValue);
				setVersion(versionValue);
			}
			else if (String::equal(property.getName().getString(), "AdvertiseTypes"))
			{
				Array<Uint16> advertiseTypesValue;
				property.getValue().get(advertiseTypesValue);
				setAdvertiseTypes(advertiseTypesValue);
			}
			else if (String::equal(property.getName().getString(), "AdvertiseTypeDescriptions"))
			{
				Array<String> advertiseTypeDescriptionsValue;
				property.getValue().get(advertiseTypeDescriptionsValue);
				setAdvertiseTypeDescriptions(advertiseTypeDescriptionsValue);
			}
	}
	return true;
}

Uint32 UNIX_ObjectManagerCommunicationMechanism::invokeRequestStateChange(
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


Boolean UNIX_ObjectManagerCommunicationMechanism::initialize()
{
	return false;
}

Boolean UNIX_ObjectManagerCommunicationMechanism::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("ObjectManagerCommunicationMechanism");
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
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_creationClassName = String("UNIX_ObjectManagerCommunicationMechanism");
	_communicationMechanism = Uint16(0);
	_otherCommunicationMechanismDescription = String ("");
	_functionalProfilesSupported.clear();
	_functionalProfileDescriptions.clear();
	_multipleOperationsSupported = Boolean(false);
	_authenticationMechanismsSupported.clear();
	_authenticationMechanismDescriptions.clear();
	_version = String ("");
	_advertiseTypes.clear();
	_advertiseTypeDescriptions.clear();
	
	return false;
}

Boolean UNIX_ObjectManagerCommunicationMechanism::finalize()
{
	return false;
}

Boolean UNIX_ObjectManagerCommunicationMechanism::loadByName(const String name)
{
	return false;
}

Boolean UNIX_ObjectManagerCommunicationMechanism::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String systemCreationClassNameKey;
	String systemNameKey;
	String creationClassNameKey;
	String nameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SYSTEM_CREATION_CLASS_NAME)) systemCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SYSTEM_NAME)) systemNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getSystemCreationClassName(), systemCreationClassNameKey)) && 
			(String::equalNoCase(getSystemName(), systemNameKey)) && 
			(String::equalNoCase(getCreationClassName(), creationClassNameKey)) && 
			(String::equalNoCase(getName(), nameKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_ObjectManagerCommunicationMechanism::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ObjectManagerCommunicationMechanism::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ObjectManagerCommunicationMechanism::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ObjectManagerCommunicationMechanism::validateInstance()
{
	return true;
}

