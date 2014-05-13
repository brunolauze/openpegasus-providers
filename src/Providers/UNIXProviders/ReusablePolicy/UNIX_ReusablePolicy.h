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
2.6.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Policy
*/


/* **** Description *** */
/*
The ReusablePolicy association provides for the reuse of any subclass of Policy in a ReusablePolicyContainer.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			CIM_HostedDependency:

			CIM_PolicyInSystem:

			UNIX_ReusablePolicy:


*/


/*
			 *** Methods ***

			CIM_Dependency:

			CIM_HostedDependency:

			CIM_PolicyInSystem:

			UNIX_ReusablePolicy:


*/

#ifndef __UNIX_REUSABLEPOLICY_H
#define __UNIX_REUSABLEPOLICY_H


#include "CIM_PolicyInSystem.h"
#include <ReusablePolicyContainer/UNIX_ReusablePolicyContainerProvider.h>
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

#include "UNIX_ReusablePolicyDeps.h"




class UNIX_ReusablePolicy :
	public CIM_PolicyInSystem
{
public:

	UNIX_ReusablePolicy();
	~UNIX_ReusablePolicy();

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

UNIX_NetworkPolicyAction _dependentNetworkPolicyAction;
UNIX_NetworkPolicyActionProvider _dependentNetworkPolicyActionProvider;
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
UNIX_PacketFilterCondition _dependentPacketFilterCondition;
UNIX_PacketFilterConditionProvider _dependentPacketFilterConditionProvider;
UNIX_CompoundPolicyCondition _dependentCompoundPolicyCondition;
UNIX_CompoundPolicyConditionProvider _dependentCompoundPolicyConditionProvider;
UNIX_QueryCondition _dependentQueryCondition;
UNIX_QueryConditionProvider _dependentQueryConditionProvider;
UNIX_DocumentAuthentication _dependentDocumentAuthentication;
UNIX_DocumentAuthenticationProvider _dependentDocumentAuthenticationProvider;
UNIX_NetworkingIDAuthentication _dependentNetworkingIDAuthentication;
UNIX_NetworkingIDAuthenticationProvider _dependentNetworkingIDAuthenticationProvider;
UNIX_KerberosAuthentication _dependentKerberosAuthentication;
UNIX_KerberosAuthenticationProvider _dependentKerberosAuthenticationProvider;
UNIX_BiometricAuthentication _dependentBiometricAuthentication;
UNIX_BiometricAuthenticationProvider _dependentBiometricAuthenticationProvider;
UNIX_PublicPrivateKeyAuthentication _dependentPublicPrivateKeyAuthentication;
UNIX_PublicPrivateKeyAuthenticationProvider _dependentPublicPrivateKeyAuthenticationProvider;
UNIX_PhysicalCredentialAuthentication _dependentPhysicalCredentialAuthentication;
UNIX_PhysicalCredentialAuthenticationProvider _dependentPhysicalCredentialAuthenticationProvider;
UNIX_SharedSecretAuthentication _dependentSharedSecretAuthentication;
UNIX_SharedSecretAuthenticationProvider _dependentSharedSecretAuthenticationProvider;
UNIX_AccountAuthentication _dependentAccountAuthentication;
UNIX_AccountAuthenticationProvider _dependentAccountAuthenticationProvider;
UNIX_PolicyTimePeriodCondition _dependentPolicyTimePeriodCondition;
UNIX_PolicyTimePeriodConditionProvider _dependentPolicyTimePeriodConditionProvider;
UNIX_VendorPolicyCondition _dependentVendorPolicyCondition;
UNIX_VendorPolicyConditionProvider _dependentVendorPolicyConditionProvider;
UNIX_NetworkPolicyCondition _dependentNetworkPolicyCondition;
UNIX_NetworkPolicyConditionProvider _dependentNetworkPolicyConditionProvider;
UNIX_AccessControlPolicy _dependentAccessControlPolicy;
UNIX_AccessControlPolicyProvider _dependentAccessControlPolicyProvider;
UNIX_PolicyGroup _dependentPolicyGroup;
UNIX_PolicyGroupProvider _dependentPolicyGroupProvider;
UNIX_AccessControlPolicyGroup _dependentAccessControlPolicyGroup;
UNIX_AccessControlPolicyGroupProvider _dependentAccessControlPolicyGroupProvider;
UNIX_AuthorizationRule _dependentAuthorizationRule;
UNIX_AuthorizationRuleProvider _dependentAuthorizationRuleProvider;
UNIX_NetworkPolicyRule _dependentNetworkPolicyRule;
UNIX_NetworkPolicyRuleProvider _dependentNetworkPolicyRuleProvider;
UNIX_IPsecRule _dependentIPsecRule;
UNIX_IPsecRuleProvider _dependentIPsecRuleProvider;
UNIX_IKERule _dependentIKERule;
UNIX_IKERuleProvider _dependentIKERuleProvider;
UNIX_AuthenticationRule _dependentAuthenticationRule;
UNIX_AuthenticationRuleProvider _dependentAuthenticationRuleProvider;
UNIX_TierPolicyRule _dependentTierPolicyRule;
UNIX_TierPolicyRuleProvider _dependentTierPolicyRuleProvider;

#	include "UNIX_ReusablePolicyPrivate.h"


};

#endif /* UNIX_REUSABLEPOLICY */
