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
PolicyActionInPolicyAction is used to represent the compounding of policy actions into a higher-level policy action.
*/


/*
			 *** Properties ***

			CIM_AbstractComponent:
				GroupComponent Reference
				PartComponent Reference

			CIM_Component:

			CIM_PolicyComponent:

			CIM_PolicyActionStructure:
				ActionOrder UInt16

			UNIX_PolicyActionInPolicyAction:


*/


/*
			 *** Methods ***

			CIM_AbstractComponent:

			CIM_Component:

			CIM_PolicyComponent:

			CIM_PolicyActionStructure:

			UNIX_PolicyActionInPolicyAction:


*/

#ifndef __UNIX_POLICYACTIONINPOLICYACTION_H
#define __UNIX_POLICYACTIONINPOLICYACTION_H


#include "CIM_PolicyActionStructure.h"
#include <CompoundPolicyAction/UNIX_CompoundPolicyActionProvider.h>
#include <VendorPolicyAction/UNIX_VendorPolicyActionProvider.h>
#include <IKEAction/UNIX_IKEActionProvider.h>
#include <IPsecTransportAction/UNIX_IPsecTransportActionProvider.h>
#include <IPsecTunnelAction/UNIX_IPsecTunnelActionProvider.h>
#include <PreconfiguredTransportAction/UNIX_PreconfiguredTransportActionProvider.h>
#include <PreconfiguredTunnelAction/UNIX_PreconfiguredTunnelActionProvider.h>
#include <RejectConnectionAction/UNIX_RejectConnectionActionProvider.h>
#include <MethodAction/UNIX_MethodActionProvider.h>
#include <NetworkPacketAction/UNIX_NetworkPacketActionProvider.h>

#include "UNIX_PolicyActionInPolicyActionDeps.h"




class UNIX_PolicyActionInPolicyAction :
	public CIM_PolicyActionStructure
{
public:

	UNIX_PolicyActionInPolicyAction();
	~UNIX_PolicyActionInPolicyAction();

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
	virtual Boolean getActionOrder(CIMProperty&) const;
	virtual Uint16 getActionOrder() const;
	virtual void setActionOrder(Uint16&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _groupComponent;
	CIMInstance _partComponent;
	Uint16 _actionOrder;

	int groupIndex;
	int partIndex;
	UNIX_CompoundPolicyAction group_UNIX_CompoundPolicyAction_Component;
	int group_UNIX_CompoundPolicyAction_Index;
	bool endOf_UNIX_CompoundPolicyAction_Group;

	UNIX_VendorPolicyAction part_UNIX_VendorPolicyAction_Component;
	int part_UNIX_VendorPolicyAction_Index;
	bool endOf_UNIX_VendorPolicyAction_Part;
	UNIX_IKEAction part_UNIX_IKEAction_Component;
	int part_UNIX_IKEAction_Index;
	bool endOf_UNIX_IKEAction_Part;
	UNIX_IPsecTransportAction part_UNIX_IPsecTransportAction_Component;
	int part_UNIX_IPsecTransportAction_Index;
	bool endOf_UNIX_IPsecTransportAction_Part;
	UNIX_IPsecTunnelAction part_UNIX_IPsecTunnelAction_Component;
	int part_UNIX_IPsecTunnelAction_Index;
	bool endOf_UNIX_IPsecTunnelAction_Part;
	UNIX_PreconfiguredTransportAction part_UNIX_PreconfiguredTransportAction_Component;
	int part_UNIX_PreconfiguredTransportAction_Index;
	bool endOf_UNIX_PreconfiguredTransportAction_Part;
	UNIX_PreconfiguredTunnelAction part_UNIX_PreconfiguredTunnelAction_Component;
	int part_UNIX_PreconfiguredTunnelAction_Index;
	bool endOf_UNIX_PreconfiguredTunnelAction_Part;
	UNIX_RejectConnectionAction part_UNIX_RejectConnectionAction_Component;
	int part_UNIX_RejectConnectionAction_Index;
	bool endOf_UNIX_RejectConnectionAction_Part;
	UNIX_MethodAction part_UNIX_MethodAction_Component;
	int part_UNIX_MethodAction_Index;
	bool endOf_UNIX_MethodAction_Part;
	UNIX_NetworkPacketAction part_UNIX_NetworkPacketAction_Component;
	int part_UNIX_NetworkPacketAction_Index;
	bool endOf_UNIX_NetworkPacketAction_Part;
	UNIX_CompoundPolicyAction part_UNIX_CompoundPolicyAction_Component;
	int part_UNIX_CompoundPolicyAction_Index;
	bool endOf_UNIX_CompoundPolicyAction_Part;

#	include "UNIX_PolicyActionInPolicyActionPrivate.h"


};

#endif /* UNIX_POLICYACTIONINPOLICYACTION */
