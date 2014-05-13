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


UNIX_EthernetPortStatistics::UNIX_EthernetPortStatistics(void)
{
}

UNIX_EthernetPortStatistics::~UNIX_EthernetPortStatistics(void)
{
}

Boolean UNIX_EthernetPortStatistics::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_EthernetPortStatistics::getInstanceID() const
{
	return _instanceID;
}

void UNIX_EthernetPortStatistics::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_EthernetPortStatistics::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_EthernetPortStatistics::getCaption() const
{
	return _caption;
}

void UNIX_EthernetPortStatistics::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_EthernetPortStatistics::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_EthernetPortStatistics::getDescription() const
{
	return _description;
}

void UNIX_EthernetPortStatistics::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_EthernetPortStatistics::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_EthernetPortStatistics::getElementName() const
{
	return _elementName;
}

void UNIX_EthernetPortStatistics::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_EthernetPortStatistics::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_EthernetPortStatistics::getGeneration() const
{
	return _generation;
}

void UNIX_EthernetPortStatistics::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_EthernetPortStatistics::getStartStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_STATISTIC_TIME, getStartStatisticTime());
	return true;
}

CIMDateTime UNIX_EthernetPortStatistics::getStartStatisticTime() const
{
	return _startStatisticTime;
}

void UNIX_EthernetPortStatistics::setStartStatisticTime(CIMDateTime &value)
{
	_startStatisticTime = value;
}

Boolean UNIX_EthernetPortStatistics::getStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATISTIC_TIME, getStatisticTime());
	return true;
}

CIMDateTime UNIX_EthernetPortStatistics::getStatisticTime() const
{
	return _statisticTime;
}

void UNIX_EthernetPortStatistics::setStatisticTime(CIMDateTime &value)
{
	_statisticTime = value;
}

Boolean UNIX_EthernetPortStatistics::getSampleInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SAMPLE_INTERVAL, getSampleInterval());
	return true;
}

CIMDateTime UNIX_EthernetPortStatistics::getSampleInterval() const
{
	return _sampleInterval;
}

void UNIX_EthernetPortStatistics::setSampleInterval(CIMDateTime &value)
{
	_sampleInterval = value;
}

Boolean UNIX_EthernetPortStatistics::getRateIntervalEndTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_END_TIME, getRateIntervalEndTime());
	return true;
}

CIMDateTime UNIX_EthernetPortStatistics::getRateIntervalEndTime() const
{
	return _rateIntervalEndTime;
}

void UNIX_EthernetPortStatistics::setRateIntervalEndTime(CIMDateTime &value)
{
	_rateIntervalEndTime = value;
}

Boolean UNIX_EthernetPortStatistics::getRateIntervalStartTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_START_TIME, getRateIntervalStartTime());
	return true;
}

CIMDateTime UNIX_EthernetPortStatistics::getRateIntervalStartTime() const
{
	return _rateIntervalStartTime;
}

void UNIX_EthernetPortStatistics::setRateIntervalStartTime(CIMDateTime &value)
{
	_rateIntervalStartTime = value;
}

Boolean UNIX_EthernetPortStatistics::getBytesTransmitted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BYTES_TRANSMITTED, getBytesTransmitted());
	return true;
}

Uint64 UNIX_EthernetPortStatistics::getBytesTransmitted() const
{
	return _bytesTransmitted;
}

void UNIX_EthernetPortStatistics::setBytesTransmitted(Uint64 &value)
{
	_bytesTransmitted = value;
}

Boolean UNIX_EthernetPortStatistics::getBytesReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BYTES_RECEIVED, getBytesReceived());
	return true;
}

Uint64 UNIX_EthernetPortStatistics::getBytesReceived() const
{
	return _bytesReceived;
}

void UNIX_EthernetPortStatistics::setBytesReceived(Uint64 &value)
{
	_bytesReceived = value;
}

