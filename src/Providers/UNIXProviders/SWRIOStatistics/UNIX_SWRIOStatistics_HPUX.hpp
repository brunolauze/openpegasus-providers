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


UNIX_SWRIOStatistics::UNIX_SWRIOStatistics(void)
{
}

UNIX_SWRIOStatistics::~UNIX_SWRIOStatistics(void)
{
}

Boolean UNIX_SWRIOStatistics::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_SWRIOStatistics::getInstanceID() const
{
	return _instanceID;
}

void UNIX_SWRIOStatistics::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_SWRIOStatistics::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_SWRIOStatistics::getCaption() const
{
	return _caption;
}

void UNIX_SWRIOStatistics::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_SWRIOStatistics::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_SWRIOStatistics::getDescription() const
{
	return _description;
}

void UNIX_SWRIOStatistics::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_SWRIOStatistics::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_SWRIOStatistics::getElementName() const
{
	return _elementName;
}

void UNIX_SWRIOStatistics::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_SWRIOStatistics::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_SWRIOStatistics::getGeneration() const
{
	return _generation;
}

void UNIX_SWRIOStatistics::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_SWRIOStatistics::getStartStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_STATISTIC_TIME, getStartStatisticTime());
	return true;
}

CIMDateTime UNIX_SWRIOStatistics::getStartStatisticTime() const
{
	return _startStatisticTime;
}

void UNIX_SWRIOStatistics::setStartStatisticTime(CIMDateTime &value)
{
	_startStatisticTime = value;
}

Boolean UNIX_SWRIOStatistics::getStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATISTIC_TIME, getStatisticTime());
	return true;
}

CIMDateTime UNIX_SWRIOStatistics::getStatisticTime() const
{
	return _statisticTime;
}

void UNIX_SWRIOStatistics::setStatisticTime(CIMDateTime &value)
{
	_statisticTime = value;
}

Boolean UNIX_SWRIOStatistics::getSampleInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SAMPLE_INTERVAL, getSampleInterval());
	return true;
}

CIMDateTime UNIX_SWRIOStatistics::getSampleInterval() const
{
	return _sampleInterval;
}

void UNIX_SWRIOStatistics::setSampleInterval(CIMDateTime &value)
{
	_sampleInterval = value;
}

Boolean UNIX_SWRIOStatistics::getRateIntervalEndTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_END_TIME, getRateIntervalEndTime());
	return true;
}

CIMDateTime UNIX_SWRIOStatistics::getRateIntervalEndTime() const
{
	return _rateIntervalEndTime;
}

void UNIX_SWRIOStatistics::setRateIntervalEndTime(CIMDateTime &value)
{
	_rateIntervalEndTime = value;
}

Boolean UNIX_SWRIOStatistics::getRateIntervalStartTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_START_TIME, getRateIntervalStartTime());
	return true;
}

CIMDateTime UNIX_SWRIOStatistics::getRateIntervalStartTime() const
{
	return _rateIntervalStartTime;
}

void UNIX_SWRIOStatistics::setRateIntervalStartTime(CIMDateTime &value)
{
	_rateIntervalStartTime = value;
}

Boolean UNIX_SWRIOStatistics::getLowerLimit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOWER_LIMIT, getLowerLimit());
	return true;
}

Uint32 UNIX_SWRIOStatistics::getLowerLimit() const
{
	return _lowerLimit;
}

void UNIX_SWRIOStatistics::setLowerLimit(Uint32 &value)
{
	_lowerLimit = value;
}

Boolean UNIX_SWRIOStatistics::getUpperLimit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UPPER_LIMIT, getUpperLimit());
	return true;
}

Uint32 UNIX_SWRIOStatistics::getUpperLimit() const
{
	return _upperLimit;
}

void UNIX_SWRIOStatistics::setUpperLimit(Uint32 &value)
{
	_upperLimit = value;
}

Boolean UNIX_SWRIOStatistics::getUnit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNIT, getUnit());
	return true;
}

String UNIX_SWRIOStatistics::getUnit() const
{
	return _unit;
}

void UNIX_SWRIOStatistics::setUnit(String &value)
{
	_unit = value;
}

Boolean UNIX_SWRIOStatistics::getOtherLowerLimit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_LOWER_LIMIT, getOtherLowerLimit());
	return true;
}

Uint32 UNIX_SWRIOStatistics::getOtherLowerLimit() const
{
	return _otherLowerLimit;
}

void UNIX_SWRIOStatistics::setOtherLowerLimit(Uint32 &value)
{
	_otherLowerLimit = value;
}

Boolean UNIX_SWRIOStatistics::getOtherUpperLimit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_UPPER_LIMIT, getOtherUpperLimit());
	return true;
}

Uint32 UNIX_SWRIOStatistics::getOtherUpperLimit() const
{
	return _otherUpperLimit;
}

void UNIX_SWRIOStatistics::setOtherUpperLimit(Uint32 &value)
{
	_otherUpperLimit = value;
}

