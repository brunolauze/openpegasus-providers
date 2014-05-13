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
An association that links a PolicyRule to the System in whose scope the Rule is defined.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			CIM_HostedDependency:

			CIM_PolicyInSystem:

			CIM_PolicySetInSystem:
				Priority UInt16

			UNIX_PolicyRuleInSystem:


*/


/*
			 *** Methods ***

			CIM_Dependency:

			CIM_HostedDependency:

			CIM_PolicyInSystem:

			CIM_PolicySetInSystem:

			UNIX_PolicyRuleInSystem:


*/

#ifndef __UNIX_POLICYRULEINSYSTEM_H
#define __UNIX_POLICYRULEINSYSTEM_H


#include "CIM_PolicySetInSystem.h"
#include <ComputerSystem/UNIX_ComputerSystemProvider.h>
#include <AuthorizationRule/UNIX_AuthorizationRuleProvider.h>
#include <NetworkPolicyRule/UNIX_NetworkPolicyRuleProvider.h>
#include <IPsecRule/UNIX_IPsecRuleProvider.h>
#include <IKERule/UNIX_IKERuleProvider.h>
#include <AuthenticationRule/UNIX_AuthenticationRuleProvider.h>
#include <TierPolicyRule/UNIX_TierPolicyRuleProvider.h>

#include "UNIX_PolicyRuleInSystemDeps.h"




class UNIX_PolicyRuleInSystem :
	public CIM_PolicySetInSystem
{
public:

	UNIX_PolicyRuleInSystem();
	~UNIX_PolicyRuleInSystem();

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
	virtual Boolean getPriority(CIMProperty&) const;
	virtual Uint16 getPriority() const;
	virtual void setPriority(Uint16&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _antecedent;
	CIMInstance _dependent;
	Uint16 _priority;

UNIX_ComputerSystem _antecedentComputerSystem;
UNIX_ComputerSystemProvider _antecedentComputerSystemProvider;

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

#	include "UNIX_PolicyRuleInSystemPrivate.h"


};

#endif /* UNIX_POLICYRULEINSYSTEM */
