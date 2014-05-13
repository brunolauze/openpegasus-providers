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
CIM_FCPort
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
Note: The use of the CIM_FibreChannelAdapter class is deprecated, consistent with the deprecation of NetworkAdapter. Instead use CIM_FCPort. 
Deprecated description: This class describes the capabilities and management aspects of a Fibre Channel Adapter.
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

			UNIX_FibreChannelAdapter:
				MaxFrameSize UInt64
				SupportedCOS UInt16
				FC4TypesSupported UInt16
				FC4VendorUniqueTypes UInt16
				CurrentFC4Types UInt16
				CurrentFC4VendorTypes UInt16
				Capabilities UInt16
				CapabilityDescriptions String
				ReceiveBufferErrors UInt64
				ReceiveEndErrors UInt64
				ResourceAllocationTimeout UInt64
				ErrorDetectTimeout UInt64
				Class1SequencesSent UInt64
				Class2SequencesSent UInt64
				Class3SequencesSent UInt64
				Class4SequencesSent UInt64
				Class2OctetsReceived UInt64
				Class2OctetsTransmitted UInt64
				Class2FramesReceived UInt64
				Class2FramesTransmitted UInt64
				Class2DiscardFrames UInt64
				Class3OctetsReceived UInt64
				Class3OctetsTransmitted UInt64
				Class3FramesReceived UInt64
				Class3FramesTransmitted UInt64
				Class3DiscardFrames UInt64
				ParityErrors UInt64
				FrameTimeouts UInt64
				BufferCreditErrors UInt64
				EndCreditErrors UInt64
				OutOfOrderFramesReceived UInt64


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

			UNIX_FibreChannelAdapter:


*/

#ifndef __UNIX_FIBRECHANNELADAPTER_H
#define __UNIX_FIBRECHANNELADAPTER_H


#include "CIM_NetworkAdapter.h"
#include <ConcreteJob/UNIX_ConcreteJob.h>

#include "UNIX_FibreChannelAdapterDeps.h"


#ifndef PROPERTY_MAX_FRAME_SIZE
#define PROPERTY_MAX_FRAME_SIZE \
					"MaxFrameSize"
#endif

#ifndef PROPERTY_SUPPORTED_C_OS
#define PROPERTY_SUPPORTED_C_OS \
					"SupportedCOS"
#endif

#ifndef PROPERTY_FC_4_TYPES_SUPPORTED
#define PROPERTY_FC_4_TYPES_SUPPORTED \
					"FC4TypesSupported"
#endif

#ifndef PROPERTY_FC_4_VENDOR_UNIQUE_TYPES
#define PROPERTY_FC_4_VENDOR_UNIQUE_TYPES \
					"FC4VendorUniqueTypes"
#endif

#ifndef PROPERTY_CURRENT_FC_4_TYPES
#define PROPERTY_CURRENT_FC_4_TYPES \
					"CurrentFC4Types"
#endif

#ifndef PROPERTY_CURRENT_FC_4_VENDOR_TYPES
#define PROPERTY_CURRENT_FC_4_VENDOR_TYPES \
					"CurrentFC4VendorTypes"
#endif

#ifndef PROPERTY_CAPABILITIES
#define PROPERTY_CAPABILITIES \
					"Capabilities"
#endif

#ifndef PROPERTY_CAPABILITY_DESCRIPTIONS
#define PROPERTY_CAPABILITY_DESCRIPTIONS \
					"CapabilityDescriptions"
#endif

#ifndef PROPERTY_RECEIVE_BUFFER_ERRORS
#define PROPERTY_RECEIVE_BUFFER_ERRORS \
					"ReceiveBufferErrors"
#endif

#ifndef PROPERTY_RECEIVE_END_ERRORS
#define PROPERTY_RECEIVE_END_ERRORS \
					"ReceiveEndErrors"
#endif

#ifndef PROPERTY_RESOURCE_ALLOCATION_TIMEOUT
#define PROPERTY_RESOURCE_ALLOCATION_TIMEOUT \
					"ResourceAllocationTimeout"
