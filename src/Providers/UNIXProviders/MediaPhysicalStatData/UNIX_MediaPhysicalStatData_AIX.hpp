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


UNIX_MediaPhysicalStatData::UNIX_MediaPhysicalStatData(void)
{
}

UNIX_MediaPhysicalStatData::~UNIX_MediaPhysicalStatData(void)
{
}

Boolean UNIX_MediaPhysicalStatData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_MediaPhysicalStatData::getInstanceID() const
{
	return _instanceID;
}

void UNIX_MediaPhysicalStatData::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_MediaPhysicalStatData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_MediaPhysicalStatData::getCaption() const
{
	return _caption;
}

void UNIX_MediaPhysicalStatData::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_MediaPhysicalStatData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_MediaPhysicalStatData::getDescription() const
{
	return _description;
}

void UNIX_MediaPhysicalStatData::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_MediaPhysicalStatData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_MediaPhysicalStatData::getElementName() const
{
	return _elementName;
}

void UNIX_MediaPhysicalStatData::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_MediaPhysicalStatData::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_MediaPhysicalStatData::getGeneration() const
{
	return _generation;
}

void UNIX_MediaPhysicalStatData::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_MediaPhysicalStatData::getStartStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_STATISTIC_TIME, getStartStatisticTime());
	return true;
}

CIMDateTime UNIX_MediaPhysicalStatData::getStartStatisticTime() const
{
	return _startStatisticTime;
}

void UNIX_MediaPhysicalStatData::setStartStatisticTime(CIMDateTime &value)
{
	_startStatisticTime = value;
}

Boolean UNIX_MediaPhysicalStatData::getStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATISTIC_TIME, getStatisticTime());
	return true;
}

CIMDateTime UNIX_MediaPhysicalStatData::getStatisticTime() const
{
	return _statisticTime;
}

void UNIX_MediaPhysicalStatData::setStatisticTime(CIMDateTime &value)
{
	_statisticTime = value;
}

Boolean UNIX_MediaPhysicalStatData::getSampleInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SAMPLE_INTERVAL, getSampleInterval());
	return true;
}

CIMDateTime UNIX_MediaPhysicalStatData::getSampleInterval() const
{
	return _sampleInterval;
}

void UNIX_MediaPhysicalStatData::setSampleInterval(CIMDateTime &value)
{
	_sampleInterval = value;
}

Boolean UNIX_MediaPhysicalStatData::getRateIntervalEndTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_END_TIME, getRateIntervalEndTime());
	return true;
}

CIMDateTime UNIX_MediaPhysicalStatData::getRateIntervalEndTime() const
{
	return _rateIntervalEndTime;
}

void UNIX_MediaPhysicalStatData::setRateIntervalEndTime(CIMDateTime &value)
{
	_rateIntervalEndTime = value;
}

Boolean UNIX_MediaPhysicalStatData::getRateIntervalStartTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_START_TIME, getRateIntervalStartTime());
	return true;
}

CIMDateTime UNIX_MediaPhysicalStatData::getRateIntervalStartTime() const
{
	return _rateIntervalStartTime;
}

void UNIX_MediaPhysicalStatData::setRateIntervalStartTime(CIMDateTime &value)
{
	_rateIntervalStartTime = value;
}

Boolean UNIX_MediaPhysicalStatData::getScanSuccesses(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SCAN_SUCCESSES, getScanSuccesses());
	return true;
}

Uint64 UNIX_MediaPhysicalStatData::getScanSuccesses() const
{
	return _scanSuccesses;
}

void UNIX_MediaPhysicalStatData::setScanSuccesses(Uint64 &value)
{
	_scanSuccesses = value;
}

Boolean UNIX_MediaPhysicalStatData::getScanFailures(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SCAN_FAILURES, getScanFailures());
	return true;
}

Uint64 UNIX_MediaPhysicalStatData::getScanFailures() const
{
	return _scanFailures;
}

void UNIX_MediaPhysicalStatData::setScanFailures(Uint64 &value)
{
	_scanFailures = value;
}

Boolean UNIX_MediaPhysicalStatData::getScanRetries(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SCAN_RETRIES, getScanRetries());
	return true;
}

Uint64 UNIX_MediaPhysicalStatData::getScanRetries() const
{
	return _scanRetries;
}

void UNIX_MediaPhysicalStatData::setScanRetries(Uint64 &value)
{
	_scanRetries = value;
}

Boolean UNIX_MediaPhysicalStatData::getPickSuccesses(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PICK_SUCCESSES, getPickSuccesses());
	return true;
}

Uint64 UNIX_MediaPhysicalStatData::getPickSuccesses() const
{
	return _pickSuccesses;
}

void UNIX_MediaPhysicalStatData::setPickSuccesses(Uint64 &value)
{
	_pickSuccesses = value;
}

