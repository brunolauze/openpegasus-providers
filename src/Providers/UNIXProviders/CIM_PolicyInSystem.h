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


/* **** Abstract *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.8.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Policy
*/


/* **** Description *** */
/*
CIM_PolicyInSystem is a generic association used to establish dependency relationships between Policies and the Systems that host them. These Systems may be ComputerSystems where Policies are 'running' or they may be Policy Repositories where Policies are stored. This relationship is similar to the concept of CIM_Services being dependent on CIM_Systems as defined by the HostedService association. 

Cardinality is Max (1) for the Antecedent/System reference since Policies can only be hosted in at most one System context. Some subclasses of the association will further refine this definition to make the Policies Weak to Systems. Other subclasses of PolicyInSystem will define an optional hosting relationship. Examples of each of these are the PolicyRuleInSystem and PolicyConditionIn PolicyRepository associations, respectively.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			CIM_HostedDependency:

			CIM_PolicyInSystem:


*/


/*
			 *** Methods ***

			CIM_Dependency:

			CIM_HostedDependency:

			CIM_PolicyInSystem:


*/

#ifndef __CIM_POLICYINSYSTEM_H
#define __CIM_POLICYINSYSTEM_H


#include "CIM_HostedDependency.h"
#include <ComputerSystem/UNIX_ComputerSystemProvider.h>
#include <NetworkPolicyAction/UNIX_NetworkPolicyActionProvider.h>
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
#include <PacketFilterCondition/UNIX_PacketFilterConditionProvider.h>
#include <CompoundPolicyCondition/UNIX_CompoundPolicyConditionProvider.h>
#include <QueryCondition/UNIX_QueryConditionProvider.h>
#include <DocumentAuthentication/UNIX_DocumentAuthenticationProvider.h>
#include <NetworkingIDAuthentication/UNIX_NetworkingIDAuthenticationProvider.h>
#include <KerberosAuthentication/UNIX_KerberosAuthenticationProvider.h>
#include <BiometricAuthentication/UNIX_BiometricAuthenticationProvider.h>
#include <PublicPrivateKeyAuthentication/UNIX_PublicPrivateKeyAuthenticationProvider.h>
#include <PhysicalCredentialAuthentication/UNIX_PhysicalCredentialAuthenticationProvider.h>
#include <SharedSecretAuthentication/UNIX_SharedSecretAuthenticationProvider.h>
#include <AccountAuthentication/UNIX_AccountAuthenticationProvider.h>
#include <PolicyTimePeriodCondition/UNIX_PolicyTimePeriodConditionProvider.h>
#include <VendorPolicyCondition/UNIX_VendorPolicyConditionProvider.h>
#include <NetworkPolicyCondition/UNIX_NetworkPolicyConditionProvider.h>
#include <AccessControlPolicy/UNIX_AccessControlPolicyProvider.h>
#include <PolicyGroup/UNIX_PolicyGroupProvider.h>
#include <AccessControlPolicyGroup/UNIX_AccessControlPolicyGroupProvider.h>
#include <AuthorizationRule/UNIX_AuthorizationRuleProvider.h>
#include <NetworkPolicyRule/UNIX_NetworkPolicyRuleProvider.h>
#include <IPsecRule/UNIX_IPsecRuleProvider.h>
#include <IKERule/UNIX_IKERuleProvider.h>
#include <AuthenticationRule/UNIX_AuthenticationRuleProvider.h>
#include <TierPolicyRule/UNIX_TierPolicyRuleProvider.h>




class CIM_PolicyInSystem :
	public CIM_HostedDependency
{
public:

	virtual Boolean initialize()=0;
	virtual Boolean load(int&)=0;
	virtual Boolean finalize()=0;
	virtual Boolean find(const Array<CIMKeyBinding>&)=0;
	virtual Boolean validateKey(CIMKeyBinding&) const=0;
	virtual void setScope(CIMName)=0;
	virtual void setCIMOMHandle(CIMOMHandle&)=0;
	virtual void clearInstance()=0;
	virtual Boolean loadInstance(const CIMInstance&)=0;
	virtual Boolean createInstance(const OperationContext&)=0;
	virtual Boolean modifyInstance(const OperationContext&)=0;
	virtual Boolean deleteInstance(const OperationContext&)=0;
	virtual Boolean validateInstance()=0;

	virtual Boolean getAntecedent(CIMProperty&) const=0;
	virtual CIMInstance getAntecedent() const=0;
	virtual void setAntecedent(CIMInstance&)=0;
	virtual Boolean getDependent(CIMProperty&) const=0;
	virtual CIMInstance getDependent() const=0;
	virtual void setDependent(CIMInstance&)=0;


private:

};

#endif /* CIM_POLICYINSYSTEM */
