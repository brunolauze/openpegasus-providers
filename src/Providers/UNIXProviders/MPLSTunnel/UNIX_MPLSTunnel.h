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
2.19.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Network::MPLS
*/


/* **** Description *** */
/*
This class represents an MPLS traffic engineering tunnel as defined in RFC 3031.
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

			UNIX_MPLSTunnel:
				Established Boolean
				IsResilient Boolean
				Bandwidth UInt32
				ReservedBandwidth UInt32
				ActiveBandwidth UInt32
				ReoptimizationFreq UInt32
				Lockdown Boolean
				ExcludeAllAffinity UInt32
				IncludeAllAffinity UInt32
				IncludeAnyAffinity UInt32
				HoldingPriority UInt8
				SetupPriority UInt8
				IsPersistent Boolean
				IsPinned Boolean
				LocalProtectionAvailable Boolean
				IsAdaptive Boolean
				IsDynamicallyRouted Boolean
				IngressMayReroute Boolean
				IngressLSRId UInt32
				EgressLSRId UInt32
				TunnelSignalingProtocol UInt8
				TunnelManagementOwner UInt8
				TunnelInstancePriority UInt32
				TunnelRole UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_ManagedSystemElement:

			CIM_LogicalElement:

			CIM_EnabledLogicalElement:
				RequestStateChange UInt32

			UNIX_MPLSTunnel:


*/

#ifndef __UNIX_MPLSTUNNEL_H
#define __UNIX_MPLSTUNNEL_H


#include "CIM_EnabledLogicalElement.h"
#include <ConcreteJob/UNIX_ConcreteJob.h>

#include "UNIX_MPLSTunnelDeps.h"


#ifndef PROPERTY_ESTABLISHED
#define PROPERTY_ESTABLISHED \
					"Established"
#endif

#ifndef PROPERTY_IS_RESILIENT
#define PROPERTY_IS_RESILIENT \
					"IsResilient"
#endif

#ifndef PROPERTY_BANDWIDTH
#define PROPERTY_BANDWIDTH \
					"Bandwidth"
#endif

#ifndef PROPERTY_RESERVED_BANDWIDTH
#define PROPERTY_RESERVED_BANDWIDTH \
					"ReservedBandwidth"
#endif

#ifndef PROPERTY_ACTIVE_BANDWIDTH
#define PROPERTY_ACTIVE_BANDWIDTH \
					"ActiveBandwidth"
#endif

#ifndef PROPERTY_REOPTIMIZATION_FREQ
#define PROPERTY_REOPTIMIZATION_FREQ \
					"ReoptimizationFreq"
#endif

#ifndef PROPERTY_LOCKDOWN
#define PROPERTY_LOCKDOWN \
					"Lockdown"
#endif

#ifndef PROPERTY_EXCLUDE_ALL_AFFINITY
#define PROPERTY_EXCLUDE_ALL_AFFINITY \
					"ExcludeAllAffinity"
#endif

#ifndef PROPERTY_INCLUDE_ALL_AFFINITY
#define PROPERTY_INCLUDE_ALL_AFFINITY \
					"IncludeAllAffinity"
#endif

#ifndef PROPERTY_INCLUDE_ANY_AFFINITY
#define PROPERTY_INCLUDE_ANY_AFFINITY \
					"IncludeAnyAffinity"
#endif

#ifndef PROPERTY_HOLDING_PRIORITY
#define PROPERTY_HOLDING_PRIORITY \
					"HoldingPriority"
#endif

#ifndef PROPERTY_SETUP_PRIORITY
#define PROPERTY_SETUP_PRIORITY \
					"SetupPriority"
#endif

#ifndef PROPERTY_IS_PERSISTENT
#define PROPERTY_IS_PERSISTENT \
					"IsPersistent"
#endif

#ifndef PROPERTY_IS_PINNED
#define PROPERTY_IS_PINNED \
					"IsPinned"
#endif

#ifndef PROPERTY_LOCAL_PROTECTION_AVAILABLE
#define PROPERTY_LOCAL_PROTECTION_AVAILABLE \
					"LocalProtectionAvailable"
#endif

#ifndef PROPERTY_IS_ADAPTIVE
#define PROPERTY_IS_ADAPTIVE \
					"IsAdaptive"
#endif

#ifndef PROPERTY_IS_DYNAMICALLY_ROUTED
#define PROPERTY_IS_DYNAMICALLY_ROUTED \
					"IsDynamicallyRouted"
#endif

#ifndef PROPERTY_INGRESS_MAY_REROUTE
#define PROPERTY_INGRESS_MAY_REROUTE \
					"IngressMayReroute"
#endif

#ifndef PROPERTY_INGRESS_L_S_R_ID
#define PROPERTY_INGRESS_L_S_R_ID \
					"IngressLSRId"
#endif

#ifndef PROPERTY_EGRESS_L_S_R_ID
#define PROPERTY_EGRESS_L_S_R_ID \
					"EgressLSRId"
#endif

#ifndef PROPERTY_TUNNEL_SIGNALING_PROTOCOL
#define PROPERTY_TUNNEL_SIGNALING_PROTOCOL \
					"TunnelSignalingProtocol"
#endif

#ifndef PROPERTY_TUNNEL_MANAGEMENT_OWNER
#define PROPERTY_TUNNEL_MANAGEMENT_OWNER \
					"TunnelManagementOwner"
#endif

#ifndef PROPERTY_TUNNEL_INSTANCE_PRIORITY
#define PROPERTY_TUNNEL_INSTANCE_PRIORITY \
					"TunnelInstancePriority"
#endif

#ifndef PROPERTY_TUNNEL_ROLE
#define PROPERTY_TUNNEL_ROLE \
					"TunnelRole"
#endif



