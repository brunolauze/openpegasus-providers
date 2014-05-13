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
2.19.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Metrics::BaseMetric
*/


/* **** Description *** */
/*
Each CIM_BaseMetricValue object represents the instance value of a metric. Since the gathering of metric information can involve large quantities of information there may be many instances of this class. The use of this class as an instrumentation source may be inefficient unless the rate of metrics are known. The length of time a CIM_BaseMetricValue instance exists after the metric information is captured is not defined and is implementation dependent. 
Most metric data values change over time. There are two ways of mapping this into CIM_BaseMetricValue objects: The value for the next point in time may use the same object and just change its properties (such as the value or timestamp), or the existing objects remain unchanged and a new object is created for the new point in time. The first method is typically used for snapshot data and the second method for historical data. Which method is used, is indicated by the Volatile property.
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


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_BaseMetricValue:


*/

#ifndef __CIM_BASEMETRICVALUE_H
#define __CIM_BASEMETRICVALUE_H


#include "CIM_ManagedElement.h"


#ifndef PROPERTY_METRIC_DEFINITION_ID
#define PROPERTY_METRIC_DEFINITION_ID \
					"MetricDefinitionId"
#endif

#ifndef PROPERTY_MEASURED_ELEMENT_NAME
#define PROPERTY_MEASURED_ELEMENT_NAME \
					"MeasuredElementName"
#endif

#ifndef PROPERTY_TIME_STAMP
#define PROPERTY_TIME_STAMP \
					"TimeStamp"
#endif

#ifndef PROPERTY_DURATION
#define PROPERTY_DURATION \
					"Duration"
#endif

#ifndef PROPERTY_METRIC_VALUE
#define PROPERTY_METRIC_VALUE \
					"MetricValue"
#endif

#ifndef PROPERTY_BREAKDOWN_DIMENSION
#define PROPERTY_BREAKDOWN_DIMENSION \
					"BreakdownDimension"
#endif

#ifndef PROPERTY_BREAKDOWN_VALUE
#define PROPERTY_BREAKDOWN_VALUE \
					"BreakdownValue"
#endif

#ifndef PROPERTY_VOLATILE
#define PROPERTY_VOLATILE \
					"Volatile"
#endif



class CIM_BaseMetricValue :
	public CIM_ManagedElement
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

	virtual Boolean getInstanceID(CIMProperty&) const=0;
	virtual String getInstanceID() const=0;
	virtual void setInstanceID(String&)=0;
	virtual Boolean getMetricDefinitionId(CIMProperty&) const=0;
	virtual String getMetricDefinitionId() const=0;
	virtual void setMetricDefinitionId(String&)=0;
	virtual Boolean getMeasuredElementName(CIMProperty&) const=0;
	virtual String getMeasuredElementName() const=0;
	virtual void setMeasuredElementName(String&)=0;
	virtual Boolean getTimeStamp(CIMProperty&) const=0;
	virtual CIMDateTime getTimeStamp() const=0;
	virtual void setTimeStamp(CIMDateTime&)=0;
	virtual Boolean getDuration(CIMProperty&) const=0;
	virtual CIMDateTime getDuration() const=0;
	virtual void setDuration(CIMDateTime&)=0;
	virtual Boolean getMetricValue(CIMProperty&) const=0;
	virtual String getMetricValue() const=0;
	virtual void setMetricValue(String&)=0;
	virtual Boolean getBreakdownDimension(CIMProperty&) const=0;
	virtual String getBreakdownDimension() const=0;
	virtual void setBreakdownDimension(String&)=0;
	virtual Boolean getBreakdownValue(CIMProperty&) const=0;
	virtual String getBreakdownValue() const=0;
	virtual void setBreakdownValue(String&)=0;
	virtual Boolean getVolatile(CIMProperty&) const=0;
	virtual Boolean getVolatile() const=0;
	virtual void setVolatile(Boolean&)=0;


private:

};

#endif /* CIM_BASEMETRICVALUE */
