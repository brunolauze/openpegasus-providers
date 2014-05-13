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


UNIX_MediaAccessStatData::UNIX_MediaAccessStatData(void)
{
}

UNIX_MediaAccessStatData::~UNIX_MediaAccessStatData(void)
{
}

Boolean UNIX_MediaAccessStatData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_MediaAccessStatData::getInstanceID() const
{
	return _instanceID;
}

void UNIX_MediaAccessStatData::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_MediaAccessStatData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_MediaAccessStatData::getCaption() const
{
	return _caption;
}

void UNIX_MediaAccessStatData::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_MediaAccessStatData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_MediaAccessStatData::getDescription() const
{
	return _description;
}

void UNIX_MediaAccessStatData::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_MediaAccessStatData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_MediaAccessStatData::getElementName() const
{
	return _elementName;
}

void UNIX_MediaAccessStatData::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_MediaAccessStatData::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_MediaAccessStatData::getGeneration() const
{
	return _generation;
}

void UNIX_MediaAccessStatData::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_MediaAccessStatData::getStartStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_STATISTIC_TIME, getStartStatisticTime());
	return true;
}

CIMDateTime UNIX_MediaAccessStatData::getStartStatisticTime() const
{
	return _startStatisticTime;
}

void UNIX_MediaAccessStatData::setStartStatisticTime(CIMDateTime &value)
{
	_startStatisticTime = value;
}

Boolean UNIX_MediaAccessStatData::getStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATISTIC_TIME, getStatisticTime());
	return true;
}

CIMDateTime UNIX_MediaAccessStatData::getStatisticTime() const
{
	return _statisticTime;
}

void UNIX_MediaAccessStatData::setStatisticTime(CIMDateTime &value)
{
	_statisticTime = value;
}

Boolean UNIX_MediaAccessStatData::getSampleInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SAMPLE_INTERVAL, getSampleInterval());
	return true;
}

CIMDateTime UNIX_MediaAccessStatData::getSampleInterval() const
{
	return _sampleInterval;
}

void UNIX_MediaAccessStatData::setSampleInterval(CIMDateTime &value)
{
	_sampleInterval = value;
}

Boolean UNIX_MediaAccessStatData::getRateIntervalEndTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_END_TIME, getRateIntervalEndTime());
	return true;
}

CIMDateTime UNIX_MediaAccessStatData::getRateIntervalEndTime() const
{
	return _rateIntervalEndTime;
}

void UNIX_MediaAccessStatData::setRateIntervalEndTime(CIMDateTime &value)
{
	_rateIntervalEndTime = value;
}

Boolean UNIX_MediaAccessStatData::getRateIntervalStartTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_START_TIME, getRateIntervalStartTime());
	return true;
}

CIMDateTime UNIX_MediaAccessStatData::getRateIntervalStartTime() const
{
	return _rateIntervalStartTime;
}

void UNIX_MediaAccessStatData::setRateIntervalStartTime(CIMDateTime &value)
{
	_rateIntervalStartTime = value;
}

Boolean UNIX_MediaAccessStatData::getReadOperations(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_READ_OPERATIONS, getReadOperations());
	return true;
}

Uint64 UNIX_MediaAccessStatData::getReadOperations() const
{
	return _readOperations;
}

void UNIX_MediaAccessStatData::setReadOperations(Uint64 &value)
{
	_readOperations = value;
}

Boolean UNIX_MediaAccessStatData::getUnrecoverableReadOperations(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNRECOVERABLE_READ_OPERATIONS, getUnrecoverableReadOperations());
	return true;
}

Uint64 UNIX_MediaAccessStatData::getUnrecoverableReadOperations() const
{
	return _unrecoverableReadOperations;
}

void UNIX_MediaAccessStatData::setUnrecoverableReadOperations(Uint64 &value)
{
	_unrecoverableReadOperations = value;
}

Boolean UNIX_MediaAccessStatData::getWriteOperations(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WRITE_OPERATIONS, getWriteOperations());
	return true;
}

Uint64 UNIX_MediaAccessStatData::getWriteOperations() const
{
	return _writeOperations;
}

void UNIX_MediaAccessStatData::setWriteOperations(Uint64 &value)
{
	_writeOperations = value;
}

Boolean UNIX_MediaAccessStatData::getUnrecoverableWriteOperations(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNRECOVERABLE_WRITE_OPERATIONS, getUnrecoverableWriteOperations());
	return true;
}

Uint64 UNIX_MediaAccessStatData::getUnrecoverableWriteOperations() const
{
	return _unrecoverableWriteOperations;
}

void UNIX_MediaAccessStatData::setUnrecoverableWriteOperations(Uint64 &value)
{
	_unrecoverableWriteOperations = value;
}

Boolean UNIX_MediaAccessStatData::getRecoveredReadOperations(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECOVERED_READ_OPERATIONS, getRecoveredReadOperations());
	return true;
}

Uint64 UNIX_MediaAccessStatData::getRecoveredReadOperations() const
{
	return _recoveredReadOperations;
}

void UNIX_MediaAccessStatData::setRecoveredReadOperations(Uint64 &value)
{
	_recoveredReadOperations = value;
}

