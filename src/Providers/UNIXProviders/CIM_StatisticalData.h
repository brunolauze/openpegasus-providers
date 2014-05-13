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


/* **** Abstract *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.39.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Core::Statistics
*/


/* **** Description *** */
/*
CIM_StatisticalData is a root class for any arbitrary collection of statistical data and/or metrics applicable to one or more ManagedElements. These statistics MUST represent the most recent observations and MUST NOT be provided if irrelevant or stale. Note that this class uses a simplified naming/identity algorithm as compared to CIM_StatisticalInformation.
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


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_StatisticalData:
				ResetSelectedStats UInt32


*/

#ifndef __CIM_STATISTICALDATA_H
#define __CIM_STATISTICALDATA_H


#include "CIM_ManagedElement.h"


#ifndef PROPERTY_START_STATISTIC_TIME
#define PROPERTY_START_STATISTIC_TIME \
					"StartStatisticTime"
#endif

#ifndef PROPERTY_STATISTIC_TIME
#define PROPERTY_STATISTIC_TIME \
					"StatisticTime"
#endif

#ifndef PROPERTY_SAMPLE_INTERVAL
#define PROPERTY_SAMPLE_INTERVAL \
					"SampleInterval"
#endif

#ifndef PROPERTY_RATE_INTERVAL_END_TIME
#define PROPERTY_RATE_INTERVAL_END_TIME \
					"RateIntervalEndTime"
#endif

#ifndef PROPERTY_RATE_INTERVAL_START_TIME
#define PROPERTY_RATE_INTERVAL_START_TIME \
					"RateIntervalStartTime"
#endif



class CIM_StatisticalData :
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
	virtual Boolean getElementName(CIMProperty&) const=0;
	virtual String getElementName() const=0;
	virtual void setElementName(String&)=0;
	virtual Boolean getStartStatisticTime(CIMProperty&) const=0;
	virtual CIMDateTime getStartStatisticTime() const=0;
	virtual void setStartStatisticTime(CIMDateTime&)=0;
	virtual Boolean getStatisticTime(CIMProperty&) const=0;
	virtual CIMDateTime getStatisticTime() const=0;
	virtual void setStatisticTime(CIMDateTime&)=0;
	virtual Boolean getSampleInterval(CIMProperty&) const=0;
	virtual CIMDateTime getSampleInterval() const=0;
	virtual void setSampleInterval(CIMDateTime&)=0;
	virtual Boolean getRateIntervalEndTime(CIMProperty&) const=0;
	virtual CIMDateTime getRateIntervalEndTime() const=0;
	virtual void setRateIntervalEndTime(CIMDateTime&)=0;
	virtual Boolean getRateIntervalStartTime(CIMProperty&) const=0;
	virtual CIMDateTime getRateIntervalStartTime() const=0;
	virtual void setRateIntervalStartTime(CIMDateTime&)=0;

	virtual Uint32 invokeResetSelectedStats(
		Array<String> &inSelectedStatistics
	)=0;



private:

};

#endif /* CIM_STATISTICALDATA */
