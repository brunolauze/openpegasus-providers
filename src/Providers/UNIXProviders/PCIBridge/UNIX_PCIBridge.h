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
2.22.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::Controller
*/


/* **** Description *** */
/*
Capabilities and management of a PCI controller that provide bridge-to-bridge capability.
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

			CIM_Controller:
				TimeOfLastReset DateTime
				ProtocolSupported UInt16
				MaxNumberControlled UInt32
				ProtocolDescription String

			CIM_PCIController:
				CommandRegister UInt16
				Capabilities UInt16
				CapabilityDescriptions String
				DeviceSelectTiming UInt16
				ClassCode UInt8
				CacheLineSize UInt8
				LatencyTimer UInt8
				InterruptPin UInt16
				ExpansionROMBaseAddress UInt32
				SelfTestEnabled Boolean

			CIM_PCIDevice:
				BaseAddress UInt32
				SubsystemID UInt16
				SubsystemVendorID UInt16
				MinGrantTime UInt8
				MaxLatency UInt8
				BusNumber UInt8
				DeviceNumber UInt8
				FunctionNumber UInt8
				PCIDeviceID UInt16
				VendorID UInt16
				RevisionID UInt8
				BaseAddress64 UInt64

			UNIX_PCIBridge:
				BridgeType UInt16
				SecondaryLatencyTimer UInt8
				SubordinateBusNumber UInt8
				SecondayBusNumber UInt8
				PrimaryBusNumber UInt8
				SecondaryStatusRegister UInt16
				SecondaryBusDeviceSelectTiming UInt16
				IOLimit UInt8
				IOBase UInt8
				MemoryLimit UInt16
				MemoryBase UInt16
				PrefetchMemoryLimit UInt16
				PrefetchMemoryBase UInt16
				PrefetchLimitUpper32 UInt32
				PrefetchBaseUpper32 UInt32
				IOLimitUpper16 UInt16
				IOBaseUpper16 UInt16


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

			CIM_Controller:

			CIM_PCIController:
				BISTExecution UInt8

			CIM_PCIDevice:

			UNIX_PCIBridge:


*/

#ifndef __UNIX_PCIBRIDGE_H
#define __UNIX_PCIBRIDGE_H


#include "CIM_PCIDevice.h"
#include <ConcreteJob/UNIX_ConcreteJob.h>

#include "UNIX_PCIBridgeDeps.h"


#ifndef PROPERTY_BRIDGE_TYPE
#define PROPERTY_BRIDGE_TYPE \
					"BridgeType"
#endif

#ifndef PROPERTY_SECONDARY_LATENCY_TIMER
#define PROPERTY_SECONDARY_LATENCY_TIMER \
					"SecondaryLatencyTimer"
#endif

#ifndef PROPERTY_SUBORDINATE_BUS_NUMBER
#define PROPERTY_SUBORDINATE_BUS_NUMBER \
					"SubordinateBusNumber"
#endif

#ifndef PROPERTY_SECONDAY_BUS_NUMBER
#define PROPERTY_SECONDAY_BUS_NUMBER \
					"SecondayBusNumber"
#endif

#ifndef PROPERTY_PRIMARY_BUS_NUMBER
#define PROPERTY_PRIMARY_BUS_NUMBER \
					"PrimaryBusNumber"
#endif

#ifndef PROPERTY_SECONDARY_STATUS_REGISTER
#define PROPERTY_SECONDARY_STATUS_REGISTER \
					"SecondaryStatusRegister"
#endif

#ifndef PROPERTY_SECONDARY_BUS_DEVICE_SELECT_TIMING
#define PROPERTY_SECONDARY_BUS_DEVICE_SELECT_TIMING \
					"SecondaryBusDeviceSelectTiming"
#endif

#ifndef PROPERTY_IO_LIMIT
#define PROPERTY_IO_LIMIT \
					"IOLimit"
#endif

