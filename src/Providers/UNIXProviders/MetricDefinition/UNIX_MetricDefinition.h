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
2.7.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Metrics::UnitOfWork
*/


/* **** Description *** */
/*
The metrics that are associated with a UnitOfWork. These metrics usually describe some aspect of a UnitOfWork such as how much work was done, or the size of the UnitOfWork. For example, the size of a print job or the number of pages printed could be metrics of a 'print' UnitOfWork.
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

			UNIX_MetricDefinition:
				Validity UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_BaseMetricDefinition:

			UNIX_MetricDefinition:


*/

#ifndef __UNIX_METRICDEFINITION_H
#define __UNIX_METRICDEFINITION_H


#include "CIM_BaseMetricDefinition.h"

#include "UNIX_MetricDefinitionDeps.h"


#ifndef PROPERTY_VALIDITY
#define PROPERTY_VALIDITY \
					"Validity"
#endif



class UNIX_MetricDefinition :
	public CIM_BaseMetricDefinition
{
public:

	UNIX_MetricDefinition();
	~UNIX_MetricDefinition();

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
	virtual Boolean getValidity(CIMProperty&) const;
	virtual Uint16 getValidity() const;
	virtual void setValidity(Uint16&);


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
	Uint16 _validity;

#	include "UNIX_MetricDefinitionPrivate.h"


};

#endif /* UNIX_METRICDEFINITION */
