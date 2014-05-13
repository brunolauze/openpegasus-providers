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


UNIX_WiFiEndpoint::UNIX_WiFiEndpoint(void)
{
}

UNIX_WiFiEndpoint::~UNIX_WiFiEndpoint(void)
{
}

Boolean UNIX_WiFiEndpoint::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_WiFiEndpoint::getInstanceID() const
{
	return _instanceID;
}

void UNIX_WiFiEndpoint::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_WiFiEndpoint::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_WiFiEndpoint::getCaption() const
{
	return _caption;
}

void UNIX_WiFiEndpoint::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_WiFiEndpoint::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_WiFiEndpoint::getDescription() const
{
	return _description;
}

void UNIX_WiFiEndpoint::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_WiFiEndpoint::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_WiFiEndpoint::getElementName() const
{
	return _elementName;
}

void UNIX_WiFiEndpoint::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_WiFiEndpoint::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_WiFiEndpoint::getGeneration() const
{
	return _generation;
}

void UNIX_WiFiEndpoint::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_WiFiEndpoint::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_WiFiEndpoint::getInstallDate() const
{
	return _installDate;
}

void UNIX_WiFiEndpoint::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_WiFiEndpoint::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_WiFiEndpoint::getName() const
{
	return _name;
}

void UNIX_WiFiEndpoint::setName(String &value)
{
	_name = value;
}

Boolean UNIX_WiFiEndpoint::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_WiFiEndpoint::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_WiFiEndpoint::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_WiFiEndpoint::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_WiFiEndpoint::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_WiFiEndpoint::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_WiFiEndpoint::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_WiFiEndpoint::getStatus() const
{
	return _status;
}

void UNIX_WiFiEndpoint::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_WiFiEndpoint::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_WiFiEndpoint::getHealthState() const
{
	return _healthState;
}

void UNIX_WiFiEndpoint::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_WiFiEndpoint::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_WiFiEndpoint::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_WiFiEndpoint::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_WiFiEndpoint::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_WiFiEndpoint::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_WiFiEndpoint::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_WiFiEndpoint::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_WiFiEndpoint::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_WiFiEndpoint::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_WiFiEndpoint::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_WiFiEndpoint::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_WiFiEndpoint::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_WiFiEndpoint::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_WiFiEndpoint::getEnabledState() const
{
	return _enabledState;
}

void UNIX_WiFiEndpoint::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_WiFiEndpoint::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_WiFiEndpoint::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_WiFiEndpoint::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_WiFiEndpoint::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_WiFiEndpoint::getRequestedState() const
{
	return _requestedState;
}

void UNIX_WiFiEndpoint::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_WiFiEndpoint::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_WiFiEndpoint::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_WiFiEndpoint::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_WiFiEndpoint::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_WiFiEndpoint::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_WiFiEndpoint::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_WiFiEndpoint::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_WiFiEndpoint::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_WiFiEndpoint::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_WiFiEndpoint::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_WiFiEndpoint::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_WiFiEndpoint::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_WiFiEndpoint::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_WiFiEndpoint::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_WiFiEndpoint::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_WiFiEndpoint::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_WiFiEndpoint::getSystemName() const
{
	return _systemName;
}

void UNIX_WiFiEndpoint::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_WiFiEndpoint::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_WiFiEndpoint::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_WiFiEndpoint::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_WiFiEndpoint::getNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_FORMAT, getNameFormat());
	return true;
}

String UNIX_WiFiEndpoint::getNameFormat() const
{
	return _nameFormat;
}

void UNIX_WiFiEndpoint::setNameFormat(String &value)
{
	_nameFormat = value;
}

Boolean UNIX_WiFiEndpoint::getProtocolType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_TYPE, getProtocolType());
	return true;
}

Uint16 UNIX_WiFiEndpoint::getProtocolType() const
{
	return _protocolType;
}

void UNIX_WiFiEndpoint::setProtocolType(Uint16 &value)
{
	_protocolType = value;
}

Boolean UNIX_WiFiEndpoint::getProtocolIFType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_I_F_TYPE, getProtocolIFType());
	return true;
}

