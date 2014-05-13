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


UNIX_DNSProtocolEndpoint::UNIX_DNSProtocolEndpoint(void)
{
}

UNIX_DNSProtocolEndpoint::~UNIX_DNSProtocolEndpoint(void)
{
}

Boolean UNIX_DNSProtocolEndpoint::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_DNSProtocolEndpoint::getInstanceID() const
{
	return _instanceID;
}

void UNIX_DNSProtocolEndpoint::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_DNSProtocolEndpoint::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_DNSProtocolEndpoint::getCaption() const
{
	return _caption;
}

void UNIX_DNSProtocolEndpoint::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_DNSProtocolEndpoint::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_DNSProtocolEndpoint::getDescription() const
{
	return _description;
}

void UNIX_DNSProtocolEndpoint::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_DNSProtocolEndpoint::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_DNSProtocolEndpoint::getElementName() const
{
	return _elementName;
}

void UNIX_DNSProtocolEndpoint::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_DNSProtocolEndpoint::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_DNSProtocolEndpoint::getGeneration() const
{
	return _generation;
}

void UNIX_DNSProtocolEndpoint::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_DNSProtocolEndpoint::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_DNSProtocolEndpoint::getInstallDate() const
{
	return _installDate;
}

void UNIX_DNSProtocolEndpoint::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_DNSProtocolEndpoint::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_DNSProtocolEndpoint::getName() const
{
	return _name;
}

void UNIX_DNSProtocolEndpoint::setName(String &value)
{
	_name = value;
}

Boolean UNIX_DNSProtocolEndpoint::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_DNSProtocolEndpoint::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_DNSProtocolEndpoint::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_DNSProtocolEndpoint::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_DNSProtocolEndpoint::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_DNSProtocolEndpoint::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_DNSProtocolEndpoint::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_DNSProtocolEndpoint::getStatus() const
{
	return _status;
}

void UNIX_DNSProtocolEndpoint::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_DNSProtocolEndpoint::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_DNSProtocolEndpoint::getHealthState() const
{
	return _healthState;
}

void UNIX_DNSProtocolEndpoint::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_DNSProtocolEndpoint::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_DNSProtocolEndpoint::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_DNSProtocolEndpoint::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_DNSProtocolEndpoint::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_DNSProtocolEndpoint::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_DNSProtocolEndpoint::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_DNSProtocolEndpoint::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_DNSProtocolEndpoint::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_DNSProtocolEndpoint::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_DNSProtocolEndpoint::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_DNSProtocolEndpoint::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_DNSProtocolEndpoint::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_DNSProtocolEndpoint::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_DNSProtocolEndpoint::getEnabledState() const
{
	return _enabledState;
}

void UNIX_DNSProtocolEndpoint::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_DNSProtocolEndpoint::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_DNSProtocolEndpoint::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_DNSProtocolEndpoint::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_DNSProtocolEndpoint::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_DNSProtocolEndpoint::getRequestedState() const
{
	return _requestedState;
}

void UNIX_DNSProtocolEndpoint::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_DNSProtocolEndpoint::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_DNSProtocolEndpoint::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_DNSProtocolEndpoint::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_DNSProtocolEndpoint::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_DNSProtocolEndpoint::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_DNSProtocolEndpoint::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_DNSProtocolEndpoint::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_DNSProtocolEndpoint::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_DNSProtocolEndpoint::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_DNSProtocolEndpoint::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_DNSProtocolEndpoint::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_DNSProtocolEndpoint::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_DNSProtocolEndpoint::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_DNSProtocolEndpoint::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_DNSProtocolEndpoint::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_DNSProtocolEndpoint::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_DNSProtocolEndpoint::getSystemName() const
{
	return _systemName;
}

void UNIX_DNSProtocolEndpoint::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_DNSProtocolEndpoint::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_DNSProtocolEndpoint::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_DNSProtocolEndpoint::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_DNSProtocolEndpoint::getNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_FORMAT, getNameFormat());
	return true;
}

String UNIX_DNSProtocolEndpoint::getNameFormat() const
{
	return _nameFormat;
}

void UNIX_DNSProtocolEndpoint::setNameFormat(String &value)
{
	_nameFormat = value;
}

Boolean UNIX_DNSProtocolEndpoint::getProtocolType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_TYPE, getProtocolType());
	return true;
}

Uint16 UNIX_DNSProtocolEndpoint::getProtocolType() const
{
	return _protocolType;
}

void UNIX_DNSProtocolEndpoint::setProtocolType(Uint16 &value)
{
	_protocolType = value;
}

Boolean UNIX_DNSProtocolEndpoint::getProtocolIFType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_I_F_TYPE, getProtocolIFType());
	return true;
}

