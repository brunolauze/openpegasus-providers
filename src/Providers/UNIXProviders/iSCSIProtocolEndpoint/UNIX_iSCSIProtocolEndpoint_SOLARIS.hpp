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


UNIX_iSCSIProtocolEndpoint::UNIX_iSCSIProtocolEndpoint(void)
{
}

UNIX_iSCSIProtocolEndpoint::~UNIX_iSCSIProtocolEndpoint(void)
{
}

Boolean UNIX_iSCSIProtocolEndpoint::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_iSCSIProtocolEndpoint::getInstanceID() const
{
	return _instanceID;
}

void UNIX_iSCSIProtocolEndpoint::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_iSCSIProtocolEndpoint::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_iSCSIProtocolEndpoint::getCaption() const
{
	return _caption;
}

void UNIX_iSCSIProtocolEndpoint::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_iSCSIProtocolEndpoint::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_iSCSIProtocolEndpoint::getDescription() const
{
	return _description;
}

void UNIX_iSCSIProtocolEndpoint::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_iSCSIProtocolEndpoint::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_iSCSIProtocolEndpoint::getElementName() const
{
	return _elementName;
}

void UNIX_iSCSIProtocolEndpoint::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_iSCSIProtocolEndpoint::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_iSCSIProtocolEndpoint::getGeneration() const
{
	return _generation;
}

void UNIX_iSCSIProtocolEndpoint::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_iSCSIProtocolEndpoint::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_iSCSIProtocolEndpoint::getInstallDate() const
{
	return _installDate;
}

void UNIX_iSCSIProtocolEndpoint::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_iSCSIProtocolEndpoint::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_iSCSIProtocolEndpoint::getName() const
{
	return _name;
}

void UNIX_iSCSIProtocolEndpoint::setName(String &value)
{
	_name = value;
}

Boolean UNIX_iSCSIProtocolEndpoint::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_iSCSIProtocolEndpoint::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_iSCSIProtocolEndpoint::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_iSCSIProtocolEndpoint::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_iSCSIProtocolEndpoint::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_iSCSIProtocolEndpoint::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_iSCSIProtocolEndpoint::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_iSCSIProtocolEndpoint::getStatus() const
{
	return _status;
}

void UNIX_iSCSIProtocolEndpoint::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_iSCSIProtocolEndpoint::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_iSCSIProtocolEndpoint::getHealthState() const
{
	return _healthState;
}

void UNIX_iSCSIProtocolEndpoint::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_iSCSIProtocolEndpoint::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_iSCSIProtocolEndpoint::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_iSCSIProtocolEndpoint::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_iSCSIProtocolEndpoint::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_iSCSIProtocolEndpoint::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_iSCSIProtocolEndpoint::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_iSCSIProtocolEndpoint::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_iSCSIProtocolEndpoint::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_iSCSIProtocolEndpoint::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_iSCSIProtocolEndpoint::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_iSCSIProtocolEndpoint::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_iSCSIProtocolEndpoint::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_iSCSIProtocolEndpoint::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_iSCSIProtocolEndpoint::getEnabledState() const
{
	return _enabledState;
}

void UNIX_iSCSIProtocolEndpoint::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_iSCSIProtocolEndpoint::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_iSCSIProtocolEndpoint::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_iSCSIProtocolEndpoint::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_iSCSIProtocolEndpoint::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_iSCSIProtocolEndpoint::getRequestedState() const
{
	return _requestedState;
}

void UNIX_iSCSIProtocolEndpoint::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_iSCSIProtocolEndpoint::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_iSCSIProtocolEndpoint::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_iSCSIProtocolEndpoint::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_iSCSIProtocolEndpoint::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_iSCSIProtocolEndpoint::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_iSCSIProtocolEndpoint::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_iSCSIProtocolEndpoint::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_iSCSIProtocolEndpoint::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_iSCSIProtocolEndpoint::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_iSCSIProtocolEndpoint::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_iSCSIProtocolEndpoint::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_iSCSIProtocolEndpoint::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_iSCSIProtocolEndpoint::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_iSCSIProtocolEndpoint::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_iSCSIProtocolEndpoint::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_iSCSIProtocolEndpoint::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_iSCSIProtocolEndpoint::getSystemName() const
{
	return _systemName;
}

