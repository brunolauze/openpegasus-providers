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
2.13.0
*/


/* **** UMLPackagePath *** */
/*
CIM::System::SystemElements
*/


/* **** Description *** */
/*
A ComputerSystem can aggregate another ComputerSystem. This association can be used to model MPP Systems with workstation frontends, an I2O subsystem embedded in a Unitary ComputerSystem, or a System that splits functionality between two processors, potentially running different Operating Systems. For example, if a CISC Processor and its associated OperatingSystem, are used for user interface and file support, and a RISC Processor and its OS are used for complex mathematical operations, this could be modeled as two ComputerSystems where one aggregates the other. In some cases, this could be modeled as a Cluster. The difference is the focus of the relationship. ComponentCS represents that unique and distinct ComputerSystems are aggregated by a higher level CS object. However, each of the component CSs are still distinguishable entities and are only viewed as such. Alternately, with a Cluster, the ComputerSystems that participate in it are inconsequential, when viewed through the 'Cluster System'. 

When instantiating or subclassing the ComponentCS relationship, care should be taken that the component ComputerSystem meets the definitional requirements of a ComputerSystem - ie, a functional whole that provides compute capabilities and aggregates System Devices, an OperatingSystem, etc.
*/


/*
			 *** Properties ***

			CIM_AbstractComponent:
				GroupComponent Reference
				PartComponent Reference

			CIM_Component:

			CIM_SystemComponent:

			UNIX_ComponentCS:


*/


/*
			 *** Methods ***

			CIM_AbstractComponent:

			CIM_Component:

			CIM_SystemComponent:

			UNIX_ComponentCS:


*/

#ifndef __UNIX_COMPONENTCS_H
#define __UNIX_COMPONENTCS_H


#include "CIM_SystemComponent.h"
#include <VirtualComputerSystem/UNIX_VirtualComputerSystemProvider.h>
#include <Cluster/UNIX_ClusterProvider.h>
#include <ComputerSystem/UNIX_ComputerSystemProvider.h>

#include "UNIX_ComponentCSDeps.h"




class UNIX_ComponentCS :
	public CIM_SystemComponent
{
public:

	UNIX_ComponentCS();
	~UNIX_ComponentCS();

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
	UNIX_VirtualComputerSystem group_UNIX_VirtualComputerSystem_Component;
	int group_UNIX_VirtualComputerSystem_Index;
	bool endOf_UNIX_VirtualComputerSystem_Group;
	UNIX_Cluster group_UNIX_Cluster_Component;
	int group_UNIX_Cluster_Index;
	bool endOf_UNIX_Cluster_Group;
	UNIX_ComputerSystem group_UNIX_ComputerSystem_Component;
	int group_UNIX_ComputerSystem_Index;
	bool endOf_UNIX_ComputerSystem_Group;

	UNIX_VirtualComputerSystem part_UNIX_VirtualComputerSystem_Component;
	int part_UNIX_VirtualComputerSystem_Index;
	bool endOf_UNIX_VirtualComputerSystem_Part;
	UNIX_Cluster part_UNIX_Cluster_Component;
	int part_UNIX_Cluster_Index;
	bool endOf_UNIX_Cluster_Part;
	UNIX_ComputerSystem part_UNIX_ComputerSystem_Component;
	int part_UNIX_ComputerSystem_Index;
	bool endOf_UNIX_ComputerSystem_Part;

#	include "UNIX_ComponentCSPrivate.h"


};

#endif /* UNIX_COMPONENTCS */
