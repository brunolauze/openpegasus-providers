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


UNIX_MPLSSegmentStats::UNIX_MPLSSegmentStats(void)
{
}

UNIX_MPLSSegmentStats::~UNIX_MPLSSegmentStats(void)
{
}

Boolean UNIX_MPLSSegmentStats::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_MPLSSegmentStats::getInstanceID() const
{
	return _instanceID;
}

void UNIX_MPLSSegmentStats::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_MPLSSegmentStats::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_MPLSSegmentStats::getCaption() const
{
	return _caption;
}

void UNIX_MPLSSegmentStats::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_MPLSSegmentStats::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_MPLSSegmentStats::getDescription() const
{
	return _description;
}

void UNIX_MPLSSegmentStats::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_MPLSSegmentStats::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_MPLSSegmentStats::getElementName() const
{
	return _elementName;
}

void UNIX_MPLSSegmentStats::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_MPLSSegmentStats::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_MPLSSegmentStats::getGeneration() const
{
	return _generation;
}

void UNIX_MPLSSegmentStats::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_MPLSSegmentStats::getStartStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_STATISTIC_TIME, getStartStatisticTime());
	return true;
}

CIMDateTime UNIX_MPLSSegmentStats::getStartStatisticTime() const
{
	return _startStatisticTime;
}

void UNIX_MPLSSegmentStats::setStartStatisticTime(CIMDateTime &value)
{
	_startStatisticTime = value;
}

Boolean UNIX_MPLSSegmentStats::getStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATISTIC_TIME, getStatisticTime());
	return true;
}

CIMDateTime UNIX_MPLSSegmentStats::getStatisticTime() const
{
	return _statisticTime;
}

void UNIX_MPLSSegmentStats::setStatisticTime(CIMDateTime &value)
{
	_statisticTime = value;
}

Boolean UNIX_MPLSSegmentStats::getSampleInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SAMPLE_INTERVAL, getSampleInterval());
	return true;
}

CIMDateTime UNIX_MPLSSegmentStats::getSampleInterval() const
{
	return _sampleInterval;
}

void UNIX_MPLSSegmentStats::setSampleInterval(CIMDateTime &value)
{
	_sampleInterval = value;
}

Boolean UNIX_MPLSSegmentStats::getRateIntervalEndTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_END_TIME, getRateIntervalEndTime());
	return true;
}

CIMDateTime UNIX_MPLSSegmentStats::getRateIntervalEndTime() const
{
	return _rateIntervalEndTime;
}

void UNIX_MPLSSegmentStats::setRateIntervalEndTime(CIMDateTime &value)
{
	_rateIntervalEndTime = value;
}

Boolean UNIX_MPLSSegmentStats::getRateIntervalStartTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_START_TIME, getRateIntervalStartTime());
	return true;
}

CIMDateTime UNIX_MPLSSegmentStats::getRateIntervalStartTime() const
{
	return _rateIntervalStartTime;
}

void UNIX_MPLSSegmentStats::setRateIntervalStartTime(CIMDateTime &value)
{
	_rateIntervalStartTime = value;
}

Boolean UNIX_MPLSSegmentStats::getNumberOfOctets(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_OCTETS, getNumberOfOctets());
	return true;
}

Uint32 UNIX_MPLSSegmentStats::getNumberOfOctets() const
{
	return _numberOfOctets;
}

void UNIX_MPLSSegmentStats::setNumberOfOctets(Uint32 &value)
{
	_numberOfOctets = value;
}

Boolean UNIX_MPLSSegmentStats::getNumberOfPackets(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_PACKETS, getNumberOfPackets());
	return true;
}

Uint32 UNIX_MPLSSegmentStats::getNumberOfPackets() const
{
	return _numberOfPackets;
}

void UNIX_MPLSSegmentStats::setNumberOfPackets(Uint32 &value)
{
	_numberOfPackets = value;
}

Boolean UNIX_MPLSSegmentStats::getNumberOfErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_ERRORS, getNumberOfErrors());
	return true;
}

Uint32 UNIX_MPLSSegmentStats::getNumberOfErrors() const
{
	return _numberOfErrors;
}

void UNIX_MPLSSegmentStats::setNumberOfErrors(Uint32 &value)
{
	_numberOfErrors = value;
}

Boolean UNIX_MPLSSegmentStats::getNumberOfDiscards(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_DISCARDS, getNumberOfDiscards());
	return true;
}

Uint32 UNIX_MPLSSegmentStats::getNumberOfDiscards() const
{
	return _numberOfDiscards;
}

void UNIX_MPLSSegmentStats::setNumberOfDiscards(Uint32 &value)
{
	_numberOfDiscards = value;
}


void UNIX_MPLSSegmentStats::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("MPLSSegmentStats");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_numberOfOctets = Uint32(0);
	_numberOfPackets = Uint32(0);
	_numberOfErrors = Uint32(0);
	_numberOfDiscards = Uint32(0);

}

Boolean UNIX_MPLSSegmentStats::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "NumberOfOctets"))
			{
				Uint32 numberOfOctetsValue;
				property.getValue().get(numberOfOctetsValue);
				setNumberOfOctets(numberOfOctetsValue);
			}
			else if (String::equal(property.getName().getString(), "NumberOfPackets"))
			{
				Uint32 numberOfPacketsValue;
				property.getValue().get(numberOfPacketsValue);
				setNumberOfPackets(numberOfPacketsValue);
			}
			else if (String::equal(property.getName().getString(), "NumberOfErrors"))
			{
				Uint32 numberOfErrorsValue;
				property.getValue().get(numberOfErrorsValue);
				setNumberOfErrors(numberOfErrorsValue);
			}
			else if (String::equal(property.getName().getString(), "NumberOfDiscards"))
			{
				Uint32 numberOfDiscardsValue;
				property.getValue().get(numberOfDiscardsValue);
				setNumberOfDiscards(numberOfDiscardsValue);
			}
	}
	return true;
}

Uint32 UNIX_MPLSSegmentStats::invokeResetSelectedStats(
		Array<String> &inSelectedStatistics
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ResetSelectedStats */
	
	
	
	return returnValue;
}


Boolean UNIX_MPLSSegmentStats::initialize()
{
	return false;
}

Boolean UNIX_MPLSSegmentStats::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("MPLSSegmentStats");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_numberOfOctets = Uint32(0);
	_numberOfPackets = Uint32(0);
	_numberOfErrors = Uint32(0);
	_numberOfDiscards = Uint32(0);
	
	return false;
}

Boolean UNIX_MPLSSegmentStats::finalize()
{
	return false;
}


Boolean UNIX_MPLSSegmentStats::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_MPLSSegmentStats::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_MPLSSegmentStats::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_MPLSSegmentStats::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_MPLSSegmentStats::validateInstance()
{
	return true;
}