class UNIX_MPLSTunnel :
	public CIM_EnabledLogicalElement
{
public:

	UNIX_MPLSTunnel();
	~UNIX_MPLSTunnel();

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
	virtual Boolean getEstablished(CIMProperty&) const;
	virtual Boolean getEstablished() const;
	virtual void setEstablished(Boolean&);
	virtual Boolean getIsResilient(CIMProperty&) const;
	virtual Boolean getIsResilient() const;
	virtual void setIsResilient(Boolean&);
	virtual Boolean getBandwidth(CIMProperty&) const;
	virtual Uint32 getBandwidth() const;
	virtual void setBandwidth(Uint32&);
	virtual Boolean getReservedBandwidth(CIMProperty&) const;
	virtual Uint32 getReservedBandwidth() const;
	virtual void setReservedBandwidth(Uint32&);
	virtual Boolean getActiveBandwidth(CIMProperty&) const;
	virtual Uint32 getActiveBandwidth() const;
	virtual void setActiveBandwidth(Uint32&);
	virtual Boolean getReoptimizationFreq(CIMProperty&) const;
	virtual Uint32 getReoptimizationFreq() const;
	virtual void setReoptimizationFreq(Uint32&);
	virtual Boolean getLockdown(CIMProperty&) const;
	virtual Boolean getLockdown() const;
	virtual void setLockdown(Boolean&);
	virtual Boolean getExcludeAllAffinity(CIMProperty&) const;
	virtual Uint32 getExcludeAllAffinity() const;
	virtual void setExcludeAllAffinity(Uint32&);
	virtual Boolean getIncludeAllAffinity(CIMProperty&) const;
	virtual Uint32 getIncludeAllAffinity() const;
	virtual void setIncludeAllAffinity(Uint32&);
	virtual Boolean getIncludeAnyAffinity(CIMProperty&) const;
	virtual Uint32 getIncludeAnyAffinity() const;
	virtual void setIncludeAnyAffinity(Uint32&);
	virtual Boolean getHoldingPriority(CIMProperty&) const;
	virtual Uint8 getHoldingPriority() const;
	virtual void setHoldingPriority(Uint8&);
	virtual Boolean getSetupPriority(CIMProperty&) const;
	virtual Uint8 getSetupPriority() const;
	virtual void setSetupPriority(Uint8&);
	virtual Boolean getIsPersistent(CIMProperty&) const;
	virtual Boolean getIsPersistent() const;
	virtual void setIsPersistent(Boolean&);
	virtual Boolean getIsPinned(CIMProperty&) const;
	virtual Boolean getIsPinned() const;
	virtual void setIsPinned(Boolean&);
	virtual Boolean getLocalProtectionAvailable(CIMProperty&) const;
	virtual Boolean getLocalProtectionAvailable() const;
	virtual void setLocalProtectionAvailable(Boolean&);
	virtual Boolean getIsAdaptive(CIMProperty&) const;
	virtual Boolean getIsAdaptive() const;
	virtual void setIsAdaptive(Boolean&);
	virtual Boolean getIsDynamicallyRouted(CIMProperty&) const;
	virtual Boolean getIsDynamicallyRouted() const;
	virtual void setIsDynamicallyRouted(Boolean&);
	virtual Boolean getIngressMayReroute(CIMProperty&) const;
	virtual Boolean getIngressMayReroute() const;
	virtual void setIngressMayReroute(Boolean&);
	virtual Boolean getIngressLSRId(CIMProperty&) const;
	virtual Uint32 getIngressLSRId() const;
	virtual void setIngressLSRId(Uint32&);
	virtual Boolean getEgressLSRId(CIMProperty&) const;
	virtual Uint32 getEgressLSRId() const;
	virtual void setEgressLSRId(Uint32&);
	virtual Boolean getTunnelSignalingProtocol(CIMProperty&) const;
	virtual Uint8 getTunnelSignalingProtocol() const;
	virtual void setTunnelSignalingProtocol(Uint8&);
	virtual Boolean getTunnelManagementOwner(CIMProperty&) const;
	virtual Uint8 getTunnelManagementOwner() const;
	virtual void setTunnelManagementOwner(Uint8&);
	virtual Boolean getTunnelInstancePriority(CIMProperty&) const;
	virtual Uint32 getTunnelInstancePriority() const;
	virtual void setTunnelInstancePriority(Uint32&);
	virtual Boolean getTunnelRole(CIMProperty&) const;
	virtual Uint16 getTunnelRole() const;
	virtual void setTunnelRole(Uint16&);

	virtual Uint32 invokeRequestStateChange(
		Uint16 &inRequestedState,
		CIMInstance &inJob,
		CIMDateTime &inTimeoutPeriod
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
	Boolean _established;
	Boolean _isResilient;
	Uint32 _bandwidth;
	Uint32 _reservedBandwidth;
	Uint32 _activeBandwidth;
	Uint32 _reoptimizationFreq;
	Boolean _lockdown;
	Uint32 _excludeAllAffinity;
	Uint32 _includeAllAffinity;
	Uint32 _includeAnyAffinity;
	Uint8 _holdingPriority;
	Uint8 _setupPriority;
	Boolean _isPersistent;
	Boolean _isPinned;
	Boolean _localProtectionAvailable;
	Boolean _isAdaptive;
	Boolean _isDynamicallyRouted;
	Boolean _ingressMayReroute;
	Uint32 _ingressLSRId;
	Uint32 _egressLSRId;
	Uint8 _tunnelSignalingProtocol;
	Uint8 _tunnelManagementOwner;
	Uint32 _tunnelInstancePriority;
	Uint16 _tunnelRole;

#	include "UNIX_MPLSTunnelPrivate.h"


};

#endif /* UNIX_MPLSTUNNEL */
