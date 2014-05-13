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


UNIX_JobProcessingStatistics::UNIX_JobProcessingStatistics(void)
{
}

UNIX_JobProcessingStatistics::~UNIX_JobProcessingStatistics(void)
{
}

Boolean UNIX_JobProcessingStatistics::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_JobProcessingStatistics::getInstanceID() const
{
	return _instanceID;
}

void UNIX_JobProcessingStatistics::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_JobProcessingStatistics::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_JobProcessingStatistics::getCaption() const
{
	return _caption;
}

void UNIX_JobProcessingStatistics::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_JobProcessingStatistics::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_JobProcessingStatistics::getDescription() const
{
	return _description;
}

void UNIX_JobProcessingStatistics::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_JobProcessingStatistics::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_JobProcessingStatistics::getElementName() const
{
	return _elementName;
}

void UNIX_JobProcessingStatistics::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_JobProcessingStatistics::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_JobProcessingStatistics::getGeneration() const
{
	return _generation;
}

void UNIX_JobProcessingStatistics::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_JobProcessingStatistics::getStartStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_STATISTIC_TIME, getStartStatisticTime());
	return true;
}

CIMDateTime UNIX_JobProcessingStatistics::getStartStatisticTime() const
{
	return _startStatisticTime;
}

void UNIX_JobProcessingStatistics::setStartStatisticTime(CIMDateTime &value)
{
	_startStatisticTime = value;
}

Boolean UNIX_JobProcessingStatistics::getStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATISTIC_TIME, getStatisticTime());
	return true;
}

CIMDateTime UNIX_JobProcessingStatistics::getStatisticTime() const
{
	return _statisticTime;
}

void UNIX_JobProcessingStatistics::setStatisticTime(CIMDateTime &value)
{
	_statisticTime = value;
}

Boolean UNIX_JobProcessingStatistics::getSampleInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SAMPLE_INTERVAL, getSampleInterval());
	return true;
}

CIMDateTime UNIX_JobProcessingStatistics::getSampleInterval() const
{
	return _sampleInterval;
}

void UNIX_JobProcessingStatistics::setSampleInterval(CIMDateTime &value)
{
	_sampleInterval = value;
}

Boolean UNIX_JobProcessingStatistics::getRateIntervalEndTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_END_TIME, getRateIntervalEndTime());
	return true;
}

CIMDateTime UNIX_JobProcessingStatistics::getRateIntervalEndTime() const
{
	return _rateIntervalEndTime;
}

void UNIX_JobProcessingStatistics::setRateIntervalEndTime(CIMDateTime &value)
{
	_rateIntervalEndTime = value;
}

Boolean UNIX_JobProcessingStatistics::getRateIntervalStartTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_START_TIME, getRateIntervalStartTime());
	return true;
}

CIMDateTime UNIX_JobProcessingStatistics::getRateIntervalStartTime() const
{
	return _rateIntervalStartTime;
}

void UNIX_JobProcessingStatistics::setRateIntervalStartTime(CIMDateTime &value)
{
	_rateIntervalStartTime = value;
}

Boolean UNIX_JobProcessingStatistics::getStartTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_TIME, getStartTime());
	return true;
}

CIMDateTime UNIX_JobProcessingStatistics::getStartTime() const
{
	return _startTime;
}

void UNIX_JobProcessingStatistics::setStartTime(CIMDateTime &value)
{
	_startTime = value;
}

Boolean UNIX_JobProcessingStatistics::getElapsedTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELAPSED_TIME, getElapsedTime());
	return true;
}

CIMDateTime UNIX_JobProcessingStatistics::getElapsedTime() const
{
	return _elapsedTime;
}

void UNIX_JobProcessingStatistics::setElapsedTime(CIMDateTime &value)
{
	_elapsedTime = value;
}

Boolean UNIX_JobProcessingStatistics::getPriority(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIORITY, getPriority());
	return true;
}

Uint32 UNIX_JobProcessingStatistics::getPriority() const
{
	return _priority;
}

void UNIX_JobProcessingStatistics::setPriority(Uint32 &value)
{
	_priority = value;
}

Boolean UNIX_JobProcessingStatistics::getPercentComplete(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERCENT_COMPLETE, getPercentComplete());
	return true;
}

Uint16 UNIX_JobProcessingStatistics::getPercentComplete() const
{
	return _percentComplete;
}

void UNIX_JobProcessingStatistics::setPercentComplete(Uint16 &value)
{
	_percentComplete = value;
}

Boolean UNIX_JobProcessingStatistics::getCPUTimeUsed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CPU_TIME_USED, getCPUTimeUsed());
	return true;
}

Uint32 UNIX_JobProcessingStatistics::getCPUTimeUsed() const
{
	return _cPUTimeUsed;
}

void UNIX_JobProcessingStatistics::setCPUTimeUsed(Uint32 &value)
{
	_cPUTimeUsed = value;
}


void UNIX_JobProcessingStatistics::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("JobProcessingStatistics");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_startTime = CIMHelper::getCurrentTime();
	_elapsedTime = CIMHelper::getCurrentTime();
	_priority = Uint32(0);
	_percentComplete = Uint16(0);
	_cPUTimeUsed = Uint32(0);

}

Boolean UNIX_JobProcessingStatistics::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "StartTime"))
			{
				CIMDateTime startTimeValue;
				property.getValue().get(startTimeValue);
				setStartTime(startTimeValue);
			}
			else if (String::equal(property.getName().getString(), "ElapsedTime"))
			{
				CIMDateTime elapsedTimeValue;
				property.getValue().get(elapsedTimeValue);
				setElapsedTime(elapsedTimeValue);
			}
			else if (String::equal(property.getName().getString(), "Priority"))
			{
				Uint32 priorityValue;
				property.getValue().get(priorityValue);
				setPriority(priorityValue);
			}
			else if (String::equal(property.getName().getString(), "PercentComplete"))
			{
				Uint16 percentCompleteValue;
				property.getValue().get(percentCompleteValue);
				setPercentComplete(percentCompleteValue);
			}
			else if (String::equal(property.getName().getString(), "CPUTimeUsed"))
			{
				Uint32 cPUTimeUsedValue;
				property.getValue().get(cPUTimeUsedValue);
				setCPUTimeUsed(cPUTimeUsedValue);
			}
	}
	return true;
}

Uint32 UNIX_JobProcessingStatistics::invokeResetSelectedStats(
		Array<String> &inSelectedStatistics
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ResetSelectedStats */
	
	
	
	return returnValue;
}


Boolean UNIX_JobProcessingStatistics::initialize()
{
	return false;
}

Boolean UNIX_JobProcessingStatistics::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("JobProcessingStatistics");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_startTime = CIMHelper::getCurrentTime();
	_elapsedTime = CIMHelper::getCurrentTime();
	_priority = Uint32(0);
	_percentComplete = Uint16(0);
	_cPUTimeUsed = Uint32(0);
	
	return false;
}

Boolean UNIX_JobProcessingStatistics::finalize()
{
	return false;
}


Boolean UNIX_JobProcessingStatistics::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_JobProcessingStatistics::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_JobProcessingStatistics::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_JobProcessingStatistics::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_JobProcessingStatistics::validateInstance()
{
	return true;
}

