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


UNIX_CLPProtocolEndpoint::UNIX_CLPProtocolEndpoint(void)
{
}

UNIX_CLPProtocolEndpoint::~UNIX_CLPProtocolEndpoint(void)
{
}

Boolean UNIX_CLPProtocolEndpoint::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_CLPProtocolEndpoint::getInstanceID() const
{
	return _instanceID;
}

void UNIX_CLPProtocolEndpoint::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_CLPProtocolEndpoint::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_CLPProtocolEndpoint::getCaption() const
{
	return _caption;
}

void UNIX_CLPProtocolEndpoint::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_CLPProtocolEndpoint::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_CLPProtocolEndpoint::getDescription() const
{
	return _description;
}

void UNIX_CLPProtocolEndpoint::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_CLPProtocolEndpoint::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_CLPProtocolEndpoint::getElementName() const
{
	return _elementName;
}

void UNIX_CLPProtocolEndpoint::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_CLPProtocolEndpoint::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_CLPProtocolEndpoint::getGeneration() const
{
	return _generation;
}

void UNIX_CLPProtocolEndpoint::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_CLPProtocolEndpoint::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_CLPProtocolEndpoint::getInstallDate() const
{
	return _installDate;
}

void UNIX_CLPProtocolEndpoint::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_CLPProtocolEndpoint::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_CLPProtocolEndpoint::getName() const
{
	return _name;
}

void UNIX_CLPProtocolEndpoint::setName(String &value)
{
	_name = value;
}

Boolean UNIX_CLPProtocolEndpoint::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_CLPProtocolEndpoint::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_CLPProtocolEndpoint::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_CLPProtocolEndpoint::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_CLPProtocolEndpoint::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_CLPProtocolEndpoint::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_CLPProtocolEndpoint::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_CLPProtocolEndpoint::getStatus() const
{
	return _status;
}

void UNIX_CLPProtocolEndpoint::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_CLPProtocolEndpoint::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_CLPProtocolEndpoint::getHealthState() const
{
	return _healthState;
}

void UNIX_CLPProtocolEndpoint::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_CLPProtocolEndpoint::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_CLPProtocolEndpoint::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_CLPProtocolEndpoint::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_CLPProtocolEndpoint::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_CLPProtocolEndpoint::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_CLPProtocolEndpoint::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_CLPProtocolEndpoint::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_CLPProtocolEndpoint::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_CLPProtocolEndpoint::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_CLPProtocolEndpoint::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_CLPProtocolEndpoint::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_CLPProtocolEndpoint::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_CLPProtocolEndpoint::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_CLPProtocolEndpoint::getEnabledState() const
{
	return _enabledState;
}

void UNIX_CLPProtocolEndpoint::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_CLPProtocolEndpoint::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_CLPProtocolEndpoint::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_CLPProtocolEndpoint::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_CLPProtocolEndpoint::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_CLPProtocolEndpoint::getRequestedState() const
{
	return _requestedState;
}

void UNIX_CLPProtocolEndpoint::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_CLPProtocolEndpoint::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_CLPProtocolEndpoint::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_CLPProtocolEndpoint::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_CLPProtocolEndpoint::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_CLPProtocolEndpoint::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_CLPProtocolEndpoint::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_CLPProtocolEndpoint::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_CLPProtocolEndpoint::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_CLPProtocolEndpoint::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_CLPProtocolEndpoint::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_CLPProtocolEndpoint::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_CLPProtocolEndpoint::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_CLPProtocolEndpoint::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_CLPProtocolEndpoint::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_CLPProtocolEndpoint::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_CLPProtocolEndpoint::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_CLPProtocolEndpoint::getSystemName() const
{
	return _systemName;
}

void UNIX_CLPProtocolEndpoint::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_CLPProtocolEndpoint::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_CLPProtocolEndpoint::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_CLPProtocolEndpoint::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_CLPProtocolEndpoint::getNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_FORMAT, getNameFormat());
	return true;
}

String UNIX_CLPProtocolEndpoint::getNameFormat() const
{
	return _nameFormat;
}

void UNIX_CLPProtocolEndpoint::setNameFormat(String &value)
{
	_nameFormat = value;
}

Boolean UNIX_CLPProtocolEndpoint::getProtocolType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_TYPE, getProtocolType());
	return true;
}

Uint16 UNIX_CLPProtocolEndpoint::getProtocolType() const
{
	return _protocolType;
}

void UNIX_CLPProtocolEndpoint::setProtocolType(Uint16 &value)
{
	_protocolType = value;
}

Boolean UNIX_CLPProtocolEndpoint::getProtocolIFType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_I_F_TYPE, getProtocolIFType());
	return true;
}

Uint16 UNIX_CLPProtocolEndpoint::getProtocolIFType() const
{
	return _protocolIFType;
}

void UNIX_CLPProtocolEndpoint::setProtocolIFType(Uint16 &value)
{
	_protocolIFType = value;
}

Boolean UNIX_CLPProtocolEndpoint::getOtherTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TYPE_DESCRIPTION, getOtherTypeDescription());
	return true;
}

