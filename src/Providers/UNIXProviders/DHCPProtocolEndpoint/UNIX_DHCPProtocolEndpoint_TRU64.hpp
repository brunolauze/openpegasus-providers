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


UNIX_DHCPProtocolEndpoint::UNIX_DHCPProtocolEndpoint(void)
{
}

UNIX_DHCPProtocolEndpoint::~UNIX_DHCPProtocolEndpoint(void)
{
}

Boolean UNIX_DHCPProtocolEndpoint::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_DHCPProtocolEndpoint::getInstanceID() const
{
	return _instanceID;
}

void UNIX_DHCPProtocolEndpoint::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_DHCPProtocolEndpoint::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_DHCPProtocolEndpoint::getCaption() const
{
	return _caption;
}

void UNIX_DHCPProtocolEndpoint::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_DHCPProtocolEndpoint::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_DHCPProtocolEndpoint::getDescription() const
{
	return _description;
}

void UNIX_DHCPProtocolEndpoint::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_DHCPProtocolEndpoint::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_DHCPProtocolEndpoint::getElementName() const
{
	return _elementName;
}

void UNIX_DHCPProtocolEndpoint::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_DHCPProtocolEndpoint::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_DHCPProtocolEndpoint::getGeneration() const
{
	return _generation;
}

void UNIX_DHCPProtocolEndpoint::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_DHCPProtocolEndpoint::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_DHCPProtocolEndpoint::getInstallDate() const
{
	return _installDate;
}

void UNIX_DHCPProtocolEndpoint::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_DHCPProtocolEndpoint::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_DHCPProtocolEndpoint::getName() const
{
	return _name;
}

void UNIX_DHCPProtocolEndpoint::setName(String &value)
{
	_name = value;
}

Boolean UNIX_DHCPProtocolEndpoint::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_DHCPProtocolEndpoint::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_DHCPProtocolEndpoint::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_DHCPProtocolEndpoint::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_DHCPProtocolEndpoint::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_DHCPProtocolEndpoint::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_DHCPProtocolEndpoint::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_DHCPProtocolEndpoint::getStatus() const
{
	return _status;
}

void UNIX_DHCPProtocolEndpoint::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_DHCPProtocolEndpoint::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_DHCPProtocolEndpoint::getHealthState() const
{
	return _healthState;
}

void UNIX_DHCPProtocolEndpoint::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_DHCPProtocolEndpoint::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_DHCPProtocolEndpoint::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_DHCPProtocolEndpoint::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_DHCPProtocolEndpoint::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_DHCPProtocolEndpoint::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_DHCPProtocolEndpoint::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_DHCPProtocolEndpoint::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_DHCPProtocolEndpoint::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_DHCPProtocolEndpoint::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_DHCPProtocolEndpoint::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_DHCPProtocolEndpoint::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_DHCPProtocolEndpoint::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_DHCPProtocolEndpoint::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_DHCPProtocolEndpoint::getEnabledState() const
{
	return _enabledState;
}

void UNIX_DHCPProtocolEndpoint::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_DHCPProtocolEndpoint::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_DHCPProtocolEndpoint::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_DHCPProtocolEndpoint::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_DHCPProtocolEndpoint::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_DHCPProtocolEndpoint::getRequestedState() const
{
	return _requestedState;
}

void UNIX_DHCPProtocolEndpoint::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_DHCPProtocolEndpoint::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_DHCPProtocolEndpoint::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_DHCPProtocolEndpoint::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_DHCPProtocolEndpoint::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_DHCPProtocolEndpoint::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_DHCPProtocolEndpoint::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_DHCPProtocolEndpoint::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_DHCPProtocolEndpoint::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_DHCPProtocolEndpoint::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_DHCPProtocolEndpoint::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_DHCPProtocolEndpoint::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_DHCPProtocolEndpoint::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_DHCPProtocolEndpoint::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_DHCPProtocolEndpoint::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_DHCPProtocolEndpoint::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_DHCPProtocolEndpoint::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_DHCPProtocolEndpoint::getSystemName() const
{
	return _systemName;
}

void UNIX_DHCPProtocolEndpoint::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_DHCPProtocolEndpoint::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_DHCPProtocolEndpoint::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_DHCPProtocolEndpoint::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_DHCPProtocolEndpoint::getNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_FORMAT, getNameFormat());
	return true;
}

String UNIX_DHCPProtocolEndpoint::getNameFormat() const
{
	return _nameFormat;
}

void UNIX_DHCPProtocolEndpoint::setNameFormat(String &value)
{
	_nameFormat = value;
}

