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


UNIX_LaunchInContextSAP::UNIX_LaunchInContextSAP(void)
{
}

UNIX_LaunchInContextSAP::~UNIX_LaunchInContextSAP(void)
{
}

Boolean UNIX_LaunchInContextSAP::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_LaunchInContextSAP::getInstanceID() const
{
	return _instanceID;
}

void UNIX_LaunchInContextSAP::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_LaunchInContextSAP::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_LaunchInContextSAP::getCaption() const
{
	return _caption;
}

void UNIX_LaunchInContextSAP::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_LaunchInContextSAP::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_LaunchInContextSAP::getDescription() const
{
	return _description;
}

void UNIX_LaunchInContextSAP::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_LaunchInContextSAP::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_LaunchInContextSAP::getElementName() const
{
	return _elementName;
}

void UNIX_LaunchInContextSAP::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_LaunchInContextSAP::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_LaunchInContextSAP::getGeneration() const
{
	return _generation;
}

void UNIX_LaunchInContextSAP::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_LaunchInContextSAP::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_LaunchInContextSAP::getInstallDate() const
{
	return _installDate;
}

void UNIX_LaunchInContextSAP::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_LaunchInContextSAP::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_LaunchInContextSAP::getName() const
{
	return _name;
}

void UNIX_LaunchInContextSAP::setName(String &value)
{
	_name = value;
}

Boolean UNIX_LaunchInContextSAP::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_LaunchInContextSAP::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_LaunchInContextSAP::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_LaunchInContextSAP::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_LaunchInContextSAP::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_LaunchInContextSAP::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_LaunchInContextSAP::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_LaunchInContextSAP::getStatus() const
{
	return _status;
}

void UNIX_LaunchInContextSAP::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_LaunchInContextSAP::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_LaunchInContextSAP::getHealthState() const
{
	return _healthState;
}

void UNIX_LaunchInContextSAP::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_LaunchInContextSAP::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_LaunchInContextSAP::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_LaunchInContextSAP::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_LaunchInContextSAP::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_LaunchInContextSAP::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_LaunchInContextSAP::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_LaunchInContextSAP::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_LaunchInContextSAP::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_LaunchInContextSAP::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_LaunchInContextSAP::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_LaunchInContextSAP::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_LaunchInContextSAP::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_LaunchInContextSAP::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_LaunchInContextSAP::getEnabledState() const
{
	return _enabledState;
}

void UNIX_LaunchInContextSAP::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_LaunchInContextSAP::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_LaunchInContextSAP::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_LaunchInContextSAP::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_LaunchInContextSAP::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_LaunchInContextSAP::getRequestedState() const
{
	return _requestedState;
}

void UNIX_LaunchInContextSAP::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_LaunchInContextSAP::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_LaunchInContextSAP::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_LaunchInContextSAP::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_LaunchInContextSAP::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_LaunchInContextSAP::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_LaunchInContextSAP::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_LaunchInContextSAP::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_LaunchInContextSAP::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_LaunchInContextSAP::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_LaunchInContextSAP::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_LaunchInContextSAP::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_LaunchInContextSAP::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_LaunchInContextSAP::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_LaunchInContextSAP::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_LaunchInContextSAP::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_LaunchInContextSAP::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_LaunchInContextSAP::getSystemName() const
{
	return _systemName;
}

void UNIX_LaunchInContextSAP::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_LaunchInContextSAP::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_LaunchInContextSAP::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_LaunchInContextSAP::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_LaunchInContextSAP::getAccessInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCESS_INFO, getAccessInfo());
	return true;
}

String UNIX_LaunchInContextSAP::getAccessInfo() const
{
	return _accessInfo;
}

void UNIX_LaunchInContextSAP::setAccessInfo(String &value)
{
	_accessInfo = value;
}

Boolean UNIX_LaunchInContextSAP::getInfoFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INFO_FORMAT, getInfoFormat());
	return true;
}

