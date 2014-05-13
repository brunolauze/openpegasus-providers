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
2.31.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::FC
*/


/* **** Description *** */
/*
Capabilities and management of a Fibre Channel Port Device.
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

			UNIX_NetworkPort:
				OtherNetworkPortType String
				PortNumber UInt16
				LinkTechnology UInt16
				OtherLinkTechnology String
				PermanentAddress String
				NetworkAddresses String
				FullDuplex Boolean
				AutoSense Boolean
				SupportedMaximumTransmissionUnit UInt64
				ActiveMaximumTransmissionUnit UInt64

			UNIX_FCPort:
				SupportedCOS UInt16
				ActiveCOS UInt16
				SupportedFC4Types UInt16
				ActiveFC4Types UInt16
				DetailedPortState UInt16
				DomainPortNumber UInt16
				LogicalModulePortNumber UInt16
				PortAvailability UInt16
				PortDiscriminator UInt16


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

			UNIX_NetworkPort:

			UNIX_FCPort:
				Decommission UInt32
				Recommission UInt32


*/

#ifndef __UNIX_FCPORT_H
#define __UNIX_FCPORT_H


#include <NetworkPort/UNIX_NetworkPort.h>
#include <ConcreteJob/UNIX_ConcreteJob.h>

#include "UNIX_FCPortDeps.h"


#ifndef PROPERTY_SUPPORTED_C_OS
#define PROPERTY_SUPPORTED_C_OS \
					"SupportedCOS"
#endif

#ifndef PROPERTY_ACTIVE_C_OS
#define PROPERTY_ACTIVE_C_OS \
					"ActiveCOS"
#endif

#ifndef PROPERTY_SUPPORTED_FC_4_TYPES
#define PROPERTY_SUPPORTED_FC_4_TYPES \
					"SupportedFC4Types"
#endif

#ifndef PROPERTY_ACTIVE_FC_4_TYPES
#define PROPERTY_ACTIVE_FC_4_TYPES \
					"ActiveFC4Types"
#endif

#ifndef PROPERTY_DETAILED_PORT_STATE
#define PROPERTY_DETAILED_PORT_STATE \
					"DetailedPortState"
#endif

#ifndef PROPERTY_DOMAIN_PORT_NUMBER
#define PROPERTY_DOMAIN_PORT_NUMBER \
					"DomainPortNumber"
#endif

#ifndef PROPERTY_LOGICAL_MODULE_PORT_NUMBER
#define PROPERTY_LOGICAL_MODULE_PORT_NUMBER \
					"LogicalModulePortNumber"
#endif

#ifndef PROPERTY_PORT_AVAILABILITY
#define PROPERTY_PORT_AVAILABILITY \
					"PortAvailability"
#endif

#ifndef PROPERTY_PORT_DISCRIMINATOR
#define PROPERTY_PORT_DISCRIMINATOR \
					"PortDiscriminator"
#endif



class UNIX_FCPort :
	public UNIX_NetworkPort
{
public:

	UNIX_FCPort();
	~UNIX_FCPort();

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
	virtual Boolean getOtherNetworkPortType(CIMProperty&) const;
	virtual String getOtherNetworkPortType() const;
	virtual void setOtherNetworkPortType(String&);
	virtual Boolean getPortNumber(CIMProperty&) const;
	virtual Uint16 getPortNumber() const;
	virtual void setPortNumber(Uint16&);
	virtual Boolean getLinkTechnology(CIMProperty&) const;
	virtual Uint16 getLinkTechnology() const;
	virtual void setLinkTechnology(Uint16&);
	virtual Boolean getOtherLinkTechnology(CIMProperty&) const;
	virtual String getOtherLinkTechnology() const;
	virtual void setOtherLinkTechnology(String&);
	virtual Boolean getPermanentAddress(CIMProperty&) const;
	virtual String getPermanentAddress() const;
	virtual void setPermanentAddress(String&);
	virtual Boolean getNetworkAddresses(CIMProperty&) const;
	virtual Array<String> getNetworkAddresses() const;
	virtual void setNetworkAddresses(Array<String>&);
	virtual Boolean getFullDuplex(CIMProperty&) const;
	virtual Boolean getFullDuplex() const;
	virtual void setFullDuplex(Boolean&);
	virtual Boolean getAutoSense(CIMProperty&) const;
	virtual Boolean getAutoSense() const;
	virtual void setAutoSense(Boolean&);
	virtual Boolean getSupportedMaximumTransmissionUnit(CIMProperty&) const;
	virtual Uint64 getSupportedMaximumTransmissionUnit() const;
	virtual void setSupportedMaximumTransmissionUnit(Uint64&);
	virtual Boolean getActiveMaximumTransmissionUnit(CIMProperty&) const;
	virtual Uint64 getActiveMaximumTransmissionUnit() const;
	virtual void setActiveMaximumTransmissionUnit(Uint64&);
	virtual Boolean getSupportedCOS(CIMProperty&) const;
	virtual Array<Uint16> getSupportedCOS() const;
	virtual void setSupportedCOS(Array<Uint16>&);
	virtual Boolean getActiveCOS(CIMProperty&) const;
	virtual Array<Uint16> getActiveCOS() const;
	virtual void setActiveCOS(Array<Uint16>&);
	virtual Boolean getSupportedFC4Types(CIMProperty&) const;
	virtual Array<Uint16> getSupportedFC4Types() const;
	virtual void setSupportedFC4Types(Array<Uint16>&);
	virtual Boolean getActiveFC4Types(CIMProperty&) const;
	virtual Array<Uint16> getActiveFC4Types() const;
	virtual void setActiveFC4Types(Array<Uint16>&);
	virtual Boolean getDetailedPortState(CIMProperty&) const;
	virtual Uint16 getDetailedPortState() const;
	virtual void setDetailedPortState(Uint16&);
	virtual Boolean getDomainPortNumber(CIMProperty&) const;
	virtual Uint16 getDomainPortNumber() const;
	virtual void setDomainPortNumber(Uint16&);
	virtual Boolean getLogicalModulePortNumber(CIMProperty&) const;
	virtual Uint16 getLogicalModulePortNumber() const;
	virtual void setLogicalModulePortNumber(Uint16&);
	virtual Boolean getPortAvailability(CIMProperty&) const;
	virtual Uint16 getPortAvailability() const;
	virtual void setPortAvailability(Uint16&);
	virtual Boolean getPortDiscriminator(CIMProperty&) const;
	virtual Array<Uint16> getPortDiscriminator() const;
	virtual void setPortDiscriminator(Array<Uint16>&);

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

	virtual Uint32 invokeDecommission(
		Boolean &inForce,
		Array<String> &inMessages
	);

	virtual Uint32 invokeRecommission(
		Array<String> &inMessages
	);



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
	String _otherNetworkPortType;
	Uint16 _portNumber;
	Uint16 _linkTechnology;
	String _otherLinkTechnology;
	String _permanentAddress;
	Array<String> _networkAddresses;
	Boolean _fullDuplex;
	Boolean _autoSense;
	Uint64 _supportedMaximumTransmissionUnit;
	Uint64 _activeMaximumTransmissionUnit;
	Array<Uint16> _supportedCOS;
	Array<Uint16> _activeCOS;
	Array<Uint16> _supportedFC4Types;
	Array<Uint16> _activeFC4Types;
	Uint16 _detailedPortState;
	Uint16 _domainPortNumber;
	Uint16 _logicalModulePortNumber;
	Uint16 _portAvailability;
	Array<Uint16> _portDiscriminator;

#	include "UNIX_FCPortPrivate.h"


};

#endif /* UNIX_FCPORT */
