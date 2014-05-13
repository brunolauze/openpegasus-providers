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


UNIX_PolicyTransferServiceAccessPoint::UNIX_PolicyTransferServiceAccessPoint(void)
{
}

UNIX_PolicyTransferServiceAccessPoint::~UNIX_PolicyTransferServiceAccessPoint(void)
{
}

Boolean UNIX_PolicyTransferServiceAccessPoint::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_PolicyTransferServiceAccessPoint::getInstanceID() const
{
	return _instanceID;
}

void UNIX_PolicyTransferServiceAccessPoint::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_PolicyTransferServiceAccessPoint::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_PolicyTransferServiceAccessPoint::getCaption() const
{
	return _caption;
}

void UNIX_PolicyTransferServiceAccessPoint::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_PolicyTransferServiceAccessPoint::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_PolicyTransferServiceAccessPoint::getDescription() const
{
	return _description;
}

void UNIX_PolicyTransferServiceAccessPoint::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_PolicyTransferServiceAccessPoint::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_PolicyTransferServiceAccessPoint::getElementName() const
{
	return _elementName;
}

void UNIX_PolicyTransferServiceAccessPoint::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_PolicyTransferServiceAccessPoint::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_PolicyTransferServiceAccessPoint::getGeneration() const
{
	return _generation;
}

void UNIX_PolicyTransferServiceAccessPoint::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_PolicyTransferServiceAccessPoint::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_PolicyTransferServiceAccessPoint::getInstallDate() const
{
	return _installDate;
}

void UNIX_PolicyTransferServiceAccessPoint::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_PolicyTransferServiceAccessPoint::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_PolicyTransferServiceAccessPoint::getName() const
{
	return _name;
}

void UNIX_PolicyTransferServiceAccessPoint::setName(String &value)
{
	_name = value;
}

Boolean UNIX_PolicyTransferServiceAccessPoint::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_PolicyTransferServiceAccessPoint::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_PolicyTransferServiceAccessPoint::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_PolicyTransferServiceAccessPoint::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_PolicyTransferServiceAccessPoint::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_PolicyTransferServiceAccessPoint::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_PolicyTransferServiceAccessPoint::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_PolicyTransferServiceAccessPoint::getStatus() const
{
	return _status;
}

void UNIX_PolicyTransferServiceAccessPoint::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_PolicyTransferServiceAccessPoint::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_PolicyTransferServiceAccessPoint::getHealthState() const
{
	return _healthState;
}

void UNIX_PolicyTransferServiceAccessPoint::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_PolicyTransferServiceAccessPoint::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_PolicyTransferServiceAccessPoint::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_PolicyTransferServiceAccessPoint::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_PolicyTransferServiceAccessPoint::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_PolicyTransferServiceAccessPoint::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_PolicyTransferServiceAccessPoint::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_PolicyTransferServiceAccessPoint::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_PolicyTransferServiceAccessPoint::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_PolicyTransferServiceAccessPoint::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_PolicyTransferServiceAccessPoint::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_PolicyTransferServiceAccessPoint::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_PolicyTransferServiceAccessPoint::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_PolicyTransferServiceAccessPoint::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_PolicyTransferServiceAccessPoint::getEnabledState() const
{
	return _enabledState;
}

void UNIX_PolicyTransferServiceAccessPoint::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_PolicyTransferServiceAccessPoint::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_PolicyTransferServiceAccessPoint::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_PolicyTransferServiceAccessPoint::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_PolicyTransferServiceAccessPoint::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_PolicyTransferServiceAccessPoint::getRequestedState() const
{
	return _requestedState;
}

void UNIX_PolicyTransferServiceAccessPoint::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_PolicyTransferServiceAccessPoint::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_PolicyTransferServiceAccessPoint::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_PolicyTransferServiceAccessPoint::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_PolicyTransferServiceAccessPoint::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_PolicyTransferServiceAccessPoint::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_PolicyTransferServiceAccessPoint::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_PolicyTransferServiceAccessPoint::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_PolicyTransferServiceAccessPoint::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_PolicyTransferServiceAccessPoint::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_PolicyTransferServiceAccessPoint::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_PolicyTransferServiceAccessPoint::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_PolicyTransferServiceAccessPoint::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_PolicyTransferServiceAccessPoint::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_PolicyTransferServiceAccessPoint::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_PolicyTransferServiceAccessPoint::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_PolicyTransferServiceAccessPoint::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_PolicyTransferServiceAccessPoint::getSystemName() const
{
	return _systemName;
}

