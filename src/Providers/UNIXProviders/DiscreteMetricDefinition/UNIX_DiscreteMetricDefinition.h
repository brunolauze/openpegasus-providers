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
Specialization of BaseMetricDefinition that represents a discrete metric type. 
This class is does not have instances. Instead, it is used to define derived classes that override the Values and ValueMap qualifiers of the DiscreteValues array property, in order to define the predefined set of discrete values to be used. 
The remainder of this description defines the discrete metric concept: 
Discrete metrics are metrics (as defined in BaseMetricDefinition), that have an additional discrete value, which is from a set of predefined values. In order to contrast this to the general metrics that have a continuous value range, we call those 'analog metrics' in this description. 
The transformation of analog values into discrete values is defined by analog thresholds that represent the transition boundary from one discrete value to the next. There are independent thresholds for each direction, so that a hysteresis can be defined. 
There is a mandatory set of instances for each discrete value: Using the concepts of the dynamic metrics model, there is a DiscreteMetricValue instance representing the discrete metric value and a DiscreteMetricDefinition instance representing its according definition (associated through MetricInstance). In addition, there is a similar couple for the analog metric the discrete metric is derived from, consisting of a BaseMetricValue instance and according BaseMetricDefinition instance (again associated via MetricInstance). These two pairs of instances are connected through the DiscreteMetricDefinitionDependency association between the two metric definition classes, defining that the discrete metric definition and all its values are derived from this analog metric definition and all its values. 
The existence of the DiscreteMetricDefinitionDependency association mandates that there shall be one DiscreteMetricValue instance for each analog BaseMetricValue instance in the mandatory set of instances described above. Furthermore, it mandates that there are DiscreteMetricValueDependency association instances between the discrete and analog value instances. 
A recipe for creating a discrete metric type on existing analog metric type is to create a DiscreteMetricDefinition instance, and then to connect that to the analog BaseMetricDefinition by means of creating an instance of DiscreteMetricDefinitionDependency. This results in the DiscreteMetricValue and DiscreteMetricValueDependency instances coming into existence. 
Please note that hysteresis is implicitly defined as the difference between the trigger value and the reset value.
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

			UNIX_DiscreteMetricDefinition:
				DiscreteValues UInt16
				BaseIndex UInt16
				AnalogTriggerValues String
				AnalogResetValues String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_BaseMetricDefinition:

			UNIX_DiscreteMetricDefinition:


*/

#ifndef __UNIX_DISCRETEMETRICDEFINITION_H
#define __UNIX_DISCRETEMETRICDEFINITION_H


#include "CIM_BaseMetricDefinition.h"

#include "UNIX_DiscreteMetricDefinitionDeps.h"


#ifndef PROPERTY_DISCRETE_VALUES
#define PROPERTY_DISCRETE_VALUES \
					"DiscreteValues"
#endif

#ifndef PROPERTY_BASE_INDEX
#define PROPERTY_BASE_INDEX \
					"BaseIndex"
#endif

#ifndef PROPERTY_ANALOG_TRIGGER_VALUES
#define PROPERTY_ANALOG_TRIGGER_VALUES \
					"AnalogTriggerValues"
#endif

#ifndef PROPERTY_ANALOG_RESET_VALUES
#define PROPERTY_ANALOG_RESET_VALUES \
					"AnalogResetValues"
#endif



class UNIX_DiscreteMetricDefinition :
	public CIM_BaseMetricDefinition
{
public:

	UNIX_DiscreteMetricDefinition();
	~UNIX_DiscreteMetricDefinition();

	virtual Boolean initialize();
	virtual Boolean load(int&);
	virtual Boolean loadByName(const String);
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
	virtual Boolean getId(CIMProperty&) const;
	virtual String getId() const;
	virtual void setId(String&);
	virtual Boolean getName(CIMProperty&) const;
	virtual String getName() const;
	virtual void setName(String&);
	virtual Boolean getDataType(CIMProperty&) const;
	virtual Uint16 getDataType() const;
	virtual void setDataType(Uint16&);
	virtual Boolean getCalculable(CIMProperty&) const;
	virtual Uint16 getCalculable() const;
	virtual void setCalculable(Uint16&);
	virtual Boolean getUnits(CIMProperty&) const;
	virtual String getUnits() const;
	virtual void setUnits(String&);
	virtual Boolean getProgrammaticUnits(CIMProperty&) const;
	virtual String getProgrammaticUnits() const;
	virtual void setProgrammaticUnits(String&);
	virtual Boolean getBreakdownDimensions(CIMProperty&) const;
	virtual Array<String> getBreakdownDimensions() const;
	virtual void setBreakdownDimensions(Array<String>&);
	virtual Boolean getIsContinuous(CIMProperty&) const;
	virtual Boolean getIsContinuous() const;
	virtual void setIsContinuous(Boolean&);
	virtual Boolean getChangeType(CIMProperty&) const;
	virtual Uint16 getChangeType() const;
	virtual void setChangeType(Uint16&);
	virtual Boolean getTimeScope(CIMProperty&) const;
	virtual Uint16 getTimeScope() const;
	virtual void setTimeScope(Uint16&);
	virtual Boolean getGatheringType(CIMProperty&) const;
	virtual Uint16 getGatheringType() const;
	virtual void setGatheringType(Uint16&);
	virtual Boolean getSampleInterval(CIMProperty&) const;
	virtual CIMDateTime getSampleInterval() const;
	virtual void setSampleInterval(CIMDateTime&);
	virtual Boolean getAccuracy(CIMProperty&) const;
	virtual Uint32 getAccuracy() const;
	virtual void setAccuracy(Uint32&);
	virtual Boolean getAccuracyUnits(CIMProperty&) const;
	virtual String getAccuracyUnits() const;
	virtual void setAccuracyUnits(String&);
	virtual Boolean getMetricID(CIMProperty&) const;
	virtual String getMetricID() const;
	virtual void setMetricID(String&);
	virtual Boolean getDiscreteValues(CIMProperty&) const;
	virtual Array<Uint16> getDiscreteValues() const;
	virtual void setDiscreteValues(Array<Uint16>&);
	virtual Boolean getBaseIndex(CIMProperty&) const;
	virtual Uint16 getBaseIndex() const;
	virtual void setBaseIndex(Uint16&);
	virtual Boolean getAnalogTriggerValues(CIMProperty&) const;
	virtual Array<String> getAnalogTriggerValues() const;
	virtual void setAnalogTriggerValues(Array<String>&);
	virtual Boolean getAnalogResetValues(CIMProperty&) const;
	virtual Array<String> getAnalogResetValues() const;
	virtual void setAnalogResetValues(Array<String>&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	String _id;
	String _name;
	Uint16 _dataType;
	Uint16 _calculable;
	String _units;
	String _programmaticUnits;
	Array<String> _breakdownDimensions;
	Boolean _isContinuous;
	Uint16 _changeType;
	Uint16 _timeScope;
	Uint16 _gatheringType;
	CIMDateTime _sampleInterval;
	Uint32 _accuracy;
	String _accuracyUnits;
	String _metricID;
	Array<Uint16> _discreteValues;
	Uint16 _baseIndex;
	Array<String> _analogTriggerValues;
	Array<String> _analogResetValues;

#	include "UNIX_DiscreteMetricDefinitionPrivate.h"


};

#endif /* UNIX_DISCRETEMETRICDEFINITION */
