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


/* **** Deprecated *** */
/*
CIM_HostedDependency
*/


/* **** Version *** */
/*
2.7.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Network::RoutingForwarding
*/


/* **** Description *** */
/*
This association establishes the Dependency relationships that exist between an administrative domain and the Network Services that it hosts. It is deprecated since AdminDomains can contain any ManagedSystemElements. There is no special relationship needed for NetworkServices. In addition, the Min (1) cardinality on AdminDomain is not valid - since it may not be possible to define every NetworkService in the context of one or more Domains.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			CIM_HostedDependency:

			UNIX_NetworkServicesInAdminDomain:


*/


/*
			 *** Methods ***

			CIM_Dependency:

			CIM_HostedDependency:

			UNIX_NetworkServicesInAdminDomain:


*/

#ifndef __UNIX_NETWORKSERVICESINADMINDOMAIN_H
#define __UNIX_NETWORKSERVICESINADMINDOMAIN_H


#include "CIM_HostedDependency.h"
#include <ReusablePolicyContainer/UNIX_ReusablePolicyContainerProvider.h>
#include <PolicyRepository/UNIX_PolicyRepositoryProvider.h>
#include <AutonomousSystem/UNIX_AutonomousSystemProvider.h>
#include <RoutingProtocolDomain/UNIX_RoutingProtocolDomainProvider.h>
#include <OSPFArea/UNIX_OSPFAreaProvider.h>
#include <Network/UNIX_NetworkProvider.h>
#include <VLANNetwork/UNIX_VLANNetworkProvider.h>
#include <TierDomain/UNIX_TierDomainProvider.h>
#include <BGPService/UNIX_BGPServiceProvider.h>
#include <OSPFService/UNIX_OSPFServiceProvider.h>
#include <NATService/UNIX_NATServiceProvider.h>
#include <TransparentBridgingService/UNIX_TransparentBridgingServiceProvider.h>
#include <SourceRoutingService/UNIX_SourceRoutingServiceProvider.h>
#include <SpanningTreeService/UNIX_SpanningTreeServiceProvider.h>
#include <SwitchService/UNIX_SwitchServiceProvider.h>

#include "UNIX_NetworkServicesInAdminDomainDeps.h"




class UNIX_NetworkServicesInAdminDomain :
	public CIM_HostedDependency
{
public:

	UNIX_NetworkServicesInAdminDomain();
	~UNIX_NetworkServicesInAdminDomain();

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

	virtual Boolean getAntecedent(CIMProperty&) const;
	virtual CIMInstance getAntecedent() const;
	virtual void setAntecedent(CIMInstance&);
	virtual Boolean getDependent(CIMProperty&) const;
	virtual CIMInstance getDependent() const;
	virtual void setDependent(CIMInstance&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _antecedent;
	CIMInstance _dependent;

UNIX_ReusablePolicyContainer _antecedentReusablePolicyContainer;
UNIX_ReusablePolicyContainerProvider _antecedentReusablePolicyContainerProvider;
UNIX_PolicyRepository _antecedentPolicyRepository;
UNIX_PolicyRepositoryProvider _antecedentPolicyRepositoryProvider;
UNIX_AutonomousSystem _antecedentAutonomousSystem;
UNIX_AutonomousSystemProvider _antecedentAutonomousSystemProvider;
UNIX_RoutingProtocolDomain _antecedentRoutingProtocolDomain;
UNIX_RoutingProtocolDomainProvider _antecedentRoutingProtocolDomainProvider;
UNIX_OSPFArea _antecedentOSPFArea;
UNIX_OSPFAreaProvider _antecedentOSPFAreaProvider;
UNIX_Network _antecedentNetwork;
UNIX_NetworkProvider _antecedentNetworkProvider;
UNIX_VLANNetwork _antecedentVLANNetwork;
UNIX_VLANNetworkProvider _antecedentVLANNetworkProvider;
UNIX_TierDomain _antecedentTierDomain;
UNIX_TierDomainProvider _antecedentTierDomainProvider;

UNIX_BGPService _dependentBGPService;
UNIX_BGPServiceProvider _dependentBGPServiceProvider;
UNIX_OSPFService _dependentOSPFService;
UNIX_OSPFServiceProvider _dependentOSPFServiceProvider;
UNIX_NATService _dependentNATService;
UNIX_NATServiceProvider _dependentNATServiceProvider;
UNIX_TransparentBridgingService _dependentTransparentBridgingService;
UNIX_TransparentBridgingServiceProvider _dependentTransparentBridgingServiceProvider;
UNIX_SourceRoutingService _dependentSourceRoutingService;
UNIX_SourceRoutingServiceProvider _dependentSourceRoutingServiceProvider;
UNIX_SpanningTreeService _dependentSpanningTreeService;
UNIX_SpanningTreeServiceProvider _dependentSpanningTreeServiceProvider;
UNIX_SwitchService _dependentSwitchService;
UNIX_SwitchServiceProvider _dependentSwitchServiceProvider;

#	include "UNIX_NetworkServicesInAdminDomainPrivate.h"


};

#endif /* UNIX_NETWORKSERVICESINADMINDOMAIN */
