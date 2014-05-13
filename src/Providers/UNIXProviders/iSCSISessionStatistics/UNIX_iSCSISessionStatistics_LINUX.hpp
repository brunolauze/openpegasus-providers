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


UNIX_iSCSISessionStatistics::UNIX_iSCSISessionStatistics(void)
{
}

UNIX_iSCSISessionStatistics::~UNIX_iSCSISessionStatistics(void)
{
}

Boolean UNIX_iSCSISessionStatistics::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_iSCSISessionStatistics::getInstanceID() const
{
	return _instanceID;
}

void UNIX_iSCSISessionStatistics::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_iSCSISessionStatistics::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_iSCSISessionStatistics::getCaption() const
{
	return _caption;
}

void UNIX_iSCSISessionStatistics::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_iSCSISessionStatistics::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_iSCSISessionStatistics::getDescription() const
{
	return _description;
}

void UNIX_iSCSISessionStatistics::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_iSCSISessionStatistics::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_iSCSISessionStatistics::getElementName() const
{
	return _elementName;
}

void UNIX_iSCSISessionStatistics::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_iSCSISessionStatistics::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_iSCSISessionStatistics::getGeneration() const
{
	return _generation;
}

void UNIX_iSCSISessionStatistics::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_iSCSISessionStatistics::getStartStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_STATISTIC_TIME, getStartStatisticTime());
	return true;
}

CIMDateTime UNIX_iSCSISessionStatistics::getStartStatisticTime() const
{
	return _startStatisticTime;
}

void UNIX_iSCSISessionStatistics::setStartStatisticTime(CIMDateTime &value)
{
	_startStatisticTime = value;
}

Boolean UNIX_iSCSISessionStatistics::getStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATISTIC_TIME, getStatisticTime());
	return true;
}

CIMDateTime UNIX_iSCSISessionStatistics::getStatisticTime() const
{
	return _statisticTime;
}

void UNIX_iSCSISessionStatistics::setStatisticTime(CIMDateTime &value)
{
	_statisticTime = value;
}

Boolean UNIX_iSCSISessionStatistics::getSampleInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SAMPLE_INTERVAL, getSampleInterval());
	return true;
}

CIMDateTime UNIX_iSCSISessionStatistics::getSampleInterval() const
{
	return _sampleInterval;
}

void UNIX_iSCSISessionStatistics::setSampleInterval(CIMDateTime &value)
{
	_sampleInterval = value;
}

Boolean UNIX_iSCSISessionStatistics::getRateIntervalEndTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_END_TIME, getRateIntervalEndTime());
	return true;
}

CIMDateTime UNIX_iSCSISessionStatistics::getRateIntervalEndTime() const
{
	return _rateIntervalEndTime;
}

void UNIX_iSCSISessionStatistics::setRateIntervalEndTime(CIMDateTime &value)
{
	_rateIntervalEndTime = value;
}

Boolean UNIX_iSCSISessionStatistics::getRateIntervalStartTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_START_TIME, getRateIntervalStartTime());
	return true;
}

CIMDateTime UNIX_iSCSISessionStatistics::getRateIntervalStartTime() const
{
	return _rateIntervalStartTime;
}

void UNIX_iSCSISessionStatistics::setRateIntervalStartTime(CIMDateTime &value)
{
	_rateIntervalStartTime = value;
}

Boolean UNIX_iSCSISessionStatistics::getCommandPDUsTransferred(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMAND_P_D_US_TRANSFERRED, getCommandPDUsTransferred());
	return true;
}

Uint64 UNIX_iSCSISessionStatistics::getCommandPDUsTransferred() const
{
	return _commandPDUsTransferred;
}

void UNIX_iSCSISessionStatistics::setCommandPDUsTransferred(Uint64 &value)
{
	_commandPDUsTransferred = value;
}

Boolean UNIX_iSCSISessionStatistics::getResponsePDUsTransferred(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESPONSE_P_D_US_TRANSFERRED, getResponsePDUsTransferred());
	return true;
}

Uint64 UNIX_iSCSISessionStatistics::getResponsePDUsTransferred() const
{
	return _responsePDUsTransferred;
}

void UNIX_iSCSISessionStatistics::setResponsePDUsTransferred(Uint64 &value)
{
	_responsePDUsTransferred = value;
}

Boolean UNIX_iSCSISessionStatistics::getBytesTransmitted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BYTES_TRANSMITTED, getBytesTransmitted());
	return true;
}

