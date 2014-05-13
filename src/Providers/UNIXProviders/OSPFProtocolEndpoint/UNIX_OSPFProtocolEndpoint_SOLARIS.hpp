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


UNIX_OSPFProtocolEndpoint::UNIX_OSPFProtocolEndpoint(void)
{
}

UNIX_OSPFProtocolEndpoint::~UNIX_OSPFProtocolEndpoint(void)
{
}

Boolean UNIX_OSPFProtocolEndpoint::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_OSPFProtocolEndpoint::getInstanceID() const
{
	return _instanceID;
}

void UNIX_OSPFProtocolEndpoint::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_OSPFProtocolEndpoint::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_OSPFProtocolEndpoint::getCaption() const
{
	return _caption;
}

void UNIX_OSPFProtocolEndpoint::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_OSPFProtocolEndpoint::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_OSPFProtocolEndpoint::getDescription() const
{
	return _description;
}

void UNIX_OSPFProtocolEndpoint::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_OSPFProtocolEndpoint::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_OSPFProtocolEndpoint::getElementName() const
{
	return _elementName;
}

void UNIX_OSPFProtocolEndpoint::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_OSPFProtocolEndpoint::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_OSPFProtocolEndpoint::getGeneration() const
{
	return _generation;
}

void UNIX_OSPFProtocolEndpoint::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_OSPFProtocolEndpoint::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_OSPFProtocolEndpoint::getInstallDate() const
{
	return _installDate;
}

void UNIX_OSPFProtocolEndpoint::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_OSPFProtocolEndpoint::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_OSPFProtocolEndpoint::getName() const
{
	return _name;
}

void UNIX_OSPFProtocolEndpoint::setName(String &value)
{
	_name = value;
}

Boolean UNIX_OSPFProtocolEndpoint::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_OSPFProtocolEndpoint::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_OSPFProtocolEndpoint::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_OSPFProtocolEndpoint::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_OSPFProtocolEndpoint::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_OSPFProtocolEndpoint::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_OSPFProtocolEndpoint::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_OSPFProtocolEndpoint::getStatus() const
{
	return _status;
}

void UNIX_OSPFProtocolEndpoint::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_OSPFProtocolEndpoint::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_OSPFProtocolEndpoint::getHealthState() const
{
	return _healthState;
}

void UNIX_OSPFProtocolEndpoint::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_OSPFProtocolEndpoint::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_OSPFProtocolEndpoint::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_OSPFProtocolEndpoint::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_OSPFProtocolEndpoint::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_OSPFProtocolEndpoint::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_OSPFProtocolEndpoint::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_OSPFProtocolEndpoint::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_OSPFProtocolEndpoint::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_OSPFProtocolEndpoint::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_OSPFProtocolEndpoint::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_OSPFProtocolEndpoint::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_OSPFProtocolEndpoint::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_OSPFProtocolEndpoint::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_OSPFProtocolEndpoint::getEnabledState() const
{
	return _enabledState;
}

void UNIX_OSPFProtocolEndpoint::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_OSPFProtocolEndpoint::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_OSPFProtocolEndpoint::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_OSPFProtocolEndpoint::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_OSPFProtocolEndpoint::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_OSPFProtocolEndpoint::getRequestedState() const
{
	return _requestedState;
}

void UNIX_OSPFProtocolEndpoint::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_OSPFProtocolEndpoint::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_OSPFProtocolEndpoint::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_OSPFProtocolEndpoint::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_OSPFProtocolEndpoint::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_OSPFProtocolEndpoint::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_OSPFProtocolEndpoint::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_OSPFProtocolEndpoint::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_OSPFProtocolEndpoint::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_OSPFProtocolEndpoint::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_OSPFProtocolEndpoint::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_OSPFProtocolEndpoint::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_OSPFProtocolEndpoint::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_OSPFProtocolEndpoint::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_OSPFProtocolEndpoint::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_OSPFProtocolEndpoint::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_OSPFProtocolEndpoint::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_OSPFProtocolEndpoint::getSystemName() const
{
	return _systemName;
}

void UNIX_OSPFProtocolEndpoint::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_OSPFProtocolEndpoint::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_OSPFProtocolEndpoint::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_OSPFProtocolEndpoint::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_OSPFProtocolEndpoint::getNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_FORMAT, getNameFormat());
	return true;
}

String UNIX_OSPFProtocolEndpoint::getNameFormat() const
{
	return _nameFormat;
}

void UNIX_OSPFProtocolEndpoint::setNameFormat(String &value)
{
	_nameFormat = value;
}

