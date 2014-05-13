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


UNIX_VLANEndpoint::UNIX_VLANEndpoint(void)
{
}

UNIX_VLANEndpoint::~UNIX_VLANEndpoint(void)
{
}

Boolean UNIX_VLANEndpoint::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_VLANEndpoint::getInstanceID() const
{
	return _instanceID;
}

void UNIX_VLANEndpoint::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_VLANEndpoint::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_VLANEndpoint::getCaption() const
{
	return _caption;
}

void UNIX_VLANEndpoint::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_VLANEndpoint::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_VLANEndpoint::getDescription() const
{
	return _description;
}

void UNIX_VLANEndpoint::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_VLANEndpoint::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_VLANEndpoint::getElementName() const
{
	return _elementName;
}

void UNIX_VLANEndpoint::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_VLANEndpoint::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_VLANEndpoint::getGeneration() const
{
	return _generation;
}

void UNIX_VLANEndpoint::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_VLANEndpoint::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_VLANEndpoint::getInstallDate() const
{
	return _installDate;
}

void UNIX_VLANEndpoint::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_VLANEndpoint::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_VLANEndpoint::getName() const
{
	return _name;
}

void UNIX_VLANEndpoint::setName(String &value)
{
	_name = value;
}

Boolean UNIX_VLANEndpoint::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_VLANEndpoint::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_VLANEndpoint::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_VLANEndpoint::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_VLANEndpoint::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_VLANEndpoint::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_VLANEndpoint::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_VLANEndpoint::getStatus() const
{
	return _status;
}

void UNIX_VLANEndpoint::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_VLANEndpoint::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_VLANEndpoint::getHealthState() const
{
	return _healthState;
}

void UNIX_VLANEndpoint::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_VLANEndpoint::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_VLANEndpoint::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_VLANEndpoint::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_VLANEndpoint::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_VLANEndpoint::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_VLANEndpoint::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_VLANEndpoint::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_VLANEndpoint::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_VLANEndpoint::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_VLANEndpoint::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_VLANEndpoint::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_VLANEndpoint::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_VLANEndpoint::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_VLANEndpoint::getEnabledState() const
{
	return _enabledState;
}

void UNIX_VLANEndpoint::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_VLANEndpoint::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_VLANEndpoint::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_VLANEndpoint::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_VLANEndpoint::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_VLANEndpoint::getRequestedState() const
{
	return _requestedState;
}

void UNIX_VLANEndpoint::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_VLANEndpoint::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_VLANEndpoint::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_VLANEndpoint::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_VLANEndpoint::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_VLANEndpoint::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_VLANEndpoint::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_VLANEndpoint::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_VLANEndpoint::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_VLANEndpoint::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_VLANEndpoint::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_VLANEndpoint::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_VLANEndpoint::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_VLANEndpoint::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_VLANEndpoint::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_VLANEndpoint::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_VLANEndpoint::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_VLANEndpoint::getSystemName() const
{
	return _systemName;
}

void UNIX_VLANEndpoint::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_VLANEndpoint::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_VLANEndpoint::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_VLANEndpoint::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_VLANEndpoint::getNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_FORMAT, getNameFormat());
	return true;
}

String UNIX_VLANEndpoint::getNameFormat() const
{
	return _nameFormat;
}

void UNIX_VLANEndpoint::setNameFormat(String &value)
{
	_nameFormat = value;
}

Boolean UNIX_VLANEndpoint::getProtocolType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_TYPE, getProtocolType());
	return true;
}

Uint16 UNIX_VLANEndpoint::getProtocolType() const
{
	return _protocolType;
}

void UNIX_VLANEndpoint::setProtocolType(Uint16 &value)
{
	_protocolType = value;
}

Boolean UNIX_VLANEndpoint::getProtocolIFType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_I_F_TYPE, getProtocolIFType());
	return true;
}

Uint16 UNIX_VLANEndpoint::getProtocolIFType() const
{
	return _protocolIFType;
}

void UNIX_VLANEndpoint::setProtocolIFType(Uint16 &value)
{
	_protocolIFType = value;
}

