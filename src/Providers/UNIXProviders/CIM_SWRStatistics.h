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
2.8.1000
*/


/* **** UMLPackagePath *** */
/*
CIM::Application::SWResources
*/


/* **** Description *** */
/*
This is base class for the software resource statistics. Depending on the implementation it can be of six types that identify the unit type (technical or domain-specific) and the behavioral characteristic of the software resource (allocation, input or output). The statistics is also the place at which the corresponding operational settings of the software resource appear. These parameters are changeable on-the-fly (i.e., they are writable). They bear the same constraints regarding their interdependencies between technical and domain-specific units as SWRLimitSettings. 
Point metrics apply to the point in time of end of the sample, interval metrics apply to the sample interval. It is up to the implementation of the statistcs whether the sample interval ends at the point in time of the request of the instance of this class (working with internal ring buffers) or whether the underlying instrumentation autonomously determines the beginning and the end of the sample interval. 
SWRStatistics is associated to SoftwareResource via ElementStatisticalData. In general, one software resource is expected to have three statistics. The statistics type covers each behavior characteristics at most once. I.e., the software resource has at most one allocation statistcs, one input statistics and one output statistics. Nevertheless, the implementation of the software resource may exhibit more statistics SWRStatistics instances that cover more context-specific behavior characteristics.
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

			CIM_SWRStatistics:
				LowerLimit UInt32
				UpperLimit UInt32
				Unit String
				OtherLowerLimit UInt32
				OtherUpperLimit UInt32
				OtherUnit String
				Characteristic UInt16
				StatisticsType UInt16
				FirstError UInt16
				FirstErrorTimeStamp DateTime
				LastError UInt16
				LastErrorTimeStamp DateTime
				ErrorCount UInt32


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_StatisticalData:
				ResetSelectedStats UInt32

			CIM_SWRStatistics:


*/

#ifndef __CIM_SWRSTATISTICS_H
#define __CIM_SWRSTATISTICS_H


#include "CIM_StatisticalData.h"


#ifndef PROPERTY_LOWER_LIMIT
#define PROPERTY_LOWER_LIMIT \
					"LowerLimit"
#endif

#ifndef PROPERTY_UPPER_LIMIT
#define PROPERTY_UPPER_LIMIT \
					"UpperLimit"
#endif

#ifndef PROPERTY_UNIT
#define PROPERTY_UNIT \
					"Unit"
#endif

#ifndef PROPERTY_OTHER_LOWER_LIMIT
#define PROPERTY_OTHER_LOWER_LIMIT \
					"OtherLowerLimit"
#endif

#ifndef PROPERTY_OTHER_UPPER_LIMIT
#define PROPERTY_OTHER_UPPER_LIMIT \
					"OtherUpperLimit"
#endif

#ifndef PROPERTY_OTHER_UNIT
#define PROPERTY_OTHER_UNIT \
					"OtherUnit"
#endif

#ifndef PROPERTY_CHARACTERISTIC
#define PROPERTY_CHARACTERISTIC \
					"Characteristic"
#endif

#ifndef PROPERTY_STATISTICS_TYPE
#define PROPERTY_STATISTICS_TYPE \
					"StatisticsType"
#endif

#ifndef PROPERTY_FIRST_ERROR
#define PROPERTY_FIRST_ERROR \
					"FirstError"
#endif

#ifndef PROPERTY_FIRST_ERROR_TIME_STAMP
#define PROPERTY_FIRST_ERROR_TIME_STAMP \
					"FirstErrorTimeStamp"
#endif

#ifndef PROPERTY_LAST_ERROR
#define PROPERTY_LAST_ERROR \
					"LastError"
#endif

#ifndef PROPERTY_LAST_ERROR_TIME_STAMP
#define PROPERTY_LAST_ERROR_TIME_STAMP \
					"LastErrorTimeStamp"
#endif

#ifndef PROPERTY_ERROR_COUNT
#define PROPERTY_ERROR_COUNT \
					"ErrorCount"
#endif



class CIM_SWRStatistics :
	public CIM_StatisticalData
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

	virtual Boolean getLowerLimit(CIMProperty&) const=0;
	virtual Uint32 getLowerLimit() const=0;
	virtual void setLowerLimit(Uint32&)=0;
	virtual Boolean getUpperLimit(CIMProperty&) const=0;
	virtual Uint32 getUpperLimit() const=0;
	virtual void setUpperLimit(Uint32&)=0;
	virtual Boolean getUnit(CIMProperty&) const=0;
	virtual String getUnit() const=0;
	virtual void setUnit(String&)=0;
	virtual Boolean getOtherLowerLimit(CIMProperty&) const=0;
	virtual Uint32 getOtherLowerLimit() const=0;
	virtual void setOtherLowerLimit(Uint32&)=0;
	virtual Boolean getOtherUpperLimit(CIMProperty&) const=0;
	virtual Uint32 getOtherUpperLimit() const=0;
	virtual void setOtherUpperLimit(Uint32&)=0;
	virtual Boolean getOtherUnit(CIMProperty&) const=0;
	virtual String getOtherUnit() const=0;
	virtual void setOtherUnit(String&)=0;
	virtual Boolean getCharacteristic(CIMProperty&) const=0;
	virtual Uint16 getCharacteristic() const=0;
	virtual void setCharacteristic(Uint16&)=0;
	virtual Boolean getStatisticsType(CIMProperty&) const=0;
	virtual Uint16 getStatisticsType() const=0;
	virtual void setStatisticsType(Uint16&)=0;
	virtual Boolean getFirstError(CIMProperty&) const=0;
	virtual Uint16 getFirstError() const=0;
	virtual void setFirstError(Uint16&)=0;
	virtual Boolean getFirstErrorTimeStamp(CIMProperty&) const=0;
	virtual CIMDateTime getFirstErrorTimeStamp() const=0;
	virtual void setFirstErrorTimeStamp(CIMDateTime&)=0;
	virtual Boolean getLastError(CIMProperty&) const=0;
	virtual Uint16 getLastError() const=0;
	virtual void setLastError(Uint16&)=0;
	virtual Boolean getLastErrorTimeStamp(CIMProperty&) const=0;
	virtual CIMDateTime getLastErrorTimeStamp() const=0;
	virtual void setLastErrorTimeStamp(CIMDateTime&)=0;
	virtual Boolean getErrorCount(CIMProperty&) const=0;
	virtual Uint32 getErrorCount() const=0;
	virtual void setErrorCount(Uint32&)=0;

	virtual Uint32 invokeResetSelectedStats(
		Array<String> &inSelectedStatistics
	)=0;



private:

};

#endif /* CIM_SWRSTATISTICS */
