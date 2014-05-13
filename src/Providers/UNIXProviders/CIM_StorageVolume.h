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
2.28.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::StorageExtents
*/


/* **** Description *** */
/*
A StorageVolume is a StorageExtent that is published for use outside of the scoping System. For SCSI storage target devices, StorageVolumes are used to represent target Block devices, (peripheral device type codes 0h (i.e, direct-access), 4h (i.e., write-once), 5h (i.e., CD/DVD), 7h (i.e., optical memory), and Eh (i.e., simplified direct-access).); 
Stream devices, (peripheral device type codes 1h (i.e., 
sequential-access) and 3h (i.e., processor).). 
In these case, StorageVolume.Name will be derived from SCSI volume as documented in StorageExtent.Nameformat and NameNamespace Descriptions. 

The 'Exported' value from StorageExtent.ExtentStatus[] MUST be in all instances of StorageVolume to maintain the semantic of 'published' described above.
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

			CIM_StorageExtent:
				DataOrganization UInt16
				Purpose String
				Access UInt16
				ErrorMethodology String
				BlockSize UInt64
				NumberOfBlocks UInt64
				ConsumableBlocks UInt64
				IsBasedOnUnderlyingRedundancy Boolean
				SequentialAccess Boolean
				ExtentStatus UInt16
				NoSinglePointOfFailure Boolean
				DataRedundancy UInt16
				PackageRedundancy UInt16
				DeltaReservation UInt8
				Primordial Boolean
				NameFormat UInt16
				NameNamespace UInt16
				OtherNameNamespace String
				OtherNameFormat String
				Usage UInt16
				OtherUsageDescription String
				ClientSettableUsage UInt16
				ExtentInterleaveDepth UInt64
				ExtentStripeLength UInt64
				IsComposite Boolean
				IsConcatenated Boolean
				ExtentDiscriminator String
				CompressionRate UInt16
				CompressionState UInt16
				IsCompressed Boolean

			CIM_StorageVolume:
				CUImage String
				CanDelete Boolean
				EmulatedDevice String
				NumExtentsMigrating UInt64
				SubsystemID String
				ThinlyProvisioned Boolean
				RelativePerformanceOrder UInt16
				RelativePerformanceOrderSet UInt16
				StorageTieringSelection UInt16


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

			CIM_StorageExtent:

			CIM_StorageVolume:


*/

#ifndef __CIM_STORAGEVOLUME_H
#define __CIM_STORAGEVOLUME_H


#include "CIM_StorageExtent.h"
#include <ConcreteJob/UNIX_ConcreteJob.h>


#ifndef PROPERTY_C_U_IMAGE
#define PROPERTY_C_U_IMAGE \
					"CUImage"
#endif

#ifndef PROPERTY_CAN_DELETE
#define PROPERTY_CAN_DELETE \
					"CanDelete"
#endif

#ifndef PROPERTY_EMULATED_DEVICE
#define PROPERTY_EMULATED_DEVICE \
					"EmulatedDevice"
#endif

#ifndef PROPERTY_NUM_EXTENTS_MIGRATING
#define PROPERTY_NUM_EXTENTS_MIGRATING \
					"NumExtentsMigrating"
#endif

#ifndef PROPERTY_SUBSYSTEM_ID
#define PROPERTY_SUBSYSTEM_ID \
					"SubsystemID"
#endif

#ifndef PROPERTY_THINLY_PROVISIONED
#define PROPERTY_THINLY_PROVISIONED \
					"ThinlyProvisioned"
#endif

#ifndef PROPERTY_RELATIVE_PERFORMANCE_ORDER
#define PROPERTY_RELATIVE_PERFORMANCE_ORDER \
					"RelativePerformanceOrder"
#endif

#ifndef PROPERTY_RELATIVE_PERFORMANCE_ORDER_SET
#define PROPERTY_RELATIVE_PERFORMANCE_ORDER_SET \
					"RelativePerformanceOrderSet"
#endif

#ifndef PROPERTY_STORAGE_TIERING_SELECTION
#define PROPERTY_STORAGE_TIERING_SELECTION \
					"StorageTieringSelection"
#endif



class CIM_StorageVolume :
	public CIM_StorageExtent
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

	virtual Boolean getName(CIMProperty&) const=0;
	virtual String getName() const=0;
	virtual void setName(String&)=0;
	virtual Boolean getNameFormat(CIMProperty&) const=0;
	virtual Uint16 getNameFormat() const=0;
	virtual void setNameFormat(Uint16&)=0;
	virtual Boolean getNameNamespace(CIMProperty&) const=0;
	virtual Uint16 getNameNamespace() const=0;
	virtual void setNameNamespace(Uint16&)=0;
	virtual Boolean getUsage(CIMProperty&) const=0;
	virtual Uint16 getUsage() const=0;
	virtual void setUsage(Uint16&)=0;
	virtual Boolean getOtherUsageDescription(CIMProperty&) const=0;
	virtual String getOtherUsageDescription() const=0;
	virtual void setOtherUsageDescription(String&)=0;
	virtual Boolean getClientSettableUsage(CIMProperty&) const=0;
	virtual Array<Uint16> getClientSettableUsage() const=0;
	virtual void setClientSettableUsage(Array<Uint16>&)=0;
	virtual Boolean getCUImage(CIMProperty&) const=0;
	virtual String getCUImage() const=0;
	virtual void setCUImage(String&)=0;
	virtual Boolean getCanDelete(CIMProperty&) const=0;
	virtual Boolean getCanDelete() const=0;
	virtual void setCanDelete(Boolean&)=0;
	virtual Boolean getEmulatedDevice(CIMProperty&) const=0;
	virtual String getEmulatedDevice() const=0;
	virtual void setEmulatedDevice(String&)=0;
	virtual Boolean getNumExtentsMigrating(CIMProperty&) const=0;
	virtual Uint64 getNumExtentsMigrating() const=0;
	virtual void setNumExtentsMigrating(Uint64&)=0;
	virtual Boolean getSubsystemID(CIMProperty&) const=0;
	virtual String getSubsystemID() const=0;
	virtual void setSubsystemID(String&)=0;
	virtual Boolean getThinlyProvisioned(CIMProperty&) const=0;
	virtual Boolean getThinlyProvisioned() const=0;
	virtual void setThinlyProvisioned(Boolean&)=0;
	virtual Boolean getRelativePerformanceOrder(CIMProperty&) const=0;
	virtual Uint16 getRelativePerformanceOrder() const=0;
	virtual void setRelativePerformanceOrder(Uint16&)=0;
	virtual Boolean getRelativePerformanceOrderSet(CIMProperty&) const=0;
	virtual Array<Uint16> getRelativePerformanceOrderSet() const=0;
	virtual void setRelativePerformanceOrderSet(Array<Uint16>&)=0;
	virtual Boolean getStorageTieringSelection(CIMProperty&) const=0;
	virtual Uint16 getStorageTieringSelection() const=0;
	virtual void setStorageTieringSelection(Uint16&)=0;

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



private:

};

#endif /* CIM_STORAGEVOLUME */
