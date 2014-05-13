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
2.6.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Policy
*/


/* **** Description *** */
/*
CIM_PolicyComponent is a generic association used to establish 'part of' relationships between the subclasses of CIM_Policy. For example, the PolicyConditionInPolicyRule association defines that PolicyConditions are part of a PolicyRule.
*/


/*
			 *** Properties ***

			CIM_AbstractComponent:
				GroupComponent Reference
				PartComponent Reference

			CIM_Component:

			CIM_PolicyComponent:


*/


/*
			 *** Methods ***

			CIM_AbstractComponent:

			CIM_Component:

			CIM_PolicyComponent:


*/

#ifndef __CIM_POLICYCOMPONENT_H
#define __CIM_POLICYCOMPONENT_H


#include "CIM_Component.h"




class CIM_PolicyComponent :
	public CIM_Component
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


private:

};

#endif /* CIM_POLICYCOMPONENT */