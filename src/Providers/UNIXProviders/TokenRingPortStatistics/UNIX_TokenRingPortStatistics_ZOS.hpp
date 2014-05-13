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


UNIX_TokenRingPortStatistics::UNIX_TokenRingPortStatistics(void)
{
}

UNIX_TokenRingPortStatistics::~UNIX_TokenRingPortStatistics(void)
{
}

Boolean UNIX_TokenRingPortStatistics::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_TokenRingPortStatistics::getInstanceID() const
{
	return _instanceID;
}

void UNIX_TokenRingPortStatistics::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_TokenRingPortStatistics::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_TokenRingPortStatistics::getCaption() const
{
	return _caption;
}

void UNIX_TokenRingPortStatistics::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_TokenRingPortStatistics::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_TokenRingPortStatistics::getDescription() const
{
	return _description;
}

void UNIX_TokenRingPortStatistics::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_TokenRingPortStatistics::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_TokenRingPortStatistics::getElementName() const
{
	return _elementName;
}

void UNIX_TokenRingPortStatistics::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_TokenRingPortStatistics::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_TokenRingPortStatistics::getGeneration() const
{
	return _generation;
}

void UNIX_TokenRingPortStatistics::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_TokenRingPortStatistics::getStartStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_STATISTIC_TIME, getStartStatisticTime());
	return true;
}

CIMDateTime UNIX_TokenRingPortStatistics::getStartStatisticTime() const
{
	return _startStatisticTime;
}

void UNIX_TokenRingPortStatistics::setStartStatisticTime(CIMDateTime &value)
{
	_startStatisticTime = value;
}

Boolean UNIX_TokenRingPortStatistics::getStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATISTIC_TIME, getStatisticTime());
	return true;
}

CIMDateTime UNIX_TokenRingPortStatistics::getStatisticTime() const
{
	return _statisticTime;
}

void UNIX_TokenRingPortStatistics::setStatisticTime(CIMDateTime &value)
{
	_statisticTime = value;
}

Boolean UNIX_TokenRingPortStatistics::getSampleInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SAMPLE_INTERVAL, getSampleInterval());
	return true;
}

CIMDateTime UNIX_TokenRingPortStatistics::getSampleInterval() const
{
	return _sampleInterval;
}

void UNIX_TokenRingPortStatistics::setSampleInterval(CIMDateTime &value)
{
	_sampleInterval = value;
}

Boolean UNIX_TokenRingPortStatistics::getRateIntervalEndTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_END_TIME, getRateIntervalEndTime());
	return true;
}

CIMDateTime UNIX_TokenRingPortStatistics::getRateIntervalEndTime() const
{
	return _rateIntervalEndTime;
}

void UNIX_TokenRingPortStatistics::setRateIntervalEndTime(CIMDateTime &value)
{
	_rateIntervalEndTime = value;
}

Boolean UNIX_TokenRingPortStatistics::getRateIntervalStartTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_START_TIME, getRateIntervalStartTime());
	return true;
}

CIMDateTime UNIX_TokenRingPortStatistics::getRateIntervalStartTime() const
{
	return _rateIntervalStartTime;
}

void UNIX_TokenRingPortStatistics::setRateIntervalStartTime(CIMDateTime &value)
{
	_rateIntervalStartTime = value;
}

Boolean UNIX_TokenRingPortStatistics::getBytesTransmitted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BYTES_TRANSMITTED, getBytesTransmitted());
	return true;
}

Uint64 UNIX_TokenRingPortStatistics::getBytesTransmitted() const
{
	return _bytesTransmitted;
}

void UNIX_TokenRingPortStatistics::setBytesTransmitted(Uint64 &value)
{
	_bytesTransmitted = value;
}

Boolean UNIX_TokenRingPortStatistics::getBytesReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BYTES_RECEIVED, getBytesReceived());
	return true;
}

Uint64 UNIX_TokenRingPortStatistics::getBytesReceived() const
{
	return _bytesReceived;
}

void UNIX_TokenRingPortStatistics::setBytesReceived(Uint64 &value)
{
	_bytesReceived = value;
}

Boolean UNIX_TokenRingPortStatistics::getPacketsTransmitted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKETS_TRANSMITTED, getPacketsTransmitted());
	return true;
}

Uint64 UNIX_TokenRingPortStatistics::getPacketsTransmitted() const
{
	return _packetsTransmitted;
}

void UNIX_TokenRingPortStatistics::setPacketsTransmitted(Uint64 &value)
{
	_packetsTransmitted = value;
}

Boolean UNIX_TokenRingPortStatistics::getPacketsReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKETS_RECEIVED, getPacketsReceived());
	return true;
}

