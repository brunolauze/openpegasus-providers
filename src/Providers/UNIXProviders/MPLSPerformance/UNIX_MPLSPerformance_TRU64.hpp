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


UNIX_MPLSPerformance::UNIX_MPLSPerformance(void)
{
}

UNIX_MPLSPerformance::~UNIX_MPLSPerformance(void)
{
}

Boolean UNIX_MPLSPerformance::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_MPLSPerformance::getInstanceID() const
{
	return _instanceID;
}

void UNIX_MPLSPerformance::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_MPLSPerformance::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_MPLSPerformance::getCaption() const
{
	return _caption;
}

void UNIX_MPLSPerformance::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_MPLSPerformance::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_MPLSPerformance::getDescription() const
{
	return _description;
}

void UNIX_MPLSPerformance::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_MPLSPerformance::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_MPLSPerformance::getElementName() const
{
	return _elementName;
}

void UNIX_MPLSPerformance::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_MPLSPerformance::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_MPLSPerformance::getGeneration() const
{
	return _generation;
}

void UNIX_MPLSPerformance::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_MPLSPerformance::getStartStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_STATISTIC_TIME, getStartStatisticTime());
	return true;
}

CIMDateTime UNIX_MPLSPerformance::getStartStatisticTime() const
{
	return _startStatisticTime;
}

void UNIX_MPLSPerformance::setStartStatisticTime(CIMDateTime &value)
{
	_startStatisticTime = value;
}

Boolean UNIX_MPLSPerformance::getStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATISTIC_TIME, getStatisticTime());
	return true;
}

CIMDateTime UNIX_MPLSPerformance::getStatisticTime() const
{
	return _statisticTime;
}

void UNIX_MPLSPerformance::setStatisticTime(CIMDateTime &value)
{
	_statisticTime = value;
}

Boolean UNIX_MPLSPerformance::getSampleInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SAMPLE_INTERVAL, getSampleInterval());
	return true;
}

CIMDateTime UNIX_MPLSPerformance::getSampleInterval() const
{
	return _sampleInterval;
}

void UNIX_MPLSPerformance::setSampleInterval(CIMDateTime &value)
{
	_sampleInterval = value;
}

Boolean UNIX_MPLSPerformance::getRateIntervalEndTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_END_TIME, getRateIntervalEndTime());
	return true;
}

CIMDateTime UNIX_MPLSPerformance::getRateIntervalEndTime() const
{
	return _rateIntervalEndTime;
}

void UNIX_MPLSPerformance::setRateIntervalEndTime(CIMDateTime &value)
{
	_rateIntervalEndTime = value;
}

Boolean UNIX_MPLSPerformance::getRateIntervalStartTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_START_TIME, getRateIntervalStartTime());
	return true;
}

CIMDateTime UNIX_MPLSPerformance::getRateIntervalStartTime() const
{
	return _rateIntervalStartTime;
}

void UNIX_MPLSPerformance::setRateIntervalStartTime(CIMDateTime &value)
{
	_rateIntervalStartTime = value;
}

Boolean UNIX_MPLSPerformance::getNumberOfPacketsLost(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_PACKETS_LOST, getNumberOfPacketsLost());
	return true;
}

Uint32 UNIX_MPLSPerformance::getNumberOfPacketsLost() const
{
	return _numberOfPacketsLost;
}

void UNIX_MPLSPerformance::setNumberOfPacketsLost(Uint32 &value)
{
	_numberOfPacketsLost = value;
}

Boolean UNIX_MPLSPerformance::getNumberOfPacketsTransmitted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_PACKETS_TRANSMITTED, getNumberOfPacketsTransmitted());
	return true;
}

Uint32 UNIX_MPLSPerformance::getNumberOfPacketsTransmitted() const
{
	return _numberOfPacketsTransmitted;
}

void UNIX_MPLSPerformance::setNumberOfPacketsTransmitted(Uint32 &value)
{
	_numberOfPacketsTransmitted = value;
}

Boolean UNIX_MPLSPerformance::getNumberOfOctets(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_OCTETS, getNumberOfOctets());
	return true;
}

Uint32 UNIX_MPLSPerformance::getNumberOfOctets() const
{
	return _numberOfOctets;
}

void UNIX_MPLSPerformance::setNumberOfOctets(Uint32 &value)
{
	_numberOfOctets = value;
}

Boolean UNIX_MPLSPerformance::getDelay(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELAY, getDelay());
	return true;
}

Uint16 UNIX_MPLSPerformance::getDelay() const
{
	return _delay;
}

void UNIX_MPLSPerformance::setDelay(Uint16 &value)
{
	_delay = value;
}

Boolean UNIX_MPLSPerformance::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_MPLSPerformance::getAvailability() const
{
	return _availability;
}

void UNIX_MPLSPerformance::setAvailability(Uint16 &value)
{
	_availability = value;
}


void UNIX_MPLSPerformance::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("MPLSPerformance");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_numberOfPacketsLost = Uint32(0);
	_numberOfPacketsTransmitted = Uint32(0);
	_numberOfOctets = Uint32(0);
	_delay = Uint16(0);
	_availability = Uint16(0);

}

Boolean UNIX_MPLSPerformance::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "NumberOfPacketsLost"))
			{
				Uint32 numberOfPacketsLostValue;
				property.getValue().get(numberOfPacketsLostValue);
				setNumberOfPacketsLost(numberOfPacketsLostValue);
			}
			else if (String::equal(property.getName().getString(), "NumberOfPacketsTransmitted"))
			{
				Uint32 numberOfPacketsTransmittedValue;
				property.getValue().get(numberOfPacketsTransmittedValue);
				setNumberOfPacketsTransmitted(numberOfPacketsTransmittedValue);
			}
			else if (String::equal(property.getName().getString(), "NumberOfOctets"))
			{
				Uint32 numberOfOctetsValue;
				property.getValue().get(numberOfOctetsValue);
				setNumberOfOctets(numberOfOctetsValue);
			}
			else if (String::equal(property.getName().getString(), "Delay"))
			{
				Uint16 delayValue;
				property.getValue().get(delayValue);
				setDelay(delayValue);
			}
			else if (String::equal(property.getName().getString(), "Availability"))
			{
				Uint16 availabilityValue;
				property.getValue().get(availabilityValue);
				setAvailability(availabilityValue);
			}
	}
	return true;
}

Uint32 UNIX_MPLSPerformance::invokeResetSelectedStats(
		Array<String> &inSelectedStatistics
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ResetSelectedStats */
	
	
	
	return returnValue;
}


Boolean UNIX_MPLSPerformance::initialize()
{
	return false;
}

Boolean UNIX_MPLSPerformance::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("MPLSPerformance");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_numberOfPacketsLost = Uint32(0);
	_numberOfPacketsTransmitted = Uint32(0);
	_numberOfOctets = Uint32(0);
	_delay = Uint16(0);
	_availability = Uint16(0);
	
	return false;
}

Boolean UNIX_MPLSPerformance::finalize()
{
	return false;
}


Boolean UNIX_MPLSPerformance::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_MPLSPerformance::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_MPLSPerformance::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_MPLSPerformance::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_MPLSPerformance::validateInstance()
{
	return true;
}

