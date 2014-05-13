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
CIM_ReusablePolicy
*/


/* **** Version *** */
/*
2.7.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Policy
*/


/* **** Description *** */
/*
The ReusablePolicy association is a more general relationship that incorporates both Conditions and Actions as well as any other policy subclass. 

This class represents the hosting of reusable PolicyActions by a PolicyRepository. A reusable Policy Action is always related to a single PolicyRepository, via this association. 

Note, that an instance of PolicyAction can be either reusable or rule-specific. When the Action is rule- specific, it shall not be related to any PolicyRepository via the PolicyActionInPolicyRepository association.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			CIM_HostedDependency:

			CIM_PolicyInSystem:

			UNIX_PolicyActionInPolicyRepository:


*/


/*
			 *** Methods ***

			CIM_Dependency:

			CIM_HostedDependency:

			CIM_PolicyInSystem:

			UNIX_PolicyActionInPolicyRepository:


*/

#ifndef __UNIX_POLICYACTIONINPOLICYREPOSITORY_H
#define __UNIX_POLICYACTIONINPOLICYREPOSITORY_H


#include "CIM_PolicyInSystem.h"
#include <PolicyRepository/UNIX_PolicyRepositoryProvider.h>
#include <VendorPolicyAction/UNIX_VendorPolicyActionProvider.h>
#include <IKEAction/UNIX_IKEActionProvider.h>
#include <IPsecTransportAction/UNIX_IPsecTransportActionProvider.h>
#include <IPsecTunnelAction/UNIX_IPsecTunnelActionProvider.h>
#include <PreconfiguredTransportAction/UNIX_PreconfiguredTransportActionProvider.h>
#include <PreconfiguredTunnelAction/UNIX_PreconfiguredTunnelActionProvider.h>
#include <RejectConnectionAction/UNIX_RejectConnectionActionProvider.h>
#include <MethodAction/UNIX_MethodActionProvider.h>
#include <NetworkPacketAction/UNIX_NetworkPacketActionProvider.h>
#include <CompoundPolicyAction/UNIX_CompoundPolicyActionProvider.h>

#include "UNIX_PolicyActionInPolicyRepositoryDeps.h"




class UNIX_PolicyActionInPolicyRepository :
	public CIM_PolicyInSystem
{
public:

	UNIX_PolicyActionInPolicyRepository();
	~UNIX_PolicyActionInPolicyRepository();

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

UNIX_PolicyRepository _antecedentPolicyRepository;
UNIX_PolicyRepositoryProvider _antecedentPolicyRepositoryProvider;

UNIX_VendorPolicyAction _dependentVendorPolicyAction;
UNIX_VendorPolicyActionProvider _dependentVendorPolicyActionProvider;
UNIX_IKEAction _dependentIKEAction;
UNIX_IKEActionProvider _dependentIKEActionProvider;
UNIX_IPsecTransportAction _dependentIPsecTransportAction;
UNIX_IPsecTransportActionProvider _dependentIPsecTransportActionProvider;
UNIX_IPsecTunnelAction _dependentIPsecTunnelAction;
UNIX_IPsecTunnelActionProvider _dependentIPsecTunnelActionProvider;
UNIX_PreconfiguredTransportAction _dependentPreconfiguredTransportAction;
UNIX_PreconfiguredTransportActionProvider _dependentPreconfiguredTransportActionProvider;
UNIX_PreconfiguredTunnelAction _dependentPreconfiguredTunnelAction;
UNIX_PreconfiguredTunnelActionProvider _dependentPreconfiguredTunnelActionProvider;
UNIX_RejectConnectionAction _dependentRejectConnectionAction;
UNIX_RejectConnectionActionProvider _dependentRejectConnectionActionProvider;
UNIX_MethodAction _dependentMethodAction;
UNIX_MethodActionProvider _dependentMethodActionProvider;
UNIX_NetworkPacketAction _dependentNetworkPacketAction;
UNIX_NetworkPacketActionProvider _dependentNetworkPacketActionProvider;
UNIX_CompoundPolicyAction _dependentCompoundPolicyAction;
UNIX_CompoundPolicyActionProvider _dependentCompoundPolicyActionProvider;

#	include "UNIX_PolicyActionInPolicyRepositoryPrivate.h"


};

#endif /* UNIX_POLICYACTIONINPOLICYREPOSITORY */
