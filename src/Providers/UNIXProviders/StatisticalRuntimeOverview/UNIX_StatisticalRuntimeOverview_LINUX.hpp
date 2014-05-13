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


UNIX_StatisticalRuntimeOverview::UNIX_StatisticalRuntimeOverview(void)
{
}

UNIX_StatisticalRuntimeOverview::~UNIX_StatisticalRuntimeOverview(void)
{
}

Boolean UNIX_StatisticalRuntimeOverview::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_StatisticalRuntimeOverview::getInstanceID() const
{
	return _instanceID;
}

void UNIX_StatisticalRuntimeOverview::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_StatisticalRuntimeOverview::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_StatisticalRuntimeOverview::getCaption() const
{
	return _caption;
}

void UNIX_StatisticalRuntimeOverview::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_StatisticalRuntimeOverview::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_StatisticalRuntimeOverview::getDescription() const
{
	return _description;
}

void UNIX_StatisticalRuntimeOverview::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_StatisticalRuntimeOverview::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_StatisticalRuntimeOverview::getElementName() const
{
	return _elementName;
}

void UNIX_StatisticalRuntimeOverview::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_StatisticalRuntimeOverview::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_StatisticalRuntimeOverview::getGeneration() const
{
	return _generation;
}

void UNIX_StatisticalRuntimeOverview::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_StatisticalRuntimeOverview::getStartStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_STATISTIC_TIME, getStartStatisticTime());
	return true;
}

CIMDateTime UNIX_StatisticalRuntimeOverview::getStartStatisticTime() const
{
	return _startStatisticTime;
}

void UNIX_StatisticalRuntimeOverview::setStartStatisticTime(CIMDateTime &value)
{
	_startStatisticTime = value;
}

Boolean UNIX_StatisticalRuntimeOverview::getStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATISTIC_TIME, getStatisticTime());
	return true;
}

CIMDateTime UNIX_StatisticalRuntimeOverview::getStatisticTime() const
{
	return _statisticTime;
}

void UNIX_StatisticalRuntimeOverview::setStatisticTime(CIMDateTime &value)
{
	_statisticTime = value;
}

Boolean UNIX_StatisticalRuntimeOverview::getSampleInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SAMPLE_INTERVAL, getSampleInterval());
	return true;
}

CIMDateTime UNIX_StatisticalRuntimeOverview::getSampleInterval() const
{
	return _sampleInterval;
}

void UNIX_StatisticalRuntimeOverview::setSampleInterval(CIMDateTime &value)
{
	_sampleInterval = value;
}

Boolean UNIX_StatisticalRuntimeOverview::getRateIntervalEndTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_END_TIME, getRateIntervalEndTime());
	return true;
}

CIMDateTime UNIX_StatisticalRuntimeOverview::getRateIntervalEndTime() const
{
	return _rateIntervalEndTime;
}

void UNIX_StatisticalRuntimeOverview::setRateIntervalEndTime(CIMDateTime &value)
{
	_rateIntervalEndTime = value;
}

Boolean UNIX_StatisticalRuntimeOverview::getRateIntervalStartTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_START_TIME, getRateIntervalStartTime());
	return true;
}

CIMDateTime UNIX_StatisticalRuntimeOverview::getRateIntervalStartTime() const
{
	return _rateIntervalStartTime;
}

void UNIX_StatisticalRuntimeOverview::setRateIntervalStartTime(CIMDateTime &value)
{
	_rateIntervalStartTime = value;
}

Boolean UNIX_StatisticalRuntimeOverview::getLastActivity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ACTIVITY, getLastActivity());
	return true;
}

CIMDateTime UNIX_StatisticalRuntimeOverview::getLastActivity() const
{
	return _lastActivity;
}

void UNIX_StatisticalRuntimeOverview::setLastActivity(CIMDateTime &value)
{
	_lastActivity = value;
}

Boolean UNIX_StatisticalRuntimeOverview::getNumberOfActiveRequests(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_ACTIVE_REQUESTS, getNumberOfActiveRequests());
	return true;
}

Uint32 UNIX_StatisticalRuntimeOverview::getNumberOfActiveRequests() const
{
	return _numberOfActiveRequests;
}

void UNIX_StatisticalRuntimeOverview::setNumberOfActiveRequests(Uint32 &value)
{
	_numberOfActiveRequests = value;
}

Boolean UNIX_StatisticalRuntimeOverview::getNumberOfActiveRequestors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_ACTIVE_REQUESTORS, getNumberOfActiveRequestors());
	return true;
}

Uint32 UNIX_StatisticalRuntimeOverview::getNumberOfActiveRequestors() const
{
	return _numberOfActiveRequestors;
}

void UNIX_StatisticalRuntimeOverview::setNumberOfActiveRequestors(Uint32 &value)
{
	_numberOfActiveRequestors = value;
}

Boolean UNIX_StatisticalRuntimeOverview::getAverageResponseTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVERAGE_RESPONSE_TIME, getAverageResponseTime());
	return true;
}

Uint32 UNIX_StatisticalRuntimeOverview::getAverageResponseTime() const
{
	return _averageResponseTime;
}

void UNIX_StatisticalRuntimeOverview::setAverageResponseTime(Uint32 &value)
{
	_averageResponseTime = value;
}


void UNIX_StatisticalRuntimeOverview::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("StatisticalRuntimeOverview");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_lastActivity = CIMHelper::getCurrentTime();
	_numberOfActiveRequests = Uint32(0);
	_numberOfActiveRequestors = Uint32(0);
	_averageResponseTime = Uint32(0);

}

Boolean UNIX_StatisticalRuntimeOverview::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "LastActivity"))
			{
				CIMDateTime lastActivityValue;
				property.getValue().get(lastActivityValue);
				setLastActivity(lastActivityValue);
			}
			else if (String::equal(property.getName().getString(), "NumberOfActiveRequests"))
			{
				Uint32 numberOfActiveRequestsValue;
				property.getValue().get(numberOfActiveRequestsValue);
				setNumberOfActiveRequests(numberOfActiveRequestsValue);
			}
			else if (String::equal(property.getName().getString(), "NumberOfActiveRequestors"))
			{
				Uint32 numberOfActiveRequestorsValue;
				property.getValue().get(numberOfActiveRequestorsValue);
				setNumberOfActiveRequestors(numberOfActiveRequestorsValue);
			}
			else if (String::equal(property.getName().getString(), "AverageResponseTime"))
			{
				Uint32 averageResponseTimeValue;
				property.getValue().get(averageResponseTimeValue);
				setAverageResponseTime(averageResponseTimeValue);
			}
	}
	return true;
}

Uint32 UNIX_StatisticalRuntimeOverview::invokeResetSelectedStats(
		Array<String> &inSelectedStatistics
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ResetSelectedStats */
	
	
	
	return returnValue;
}


Boolean UNIX_StatisticalRuntimeOverview::initialize()
{
	return false;
}

Boolean UNIX_StatisticalRuntimeOverview::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("StatisticalRuntimeOverview");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_lastActivity = CIMHelper::getCurrentTime();
	_numberOfActiveRequests = Uint32(0);
	_numberOfActiveRequestors = Uint32(0);
	_averageResponseTime = Uint32(0);
	
	return false;
}

Boolean UNIX_StatisticalRuntimeOverview::finalize()
{
	return false;
}


Boolean UNIX_StatisticalRuntimeOverview::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_StatisticalRuntimeOverview::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StatisticalRuntimeOverview::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StatisticalRuntimeOverview::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StatisticalRuntimeOverview::validateInstance()
{
	return true;
}

