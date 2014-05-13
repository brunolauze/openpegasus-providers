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
2.7.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Network::OSPF
*/


/* **** Description *** */
/*
OSPFServiceConfiguration connects an OSPF service to its area configurations. The configurations are defined for the OSPF Service, and so do not make sense as stand alone objects. This is the reason for the Min (1), Max (1) cardinalities on OSPFService. They mandate the instantiation of the service and of this association for the referenced instance of OSPFAreaConfiguration. The area configuration acts as a focal point to bring together the router (indicated as a ComputerSystem with an instance of OSPFService, associated to the AreaConfiguration using this relationship), the area (indicated as an OSPFArea, associated to the AreaConfiguration using AreaOfConfiguration) and the address ranges for advertising (indicated as instances of RangeOfIPAddresses, associated to the AreaConfiguration using RangesOfConfiguration). There would be an instance of OSPFAreaConfiguration for each connected area of a router/OSPFService.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			UNIX_OSPFServiceConfiguration:


*/


/*
			 *** Methods ***

			CIM_Dependency:

			UNIX_OSPFServiceConfiguration:


*/

#ifndef __UNIX_OSPFSERVICECONFIGURATION_H
#define __UNIX_OSPFSERVICECONFIGURATION_H


#include "CIM_Dependency.h"
#include <OSPFService/UNIX_OSPFServiceProvider.h>
#include <OSPFAreaConfiguration/UNIX_OSPFAreaConfigurationProvider.h>

#include "UNIX_OSPFServiceConfigurationDeps.h"




class UNIX_OSPFServiceConfiguration :
	public CIM_Dependency
{
public:

	UNIX_OSPFServiceConfiguration();
	~UNIX_OSPFServiceConfiguration();

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

UNIX_OSPFService _antecedentOSPFService;
UNIX_OSPFServiceProvider _antecedentOSPFServiceProvider;

UNIX_OSPFAreaConfiguration _dependentOSPFAreaConfiguration;
UNIX_OSPFAreaConfigurationProvider _dependentOSPFAreaConfigurationProvider;

#	include "UNIX_OSPFServiceConfigurationPrivate.h"


};

#endif /* UNIX_OSPFSERVICECONFIGURATION */
