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


/* **** Version *** */
/*
2.13.0
*/


/* **** UMLPackagePath *** */
/*
CIM::System::SystemElements
*/


/* **** Description *** */
/*
Similar to the way that LogicalDevices are 'Realized' by PhysicalElements, ComputerSystem may be realized in one or more PhysicalPackages. The ComputerSystemPackage association explicitly defines this relationship.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			CIM_SystemPackaging:

			UNIX_ComputerSystemPackage:
				PlatformGUID String


*/


/*
			 *** Methods ***

			CIM_Dependency:

			CIM_SystemPackaging:

			UNIX_ComputerSystemPackage:


*/

#ifndef __UNIX_COMPUTERSYSTEMPACKAGE_H
#define __UNIX_COMPUTERSYSTEMPACKAGE_H


#include "CIM_SystemPackaging.h"
#include <Card/UNIX_CardProvider.h>
#include <SystemBusCard/UNIX_SystemBusCardProvider.h>
#include <Chassis/UNIX_ChassisProvider.h>
#include <Rack/UNIX_RackProvider.h>
#include <PackageLocation/UNIX_PackageLocationProvider.h>
#include <StorageMediaLocation/UNIX_StorageMediaLocationProvider.h>
#include <Magazine/UNIX_MagazineProvider.h>
#include <VirtualComputerSystem/UNIX_VirtualComputerSystemProvider.h>
#include <Cluster/UNIX_ClusterProvider.h>
#include <ComputerSystem/UNIX_ComputerSystemProvider.h>

#include "UNIX_ComputerSystemPackageDeps.h"


#ifndef PROPERTY_PLATFORM_G_U_ID
#define PROPERTY_PLATFORM_G_U_ID \
					"PlatformGUID"
#endif



class UNIX_ComputerSystemPackage :
	public CIM_SystemPackaging
{
public:

	UNIX_ComputerSystemPackage();
	~UNIX_ComputerSystemPackage();

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

	virtual Boolean getAntecedent(CIMProperty&) const;
	virtual CIMInstance getAntecedent() const;
	virtual void setAntecedent(CIMInstance&);
	virtual Boolean getDependent(CIMProperty&) const;
	virtual CIMInstance getDependent() const;
	virtual void setDependent(CIMInstance&);
	virtual Boolean getPlatformGUID(CIMProperty&) const;
	virtual String getPlatformGUID() const;
	virtual void setPlatformGUID(String&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _antecedent;
	CIMInstance _dependent;
	String _platformGUID;

UNIX_Card _antecedentCard;
UNIX_CardProvider _antecedentCardProvider;
UNIX_SystemBusCard _antecedentSystemBusCard;
UNIX_SystemBusCardProvider _antecedentSystemBusCardProvider;
UNIX_Chassis _antecedentChassis;
UNIX_ChassisProvider _antecedentChassisProvider;
UNIX_Rack _antecedentRack;
UNIX_RackProvider _antecedentRackProvider;
UNIX_PackageLocation _antecedentPackageLocation;
UNIX_PackageLocationProvider _antecedentPackageLocationProvider;
UNIX_StorageMediaLocation _antecedentStorageMediaLocation;
UNIX_StorageMediaLocationProvider _antecedentStorageMediaLocationProvider;
UNIX_Magazine _antecedentMagazine;
UNIX_MagazineProvider _antecedentMagazineProvider;

UNIX_VirtualComputerSystem _dependentVirtualComputerSystem;
UNIX_VirtualComputerSystemProvider _dependentVirtualComputerSystemProvider;
UNIX_Cluster _dependentCluster;
UNIX_ClusterProvider _dependentClusterProvider;
UNIX_ComputerSystem _dependentComputerSystem;
UNIX_ComputerSystemProvider _dependentComputerSystemProvider;

#	include "UNIX_ComputerSystemPackagePrivate.h"


};

#endif /* UNIX_COMPUTERSYSTEMPACKAGE */
