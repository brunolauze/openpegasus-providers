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
Note: The use of the FibrePort class is deprecated because FibreChannel Adapter has been deprecated in lieu of FCPort and this class overlaps with FCPort. The new FCPort class should be used in lieu of both FibreChannelAdapter and FibrePort. 
Deprecated description: FibrePort describes the capabilities and management aspects of a Fibre Channel Port Device.
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

			CIM_LogicalPort:
				Speed UInt64
				MaxSpeed UInt64
				RequestedSpeed UInt64
				UsageRestriction UInt16
				PortType UInt16
				OtherPortType String

			UNIX_FibrePort:
				AddressIdentifier UInt32
				SupportedPortTypes UInt16
				PortTypeVersions String
				EnabledPortTypes UInt16
				EnabledVersions String
				CurrentPortType UInt16
				CurrentVersion String
				AliasAddresses UInt32
				LossOfSignalCounter UInt64
				LossOfSyncCounter UInt64
				CRCErrors UInt64
				InvalidTransmissionWords UInt64
				FramesTooShort UInt64
				FramesTooLong UInt64
				ElasticityBufferUnderruns UInt64
				ElasticityBufferOverruns UInt64
				ReceiverTransmitterTimeout UInt64
				BypassedState UInt16
				ConnectedMedia UInt16


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

			CIM_LogicalPort:

			UNIX_FibrePort:


*/

#ifndef __UNIX_FIBREPORT_H
#define __UNIX_FIBREPORT_H


#include "CIM_LogicalPort.h"
#include <ConcreteJob/UNIX_ConcreteJob.h>

#include "UNIX_FibrePortDeps.h"


#ifndef PROPERTY_ADDRESS_IDENTIFIER
#define PROPERTY_ADDRESS_IDENTIFIER \
					"AddressIdentifier"
#endif

#ifndef PROPERTY_SUPPORTED_PORT_TYPES
#define PROPERTY_SUPPORTED_PORT_TYPES \
					"SupportedPortTypes"
#endif

#ifndef PROPERTY_PORT_TYPE_VERSIONS
#define PROPERTY_PORT_TYPE_VERSIONS \
					"PortTypeVersions"
#endif

#ifndef PROPERTY_ENABLED_PORT_TYPES
#define PROPERTY_ENABLED_PORT_TYPES \
					"EnabledPortTypes"
#endif

#ifndef PROPERTY_ENABLED_VERSIONS
#define PROPERTY_ENABLED_VERSIONS \
					"EnabledVersions"
#endif

#ifndef PROPERTY_CURRENT_PORT_TYPE
#define PROPERTY_CURRENT_PORT_TYPE \
					"CurrentPortType"
#endif

#ifndef PROPERTY_CURRENT_VERSION
#define PROPERTY_CURRENT_VERSION \
					"CurrentVersion"
#endif

#ifndef PROPERTY_ALIAS_ADDRESSES
#define PROPERTY_ALIAS_ADDRESSES \
					"AliasAddresses"
#endif

#ifndef PROPERTY_LOSS_OF_SIGNAL_COUNTER
#define PROPERTY_LOSS_OF_SIGNAL_COUNTER \
					"LossOfSignalCounter"
#endif

#ifndef PROPERTY_LOSS_OF_SYNC_COUNTER
#define PROPERTY_LOSS_OF_SYNC_COUNTER \
					"LossOfSyncCounter"
#endif

#ifndef PROPERTY_C_R_C_ERRORS
#define PROPERTY_C_R_C_ERRORS \
					"CRCErrors"
#endif

#ifndef PROPERTY_INVALID_TRANSMISSION_WORDS
#define PROPERTY_INVALID_TRANSMISSION_WORDS \
					"InvalidTransmissionWords"
#endif

#ifndef PROPERTY_FRAMES_TOO_SHORT
#define PROPERTY_FRAMES_TOO_SHORT \
					"FramesTooShort"
#endif

#ifndef PROPERTY_FRAMES_TOO_LONG
#define PROPERTY_FRAMES_TOO_LONG \
					"FramesTooLong"
#endif

#ifndef PROPERTY_ELASTICITY_BUFFER_UNDERRUNS
#define PROPERTY_ELASTICITY_BUFFER_UNDERRUNS \
					"ElasticityBufferUnderruns"
#endif

#ifndef PROPERTY_ELASTICITY_BUFFER_OVERRUNS
#define PROPERTY_ELASTICITY_BUFFER_OVERRUNS \
					"ElasticityBufferOverruns"
#endif

#ifndef PROPERTY_RECEIVER_TRANSMITTER_TIMEOUT
#define PROPERTY_RECEIVER_TRANSMITTER_TIMEOUT \
					"ReceiverTransmitterTimeout"
#endif

#ifndef PROPERTY_BYPASSED_STATE
#define PROPERTY_BYPASSED_STATE \
					"BypassedState"
#endif

#ifndef PROPERTY_CONNECTED_MEDIA
#define PROPERTY_CONNECTED_MEDIA \
					"ConnectedMedia"
#endif



