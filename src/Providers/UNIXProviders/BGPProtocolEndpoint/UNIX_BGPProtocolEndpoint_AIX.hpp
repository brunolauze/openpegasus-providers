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


UNIX_BGPProtocolEndpoint::UNIX_BGPProtocolEndpoint(void)
{
}

UNIX_BGPProtocolEndpoint::~UNIX_BGPProtocolEndpoint(void)
{
}

Boolean UNIX_BGPProtocolEndpoint::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_BGPProtocolEndpoint::getInstanceID() const
{
	return _instanceID;
}

void UNIX_BGPProtocolEndpoint::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_BGPProtocolEndpoint::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_BGPProtocolEndpoint::getCaption() const
{
	return _caption;
}

void UNIX_BGPProtocolEndpoint::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_BGPProtocolEndpoint::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_BGPProtocolEndpoint::getDescription() const
{
	return _description;
}

void UNIX_BGPProtocolEndpoint::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_BGPProtocolEndpoint::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_BGPProtocolEndpoint::getElementName() const
{
	return _elementName;
}

void UNIX_BGPProtocolEndpoint::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_BGPProtocolEndpoint::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_BGPProtocolEndpoint::getGeneration() const
{
	return _generation;
}

void UNIX_BGPProtocolEndpoint::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_BGPProtocolEndpoint::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_BGPProtocolEndpoint::getInstallDate() const
{
	return _installDate;
}

void UNIX_BGPProtocolEndpoint::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_BGPProtocolEndpoint::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_BGPProtocolEndpoint::getName() const
{
	return _name;
}

void UNIX_BGPProtocolEndpoint::setName(String &value)
{
	_name = value;
}

Boolean UNIX_BGPProtocolEndpoint::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_BGPProtocolEndpoint::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_BGPProtocolEndpoint::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_BGPProtocolEndpoint::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_BGPProtocolEndpoint::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_BGPProtocolEndpoint::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_BGPProtocolEndpoint::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_BGPProtocolEndpoint::getStatus() const
{
	return _status;
}

void UNIX_BGPProtocolEndpoint::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_BGPProtocolEndpoint::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_BGPProtocolEndpoint::getHealthState() const
{
	return _healthState;
}

void UNIX_BGPProtocolEndpoint::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_BGPProtocolEndpoint::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_BGPProtocolEndpoint::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_BGPProtocolEndpoint::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_BGPProtocolEndpoint::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_BGPProtocolEndpoint::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_BGPProtocolEndpoint::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_BGPProtocolEndpoint::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_BGPProtocolEndpoint::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_BGPProtocolEndpoint::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_BGPProtocolEndpoint::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_BGPProtocolEndpoint::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_BGPProtocolEndpoint::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_BGPProtocolEndpoint::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_BGPProtocolEndpoint::getEnabledState() const
{
	return _enabledState;
}

void UNIX_BGPProtocolEndpoint::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_BGPProtocolEndpoint::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_BGPProtocolEndpoint::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_BGPProtocolEndpoint::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_BGPProtocolEndpoint::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_BGPProtocolEndpoint::getRequestedState() const
{
	return _requestedState;
}

void UNIX_BGPProtocolEndpoint::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_BGPProtocolEndpoint::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_BGPProtocolEndpoint::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_BGPProtocolEndpoint::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_BGPProtocolEndpoint::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_BGPProtocolEndpoint::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_BGPProtocolEndpoint::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_BGPProtocolEndpoint::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_BGPProtocolEndpoint::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_BGPProtocolEndpoint::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_BGPProtocolEndpoint::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_BGPProtocolEndpoint::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_BGPProtocolEndpoint::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_BGPProtocolEndpoint::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_BGPProtocolEndpoint::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_BGPProtocolEndpoint::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_BGPProtocolEndpoint::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_BGPProtocolEndpoint::getSystemName() const
{
	return _systemName;
}

void UNIX_BGPProtocolEndpoint::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_BGPProtocolEndpoint::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_BGPProtocolEndpoint::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_BGPProtocolEndpoint::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_BGPProtocolEndpoint::getNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_FORMAT, getNameFormat());
	return true;
}

String UNIX_BGPProtocolEndpoint::getNameFormat() const
{
	return _nameFormat;
}

