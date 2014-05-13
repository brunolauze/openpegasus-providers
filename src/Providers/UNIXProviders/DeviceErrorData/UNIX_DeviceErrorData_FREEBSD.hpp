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


UNIX_DeviceErrorData::UNIX_DeviceErrorData(void)
{
}

UNIX_DeviceErrorData::~UNIX_DeviceErrorData(void)
{
}

Boolean UNIX_DeviceErrorData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_DeviceErrorData::getInstanceID() const
{
	return _instanceID;
}

void UNIX_DeviceErrorData::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_DeviceErrorData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_DeviceErrorData::getCaption() const
{
	return _caption;
}

void UNIX_DeviceErrorData::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_DeviceErrorData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_DeviceErrorData::getDescription() const
{
	return _description;
}

void UNIX_DeviceErrorData::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_DeviceErrorData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_DeviceErrorData::getElementName() const
{
	return _elementName;
}

void UNIX_DeviceErrorData::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_DeviceErrorData::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_DeviceErrorData::getGeneration() const
{
	return _generation;
}

void UNIX_DeviceErrorData::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_DeviceErrorData::getStartStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_STATISTIC_TIME, getStartStatisticTime());
	return true;
}

CIMDateTime UNIX_DeviceErrorData::getStartStatisticTime() const
{
	return _startStatisticTime;
}

void UNIX_DeviceErrorData::setStartStatisticTime(CIMDateTime &value)
{
	_startStatisticTime = value;
}

Boolean UNIX_DeviceErrorData::getStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATISTIC_TIME, getStatisticTime());
	return true;
}

CIMDateTime UNIX_DeviceErrorData::getStatisticTime() const
{
	return _statisticTime;
}

void UNIX_DeviceErrorData::setStatisticTime(CIMDateTime &value)
{
	_statisticTime = value;
}

Boolean UNIX_DeviceErrorData::getSampleInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SAMPLE_INTERVAL, getSampleInterval());
	return true;
}

CIMDateTime UNIX_DeviceErrorData::getSampleInterval() const
{
	return _sampleInterval;
}

void UNIX_DeviceErrorData::setSampleInterval(CIMDateTime &value)
{
	_sampleInterval = value;
}

Boolean UNIX_DeviceErrorData::getRateIntervalEndTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_END_TIME, getRateIntervalEndTime());
	return true;
}

CIMDateTime UNIX_DeviceErrorData::getRateIntervalEndTime() const
{
	return _rateIntervalEndTime;
}

void UNIX_DeviceErrorData::setRateIntervalEndTime(CIMDateTime &value)
{
	_rateIntervalEndTime = value;
}

Boolean UNIX_DeviceErrorData::getRateIntervalStartTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_START_TIME, getRateIntervalStartTime());
	return true;
}

CIMDateTime UNIX_DeviceErrorData::getRateIntervalStartTime() const
{
	return _rateIntervalStartTime;
}

void UNIX_DeviceErrorData::setRateIntervalStartTime(CIMDateTime &value)
{
	_rateIntervalStartTime = value;
}

Boolean UNIX_DeviceErrorData::getIndeterminateErrorCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INDETERMINATE_ERROR_COUNT, getIndeterminateErrorCount());
	return true;
}

Uint64 UNIX_DeviceErrorData::getIndeterminateErrorCount() const
{
	return _indeterminateErrorCount;
}

void UNIX_DeviceErrorData::setIndeterminateErrorCount(Uint64 &value)
{
	_indeterminateErrorCount = value;
}

Boolean UNIX_DeviceErrorData::getCriticalErrorCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CRITICAL_ERROR_COUNT, getCriticalErrorCount());
	return true;
}

Uint64 UNIX_DeviceErrorData::getCriticalErrorCount() const
{
	return _criticalErrorCount;
}

void UNIX_DeviceErrorData::setCriticalErrorCount(Uint64 &value)
{
	_criticalErrorCount = value;
}

Boolean UNIX_DeviceErrorData::getMajorErrorCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAJOR_ERROR_COUNT, getMajorErrorCount());
	return true;
}

Uint64 UNIX_DeviceErrorData::getMajorErrorCount() const
{
	return _majorErrorCount;
}

void UNIX_DeviceErrorData::setMajorErrorCount(Uint64 &value)
{
	_majorErrorCount = value;
}