void UNIX_iSCSIProtocolEndpoint::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_iSCSIProtocolEndpoint::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_iSCSIProtocolEndpoint::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_iSCSIProtocolEndpoint::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_iSCSIProtocolEndpoint::getNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_FORMAT, getNameFormat());
	return true;
}

String UNIX_iSCSIProtocolEndpoint::getNameFormat() const
{
	return _nameFormat;
}

void UNIX_iSCSIProtocolEndpoint::setNameFormat(String &value)
{
	_nameFormat = value;
}

Boolean UNIX_iSCSIProtocolEndpoint::getProtocolType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_TYPE, getProtocolType());
	return true;
}

Uint16 UNIX_iSCSIProtocolEndpoint::getProtocolType() const
{
	return _protocolType;
}

void UNIX_iSCSIProtocolEndpoint::setProtocolType(Uint16 &value)
{
	_protocolType = value;
}

Boolean UNIX_iSCSIProtocolEndpoint::getProtocolIFType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_I_F_TYPE, getProtocolIFType());
	return true;
}

Uint16 UNIX_iSCSIProtocolEndpoint::getProtocolIFType() const
{
	return _protocolIFType;
}

void UNIX_iSCSIProtocolEndpoint::setProtocolIFType(Uint16 &value)
{
	_protocolIFType = value;
}

Boolean UNIX_iSCSIProtocolEndpoint::getOtherTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TYPE_DESCRIPTION, getOtherTypeDescription());
	return true;
}

String UNIX_iSCSIProtocolEndpoint::getOtherTypeDescription() const
{
	return _otherTypeDescription;
}

void UNIX_iSCSIProtocolEndpoint::setOtherTypeDescription(String &value)
{
	_otherTypeDescription = value;
}

Boolean UNIX_iSCSIProtocolEndpoint::getBroadcastResetSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BROADCAST_RESET_SUPPORTED, getBroadcastResetSupported());
	return true;
}

Boolean UNIX_iSCSIProtocolEndpoint::getBroadcastResetSupported() const
{
	return _broadcastResetSupported;
}

void UNIX_iSCSIProtocolEndpoint::setBroadcastResetSupported(Boolean &value)
{
	_broadcastResetSupported = value;
}

Boolean UNIX_iSCSIProtocolEndpoint::getConnectionType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONNECTION_TYPE, getConnectionType());
	return true;
}

Uint16 UNIX_iSCSIProtocolEndpoint::getConnectionType() const
{
	return _connectionType;
}

void UNIX_iSCSIProtocolEndpoint::setConnectionType(Uint16 &value)
{
	_connectionType = value;
}

Boolean UNIX_iSCSIProtocolEndpoint::getRole(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ROLE, getRole());
	return true;
}

Uint16 UNIX_iSCSIProtocolEndpoint::getRole() const
{
	return _role;
}

void UNIX_iSCSIProtocolEndpoint::setRole(Uint16 &value)
{
	_role = value;
}

Boolean UNIX_iSCSIProtocolEndpoint::getTargetRelativePortNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TARGET_RELATIVE_PORT_NUMBER, getTargetRelativePortNumber());
	return true;
}

Uint32 UNIX_iSCSIProtocolEndpoint::getTargetRelativePortNumber() const
{
	return _targetRelativePortNumber;
}

void UNIX_iSCSIProtocolEndpoint::setTargetRelativePortNumber(Uint32 &value)
{
	_targetRelativePortNumber = value;
}

