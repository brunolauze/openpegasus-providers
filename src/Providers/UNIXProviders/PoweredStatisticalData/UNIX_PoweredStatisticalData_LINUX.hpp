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


UNIX_PoweredStatisticalData::UNIX_PoweredStatisticalData(void)
{
}

UNIX_PoweredStatisticalData::~UNIX_PoweredStatisticalData(void)
{
}

Boolean UNIX_PoweredStatisticalData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_PoweredStatisticalData::getInstanceID() const
{
	return _instanceID;
}

void UNIX_PoweredStatisticalData::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_PoweredStatisticalData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_PoweredStatisticalData::getCaption() const
{
	return _caption;
}

void UNIX_PoweredStatisticalData::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_PoweredStatisticalData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_PoweredStatisticalData::getDescription() const
{
	return _description;
}

void UNIX_PoweredStatisticalData::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_PoweredStatisticalData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_PoweredStatisticalData::getElementName() const
{
	return _elementName;
}

void UNIX_PoweredStatisticalData::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_PoweredStatisticalData::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_PoweredStatisticalData::getGeneration() const
{
	return _generation;
}

void UNIX_PoweredStatisticalData::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_PoweredStatisticalData::getStartStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_STATISTIC_TIME, getStartStatisticTime());
	return true;
}

CIMDateTime UNIX_PoweredStatisticalData::getStartStatisticTime() const
{
	return _startStatisticTime;
}

void UNIX_PoweredStatisticalData::setStartStatisticTime(CIMDateTime &value)
{
	_startStatisticTime = value;
}

Boolean UNIX_PoweredStatisticalData::getStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATISTIC_TIME, getStatisticTime());
	return true;
}

CIMDateTime UNIX_PoweredStatisticalData::getStatisticTime() const
{
	return _statisticTime;
}

void UNIX_PoweredStatisticalData::setStatisticTime(CIMDateTime &value)
{
	_statisticTime = value;
}

Boolean UNIX_PoweredStatisticalData::getSampleInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SAMPLE_INTERVAL, getSampleInterval());
	return true;
}

CIMDateTime UNIX_PoweredStatisticalData::getSampleInterval() const
{
	return _sampleInterval;
}

void UNIX_PoweredStatisticalData::setSampleInterval(CIMDateTime &value)
{
	_sampleInterval = value;
}

Boolean UNIX_PoweredStatisticalData::getRateIntervalEndTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_END_TIME, getRateIntervalEndTime());
	return true;
}

CIMDateTime UNIX_PoweredStatisticalData::getRateIntervalEndTime() const
{
	return _rateIntervalEndTime;
}

void UNIX_PoweredStatisticalData::setRateIntervalEndTime(CIMDateTime &value)
{
	_rateIntervalEndTime = value;
}

Boolean UNIX_PoweredStatisticalData::getRateIntervalStartTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_START_TIME, getRateIntervalStartTime());
	return true;
}

CIMDateTime UNIX_PoweredStatisticalData::getRateIntervalStartTime() const
{
	return _rateIntervalStartTime;
}

void UNIX_PoweredStatisticalData::setRateIntervalStartTime(CIMDateTime &value)
{
	_rateIntervalStartTime = value;
}

Boolean UNIX_PoweredStatisticalData::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

CIMDateTime UNIX_PoweredStatisticalData::getPowerOnHours() const
{
	return _powerOnHours;
}

void UNIX_PoweredStatisticalData::setPowerOnHours(CIMDateTime &value)
{
	_powerOnHours = value;
}

Boolean UNIX_PoweredStatisticalData::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

CIMDateTime UNIX_PoweredStatisticalData::getTotalPowerOnHours() const
{
	return _totalPowerOnHours;
}

void UNIX_PoweredStatisticalData::setTotalPowerOnHours(CIMDateTime &value)
{
	_totalPowerOnHours = value;
}


void UNIX_PoweredStatisticalData::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PoweredStatisticalData");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_powerOnHours = CIMHelper::getCurrentTime();
	_totalPowerOnHours = CIMHelper::getCurrentTime();

}

Boolean UNIX_PoweredStatisticalData::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "PowerOnHours"))
			{
				CIMDateTime powerOnHoursValue;
				property.getValue().get(powerOnHoursValue);
				setPowerOnHours(powerOnHoursValue);
			}
			else if (String::equal(property.getName().getString(), "TotalPowerOnHours"))
			{
				CIMDateTime totalPowerOnHoursValue;
				property.getValue().get(totalPowerOnHoursValue);
				setTotalPowerOnHours(totalPowerOnHoursValue);
			}
	}
	return true;
}

Uint32 UNIX_PoweredStatisticalData::invokeResetSelectedStats(
		Array<String> &inSelectedStatistics
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ResetSelectedStats */
	
	
	
	return returnValue;
}


Boolean UNIX_PoweredStatisticalData::initialize()
{
	return false;
}

Boolean UNIX_PoweredStatisticalData::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PoweredStatisticalData");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_powerOnHours = CIMHelper::getCurrentTime();
	_totalPowerOnHours = CIMHelper::getCurrentTime();
	
	return false;
}

Boolean UNIX_PoweredStatisticalData::finalize()
{
	return false;
}


Boolean UNIX_PoweredStatisticalData::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_PoweredStatisticalData::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PoweredStatisticalData::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PoweredStatisticalData::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PoweredStatisticalData::validateInstance()
{
	return true;
}

