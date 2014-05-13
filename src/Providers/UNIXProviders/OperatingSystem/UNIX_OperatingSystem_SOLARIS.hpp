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


UNIX_OperatingSystem::UNIX_OperatingSystem(void)
{
}

UNIX_OperatingSystem::~UNIX_OperatingSystem(void)
{
}

Boolean UNIX_OperatingSystem::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_OperatingSystem::getInstanceID() const
{
	return _instanceID;
}

void UNIX_OperatingSystem::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_OperatingSystem::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_OperatingSystem::getCaption() const
{
	return _caption;
}

void UNIX_OperatingSystem::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_OperatingSystem::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_OperatingSystem::getDescription() const
{
	return _description;
}

void UNIX_OperatingSystem::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_OperatingSystem::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_OperatingSystem::getElementName() const
{
	return _elementName;
}

void UNIX_OperatingSystem::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_OperatingSystem::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_OperatingSystem::getGeneration() const
{
	return _generation;
}

void UNIX_OperatingSystem::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_OperatingSystem::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_OperatingSystem::getInstallDate() const
{
	return _installDate;
}

void UNIX_OperatingSystem::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_OperatingSystem::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_OperatingSystem::getName() const
{
	return _name;
}

void UNIX_OperatingSystem::setName(String &value)
{
	_name = value;
}

Boolean UNIX_OperatingSystem::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_OperatingSystem::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_OperatingSystem::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_OperatingSystem::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_OperatingSystem::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_OperatingSystem::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_OperatingSystem::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_OperatingSystem::getStatus() const
{
	return _status;
}

void UNIX_OperatingSystem::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_OperatingSystem::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_OperatingSystem::getHealthState() const
{
	return _healthState;
}

void UNIX_OperatingSystem::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_OperatingSystem::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_OperatingSystem::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_OperatingSystem::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_OperatingSystem::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_OperatingSystem::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_OperatingSystem::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_OperatingSystem::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_OperatingSystem::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_OperatingSystem::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_OperatingSystem::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_OperatingSystem::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_OperatingSystem::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_OperatingSystem::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_OperatingSystem::getEnabledState() const
{
	return _enabledState;
}

void UNIX_OperatingSystem::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_OperatingSystem::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_OperatingSystem::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_OperatingSystem::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_OperatingSystem::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_OperatingSystem::getRequestedState() const
{
	return _requestedState;
}

void UNIX_OperatingSystem::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_OperatingSystem::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_OperatingSystem::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_OperatingSystem::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_OperatingSystem::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_OperatingSystem::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_OperatingSystem::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_OperatingSystem::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_OperatingSystem::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_OperatingSystem::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_OperatingSystem::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_OperatingSystem::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_OperatingSystem::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_OperatingSystem::getCSCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CS_CREATION_CLASS_NAME, getCSCreationClassName());
	return true;
}

String UNIX_OperatingSystem::getCSCreationClassName() const
{
	return _cSCreationClassName;
}

void UNIX_OperatingSystem::setCSCreationClassName(String &value)
{
	_cSCreationClassName = value;
}

Boolean UNIX_OperatingSystem::getCSName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CS_NAME, getCSName());
	return true;
}

String UNIX_OperatingSystem::getCSName() const
{
	return _cSName;
}

void UNIX_OperatingSystem::setCSName(String &value)
{
	_cSName = value;
}

Boolean UNIX_OperatingSystem::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_OperatingSystem::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_OperatingSystem::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_OperatingSystem::getOSType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OS_TYPE, getOSType());
	return true;
}

Uint16 UNIX_OperatingSystem::getOSType() const
{
	return _oSType;
}

void UNIX_OperatingSystem::setOSType(Uint16 &value)
{
	_oSType = value;
}

Boolean UNIX_OperatingSystem::getOtherTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TYPE_DESCRIPTION, getOtherTypeDescription());
	return true;
}

String UNIX_OperatingSystem::getOtherTypeDescription() const
{
	return _otherTypeDescription;
}

void UNIX_OperatingSystem::setOtherTypeDescription(String &value)
{
	_otherTypeDescription = value;
}

Boolean UNIX_OperatingSystem::getVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERSION, getVersion());
	return true;
}

String UNIX_OperatingSystem::getVersion() const
{
	return _version;
}

void UNIX_OperatingSystem::setVersion(String &value)
{
	_version = value;
}

Boolean UNIX_OperatingSystem::getLastBootUpTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_BOOT_UP_TIME, getLastBootUpTime());
	return true;
}

