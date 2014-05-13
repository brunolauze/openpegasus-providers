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
CIM::System::Processing
*/


/* **** Description *** */
/*
This class records the completion statistics (such as ElapsedTime) and other information for its associated Job. The class will be extended in a future release to include statistics regarding resource utilization. Note that there may be many instances of this class if the Job is recurring (i.e., if its JobRunTimes property is not 1).
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

			UNIX_JobProcessingStatistics:
				StartTime DateTime
				ElapsedTime DateTime
				Priority UInt32
				PercentComplete UInt16
				CPUTimeUsed UInt32


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_StatisticalData:
				ResetSelectedStats UInt32

			UNIX_JobProcessingStatistics:


*/

#ifndef __UNIX_JOBPROCESSINGSTATISTICS_H
#define __UNIX_JOBPROCESSINGSTATISTICS_H


#include "CIM_StatisticalData.h"

#include "UNIX_JobProcessingStatisticsDeps.h"


#ifndef PROPERTY_START_TIME
#define PROPERTY_START_TIME \
					"StartTime"
#endif

#ifndef PROPERTY_ELAPSED_TIME
#define PROPERTY_ELAPSED_TIME \
					"ElapsedTime"
#endif

#ifndef PROPERTY_PRIORITY
#define PROPERTY_PRIORITY \
					"Priority"
#endif

#ifndef PROPERTY_PERCENT_COMPLETE
#define PROPERTY_PERCENT_COMPLETE \
					"PercentComplete"
#endif

#ifndef PROPERTY_CPU_TIME_USED
#define PROPERTY_CPU_TIME_USED \
					"CPUTimeUsed"
#endif



class UNIX_JobProcessingStatistics :
	public CIM_StatisticalData
{
public:

	UNIX_JobProcessingStatistics();
	~UNIX_JobProcessingStatistics();

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
	virtual Boolean getStartTime(CIMProperty&) const;
	virtual CIMDateTime getStartTime() const;
	virtual void setStartTime(CIMDateTime&);
	virtual Boolean getElapsedTime(CIMProperty&) const;
	virtual CIMDateTime getElapsedTime() const;
	virtual void setElapsedTime(CIMDateTime&);
	virtual Boolean getPriority(CIMProperty&) const;
	virtual Uint32 getPriority() const;
	virtual void setPriority(Uint32&);
	virtual Boolean getPercentComplete(CIMProperty&) const;
	virtual Uint16 getPercentComplete() const;
	virtual void setPercentComplete(Uint16&);
	virtual Boolean getCPUTimeUsed(CIMProperty&) const;
	virtual Uint32 getCPUTimeUsed() const;
	virtual void setCPUTimeUsed(Uint32&);

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
	CIMDateTime _startTime;
	CIMDateTime _elapsedTime;
	Uint32 _priority;
	Uint16 _percentComplete;
	Uint32 _cPUTimeUsed;

#	include "UNIX_JobProcessingStatisticsPrivate.h"


};

#endif /* UNIX_JOBPROCESSINGSTATISTICS */
