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


/* **** Version *** */
/*
2.36.0
*/


/* **** UMLPackagePath *** */
/*
CIM::System::OperatingSystem
*/


/* **** Description *** */
/*
An OperatingSystem is software/firmware that makes a ComputerSystem's hardware usable, and implements and/or manages the resources, file systems, processes, user interfaces, services, ... available on the ComputerSystem.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_ManagedSystemElement:
				InstallDate DateTime
				Name String
				OperationalStatus UInt16
				StatusDescriptions String
				Status String
				HealthState UInt16
				CommunicationStatus UInt16
				DetailedStatus UInt16
				OperatingStatus UInt16
				PrimaryStatus UInt16

			CIM_LogicalElement:

			CIM_EnabledLogicalElement:
				EnabledState UInt16
				OtherEnabledState String
				RequestedState UInt16
				EnabledDefault UInt16
				TimeOfLastStateChange DateTime
				AvailableRequestedStates UInt16
				TransitioningToState UInt16

			UNIX_OperatingSystem:
				CSCreationClassName String
				CSName String
				CreationClassName String
				OSType UInt16
				OtherTypeDescription String
				Version String
				LastBootUpTime DateTime
				LocalDateTime DateTime
				CurrentTimeZone SInt16
				NumberOfLicensedUsers UInt32
				NumberOfUsers UInt32
				NumberOfProcesses UInt32
				MaxNumberOfProcesses UInt32
				TotalSwapSpaceSize UInt64
				TotalVirtualMemorySize UInt64
				FreeVirtualMemory UInt64
				FreePhysicalMemory UInt64
				TotalVisibleMemorySize UInt64
				SizeStoredInPagingFiles UInt64
				FreeSpaceInPagingFiles UInt64
				MaxProcessMemorySize UInt64
				Distributed Boolean
				MaxProcessesPerUser UInt32
				Family String
				Manufacturer String
				OSClassification String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_ManagedSystemElement:

			CIM_LogicalElement:

			CIM_EnabledLogicalElement:
				RequestStateChange UInt32

			UNIX_OperatingSystem:
				Reboot UInt32
				Shutdown UInt32


*/

#ifndef __UNIX_OPERATINGSYSTEM_H
#define __UNIX_OPERATINGSYSTEM_H


#include "CIM_EnabledLogicalElement.h"
#include <ConcreteJob/UNIX_ConcreteJob.h>

#include "UNIX_OperatingSystemDeps.h"


#ifndef PROPERTY_CS_CREATION_CLASS_NAME
#define PROPERTY_CS_CREATION_CLASS_NAME \
					"CSCreationClassName"
#endif

#ifndef PROPERTY_CS_NAME
#define PROPERTY_CS_NAME \
					"CSName"
#endif

#ifndef PROPERTY_CREATION_CLASS_NAME
#define PROPERTY_CREATION_CLASS_NAME \
					"CreationClassName"
#endif

#ifndef PROPERTY_OS_TYPE
#define PROPERTY_OS_TYPE \
					"OSType"
#endif

#ifndef PROPERTY_OTHER_TYPE_DESCRIPTION
#define PROPERTY_OTHER_TYPE_DESCRIPTION \
					"OtherTypeDescription"
#endif

#ifndef PROPERTY_VERSION
#define PROPERTY_VERSION \
					"Version"
#endif

#ifndef PROPERTY_LAST_BOOT_UP_TIME
#define PROPERTY_LAST_BOOT_UP_TIME \
					"LastBootUpTime"
#endif

#ifndef PROPERTY_LOCAL_DATE_TIME
#define PROPERTY_LOCAL_DATE_TIME \
					"LocalDateTime"
#endif

#ifndef PROPERTY_CURRENT_TIME_ZONE
#define PROPERTY_CURRENT_TIME_ZONE \
					"CurrentTimeZone"
#endif

#ifndef PROPERTY_NUMBER_OF_LICENSED_USERS
#define PROPERTY_NUMBER_OF_LICENSED_USERS \
					"NumberOfLicensedUsers"
#endif

#ifndef PROPERTY_NUMBER_OF_USERS
#define PROPERTY_NUMBER_OF_USERS \
					"NumberOfUsers"
#endif

#ifndef PROPERTY_NUMBER_OF_PROCESSES
#define PROPERTY_NUMBER_OF_PROCESSES \
					"NumberOfProcesses"
#endif

#ifndef PROPERTY_MAX_NUMBER_OF_PROCESSES
#define PROPERTY_MAX_NUMBER_OF_PROCESSES \
					"MaxNumberOfProcesses"
