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
2.37.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::Processor
*/


/* **** Description *** */
/*
Capabilities and management of the Processor LogicalDevice.
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

			CIM_AllocatedLogicalElement:
				AllocationState String

			CIM_LogicalDevice:
				SystemCreationClassName String
				SystemName String
				CreationClassName String
				DeviceID String
				PowerManagementSupported Boolean
				PowerManagementCapabilities UInt16
				Availability UInt16
				StatusInfo UInt16
				LastErrorCode UInt32
				ErrorDescription String
				ErrorCleared Boolean
				OtherIdentifyingInfo String
				PowerOnHours UInt64
				TotalPowerOnHours UInt64
				IdentifyingDescriptions String
				AdditionalAvailability UInt16
				MaxQuiesceTime UInt64
				LocationIndicator UInt16

			UNIX_Processor:
				Role String
				Family UInt16
				OtherFamilyDescription String
				UpgradeMethod UInt16
				MaxClockSpeed UInt32
				CurrentClockSpeed UInt32
				DataWidth UInt16
				AddressWidth UInt16
				LoadPercentage UInt16
				Stepping String
				UniqueID String
				CPUStatus UInt16
				ExternalBusClockSpeed UInt32
				Characteristics UInt16
				EnabledProcessorCharacteristics UInt16
				NumberOfEnabledCores UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_ManagedSystemElement:

			CIM_LogicalElement:

			CIM_EnabledLogicalElement:
				RequestStateChange UInt32

			CIM_AllocatedLogicalElement:

			CIM_LogicalDevice:
				SetPowerState UInt32
				Reset UInt32
				EnableDevice UInt32
				OnlineDevice UInt32
				QuiesceDevice UInt32
				SaveProperties UInt32
				RestoreProperties UInt32

			UNIX_Processor:


*/

#ifndef __UNIX_PROCESSOR_H
#define __UNIX_PROCESSOR_H


#include "CIM_LogicalDevice.h"
#include <ConcreteJob/UNIX_ConcreteJob.h>

#include "UNIX_ProcessorDeps.h"


#ifndef PROPERTY_ROLE
#define PROPERTY_ROLE \
					"Role"
#endif

#ifndef PROPERTY_FAMILY
#define PROPERTY_FAMILY \
					"Family"
#endif

#ifndef PROPERTY_OTHER_FAMILY_DESCRIPTION
#define PROPERTY_OTHER_FAMILY_DESCRIPTION \
					"OtherFamilyDescription"
#endif

#ifndef PROPERTY_UPGRADE_METHOD
#define PROPERTY_UPGRADE_METHOD \
					"UpgradeMethod"
#endif

#ifndef PROPERTY_MAX_CLOCK_SPEED
#define PROPERTY_MAX_CLOCK_SPEED \
					"MaxClockSpeed"
#endif

#ifndef PROPERTY_CURRENT_CLOCK_SPEED
#define PROPERTY_CURRENT_CLOCK_SPEED \
					"CurrentClockSpeed"
#endif

#ifndef PROPERTY_DATA_WIDTH
#define PROPERTY_DATA_WIDTH \
					"DataWidth"
#endif

#ifndef PROPERTY_ADDRESS_WIDTH
#define PROPERTY_ADDRESS_WIDTH \
					"AddressWidth"
#endif

#ifndef PROPERTY_LOAD_PERCENTAGE
#define PROPERTY_LOAD_PERCENTAGE \
					"LoadPercentage"
#endif

#ifndef PROPERTY_STEPPING
#define PROPERTY_STEPPING \
					"Stepping"
#endif

#ifndef PROPERTY_UNIQUE_ID
#define PROPERTY_UNIQUE_ID \
					"UniqueID"
#endif

#ifndef PROPERTY_CPU_STATUS
#define PROPERTY_CPU_STATUS \
					"CPUStatus"
#endif

#ifndef PROPERTY_EXTERNAL_BUS_CLOCK_SPEED
#define PROPERTY_EXTERNAL_BUS_CLOCK_SPEED \
					"ExternalBusClockSpeed"
#endif

#ifndef PROPERTY_CHARACTERISTICS
#define PROPERTY_CHARACTERISTICS \
					"Characteristics"
#endif

#ifndef PROPERTY_ENABLED_PROCESSOR_CHARACTERISTICS
#define PROPERTY_ENABLED_PROCESSOR_CHARACTERISTICS \
					"EnabledProcessorCharacteristics"