String UNIX_CLPProtocolEndpoint::getOtherTypeDescription() const
{
	return _otherTypeDescription;
}

void UNIX_CLPProtocolEndpoint::setOtherTypeDescription(String &value)
{
	_otherTypeDescription = value;
}

Boolean UNIX_CLPProtocolEndpoint::getBroadcastResetSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BROADCAST_RESET_SUPPORTED, getBroadcastResetSupported());
	return true;
}

Boolean UNIX_CLPProtocolEndpoint::getBroadcastResetSupported() const
{
	return _broadcastResetSupported;
}

void UNIX_CLPProtocolEndpoint::setBroadcastResetSupported(Boolean &value)
{
	_broadcastResetSupported = value;
}

Boolean UNIX_CLPProtocolEndpoint::getCurrentDefaultTarget(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_DEFAULT_TARGET, getCurrentDefaultTarget());
	return true;
}

String UNIX_CLPProtocolEndpoint::getCurrentDefaultTarget() const
{
	return _currentDefaultTarget;
}

void UNIX_CLPProtocolEndpoint::setCurrentDefaultTarget(String &value)
{
	_currentDefaultTarget = value;
}

Boolean UNIX_CLPProtocolEndpoint::getKeepTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_KEEP_TIME, getKeepTime());
	return true;
}

Uint16 UNIX_CLPProtocolEndpoint::getKeepTime() const
{
	return _keepTime;
}

void UNIX_CLPProtocolEndpoint::setKeepTime(Uint16 &value)
{
	_keepTime = value;
}

Boolean UNIX_CLPProtocolEndpoint::getWaitBehavior(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WAIT_BEHAVIOR, getWaitBehavior());
	return true;
}

Boolean UNIX_CLPProtocolEndpoint::getWaitBehavior() const
{
	return _waitBehavior;
}

void UNIX_CLPProtocolEndpoint::setWaitBehavior(Boolean &value)
{
	_waitBehavior = value;
}

Boolean UNIX_CLPProtocolEndpoint::getOutputFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OUTPUT_FORMAT, getOutputFormat());
	return true;
}

Uint16 UNIX_CLPProtocolEndpoint::getOutputFormat() const
{
	return _outputFormat;
}

void UNIX_CLPProtocolEndpoint::setOutputFormat(Uint16 &value)
{
	_outputFormat = value;
}

Boolean UNIX_CLPProtocolEndpoint::getOutputVerbosity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OUTPUT_VERBOSITY, getOutputVerbosity());
	return true;
}

Uint16 UNIX_CLPProtocolEndpoint::getOutputVerbosity() const
{
	return _outputVerbosity;
}

void UNIX_CLPProtocolEndpoint::setOutputVerbosity(Uint16 &value)
{
	_outputVerbosity = value;
}

Boolean UNIX_CLPProtocolEndpoint::getOutputLanguage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OUTPUT_LANGUAGE, getOutputLanguage());
	return true;
}

String UNIX_CLPProtocolEndpoint::getOutputLanguage() const
{
	return _outputLanguage;
}

void UNIX_CLPProtocolEndpoint::setOutputLanguage(String &value)
{
	_outputLanguage = value;
}

Boolean UNIX_CLPProtocolEndpoint::getOutputPosition(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OUTPUT_POSITION, getOutputPosition());
	return true;
}

Uint16 UNIX_CLPProtocolEndpoint::getOutputPosition() const
{
	return _outputPosition;
}

void UNIX_CLPProtocolEndpoint::setOutputPosition(Uint16 &value)
{
	_outputPosition = value;
}

Boolean UNIX_CLPProtocolEndpoint::getOutputOrder(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OUTPUT_ORDER, getOutputOrder());
	return true;
}

Uint16 UNIX_CLPProtocolEndpoint::getOutputOrder() const
{
	return _outputOrder;
}

void UNIX_CLPProtocolEndpoint::setOutputOrder(Uint16 &value)
{
	_outputOrder = value;
}

Boolean UNIX_CLPProtocolEndpoint::getOutputCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OUTPUT_COUNT, getOutputCount());
	return true;
}

Uint32 UNIX_CLPProtocolEndpoint::getOutputCount() const
{
	return _outputCount;
}

void UNIX_CLPProtocolEndpoint::setOutputCount(Uint32 &value)
{
	_outputCount = value;
}

Boolean UNIX_CLPProtocolEndpoint::getDisplayOption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DISPLAY_OPTION, getDisplayOption());
	return true;
}

String UNIX_CLPProtocolEndpoint::getDisplayOption() const
{
	return _displayOption;
}

void UNIX_CLPProtocolEndpoint::setDisplayOption(String &value)
{
	_displayOption = value;
}


void UNIX_CLPProtocolEndpoint::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("CLPProtocolEndpoint");
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
	_creationClassName = String("UNIX_CLPProtocolEndpoint");
	_nameFormat = String ("");
	_protocolType = Uint16(0);
	_protocolIFType = Uint16(0);
	_otherTypeDescription = String ("");
	_broadcastResetSupported = Boolean(false);
	_currentDefaultTarget = String ("");
	_keepTime = Uint16(0);
	_waitBehavior = Boolean(false);
	_outputFormat = Uint16(0);
	_outputVerbosity = Uint16(0);
	_outputLanguage = String ("");
	_outputPosition = Uint16(0);
	_outputOrder = Uint16(0);
	_outputCount = Uint32(0);
	_displayOption = String ("");

}

