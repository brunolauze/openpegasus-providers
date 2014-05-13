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
2.8.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::Memory
*/


/* **** Description *** */
/*
Capabilities and management of Memory-related LogicalDevices.
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

			CIM_Memory:
				Volatile Boolean
				StartingAddress UInt64
				EndingAddress UInt64
				ErrorInfo UInt16
				OtherErrorDescription String
				CorrectableError Boolean
				ErrorTime DateTime
				ErrorAccess UInt16
				ErrorTransferSize UInt32
				ErrorData UInt8
				ErrorDataOrder UInt16
				ErrorAddress UInt64
				SystemLevelAddress Boolean
				ErrorResolution UInt64
				AdditionalErrorData UInt8


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

			CIM_Memory:


*/

#ifndef __CIM_MEMORY_H
#define __CIM_MEMORY_H


#include "CIM_StorageExtent.h"
#include <ConcreteJob/UNIX_ConcreteJob.h>


#ifndef PROPERTY_VOLATILE
#define PROPERTY_VOLATILE \
					"Volatile"
#endif

#ifndef PROPERTY_STARTING_ADDRESS
#define PROPERTY_STARTING_ADDRESS \
					"StartingAddress"
#endif

#ifndef PROPERTY_ENDING_ADDRESS
#define PROPERTY_ENDING_ADDRESS \
					"EndingAddress"
#endif

#ifndef PROPERTY_ERROR_INFO
#define PROPERTY_ERROR_INFO \
					"ErrorInfo"
#endif

#ifndef PROPERTY_OTHER_ERROR_DESCRIPTION
#define PROPERTY_OTHER_ERROR_DESCRIPTION \
					"OtherErrorDescription"
#endif

#ifndef PROPERTY_CORRECTABLE_ERROR
#define PROPERTY_CORRECTABLE_ERROR \
					"CorrectableError"
#endif

#ifndef PROPERTY_ERROR_TIME
#define PROPERTY_ERROR_TIME \
					"ErrorTime"
#endif

#ifndef PROPERTY_ERROR_ACCESS
#define PROPERTY_ERROR_ACCESS \
					"ErrorAccess"
#endif

#ifndef PROPERTY_ERROR_TRANSFER_SIZE
#define PROPERTY_ERROR_TRANSFER_SIZE \
					"ErrorTransferSize"
#endif

#ifndef PROPERTY_ERROR_DATA
#define PROPERTY_ERROR_DATA \
					"ErrorData"
#endif

#ifndef PROPERTY_ERROR_DATA_ORDER
#define PROPERTY_ERROR_DATA_ORDER \
					"ErrorDataOrder"
#endif

#ifndef PROPERTY_ERROR_ADDRESS
#define PROPERTY_ERROR_ADDRESS \
					"ErrorAddress"
#endif

#ifndef PROPERTY_SYSTEM_LEVEL_ADDRESS
#define PROPERTY_SYSTEM_LEVEL_ADDRESS \
					"SystemLevelAddress"
#endif

#ifndef PROPERTY_ERROR_RESOLUTION
#define PROPERTY_ERROR_RESOLUTION \
					"ErrorResolution"
#endif

#ifndef PROPERTY_ADDITIONAL_ERROR_DATA
#define PROPERTY_ADDITIONAL_ERROR_DATA \
					"AdditionalErrorData"
#endif



class CIM_Memory :
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

	virtual Boolean getVolatile(CIMProperty&) const=0;
	virtual Boolean getVolatile() const=0;
	virtual void setVolatile(Boolean&)=0;
	virtual Boolean getErrorMethodology(CIMProperty&) const=0;
	virtual String getErrorMethodology() const=0;
	virtual void setErrorMethodology(String&)=0;
	virtual Boolean getStartingAddress(CIMProperty&) const=0;
	virtual Uint64 getStartingAddress() const=0;
	virtual void setStartingAddress(Uint64&)=0;
	virtual Boolean getEndingAddress(CIMProperty&) const=0;
	virtual Uint64 getEndingAddress() const=0;
	virtual void setEndingAddress(Uint64&)=0;
	virtual Boolean getErrorInfo(CIMProperty&) const=0;
	virtual Uint16 getErrorInfo() const=0;
	virtual void setErrorInfo(Uint16&)=0;
	virtual Boolean getOtherErrorDescription(CIMProperty&) const=0;
	virtual String getOtherErrorDescription() const=0;
	virtual void setOtherErrorDescription(String&)=0;
	virtual Boolean getCorrectableError(CIMProperty&) const=0;
	virtual Boolean getCorrectableError() const=0;
	virtual void setCorrectableError(Boolean&)=0;
	virtual Boolean getErrorTime(CIMProperty&) const=0;
	virtual CIMDateTime getErrorTime() const=0;
	virtual void setErrorTime(CIMDateTime&)=0;
	virtual Boolean getErrorAccess(CIMProperty&) const=0;
	virtual Uint16 getErrorAccess() const=0;
	virtual void setErrorAccess(Uint16&)=0;
	virtual Boolean getErrorTransferSize(CIMProperty&) const=0;
	virtual Uint32 getErrorTransferSize() const=0;
	virtual void setErrorTransferSize(Uint32&)=0;
	virtual Boolean getErrorData(CIMProperty&) const=0;
	virtual Array<Uint8> getErrorData() const=0;
	virtual void setErrorData(Array<Uint8>&)=0;
	virtual Boolean getErrorDataOrder(CIMProperty&) const=0;
	virtual Uint16 getErrorDataOrder() const=0;
	virtual void setErrorDataOrder(Uint16&)=0;
	virtual Boolean getErrorAddress(CIMProperty&) const=0;
	virtual Uint64 getErrorAddress() const=0;
	virtual void setErrorAddress(Uint64&)=0;
	virtual Boolean getSystemLevelAddress(CIMProperty&) const=0;
	virtual Boolean getSystemLevelAddress() const=0;
	virtual void setSystemLevelAddress(Boolean&)=0;
	virtual Boolean getErrorResolution(CIMProperty&) const=0;
	virtual Uint64 getErrorResolution() const=0;
	virtual void setErrorResolution(Uint64&)=0;
	virtual Boolean getAdditionalErrorData(CIMProperty&) const=0;
	virtual Array<Uint8> getAdditionalErrorData() const=0;
	virtual void setAdditionalErrorData(Array<Uint8>&)=0;

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

#endif /* CIM_MEMORY */
