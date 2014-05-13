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


/* **** Composition *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.7.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Network::QoS
*/


/* **** Description *** */
/*
This association represents the relationship between a PacketSchedulingService and the set of SchedulingElements that tie it to its inputs (either QueuingServices or other PacketSchedulingServices).
*/


/*
			 *** Properties ***

			CIM_AbstractComponent:
				GroupComponent Reference
				PartComponent Reference

			CIM_Component:

			UNIX_ElementInSchedulingService:


*/


/*
			 *** Methods ***

			CIM_AbstractComponent:

			CIM_Component:

			UNIX_ElementInSchedulingService:


*/

#ifndef __UNIX_ELEMENTINSCHEDULINGSERVICE_H
#define __UNIX_ELEMENTINSCHEDULINGSERVICE_H


#include "CIM_Component.h"
#include <PacketSchedulingService/UNIX_PacketSchedulingServiceProvider.h>
#include <PrioritySchedulingElement/UNIX_PrioritySchedulingElementProvider.h>
#include <BoundedPrioritySchedulingElement/UNIX_BoundedPrioritySchedulingElementProvider.h>
#include <AllocationSchedulingElement/UNIX_AllocationSchedulingElementProvider.h>
#include <WRRSchedulingElement/UNIX_WRRSchedulingElementProvider.h>

#include "UNIX_ElementInSchedulingServiceDeps.h"




class UNIX_ElementInSchedulingService :
	public CIM_Component
{
public:

	UNIX_ElementInSchedulingService();
	~UNIX_ElementInSchedulingService();

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
	UNIX_PacketSchedulingService group_UNIX_PacketSchedulingService_Component;
	int group_UNIX_PacketSchedulingService_Index;
	bool endOf_UNIX_PacketSchedulingService_Group;

	UNIX_PrioritySchedulingElement part_UNIX_PrioritySchedulingElement_Component;
	int part_UNIX_PrioritySchedulingElement_Index;
	bool endOf_UNIX_PrioritySchedulingElement_Part;
	UNIX_BoundedPrioritySchedulingElement part_UNIX_BoundedPrioritySchedulingElement_Component;
	int part_UNIX_BoundedPrioritySchedulingElement_Index;
	bool endOf_UNIX_BoundedPrioritySchedulingElement_Part;
	UNIX_AllocationSchedulingElement part_UNIX_AllocationSchedulingElement_Component;
	int part_UNIX_AllocationSchedulingElement_Index;
	bool endOf_UNIX_AllocationSchedulingElement_Part;
	UNIX_WRRSchedulingElement part_UNIX_WRRSchedulingElement_Component;
	int part_UNIX_WRRSchedulingElement_Index;
	bool endOf_UNIX_WRRSchedulingElement_Part;

#	include "UNIX_ElementInSchedulingServicePrivate.h"


};

#endif /* UNIX_ELEMENTINSCHEDULINGSERVICE */