Boolean UNIX_MediaPhysicalStatData::getPickFailures(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PICK_FAILURES, getPickFailures());
	return true;
}

Uint64 UNIX_MediaPhysicalStatData::getPickFailures() const
{
	return _pickFailures;
}

void UNIX_MediaPhysicalStatData::setPickFailures(Uint64 &value)
{
	_pickFailures = value;
}

Boolean UNIX_MediaPhysicalStatData::getPickRetries(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PICK_RETRIES, getPickRetries());
	return true;
}

Uint64 UNIX_MediaPhysicalStatData::getPickRetries() const
{
	return _pickRetries;
}

void UNIX_MediaPhysicalStatData::setPickRetries(Uint64 &value)
{
	_pickRetries = value;
}

Boolean UNIX_MediaPhysicalStatData::getPutSuccesses(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PUT_SUCCESSES, getPutSuccesses());
	return true;
}

Uint64 UNIX_MediaPhysicalStatData::getPutSuccesses() const
{
	return _putSuccesses;
}

void UNIX_MediaPhysicalStatData::setPutSuccesses(Uint64 &value)
{
	_putSuccesses = value;
}

Boolean UNIX_MediaPhysicalStatData::getPutFailures(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PUT_FAILURES, getPutFailures());
	return true;
}

Uint64 UNIX_MediaPhysicalStatData::getPutFailures() const
{
	return _putFailures;
}

void UNIX_MediaPhysicalStatData::setPutFailures(Uint64 &value)
{
	_putFailures = value;
}

Boolean UNIX_MediaPhysicalStatData::getPutRetries(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PUT_RETRIES, getPutRetries());
	return true;
}

Uint64 UNIX_MediaPhysicalStatData::getPutRetries() const
{
	return _putRetries;
}

void UNIX_MediaPhysicalStatData::setPutRetries(Uint64 &value)
{
	_putRetries = value;
}


void UNIX_MediaPhysicalStatData::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("MediaPhysicalStatData");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_scanSuccesses = Uint64(0);
	_scanFailures = Uint64(0);
	_scanRetries = Uint64(0);
	_pickSuccesses = Uint64(0);
	_pickFailures = Uint64(0);
	_pickRetries = Uint64(0);
	_putSuccesses = Uint64(0);
	_putFailures = Uint64(0);
	_putRetries = Uint64(0);

}

Boolean UNIX_MediaPhysicalStatData::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "PickSuccesses"))
			{
				Uint64 pickSuccessesValue;
				property.getValue().get(pickSuccessesValue);
				setPickSuccesses(pickSuccessesValue);
			}
			else if (String::equal(property.getName().getString(), "PickFailures"))
			{
				Uint64 pickFailuresValue;
				property.getValue().get(pickFailuresValue);
				setPickFailures(pickFailuresValue);
			}
			else if (String::equal(property.getName().getString(), "PickRetries"))
			{
				Uint64 pickRetriesValue;
				property.getValue().get(pickRetriesValue);
				setPickRetries(pickRetriesValue);
			}
			else if (String::equal(property.getName().getString(), "PutSuccesses"))
			{
				Uint64 putSuccessesValue;
				property.getValue().get(putSuccessesValue);
				setPutSuccesses(putSuccessesValue);
			}
			else if (String::equal(property.getName().getString(), "PutFailures"))
			{
				Uint64 putFailuresValue;
				property.getValue().get(putFailuresValue);
				setPutFailures(putFailuresValue);
			}
			else if (String::equal(property.getName().getString(), "PutRetries"))
			{
				Uint64 putRetriesValue;
				property.getValue().get(putRetriesValue);
				setPutRetries(putRetriesValue);
			}
	}
	return true;
}

Uint32 UNIX_MediaPhysicalStatData::invokeResetSelectedStats(
		Array<String> &inSelectedStatistics
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ResetSelectedStats */
	
	
	
	return returnValue;
}


Boolean UNIX_MediaPhysicalStatData::initialize()
{
	return false;
}

Boolean UNIX_MediaPhysicalStatData::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("MediaPhysicalStatData");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_scanSuccesses = Uint64(0);
	_scanFailures = Uint64(0);
	_scanRetries = Uint64(0);
	_pickSuccesses = Uint64(0);
	_pickFailures = Uint64(0);
	_pickRetries = Uint64(0);
	_putSuccesses = Uint64(0);
	_putFailures = Uint64(0);
	_putRetries = Uint64(0);
	
	return false;
}

Boolean UNIX_MediaPhysicalStatData::finalize()
{
	return false;
}


Boolean UNIX_MediaPhysicalStatData::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_MediaPhysicalStatData::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_MediaPhysicalStatData::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_MediaPhysicalStatData::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_MediaPhysicalStatData::validateInstance()
{
	return true;
}

