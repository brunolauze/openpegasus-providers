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


UNIX_LabelReaderStatData::UNIX_LabelReaderStatData(void)
{
}

UNIX_LabelReaderStatData::~UNIX_LabelReaderStatData(void)
{
}

Boolean UNIX_LabelReaderStatData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_LabelReaderStatData::getInstanceID() const
{
	return _instanceID;
}

void UNIX_LabelReaderStatData::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_LabelReaderStatData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_LabelReaderStatData::getCaption() const
{
	return _caption;
}

void UNIX_LabelReaderStatData::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_LabelReaderStatData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_LabelReaderStatData::getDescription() const
{
	return _description;
}

void UNIX_LabelReaderStatData::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_LabelReaderStatData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_LabelReaderStatData::getElementName() const
{
	return _elementName;
}

void UNIX_LabelReaderStatData::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_LabelReaderStatData::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_LabelReaderStatData::getGeneration() const
{
	return _generation;
}

void UNIX_LabelReaderStatData::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_LabelReaderStatData::getStartStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_STATISTIC_TIME, getStartStatisticTime());
	return true;
}

CIMDateTime UNIX_LabelReaderStatData::getStartStatisticTime() const
{
	return _startStatisticTime;
}

void UNIX_LabelReaderStatData::setStartStatisticTime(CIMDateTime &value)
{
	_startStatisticTime = value;
}

Boolean UNIX_LabelReaderStatData::getStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATISTIC_TIME, getStatisticTime());
	return true;
}

CIMDateTime UNIX_LabelReaderStatData::getStatisticTime() const
{
	return _statisticTime;
}

void UNIX_LabelReaderStatData::setStatisticTime(CIMDateTime &value)
{
	_statisticTime = value;
}

Boolean UNIX_LabelReaderStatData::getSampleInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SAMPLE_INTERVAL, getSampleInterval());
	return true;
}

CIMDateTime UNIX_LabelReaderStatData::getSampleInterval() const
{
	return _sampleInterval;
}

void UNIX_LabelReaderStatData::setSampleInterval(CIMDateTime &value)
{
	_sampleInterval = value;
}

Boolean UNIX_LabelReaderStatData::getRateIntervalEndTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_END_TIME, getRateIntervalEndTime());
	return true;
}

CIMDateTime UNIX_LabelReaderStatData::getRateIntervalEndTime() const
{
	return _rateIntervalEndTime;
}

void UNIX_LabelReaderStatData::setRateIntervalEndTime(CIMDateTime &value)
{
	_rateIntervalEndTime = value;
}

Boolean UNIX_LabelReaderStatData::getRateIntervalStartTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_START_TIME, getRateIntervalStartTime());
	return true;
}

CIMDateTime UNIX_LabelReaderStatData::getRateIntervalStartTime() const
{
	return _rateIntervalStartTime;
}

void UNIX_LabelReaderStatData::setRateIntervalStartTime(CIMDateTime &value)
{
	_rateIntervalStartTime = value;
}

Boolean UNIX_LabelReaderStatData::getScanSuccesses(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SCAN_SUCCESSES, getScanSuccesses());
	return true;
}

Uint64 UNIX_LabelReaderStatData::getScanSuccesses() const
{
	return _scanSuccesses;
}

void UNIX_LabelReaderStatData::setScanSuccesses(Uint64 &value)
{
	_scanSuccesses = value;
}

Boolean UNIX_LabelReaderStatData::getScanFailures(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SCAN_FAILURES, getScanFailures());
	return true;
}

Uint64 UNIX_LabelReaderStatData::getScanFailures() const
{
	return _scanFailures;
}

void UNIX_LabelReaderStatData::setScanFailures(Uint64 &value)
{
	_scanFailures = value;
}

Boolean UNIX_LabelReaderStatData::getScanRetries(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SCAN_RETRIES, getScanRetries());
	return true;
}

Uint64 UNIX_LabelReaderStatData::getScanRetries() const
{
	return _scanRetries;
}

void UNIX_LabelReaderStatData::setScanRetries(Uint64 &value)
{
	_scanRetries = value;
}


void UNIX_LabelReaderStatData::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("LabelReaderStatData");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_scanSuccesses = Uint64(0);
	_scanFailures = Uint64(0);
	_scanRetries = Uint64(0);

}

Boolean UNIX_LabelReaderStatData::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "ScanSuccesses"))
			{
				Uint64 scanSuccessesValue;
				property.getValue().get(scanSuccessesValue);
				setScanSuccesses(scanSuccessesValue);
			}
			else if (String::equal(property.getName().getString(), "ScanFailures"))
			{
				Uint64 scanFailuresValue;
				property.getValue().get(scanFailuresValue);
				setScanFailures(scanFailuresValue);
			}
			else if (String::equal(property.getName().getString(), "ScanRetries"))
			{
				Uint64 scanRetriesValue;
				property.getValue().get(scanRetriesValue);
				setScanRetries(scanRetriesValue);
			}
	}
	return true;
}

Uint32 UNIX_LabelReaderStatData::invokeResetSelectedStats(
		Array<String> &inSelectedStatistics
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ResetSelectedStats */
	
	
	
	return returnValue;
}


Boolean UNIX_LabelReaderStatData::initialize()
{
	return false;
}

Boolean UNIX_LabelReaderStatData::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("LabelReaderStatData");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_scanSuccesses = Uint64(0);
	_scanFailures = Uint64(0);
	_scanRetries = Uint64(0);
	
	return false;
}

Boolean UNIX_LabelReaderStatData::finalize()
{
	return false;
}


Boolean UNIX_LabelReaderStatData::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_LabelReaderStatData::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_LabelReaderStatData::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_LabelReaderStatData::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_LabelReaderStatData::validateInstance()
{
	return true;
}