Uint16 UNIX_DNSProtocolEndpoint::getProtocolIFType() const
{
	return _protocolIFType;
}

void UNIX_DNSProtocolEndpoint::setProtocolIFType(Uint16 &value)
{
	_protocolIFType = value;
}

Boolean UNIX_DNSProtocolEndpoint::getOtherTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TYPE_DESCRIPTION, getOtherTypeDescription());
	return true;
}

String UNIX_DNSProtocolEndpoint::getOtherTypeDescription() const
{
	return _otherTypeDescription;
}

void UNIX_DNSProtocolEndpoint::setOtherTypeDescription(String &value)
{
	_otherTypeDescription = value;
}

Boolean UNIX_DNSProtocolEndpoint::getBroadcastResetSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BROADCAST_RESET_SUPPORTED, getBroadcastResetSupported());
	return true;
}

Boolean UNIX_DNSProtocolEndpoint::getBroadcastResetSupported() const
{
	return _broadcastResetSupported;
}

void UNIX_DNSProtocolEndpoint::setBroadcastResetSupported(Boolean &value)
{
	_broadcastResetSupported = value;
}

Boolean UNIX_DNSProtocolEndpoint::getHostname(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HOSTNAME, getHostname());
	return true;
}

String UNIX_DNSProtocolEndpoint::getHostname() const
{
	return _hostname;
}

void UNIX_DNSProtocolEndpoint::setHostname(String &value)
{
	_hostname = value;
}

Boolean UNIX_DNSProtocolEndpoint::getAppendPrimarySuffixes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_APPEND_PRIMARY_SUFFIXES, getAppendPrimarySuffixes());
	return true;
}

Boolean UNIX_DNSProtocolEndpoint::getAppendPrimarySuffixes() const
{
	return _appendPrimarySuffixes;
}

void UNIX_DNSProtocolEndpoint::setAppendPrimarySuffixes(Boolean &value)
{
	_appendPrimarySuffixes = value;
}

Boolean UNIX_DNSProtocolEndpoint::getAppendParentSuffixes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_APPEND_PARENT_SUFFIXES, getAppendParentSuffixes());
	return true;
}

Boolean UNIX_DNSProtocolEndpoint::getAppendParentSuffixes() const
{
	return _appendParentSuffixes;
}

void UNIX_DNSProtocolEndpoint::setAppendParentSuffixes(Boolean &value)
{
	_appendParentSuffixes = value;
}

Boolean UNIX_DNSProtocolEndpoint::getDNSSuffixesToAppend(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DNS_SUFFIXES_TO_APPEND, getDNSSuffixesToAppend());
	return true;
}

Array<String> UNIX_DNSProtocolEndpoint::getDNSSuffixesToAppend() const
{
	return _dNSSuffixesToAppend;
}

void UNIX_DNSProtocolEndpoint::setDNSSuffixesToAppend(Array<String> &value)
{
	_dNSSuffixesToAppend = value;
}

Boolean UNIX_DNSProtocolEndpoint::getDomainName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DOMAIN_NAME, getDomainName());
	return true;
}

String UNIX_DNSProtocolEndpoint::getDomainName() const
{
	return _domainName;
}

void UNIX_DNSProtocolEndpoint::setDomainName(String &value)
{
	_domainName = value;
}

Boolean UNIX_DNSProtocolEndpoint::getUseSuffixWhenRegistering(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USE_SUFFIX_WHEN_REGISTERING, getUseSuffixWhenRegistering());
	return true;
}

Boolean UNIX_DNSProtocolEndpoint::getUseSuffixWhenRegistering() const
{
	return _useSuffixWhenRegistering;
}

void UNIX_DNSProtocolEndpoint::setUseSuffixWhenRegistering(Boolean &value)
{
	_useSuffixWhenRegistering = value;
}

Boolean UNIX_DNSProtocolEndpoint::getRegisterThisConnectionsAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REGISTER_THIS_CONNECTIONS_ADDRESS, getRegisterThisConnectionsAddress());
	return true;
}

Boolean UNIX_DNSProtocolEndpoint::getRegisterThisConnectionsAddress() const
{
	return _registerThisConnectionsAddress;
}

void UNIX_DNSProtocolEndpoint::setRegisterThisConnectionsAddress(Boolean &value)
{
	_registerThisConnectionsAddress = value;
}

Boolean UNIX_DNSProtocolEndpoint::getDHCPOptionsToUse(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DHCP_OPTIONS_TO_USE, getDHCPOptionsToUse());
	return true;
}

Array<Uint16> UNIX_DNSProtocolEndpoint::getDHCPOptionsToUse() const
{
	return _dHCPOptionsToUse;
}

