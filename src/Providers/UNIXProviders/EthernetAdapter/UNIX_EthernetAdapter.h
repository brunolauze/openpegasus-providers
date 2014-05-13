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
CIM_EthernetPort
*/


/* **** Version *** */
/*
2.10.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::NetworkAdapter
*/


/* **** Description *** */
/*
Note: The use of the CIM_EthernetAdapter class has been deprecated, consistent with NetworkAdapter. Instead use the CIM_EthernetPort class. 
Deprecated description: This class describes the capabilities and management aspects of an EthernetAdapter.
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

			CIM_NetworkAdapter:
				PermanentAddress String
				NetworkAddresses String
				Speed UInt64
				MaxSpeed UInt64
				FullDuplex Boolean
				AutoSense Boolean
				OctetsTransmitted UInt64
				OctetsReceived UInt64

			UNIX_EthernetAdapter:
				MaxDataSize UInt32
				Capabilities UInt16
				CapabilityDescriptions String
				EnabledCapabilities UInt16
				SymbolErrors UInt32
				TotalPacketsTransmitted UInt64
				TotalPacketsReceived UInt64
				AlignmentErrors UInt32
				FCSErrors UInt32
				SingleCollisionFrames UInt32
				MultipleCollisionFrames UInt32
				SQETestErrors UInt32
				DeferredTransmissions UInt32
				LateCollisions UInt32
				ExcessiveCollisions UInt32
				InternalMACTransmitErrors UInt32
				InternalMACReceiveErrors UInt32
				CarrierSenseErrors UInt32
				FrameTooLongs UInt32


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

			CIM_NetworkAdapter:

			UNIX_EthernetAdapter:


*/

#ifndef __UNIX_ETHERNETADAPTER_H
#define __UNIX_ETHERNETADAPTER_H


#include "CIM_NetworkAdapter.h"
#include <ConcreteJob/UNIX_ConcreteJob.h>

#include "UNIX_EthernetAdapterDeps.h"


#ifndef PROPERTY_MAX_DATA_SIZE
#define PROPERTY_MAX_DATA_SIZE \
					"MaxDataSize"
#endif

#ifndef PROPERTY_CAPABILITIES
#define PROPERTY_CAPABILITIES \
					"Capabilities"
#endif

#ifndef PROPERTY_CAPABILITY_DESCRIPTIONS
#define PROPERTY_CAPABILITY_DESCRIPTIONS \
					"CapabilityDescriptions"
#endif

#ifndef PROPERTY_ENABLED_CAPABILITIES
#define PROPERTY_ENABLED_CAPABILITIES \
					"EnabledCapabilities"
#endif

#ifndef PROPERTY_SYMBOL_ERRORS
#define PROPERTY_SYMBOL_ERRORS \
					"SymbolErrors"
#endif

#ifndef PROPERTY_TOTAL_PACKETS_TRANSMITTED
#define PROPERTY_TOTAL_PACKETS_TRANSMITTED \
					"TotalPacketsTransmitted"
#endif

#ifndef PROPERTY_TOTAL_PACKETS_RECEIVED
#define PROPERTY_TOTAL_PACKETS_RECEIVED \
					"TotalPacketsReceived"
#endif

#ifndef PROPERTY_ALIGNMENT_ERRORS
#define PROPERTY_ALIGNMENT_ERRORS \
					"AlignmentErrors"
#endif

#ifndef PROPERTY_FCS_ERRORS
#define PROPERTY_FCS_ERRORS \
					"FCSErrors"
#endif

#ifndef PROPERTY_SINGLE_COLLISION_FRAMES
#define PROPERTY_SINGLE_COLLISION_FRAMES \
					"SingleCollisionFrames"
#endif

#ifndef PROPERTY_MULTIPLE_COLLISION_FRAMES
#define PROPERTY_MULTIPLE_COLLISION_FRAMES \
					"MultipleCollisionFrames"
#endif

