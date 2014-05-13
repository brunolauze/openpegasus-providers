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


Boolean UNIX_DatabaseSystem::isEnabled(DBTYPE type)
{
	const char *val;
	val = NULL;

	if (type == POSTGRESQL)
		val = "postgresql_enable";
	else if (type == MYSQL)
		val = "mysql_enable";
	else if (type == MARIADB)
		val = "mariadb_enable";
	else if (type == MONGODB)
		val = "mongodb_enable";
	else if (type == MEMCACHED)
		val = "memcached_enable";
	else 
		val = NULL;

	if (val == NULL) return Boolean(true); // All engine are "enabled" or kind of

	char cmd[256];
	char ret[256];
	sprintf(cmd, "%s %s", "/usr/sbin/sysrc -i", val);
	sprintf(ret, "%s: YES", val);
	cout << "TESTING: " << cmd << endl;
	FILE* pipe = popen(cmd, "r");
    if (!pipe) return false;
    char buffer[256];
    bool isenabled = false;
    while(!feof(pipe)) {
    	if (fgets(buffer, 128, pipe) != NULL)
    	{
    		if (strstr(buffer, ret) != NULL)
    		{
    			isenabled = true;
    		}
    	}
    	break;
	}
    pclose(pipe);
   	return Boolean(isenabled);
}
		


UNIX_DatabaseSystem::UNIX_DatabaseSystem(void)
{
}

UNIX_DatabaseSystem::~UNIX_DatabaseSystem(void)
{
}

Boolean UNIX_DatabaseSystem::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_DatabaseSystem::getInstanceID() const
{
	return _instanceID;
}

void UNIX_DatabaseSystem::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_DatabaseSystem::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_DatabaseSystem::getCaption() const
{
	return _caption;
}

void UNIX_DatabaseSystem::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_DatabaseSystem::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_DatabaseSystem::getDescription() const
{
	return _description;
}

void UNIX_DatabaseSystem::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_DatabaseSystem::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_DatabaseSystem::getElementName() const
{
	return _elementName;
}

void UNIX_DatabaseSystem::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_DatabaseSystem::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_DatabaseSystem::getGeneration() const
{
	return _generation;
}

void UNIX_DatabaseSystem::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_DatabaseSystem::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_DatabaseSystem::getInstallDate() const
{
	return _installDate;
}

void UNIX_DatabaseSystem::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_DatabaseSystem::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_DatabaseSystem::getName() const
{
	return _name;
}

void UNIX_DatabaseSystem::setName(String &value)
{
	_name = value;
}

Boolean UNIX_DatabaseSystem::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_DatabaseSystem::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_DatabaseSystem::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_DatabaseSystem::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_DatabaseSystem::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_DatabaseSystem::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_DatabaseSystem::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_DatabaseSystem::getStatus() const
{
	return _status;
}

void UNIX_DatabaseSystem::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_DatabaseSystem::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_DatabaseSystem::getHealthState() const
{
	return _healthState;
}

void UNIX_DatabaseSystem::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_DatabaseSystem::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_DatabaseSystem::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_DatabaseSystem::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_DatabaseSystem::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_DatabaseSystem::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_DatabaseSystem::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_DatabaseSystem::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_DatabaseSystem::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_DatabaseSystem::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_DatabaseSystem::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_DatabaseSystem::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_DatabaseSystem::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_DatabaseSystem::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_DatabaseSystem::getEnabledState() const
{
	return _enabledState;
}

void UNIX_DatabaseSystem::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_DatabaseSystem::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_DatabaseSystem::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_DatabaseSystem::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_DatabaseSystem::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_DatabaseSystem::getRequestedState() const
{
	return _requestedState;
}

void UNIX_DatabaseSystem::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_DatabaseSystem::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_DatabaseSystem::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_DatabaseSystem::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_DatabaseSystem::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_DatabaseSystem::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_DatabaseSystem::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_DatabaseSystem::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_DatabaseSystem::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_DatabaseSystem::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_DatabaseSystem::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_DatabaseSystem::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_DatabaseSystem::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_DatabaseSystem::getAllocationState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOCATION_STATE, getAllocationState());
	return true;
}

String UNIX_DatabaseSystem::getAllocationState() const
{
	return _allocationState;
}

void UNIX_DatabaseSystem::setAllocationState(String &value)
{
	_allocationState = value;
}

Boolean UNIX_DatabaseSystem::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_DatabaseSystem::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_DatabaseSystem::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_DatabaseSystem::getNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_FORMAT, getNameFormat());
	return true;
}

String UNIX_DatabaseSystem::getNameFormat() const
{
	return _nameFormat;
}