Uint64 UNIX_TokenRingPortStatistics::getPacketsReceived() const
{
	return _packetsReceived;
}

void UNIX_TokenRingPortStatistics::setPacketsReceived(Uint64 &value)
{
	_packetsReceived = value;
}

Boolean UNIX_TokenRingPortStatistics::getBurstErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BURST_ERRORS, getBurstErrors());
	return true;
}

Uint32 UNIX_TokenRingPortStatistics::getBurstErrors() const
{
	return _burstErrors;
}

void UNIX_TokenRingPortStatistics::setBurstErrors(Uint32 &value)
{
	_burstErrors = value;
}

Boolean UNIX_TokenRingPortStatistics::getACErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_A_C_ERRORS, getACErrors());
	return true;
}

Uint32 UNIX_TokenRingPortStatistics::getACErrors() const
{
	return _aCErrors;
}

void UNIX_TokenRingPortStatistics::setACErrors(Uint32 &value)
{
	_aCErrors = value;
}

Boolean UNIX_TokenRingPortStatistics::getAbortTransErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ABORT_TRANS_ERRORS, getAbortTransErrors());
	return true;
}

Uint32 UNIX_TokenRingPortStatistics::getAbortTransErrors() const
{
	return _abortTransErrors;
}

void UNIX_TokenRingPortStatistics::setAbortTransErrors(Uint32 &value)
{
	_abortTransErrors = value;
}

Boolean UNIX_TokenRingPortStatistics::getInternalErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INTERNAL_ERRORS, getInternalErrors());
	return true;
}

Uint32 UNIX_TokenRingPortStatistics::getInternalErrors() const
{
	return _internalErrors;
}

void UNIX_TokenRingPortStatistics::setInternalErrors(Uint32 &value)
{
	_internalErrors = value;
}

Boolean UNIX_TokenRingPortStatistics::getLostFrameErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOST_FRAME_ERRORS, getLostFrameErrors());
	return true;
}

Uint32 UNIX_TokenRingPortStatistics::getLostFrameErrors() const
{
	return _lostFrameErrors;
}

void UNIX_TokenRingPortStatistics::setLostFrameErrors(Uint32 &value)
{
	_lostFrameErrors = value;
}

Boolean UNIX_TokenRingPortStatistics::getReceiveCongestions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECEIVE_CONGESTIONS, getReceiveCongestions());
	return true;
}

Uint32 UNIX_TokenRingPortStatistics::getReceiveCongestions() const
{
	return _receiveCongestions;
}

void UNIX_TokenRingPortStatistics::setReceiveCongestions(Uint32 &value)
{
	_receiveCongestions = value;
}

Boolean UNIX_TokenRingPortStatistics::getFrameCopiedErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FRAME_COPIED_ERRORS, getFrameCopiedErrors());
	return true;
}

Uint32 UNIX_TokenRingPortStatistics::getFrameCopiedErrors() const
{
	return _frameCopiedErrors;
}

void UNIX_TokenRingPortStatistics::setFrameCopiedErrors(Uint32 &value)
{
	_frameCopiedErrors = value;
}

Boolean UNIX_TokenRingPortStatistics::getTokenErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOKEN_ERRORS, getTokenErrors());
	return true;
}

Uint32 UNIX_TokenRingPortStatistics::getTokenErrors() const
{
	return _tokenErrors;
}

void UNIX_TokenRingPortStatistics::setTokenErrors(Uint32 &value)
{
	_tokenErrors = value;
}

Boolean UNIX_TokenRingPortStatistics::getSoftErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SOFT_ERRORS, getSoftErrors());
	return true;
}

Uint32 UNIX_TokenRingPortStatistics::getSoftErrors() const
{
	return _softErrors;
}

void UNIX_TokenRingPortStatistics::setSoftErrors(Uint32 &value)
{
	_softErrors = value;
}

Boolean UNIX_TokenRingPortStatistics::getHardErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HARD_ERRORS, getHardErrors());
	return true;
}

Uint32 UNIX_TokenRingPortStatistics::getHardErrors() const
{
	return _hardErrors;
}

void UNIX_TokenRingPortStatistics::setHardErrors(Uint32 &value)
{
	_hardErrors = value;
}

Boolean UNIX_TokenRingPortStatistics::getSignalLossCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SIGNAL_LOSS_COUNT, getSignalLossCount());
	return true;
}

Uint32 UNIX_TokenRingPortStatistics::getSignalLossCount() const
{
	return _signalLossCount;
}

void UNIX_TokenRingPortStatistics::setSignalLossCount(Uint32 &value)
{
	_signalLossCount = value;
}

