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


UNIX_LANEndpoint::UNIX_LANEndpoint(void)
{
}

UNIX_LANEndpoint::~UNIX_LANEndpoint(void)
{
}

Boolean UNIX_LANEndpoint::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_LANEndpoint::getInstanceID() const
{
	return _instanceID;
}

void UNIX_LANEndpoint::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_LANEndpoint::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_LANEndpoint::getCaption() const
{
	return _caption;
}

void UNIX_LANEndpoint::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_LANEndpoint::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_LANEndpoint::getDescription() const
{
	return _description;
}

void UNIX_LANEndpoint::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_LANEndpoint::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_LANEndpoint::getElementName() const
{
	return _elementName;
}

void UNIX_LANEndpoint::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_LANEndpoint::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_LANEndpoint::getGeneration() const
{
	return _generation;
}

void UNIX_LANEndpoint::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_LANEndpoint::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_LANEndpoint::getInstallDate() const
{
	return _installDate;
}

void UNIX_LANEndpoint::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_LANEndpoint::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_LANEndpoint::getName() const
{
	return _name;
}

void UNIX_LANEndpoint::setName(String &value)
{
	_name = value;
}

Boolean UNIX_LANEndpoint::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_LANEndpoint::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_LANEndpoint::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_LANEndpoint::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_LANEndpoint::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_LANEndpoint::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_LANEndpoint::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_LANEndpoint::getStatus() const
{
	return _status;
}

void UNIX_LANEndpoint::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_LANEndpoint::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_LANEndpoint::getHealthState() const
{
	return _healthState;
}

void UNIX_LANEndpoint::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_LANEndpoint::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_LANEndpoint::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_LANEndpoint::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_LANEndpoint::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_LANEndpoint::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_LANEndpoint::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_LANEndpoint::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_LANEndpoint::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_LANEndpoint::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_LANEndpoint::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_LANEndpoint::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_LANEndpoint::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_LANEndpoint::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_LANEndpoint::getEnabledState() const
{
	return _enabledState;
}

void UNIX_LANEndpoint::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_LANEndpoint::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_LANEndpoint::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_LANEndpoint::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_LANEndpoint::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_LANEndpoint::getRequestedState() const
{
	return _requestedState;
}

void UNIX_LANEndpoint::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_LANEndpoint::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_LANEndpoint::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_LANEndpoint::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_LANEndpoint::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_LANEndpoint::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_LANEndpoint::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_LANEndpoint::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_LANEndpoint::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_LANEndpoint::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_LANEndpoint::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_LANEndpoint::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_LANEndpoint::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_LANEndpoint::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_LANEndpoint::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_LANEndpoint::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_LANEndpoint::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_LANEndpoint::getSystemName() const
{
	return _systemName;
}

void UNIX_LANEndpoint::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_LANEndpoint::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_LANEndpoint::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_LANEndpoint::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_LANEndpoint::getNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_FORMAT, getNameFormat());
	return true;
}

String UNIX_LANEndpoint::getNameFormat() const
{
	return _nameFormat;
}

void UNIX_LANEndpoint::setNameFormat(String &value)
{
	_nameFormat = value;
}

Boolean UNIX_LANEndpoint::getProtocolType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_TYPE, getProtocolType());
	return true;
}

Uint16 UNIX_LANEndpoint::getProtocolType() const
{
	return _protocolType;
}

void UNIX_LANEndpoint::setProtocolType(Uint16 &value)
{
	_protocolType = value;
}

Boolean UNIX_LANEndpoint::getProtocolIFType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_I_F_TYPE, getProtocolIFType());
	return true;
}

Uint16 UNIX_LANEndpoint::getProtocolIFType() const
{
	return _protocolIFType;
}

void UNIX_LANEndpoint::setProtocolIFType(Uint16 &value)
{
	_protocolIFType = value;
}

Boolean UNIX_LANEndpoint::getOtherTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TYPE_DESCRIPTION, getOtherTypeDescription());
	return true;
}

String UNIX_LANEndpoint::getOtherTypeDescription() const
{
	return _otherTypeDescription;
}