Uint16 UNIX_LaunchInContextSAP::getInfoFormat() const
{
	return _infoFormat;
}

void UNIX_LaunchInContextSAP::setInfoFormat(Uint16 &value)
{
	_infoFormat = value;
}

Boolean UNIX_LaunchInContextSAP::getOtherInfoFormatDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_INFO_FORMAT_DESCRIPTION, getOtherInfoFormatDescription());
	return true;
}

String UNIX_LaunchInContextSAP::getOtherInfoFormatDescription() const
{
	return _otherInfoFormatDescription;
}

void UNIX_LaunchInContextSAP::setOtherInfoFormatDescription(String &value)
{
	_otherInfoFormatDescription = value;
}

Boolean UNIX_LaunchInContextSAP::getAccessContext(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCESS_CONTEXT, getAccessContext());
	return true;
}

Uint16 UNIX_LaunchInContextSAP::getAccessContext() const
{
	return _accessContext;
}

void UNIX_LaunchInContextSAP::setAccessContext(Uint16 &value)
{
	_accessContext = value;
}

Boolean UNIX_LaunchInContextSAP::getOtherAccessContext(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ACCESS_CONTEXT, getOtherAccessContext());
	return true;
}

String UNIX_LaunchInContextSAP::getOtherAccessContext() const
{
	return _otherAccessContext;
}

void UNIX_LaunchInContextSAP::setOtherAccessContext(String &value)
{
	_otherAccessContext = value;
}

Boolean UNIX_LaunchInContextSAP::getParameterName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PARAMETER_NAME, getParameterName());
	return true;
}

Array<String> UNIX_LaunchInContextSAP::getParameterName() const
{
	return _parameterName;
}

void UNIX_LaunchInContextSAP::setParameterName(Array<String> &value)
{
	_parameterName = value;
}

Boolean UNIX_LaunchInContextSAP::getParameterDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PARAMETER_DESCRIPTION, getParameterDescription());
	return true;
}

Array<String> UNIX_LaunchInContextSAP::getParameterDescription() const
{
	return _parameterDescription;
}

void UNIX_LaunchInContextSAP::setParameterDescription(Array<String> &value)
{
	_parameterDescription = value;
}

Boolean UNIX_LaunchInContextSAP::getParameterDerivation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PARAMETER_DERIVATION, getParameterDerivation());
	return true;
}

Array<String> UNIX_LaunchInContextSAP::getParameterDerivation() const
{
	return _parameterDerivation;
}

void UNIX_LaunchInContextSAP::setParameterDerivation(Array<String> &value)
{
	_parameterDerivation = value;
}

Boolean UNIX_LaunchInContextSAP::getParameterConstraints(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PARAMETER_CONSTRAINTS, getParameterConstraints());
	return true;
}

Array<String> UNIX_LaunchInContextSAP::getParameterConstraints() const
{
	return _parameterConstraints;
}

void UNIX_LaunchInContextSAP::setParameterConstraints(Array<String> &value)
{
	_parameterConstraints = value;
}

Boolean UNIX_LaunchInContextSAP::getParameterType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PARAMETER_TYPE, getParameterType());
	return true;
}

Array<Uint16> UNIX_LaunchInContextSAP::getParameterType() const
{
	return _parameterType;
}

void UNIX_LaunchInContextSAP::setParameterType(Array<Uint16> &value)
{
	_parameterType = value;
}

Boolean UNIX_LaunchInContextSAP::getSupportedFeatureName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_FEATURE_NAME, getSupportedFeatureName());
	return true;
}

Array<String> UNIX_LaunchInContextSAP::getSupportedFeatureName() const
{
	return _supportedFeatureName;
}

void UNIX_LaunchInContextSAP::setSupportedFeatureName(Array<String> &value)
{
	_supportedFeatureName = value;
}

Boolean UNIX_LaunchInContextSAP::getSupportedFeatureDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_FEATURE_DESCRIPTION, getSupportedFeatureDescription());
	return true;
}

