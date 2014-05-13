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
The central class used for representing the 'If Condition then Action' semantics of a policy rule. A PolicyRule condition, in the most general sense, is represented as either an ORed set of ANDed conditions (Disjunctive Normal Form, or DNF) or an ANDed set of ORed conditions (Conjunctive Normal Form, or CNF). Individual conditions may either be negated (NOT C) or unnegated (C). The actions specified by a PolicyRule are to be performed if and only if the PolicyRule condition (whether it is represented in DNF or CNF) evaluates to TRUE. 

The conditions and actions associated with a PolicyRule are modeled, respectively, with subclasses of PolicyCondition and PolicyAction. These condition and action objects are tied to instances of PolicyRule by the PolicyConditionInPolicyRule and PolicyActionInPolicyRule aggregations. 

A PolicyRule may also be associated with one or more policy time periods, indicating the schedule according to which the policy rule is active and inactive. In this case it is the PolicySetValidityPeriod aggregation that provides this linkage. 

The PolicyRule class uses the property ConditionListType, to indicate whether the conditions for the rule are in DNF (disjunctive normal form), CNF (conjunctive normal form) or, in the case of a rule with no conditions, as an UnconditionalRule. The PolicyConditionInPolicyRule aggregation contains two additional properties to complete the representation of the Rule's conditional expression. The first of these properties is an integer to partition the referenced PolicyConditions into one or more groups, and the second is a Boolean to indicate whether a referenced Condition is negated. An example shows how ConditionListType and these two additional properties provide a unique representation of a set of PolicyConditions in either DNF or CNF. 

Suppose we have a PolicyRule that aggregates five PolicyConditions C1 through C5, with the following values in the properties of the five PolicyConditionInPolicyRule associations: 
C1: GroupNumber = 1, ConditionNegated = FALSE 
C2: GroupNumber = 1, ConditionNegated = TRUE 
C3: GroupNumber = 1, ConditionNegated = FALSE 
C4: GroupNumber = 2, ConditionNegated = FALSE 
C5: GroupNumber = 2, ConditionNegated = FALSE 

If ConditionListType = DNF, then the overall condition for the PolicyRule is: 
(C1 AND (NOT C2) AND C3) OR (C4 AND C5) 

On the other hand, if ConditionListType = CNF, then the overall condition for the PolicyRule is: 
(C1 OR (NOT C2) OR C3) AND (C4 OR C5) 

In both cases, there is an unambiguous specification of the overall condition that is tested to determine whether to perform the PolicyActions associated with the PolicyRule. 

PolicyRule instances may also be used to aggregate other PolicyRules and/or PolicyGroups. When used in this way to implement nested rules, the conditions of the aggregating rule apply to the subordinate rules as well. However, any side effects of condition evaluation or the execution of actions MUST NOT affect the result of the evaluation of other conditions evaluated by the rule engine in the same evaluation pass. That is, an implementation of a rule engine MAY evaluate all conditions in any order before applying the priority and determining which actions are to be executed.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_Policy:
				CommonName String
				PolicyKeywords String

			CIM_PolicySet:
				PolicyDecisionStrategy UInt16
				PolicyRoles String
				Enabled UInt16

			CIM_PolicyRule:
				SystemCreationClassName String
				SystemName String
				CreationClassName String
				PolicyRuleName String
				ConditionListType UInt16
				RuleUsage String
				Priority UInt16
				Mandatory Boolean
				SequencedActions UInt16
				ExecutionStrategy UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Policy:

			CIM_PolicySet:

			CIM_PolicyRule:


*/

#ifndef __CIM_POLICYRULE_H
#define __CIM_POLICYRULE_H


#include "CIM_PolicySet.h"


#ifndef PROPERTY_SYSTEM_CREATION_CLASS_NAME
#define PROPERTY_SYSTEM_CREATION_CLASS_NAME \
					"SystemCreationClassName"
#endif

#ifndef PROPERTY_SYSTEM_NAME
#define PROPERTY_SYSTEM_NAME \
					"SystemName"
#endif

#ifndef PROPERTY_CREATION_CLASS_NAME
#define PROPERTY_CREATION_CLASS_NAME \
					"CreationClassName"
#endif

#ifndef PROPERTY_POLICY_RULE_NAME
#define PROPERTY_POLICY_RULE_NAME \
					"PolicyRuleName"
#endif

#ifndef PROPERTY_CONDITION_LIST_TYPE
#define PROPERTY_CONDITION_LIST_TYPE \
					"ConditionListType"
#endif

#ifndef PROPERTY_RULE_USAGE
#define PROPERTY_RULE_USAGE \
					"RuleUsage"
#endif

#ifndef PROPERTY_PRIORITY
#define PROPERTY_PRIORITY \
					"Priority"
#endif

#ifndef PROPERTY_MANDATORY
#define PROPERTY_MANDATORY \
					"Mandatory"
#endif

#ifndef PROPERTY_SEQUENCED_ACTIONS
#define PROPERTY_SEQUENCED_ACTIONS \
					"SequencedActions"
#endif

#ifndef PROPERTY_EXECUTION_STRATEGY
#define PROPERTY_EXECUTION_STRATEGY \
					"ExecutionStrategy"
#endif



class CIM_PolicyRule :
	public CIM_PolicySet
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

	virtual Boolean getSystemCreationClassName(CIMProperty&) const=0;
	virtual String getSystemCreationClassName() const=0;
	virtual void setSystemCreationClassName(String&)=0;
	virtual Boolean getSystemName(CIMProperty&) const=0;
	virtual String getSystemName() const=0;
	virtual void setSystemName(String&)=0;
	virtual Boolean getCreationClassName(CIMProperty&) const=0;
	virtual String getCreationClassName() const=0;
	virtual void setCreationClassName(String&)=0;
	virtual Boolean getPolicyRuleName(CIMProperty&) const=0;
	virtual String getPolicyRuleName() const=0;
	virtual void setPolicyRuleName(String&)=0;
	virtual Boolean getConditionListType(CIMProperty&) const=0;
	virtual Uint16 getConditionListType() const=0;
	virtual void setConditionListType(Uint16&)=0;
	virtual Boolean getRuleUsage(CIMProperty&) const=0;
	virtual String getRuleUsage() const=0;
	virtual void setRuleUsage(String&)=0;
	virtual Boolean getPriority(CIMProperty&) const=0;
	virtual Uint16 getPriority() const=0;
	virtual void setPriority(Uint16&)=0;
	virtual Boolean getMandatory(CIMProperty&) const=0;
	virtual Boolean getMandatory() const=0;
	virtual void setMandatory(Boolean&)=0;
	virtual Boolean getSequencedActions(CIMProperty&) const=0;
	virtual Uint16 getSequencedActions() const=0;
	virtual void setSequencedActions(Uint16&)=0;
	virtual Boolean getExecutionStrategy(CIMProperty&) const=0;
	virtual Uint16 getExecutionStrategy() const=0;
	virtual void setExecutionStrategy(Uint16&)=0;


private:

};

#endif /* CIM_POLICYRULE */
