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


UNIX_DatabaseResourceStatistics::UNIX_DatabaseResourceStatistics(void)
{
}

UNIX_DatabaseResourceStatistics::~UNIX_DatabaseResourceStatistics(void)
{
}

Boolean UNIX_DatabaseResourceStatistics::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_DatabaseResourceStatistics::getInstanceID() const
{
	return _instanceID;
}

void UNIX_DatabaseResourceStatistics::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_DatabaseResourceStatistics::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_DatabaseResourceStatistics::getCaption() const
{
	return _caption;
}

void UNIX_DatabaseResourceStatistics::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_DatabaseResourceStatistics::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_DatabaseResourceStatistics::getDescription() const
{
	return _description;
}

void UNIX_DatabaseResourceStatistics::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_DatabaseResourceStatistics::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_DatabaseResourceStatistics::getElementName() const
{
	return _elementName;
}

void UNIX_DatabaseResourceStatistics::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_DatabaseResourceStatistics::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_DatabaseResourceStatistics::getGeneration() const
{
	return _generation;
}

void UNIX_DatabaseResourceStatistics::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_DatabaseResourceStatistics::getStartStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_STATISTIC_TIME, getStartStatisticTime());
	return true;
}

CIMDateTime UNIX_DatabaseResourceStatistics::getStartStatisticTime() const
{
	return _startStatisticTime;
}

void UNIX_DatabaseResourceStatistics::setStartStatisticTime(CIMDateTime &value)
{
	_startStatisticTime = value;
}

Boolean UNIX_DatabaseResourceStatistics::getStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATISTIC_TIME, getStatisticTime());
	return true;
}

CIMDateTime UNIX_DatabaseResourceStatistics::getStatisticTime() const
{
	return _statisticTime;
}

void UNIX_DatabaseResourceStatistics::setStatisticTime(CIMDateTime &value)
{
	_statisticTime = value;
}

Boolean UNIX_DatabaseResourceStatistics::getSampleInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SAMPLE_INTERVAL, getSampleInterval());
	return true;
}

CIMDateTime UNIX_DatabaseResourceStatistics::getSampleInterval() const
{
	return _sampleInterval;
}

void UNIX_DatabaseResourceStatistics::setSampleInterval(CIMDateTime &value)
{
	_sampleInterval = value;
}

Boolean UNIX_DatabaseResourceStatistics::getRateIntervalEndTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_END_TIME, getRateIntervalEndTime());
	return true;
}

CIMDateTime UNIX_DatabaseResourceStatistics::getRateIntervalEndTime() const
{
	return _rateIntervalEndTime;
}

void UNIX_DatabaseResourceStatistics::setRateIntervalEndTime(CIMDateTime &value)
{
	_rateIntervalEndTime = value;
}

Boolean UNIX_DatabaseResourceStatistics::getRateIntervalStartTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_START_TIME, getRateIntervalStartTime());
	return true;
}

CIMDateTime UNIX_DatabaseResourceStatistics::getRateIntervalStartTime() const
{
	return _rateIntervalStartTime;
}

void UNIX_DatabaseResourceStatistics::setRateIntervalStartTime(CIMDateTime &value)
{
	_rateIntervalStartTime = value;
}

Boolean UNIX_DatabaseResourceStatistics::getCurrent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT, getCurrent());
	return true;
}

Uint64 UNIX_DatabaseResourceStatistics::getCurrent() const
{
	return _current;
}

void UNIX_DatabaseResourceStatistics::setCurrent(Uint64 &value)
{
	_current = value;
}

Boolean UNIX_DatabaseResourceStatistics::getLimit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LIMIT, getLimit());
	return true;
}

Uint64 UNIX_DatabaseResourceStatistics::getLimit() const
{
	return _limit;
}

void UNIX_DatabaseResourceStatistics::setLimit(Uint64 &value)
{
	_limit = value;
}

Boolean UNIX_DatabaseResourceStatistics::getHighwater(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HIGHWATER, getHighwater());
	return true;
}

Uint64 UNIX_DatabaseResourceStatistics::getHighwater() const
{
	return _highwater;
}

void UNIX_DatabaseResourceStatistics::setHighwater(Uint64 &value)
{
	_highwater = value;
}

Boolean UNIX_DatabaseResourceStatistics::getFailures(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FAILURES, getFailures());
	return true;
}

Uint32 UNIX_DatabaseResourceStatistics::getFailures() const
{
	return _failures;
}

void UNIX_DatabaseResourceStatistics::setFailures(Uint32 &value)
{
	_failures = value;
}


void UNIX_DatabaseResourceStatistics::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("DatabaseResourceStatistics");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_current = Uint64(0);
	_limit = Uint64(0);
	_highwater = Uint64(0);
	_failures = Uint32(0);

}

Boolean UNIX_DatabaseResourceStatistics::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "Current"))
			{
				Uint64 currentValue;
				property.getValue().get(currentValue);
				setCurrent(currentValue);
			}
			else if (String::equal(property.getName().getString(), "Limit"))
			{
				Uint64 limitValue;
				property.getValue().get(limitValue);
				setLimit(limitValue);
			}
			else if (String::equal(property.getName().getString(), "Highwater"))
			{
				Uint64 highwaterValue;
				property.getValue().get(highwaterValue);
				setHighwater(highwaterValue);
			}
			else if (String::equal(property.getName().getString(), "Failures"))
			{
				Uint32 failuresValue;
				property.getValue().get(failuresValue);
				setFailures(failuresValue);
			}
	}
	return true;
}

Uint32 UNIX_DatabaseResourceStatistics::invokeResetSelectedStats(
		Array<String> &inSelectedStatistics
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ResetSelectedStats */
	
	
	
	return returnValue;
}


Boolean UNIX_DatabaseResourceStatistics::initialize()
{
	return false;
}

Boolean UNIX_DatabaseResourceStatistics::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("DatabaseResourceStatistics");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_current = Uint64(0);
	_limit = Uint64(0);
	_highwater = Uint64(0);
	_failures = Uint32(0);
	
	return false;
}

Boolean UNIX_DatabaseResourceStatistics::finalize()
{
	return false;
}


Boolean UNIX_DatabaseResourceStatistics::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_DatabaseResourceStatistics::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DatabaseResourceStatistics::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DatabaseResourceStatistics::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DatabaseResourceStatistics::validateInstance()
{
	return true;
}