Uint16 UNIX_WiFiEndpoint::getProtocolIFType() const
{
	return _protocolIFType;
}

void UNIX_WiFiEndpoint::setProtocolIFType(Uint16 &value)
{
	_protocolIFType = value;
}

Boolean UNIX_WiFiEndpoint::getOtherTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TYPE_DESCRIPTION, getOtherTypeDescription());
	return true;
}

String UNIX_WiFiEndpoint::getOtherTypeDescription() const
{
	return _otherTypeDescription;
}

void UNIX_WiFiEndpoint::setOtherTypeDescription(String &value)
{
	_otherTypeDescription = value;
}

Boolean UNIX_WiFiEndpoint::getBroadcastResetSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BROADCAST_RESET_SUPPORTED, getBroadcastResetSupported());
	return true;
}

Boolean UNIX_WiFiEndpoint::getBroadcastResetSupported() const
{
	return _broadcastResetSupported;
}

void UNIX_WiFiEndpoint::setBroadcastResetSupported(Boolean &value)
{
	_broadcastResetSupported = value;
}

Boolean UNIX_WiFiEndpoint::getLANID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_L_A_N_ID, getLANID());
	return true;
}

String UNIX_WiFiEndpoint::getLANID() const
{
	return _lANID;
}

void UNIX_WiFiEndpoint::setLANID(String &value)
{
	_lANID = value;
}

Boolean UNIX_WiFiEndpoint::getLANType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_L_A_N_TYPE, getLANType());
	return true;
}

Uint16 UNIX_WiFiEndpoint::getLANType() const
{
	return _lANType;
}

void UNIX_WiFiEndpoint::setLANType(Uint16 &value)
{
	_lANType = value;
}

Boolean UNIX_WiFiEndpoint::getOtherLANType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_L_A_N_TYPE, getOtherLANType());
	return true;
}

String UNIX_WiFiEndpoint::getOtherLANType() const
{
	return _otherLANType;
}

void UNIX_WiFiEndpoint::setOtherLANType(String &value)
{
	_otherLANType = value;
}

Boolean UNIX_WiFiEndpoint::getMACAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_M_A_C_ADDRESS, getMACAddress());
	return true;
}

String UNIX_WiFiEndpoint::getMACAddress() const
{
	return _mACAddress;
}

void UNIX_WiFiEndpoint::setMACAddress(String &value)
{
	_mACAddress = value;
}

Boolean UNIX_WiFiEndpoint::getAliasAddresses(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALIAS_ADDRESSES, getAliasAddresses());
	return true;
}

Array<String> UNIX_WiFiEndpoint::getAliasAddresses() const
{
	return _aliasAddresses;
}

void UNIX_WiFiEndpoint::setAliasAddresses(Array<String> &value)
{
	_aliasAddresses = value;
}

Boolean UNIX_WiFiEndpoint::getGroupAddresses(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GROUP_ADDRESSES, getGroupAddresses());
	return true;
}

Array<String> UNIX_WiFiEndpoint::getGroupAddresses() const
{
	return _groupAddresses;
}

void UNIX_WiFiEndpoint::setGroupAddresses(Array<String> &value)
{
	_groupAddresses = value;
}

Boolean UNIX_WiFiEndpoint::getMaxDataSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_DATA_SIZE, getMaxDataSize());
	return true;
}

Uint32 UNIX_WiFiEndpoint::getMaxDataSize() const
{
	return _maxDataSize;
}

void UNIX_WiFiEndpoint::setMaxDataSize(Uint32 &value)
{
	_maxDataSize = value;
}

Boolean UNIX_WiFiEndpoint::getEncryptionMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENCRYPTION_METHOD, getEncryptionMethod());
	return true;
}

Uint16 UNIX_WiFiEndpoint::getEncryptionMethod() const
{
	return _encryptionMethod;
}

void UNIX_WiFiEndpoint::setEncryptionMethod(Uint16 &value)
{
	_encryptionMethod = value;
}

Boolean UNIX_WiFiEndpoint::getOtherEncryptionMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENCRYPTION_METHOD, getOtherEncryptionMethod());
	return true;
}