Boolean UNIX_SWRIOStatistics::getOtherUnit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_UNIT, getOtherUnit());
	return true;
}

String UNIX_SWRIOStatistics::getOtherUnit() const
{
	return _otherUnit;
}

void UNIX_SWRIOStatistics::setOtherUnit(String &value)
{
	_otherUnit = value;
}

Boolean UNIX_SWRIOStatistics::getCharacteristic(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHARACTERISTIC, getCharacteristic());
	return true;
}

Uint16 UNIX_SWRIOStatistics::getCharacteristic() const
{
	return _characteristic;
}

void UNIX_SWRIOStatistics::setCharacteristic(Uint16 &value)
{
	_characteristic = value;
}

Boolean UNIX_SWRIOStatistics::getStatisticsType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATISTICS_TYPE, getStatisticsType());
	return true;
}

Uint16 UNIX_SWRIOStatistics::getStatisticsType() const
{
	return _statisticsType;
}

void UNIX_SWRIOStatistics::setStatisticsType(Uint16 &value)
{
	_statisticsType = value;
}

Boolean UNIX_SWRIOStatistics::getFirstError(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FIRST_ERROR, getFirstError());
	return true;
}

Uint16 UNIX_SWRIOStatistics::getFirstError() const
{
	return _firstError;
}

void UNIX_SWRIOStatistics::setFirstError(Uint16 &value)
{
	_firstError = value;
}

Boolean UNIX_SWRIOStatistics::getFirstErrorTimeStamp(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FIRST_ERROR_TIME_STAMP, getFirstErrorTimeStamp());
	return true;
}

CIMDateTime UNIX_SWRIOStatistics::getFirstErrorTimeStamp() const
{
	return _firstErrorTimeStamp;
}

void UNIX_SWRIOStatistics::setFirstErrorTimeStamp(CIMDateTime &value)
{
	_firstErrorTimeStamp = value;
}

Boolean UNIX_SWRIOStatistics::getLastError(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR, getLastError());
	return true;
}

Uint16 UNIX_SWRIOStatistics::getLastError() const
{
	return _lastError;
}

void UNIX_SWRIOStatistics::setLastError(Uint16 &value)
{
	_lastError = value;
}

Boolean UNIX_SWRIOStatistics::getLastErrorTimeStamp(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_TIME_STAMP, getLastErrorTimeStamp());
	return true;
}

CIMDateTime UNIX_SWRIOStatistics::getLastErrorTimeStamp() const
{
	return _lastErrorTimeStamp;
}

void UNIX_SWRIOStatistics::setLastErrorTimeStamp(CIMDateTime &value)
{
	_lastErrorTimeStamp = value;
}

Boolean UNIX_SWRIOStatistics::getErrorCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_COUNT, getErrorCount());
	return true;
}

Uint32 UNIX_SWRIOStatistics::getErrorCount() const
{
	return _errorCount;
}

void UNIX_SWRIOStatistics::setErrorCount(Uint32 &value)
{
	_errorCount = value;
}

Boolean UNIX_SWRIOStatistics::getTransferredQuantity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSFERRED_QUANTITY, getTransferredQuantity());
	return true;
}

Uint32 UNIX_SWRIOStatistics::getTransferredQuantity() const
{
	return _transferredQuantity;
}

void UNIX_SWRIOStatistics::setTransferredQuantity(Uint32 &value)
{
	_transferredQuantity = value;
}

Boolean UNIX_SWRIOStatistics::getOtherTransferredQuantity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TRANSFERRED_QUANTITY, getOtherTransferredQuantity());
	return true;
}

Uint32 UNIX_SWRIOStatistics::getOtherTransferredQuantity() const
{
	return _otherTransferredQuantity;
}

void UNIX_SWRIOStatistics::setOtherTransferredQuantity(Uint32 &value)
{
	_otherTransferredQuantity = value;
}

Boolean UNIX_SWRIOStatistics::getTransfers(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSFERS, getTransfers());
	return true;
}

Uint32 UNIX_SWRIOStatistics::getTransfers() const
{
	return _transfers;
}

void UNIX_SWRIOStatistics::setTransfers(Uint32 &value)
{
	_transfers = value;
}

Boolean UNIX_SWRIOStatistics::getAverageTransferTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVERAGE_TRANSFER_TIME, getAverageTransferTime());
	return true;
}

CIMDateTime UNIX_SWRIOStatistics::getAverageTransferTime() const
{
	return _averageTransferTime;
}

void UNIX_SWRIOStatistics::setAverageTransferTime(CIMDateTime &value)
{
	_averageTransferTime = value;
}

Boolean UNIX_SWRIOStatistics::getSuccessfulTransfers(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUCCESSFUL_TRANSFERS, getSuccessfulTransfers());
	return true;
}

Uint32 UNIX_SWRIOStatistics::getSuccessfulTransfers() const
{
	return _successfulTransfers;
}

