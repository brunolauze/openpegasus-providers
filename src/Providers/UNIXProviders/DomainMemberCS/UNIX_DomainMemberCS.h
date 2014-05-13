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


/* **** Association *** */
/*
TRUE
*/


/* **** Experimental *** */
/*
TRUE
*/


/* **** Aggregation *** */
/*
TRUE
*/


/* **** Composition *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.17.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Core::CoreElements
*/


/* **** Description *** */
/*
AdminDomain instances can represent the aggregation of computer systems for the purposes of administration of the set as a unit. For example, a use of this class is to collect computer systems that together are a high performance cluster. DomainMemberCS reports the membership in the domain and the status and states of each member. The status of a member from the point of view of a domain can be different than the status as reported for the member itself.
*/


/*
			 *** Properties ***

			CIM_AbstractComponent:
				GroupComponent Reference
				PartComponent Reference

			CIM_Component:

			CIM_SystemComponent:

			UNIX_DomainMemberCS:
				PrimaryStatus UInt16
				DetailedStatus UInt16
				OperatingStatus UInt16
				CommunicationStatus UInt16
				MemberRole UInt16
				MemberState UInt16


*/


/*
			 *** Methods ***

			CIM_AbstractComponent:

			CIM_Component:

			CIM_SystemComponent:

			UNIX_DomainMemberCS:


*/

#ifndef __UNIX_DOMAINMEMBERCS_H
#define __UNIX_DOMAINMEMBERCS_H


#include "CIM_SystemComponent.h"
#include <ReusablePolicyContainer/UNIX_ReusablePolicyContainerProvider.h>
#include <PolicyRepository/UNIX_PolicyRepositoryProvider.h>
#include <AutonomousSystem/UNIX_AutonomousSystemProvider.h>
#include <RoutingProtocolDomain/UNIX_RoutingProtocolDomainProvider.h>
#include <OSPFArea/UNIX_OSPFAreaProvider.h>
#include <Network/UNIX_NetworkProvider.h>
#include <VLANNetwork/UNIX_VLANNetworkProvider.h>
#include <TierDomain/UNIX_TierDomainProvider.h>
#include <VirtualComputerSystem/UNIX_VirtualComputerSystemProvider.h>
#include <Cluster/UNIX_ClusterProvider.h>
#include <ComputerSystem/UNIX_ComputerSystemProvider.h>

#include "UNIX_DomainMemberCSDeps.h"


#ifndef PROPERTY_PRIMARY_STATUS
#define PROPERTY_PRIMARY_STATUS \
					"PrimaryStatus"
#endif

#ifndef PROPERTY_DETAILED_STATUS
#define PROPERTY_DETAILED_STATUS \
					"DetailedStatus"
#endif

#ifndef PROPERTY_OPERATING_STATUS
#define PROPERTY_OPERATING_STATUS \
					"OperatingStatus"
#endif

#ifndef PROPERTY_COMMUNICATION_STATUS
#define PROPERTY_COMMUNICATION_STATUS \
					"CommunicationStatus"
#endif

#ifndef PROPERTY_MEMBER_ROLE
#define PROPERTY_MEMBER_ROLE \
					"MemberRole"
#endif

#ifndef PROPERTY_MEMBER_STATE
#define PROPERTY_MEMBER_STATE \
					"MemberState"
#endif



class UNIX_DomainMemberCS :
	public CIM_SystemComponent
{
public:

	UNIX_DomainMemberCS();
	~UNIX_DomainMemberCS();

	virtual Boolean initialize();
	virtual Boolean load(int&);
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

	virtual Boolean getGroupComponent(CIMProperty&) const;
	virtual CIMInstance getGroupComponent() const;
	virtual void setGroupComponent(CIMInstance&);
	virtual Boolean getPartComponent(CIMProperty&) const;
	virtual CIMInstance getPartComponent() const;
	virtual void setPartComponent(CIMInstance&);
	virtual Boolean getPrimaryStatus(CIMProperty&) const;
	virtual Uint16 getPrimaryStatus() const;
	virtual void setPrimaryStatus(Uint16&);
	virtual Boolean getDetailedStatus(CIMProperty&) const;
	virtual Uint16 getDetailedStatus() const;
	virtual void setDetailedStatus(Uint16&);
	virtual Boolean getOperatingStatus(CIMProperty&) const;
	virtual Uint16 getOperatingStatus() const;
	virtual void setOperatingStatus(Uint16&);
	virtual Boolean getCommunicationStatus(CIMProperty&) const;
	virtual Uint16 getCommunicationStatus() const;
	virtual void setCommunicationStatus(Uint16&);
	virtual Boolean getMemberRole(CIMProperty&) const;
	virtual Array<Uint16> getMemberRole() const;
	virtual void setMemberRole(Array<Uint16>&);
	virtual Boolean getMemberState(CIMProperty&) const;
	virtual Uint16 getMemberState() const;
	virtual void setMemberState(Uint16&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _groupComponent;
	CIMInstance _partComponent;
	Uint16 _primaryStatus;
	Uint16 _detailedStatus;
	Uint16 _operatingStatus;
	Uint16 _communicationStatus;
	Array<Uint16> _memberRole;
	Uint16 _memberState;

	int groupIndex;
	int partIndex;
	UNIX_ReusablePolicyContainer group_UNIX_ReusablePolicyContainer_Component;
	int group_UNIX_ReusablePolicyContainer_Index;
	bool endOf_UNIX_ReusablePolicyContainer_Group;
	UNIX_PolicyRepository group_UNIX_PolicyRepository_Component;
	int group_UNIX_PolicyRepository_Index;
	bool endOf_UNIX_PolicyRepository_Group;
	UNIX_AutonomousSystem group_UNIX_AutonomousSystem_Component;
	int group_UNIX_AutonomousSystem_Index;
	bool endOf_UNIX_AutonomousSystem_Group;
	UNIX_RoutingProtocolDomain group_UNIX_RoutingProtocolDomain_Component;
	int group_UNIX_RoutingProtocolDomain_Index;
	bool endOf_UNIX_RoutingProtocolDomain_Group;
	UNIX_OSPFArea group_UNIX_OSPFArea_Component;
	int group_UNIX_OSPFArea_Index;
	bool endOf_UNIX_OSPFArea_Group;
	UNIX_Network group_UNIX_Network_Component;
	int group_UNIX_Network_Index;
	bool endOf_UNIX_Network_Group;
	UNIX_VLANNetwork group_UNIX_VLANNetwork_Component;
	int group_UNIX_VLANNetwork_Index;
	bool endOf_UNIX_VLANNetwork_Group;
	UNIX_TierDomain group_UNIX_TierDomain_Component;
	int group_UNIX_TierDomain_Index;
	bool endOf_UNIX_TierDomain_Group;

	UNIX_VirtualComputerSystem part_UNIX_VirtualComputerSystem_Component;
	int part_UNIX_VirtualComputerSystem_Index;
	bool endOf_UNIX_VirtualComputerSystem_Part;
	UNIX_Cluster part_UNIX_Cluster_Component;
	int part_UNIX_Cluster_Index;
	bool endOf_UNIX_Cluster_Part;
	UNIX_ComputerSystem part_UNIX_ComputerSystem_Component;
	int part_UNIX_ComputerSystem_Index;
	bool endOf_UNIX_ComputerSystem_Part;

#	include "UNIX_DomainMemberCSPrivate.h"


};

#endif /* UNIX_DOMAINMEMBERCS */
