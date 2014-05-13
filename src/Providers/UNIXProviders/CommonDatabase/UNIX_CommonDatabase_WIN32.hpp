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


UNIX_CommonDatabase::UNIX_CommonDatabase(void)
{
}

UNIX_CommonDatabase::~UNIX_CommonDatabase(void)
{
}

Boolean UNIX_CommonDatabase::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_CommonDatabase::getInstanceID() const
{
	return _instanceID;
}

void UNIX_CommonDatabase::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_CommonDatabase::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_CommonDatabase::getCaption() const
{
	return _caption;
}

void UNIX_CommonDatabase::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_CommonDatabase::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_CommonDatabase::getDescription() const
{
	return _description;
}

void UNIX_CommonDatabase::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_CommonDatabase::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_CommonDatabase::getElementName() const
{
	return _elementName;
}

void UNIX_CommonDatabase::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_CommonDatabase::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_CommonDatabase::getGeneration() const
{
	return _generation;
}

void UNIX_CommonDatabase::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_CommonDatabase::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_CommonDatabase::getInstallDate() const
{
	return _installDate;
}

void UNIX_CommonDatabase::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_CommonDatabase::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_CommonDatabase::getName() const
{
	return _name;
}

void UNIX_CommonDatabase::setName(String &value)
{
	_name = value;
}

Boolean UNIX_CommonDatabase::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_CommonDatabase::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_CommonDatabase::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_CommonDatabase::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_CommonDatabase::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_CommonDatabase::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_CommonDatabase::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_CommonDatabase::getStatus() const
{
	return _status;
}

void UNIX_CommonDatabase::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_CommonDatabase::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_CommonDatabase::getHealthState() const
{
	return _healthState;
}

void UNIX_CommonDatabase::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_CommonDatabase::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_CommonDatabase::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_CommonDatabase::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_CommonDatabase::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_CommonDatabase::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_CommonDatabase::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_CommonDatabase::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_CommonDatabase::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_CommonDatabase::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_CommonDatabase::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_CommonDatabase::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_CommonDatabase::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_CommonDatabase::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_CommonDatabase::getEnabledState() const
{
	return _enabledState;
}

void UNIX_CommonDatabase::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_CommonDatabase::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_CommonDatabase::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_CommonDatabase::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_CommonDatabase::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_CommonDatabase::getRequestedState() const
{
	return _requestedState;
}

void UNIX_CommonDatabase::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_CommonDatabase::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_CommonDatabase::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_CommonDatabase::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_CommonDatabase::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_CommonDatabase::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_CommonDatabase::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_CommonDatabase::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_CommonDatabase::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_CommonDatabase::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_CommonDatabase::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_CommonDatabase::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_CommonDatabase::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_CommonDatabase::getDatabaseVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATABASE_VERSION, getDatabaseVersion());
	return true;
}

String UNIX_CommonDatabase::getDatabaseVersion() const
{
	return _databaseVersion;
}

void UNIX_CommonDatabase::setDatabaseVersion(String &value)
{
	_databaseVersion = value;
}

Boolean UNIX_CommonDatabase::getLastBackup(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_BACKUP, getLastBackup());
	return true;
}

CIMDateTime UNIX_CommonDatabase::getLastBackup() const
{
	return _lastBackup;
}

void UNIX_CommonDatabase::setLastBackup(CIMDateTime &value)
{
	_lastBackup = value;
}

Boolean UNIX_CommonDatabase::getSizeAllocated(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SIZE_ALLOCATED, getSizeAllocated());
	return true;
}

Uint32 UNIX_CommonDatabase::getSizeAllocated() const
{
	return _sizeAllocated;
}

void UNIX_CommonDatabase::setSizeAllocated(Uint32 &value)
{
	_sizeAllocated = value;
}

Boolean UNIX_CommonDatabase::getSizeUnits(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SIZE_UNITS, getSizeUnits());
	return true;
}

Uint16 UNIX_CommonDatabase::getSizeUnits() const
{
	return _sizeUnits;
}

void UNIX_CommonDatabase::setSizeUnits(Uint16 &value)
{
	_sizeUnits = value;
}


void UNIX_CommonDatabase::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("CommonDatabase");
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
	_databaseVersion = String ("");
	_lastBackup = CIMHelper::getCurrentTime();
	_sizeAllocated = Uint32(0);
	_sizeUnits = Uint16(0);

}

Boolean UNIX_CommonDatabase::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "DatabaseVersion"))
			{
				String databaseVersionValue;
				property.getValue().get(databaseVersionValue);
				setDatabaseVersion(databaseVersionValue);
			}
			else if (String::equal(property.getName().getString(), "LastBackup"))
			{
				CIMDateTime lastBackupValue;
				property.getValue().get(lastBackupValue);
				setLastBackup(lastBackupValue);
			}
			else if (String::equal(property.getName().getString(), "SizeAllocated"))
			{
				Uint32 sizeAllocatedValue;
				property.getValue().get(sizeAllocatedValue);
				setSizeAllocated(sizeAllocatedValue);
			}
			else if (String::equal(property.getName().getString(), "SizeUnits"))
			{
				Uint16 sizeUnitsValue;
				property.getValue().get(sizeUnitsValue);
				setSizeUnits(sizeUnitsValue);
			}
	}
	return true;
}

Uint32 UNIX_CommonDatabase::invokeRequestStateChange(
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


Boolean UNIX_CommonDatabase::initialize()
{
	return false;
}

Boolean UNIX_CommonDatabase::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("CommonDatabase");
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
	_databaseVersion = String ("");
	_lastBackup = CIMHelper::getCurrentTime();
	_sizeAllocated = Uint32(0);
	_sizeUnits = Uint16(0);
	
	return false;
}

Boolean UNIX_CommonDatabase::finalize()
{
	return false;
}

Boolean UNIX_CommonDatabase::loadByName(const String name)
{
	return false;
}

Boolean UNIX_CommonDatabase::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String instanceIDKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_INSTANCE_ID)) instanceIDKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getInstanceID(), instanceIDKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_CommonDatabase::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_CommonDatabase::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_CommonDatabase::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_CommonDatabase::validateInstance()
{
	return true;
}