Boolean UNIX_EthernetPortStatistics::getPacketsTransmitted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKETS_TRANSMITTED, getPacketsTransmitted());
	return true;
}

Uint64 UNIX_EthernetPortStatistics::getPacketsTransmitted() const
{
	return _packetsTransmitted;
}

void UNIX_EthernetPortStatistics::setPacketsTransmitted(Uint64 &value)
{
	_packetsTransmitted = value;
}

Boolean UNIX_EthernetPortStatistics::getPacketsReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKETS_RECEIVED, getPacketsReceived());
	return true;
}

Uint64 UNIX_EthernetPortStatistics::getPacketsReceived() const
{
	return _packetsReceived;
}

void UNIX_EthernetPortStatistics::setPacketsReceived(Uint64 &value)
{
	_packetsReceived = value;
}

Boolean UNIX_EthernetPortStatistics::getSymbolErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYMBOL_ERRORS, getSymbolErrors());
	return true;
}

Uint32 UNIX_EthernetPortStatistics::getSymbolErrors() const
{
	return _symbolErrors;
}

void UNIX_EthernetPortStatistics::setSymbolErrors(Uint32 &value)
{
	_symbolErrors = value;
}

Boolean UNIX_EthernetPortStatistics::getAlignmentErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALIGNMENT_ERRORS, getAlignmentErrors());
	return true;
}

Uint32 UNIX_EthernetPortStatistics::getAlignmentErrors() const
{
	return _alignmentErrors;
}

void UNIX_EthernetPortStatistics::setAlignmentErrors(Uint32 &value)
{
	_alignmentErrors = value;
}

Boolean UNIX_EthernetPortStatistics::getFCSErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FCS_ERRORS, getFCSErrors());
	return true;
}

Uint32 UNIX_EthernetPortStatistics::getFCSErrors() const
{
	return _fCSErrors;
}

void UNIX_EthernetPortStatistics::setFCSErrors(Uint32 &value)
{
	_fCSErrors = value;
}

Boolean UNIX_EthernetPortStatistics::getSingleCollisionFrames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SINGLE_COLLISION_FRAMES, getSingleCollisionFrames());
	return true;
}

Uint32 UNIX_EthernetPortStatistics::getSingleCollisionFrames() const
{
	return _singleCollisionFrames;
}

void UNIX_EthernetPortStatistics::setSingleCollisionFrames(Uint32 &value)
{
	_singleCollisionFrames = value;
}

Boolean UNIX_EthernetPortStatistics::getMultipleCollisionFrames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MULTIPLE_COLLISION_FRAMES, getMultipleCollisionFrames());
	return true;
}

Uint32 UNIX_EthernetPortStatistics::getMultipleCollisionFrames() const
{
	return _multipleCollisionFrames;
}

void UNIX_EthernetPortStatistics::setMultipleCollisionFrames(Uint32 &value)
{
	_multipleCollisionFrames = value;
}

Boolean UNIX_EthernetPortStatistics::getSQETestErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_Q_E_TEST_ERRORS, getSQETestErrors());
	return true;
}

Uint32 UNIX_EthernetPortStatistics::getSQETestErrors() const
{
	return _sQETestErrors;
}

void UNIX_EthernetPortStatistics::setSQETestErrors(Uint32 &value)
{
	_sQETestErrors = value;
}

Boolean UNIX_EthernetPortStatistics::getDeferredTransmissions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEFERRED_TRANSMISSIONS, getDeferredTransmissions());
	return true;
}

Uint32 UNIX_EthernetPortStatistics::getDeferredTransmissions() const
{
	return _deferredTransmissions;
}

void UNIX_EthernetPortStatistics::setDeferredTransmissions(Uint32 &value)
{
	_deferredTransmissions = value;
}

Boolean UNIX_EthernetPortStatistics::getLateCollisions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LATE_COLLISIONS, getLateCollisions());
	return true;
}

Uint32 UNIX_EthernetPortStatistics::getLateCollisions() const
{
	return _lateCollisions;
}