void UNIX_DatabaseSystem::setNameFormat(String &value)
{
	_nameFormat = value;
}

Boolean UNIX_DatabaseSystem::getPrimaryOwnerName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_NAME, getPrimaryOwnerName());
	return true;
}

String UNIX_DatabaseSystem::getPrimaryOwnerName() const
{
	return _primaryOwnerName;
}

void UNIX_DatabaseSystem::setPrimaryOwnerName(String &value)
{
	_primaryOwnerName = value;
}

Boolean UNIX_DatabaseSystem::getPrimaryOwnerContact(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_CONTACT, getPrimaryOwnerContact());
	return true;
}

String UNIX_DatabaseSystem::getPrimaryOwnerContact() const
{
	return _primaryOwnerContact;
}

void UNIX_DatabaseSystem::setPrimaryOwnerContact(String &value)
{
	_primaryOwnerContact = value;
}

Boolean UNIX_DatabaseSystem::getRoles(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ROLES, getRoles());
	return true;
}

Array<String> UNIX_DatabaseSystem::getRoles() const
{
	return _roles;
}

void UNIX_DatabaseSystem::setRoles(Array<String> &value)
{
	_roles = value;
}

Boolean UNIX_DatabaseSystem::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_DatabaseSystem::getOtherIdentifyingInfo() const
{
	return _otherIdentifyingInfo;
}

void UNIX_DatabaseSystem::setOtherIdentifyingInfo(Array<String> &value)
{
	_otherIdentifyingInfo = value;
}

Boolean UNIX_DatabaseSystem::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_DatabaseSystem::getIdentifyingDescriptions() const
{
	return _identifyingDescriptions;
}

void UNIX_DatabaseSystem::setIdentifyingDescriptions(Array<String> &value)
{
	_identifyingDescriptions = value;
}

Boolean UNIX_DatabaseSystem::getDistribution(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DISTRIBUTION, getDistribution());
	return true;
}

Uint16 UNIX_DatabaseSystem::getDistribution() const
{
	return _distribution;
}

void UNIX_DatabaseSystem::setDistribution(Uint16 &value)
{
	_distribution = value;
}

Boolean UNIX_DatabaseSystem::getStartupTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTUP_TIME, getStartupTime());
	return true;
}

CIMDateTime UNIX_DatabaseSystem::getStartupTime() const
{
	return _startupTime;
}

void UNIX_DatabaseSystem::setStartupTime(CIMDateTime &value)
{
	_startupTime = value;
}

Boolean UNIX_DatabaseSystem::getServingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVING_STATUS, getServingStatus());
	return true;
}

Uint16 UNIX_DatabaseSystem::getServingStatus() const
{
	return _servingStatus;
}

void UNIX_DatabaseSystem::setServingStatus(Uint16 &value)
{
	_servingStatus = value;
}

Boolean UNIX_DatabaseSystem::getLastServingStatusUpdate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_SERVING_STATUS_UPDATE, getLastServingStatusUpdate());
	return true;
}

CIMDateTime UNIX_DatabaseSystem::getLastServingStatusUpdate() const
{
	return _lastServingStatusUpdate;
}

void UNIX_DatabaseSystem::setLastServingStatusUpdate(CIMDateTime &value)
{
	_lastServingStatusUpdate = value;
}


void UNIX_DatabaseSystem::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("DatabaseSystem");
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
	_creationClassName = String("UNIX_DatabaseSystem");
	_nameFormat = String ("");
	_primaryOwnerName = String ("");
	_primaryOwnerContact = String ("");
	_roles.clear();
	_otherIdentifyingInfo.clear();
	_identifyingDescriptions.clear();
	_distribution = Uint16(0);
	_startupTime = CIMHelper::getCurrentTime();
	_servingStatus = Uint16(0);
	_lastServingStatusUpdate = CIMHelper::getCurrentTime();

}

Boolean UNIX_DatabaseSystem::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "Distribution"))
			{
				Uint16 distributionValue;
				property.getValue().get(distributionValue);
				setDistribution(distributionValue);
			}
			else if (String::equal(property.getName().getString(), "StartupTime"))
			{
				CIMDateTime startupTimeValue;
				property.getValue().get(startupTimeValue);
				setStartupTime(startupTimeValue);
			}
			else if (String::equal(property.getName().getString(), "ServingStatus"))
			{
				Uint16 servingStatusValue;
				property.getValue().get(servingStatusValue);
				setServingStatus(servingStatusValue);
			}
			else if (String::equal(property.getName().getString(), "LastServingStatusUpdate"))
			{
				CIMDateTime lastServingStatusUpdateValue;
				property.getValue().get(lastServingStatusUpdateValue);
				setLastServingStatusUpdate(lastServingStatusUpdateValue);
			}
	}
	return true;
}

