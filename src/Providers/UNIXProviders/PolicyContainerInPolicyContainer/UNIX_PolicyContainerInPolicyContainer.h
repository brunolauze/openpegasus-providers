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
A relationship that aggregates one or more lower-level ReusablePolicyContainer instances into a higher-level ReusablePolicyContainer.
*/


/*
			 *** Properties ***

			CIM_AbstractComponent:
				GroupComponent Reference
				PartComponent Reference

			CIM_Component:

			CIM_SystemComponent:

			UNIX_PolicyContainerInPolicyContainer:


*/


/*
			 *** Methods ***

			CIM_AbstractComponent:

			CIM_Component:

			CIM_SystemComponent:

			UNIX_PolicyContainerInPolicyContainer:


*/

#ifndef __UNIX_POLICYCONTAINERINPOLICYCONTAINER_H
#define __UNIX_POLICYCONTAINERINPOLICYCONTAINER_H


#include "CIM_SystemComponent.h"
#include <ReusablePolicyContainer/UNIX_ReusablePolicyContainerProvider.h>

#include "UNIX_PolicyContainerInPolicyContainerDeps.h"




class UNIX_PolicyContainerInPolicyContainer :
	public CIM_SystemComponent
{
public:

	UNIX_PolicyContainerInPolicyContainer();
	~UNIX_PolicyContainerInPolicyContainer();

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
	UNIX_ReusablePolicyContainer group_UNIX_ReusablePolicyContainer_Component;
	int group_UNIX_ReusablePolicyContainer_Index;
	bool endOf_UNIX_ReusablePolicyContainer_Group;

	UNIX_ReusablePolicyContainer part_UNIX_ReusablePolicyContainer_Component;
	int part_UNIX_ReusablePolicyContainer_Index;
	bool endOf_UNIX_ReusablePolicyContainer_Part;

#	include "UNIX_PolicyContainerInPolicyContainerPrivate.h"


};

#endif /* UNIX_POLICYCONTAINERINPOLICYCONTAINER */