class UNIX_FibrePort :
	public CIM_LogicalPort
{
public:

	UNIX_FibrePort();
	~UNIX_FibrePort();

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
	virtual Boolean getSpeed(CIMProperty&) const;
	virtual Uint64 getSpeed() const;
	virtual void setSpeed(Uint64&);
	virtual Boolean getMaxSpeed(CIMProperty&) const;
	virtual Uint64 getMaxSpeed() const;
	virtual void setMaxSpeed(Uint64&);
	virtual Boolean getRequestedSpeed(CIMProperty&) const;
	virtual Uint64 getRequestedSpeed() const;
	virtual void setRequestedSpeed(Uint64&);
	virtual Boolean getUsageRestriction(CIMProperty&) const;
	virtual Uint16 getUsageRestriction() const;
	virtual void setUsageRestriction(Uint16&);
	virtual Boolean getPortType(CIMProperty&) const;
	virtual Uint16 getPortType() const;
	virtual void setPortType(Uint16&);
	virtual Boolean getOtherPortType(CIMProperty&) const;
	virtual String getOtherPortType() const;
	virtual void setOtherPortType(String&);
	virtual Boolean getAddressIdentifier(CIMProperty&) const;
	virtual Uint32 getAddressIdentifier() const;
	virtual void setAddressIdentifier(Uint32&);
	virtual Boolean getSupportedPortTypes(CIMProperty&) const;
	virtual Array<Uint16> getSupportedPortTypes() const;
	virtual void setSupportedPortTypes(Array<Uint16>&);
	virtual Boolean getPortTypeVersions(CIMProperty&) const;
	virtual Array<String> getPortTypeVersions() const;
	virtual void setPortTypeVersions(Array<String>&);
	virtual Boolean getEnabledPortTypes(CIMProperty&) const;
	virtual Array<Uint16> getEnabledPortTypes() const;
	virtual void setEnabledPortTypes(Array<Uint16>&);
	virtual Boolean getEnabledVersions(CIMProperty&) const;
	virtual Array<String> getEnabledVersions() const;
	virtual void setEnabledVersions(Array<String>&);
	virtual Boolean getCurrentPortType(CIMProperty&) const;
	virtual Uint16 getCurrentPortType() const;
	virtual void setCurrentPortType(Uint16&);
	virtual Boolean getCurrentVersion(CIMProperty&) const;
	virtual String getCurrentVersion() const;
	virtual void setCurrentVersion(String&);
	virtual Boolean getAliasAddresses(CIMProperty&) const;
	virtual Array<Uint32> getAliasAddresses() const;
	virtual void setAliasAddresses(Array<Uint32>&);
	virtual Boolean getLossOfSignalCounter(CIMProperty&) const;
	virtual Uint64 getLossOfSignalCounter() const;
	virtual void setLossOfSignalCounter(Uint64&);
	virtual Boolean getLossOfSyncCounter(CIMProperty&) const;
	virtual Uint64 getLossOfSyncCounter() const;
	virtual void setLossOfSyncCounter(Uint64&);
	virtual Boolean getCRCErrors(CIMProperty&) const;
	virtual Uint64 getCRCErrors() const;
	virtual void setCRCErrors(Uint64&);
	virtual Boolean getInvalidTransmissionWords(CIMProperty&) const;
	virtual Uint64 getInvalidTransmissionWords() const;
	virtual void setInvalidTransmissionWords(Uint64&);
	virtual Boolean getFramesTooShort(CIMProperty&) const;
	virtual Uint64 getFramesTooShort() const;
	virtual void setFramesTooShort(Uint64&);
	virtual Boolean getFramesTooLong(CIMProperty&) const;
	virtual Uint64 getFramesTooLong() const;
	virtual void setFramesTooLong(Uint64&);
	virtual Boolean getElasticityBufferUnderruns(CIMProperty&) const;
	virtual Uint64 getElasticityBufferUnderruns() const;
	virtual void setElasticityBufferUnderruns(Uint64&);
	virtual Boolean getElasticityBufferOverruns(CIMProperty&) const;
	virtual Uint64 getElasticityBufferOverruns() const;
	virtual void setElasticityBufferOverruns(Uint64&);
	virtual Boolean getReceiverTransmitterTimeout(CIMProperty&) const;
	virtual Uint64 getReceiverTransmitterTimeout() const;
	virtual void setReceiverTransmitterTimeout(Uint64&);
	virtual Boolean getBypassedState(CIMProperty&) const;
	virtual Uint16 getBypassedState() const;
	virtual void setBypassedState(Uint16&);
	virtual Boolean getConnectedMedia(CIMProperty&) const;
	virtual Uint16 getConnectedMedia() const;
	virtual void setConnectedMedia(Uint16&);

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
	Uint64 _speed;
	Uint64 _maxSpeed;
	Uint64 _requestedSpeed;
	Uint16 _usageRestriction;
	Uint16 _portType;
	String _otherPortType;
	Uint32 _addressIdentifier;
	Array<Uint16> _supportedPortTypes;
	Array<String> _portTypeVersions;
	Array<Uint16> _enabledPortTypes;
	Array<String> _enabledVersions;
	Uint16 _currentPortType;
	String _currentVersion;
	Array<Uint32> _aliasAddresses;
	Uint64 _lossOfSignalCounter;
	Uint64 _lossOfSyncCounter;
	Uint64 _cRCErrors;
	Uint64 _invalidTransmissionWords;
	Uint64 _framesTooShort;
	Uint64 _framesTooLong;
	Uint64 _elasticityBufferUnderruns;
	Uint64 _elasticityBufferOverruns;
	Uint64 _receiverTransmitterTimeout;
	Uint16 _bypassedState;
	Uint16 _connectedMedia;

#	include "UNIX_FibrePortPrivate.h"


};

#endif /* UNIX_FIBREPORT */