Boolean UNIX_TokenRingPortStatistics::getTransmittedBeacons(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSMITTED_BEACONS, getTransmittedBeacons());
	return true;
}

Uint32 UNIX_TokenRingPortStatistics::getTransmittedBeacons() const
{
	return _transmittedBeacons;
}

void UNIX_TokenRingPortStatistics::setTransmittedBeacons(Uint32 &value)
{
	_transmittedBeacons = value;
}

Boolean UNIX_TokenRingPortStatistics::getRecoverys(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECOVERYS, getRecoverys());
	return true;
}

Uint32 UNIX_TokenRingPortStatistics::getRecoverys() const
{
	return _recoverys;
}

void UNIX_TokenRingPortStatistics::setRecoverys(Uint32 &value)
{
	_recoverys = value;
}

Boolean UNIX_TokenRingPortStatistics::getLobeWires(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOBE_WIRES, getLobeWires());
	return true;
}

Uint32 UNIX_TokenRingPortStatistics::getLobeWires() const
{
	return _lobeWires;
}

void UNIX_TokenRingPortStatistics::setLobeWires(Uint32 &value)
{
	_lobeWires = value;
}

Boolean UNIX_TokenRingPortStatistics::getRemoves(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMOVES, getRemoves());
	return true;
}

Uint32 UNIX_TokenRingPortStatistics::getRemoves() const
{
	return _removes;
}

void UNIX_TokenRingPortStatistics::setRemoves(Uint32 &value)
{
	_removes = value;
}

Boolean UNIX_TokenRingPortStatistics::getSingles(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SINGLES, getSingles());
	return true;
}

Uint32 UNIX_TokenRingPortStatistics::getSingles() const
{
	return _singles;
}

void UNIX_TokenRingPortStatistics::setSingles(Uint32 &value)
{
	_singles = value;
}

Boolean UNIX_TokenRingPortStatistics::getFrequencyErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FREQUENCY_ERRORS, getFrequencyErrors());
	return true;
}

Uint32 UNIX_TokenRingPortStatistics::getFrequencyErrors() const
{
	return _frequencyErrors;
}

void UNIX_TokenRingPortStatistics::setFrequencyErrors(Uint32 &value)
{
	_frequencyErrors = value;
}


void UNIX_TokenRingPortStatistics::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("TokenRingPortStatistics");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_bytesTransmitted = Uint64(0);
	_bytesReceived = Uint64(0);
	_packetsTransmitted = Uint64(0);
	_packetsReceived = Uint64(0);
	_burstErrors = Uint32(0);
	_aCErrors = Uint32(0);
	_abortTransErrors = Uint32(0);
	_internalErrors = Uint32(0);
	_lostFrameErrors = Uint32(0);
	_receiveCongestions = Uint32(0);
	_frameCopiedErrors = Uint32(0);
	_tokenErrors = Uint32(0);
	_softErrors = Uint32(0);
	_hardErrors = Uint32(0);
	_signalLossCount = Uint32(0);
	_transmittedBeacons = Uint32(0);
	_recoverys = Uint32(0);
	_lobeWires = Uint32(0);
	_removes = Uint32(0);
	_singles = Uint32(0);
	_frequencyErrors = Uint32(0);

}