#endif

#ifndef PROPERTY_TOTAL_SWAP_SPACE_SIZE
#define PROPERTY_TOTAL_SWAP_SPACE_SIZE \
					"TotalSwapSpaceSize"
#endif

#ifndef PROPERTY_TOTAL_VIRTUAL_MEMORY_SIZE
#define PROPERTY_TOTAL_VIRTUAL_MEMORY_SIZE \
					"TotalVirtualMemorySize"
#endif

#ifndef PROPERTY_FREE_VIRTUAL_MEMORY
#define PROPERTY_FREE_VIRTUAL_MEMORY \
					"FreeVirtualMemory"
#endif

#ifndef PROPERTY_FREE_PHYSICAL_MEMORY
#define PROPERTY_FREE_PHYSICAL_MEMORY \
					"FreePhysicalMemory"
#endif

#ifndef PROPERTY_TOTAL_VISIBLE_MEMORY_SIZE
#define PROPERTY_TOTAL_VISIBLE_MEMORY_SIZE \
					"TotalVisibleMemorySize"
#endif

#ifndef PROPERTY_SIZE_STORED_IN_PAGING_FILES
#define PROPERTY_SIZE_STORED_IN_PAGING_FILES \
					"SizeStoredInPagingFiles"
#endif

#ifndef PROPERTY_FREE_SPACE_IN_PAGING_FILES
#define PROPERTY_FREE_SPACE_IN_PAGING_FILES \
					"FreeSpaceInPagingFiles"
#endif

#ifndef PROPERTY_MAX_PROCESS_MEMORY_SIZE
#define PROPERTY_MAX_PROCESS_MEMORY_SIZE \
					"MaxProcessMemorySize"
#endif

#ifndef PROPERTY_DISTRIBUTED
#define PROPERTY_DISTRIBUTED \
					"Distributed"
#endif

#ifndef PROPERTY_MAX_PROCESSES_PER_USER
#define PROPERTY_MAX_PROCESSES_PER_USER \
					"MaxProcessesPerUser"
#endif

#ifndef PROPERTY_FAMILY
#define PROPERTY_FAMILY \
					"Family"
#endif

#ifndef PROPERTY_MANUFACTURER
#define PROPERTY_MANUFACTURER \
					"Manufacturer"
#endif

#ifndef PROPERTY_OS_CLASSIFICATION
#define PROPERTY_OS_CLASSIFICATION \
					"OSClassification"
#endif