Boolean UNIX_VLANEndpoint::getOtherTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TYPE_DESCRIPTION, getOtherTypeDescription());
	return true;
}

String UNIX_VLANEndpoint::getOtherTypeDescription() const
{
	return _otherTypeDescription;
}

void UNIX_VLANEndpoint::setOtherTypeDescription(String &value)
{
	_otherTypeDescription = value;
}

Boolean UNIX_VLANEndpoint::getBroadcastResetSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BROADCAST_RESET_SUPPORTED, getBroadcastResetSupported());
	return true;
}

Boolean UNIX_VLANEndpoint::getBroadcastResetSupported() const
{
	return _broadcastResetSupported;
}

void UNIX_VLANEndpoint::setBroadcastResetSupported(Boolean &value)
{
	_broadcastResetSupported = value;
}

Boolean UNIX_VLANEndpoint::getDesiredEndpointMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESIRED_ENDPOINT_MODE, getDesiredEndpointMode());
	return true;
}

Uint16 UNIX_VLANEndpoint::getDesiredEndpointMode() const
{
	return _desiredEndpointMode;
}

void UNIX_VLANEndpoint::setDesiredEndpointMode(Uint16 &value)
{
	_desiredEndpointMode = value;
}

Boolean UNIX_VLANEndpoint::getOtherEndpointMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENDPOINT_MODE, getOtherEndpointMode());
	return true;
}

String UNIX_VLANEndpoint::getOtherEndpointMode() const
{
	return _otherEndpointMode;
}

void UNIX_VLANEndpoint::setOtherEndpointMode(String &value)
{
	_otherEndpointMode = value;
}

Boolean UNIX_VLANEndpoint::getOperationalEndpointMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_ENDPOINT_MODE, getOperationalEndpointMode());
	return true;
}

Uint16 UNIX_VLANEndpoint::getOperationalEndpointMode() const
{
	return _operationalEndpointMode;
}

void UNIX_VLANEndpoint::setOperationalEndpointMode(Uint16 &value)
{
	_operationalEndpointMode = value;
}

Boolean UNIX_VLANEndpoint::getDesiredVLANTrunkEncapsulation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESIRED_VLAN_TRUNK_ENCAPSULATION, getDesiredVLANTrunkEncapsulation());
	return true;
}

Uint16 UNIX_VLANEndpoint::getDesiredVLANTrunkEncapsulation() const
{
	return _desiredVLANTrunkEncapsulation;
}

void UNIX_VLANEndpoint::setDesiredVLANTrunkEncapsulation(Uint16 &value)
{
	_desiredVLANTrunkEncapsulation = value;
}

Boolean UNIX_VLANEndpoint::getOtherTrunkEncapsulation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TRUNK_ENCAPSULATION, getOtherTrunkEncapsulation());
	return true;
}

String UNIX_VLANEndpoint::getOtherTrunkEncapsulation() const
{
	return _otherTrunkEncapsulation;
}

void UNIX_VLANEndpoint::setOtherTrunkEncapsulation(String &value)
{
	_otherTrunkEncapsulation = value;
}

Boolean UNIX_VLANEndpoint::getOperationalVLANTrunkEncapsulation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_VLAN_TRUNK_ENCAPSULATION, getOperationalVLANTrunkEncapsulation());
	return true;
}

Uint16 UNIX_VLANEndpoint::getOperationalVLANTrunkEncapsulation() const
{
	return _operationalVLANTrunkEncapsulation;
}

void UNIX_VLANEndpoint::setOperationalVLANTrunkEncapsulation(Uint16 &value)
{
	_operationalVLANTrunkEncapsulation = value;
}

Boolean UNIX_VLANEndpoint::getGVRPStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_G_V_R_P_STATUS, getGVRPStatus());
	return true;
}

Uint16 UNIX_VLANEndpoint::getGVRPStatus() const
{
	return _gVRPStatus;
}

void UNIX_VLANEndpoint::setGVRPStatus(Uint16 &value)
{
	_gVRPStatus = value;
}


