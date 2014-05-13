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


UNIX_SWRAllocationStatistics::UNIX_SWRAllocationStatistics(void)
{
}

UNIX_SWRAllocationStatistics::~UNIX_SWRAllocationStatistics(void)
{
}

Boolean UNIX_SWRAllocationStatistics::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_SWRAllocationStatistics::getInstanceID() const
{
	return _instanceID;
}

void UNIX_SWRAllocationStatistics::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_SWRAllocationStatistics::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_SWRAllocationStatistics::getCaption() const
{
	return _caption;
}

void UNIX_SWRAllocationStatistics::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_SWRAllocationStatistics::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_SWRAllocationStatistics::getDescription() const
{
	return _description;
}

void UNIX_SWRAllocationStatistics::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_SWRAllocationStatistics::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_SWRAllocationStatistics::getElementName() const
{
	return _elementName;
}

void UNIX_SWRAllocationStatistics::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_SWRAllocationStatistics::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_SWRAllocationStatistics::getGeneration() const
{
	return _generation;
}

void UNIX_SWRAllocationStatistics::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_SWRAllocationStatistics::getStartStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_STATISTIC_TIME, getStartStatisticTime());
	return true;
}

CIMDateTime UNIX_SWRAllocationStatistics::getStartStatisticTime() const
{
	return _startStatisticTime;
}

void UNIX_SWRAllocationStatistics::setStartStatisticTime(CIMDateTime &value)
{
	_startStatisticTime = value;
}

Boolean UNIX_SWRAllocationStatistics::getStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATISTIC_TIME, getStatisticTime());
	return true;
}

CIMDateTime UNIX_SWRAllocationStatistics::getStatisticTime() const
{
	return _statisticTime;
}

void UNIX_SWRAllocationStatistics::setStatisticTime(CIMDateTime &value)
{
	_statisticTime = value;
}

Boolean UNIX_SWRAllocationStatistics::getSampleInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SAMPLE_INTERVAL, getSampleInterval());
	return true;
}

CIMDateTime UNIX_SWRAllocationStatistics::getSampleInterval() const
{
	return _sampleInterval;
}

void UNIX_SWRAllocationStatistics::setSampleInterval(CIMDateTime &value)
{
	_sampleInterval = value;
}

Boolean UNIX_SWRAllocationStatistics::getRateIntervalEndTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_END_TIME, getRateIntervalEndTime());
	return true;
}

CIMDateTime UNIX_SWRAllocationStatistics::getRateIntervalEndTime() const
{
	return _rateIntervalEndTime;
}

void UNIX_SWRAllocationStatistics::setRateIntervalEndTime(CIMDateTime &value)
{
	_rateIntervalEndTime = value;
}

Boolean UNIX_SWRAllocationStatistics::getRateIntervalStartTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_START_TIME, getRateIntervalStartTime());
	return true;
}

CIMDateTime UNIX_SWRAllocationStatistics::getRateIntervalStartTime() const
{
	return _rateIntervalStartTime;
}

void UNIX_SWRAllocationStatistics::setRateIntervalStartTime(CIMDateTime &value)
{
	_rateIntervalStartTime = value;
}

Boolean UNIX_SWRAllocationStatistics::getLowerLimit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOWER_LIMIT, getLowerLimit());
	return true;
}

Uint32 UNIX_SWRAllocationStatistics::getLowerLimit() const
{
	return _lowerLimit;
}

void UNIX_SWRAllocationStatistics::setLowerLimit(Uint32 &value)
{
	_lowerLimit = value;
}

Boolean UNIX_SWRAllocationStatistics::getUpperLimit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UPPER_LIMIT, getUpperLimit());
	return true;
}

Uint32 UNIX_SWRAllocationStatistics::getUpperLimit() const
{
	return _upperLimit;
}

void UNIX_SWRAllocationStatistics::setUpperLimit(Uint32 &value)
{
	_upperLimit = value;
}

Boolean UNIX_SWRAllocationStatistics::getUnit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNIT, getUnit());
	return true;
}

String UNIX_SWRAllocationStatistics::getUnit() const
{
	return _unit;
}

void UNIX_SWRAllocationStatistics::setUnit(String &value)
{
	_unit = value;
}

Boolean UNIX_SWRAllocationStatistics::getOtherLowerLimit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_LOWER_LIMIT, getOtherLowerLimit());
	return true;
}

Uint32 UNIX_SWRAllocationStatistics::getOtherLowerLimit() const
{
	return _otherLowerLimit;
}

void UNIX_SWRAllocationStatistics::setOtherLowerLimit(Uint32 &value)
{
	_otherLowerLimit = value;
}

