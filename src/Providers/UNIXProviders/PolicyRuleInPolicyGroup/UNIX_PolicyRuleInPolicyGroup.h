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
CIM_PolicySetComponent
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
PolicySetComponent provides a more general mechanism for aggregating both PolicyGroups and PolicyRules and doing so with the priority value applying only to the aggregated set rather than policy wide. 

A relationship that aggregates one or more PolicyRules into a PolicyGroup. A PolicyGroup may aggregate PolicyRules and/or other PolicyGroups.
*/


/*
			 *** Properties ***

			CIM_AbstractComponent:
				GroupComponent Reference
				PartComponent Reference

			CIM_Component:

			CIM_PolicyComponent:

			UNIX_PolicyRuleInPolicyGroup:


*/


/*
			 *** Methods ***

			CIM_AbstractComponent:

			CIM_Component:

			CIM_PolicyComponent:

			UNIX_PolicyRuleInPolicyGroup:


*/

#ifndef __UNIX_POLICYRULEINPOLICYGROUP_H
#define __UNIX_POLICYRULEINPOLICYGROUP_H


#include "CIM_PolicyComponent.h"
#include <AuthorizationRule/UNIX_AuthorizationRuleProvider.h>
#include <NetworkPolicyRule/UNIX_NetworkPolicyRuleProvider.h>
#include <IPsecRule/UNIX_IPsecRuleProvider.h>
#include <IKERule/UNIX_IKERuleProvider.h>
#include <AuthenticationRule/UNIX_AuthenticationRuleProvider.h>
#include <TierPolicyRule/UNIX_TierPolicyRuleProvider.h>

#include "UNIX_PolicyRuleInPolicyGroupDeps.h"




class UNIX_PolicyRuleInPolicyGroup :
	public CIM_PolicyComponent
{
public:

	UNIX_PolicyRuleInPolicyGroup();
	~UNIX_PolicyRuleInPolicyGroup();

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

#	include "UNIX_PolicyRuleInPolicyGroupPrivate.h"


};

#endif /* UNIX_POLICYRULEINPOLICYGROUP */