CIMDateTime UNIX_OperatingSystem::getLastBootUpTime() const
{
	return _lastBootUpTime;
}

void UNIX_OperatingSystem::setLastBootUpTime(CIMDateTime &value)
{
	_lastBootUpTime = value;
}

Boolean UNIX_OperatingSystem::getLocalDateTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCAL_DATE_TIME, getLocalDateTime());
	return true;
}

CIMDateTime UNIX_OperatingSystem::getLocalDateTime() const
{
	return _localDateTime;
}

void UNIX_OperatingSystem::setLocalDateTime(CIMDateTime &value)
{
	_localDateTime = value;
}

Boolean UNIX_OperatingSystem::getCurrentTimeZone(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_TIME_ZONE, getCurrentTimeZone());
	return true;
}

Sint16 UNIX_OperatingSystem::getCurrentTimeZone() const
{
	return _currentTimeZone;
}

void UNIX_OperatingSystem::setCurrentTimeZone(Sint16 &value)
{
	_currentTimeZone = value;
}

Boolean UNIX_OperatingSystem::getNumberOfLicensedUsers(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_LICENSED_USERS, getNumberOfLicensedUsers());
	return true;
}

Uint32 UNIX_OperatingSystem::getNumberOfLicensedUsers() const
{
	return _numberOfLicensedUsers;
}

void UNIX_OperatingSystem::setNumberOfLicensedUsers(Uint32 &value)
{
	_numberOfLicensedUsers = value;
}

Boolean UNIX_OperatingSystem::getNumberOfUsers(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_USERS, getNumberOfUsers());
	return true;
}

Uint32 UNIX_OperatingSystem::getNumberOfUsers() const
{
	return _numberOfUsers;
}

void UNIX_OperatingSystem::setNumberOfUsers(Uint32 &value)
{
	_numberOfUsers = value;
}

Boolean UNIX_OperatingSystem::getNumberOfProcesses(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_PROCESSES, getNumberOfProcesses());
	return true;
}

Uint32 UNIX_OperatingSystem::getNumberOfProcesses() const
{
	return _numberOfProcesses;
}

void UNIX_OperatingSystem::setNumberOfProcesses(Uint32 &value)
{
	_numberOfProcesses = value;
}

Boolean UNIX_OperatingSystem::getMaxNumberOfProcesses(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_NUMBER_OF_PROCESSES, getMaxNumberOfProcesses());
	return true;
}

Uint32 UNIX_OperatingSystem::getMaxNumberOfProcesses() const
{
	return _maxNumberOfProcesses;
}

void UNIX_OperatingSystem::setMaxNumberOfProcesses(Uint32 &value)
{
	_maxNumberOfProcesses = value;
}

Boolean UNIX_OperatingSystem::getTotalSwapSpaceSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_SWAP_SPACE_SIZE, getTotalSwapSpaceSize());
	return true;
}

Uint64 UNIX_OperatingSystem::getTotalSwapSpaceSize() const
{
	return _totalSwapSpaceSize;
}

void UNIX_OperatingSystem::setTotalSwapSpaceSize(Uint64 &value)
{
	_totalSwapSpaceSize = value;
}

Boolean UNIX_OperatingSystem::getTotalVirtualMemorySize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_VIRTUAL_MEMORY_SIZE, getTotalVirtualMemorySize());
	return true;
}

Uint64 UNIX_OperatingSystem::getTotalVirtualMemorySize() const
{
	return _totalVirtualMemorySize;
}

void UNIX_OperatingSystem::setTotalVirtualMemorySize(Uint64 &value)
{
	_totalVirtualMemorySize = value;
}

Boolean UNIX_OperatingSystem::getFreeVirtualMemory(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FREE_VIRTUAL_MEMORY, getFreeVirtualMemory());
	return true;
}

Uint64 UNIX_OperatingSystem::getFreeVirtualMemory() const
{
	return _freeVirtualMemory;
}

void UNIX_OperatingSystem::setFreeVirtualMemory(Uint64 &value)
{
	_freeVirtualMemory = value;
}

Boolean UNIX_OperatingSystem::getFreePhysicalMemory(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FREE_PHYSICAL_MEMORY, getFreePhysicalMemory());
	return true;
}

Uint64 UNIX_OperatingSystem::getFreePhysicalMemory() const
{
	return _freePhysicalMemory;
}

void UNIX_OperatingSystem::setFreePhysicalMemory(Uint64 &value)
{
	_freePhysicalMemory = value;
}

