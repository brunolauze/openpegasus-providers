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


UNIX_IKESAEndpoint::UNIX_IKESAEndpoint(void)
{
}

UNIX_IKESAEndpoint::~UNIX_IKESAEndpoint(void)
{
}

Boolean UNIX_IKESAEndpoint::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_IKESAEndpoint::getInstanceID() const
{
	return _instanceID;
}

void UNIX_IKESAEndpoint::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_IKESAEndpoint::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_IKESAEndpoint::getCaption() const
{
	return _caption;
}

void UNIX_IKESAEndpoint::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_IKESAEndpoint::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_IKESAEndpoint::getDescription() const
{
	return _description;
}

void UNIX_IKESAEndpoint::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_IKESAEndpoint::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_IKESAEndpoint::getElementName() const
{
	return _elementName;
}

void UNIX_IKESAEndpoint::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_IKESAEndpoint::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_IKESAEndpoint::getGeneration() const
{
	return _generation;
}

void UNIX_IKESAEndpoint::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_IKESAEndpoint::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_IKESAEndpoint::getInstallDate() const
{
	return _installDate;
}

void UNIX_IKESAEndpoint::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_IKESAEndpoint::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_IKESAEndpoint::getName() const
{
	return _name;
}

void UNIX_IKESAEndpoint::setName(String &value)
{
	_name = value;
}

Boolean UNIX_IKESAEndpoint::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_IKESAEndpoint::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_IKESAEndpoint::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_IKESAEndpoint::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_IKESAEndpoint::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_IKESAEndpoint::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_IKESAEndpoint::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_IKESAEndpoint::getStatus() const
{
	return _status;
}

void UNIX_IKESAEndpoint::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_IKESAEndpoint::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_IKESAEndpoint::getHealthState() const
{
	return _healthState;
}

void UNIX_IKESAEndpoint::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_IKESAEndpoint::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_IKESAEndpoint::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_IKESAEndpoint::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_IKESAEndpoint::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_IKESAEndpoint::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_IKESAEndpoint::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_IKESAEndpoint::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_IKESAEndpoint::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_IKESAEndpoint::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_IKESAEndpoint::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_IKESAEndpoint::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_IKESAEndpoint::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_IKESAEndpoint::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_IKESAEndpoint::getEnabledState() const
{
	return _enabledState;
}

void UNIX_IKESAEndpoint::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_IKESAEndpoint::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_IKESAEndpoint::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_IKESAEndpoint::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_IKESAEndpoint::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_IKESAEndpoint::getRequestedState() const
{
	return _requestedState;
}

void UNIX_IKESAEndpoint::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_IKESAEndpoint::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_IKESAEndpoint::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_IKESAEndpoint::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_IKESAEndpoint::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_IKESAEndpoint::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_IKESAEndpoint::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_IKESAEndpoint::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_IKESAEndpoint::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_IKESAEndpoint::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_IKESAEndpoint::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_IKESAEndpoint::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_IKESAEndpoint::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_IKESAEndpoint::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_IKESAEndpoint::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_IKESAEndpoint::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_IKESAEndpoint::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_IKESAEndpoint::getSystemName() const
{
	return _systemName;
}

void UNIX_IKESAEndpoint::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_IKESAEndpoint::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_IKESAEndpoint::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_IKESAEndpoint::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_IKESAEndpoint::getNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_FORMAT, getNameFormat());
	return true;
}

String UNIX_IKESAEndpoint::getNameFormat() const
{
	return _nameFormat;
}

void UNIX_IKESAEndpoint::setNameFormat(String &value)
{
	_nameFormat = value;
}

Boolean UNIX_IKESAEndpoint::getProtocolType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_TYPE, getProtocolType());
	return true;
}

Uint16 UNIX_IKESAEndpoint::getProtocolType() const
{
	return _protocolType;
}

void UNIX_IKESAEndpoint::setProtocolType(Uint16 &value)
{
	_protocolType = value;
}

Boolean UNIX_IKESAEndpoint::getProtocolIFType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_I_F_TYPE, getProtocolIFType());
	return true;
}

Uint16 UNIX_IKESAEndpoint::getProtocolIFType() const
{
	return _protocolIFType;
}

void UNIX_IKESAEndpoint::setProtocolIFType(Uint16 &value)
{
	_protocolIFType = value;
}

Boolean UNIX_IKESAEndpoint::getOtherTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TYPE_DESCRIPTION, getOtherTypeDescription());
	return true;
}

String UNIX_IKESAEndpoint::getOtherTypeDescription() const
{
	return _otherTypeDescription;
}

void UNIX_IKESAEndpoint::setOtherTypeDescription(String &value)
{
	_otherTypeDescription = value;
}