void UNIX_BGPProtocolEndpoint::setNameFormat(String &value)
{
	_nameFormat = value;
}

Boolean UNIX_BGPProtocolEndpoint::getProtocolType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_TYPE, getProtocolType());
	return true;
}

Uint16 UNIX_BGPProtocolEndpoint::getProtocolType() const
{
	return _protocolType;
}

void UNIX_BGPProtocolEndpoint::setProtocolType(Uint16 &value)
{
	_protocolType = value;
}

Boolean UNIX_BGPProtocolEndpoint::getProtocolIFType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_I_F_TYPE, getProtocolIFType());
	return true;
}

Uint16 UNIX_BGPProtocolEndpoint::getProtocolIFType() const
{
	return _protocolIFType;
}

void UNIX_BGPProtocolEndpoint::setProtocolIFType(Uint16 &value)
{
	_protocolIFType = value;
}

Boolean UNIX_BGPProtocolEndpoint::getOtherTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TYPE_DESCRIPTION, getOtherTypeDescription());
	return true;
}

String UNIX_BGPProtocolEndpoint::getOtherTypeDescription() const
{
	return _otherTypeDescription;
}

void UNIX_BGPProtocolEndpoint::setOtherTypeDescription(String &value)
{
	_otherTypeDescription = value;
}

Boolean UNIX_BGPProtocolEndpoint::getBroadcastResetSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BROADCAST_RESET_SUPPORTED, getBroadcastResetSupported());
	return true;
}

Boolean UNIX_BGPProtocolEndpoint::getBroadcastResetSupported() const
{
	return _broadcastResetSupported;
}

void UNIX_BGPProtocolEndpoint::setBroadcastResetSupported(Boolean &value)
{
	_broadcastResetSupported = value;
}

Boolean UNIX_BGPProtocolEndpoint::getIsEBGP(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_E_BGP, getIsEBGP());
	return true;
}

Boolean UNIX_BGPProtocolEndpoint::getIsEBGP() const
{
	return _isEBGP;
}

void UNIX_BGPProtocolEndpoint::setIsEBGP(Boolean &value)
{
	_isEBGP = value;
}

Boolean UNIX_BGPProtocolEndpoint::getIsEBGPMultihop(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_E_BGP_MULTIHOP, getIsEBGPMultihop());
	return true;
}

Boolean UNIX_BGPProtocolEndpoint::getIsEBGPMultihop() const
{
	return _isEBGPMultihop;
}

void UNIX_BGPProtocolEndpoint::setIsEBGPMultihop(Boolean &value)
{
	_isEBGPMultihop = value;
}

Boolean UNIX_BGPProtocolEndpoint::getLocalIdentifier(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCAL_IDENTIFIER, getLocalIdentifier());
	return true;
}

String UNIX_BGPProtocolEndpoint::getLocalIdentifier() const
{
	return _localIdentifier;
}

void UNIX_BGPProtocolEndpoint::setLocalIdentifier(String &value)
{
	_localIdentifier = value;
}

Boolean UNIX_BGPProtocolEndpoint::getPeerIdentifier(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PEER_IDENTIFIER, getPeerIdentifier());
	return true;
}

String UNIX_BGPProtocolEndpoint::getPeerIdentifier() const
{
	return _peerIdentifier;
}

void UNIX_BGPProtocolEndpoint::setPeerIdentifier(String &value)
{
	_peerIdentifier = value;
}

Boolean UNIX_BGPProtocolEndpoint::getState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATE, getState());
	return true;
}

Uint16 UNIX_BGPProtocolEndpoint::getState() const
{
	return _state;
}

void UNIX_BGPProtocolEndpoint::setState(Uint16 &value)
{
	_state = value;
}

Boolean UNIX_BGPProtocolEndpoint::getAdminStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADMIN_STATUS, getAdminStatus());
	return true;
}

Uint16 UNIX_BGPProtocolEndpoint::getAdminStatus() const
{
	return _adminStatus;
}

void UNIX_BGPProtocolEndpoint::setAdminStatus(Uint16 &value)
{
	_adminStatus = value;
}

Boolean UNIX_BGPProtocolEndpoint::getNegotiatedVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NEGOTIATED_VERSION, getNegotiatedVersion());
	return true;
}

