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


UNIX_VTLStatisticalData::UNIX_VTLStatisticalData(void)
{
}

UNIX_VTLStatisticalData::~UNIX_VTLStatisticalData(void)
{
}

Boolean UNIX_VTLStatisticalData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_VTLStatisticalData::getInstanceID() const
{
	return _instanceID;
}

void UNIX_VTLStatisticalData::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_VTLStatisticalData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_VTLStatisticalData::getCaption() const
{
	return _caption;
}

void UNIX_VTLStatisticalData::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_VTLStatisticalData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_VTLStatisticalData::getDescription() const
{
	return _description;
}

void UNIX_VTLStatisticalData::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_VTLStatisticalData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_VTLStatisticalData::getElementName() const
{
	return _elementName;
}

void UNIX_VTLStatisticalData::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_VTLStatisticalData::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_VTLStatisticalData::getGeneration() const
{
	return _generation;
}

void UNIX_VTLStatisticalData::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_VTLStatisticalData::getStartStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_STATISTIC_TIME, getStartStatisticTime());
	return true;
}

CIMDateTime UNIX_VTLStatisticalData::getStartStatisticTime() const
{
	return _startStatisticTime;
}

void UNIX_VTLStatisticalData::setStartStatisticTime(CIMDateTime &value)
{
	_startStatisticTime = value;
}

Boolean UNIX_VTLStatisticalData::getStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATISTIC_TIME, getStatisticTime());
	return true;
}

CIMDateTime UNIX_VTLStatisticalData::getStatisticTime() const
{
	return _statisticTime;
}

void UNIX_VTLStatisticalData::setStatisticTime(CIMDateTime &value)
{
	_statisticTime = value;
}

Boolean UNIX_VTLStatisticalData::getSampleInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SAMPLE_INTERVAL, getSampleInterval());
	return true;
}

CIMDateTime UNIX_VTLStatisticalData::getSampleInterval() const
{
	return _sampleInterval;
}

void UNIX_VTLStatisticalData::setSampleInterval(CIMDateTime &value)
{
	_sampleInterval = value;
}

Boolean UNIX_VTLStatisticalData::getRateIntervalEndTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_END_TIME, getRateIntervalEndTime());
	return true;
}

CIMDateTime UNIX_VTLStatisticalData::getRateIntervalEndTime() const
{
	return _rateIntervalEndTime;
}

void UNIX_VTLStatisticalData::setRateIntervalEndTime(CIMDateTime &value)
{
	_rateIntervalEndTime = value;
}

Boolean UNIX_VTLStatisticalData::getRateIntervalStartTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_START_TIME, getRateIntervalStartTime());
	return true;
}

CIMDateTime UNIX_VTLStatisticalData::getRateIntervalStartTime() const
{
	return _rateIntervalStartTime;
}

void UNIX_VTLStatisticalData::setRateIntervalStartTime(CIMDateTime &value)
{
	_rateIntervalStartTime = value;
}

Boolean UNIX_VTLStatisticalData::getData(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA, getData());
	return true;
}

String UNIX_VTLStatisticalData::getData() const
{
	return _data;
}

void UNIX_VTLStatisticalData::setData(String &value)
{
	_data = value;
}

Boolean UNIX_VTLStatisticalData::getDataFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_FORMAT, getDataFormat());
	return true;
}

Uint16 UNIX_VTLStatisticalData::getDataFormat() const
{
	return _dataFormat;
}

void UNIX_VTLStatisticalData::setDataFormat(Uint16 &value)
{
	_dataFormat = value;
}

Boolean UNIX_VTLStatisticalData::getXAxisName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_X_AXIS_NAME, getXAxisName());
	return true;
}

String UNIX_VTLStatisticalData::getXAxisName() const
{
	return _xAxisName;
}

void UNIX_VTLStatisticalData::setXAxisName(String &value)
{
	_xAxisName = value;
}

Boolean UNIX_VTLStatisticalData::getYAxisName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_Y_AXIS_NAME, getYAxisName());
	return true;
}

String UNIX_VTLStatisticalData::getYAxisName() const
{
	return _yAxisName;
}

void UNIX_VTLStatisticalData::setYAxisName(String &value)
{
	_yAxisName = value;
}

Boolean UNIX_VTLStatisticalData::getXAxisUnit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_X_AXIS_UNIT, getXAxisUnit());
	return true;
}