Boolean UNIX_IKESAEndpoint::getBroadcastResetSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BROADCAST_RESET_SUPPORTED, getBroadcastResetSupported());
	return true;
}

Boolean UNIX_IKESAEndpoint::getBroadcastResetSupported() const
{
	return _broadcastResetSupported;
}

void UNIX_IKESAEndpoint::setBroadcastResetSupported(Boolean &value)
{
	_broadcastResetSupported = value;
}

Boolean UNIX_IKESAEndpoint::getLifetimeSeconds(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LIFETIME_SECONDS, getLifetimeSeconds());
	return true;
}

Uint64 UNIX_IKESAEndpoint::getLifetimeSeconds() const
{
	return _lifetimeSeconds;
}

void UNIX_IKESAEndpoint::setLifetimeSeconds(Uint64 &value)
{
	_lifetimeSeconds = value;
}

Boolean UNIX_IKESAEndpoint::getRefreshThresholdSecondsPercentage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REFRESH_THRESHOLD_SECONDS_PERCENTAGE, getRefreshThresholdSecondsPercentage());
	return true;
}

Uint8 UNIX_IKESAEndpoint::getRefreshThresholdSecondsPercentage() const
{
	return _refreshThresholdSecondsPercentage;
}

void UNIX_IKESAEndpoint::setRefreshThresholdSecondsPercentage(Uint8 &value)
{
	_refreshThresholdSecondsPercentage = value;
}

Boolean UNIX_IKESAEndpoint::getIdleDurationSeconds(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDLE_DURATION_SECONDS, getIdleDurationSeconds());
	return true;
}

Uint64 UNIX_IKESAEndpoint::getIdleDurationSeconds() const
{
	return _idleDurationSeconds;
}

void UNIX_IKESAEndpoint::setIdleDurationSeconds(Uint64 &value)
{
	_idleDurationSeconds = value;
}

Boolean UNIX_IKESAEndpoint::getLifetimeKilobytes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LIFETIME_KILOBYTES, getLifetimeKilobytes());
	return true;
}

Uint64 UNIX_IKESAEndpoint::getLifetimeKilobytes() const
{
	return _lifetimeKilobytes;
}

void UNIX_IKESAEndpoint::setLifetimeKilobytes(Uint64 &value)
{
	_lifetimeKilobytes = value;
}

Boolean UNIX_IKESAEndpoint::getRefreshThresholdKbytesPercentage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REFRESH_THRESHOLD_KBYTES_PERCENTAGE, getRefreshThresholdKbytesPercentage());
	return true;
}

Uint8 UNIX_IKESAEndpoint::getRefreshThresholdKbytesPercentage() const
{
	return _refreshThresholdKbytesPercentage;
}

void UNIX_IKESAEndpoint::setRefreshThresholdKbytesPercentage(Uint8 &value)
{
	_refreshThresholdKbytesPercentage = value;
}

Boolean UNIX_IKESAEndpoint::getPacketLoggingActive(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKET_LOGGING_ACTIVE, getPacketLoggingActive());
	return true;
}

Boolean UNIX_IKESAEndpoint::getPacketLoggingActive() const
{
	return _packetLoggingActive;
}

void UNIX_IKESAEndpoint::setPacketLoggingActive(Boolean &value)
{
	_packetLoggingActive = value;
}

Boolean UNIX_IKESAEndpoint::getInitiatorCookie(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INITIATOR_COOKIE, getInitiatorCookie());
	return true;
}

Uint64 UNIX_IKESAEndpoint::getInitiatorCookie() const
{
	return _initiatorCookie;
}

void UNIX_IKESAEndpoint::setInitiatorCookie(Uint64 &value)
{
	_initiatorCookie = value;
}

Boolean UNIX_IKESAEndpoint::getResponderCookie(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESPONDER_COOKIE, getResponderCookie());
	return true;
}

Uint64 UNIX_IKESAEndpoint::getResponderCookie() const
{
	return _responderCookie;
}

void UNIX_IKESAEndpoint::setResponderCookie(Uint64 &value)
{
	_responderCookie = value;
}

Boolean UNIX_IKESAEndpoint::getCipherAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CIPHER_ALGORITHM, getCipherAlgorithm());
	return true;
}

Uint16 UNIX_IKESAEndpoint::getCipherAlgorithm() const
{
	return _cipherAlgorithm;
}

void UNIX_IKESAEndpoint::setCipherAlgorithm(Uint16 &value)
{
	_cipherAlgorithm = value;
}

Boolean UNIX_IKESAEndpoint::getOtherCipherAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_CIPHER_ALGORITHM, getOtherCipherAlgorithm());
	return true;
}

String UNIX_IKESAEndpoint::getOtherCipherAlgorithm() const
{
	return _otherCipherAlgorithm;
}