void UNIX_SWRIOStatistics::setSuccessfulTransfers(Uint32 &value)
{
	_successfulTransfers = value;
}

Boolean UNIX_SWRIOStatistics::getSuccessfulQuantity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUCCESSFUL_QUANTITY, getSuccessfulQuantity());
	return true;
}

Uint32 UNIX_SWRIOStatistics::getSuccessfulQuantity() const
{
	return _successfulQuantity;
}

void UNIX_SWRIOStatistics::setSuccessfulQuantity(Uint32 &value)
{
	_successfulQuantity = value;
}

Boolean UNIX_SWRIOStatistics::getCountOfActiveTransfers(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COUNT_OF_ACTIVE_TRANSFERS, getCountOfActiveTransfers());
	return true;
}

Uint32 UNIX_SWRIOStatistics::getCountOfActiveTransfers() const
{
	return _countOfActiveTransfers;
}

void UNIX_SWRIOStatistics::setCountOfActiveTransfers(Uint32 &value)
{
	_countOfActiveTransfers = value;
}

Boolean UNIX_SWRIOStatistics::getLastActivity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ACTIVITY, getLastActivity());
	return true;
}

CIMDateTime UNIX_SWRIOStatistics::getLastActivity() const
{
	return _lastActivity;
}

void UNIX_SWRIOStatistics::setLastActivity(CIMDateTime &value)
{
	_lastActivity = value;
}


void UNIX_SWRIOStatistics::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("SWRIOStatistics");
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
	_transferredQuantity = Uint32(0);
	_otherTransferredQuantity = Uint32(0);
	_transfers = Uint32(0);
	_averageTransferTime = CIMHelper::getCurrentTime();
	_successfulTransfers = Uint32(0);
	_successfulQuantity = Uint32(0);
	_countOfActiveTransfers = Uint32(0);
	_lastActivity = CIMHelper::getCurrentTime();

}

Boolean UNIX_SWRIOStatistics::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "TransferredQuantity"))
			{
				Uint32 transferredQuantityValue;
				property.getValue().get(transferredQuantityValue);
				setTransferredQuantity(transferredQuantityValue);
			}
			else if (String::equal(property.getName().getString(), "OtherTransferredQuantity"))
			{
				Uint32 otherTransferredQuantityValue;
				property.getValue().get(otherTransferredQuantityValue);
				setOtherTransferredQuantity(otherTransferredQuantityValue);
			}
			else if (String::equal(property.getName().getString(), "Transfers"))
			{
				Uint32 transfersValue;
				property.getValue().get(transfersValue);
				setTransfers(transfersValue);
			}
			else if (String::equal(property.getName().getString(), "AverageTransferTime"))
			{
				CIMDateTime averageTransferTimeValue;
				property.getValue().get(averageTransferTimeValue);
				setAverageTransferTime(averageTransferTimeValue);
			}
			else if (String::equal(property.getName().getString(), "SuccessfulTransfers"))
			{
				Uint32 successfulTransfersValue;
				property.getValue().get(successfulTransfersValue);
				setSuccessfulTransfers(successfulTransfersValue);
			}
			else if (String::equal(property.getName().getString(), "SuccessfulQuantity"))
			{
				Uint32 successfulQuantityValue;
				property.getValue().get(successfulQuantityValue);
				setSuccessfulQuantity(successfulQuantityValue);
			}
			else if (String::equal(property.getName().getString(), "CountOfActiveTransfers"))
			{
				Uint32 countOfActiveTransfersValue;
				property.getValue().get(countOfActiveTransfersValue);
				setCountOfActiveTransfers(countOfActiveTransfersValue);
			}
			else if (String::equal(property.getName().getString(), "LastActivity"))
			{
				CIMDateTime lastActivityValue;
				property.getValue().get(lastActivityValue);
				setLastActivity(lastActivityValue);
			}
	}
	return true;
}

Uint32 UNIX_SWRIOStatistics::invokeResetSelectedStats(
		Array<String> &inSelectedStatistics
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ResetSelectedStats */
	
	
	
	return returnValue;
}


Boolean UNIX_SWRIOStatistics::initialize()
{
	return false;
}

Boolean UNIX_SWRIOStatistics::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("SWRIOStatistics");
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
	_transferredQuantity = Uint32(0);
	_otherTransferredQuantity = Uint32(0);
	_transfers = Uint32(0);
	_averageTransferTime = CIMHelper::getCurrentTime();
	_successfulTransfers = Uint32(0);
	_successfulQuantity = Uint32(0);
	_countOfActiveTransfers = Uint32(0);
	_lastActivity = CIMHelper::getCurrentTime();
	
	return false;
}

Boolean UNIX_SWRIOStatistics::finalize()
{
	return false;
}


Boolean UNIX_SWRIOStatistics::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_SWRIOStatistics::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SWRIOStatistics::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SWRIOStatistics::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SWRIOStatistics::validateInstance()
{
	return true;
}