#endif

#ifndef PROPERTY_ERROR_DETECT_TIMEOUT
#define PROPERTY_ERROR_DETECT_TIMEOUT \
					"ErrorDetectTimeout"
#endif

#ifndef PROPERTY_CLASS_1_SEQUENCES_SENT
#define PROPERTY_CLASS_1_SEQUENCES_SENT \
					"Class1SequencesSent"
#endif

#ifndef PROPERTY_CLASS_2_SEQUENCES_SENT
#define PROPERTY_CLASS_2_SEQUENCES_SENT \
					"Class2SequencesSent"
#endif

#ifndef PROPERTY_CLASS_3_SEQUENCES_SENT
#define PROPERTY_CLASS_3_SEQUENCES_SENT \
					"Class3SequencesSent"
#endif

#ifndef PROPERTY_CLASS_4_SEQUENCES_SENT
#define PROPERTY_CLASS_4_SEQUENCES_SENT \
					"Class4SequencesSent"
#endif

#ifndef PROPERTY_CLASS_2_OCTETS_RECEIVED
#define PROPERTY_CLASS_2_OCTETS_RECEIVED \
					"Class2OctetsReceived"
#endif

#ifndef PROPERTY_CLASS_2_OCTETS_TRANSMITTED
#define PROPERTY_CLASS_2_OCTETS_TRANSMITTED \
					"Class2OctetsTransmitted"
#endif

#ifndef PROPERTY_CLASS_2_FRAMES_RECEIVED
#define PROPERTY_CLASS_2_FRAMES_RECEIVED \
					"Class2FramesReceived"
#endif

#ifndef PROPERTY_CLASS_2_FRAMES_TRANSMITTED
#define PROPERTY_CLASS_2_FRAMES_TRANSMITTED \
					"Class2FramesTransmitted"
#endif

#ifndef PROPERTY_CLASS_2_DISCARD_FRAMES
#define PROPERTY_CLASS_2_DISCARD_FRAMES \
					"Class2DiscardFrames"
#endif

#ifndef PROPERTY_CLASS_3_OCTETS_RECEIVED
#define PROPERTY_CLASS_3_OCTETS_RECEIVED \
					"Class3OctetsReceived"
#endif

#ifndef PROPERTY_CLASS_3_OCTETS_TRANSMITTED
#define PROPERTY_CLASS_3_OCTETS_TRANSMITTED \
					"Class3OctetsTransmitted"
#endif

#ifndef PROPERTY_CLASS_3_FRAMES_RECEIVED
#define PROPERTY_CLASS_3_FRAMES_RECEIVED \
					"Class3FramesReceived"
#endif

#ifndef PROPERTY_CLASS_3_FRAMES_TRANSMITTED
#define PROPERTY_CLASS_3_FRAMES_TRANSMITTED \
					"Class3FramesTransmitted"
#endif

#ifndef PROPERTY_CLASS_3_DISCARD_FRAMES
#define PROPERTY_CLASS_3_DISCARD_FRAMES \
					"Class3DiscardFrames"
#endif

#ifndef PROPERTY_PARITY_ERRORS
#define PROPERTY_PARITY_ERRORS \
					"ParityErrors"
#endif

#ifndef PROPERTY_FRAME_TIMEOUTS
#define PROPERTY_FRAME_TIMEOUTS \
					"FrameTimeouts"
#endif

#ifndef PROPERTY_BUFFER_CREDIT_ERRORS
#define PROPERTY_BUFFER_CREDIT_ERRORS \
					"BufferCreditErrors"
#endif

#ifndef PROPERTY_END_CREDIT_ERRORS
#define PROPERTY_END_CREDIT_ERRORS \
					"EndCreditErrors"
#endif

#ifndef PROPERTY_OUT_OF_ORDER_FRAMES_RECEIVED
#define PROPERTY_OUT_OF_ORDER_FRAMES_RECEIVED \
					"OutOfOrderFramesReceived"
