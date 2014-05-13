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
CIM::Network::QoS
*/


/* **** Description *** */
/*
This association is a subclass of ServiceServiceDependency, and represents the reliance of a REDDropperService on one or more DropThresholdCalculationServices. The latter calculate average queue depth, based on the observed depths of a queue. The specific queue examined by each CalculationService is defined using the CalculationBasedOnQueue association.
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

			UNIX_CalculationServiceForDropper:


*/


/*
			 *** Methods ***

			CIM_Dependency:

			CIM_ProvidesServiceToElement:

			CIM_ServiceServiceDependency:

			UNIX_CalculationServiceForDropper:


*/

#ifndef __UNIX_CALCULATIONSERVICEFORDROPPER_H
#define __UNIX_CALCULATIONSERVICEFORDROPPER_H


#include "CIM_ServiceServiceDependency.h"
#include <DropThresholdCalculationService/UNIX_DropThresholdCalculationServiceProvider.h>
#include <REDDropperService/UNIX_REDDropperServiceProvider.h>

#include "UNIX_CalculationServiceForDropperDeps.h"




class UNIX_CalculationServiceForDropper :
	public CIM_ServiceServiceDependency
{
public:

	UNIX_CalculationServiceForDropper();
	~UNIX_CalculationServiceForDropper();

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


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _antecedent;
	CIMInstance _dependent;
	Uint16 _typeOfDependency;
	Boolean _restartService;

UNIX_DropThresholdCalculationService _antecedentDropThresholdCalculationService;
UNIX_DropThresholdCalculationServiceProvider _antecedentDropThresholdCalculationServiceProvider;

UNIX_REDDropperService _dependentREDDropperService;
UNIX_REDDropperServiceProvider _dependentREDDropperServiceProvider;

#	include "UNIX_CalculationServiceForDropperPrivate.h"


};

#endif /* UNIX_CALCULATIONSERVICEFORDROPPER */
