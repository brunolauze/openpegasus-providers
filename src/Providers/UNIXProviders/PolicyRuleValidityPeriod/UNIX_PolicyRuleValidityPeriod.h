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
CIM_PolicySetValidityPeriod
*/


/* **** Aggregation *** */
/*
TRUE
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
The PolicyRuleValidityPeriod aggregation represents scheduled activation and deactivation of a PolicyRule. If a PolicyRule is associated with multiple policy time periods via this association, then the Rule is active if at least one of the time periods indicates that it is active. (In other words, the PolicyTimePeriodConditions are ORed to determine whether the Rule is active.) A Time Period may be aggregated by multiple PolicyRules. A Rule that does not point to a PolicyTimePeriodCondition via this association is, from the point of view of scheduling, always active. It may, however, be inactive for other reasons. For example, the Rule's Enabled property may be set to "disabled" (value=2).
*/


/*
			 *** Properties ***

			CIM_AbstractComponent:
				GroupComponent Reference
				PartComponent Reference

			CIM_Component:

			CIM_PolicyComponent:

			UNIX_PolicyRuleValidityPeriod:


*/


/*
			 *** Methods ***

			CIM_AbstractComponent:

			CIM_Component:

			CIM_PolicyComponent:

			UNIX_PolicyRuleValidityPeriod:


*/

#ifndef __UNIX_POLICYRULEVALIDITYPERIOD_H
#define __UNIX_POLICYRULEVALIDITYPERIOD_H


#include "CIM_PolicyComponent.h"
#include <AuthorizationRule/UNIX_AuthorizationRuleProvider.h>
#include <NetworkPolicyRule/UNIX_NetworkPolicyRuleProvider.h>
#include <IPsecRule/UNIX_IPsecRuleProvider.h>
#include <IKERule/UNIX_IKERuleProvider.h>
#include <AuthenticationRule/UNIX_AuthenticationRuleProvider.h>
#include <TierPolicyRule/UNIX_TierPolicyRuleProvider.h>
#include <PolicyTimePeriodCondition/UNIX_PolicyTimePeriodConditionProvider.h>

#include "UNIX_PolicyRuleValidityPeriodDeps.h"




class UNIX_PolicyRuleValidityPeriod :
	public CIM_PolicyComponent
{
public:

	UNIX_PolicyRuleValidityPeriod();
	~UNIX_PolicyRuleValidityPeriod();

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


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _groupComponent;
	CIMInstance _partComponent;

	int groupIndex;
	int partIndex;
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

#	include "UNIX_PolicyRuleValidityPeriodPrivate.h"


};

#endif /* UNIX_POLICYRULEVALIDITYPERIOD */