void UNIX_EthernetPortStatistics::setLateCollisions(Uint32 &value)
{
	_lateCollisions = value;
}

Boolean UNIX_EthernetPortStatistics::getExcessiveCollisions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXCESSIVE_COLLISIONS, getExcessiveCollisions());
	return true;
}

Uint32 UNIX_EthernetPortStatistics::getExcessiveCollisions() const
{
	return _excessiveCollisions;
}

void UNIX_EthernetPortStatistics::setExcessiveCollisions(Uint32 &value)
{
	_excessiveCollisions = value;
}

Boolean UNIX_EthernetPortStatistics::getInternalMACTransmitErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INTERNAL_M_A_C_TRANSMIT_ERRORS, getInternalMACTransmitErrors());
	return true;
}

Uint32 UNIX_EthernetPortStatistics::getInternalMACTransmitErrors() const
{
	return _internalMACTransmitErrors;
}

void UNIX_EthernetPortStatistics::setInternalMACTransmitErrors(Uint32 &value)
{
	_internalMACTransmitErrors = value;
}

Boolean UNIX_EthernetPortStatistics::getInternalMACReceiveErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INTERNAL_M_A_C_RECEIVE_ERRORS, getInternalMACReceiveErrors());
	return true;
}

Uint32 UNIX_EthernetPortStatistics::getInternalMACReceiveErrors() const
{
	return _internalMACReceiveErrors;
}

void UNIX_EthernetPortStatistics::setInternalMACReceiveErrors(Uint32 &value)
{
	_internalMACReceiveErrors = value;
}

Boolean UNIX_EthernetPortStatistics::getCarrierSenseErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CARRIER_SENSE_ERRORS, getCarrierSenseErrors());
	return true;
}

Uint32 UNIX_EthernetPortStatistics::getCarrierSenseErrors() const
{
	return _carrierSenseErrors;
}

void UNIX_EthernetPortStatistics::setCarrierSenseErrors(Uint32 &value)
{
	_carrierSenseErrors = value;
}

Boolean UNIX_EthernetPortStatistics::getFrameTooLongs(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FRAME_TOO_LONGS, getFrameTooLongs());
	return true;
}

Uint32 UNIX_EthernetPortStatistics::getFrameTooLongs() const
{
	return _frameTooLongs;
}

void UNIX_EthernetPortStatistics::setFrameTooLongs(Uint32 &value)
{
	_frameTooLongs = value;
}


void UNIX_EthernetPortStatistics::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("EthernetPortStatistics");
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
	_symbolErrors = Uint32(0);
	_alignmentErrors = Uint32(0);
	_fCSErrors = Uint32(0);
	_singleCollisionFrames = Uint32(0);
	_multipleCollisionFrames = Uint32(0);
	_sQETestErrors = Uint32(0);
	_deferredTransmissions = Uint32(0);
	_lateCollisions = Uint32(0);
	_excessiveCollisions = Uint32(0);
	_internalMACTransmitErrors = Uint32(0);
	_internalMACReceiveErrors = Uint32(0);
	_carrierSenseErrors = Uint32(0);
	_frameTooLongs = Uint32(0);

}