Boolean UNIX_OperatingSystem::getTotalVisibleMemorySize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_VISIBLE_MEMORY_SIZE, getTotalVisibleMemorySize());
	return true;
}

Uint64 UNIX_OperatingSystem::getTotalVisibleMemorySize() const
{
	return _totalVisibleMemorySize;
}

void UNIX_OperatingSystem::setTotalVisibleMemorySize(Uint64 &value)
{
	_totalVisibleMemorySize = value;
}

Boolean UNIX_OperatingSystem::getSizeStoredInPagingFiles(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SIZE_STORED_IN_PAGING_FILES, getSizeStoredInPagingFiles());
	return true;
}

Uint64 UNIX_OperatingSystem::getSizeStoredInPagingFiles() const
{
	return _sizeStoredInPagingFiles;
}

void UNIX_OperatingSystem::setSizeStoredInPagingFiles(Uint64 &value)
{
	_sizeStoredInPagingFiles = value;
}

Boolean UNIX_OperatingSystem::getFreeSpaceInPagingFiles(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FREE_SPACE_IN_PAGING_FILES, getFreeSpaceInPagingFiles());
	return true;
}

Uint64 UNIX_OperatingSystem::getFreeSpaceInPagingFiles() const
{
	return _freeSpaceInPagingFiles;
}

void UNIX_OperatingSystem::setFreeSpaceInPagingFiles(Uint64 &value)
{
	_freeSpaceInPagingFiles = value;
}

Boolean UNIX_OperatingSystem::getMaxProcessMemorySize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_PROCESS_MEMORY_SIZE, getMaxProcessMemorySize());
	return true;
}

Uint64 UNIX_OperatingSystem::getMaxProcessMemorySize() const
{
	return _maxProcessMemorySize;
}

void UNIX_OperatingSystem::setMaxProcessMemorySize(Uint64 &value)
{
	_maxProcessMemorySize = value;
}

Boolean UNIX_OperatingSystem::getDistributed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DISTRIBUTED, getDistributed());
	return true;
}

Boolean UNIX_OperatingSystem::getDistributed() const
{
	return _distributed;
}

void UNIX_OperatingSystem::setDistributed(Boolean &value)
{
	_distributed = value;
}

Boolean UNIX_OperatingSystem::getMaxProcessesPerUser(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_PROCESSES_PER_USER, getMaxProcessesPerUser());
	return true;
}

Uint32 UNIX_OperatingSystem::getMaxProcessesPerUser() const
{
	return _maxProcessesPerUser;
}

void UNIX_OperatingSystem::setMaxProcessesPerUser(Uint32 &value)
{
	_maxProcessesPerUser = value;
}

Boolean UNIX_OperatingSystem::getFamily(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FAMILY, getFamily());
	return true;
}

String UNIX_OperatingSystem::getFamily() const
{
	return _family;
}

void UNIX_OperatingSystem::setFamily(String &value)
{
	_family = value;
}

Boolean UNIX_OperatingSystem::getManufacturer(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANUFACTURER, getManufacturer());
	return true;
}

String UNIX_OperatingSystem::getManufacturer() const
{
	return _manufacturer;
}

void UNIX_OperatingSystem::setManufacturer(String &value)
{
	_manufacturer = value;
}

Boolean UNIX_OperatingSystem::getOSClassification(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OS_CLASSIFICATION, getOSClassification());
	return true;
}

String UNIX_OperatingSystem::getOSClassification() const
{
	return _oSClassification;
}

void UNIX_OperatingSystem::setOSClassification(String &value)
{
	_oSClassification = value;
}


void UNIX_OperatingSystem::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("OperatingSystem");
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
	_cSCreationClassName = String("UNIX_ComputerSystem");
	_cSName = CIMHelper::HostName;
	_creationClassName = String("UNIX_OperatingSystem");
	_oSType = Uint16(0);
	_otherTypeDescription = String ("");
	_version = String ("");
	_lastBootUpTime = CIMHelper::getCurrentTime();
	_localDateTime = CIMHelper::getCurrentTime();
	_currentTimeZone = Sint16(0);
	_numberOfLicensedUsers = Uint32(0);
	_numberOfUsers = Uint32(0);
	_numberOfProcesses = Uint32(0);
	_maxNumberOfProcesses = Uint32(0);
	_totalSwapSpaceSize = Uint64(0);
	_totalVirtualMemorySize = Uint64(0);
	_freeVirtualMemory = Uint64(0);
	_freePhysicalMemory = Uint64(0);
	_totalVisibleMemorySize = Uint64(0);
	_sizeStoredInPagingFiles = Uint64(0);
	_freeSpaceInPagingFiles = Uint64(0);
	_maxProcessMemorySize = Uint64(0);
	_distributed = Boolean(false);
	_maxProcessesPerUser = Uint32(0);
	_family = String ("");
	_manufacturer = String ("");
	_oSClassification = String ("");

}