String UNIX_BGPProtocolEndpoint::getNegotiatedVersion() const
{
	return _negotiatedVersion;
}

void UNIX_BGPProtocolEndpoint::setNegotiatedVersion(String &value)
{
	_negotiatedVersion = value;
}

Boolean UNIX_BGPProtocolEndpoint::getLocalAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCAL_ADDRESS, getLocalAddress());
	return true;
}

String UNIX_BGPProtocolEndpoint::getLocalAddress() const
{
	return _localAddress;
}

void UNIX_BGPProtocolEndpoint::setLocalAddress(String &value)
{
	_localAddress = value;
}

Boolean UNIX_BGPProtocolEndpoint::getLocalPort(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCAL_PORT, getLocalPort());
	return true;
}

Uint16 UNIX_BGPProtocolEndpoint::getLocalPort() const
{
	return _localPort;
}

void UNIX_BGPProtocolEndpoint::setLocalPort(Uint16 &value)
{
	_localPort = value;
}

Boolean UNIX_BGPProtocolEndpoint::getRemoteAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMOTE_ADDRESS, getRemoteAddress());
	return true;
}

String UNIX_BGPProtocolEndpoint::getRemoteAddress() const
{
	return _remoteAddress;
}

void UNIX_BGPProtocolEndpoint::setRemoteAddress(String &value)
{
	_remoteAddress = value;
}

Boolean UNIX_BGPProtocolEndpoint::getRemotePort(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMOTE_PORT, getRemotePort());
	return true;
}

Uint16 UNIX_BGPProtocolEndpoint::getRemotePort() const
{
	return _remotePort;
}

void UNIX_BGPProtocolEndpoint::setRemotePort(Uint16 &value)
{
	_remotePort = value;
}

Boolean UNIX_BGPProtocolEndpoint::getRemoteAS(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMOTE_A_S, getRemoteAS());
	return true;
}

Uint16 UNIX_BGPProtocolEndpoint::getRemoteAS() const
{
	return _remoteAS;
}

void UNIX_BGPProtocolEndpoint::setRemoteAS(Uint16 &value)
{
	_remoteAS = value;
}

Boolean UNIX_BGPProtocolEndpoint::getConnectRetryInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONNECT_RETRY_INTERVAL, getConnectRetryInterval());
	return true;
}

Uint32 UNIX_BGPProtocolEndpoint::getConnectRetryInterval() const
{
	return _connectRetryInterval;
}

void UNIX_BGPProtocolEndpoint::setConnectRetryInterval(Uint32 &value)
{
	_connectRetryInterval = value;
}

Boolean UNIX_BGPProtocolEndpoint::getHoldTimeConfigured(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HOLD_TIME_CONFIGURED, getHoldTimeConfigured());
	return true;
}

Uint16 UNIX_BGPProtocolEndpoint::getHoldTimeConfigured() const
{
	return _holdTimeConfigured;
}

void UNIX_BGPProtocolEndpoint::setHoldTimeConfigured(Uint16 &value)
{
	_holdTimeConfigured = value;
}

Boolean UNIX_BGPProtocolEndpoint::getKeepAliveConfigured(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_KEEP_ALIVE_CONFIGURED, getKeepAliveConfigured());
	return true;
}

Uint16 UNIX_BGPProtocolEndpoint::getKeepAliveConfigured() const
{
	return _keepAliveConfigured;
}

void UNIX_BGPProtocolEndpoint::setKeepAliveConfigured(Uint16 &value)
{
	_keepAliveConfigured = value;
}

Boolean UNIX_BGPProtocolEndpoint::getMinASOriginationInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIN_A_S_ORIGINATION_INTERVAL, getMinASOriginationInterval());
	return true;
}

Uint16 UNIX_BGPProtocolEndpoint::getMinASOriginationInterval() const
{
	return _minASOriginationInterval;
}

void UNIX_BGPProtocolEndpoint::setMinASOriginationInterval(Uint16 &value)
{
	_minASOriginationInterval = value;
}

Boolean UNIX_BGPProtocolEndpoint::getMinRouteAdvertisementInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIN_ROUTE_ADVERTISEMENT_INTERVAL, getMinRouteAdvertisementInterval());
	return true;
}

Uint16 UNIX_BGPProtocolEndpoint::getMinRouteAdvertisementInterval() const
{
	return _minRouteAdvertisementInterval;
}