Boolean UNIX_EthernetPortStatistics::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "SymbolErrors"))
			{
				Uint32 symbolErrorsValue;
				property.getValue().get(symbolErrorsValue);
				setSymbolErrors(symbolErrorsValue);
			}
			else if (String::equal(property.getName().getString(), "AlignmentErrors"))
			{
				Uint32 alignmentErrorsValue;
				property.getValue().get(alignmentErrorsValue);
				setAlignmentErrors(alignmentErrorsValue);
			}
			else if (String::equal(property.getName().getString(), "FCSErrors"))
			{
				Uint32 fCSErrorsValue;
				property.getValue().get(fCSErrorsValue);
				setFCSErrors(fCSErrorsValue);
			}
			else if (String::equal(property.getName().getString(), "SingleCollisionFrames"))
			{
				Uint32 singleCollisionFramesValue;
				property.getValue().get(singleCollisionFramesValue);
				setSingleCollisionFrames(singleCollisionFramesValue);
			}
			else if (String::equal(property.getName().getString(), "MultipleCollisionFrames"))
			{
				Uint32 multipleCollisionFramesValue;
				property.getValue().get(multipleCollisionFramesValue);
				setMultipleCollisionFrames(multipleCollisionFramesValue);
			}
			else if (String::equal(property.getName().getString(), "SQETestErrors"))
			{
				Uint32 sQETestErrorsValue;
				property.getValue().get(sQETestErrorsValue);
				setSQETestErrors(sQETestErrorsValue);
			}
			else if (String::equal(property.getName().getString(), "DeferredTransmissions"))
			{
				Uint32 deferredTransmissionsValue;
				property.getValue().get(deferredTransmissionsValue);
				setDeferredTransmissions(deferredTransmissionsValue);
			}
			else if (String::equal(property.getName().getString(), "LateCollisions"))
			{
				Uint32 lateCollisionsValue;
				property.getValue().get(lateCollisionsValue);
				setLateCollisions(lateCollisionsValue);
			}
			else if (String::equal(property.getName().getString(), "ExcessiveCollisions"))
			{
				Uint32 excessiveCollisionsValue;
				property.getValue().get(excessiveCollisionsValue);
				setExcessiveCollisions(excessiveCollisionsValue);
			}
			else if (String::equal(property.getName().getString(), "InternalMACTransmitErrors"))
			{
				Uint32 internalMACTransmitErrorsValue;
				property.getValue().get(internalMACTransmitErrorsValue);
				setInternalMACTransmitErrors(internalMACTransmitErrorsValue);
			}
			else if (String::equal(property.getName().getString(), "InternalMACReceiveErrors"))
			{
				Uint32 internalMACReceiveErrorsValue;
				property.getValue().get(internalMACReceiveErrorsValue);
				setInternalMACReceiveErrors(internalMACReceiveErrorsValue);
			}
			else if (String::equal(property.getName().getString(), "CarrierSenseErrors"))
			{
				Uint32 carrierSenseErrorsValue;
				property.getValue().get(carrierSenseErrorsValue);
				setCarrierSenseErrors(carrierSenseErrorsValue);
			}
			else if (String::equal(property.getName().getString(), "FrameTooLongs"))
			{
				Uint32 frameTooLongsValue;
				property.getValue().get(frameTooLongsValue);
				setFrameTooLongs(frameTooLongsValue);
			}
	}
	return true;
}

Uint32 UNIX_EthernetPortStatistics::invokeResetSelectedStats(
		Array<String> &inSelectedStatistics
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ResetSelectedStats */
	
	
	
	return returnValue;
}


Boolean UNIX_EthernetPortStatistics::initialize()
{
	return false;
}

Boolean UNIX_EthernetPortStatistics::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("EthernetPortStatistics");
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
	_symbolErrors = Uint32(0);
	_alignmentErrors = Uint32(0);
	_fCSErrors = Uint32(0);
	_singleCollisionFrames = Uint32(0);
	_multipleCollisionFrames = Uint32(0);
	_sQETestErrors = Uint32(0);
	_deferredTransmissions = Uint32(0);
	_lateCollisions = Uint32(0);
	_excessiveCollisions = Uint32(0);
	_internalMACTransmitErrors = Uint32(0);
	_internalMACReceiveErrors = Uint32(0);
	_carrierSenseErrors = Uint32(0);
	_frameTooLongs = Uint32(0);
	
	return false;
}

Boolean UNIX_EthernetPortStatistics::finalize()
{
	return false;
}


Boolean UNIX_EthernetPortStatistics::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_EthernetPortStatistics::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_EthernetPortStatistics::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_EthernetPortStatistics::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_EthernetPortStatistics::validateInstance()
{
	return true;
}

