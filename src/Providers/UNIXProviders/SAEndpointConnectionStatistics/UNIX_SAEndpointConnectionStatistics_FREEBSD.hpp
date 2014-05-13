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


UNIX_SAEndpointConnectionStatistics::UNIX_SAEndpointConnectionStatistics(void)
{
}

UNIX_SAEndpointConnectionStatistics::~UNIX_SAEndpointConnectionStatistics(void)
{
}

Boolean UNIX_SAEndpointConnectionStatistics::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_SAEndpointConnectionStatistics::getInstanceID() const
{
	return _instanceID;
}

void UNIX_SAEndpointConnectionStatistics::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_SAEndpointConnectionStatistics::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_SAEndpointConnectionStatistics::getCaption() const
{
	return _caption;
}

void UNIX_SAEndpointConnectionStatistics::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_SAEndpointConnectionStatistics::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_SAEndpointConnectionStatistics::getDescription() const
{
	return _description;
}

void UNIX_SAEndpointConnectionStatistics::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_SAEndpointConnectionStatistics::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_SAEndpointConnectionStatistics::getElementName() const
{
	return _elementName;
}

void UNIX_SAEndpointConnectionStatistics::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_SAEndpointConnectionStatistics::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_SAEndpointConnectionStatistics::getGeneration() const
{
	return _generation;
}

void UNIX_SAEndpointConnectionStatistics::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_SAEndpointConnectionStatistics::getStartStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_STATISTIC_TIME, getStartStatisticTime());
	return true;
}

CIMDateTime UNIX_SAEndpointConnectionStatistics::getStartStatisticTime() const
{
	return _startStatisticTime;
}

void UNIX_SAEndpointConnectionStatistics::setStartStatisticTime(CIMDateTime &value)
{
	_startStatisticTime = value;
}

Boolean UNIX_SAEndpointConnectionStatistics::getStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATISTIC_TIME, getStatisticTime());
	return true;
}

CIMDateTime UNIX_SAEndpointConnectionStatistics::getStatisticTime() const
{
	return _statisticTime;
}

void UNIX_SAEndpointConnectionStatistics::setStatisticTime(CIMDateTime &value)
{
	_statisticTime = value;
}

Boolean UNIX_SAEndpointConnectionStatistics::getSampleInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SAMPLE_INTERVAL, getSampleInterval());
	return true;
}

CIMDateTime UNIX_SAEndpointConnectionStatistics::getSampleInterval() const
{
	return _sampleInterval;
}

void UNIX_SAEndpointConnectionStatistics::setSampleInterval(CIMDateTime &value)
{
	_sampleInterval = value;
}

Boolean UNIX_SAEndpointConnectionStatistics::getRateIntervalEndTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_END_TIME, getRateIntervalEndTime());
	return true;
}

CIMDateTime UNIX_SAEndpointConnectionStatistics::getRateIntervalEndTime() const
{
	return _rateIntervalEndTime;
}

void UNIX_SAEndpointConnectionStatistics::setRateIntervalEndTime(CIMDateTime &value)
{
	_rateIntervalEndTime = value;
}

Boolean UNIX_SAEndpointConnectionStatistics::getRateIntervalStartTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_START_TIME, getRateIntervalStartTime());
	return true;
}

CIMDateTime UNIX_SAEndpointConnectionStatistics::getRateIntervalStartTime() const
{
	return _rateIntervalStartTime;
}

void UNIX_SAEndpointConnectionStatistics::setRateIntervalStartTime(CIMDateTime &value)
{
	_rateIntervalStartTime = value;
}

Boolean UNIX_SAEndpointConnectionStatistics::getByteCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BYTE_COUNT, getByteCount());
	return true;
}

Uint64 UNIX_SAEndpointConnectionStatistics::getByteCount() const
{
	return _byteCount;
}

void UNIX_SAEndpointConnectionStatistics::setByteCount(Uint64 &value)
{
	_byteCount = value;
}

Boolean UNIX_SAEndpointConnectionStatistics::getLastAccessed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ACCESSED, getLastAccessed());
	return true;
}

CIMDateTime UNIX_SAEndpointConnectionStatistics::getLastAccessed() const
{
	return _lastAccessed;
}

void UNIX_SAEndpointConnectionStatistics::setLastAccessed(CIMDateTime &value)
{
	_lastAccessed = value;
}


void UNIX_SAEndpointConnectionStatistics::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("SAEndpointConnectionStatistics");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_byteCount = Uint64(0);
	_lastAccessed = CIMHelper::getCurrentTime();

}

Boolean UNIX_SAEndpointConnectionStatistics::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "ByteCount"))
			{
				Uint64 byteCountValue;
				property.getValue().get(byteCountValue);
				setByteCount(byteCountValue);
			}
			else if (String::equal(property.getName().getString(), "LastAccessed"))
			{
				CIMDateTime lastAccessedValue;
				property.getValue().get(lastAccessedValue);
				setLastAccessed(lastAccessedValue);
			}
	}
	return true;
}

Uint32 UNIX_SAEndpointConnectionStatistics::invokeResetSelectedStats(
		Array<String> &inSelectedStatistics
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ResetSelectedStats */
	
	
	
	return returnValue;
}


Boolean UNIX_SAEndpointConnectionStatistics::initialize()
{
	return false;
}

Boolean UNIX_SAEndpointConnectionStatistics::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("SAEndpointConnectionStatistics");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_byteCount = Uint64(0);
	_lastAccessed = CIMHelper::getCurrentTime();
	
	return false;
}

Boolean UNIX_SAEndpointConnectionStatistics::finalize()
{
	return false;
}


Boolean UNIX_SAEndpointConnectionStatistics::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_SAEndpointConnectionStatistics::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SAEndpointConnectionStatistics::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SAEndpointConnectionStatistics::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SAEndpointConnectionStatistics::validateInstance()
{
	return true;
}

