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
CIM::Network::BGP
*/


/* **** Description *** */
/*
The BGP speakers in an AS are required to be fully meshed. This can lead to a huge number of TCP connections per router. One way to reduce the peering requirements is to use a confederation. A confederation effectively partitions one AS into a group of 'sub-ASs'. This enables all of the benefits of IBGP to be applied inside the confederation, while enabling EBGP to be run between each confederation. It also enables certain BGP attribute values to be preserved between confederations. However, to the outside world, the AS with its confederations appear to be a single AS.
*/


/*
			 *** Properties ***

			CIM_AbstractComponent:
				GroupComponent Reference
				PartComponent Reference

			CIM_Component:

			CIM_SystemComponent:

			UNIX_Confederation:
				ParentASNumber UInt32
				ChildASNumber UInt32


*/


/*
			 *** Methods ***

			CIM_AbstractComponent:

			CIM_Component:

			CIM_SystemComponent:

			UNIX_Confederation:


*/

#ifndef __UNIX_CONFEDERATION_H
#define __UNIX_CONFEDERATION_H


#include "CIM_SystemComponent.h"
#include <AutonomousSystem/UNIX_AutonomousSystemProvider.h>

#include "UNIX_ConfederationDeps.h"


#ifndef PROPERTY_PARENT_A_S_NUMBER
#define PROPERTY_PARENT_A_S_NUMBER \
					"ParentASNumber"
#endif

#ifndef PROPERTY_CHILD_A_S_NUMBER
#define PROPERTY_CHILD_A_S_NUMBER \
					"ChildASNumber"
#endif



class UNIX_Confederation :
	public CIM_SystemComponent
{
public:

	UNIX_Confederation();
	~UNIX_Confederation();

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
	virtual Boolean getParentASNumber(CIMProperty&) const;
	virtual Uint32 getParentASNumber() const;
	virtual void setParentASNumber(Uint32&);
	virtual Boolean getChildASNumber(CIMProperty&) const;
	virtual Uint32 getChildASNumber() const;
	virtual void setChildASNumber(Uint32&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _groupComponent;
	CIMInstance _partComponent;
	Uint32 _parentASNumber;
	Uint32 _childASNumber;

	int groupIndex;
	int partIndex;
	UNIX_AutonomousSystem group_UNIX_AutonomousSystem_Component;
	int group_UNIX_AutonomousSystem_Index;
	bool endOf_UNIX_AutonomousSystem_Group;

	UNIX_AutonomousSystem part_UNIX_AutonomousSystem_Component;
	int part_UNIX_AutonomousSystem_Index;
	bool endOf_UNIX_AutonomousSystem_Part;

#	include "UNIX_ConfederationPrivate.h"


};

#endif /* UNIX_CONFEDERATION */