Boolean UNIX_OSPFProtocolEndpoint::getProtocolType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_TYPE, getProtocolType());
	return true;
}

Uint16 UNIX_OSPFProtocolEndpoint::getProtocolType() const
{
	return _protocolType;
}

void UNIX_OSPFProtocolEndpoint::setProtocolType(Uint16 &value)
{
	_protocolType = value;
}

Boolean UNIX_OSPFProtocolEndpoint::getProtocolIFType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_I_F_TYPE, getProtocolIFType());
	return true;
}

Uint16 UNIX_OSPFProtocolEndpoint::getProtocolIFType() const
{
	return _protocolIFType;
}

void UNIX_OSPFProtocolEndpoint::setProtocolIFType(Uint16 &value)
{
	_protocolIFType = value;
}

Boolean UNIX_OSPFProtocolEndpoint::getOtherTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TYPE_DESCRIPTION, getOtherTypeDescription());
	return true;
}

String UNIX_OSPFProtocolEndpoint::getOtherTypeDescription() const
{
	return _otherTypeDescription;
}

void UNIX_OSPFProtocolEndpoint::setOtherTypeDescription(String &value)
{
	_otherTypeDescription = value;
}

Boolean UNIX_OSPFProtocolEndpoint::getBroadcastResetSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BROADCAST_RESET_SUPPORTED, getBroadcastResetSupported());
	return true;
}

Boolean UNIX_OSPFProtocolEndpoint::getBroadcastResetSupported() const
{
	return _broadcastResetSupported;
}

void UNIX_OSPFProtocolEndpoint::setBroadcastResetSupported(Boolean &value)
{
	_broadcastResetSupported = value;
}

Boolean UNIX_OSPFProtocolEndpoint::getTransitDelay(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSIT_DELAY, getTransitDelay());
	return true;
}

Uint16 UNIX_OSPFProtocolEndpoint::getTransitDelay() const
{
	return _transitDelay;
}

void UNIX_OSPFProtocolEndpoint::setTransitDelay(Uint16 &value)
{
	_transitDelay = value;
}

Boolean UNIX_OSPFProtocolEndpoint::getRetransmitInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RETRANSMIT_INTERVAL, getRetransmitInterval());
	return true;
}

Uint16 UNIX_OSPFProtocolEndpoint::getRetransmitInterval() const
{
	return _retransmitInterval;
}

void UNIX_OSPFProtocolEndpoint::setRetransmitInterval(Uint16 &value)
{
	_retransmitInterval = value;
}

Boolean UNIX_OSPFProtocolEndpoint::getAuthType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTH_TYPE, getAuthType());
	return true;
}

Uint16 UNIX_OSPFProtocolEndpoint::getAuthType() const
{
	return _authType;
}

void UNIX_OSPFProtocolEndpoint::setAuthType(Uint16 &value)
{
	_authType = value;
}

Boolean UNIX_OSPFProtocolEndpoint::getOtherAuthType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_AUTH_TYPE, getOtherAuthType());
	return true;
}

String UNIX_OSPFProtocolEndpoint::getOtherAuthType() const
{
	return _otherAuthType;
}

void UNIX_OSPFProtocolEndpoint::setOtherAuthType(String &value)
{
	_otherAuthType = value;
}

Boolean UNIX_OSPFProtocolEndpoint::getAuthKey(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTH_KEY, getAuthKey());
	return true;
}

String UNIX_OSPFProtocolEndpoint::getAuthKey() const
{
	return _authKey;
}

void UNIX_OSPFProtocolEndpoint::setAuthKey(String &value)
{
	_authKey = value;
}

Boolean UNIX_OSPFProtocolEndpoint::getPriority(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIORITY, getPriority());
	return true;
}

Uint8 UNIX_OSPFProtocolEndpoint::getPriority() const
{
	return _priority;
}

void UNIX_OSPFProtocolEndpoint::setPriority(Uint8 &value)
{
	_priority = value;
}

Boolean UNIX_OSPFProtocolEndpoint::getPollInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLL_INTERVAL, getPollInterval());
	return true;
}

Uint16 UNIX_OSPFProtocolEndpoint::getPollInterval() const
{
	return _pollInterval;
}

void UNIX_OSPFProtocolEndpoint::setPollInterval(Uint16 &value)
{
	_pollInterval = value;
}

Boolean UNIX_OSPFProtocolEndpoint::getCost(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COST, getCost());
	return true;
}

Uint16 UNIX_OSPFProtocolEndpoint::getCost() const
{
	return _cost;
}

