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


UNIX_SSHProtocolEndpoint::UNIX_SSHProtocolEndpoint(void)
{
}

UNIX_SSHProtocolEndpoint::~UNIX_SSHProtocolEndpoint(void)
{
}

Boolean UNIX_SSHProtocolEndpoint::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_SSHProtocolEndpoint::getInstanceID() const
{
	return _instanceID;
}

void UNIX_SSHProtocolEndpoint::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_SSHProtocolEndpoint::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_SSHProtocolEndpoint::getCaption() const
{
	return _caption;
}

void UNIX_SSHProtocolEndpoint::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_SSHProtocolEndpoint::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_SSHProtocolEndpoint::getDescription() const
{
	return _description;
}

void UNIX_SSHProtocolEndpoint::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_SSHProtocolEndpoint::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_SSHProtocolEndpoint::getElementName() const
{
	return _elementName;
}

void UNIX_SSHProtocolEndpoint::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_SSHProtocolEndpoint::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_SSHProtocolEndpoint::getGeneration() const
{
	return _generation;
}

void UNIX_SSHProtocolEndpoint::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_SSHProtocolEndpoint::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_SSHProtocolEndpoint::getInstallDate() const
{
	return _installDate;
}

void UNIX_SSHProtocolEndpoint::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_SSHProtocolEndpoint::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_SSHProtocolEndpoint::getName() const
{
	return _name;
}

void UNIX_SSHProtocolEndpoint::setName(String &value)
{
	_name = value;
}

Boolean UNIX_SSHProtocolEndpoint::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_SSHProtocolEndpoint::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_SSHProtocolEndpoint::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_SSHProtocolEndpoint::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_SSHProtocolEndpoint::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_SSHProtocolEndpoint::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_SSHProtocolEndpoint::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_SSHProtocolEndpoint::getStatus() const
{
	return _status;
}

void UNIX_SSHProtocolEndpoint::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_SSHProtocolEndpoint::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_SSHProtocolEndpoint::getHealthState() const
{
	return _healthState;
}

void UNIX_SSHProtocolEndpoint::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_SSHProtocolEndpoint::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_SSHProtocolEndpoint::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_SSHProtocolEndpoint::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_SSHProtocolEndpoint::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_SSHProtocolEndpoint::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_SSHProtocolEndpoint::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_SSHProtocolEndpoint::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_SSHProtocolEndpoint::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_SSHProtocolEndpoint::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_SSHProtocolEndpoint::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_SSHProtocolEndpoint::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_SSHProtocolEndpoint::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_SSHProtocolEndpoint::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_SSHProtocolEndpoint::getEnabledState() const
{
	return _enabledState;
}

void UNIX_SSHProtocolEndpoint::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_SSHProtocolEndpoint::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_SSHProtocolEndpoint::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_SSHProtocolEndpoint::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_SSHProtocolEndpoint::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_SSHProtocolEndpoint::getRequestedState() const
{
	return _requestedState;
}

void UNIX_SSHProtocolEndpoint::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_SSHProtocolEndpoint::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_SSHProtocolEndpoint::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_SSHProtocolEndpoint::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_SSHProtocolEndpoint::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_SSHProtocolEndpoint::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_SSHProtocolEndpoint::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_SSHProtocolEndpoint::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_SSHProtocolEndpoint::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_SSHProtocolEndpoint::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_SSHProtocolEndpoint::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_SSHProtocolEndpoint::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_SSHProtocolEndpoint::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_SSHProtocolEndpoint::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_SSHProtocolEndpoint::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_SSHProtocolEndpoint::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_SSHProtocolEndpoint::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_SSHProtocolEndpoint::getSystemName() const
{
	return _systemName;
}

void UNIX_SSHProtocolEndpoint::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_SSHProtocolEndpoint::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_SSHProtocolEndpoint::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_SSHProtocolEndpoint::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_SSHProtocolEndpoint::getNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_FORMAT, getNameFormat());
	return true;
}

String UNIX_SSHProtocolEndpoint::getNameFormat() const
{
	return _nameFormat;
}

void UNIX_SSHProtocolEndpoint::setNameFormat(String &value)
{
	_nameFormat = value;
}

Boolean UNIX_SSHProtocolEndpoint::getProtocolType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_TYPE, getProtocolType());
	return true;
}