#endif

#ifndef PROPERTY_NUMBER_OF_ENABLED_CORES
#define PROPERTY_NUMBER_OF_ENABLED_CORES \
					"NumberOfEnabledCores"
#endif



class UNIX_Processor :
	public CIM_LogicalDevice
{
public:

	UNIX_Processor();
	~UNIX_Processor();

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
	virtual Boolean getAllocationState(CIMProperty&) const;
	virtual String getAllocationState() const;
	virtual void setAllocationState(String&);
	virtual Boolean getSystemCreationClassName(CIMProperty&) const;
	virtual String getSystemCreationClassName() const;
	virtual void setSystemCreationClassName(String&);
	virtual Boolean getSystemName(CIMProperty&) const;
	virtual String getSystemName() const;
	virtual void setSystemName(String&);
	virtual Boolean getCreationClassName(CIMProperty&) const;
	virtual String getCreationClassName() const;
	virtual void setCreationClassName(String&);
	virtual Boolean getDeviceID(CIMProperty&) const;
	virtual String getDeviceID() const;
	virtual void setDeviceID(String&);
	virtual Boolean getPowerManagementSupported(CIMProperty&) const;
	virtual Boolean getPowerManagementSupported() const;
	virtual void setPowerManagementSupported(Boolean&);
	virtual Boolean getPowerManagementCapabilities(CIMProperty&) const;
	virtual Array<Uint16> getPowerManagementCapabilities() const;
	virtual void setPowerManagementCapabilities(Array<Uint16>&);
	virtual Boolean getAvailability(CIMProperty&) const;
	virtual Uint16 getAvailability() const;
	virtual void setAvailability(Uint16&);
	virtual Boolean getStatusInfo(CIMProperty&) const;
	virtual Uint16 getStatusInfo() const;
	virtual void setStatusInfo(Uint16&);
	virtual Boolean getLastErrorCode(CIMProperty&) const;
	virtual Uint32 getLastErrorCode() const;
	virtual void setLastErrorCode(Uint32&);
	virtual Boolean getErrorDescription(CIMProperty&) const;
	virtual String getErrorDescription() const;
	virtual void setErrorDescription(String&);
	virtual Boolean getErrorCleared(CIMProperty&) const;
	virtual Boolean getErrorCleared() const;
	virtual void setErrorCleared(Boolean&);
	virtual Boolean getOtherIdentifyingInfo(CIMProperty&) const;
	virtual Array<String> getOtherIdentifyingInfo() const;
	virtual void setOtherIdentifyingInfo(Array<String>&);
	virtual Boolean getPowerOnHours(CIMProperty&) const;
	virtual Uint64 getPowerOnHours() const;
	virtual void setPowerOnHours(Uint64&);
	virtual Boolean getTotalPowerOnHours(CIMProperty&) const;
	virtual Uint64 getTotalPowerOnHours() const;
	virtual void setTotalPowerOnHours(Uint64&);
	virtual Boolean getIdentifyingDescriptions(CIMProperty&) const;
	virtual Array<String> getIdentifyingDescriptions() const;
	virtual void setIdentifyingDescriptions(Array<String>&);
	virtual Boolean getAdditionalAvailability(CIMProperty&) const;
	virtual Array<Uint16> getAdditionalAvailability() const;
	virtual void setAdditionalAvailability(Array<Uint16>&);
	virtual Boolean getMaxQuiesceTime(CIMProperty&) const;
	virtual Uint64 getMaxQuiesceTime() const;
	virtual void setMaxQuiesceTime(Uint64&);
	virtual Boolean getLocationIndicator(CIMProperty&) const;
	virtual Uint16 getLocationIndicator() const;
	virtual void setLocationIndicator(Uint16&);
	virtual Boolean getRole(CIMProperty&) const;
	virtual String getRole() const;
	virtual void setRole(String&);
	virtual Boolean getFamily(CIMProperty&) const;
	virtual Uint16 getFamily() const;
	virtual void setFamily(Uint16&);
	virtual Boolean getOtherFamilyDescription(CIMProperty&) const;
	virtual String getOtherFamilyDescription() const;
	virtual void setOtherFamilyDescription(String&);
	virtual Boolean getUpgradeMethod(CIMProperty&) const;
	virtual Uint16 getUpgradeMethod() const;
	virtual void setUpgradeMethod(Uint16&);
	virtual Boolean getMaxClockSpeed(CIMProperty&) const;
	virtual Uint32 getMaxClockSpeed() const;
	virtual void setMaxClockSpeed(Uint32&);
	virtual Boolean getCurrentClockSpeed(CIMProperty&) const;
	virtual Uint32 getCurrentClockSpeed() const;
	virtual void setCurrentClockSpeed(Uint32&);
	virtual Boolean getDataWidth(CIMProperty&) const;
	virtual Uint16 getDataWidth() const;
	virtual void setDataWidth(Uint16&);
	virtual Boolean getAddressWidth(CIMProperty&) const;
	virtual Uint16 getAddressWidth() const;
	virtual void setAddressWidth(Uint16&);
	virtual Boolean getLoadPercentage(CIMProperty&) const;
	virtual Uint16 getLoadPercentage() const;
	virtual void setLoadPercentage(Uint16&);
	virtual Boolean getStepping(CIMProperty&) const;
	virtual String getStepping() const;
	virtual void setStepping(String&);
	virtual Boolean getUniqueID(CIMProperty&) const;
	virtual String getUniqueID() const;
	virtual void setUniqueID(String&);
	virtual Boolean getCPUStatus(CIMProperty&) const;
	virtual Uint16 getCPUStatus() const;
	virtual void setCPUStatus(Uint16&);
	virtual Boolean getExternalBusClockSpeed(CIMProperty&) const;
	virtual Uint32 getExternalBusClockSpeed() const;
	virtual void setExternalBusClockSpeed(Uint32&);
	virtual Boolean getCharacteristics(CIMProperty&) const;
	virtual Array<Uint16> getCharacteristics() const;
	virtual void setCharacteristics(Array<Uint16>&);
	virtual Boolean getEnabledProcessorCharacteristics(CIMProperty&) const;
	virtual Array<Uint16> getEnabledProcessorCharacteristics() const;
	virtual void setEnabledProcessorCharacteristics(Array<Uint16>&);
	virtual Boolean getNumberOfEnabledCores(CIMProperty&) const;
	virtual Uint16 getNumberOfEnabledCores() const;
	virtual void setNumberOfEnabledCores(Uint16&);

	virtual Uint32 invokeRequestStateChange(
		Uint16 &inRequestedState,
		CIMInstance &inJob,
		CIMDateTime &inTimeoutPeriod
	);

	virtual Uint32 invokeSetPowerState(
		Uint16 &inPowerState,
		CIMDateTime &inTime
	);

	virtual Uint32 invokeReset();

	virtual Uint32 invokeEnableDevice(
		Boolean &inEnabled
	);

	virtual Uint32 invokeOnlineDevice(
		Boolean &inOnline
	);

	virtual Uint32 invokeQuiesceDevice(
		Boolean &inQuiesce
	);

	virtual Uint32 invokeSaveProperties();

	virtual Uint32 invokeRestoreProperties();



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
	String _allocationState;
	String _systemCreationClassName;
	String _systemName;
	String _creationClassName;
	String _deviceID;
	Boolean _powerManagementSupported;
	Array<Uint16> _powerManagementCapabilities;
	Uint16 _availability;
	Uint16 _statusInfo;
	Uint32 _lastErrorCode;
	String _errorDescription;
	Boolean _errorCleared;
	Array<String> _otherIdentifyingInfo;
	Uint64 _powerOnHours;
	Uint64 _totalPowerOnHours;
	Array<String> _identifyingDescriptions;
	Array<Uint16> _additionalAvailability;
	Uint64 _maxQuiesceTime;
	Uint16 _locationIndicator;
	String _role;
	Uint16 _family;
	String _otherFamilyDescription;
	Uint16 _upgradeMethod;
	Uint32 _maxClockSpeed;
	Uint32 _currentClockSpeed;
	Uint16 _dataWidth;
	Uint16 _addressWidth;
	Uint16 _loadPercentage;
	String _stepping;
	String _uniqueID;
	Uint16 _cPUStatus;
	Uint32 _externalBusClockSpeed;
	Array<Uint16> _characteristics;
	Array<Uint16> _enabledProcessorCharacteristics;
	Uint16 _numberOfEnabledCores;

#	include "UNIX_ProcessorPrivate.h"


};

#endif /* UNIX_PROCESSOR */