Boolean UNIX_SWRAllocationStatistics::getOtherUpperLimit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_UPPER_LIMIT, getOtherUpperLimit());
	return true;
}

Uint32 UNIX_SWRAllocationStatistics::getOtherUpperLimit() const
{
	return _otherUpperLimit;
}

void UNIX_SWRAllocationStatistics::setOtherUpperLimit(Uint32 &value)
{
	_otherUpperLimit = value;
}

Boolean UNIX_SWRAllocationStatistics::getOtherUnit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_UNIT, getOtherUnit());
	return true;
}

String UNIX_SWRAllocationStatistics::getOtherUnit() const
{
	return _otherUnit;
}

void UNIX_SWRAllocationStatistics::setOtherUnit(String &value)
{
	_otherUnit = value;
}

Boolean UNIX_SWRAllocationStatistics::getCharacteristic(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHARACTERISTIC, getCharacteristic());
	return true;
}

Uint16 UNIX_SWRAllocationStatistics::getCharacteristic() const
{
	return _characteristic;
}

void UNIX_SWRAllocationStatistics::setCharacteristic(Uint16 &value)
{
	_characteristic = value;
}

Boolean UNIX_SWRAllocationStatistics::getStatisticsType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATISTICS_TYPE, getStatisticsType());
	return true;
}

Uint16 UNIX_SWRAllocationStatistics::getStatisticsType() const
{
	return _statisticsType;
}

void UNIX_SWRAllocationStatistics::setStatisticsType(Uint16 &value)
{
	_statisticsType = value;
}

Boolean UNIX_SWRAllocationStatistics::getFirstError(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FIRST_ERROR, getFirstError());
	return true;
}

Uint16 UNIX_SWRAllocationStatistics::getFirstError() const
{
	return _firstError;
}

void UNIX_SWRAllocationStatistics::setFirstError(Uint16 &value)
{
	_firstError = value;
}

Boolean UNIX_SWRAllocationStatistics::getFirstErrorTimeStamp(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FIRST_ERROR_TIME_STAMP, getFirstErrorTimeStamp());
	return true;
}

CIMDateTime UNIX_SWRAllocationStatistics::getFirstErrorTimeStamp() const
{
	return _firstErrorTimeStamp;
}

void UNIX_SWRAllocationStatistics::setFirstErrorTimeStamp(CIMDateTime &value)
{
	_firstErrorTimeStamp = value;
}

Boolean UNIX_SWRAllocationStatistics::getLastError(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR, getLastError());
	return true;
}

Uint16 UNIX_SWRAllocationStatistics::getLastError() const
{
	return _lastError;
}

void UNIX_SWRAllocationStatistics::setLastError(Uint16 &value)
{
	_lastError = value;
}

Boolean UNIX_SWRAllocationStatistics::getLastErrorTimeStamp(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_TIME_STAMP, getLastErrorTimeStamp());
	return true;
}

CIMDateTime UNIX_SWRAllocationStatistics::getLastErrorTimeStamp() const
{
	return _lastErrorTimeStamp;
}

void UNIX_SWRAllocationStatistics::setLastErrorTimeStamp(CIMDateTime &value)
{
	_lastErrorTimeStamp = value;
}

Boolean UNIX_SWRAllocationStatistics::getErrorCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_COUNT, getErrorCount());
	return true;
}

Uint32 UNIX_SWRAllocationStatistics::getErrorCount() const
{
	return _errorCount;
}

void UNIX_SWRAllocationStatistics::setErrorCount(Uint32 &value)
{
	_errorCount = value;
}

Boolean UNIX_SWRAllocationStatistics::getAllocationLevel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOCATION_LEVEL, getAllocationLevel());
	return true;
}

Uint32 UNIX_SWRAllocationStatistics::getAllocationLevel() const
{
	return _allocationLevel;
}

void UNIX_SWRAllocationStatistics::setAllocationLevel(Uint32 &value)
{
	_allocationLevel = value;
}

Boolean UNIX_SWRAllocationStatistics::getOtherAllocationLevel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ALLOCATION_LEVEL, getOtherAllocationLevel());
	return true;
}

Uint32 UNIX_SWRAllocationStatistics::getOtherAllocationLevel() const
{
	return _otherAllocationLevel;
}

void UNIX_SWRAllocationStatistics::setOtherAllocationLevel(Uint32 &value)
{
	_otherAllocationLevel = value;
}

Boolean UNIX_SWRAllocationStatistics::getAverageItemResidenceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVERAGE_ITEM_RESIDENCE_TIME, getAverageItemResidenceTime());
	return true;
}