Uint16 UNIX_SSHProtocolEndpoint::getProtocolType() const
{
	return _protocolType;
}

void UNIX_SSHProtocolEndpoint::setProtocolType(Uint16 &value)
{
	_protocolType = value;
}

Boolean UNIX_SSHProtocolEndpoint::getProtocolIFType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_I_F_TYPE, getProtocolIFType());
	return true;
}

Uint16 UNIX_SSHProtocolEndpoint::getProtocolIFType() const
{
	return _protocolIFType;
}

void UNIX_SSHProtocolEndpoint::setProtocolIFType(Uint16 &value)
{
	_protocolIFType = value;
}

Boolean UNIX_SSHProtocolEndpoint::getOtherTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TYPE_DESCRIPTION, getOtherTypeDescription());
	return true;
}

String UNIX_SSHProtocolEndpoint::getOtherTypeDescription() const
{
	return _otherTypeDescription;
}

void UNIX_SSHProtocolEndpoint::setOtherTypeDescription(String &value)
{
	_otherTypeDescription = value;
}

Boolean UNIX_SSHProtocolEndpoint::getBroadcastResetSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BROADCAST_RESET_SUPPORTED, getBroadcastResetSupported());
	return true;
}

Boolean UNIX_SSHProtocolEndpoint::getBroadcastResetSupported() const
{
	return _broadcastResetSupported;
}

void UNIX_SSHProtocolEndpoint::setBroadcastResetSupported(Boolean &value)
{
	_broadcastResetSupported = value;
}

Boolean UNIX_SSHProtocolEndpoint::getEnabledSSHVersions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_S_S_H_VERSIONS, getEnabledSSHVersions());
	return true;
}

Array<Uint16> UNIX_SSHProtocolEndpoint::getEnabledSSHVersions() const
{
	return _enabledSSHVersions;
}

void UNIX_SSHProtocolEndpoint::setEnabledSSHVersions(Array<Uint16> &value)
{
	_enabledSSHVersions = value;
}

Boolean UNIX_SSHProtocolEndpoint::getOtherEnabledSSHVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_S_S_H_VERSION, getOtherEnabledSSHVersion());
	return true;
}

String UNIX_SSHProtocolEndpoint::getOtherEnabledSSHVersion() const
{
	return _otherEnabledSSHVersion;
}

void UNIX_SSHProtocolEndpoint::setOtherEnabledSSHVersion(String &value)
{
	_otherEnabledSSHVersion = value;
}

Boolean UNIX_SSHProtocolEndpoint::getSSHVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_S_H_VERSION, getSSHVersion());
	return true;
}

Uint16 UNIX_SSHProtocolEndpoint::getSSHVersion() const
{
	return _sSHVersion;
}

void UNIX_SSHProtocolEndpoint::setSSHVersion(Uint16 &value)
{
	_sSHVersion = value;
}

Boolean UNIX_SSHProtocolEndpoint::getOtherSSHVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_S_S_H_VERSION, getOtherSSHVersion());
	return true;
}

String UNIX_SSHProtocolEndpoint::getOtherSSHVersion() const
{
	return _otherSSHVersion;
}

void UNIX_SSHProtocolEndpoint::setOtherSSHVersion(String &value)
{
	_otherSSHVersion = value;
}

Boolean UNIX_SSHProtocolEndpoint::getEnabledEncryptionAlgorithms(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_ENCRYPTION_ALGORITHMS, getEnabledEncryptionAlgorithms());
	return true;
}

Array<Uint16> UNIX_SSHProtocolEndpoint::getEnabledEncryptionAlgorithms() const
{
	return _enabledEncryptionAlgorithms;
}

void UNIX_SSHProtocolEndpoint::setEnabledEncryptionAlgorithms(Array<Uint16> &value)
{
	_enabledEncryptionAlgorithms = value;
}

Boolean UNIX_SSHProtocolEndpoint::getOtherEnabledEncryptionAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_ENCRYPTION_ALGORITHM, getOtherEnabledEncryptionAlgorithm());
	return true;
}

String UNIX_SSHProtocolEndpoint::getOtherEnabledEncryptionAlgorithm() const
{
	return _otherEnabledEncryptionAlgorithm;
}

