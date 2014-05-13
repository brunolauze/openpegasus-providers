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


/* **** Aggregation *** */
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
PolicySetComponent is a concrete aggregation that collects instances of the subclasses of PolicySet (i.e., PolicyGroups and PolicyRules). Instances are collected in sets that use the same decision strategy. They are prioritized relative to each other, within the set, using the Priority property of this aggregation. 

Together, the PolicySet.PolicyDecisionStrategy and PolicySet Component.Priority properties determine the processing for the groups and rules contained in a PolicySet. A larger priority value represents a higher priority. Note that the Priority property MUST have a unique value when compared with others defined for the same aggregating PolicySet. Thus, the evaluation of rules within a set is deterministically specified.
*/


/*
			 *** Properties ***

			CIM_AbstractComponent:
				GroupComponent Reference
				PartComponent Reference

			CIM_Component:

			CIM_PolicyComponent:

			UNIX_PolicySetComponent:
				Priority UInt16


*/


/*
			 *** Methods ***

			CIM_AbstractComponent:

			CIM_Component:

			CIM_PolicyComponent:

			UNIX_PolicySetComponent:


*/

#ifndef __UNIX_POLICYSETCOMPONENT_H
#define __UNIX_POLICYSETCOMPONENT_H


#include "CIM_PolicyComponent.h"
#include <AccessControlPolicy/UNIX_AccessControlPolicyProvider.h>
#include <PolicyGroup/UNIX_PolicyGroupProvider.h>
#include <AccessControlPolicyGroup/UNIX_AccessControlPolicyGroupProvider.h>
#include <AuthorizationRule/UNIX_AuthorizationRuleProvider.h>
#include <NetworkPolicyRule/UNIX_NetworkPolicyRuleProvider.h>
#include <IPsecRule/UNIX_IPsecRuleProvider.h>
#include <IKERule/UNIX_IKERuleProvider.h>
#include <AuthenticationRule/UNIX_AuthenticationRuleProvider.h>
#include <TierPolicyRule/UNIX_TierPolicyRuleProvider.h>

#include "UNIX_PolicySetComponentDeps.h"


#ifndef PROPERTY_PRIORITY
#define PROPERTY_PRIORITY \
					"Priority"
#endif



class UNIX_PolicySetComponent :
	public CIM_PolicyComponent
{
public:

	UNIX_PolicySetComponent();
	~UNIX_PolicySetComponent();

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
	virtual Boolean getPriority(CIMProperty&) const;
	virtual Uint16 getPriority() const;
	virtual void setPriority(Uint16&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _groupComponent;
	CIMInstance _partComponent;
	Uint16 _priority;

	int groupIndex;
	int partIndex;
	UNIX_AccessControlPolicy group_UNIX_AccessControlPolicy_Component;
	int group_UNIX_AccessControlPolicy_Index;
	bool endOf_UNIX_AccessControlPolicy_Group;
	UNIX_PolicyGroup group_UNIX_PolicyGroup_Component;
	int group_UNIX_PolicyGroup_Index;
	bool endOf_UNIX_PolicyGroup_Group;
	UNIX_AccessControlPolicyGroup group_UNIX_AccessControlPolicyGroup_Component;
	int group_UNIX_AccessControlPolicyGroup_Index;
	bool endOf_UNIX_AccessControlPolicyGroup_Group;
	UNIX_AuthorizationRule group_UNIX_AuthorizationRule_Component;
	int group_UNIX_AuthorizationRule_Index;
	bool endOf_UNIX_AuthorizationRule_Group;
	UNIX_NetworkPolicyRule group_UNIX_NetworkPolicyRule_Component;
	int group_UNIX_NetworkPolicyRule_Index;
	bool endOf_UNIX_NetworkPolicyRule_Group;
	UNIX_IPsecRule group_UNIX_IPsecRule_Component;
	int group_UNIX_IPsecRule_Index;
	bool endOf_UNIX_IPsecRule_Group;
	UNIX_IKERule group_UNIX_IKERule_Component;
	int group_UNIX_IKERule_Index;
	bool endOf_UNIX_IKERule_Group;
	UNIX_AuthenticationRule group_UNIX_AuthenticationRule_Component;
	int group_UNIX_AuthenticationRule_Index;
	bool endOf_UNIX_AuthenticationRule_Group;
	UNIX_TierPolicyRule group_UNIX_TierPolicyRule_Component;
	int group_UNIX_TierPolicyRule_Index;
	bool endOf_UNIX_TierPolicyRule_Group;

	UNIX_AccessControlPolicy part_UNIX_AccessControlPolicy_Component;
	int part_UNIX_AccessControlPolicy_Index;
	bool endOf_UNIX_AccessControlPolicy_Part;
	UNIX_PolicyGroup part_UNIX_PolicyGroup_Component;
	int part_UNIX_PolicyGroup_Index;
	bool endOf_UNIX_PolicyGroup_Part;
	UNIX_AccessControlPolicyGroup part_UNIX_AccessControlPolicyGroup_Component;
	int part_UNIX_AccessControlPolicyGroup_Index;
	bool endOf_UNIX_AccessControlPolicyGroup_Part;
	UNIX_AuthorizationRule part_UNIX_AuthorizationRule_Component;
	int part_UNIX_AuthorizationRule_Index;
	bool endOf_UNIX_AuthorizationRule_Part;
	UNIX_NetworkPolicyRule part_UNIX_NetworkPolicyRule_Component;
	int part_UNIX_NetworkPolicyRule_Index;
	bool endOf_UNIX_NetworkPolicyRule_Part;
	UNIX_IPsecRule part_UNIX_IPsecRule_Component;
	int part_UNIX_IPsecRule_Index;
	bool endOf_UNIX_IPsecRule_Part;
	UNIX_IKERule part_UNIX_IKERule_Component;
	int part_UNIX_IKERule_Index;
	bool endOf_UNIX_IKERule_Part;
	UNIX_AuthenticationRule part_UNIX_AuthenticationRule_Component;
	int part_UNIX_AuthenticationRule_Index;
	bool endOf_UNIX_AuthenticationRule_Part;
	UNIX_TierPolicyRule part_UNIX_TierPolicyRule_Component;
	int part_UNIX_TierPolicyRule_Index;
	bool endOf_UNIX_TierPolicyRule_Part;

#	include "UNIX_PolicySetComponentPrivate.h"


};

#endif /* UNIX_POLICYSETCOMPONENT */