Boolean UNIX_DHCPProtocolEndpoint::getProtocolType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_TYPE, getProtocolType());
	return true;
}

Uint16 UNIX_DHCPProtocolEndpoint::getProtocolType() const
{
	return _protocolType;
}

void UNIX_DHCPProtocolEndpoint::setProtocolType(Uint16 &value)
{
	_protocolType = value;
}

Boolean UNIX_DHCPProtocolEndpoint::getProtocolIFType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_I_F_TYPE, getProtocolIFType());
	return true;
}

Uint16 UNIX_DHCPProtocolEndpoint::getProtocolIFType() const
{
	return _protocolIFType;
}

void UNIX_DHCPProtocolEndpoint::setProtocolIFType(Uint16 &value)
{
	_protocolIFType = value;
}

Boolean UNIX_DHCPProtocolEndpoint::getOtherTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TYPE_DESCRIPTION, getOtherTypeDescription());
	return true;
}

String UNIX_DHCPProtocolEndpoint::getOtherTypeDescription() const
{
	return _otherTypeDescription;
}

void UNIX_DHCPProtocolEndpoint::setOtherTypeDescription(String &value)
{
	_otherTypeDescription = value;
}

Boolean UNIX_DHCPProtocolEndpoint::getBroadcastResetSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BROADCAST_RESET_SUPPORTED, getBroadcastResetSupported());
	return true;
}

Boolean UNIX_DHCPProtocolEndpoint::getBroadcastResetSupported() const
{
	return _broadcastResetSupported;
}

void UNIX_DHCPProtocolEndpoint::setBroadcastResetSupported(Boolean &value)
{
	_broadcastResetSupported = value;
}

Boolean UNIX_DHCPProtocolEndpoint::getClientState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLIENT_STATE, getClientState());
	return true;
}

Uint16 UNIX_DHCPProtocolEndpoint::getClientState() const
{
	return _clientState;
}

void UNIX_DHCPProtocolEndpoint::setClientState(Uint16 &value)
{
	_clientState = value;
}

Boolean UNIX_DHCPProtocolEndpoint::getRenewalTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RENEWAL_TIME, getRenewalTime());
	return true;
}

Uint32 UNIX_DHCPProtocolEndpoint::getRenewalTime() const
{
	return _renewalTime;
}

void UNIX_DHCPProtocolEndpoint::setRenewalTime(Uint32 &value)
{
	_renewalTime = value;
}

Boolean UNIX_DHCPProtocolEndpoint::getRebindingTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REBINDING_TIME, getRebindingTime());
	return true;
}

Uint32 UNIX_DHCPProtocolEndpoint::getRebindingTime() const
{
	return _rebindingTime;
}

void UNIX_DHCPProtocolEndpoint::setRebindingTime(Uint32 &value)
{
	_rebindingTime = value;
}

Boolean UNIX_DHCPProtocolEndpoint::getLeaseTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LEASE_TIME, getLeaseTime());
	return true;
}

Uint32 UNIX_DHCPProtocolEndpoint::getLeaseTime() const
{
	return _leaseTime;
}

void UNIX_DHCPProtocolEndpoint::setLeaseTime(Uint32 &value)
{
	_leaseTime = value;
}

Boolean UNIX_DHCPProtocolEndpoint::getLeaseObtained(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LEASE_OBTAINED, getLeaseObtained());
	return true;
}

CIMDateTime UNIX_DHCPProtocolEndpoint::getLeaseObtained() const
{
	return _leaseObtained;
}

void UNIX_DHCPProtocolEndpoint::setLeaseObtained(CIMDateTime &value)
{
	_leaseObtained = value;
}

Boolean UNIX_DHCPProtocolEndpoint::getLeaseExpires(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LEASE_EXPIRES, getLeaseExpires());
	return true;
}

CIMDateTime UNIX_DHCPProtocolEndpoint::getLeaseExpires() const
{
	return _leaseExpires;
}

void UNIX_DHCPProtocolEndpoint::setLeaseExpires(CIMDateTime &value)
{
	_leaseExpires = value;
}

Boolean UNIX_DHCPProtocolEndpoint::getOptionsReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPTIONS_RECEIVED, getOptionsReceived());
	return true;
}

Array<Uint16> UNIX_DHCPProtocolEndpoint::getOptionsReceived() const
{
	return _optionsReceived;
}

void UNIX_DHCPProtocolEndpoint::setOptionsReceived(Array<Uint16> &value)
{
	_optionsReceived = value;
}

Boolean UNIX_DHCPProtocolEndpoint::getIPv6OptionsReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IPV_6_OPTIONS_RECEIVED, getIPv6OptionsReceived());
	return true;
}

