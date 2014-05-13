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
A MediaAccessDevice represents the ability to access one or more media and use this media to store and retrieve data.
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


*/

#ifndef __CIM_MEDIAACCESSDEVICE_H
#define __CIM_MEDIAACCESSDEVICE_H


#include "CIM_LogicalDevice.h"
#include <ConcreteJob/UNIX_ConcreteJob.h>


#ifndef PROPERTY_CAPABILITIES
#define PROPERTY_CAPABILITIES \
					"Capabilities"
#endif

#ifndef PROPERTY_CAPABILITY_DESCRIPTIONS
#define PROPERTY_CAPABILITY_DESCRIPTIONS \
					"CapabilityDescriptions"
#endif

#ifndef PROPERTY_ERROR_METHODOLOGY
#define PROPERTY_ERROR_METHODOLOGY \
					"ErrorMethodology"
#endif

#ifndef PROPERTY_COMPRESSION_METHOD
#define PROPERTY_COMPRESSION_METHOD \
					"CompressionMethod"
#endif

#ifndef PROPERTY_NUMBER_OF_MEDIA_SUPPORTED
#define PROPERTY_NUMBER_OF_MEDIA_SUPPORTED \
					"NumberOfMediaSupported"
#endif

#ifndef PROPERTY_MAX_MEDIA_SIZE
#define PROPERTY_MAX_MEDIA_SIZE \
					"MaxMediaSize"
#endif

#ifndef PROPERTY_DEFAULT_BLOCK_SIZE
#define PROPERTY_DEFAULT_BLOCK_SIZE \
					"DefaultBlockSize"
#endif

#ifndef PROPERTY_MAX_BLOCK_SIZE
#define PROPERTY_MAX_BLOCK_SIZE \
					"MaxBlockSize"
#endif

#ifndef PROPERTY_MIN_BLOCK_SIZE
#define PROPERTY_MIN_BLOCK_SIZE \
					"MinBlockSize"
#endif

#ifndef PROPERTY_NEEDS_CLEANING
#define PROPERTY_NEEDS_CLEANING \
					"NeedsCleaning"
#endif

#ifndef PROPERTY_MEDIA_IS_LOCKED
#define PROPERTY_MEDIA_IS_LOCKED \
					"MediaIsLocked"
#endif

#ifndef PROPERTY_SECURITY
#define PROPERTY_SECURITY \
					"Security"
#endif

#ifndef PROPERTY_LAST_CLEANED
#define PROPERTY_LAST_CLEANED \
					"LastCleaned"
#endif

#ifndef PROPERTY_MAX_ACCESS_TIME
#define PROPERTY_MAX_ACCESS_TIME \
					"MaxAccessTime"
#endif

#ifndef PROPERTY_UNCOMPRESSED_DATA_RATE
#define PROPERTY_UNCOMPRESSED_DATA_RATE \
					"UncompressedDataRate"
#endif

#ifndef PROPERTY_LOAD_TIME
#define PROPERTY_LOAD_TIME \
					"LoadTime"
#endif

#ifndef PROPERTY_UNLOAD_TIME
#define PROPERTY_UNLOAD_TIME \
					"UnloadTime"
#endif

#ifndef PROPERTY_MOUNT_COUNT
#define PROPERTY_MOUNT_COUNT \
					"MountCount"
#endif

#ifndef PROPERTY_TIME_OF_LAST_MOUNT
#define PROPERTY_TIME_OF_LAST_MOUNT \
					"TimeOfLastMount"
#endif

#ifndef PROPERTY_TOTAL_MOUNT_TIME
#define PROPERTY_TOTAL_MOUNT_TIME \
					"TotalMountTime"
#endif

#ifndef PROPERTY_UNITS_DESCRIPTION
#define PROPERTY_UNITS_DESCRIPTION \
					"UnitsDescription"
#endif

#ifndef PROPERTY_MAX_UNITS_BEFORE_CLEANING
#define PROPERTY_MAX_UNITS_BEFORE_CLEANING \
					"MaxUnitsBeforeCleaning"
#endif

#ifndef PROPERTY_UNITS_USED
#define PROPERTY_UNITS_USED \
					"UnitsUsed"
#endif



