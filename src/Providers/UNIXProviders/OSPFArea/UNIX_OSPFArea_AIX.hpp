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


UNIX_OSPFArea::UNIX_OSPFArea(void)
{
}

UNIX_OSPFArea::~UNIX_OSPFArea(void)
{
}

Boolean UNIX_OSPFArea::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_OSPFArea::getInstanceID() const
{
	return _instanceID;
}

void UNIX_OSPFArea::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_OSPFArea::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_OSPFArea::getCaption() const
{
	return _caption;
}

void UNIX_OSPFArea::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_OSPFArea::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_OSPFArea::getDescription() const
{
	return _description;
}

void UNIX_OSPFArea::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_OSPFArea::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_OSPFArea::getElementName() const
{
	return _elementName;
}

void UNIX_OSPFArea::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_OSPFArea::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_OSPFArea::getGeneration() const
{
	return _generation;
}

void UNIX_OSPFArea::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_OSPFArea::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_OSPFArea::getInstallDate() const
{
	return _installDate;
}

void UNIX_OSPFArea::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_OSPFArea::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_OSPFArea::getName() const
{
	return _name;
}

void UNIX_OSPFArea::setName(String &value)
{
	_name = value;
}

Boolean UNIX_OSPFArea::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_OSPFArea::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_OSPFArea::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_OSPFArea::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_OSPFArea::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_OSPFArea::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_OSPFArea::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_OSPFArea::getStatus() const
{
	return _status;
}

void UNIX_OSPFArea::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_OSPFArea::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_OSPFArea::getHealthState() const
{
	return _healthState;
}

void UNIX_OSPFArea::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_OSPFArea::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_OSPFArea::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_OSPFArea::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_OSPFArea::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_OSPFArea::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_OSPFArea::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_OSPFArea::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_OSPFArea::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_OSPFArea::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_OSPFArea::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_OSPFArea::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_OSPFArea::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_OSPFArea::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_OSPFArea::getEnabledState() const
{
	return _enabledState;
}

void UNIX_OSPFArea::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_OSPFArea::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_OSPFArea::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_OSPFArea::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_OSPFArea::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_OSPFArea::getRequestedState() const
{
	return _requestedState;
}

void UNIX_OSPFArea::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_OSPFArea::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_OSPFArea::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_OSPFArea::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_OSPFArea::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_OSPFArea::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_OSPFArea::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_OSPFArea::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_OSPFArea::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_OSPFArea::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_OSPFArea::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_OSPFArea::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_OSPFArea::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_OSPFArea::getAllocationState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOCATION_STATE, getAllocationState());
	return true;
}

String UNIX_OSPFArea::getAllocationState() const
{
	return _allocationState;
}

void UNIX_OSPFArea::setAllocationState(String &value)
{
	_allocationState = value;
}

Boolean UNIX_OSPFArea::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_OSPFArea::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_OSPFArea::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_OSPFArea::getNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_FORMAT, getNameFormat());
	return true;
}

String UNIX_OSPFArea::getNameFormat() const
{
	return _nameFormat;
}

void UNIX_OSPFArea::setNameFormat(String &value)
{
	_nameFormat = value;
}

Boolean UNIX_OSPFArea::getPrimaryOwnerName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_NAME, getPrimaryOwnerName());
	return true;
}

String UNIX_OSPFArea::getPrimaryOwnerName() const
{
	return _primaryOwnerName;
}

void UNIX_OSPFArea::setPrimaryOwnerName(String &value)
{
	_primaryOwnerName = value;
}

Boolean UNIX_OSPFArea::getPrimaryOwnerContact(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_CONTACT, getPrimaryOwnerContact());
	return true;
}

String UNIX_OSPFArea::getPrimaryOwnerContact() const
{
	return _primaryOwnerContact;
}

void UNIX_OSPFArea::setPrimaryOwnerContact(String &value)
{
	_primaryOwnerContact = value;
}

Boolean UNIX_OSPFArea::getRoles(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ROLES, getRoles());
	return true;
}

Array<String> UNIX_OSPFArea::getRoles() const
{
	return _roles;
}

void UNIX_OSPFArea::setRoles(Array<String> &value)
{
	_roles = value;
}

Boolean UNIX_OSPFArea::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_OSPFArea::getOtherIdentifyingInfo() const
{
	return _otherIdentifyingInfo;
}

void UNIX_OSPFArea::setOtherIdentifyingInfo(Array<String> &value)
{
	_otherIdentifyingInfo = value;
}

Boolean UNIX_OSPFArea::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_OSPFArea::getIdentifyingDescriptions() const
{
	return _identifyingDescriptions;
}

void UNIX_OSPFArea::setIdentifyingDescriptions(Array<String> &value)
{
	_identifyingDescriptions = value;
}

