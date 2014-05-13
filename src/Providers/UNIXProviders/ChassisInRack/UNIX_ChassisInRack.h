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
2.21.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Physical::Package
*/


/* **** Description *** */
/*
Racks, as simple enclosures, contain Chassis that provide the physical componentry realizing processing nodes, storage devices, UPSs, etc. The ChassisInRack association makes explicit the 'containing' relationship between the Rack and the Chassis.
*/


/*
			 *** Properties ***

			CIM_AbstractComponent:
				GroupComponent Reference
				PartComponent Reference

			CIM_Component:

			CIM_Container:
				LocationWithinContainer String

			UNIX_ChassisInRack:
				BottomU UInt16


*/


/*
			 *** Methods ***

			CIM_AbstractComponent:

			CIM_Component:

			CIM_Container:

			UNIX_ChassisInRack:


*/

#ifndef __UNIX_CHASSISINRACK_H
#define __UNIX_CHASSISINRACK_H


#include "CIM_Container.h"
#include <Rack/UNIX_RackProvider.h>
#include <Chassis/UNIX_ChassisProvider.h>

#include "UNIX_ChassisInRackDeps.h"


#ifndef PROPERTY_BOTTOM_U
#define PROPERTY_BOTTOM_U \
					"BottomU"
#endif



class UNIX_ChassisInRack :
	public CIM_Container
{
public:

	UNIX_ChassisInRack();
	~UNIX_ChassisInRack();

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
	virtual Boolean getLocationWithinContainer(CIMProperty&) const;
	virtual String getLocationWithinContainer() const;
	virtual void setLocationWithinContainer(String&);
	virtual Boolean getBottomU(CIMProperty&) const;
	virtual Uint16 getBottomU() const;
	virtual void setBottomU(Uint16&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _groupComponent;
	CIMInstance _partComponent;
	String _locationWithinContainer;
	Uint16 _bottomU;

	int groupIndex;
	int partIndex;
	UNIX_Rack group_UNIX_Rack_Component;
	int group_UNIX_Rack_Index;
	bool endOf_UNIX_Rack_Group;

	UNIX_Chassis part_UNIX_Chassis_Component;
	int part_UNIX_Chassis_Index;
	bool endOf_UNIX_Chassis_Part;

#	include "UNIX_ChassisInRackPrivate.h"


};

#endif /* UNIX_CHASSISINRACK */
