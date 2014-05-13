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


UNIX_TCPStatisticalData::UNIX_TCPStatisticalData(void)
{
}

UNIX_TCPStatisticalData::~UNIX_TCPStatisticalData(void)
{
}

Boolean UNIX_TCPStatisticalData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_TCPStatisticalData::getInstanceID() const
{
	return _instanceID;
}

void UNIX_TCPStatisticalData::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_TCPStatisticalData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_TCPStatisticalData::getCaption() const
{
	return _caption;
}

void UNIX_TCPStatisticalData::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_TCPStatisticalData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_TCPStatisticalData::getDescription() const
{
	return _description;
}

void UNIX_TCPStatisticalData::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_TCPStatisticalData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_TCPStatisticalData::getElementName() const
{
	return _elementName;
}

void UNIX_TCPStatisticalData::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_TCPStatisticalData::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_TCPStatisticalData::getGeneration() const
{
	return _generation;
}

void UNIX_TCPStatisticalData::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_TCPStatisticalData::getStartStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_STATISTIC_TIME, getStartStatisticTime());
	return true;
}

CIMDateTime UNIX_TCPStatisticalData::getStartStatisticTime() const
{
	return _startStatisticTime;
}

void UNIX_TCPStatisticalData::setStartStatisticTime(CIMDateTime &value)
{
	_startStatisticTime = value;
}

Boolean UNIX_TCPStatisticalData::getStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATISTIC_TIME, getStatisticTime());
	return true;
}

CIMDateTime UNIX_TCPStatisticalData::getStatisticTime() const
{
	return _statisticTime;
}

void UNIX_TCPStatisticalData::setStatisticTime(CIMDateTime &value)
{
	_statisticTime = value;
}

Boolean UNIX_TCPStatisticalData::getSampleInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SAMPLE_INTERVAL, getSampleInterval());
	return true;
}

CIMDateTime UNIX_TCPStatisticalData::getSampleInterval() const
{
	return _sampleInterval;
}

void UNIX_TCPStatisticalData::setSampleInterval(CIMDateTime &value)
{
	_sampleInterval = value;
}

Boolean UNIX_TCPStatisticalData::getRateIntervalEndTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_END_TIME, getRateIntervalEndTime());
	return true;
}

CIMDateTime UNIX_TCPStatisticalData::getRateIntervalEndTime() const
{
	return _rateIntervalEndTime;
}

void UNIX_TCPStatisticalData::setRateIntervalEndTime(CIMDateTime &value)
{
	_rateIntervalEndTime = value;
}

Boolean UNIX_TCPStatisticalData::getRateIntervalStartTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_START_TIME, getRateIntervalStartTime());
	return true;
}

CIMDateTime UNIX_TCPStatisticalData::getRateIntervalStartTime() const
{
	return _rateIntervalStartTime;
}

void UNIX_TCPStatisticalData::setRateIntervalStartTime(CIMDateTime &value)
{
	_rateIntervalStartTime = value;
}

Boolean UNIX_TCPStatisticalData::getActiveOpenConnections(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACTIVE_OPEN_CONNECTIONS, getActiveOpenConnections());
	return true;
}

Uint32 UNIX_TCPStatisticalData::getActiveOpenConnections() const
{
	return _activeOpenConnections;
}

void UNIX_TCPStatisticalData::setActiveOpenConnections(Uint32 &value)
{
	_activeOpenConnections = value;
}

Boolean UNIX_TCPStatisticalData::getPassiveOpenConnections(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PASSIVE_OPEN_CONNECTIONS, getPassiveOpenConnections());
	return true;
}

Uint32 UNIX_TCPStatisticalData::getPassiveOpenConnections() const
{
	return _passiveOpenConnections;
}

void UNIX_TCPStatisticalData::setPassiveOpenConnections(Uint32 &value)
{
	_passiveOpenConnections = value;
}

Boolean UNIX_TCPStatisticalData::getAttemptsFails(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ATTEMPTS_FAILS, getAttemptsFails());
	return true;
}

Uint32 UNIX_TCPStatisticalData::getAttemptsFails() const
{
	return _attemptsFails;
}

void UNIX_TCPStatisticalData::setAttemptsFails(Uint32 &value)
{
	_attemptsFails = value;
}

Boolean UNIX_TCPStatisticalData::getEstablishedResets(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ESTABLISHED_RESETS, getEstablishedResets());
	return true;
}

Uint32 UNIX_TCPStatisticalData::getEstablishedResets() const
{
	return _establishedResets;
}

void UNIX_TCPStatisticalData::setEstablishedResets(Uint32 &value)
{
	_establishedResets = value;
}

Boolean UNIX_TCPStatisticalData::getEstablishedConnections(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ESTABLISHED_CONNECTIONS, getEstablishedConnections());
	return true;
}

Uint32 UNIX_TCPStatisticalData::getEstablishedConnections() const
{
	return _establishedConnections;
}

void UNIX_TCPStatisticalData::setEstablishedConnections(Uint32 &value)
{
	_establishedConnections = value;
}

Boolean UNIX_TCPStatisticalData::getReceivedSegments(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECEIVED_SEGMENTS, getReceivedSegments());
	return true;
}

Uint32 UNIX_TCPStatisticalData::getReceivedSegments() const
{
	return _receivedSegments;
}

void UNIX_TCPStatisticalData::setReceivedSegments(Uint32 &value)
{
	_receivedSegments = value;
}

Boolean UNIX_TCPStatisticalData::getSentSegments(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SENT_SEGMENTS, getSentSegments());
	return true;
}

Uint32 UNIX_TCPStatisticalData::getSentSegments() const
{
	return _sentSegments;
}

