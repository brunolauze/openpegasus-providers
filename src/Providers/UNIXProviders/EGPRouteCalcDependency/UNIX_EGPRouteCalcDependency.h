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
CIM::Network::BGP
*/


/* **** Description *** */
/*
This is a specialization of ServiceServiceDependency, and captures the dependency that external gateway protocols (such as BGP) have on interior gateway protocols (such as OSPF).
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			CIM_ProvidesServiceToElement:

			CIM_ServiceServiceDependency:
				TypeOfDependency UInt16
				RestartService Boolean

			UNIX_EGPRouteCalcDependency:
				IGPInjection UInt16


*/


/*
			 *** Methods ***

			CIM_Dependency:

			CIM_ProvidesServiceToElement:

			CIM_ServiceServiceDependency:

			UNIX_EGPRouteCalcDependency:


*/

#ifndef __UNIX_EGPROUTECALCDEPENDENCY_H
#define __UNIX_EGPROUTECALCDEPENDENCY_H


#include "CIM_ServiceServiceDependency.h"
#include <BGPService/UNIX_BGPServiceProvider.h>
#include <OSPFService/UNIX_OSPFServiceProvider.h>

#include "UNIX_EGPRouteCalcDependencyDeps.h"


#ifndef PROPERTY_I_G_P_INJECTION
#define PROPERTY_I_G_P_INJECTION \
					"IGPInjection"
#endif



class UNIX_EGPRouteCalcDependency :
	public CIM_ServiceServiceDependency
{
public:

	UNIX_EGPRouteCalcDependency();
	~UNIX_EGPRouteCalcDependency();

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
	virtual Boolean getTypeOfDependency(CIMProperty&) const;
	virtual Uint16 getTypeOfDependency() const;
	virtual void setTypeOfDependency(Uint16&);
	virtual Boolean getRestartService(CIMProperty&) const;
	virtual Boolean getRestartService() const;
	virtual void setRestartService(Boolean&);
	virtual Boolean getIGPInjection(CIMProperty&) const;
	virtual Uint16 getIGPInjection() const;
	virtual void setIGPInjection(Uint16&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _antecedent;
	CIMInstance _dependent;
	Uint16 _typeOfDependency;
	Boolean _restartService;
	Uint16 _iGPInjection;

UNIX_BGPService _antecedentBGPService;
UNIX_BGPServiceProvider _antecedentBGPServiceProvider;
UNIX_OSPFService _antecedentOSPFService;
UNIX_OSPFServiceProvider _antecedentOSPFServiceProvider;

UNIX_BGPService _dependentBGPService;
UNIX_BGPServiceProvider _dependentBGPServiceProvider;
UNIX_OSPFService _dependentOSPFService;
UNIX_OSPFServiceProvider _dependentOSPFServiceProvider;

#	include "UNIX_EGPRouteCalcDependencyPrivate.h"


};

#endif /* UNIX_EGPROUTECALCDEPENDENCY */
