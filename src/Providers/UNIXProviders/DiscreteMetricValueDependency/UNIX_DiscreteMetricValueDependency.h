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


/* **** Experimental *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.13.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Metrics::BaseMetric
*/


/* **** Description *** */
/*
Association between a BaseMetricValue instance representing an analog metric value, and any DiscreteMetricValue instances representing discrete metric values based upon this analog metric value. 
For a definition of the discrete metrics concept and how the existence of instances of this association class control the existence of the discrete metric values, refer to the description of DiscreteMetricDefinition.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			UNIX_DiscreteMetricValueDependency:


*/


/*
			 *** Methods ***

			CIM_Dependency:

			UNIX_DiscreteMetricValueDependency:


*/

#ifndef __UNIX_DISCRETEMETRICVALUEDEPENDENCY_H
#define __UNIX_DISCRETEMETRICVALUEDEPENDENCY_H


#include "CIM_Dependency.h"
#include <DiscreteMetricValue/UNIX_DiscreteMetricValueProvider.h>
#include <AggregationMetricValue/UNIX_AggregationMetricValueProvider.h>

#include "UNIX_DiscreteMetricValueDependencyDeps.h"




class UNIX_DiscreteMetricValueDependency :
	public CIM_Dependency
{
public:

	UNIX_DiscreteMetricValueDependency();
	~UNIX_DiscreteMetricValueDependency();

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

UNIX_DiscreteMetricValue _antecedentDiscreteMetricValue;
UNIX_DiscreteMetricValueProvider _antecedentDiscreteMetricValueProvider;
UNIX_AggregationMetricValue _antecedentAggregationMetricValue;
UNIX_AggregationMetricValueProvider _antecedentAggregationMetricValueProvider;

UNIX_DiscreteMetricValue _dependentDiscreteMetricValue;
UNIX_DiscreteMetricValueProvider _dependentDiscreteMetricValueProvider;

#	include "UNIX_DiscreteMetricValueDependencyPrivate.h"


};

#endif /* UNIX_DISCRETEMETRICVALUEDEPENDENCY */