Boolean UNIX_OperatingSystem::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "CSCreationClassName"))
			{
				String cSCreationClassNameValue;
				property.getValue().get(cSCreationClassNameValue);
				setCSCreationClassName(cSCreationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "CSName"))
			{
				String cSNameValue;
				property.getValue().get(cSNameValue);
				setCSName(cSNameValue);
			}
			else if (String::equal(property.getName().getString(), "CreationClassName"))
			{
				String creationClassNameValue;
				property.getValue().get(creationClassNameValue);
				setCreationClassName(creationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "OSType"))
			{
				Uint16 oSTypeValue;
				property.getValue().get(oSTypeValue);
				setOSType(oSTypeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherTypeDescription"))
			{
				String otherTypeDescriptionValue;
				property.getValue().get(otherTypeDescriptionValue);
				setOtherTypeDescription(otherTypeDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "Version"))
			{
				String versionValue;
				property.getValue().get(versionValue);
				setVersion(versionValue);
			}
			else if (String::equal(property.getName().getString(), "LastBootUpTime"))
			{
				CIMDateTime lastBootUpTimeValue;
				property.getValue().get(lastBootUpTimeValue);
				setLastBootUpTime(lastBootUpTimeValue);
			}
			else if (String::equal(property.getName().getString(), "LocalDateTime"))
			{
				CIMDateTime localDateTimeValue;
				property.getValue().get(localDateTimeValue);
				setLocalDateTime(localDateTimeValue);
			}
			else if (String::equal(property.getName().getString(), "CurrentTimeZone"))
			{
				Sint16 currentTimeZoneValue;
				property.getValue().get(currentTimeZoneValue);
				setCurrentTimeZone(currentTimeZoneValue);
			}
			else if (String::equal(property.getName().getString(), "NumberOfLicensedUsers"))
			{
				Uint32 numberOfLicensedUsersValue;
				property.getValue().get(numberOfLicensedUsersValue);
				setNumberOfLicensedUsers(numberOfLicensedUsersValue);
			}
			else if (String::equal(property.getName().getString(), "NumberOfUsers"))
			{
				Uint32 numberOfUsersValue;
				property.getValue().get(numberOfUsersValue);
				setNumberOfUsers(numberOfUsersValue);
			}
			else if (String::equal(property.getName().getString(), "NumberOfProcesses"))
			{
				Uint32 numberOfProcessesValue;
				property.getValue().get(numberOfProcessesValue);
				setNumberOfProcesses(numberOfProcessesValue);
			}
			else if (String::equal(property.getName().getString(), "MaxNumberOfProcesses"))
			{
				Uint32 maxNumberOfProcessesValue;
				property.getValue().get(maxNumberOfProcessesValue);
				setMaxNumberOfProcesses(maxNumberOfProcessesValue);
			}
			else if (String::equal(property.getName().getString(), "TotalSwapSpaceSize"))
			{
				Uint64 totalSwapSpaceSizeValue;
				property.getValue().get(totalSwapSpaceSizeValue);
				setTotalSwapSpaceSize(totalSwapSpaceSizeValue);
			}
			else if (String::equal(property.getName().getString(), "TotalVirtualMemorySize"))
			{
				Uint64 totalVirtualMemorySizeValue;
				property.getValue().get(totalVirtualMemorySizeValue);
				setTotalVirtualMemorySize(totalVirtualMemorySizeValue);
			}
			else if (String::equal(property.getName().getString(), "FreeVirtualMemory"))
			{
				Uint64 freeVirtualMemoryValue;
				property.getValue().get(freeVirtualMemoryValue);
				setFreeVirtualMemory(freeVirtualMemoryValue);
			}
			else if (String::equal(property.getName().getString(), "FreePhysicalMemory"))
			{
				Uint64 freePhysicalMemoryValue;
				property.getValue().get(freePhysicalMemoryValue);
				setFreePhysicalMemory(freePhysicalMemoryValue);
			}
			else if (String::equal(property.getName().getString(), "TotalVisibleMemorySize"))
			{
				Uint64 totalVisibleMemorySizeValue;
				property.getValue().get(totalVisibleMemorySizeValue);
				setTotalVisibleMemorySize(totalVisibleMemorySizeValue);
			}
			else if (String::equal(property.getName().getString(), "SizeStoredInPagingFiles"))
			{
				Uint64 sizeStoredInPagingFilesValue;
				property.getValue().get(sizeStoredInPagingFilesValue);
				setSizeStoredInPagingFiles(sizeStoredInPagingFilesValue);
			}
			else if (String::equal(property.getName().getString(), "FreeSpaceInPagingFiles"))
			{
				Uint64 freeSpaceInPagingFilesValue;
				property.getValue().get(freeSpaceInPagingFilesValue);
				setFreeSpaceInPagingFiles(freeSpaceInPagingFilesValue);
			}
			else if (String::equal(property.getName().getString(), "MaxProcessMemorySize"))
			{
				Uint64 maxProcessMemorySizeValue;
				property.getValue().get(maxProcessMemorySizeValue);
				setMaxProcessMemorySize(maxProcessMemorySizeValue);
			}
			else if (String::equal(property.getName().getString(), "Distributed"))
			{
				Boolean distributedValue;
				property.getValue().get(distributedValue);
				setDistributed(distributedValue);
			}
			else if (String::equal(property.getName().getString(), "MaxProcessesPerUser"))
			{
				Uint32 maxProcessesPerUserValue;
				property.getValue().get(maxProcessesPerUserValue);
				setMaxProcessesPerUser(maxProcessesPerUserValue);
			}
			else if (String::equal(property.getName().getString(), "Family"))
			{
				String familyValue;
				property.getValue().get(familyValue);
				setFamily(familyValue);
			}
			else if (String::equal(property.getName().getString(), "Manufacturer"))
			{
				String manufacturerValue;
				property.getValue().get(manufacturerValue);
				setManufacturer(manufacturerValue);
			}
			else if (String::equal(property.getName().getString(), "OSClassification"))
			{
				String oSClassificationValue;
				property.getValue().get(oSClassificationValue);
				setOSClassification(oSClassificationValue);
			}
	}
	return true;
}

