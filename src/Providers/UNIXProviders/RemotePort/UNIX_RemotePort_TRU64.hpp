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


UNIX_RemotePort::UNIX_RemotePort(void)
{
}

UNIX_RemotePort::~UNIX_RemotePort(void)
{
}

Boolean UNIX_RemotePort::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_RemotePort::getInstanceID() const
{
	return _instanceID;
}

void UNIX_RemotePort::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_RemotePort::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_RemotePort::getCaption() const
{
	return _caption;
}

void UNIX_RemotePort::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_RemotePort::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_RemotePort::getDescription() const
{
	return _description;
}

void UNIX_RemotePort::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_RemotePort::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_RemotePort::getElementName() const
{
	return _elementName;
}

void UNIX_RemotePort::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_RemotePort::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_RemotePort::getGeneration() const
{
	return _generation;
}

void UNIX_RemotePort::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_RemotePort::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_RemotePort::getInstallDate() const
{
	return _installDate;
}

void UNIX_RemotePort::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_RemotePort::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_RemotePort::getName() const
{
	return _name;
}

void UNIX_RemotePort::setName(String &value)
{
	_name = value;
}

Boolean UNIX_RemotePort::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_RemotePort::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_RemotePort::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_RemotePort::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_RemotePort::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_RemotePort::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_RemotePort::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_RemotePort::getStatus() const
{
	return _status;
}

void UNIX_RemotePort::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_RemotePort::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_RemotePort::getHealthState() const
{
	return _healthState;
}

void UNIX_RemotePort::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_RemotePort::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_RemotePort::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_RemotePort::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_RemotePort::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_RemotePort::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_RemotePort::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_RemotePort::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_RemotePort::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_RemotePort::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_RemotePort::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_RemotePort::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_RemotePort::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_RemotePort::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_RemotePort::getEnabledState() const
{
	return _enabledState;
}

void UNIX_RemotePort::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_RemotePort::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_RemotePort::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_RemotePort::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_RemotePort::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_RemotePort::getRequestedState() const
{
	return _requestedState;
}

void UNIX_RemotePort::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_RemotePort::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_RemotePort::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_RemotePort::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_RemotePort::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_RemotePort::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_RemotePort::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_RemotePort::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_RemotePort::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_RemotePort::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_RemotePort::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_RemotePort::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_RemotePort::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_RemotePort::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_RemotePort::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_RemotePort::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_RemotePort::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_RemotePort::getSystemName() const
{
	return _systemName;
}

void UNIX_RemotePort::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_RemotePort::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_RemotePort::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_RemotePort::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_RemotePort::getAccessInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCESS_INFO, getAccessInfo());
	return true;
}

String UNIX_RemotePort::getAccessInfo() const
{
	return _accessInfo;
}

void UNIX_RemotePort::setAccessInfo(String &value)
{
	_accessInfo = value;
}

Boolean UNIX_RemotePort::getInfoFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INFO_FORMAT, getInfoFormat());
	return true;
}

Uint16 UNIX_RemotePort::getInfoFormat() const
{
	return _infoFormat;
}

void UNIX_RemotePort::setInfoFormat(Uint16 &value)
{
	_infoFormat = value;
}

Boolean UNIX_RemotePort::getOtherInfoFormatDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_INFO_FORMAT_DESCRIPTION, getOtherInfoFormatDescription());
	return true;
}

String UNIX_RemotePort::getOtherInfoFormatDescription() const
{
	return _otherInfoFormatDescription;
}

void UNIX_RemotePort::setOtherInfoFormatDescription(String &value)
{
	_otherInfoFormatDescription = value;
}

Boolean UNIX_RemotePort::getAccessContext(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCESS_CONTEXT, getAccessContext());
	return true;
}

Uint16 UNIX_RemotePort::getAccessContext() const
{
	return _accessContext;
}

void UNIX_RemotePort::setAccessContext(Uint16 &value)
{
	_accessContext = value;
}

Boolean UNIX_RemotePort::getOtherAccessContext(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ACCESS_CONTEXT, getOtherAccessContext());
	return true;
}

String UNIX_RemotePort::getOtherAccessContext() const
{
	return _otherAccessContext;
}

