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


/* **** Version *** */
/*
2.7.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Network::Routes
*/


/* **** Description *** */
/*
AssociatedNextHop depicts the relationship between a route and the specification of its next hop. The next hop is external to a System, and hence is defined as a kind of RemoteServiceAccessPoint. Note that this relationship is independent of RouteUsesEndpoint (the local Endpoint used to transmit the traffic), and both may be defined for a route.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			UNIX_AssociatedNextHop:


*/


/*
			 *** Methods ***

			CIM_Dependency:

			UNIX_AssociatedNextHop:


*/

#ifndef __UNIX_ASSOCIATEDNEXTHOP_H
#define __UNIX_ASSOCIATEDNEXTHOP_H


#include "CIM_Dependency.h"
#include <PolicyTransferServiceAccessPoint/UNIX_PolicyTransferServiceAccessPointProvider.h>
#include <LaunchInContextSAP/UNIX_LaunchInContextSAPProvider.h>
#include <RemotePort/UNIX_RemotePortProvider.h>
#include <MPLSTunnelHop/UNIX_MPLSTunnelHopProvider.h>
#include <SoftwareIdentityResource/UNIX_SoftwareIdentityResourceProvider.h>
#include <NextHopRoute/UNIX_NextHopRouteProvider.h>

#include "UNIX_AssociatedNextHopDeps.h"




class UNIX_AssociatedNextHop :
	public CIM_Dependency
{
public:

	UNIX_AssociatedNextHop();
	~UNIX_AssociatedNextHop();

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

UNIX_PolicyTransferServiceAccessPoint _antecedentPolicyTransferServiceAccessPoint;
UNIX_PolicyTransferServiceAccessPointProvider _antecedentPolicyTransferServiceAccessPointProvider;
UNIX_LaunchInContextSAP _antecedentLaunchInContextSAP;
UNIX_LaunchInContextSAPProvider _antecedentLaunchInContextSAPProvider;
UNIX_RemotePort _antecedentRemotePort;
UNIX_RemotePortProvider _antecedentRemotePortProvider;
UNIX_MPLSTunnelHop _antecedentMPLSTunnelHop;
UNIX_MPLSTunnelHopProvider _antecedentMPLSTunnelHopProvider;
UNIX_SoftwareIdentityResource _antecedentSoftwareIdentityResource;
UNIX_SoftwareIdentityResourceProvider _antecedentSoftwareIdentityResourceProvider;

UNIX_NextHopRoute _dependentNextHopRoute;
UNIX_NextHopRouteProvider _dependentNextHopRouteProvider;

#	include "UNIX_AssociatedNextHopPrivate.h"


};

#endif /* UNIX_ASSOCIATEDNEXTHOP */
