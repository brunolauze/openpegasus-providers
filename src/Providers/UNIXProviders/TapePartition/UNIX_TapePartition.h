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
CIM::Device::StorageExtents
*/


/* **** Description *** */
/*
Capabilities and management of a TapePartition StorageExtent. Note that if a PhysicalTape is not partitioned, only a generic StorageExtent that represents the entire Tape should be instantiated. TapePartitions may be BasedOn other StorageExtents or directly Realized on a PhysicalTape.
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

			UNIX_TapePartition:
				UnusedBlocks UInt64


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

			UNIX_TapePartition:


*/

#ifndef __UNIX_TAPEPARTITION_H
#define __UNIX_TAPEPARTITION_H


#include "CIM_MediaPartition.h"
#include <ConcreteJob/UNIX_ConcreteJob.h>

#include "UNIX_TapePartitionDeps.h"


#ifndef PROPERTY_UNUSED_BLOCKS
#define PROPERTY_UNUSED_BLOCKS \
					"UnusedBlocks"
#endif



class UNIX_TapePartition :
	public CIM_MediaPartition
{
public:

	UNIX_TapePartition();
	~UNIX_TapePartition();

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
	virtual Boolean getBootable(CIMProperty&) const;
	virtual Boolean getBootable() const;
	virtual void setBootable(Boolean&);
	virtual Boolean getAllocatable(CIMProperty&) const;
	virtual Boolean getAllocatable() const;
	virtual void setAllocatable(Boolean&);
	virtual Boolean getSignature(CIMProperty&) const;
	virtual String getSignature() const;
	virtual void setSignature(String&);
	virtual Boolean getSignatureAlgorithm(CIMProperty&) const;
	virtual String getSignatureAlgorithm() const;
	virtual void setSignatureAlgorithm(String&);
	virtual Boolean getSignatureState(CIMProperty&) const;
	virtual String getSignatureState() const;
	virtual void setSignatureState(String&);
	virtual Boolean getExtendable(CIMProperty&) const;
	virtual Boolean getExtendable() const;
	virtual void setExtendable(Boolean&);
	virtual Boolean getUnusedBlocks(CIMProperty&) const;
	virtual Uint64 getUnusedBlocks() const;
	virtual void setUnusedBlocks(Uint64&);

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
	Boolean _bootable;
	Boolean _allocatable;
	String _signature;
	String _signatureAlgorithm;
	String _signatureState;
	Boolean _extendable;
	Uint64 _unusedBlocks;

#	include "UNIX_TapePartitionPrivate.h"


};

#endif /* UNIX_TAPEPARTITION */