void UNIX_VLANEndpoint::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("VLANEndpoint");
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
	_creationClassName = String("UNIX_VLANEndpoint");
	_nameFormat = String ("");
	_protocolType = Uint16(0);
	_protocolIFType = Uint16(0);
	_otherTypeDescription = String ("");
	_broadcastResetSupported = Boolean(false);
	_desiredEndpointMode = Uint16(0);
	_otherEndpointMode = String ("");
	_operationalEndpointMode = Uint16(0);
	_desiredVLANTrunkEncapsulation = Uint16(0);
	_otherTrunkEncapsulation = String ("");
	_operationalVLANTrunkEncapsulation = Uint16(0);
	_gVRPStatus = Uint16(0);

}

Boolean UNIX_VLANEndpoint::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "DesiredEndpointMode"))
			{
				Uint16 desiredEndpointModeValue;
				property.getValue().get(desiredEndpointModeValue);
				setDesiredEndpointMode(desiredEndpointModeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherEndpointMode"))
			{
				String otherEndpointModeValue;
				property.getValue().get(otherEndpointModeValue);
				setOtherEndpointMode(otherEndpointModeValue);
			}
			else if (String::equal(property.getName().getString(), "OperationalEndpointMode"))
			{
				Uint16 operationalEndpointModeValue;
				property.getValue().get(operationalEndpointModeValue);
				setOperationalEndpointMode(operationalEndpointModeValue);
			}
			else if (String::equal(property.getName().getString(), "DesiredVLANTrunkEncapsulation"))
			{
				Uint16 desiredVLANTrunkEncapsulationValue;
				property.getValue().get(desiredVLANTrunkEncapsulationValue);
				setDesiredVLANTrunkEncapsulation(desiredVLANTrunkEncapsulationValue);
			}
			else if (String::equal(property.getName().getString(), "OtherTrunkEncapsulation"))
			{
				String otherTrunkEncapsulationValue;
				property.getValue().get(otherTrunkEncapsulationValue);
				setOtherTrunkEncapsulation(otherTrunkEncapsulationValue);
			}
			else if (String::equal(property.getName().getString(), "OperationalVLANTrunkEncapsulation"))
			{
				Uint16 operationalVLANTrunkEncapsulationValue;
				property.getValue().get(operationalVLANTrunkEncapsulationValue);
				setOperationalVLANTrunkEncapsulation(operationalVLANTrunkEncapsulationValue);
			}
			else if (String::equal(property.getName().getString(), "GVRPStatus"))
			{
				Uint16 gVRPStatusValue;
				property.getValue().get(gVRPStatusValue);
				setGVRPStatus(gVRPStatusValue);
			}
	}
	return true;
}

Uint32 UNIX_VLANEndpoint::invokeRequestStateChange(
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

Uint32 UNIX_VLANEndpoint::invokeBroadcastReset()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method BroadcastReset */
	
	
	
	return returnValue;
}


Boolean UNIX_VLANEndpoint::initialize()
{
	return false;
}

Boolean UNIX_VLANEndpoint::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("VLANEndpoint");
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
	_creationClassName = String("UNIX_VLANEndpoint");
	_nameFormat = String ("");
	_protocolType = Uint16(0);
	_protocolIFType = Uint16(0);
	_otherTypeDescription = String ("");
	_broadcastResetSupported = Boolean(false);
	_desiredEndpointMode = Uint16(0);
	_otherEndpointMode = String ("");
	_operationalEndpointMode = Uint16(0);
	_desiredVLANTrunkEncapsulation = Uint16(0);
	_otherTrunkEncapsulation = String ("");
	_operationalVLANTrunkEncapsulation = Uint16(0);
	_gVRPStatus = Uint16(0);
	
	return false;
}

Boolean UNIX_VLANEndpoint::finalize()
{
	return false;
}

Boolean UNIX_VLANEndpoint::loadByName(const String name)
{
	return false;
}

Boolean UNIX_VLANEndpoint::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_VLANEndpoint::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VLANEndpoint::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VLANEndpoint::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VLANEndpoint::validateInstance()
{
	return true;
}