void UNIX_SSHProtocolEndpoint::setOtherEnabledEncryptionAlgorithm(String &value)
{
	_otherEnabledEncryptionAlgorithm = value;
}

Boolean UNIX_SSHProtocolEndpoint::getEncryptionAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENCRYPTION_ALGORITHM, getEncryptionAlgorithm());
	return true;
}

Uint16 UNIX_SSHProtocolEndpoint::getEncryptionAlgorithm() const
{
	return _encryptionAlgorithm;
}

void UNIX_SSHProtocolEndpoint::setEncryptionAlgorithm(Uint16 &value)
{
	_encryptionAlgorithm = value;
}

Boolean UNIX_SSHProtocolEndpoint::getOtherEncryptionAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENCRYPTION_ALGORITHM, getOtherEncryptionAlgorithm());
	return true;
}

String UNIX_SSHProtocolEndpoint::getOtherEncryptionAlgorithm() const
{
	return _otherEncryptionAlgorithm;
}

void UNIX_SSHProtocolEndpoint::setOtherEncryptionAlgorithm(String &value)
{
	_otherEncryptionAlgorithm = value;
}

Boolean UNIX_SSHProtocolEndpoint::getIdleTimeout(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDLE_TIMEOUT, getIdleTimeout());
	return true;
}

Uint32 UNIX_SSHProtocolEndpoint::getIdleTimeout() const
{
	return _idleTimeout;
}

void UNIX_SSHProtocolEndpoint::setIdleTimeout(Uint32 &value)
{
	_idleTimeout = value;
}

Boolean UNIX_SSHProtocolEndpoint::getKeepAlive(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_KEEP_ALIVE, getKeepAlive());
	return true;
}

Boolean UNIX_SSHProtocolEndpoint::getKeepAlive() const
{
	return _keepAlive;
}

void UNIX_SSHProtocolEndpoint::setKeepAlive(Boolean &value)
{
	_keepAlive = value;
}

Boolean UNIX_SSHProtocolEndpoint::getForwardX11(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FORWARD_X_1_1, getForwardX11());
	return true;
}

Boolean UNIX_SSHProtocolEndpoint::getForwardX11() const
{
	return _forwardX11;
}

void UNIX_SSHProtocolEndpoint::setForwardX11(Boolean &value)
{
	_forwardX11 = value;
}

Boolean UNIX_SSHProtocolEndpoint::getCompression(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPRESSION, getCompression());
	return true;
}

Boolean UNIX_SSHProtocolEndpoint::getCompression() const
{
	return _compression;
}

void UNIX_SSHProtocolEndpoint::setCompression(Boolean &value)
{
	_compression = value;
}


void UNIX_SSHProtocolEndpoint::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("SSHProtocolEndpoint");
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
	_creationClassName = String("UNIX_SSHProtocolEndpoint");
	_nameFormat = String ("");
	_protocolType = Uint16(0);
	_protocolIFType = Uint16(0);
	_otherTypeDescription = String ("");
	_broadcastResetSupported = Boolean(false);
	_enabledSSHVersions.clear();
	_otherEnabledSSHVersion = String ("");
	_sSHVersion = Uint16(0);
	_otherSSHVersion = String ("");
	_enabledEncryptionAlgorithms.clear();
	_otherEnabledEncryptionAlgorithm = String ("");
	_encryptionAlgorithm = Uint16(0);
	_otherEncryptionAlgorithm = String ("");
	_idleTimeout = Uint32(0);
	_keepAlive = Boolean(false);
	_forwardX11 = Boolean(false);
	_compression = Boolean(false);

}