Boolean UNIX_iSCSIProtocolEndpoint::getOtherConnectionType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_CONNECTION_TYPE, getOtherConnectionType());
	return true;
}

String UNIX_iSCSIProtocolEndpoint::getOtherConnectionType() const
{
	return _otherConnectionType;
}

void UNIX_iSCSIProtocolEndpoint::setOtherConnectionType(String &value)
{
	_otherConnectionType = value;
}

Boolean UNIX_iSCSIProtocolEndpoint::getIdentifier(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFIER, getIdentifier());
	return true;
}

String UNIX_iSCSIProtocolEndpoint::getIdentifier() const
{
	return _identifier;
}

void UNIX_iSCSIProtocolEndpoint::setIdentifier(String &value)
{
	_identifier = value;
}


void UNIX_iSCSIProtocolEndpoint::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("iSCSIProtocolEndpoint");
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
	_creationClassName = String("UNIX_iSCSIProtocolEndpoint");
	_nameFormat = String ("");
	_protocolType = Uint16(0);
	_protocolIFType = Uint16(0);
	_otherTypeDescription = String ("");
	_broadcastResetSupported = Boolean(false);
	_connectionType = Uint16(0);
	_role = Uint16(0);
	_targetRelativePortNumber = Uint32(0);
	_otherConnectionType = String ("");
	_identifier = String ("");

}

Boolean UNIX_iSCSIProtocolEndpoint::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "ConnectionType"))
			{
				Uint16 connectionTypeValue;
				property.getValue().get(connectionTypeValue);
				setConnectionType(connectionTypeValue);
			}
			else if (String::equal(property.getName().getString(), "Role"))
			{
				Uint16 roleValue;
				property.getValue().get(roleValue);
				setRole(roleValue);
			}
			else if (String::equal(property.getName().getString(), "TargetRelativePortNumber"))
			{
				Uint32 targetRelativePortNumberValue;
				property.getValue().get(targetRelativePortNumberValue);
				setTargetRelativePortNumber(targetRelativePortNumberValue);
			}
			else if (String::equal(property.getName().getString(), "OtherConnectionType"))
			{
				String otherConnectionTypeValue;
				property.getValue().get(otherConnectionTypeValue);
				setOtherConnectionType(otherConnectionTypeValue);
			}
			else if (String::equal(property.getName().getString(), "Identifier"))
			{
				String identifierValue;
				property.getValue().get(identifierValue);
				setIdentifier(identifierValue);
			}
	}
	return true;
}

Uint32 UNIX_iSCSIProtocolEndpoint::invokeRequestStateChange(
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

Uint32 UNIX_iSCSIProtocolEndpoint::invokeBroadcastReset()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method BroadcastReset */
	
	
	
	return returnValue;
}


Boolean UNIX_iSCSIProtocolEndpoint::initialize()
{
	return false;
}

Boolean UNIX_iSCSIProtocolEndpoint::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("iSCSIProtocolEndpoint");
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
	_creationClassName = String("UNIX_iSCSIProtocolEndpoint");
	_nameFormat = String ("");
	_protocolType = Uint16(0);
	_protocolIFType = Uint16(0);
	_otherTypeDescription = String ("");
	_broadcastResetSupported = Boolean(false);
	_connectionType = Uint16(0);
	_role = Uint16(0);
	_targetRelativePortNumber = Uint32(0);
	_otherConnectionType = String ("");
	_identifier = String ("");
	
	return false;
}

Boolean UNIX_iSCSIProtocolEndpoint::finalize()
{
	return false;
}

Boolean UNIX_iSCSIProtocolEndpoint::loadByName(const String name)
{
	return false;
}

Boolean UNIX_iSCSIProtocolEndpoint::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_iSCSIProtocolEndpoint::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_iSCSIProtocolEndpoint::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_iSCSIProtocolEndpoint::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_iSCSIProtocolEndpoint::validateInstance()
{
	return true;
}

