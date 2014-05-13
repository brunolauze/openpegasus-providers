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
CIM::Physical::Connector
*/


/* **** Description *** */
/*
PhysicalPackages contain Connectors as well as other PhysicalElements. The ConnectorOnPackage association makes explicit the containment relationship between Connectors and Packages.
*/


/*
			 *** Properties ***

			CIM_AbstractComponent:
				GroupComponent Reference
				PartComponent Reference

			CIM_Component:

			CIM_Container:
				LocationWithinContainer String

			UNIX_ConnectorOnPackage:


*/


/*
			 *** Methods ***

			CIM_AbstractComponent:

			CIM_Component:

			CIM_Container:

			UNIX_ConnectorOnPackage:


*/

#ifndef __UNIX_CONNECTORONPACKAGE_H
#define __UNIX_CONNECTORONPACKAGE_H


#include "CIM_Container.h"
#include <Card/UNIX_CardProvider.h>
#include <SystemBusCard/UNIX_SystemBusCardProvider.h>
#include <Chassis/UNIX_ChassisProvider.h>
#include <Rack/UNIX_RackProvider.h>
#include <PackageLocation/UNIX_PackageLocationProvider.h>
#include <StorageMediaLocation/UNIX_StorageMediaLocationProvider.h>
#include <Magazine/UNIX_MagazineProvider.h>
#include <PhysicalConnector/UNIX_PhysicalConnectorProvider.h>

#include "UNIX_ConnectorOnPackageDeps.h"




class UNIX_ConnectorOnPackage :
	public CIM_Container
{
public:

	UNIX_ConnectorOnPackage();
	~UNIX_ConnectorOnPackage();

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


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _groupComponent;
	CIMInstance _partComponent;
	String _locationWithinContainer;

	int groupIndex;
	int partIndex;
	UNIX_Card group_UNIX_Card_Component;
	int group_UNIX_Card_Index;
	bool endOf_UNIX_Card_Group;
	UNIX_SystemBusCard group_UNIX_SystemBusCard_Component;
	int group_UNIX_SystemBusCard_Index;
	bool endOf_UNIX_SystemBusCard_Group;
	UNIX_Chassis group_UNIX_Chassis_Component;
	int group_UNIX_Chassis_Index;
	bool endOf_UNIX_Chassis_Group;
	UNIX_Rack group_UNIX_Rack_Component;
	int group_UNIX_Rack_Index;
	bool endOf_UNIX_Rack_Group;
	UNIX_PackageLocation group_UNIX_PackageLocation_Component;
	int group_UNIX_PackageLocation_Index;
	bool endOf_UNIX_PackageLocation_Group;
	UNIX_StorageMediaLocation group_UNIX_StorageMediaLocation_Component;
	int group_UNIX_StorageMediaLocation_Index;
	bool endOf_UNIX_StorageMediaLocation_Group;
	UNIX_Magazine group_UNIX_Magazine_Component;
	int group_UNIX_Magazine_Index;
	bool endOf_UNIX_Magazine_Group;

	UNIX_PhysicalConnector part_UNIX_PhysicalConnector_Component;
	int part_UNIX_PhysicalConnector_Index;
	bool endOf_UNIX_PhysicalConnector_Part;

#	include "UNIX_ConnectorOnPackagePrivate.h"


};

#endif /* UNIX_CONNECTORONPACKAGE */