Boolean UNIX_CLPProtocolEndpoint::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "NameFormat"))
			{
				String nameFormatValue;
				property.getValue().get(nameFormatValue);
				setNameFormat(nameFormatValue);
			}
			else if (String::equal(property.getName().getString(), "ProtocolType"))
			{
				Uint16 protocolTypeValue;
				property.getValue().get(protocolTypeValue);
				setProtocolType(protocolTypeValue);
			}
			else if (String::equal(property.getName().getString(), "ProtocolIFType"))
			{
				Uint16 protocolIFTypeValue;
				property.getValue().get(protocolIFTypeValue);
				setProtocolIFType(protocolIFTypeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherTypeDescription"))
			{
				String otherTypeDescriptionValue;
				property.getValue().get(otherTypeDescriptionValue);
				setOtherTypeDescription(otherTypeDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "BroadcastResetSupported"))
			{
				Boolean broadcastResetSupportedValue;
				property.getValue().get(broadcastResetSupportedValue);
				setBroadcastResetSupported(broadcastResetSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "CurrentDefaultTarget"))
			{
				String currentDefaultTargetValue;
				property.getValue().get(currentDefaultTargetValue);
				setCurrentDefaultTarget(currentDefaultTargetValue);
			}
			else if (String::equal(property.getName().getString(), "KeepTime"))
			{
				Uint16 keepTimeValue;
				property.getValue().get(keepTimeValue);
				setKeepTime(keepTimeValue);
			}
			else if (String::equal(property.getName().getString(), "WaitBehavior"))
			{
				Boolean waitBehaviorValue;
				property.getValue().get(waitBehaviorValue);
				setWaitBehavior(waitBehaviorValue);
			}
			else if (String::equal(property.getName().getString(), "OutputFormat"))
			{
				Uint16 outputFormatValue;
				property.getValue().get(outputFormatValue);
				setOutputFormat(outputFormatValue);
			}
			else if (String::equal(property.getName().getString(), "OutputVerbosity"))
			{
				Uint16 outputVerbosityValue;
				property.getValue().get(outputVerbosityValue);
				setOutputVerbosity(outputVerbosityValue);
			}
			else if (String::equal(property.getName().getString(), "OutputLanguage"))
			{
				String outputLanguageValue;
				property.getValue().get(outputLanguageValue);
				setOutputLanguage(outputLanguageValue);
			}
			else if (String::equal(property.getName().getString(), "OutputPosition"))
			{
				Uint16 outputPositionValue;
				property.getValue().get(outputPositionValue);
				setOutputPosition(outputPositionValue);
			}
			else if (String::equal(property.getName().getString(), "OutputOrder"))
			{
				Uint16 outputOrderValue;
				property.getValue().get(outputOrderValue);
				setOutputOrder(outputOrderValue);
			}
			else if (String::equal(property.getName().getString(), "OutputCount"))
			{
				Uint32 outputCountValue;
				property.getValue().get(outputCountValue);
				setOutputCount(outputCountValue);
			}
			else if (String::equal(property.getName().getString(), "DisplayOption"))
			{
				String displayOptionValue;
				property.getValue().get(displayOptionValue);
				setDisplayOption(displayOptionValue);
			}
	}
	return true;
}

Uint32 UNIX_CLPProtocolEndpoint::invokeRequestStateChange(
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

Uint32 UNIX_CLPProtocolEndpoint::invokeBroadcastReset()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method BroadcastReset */
	
	
	
	return returnValue;
}


Boolean UNIX_CLPProtocolEndpoint::initialize()
{
	return false;
}

Boolean UNIX_CLPProtocolEndpoint::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("CLPProtocolEndpoint");
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
	_creationClassName = String("UNIX_CLPProtocolEndpoint");
	_nameFormat = String ("");
	_protocolType = Uint16(0);
	_protocolIFType = Uint16(0);
	_otherTypeDescription = String ("");
	_broadcastResetSupported = Boolean(false);
	_currentDefaultTarget = String ("");
	_keepTime = Uint16(0);
	_waitBehavior = Boolean(false);
	_outputFormat = Uint16(0);
	_outputVerbosity = Uint16(0);
	_outputLanguage = String ("");
	_outputPosition = Uint16(0);
	_outputOrder = Uint16(0);
	_outputCount = Uint32(0);
	_displayOption = String ("");
	
	return false;
}

Boolean UNIX_CLPProtocolEndpoint::finalize()
{
	return false;
}

Boolean UNIX_CLPProtocolEndpoint::loadByName(const String name)
{
	return false;
}

Boolean UNIX_CLPProtocolEndpoint::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_CLPProtocolEndpoint::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_CLPProtocolEndpoint::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_CLPProtocolEndpoint::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_CLPProtocolEndpoint::validateInstance()
{
	return true;
}