void UNIX_BGPProtocolEndpoint::setMinRouteAdvertisementInterval(Uint16 &value)
{
	_minRouteAdvertisementInterval = value;
}

Boolean UNIX_BGPProtocolEndpoint::getHoldTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HOLD_TIME, getHoldTime());
	return true;
}

Uint16 UNIX_BGPProtocolEndpoint::getHoldTime() const
{
	return _holdTime;
}

void UNIX_BGPProtocolEndpoint::setHoldTime(Uint16 &value)
{
	_holdTime = value;
}

Boolean UNIX_BGPProtocolEndpoint::getKeepAlive(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_KEEP_ALIVE, getKeepAlive());
	return true;
}

Uint16 UNIX_BGPProtocolEndpoint::getKeepAlive() const
{
	return _keepAlive;
}

void UNIX_BGPProtocolEndpoint::setKeepAlive(Uint16 &value)
{
	_keepAlive = value;
}


void UNIX_BGPProtocolEndpoint::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("BGPProtocolEndpoint");
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
	_creationClassName = String("UNIX_BGPProtocolEndpoint");
	_nameFormat = String ("");
	_protocolType = Uint16(0);
	_protocolIFType = Uint16(0);
	_otherTypeDescription = String ("");
	_broadcastResetSupported = Boolean(false);
	_isEBGP = Boolean(false);
	_isEBGPMultihop = Boolean(false);
	_localIdentifier = String ("");
	_peerIdentifier = String ("");
	_state = Uint16(0);
	_adminStatus = Uint16(0);
	_negotiatedVersion = String ("");
	_localAddress = String ("");
	_localPort = Uint16(0);
	_remoteAddress = String ("");
	_remotePort = Uint16(0);
	_remoteAS = Uint16(0);
	_connectRetryInterval = Uint32(0);
	_holdTimeConfigured = Uint16(0);
	_keepAliveConfigured = Uint16(0);
	_minASOriginationInterval = Uint16(0);
	_minRouteAdvertisementInterval = Uint16(0);
	_holdTime = Uint16(0);
	_keepAlive = Uint16(0);

}