Array<String> UNIX_LaunchInContextSAP::getSupportedFeatureDescription() const
{
	return _supportedFeatureDescription;
}

void UNIX_LaunchInContextSAP::setSupportedFeatureDescription(Array<String> &value)
{
	_supportedFeatureDescription = value;
}

Boolean UNIX_LaunchInContextSAP::getManagedClasses(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANAGED_CLASSES, getManagedClasses());
	return true;
}

Array<String> UNIX_LaunchInContextSAP::getManagedClasses() const
{
	return _managedClasses;
}

void UNIX_LaunchInContextSAP::setManagedClasses(Array<String> &value)
{
	_managedClasses = value;
}

Boolean UNIX_LaunchInContextSAP::getManagementIsRestricted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANAGEMENT_IS_RESTRICTED, getManagementIsRestricted());
	return true;
}

Boolean UNIX_LaunchInContextSAP::getManagementIsRestricted() const
{
	return _managementIsRestricted;
}

void UNIX_LaunchInContextSAP::setManagementIsRestricted(Boolean &value)
{
	_managementIsRestricted = value;
}

Boolean UNIX_LaunchInContextSAP::getLaunchMessage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAUNCH_MESSAGE, getLaunchMessage());
	return true;
}

String UNIX_LaunchInContextSAP::getLaunchMessage() const
{
	return _launchMessage;
}

void UNIX_LaunchInContextSAP::setLaunchMessage(String &value)
{
	_launchMessage = value;
}

Boolean UNIX_LaunchInContextSAP::getLaunchMessageProtocolOperation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAUNCH_MESSAGE_PROTOCOL_OPERATION, getLaunchMessageProtocolOperation());
	return true;
}

Uint16 UNIX_LaunchInContextSAP::getLaunchMessageProtocolOperation() const
{
	return _launchMessageProtocolOperation;
}

void UNIX_LaunchInContextSAP::setLaunchMessageProtocolOperation(Uint16 &value)
{
	_launchMessageProtocolOperation = value;
}


void UNIX_LaunchInContextSAP::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("LaunchInContextSAP");
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
	_creationClassName = String("UNIX_LaunchInContextSAP");
	_accessInfo = String ("");
	_infoFormat = Uint16(0);
	_otherInfoFormatDescription = String ("");
	_accessContext = Uint16(0);
	_otherAccessContext = String ("");
	_parameterName.clear();
	_parameterDescription.clear();
	_parameterDerivation.clear();
	_parameterConstraints.clear();
	_parameterType.clear();
	_supportedFeatureName.clear();
	_supportedFeatureDescription.clear();
	_managedClasses.clear();
	_managementIsRestricted = Boolean(false);
	_launchMessage = String ("");
	_launchMessageProtocolOperation = Uint16(0);

}