Uint32 UNIX_OperatingSystem::invokeRequestStateChange(
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

Uint32 UNIX_OperatingSystem::invokeReboot()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method Reboot */
	
	
	
	return returnValue;
}

Uint32 UNIX_OperatingSystem::invokeShutdown()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method Shutdown */
	
	
	
	return returnValue;
}


Boolean UNIX_OperatingSystem::initialize()
{
	return false;
}

Boolean UNIX_OperatingSystem::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("OperatingSystem");
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
	_cSCreationClassName = String("UNIX_ComputerSystem");
	_cSName = CIMHelper::HostName;
	_creationClassName = String("UNIX_OperatingSystem");
	_oSType = Uint16(0);
	_otherTypeDescription = String ("");
	_version = String ("");
	_lastBootUpTime = CIMHelper::getCurrentTime();
	_localDateTime = CIMHelper::getCurrentTime();
	_currentTimeZone = Sint16(0);
	_numberOfLicensedUsers = Uint32(0);
	_numberOfUsers = Uint32(0);
	_numberOfProcesses = Uint32(0);
	_maxNumberOfProcesses = Uint32(0);
	_totalSwapSpaceSize = Uint64(0);
	_totalVirtualMemorySize = Uint64(0);
	_freeVirtualMemory = Uint64(0);
	_freePhysicalMemory = Uint64(0);
	_totalVisibleMemorySize = Uint64(0);
	_sizeStoredInPagingFiles = Uint64(0);
	_freeSpaceInPagingFiles = Uint64(0);
	_maxProcessMemorySize = Uint64(0);
	_distributed = Boolean(false);
	_maxProcessesPerUser = Uint32(0);
	_family = String ("");
	_manufacturer = String ("");
	_oSClassification = String ("");
	
	return false;
}

Boolean UNIX_OperatingSystem::finalize()
{
	return false;
}

Boolean UNIX_OperatingSystem::loadByName(const String name)
{
	return false;
}

Boolean UNIX_OperatingSystem::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String cSCreationClassNameKey;
	String cSNameKey;
	String creationClassNameKey;
	String nameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_CS_CREATION_CLASS_NAME)) cSCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CS_NAME)) cSNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getCSCreationClassName(), cSCreationClassNameKey)) && 
			(String::equalNoCase(getCSName(), cSNameKey)) && 
			(String::equalNoCase(getCreationClassName(), creationClassNameKey)) && 
			(String::equalNoCase(getName(), nameKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_OperatingSystem::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_OperatingSystem::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_OperatingSystem::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_OperatingSystem::validateInstance()
{
	return true;
}

