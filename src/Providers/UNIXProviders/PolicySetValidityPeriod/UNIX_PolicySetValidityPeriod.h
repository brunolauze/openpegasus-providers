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
2.32.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Policy
*/


/* **** Description *** */
/*
The PolicySetValidityPeriod aggregation represents scheduled activation and deactivation of a PolicySet. A PolicySet is considered "active" if it is both "Enabled" and in a valid time period. 

If a PolicySet is associated with multiple policy time periods via this association, then the Set is in a valid time period if at least one of the time periods evaluates to TRUE. If a PolicySet is contained in another PolicySet via the PolicySetComponent aggregation (e.g., a PolicyRule in a PolicyGroup), then the contained PolicySet (e.g., PolicyRule) is in a valid period if at least one of the aggregate's PolicyTimePeriodCondition instances evaluates to TRUE and at least one of its own PolicyTimePeriodCondition instances also evalutes to TRUE. (In other words, the PolicyTimePeriodConditions are ORed to determine whether the PolicySet is in a valid time period and then ANDed with the ORed PolicyTimePeriodConditions of each of PolicySet instances in the PolicySetComponent hierarchy to determine if the PolicySet is in a valid time period and, if also "Enabled", therefore, active, i.e., the hierachy ANDs the ORed PolicyTimePeriodConditions of the elements of the hierarchy. 

A Time Period may be aggregated by multiple PolicySets. A Set that does not point to a PolicyTimePeriodCondition via this association, from the point of view of scheduling, is always in a valid time period.
*/


/*
			 *** Properties ***

			CIM_AbstractComponent:
				GroupComponent Reference
				PartComponent Reference

			CIM_Component:

			CIM_PolicyComponent:

			UNIX_PolicySetValidityPeriod:
				ConditionNegated Boolean


*/


/*
			 *** Methods ***

			CIM_AbstractComponent:

			CIM_Component:

			CIM_PolicyComponent:

			UNIX_PolicySetValidityPeriod:


*/

#ifndef __UNIX_POLICYSETVALIDITYPERIOD_H
#define __UNIX_POLICYSETVALIDITYPERIOD_H


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
#include <PolicyTimePeriodCondition/UNIX_PolicyTimePeriodConditionProvider.h>

#include "UNIX_PolicySetValidityPeriodDeps.h"


#ifndef PROPERTY_CONDITION_NEGATED
#define PROPERTY_CONDITION_NEGATED \
					"ConditionNegated"
#endif



class UNIX_PolicySetValidityPeriod :
	public CIM_PolicyComponent
{
public:

	UNIX_PolicySetValidityPeriod();
	~UNIX_PolicySetValidityPeriod();

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
	virtual Boolean getConditionNegated(CIMProperty&) const;
	virtual Boolean getConditionNegated() const;
	virtual void setConditionNegated(Boolean&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _groupComponent;
	CIMInstance _partComponent;
	Boolean _conditionNegated;

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

	UNIX_PolicyTimePeriodCondition part_UNIX_PolicyTimePeriodCondition_Component;
	int part_UNIX_PolicyTimePeriodCondition_Index;
	bool endOf_UNIX_PolicyTimePeriodCondition_Part;

#	include "UNIX_PolicySetValidityPeriodPrivate.h"


};

#endif /* UNIX_POLICYSETVALIDITYPERIOD */