#endif



class UNIX_FibreChannelAdapter :
	public CIM_NetworkAdapter
{
public:

	UNIX_FibreChannelAdapter();
	~UNIX_FibreChannelAdapter();

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
	virtual Boolean getMaxFrameSize(CIMProperty&) const;
	virtual Uint64 getMaxFrameSize() const;
	virtual void setMaxFrameSize(Uint64&);
	virtual Boolean getSupportedCOS(CIMProperty&) const;
	virtual Array<Uint16> getSupportedCOS() const;
	virtual void setSupportedCOS(Array<Uint16>&);
	virtual Boolean getFC4TypesSupported(CIMProperty&) const;
	virtual Array<Uint16> getFC4TypesSupported() const;
	virtual void setFC4TypesSupported(Array<Uint16>&);
	virtual Boolean getFC4VendorUniqueTypes(CIMProperty&) const;
	virtual Array<Uint16> getFC4VendorUniqueTypes() const;
	virtual void setFC4VendorUniqueTypes(Array<Uint16>&);
	virtual Boolean getCurrentFC4Types(CIMProperty&) const;
	virtual Array<Uint16> getCurrentFC4Types() const;
	virtual void setCurrentFC4Types(Array<Uint16>&);
	virtual Boolean getCurrentFC4VendorTypes(CIMProperty&) const;
	virtual Array<Uint16> getCurrentFC4VendorTypes() const;
	virtual void setCurrentFC4VendorTypes(Array<Uint16>&);
	virtual Boolean getCapabilities(CIMProperty&) const;
	virtual Array<Uint16> getCapabilities() const;
	virtual void setCapabilities(Array<Uint16>&);
	virtual Boolean getCapabilityDescriptions(CIMProperty&) const;
	virtual Array<String> getCapabilityDescriptions() const;
	virtual void setCapabilityDescriptions(Array<String>&);
	virtual Boolean getReceiveBufferErrors(CIMProperty&) const;
	virtual Uint64 getReceiveBufferErrors() const;
	virtual void setReceiveBufferErrors(Uint64&);
	virtual Boolean getReceiveEndErrors(CIMProperty&) const;
	virtual Uint64 getReceiveEndErrors() const;
	virtual void setReceiveEndErrors(Uint64&);
	virtual Boolean getResourceAllocationTimeout(CIMProperty&) const;
	virtual Uint64 getResourceAllocationTimeout() const;
	virtual void setResourceAllocationTimeout(Uint64&);
	virtual Boolean getErrorDetectTimeout(CIMProperty&) const;
	virtual Uint64 getErrorDetectTimeout() const;
	virtual void setErrorDetectTimeout(Uint64&);
	virtual Boolean getClass1SequencesSent(CIMProperty&) const;
	virtual Uint64 getClass1SequencesSent() const;
	virtual void setClass1SequencesSent(Uint64&);
	virtual Boolean getClass2SequencesSent(CIMProperty&) const;
	virtual Uint64 getClass2SequencesSent() const;
	virtual void setClass2SequencesSent(Uint64&);
	virtual Boolean getClass3SequencesSent(CIMProperty&) const;
	virtual Uint64 getClass3SequencesSent() const;
	virtual void setClass3SequencesSent(Uint64&);
	virtual Boolean getClass4SequencesSent(CIMProperty&) const;
	virtual Uint64 getClass4SequencesSent() const;
	virtual void setClass4SequencesSent(Uint64&);
	virtual Boolean getClass2OctetsReceived(CIMProperty&) const;
	virtual Uint64 getClass2OctetsReceived() const;
	virtual void setClass2OctetsReceived(Uint64&);
	virtual Boolean getClass2OctetsTransmitted(CIMProperty&) const;
	virtual Uint64 getClass2OctetsTransmitted() const;
	virtual void setClass2OctetsTransmitted(Uint64&);
	virtual Boolean getClass2FramesReceived(CIMProperty&) const;
	virtual Uint64 getClass2FramesReceived() const;
	virtual void setClass2FramesReceived(Uint64&);
	virtual Boolean getClass2FramesTransmitted(CIMProperty&) const;
	virtual Uint64 getClass2FramesTransmitted() const;
	virtual void setClass2FramesTransmitted(Uint64&);
	virtual Boolean getClass2DiscardFrames(CIMProperty&) const;
	virtual Uint64 getClass2DiscardFrames() const;
	virtual void setClass2DiscardFrames(Uint64&);
	virtual Boolean getClass3OctetsReceived(CIMProperty&) const;
	virtual Uint64 getClass3OctetsReceived() const;
	virtual void setClass3OctetsReceived(Uint64&);
	virtual Boolean getClass3OctetsTransmitted(CIMProperty&) const;
	virtual Uint64 getClass3OctetsTransmitted() const;
	virtual void setClass3OctetsTransmitted(Uint64&);
	virtual Boolean getClass3FramesReceived(CIMProperty&) const;
	virtual Uint64 getClass3FramesReceived() const;
	virtual void setClass3FramesReceived(Uint64&);
	virtual Boolean getClass3FramesTransmitted(CIMProperty&) const;
	virtual Uint64 getClass3FramesTransmitted() const;
	virtual void setClass3FramesTransmitted(Uint64&);
	virtual Boolean getClass3DiscardFrames(CIMProperty&) const;
	virtual Uint64 getClass3DiscardFrames() const;
	virtual void setClass3DiscardFrames(Uint64&);
	virtual Boolean getParityErrors(CIMProperty&) const;
	virtual Uint64 getParityErrors() const;
	virtual void setParityErrors(Uint64&);
	virtual Boolean getFrameTimeouts(CIMProperty&) const;
	virtual Uint64 getFrameTimeouts() const;
	virtual void setFrameTimeouts(Uint64&);
	virtual Boolean getBufferCreditErrors(CIMProperty&) const;
	virtual Uint64 getBufferCreditErrors() const;
	virtual void setBufferCreditErrors(Uint64&);
	virtual Boolean getEndCreditErrors(CIMProperty&) const;
	virtual Uint64 getEndCreditErrors() const;
	virtual void setEndCreditErrors(Uint64&);
	virtual Boolean getOutOfOrderFramesReceived(CIMProperty&) const;
	virtual Uint64 getOutOfOrderFramesReceived() const;
	virtual void setOutOfOrderFramesReceived(Uint64&);

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
	Uint64 _maxFrameSize;
	Array<Uint16> _supportedCOS;
	Array<Uint16> _fC4TypesSupported;
	Array<Uint16> _fC4VendorUniqueTypes;
	Array<Uint16> _currentFC4Types;
	Array<Uint16> _currentFC4VendorTypes;
	Array<Uint16> _capabilities;
	Array<String> _capabilityDescriptions;
	Uint64 _receiveBufferErrors;
	Uint64 _receiveEndErrors;
	Uint64 _resourceAllocationTimeout;
	Uint64 _errorDetectTimeout;
	Uint64 _class1SequencesSent;
	Uint64 _class2SequencesSent;
	Uint64 _class3SequencesSent;
	Uint64 _class4SequencesSent;
	Uint64 _class2OctetsReceived;
	Uint64 _class2OctetsTransmitted;
	Uint64 _class2FramesReceived;
	Uint64 _class2FramesTransmitted;
	Uint64 _class2DiscardFrames;
	Uint64 _class3OctetsReceived;
	Uint64 _class3OctetsTransmitted;
	Uint64 _class3FramesReceived;
	Uint64 _class3FramesTransmitted;
	Uint64 _class3DiscardFrames;
	Uint64 _parityErrors;
	Uint64 _frameTimeouts;
	Uint64 _bufferCreditErrors;
	Uint64 _endCreditErrors;
	Uint64 _outOfOrderFramesReceived;

#	include "UNIX_FibreChannelAdapterPrivate.h"


};

#endif /* UNIX_FIBRECHANNELADAPTER */
