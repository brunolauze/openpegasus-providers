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


/* **** Deprecated *** */
/*
CIM_HostedService
*/


/* **** Version *** */
/*
2.7.1
*/


/* **** UMLPackagePath *** */
/*
CIM::Network::RoutingForwarding
*/


/* **** Description *** */
/*
This is a specialization of CIM_HostedService, which is an association between a Service and the System on which the functionality resides. The class, HostedRoutingServices, is deprecated since it provides no additional semantics over HostedService, and unecessarily restricts the Service to a single ComputerSystem, when the Service could reside in a Network or other higher level System.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			CIM_HostedDependency:

			CIM_HostedService:

			UNIX_HostedRoutingServices:


*/


/*
			 *** Methods ***

			CIM_Dependency:

			CIM_HostedDependency:

			CIM_HostedService:

			UNIX_HostedRoutingServices:


*/

#ifndef __UNIX_HOSTEDROUTINGSERVICES_H
#define __UNIX_HOSTEDROUTINGSERVICES_H


#include "CIM_HostedService.h"
#include <VirtualComputerSystem/UNIX_VirtualComputerSystemProvider.h>
#include <Cluster/UNIX_ClusterProvider.h>
#include <ComputerSystem/UNIX_ComputerSystemProvider.h>
#include <BGPService/UNIX_BGPServiceProvider.h>
#include <OSPFService/UNIX_OSPFServiceProvider.h>

#include "UNIX_HostedRoutingServicesDeps.h"




class UNIX_HostedRoutingServices :
	public CIM_HostedService
{
public:

	UNIX_HostedRoutingServices();
	~UNIX_HostedRoutingServices();

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

UNIX_VirtualComputerSystem _antecedentVirtualComputerSystem;
UNIX_VirtualComputerSystemProvider _antecedentVirtualComputerSystemProvider;
UNIX_Cluster _antecedentCluster;
UNIX_ClusterProvider _antecedentClusterProvider;
UNIX_ComputerSystem _antecedentComputerSystem;
UNIX_ComputerSystemProvider _antecedentComputerSystemProvider;

UNIX_BGPService _dependentBGPService;
UNIX_BGPServiceProvider _dependentBGPServiceProvider;
UNIX_OSPFService _dependentOSPFService;
UNIX_OSPFServiceProvider _dependentOSPFServiceProvider;

#	include "UNIX_HostedRoutingServicesPrivate.h"


};

#endif /* UNIX_HOSTEDROUTINGSERVICES */