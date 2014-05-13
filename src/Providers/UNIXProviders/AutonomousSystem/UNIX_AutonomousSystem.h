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
CIM_AutonomousSystem.ExtASNumber
*/


/* **** Version *** */
/*
2.40.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Network::Systems
*/


/* **** Description *** */
/*
An Autonomous System (AS) is a fundamental concept in networking. An AS provides a structured view of routing by segregating the system that is using routing (e.g., the Internet, or an extranet) into a set of separately administered domains that each have their own independent routing policies. These domains are called autonomous systems. 

The classic definition of an AS, from RFC1771, is '...a set of routers under a single technical administration, using an interior gateway protocol and common metrics to route packets within the AS, and using an exterior gateway protocol to route packets to other ASs'. The RFC continues: 'Since this classic definition was developed, it has become common for a single AS to use several interior gateway protocols and sometimes several sets of metrics within an AS. The use of the term Autonomous System here stresses the fact that, even when multiple IGPs and metrics are used, the administration of an AS appears to other ASs to have a single coherent interior routing plan and presents a consistent picture of what destinations are reachable through it.'
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

			CIM_System:
				CreationClassName String
				NameFormat String
				PrimaryOwnerName String
				PrimaryOwnerContact String
				Roles String
				OtherIdentifyingInfo String
				IdentifyingDescriptions String

			CIM_AdminDomain:

			UNIX_AutonomousSystem:
				ASNumber UInt16
				IsSingleHomed Boolean
				IsTransit Boolean
				RequireIGPSync Boolean
				RoutingUpdateSource UInt16
				AggregationType UInt16
				ExtASNumber String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_ManagedSystemElement:

			CIM_LogicalElement:

			CIM_EnabledLogicalElement:
				RequestStateChange UInt32

			CIM_AllocatedLogicalElement:

			CIM_System:

			CIM_AdminDomain:

			UNIX_AutonomousSystem:


*/

#ifndef __UNIX_AUTONOMOUSSYSTEM_H
#define __UNIX_AUTONOMOUSSYSTEM_H


#include "CIM_AdminDomain.h"
#include <ConcreteJob/UNIX_ConcreteJob.h>

#include "UNIX_AutonomousSystemDeps.h"


#ifndef PROPERTY_A_S_NUMBER
#define PROPERTY_A_S_NUMBER \
					"ASNumber"
#endif

#ifndef PROPERTY_IS_SINGLE_HOMED
#define PROPERTY_IS_SINGLE_HOMED \
					"IsSingleHomed"
#endif

#ifndef PROPERTY_IS_TRANSIT
#define PROPERTY_IS_TRANSIT \
					"IsTransit"
#endif

#ifndef PROPERTY_REQUIRE_I_G_P_SYNC
#define PROPERTY_REQUIRE_I_G_P_SYNC \
					"RequireIGPSync"
#endif

#ifndef PROPERTY_ROUTING_UPDATE_SOURCE
#define PROPERTY_ROUTING_UPDATE_SOURCE \
					"RoutingUpdateSource"
#endif

#ifndef PROPERTY_AGGREGATION_TYPE
#define PROPERTY_AGGREGATION_TYPE \
					"AggregationType"
#endif

#ifndef PROPERTY_EXT_A_S_NUMBER
#define PROPERTY_EXT_A_S_NUMBER \
					"ExtASNumber"
#endif



class UNIX_AutonomousSystem :
	public CIM_AdminDomain
{
public:

	UNIX_AutonomousSystem();
	~UNIX_AutonomousSystem();

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
	virtual Boolean getCreationClassName(CIMProperty&) const;
	virtual String getCreationClassName() const;
	virtual void setCreationClassName(String&);
	virtual Boolean getNameFormat(CIMProperty&) const;
	virtual String getNameFormat() const;
	virtual void setNameFormat(String&);
	virtual Boolean getPrimaryOwnerName(CIMProperty&) const;
	virtual String getPrimaryOwnerName() const;
	virtual void setPrimaryOwnerName(String&);
	virtual Boolean getPrimaryOwnerContact(CIMProperty&) const;
	virtual String getPrimaryOwnerContact() const;
	virtual void setPrimaryOwnerContact(String&);
	virtual Boolean getRoles(CIMProperty&) const;
	virtual Array<String> getRoles() const;
	virtual void setRoles(Array<String>&);
	virtual Boolean getOtherIdentifyingInfo(CIMProperty&) const;
	virtual Array<String> getOtherIdentifyingInfo() const;
	virtual void setOtherIdentifyingInfo(Array<String>&);
	virtual Boolean getIdentifyingDescriptions(CIMProperty&) const;
	virtual Array<String> getIdentifyingDescriptions() const;
	virtual void setIdentifyingDescriptions(Array<String>&);
	virtual Boolean getASNumber(CIMProperty&) const;
	virtual Uint16 getASNumber() const;
	virtual void setASNumber(Uint16&);
	virtual Boolean getIsSingleHomed(CIMProperty&) const;
	virtual Boolean getIsSingleHomed() const;
	virtual void setIsSingleHomed(Boolean&);
	virtual Boolean getIsTransit(CIMProperty&) const;
	virtual Boolean getIsTransit() const;
	virtual void setIsTransit(Boolean&);
	virtual Boolean getRequireIGPSync(CIMProperty&) const;
	virtual Boolean getRequireIGPSync() const;
	virtual void setRequireIGPSync(Boolean&);
	virtual Boolean getRoutingUpdateSource(CIMProperty&) const;
	virtual Uint16 getRoutingUpdateSource() const;
	virtual void setRoutingUpdateSource(Uint16&);
	virtual Boolean getAggregationType(CIMProperty&) const;
	virtual Uint16 getAggregationType() const;
	virtual void setAggregationType(Uint16&);
	virtual Boolean getExtASNumber(CIMProperty&) const;
	virtual String getExtASNumber() const;
	virtual void setExtASNumber(String&);

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
	String _allocationState;
	String _creationClassName;
	String _nameFormat;
	String _primaryOwnerName;
	String _primaryOwnerContact;
	Array<String> _roles;
	Array<String> _otherIdentifyingInfo;
	Array<String> _identifyingDescriptions;
	Uint16 _aSNumber;
	Boolean _isSingleHomed;
	Boolean _isTransit;
	Boolean _requireIGPSync;
	Uint16 _routingUpdateSource;
	Uint16 _aggregationType;
	String _extASNumber;

#	include "UNIX_AutonomousSystemPrivate.h"


};

#endif /* UNIX_AUTONOMOUSSYSTEM */
