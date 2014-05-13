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


/* **** Version *** */
/*
2.22.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Metrics::BaseMetric
*/


/* **** Description *** */
/*
Each CIM_AggregationMetricValue object represents the instance value of a metric defined by an instance of CIM_AggregationMetricDefinition. The properties inherited from CIM_BaseMetricValue provide the actual metric value. The properties introduced in CIM_AggregationMetricValue provide information about the interval over which the aggregation function was applied.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_BaseMetricValue:
				MetricDefinitionId String
				MeasuredElementName String
				TimeStamp DateTime
				Duration DateTime
				MetricValue String
				BreakdownDimension String
				BreakdownValue String
				Volatile Boolean

			UNIX_AggregationMetricValue:
				AggregationTimeStamp DateTime
				AggregationDuration DateTime


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_BaseMetricValue:

			UNIX_AggregationMetricValue:


*/

#ifndef __UNIX_AGGREGATIONMETRICVALUE_H
#define __UNIX_AGGREGATIONMETRICVALUE_H


#include "CIM_BaseMetricValue.h"

#include "UNIX_AggregationMetricValueDeps.h"


#ifndef PROPERTY_AGGREGATION_TIME_STAMP
#define PROPERTY_AGGREGATION_TIME_STAMP \
					"AggregationTimeStamp"
#endif

#ifndef PROPERTY_AGGREGATION_DURATION
#define PROPERTY_AGGREGATION_DURATION \
					"AggregationDuration"
#endif



class UNIX_AggregationMetricValue :
	public CIM_BaseMetricValue
{
public:

	UNIX_AggregationMetricValue();
	~UNIX_AggregationMetricValue();

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

	virtual Boolean getInstanceID(CIMProperty&) const;
	virtual String getInstanceID() const;
	virtual void setInstanceID(String&);
	virtual Boolean getCaption(CIMProperty&) const;
	virtual String getCaption() const;
	virtual void setCaption(String&);
	virtual Boolean getDescription(CIMProperty&) const;
	virtual String getDescription() const;
	virtual void setDescription(String&);
	virtual Boolean getElementName(CIMProperty&) const;
	virtual String getElementName() const;
	virtual void setElementName(String&);
	virtual Boolean getGeneration(CIMProperty&) const;
	virtual Uint64 getGeneration() const;
	virtual void setGeneration(Uint64&);
	virtual Boolean getMetricDefinitionId(CIMProperty&) const;
	virtual String getMetricDefinitionId() const;
	virtual void setMetricDefinitionId(String&);
	virtual Boolean getMeasuredElementName(CIMProperty&) const;
	virtual String getMeasuredElementName() const;
	virtual void setMeasuredElementName(String&);
	virtual Boolean getTimeStamp(CIMProperty&) const;
	virtual CIMDateTime getTimeStamp() const;
	virtual void setTimeStamp(CIMDateTime&);
	virtual Boolean getDuration(CIMProperty&) const;
	virtual CIMDateTime getDuration() const;
	virtual void setDuration(CIMDateTime&);
	virtual Boolean getMetricValue(CIMProperty&) const;
	virtual String getMetricValue() const;
	virtual void setMetricValue(String&);
	virtual Boolean getBreakdownDimension(CIMProperty&) const;
	virtual String getBreakdownDimension() const;
	virtual void setBreakdownDimension(String&);
	virtual Boolean getBreakdownValue(CIMProperty&) const;
	virtual String getBreakdownValue() const;
	virtual void setBreakdownValue(String&);
	virtual Boolean getVolatile(CIMProperty&) const;
	virtual Boolean getVolatile() const;
	virtual void setVolatile(Boolean&);
	virtual Boolean getAggregationTimeStamp(CIMProperty&) const;
	virtual CIMDateTime getAggregationTimeStamp() const;
	virtual void setAggregationTimeStamp(CIMDateTime&);
	virtual Boolean getAggregationDuration(CIMProperty&) const;
	virtual CIMDateTime getAggregationDuration() const;
	virtual void setAggregationDuration(CIMDateTime&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	String _metricDefinitionId;
	String _measuredElementName;
	CIMDateTime _timeStamp;
	CIMDateTime _duration;
	String _metricValue;
	String _breakdownDimension;
	String _breakdownValue;
	Boolean _volatile;
	CIMDateTime _aggregationTimeStamp;
	CIMDateTime _aggregationDuration;

#	include "UNIX_AggregationMetricValuePrivate.h"


};

#endif /* UNIX_AGGREGATIONMETRICVALUE */