void UNIX_PolicyTransferServiceAccessPoint::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_PolicyTransferServiceAccessPoint::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_PolicyTransferServiceAccessPoint::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_PolicyTransferServiceAccessPoint::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_PolicyTransferServiceAccessPoint::getAccessInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCESS_INFO, getAccessInfo());
	return true;
}

String UNIX_PolicyTransferServiceAccessPoint::getAccessInfo() const
{
	return _accessInfo;
}

void UNIX_PolicyTransferServiceAccessPoint::setAccessInfo(String &value)
{
	_accessInfo = value;
}

Boolean UNIX_PolicyTransferServiceAccessPoint::getInfoFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INFO_FORMAT, getInfoFormat());
	return true;
}

Uint16 UNIX_PolicyTransferServiceAccessPoint::getInfoFormat() const
{
	return _infoFormat;
}

void UNIX_PolicyTransferServiceAccessPoint::setInfoFormat(Uint16 &value)
{
	_infoFormat = value;
}

Boolean UNIX_PolicyTransferServiceAccessPoint::getOtherInfoFormatDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_INFO_FORMAT_DESCRIPTION, getOtherInfoFormatDescription());
	return true;
}

String UNIX_PolicyTransferServiceAccessPoint::getOtherInfoFormatDescription() const
{
	return _otherInfoFormatDescription;
}

void UNIX_PolicyTransferServiceAccessPoint::setOtherInfoFormatDescription(String &value)
{
	_otherInfoFormatDescription = value;
}

Boolean UNIX_PolicyTransferServiceAccessPoint::getAccessContext(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCESS_CONTEXT, getAccessContext());
	return true;
}

Uint16 UNIX_PolicyTransferServiceAccessPoint::getAccessContext() const
{
	return _accessContext;
}

void UNIX_PolicyTransferServiceAccessPoint::setAccessContext(Uint16 &value)
{
	_accessContext = value;
}

Boolean UNIX_PolicyTransferServiceAccessPoint::getOtherAccessContext(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ACCESS_CONTEXT, getOtherAccessContext());
	return true;
}

String UNIX_PolicyTransferServiceAccessPoint::getOtherAccessContext() const
{
	return _otherAccessContext;
}

void UNIX_PolicyTransferServiceAccessPoint::setOtherAccessContext(String &value)
{
	_otherAccessContext = value;
}

Boolean UNIX_PolicyTransferServiceAccessPoint::getPolicyTransferURIs(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_TRANSFER_U_R_IS, getPolicyTransferURIs());
	return true;
}

Array<String> UNIX_PolicyTransferServiceAccessPoint::getPolicyTransferURIs() const
{
	return _policyTransferURIs;
}

void UNIX_PolicyTransferServiceAccessPoint::setPolicyTransferURIs(Array<String> &value)
{
	_policyTransferURIs = value;
}


void UNIX_PolicyTransferServiceAccessPoint::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PolicyTransferServiceAccessPoint");
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
	_creationClassName = String("UNIX_PolicyTransferServiceAccessPoint");
	_accessInfo = String ("");
	_infoFormat = Uint16(0);
	_otherInfoFormatDescription = String ("");
	_accessContext = Uint16(0);
	_otherAccessContext = String ("");
	_policyTransferURIs.clear();

}

Boolean UNIX_PolicyTransferServiceAccessPoint::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "PolicyTransferURIs"))
			{
				Array<String> policyTransferURIsValue;
				property.getValue().get(policyTransferURIsValue);
				setPolicyTransferURIs(policyTransferURIsValue);
			}
	}
	return true;
}

Uint32 UNIX_PolicyTransferServiceAccessPoint::invokeRequestStateChange(
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


Boolean UNIX_PolicyTransferServiceAccessPoint::initialize()
{
	return false;
}

Boolean UNIX_PolicyTransferServiceAccessPoint::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PolicyTransferServiceAccessPoint");
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
	_creationClassName = String("UNIX_PolicyTransferServiceAccessPoint");
	_accessInfo = String ("");
	_infoFormat = Uint16(0);
	_otherInfoFormatDescription = String ("");
	_accessContext = Uint16(0);
	_otherAccessContext = String ("");
	_policyTransferURIs.clear();
	
	return false;
}

Boolean UNIX_PolicyTransferServiceAccessPoint::finalize()
{
	return false;
}

Boolean UNIX_PolicyTransferServiceAccessPoint::loadByName(const String name)
{
	return false;
}

Boolean UNIX_PolicyTransferServiceAccessPoint::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_PolicyTransferServiceAccessPoint::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PolicyTransferServiceAccessPoint::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PolicyTransferServiceAccessPoint::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PolicyTransferServiceAccessPoint::validateInstance()
{
	return true;
}