class CIM_MediaAccessDevice :
	public CIM_LogicalDevice
{
public:

	virtual Boolean initialize()=0;
	virtual Boolean load(int&)=0;
	virtual Boolean loadByName(const String)=0;
	virtual Boolean finalize()=0;
	virtual Boolean find(const Array<CIMKeyBinding>&)=0;
	virtual Boolean validateKey(CIMKeyBinding&) const=0;
	virtual void setScope(CIMName)=0;
	virtual void setCIMOMHandle(CIMOMHandle&)=0;
	virtual void clearInstance()=0;
	virtual Boolean loadInstance(const CIMInstance&)=0;
	virtual Boolean createInstance(const OperationContext&)=0;
	virtual Boolean modifyInstance(const OperationContext&)=0;
	virtual Boolean deleteInstance(const OperationContext&)=0;
	virtual Boolean validateInstance()=0;

	virtual Boolean getCapabilities(CIMProperty&) const=0;
	virtual Array<Uint16> getCapabilities() const=0;
	virtual void setCapabilities(Array<Uint16>&)=0;
	virtual Boolean getCapabilityDescriptions(CIMProperty&) const=0;
	virtual Array<String> getCapabilityDescriptions() const=0;
	virtual void setCapabilityDescriptions(Array<String>&)=0;
	virtual Boolean getErrorMethodology(CIMProperty&) const=0;
	virtual String getErrorMethodology() const=0;
	virtual void setErrorMethodology(String&)=0;
	virtual Boolean getCompressionMethod(CIMProperty&) const=0;
	virtual String getCompressionMethod() const=0;
	virtual void setCompressionMethod(String&)=0;
	virtual Boolean getNumberOfMediaSupported(CIMProperty&) const=0;
	virtual Uint32 getNumberOfMediaSupported() const=0;
	virtual void setNumberOfMediaSupported(Uint32&)=0;
	virtual Boolean getMaxMediaSize(CIMProperty&) const=0;
	virtual Uint64 getMaxMediaSize() const=0;
	virtual void setMaxMediaSize(Uint64&)=0;
	virtual Boolean getDefaultBlockSize(CIMProperty&) const=0;
	virtual Uint64 getDefaultBlockSize() const=0;
	virtual void setDefaultBlockSize(Uint64&)=0;
	virtual Boolean getMaxBlockSize(CIMProperty&) const=0;
	virtual Uint64 getMaxBlockSize() const=0;
	virtual void setMaxBlockSize(Uint64&)=0;
	virtual Boolean getMinBlockSize(CIMProperty&) const=0;
	virtual Uint64 getMinBlockSize() const=0;
	virtual void setMinBlockSize(Uint64&)=0;
	virtual Boolean getNeedsCleaning(CIMProperty&) const=0;
	virtual Boolean getNeedsCleaning() const=0;
	virtual void setNeedsCleaning(Boolean&)=0;
	virtual Boolean getMediaIsLocked(CIMProperty&) const=0;
	virtual Boolean getMediaIsLocked() const=0;
	virtual void setMediaIsLocked(Boolean&)=0;
	virtual Boolean getSecurity(CIMProperty&) const=0;
	virtual Uint16 getSecurity() const=0;
	virtual void setSecurity(Uint16&)=0;
	virtual Boolean getLastCleaned(CIMProperty&) const=0;
	virtual CIMDateTime getLastCleaned() const=0;
	virtual void setLastCleaned(CIMDateTime&)=0;
	virtual Boolean getMaxAccessTime(CIMProperty&) const=0;
	virtual Uint64 getMaxAccessTime() const=0;
	virtual void setMaxAccessTime(Uint64&)=0;
	virtual Boolean getUncompressedDataRate(CIMProperty&) const=0;
	virtual Uint32 getUncompressedDataRate() const=0;
	virtual void setUncompressedDataRate(Uint32&)=0;
	virtual Boolean getLoadTime(CIMProperty&) const=0;
	virtual Uint64 getLoadTime() const=0;
	virtual void setLoadTime(Uint64&)=0;
	virtual Boolean getUnloadTime(CIMProperty&) const=0;
	virtual Uint64 getUnloadTime() const=0;
	virtual void setUnloadTime(Uint64&)=0;
	virtual Boolean getMountCount(CIMProperty&) const=0;
	virtual Uint64 getMountCount() const=0;
	virtual void setMountCount(Uint64&)=0;
	virtual Boolean getTimeOfLastMount(CIMProperty&) const=0;
	virtual CIMDateTime getTimeOfLastMount() const=0;
	virtual void setTimeOfLastMount(CIMDateTime&)=0;
	virtual Boolean getTotalMountTime(CIMProperty&) const=0;
	virtual Uint64 getTotalMountTime() const=0;
	virtual void setTotalMountTime(Uint64&)=0;
	virtual Boolean getUnitsDescription(CIMProperty&) const=0;
	virtual String getUnitsDescription() const=0;
	virtual void setUnitsDescription(String&)=0;
	virtual Boolean getMaxUnitsBeforeCleaning(CIMProperty&) const=0;
	virtual Uint64 getMaxUnitsBeforeCleaning() const=0;
	virtual void setMaxUnitsBeforeCleaning(Uint64&)=0;
	virtual Boolean getUnitsUsed(CIMProperty&) const=0;
	virtual Uint64 getUnitsUsed() const=0;
	virtual void setUnitsUsed(Uint64&)=0;

	virtual Uint32 invokeRequestStateChange(
		Uint16 &inRequestedState,
		CIMInstance &inJob,
		CIMDateTime &inTimeoutPeriod
	)=0;

	virtual Uint32 invokeSetPowerState(
		Uint16 &inPowerState,
		CIMDateTime &inTime
	)=0;

	virtual Uint32 invokeReset()=0;

	virtual Uint32 invokeEnableDevice(
		Boolean &inEnabled
	)=0;

	virtual Uint32 invokeOnlineDevice(
		Boolean &inOnline
	)=0;

	virtual Uint32 invokeQuiesceDevice(
		Boolean &inQuiesce
	)=0;

	virtual Uint32 invokeSaveProperties()=0;

	virtual Uint32 invokeRestoreProperties()=0;

	virtual Uint32 invokeLockMedia(
		Boolean &inLock
	)=0;



private:

};

#endif /* CIM_MEDIAACCESSDEVICE */