String UNIX_WiFiEndpoint::getOtherEncryptionMethod() const
{
	return _otherEncryptionMethod;
}

void UNIX_WiFiEndpoint::setOtherEncryptionMethod(String &value)
{
	_otherEncryptionMethod = value;
}

Boolean UNIX_WiFiEndpoint::getAuthenticationMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTHENTICATION_METHOD, getAuthenticationMethod());
	return true;
}

Uint16 UNIX_WiFiEndpoint::getAuthenticationMethod() const
{
	return _authenticationMethod;
}

void UNIX_WiFiEndpoint::setAuthenticationMethod(Uint16 &value)
{
	_authenticationMethod = value;
}

Boolean UNIX_WiFiEndpoint::getOtherAuthenticationMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_AUTHENTICATION_METHOD, getOtherAuthenticationMethod());
	return true;
}

String UNIX_WiFiEndpoint::getOtherAuthenticationMethod() const
{
	return _otherAuthenticationMethod;
}

void UNIX_WiFiEndpoint::setOtherAuthenticationMethod(String &value)
{
	_otherAuthenticationMethod = value;
}

Boolean UNIX_WiFiEndpoint::getIEEE8021xAuthenticationProtocol(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IEEE_8_0_2_1X_AUTHENTICATION_PROTOCOL, getIEEE8021xAuthenticationProtocol());
	return true;
}

Uint16 UNIX_WiFiEndpoint::getIEEE8021xAuthenticationProtocol() const
{
	return _iEEE8021xAuthenticationProtocol;
}

void UNIX_WiFiEndpoint::setIEEE8021xAuthenticationProtocol(Uint16 &value)
{
	_iEEE8021xAuthenticationProtocol = value;
}

Boolean UNIX_WiFiEndpoint::getAccessPointAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCESS_POINT_ADDRESS, getAccessPointAddress());
	return true;
}

String UNIX_WiFiEndpoint::getAccessPointAddress() const
{
	return _accessPointAddress;
}

void UNIX_WiFiEndpoint::setAccessPointAddress(String &value)
{
	_accessPointAddress = value;
}

Boolean UNIX_WiFiEndpoint::getBSSType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_B_S_S_TYPE, getBSSType());
	return true;
}

Uint16 UNIX_WiFiEndpoint::getBSSType() const
{
	return _bSSType;
}

void UNIX_WiFiEndpoint::setBSSType(Uint16 &value)
{
	_bSSType = value;
}

Boolean UNIX_WiFiEndpoint::getAssociated(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ASSOCIATED, getAssociated());
	return true;
}

Boolean UNIX_WiFiEndpoint::getAssociated() const
{
	return _associated;
}

void UNIX_WiFiEndpoint::setAssociated(Boolean &value)
{
	_associated = value;
}


void UNIX_WiFiEndpoint::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("WiFiEndpoint");
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
	_creationClassName = String("UNIX_WiFiEndpoint");
	_nameFormat = String ("");
	_protocolType = Uint16(0);
	_protocolIFType = Uint16(0);
	_otherTypeDescription = String ("");
	_broadcastResetSupported = Boolean(false);
	_lANID = String ("");
	_lANType = Uint16(0);
	_otherLANType = String ("");
	_mACAddress = String ("");
	_aliasAddresses.clear();
	_groupAddresses.clear();
	_maxDataSize = Uint32(0);
	_encryptionMethod = Uint16(0);
	_otherEncryptionMethod = String ("");
	_authenticationMethod = Uint16(0);
	_otherAuthenticationMethod = String ("");
	_iEEE8021xAuthenticationProtocol = Uint16(0);
	_accessPointAddress = String ("");
	_bSSType = Uint16(0);
	_associated = Boolean(false);

}

