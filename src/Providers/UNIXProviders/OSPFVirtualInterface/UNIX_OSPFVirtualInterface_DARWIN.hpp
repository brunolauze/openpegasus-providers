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


UNIX_OSPFVirtualInterface::UNIX_OSPFVirtualInterface(void)
{
}

UNIX_OSPFVirtualInterface::~UNIX_OSPFVirtualInterface(void)
{
}

Boolean UNIX_OSPFVirtualInterface::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_OSPFVirtualInterface::getInstanceID() const
{
	return _instanceID;
}

void UNIX_OSPFVirtualInterface::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_OSPFVirtualInterface::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_OSPFVirtualInterface::getCaption() const
{
	return _caption;
}

void UNIX_OSPFVirtualInterface::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_OSPFVirtualInterface::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_OSPFVirtualInterface::getDescription() const
{
	return _description;
}

void UNIX_OSPFVirtualInterface::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_OSPFVirtualInterface::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_OSPFVirtualInterface::getElementName() const
{
	return _elementName;
}

void UNIX_OSPFVirtualInterface::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_OSPFVirtualInterface::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_OSPFVirtualInterface::getGeneration() const
{
	return _generation;
}

void UNIX_OSPFVirtualInterface::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_OSPFVirtualInterface::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_OSPFVirtualInterface::getInstallDate() const
{
	return _installDate;
}

void UNIX_OSPFVirtualInterface::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_OSPFVirtualInterface::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_OSPFVirtualInterface::getName() const
{
	return _name;
}

void UNIX_OSPFVirtualInterface::setName(String &value)
{
	_name = value;
}

Boolean UNIX_OSPFVirtualInterface::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_OSPFVirtualInterface::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_OSPFVirtualInterface::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_OSPFVirtualInterface::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_OSPFVirtualInterface::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_OSPFVirtualInterface::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_OSPFVirtualInterface::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_OSPFVirtualInterface::getStatus() const
{
	return _status;
}

void UNIX_OSPFVirtualInterface::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_OSPFVirtualInterface::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_OSPFVirtualInterface::getHealthState() const
{
	return _healthState;
}

void UNIX_OSPFVirtualInterface::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_OSPFVirtualInterface::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_OSPFVirtualInterface::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_OSPFVirtualInterface::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_OSPFVirtualInterface::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_OSPFVirtualInterface::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_OSPFVirtualInterface::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_OSPFVirtualInterface::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_OSPFVirtualInterface::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_OSPFVirtualInterface::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_OSPFVirtualInterface::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_OSPFVirtualInterface::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_OSPFVirtualInterface::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_OSPFVirtualInterface::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_OSPFVirtualInterface::getEnabledState() const
{
	return _enabledState;
}

void UNIX_OSPFVirtualInterface::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_OSPFVirtualInterface::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_OSPFVirtualInterface::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_OSPFVirtualInterface::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_OSPFVirtualInterface::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_OSPFVirtualInterface::getRequestedState() const
{
	return _requestedState;
}

void UNIX_OSPFVirtualInterface::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_OSPFVirtualInterface::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_OSPFVirtualInterface::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_OSPFVirtualInterface::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_OSPFVirtualInterface::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_OSPFVirtualInterface::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_OSPFVirtualInterface::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_OSPFVirtualInterface::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_OSPFVirtualInterface::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_OSPFVirtualInterface::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_OSPFVirtualInterface::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_OSPFVirtualInterface::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_OSPFVirtualInterface::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_OSPFVirtualInterface::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_OSPFVirtualInterface::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_OSPFVirtualInterface::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_OSPFVirtualInterface::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_OSPFVirtualInterface::getSystemName() const
{
	return _systemName;
}

void UNIX_OSPFVirtualInterface::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_OSPFVirtualInterface::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_OSPFVirtualInterface::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_OSPFVirtualInterface::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_OSPFVirtualInterface::getNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_FORMAT, getNameFormat());
	return true;
}

String UNIX_OSPFVirtualInterface::getNameFormat() const
{
	return _nameFormat;
}

void UNIX_OSPFVirtualInterface::setNameFormat(String &value)
{
	_nameFormat = value;
}

Boolean UNIX_OSPFVirtualInterface::getProtocolType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_TYPE, getProtocolType());
	return true;
}

Uint16 UNIX_OSPFVirtualInterface::getProtocolType() const
{
	return _protocolType;
}