void UNIX_DNSProtocolEndpoint::setDHCPOptionsToUse(Array<Uint16> &value)
{
	_dHCPOptionsToUse = value;
}


void UNIX_DNSProtocolEndpoint::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("DNSProtocolEndpoint");
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
	_creationClassName = String("UNIX_DNSProtocolEndpoint");
	_nameFormat = String ("");
	_protocolType = Uint16(0);
	_protocolIFType = Uint16(0);
	_otherTypeDescription = String ("");
	_broadcastResetSupported = Boolean(false);
	_hostname = String ("");
	_appendPrimarySuffixes = Boolean(false);
	_appendParentSuffixes = Boolean(false);
	_dNSSuffixesToAppend.clear();
	_domainName = String ("");
	_useSuffixWhenRegistering = Boolean(false);
	_registerThisConnectionsAddress = Boolean(false);
	_dHCPOptionsToUse.clear();

}

Boolean UNIX_DNSProtocolEndpoint::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "Hostname"))
			{
				String hostnameValue;
				property.getValue().get(hostnameValue);
				setHostname(hostnameValue);
			}
			else if (String::equal(property.getName().getString(), "AppendPrimarySuffixes"))
			{
				Boolean appendPrimarySuffixesValue;
				property.getValue().get(appendPrimarySuffixesValue);
				setAppendPrimarySuffixes(appendPrimarySuffixesValue);
			}
			else if (String::equal(property.getName().getString(), "AppendParentSuffixes"))
			{
				Boolean appendParentSuffixesValue;
				property.getValue().get(appendParentSuffixesValue);
				setAppendParentSuffixes(appendParentSuffixesValue);
			}
			else if (String::equal(property.getName().getString(), "DNSSuffixesToAppend"))
			{
				Array<String> dNSSuffixesToAppendValue;
				property.getValue().get(dNSSuffixesToAppendValue);
				setDNSSuffixesToAppend(dNSSuffixesToAppendValue);
			}
			else if (String::equal(property.getName().getString(), "DomainName"))
			{
				String domainNameValue;
				property.getValue().get(domainNameValue);
				setDomainName(domainNameValue);
			}
			else if (String::equal(property.getName().getString(), "UseSuffixWhenRegistering"))
			{
				Boolean useSuffixWhenRegisteringValue;
				property.getValue().get(useSuffixWhenRegisteringValue);
				setUseSuffixWhenRegistering(useSuffixWhenRegisteringValue);
			}
			else if (String::equal(property.getName().getString(), "RegisterThisConnectionsAddress"))
			{
				Boolean registerThisConnectionsAddressValue;
				property.getValue().get(registerThisConnectionsAddressValue);
				setRegisterThisConnectionsAddress(registerThisConnectionsAddressValue);
			}
			else if (String::equal(property.getName().getString(), "DHCPOptionsToUse"))
			{
				Array<Uint16> dHCPOptionsToUseValue;
				property.getValue().get(dHCPOptionsToUseValue);
				setDHCPOptionsToUse(dHCPOptionsToUseValue);
			}
	}
	return true;
}

Uint32 UNIX_DNSProtocolEndpoint::invokeRequestStateChange(
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

Uint32 UNIX_DNSProtocolEndpoint::invokeBroadcastReset()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method BroadcastReset */
	
	
	
	return returnValue;
}


Boolean UNIX_DNSProtocolEndpoint::initialize()
{
	return false;
}

Boolean UNIX_DNSProtocolEndpoint::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("DNSProtocolEndpoint");
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
	_creationClassName = String("UNIX_DNSProtocolEndpoint");
	_nameFormat = String ("");
	_protocolType = Uint16(0);
	_protocolIFType = Uint16(0);
	_otherTypeDescription = String ("");
	_broadcastResetSupported = Boolean(false);
	_hostname = String ("");
	_appendPrimarySuffixes = Boolean(false);
	_appendParentSuffixes = Boolean(false);
	_dNSSuffixesToAppend.clear();
	_domainName = String ("");
	_useSuffixWhenRegistering = Boolean(false);
	_registerThisConnectionsAddress = Boolean(false);
	_dHCPOptionsToUse.clear();
	
	return false;
}

Boolean UNIX_DNSProtocolEndpoint::finalize()
{
	return false;
}

Boolean UNIX_DNSProtocolEndpoint::loadByName(const String name)
{
	return false;
}

Boolean UNIX_DNSProtocolEndpoint::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_DNSProtocolEndpoint::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DNSProtocolEndpoint::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DNSProtocolEndpoint::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DNSProtocolEndpoint::validateInstance()
{
	return true;
}