Boolean UNIX_MediaAccessStatData::getRecoveredWriteOperations(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECOVERED_WRITE_OPERATIONS, getRecoveredWriteOperations());
	return true;
}

Uint64 UNIX_MediaAccessStatData::getRecoveredWriteOperations() const
{
	return _recoveredWriteOperations;
}

void UNIX_MediaAccessStatData::setRecoveredWriteOperations(Uint64 &value)
{
	_recoveredWriteOperations = value;
}

Boolean UNIX_MediaAccessStatData::getRecoveredSeekOperations(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECOVERED_SEEK_OPERATIONS, getRecoveredSeekOperations());
	return true;
}

Uint64 UNIX_MediaAccessStatData::getRecoveredSeekOperations() const
{
	return _recoveredSeekOperations;
}

void UNIX_MediaAccessStatData::setRecoveredSeekOperations(Uint64 &value)
{
	_recoveredSeekOperations = value;
}

Boolean UNIX_MediaAccessStatData::getUnrecoverableSeekOperations(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNRECOVERABLE_SEEK_OPERATIONS, getUnrecoverableSeekOperations());
	return true;
}

Uint64 UNIX_MediaAccessStatData::getUnrecoverableSeekOperations() const
{
	return _unrecoverableSeekOperations;
}

void UNIX_MediaAccessStatData::setUnrecoverableSeekOperations(Uint64 &value)
{
	_unrecoverableSeekOperations = value;
}


void UNIX_MediaAccessStatData::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("MediaAccessStatData");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_readOperations = Uint64(0);
	_unrecoverableReadOperations = Uint64(0);
	_writeOperations = Uint64(0);
	_unrecoverableWriteOperations = Uint64(0);
	_recoveredReadOperations = Uint64(0);
	_recoveredWriteOperations = Uint64(0);
	_recoveredSeekOperations = Uint64(0);
	_unrecoverableSeekOperations = Uint64(0);

}

Boolean UNIX_MediaAccessStatData::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "ReadOperations"))
			{
				Uint64 readOperationsValue;
				property.getValue().get(readOperationsValue);
				setReadOperations(readOperationsValue);
			}
			else if (String::equal(property.getName().getString(), "UnrecoverableReadOperations"))
			{
				Uint64 unrecoverableReadOperationsValue;
				property.getValue().get(unrecoverableReadOperationsValue);
				setUnrecoverableReadOperations(unrecoverableReadOperationsValue);
			}
			else if (String::equal(property.getName().getString(), "WriteOperations"))
			{
				Uint64 writeOperationsValue;
				property.getValue().get(writeOperationsValue);
				setWriteOperations(writeOperationsValue);
			}
			else if (String::equal(property.getName().getString(), "UnrecoverableWriteOperations"))
			{
				Uint64 unrecoverableWriteOperationsValue;
				property.getValue().get(unrecoverableWriteOperationsValue);
				setUnrecoverableWriteOperations(unrecoverableWriteOperationsValue);
			}
			else if (String::equal(property.getName().getString(), "RecoveredReadOperations"))
			{
				Uint64 recoveredReadOperationsValue;
				property.getValue().get(recoveredReadOperationsValue);
				setRecoveredReadOperations(recoveredReadOperationsValue);
			}
			else if (String::equal(property.getName().getString(), "RecoveredWriteOperations"))
			{
				Uint64 recoveredWriteOperationsValue;
				property.getValue().get(recoveredWriteOperationsValue);
				setRecoveredWriteOperations(recoveredWriteOperationsValue);
			}
			else if (String::equal(property.getName().getString(), "RecoveredSeekOperations"))
			{
				Uint64 recoveredSeekOperationsValue;
				property.getValue().get(recoveredSeekOperationsValue);
				setRecoveredSeekOperations(recoveredSeekOperationsValue);
			}
			else if (String::equal(property.getName().getString(), "UnrecoverableSeekOperations"))
			{
				Uint64 unrecoverableSeekOperationsValue;
				property.getValue().get(unrecoverableSeekOperationsValue);
				setUnrecoverableSeekOperations(unrecoverableSeekOperationsValue);
			}
	}
	return true;
}

Uint32 UNIX_MediaAccessStatData::invokeResetSelectedStats(
		Array<String> &inSelectedStatistics
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ResetSelectedStats */
	
	
	
	return returnValue;
}


Boolean UNIX_MediaAccessStatData::initialize()
{
	return false;
}

Boolean UNIX_MediaAccessStatData::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("MediaAccessStatData");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_readOperations = Uint64(0);
	_unrecoverableReadOperations = Uint64(0);
	_writeOperations = Uint64(0);
	_unrecoverableWriteOperations = Uint64(0);
	_recoveredReadOperations = Uint64(0);
	_recoveredWriteOperations = Uint64(0);
	_recoveredSeekOperations = Uint64(0);
	_unrecoverableSeekOperations = Uint64(0);
	
	return false;
}

Boolean UNIX_MediaAccessStatData::finalize()
{
	return false;
}


Boolean UNIX_MediaAccessStatData::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_MediaAccessStatData::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_MediaAccessStatData::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_MediaAccessStatData::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_MediaAccessStatData::validateInstance()
{
	return true;
}

