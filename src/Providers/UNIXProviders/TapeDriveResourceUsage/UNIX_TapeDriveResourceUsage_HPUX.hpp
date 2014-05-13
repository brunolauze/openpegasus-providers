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


UNIX_TapeDriveResourceUsage::UNIX_TapeDriveResourceUsage(void)
{
}

UNIX_TapeDriveResourceUsage::~UNIX_TapeDriveResourceUsage(void)
{
}

Boolean UNIX_TapeDriveResourceUsage::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_TapeDriveResourceUsage::getInstanceID() const
{
	return _instanceID;
}

void UNIX_TapeDriveResourceUsage::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_TapeDriveResourceUsage::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_TapeDriveResourceUsage::getCaption() const
{
	return _caption;
}

void UNIX_TapeDriveResourceUsage::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_TapeDriveResourceUsage::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_TapeDriveResourceUsage::getDescription() const
{
	return _description;
}

void UNIX_TapeDriveResourceUsage::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_TapeDriveResourceUsage::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_TapeDriveResourceUsage::getElementName() const
{
	return _elementName;
}

void UNIX_TapeDriveResourceUsage::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_TapeDriveResourceUsage::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_TapeDriveResourceUsage::getGeneration() const
{
	return _generation;
}

void UNIX_TapeDriveResourceUsage::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_TapeDriveResourceUsage::getStartStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_STATISTIC_TIME, getStartStatisticTime());
	return true;
}

CIMDateTime UNIX_TapeDriveResourceUsage::getStartStatisticTime() const
{
	return _startStatisticTime;
}

void UNIX_TapeDriveResourceUsage::setStartStatisticTime(CIMDateTime &value)
{
	_startStatisticTime = value;
}

Boolean UNIX_TapeDriveResourceUsage::getStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATISTIC_TIME, getStatisticTime());
	return true;
}

CIMDateTime UNIX_TapeDriveResourceUsage::getStatisticTime() const
{
	return _statisticTime;
}

void UNIX_TapeDriveResourceUsage::setStatisticTime(CIMDateTime &value)
{
	_statisticTime = value;
}

Boolean UNIX_TapeDriveResourceUsage::getSampleInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SAMPLE_INTERVAL, getSampleInterval());
	return true;
}

CIMDateTime UNIX_TapeDriveResourceUsage::getSampleInterval() const
{
	return _sampleInterval;
}

void UNIX_TapeDriveResourceUsage::setSampleInterval(CIMDateTime &value)
{
	_sampleInterval = value;
}

Boolean UNIX_TapeDriveResourceUsage::getRateIntervalEndTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_END_TIME, getRateIntervalEndTime());
	return true;
}

CIMDateTime UNIX_TapeDriveResourceUsage::getRateIntervalEndTime() const
{
	return _rateIntervalEndTime;
}

void UNIX_TapeDriveResourceUsage::setRateIntervalEndTime(CIMDateTime &value)
{
	_rateIntervalEndTime = value;
}

Boolean UNIX_TapeDriveResourceUsage::getRateIntervalStartTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_START_TIME, getRateIntervalStartTime());
	return true;
}

CIMDateTime UNIX_TapeDriveResourceUsage::getRateIntervalStartTime() const
{
	return _rateIntervalStartTime;
}

void UNIX_TapeDriveResourceUsage::setRateIntervalStartTime(CIMDateTime &value)
{
	_rateIntervalStartTime = value;
}

Boolean UNIX_TapeDriveResourceUsage::getReadSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_READ_SPEED, getReadSpeed());
	return true;
}

Real32 UNIX_TapeDriveResourceUsage::getReadSpeed() const
{
	return _readSpeed;
}

void UNIX_TapeDriveResourceUsage::setReadSpeed(Real32 &value)
{
	_readSpeed = value;
}

Boolean UNIX_TapeDriveResourceUsage::getWriteSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WRITE_SPEED, getWriteSpeed());
	return true;
}

Real32 UNIX_TapeDriveResourceUsage::getWriteSpeed() const
{
	return _writeSpeed;
}

void UNIX_TapeDriveResourceUsage::setWriteSpeed(Real32 &value)
{
	_writeSpeed = value;
}


void UNIX_TapeDriveResourceUsage::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("TapeDriveResourceUsage");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_readSpeed = Real32(0);
	_writeSpeed = Real32(0);

}

Boolean UNIX_TapeDriveResourceUsage::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "ReadSpeed"))
			{
				Real32 readSpeedValue;
				property.getValue().get(readSpeedValue);
				setReadSpeed(readSpeedValue);
			}
			else if (String::equal(property.getName().getString(), "WriteSpeed"))
			{
				Real32 writeSpeedValue;
				property.getValue().get(writeSpeedValue);
				setWriteSpeed(writeSpeedValue);
			}
	}
	return true;
}

Uint32 UNIX_TapeDriveResourceUsage::invokeResetSelectedStats(
		Array<String> &inSelectedStatistics
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ResetSelectedStats */
	
	
	
	return returnValue;
}


Boolean UNIX_TapeDriveResourceUsage::initialize()
{
	return false;
}

Boolean UNIX_TapeDriveResourceUsage::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("TapeDriveResourceUsage");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_readSpeed = Real32(0);
	_writeSpeed = Real32(0);
	
	return false;
}

Boolean UNIX_TapeDriveResourceUsage::finalize()
{
	return false;
}


Boolean UNIX_TapeDriveResourceUsage::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_TapeDriveResourceUsage::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_TapeDriveResourceUsage::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_TapeDriveResourceUsage::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_TapeDriveResourceUsage::validateInstance()
{
	return true;
}

