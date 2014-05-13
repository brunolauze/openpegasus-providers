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
2.10.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Core::Physical
*/


/* **** Description *** */
/*
Similar to the way that LogicalDevices are 'Realized' by PhysicalElements, Systems can be associated with specific packaging or PhysicalElements. This association explicitly defines the relationship between a System and its packaging.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			CIM_SystemPackaging:


*/


/*
			 *** Methods ***

			CIM_Dependency:

			CIM_SystemPackaging:


*/

#ifndef __CIM_SYSTEMPACKAGING_H
#define __CIM_SYSTEMPACKAGING_H


#include "CIM_Dependency.h"
#include <PhysicalMedia/UNIX_PhysicalMediaProvider.h>
#include <PhysicalTape/UNIX_PhysicalTapeProvider.h>
#include <Chip/UNIX_ChipProvider.h>
#include <PhysicalMemory/UNIX_PhysicalMemoryProvider.h>
#include <PhysicalConnector/UNIX_PhysicalConnectorProvider.h>
#include <Slot/UNIX_SlotProvider.h>
#include <PhysicalLink/UNIX_PhysicalLinkProvider.h>
#include <Card/UNIX_CardProvider.h>
#include <SystemBusCard/UNIX_SystemBusCardProvider.h>
#include <Chassis/UNIX_ChassisProvider.h>
#include <Rack/UNIX_RackProvider.h>
#include <PackageLocation/UNIX_PackageLocationProvider.h>
#include <StorageMediaLocation/UNIX_StorageMediaLocationProvider.h>
#include <Magazine/UNIX_MagazineProvider.h>
#include <ComponentBay/UNIX_ComponentBayProvider.h>
#include <ComputerSystem/UNIX_ComputerSystemProvider.h>




class CIM_SystemPackaging :
	public CIM_Dependency
{
public:

	virtual Boolean initialize()=0;
	virtual Boolean load(int&)=0;
	virtual Boolean finalize()=0;
	virtual Boolean find(const Array<CIMKeyBinding>&)=0;
	virtual Boolean validateKey(CIMKeyBinding&) const=0;
	virtual void setScope(CIMName)=0;
	virtual void setCIMOMHandle(CIMOMHandle&)=0;
	virtual void clearInstance()=0;
	virtual Boolean loadInstance(const CIMInstance&)=0;
	virtual Boolean createInstance(const OperationContext&)=0;
	virtual Boolean modifyInstance(const OperationContext&)=0;
	virtual Boolean deleteInstance(const OperationContext&)=0;
	virtual Boolean validateInstance()=0;

	virtual Boolean getAntecedent(CIMProperty&) const=0;
	virtual CIMInstance getAntecedent() const=0;
	virtual void setAntecedent(CIMInstance&)=0;
	virtual Boolean getDependent(CIMProperty&) const=0;
	virtual CIMInstance getDependent() const=0;
	virtual void setDependent(CIMInstance&)=0;


private:

};

#endif /* CIM_SYSTEMPACKAGING */