Boolean UNIX_LaunchInContextSAP::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "AccessInfo"))
			{
				String accessInfoValue;
				property.getValue().get(accessInfoValue);
				setAccessInfo(accessInfoValue);
			}
			else if (String::equal(property.getName().getString(), "InfoFormat"))
			{
				Uint16 infoFormatValue;
				property.getValue().get(infoFormatValue);
				setInfoFormat(infoFormatValue);
			}
			else if (String::equal(property.getName().getString(), "OtherInfoFormatDescription"))
			{
				String otherInfoFormatDescriptionValue;
				property.getValue().get(otherInfoFormatDescriptionValue);
				setOtherInfoFormatDescription(otherInfoFormatDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "AccessContext"))
			{
				Uint16 accessContextValue;
				property.getValue().get(accessContextValue);
				setAccessContext(accessContextValue);
			}
			else if (String::equal(property.getName().getString(), "OtherAccessContext"))
			{
				String otherAccessContextValue;
				property.getValue().get(otherAccessContextValue);
				setOtherAccessContext(otherAccessContextValue);
			}
			else if (String::equal(property.getName().getString(), "ParameterName"))
			{
				Array<String> parameterNameValue;
				property.getValue().get(parameterNameValue);
				setParameterName(parameterNameValue);
			}
			else if (String::equal(property.getName().getString(), "ParameterDescription"))
			{
				Array<String> parameterDescriptionValue;
				property.getValue().get(parameterDescriptionValue);
				setParameterDescription(parameterDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "ParameterDerivation"))
			{
				Array<String> parameterDerivationValue;
				property.getValue().get(parameterDerivationValue);
				setParameterDerivation(parameterDerivationValue);
			}
			else if (String::equal(property.getName().getString(), "ParameterConstraints"))
			{
				Array<String> parameterConstraintsValue;
				property.getValue().get(parameterConstraintsValue);
				setParameterConstraints(parameterConstraintsValue);
			}
			else if (String::equal(property.getName().getString(), "ParameterType"))
			{
				Array<Uint16> parameterTypeValue;
				property.getValue().get(parameterTypeValue);
				setParameterType(parameterTypeValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedFeatureName"))
			{
				Array<String> supportedFeatureNameValue;
				property.getValue().get(supportedFeatureNameValue);
				setSupportedFeatureName(supportedFeatureNameValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedFeatureDescription"))
			{
				Array<String> supportedFeatureDescriptionValue;
				property.getValue().get(supportedFeatureDescriptionValue);
				setSupportedFeatureDescription(supportedFeatureDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "ManagedClasses"))
			{
				Array<String> managedClassesValue;
				property.getValue().get(managedClassesValue);
				setManagedClasses(managedClassesValue);
			}
			else if (String::equal(property.getName().getString(), "ManagementIsRestricted"))
			{
				Boolean managementIsRestrictedValue;
				property.getValue().get(managementIsRestrictedValue);
				setManagementIsRestricted(managementIsRestrictedValue);
			}
			else if (String::equal(property.getName().getString(), "LaunchMessage"))
			{
				String launchMessageValue;
				property.getValue().get(launchMessageValue);
				setLaunchMessage(launchMessageValue);
			}
			else if (String::equal(property.getName().getString(), "LaunchMessageProtocolOperation"))
			{
				Uint16 launchMessageProtocolOperationValue;
				property.getValue().get(launchMessageProtocolOperationValue);
				setLaunchMessageProtocolOperation(launchMessageProtocolOperationValue);
			}
	}
	return true;
}

Uint32 UNIX_LaunchInContextSAP::invokeRequestStateChange(
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

Uint32 UNIX_LaunchInContextSAP::invokeGetDerivedParametersForElement(
		CIMInstance &inSelf,
		Array<String> &inParameterValue
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method GetDerivedParametersForElement */
	
	
	
	return returnValue;
}


Boolean UNIX_LaunchInContextSAP::initialize()
{
	return false;
}

Boolean UNIX_LaunchInContextSAP::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("LaunchInContextSAP");
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
	_creationClassName = String("UNIX_LaunchInContextSAP");
	_accessInfo = String ("");
	_infoFormat = Uint16(0);
	_otherInfoFormatDescription = String ("");
	_accessContext = Uint16(0);
	_otherAccessContext = String ("");
	_parameterName.clear();
	_parameterDescription.clear();
	_parameterDerivation.clear();
	_parameterConstraints.clear();
	_parameterType.clear();
	_supportedFeatureName.clear();
	_supportedFeatureDescription.clear();
	_managedClasses.clear();
	_managementIsRestricted = Boolean(false);
	_launchMessage = String ("");
	_launchMessageProtocolOperation = Uint16(0);
	
	return false;
}

Boolean UNIX_LaunchInContextSAP::finalize()
{
	return false;
}

Boolean UNIX_LaunchInContextSAP::loadByName(const String name)
{
	return false;
}

Boolean UNIX_LaunchInContextSAP::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_LaunchInContextSAP::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_LaunchInContextSAP::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_LaunchInContextSAP::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_LaunchInContextSAP::validateInstance()
{
	return true;
}