#ifndef PROPERTY_IO_BASE
#define PROPERTY_IO_BASE \
					"IOBase"
#endif

#ifndef PROPERTY_MEMORY_LIMIT
#define PROPERTY_MEMORY_LIMIT \
					"MemoryLimit"
#endif

#ifndef PROPERTY_MEMORY_BASE
#define PROPERTY_MEMORY_BASE \
					"MemoryBase"
#endif

#ifndef PROPERTY_PREFETCH_MEMORY_LIMIT
#define PROPERTY_PREFETCH_MEMORY_LIMIT \
					"PrefetchMemoryLimit"
#endif

#ifndef PROPERTY_PREFETCH_MEMORY_BASE
#define PROPERTY_PREFETCH_MEMORY_BASE \
					"PrefetchMemoryBase"
#endif

#ifndef PROPERTY_PREFETCH_LIMIT_UPPER_3_2
#define PROPERTY_PREFETCH_LIMIT_UPPER_3_2 \
					"PrefetchLimitUpper32"
#endif

#ifndef PROPERTY_PREFETCH_BASE_UPPER_3_2
#define PROPERTY_PREFETCH_BASE_UPPER_3_2 \
					"PrefetchBaseUpper32"
#endif

#ifndef PROPERTY_IO_LIMIT_UPPER_1_6
#define PROPERTY_IO_LIMIT_UPPER_1_6 \
					"IOLimitUpper16"
#endif

#ifndef PROPERTY_IO_BASE_UPPER_1_6
#define PROPERTY_IO_BASE_UPPER_1_6 \
					"IOBaseUpper16"
#endif