void UNIX_LANEndpoint::setOtherTypeDescription(String &value)
{
	_otherTypeDescription = value;
}

Boolean UNIX_LANEndpoint::getBroadcastResetSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BROADCAST_RESET_SUPPORTED, getBroadcastResetSupported());
	return true;
}

Boolean UNIX_LANEndpoint::getBroadcastResetSupported() const
{
	return _broadcastResetSupported;
}

void UNIX_LANEndpoint::setBroadcastResetSupported(Boolean &value)
{
	_broadcastResetSupported = value;
}

Boolean UNIX_LANEndpoint::getLANID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_L_A_N_ID, getLANID());
	return true;
}

String UNIX_LANEndpoint::getLANID() const
{
	return _lANID;
}

void UNIX_LANEndpoint::setLANID(String &value)
{
	_lANID = value;
}

Boolean UNIX_LANEndpoint::getLANType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_L_A_N_TYPE, getLANType());
	return true;
}

Uint16 UNIX_LANEndpoint::getLANType() const
{
	return _lANType;
}

void UNIX_LANEndpoint::setLANType(Uint16 &value)
{
	_lANType = value;
}

Boolean UNIX_LANEndpoint::getOtherLANType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_L_A_N_TYPE, getOtherLANType());
	return true;
}

String UNIX_LANEndpoint::getOtherLANType() const
{
	return _otherLANType;
}

void UNIX_LANEndpoint::setOtherLANType(String &value)
{
	_otherLANType = value;
}

Boolean UNIX_LANEndpoint::getMACAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_M_A_C_ADDRESS, getMACAddress());
	return true;
}

String UNIX_LANEndpoint::getMACAddress() const
{
	return _mACAddress;
}

void UNIX_LANEndpoint::setMACAddress(String &value)
{
	_mACAddress = value;
}

Boolean UNIX_LANEndpoint::getAliasAddresses(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALIAS_ADDRESSES, getAliasAddresses());
	return true;
}

Array<String> UNIX_LANEndpoint::getAliasAddresses() const
{
	return _aliasAddresses;
}

void UNIX_LANEndpoint::setAliasAddresses(Array<String> &value)
{
	_aliasAddresses = value;
}

Boolean UNIX_LANEndpoint::getGroupAddresses(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GROUP_ADDRESSES, getGroupAddresses());
	return true;
}

Array<String> UNIX_LANEndpoint::getGroupAddresses() const
{
	return _groupAddresses;
}

void UNIX_LANEndpoint::setGroupAddresses(Array<String> &value)
{
	_groupAddresses = value;
}

Boolean UNIX_LANEndpoint::getMaxDataSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_DATA_SIZE, getMaxDataSize());
	return true;
}

Uint32 UNIX_LANEndpoint::getMaxDataSize() const
{
	return _maxDataSize;
}

void UNIX_LANEndpoint::setMaxDataSize(Uint32 &value)
{
	_maxDataSize = value;
}


void UNIX_LANEndpoint::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("LANEndpoint");
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
	_creationClassName = String("UNIX_LANEndpoint");
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

}

Boolean UNIX_LANEndpoint::loadInstance(const CIMInstance &instance)
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
	}
	return true;
}

Uint32 UNIX_LANEndpoint::invokeRequestStateChange(
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

Uint32 UNIX_LANEndpoint::invokeBroadcastReset()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method BroadcastReset */
	
	
	
	return returnValue;
}


Boolean UNIX_LANEndpoint::initialize()
{
	return false;
}

Boolean UNIX_LANEndpoint::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("LANEndpoint");
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
	_creationClassName = String("UNIX_LANEndpoint");
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
	
	return false;
}

Boolean UNIX_LANEndpoint::finalize()
{
	return false;
}

Boolean UNIX_LANEndpoint::loadByName(const String name)
{
	return false;
}

Boolean UNIX_LANEndpoint::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_LANEndpoint::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_LANEndpoint::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_LANEndpoint::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_LANEndpoint::validateInstance()
{
	return true;
}

