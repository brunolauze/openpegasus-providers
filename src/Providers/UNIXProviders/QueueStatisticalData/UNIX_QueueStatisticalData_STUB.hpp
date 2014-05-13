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


using PROVIDER_LIB_NS::CIMHelper;


UNIX_QueueStatisticalData::UNIX_QueueStatisticalData(void)
{
}

UNIX_QueueStatisticalData::~UNIX_QueueStatisticalData(void)
{
}

Boolean UNIX_QueueStatisticalData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_QueueStatisticalData::getInstanceID() const
{
	return _instanceID;
}

void UNIX_QueueStatisticalData::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_QueueStatisticalData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_QueueStatisticalData::getCaption() const
{
	return _caption;
}

void UNIX_QueueStatisticalData::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_QueueStatisticalData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_QueueStatisticalData::getDescription() const
{
	return _description;
}

void UNIX_QueueStatisticalData::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_QueueStatisticalData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_QueueStatisticalData::getElementName() const
{
	return _elementName;
}

void UNIX_QueueStatisticalData::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_QueueStatisticalData::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_QueueStatisticalData::getGeneration() const
{
	return _generation;
}

void UNIX_QueueStatisticalData::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_QueueStatisticalData::getStartStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_STATISTIC_TIME, getStartStatisticTime());
	return true;
}

CIMDateTime UNIX_QueueStatisticalData::getStartStatisticTime() const
{
	return _startStatisticTime;
}

void UNIX_QueueStatisticalData::setStartStatisticTime(CIMDateTime &value)
{
	_startStatisticTime = value;
}

Boolean UNIX_QueueStatisticalData::getStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATISTIC_TIME, getStatisticTime());
	return true;
}

CIMDateTime UNIX_QueueStatisticalData::getStatisticTime() const
{
	return _statisticTime;
}

void UNIX_QueueStatisticalData::setStatisticTime(CIMDateTime &value)
{
	_statisticTime = value;
}

Boolean UNIX_QueueStatisticalData::getSampleInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SAMPLE_INTERVAL, getSampleInterval());
	return true;
}

CIMDateTime UNIX_QueueStatisticalData::getSampleInterval() const
{
	return _sampleInterval;
}

void UNIX_QueueStatisticalData::setSampleInterval(CIMDateTime &value)
{
	_sampleInterval = value;
}

Boolean UNIX_QueueStatisticalData::getRateIntervalEndTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_END_TIME, getRateIntervalEndTime());
	return true;
}

CIMDateTime UNIX_QueueStatisticalData::getRateIntervalEndTime() const
{
	return _rateIntervalEndTime;
}

void UNIX_QueueStatisticalData::setRateIntervalEndTime(CIMDateTime &value)
{
	_rateIntervalEndTime = value;
}

Boolean UNIX_QueueStatisticalData::getRateIntervalStartTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_START_TIME, getRateIntervalStartTime());
	return true;
}

CIMDateTime UNIX_QueueStatisticalData::getRateIntervalStartTime() const
{
	return _rateIntervalStartTime;
}

void UNIX_QueueStatisticalData::setRateIntervalStartTime(CIMDateTime &value)
{
	_rateIntervalStartTime = value;
}

Boolean UNIX_QueueStatisticalData::getJobsMaxTimeExceeded(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_JOBS_MAX_TIME_EXCEEDED, getJobsMaxTimeExceeded());
	return true;
}

Uint64 UNIX_QueueStatisticalData::getJobsMaxTimeExceeded() const
{
	return _jobsMaxTimeExceeded;
}

void UNIX_QueueStatisticalData::setJobsMaxTimeExceeded(Uint64 &value)
{
	_jobsMaxTimeExceeded = value;
}

Boolean UNIX_QueueStatisticalData::getRunningJobs(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RUNNING_JOBS, getRunningJobs());
	return true;
}

Uint32 UNIX_QueueStatisticalData::getRunningJobs() const
{
	return _runningJobs;
}

void UNIX_QueueStatisticalData::setRunningJobs(Uint32 &value)
{
	_runningJobs = value;
}

Boolean UNIX_QueueStatisticalData::getWaitingJobs(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WAITING_JOBS, getWaitingJobs());
	return true;
}

Uint32 UNIX_QueueStatisticalData::getWaitingJobs() const
{
	return _waitingJobs;
}

