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


UNIX_FingerprintMatchingStatistics::UNIX_FingerprintMatchingStatistics(void)
{
}

UNIX_FingerprintMatchingStatistics::~UNIX_FingerprintMatchingStatistics(void)
{
}

Boolean UNIX_FingerprintMatchingStatistics::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_FingerprintMatchingStatistics::getInstanceID() const
{
	return _instanceID;
}

void UNIX_FingerprintMatchingStatistics::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_FingerprintMatchingStatistics::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_FingerprintMatchingStatistics::getCaption() const
{
	return _caption;
}

void UNIX_FingerprintMatchingStatistics::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_FingerprintMatchingStatistics::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_FingerprintMatchingStatistics::getDescription() const
{
	return _description;
}

void UNIX_FingerprintMatchingStatistics::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_FingerprintMatchingStatistics::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_FingerprintMatchingStatistics::getElementName() const
{
	return _elementName;
}

void UNIX_FingerprintMatchingStatistics::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_FingerprintMatchingStatistics::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_FingerprintMatchingStatistics::getGeneration() const
{
	return _generation;
}

void UNIX_FingerprintMatchingStatistics::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_FingerprintMatchingStatistics::getStartStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_STATISTIC_TIME, getStartStatisticTime());
	return true;
}

CIMDateTime UNIX_FingerprintMatchingStatistics::getStartStatisticTime() const
{
	return _startStatisticTime;
}

void UNIX_FingerprintMatchingStatistics::setStartStatisticTime(CIMDateTime &value)
{
	_startStatisticTime = value;
}

Boolean UNIX_FingerprintMatchingStatistics::getStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATISTIC_TIME, getStatisticTime());
	return true;
}

CIMDateTime UNIX_FingerprintMatchingStatistics::getStatisticTime() const
{
	return _statisticTime;
}

void UNIX_FingerprintMatchingStatistics::setStatisticTime(CIMDateTime &value)
{
	_statisticTime = value;
}

Boolean UNIX_FingerprintMatchingStatistics::getSampleInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SAMPLE_INTERVAL, getSampleInterval());
	return true;
}

CIMDateTime UNIX_FingerprintMatchingStatistics::getSampleInterval() const
{
	return _sampleInterval;
}

void UNIX_FingerprintMatchingStatistics::setSampleInterval(CIMDateTime &value)
{
	_sampleInterval = value;
}

Boolean UNIX_FingerprintMatchingStatistics::getRateIntervalEndTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_END_TIME, getRateIntervalEndTime());
	return true;
}

CIMDateTime UNIX_FingerprintMatchingStatistics::getRateIntervalEndTime() const
{
	return _rateIntervalEndTime;
}

void UNIX_FingerprintMatchingStatistics::setRateIntervalEndTime(CIMDateTime &value)
{
	_rateIntervalEndTime = value;
}

Boolean UNIX_FingerprintMatchingStatistics::getRateIntervalStartTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_START_TIME, getRateIntervalStartTime());
	return true;
}

CIMDateTime UNIX_FingerprintMatchingStatistics::getRateIntervalStartTime() const
{
	return _rateIntervalStartTime;
}

void UNIX_FingerprintMatchingStatistics::setRateIntervalStartTime(CIMDateTime &value)
{
	_rateIntervalStartTime = value;
}

Boolean UNIX_FingerprintMatchingStatistics::getNumberOfAccepts(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_ACCEPTS, getNumberOfAccepts());
	return true;
}

Uint32 UNIX_FingerprintMatchingStatistics::getNumberOfAccepts() const
{
	return _numberOfAccepts;
}

void UNIX_FingerprintMatchingStatistics::setNumberOfAccepts(Uint32 &value)
{
	_numberOfAccepts = value;
}

Boolean UNIX_FingerprintMatchingStatistics::getNumberOfRejects(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_REJECTS, getNumberOfRejects());
	return true;
}

Uint32 UNIX_FingerprintMatchingStatistics::getNumberOfRejects() const
{
	return _numberOfRejects;
}

void UNIX_FingerprintMatchingStatistics::setNumberOfRejects(Uint32 &value)
{
	_numberOfRejects = value;
}


void UNIX_FingerprintMatchingStatistics::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("FingerprintMatchingStatistics");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_numberOfAccepts = Uint32(0);
	_numberOfRejects = Uint32(0);

}

Boolean UNIX_FingerprintMatchingStatistics::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "NumberOfAccepts"))
			{
				Uint32 numberOfAcceptsValue;
				property.getValue().get(numberOfAcceptsValue);
				setNumberOfAccepts(numberOfAcceptsValue);
			}
			else if (String::equal(property.getName().getString(), "NumberOfRejects"))
			{
				Uint32 numberOfRejectsValue;
				property.getValue().get(numberOfRejectsValue);
				setNumberOfRejects(numberOfRejectsValue);
			}
	}
	return true;
}

Uint32 UNIX_FingerprintMatchingStatistics::invokeResetSelectedStats(
		Array<String> &inSelectedStatistics
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ResetSelectedStats */
	
	
	
	return returnValue;
}


Boolean UNIX_FingerprintMatchingStatistics::initialize()
{
	return false;
}

Boolean UNIX_FingerprintMatchingStatistics::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("FingerprintMatchingStatistics");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_numberOfAccepts = Uint32(0);
	_numberOfRejects = Uint32(0);
	
	return false;
}

Boolean UNIX_FingerprintMatchingStatistics::finalize()
{
	return false;
}


Boolean UNIX_FingerprintMatchingStatistics::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_FingerprintMatchingStatistics::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FingerprintMatchingStatistics::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FingerprintMatchingStatistics::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FingerprintMatchingStatistics::validateInstance()
{
	return true;
}