#ifndef PROPERTY_S_Q_E_TEST_ERRORS
#define PROPERTY_S_Q_E_TEST_ERRORS \
					"SQETestErrors"
#endif

#ifndef PROPERTY_DEFERRED_TRANSMISSIONS
#define PROPERTY_DEFERRED_TRANSMISSIONS \
					"DeferredTransmissions"
#endif

#ifndef PROPERTY_LATE_COLLISIONS
#define PROPERTY_LATE_COLLISIONS \
					"LateCollisions"
#endif

#ifndef PROPERTY_EXCESSIVE_COLLISIONS
#define PROPERTY_EXCESSIVE_COLLISIONS \
					"ExcessiveCollisions"
#endif

#ifndef PROPERTY_INTERNAL_M_A_C_TRANSMIT_ERRORS
#define PROPERTY_INTERNAL_M_A_C_TRANSMIT_ERRORS \
					"InternalMACTransmitErrors"
#endif

#ifndef PROPERTY_INTERNAL_M_A_C_RECEIVE_ERRORS
#define PROPERTY_INTERNAL_M_A_C_RECEIVE_ERRORS \
					"InternalMACReceiveErrors"
#endif

#ifndef PROPERTY_CARRIER_SENSE_ERRORS
#define PROPERTY_CARRIER_SENSE_ERRORS \
					"CarrierSenseErrors"
#endif

#ifndef PROPERTY_FRAME_TOO_LONGS
#define PROPERTY_FRAME_TOO_LONGS \
					"FrameTooLongs"
#endif



