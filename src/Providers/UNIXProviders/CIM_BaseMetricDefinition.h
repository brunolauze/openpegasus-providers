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
CIM_BaseMetricDefinition represents the definitional aspects of a metric, i.e., a definition template containing meta data about a new metric. Since CIM_BaseMetricDefinition does not capture metric instance information, it does not contain the value of the metric. The associated class CIM_BaseMetricValue holds the metric value and encapsulates its runtime behavior. The purpose of CIM_BaseMetricDefinition is to provide a convenient mechanism for introducing a new metric definition at runtime and capturing its instance values in a separate class. This mechanism is targeted specifically at CIM users who would like to enhance existing CIM schemas by introducing domain-specific metrics that are not captured in the existing CIM schemas. In addition, vendors of managed resources may make use of this mechanism if a small subset of a potentially large and heterogeneous amount of performance-related data needs to be exposed, based on the context in which the data is captured. Additional meta data for a metric can be provided by subclassing from CIM_BaseMetricDefinition. The CIM_BaseMetricDefinition should be associated with the CIM_ManagedElement(s) to which it applies.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_BaseMetricDefinition:
				Id String
				Name String
				DataType UInt16
				Calculable UInt16
				Units String
				ProgrammaticUnits String
				BreakdownDimensions String
				IsContinuous Boolean
				ChangeType UInt16
				TimeScope UInt16
				GatheringType UInt16
				SampleInterval DateTime
				Accuracy UInt32
				AccuracyUnits String
				MetricID String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_BaseMetricDefinition:


*/

#ifndef __CIM_BASEMETRICDEFINITION_H
#define __CIM_BASEMETRICDEFINITION_H


#include "CIM_ManagedElement.h"


#ifndef PROPERTY_ID
#define PROPERTY_ID \
					"Id"
#endif

#ifndef PROPERTY_NAME
#define PROPERTY_NAME \
					"Name"
#endif

#ifndef PROPERTY_DATA_TYPE
#define PROPERTY_DATA_TYPE \
					"DataType"
#endif

#ifndef PROPERTY_CALCULABLE
#define PROPERTY_CALCULABLE \
					"Calculable"
#endif

#ifndef PROPERTY_UNITS
#define PROPERTY_UNITS \
					"Units"
#endif

#ifndef PROPERTY_PROGRAMMATIC_UNITS
#define PROPERTY_PROGRAMMATIC_UNITS \
					"ProgrammaticUnits"
#endif

#ifndef PROPERTY_BREAKDOWN_DIMENSIONS
#define PROPERTY_BREAKDOWN_DIMENSIONS \
					"BreakdownDimensions"
#endif

#ifndef PROPERTY_IS_CONTINUOUS
#define PROPERTY_IS_CONTINUOUS \
					"IsContinuous"
#endif

#ifndef PROPERTY_CHANGE_TYPE
#define PROPERTY_CHANGE_TYPE \
					"ChangeType"
#endif

#ifndef PROPERTY_TIME_SCOPE
#define PROPERTY_TIME_SCOPE \
					"TimeScope"
#endif

#ifndef PROPERTY_GATHERING_TYPE
#define PROPERTY_GATHERING_TYPE \
					"GatheringType"
#endif

#ifndef PROPERTY_SAMPLE_INTERVAL
#define PROPERTY_SAMPLE_INTERVAL \
					"SampleInterval"
#endif

#ifndef PROPERTY_ACCURACY
#define PROPERTY_ACCURACY \
					"Accuracy"
#endif

#ifndef PROPERTY_ACCURACY_UNITS
#define PROPERTY_ACCURACY_UNITS \
					"AccuracyUnits"
#endif

#ifndef PROPERTY_METRIC_ID
#define PROPERTY_METRIC_ID \
					"MetricID"
#endif



class CIM_BaseMetricDefinition :
	public CIM_ManagedElement
{
public:

	virtual Boolean initialize()=0;
	virtual Boolean load(int&)=0;
	virtual Boolean loadByName(const String)=0;
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

	virtual Boolean getId(CIMProperty&) const=0;
	virtual String getId() const=0;
	virtual void setId(String&)=0;
	virtual Boolean getName(CIMProperty&) const=0;
	virtual String getName() const=0;
	virtual void setName(String&)=0;
	virtual Boolean getDataType(CIMProperty&) const=0;
	virtual Uint16 getDataType() const=0;
	virtual void setDataType(Uint16&)=0;
	virtual Boolean getCalculable(CIMProperty&) const=0;
	virtual Uint16 getCalculable() const=0;
	virtual void setCalculable(Uint16&)=0;
	virtual Boolean getUnits(CIMProperty&) const=0;
	virtual String getUnits() const=0;
	virtual void setUnits(String&)=0;
	virtual Boolean getProgrammaticUnits(CIMProperty&) const=0;
	virtual String getProgrammaticUnits() const=0;
	virtual void setProgrammaticUnits(String&)=0;
	virtual Boolean getBreakdownDimensions(CIMProperty&) const=0;
	virtual Array<String> getBreakdownDimensions() const=0;
	virtual void setBreakdownDimensions(Array<String>&)=0;
	virtual Boolean getIsContinuous(CIMProperty&) const=0;
	virtual Boolean getIsContinuous() const=0;
	virtual void setIsContinuous(Boolean&)=0;
	virtual Boolean getChangeType(CIMProperty&) const=0;
	virtual Uint16 getChangeType() const=0;
	virtual void setChangeType(Uint16&)=0;
	virtual Boolean getTimeScope(CIMProperty&) const=0;
	virtual Uint16 getTimeScope() const=0;
	virtual void setTimeScope(Uint16&)=0;
	virtual Boolean getGatheringType(CIMProperty&) const=0;
	virtual Uint16 getGatheringType() const=0;
	virtual void setGatheringType(Uint16&)=0;
	virtual Boolean getSampleInterval(CIMProperty&) const=0;
	virtual CIMDateTime getSampleInterval() const=0;
	virtual void setSampleInterval(CIMDateTime&)=0;
	virtual Boolean getAccuracy(CIMProperty&) const=0;
	virtual Uint32 getAccuracy() const=0;
	virtual void setAccuracy(Uint32&)=0;
	virtual Boolean getAccuracyUnits(CIMProperty&) const=0;
	virtual String getAccuracyUnits() const=0;
	virtual void setAccuracyUnits(String&)=0;
	virtual Boolean getMetricID(CIMProperty&) const=0;
	virtual String getMetricID() const=0;
	virtual void setMetricID(String&)=0;


private:

};

#endif /* CIM_BASEMETRICDEFINITION */
