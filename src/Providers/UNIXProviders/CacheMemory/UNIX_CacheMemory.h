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


/* **** Deprecated *** */
/*
CIM_AssociatedCacheMemory
*/


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
Capabilities and management of Cache Memory. Cache memory is dedicated or allocated RAM that a Processor searches first for data, before going to 'regular' memory. CacheMemory is used to speed up the delivery of data to a Processor. It is usually described by its closeness to the Processor (for example, Primary or Secondary Cache). 
If a DiskDrive includes RAM allocated for holding the disk's most recently read and/or adjacent data (in order to speed up retrieval), this also would be modeled as CacheMemory. Note that CacheMemory is NOT operating system or application level buffers but actual RAM allocated for caching data for a Processor, from a hard disk, etc.
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

			UNIX_CacheMemory:
				Level UInt16
				WritePolicy UInt16
				CacheType UInt16
				LineSize UInt32
				ReplacementPolicy UInt16
				ReadPolicy UInt16
				FlushTimer UInt32
				Associativity UInt16


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

			UNIX_CacheMemory:


*/

#ifndef __UNIX_CACHEMEMORY_H
#define __UNIX_CACHEMEMORY_H


#include "CIM_Memory.h"
#include <ConcreteJob/UNIX_ConcreteJob.h>

#include "UNIX_CacheMemoryDeps.h"


#ifndef PROPERTY_LEVEL
#define PROPERTY_LEVEL \
					"Level"
#endif

#ifndef PROPERTY_WRITE_POLICY
#define PROPERTY_WRITE_POLICY \
					"WritePolicy"
#endif

#ifndef PROPERTY_CACHE_TYPE
#define PROPERTY_CACHE_TYPE \
					"CacheType"
#endif

#ifndef PROPERTY_LINE_SIZE
#define PROPERTY_LINE_SIZE \
					"LineSize"
#endif

#ifndef PROPERTY_REPLACEMENT_POLICY
#define PROPERTY_REPLACEMENT_POLICY \
					"ReplacementPolicy"
#endif

#ifndef PROPERTY_READ_POLICY
#define PROPERTY_READ_POLICY \
					"ReadPolicy"
#endif

#ifndef PROPERTY_FLUSH_TIMER
#define PROPERTY_FLUSH_TIMER \
					"FlushTimer"
#endif

#ifndef PROPERTY_ASSOCIATIVITY
#define PROPERTY_ASSOCIATIVITY \
					"Associativity"
#endif