class UNIX_EthernetAdapter :
	public CIM_NetworkAdapter
{
public:

	UNIX_EthernetAdapter();
	~UNIX_EthernetAdapter();

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
	virtual Boolean getPermanentAddress(CIMProperty&) const;
	virtual String getPermanentAddress() const;
	virtual void setPermanentAddress(String&);
	virtual Boolean getNetworkAddresses(CIMProperty&) const;
	virtual Array<String> getNetworkAddresses() const;
	virtual void setNetworkAddresses(Array<String>&);
	virtual Boolean getSpeed(CIMProperty&) const;
	virtual Uint64 getSpeed() const;
	virtual void setSpeed(Uint64&);
	virtual Boolean getMaxSpeed(CIMProperty&) const;
	virtual Uint64 getMaxSpeed() const;
	virtual void setMaxSpeed(Uint64&);
	virtual Boolean getFullDuplex(CIMProperty&) const;
	virtual Boolean getFullDuplex() const;
	virtual void setFullDuplex(Boolean&);
	virtual Boolean getAutoSense(CIMProperty&) const;
	virtual Boolean getAutoSense() const;
	virtual void setAutoSense(Boolean&);
	virtual Boolean getOctetsTransmitted(CIMProperty&) const;
	virtual Uint64 getOctetsTransmitted() const;
	virtual void setOctetsTransmitted(Uint64&);
	virtual Boolean getOctetsReceived(CIMProperty&) const;
	virtual Uint64 getOctetsReceived() const;
	virtual void setOctetsReceived(Uint64&);
	virtual Boolean getMaxDataSize(CIMProperty&) const;
	virtual Uint32 getMaxDataSize() const;
	virtual void setMaxDataSize(Uint32&);
	virtual Boolean getCapabilities(CIMProperty&) const;
	virtual Array<Uint16> getCapabilities() const;
	virtual void setCapabilities(Array<Uint16>&);
	virtual Boolean getCapabilityDescriptions(CIMProperty&) const;
	virtual Array<String> getCapabilityDescriptions() const;
	virtual void setCapabilityDescriptions(Array<String>&);
	virtual Boolean getEnabledCapabilities(CIMProperty&) const;
	virtual Array<Uint16> getEnabledCapabilities() const;
	virtual void setEnabledCapabilities(Array<Uint16>&);
	virtual Boolean getSymbolErrors(CIMProperty&) const;
	virtual Uint32 getSymbolErrors() const;
	virtual void setSymbolErrors(Uint32&);
	virtual Boolean getTotalPacketsTransmitted(CIMProperty&) const;
	virtual Uint64 getTotalPacketsTransmitted() const;
	virtual void setTotalPacketsTransmitted(Uint64&);
	virtual Boolean getTotalPacketsReceived(CIMProperty&) const;
	virtual Uint64 getTotalPacketsReceived() const;
	virtual void setTotalPacketsReceived(Uint64&);
	virtual Boolean getAlignmentErrors(CIMProperty&) const;
	virtual Uint32 getAlignmentErrors() const;
	virtual void setAlignmentErrors(Uint32&);
	virtual Boolean getFCSErrors(CIMProperty&) const;
	virtual Uint32 getFCSErrors() const;
	virtual void setFCSErrors(Uint32&);
	virtual Boolean getSingleCollisionFrames(CIMProperty&) const;
	virtual Uint32 getSingleCollisionFrames() const;
	virtual void setSingleCollisionFrames(Uint32&);
	virtual Boolean getMultipleCollisionFrames(CIMProperty&) const;
	virtual Uint32 getMultipleCollisionFrames() const;
	virtual void setMultipleCollisionFrames(Uint32&);
	virtual Boolean getSQETestErrors(CIMProperty&) const;
	virtual Uint32 getSQETestErrors() const;
	virtual void setSQETestErrors(Uint32&);
	virtual Boolean getDeferredTransmissions(CIMProperty&) const;
	virtual Uint32 getDeferredTransmissions() const;
	virtual void setDeferredTransmissions(Uint32&);
	virtual Boolean getLateCollisions(CIMProperty&) const;
	virtual Uint32 getLateCollisions() const;
	virtual void setLateCollisions(Uint32&);
	virtual Boolean getExcessiveCollisions(CIMProperty&) const;
	virtual Uint32 getExcessiveCollisions() const;
	virtual void setExcessiveCollisions(Uint32&);
	virtual Boolean getInternalMACTransmitErrors(CIMProperty&) const;
	virtual Uint32 getInternalMACTransmitErrors() const;
	virtual void setInternalMACTransmitErrors(Uint32&);
	virtual Boolean getInternalMACReceiveErrors(CIMProperty&) const;
	virtual Uint32 getInternalMACReceiveErrors() const;
	virtual void setInternalMACReceiveErrors(Uint32&);
	virtual Boolean getCarrierSenseErrors(CIMProperty&) const;
	virtual Uint32 getCarrierSenseErrors() const;
	virtual void setCarrierSenseErrors(Uint32&);
	virtual Boolean getFrameTooLongs(CIMProperty&) const;
	virtual Uint32 getFrameTooLongs() const;
	virtual void setFrameTooLongs(Uint32&);

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
	String _permanentAddress;
	Array<String> _networkAddresses;
	Uint64 _speed;
	Uint64 _maxSpeed;
	Boolean _fullDuplex;
	Boolean _autoSense;
	Uint64 _octetsTransmitted;
	Uint64 _octetsReceived;
	Uint32 _maxDataSize;
	Array<Uint16> _capabilities;
	Array<String> _capabilityDescriptions;
	Array<Uint16> _enabledCapabilities;
	Uint32 _symbolErrors;
	Uint64 _totalPacketsTransmitted;
	Uint64 _totalPacketsReceived;
	Uint32 _alignmentErrors;
	Uint32 _fCSErrors;
	Uint32 _singleCollisionFrames;
	Uint32 _multipleCollisionFrames;
	Uint32 _sQETestErrors;
	Uint32 _deferredTransmissions;
	Uint32 _lateCollisions;
	Uint32 _excessiveCollisions;
	Uint32 _internalMACTransmitErrors;
	Uint32 _internalMACReceiveErrors;
	Uint32 _carrierSenseErrors;
	Uint32 _frameTooLongs;

#	include "UNIX_EthernetAdapterPrivate.h"


};

#endif /* UNIX_ETHERNETADAPTER */
