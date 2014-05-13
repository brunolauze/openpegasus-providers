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
2.6.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Physical::Link
*/


/* **** Description *** */
/*
The ElementsLinked association indicates which Physical Elements are cabled together by a PhysicalLink.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			UNIX_ElementsLinked:


*/


/*
			 *** Methods ***

			CIM_Dependency:

			UNIX_ElementsLinked:


*/

#ifndef __UNIX_ELEMENTSLINKED_H
#define __UNIX_ELEMENTSLINKED_H


#include "CIM_Dependency.h"
#include <PhysicalLink/UNIX_PhysicalLinkProvider.h>
#include <PhysicalMedia/UNIX_PhysicalMediaProvider.h>
#include <PhysicalTape/UNIX_PhysicalTapeProvider.h>
#include <Chip/UNIX_ChipProvider.h>
#include <PhysicalMemory/UNIX_PhysicalMemoryProvider.h>
#include <PhysicalConnector/UNIX_PhysicalConnectorProvider.h>
#include <Slot/UNIX_SlotProvider.h>
#include <Card/UNIX_CardProvider.h>
#include <SystemBusCard/UNIX_SystemBusCardProvider.h>
#include <Chassis/UNIX_ChassisProvider.h>
#include <Rack/UNIX_RackProvider.h>
#include <PackageLocation/UNIX_PackageLocationProvider.h>
#include <StorageMediaLocation/UNIX_StorageMediaLocationProvider.h>
#include <Magazine/UNIX_MagazineProvider.h>
#include <ComponentBay/UNIX_ComponentBayProvider.h>

#include "UNIX_ElementsLinkedDeps.h"




class UNIX_ElementsLinked :
	public CIM_Dependency
{
public:

	UNIX_ElementsLinked();
	~UNIX_ElementsLinked();

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


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _antecedent;
	CIMInstance _dependent;

UNIX_PhysicalLink _antecedentPhysicalLink;
UNIX_PhysicalLinkProvider _antecedentPhysicalLinkProvider;

UNIX_PhysicalMedia _dependentPhysicalMedia;
UNIX_PhysicalMediaProvider _dependentPhysicalMediaProvider;
UNIX_PhysicalTape _dependentPhysicalTape;
UNIX_PhysicalTapeProvider _dependentPhysicalTapeProvider;
UNIX_Chip _dependentChip;
UNIX_ChipProvider _dependentChipProvider;
UNIX_PhysicalMemory _dependentPhysicalMemory;
UNIX_PhysicalMemoryProvider _dependentPhysicalMemoryProvider;
UNIX_PhysicalConnector _dependentPhysicalConnector;
UNIX_PhysicalConnectorProvider _dependentPhysicalConnectorProvider;
UNIX_Slot _dependentSlot;
UNIX_SlotProvider _dependentSlotProvider;
UNIX_PhysicalLink _dependentPhysicalLink;
UNIX_PhysicalLinkProvider _dependentPhysicalLinkProvider;
UNIX_Card _dependentCard;
UNIX_CardProvider _dependentCardProvider;
UNIX_SystemBusCard _dependentSystemBusCard;
UNIX_SystemBusCardProvider _dependentSystemBusCardProvider;
UNIX_Chassis _dependentChassis;
UNIX_ChassisProvider _dependentChassisProvider;
UNIX_Rack _dependentRack;
UNIX_RackProvider _dependentRackProvider;
UNIX_PackageLocation _dependentPackageLocation;
UNIX_PackageLocationProvider _dependentPackageLocationProvider;
UNIX_StorageMediaLocation _dependentStorageMediaLocation;
UNIX_StorageMediaLocationProvider _dependentStorageMediaLocationProvider;
UNIX_Magazine _dependentMagazine;
UNIX_MagazineProvider _dependentMagazineProvider;
UNIX_ComponentBay _dependentComponentBay;
UNIX_ComponentBayProvider _dependentComponentBayProvider;

#	include "UNIX_ElementsLinkedPrivate.h"


};

#endif /* UNIX_ELEMENTSLINKED */
