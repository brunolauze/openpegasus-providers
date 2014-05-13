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
PolicyConditions may be aggregated into rules and into compound conditions. PolicyConditionStructure is the abstract aggregation class for the structuring of policy conditions. 

The Conditions aggregated by a PolicyRule or CompoundPolicyCondition are grouped into two levels of lists: either an ORed set of ANDed sets of conditions (DNF, the default) or an ANDed set of ORed sets of conditions (CNF). Individual PolicyConditions in these lists may be negated. The property ConditionListType specifies which of these two grouping schemes applies to a particular PolicyRule or CompoundPolicyCondition instance. 

One or more PolicyTimePeriodConditions may be among the conditions associated with a PolicyRule or CompoundPolicyCondition via the PolicyConditionStructure subclass association. In this case, the time periods are simply additional Conditions to be evaluated along with any others that are specified.
*/


/*
			 *** Properties ***

			CIM_AbstractComponent:
				GroupComponent Reference
				PartComponent Reference

			CIM_Component:

			CIM_PolicyComponent:

			CIM_PolicyConditionStructure:
				GroupNumber UInt16
				ConditionNegated Boolean


*/


/*
			 *** Methods ***

			CIM_AbstractComponent:

			CIM_Component:

			CIM_PolicyComponent:

			CIM_PolicyConditionStructure:


*/

#ifndef __CIM_POLICYCONDITIONSTRUCTURE_H
#define __CIM_POLICYCONDITIONSTRUCTURE_H


#include "CIM_PolicyComponent.h"


#ifndef PROPERTY_GROUP_NUMBER
#define PROPERTY_GROUP_NUMBER \
					"GroupNumber"
#endif

#ifndef PROPERTY_CONDITION_NEGATED
#define PROPERTY_CONDITION_NEGATED \
					"ConditionNegated"
#endif



class CIM_PolicyConditionStructure :
	public CIM_PolicyComponent
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

	virtual Boolean getGroupComponent(CIMProperty&) const=0;
	virtual CIMInstance getGroupComponent() const=0;
	virtual void setGroupComponent(CIMInstance&)=0;
	virtual Boolean getPartComponent(CIMProperty&) const=0;
	virtual CIMInstance getPartComponent() const=0;
	virtual void setPartComponent(CIMInstance&)=0;
	virtual Boolean getGroupNumber(CIMProperty&) const=0;
	virtual Uint16 getGroupNumber() const=0;
	virtual void setGroupNumber(Uint16&)=0;
	virtual Boolean getConditionNegated(CIMProperty&) const=0;
	virtual Boolean getConditionNegated() const=0;
	virtual void setConditionNegated(Boolean&)=0;


private:

};

#endif /* CIM_POLICYCONDITIONSTRUCTURE */
