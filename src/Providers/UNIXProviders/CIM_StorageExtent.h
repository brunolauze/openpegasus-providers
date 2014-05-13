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
2.35.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Core::StorageExtent
*/


/* **** Description *** */
/*
StorageExtent describes the capabilities and management of the various media that exist to store data and allow data retrieval. This superclass could be used to represent the various components of RAID (Hardware or Software) or as a raw logical extent on top of physical media.
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


*/

#ifndef __CIM_STORAGEEXTENT_H
#define __CIM_STORAGEEXTENT_H


#include "CIM_LogicalDevice.h"
#include <ConcreteJob/UNIX_ConcreteJob.h>


#ifndef PROPERTY_DATA_ORGANIZATION
#define PROPERTY_DATA_ORGANIZATION \
					"DataOrganization"
#endif

#ifndef PROPERTY_PURPOSE
#define PROPERTY_PURPOSE \
					"Purpose"
#endif

#ifndef PROPERTY_ACCESS
#define PROPERTY_ACCESS \
					"Access"
#endif

#ifndef PROPERTY_ERROR_METHODOLOGY
#define PROPERTY_ERROR_METHODOLOGY \
					"ErrorMethodology"
#endif

#ifndef PROPERTY_BLOCK_SIZE
#define PROPERTY_BLOCK_SIZE \
					"BlockSize"
#endif

#ifndef PROPERTY_NUMBER_OF_BLOCKS
#define PROPERTY_NUMBER_OF_BLOCKS \
					"NumberOfBlocks"
#endif

#ifndef PROPERTY_CONSUMABLE_BLOCKS
#define PROPERTY_CONSUMABLE_BLOCKS \
					"ConsumableBlocks"
#endif

#ifndef PROPERTY_IS_BASED_ON_UNDERLYING_REDUNDANCY
#define PROPERTY_IS_BASED_ON_UNDERLYING_REDUNDANCY \
					"IsBasedOnUnderlyingRedundancy"
#endif

#ifndef PROPERTY_SEQUENTIAL_ACCESS
#define PROPERTY_SEQUENTIAL_ACCESS \
					"SequentialAccess"
#endif

#ifndef PROPERTY_EXTENT_STATUS
#define PROPERTY_EXTENT_STATUS \
					"ExtentStatus"
#endif

#ifndef PROPERTY_NO_SINGLE_POINT_OF_FAILURE
#define PROPERTY_NO_SINGLE_POINT_OF_FAILURE \
					"NoSinglePointOfFailure"
#endif

#ifndef PROPERTY_DATA_REDUNDANCY
#define PROPERTY_DATA_REDUNDANCY \
					"DataRedundancy"
#endif

#ifndef PROPERTY_PACKAGE_REDUNDANCY
#define PROPERTY_PACKAGE_REDUNDANCY \
					"PackageRedundancy"
#endif

#ifndef PROPERTY_DELTA_RESERVATION
#define PROPERTY_DELTA_RESERVATION \
					"DeltaReservation"
#endif

#ifndef PROPERTY_PRIMORDIAL
#define PROPERTY_PRIMORDIAL \
					"Primordial"
#endif

#ifndef PROPERTY_NAME_FORMAT
#define PROPERTY_NAME_FORMAT \
					"NameFormat"
#endif

#ifndef PROPERTY_NAME_NAMESPACE
#define PROPERTY_NAME_NAMESPACE \
					"NameNamespace"
#endif

#ifndef PROPERTY_OTHER_NAME_NAMESPACE
#define PROPERTY_OTHER_NAME_NAMESPACE \
					"OtherNameNamespace"
#endif

#ifndef PROPERTY_OTHER_NAME_FORMAT
#define PROPERTY_OTHER_NAME_FORMAT \
					"OtherNameFormat"
#endif

#ifndef PROPERTY_USAGE
#define PROPERTY_USAGE \
					"Usage"