CIMDateTime UNIX_SWRAllocationStatistics::getAverageItemResidenceTime() const
{
	return _averageItemResidenceTime;
}

void UNIX_SWRAllocationStatistics::setAverageItemResidenceTime(CIMDateTime &value)
{
	_averageItemResidenceTime = value;
}

Boolean UNIX_SWRAllocationStatistics::getAllocationHighWaterMark(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOCATION_HIGH_WATER_MARK, getAllocationHighWaterMark());
	return true;
}

Uint32 UNIX_SWRAllocationStatistics::getAllocationHighWaterMark() const
{
	return _allocationHighWaterMark;
}

void UNIX_SWRAllocationStatistics::setAllocationHighWaterMark(Uint32 &value)
{
	_allocationHighWaterMark = value;
}

Boolean UNIX_SWRAllocationStatistics::getHighWaterMarkTimeStamp(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HIGH_WATER_MARK_TIME_STAMP, getHighWaterMarkTimeStamp());
	return true;
}

CIMDateTime UNIX_SWRAllocationStatistics::getHighWaterMarkTimeStamp() const
{
	return _highWaterMarkTimeStamp;
}

void UNIX_SWRAllocationStatistics::setHighWaterMarkTimeStamp(CIMDateTime &value)
{
	_highWaterMarkTimeStamp = value;
}

Boolean UNIX_SWRAllocationStatistics::getDroppedAllocationQuantity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DROPPED_ALLOCATION_QUANTITY, getDroppedAllocationQuantity());
	return true;
}

Uint32 UNIX_SWRAllocationStatistics::getDroppedAllocationQuantity() const
{
	return _droppedAllocationQuantity;
}

void UNIX_SWRAllocationStatistics::setDroppedAllocationQuantity(Uint32 &value)
{
	_droppedAllocationQuantity = value;
}


void UNIX_SWRAllocationStatistics::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("SWRAllocationStatistics");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_lowerLimit = Uint32(0);
	_upperLimit = Uint32(0);
	_unit = String ("");
	_otherLowerLimit = Uint32(0);
	_otherUpperLimit = Uint32(0);
	_otherUnit = String ("");
	_characteristic = Uint16(0);
	_statisticsType = Uint16(0);
	_firstError = Uint16(0);
	_firstErrorTimeStamp = CIMHelper::getCurrentTime();
	_lastError = Uint16(0);
	_lastErrorTimeStamp = CIMHelper::getCurrentTime();
	_errorCount = Uint32(0);
	_allocationLevel = Uint32(0);
	_otherAllocationLevel = Uint32(0);
	_averageItemResidenceTime = CIMHelper::getCurrentTime();
	_allocationHighWaterMark = Uint32(0);
	_highWaterMarkTimeStamp = CIMHelper::getCurrentTime();
	_droppedAllocationQuantity = Uint32(0);

}

