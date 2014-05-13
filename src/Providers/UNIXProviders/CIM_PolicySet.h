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


/* **** Abstract *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.8.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Policy
*/


/* **** Description *** */
/*
PolicySet is an abstract class that represents a set of policies that form a coherent set. The set of contained policies has a common decision strategy and a common set of policy roles (defined via the PolicySetInRole Collection association). Subclasses include PolicyGroup and PolicyRule.
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


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Policy:

			CIM_PolicySet:


*/

#ifndef __CIM_POLICYSET_H
#define __CIM_POLICYSET_H


#include "CIM_Policy.h"


#ifndef PROPERTY_POLICY_DECISION_STRATEGY
#define PROPERTY_POLICY_DECISION_STRATEGY \
					"PolicyDecisionStrategy"
#endif

#ifndef PROPERTY_POLICY_ROLES
#define PROPERTY_POLICY_ROLES \
					"PolicyRoles"
#endif

#ifndef PROPERTY_ENABLED
#define PROPERTY_ENABLED \
					"Enabled"
#endif



class CIM_PolicySet :
	public CIM_Policy
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

	virtual Boolean getPolicyDecisionStrategy(CIMProperty&) const=0;
	virtual Uint16 getPolicyDecisionStrategy() const=0;
	virtual void setPolicyDecisionStrategy(Uint16&)=0;
	virtual Boolean getPolicyRoles(CIMProperty&) const=0;
	virtual Array<String> getPolicyRoles() const=0;
	virtual void setPolicyRoles(Array<String>&)=0;
	virtual Boolean getEnabled(CIMProperty&) const=0;
	virtual Uint16 getEnabled() const=0;
	virtual void setEnabled(Uint16&)=0;


private:

};

#endif /* CIM_POLICYSET */