class UNIX_OperatingSystem :
	public CIM_EnabledLogicalElement
{
public:

	UNIX_OperatingSystem();
	~UNIX_OperatingSystem();

	virtual Boolean initialize();
	virtual Boolean load(int&);
	virtual Boolean loadByName(const String);
	virtual Boolean finalize();
	virtual Boolean find(const Array<CIMKeyBinding>&);
	virtual Boolean validateKey(CIMKeyBinding&) const;
	virtual void setScope(CIMName);
	virtual void setCIMOMHandle(CIMOMHandle&);
	virtual void clearInstance();
	virtual Boolean loadInstance(const CIMInstance&);
	virtual Boolean createInstance(const OperationContext&);
	virtual Boolean modifyInstance(const OperationContext&);
	virtual Boolean deleteInstance(const OperationContext&);
	virtual Boolean validateInstance();

	virtual Boolean getInstanceID(CIMProperty&) const;
	virtual String getInstanceID() const;
	virtual void setInstanceID(String&);
	virtual Boolean getCaption(CIMProperty&) const;
	virtual String getCaption() const;
	virtual void setCaption(String&);
	virtual Boolean getDescription(CIMProperty&) const;
	virtual String getDescription() const;
	virtual void setDescription(String&);
	virtual Boolean getElementName(CIMProperty&) const;
	virtual String getElementName() const;
	virtual void setElementName(String&);
	virtual Boolean getGeneration(CIMProperty&) const;
	virtual Uint64 getGeneration() const;
	virtual void setGeneration(Uint64&);
	virtual Boolean getInstallDate(CIMProperty&) const;
	virtual CIMDateTime getInstallDate() const;
	virtual void setInstallDate(CIMDateTime&);
	virtual Boolean getName(CIMProperty&) const;
	virtual String getName() const;
	virtual void setName(String&);
	virtual Boolean getOperationalStatus(CIMProperty&) const;
	virtual Array<Uint16> getOperationalStatus() const;
	virtual void setOperationalStatus(Array<Uint16>&);
	virtual Boolean getStatusDescriptions(CIMProperty&) const;
	virtual Array<String> getStatusDescriptions() const;
	virtual void setStatusDescriptions(Array<String>&);
	virtual Boolean getStatus(CIMProperty&) const;
	virtual String getStatus() const;
	virtual void setStatus(String&);
	virtual Boolean getHealthState(CIMProperty&) const;
	virtual Uint16 getHealthState() const;
	virtual void setHealthState(Uint16&);
	virtual Boolean getCommunicationStatus(CIMProperty&) const;
	virtual Uint16 getCommunicationStatus() const;
	virtual void setCommunicationStatus(Uint16&);
	virtual Boolean getDetailedStatus(CIMProperty&) const;
	virtual Uint16 getDetailedStatus() const;
	virtual void setDetailedStatus(Uint16&);
	virtual Boolean getOperatingStatus(CIMProperty&) const;
	virtual Uint16 getOperatingStatus() const;
	virtual void setOperatingStatus(Uint16&);
	virtual Boolean getPrimaryStatus(CIMProperty&) const;
	virtual Uint16 getPrimaryStatus() const;
	virtual void setPrimaryStatus(Uint16&);
	virtual Boolean getEnabledState(CIMProperty&) const;
	virtual Uint16 getEnabledState() const;
	virtual void setEnabledState(Uint16&);
	virtual Boolean getOtherEnabledState(CIMProperty&) const;
	virtual String getOtherEnabledState() const;
	virtual void setOtherEnabledState(String&);
	virtual Boolean getRequestedState(CIMProperty&) const;
	virtual Uint16 getRequestedState() const;
	virtual void setRequestedState(Uint16&);
	virtual Boolean getEnabledDefault(CIMProperty&) const;
	virtual Uint16 getEnabledDefault() const;
	virtual void setEnabledDefault(Uint16&);
	virtual Boolean getTimeOfLastStateChange(CIMProperty&) const;
	virtual CIMDateTime getTimeOfLastStateChange() const;
	virtual void setTimeOfLastStateChange(CIMDateTime&);
	virtual Boolean getAvailableRequestedStates(CIMProperty&) const;
	virtual Array<Uint16> getAvailableRequestedStates() const;
	virtual void setAvailableRequestedStates(Array<Uint16>&);
	virtual Boolean getTransitioningToState(CIMProperty&) const;
	virtual Uint16 getTransitioningToState() const;
	virtual void setTransitioningToState(Uint16&);
	virtual Boolean getCSCreationClassName(CIMProperty&) const;
	virtual String getCSCreationClassName() const;
	virtual void setCSCreationClassName(String&);
	virtual Boolean getCSName(CIMProperty&) const;
	virtual String getCSName() const;
	virtual void setCSName(String&);
	virtual Boolean getCreationClassName(CIMProperty&) const;
	virtual String getCreationClassName() const;
	virtual void setCreationClassName(String&);
	virtual Boolean getOSType(CIMProperty&) const;
	virtual Uint16 getOSType() const;
	virtual void setOSType(Uint16&);
	virtual Boolean getOtherTypeDescription(CIMProperty&) const;
	virtual String getOtherTypeDescription() const;
	virtual void setOtherTypeDescription(String&);
	virtual Boolean getVersion(CIMProperty&) const;
	virtual String getVersion() const;
	virtual void setVersion(String&);
	virtual Boolean getLastBootUpTime(CIMProperty&) const;
	virtual CIMDateTime getLastBootUpTime() const;
	virtual void setLastBootUpTime(CIMDateTime&);
	virtual Boolean getLocalDateTime(CIMProperty&) const;
	virtual CIMDateTime getLocalDateTime() const;
	virtual void setLocalDateTime(CIMDateTime&);
	virtual Boolean getCurrentTimeZone(CIMProperty&) const;
	virtual Sint16 getCurrentTimeZone() const;
	virtual void setCurrentTimeZone(Sint16&);
	virtual Boolean getNumberOfLicensedUsers(CIMProperty&) const;
	virtual Uint32 getNumberOfLicensedUsers() const;
	virtual void setNumberOfLicensedUsers(Uint32&);
	virtual Boolean getNumberOfUsers(CIMProperty&) const;
	virtual Uint32 getNumberOfUsers() const;
	virtual void setNumberOfUsers(Uint32&);
	virtual Boolean getNumberOfProcesses(CIMProperty&) const;
	virtual Uint32 getNumberOfProcesses() const;
	virtual void setNumberOfProcesses(Uint32&);
	virtual Boolean getMaxNumberOfProcesses(CIMProperty&) const;
	virtual Uint32 getMaxNumberOfProcesses() const;
	virtual void setMaxNumberOfProcesses(Uint32&);
	virtual Boolean getTotalSwapSpaceSize(CIMProperty&) const;
	virtual Uint64 getTotalSwapSpaceSize() const;
	virtual void setTotalSwapSpaceSize(Uint64&);
	virtual Boolean getTotalVirtualMemorySize(CIMProperty&) const;
	virtual Uint64 getTotalVirtualMemorySize() const;
	virtual void setTotalVirtualMemorySize(Uint64&);
	virtual Boolean getFreeVirtualMemory(CIMProperty&) const;
	virtual Uint64 getFreeVirtualMemory() const;
	virtual void setFreeVirtualMemory(Uint64&);
	virtual Boolean getFreePhysicalMemory(CIMProperty&) const;
	virtual Uint64 getFreePhysicalMemory() const;
	virtual void setFreePhysicalMemory(Uint64&);
	virtual Boolean getTotalVisibleMemorySize(CIMProperty&) const;
	virtual Uint64 getTotalVisibleMemorySize() const;
	virtual void setTotalVisibleMemorySize(Uint64&);
	virtual Boolean getSizeStoredInPagingFiles(CIMProperty&) const;
	virtual Uint64 getSizeStoredInPagingFiles() const;
	virtual void setSizeStoredInPagingFiles(Uint64&);
	virtual Boolean getFreeSpaceInPagingFiles(CIMProperty&) const;
	virtual Uint64 getFreeSpaceInPagingFiles() const;
	virtual void setFreeSpaceInPagingFiles(Uint64&);
	virtual Boolean getMaxProcessMemorySize(CIMProperty&) const;
	virtual Uint64 getMaxProcessMemorySize() const;
	virtual void setMaxProcessMemorySize(Uint64&);
	virtual Boolean getDistributed(CIMProperty&) const;
	virtual Boolean getDistributed() const;
	virtual void setDistributed(Boolean&);
	virtual Boolean getMaxProcessesPerUser(CIMProperty&) const;
	virtual Uint32 getMaxProcessesPerUser() const;
	virtual void setMaxProcessesPerUser(Uint32&);
	virtual Boolean getFamily(CIMProperty&) const;
	virtual String getFamily() const;
	virtual void setFamily(String&);
	virtual Boolean getManufacturer(CIMProperty&) const;
	virtual String getManufacturer() const;
	virtual void setManufacturer(String&);
	virtual Boolean getOSClassification(CIMProperty&) const;
	virtual String getOSClassification() const;
	virtual void setOSClassification(String&);

	virtual Uint32 invokeRequestStateChange(
		Uint16 &inRequestedState,
		CIMInstance &inJob,
		CIMDateTime &inTimeoutPeriod
	);

	virtual Uint32 invokeReboot();

	virtual Uint32 invokeShutdown();



private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	CIMDateTime _installDate;
	String _name;
	Array<Uint16> _operationalStatus;
	Array<String> _statusDescriptions;
	String _status;
	Uint16 _healthState;
	Uint16 _communicationStatus;
	Uint16 _detailedStatus;
	Uint16 _operatingStatus;
	Uint16 _primaryStatus;
	Uint16 _enabledState;
	String _otherEnabledState;
	Uint16 _requestedState;
	Uint16 _enabledDefault;
	CIMDateTime _timeOfLastStateChange;
	Array<Uint16> _availableRequestedStates;
	Uint16 _transitioningToState;
	String _cSCreationClassName;
	String _cSName;
	String _creationClassName;
	Uint16 _oSType;
	String _otherTypeDescription;
	String _version;
	CIMDateTime _lastBootUpTime;
	CIMDateTime _localDateTime;
	Sint16 _currentTimeZone;
	Uint32 _numberOfLicensedUsers;
	Uint32 _numberOfUsers;
	Uint32 _numberOfProcesses;
	Uint32 _maxNumberOfProcesses;
	Uint64 _totalSwapSpaceSize;
	Uint64 _totalVirtualMemorySize;
	Uint64 _freeVirtualMemory;
	Uint64 _freePhysicalMemory;
	Uint64 _totalVisibleMemorySize;
	Uint64 _sizeStoredInPagingFiles;
	Uint64 _freeSpaceInPagingFiles;
	Uint64 _maxProcessMemorySize;
	Boolean _distributed;
	Uint32 _maxProcessesPerUser;
	String _family;
	String _manufacturer;
	String _oSClassification;

#	include "UNIX_OperatingSystemPrivate.h"


};

#endif /* UNIX_OPERATINGSYSTEM */