void UNIX_OSPFVirtualInterface::setProtocolType(Uint16 &value)
{
	_protocolType = value;
}

Boolean UNIX_OSPFVirtualInterface::getProtocolIFType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_I_F_TYPE, getProtocolIFType());
	return true;
}

Uint16 UNIX_OSPFVirtualInterface::getProtocolIFType() const
{
	return _protocolIFType;
}

void UNIX_OSPFVirtualInterface::setProtocolIFType(Uint16 &value)
{
	_protocolIFType = value;
}

Boolean UNIX_OSPFVirtualInterface::getOtherTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TYPE_DESCRIPTION, getOtherTypeDescription());
	return true;
}

String UNIX_OSPFVirtualInterface::getOtherTypeDescription() const
{
	return _otherTypeDescription;
}

void UNIX_OSPFVirtualInterface::setOtherTypeDescription(String &value)
{
	_otherTypeDescription = value;
}

Boolean UNIX_OSPFVirtualInterface::getBroadcastResetSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BROADCAST_RESET_SUPPORTED, getBroadcastResetSupported());
	return true;
}

Boolean UNIX_OSPFVirtualInterface::getBroadcastResetSupported() const
{
	return _broadcastResetSupported;
}

void UNIX_OSPFVirtualInterface::setBroadcastResetSupported(Boolean &value)
{
	_broadcastResetSupported = value;
}

Boolean UNIX_OSPFVirtualInterface::getTransitDelay(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSIT_DELAY, getTransitDelay());
	return true;
}

Uint16 UNIX_OSPFVirtualInterface::getTransitDelay() const
{
	return _transitDelay;
}

void UNIX_OSPFVirtualInterface::setTransitDelay(Uint16 &value)
{
	_transitDelay = value;
}

Boolean UNIX_OSPFVirtualInterface::getRetransmitInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RETRANSMIT_INTERVAL, getRetransmitInterval());
	return true;
}

Uint16 UNIX_OSPFVirtualInterface::getRetransmitInterval() const
{
	return _retransmitInterval;
}

void UNIX_OSPFVirtualInterface::setRetransmitInterval(Uint16 &value)
{
	_retransmitInterval = value;
}

Boolean UNIX_OSPFVirtualInterface::getAuthType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTH_TYPE, getAuthType());
	return true;
}

Uint16 UNIX_OSPFVirtualInterface::getAuthType() const
{
	return _authType;
}

void UNIX_OSPFVirtualInterface::setAuthType(Uint16 &value)
{
	_authType = value;
}

Boolean UNIX_OSPFVirtualInterface::getOtherAuthType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_AUTH_TYPE, getOtherAuthType());
	return true;
}

String UNIX_OSPFVirtualInterface::getOtherAuthType() const
{
	return _otherAuthType;
}

void UNIX_OSPFVirtualInterface::setOtherAuthType(String &value)
{
	_otherAuthType = value;
}

Boolean UNIX_OSPFVirtualInterface::getAuthKey(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTH_KEY, getAuthKey());
	return true;
}

String UNIX_OSPFVirtualInterface::getAuthKey() const
{
	return _authKey;
}

void UNIX_OSPFVirtualInterface::setAuthKey(String &value)
{
	_authKey = value;
}


void UNIX_OSPFVirtualInterface::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("OSPFVirtualInterface");
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
	_creationClassName = String("UNIX_OSPFVirtualInterface");
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

}

Boolean UNIX_OSPFVirtualInterface::loadInstance(const CIMInstance &instance)
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
	}
	return true;
}

Uint32 UNIX_OSPFVirtualInterface::invokeRequestStateChange(
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

Uint32 UNIX_OSPFVirtualInterface::invokeBroadcastReset()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method BroadcastReset */
	
	
	
	return returnValue;
}


Boolean UNIX_OSPFVirtualInterface::initialize()
{
	return false;
}

Boolean UNIX_OSPFVirtualInterface::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("OSPFVirtualInterface");
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
	_creationClassName = String("UNIX_OSPFVirtualInterface");
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
	
	return false;
}

Boolean UNIX_OSPFVirtualInterface::finalize()
{
	return false;
}

Boolean UNIX_OSPFVirtualInterface::loadByName(const String name)
{
	return false;
}

Boolean UNIX_OSPFVirtualInterface::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_OSPFVirtualInterface::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_OSPFVirtualInterface::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_OSPFVirtualInterface::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_OSPFVirtualInterface::validateInstance()
{
	return true;
}

