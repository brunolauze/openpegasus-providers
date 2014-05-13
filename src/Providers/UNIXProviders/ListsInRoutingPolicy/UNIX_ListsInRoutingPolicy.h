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
CIM::Network::RoutingForwarding
*/


/* **** Description *** */
/*
This is a specialization of the CIM_Component aggregation which is used to define a set of FilterLists that are aggregated by a particular RoutingPolicy.
*/


/*
			 *** Properties ***

			CIM_AbstractComponent:
				GroupComponent Reference
				PartComponent Reference

			CIM_Component:

			UNIX_ListsInRoutingPolicy:
				ListSequence UInt16


*/


/*
			 *** Methods ***

			CIM_AbstractComponent:

			CIM_Component:

			UNIX_ListsInRoutingPolicy:


*/

#ifndef __UNIX_LISTSINROUTINGPOLICY_H
#define __UNIX_LISTSINROUTINGPOLICY_H


#include "CIM_Component.h"
#include <RoutingPolicy/UNIX_RoutingPolicyProvider.h>
#include <FilterList/UNIX_FilterListProvider.h>

#include "UNIX_ListsInRoutingPolicyDeps.h"


#ifndef PROPERTY_LIST_SEQUENCE
#define PROPERTY_LIST_SEQUENCE \
					"ListSequence"
#endif



class UNIX_ListsInRoutingPolicy :
	public CIM_Component
{
public:

	UNIX_ListsInRoutingPolicy();
	~UNIX_ListsInRoutingPolicy();

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
	virtual Boolean getListSequence(CIMProperty&) const;
	virtual Uint16 getListSequence() const;
	virtual void setListSequence(Uint16&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _groupComponent;
	CIMInstance _partComponent;
	Uint16 _listSequence;

	int groupIndex;
	int partIndex;
	UNIX_RoutingPolicy group_UNIX_RoutingPolicy_Component;
	int group_UNIX_RoutingPolicy_Index;
	bool endOf_UNIX_RoutingPolicy_Group;

	UNIX_FilterList part_UNIX_FilterList_Component;
	int part_UNIX_FilterList_Index;
	bool endOf_UNIX_FilterList_Part;

#	include "UNIX_ListsInRoutingPolicyPrivate.h"


};

#endif /* UNIX_LISTSINROUTINGPOLICY */