Boolean UNIX_DeviceErrorData::getMinorErrorCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MINOR_ERROR_COUNT, getMinorErrorCount());
	return true;
}

Uint64 UNIX_DeviceErrorData::getMinorErrorCount() const
{
	return _minorErrorCount;
}

void UNIX_DeviceErrorData::setMinorErrorCount(Uint64 &value)
{
	_minorErrorCount = value;
}

Boolean UNIX_DeviceErrorData::getWarningCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WARNING_COUNT, getWarningCount());
	return true;
}

Uint64 UNIX_DeviceErrorData::getWarningCount() const
{
	return _warningCount;
}

void UNIX_DeviceErrorData::setWarningCount(Uint64 &value)
{
	_warningCount = value;
}

Boolean UNIX_DeviceErrorData::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

String UNIX_DeviceErrorData::getLastErrorCode() const
{
	return _lastErrorCode;
}

void UNIX_DeviceErrorData::setLastErrorCode(String &value)
{
	_lastErrorCode = value;
}

Boolean UNIX_DeviceErrorData::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_DeviceErrorData::getErrorDescription() const
{
	return _errorDescription;
}

void UNIX_DeviceErrorData::setErrorDescription(String &value)
{
	_errorDescription = value;
}


void UNIX_DeviceErrorData::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("DeviceErrorData");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_indeterminateErrorCount = Uint64(0);
	_criticalErrorCount = Uint64(0);
	_majorErrorCount = Uint64(0);
	_minorErrorCount = Uint64(0);
	_warningCount = Uint64(0);
	_lastErrorCode = String ("");
	_errorDescription = String ("");

}

Boolean UNIX_DeviceErrorData::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "IndeterminateErrorCount"))
			{
				Uint64 indeterminateErrorCountValue;
				property.getValue().get(indeterminateErrorCountValue);
				setIndeterminateErrorCount(indeterminateErrorCountValue);
			}
			else if (String::equal(property.getName().getString(), "CriticalErrorCount"))
			{
				Uint64 criticalErrorCountValue;
				property.getValue().get(criticalErrorCountValue);
				setCriticalErrorCount(criticalErrorCountValue);
			}
			else if (String::equal(property.getName().getString(), "MajorErrorCount"))
			{
				Uint64 majorErrorCountValue;
				property.getValue().get(majorErrorCountValue);
				setMajorErrorCount(majorErrorCountValue);
			}
			else if (String::equal(property.getName().getString(), "MinorErrorCount"))
			{
				Uint64 minorErrorCountValue;
				property.getValue().get(minorErrorCountValue);
				setMinorErrorCount(minorErrorCountValue);
			}
			else if (String::equal(property.getName().getString(), "WarningCount"))
			{
				Uint64 warningCountValue;
				property.getValue().get(warningCountValue);
				setWarningCount(warningCountValue);
			}
			else if (String::equal(property.getName().getString(), "LastErrorCode"))
			{
				String lastErrorCodeValue;
				property.getValue().get(lastErrorCodeValue);
				setLastErrorCode(lastErrorCodeValue);
			}
			else if (String::equal(property.getName().getString(), "ErrorDescription"))
			{
				String errorDescriptionValue;
				property.getValue().get(errorDescriptionValue);
				setErrorDescription(errorDescriptionValue);
			}
	}
	return true;
}

Uint32 UNIX_DeviceErrorData::invokeResetSelectedStats(
		Array<String> &inSelectedStatistics
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ResetSelectedStats */
	
	
	
	return returnValue;
}


Boolean UNIX_DeviceErrorData::initialize()
{
	return false;
}

Boolean UNIX_DeviceErrorData::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("DeviceErrorData");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_indeterminateErrorCount = Uint64(0);
	_criticalErrorCount = Uint64(0);
	_majorErrorCount = Uint64(0);
	_minorErrorCount = Uint64(0);
	_warningCount = Uint64(0);
	_lastErrorCode = String ("");
	_errorDescription = String ("");
	
	return false;
}

Boolean UNIX_DeviceErrorData::finalize()
{
	return false;
}


Boolean UNIX_DeviceErrorData::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_DeviceErrorData::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DeviceErrorData::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DeviceErrorData::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DeviceErrorData::validateInstance()
{
	return true;
}