Boolean UNIX_OSPFArea::getAreaID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AREA_ID, getAreaID());
	return true;
}

Uint32 UNIX_OSPFArea::getAreaID() const
{
	return _areaID;
}

void UNIX_OSPFArea::setAreaID(Uint32 &value)
{
	_areaID = value;
}

Boolean UNIX_OSPFArea::getAreaType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AREA_TYPE, getAreaType());
	return true;
}

Uint16 UNIX_OSPFArea::getAreaType() const
{
	return _areaType;
}

void UNIX_OSPFArea::setAreaType(Uint16 &value)
{
	_areaType = value;
}

Boolean UNIX_OSPFArea::getExtLsdbLimit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXT_LSDB_LIMIT, getExtLsdbLimit());
	return true;
}

Uint32 UNIX_OSPFArea::getExtLsdbLimit() const
{
	return _extLsdbLimit;
}

void UNIX_OSPFArea::setExtLsdbLimit(Uint32 &value)
{
	_extLsdbLimit = value;
}


void UNIX_OSPFArea::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("OSPFArea");
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
	_allocationState = String ("");
	_creationClassName = String("UNIX_OSPFArea");
	_nameFormat = String ("");
	_primaryOwnerName = String ("");
	_primaryOwnerContact = String ("");
	_roles.clear();
	_otherIdentifyingInfo.clear();
	_identifyingDescriptions.clear();
	_areaID = Uint32(0);
	_areaType = Uint16(0);
	_extLsdbLimit = Uint32(0);

}

Boolean UNIX_OSPFArea::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "AllocationState"))
			{
				String allocationStateValue;
				property.getValue().get(allocationStateValue);
				setAllocationState(allocationStateValue);
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
			else if (String::equal(property.getName().getString(), "PrimaryOwnerName"))
			{
				String primaryOwnerNameValue;
				property.getValue().get(primaryOwnerNameValue);
				setPrimaryOwnerName(primaryOwnerNameValue);
			}
			else if (String::equal(property.getName().getString(), "PrimaryOwnerContact"))
			{
				String primaryOwnerContactValue;
				property.getValue().get(primaryOwnerContactValue);
				setPrimaryOwnerContact(primaryOwnerContactValue);
			}
			else if (String::equal(property.getName().getString(), "Roles"))
			{
				Array<String> rolesValue;
				property.getValue().get(rolesValue);
				setRoles(rolesValue);
			}
			else if (String::equal(property.getName().getString(), "OtherIdentifyingInfo"))
			{
				Array<String> otherIdentifyingInfoValue;
				property.getValue().get(otherIdentifyingInfoValue);
				setOtherIdentifyingInfo(otherIdentifyingInfoValue);
			}
			else if (String::equal(property.getName().getString(), "IdentifyingDescriptions"))
			{
				Array<String> identifyingDescriptionsValue;
				property.getValue().get(identifyingDescriptionsValue);
				setIdentifyingDescriptions(identifyingDescriptionsValue);
			}
			else if (String::equal(property.getName().getString(), "AreaID"))
			{
				Uint32 areaIDValue;
				property.getValue().get(areaIDValue);
				setAreaID(areaIDValue);
			}
			else if (String::equal(property.getName().getString(), "AreaType"))
			{
				Uint16 areaTypeValue;
				property.getValue().get(areaTypeValue);
				setAreaType(areaTypeValue);
			}
			else if (String::equal(property.getName().getString(), "ExtLsdbLimit"))
			{
				Uint32 extLsdbLimitValue;
				property.getValue().get(extLsdbLimitValue);
				setExtLsdbLimit(extLsdbLimitValue);
			}
	}
	return true;
}

Uint32 UNIX_OSPFArea::invokeRequestStateChange(
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


Boolean UNIX_OSPFArea::initialize()
{
	return false;
}

Boolean UNIX_OSPFArea::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("OSPFArea");
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
	_allocationState = String ("");
	_creationClassName = String("UNIX_OSPFArea");
	_nameFormat = String ("");
	_primaryOwnerName = String ("");
	_primaryOwnerContact = String ("");
	_roles.clear();
	_otherIdentifyingInfo.clear();
	_identifyingDescriptions.clear();
	_areaID = Uint32(0);
	_areaType = Uint16(0);
	_extLsdbLimit = Uint32(0);
	
	return false;
}

Boolean UNIX_OSPFArea::finalize()
{
	return false;
}

Boolean UNIX_OSPFArea::loadByName(const String name)
{
	return false;
}

Boolean UNIX_OSPFArea::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String creationClassNameKey;
	String nameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getCreationClassName(), creationClassNameKey)) && 
			(String::equalNoCase(getName(), nameKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_OSPFArea::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_OSPFArea::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_OSPFArea::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_OSPFArea::validateInstance()
{
	return true;
}