void UNIX_TCPStatisticalData::setSentSegments(Uint32 &value)
{
	_sentSegments = value;
}

Boolean UNIX_TCPStatisticalData::getRetransmittedSegments(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RETRANSMITTED_SEGMENTS, getRetransmittedSegments());
	return true;
}

Uint32 UNIX_TCPStatisticalData::getRetransmittedSegments() const
{
	return _retransmittedSegments;
}

void UNIX_TCPStatisticalData::setRetransmittedSegments(Uint32 &value)
{
	_retransmittedSegments = value;
}

Boolean UNIX_TCPStatisticalData::getReceivedSegmentsInError(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECEIVED_SEGMENTS_IN_ERROR, getReceivedSegmentsInError());
	return true;
}

Uint32 UNIX_TCPStatisticalData::getReceivedSegmentsInError() const
{
	return _receivedSegmentsInError;
}

void UNIX_TCPStatisticalData::setReceivedSegmentsInError(Uint32 &value)
{
	_receivedSegmentsInError = value;
}

Boolean UNIX_TCPStatisticalData::getSentResetSegments(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SENT_RESET_SEGMENTS, getSentResetSegments());
	return true;
}

Uint32 UNIX_TCPStatisticalData::getSentResetSegments() const
{
	return _sentResetSegments;
}

void UNIX_TCPStatisticalData::setSentResetSegments(Uint32 &value)
{
	_sentResetSegments = value;
}


void UNIX_TCPStatisticalData::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("TCPStatisticalData");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_activeOpenConnections = Uint32(0);
	_passiveOpenConnections = Uint32(0);
	_attemptsFails = Uint32(0);
	_establishedResets = Uint32(0);
	_establishedConnections = Uint32(0);
	_receivedSegments = Uint32(0);
	_sentSegments = Uint32(0);
	_retransmittedSegments = Uint32(0);
	_receivedSegmentsInError = Uint32(0);
	_sentResetSegments = Uint32(0);

}

Boolean UNIX_TCPStatisticalData::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "ActiveOpenConnections"))
			{
				Uint32 activeOpenConnectionsValue;
				property.getValue().get(activeOpenConnectionsValue);
				setActiveOpenConnections(activeOpenConnectionsValue);
			}
			else if (String::equal(property.getName().getString(), "PassiveOpenConnections"))
			{
				Uint32 passiveOpenConnectionsValue;
				property.getValue().get(passiveOpenConnectionsValue);
				setPassiveOpenConnections(passiveOpenConnectionsValue);
			}
			else if (String::equal(property.getName().getString(), "AttemptsFails"))
			{
				Uint32 attemptsFailsValue;
				property.getValue().get(attemptsFailsValue);
				setAttemptsFails(attemptsFailsValue);
			}
			else if (String::equal(property.getName().getString(), "EstablishedResets"))
			{
				Uint32 establishedResetsValue;
				property.getValue().get(establishedResetsValue);
				setEstablishedResets(establishedResetsValue);
			}
			else if (String::equal(property.getName().getString(), "EstablishedConnections"))
			{
				Uint32 establishedConnectionsValue;
				property.getValue().get(establishedConnectionsValue);
				setEstablishedConnections(establishedConnectionsValue);
			}
			else if (String::equal(property.getName().getString(), "ReceivedSegments"))
			{
				Uint32 receivedSegmentsValue;
				property.getValue().get(receivedSegmentsValue);
				setReceivedSegments(receivedSegmentsValue);
			}
			else if (String::equal(property.getName().getString(), "SentSegments"))
			{
				Uint32 sentSegmentsValue;
				property.getValue().get(sentSegmentsValue);
				setSentSegments(sentSegmentsValue);
			}
			else if (String::equal(property.getName().getString(), "RetransmittedSegments"))
			{
				Uint32 retransmittedSegmentsValue;
				property.getValue().get(retransmittedSegmentsValue);
				setRetransmittedSegments(retransmittedSegmentsValue);
			}
			else if (String::equal(property.getName().getString(), "ReceivedSegmentsInError"))
			{
				Uint32 receivedSegmentsInErrorValue;
				property.getValue().get(receivedSegmentsInErrorValue);
				setReceivedSegmentsInError(receivedSegmentsInErrorValue);
			}
			else if (String::equal(property.getName().getString(), "SentResetSegments"))
			{
				Uint32 sentResetSegmentsValue;
				property.getValue().get(sentResetSegmentsValue);
				setSentResetSegments(sentResetSegmentsValue);
			}
	}
	return true;
}

Uint32 UNIX_TCPStatisticalData::invokeResetSelectedStats(
		Array<String> &inSelectedStatistics
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ResetSelectedStats */
	
	
	
	return returnValue;
}


Boolean UNIX_TCPStatisticalData::initialize()
{
	return false;
}

Boolean UNIX_TCPStatisticalData::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("TCPStatisticalData");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_activeOpenConnections = Uint32(0);
	_passiveOpenConnections = Uint32(0);
	_attemptsFails = Uint32(0);
	_establishedResets = Uint32(0);
	_establishedConnections = Uint32(0);
	_receivedSegments = Uint32(0);
	_sentSegments = Uint32(0);
	_retransmittedSegments = Uint32(0);
	_receivedSegmentsInError = Uint32(0);
	_sentResetSegments = Uint32(0);
	
	return false;
}

Boolean UNIX_TCPStatisticalData::finalize()
{
	return false;
}


Boolean UNIX_TCPStatisticalData::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_TCPStatisticalData::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_TCPStatisticalData::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_TCPStatisticalData::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_TCPStatisticalData::validateInstance()
{
	return true;
}