void UNIX_IKESAEndpoint::setOtherCipherAlgorithm(String &value)
{
	_otherCipherAlgorithm = value;
}

Boolean UNIX_IKESAEndpoint::getHashAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HASH_ALGORITHM, getHashAlgorithm());
	return true;
}

Uint16 UNIX_IKESAEndpoint::getHashAlgorithm() const
{
	return _hashAlgorithm;
}

void UNIX_IKESAEndpoint::setHashAlgorithm(Uint16 &value)
{
	_hashAlgorithm = value;
}

Boolean UNIX_IKESAEndpoint::getOtherHashAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_HASH_ALGORITHM, getOtherHashAlgorithm());
	return true;
}

String UNIX_IKESAEndpoint::getOtherHashAlgorithm() const
{
	return _otherHashAlgorithm;
}

void UNIX_IKESAEndpoint::setOtherHashAlgorithm(String &value)
{
	_otherHashAlgorithm = value;
}

Boolean UNIX_IKESAEndpoint::getAuthenticationMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTHENTICATION_METHOD, getAuthenticationMethod());
	return true;
}

Uint16 UNIX_IKESAEndpoint::getAuthenticationMethod() const
{
	return _authenticationMethod;
}

void UNIX_IKESAEndpoint::setAuthenticationMethod(Uint16 &value)
{
	_authenticationMethod = value;
}

Boolean UNIX_IKESAEndpoint::getOtherAuthenticationMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_AUTHENTICATION_METHOD, getOtherAuthenticationMethod());
	return true;
}

String UNIX_IKESAEndpoint::getOtherAuthenticationMethod() const
{
	return _otherAuthenticationMethod;
}

void UNIX_IKESAEndpoint::setOtherAuthenticationMethod(String &value)
{
	_otherAuthenticationMethod = value;
}

Boolean UNIX_IKESAEndpoint::getGroupId(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GROUP_ID, getGroupId());
	return true;
}

Uint16 UNIX_IKESAEndpoint::getGroupId() const
{
	return _groupId;
}

void UNIX_IKESAEndpoint::setGroupId(Uint16 &value)
{
	_groupId = value;
}

Boolean UNIX_IKESAEndpoint::getVendorID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR_ID, getVendorID());
	return true;
}

String UNIX_IKESAEndpoint::getVendorID() const
{
	return _vendorID;
}

void UNIX_IKESAEndpoint::setVendorID(String &value)
{
	_vendorID = value;
}


void UNIX_IKESAEndpoint::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("IKESAEndpoint");
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
	_creationClassName = String("UNIX_IKESAEndpoint");
	_nameFormat = String ("");
	_protocolType = Uint16(0);
	_protocolIFType = Uint16(0);
	_otherTypeDescription = String ("");
	_broadcastResetSupported = Boolean(false);
	_lifetimeSeconds = Uint64(0);
	_refreshThresholdSecondsPercentage = Uint8(0);
	_idleDurationSeconds = Uint64(0);
	_lifetimeKilobytes = Uint64(0);
	_refreshThresholdKbytesPercentage = Uint8(0);
	_packetLoggingActive = Boolean(false);
	_initiatorCookie = Uint64(0);
	_responderCookie = Uint64(0);
	_cipherAlgorithm = Uint16(0);
	_otherCipherAlgorithm = String ("");
	_hashAlgorithm = Uint16(0);
	_otherHashAlgorithm = String ("");
	_authenticationMethod = Uint16(0);
	_otherAuthenticationMethod = String ("");
	_groupId = Uint16(0);
	_vendorID = String ("");

}