Array<Uint16> UNIX_DHCPProtocolEndpoint::getIPv6OptionsReceived() const
{
	return _iPv6OptionsReceived;
}

void UNIX_DHCPProtocolEndpoint::setIPv6OptionsReceived(Array<Uint16> &value)
{
	_iPv6OptionsReceived = value;
}


void UNIX_DHCPProtocolEndpoint::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("DHCPProtocolEndpoint");
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
	_creationClassName = String("UNIX_DHCPProtocolEndpoint");
	_nameFormat = String ("");
	_protocolType = Uint16(0);
	_protocolIFType = Uint16(0);
	_otherTypeDescription = String ("");
	_broadcastResetSupported = Boolean(false);
	_clientState = Uint16(0);
	_renewalTime = Uint32(0);
	_rebindingTime = Uint32(0);
	_leaseTime = Uint32(0);
	_leaseObtained = CIMHelper::getCurrentTime();
	_leaseExpires = CIMHelper::getCurrentTime();
	_optionsReceived.clear();
	_iPv6OptionsReceived.clear();

}

Boolean UNIX_DHCPProtocolEndpoint::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "ClientState"))
			{
				Uint16 clientStateValue;
				property.getValue().get(clientStateValue);
				setClientState(clientStateValue);
			}
			else if (String::equal(property.getName().getString(), "RenewalTime"))
			{
				Uint32 renewalTimeValue;
				property.getValue().get(renewalTimeValue);
				setRenewalTime(renewalTimeValue);
			}
			else if (String::equal(property.getName().getString(), "RebindingTime"))
			{
				Uint32 rebindingTimeValue;
				property.getValue().get(rebindingTimeValue);
				setRebindingTime(rebindingTimeValue);
			}
			else if (String::equal(property.getName().getString(), "LeaseTime"))
			{
				Uint32 leaseTimeValue;
				property.getValue().get(leaseTimeValue);
				setLeaseTime(leaseTimeValue);
			}
			else if (String::equal(property.getName().getString(), "LeaseObtained"))
			{
				CIMDateTime leaseObtainedValue;
				property.getValue().get(leaseObtainedValue);
				setLeaseObtained(leaseObtainedValue);
			}
			else if (String::equal(property.getName().getString(), "LeaseExpires"))
			{
				CIMDateTime leaseExpiresValue;
				property.getValue().get(leaseExpiresValue);
				setLeaseExpires(leaseExpiresValue);
			}
			else if (String::equal(property.getName().getString(), "OptionsReceived"))
			{
				Array<Uint16> optionsReceivedValue;
				property.getValue().get(optionsReceivedValue);
				setOptionsReceived(optionsReceivedValue);
			}
			else if (String::equal(property.getName().getString(), "IPv6OptionsReceived"))
			{
				Array<Uint16> iPv6OptionsReceivedValue;
				property.getValue().get(iPv6OptionsReceivedValue);
				setIPv6OptionsReceived(iPv6OptionsReceivedValue);
			}
	}
	return true;
}

Uint32 UNIX_DHCPProtocolEndpoint::invokeRequestStateChange(
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

Uint32 UNIX_DHCPProtocolEndpoint::invokeBroadcastReset()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method BroadcastReset */
	
	
	
	return returnValue;
}


Boolean UNIX_DHCPProtocolEndpoint::initialize()
{
	return false;
}

Boolean UNIX_DHCPProtocolEndpoint::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("DHCPProtocolEndpoint");
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
	_creationClassName = String("UNIX_DHCPProtocolEndpoint");
	_nameFormat = String ("");
	_protocolType = Uint16(0);
	_protocolIFType = Uint16(0);
	_otherTypeDescription = String ("");
	_broadcastResetSupported = Boolean(false);
	_clientState = Uint16(0);
	_renewalTime = Uint32(0);
	_rebindingTime = Uint32(0);
	_leaseTime = Uint32(0);
	_leaseObtained = CIMHelper::getCurrentTime();
	_leaseExpires = CIMHelper::getCurrentTime();
	_optionsReceived.clear();
	_iPv6OptionsReceived.clear();
	
	return false;
}

Boolean UNIX_DHCPProtocolEndpoint::finalize()
{
	return false;
}

Boolean UNIX_DHCPProtocolEndpoint::loadByName(const String name)
{
	return false;
}

Boolean UNIX_DHCPProtocolEndpoint::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_DHCPProtocolEndpoint::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DHCPProtocolEndpoint::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DHCPProtocolEndpoint::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DHCPProtocolEndpoint::validateInstance()
{
	return true;
}

