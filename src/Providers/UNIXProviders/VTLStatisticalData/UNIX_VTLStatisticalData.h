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
2.29.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::StorageStatistics
*/


/* **** Description *** */
/*
The CIM_VTLStatisticalData class is used to represent graph contains data representing the history of specified resource via CIM_VTLStatisticalDataService methods
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_StatisticalData:
				StartStatisticTime DateTime
				StatisticTime DateTime
				SampleInterval DateTime
				RateIntervalEndTime DateTime
				RateIntervalStartTime DateTime

			UNIX_VTLStatisticalData:
				Data String
				DataFormat UInt16
				XAxisName String
				YAxisName String
				XAxisUnit String
				YAxisUnit String
				StartTime DateTime
				TimeInterval UInt64


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_StatisticalData:
				ResetSelectedStats UInt32

			UNIX_VTLStatisticalData:


*/

#ifndef __UNIX_VTLSTATISTICALDATA_H
#define __UNIX_VTLSTATISTICALDATA_H


#include "CIM_StatisticalData.h"

#include "UNIX_VTLStatisticalDataDeps.h"


#ifndef PROPERTY_DATA
#define PROPERTY_DATA \
					"Data"
#endif

#ifndef PROPERTY_DATA_FORMAT
#define PROPERTY_DATA_FORMAT \
					"DataFormat"
#endif

#ifndef PROPERTY_X_AXIS_NAME
#define PROPERTY_X_AXIS_NAME \
					"XAxisName"
#endif

#ifndef PROPERTY_Y_AXIS_NAME
#define PROPERTY_Y_AXIS_NAME \
					"YAxisName"
#endif

#ifndef PROPERTY_X_AXIS_UNIT
#define PROPERTY_X_AXIS_UNIT \
					"XAxisUnit"
#endif

#ifndef PROPERTY_Y_AXIS_UNIT
#define PROPERTY_Y_AXIS_UNIT \
					"YAxisUnit"
#endif

#ifndef PROPERTY_START_TIME
#define PROPERTY_START_TIME \
					"StartTime"
#endif

#ifndef PROPERTY_TIME_INTERVAL
#define PROPERTY_TIME_INTERVAL \
					"TimeInterval"
#endif



class UNIX_VTLStatisticalData :
	public CIM_StatisticalData
{
public:

	UNIX_VTLStatisticalData();
	~UNIX_VTLStatisticalData();

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
	virtual Boolean getStartStatisticTime(CIMProperty&) const;
	virtual CIMDateTime getStartStatisticTime() const;
	virtual void setStartStatisticTime(CIMDateTime&);
	virtual Boolean getStatisticTime(CIMProperty&) const;
	virtual CIMDateTime getStatisticTime() const;
	virtual void setStatisticTime(CIMDateTime&);
	virtual Boolean getSampleInterval(CIMProperty&) const;
	virtual CIMDateTime getSampleInterval() const;
	virtual void setSampleInterval(CIMDateTime&);
	virtual Boolean getRateIntervalEndTime(CIMProperty&) const;
	virtual CIMDateTime getRateIntervalEndTime() const;
	virtual void setRateIntervalEndTime(CIMDateTime&);
	virtual Boolean getRateIntervalStartTime(CIMProperty&) const;
	virtual CIMDateTime getRateIntervalStartTime() const;
	virtual void setRateIntervalStartTime(CIMDateTime&);
	virtual Boolean getData(CIMProperty&) const;
	virtual String getData() const;
	virtual void setData(String&);
	virtual Boolean getDataFormat(CIMProperty&) const;
	virtual Uint16 getDataFormat() const;
	virtual void setDataFormat(Uint16&);
	virtual Boolean getXAxisName(CIMProperty&) const;
	virtual String getXAxisName() const;
	virtual void setXAxisName(String&);
	virtual Boolean getYAxisName(CIMProperty&) const;
	virtual String getYAxisName() const;
	virtual void setYAxisName(String&);
	virtual Boolean getXAxisUnit(CIMProperty&) const;
	virtual String getXAxisUnit() const;
	virtual void setXAxisUnit(String&);
	virtual Boolean getYAxisUnit(CIMProperty&) const;
	virtual String getYAxisUnit() const;
	virtual void setYAxisUnit(String&);
	virtual Boolean getStartTime(CIMProperty&) const;
	virtual CIMDateTime getStartTime() const;
	virtual void setStartTime(CIMDateTime&);
	virtual Boolean getTimeInterval(CIMProperty&) const;
	virtual Uint64 getTimeInterval() const;
	virtual void setTimeInterval(Uint64&);

	virtual Uint32 invokeResetSelectedStats(
		Array<String> &inSelectedStatistics
	);



private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	CIMDateTime _startStatisticTime;
	CIMDateTime _statisticTime;
	CIMDateTime _sampleInterval;
	CIMDateTime _rateIntervalEndTime;
	CIMDateTime _rateIntervalStartTime;
	String _data;
	Uint16 _dataFormat;
	String _xAxisName;
	String _yAxisName;
	String _xAxisUnit;
	String _yAxisUnit;
	CIMDateTime _startTime;
	Uint64 _timeInterval;

#	include "UNIX_VTLStatisticalDataPrivate.h"


};

#endif /* UNIX_VTLSTATISTICALDATA */