Uint64 UNIX_iSCSISessionStatistics::getBytesTransmitted() const
{
	return _bytesTransmitted;
}

void UNIX_iSCSISessionStatistics::setBytesTransmitted(Uint64 &value)
{
	_bytesTransmitted = value;
}

Boolean UNIX_iSCSISessionStatistics::getBytesReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BYTES_RECEIVED, getBytesReceived());
	return true;
}

Uint64 UNIX_iSCSISessionStatistics::getBytesReceived() const
{
	return _bytesReceived;
}

void UNIX_iSCSISessionStatistics::setBytesReceived(Uint64 &value)
{
	_bytesReceived = value;
}

Boolean UNIX_iSCSISessionStatistics::getDigestErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DIGEST_ERRORS, getDigestErrors());
	return true;
}

Uint64 UNIX_iSCSISessionStatistics::getDigestErrors() const
{
	return _digestErrors;
}

void UNIX_iSCSISessionStatistics::setDigestErrors(Uint64 &value)
{
	_digestErrors = value;
}

Boolean UNIX_iSCSISessionStatistics::getConnectionTimeoutErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONNECTION_TIMEOUT_ERRORS, getConnectionTimeoutErrors());
	return true;
}

Uint64 UNIX_iSCSISessionStatistics::getConnectionTimeoutErrors() const
{
	return _connectionTimeoutErrors;
}

void UNIX_iSCSISessionStatistics::setConnectionTimeoutErrors(Uint64 &value)
{
	_connectionTimeoutErrors = value;
}


void UNIX_iSCSISessionStatistics::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("iSCSISessionStatistics");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_commandPDUsTransferred = Uint64(0);
	_responsePDUsTransferred = Uint64(0);
	_bytesTransmitted = Uint64(0);
	_bytesReceived = Uint64(0);
	_digestErrors = Uint64(0);
	_connectionTimeoutErrors = Uint64(0);

}

Boolean UNIX_iSCSISessionStatistics::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "CommandPDUsTransferred"))
			{
				Uint64 commandPDUsTransferredValue;
				property.getValue().get(commandPDUsTransferredValue);
				setCommandPDUsTransferred(commandPDUsTransferredValue);
			}
			else if (String::equal(property.getName().getString(), "ResponsePDUsTransferred"))
			{
				Uint64 responsePDUsTransferredValue;
				property.getValue().get(responsePDUsTransferredValue);
				setResponsePDUsTransferred(responsePDUsTransferredValue);
			}
			else if (String::equal(property.getName().getString(), "BytesTransmitted"))
			{
				Uint64 bytesTransmittedValue;
				property.getValue().get(bytesTransmittedValue);
				setBytesTransmitted(bytesTransmittedValue);
			}
			else if (String::equal(property.getName().getString(), "BytesReceived"))
			{
				Uint64 bytesReceivedValue;
				property.getValue().get(bytesReceivedValue);
				setBytesReceived(bytesReceivedValue);
			}
			else if (String::equal(property.getName().getString(), "DigestErrors"))
			{
				Uint64 digestErrorsValue;
				property.getValue().get(digestErrorsValue);
				setDigestErrors(digestErrorsValue);
			}
			else if (String::equal(property.getName().getString(), "ConnectionTimeoutErrors"))
			{
				Uint64 connectionTimeoutErrorsValue;
				property.getValue().get(connectionTimeoutErrorsValue);
				setConnectionTimeoutErrors(connectionTimeoutErrorsValue);
			}
	}
	return true;
}

Uint32 UNIX_iSCSISessionStatistics::invokeResetSelectedStats(
		Array<String> &inSelectedStatistics
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ResetSelectedStats */
	
	
	
	return returnValue;
}


Boolean UNIX_iSCSISessionStatistics::initialize()
{
	return false;
}

Boolean UNIX_iSCSISessionStatistics::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("iSCSISessionStatistics");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_commandPDUsTransferred = Uint64(0);
	_responsePDUsTransferred = Uint64(0);
	_bytesTransmitted = Uint64(0);
	_bytesReceived = Uint64(0);
	_digestErrors = Uint64(0);
	_connectionTimeoutErrors = Uint64(0);
	
	return false;
}

Boolean UNIX_iSCSISessionStatistics::finalize()
{
	return false;
}


Boolean UNIX_iSCSISessionStatistics::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_iSCSISessionStatistics::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_iSCSISessionStatistics::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_iSCSISessionStatistics::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_iSCSISessionStatistics::validateInstance()
{
	return true;
}