Boolean UNIX_IKESAEndpoint::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "LifetimeSeconds"))
			{
				Uint64 lifetimeSecondsValue;
				property.getValue().get(lifetimeSecondsValue);
				setLifetimeSeconds(lifetimeSecondsValue);
			}
			else if (String::equal(property.getName().getString(), "RefreshThresholdSecondsPercentage"))
			{
				Uint8 refreshThresholdSecondsPercentageValue;
				property.getValue().get(refreshThresholdSecondsPercentageValue);
				setRefreshThresholdSecondsPercentage(refreshThresholdSecondsPercentageValue);
			}
			else if (String::equal(property.getName().getString(), "IdleDurationSeconds"))
			{
				Uint64 idleDurationSecondsValue;
				property.getValue().get(idleDurationSecondsValue);
				setIdleDurationSeconds(idleDurationSecondsValue);
			}
			else if (String::equal(property.getName().getString(), "LifetimeKilobytes"))
			{
				Uint64 lifetimeKilobytesValue;
				property.getValue().get(lifetimeKilobytesValue);
				setLifetimeKilobytes(lifetimeKilobytesValue);
			}
			else if (String::equal(property.getName().getString(), "RefreshThresholdKbytesPercentage"))
			{
				Uint8 refreshThresholdKbytesPercentageValue;
				property.getValue().get(refreshThresholdKbytesPercentageValue);
				setRefreshThresholdKbytesPercentage(refreshThresholdKbytesPercentageValue);
			}
			else if (String::equal(property.getName().getString(), "PacketLoggingActive"))
			{
				Boolean packetLoggingActiveValue;
				property.getValue().get(packetLoggingActiveValue);
				setPacketLoggingActive(packetLoggingActiveValue);
			}
			else if (String::equal(property.getName().getString(), "InitiatorCookie"))
			{
				Uint64 initiatorCookieValue;
				property.getValue().get(initiatorCookieValue);
				setInitiatorCookie(initiatorCookieValue);
			}
			else if (String::equal(property.getName().getString(), "ResponderCookie"))
			{
				Uint64 responderCookieValue;
				property.getValue().get(responderCookieValue);
				setResponderCookie(responderCookieValue);
			}
			else if (String::equal(property.getName().getString(), "CipherAlgorithm"))
			{
				Uint16 cipherAlgorithmValue;
				property.getValue().get(cipherAlgorithmValue);
				setCipherAlgorithm(cipherAlgorithmValue);
			}
			else if (String::equal(property.getName().getString(), "OtherCipherAlgorithm"))
			{
				String otherCipherAlgorithmValue;
				property.getValue().get(otherCipherAlgorithmValue);
				setOtherCipherAlgorithm(otherCipherAlgorithmValue);
			}
			else if (String::equal(property.getName().getString(), "HashAlgorithm"))
			{
				Uint16 hashAlgorithmValue;
				property.getValue().get(hashAlgorithmValue);
				setHashAlgorithm(hashAlgorithmValue);
			}
			else if (String::equal(property.getName().getString(), "OtherHashAlgorithm"))
			{
				String otherHashAlgorithmValue;
				property.getValue().get(otherHashAlgorithmValue);
				setOtherHashAlgorithm(otherHashAlgorithmValue);
			}
			else if (String::equal(property.getName().getString(), "AuthenticationMethod"))
			{
				Uint16 authenticationMethodValue;
				property.getValue().get(authenticationMethodValue);
				setAuthenticationMethod(authenticationMethodValue);
			}
			else if (String::equal(property.getName().getString(), "OtherAuthenticationMethod"))
			{
				String otherAuthenticationMethodValue;
				property.getValue().get(otherAuthenticationMethodValue);
				setOtherAuthenticationMethod(otherAuthenticationMethodValue);
			}
			else if (String::equal(property.getName().getString(), "GroupId"))
			{
				Uint16 groupIdValue;
				property.getValue().get(groupIdValue);
				setGroupId(groupIdValue);
			}
			else if (String::equal(property.getName().getString(), "VendorID"))
			{
				String vendorIDValue;
				property.getValue().get(vendorIDValue);
				setVendorID(vendorIDValue);
			}
	}
	return true;
}

Uint32 UNIX_IKESAEndpoint::invokeRequestStateChange(
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

Uint32 UNIX_IKESAEndpoint::invokeBroadcastReset()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method BroadcastReset */
	
	
	
	return returnValue;
}


Boolean UNIX_IKESAEndpoint::initialize()
{
	return false;
}

Boolean UNIX_IKESAEndpoint::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("IKESAEndpoint");
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
	_creationClassName = String("UNIX_IKESAEndpoint");
	_nameFormat = String ("");
	_protocolType = Uint16(0);
	_protocolIFType = Uint16(0);
	_otherTypeDescription = String ("");
	_broadcastResetSupported = Boolean(false);
	_lifetimeSeconds = Uint64(0);
	_refreshThresholdSecondsPercentage = Uint8(0);
	_idleDurationSeconds = Uint64(0);
	_lifetimeKilobytes = Uint64(0);
	_refreshThresholdKbytesPercentage = Uint8(0);
	_packetLoggingActive = Boolean(false);
	_initiatorCookie = Uint64(0);
	_responderCookie = Uint64(0);
	_cipherAlgorithm = Uint16(0);
	_otherCipherAlgorithm = String ("");
	_hashAlgorithm = Uint16(0);
	_otherHashAlgorithm = String ("");
	_authenticationMethod = Uint16(0);
	_otherAuthenticationMethod = String ("");
	_groupId = Uint16(0);
	_vendorID = String ("");
	
	return false;
}

Boolean UNIX_IKESAEndpoint::finalize()
{
	return false;
}

Boolean UNIX_IKESAEndpoint::loadByName(const String name)
{
	return false;
}

Boolean UNIX_IKESAEndpoint::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_IKESAEndpoint::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IKESAEndpoint::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IKESAEndpoint::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IKESAEndpoint::validateInstance()
{
	return true;
}

