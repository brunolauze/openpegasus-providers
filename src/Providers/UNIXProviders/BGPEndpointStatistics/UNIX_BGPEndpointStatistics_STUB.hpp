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


UNIX_BGPEndpointStatistics::UNIX_BGPEndpointStatistics(void)
{
}

UNIX_BGPEndpointStatistics::~UNIX_BGPEndpointStatistics(void)
{
}

Boolean UNIX_BGPEndpointStatistics::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_BGPEndpointStatistics::getInstanceID() const
{
	return _instanceID;
}

void UNIX_BGPEndpointStatistics::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_BGPEndpointStatistics::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_BGPEndpointStatistics::getCaption() const
{
	return _caption;
}

void UNIX_BGPEndpointStatistics::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_BGPEndpointStatistics::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_BGPEndpointStatistics::getDescription() const
{
	return _description;
}

void UNIX_BGPEndpointStatistics::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_BGPEndpointStatistics::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_BGPEndpointStatistics::getElementName() const
{
	return _elementName;
}

void UNIX_BGPEndpointStatistics::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_BGPEndpointStatistics::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_BGPEndpointStatistics::getGeneration() const
{
	return _generation;
}

void UNIX_BGPEndpointStatistics::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_BGPEndpointStatistics::getStartStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_STATISTIC_TIME, getStartStatisticTime());
	return true;
}

CIMDateTime UNIX_BGPEndpointStatistics::getStartStatisticTime() const
{
	return _startStatisticTime;
}

void UNIX_BGPEndpointStatistics::setStartStatisticTime(CIMDateTime &value)
{
	_startStatisticTime = value;
}

Boolean UNIX_BGPEndpointStatistics::getStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATISTIC_TIME, getStatisticTime());
	return true;
}

CIMDateTime UNIX_BGPEndpointStatistics::getStatisticTime() const
{
	return _statisticTime;
}

void UNIX_BGPEndpointStatistics::setStatisticTime(CIMDateTime &value)
{
	_statisticTime = value;
}

Boolean UNIX_BGPEndpointStatistics::getSampleInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SAMPLE_INTERVAL, getSampleInterval());
	return true;
}

CIMDateTime UNIX_BGPEndpointStatistics::getSampleInterval() const
{
	return _sampleInterval;
}

void UNIX_BGPEndpointStatistics::setSampleInterval(CIMDateTime &value)
{
	_sampleInterval = value;
}

Boolean UNIX_BGPEndpointStatistics::getRateIntervalEndTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_END_TIME, getRateIntervalEndTime());
	return true;
}

CIMDateTime UNIX_BGPEndpointStatistics::getRateIntervalEndTime() const
{
	return _rateIntervalEndTime;
}

void UNIX_BGPEndpointStatistics::setRateIntervalEndTime(CIMDateTime &value)
{
	_rateIntervalEndTime = value;
}

Boolean UNIX_BGPEndpointStatistics::getRateIntervalStartTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_START_TIME, getRateIntervalStartTime());
	return true;
}

CIMDateTime UNIX_BGPEndpointStatistics::getRateIntervalStartTime() const
{
	return _rateIntervalStartTime;
}

void UNIX_BGPEndpointStatistics::setRateIntervalStartTime(CIMDateTime &value)
{
	_rateIntervalStartTime = value;
}

Boolean UNIX_BGPEndpointStatistics::getInUpdates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IN_UPDATES, getInUpdates());
	return true;
}

Uint32 UNIX_BGPEndpointStatistics::getInUpdates() const
{
	return _inUpdates;
}

void UNIX_BGPEndpointStatistics::setInUpdates(Uint32 &value)
{
	_inUpdates = value;
}

Boolean UNIX_BGPEndpointStatistics::getOutUpdates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OUT_UPDATES, getOutUpdates());
	return true;
}

Uint32 UNIX_BGPEndpointStatistics::getOutUpdates() const
{
	return _outUpdates;
}

void UNIX_BGPEndpointStatistics::setOutUpdates(Uint32 &value)
{
	_outUpdates = value;
}

Boolean UNIX_BGPEndpointStatistics::getInTotalMessages(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IN_TOTAL_MESSAGES, getInTotalMessages());
	return true;
}

Uint32 UNIX_BGPEndpointStatistics::getInTotalMessages() const
{
	return _inTotalMessages;
}

void UNIX_BGPEndpointStatistics::setInTotalMessages(Uint32 &value)
{
	_inTotalMessages = value;
}

Boolean UNIX_BGPEndpointStatistics::getOutTotalMessages(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OUT_TOTAL_MESSAGES, getOutTotalMessages());
	return true;
}

Uint32 UNIX_BGPEndpointStatistics::getOutTotalMessages() const
{
	return _outTotalMessages;
}

void UNIX_BGPEndpointStatistics::setOutTotalMessages(Uint32 &value)
{
	_outTotalMessages = value;
}

Boolean UNIX_BGPEndpointStatistics::getLastError(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR, getLastError());
	return true;
}

Array<Uint8> UNIX_BGPEndpointStatistics::getLastError() const
{
	return _lastError;
}