class UNIX_PCIBridge :
	public CIM_PCIDevice
{
public:

	UNIX_PCIBridge();
	~UNIX_PCIBridge();

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
	virtual Boolean getTimeOfLastReset(CIMProperty&) const;
	virtual CIMDateTime getTimeOfLastReset() const;
	virtual void setTimeOfLastReset(CIMDateTime&);
	virtual Boolean getProtocolSupported(CIMProperty&) const;
	virtual Uint16 getProtocolSupported() const;
	virtual void setProtocolSupported(Uint16&);
	virtual Boolean getMaxNumberControlled(CIMProperty&) const;
	virtual Uint32 getMaxNumberControlled() const;
	virtual void setMaxNumberControlled(Uint32&);
	virtual Boolean getProtocolDescription(CIMProperty&) const;
	virtual String getProtocolDescription() const;
	virtual void setProtocolDescription(String&);
	virtual Boolean getCommandRegister(CIMProperty&) const;
	virtual Uint16 getCommandRegister() const;
	virtual void setCommandRegister(Uint16&);
	virtual Boolean getCapabilities(CIMProperty&) const;
	virtual Array<Uint16> getCapabilities() const;
	virtual void setCapabilities(Array<Uint16>&);
	virtual Boolean getCapabilityDescriptions(CIMProperty&) const;
	virtual Array<String> getCapabilityDescriptions() const;
	virtual void setCapabilityDescriptions(Array<String>&);
	virtual Boolean getDeviceSelectTiming(CIMProperty&) const;
	virtual Uint16 getDeviceSelectTiming() const;
	virtual void setDeviceSelectTiming(Uint16&);
	virtual Boolean getClassCode(CIMProperty&) const;
	virtual Uint8 getClassCode() const;
	virtual void setClassCode(Uint8&);
	virtual Boolean getCacheLineSize(CIMProperty&) const;
	virtual Uint8 getCacheLineSize() const;
	virtual void setCacheLineSize(Uint8&);
	virtual Boolean getLatencyTimer(CIMProperty&) const;
	virtual Uint8 getLatencyTimer() const;
	virtual void setLatencyTimer(Uint8&);
	virtual Boolean getInterruptPin(CIMProperty&) const;
	virtual Uint16 getInterruptPin() const;
	virtual void setInterruptPin(Uint16&);
	virtual Boolean getExpansionROMBaseAddress(CIMProperty&) const;
	virtual Uint32 getExpansionROMBaseAddress() const;
	virtual void setExpansionROMBaseAddress(Uint32&);
	virtual Boolean getSelfTestEnabled(CIMProperty&) const;
	virtual Boolean getSelfTestEnabled() const;
	virtual void setSelfTestEnabled(Boolean&);
	virtual Boolean getBaseAddress(CIMProperty&) const;
	virtual Array<Uint32> getBaseAddress() const;
	virtual void setBaseAddress(Array<Uint32>&);
	virtual Boolean getSubsystemID(CIMProperty&) const;
	virtual Uint16 getSubsystemID() const;
	virtual void setSubsystemID(Uint16&);
	virtual Boolean getSubsystemVendorID(CIMProperty&) const;
	virtual Uint16 getSubsystemVendorID() const;
	virtual void setSubsystemVendorID(Uint16&);
	virtual Boolean getMinGrantTime(CIMProperty&) const;
	virtual Uint8 getMinGrantTime() const;
	virtual void setMinGrantTime(Uint8&);
	virtual Boolean getMaxLatency(CIMProperty&) const;
	virtual Uint8 getMaxLatency() const;
	virtual void setMaxLatency(Uint8&);
	virtual Boolean getBusNumber(CIMProperty&) const;
	virtual Uint8 getBusNumber() const;
	virtual void setBusNumber(Uint8&);
	virtual Boolean getDeviceNumber(CIMProperty&) const;
	virtual Uint8 getDeviceNumber() const;
	virtual void setDeviceNumber(Uint8&);
	virtual Boolean getFunctionNumber(CIMProperty&) const;
	virtual Uint8 getFunctionNumber() const;
	virtual void setFunctionNumber(Uint8&);
	virtual Boolean getPCIDeviceID(CIMProperty&) const;
	virtual Uint16 getPCIDeviceID() const;
	virtual void setPCIDeviceID(Uint16&);
	virtual Boolean getVendorID(CIMProperty&) const;
	virtual Uint16 getVendorID() const;
	virtual void setVendorID(Uint16&);
	virtual Boolean getRevisionID(CIMProperty&) const;
	virtual Uint8 getRevisionID() const;
	virtual void setRevisionID(Uint8&);
	virtual Boolean getBaseAddress64(CIMProperty&) const;
	virtual Array<Uint64> getBaseAddress64() const;
	virtual void setBaseAddress64(Array<Uint64>&);
	virtual Boolean getBridgeType(CIMProperty&) const;
	virtual Uint16 getBridgeType() const;
	virtual void setBridgeType(Uint16&);
	virtual Boolean getSecondaryLatencyTimer(CIMProperty&) const;
	virtual Uint8 getSecondaryLatencyTimer() const;
	virtual void setSecondaryLatencyTimer(Uint8&);
	virtual Boolean getSubordinateBusNumber(CIMProperty&) const;
	virtual Uint8 getSubordinateBusNumber() const;
	virtual void setSubordinateBusNumber(Uint8&);
	virtual Boolean getSecondayBusNumber(CIMProperty&) const;
	virtual Uint8 getSecondayBusNumber() const;
	virtual void setSecondayBusNumber(Uint8&);
	virtual Boolean getPrimaryBusNumber(CIMProperty&) const;
	virtual Uint8 getPrimaryBusNumber() const;
	virtual void setPrimaryBusNumber(Uint8&);
	virtual Boolean getSecondaryStatusRegister(CIMProperty&) const;
	virtual Uint16 getSecondaryStatusRegister() const;
	virtual void setSecondaryStatusRegister(Uint16&);
	virtual Boolean getSecondaryBusDeviceSelectTiming(CIMProperty&) const;
	virtual Uint16 getSecondaryBusDeviceSelectTiming() const;
	virtual void setSecondaryBusDeviceSelectTiming(Uint16&);
	virtual Boolean getIOLimit(CIMProperty&) const;
	virtual Uint8 getIOLimit() const;
	virtual void setIOLimit(Uint8&);
	virtual Boolean getIOBase(CIMProperty&) const;
	virtual Uint8 getIOBase() const;
	virtual void setIOBase(Uint8&);
	virtual Boolean getMemoryLimit(CIMProperty&) const;
	virtual Uint16 getMemoryLimit() const;
	virtual void setMemoryLimit(Uint16&);
	virtual Boolean getMemoryBase(CIMProperty&) const;
	virtual Uint16 getMemoryBase() const;
	virtual void setMemoryBase(Uint16&);
	virtual Boolean getPrefetchMemoryLimit(CIMProperty&) const;
	virtual Uint16 getPrefetchMemoryLimit() const;
	virtual void setPrefetchMemoryLimit(Uint16&);
	virtual Boolean getPrefetchMemoryBase(CIMProperty&) const;
	virtual Uint16 getPrefetchMemoryBase() const;
	virtual void setPrefetchMemoryBase(Uint16&);
	virtual Boolean getPrefetchLimitUpper32(CIMProperty&) const;
	virtual Uint32 getPrefetchLimitUpper32() const;
	virtual void setPrefetchLimitUpper32(Uint32&);
	virtual Boolean getPrefetchBaseUpper32(CIMProperty&) const;
	virtual Uint32 getPrefetchBaseUpper32() const;
	virtual void setPrefetchBaseUpper32(Uint32&);
	virtual Boolean getIOLimitUpper16(CIMProperty&) const;
	virtual Uint16 getIOLimitUpper16() const;
	virtual void setIOLimitUpper16(Uint16&);
	virtual Boolean getIOBaseUpper16(CIMProperty&) const;
	virtual Uint16 getIOBaseUpper16() const;
	virtual void setIOBaseUpper16(Uint16&);

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

	virtual Uint8 invokeBISTExecution();



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
	CIMDateTime _timeOfLastReset;
	Uint16 _protocolSupported;
	Uint32 _maxNumberControlled;
	String _protocolDescription;
	Uint16 _commandRegister;
	Array<Uint16> _capabilities;
	Array<String> _capabilityDescriptions;
	Uint16 _deviceSelectTiming;
	Uint8 _classCode;
	Uint8 _cacheLineSize;
	Uint8 _latencyTimer;
	Uint16 _interruptPin;
	Uint32 _expansionROMBaseAddress;
	Boolean _selfTestEnabled;
	Array<Uint32> _baseAddress;
	Uint16 _subsystemID;
	Uint16 _subsystemVendorID;
	Uint8 _minGrantTime;
	Uint8 _maxLatency;
	Uint8 _busNumber;
	Uint8 _deviceNumber;
	Uint8 _functionNumber;
	Uint16 _pCIDeviceID;
	Uint16 _vendorID;
	Uint8 _revisionID;
	Array<Uint64> _baseAddress64;
	Uint16 _bridgeType;
	Uint8 _secondaryLatencyTimer;
	Uint8 _subordinateBusNumber;
	Uint8 _secondayBusNumber;
	Uint8 _primaryBusNumber;
	Uint16 _secondaryStatusRegister;
	Uint16 _secondaryBusDeviceSelectTiming;
	Uint8 _iOLimit;
	Uint8 _iOBase;
	Uint16 _memoryLimit;
	Uint16 _memoryBase;
	Uint16 _prefetchMemoryLimit;
	Uint16 _prefetchMemoryBase;
	Uint32 _prefetchLimitUpper32;
	Uint32 _prefetchBaseUpper32;
	Uint16 _iOLimitUpper16;
	Uint16 _iOBaseUpper16;

#	include "UNIX_PCIBridgePrivate.h"


};

#endif /* UNIX_PCIBRIDGE */
