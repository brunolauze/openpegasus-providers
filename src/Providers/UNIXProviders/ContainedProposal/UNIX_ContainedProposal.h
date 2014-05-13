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
2.8.0
*/


/* **** UMLPackagePath *** */
/*
CIM::IPsecPolicy
*/


/* **** Description *** */
/*
ContainedProposal holds an ordered list of SAProposals that make up an SANegotiationAction. If the referenced NegotiationAction is an IKEAction, then the SAProposal objects MUST be IKEProposals. If the referenced NegotiationAction object is an IPsecTransport/TunnelAction, then the referenced SAProposal objects MUST be IPsecProposals.
*/


/* **** MappingStrings *** */
/*
IPSP Policy Model.IETF|ContainedProposal
*/


/*
			 *** Properties ***

			CIM_AbstractComponent:
				GroupComponent Reference
				PartComponent Reference

			CIM_Component:

			UNIX_ContainedProposal:
				SequenceNumber UInt16


*/


/*
			 *** Methods ***

			CIM_AbstractComponent:

			CIM_Component:

			UNIX_ContainedProposal:


*/

#ifndef __UNIX_CONTAINEDPROPOSAL_H
#define __UNIX_CONTAINEDPROPOSAL_H


#include "CIM_Component.h"
#include <IKEAction/UNIX_IKEActionProvider.h>
#include <IPsecTransportAction/UNIX_IPsecTransportActionProvider.h>
#include <IPsecTunnelAction/UNIX_IPsecTunnelActionProvider.h>
#include <IPsecProposal/UNIX_IPsecProposalProvider.h>
#include <IKEProposal/UNIX_IKEProposalProvider.h>

#include "UNIX_ContainedProposalDeps.h"


#ifndef PROPERTY_SEQUENCE_NUMBER
#define PROPERTY_SEQUENCE_NUMBER \
					"SequenceNumber"
#endif



class UNIX_ContainedProposal :
	public CIM_Component
{
public:

	UNIX_ContainedProposal();
	~UNIX_ContainedProposal();

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
	virtual Boolean getSequenceNumber(CIMProperty&) const;
	virtual Uint16 getSequenceNumber() const;
	virtual void setSequenceNumber(Uint16&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _groupComponent;
	CIMInstance _partComponent;
	Uint16 _sequenceNumber;

	int groupIndex;
	int partIndex;
	UNIX_IKEAction group_UNIX_IKEAction_Component;
	int group_UNIX_IKEAction_Index;
	bool endOf_UNIX_IKEAction_Group;
	UNIX_IPsecTransportAction group_UNIX_IPsecTransportAction_Component;
	int group_UNIX_IPsecTransportAction_Index;
	bool endOf_UNIX_IPsecTransportAction_Group;
	UNIX_IPsecTunnelAction group_UNIX_IPsecTunnelAction_Component;
	int group_UNIX_IPsecTunnelAction_Index;
	bool endOf_UNIX_IPsecTunnelAction_Group;

	UNIX_IPsecProposal part_UNIX_IPsecProposal_Component;
	int part_UNIX_IPsecProposal_Index;
	bool endOf_UNIX_IPsecProposal_Part;
	UNIX_IKEProposal part_UNIX_IKEProposal_Component;
	int part_UNIX_IKEProposal_Index;
	bool endOf_UNIX_IKEProposal_Part;

#	include "UNIX_ContainedProposalPrivate.h"


};

#endif /* UNIX_CONTAINEDPROPOSAL */