void UNIX_BGPEndpointStatistics::setLastError(Array<Uint8> &value)
{
	_lastError = value;
}

Boolean UNIX_BGPEndpointStatistics::getFsmEstablishedTransitions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FSM_ESTABLISHED_TRANSITIONS, getFsmEstablishedTransitions());
	return true;
}

Uint32 UNIX_BGPEndpointStatistics::getFsmEstablishedTransitions() const
{
	return _fsmEstablishedTransitions;
}

void UNIX_BGPEndpointStatistics::setFsmEstablishedTransitions(Uint32 &value)
{
	_fsmEstablishedTransitions = value;
}

Boolean UNIX_BGPEndpointStatistics::getFsmEstablishedTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FSM_ESTABLISHED_TIME, getFsmEstablishedTime());
	return true;
}

Uint32 UNIX_BGPEndpointStatistics::getFsmEstablishedTime() const
{
	return _fsmEstablishedTime;
}

void UNIX_BGPEndpointStatistics::setFsmEstablishedTime(Uint32 &value)
{
	_fsmEstablishedTime = value;
}

Boolean UNIX_BGPEndpointStatistics::getInUpdateElapsedTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IN_UPDATE_ELAPSED_TIME, getInUpdateElapsedTime());
	return true;
}

Uint32 UNIX_BGPEndpointStatistics::getInUpdateElapsedTime() const
{
	return _inUpdateElapsedTime;
}

void UNIX_BGPEndpointStatistics::setInUpdateElapsedTime(Uint32 &value)
{
	_inUpdateElapsedTime = value;
}


void UNIX_BGPEndpointStatistics::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("BGPEndpointStatistics");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_inUpdates = Uint32(0);
	_outUpdates = Uint32(0);
	_inTotalMessages = Uint32(0);
	_outTotalMessages = Uint32(0);
	_lastError.clear();
	_fsmEstablishedTransitions = Uint32(0);
	_fsmEstablishedTime = Uint32(0);
	_inUpdateElapsedTime = Uint32(0);

}

Boolean UNIX_BGPEndpointStatistics::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "InUpdates"))
			{
				Uint32 inUpdatesValue;
				property.getValue().get(inUpdatesValue);
				setInUpdates(inUpdatesValue);
			}
			else if (String::equal(property.getName().getString(), "OutUpdates"))
			{
				Uint32 outUpdatesValue;
				property.getValue().get(outUpdatesValue);
				setOutUpdates(outUpdatesValue);
			}
			else if (String::equal(property.getName().getString(), "InTotalMessages"))
			{
				Uint32 inTotalMessagesValue;
				property.getValue().get(inTotalMessagesValue);
				setInTotalMessages(inTotalMessagesValue);
			}
			else if (String::equal(property.getName().getString(), "OutTotalMessages"))
			{
				Uint32 outTotalMessagesValue;
				property.getValue().get(outTotalMessagesValue);
				setOutTotalMessages(outTotalMessagesValue);
			}
			else if (String::equal(property.getName().getString(), "LastError"))
			{
				Array<Uint8> lastErrorValue;
				property.getValue().get(lastErrorValue);
				setLastError(lastErrorValue);
			}
			else if (String::equal(property.getName().getString(), "FsmEstablishedTransitions"))
			{
				Uint32 fsmEstablishedTransitionsValue;
				property.getValue().get(fsmEstablishedTransitionsValue);
				setFsmEstablishedTransitions(fsmEstablishedTransitionsValue);
			}
			else if (String::equal(property.getName().getString(), "FsmEstablishedTime"))
			{
				Uint32 fsmEstablishedTimeValue;
				property.getValue().get(fsmEstablishedTimeValue);
				setFsmEstablishedTime(fsmEstablishedTimeValue);
			}
			else if (String::equal(property.getName().getString(), "InUpdateElapsedTime"))
			{
				Uint32 inUpdateElapsedTimeValue;
				property.getValue().get(inUpdateElapsedTimeValue);
				setInUpdateElapsedTime(inUpdateElapsedTimeValue);
			}
	}
	return true;
}

Uint32 UNIX_BGPEndpointStatistics::invokeResetSelectedStats(
		Array<String> &inSelectedStatistics
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ResetSelectedStats */
	
	
	
	return returnValue;
}


Boolean UNIX_BGPEndpointStatistics::initialize()
{
	return false;
}

Boolean UNIX_BGPEndpointStatistics::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("BGPEndpointStatistics");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_inUpdates = Uint32(0);
	_outUpdates = Uint32(0);
	_inTotalMessages = Uint32(0);
	_outTotalMessages = Uint32(0);
	_lastError.clear();
	_fsmEstablishedTransitions = Uint32(0);
	_fsmEstablishedTime = Uint32(0);
	_inUpdateElapsedTime = Uint32(0);
	
	return false;
}

Boolean UNIX_BGPEndpointStatistics::finalize()
{
	return false;
}


Boolean UNIX_BGPEndpointStatistics::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_BGPEndpointStatistics::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BGPEndpointStatistics::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BGPEndpointStatistics::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BGPEndpointStatistics::validateInstance()
{
	return true;
}

