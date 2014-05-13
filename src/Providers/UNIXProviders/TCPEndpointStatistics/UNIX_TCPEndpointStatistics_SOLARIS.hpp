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


UNIX_TCPEndpointStatistics::UNIX_TCPEndpointStatistics(void)
{
}

UNIX_TCPEndpointStatistics::~UNIX_TCPEndpointStatistics(void)
{
}

Boolean UNIX_TCPEndpointStatistics::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_TCPEndpointStatistics::getInstanceID() const
{
	return _instanceID;
}

void UNIX_TCPEndpointStatistics::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_TCPEndpointStatistics::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_TCPEndpointStatistics::getCaption() const
{
	return _caption;
}

void UNIX_TCPEndpointStatistics::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_TCPEndpointStatistics::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_TCPEndpointStatistics::getDescription() const
{
	return _description;
}

void UNIX_TCPEndpointStatistics::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_TCPEndpointStatistics::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_TCPEndpointStatistics::getElementName() const
{
	return _elementName;
}

void UNIX_TCPEndpointStatistics::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_TCPEndpointStatistics::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_TCPEndpointStatistics::getGeneration() const
{
	return _generation;
}

void UNIX_TCPEndpointStatistics::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_TCPEndpointStatistics::getStartStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_STATISTIC_TIME, getStartStatisticTime());
	return true;
}

CIMDateTime UNIX_TCPEndpointStatistics::getStartStatisticTime() const
{
	return _startStatisticTime;
}

void UNIX_TCPEndpointStatistics::setStartStatisticTime(CIMDateTime &value)
{
	_startStatisticTime = value;
}

Boolean UNIX_TCPEndpointStatistics::getStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATISTIC_TIME, getStatisticTime());
	return true;
}

CIMDateTime UNIX_TCPEndpointStatistics::getStatisticTime() const
{
	return _statisticTime;
}

void UNIX_TCPEndpointStatistics::setStatisticTime(CIMDateTime &value)
{
	_statisticTime = value;
}

Boolean UNIX_TCPEndpointStatistics::getSampleInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SAMPLE_INTERVAL, getSampleInterval());
	return true;
}

CIMDateTime UNIX_TCPEndpointStatistics::getSampleInterval() const
{
	return _sampleInterval;
}

void UNIX_TCPEndpointStatistics::setSampleInterval(CIMDateTime &value)
{
	_sampleInterval = value;
}

Boolean UNIX_TCPEndpointStatistics::getRateIntervalEndTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_END_TIME, getRateIntervalEndTime());
	return true;
}

CIMDateTime UNIX_TCPEndpointStatistics::getRateIntervalEndTime() const
{
	return _rateIntervalEndTime;
}

void UNIX_TCPEndpointStatistics::setRateIntervalEndTime(CIMDateTime &value)
{
	_rateIntervalEndTime = value;
}

Boolean UNIX_TCPEndpointStatistics::getRateIntervalStartTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_START_TIME, getRateIntervalStartTime());
	return true;
}

CIMDateTime UNIX_TCPEndpointStatistics::getRateIntervalStartTime() const
{
	return _rateIntervalStartTime;
}

void UNIX_TCPEndpointStatistics::setRateIntervalStartTime(CIMDateTime &value)
{
	_rateIntervalStartTime = value;
}

Boolean UNIX_TCPEndpointStatistics::getReceivedPDUs(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECEIVED_P_D_US, getReceivedPDUs());
	return true;
}

Uint32 UNIX_TCPEndpointStatistics::getReceivedPDUs() const
{
	return _receivedPDUs;
}

void UNIX_TCPEndpointStatistics::setReceivedPDUs(Uint32 &value)
{
	_receivedPDUs = value;
}

Boolean UNIX_TCPEndpointStatistics::getReceivedPDUHeaderErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECEIVED_P_D_U_HEADER_ERRORS, getReceivedPDUHeaderErrors());
	return true;
}

Uint32 UNIX_TCPEndpointStatistics::getReceivedPDUHeaderErrors() const
{
	return _receivedPDUHeaderErrors;
}

void UNIX_TCPEndpointStatistics::setReceivedPDUHeaderErrors(Uint32 &value)
{
	_receivedPDUHeaderErrors = value;
}