Uint32 UNIX_DatabaseSystem::invokeRequestStateChange(
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

Uint16 UNIX_DatabaseSystem::invokeStartApplication()
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method StartApplication */
	
	
	
	return returnValue;
}

Uint16 UNIX_DatabaseSystem::invokeStopApplication()
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method StopApplication */
	
	
	
	return returnValue;
}


Boolean UNIX_DatabaseSystem::initialize()
{

	return true;
		
}

Boolean UNIX_DatabaseSystem::load(int &pIndex)
{

	UNIX_SoftwareElement softwareElement;
	if (currentScope.size() == 0)
		softwareElement.setScope("UNIX_ComputerSystem");
	else
		softwareElement.setScope(currentScope);

	// check if postgresql is installed
	if (pIndex == 0)
	{
		softwareElement.initialize();
		if (softwareElement.get(String("postgresql*-server")))
		{
			_caption = name = softwareElement.getInstanceID();
			_name = softwareElement.getName();
			_description = softwareElement.getDescription();
			_primaryOwnerName = softwareElement.getPrimaryOwnerName();
			currenttype = POSTGRESQL;
			enabled = isEnabled(currenttype);
			return true;
		}
		pIndex++;
	}

	// check if mysql is installed
	if (pIndex == 1)
	{
		softwareElement.initialize();
		if (softwareElement.get(String("mysql*-server")))
		{
                        _caption = name = softwareElement.getInstanceID();
                        _name = softwareElement.getName();
                        _description = softwareElement.getDescription();
                        _primaryOwnerName = softwareElement.getPrimaryOwnerName();
			currenttype = MYSQL;
			enabled = isEnabled(currenttype);
			return true;
		}
		pIndex++;
	}

	// check if mariadb is installed
	if (pIndex == 2)
	{
		softwareElement.initialize();
		if (softwareElement.get(String("mariadb*-server")))
		{
                        _caption = name = softwareElement.getInstanceID();
                        _name = softwareElement.getName();
                        _description = softwareElement.getDescription();
                        _primaryOwnerName = softwareElement.getPrimaryOwnerName();
			currenttype = MARIADB;
			enabled = isEnabled(currenttype);
			return true;
		}
		pIndex++;
	}

	//check for sqlite
	if (pIndex == 3)
	{
		softwareElement.initialize();
		if (softwareElement.get(String("sqlite")))
		{
                        _caption = name = softwareElement.getInstanceID();
                        _name = softwareElement.getName();
                        _description = softwareElement.getDescription();
                        _primaryOwnerName = softwareElement.getPrimaryOwnerName();
			currenttype = SQLITE;
			enabled = isEnabled(currenttype);
			return true;
		}
		pIndex++;
	}

	//check for berkley db
	if (pIndex == 4)
	{
		softwareElement.initialize();
		if (softwareElement.get(String("db[0-9]")))
		{
                        _caption = name = softwareElement.getInstanceID();
                        _name = softwareElement.getName();
                        _description = softwareElement.getDescription();
                        _primaryOwnerName = softwareElement.getPrimaryOwnerName();
			currenttype = BDB;
			enabled = isEnabled(currenttype);
			return true;
		}
		pIndex++;
	}

	//check for mongo db NoSQL
	if (pIndex == 5)
	{
		softwareElement.initialize();
		if (softwareElement.get(String("mongodb")))
		{
                        _caption = name = softwareElement.getInstanceID();
                        _name = softwareElement.getName();
                        _description = softwareElement.getDescription();
                        _primaryOwnerName = softwareElement.getPrimaryOwnerName();
			currenttype = MONGODB;
			enabled = isEnabled(currenttype);
			return true;
		}
		pIndex++;
	}

	//check for memcached
	if (pIndex == 6)
	{
		softwareElement.initialize();
		if (softwareElement.get(String("memcached")))
		{
                        _caption = name = softwareElement.getInstanceID();
                        _name = softwareElement.getName();
                        _description = softwareElement.getDescription();
                        _primaryOwnerName = softwareElement.getPrimaryOwnerName();
			currenttype = MEMCACHED;
			enabled = isEnabled(currenttype);
			return true;
		}
	}
	return false;
		
}

Boolean UNIX_DatabaseSystem::finalize()
{

	return true;
		
}

Boolean UNIX_DatabaseSystem::loadByName(const String name)
{
	return false;
}

Boolean UNIX_DatabaseSystem::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_DatabaseSystem::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DatabaseSystem::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DatabaseSystem::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DatabaseSystem::validateInstance()
{
	return true;
}