Boolean UNIX_SWRAllocationStatistics::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "LowerLimit"))
			{
				Uint32 lowerLimitValue;
				property.getValue().get(lowerLimitValue);
				setLowerLimit(lowerLimitValue);
			}
			else if (String::equal(property.getName().getString(), "UpperLimit"))
			{
				Uint32 upperLimitValue;
				property.getValue().get(upperLimitValue);
				setUpperLimit(upperLimitValue);
			}
			else if (String::equal(property.getName().getString(), "Unit"))
			{
				String unitValue;
				property.getValue().get(unitValue);
				setUnit(unitValue);
			}
			else if (String::equal(property.getName().getString(), "OtherLowerLimit"))
			{
				Uint32 otherLowerLimitValue;
				property.getValue().get(otherLowerLimitValue);
				setOtherLowerLimit(otherLowerLimitValue);
			}
			else if (String::equal(property.getName().getString(), "OtherUpperLimit"))
			{
				Uint32 otherUpperLimitValue;
				property.getValue().get(otherUpperLimitValue);
				setOtherUpperLimit(otherUpperLimitValue);
			}
			else if (String::equal(property.getName().getString(), "OtherUnit"))
			{
				String otherUnitValue;
				property.getValue().get(otherUnitValue);
				setOtherUnit(otherUnitValue);
			}
			else if (String::equal(property.getName().getString(), "Characteristic"))
			{
				Uint16 characteristicValue;
				property.getValue().get(characteristicValue);
				setCharacteristic(characteristicValue);
			}
			else if (String::equal(property.getName().getString(), "StatisticsType"))
			{
				Uint16 statisticsTypeValue;
				property.getValue().get(statisticsTypeValue);
				setStatisticsType(statisticsTypeValue);
			}
			else if (String::equal(property.getName().getString(), "FirstError"))
			{
				Uint16 firstErrorValue;
				property.getValue().get(firstErrorValue);
				setFirstError(firstErrorValue);
			}
			else if (String::equal(property.getName().getString(), "FirstErrorTimeStamp"))
			{
				CIMDateTime firstErrorTimeStampValue;
				property.getValue().get(firstErrorTimeStampValue);
				setFirstErrorTimeStamp(firstErrorTimeStampValue);
			}
			else if (String::equal(property.getName().getString(), "LastError"))
			{
				Uint16 lastErrorValue;
				property.getValue().get(lastErrorValue);
				setLastError(lastErrorValue);
			}
			else if (String::equal(property.getName().getString(), "LastErrorTimeStamp"))
			{
				CIMDateTime lastErrorTimeStampValue;
				property.getValue().get(lastErrorTimeStampValue);
				setLastErrorTimeStamp(lastErrorTimeStampValue);
			}
			else if (String::equal(property.getName().getString(), "ErrorCount"))
			{
				Uint32 errorCountValue;
				property.getValue().get(errorCountValue);
				setErrorCount(errorCountValue);
			}
			else if (String::equal(property.getName().getString(), "AllocationLevel"))
			{
				Uint32 allocationLevelValue;
				property.getValue().get(allocationLevelValue);
				setAllocationLevel(allocationLevelValue);
			}
			else if (String::equal(property.getName().getString(), "OtherAllocationLevel"))
			{
				Uint32 otherAllocationLevelValue;
				property.getValue().get(otherAllocationLevelValue);
				setOtherAllocationLevel(otherAllocationLevelValue);
			}
			else if (String::equal(property.getName().getString(), "AverageItemResidenceTime"))
			{
				CIMDateTime averageItemResidenceTimeValue;
				property.getValue().get(averageItemResidenceTimeValue);
				setAverageItemResidenceTime(averageItemResidenceTimeValue);
			}
			else if (String::equal(property.getName().getString(), "AllocationHighWaterMark"))
			{
				Uint32 allocationHighWaterMarkValue;
				property.getValue().get(allocationHighWaterMarkValue);
				setAllocationHighWaterMark(allocationHighWaterMarkValue);
			}
			else if (String::equal(property.getName().getString(), "HighWaterMarkTimeStamp"))
			{
				CIMDateTime highWaterMarkTimeStampValue;
				property.getValue().get(highWaterMarkTimeStampValue);
				setHighWaterMarkTimeStamp(highWaterMarkTimeStampValue);
			}
			else if (String::equal(property.getName().getString(), "DroppedAllocationQuantity"))
			{
				Uint32 droppedAllocationQuantityValue;
				property.getValue().get(droppedAllocationQuantityValue);
				setDroppedAllocationQuantity(droppedAllocationQuantityValue);
			}
	}
	return true;
}

Uint32 UNIX_SWRAllocationStatistics::invokeResetSelectedStats(
		Array<String> &inSelectedStatistics
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ResetSelectedStats */
	
	
	
	return returnValue;
}


Boolean UNIX_SWRAllocationStatistics::initialize()
{
	return false;
}

Boolean UNIX_SWRAllocationStatistics::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("SWRAllocationStatistics");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_lowerLimit = Uint32(0);
	_upperLimit = Uint32(0);
	_unit = String ("");
	_otherLowerLimit = Uint32(0);
	_otherUpperLimit = Uint32(0);
	_otherUnit = String ("");
	_characteristic = Uint16(0);
	_statisticsType = Uint16(0);
	_firstError = Uint16(0);
	_firstErrorTimeStamp = CIMHelper::getCurrentTime();
	_lastError = Uint16(0);
	_lastErrorTimeStamp = CIMHelper::getCurrentTime();
	_errorCount = Uint32(0);
	_allocationLevel = Uint32(0);
	_otherAllocationLevel = Uint32(0);
	_averageItemResidenceTime = CIMHelper::getCurrentTime();
	_allocationHighWaterMark = Uint32(0);
	_highWaterMarkTimeStamp = CIMHelper::getCurrentTime();
	_droppedAllocationQuantity = Uint32(0);
	
	return false;
}

Boolean UNIX_SWRAllocationStatistics::finalize()
{
	return false;
}


Boolean UNIX_SWRAllocationStatistics::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_SWRAllocationStatistics::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SWRAllocationStatistics::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SWRAllocationStatistics::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SWRAllocationStatistics::validateInstance()
{
	return true;
}