class UNIX_CacheMemory :
	public CIM_Memory
{
public:

	UNIX_CacheMemory();
	~UNIX_CacheMemory();

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
	virtual Boolean getDataOrganization(CIMProperty&) const;
	virtual Uint16 getDataOrganization() const;
	virtual void setDataOrganization(Uint16&);
	virtual Boolean getPurpose(CIMProperty&) const;
	virtual String getPurpose() const;
	virtual void setPurpose(String&);
	virtual Boolean getAccess(CIMProperty&) const;
	virtual Uint16 getAccess() const;
	virtual void setAccess(Uint16&);
	virtual Boolean getErrorMethodology(CIMProperty&) const;
	virtual String getErrorMethodology() const;
	virtual void setErrorMethodology(String&);
	virtual Boolean getBlockSize(CIMProperty&) const;
	virtual Uint64 getBlockSize() const;
	virtual void setBlockSize(Uint64&);
	virtual Boolean getNumberOfBlocks(CIMProperty&) const;
	virtual Uint64 getNumberOfBlocks() const;
	virtual void setNumberOfBlocks(Uint64&);
	virtual Boolean getConsumableBlocks(CIMProperty&) const;
	virtual Uint64 getConsumableBlocks() const;
	virtual void setConsumableBlocks(Uint64&);
	virtual Boolean getIsBasedOnUnderlyingRedundancy(CIMProperty&) const;
	virtual Boolean getIsBasedOnUnderlyingRedundancy() const;
	virtual void setIsBasedOnUnderlyingRedundancy(Boolean&);
	virtual Boolean getSequentialAccess(CIMProperty&) const;
	virtual Boolean getSequentialAccess() const;
	virtual void setSequentialAccess(Boolean&);
	virtual Boolean getExtentStatus(CIMProperty&) const;
	virtual Array<Uint16> getExtentStatus() const;
	virtual void setExtentStatus(Array<Uint16>&);
	virtual Boolean getNoSinglePointOfFailure(CIMProperty&) const;
	virtual Boolean getNoSinglePointOfFailure() const;
	virtual void setNoSinglePointOfFailure(Boolean&);
	virtual Boolean getDataRedundancy(CIMProperty&) const;
	virtual Uint16 getDataRedundancy() const;
	virtual void setDataRedundancy(Uint16&);
	virtual Boolean getPackageRedundancy(CIMProperty&) const;
	virtual Uint16 getPackageRedundancy() const;
	virtual void setPackageRedundancy(Uint16&);
	virtual Boolean getDeltaReservation(CIMProperty&) const;
	virtual Uint8 getDeltaReservation() const;
	virtual void setDeltaReservation(Uint8&);
	virtual Boolean getPrimordial(CIMProperty&) const;
	virtual Boolean getPrimordial() const;
	virtual void setPrimordial(Boolean&);
	virtual Boolean getNameFormat(CIMProperty&) const;
	virtual Uint16 getNameFormat() const;
	virtual void setNameFormat(Uint16&);
	virtual Boolean getNameNamespace(CIMProperty&) const;
	virtual Uint16 getNameNamespace() const;
	virtual void setNameNamespace(Uint16&);
	virtual Boolean getOtherNameNamespace(CIMProperty&) const;
	virtual String getOtherNameNamespace() const;
	virtual void setOtherNameNamespace(String&);
	virtual Boolean getOtherNameFormat(CIMProperty&) const;
	virtual String getOtherNameFormat() const;
	virtual void setOtherNameFormat(String&);
	virtual Boolean getUsage(CIMProperty&) const;
	virtual Uint16 getUsage() const;
	virtual void setUsage(Uint16&);
	virtual Boolean getOtherUsageDescription(CIMProperty&) const;
	virtual String getOtherUsageDescription() const;
	virtual void setOtherUsageDescription(String&);
	virtual Boolean getClientSettableUsage(CIMProperty&) const;
	virtual Array<Uint16> getClientSettableUsage() const;
	virtual void setClientSettableUsage(Array<Uint16>&);
	virtual Boolean getExtentInterleaveDepth(CIMProperty&) const;
	virtual Uint64 getExtentInterleaveDepth() const;
	virtual void setExtentInterleaveDepth(Uint64&);
	virtual Boolean getExtentStripeLength(CIMProperty&) const;
	virtual Uint64 getExtentStripeLength() const;
	virtual void setExtentStripeLength(Uint64&);
	virtual Boolean getIsComposite(CIMProperty&) const;
	virtual Boolean getIsComposite() const;
	virtual void setIsComposite(Boolean&);
	virtual Boolean getIsConcatenated(CIMProperty&) const;
	virtual Boolean getIsConcatenated() const;
	virtual void setIsConcatenated(Boolean&);
	virtual Boolean getExtentDiscriminator(CIMProperty&) const;
	virtual Array<String> getExtentDiscriminator() const;
	virtual void setExtentDiscriminator(Array<String>&);
	virtual Boolean getCompressionRate(CIMProperty&) const;
	virtual Uint16 getCompressionRate() const;
	virtual void setCompressionRate(Uint16&);
	virtual Boolean getCompressionState(CIMProperty&) const;
	virtual Uint16 getCompressionState() const;
	virtual void setCompressionState(Uint16&);
	virtual Boolean getIsCompressed(CIMProperty&) const;
	virtual Boolean getIsCompressed() const;
	virtual void setIsCompressed(Boolean&);
	virtual Boolean getVolatile(CIMProperty&) const;
	virtual Boolean getVolatile() const;
	virtual void setVolatile(Boolean&);
	virtual Boolean getStartingAddress(CIMProperty&) const;
	virtual Uint64 getStartingAddress() const;
	virtual void setStartingAddress(Uint64&);
	virtual Boolean getEndingAddress(CIMProperty&) const;
	virtual Uint64 getEndingAddress() const;
	virtual void setEndingAddress(Uint64&);
	virtual Boolean getErrorInfo(CIMProperty&) const;
	virtual Uint16 getErrorInfo() const;
	virtual void setErrorInfo(Uint16&);
	virtual Boolean getOtherErrorDescription(CIMProperty&) const;
	virtual String getOtherErrorDescription() const;
	virtual void setOtherErrorDescription(String&);
	virtual Boolean getCorrectableError(CIMProperty&) const;
	virtual Boolean getCorrectableError() const;
	virtual void setCorrectableError(Boolean&);
	virtual Boolean getErrorTime(CIMProperty&) const;
	virtual CIMDateTime getErrorTime() const;
	virtual void setErrorTime(CIMDateTime&);
	virtual Boolean getErrorAccess(CIMProperty&) const;
	virtual Uint16 getErrorAccess() const;
	virtual void setErrorAccess(Uint16&);
	virtual Boolean getErrorTransferSize(CIMProperty&) const;
	virtual Uint32 getErrorTransferSize() const;
	virtual void setErrorTransferSize(Uint32&);
	virtual Boolean getErrorData(CIMProperty&) const;
	virtual Array<Uint8> getErrorData() const;
	virtual void setErrorData(Array<Uint8>&);
	virtual Boolean getErrorDataOrder(CIMProperty&) const;
	virtual Uint16 getErrorDataOrder() const;
	virtual void setErrorDataOrder(Uint16&);
	virtual Boolean getErrorAddress(CIMProperty&) const;
	virtual Uint64 getErrorAddress() const;
	virtual void setErrorAddress(Uint64&);
	virtual Boolean getSystemLevelAddress(CIMProperty&) const;
	virtual Boolean getSystemLevelAddress() const;
	virtual void setSystemLevelAddress(Boolean&);
	virtual Boolean getErrorResolution(CIMProperty&) const;
	virtual Uint64 getErrorResolution() const;
	virtual void setErrorResolution(Uint64&);
	virtual Boolean getAdditionalErrorData(CIMProperty&) const;
	virtual Array<Uint8> getAdditionalErrorData() const;
	virtual void setAdditionalErrorData(Array<Uint8>&);
	virtual Boolean getLevel(CIMProperty&) const;
	virtual Uint16 getLevel() const;
	virtual void setLevel(Uint16&);
	virtual Boolean getWritePolicy(CIMProperty&) const;
	virtual Uint16 getWritePolicy() const;
	virtual void setWritePolicy(Uint16&);
	virtual Boolean getCacheType(CIMProperty&) const;
	virtual Uint16 getCacheType() const;
	virtual void setCacheType(Uint16&);
	virtual Boolean getLineSize(CIMProperty&) const;
	virtual Uint32 getLineSize() const;
	virtual void setLineSize(Uint32&);
	virtual Boolean getReplacementPolicy(CIMProperty&) const;
	virtual Uint16 getReplacementPolicy() const;
	virtual void setReplacementPolicy(Uint16&);
	virtual Boolean getReadPolicy(CIMProperty&) const;
	virtual Uint16 getReadPolicy() const;
	virtual void setReadPolicy(Uint16&);
	virtual Boolean getFlushTimer(CIMProperty&) const;
	virtual Uint32 getFlushTimer() const;
	virtual void setFlushTimer(Uint32&);
	virtual Boolean getAssociativity(CIMProperty&) const;
	virtual Uint16 getAssociativity() const;
	virtual void setAssociativity(Uint16&);

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
	Uint16 _dataOrganization;
	String _purpose;
	Uint16 _access;
	String _errorMethodology;
	Uint64 _blockSize;
	Uint64 _numberOfBlocks;
	Uint64 _consumableBlocks;
	Boolean _isBasedOnUnderlyingRedundancy;
	Boolean _sequentialAccess;
	Array<Uint16> _extentStatus;
	Boolean _noSinglePointOfFailure;
	Uint16 _dataRedundancy;
	Uint16 _packageRedundancy;
	Uint8 _deltaReservation;
	Boolean _primordial;
	Uint16 _nameFormat;
	Uint16 _nameNamespace;
	String _otherNameNamespace;
	String _otherNameFormat;
	Uint16 _usage;
	String _otherUsageDescription;
	Array<Uint16> _clientSettableUsage;
	Uint64 _extentInterleaveDepth;
	Uint64 _extentStripeLength;
	Boolean _isComposite;
	Boolean _isConcatenated;
	Array<String> _extentDiscriminator;
	Uint16 _compressionRate;
	Uint16 _compressionState;
	Boolean _isCompressed;
	Boolean _volatile;
	Uint64 _startingAddress;
	Uint64 _endingAddress;
	Uint16 _errorInfo;
	String _otherErrorDescription;
	Boolean _correctableError;
	CIMDateTime _errorTime;
	Uint16 _errorAccess;
	Uint32 _errorTransferSize;
	Array<Uint8> _errorData;
	Uint16 _errorDataOrder;
	Uint64 _errorAddress;
	Boolean _systemLevelAddress;
	Uint64 _errorResolution;
	Array<Uint8> _additionalErrorData;
	Uint16 _level;
	Uint16 _writePolicy;
	Uint16 _cacheType;
	Uint32 _lineSize;
	Uint16 _replacementPolicy;
	Uint16 _readPolicy;
	Uint32 _flushTimer;
	Uint16 _associativity;

#	include "UNIX_CacheMemoryPrivate.h"


};

#endif /* UNIX_CACHEMEMORY */