Boolean UNIX_SSHProtocolEndpoint::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "EnabledSSHVersions"))
			{
				Array<Uint16> enabledSSHVersionsValue;
				property.getValue().get(enabledSSHVersionsValue);
				setEnabledSSHVersions(enabledSSHVersionsValue);
			}
			else if (String::equal(property.getName().getString(), "OtherEnabledSSHVersion"))
			{
				String otherEnabledSSHVersionValue;
				property.getValue().get(otherEnabledSSHVersionValue);
				setOtherEnabledSSHVersion(otherEnabledSSHVersionValue);
			}
			else if (String::equal(property.getName().getString(), "SSHVersion"))
			{
				Uint16 sSHVersionValue;
				property.getValue().get(sSHVersionValue);
				setSSHVersion(sSHVersionValue);
			}
			else if (String::equal(property.getName().getString(), "OtherSSHVersion"))
			{
				String otherSSHVersionValue;
				property.getValue().get(otherSSHVersionValue);
				setOtherSSHVersion(otherSSHVersionValue);
			}
			else if (String::equal(property.getName().getString(), "EnabledEncryptionAlgorithms"))
			{
				Array<Uint16> enabledEncryptionAlgorithmsValue;
				property.getValue().get(enabledEncryptionAlgorithmsValue);
				setEnabledEncryptionAlgorithms(enabledEncryptionAlgorithmsValue);
			}
			else if (String::equal(property.getName().getString(), "OtherEnabledEncryptionAlgorithm"))
			{
				String otherEnabledEncryptionAlgorithmValue;
				property.getValue().get(otherEnabledEncryptionAlgorithmValue);
				setOtherEnabledEncryptionAlgorithm(otherEnabledEncryptionAlgorithmValue);
			}
			else if (String::equal(property.getName().getString(), "EncryptionAlgorithm"))
			{
				Uint16 encryptionAlgorithmValue;
				property.getValue().get(encryptionAlgorithmValue);
				setEncryptionAlgorithm(encryptionAlgorithmValue);
			}
			else if (String::equal(property.getName().getString(), "OtherEncryptionAlgorithm"))
			{
				String otherEncryptionAlgorithmValue;
				property.getValue().get(otherEncryptionAlgorithmValue);
				setOtherEncryptionAlgorithm(otherEncryptionAlgorithmValue);
			}
			else if (String::equal(property.getName().getString(), "IdleTimeout"))
			{
				Uint32 idleTimeoutValue;
				property.getValue().get(idleTimeoutValue);
				setIdleTimeout(idleTimeoutValue);
			}
			else if (String::equal(property.getName().getString(), "KeepAlive"))
			{
				Boolean keepAliveValue;
				property.getValue().get(keepAliveValue);
				setKeepAlive(keepAliveValue);
			}
			else if (String::equal(property.getName().getString(), "ForwardX11"))
			{
				Boolean forwardX11Value;
				property.getValue().get(forwardX11Value);
				setForwardX11(forwardX11Value);
			}
			else if (String::equal(property.getName().getString(), "Compression"))
			{
				Boolean compressionValue;
				property.getValue().get(compressionValue);
				setCompression(compressionValue);
			}
	}
	return true;
}

Uint32 UNIX_SSHProtocolEndpoint::invokeRequestStateChange(
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

Uint32 UNIX_SSHProtocolEndpoint::invokeBroadcastReset()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method BroadcastReset */
	
	
	
	return returnValue;
}


Boolean UNIX_SSHProtocolEndpoint::initialize()
{
	return false;
}

Boolean UNIX_SSHProtocolEndpoint::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("SSHProtocolEndpoint");
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
	_creationClassName = String("UNIX_SSHProtocolEndpoint");
	_nameFormat = String ("");
	_protocolType = Uint16(0);
	_protocolIFType = Uint16(0);
	_otherTypeDescription = String ("");
	_broadcastResetSupported = Boolean(false);
	_enabledSSHVersions.clear();
	_otherEnabledSSHVersion = String ("");
	_sSHVersion = Uint16(0);
	_otherSSHVersion = String ("");
	_enabledEncryptionAlgorithms.clear();
	_otherEnabledEncryptionAlgorithm = String ("");
	_encryptionAlgorithm = Uint16(0);
	_otherEncryptionAlgorithm = String ("");
	_idleTimeout = Uint32(0);
	_keepAlive = Boolean(false);
	_forwardX11 = Boolean(false);
	_compression = Boolean(false);
	
	return false;
}

Boolean UNIX_SSHProtocolEndpoint::finalize()
{
	return false;
}

Boolean UNIX_SSHProtocolEndpoint::loadByName(const String name)
{
	return false;
}

Boolean UNIX_SSHProtocolEndpoint::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_SSHProtocolEndpoint::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SSHProtocolEndpoint::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SSHProtocolEndpoint::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SSHProtocolEndpoint::validateInstance()
{
	return true;
}