Boolean UNIX_BGPProtocolEndpoint::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "IsEBGP"))
			{
				Boolean isEBGPValue;
				property.getValue().get(isEBGPValue);
				setIsEBGP(isEBGPValue);
			}
			else if (String::equal(property.getName().getString(), "IsEBGPMultihop"))
			{
				Boolean isEBGPMultihopValue;
				property.getValue().get(isEBGPMultihopValue);
				setIsEBGPMultihop(isEBGPMultihopValue);
			}
			else if (String::equal(property.getName().getString(), "LocalIdentifier"))
			{
				String localIdentifierValue;
				property.getValue().get(localIdentifierValue);
				setLocalIdentifier(localIdentifierValue);
			}
			else if (String::equal(property.getName().getString(), "PeerIdentifier"))
			{
				String peerIdentifierValue;
				property.getValue().get(peerIdentifierValue);
				setPeerIdentifier(peerIdentifierValue);
			}
			else if (String::equal(property.getName().getString(), "State"))
			{
				Uint16 stateValue;
				property.getValue().get(stateValue);
				setState(stateValue);
			}
			else if (String::equal(property.getName().getString(), "AdminStatus"))
			{
				Uint16 adminStatusValue;
				property.getValue().get(adminStatusValue);
				setAdminStatus(adminStatusValue);
			}
			else if (String::equal(property.getName().getString(), "NegotiatedVersion"))
			{
				String negotiatedVersionValue;
				property.getValue().get(negotiatedVersionValue);
				setNegotiatedVersion(negotiatedVersionValue);
			}
			else if (String::equal(property.getName().getString(), "LocalAddress"))
			{
				String localAddressValue;
				property.getValue().get(localAddressValue);
				setLocalAddress(localAddressValue);
			}
			else if (String::equal(property.getName().getString(), "LocalPort"))
			{
				Uint16 localPortValue;
				property.getValue().get(localPortValue);
				setLocalPort(localPortValue);
			}
			else if (String::equal(property.getName().getString(), "RemoteAddress"))
			{
				String remoteAddressValue;
				property.getValue().get(remoteAddressValue);
				setRemoteAddress(remoteAddressValue);
			}
			else if (String::equal(property.getName().getString(), "RemotePort"))
			{
				Uint16 remotePortValue;
				property.getValue().get(remotePortValue);
				setRemotePort(remotePortValue);
			}
			else if (String::equal(property.getName().getString(), "RemoteAS"))
			{
				Uint16 remoteASValue;
				property.getValue().get(remoteASValue);
				setRemoteAS(remoteASValue);
			}
			else if (String::equal(property.getName().getString(), "ConnectRetryInterval"))
			{
				Uint32 connectRetryIntervalValue;
				property.getValue().get(connectRetryIntervalValue);
				setConnectRetryInterval(connectRetryIntervalValue);
			}
			else if (String::equal(property.getName().getString(), "HoldTimeConfigured"))
			{
				Uint16 holdTimeConfiguredValue;
				property.getValue().get(holdTimeConfiguredValue);
				setHoldTimeConfigured(holdTimeConfiguredValue);
			}
			else if (String::equal(property.getName().getString(), "KeepAliveConfigured"))
			{
				Uint16 keepAliveConfiguredValue;
				property.getValue().get(keepAliveConfiguredValue);
				setKeepAliveConfigured(keepAliveConfiguredValue);
			}
			else if (String::equal(property.getName().getString(), "MinASOriginationInterval"))
			{
				Uint16 minASOriginationIntervalValue;
				property.getValue().get(minASOriginationIntervalValue);
				setMinASOriginationInterval(minASOriginationIntervalValue);
			}
			else if (String::equal(property.getName().getString(), "MinRouteAdvertisementInterval"))
			{
				Uint16 minRouteAdvertisementIntervalValue;
				property.getValue().get(minRouteAdvertisementIntervalValue);
				setMinRouteAdvertisementInterval(minRouteAdvertisementIntervalValue);
			}
			else if (String::equal(property.getName().getString(), "HoldTime"))
			{
				Uint16 holdTimeValue;
				property.getValue().get(holdTimeValue);
				setHoldTime(holdTimeValue);
			}
			else if (String::equal(property.getName().getString(), "KeepAlive"))
			{
				Uint16 keepAliveValue;
				property.getValue().get(keepAliveValue);
				setKeepAlive(keepAliveValue);
			}
	}
	return true;
}

Uint32 UNIX_BGPProtocolEndpoint::invokeRequestStateChange(
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

Uint32 UNIX_BGPProtocolEndpoint::invokeBroadcastReset()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method BroadcastReset */
	
	
	
	return returnValue;
}


Boolean UNIX_BGPProtocolEndpoint::initialize()
{
	return false;
}

Boolean UNIX_BGPProtocolEndpoint::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("BGPProtocolEndpoint");
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
	_creationClassName = String("UNIX_BGPProtocolEndpoint");
	_nameFormat = String ("");
	_protocolType = Uint16(0);
	_protocolIFType = Uint16(0);
	_otherTypeDescription = String ("");
	_broadcastResetSupported = Boolean(false);
	_isEBGP = Boolean(false);
	_isEBGPMultihop = Boolean(false);
	_localIdentifier = String ("");
	_peerIdentifier = String ("");
	_state = Uint16(0);
	_adminStatus = Uint16(0);
	_negotiatedVersion = String ("");
	_localAddress = String ("");
	_localPort = Uint16(0);
	_remoteAddress = String ("");
	_remotePort = Uint16(0);
	_remoteAS = Uint16(0);
	_connectRetryInterval = Uint32(0);
	_holdTimeConfigured = Uint16(0);
	_keepAliveConfigured = Uint16(0);
	_minASOriginationInterval = Uint16(0);
	_minRouteAdvertisementInterval = Uint16(0);
	_holdTime = Uint16(0);
	_keepAlive = Uint16(0);
	
	return false;
}

Boolean UNIX_BGPProtocolEndpoint::finalize()
{
	return false;
}

Boolean UNIX_BGPProtocolEndpoint::loadByName(const String name)
{
	return false;
}

Boolean UNIX_BGPProtocolEndpoint::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_BGPProtocolEndpoint::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BGPProtocolEndpoint::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BGPProtocolEndpoint::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BGPProtocolEndpoint::validateInstance()
{
	return true;
}