#endif

#ifndef PROPERTY_OTHER_USAGE_DESCRIPTION
#define PROPERTY_OTHER_USAGE_DESCRIPTION \
					"OtherUsageDescription"
#endif

#ifndef PROPERTY_CLIENT_SETTABLE_USAGE
#define PROPERTY_CLIENT_SETTABLE_USAGE \
					"ClientSettableUsage"
#endif

#ifndef PROPERTY_EXTENT_INTERLEAVE_DEPTH
#define PROPERTY_EXTENT_INTERLEAVE_DEPTH \
					"ExtentInterleaveDepth"
#endif

#ifndef PROPERTY_EXTENT_STRIPE_LENGTH
#define PROPERTY_EXTENT_STRIPE_LENGTH \
					"ExtentStripeLength"
#endif

#ifndef PROPERTY_IS_COMPOSITE
#define PROPERTY_IS_COMPOSITE \
					"IsComposite"
#endif

#ifndef PROPERTY_IS_CONCATENATED
#define PROPERTY_IS_CONCATENATED \
					"IsConcatenated"
#endif

#ifndef PROPERTY_EXTENT_DISCRIMINATOR
#define PROPERTY_EXTENT_DISCRIMINATOR \
					"ExtentDiscriminator"
#endif

#ifndef PROPERTY_COMPRESSION_RATE
#define PROPERTY_COMPRESSION_RATE \
					"CompressionRate"
#endif

#ifndef PROPERTY_COMPRESSION_STATE
#define PROPERTY_COMPRESSION_STATE \
					"CompressionState"
#endif

#ifndef PROPERTY_IS_COMPRESSED
#define PROPERTY_IS_COMPRESSED \
					"IsCompressed"
#endif



