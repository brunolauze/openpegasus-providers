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


UNIX_SoftwareIdentityResource::UNIX_SoftwareIdentityResource(void)
{
}

UNIX_SoftwareIdentityResource::~UNIX_SoftwareIdentityResource(void)
{
}

Boolean UNIX_SoftwareIdentityResource::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_SoftwareIdentityResource::getInstanceID() const
{
	return _instanceID;
}

void UNIX_SoftwareIdentityResource::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_SoftwareIdentityResource::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_SoftwareIdentityResource::getCaption() const
{
	return _caption;
}

void UNIX_SoftwareIdentityResource::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_SoftwareIdentityResource::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_SoftwareIdentityResource::getDescription() const
{
	return _description;
}

void UNIX_SoftwareIdentityResource::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_SoftwareIdentityResource::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_SoftwareIdentityResource::getElementName() const
{
	return _elementName;
}

void UNIX_SoftwareIdentityResource::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_SoftwareIdentityResource::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_SoftwareIdentityResource::getGeneration() const
{
	return _generation;
}

void UNIX_SoftwareIdentityResource::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_SoftwareIdentityResource::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_SoftwareIdentityResource::getInstallDate() const
{
	return _installDate;
}

void UNIX_SoftwareIdentityResource::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_SoftwareIdentityResource::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_SoftwareIdentityResource::getName() const
{
	return _name;
}

void UNIX_SoftwareIdentityResource::setName(String &value)
{
	_name = value;
}

Boolean UNIX_SoftwareIdentityResource::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_SoftwareIdentityResource::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_SoftwareIdentityResource::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_SoftwareIdentityResource::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_SoftwareIdentityResource::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_SoftwareIdentityResource::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_SoftwareIdentityResource::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_SoftwareIdentityResource::getStatus() const
{
	return _status;
}

void UNIX_SoftwareIdentityResource::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_SoftwareIdentityResource::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_SoftwareIdentityResource::getHealthState() const
{
	return _healthState;
}

void UNIX_SoftwareIdentityResource::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_SoftwareIdentityResource::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_SoftwareIdentityResource::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_SoftwareIdentityResource::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_SoftwareIdentityResource::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_SoftwareIdentityResource::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_SoftwareIdentityResource::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_SoftwareIdentityResource::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_SoftwareIdentityResource::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_SoftwareIdentityResource::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_SoftwareIdentityResource::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_SoftwareIdentityResource::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_SoftwareIdentityResource::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_SoftwareIdentityResource::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_SoftwareIdentityResource::getEnabledState() const
{
	return _enabledState;
}

void UNIX_SoftwareIdentityResource::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_SoftwareIdentityResource::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_SoftwareIdentityResource::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_SoftwareIdentityResource::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_SoftwareIdentityResource::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_SoftwareIdentityResource::getRequestedState() const
{
	return _requestedState;
}

void UNIX_SoftwareIdentityResource::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_SoftwareIdentityResource::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_SoftwareIdentityResource::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_SoftwareIdentityResource::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_SoftwareIdentityResource::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_SoftwareIdentityResource::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_SoftwareIdentityResource::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_SoftwareIdentityResource::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_SoftwareIdentityResource::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_SoftwareIdentityResource::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_SoftwareIdentityResource::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_SoftwareIdentityResource::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_SoftwareIdentityResource::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_SoftwareIdentityResource::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_SoftwareIdentityResource::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_SoftwareIdentityResource::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_SoftwareIdentityResource::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_SoftwareIdentityResource::getSystemName() const
{
	return _systemName;
}

void UNIX_SoftwareIdentityResource::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_SoftwareIdentityResource::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_SoftwareIdentityResource::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_SoftwareIdentityResource::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_SoftwareIdentityResource::getAccessInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCESS_INFO, getAccessInfo());
	return true;
}

String UNIX_SoftwareIdentityResource::getAccessInfo() const
{
	return _accessInfo;
}

void UNIX_SoftwareIdentityResource::setAccessInfo(String &value)
{
	_accessInfo = value;
}

Boolean UNIX_SoftwareIdentityResource::getInfoFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INFO_FORMAT, getInfoFormat());
	return true;
}

Uint16 UNIX_SoftwareIdentityResource::getInfoFormat() const
{
	return _infoFormat;
}

void UNIX_SoftwareIdentityResource::setInfoFormat(Uint16 &value)
{
	_infoFormat = value;
}

Boolean UNIX_SoftwareIdentityResource::getOtherInfoFormatDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_INFO_FORMAT_DESCRIPTION, getOtherInfoFormatDescription());
	return true;
}