Boolean UNIX_TCPEndpointStatistics::getReceivedPDUAddressErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECEIVED_P_D_U_ADDRESS_ERRORS, getReceivedPDUAddressErrors());
	return true;
}

Uint32 UNIX_TCPEndpointStatistics::getReceivedPDUAddressErrors() const
{
	return _receivedPDUAddressErrors;
}

void UNIX_TCPEndpointStatistics::setReceivedPDUAddressErrors(Uint32 &value)
{
	_receivedPDUAddressErrors = value;
}

Boolean UNIX_TCPEndpointStatistics::getSentPDUs(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SENT_P_D_US, getSentPDUs());
	return true;
}

Uint32 UNIX_TCPEndpointStatistics::getSentPDUs() const
{
	return _sentPDUs;
}

void UNIX_TCPEndpointStatistics::setSentPDUs(Uint32 &value)
{
	_sentPDUs = value;
}

Boolean UNIX_TCPEndpointStatistics::getReceivedSegmentsInError(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECEIVED_SEGMENTS_IN_ERROR, getReceivedSegmentsInError());
	return true;
}

Uint32 UNIX_TCPEndpointStatistics::getReceivedSegmentsInError() const
{
	return _receivedSegmentsInError;
}

void UNIX_TCPEndpointStatistics::setReceivedSegmentsInError(Uint32 &value)
{
	_receivedSegmentsInError = value;
}

Boolean UNIX_TCPEndpointStatistics::getSentResetSegments(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SENT_RESET_SEGMENTS, getSentResetSegments());
	return true;
}

Uint32 UNIX_TCPEndpointStatistics::getSentResetSegments() const
{
	return _sentResetSegments;
}

void UNIX_TCPEndpointStatistics::setSentResetSegments(Uint32 &value)
{
	_sentResetSegments = value;
}


void UNIX_TCPEndpointStatistics::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("TCPEndpointStatistics");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_receivedPDUs = Uint32(0);
	_receivedPDUHeaderErrors = Uint32(0);
	_receivedPDUAddressErrors = Uint32(0);
	_sentPDUs = Uint32(0);
	_receivedSegmentsInError = Uint32(0);
	_sentResetSegments = Uint32(0);

}

Boolean UNIX_TCPEndpointStatistics::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "ReceivedPDUs"))
			{
				Uint32 receivedPDUsValue;
				property.getValue().get(receivedPDUsValue);
				setReceivedPDUs(receivedPDUsValue);
			}
			else if (String::equal(property.getName().getString(), "ReceivedPDUHeaderErrors"))
			{
				Uint32 receivedPDUHeaderErrorsValue;
				property.getValue().get(receivedPDUHeaderErrorsValue);
				setReceivedPDUHeaderErrors(receivedPDUHeaderErrorsValue);
			}
			else if (String::equal(property.getName().getString(), "ReceivedPDUAddressErrors"))
			{
				Uint32 receivedPDUAddressErrorsValue;
				property.getValue().get(receivedPDUAddressErrorsValue);
				setReceivedPDUAddressErrors(receivedPDUAddressErrorsValue);
			}
			else if (String::equal(property.getName().getString(), "SentPDUs"))
			{
				Uint32 sentPDUsValue;
				property.getValue().get(sentPDUsValue);
				setSentPDUs(sentPDUsValue);
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

Uint32 UNIX_TCPEndpointStatistics::invokeResetSelectedStats(
		Array<String> &inSelectedStatistics
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ResetSelectedStats */
	
	
	
	return returnValue;
}


Boolean UNIX_TCPEndpointStatistics::initialize()
{
	return false;
}

Boolean UNIX_TCPEndpointStatistics::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("TCPEndpointStatistics");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_receivedPDUs = Uint32(0);
	_receivedPDUHeaderErrors = Uint32(0);
	_receivedPDUAddressErrors = Uint32(0);
	_sentPDUs = Uint32(0);
	_receivedSegmentsInError = Uint32(0);
	_sentResetSegments = Uint32(0);
	
	return false;
}

Boolean UNIX_TCPEndpointStatistics::finalize()
{
	return false;
}


Boolean UNIX_TCPEndpointStatistics::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_TCPEndpointStatistics::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_TCPEndpointStatistics::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_TCPEndpointStatistics::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_TCPEndpointStatistics::validateInstance()
{
	return true;
}

