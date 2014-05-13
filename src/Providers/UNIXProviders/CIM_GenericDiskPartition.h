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


/* **** Experimental *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.8.1000
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::StorageExtents
*/


/* **** Description *** */
/*
A DiskPartition is a presentation of a contiguous range of logical blocks that is identifiable by the Operating System by the associated DiskPartitionConfigurationCapabilities and by the properties of the subclasses of this class. 

Each concrete partition style (the subclasses of GenericDiskPartition) has some way of tracking a starting block number and either the ending block or number of blocks. CIM models this with the StartingAddress and EndingAddress properties of the BasedOn association between the partition and its underlying volume/extent. The NumberOfBlocks and ConsumableBlocks properties inherited from StorageExtent also need to be consistent or omitted by the instrumentation. Partition numbers are modeled as BasedOn.OrderIndex. 

Note that all the concrete DiskPartition instances BasedOn the same underlying extent) MUST share the same partition style (i.e. all must have the same subclass type). 

The abstract qualifier can not be used on this class because its superclass is not abstract. But instances of subclasses this class should be instantiated, not instances of GenericDiskPartition itself.
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

			CIM_MediaPartition:
				Bootable Boolean
				Allocatable Boolean
				Signature String
				SignatureAlgorithm String
				SignatureState String
				Extendable Boolean

			CIM_GenericDiskPartition:


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

			CIM_MediaPartition:

			CIM_GenericDiskPartition:


*/

#ifndef __CIM_GENERICDISKPARTITION_H
#define __CIM_GENERICDISKPARTITION_H


#include "CIM_MediaPartition.h"
#include <ConcreteJob/UNIX_ConcreteJob.h>




class CIM_GenericDiskPartition :
	public CIM_MediaPartition
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

#endif /* CIM_GENERICDISKPARTITION */