String UNIX_SoftwareIdentityResource::getOtherInfoFormatDescription() const
{
	return _otherInfoFormatDescription;
}

void UNIX_SoftwareIdentityResource::setOtherInfoFormatDescription(String &value)
{
	_otherInfoFormatDescription = value;
}

Boolean UNIX_SoftwareIdentityResource::getAccessContext(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCESS_CONTEXT, getAccessContext());
	return true;
}

Uint16 UNIX_SoftwareIdentityResource::getAccessContext() const
{
	return _accessContext;
}

void UNIX_SoftwareIdentityResource::setAccessContext(Uint16 &value)
{
	_accessContext = value;
}

Boolean UNIX_SoftwareIdentityResource::getOtherAccessContext(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ACCESS_CONTEXT, getOtherAccessContext());
	return true;
}

String UNIX_SoftwareIdentityResource::getOtherAccessContext() const
{
	return _otherAccessContext;
}

void UNIX_SoftwareIdentityResource::setOtherAccessContext(String &value)
{
	_otherAccessContext = value;
}

Boolean UNIX_SoftwareIdentityResource::getResourceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESOURCE_TYPE, getResourceType());
	return true;
}

Uint16 UNIX_SoftwareIdentityResource::getResourceType() const
{
	return _resourceType;
}

void UNIX_SoftwareIdentityResource::setResourceType(Uint16 &value)
{
	_resourceType = value;
}

Boolean UNIX_SoftwareIdentityResource::getExtendedResourceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENDED_RESOURCE_TYPE, getExtendedResourceType());
	return true;
}

Uint16 UNIX_SoftwareIdentityResource::getExtendedResourceType() const
{
	return _extendedResourceType;
}

void UNIX_SoftwareIdentityResource::setExtendedResourceType(Uint16 &value)
{
	_extendedResourceType = value;
}

Boolean UNIX_SoftwareIdentityResource::getOtherResourceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_RESOURCE_TYPE, getOtherResourceType());
	return true;
}

String UNIX_SoftwareIdentityResource::getOtherResourceType() const
{
	return _otherResourceType;
}

void UNIX_SoftwareIdentityResource::setOtherResourceType(String &value)
{
	_otherResourceType = value;
}


void UNIX_SoftwareIdentityResource::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("SoftwareIdentityResource");
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
	_creationClassName = String("UNIX_SoftwareIdentityResource");
	_accessInfo = String ("");
	_infoFormat = Uint16(0);
	_otherInfoFormatDescription = String ("");
	_accessContext = Uint16(0);
	_otherAccessContext = String ("");
	_resourceType = Uint16(0);
	_extendedResourceType = Uint16(0);
	_otherResourceType = String ("");

}

Boolean UNIX_SoftwareIdentityResource::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "ResourceType"))
			{
				Uint16 resourceTypeValue;
				property.getValue().get(resourceTypeValue);
				setResourceType(resourceTypeValue);
			}
			else if (String::equal(property.getName().getString(), "ExtendedResourceType"))
			{
				Uint16 extendedResourceTypeValue;
				property.getValue().get(extendedResourceTypeValue);
				setExtendedResourceType(extendedResourceTypeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherResourceType"))
			{
				String otherResourceTypeValue;
				property.getValue().get(otherResourceTypeValue);
				setOtherResourceType(otherResourceTypeValue);
			}
	}
	return true;
}

Uint32 UNIX_SoftwareIdentityResource::invokeRequestStateChange(
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


Boolean UNIX_SoftwareIdentityResource::initialize()
{
	return false;
}

Boolean UNIX_SoftwareIdentityResource::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("SoftwareIdentityResource");
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
	_creationClassName = String("UNIX_SoftwareIdentityResource");
	_accessInfo = String ("");
	_infoFormat = Uint16(0);
	_otherInfoFormatDescription = String ("");
	_accessContext = Uint16(0);
	_otherAccessContext = String ("");
	_resourceType = Uint16(0);
	_extendedResourceType = Uint16(0);
	_otherResourceType = String ("");
	
	return false;
}

Boolean UNIX_SoftwareIdentityResource::finalize()
{
	return false;
}

Boolean UNIX_SoftwareIdentityResource::loadByName(const String name)
{
	return false;
}

Boolean UNIX_SoftwareIdentityResource::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_SoftwareIdentityResource::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SoftwareIdentityResource::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SoftwareIdentityResource::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SoftwareIdentityResource::validateInstance()
{
	return true;
}