Boolean UNIX_TokenRingPortStatistics::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "PacketsTransmitted"))
			{
				Uint64 packetsTransmittedValue;
				property.getValue().get(packetsTransmittedValue);
				setPacketsTransmitted(packetsTransmittedValue);
			}
			else if (String::equal(property.getName().getString(), "PacketsReceived"))
			{
				Uint64 packetsReceivedValue;
				property.getValue().get(packetsReceivedValue);
				setPacketsReceived(packetsReceivedValue);
			}
			else if (String::equal(property.getName().getString(), "BurstErrors"))
			{
				Uint32 burstErrorsValue;
				property.getValue().get(burstErrorsValue);
				setBurstErrors(burstErrorsValue);
			}
			else if (String::equal(property.getName().getString(), "ACErrors"))
			{
				Uint32 aCErrorsValue;
				property.getValue().get(aCErrorsValue);
				setACErrors(aCErrorsValue);
			}
			else if (String::equal(property.getName().getString(), "AbortTransErrors"))
			{
				Uint32 abortTransErrorsValue;
				property.getValue().get(abortTransErrorsValue);
				setAbortTransErrors(abortTransErrorsValue);
			}
			else if (String::equal(property.getName().getString(), "InternalErrors"))
			{
				Uint32 internalErrorsValue;
				property.getValue().get(internalErrorsValue);
				setInternalErrors(internalErrorsValue);
			}
			else if (String::equal(property.getName().getString(), "LostFrameErrors"))
			{
				Uint32 lostFrameErrorsValue;
				property.getValue().get(lostFrameErrorsValue);
				setLostFrameErrors(lostFrameErrorsValue);
			}
			else if (String::equal(property.getName().getString(), "ReceiveCongestions"))
			{
				Uint32 receiveCongestionsValue;
				property.getValue().get(receiveCongestionsValue);
				setReceiveCongestions(receiveCongestionsValue);
			}
			else if (String::equal(property.getName().getString(), "FrameCopiedErrors"))
			{
				Uint32 frameCopiedErrorsValue;
				property.getValue().get(frameCopiedErrorsValue);
				setFrameCopiedErrors(frameCopiedErrorsValue);
			}
			else if (String::equal(property.getName().getString(), "TokenErrors"))
			{
				Uint32 tokenErrorsValue;
				property.getValue().get(tokenErrorsValue);
				setTokenErrors(tokenErrorsValue);
			}
			else if (String::equal(property.getName().getString(), "SoftErrors"))
			{
				Uint32 softErrorsValue;
				property.getValue().get(softErrorsValue);
				setSoftErrors(softErrorsValue);
			}
			else if (String::equal(property.getName().getString(), "HardErrors"))
			{
				Uint32 hardErrorsValue;
				property.getValue().get(hardErrorsValue);
				setHardErrors(hardErrorsValue);
			}
			else if (String::equal(property.getName().getString(), "SignalLossCount"))
			{
				Uint32 signalLossCountValue;
				property.getValue().get(signalLossCountValue);
				setSignalLossCount(signalLossCountValue);
			}
			else if (String::equal(property.getName().getString(), "TransmittedBeacons"))
			{
				Uint32 transmittedBeaconsValue;
				property.getValue().get(transmittedBeaconsValue);
				setTransmittedBeacons(transmittedBeaconsValue);
			}
			else if (String::equal(property.getName().getString(), "Recoverys"))
			{
				Uint32 recoverysValue;
				property.getValue().get(recoverysValue);
				setRecoverys(recoverysValue);
			}
			else if (String::equal(property.getName().getString(), "LobeWires"))
			{
				Uint32 lobeWiresValue;
				property.getValue().get(lobeWiresValue);
				setLobeWires(lobeWiresValue);
			}
			else if (String::equal(property.getName().getString(), "Removes"))
			{
				Uint32 removesValue;
				property.getValue().get(removesValue);
				setRemoves(removesValue);
			}
			else if (String::equal(property.getName().getString(), "Singles"))
			{
				Uint32 singlesValue;
				property.getValue().get(singlesValue);
				setSingles(singlesValue);
			}
			else if (String::equal(property.getName().getString(), "FrequencyErrors"))
			{
				Uint32 frequencyErrorsValue;
				property.getValue().get(frequencyErrorsValue);
				setFrequencyErrors(frequencyErrorsValue);
			}
	}
	return true;
}

Uint32 UNIX_TokenRingPortStatistics::invokeResetSelectedStats(
		Array<String> &inSelectedStatistics
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ResetSelectedStats */
	
	
	
	return returnValue;
}


Boolean UNIX_TokenRingPortStatistics::initialize()
{
	return false;
}

Boolean UNIX_TokenRingPortStatistics::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("TokenRingPortStatistics");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_bytesTransmitted = Uint64(0);
	_bytesReceived = Uint64(0);
	_packetsTransmitted = Uint64(0);
	_packetsReceived = Uint64(0);
	_burstErrors = Uint32(0);
	_aCErrors = Uint32(0);
	_abortTransErrors = Uint32(0);
	_internalErrors = Uint32(0);
	_lostFrameErrors = Uint32(0);
	_receiveCongestions = Uint32(0);
	_frameCopiedErrors = Uint32(0);
	_tokenErrors = Uint32(0);
	_softErrors = Uint32(0);
	_hardErrors = Uint32(0);
	_signalLossCount = Uint32(0);
	_transmittedBeacons = Uint32(0);
	_recoverys = Uint32(0);
	_lobeWires = Uint32(0);
	_removes = Uint32(0);
	_singles = Uint32(0);
	_frequencyErrors = Uint32(0);
	
	return false;
}

Boolean UNIX_TokenRingPortStatistics::finalize()
{
	return false;
}


Boolean UNIX_TokenRingPortStatistics::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_TokenRingPortStatistics::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_TokenRingPortStatistics::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_TokenRingPortStatistics::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_TokenRingPortStatistics::validateInstance()
{
	return true;
}