Boolean UNIX_WiFiEndpoint::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "LANID"))
			{
				String lANIDValue;
				property.getValue().get(lANIDValue);
				setLANID(lANIDValue);
			}
			else if (String::equal(property.getName().getString(), "LANType"))
			{
				Uint16 lANTypeValue;
				property.getValue().get(lANTypeValue);
				setLANType(lANTypeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherLANType"))
			{
				String otherLANTypeValue;
				property.getValue().get(otherLANTypeValue);
				setOtherLANType(otherLANTypeValue);
			}
			else if (String::equal(property.getName().getString(), "MACAddress"))
			{
				String mACAddressValue;
				property.getValue().get(mACAddressValue);
				setMACAddress(mACAddressValue);
			}
			else if (String::equal(property.getName().getString(), "AliasAddresses"))
			{
				Array<String> aliasAddressesValue;
				property.getValue().get(aliasAddressesValue);
				setAliasAddresses(aliasAddressesValue);
			}
			else if (String::equal(property.getName().getString(), "GroupAddresses"))
			{
				Array<String> groupAddressesValue;
				property.getValue().get(groupAddressesValue);
				setGroupAddresses(groupAddressesValue);
			}
			else if (String::equal(property.getName().getString(), "MaxDataSize"))
			{
				Uint32 maxDataSizeValue;
				property.getValue().get(maxDataSizeValue);
				setMaxDataSize(maxDataSizeValue);
			}
			else if (String::equal(property.getName().getString(), "EncryptionMethod"))
			{
				Uint16 encryptionMethodValue;
				property.getValue().get(encryptionMethodValue);
				setEncryptionMethod(encryptionMethodValue);
			}
			else if (String::equal(property.getName().getString(), "OtherEncryptionMethod"))
			{
				String otherEncryptionMethodValue;
				property.getValue().get(otherEncryptionMethodValue);
				setOtherEncryptionMethod(otherEncryptionMethodValue);
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
			else if (String::equal(property.getName().getString(), "IEEE8021xAuthenticationProtocol"))
			{
				Uint16 iEEE8021xAuthenticationProtocolValue;
				property.getValue().get(iEEE8021xAuthenticationProtocolValue);
				setIEEE8021xAuthenticationProtocol(iEEE8021xAuthenticationProtocolValue);
			}
			else if (String::equal(property.getName().getString(), "AccessPointAddress"))
			{
				String accessPointAddressValue;
				property.getValue().get(accessPointAddressValue);
				setAccessPointAddress(accessPointAddressValue);
			}
			else if (String::equal(property.getName().getString(), "BSSType"))
			{
				Uint16 bSSTypeValue;
				property.getValue().get(bSSTypeValue);
				setBSSType(bSSTypeValue);
			}
			else if (String::equal(property.getName().getString(), "Associated"))
			{
				Boolean associatedValue;
				property.getValue().get(associatedValue);
				setAssociated(associatedValue);
			}
	}
	return true;
}

Uint32 UNIX_WiFiEndpoint::invokeRequestStateChange(
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

Uint32 UNIX_WiFiEndpoint::invokeBroadcastReset()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method BroadcastReset */
	
	
	
	return returnValue;
}


Boolean UNIX_WiFiEndpoint::initialize()
{
	return false;
}

Boolean UNIX_WiFiEndpoint::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("WiFiEndpoint");
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
	_creationClassName = String("UNIX_WiFiEndpoint");
	_nameFormat = String ("");
	_protocolType = Uint16(0);
	_protocolIFType = Uint16(0);
	_otherTypeDescription = String ("");
	_broadcastResetSupported = Boolean(false);
	_lANID = String ("");
	_lANType = Uint16(0);
	_otherLANType = String ("");
	_mACAddress = String ("");
	_aliasAddresses.clear();
	_groupAddresses.clear();
	_maxDataSize = Uint32(0);
	_encryptionMethod = Uint16(0);
	_otherEncryptionMethod = String ("");
	_authenticationMethod = Uint16(0);
	_otherAuthenticationMethod = String ("");
	_iEEE8021xAuthenticationProtocol = Uint16(0);
	_accessPointAddress = String ("");
	_bSSType = Uint16(0);
	_associated = Boolean(false);
	
	return false;
}

Boolean UNIX_WiFiEndpoint::finalize()
{
	return false;
}

Boolean UNIX_WiFiEndpoint::loadByName(const String name)
{
	return false;
}

Boolean UNIX_WiFiEndpoint::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_WiFiEndpoint::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_WiFiEndpoint::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_WiFiEndpoint::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_WiFiEndpoint::validateInstance()
{
	return true;
}