void UNIX_OSPFProtocolEndpoint::setCost(Uint16 &value)
{
	_cost = value;
}

Boolean UNIX_OSPFProtocolEndpoint::getIfDemand(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IF_DEMAND, getIfDemand());
	return true;
}

Boolean UNIX_OSPFProtocolEndpoint::getIfDemand() const
{
	return _ifDemand;
}

void UNIX_OSPFProtocolEndpoint::setIfDemand(Boolean &value)
{
	_ifDemand = value;
}


void UNIX_OSPFProtocolEndpoint::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("OSPFProtocolEndpoint");
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
	_creationClassName = String("UNIX_OSPFProtocolEndpoint");
	_nameFormat = String ("");
	_protocolType = Uint16(0);
	_protocolIFType = Uint16(0);
	_otherTypeDescription = String ("");
	_broadcastResetSupported = Boolean(false);
	_transitDelay = Uint16(0);
	_retransmitInterval = Uint16(0);
	_authType = Uint16(0);
	_otherAuthType = String ("");
	_authKey = String ("");
	_priority = Uint8(0);
	_pollInterval = Uint16(0);
	_cost = Uint16(0);
	_ifDemand = Boolean(false);

}

Boolean UNIX_OSPFProtocolEndpoint::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "TransitDelay"))
			{
				Uint16 transitDelayValue;
				property.getValue().get(transitDelayValue);
				setTransitDelay(transitDelayValue);
			}
			else if (String::equal(property.getName().getString(), "RetransmitInterval"))
			{
				Uint16 retransmitIntervalValue;
				property.getValue().get(retransmitIntervalValue);
				setRetransmitInterval(retransmitIntervalValue);
			}
			else if (String::equal(property.getName().getString(), "AuthType"))
			{
				Uint16 authTypeValue;
				property.getValue().get(authTypeValue);
				setAuthType(authTypeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherAuthType"))
			{
				String otherAuthTypeValue;
				property.getValue().get(otherAuthTypeValue);
				setOtherAuthType(otherAuthTypeValue);
			}
			else if (String::equal(property.getName().getString(), "AuthKey"))
			{
				String authKeyValue;
				property.getValue().get(authKeyValue);
				setAuthKey(authKeyValue);
			}
			else if (String::equal(property.getName().getString(), "Priority"))
			{
				Uint8 priorityValue;
				property.getValue().get(priorityValue);
				setPriority(priorityValue);
			}
			else if (String::equal(property.getName().getString(), "PollInterval"))
			{
				Uint16 pollIntervalValue;
				property.getValue().get(pollIntervalValue);
				setPollInterval(pollIntervalValue);
			}
			else if (String::equal(property.getName().getString(), "Cost"))
			{
				Uint16 costValue;
				property.getValue().get(costValue);
				setCost(costValue);
			}
			else if (String::equal(property.getName().getString(), "IfDemand"))
			{
				Boolean ifDemandValue;
				property.getValue().get(ifDemandValue);
				setIfDemand(ifDemandValue);
			}
	}
	return true;
}

Uint32 UNIX_OSPFProtocolEndpoint::invokeRequestStateChange(
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

Uint32 UNIX_OSPFProtocolEndpoint::invokeBroadcastReset()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method BroadcastReset */
	
	
	
	return returnValue;
}


Boolean UNIX_OSPFProtocolEndpoint::initialize()
{
	return false;
}

Boolean UNIX_OSPFProtocolEndpoint::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("OSPFProtocolEndpoint");
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
	_creationClassName = String("UNIX_OSPFProtocolEndpoint");
	_nameFormat = String ("");
	_protocolType = Uint16(0);
	_protocolIFType = Uint16(0);
	_otherTypeDescription = String ("");
	_broadcastResetSupported = Boolean(false);
	_transitDelay = Uint16(0);
	_retransmitInterval = Uint16(0);
	_authType = Uint16(0);
	_otherAuthType = String ("");
	_authKey = String ("");
	_priority = Uint8(0);
	_pollInterval = Uint16(0);
	_cost = Uint16(0);
	_ifDemand = Boolean(false);
	
	return false;
}

Boolean UNIX_OSPFProtocolEndpoint::finalize()
{
	return false;
}

Boolean UNIX_OSPFProtocolEndpoint::loadByName(const String name)
{
	return false;
}

Boolean UNIX_OSPFProtocolEndpoint::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_OSPFProtocolEndpoint::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_OSPFProtocolEndpoint::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_OSPFProtocolEndpoint::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_OSPFProtocolEndpoint::validateInstance()
{
	return true;
}

