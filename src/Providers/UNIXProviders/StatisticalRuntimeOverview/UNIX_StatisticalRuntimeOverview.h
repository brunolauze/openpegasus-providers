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
2.8.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Application::AppRuntime
*/


/* **** Description *** */
/*
This class represents statistical data and metrics that characterize the application as a whole. It exists only once per application system instance and provides primarily raw data for the monitoring of service levels. Therefore, the metrics presented are only a summary or overview of the application system behavior at a certain point of time. Instances are only available if the concerned application is running. Therefore, an instance of ApplicationSystem MUST exist when the instance of this class is created.
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

			UNIX_StatisticalRuntimeOverview:
				LastActivity DateTime
				NumberOfActiveRequests UInt32
				NumberOfActiveRequestors UInt32
				AverageResponseTime UInt32


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_StatisticalData:
				ResetSelectedStats UInt32

			UNIX_StatisticalRuntimeOverview:


*/

#ifndef __UNIX_STATISTICALRUNTIMEOVERVIEW_H
#define __UNIX_STATISTICALRUNTIMEOVERVIEW_H


#include "CIM_StatisticalData.h"

#include "UNIX_StatisticalRuntimeOverviewDeps.h"


#ifndef PROPERTY_LAST_ACTIVITY
#define PROPERTY_LAST_ACTIVITY \
					"LastActivity"
#endif

#ifndef PROPERTY_NUMBER_OF_ACTIVE_REQUESTS
#define PROPERTY_NUMBER_OF_ACTIVE_REQUESTS \
					"NumberOfActiveRequests"
#endif

#ifndef PROPERTY_NUMBER_OF_ACTIVE_REQUESTORS
#define PROPERTY_NUMBER_OF_ACTIVE_REQUESTORS \
					"NumberOfActiveRequestors"
#endif

#ifndef PROPERTY_AVERAGE_RESPONSE_TIME
#define PROPERTY_AVERAGE_RESPONSE_TIME \
					"AverageResponseTime"
#endif



class UNIX_StatisticalRuntimeOverview :
	public CIM_StatisticalData
{
public:

	UNIX_StatisticalRuntimeOverview();
	~UNIX_StatisticalRuntimeOverview();

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
	virtual Boolean getLastActivity(CIMProperty&) const;
	virtual CIMDateTime getLastActivity() const;
	virtual void setLastActivity(CIMDateTime&);
	virtual Boolean getNumberOfActiveRequests(CIMProperty&) const;
	virtual Uint32 getNumberOfActiveRequests() const;
	virtual void setNumberOfActiveRequests(Uint32&);
	virtual Boolean getNumberOfActiveRequestors(CIMProperty&) const;
	virtual Uint32 getNumberOfActiveRequestors() const;
	virtual void setNumberOfActiveRequestors(Uint32&);
	virtual Boolean getAverageResponseTime(CIMProperty&) const;
	virtual Uint32 getAverageResponseTime() const;
	virtual void setAverageResponseTime(Uint32&);

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
	CIMDateTime _lastActivity;
	Uint32 _numberOfActiveRequests;
	Uint32 _numberOfActiveRequestors;
	Uint32 _averageResponseTime;

#	include "UNIX_StatisticalRuntimeOverviewPrivate.h"


};

#endif /* UNIX_STATISTICALRUNTIMEOVERVIEW */
