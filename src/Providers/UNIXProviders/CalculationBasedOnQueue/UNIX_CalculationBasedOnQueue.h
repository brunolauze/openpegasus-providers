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
This association establishes a dependency relationship between a QueuingService and an instance of the DropThresholdCalculationService class. The queue's current depth is used by the CalculationService in calculating an average/smoothed queue depth.
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

			UNIX_CalculationBasedOnQueue:


*/


/*
			 *** Methods ***

			CIM_Dependency:

			CIM_ProvidesServiceToElement:

			CIM_ServiceServiceDependency:

			UNIX_CalculationBasedOnQueue:


*/

#ifndef __UNIX_CALCULATIONBASEDONQUEUE_H
#define __UNIX_CALCULATIONBASEDONQUEUE_H


#include "CIM_ServiceServiceDependency.h"
#include <QueuingService/UNIX_QueuingServiceProvider.h>
#include <DropThresholdCalculationService/UNIX_DropThresholdCalculationServiceProvider.h>

#include "UNIX_CalculationBasedOnQueueDeps.h"




class UNIX_CalculationBasedOnQueue :
	public CIM_ServiceServiceDependency
{
public:

	UNIX_CalculationBasedOnQueue();
	~UNIX_CalculationBasedOnQueue();

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

UNIX_QueuingService _antecedentQueuingService;
UNIX_QueuingServiceProvider _antecedentQueuingServiceProvider;

UNIX_DropThresholdCalculationService _dependentDropThresholdCalculationService;
UNIX_DropThresholdCalculationServiceProvider _dependentDropThresholdCalculationServiceProvider;

#	include "UNIX_CalculationBasedOnQueuePrivate.h"


};

#endif /* UNIX_CALCULATIONBASEDONQUEUE */