String UNIX_VTLStatisticalData::getXAxisUnit() const
{
	return _xAxisUnit;
}

void UNIX_VTLStatisticalData::setXAxisUnit(String &value)
{
	_xAxisUnit = value;
}

Boolean UNIX_VTLStatisticalData::getYAxisUnit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_Y_AXIS_UNIT, getYAxisUnit());
	return true;
}

String UNIX_VTLStatisticalData::getYAxisUnit() const
{
	return _yAxisUnit;
}

void UNIX_VTLStatisticalData::setYAxisUnit(String &value)
{
	_yAxisUnit = value;
}

Boolean UNIX_VTLStatisticalData::getStartTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_TIME, getStartTime());
	return true;
}

CIMDateTime UNIX_VTLStatisticalData::getStartTime() const
{
	return _startTime;
}

void UNIX_VTLStatisticalData::setStartTime(CIMDateTime &value)
{
	_startTime = value;
}

Boolean UNIX_VTLStatisticalData::getTimeInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_INTERVAL, getTimeInterval());
	return true;
}

Uint64 UNIX_VTLStatisticalData::getTimeInterval() const
{
	return _timeInterval;
}

void UNIX_VTLStatisticalData::setTimeInterval(Uint64 &value)
{
	_timeInterval = value;
}


void UNIX_VTLStatisticalData::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("VTLStatisticalData");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_data = String ("");
	_dataFormat = Uint16(0);
	_xAxisName = String ("");
	_yAxisName = String ("");
	_xAxisUnit = String ("");
	_yAxisUnit = String ("");
	_startTime = CIMHelper::getCurrentTime();
	_timeInterval = Uint64(0);

}

Boolean UNIX_VTLStatisticalData::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "Data"))
			{
				String dataValue;
				property.getValue().get(dataValue);
				setData(dataValue);
			}
			else if (String::equal(property.getName().getString(), "DataFormat"))
			{
				Uint16 dataFormatValue;
				property.getValue().get(dataFormatValue);
				setDataFormat(dataFormatValue);
			}
			else if (String::equal(property.getName().getString(), "XAxisName"))
			{
				String xAxisNameValue;
				property.getValue().get(xAxisNameValue);
				setXAxisName(xAxisNameValue);
			}
			else if (String::equal(property.getName().getString(), "YAxisName"))
			{
				String yAxisNameValue;
				property.getValue().get(yAxisNameValue);
				setYAxisName(yAxisNameValue);
			}
			else if (String::equal(property.getName().getString(), "XAxisUnit"))
			{
				String xAxisUnitValue;
				property.getValue().get(xAxisUnitValue);
				setXAxisUnit(xAxisUnitValue);
			}
			else if (String::equal(property.getName().getString(), "YAxisUnit"))
			{
				String yAxisUnitValue;
				property.getValue().get(yAxisUnitValue);
				setYAxisUnit(yAxisUnitValue);
			}
			else if (String::equal(property.getName().getString(), "StartTime"))
			{
				CIMDateTime startTimeValue;
				property.getValue().get(startTimeValue);
				setStartTime(startTimeValue);
			}
			else if (String::equal(property.getName().getString(), "TimeInterval"))
			{
				Uint64 timeIntervalValue;
				property.getValue().get(timeIntervalValue);
				setTimeInterval(timeIntervalValue);
			}
	}
	return true;
}

Uint32 UNIX_VTLStatisticalData::invokeResetSelectedStats(
		Array<String> &inSelectedStatistics
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ResetSelectedStats */
	
	
	
	return returnValue;
}


Boolean UNIX_VTLStatisticalData::initialize()
{
	return false;
}

Boolean UNIX_VTLStatisticalData::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("VTLStatisticalData");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_data = String ("");
	_dataFormat = Uint16(0);
	_xAxisName = String ("");
	_yAxisName = String ("");
	_xAxisUnit = String ("");
	_yAxisUnit = String ("");
	_startTime = CIMHelper::getCurrentTime();
	_timeInterval = Uint64(0);
	
	return false;
}

Boolean UNIX_VTLStatisticalData::finalize()
{
	return false;
}


Boolean UNIX_VTLStatisticalData::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_VTLStatisticalData::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VTLStatisticalData::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VTLStatisticalData::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VTLStatisticalData::validateInstance()
{
	return true;
}