class CIM_StorageExtent :
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

	virtual Boolean getDataOrganization(CIMProperty&) const=0;
	virtual Uint16 getDataOrganization() const=0;
	virtual void setDataOrganization(Uint16&)=0;
	virtual Boolean getPurpose(CIMProperty&) const=0;
	virtual String getPurpose() const=0;
	virtual void setPurpose(String&)=0;
	virtual Boolean getAccess(CIMProperty&) const=0;
	virtual Uint16 getAccess() const=0;
	virtual void setAccess(Uint16&)=0;
	virtual Boolean getErrorMethodology(CIMProperty&) const=0;
	virtual String getErrorMethodology() const=0;
	virtual void setErrorMethodology(String&)=0;
	virtual Boolean getBlockSize(CIMProperty&) const=0;
	virtual Uint64 getBlockSize() const=0;
	virtual void setBlockSize(Uint64&)=0;
	virtual Boolean getNumberOfBlocks(CIMProperty&) const=0;
	virtual Uint64 getNumberOfBlocks() const=0;
	virtual void setNumberOfBlocks(Uint64&)=0;
	virtual Boolean getConsumableBlocks(CIMProperty&) const=0;
	virtual Uint64 getConsumableBlocks() const=0;
	virtual void setConsumableBlocks(Uint64&)=0;
	virtual Boolean getIsBasedOnUnderlyingRedundancy(CIMProperty&) const=0;
	virtual Boolean getIsBasedOnUnderlyingRedundancy() const=0;
	virtual void setIsBasedOnUnderlyingRedundancy(Boolean&)=0;
	virtual Boolean getSequentialAccess(CIMProperty&) const=0;
	virtual Boolean getSequentialAccess() const=0;
	virtual void setSequentialAccess(Boolean&)=0;
	virtual Boolean getExtentStatus(CIMProperty&) const=0;
	virtual Array<Uint16> getExtentStatus() const=0;
	virtual void setExtentStatus(Array<Uint16>&)=0;
	virtual Boolean getNoSinglePointOfFailure(CIMProperty&) const=0;
	virtual Boolean getNoSinglePointOfFailure() const=0;
	virtual void setNoSinglePointOfFailure(Boolean&)=0;
	virtual Boolean getDataRedundancy(CIMProperty&) const=0;
	virtual Uint16 getDataRedundancy() const=0;
	virtual void setDataRedundancy(Uint16&)=0;
	virtual Boolean getPackageRedundancy(CIMProperty&) const=0;
	virtual Uint16 getPackageRedundancy() const=0;
	virtual void setPackageRedundancy(Uint16&)=0;
	virtual Boolean getDeltaReservation(CIMProperty&) const=0;
	virtual Uint8 getDeltaReservation() const=0;
	virtual void setDeltaReservation(Uint8&)=0;
	virtual Boolean getPrimordial(CIMProperty&) const=0;
	virtual Boolean getPrimordial() const=0;
	virtual void setPrimordial(Boolean&)=0;
	virtual Boolean getName(CIMProperty&) const=0;
	virtual String getName() const=0;
	virtual void setName(String&)=0;
	virtual Boolean getNameFormat(CIMProperty&) const=0;
	virtual Uint16 getNameFormat() const=0;
	virtual void setNameFormat(Uint16&)=0;
	virtual Boolean getNameNamespace(CIMProperty&) const=0;
	virtual Uint16 getNameNamespace() const=0;
	virtual void setNameNamespace(Uint16&)=0;
	virtual Boolean getOtherNameNamespace(CIMProperty&) const=0;
	virtual String getOtherNameNamespace() const=0;
	virtual void setOtherNameNamespace(String&)=0;
	virtual Boolean getOtherNameFormat(CIMProperty&) const=0;
	virtual String getOtherNameFormat() const=0;
	virtual void setOtherNameFormat(String&)=0;
	virtual Boolean getUsage(CIMProperty&) const=0;
	virtual Uint16 getUsage() const=0;
	virtual void setUsage(Uint16&)=0;
	virtual Boolean getOtherUsageDescription(CIMProperty&) const=0;
	virtual String getOtherUsageDescription() const=0;
	virtual void setOtherUsageDescription(String&)=0;
	virtual Boolean getClientSettableUsage(CIMProperty&) const=0;
	virtual Array<Uint16> getClientSettableUsage() const=0;
	virtual void setClientSettableUsage(Array<Uint16>&)=0;
	virtual Boolean getExtentInterleaveDepth(CIMProperty&) const=0;
	virtual Uint64 getExtentInterleaveDepth() const=0;
	virtual void setExtentInterleaveDepth(Uint64&)=0;
	virtual Boolean getExtentStripeLength(CIMProperty&) const=0;
	virtual Uint64 getExtentStripeLength() const=0;
	virtual void setExtentStripeLength(Uint64&)=0;
	virtual Boolean getIsComposite(CIMProperty&) const=0;
	virtual Boolean getIsComposite() const=0;
	virtual void setIsComposite(Boolean&)=0;
	virtual Boolean getIsConcatenated(CIMProperty&) const=0;
	virtual Boolean getIsConcatenated() const=0;
	virtual void setIsConcatenated(Boolean&)=0;
	virtual Boolean getExtentDiscriminator(CIMProperty&) const=0;
	virtual Array<String> getExtentDiscriminator() const=0;
	virtual void setExtentDiscriminator(Array<String>&)=0;
	virtual Boolean getCompressionRate(CIMProperty&) const=0;
	virtual Uint16 getCompressionRate() const=0;
	virtual void setCompressionRate(Uint16&)=0;
	virtual Boolean getCompressionState(CIMProperty&) const=0;
	virtual Uint16 getCompressionState() const=0;
	virtual void setCompressionState(Uint16&)=0;
	virtual Boolean getIsCompressed(CIMProperty&) const=0;
	virtual Boolean getIsCompressed() const=0;
	virtual void setIsCompressed(Boolean&)=0;

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

#endif /* CIM_STORAGEEXTENT */