void UNIX_QueueStatisticalData::setWaitingJobs(Uint32 &value)
{
	_waitingJobs = value;
}


void UNIX_QueueStatisticalData::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("QueueStatisticalData");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_jobsMaxTimeExceeded = Uint64(0);
	_runningJobs = Uint32(0);
	_waitingJobs = Uint32(0);

}

Boolean UNIX_QueueStatisticalData::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "InstanceID"))
			{
				String instanceIDValue;
				property.getValue().get(instanceIDValue);
				setInstanceID(instanceIDValue);
			}
			else if (String::equal(property.getName().getString(), "Caption"))
			{
				String captionValue;
				property.getValue().get(captionValue);
				setCaption(captionValue);
			}
			else if (String::equal(property.getName().getString(), "Description"))
			{
				String descriptionValue;
				property.getValue().get(descriptionValue);
				setDescription(descriptionValue);
			}
			else if (String::equal(property.getName().getString(), "ElementName"))
			{
				String elementNameValue;
				property.getValue().get(elementNameValue);
				setElementName(elementNameValue);
			}
			else if (String::equal(property.getName().getString(), "Generation"))
			{
				Uint64 generationValue;
				property.getValue().get(generationValue);
				setGeneration(generationValue);
			}
			else if (String::equal(property.getName().getString(), "StartStatisticTime"))
			{
				CIMDateTime startStatisticTimeValue;
				property.getValue().get(startStatisticTimeValue);
				setStartStatisticTime(startStatisticTimeValue);
			}
			else if (String::equal(property.getName().getString(), "StatisticTime"))
			{
				CIMDateTime statisticTimeValue;
				property.getValue().get(statisticTimeValue);
				setStatisticTime(statisticTimeValue);
			}
			else if (String::equal(property.getName().getString(), "SampleInterval"))
			{
				CIMDateTime sampleIntervalValue;
				property.getValue().get(sampleIntervalValue);
				setSampleInterval(sampleIntervalValue);
			}
			else if (String::equal(property.getName().getString(), "RateIntervalEndTime"))
			{
				CIMDateTime rateIntervalEndTimeValue;
				property.getValue().get(rateIntervalEndTimeValue);
				setRateIntervalEndTime(rateIntervalEndTimeValue);
			}
			else if (String::equal(property.getName().getString(), "RateIntervalStartTime"))
			{
				CIMDateTime rateIntervalStartTimeValue;
				property.getValue().get(rateIntervalStartTimeValue);
				setRateIntervalStartTime(rateIntervalStartTimeValue);
			}
			else if (String::equal(property.getName().getString(), "JobsMaxTimeExceeded"))
			{
				Uint64 jobsMaxTimeExceededValue;
				property.getValue().get(jobsMaxTimeExceededValue);
				setJobsMaxTimeExceeded(jobsMaxTimeExceededValue);
			}
			else if (String::equal(property.getName().getString(), "RunningJobs"))
			{
				Uint32 runningJobsValue;
				property.getValue().get(runningJobsValue);
				setRunningJobs(runningJobsValue);
			}
			else if (String::equal(property.getName().getString(), "WaitingJobs"))
			{
				Uint32 waitingJobsValue;
				property.getValue().get(waitingJobsValue);
				setWaitingJobs(waitingJobsValue);
			}
	}
	return true;
}

Uint32 UNIX_QueueStatisticalData::invokeResetSelectedStats(
		Array<String> &inSelectedStatistics
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ResetSelectedStats */
	
	
	
	return returnValue;
}


Boolean UNIX_QueueStatisticalData::initialize()
{
	return false;
}

Boolean UNIX_QueueStatisticalData::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("QueueStatisticalData");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_jobsMaxTimeExceeded = Uint64(0);
	_runningJobs = Uint32(0);
	_waitingJobs = Uint32(0);
	
	return false;
}

Boolean UNIX_QueueStatisticalData::finalize()
{
	return false;
}


Boolean UNIX_QueueStatisticalData::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String instanceIDKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_INSTANCE_ID)) instanceIDKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getInstanceID(), instanceIDKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_QueueStatisticalData::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_QueueStatisticalData::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_QueueStatisticalData::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_QueueStatisticalData::validateInstance()
{
	return true;
}