void UNIX_RemotePort::setOtherAccessContext(String &value)
{
	_otherAccessContext = value;
}

Boolean UNIX_RemotePort::getPortInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_INFO, getPortInfo());
	return true;
}

String UNIX_RemotePort::getPortInfo() const
{
	return _portInfo;
}

void UNIX_RemotePort::setPortInfo(String &value)
{
	_portInfo = value;
}

Boolean UNIX_RemotePort::getPortProtocol(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_PROTOCOL, getPortProtocol());
	return true;
}

Uint16 UNIX_RemotePort::getPortProtocol() const
{
	return _portProtocol;
}

void UNIX_RemotePort::setPortProtocol(Uint16 &value)
{
	_portProtocol = value;
}

Boolean UNIX_RemotePort::getOtherProtocolDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_PROTOCOL_DESCRIPTION, getOtherProtocolDescription());
	return true;
}

String UNIX_RemotePort::getOtherProtocolDescription() const
{
	return _otherProtocolDescription;
}

void UNIX_RemotePort::setOtherProtocolDescription(String &value)
{
	_otherProtocolDescription = value;
}


void UNIX_RemotePort::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("RemotePort");
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
	_creationClassName = String("UNIX_RemotePort");
	_accessInfo = String ("");
	_infoFormat = Uint16(0);
	_otherInfoFormatDescription = String ("");
	_accessContext = Uint16(0);
	_otherAccessContext = String ("");
	_portInfo = String ("");
	_portProtocol = Uint16(0);
	_otherProtocolDescription = String ("");

}

Boolean UNIX_RemotePort::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "AccessInfo"))
			{
				String accessInfoValue;
				property.getValue().get(accessInfoValue);
				setAccessInfo(accessInfoValue);
			}
			else if (String::equal(property.getName().getString(), "InfoFormat"))
			{
				Uint16 infoFormatValue;
				property.getValue().get(infoFormatValue);
				setInfoFormat(infoFormatValue);
			}
			else if (String::equal(property.getName().getString(), "OtherInfoFormatDescription"))
			{
				String otherInfoFormatDescriptionValue;
				property.getValue().get(otherInfoFormatDescriptionValue);
				setOtherInfoFormatDescription(otherInfoFormatDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "AccessContext"))
			{
				Uint16 accessContextValue;
				property.getValue().get(accessContextValue);
				setAccessContext(accessContextValue);
			}
			else if (String::equal(property.getName().getString(), "OtherAccessContext"))
			{
				String otherAccessContextValue;
				property.getValue().get(otherAccessContextValue);
				setOtherAccessContext(otherAccessContextValue);
			}
			else if (String::equal(property.getName().getString(), "PortInfo"))
			{
				String portInfoValue;
				property.getValue().get(portInfoValue);
				setPortInfo(portInfoValue);
			}
			else if (String::equal(property.getName().getString(), "PortProtocol"))
			{
				Uint16 portProtocolValue;
				property.getValue().get(portProtocolValue);
				setPortProtocol(portProtocolValue);
			}
			else if (String::equal(property.getName().getString(), "OtherProtocolDescription"))
			{
				String otherProtocolDescriptionValue;
				property.getValue().get(otherProtocolDescriptionValue);
				setOtherProtocolDescription(otherProtocolDescriptionValue);
			}
	}
	return true;
}

Uint32 UNIX_RemotePort::invokeRequestStateChange(
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


Boolean UNIX_RemotePort::initialize()
{
	return false;
}

Boolean UNIX_RemotePort::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("RemotePort");
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
	_creationClassName = String("UNIX_RemotePort");
	_accessInfo = String ("");
	_infoFormat = Uint16(0);
	_otherInfoFormatDescription = String ("");
	_accessContext = Uint16(0);
	_otherAccessContext = String ("");
	_portInfo = String ("");
	_portProtocol = Uint16(0);
	_otherProtocolDescription = String ("");
	
	return false;
}

Boolean UNIX_RemotePort::finalize()
{
	return false;
}

Boolean UNIX_RemotePort::loadByName(const String name)
{
	return false;
}

Boolean UNIX_RemotePort::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_RemotePort::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_RemotePort::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_RemotePort::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_RemotePort::validateInstance()
{
	return true;
}

