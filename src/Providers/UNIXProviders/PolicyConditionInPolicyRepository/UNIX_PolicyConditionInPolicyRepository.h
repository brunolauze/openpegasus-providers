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

This class represents the hosting of reusable PolicyConditions by a PolicyRepository. A reusable Policy Condition is always related to a single PolicyRepository, via this association. 

Note, that an instance of PolicyCondition can be either reusable or rule-specific. When the Condition is rule- specific, it shall not be related to any PolicyRepository via the PolicyConditionInPolicyRepository association.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			CIM_HostedDependency:

			CIM_PolicyInSystem:

			UNIX_PolicyConditionInPolicyRepository:


*/


/*
			 *** Methods ***

			CIM_Dependency:

			CIM_HostedDependency:

			CIM_PolicyInSystem:

			UNIX_PolicyConditionInPolicyRepository:


*/

#ifndef __UNIX_POLICYCONDITIONINPOLICYREPOSITORY_H
#define __UNIX_POLICYCONDITIONINPOLICYREPOSITORY_H


#include "CIM_PolicyInSystem.h"
#include <PolicyRepository/UNIX_PolicyRepositoryProvider.h>
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

#include "UNIX_PolicyConditionInPolicyRepositoryDeps.h"




class UNIX_PolicyConditionInPolicyRepository :
	public CIM_PolicyInSystem
{
public:

	UNIX_PolicyConditionInPolicyRepository();
	~UNIX_PolicyConditionInPolicyRepository();

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

#	include "UNIX_PolicyConditionInPolicyRepositoryPrivate.h"


};

#endif /* UNIX_POLICYCONDITIONINPOLICYREPOSITORY */
