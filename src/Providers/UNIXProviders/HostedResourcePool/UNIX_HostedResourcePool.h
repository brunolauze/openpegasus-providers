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
2.22.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Core::Resource
*/


/* **** Description *** */
/*
HostedResourcePool is a specialization of the SystemComponent association that establishes that the ResourcePool is defined in the context of the System
*/


/*
			 *** Properties ***

			CIM_AbstractComponent:
				GroupComponent Reference
				PartComponent Reference

			CIM_Component:

			CIM_SystemComponent:

			UNIX_HostedResourcePool:


*/


/*
			 *** Methods ***

			CIM_AbstractComponent:

			CIM_Component:

			CIM_SystemComponent:

			UNIX_HostedResourcePool:


*/

#ifndef __UNIX_HOSTEDRESOURCEPOOL_H
#define __UNIX_HOSTEDRESOURCEPOOL_H


#include "CIM_SystemComponent.h"
#include <ComputerSystem/UNIX_ComputerSystemProvider.h>
#include <ResourcePool/UNIX_ResourcePoolProvider.h>

#include "UNIX_HostedResourcePoolDeps.h"




class UNIX_HostedResourcePool :
	public CIM_SystemComponent
{
public:

	UNIX_HostedResourcePool();
	~UNIX_HostedResourcePool();

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
	UNIX_ComputerSystem group_UNIX_ComputerSystem_Component;
	int group_UNIX_ComputerSystem_Index;
	bool endOf_UNIX_ComputerSystem_Group;

	UNIX_ResourcePool part_UNIX_ResourcePool_Component;
	int part_UNIX_ResourcePool_Index;
	bool endOf_UNIX_ResourcePool_Part;

#	include "UNIX_HostedResourcePoolPrivate.h"


};

#endif /* UNIX_HOSTEDRESOURCEPOOL */
