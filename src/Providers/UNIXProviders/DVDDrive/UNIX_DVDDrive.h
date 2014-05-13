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
2.6.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::StorageDevices
*/


/* **** Description *** */
/*
Capabilities and management of a DVDDrive, a subtype of MediaAccessDevice.
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

			CIM_MediaAccessDevice:
				Capabilities UInt16
				CapabilityDescriptions String
				ErrorMethodology String
				CompressionMethod String
				NumberOfMediaSupported UInt32
				MaxMediaSize UInt64
				DefaultBlockSize UInt64
				MaxBlockSize UInt64
				MinBlockSize UInt64
				NeedsCleaning Boolean
				MediaIsLocked Boolean
				Security UInt16
				LastCleaned DateTime
				MaxAccessTime UInt64
				UncompressedDataRate UInt32
				LoadTime UInt64
				UnloadTime UInt64
				MountCount UInt64
				TimeOfLastMount DateTime
				TotalMountTime UInt64
				UnitsDescription String
				MaxUnitsBeforeCleaning UInt64
				UnitsUsed UInt64

			UNIX_DVDDrive:
				FormatsSupported UInt16


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

			CIM_MediaAccessDevice:
				LockMedia UInt32

			UNIX_DVDDrive:


*/

#ifndef __UNIX_DVDDRIVE_H
#define __UNIX_DVDDRIVE_H


#include "CIM_MediaAccessDevice.h"
#include <ConcreteJob/UNIX_ConcreteJob.h>

#include "UNIX_DVDDriveDeps.h"


#ifndef PROPERTY_FORMATS_SUPPORTED
#define PROPERTY_FORMATS_SUPPORTED \
					"FormatsSupported"
#endif



class UNIX_DVDDrive :
	public CIM_MediaAccessDevice
{
public:

	UNIX_DVDDrive();
	~UNIX_DVDDrive();

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
	virtual Boolean getCapabilities(CIMProperty&) const;
	virtual Array<Uint16> getCapabilities() const;
	virtual void setCapabilities(Array<Uint16>&);
	virtual Boolean getCapabilityDescriptions(CIMProperty&) const;
	virtual Array<String> getCapabilityDescriptions() const;
	virtual void setCapabilityDescriptions(Array<String>&);
	virtual Boolean getErrorMethodology(CIMProperty&) const;
	virtual String getErrorMethodology() const;
	virtual void setErrorMethodology(String&);
	virtual Boolean getCompressionMethod(CIMProperty&) const;
	virtual String getCompressionMethod() const;
	virtual void setCompressionMethod(String&);
	virtual Boolean getNumberOfMediaSupported(CIMProperty&) const;
	virtual Uint32 getNumberOfMediaSupported() const;
	virtual void setNumberOfMediaSupported(Uint32&);
	virtual Boolean getMaxMediaSize(CIMProperty&) const;
	virtual Uint64 getMaxMediaSize() const;
	virtual void setMaxMediaSize(Uint64&);
	virtual Boolean getDefaultBlockSize(CIMProperty&) const;
	virtual Uint64 getDefaultBlockSize() const;
	virtual void setDefaultBlockSize(Uint64&);
	virtual Boolean getMaxBlockSize(CIMProperty&) const;
	virtual Uint64 getMaxBlockSize() const;
	virtual void setMaxBlockSize(Uint64&);
	virtual Boolean getMinBlockSize(CIMProperty&) const;
	virtual Uint64 getMinBlockSize() const;
	virtual void setMinBlockSize(Uint64&);
	virtual Boolean getNeedsCleaning(CIMProperty&) const;
	virtual Boolean getNeedsCleaning() const;
	virtual void setNeedsCleaning(Boolean&);
	virtual Boolean getMediaIsLocked(CIMProperty&) const;
	virtual Boolean getMediaIsLocked() const;
	virtual void setMediaIsLocked(Boolean&);
	virtual Boolean getSecurity(CIMProperty&) const;
	virtual Uint16 getSecurity() const;
	virtual void setSecurity(Uint16&);
	virtual Boolean getLastCleaned(CIMProperty&) const;
	virtual CIMDateTime getLastCleaned() const;
	virtual void setLastCleaned(CIMDateTime&);
	virtual Boolean getMaxAccessTime(CIMProperty&) const;
	virtual Uint64 getMaxAccessTime() const;
	virtual void setMaxAccessTime(Uint64&);
	virtual Boolean getUncompressedDataRate(CIMProperty&) const;
	virtual Uint32 getUncompressedDataRate() const;
	virtual void setUncompressedDataRate(Uint32&);
	virtual Boolean getLoadTime(CIMProperty&) const;
	virtual Uint64 getLoadTime() const;
	virtual void setLoadTime(Uint64&);
	virtual Boolean getUnloadTime(CIMProperty&) const;
	virtual Uint64 getUnloadTime() const;
	virtual void setUnloadTime(Uint64&);
	virtual Boolean getMountCount(CIMProperty&) const;
	virtual Uint64 getMountCount() const;
	virtual void setMountCount(Uint64&);
	virtual Boolean getTimeOfLastMount(CIMProperty&) const;
	virtual CIMDateTime getTimeOfLastMount() const;
	virtual void setTimeOfLastMount(CIMDateTime&);
	virtual Boolean getTotalMountTime(CIMProperty&) const;
	virtual Uint64 getTotalMountTime() const;
	virtual void setTotalMountTime(Uint64&);
	virtual Boolean getUnitsDescription(CIMProperty&) const;
	virtual String getUnitsDescription() const;
	virtual void setUnitsDescription(String&);
	virtual Boolean getMaxUnitsBeforeCleaning(CIMProperty&) const;
	virtual Uint64 getMaxUnitsBeforeCleaning() const;
	virtual void setMaxUnitsBeforeCleaning(Uint64&);
	virtual Boolean getUnitsUsed(CIMProperty&) const;
	virtual Uint64 getUnitsUsed() const;
	virtual void setUnitsUsed(Uint64&);
	virtual Boolean getFormatsSupported(CIMProperty&) const;
	virtual Array<Uint16> getFormatsSupported() const;
	virtual void setFormatsSupported(Array<Uint16>&);

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

	virtual Uint32 invokeLockMedia(
		Boolean &inLock
	);



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
	Array<Uint16> _capabilities;
	Array<String> _capabilityDescriptions;
	String _errorMethodology;
	String _compressionMethod;
	Uint32 _numberOfMediaSupported;
	Uint64 _maxMediaSize;
	Uint64 _defaultBlockSize;
	Uint64 _maxBlockSize;
	Uint64 _minBlockSize;
	Boolean _needsCleaning;
	Boolean _mediaIsLocked;
	Uint16 _security;
	CIMDateTime _lastCleaned;
	Uint64 _maxAccessTime;
	Uint32 _uncompressedDataRate;
	Uint64 _loadTime;
	Uint64 _unloadTime;
	Uint64 _mountCount;
	CIMDateTime _timeOfLastMount;
	Uint64 _totalMountTime;
	String _unitsDescription;
	Uint64 _maxUnitsBeforeCleaning;
	Uint64 _unitsUsed;
	Array<Uint16> _formatsSupported;

#	include "UNIX_DVDDrivePrivate.h"


};

#endif /* UNIX_DVDDRIVE */
