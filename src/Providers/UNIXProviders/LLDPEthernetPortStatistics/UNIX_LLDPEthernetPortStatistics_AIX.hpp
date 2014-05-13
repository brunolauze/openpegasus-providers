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


UNIX_LLDPEthernetPortStatistics::UNIX_LLDPEthernetPortStatistics(void)
{
}

UNIX_LLDPEthernetPortStatistics::~UNIX_LLDPEthernetPortStatistics(void)
{
}

Boolean UNIX_LLDPEthernetPortStatistics::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_LLDPEthernetPortStatistics::getInstanceID() const
{
	return _instanceID;
}

void UNIX_LLDPEthernetPortStatistics::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_LLDPEthernetPortStatistics::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_LLDPEthernetPortStatistics::getCaption() const
{
	return _caption;
}

void UNIX_LLDPEthernetPortStatistics::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_LLDPEthernetPortStatistics::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_LLDPEthernetPortStatistics::getDescription() const
{
	return _description;
}

void UNIX_LLDPEthernetPortStatistics::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_LLDPEthernetPortStatistics::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_LLDPEthernetPortStatistics::getElementName() const
{
	return _elementName;
}

void UNIX_LLDPEthernetPortStatistics::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_LLDPEthernetPortStatistics::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_LLDPEthernetPortStatistics::getGeneration() const
{
	return _generation;
}

void UNIX_LLDPEthernetPortStatistics::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_LLDPEthernetPortStatistics::getStartStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_STATISTIC_TIME, getStartStatisticTime());
	return true;
}

CIMDateTime UNIX_LLDPEthernetPortStatistics::getStartStatisticTime() const
{
	return _startStatisticTime;
}

void UNIX_LLDPEthernetPortStatistics::setStartStatisticTime(CIMDateTime &value)
{
	_startStatisticTime = value;
}

Boolean UNIX_LLDPEthernetPortStatistics::getStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATISTIC_TIME, getStatisticTime());
	return true;
}

CIMDateTime UNIX_LLDPEthernetPortStatistics::getStatisticTime() const
{
	return _statisticTime;
}

void UNIX_LLDPEthernetPortStatistics::setStatisticTime(CIMDateTime &value)
{
	_statisticTime = value;
}

Boolean UNIX_LLDPEthernetPortStatistics::getSampleInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SAMPLE_INTERVAL, getSampleInterval());
	return true;
}

CIMDateTime UNIX_LLDPEthernetPortStatistics::getSampleInterval() const
{
	return _sampleInterval;
}

void UNIX_LLDPEthernetPortStatistics::setSampleInterval(CIMDateTime &value)
{
	_sampleInterval = value;
}

Boolean UNIX_LLDPEthernetPortStatistics::getRateIntervalEndTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_END_TIME, getRateIntervalEndTime());
	return true;
}

CIMDateTime UNIX_LLDPEthernetPortStatistics::getRateIntervalEndTime() const
{
	return _rateIntervalEndTime;
}

void UNIX_LLDPEthernetPortStatistics::setRateIntervalEndTime(CIMDateTime &value)
{
	_rateIntervalEndTime = value;
}

Boolean UNIX_LLDPEthernetPortStatistics::getRateIntervalStartTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_START_TIME, getRateIntervalStartTime());
	return true;
}

CIMDateTime UNIX_LLDPEthernetPortStatistics::getRateIntervalStartTime() const
{
	return _rateIntervalStartTime;
}

void UNIX_LLDPEthernetPortStatistics::setRateIntervalStartTime(CIMDateTime &value)
{
	_rateIntervalStartTime = value;
}

Boolean UNIX_LLDPEthernetPortStatistics::getBytesTransmitted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BYTES_TRANSMITTED, getBytesTransmitted());
	return true;
}

Uint64 UNIX_LLDPEthernetPortStatistics::getBytesTransmitted() const
{
	return _bytesTransmitted;
}

void UNIX_LLDPEthernetPortStatistics::setBytesTransmitted(Uint64 &value)
{
	_bytesTransmitted = value;
}

Boolean UNIX_LLDPEthernetPortStatistics::getBytesReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BYTES_RECEIVED, getBytesReceived());
	return true;
}

Uint64 UNIX_LLDPEthernetPortStatistics::getBytesReceived() const
{
	return _bytesReceived;
}

void UNIX_LLDPEthernetPortStatistics::setBytesReceived(Uint64 &value)
{
	_bytesReceived = value;
}

Boolean UNIX_LLDPEthernetPortStatistics::getPacketsTransmitted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKETS_TRANSMITTED, getPacketsTransmitted());
	return true;
}

Uint64 UNIX_LLDPEthernetPortStatistics::getPacketsTransmitted() const
{
	return _packetsTransmitted;
}

void UNIX_LLDPEthernetPortStatistics::setPacketsTransmitted(Uint64 &value)
{
	_packetsTransmitted = value;
}

Boolean UNIX_LLDPEthernetPortStatistics::getPacketsReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKETS_RECEIVED, getPacketsReceived());
	return true;
}

Uint64 UNIX_LLDPEthernetPortStatistics::getPacketsReceived() const
{
	return _packetsReceived;
}

void UNIX_LLDPEthernetPortStatistics::setPacketsReceived(Uint64 &value)
{
	_packetsReceived = value;
}

Boolean UNIX_LLDPEthernetPortStatistics::getSymbolErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYMBOL_ERRORS, getSymbolErrors());
	return true;
}

Uint32 UNIX_LLDPEthernetPortStatistics::getSymbolErrors() const
{
	return _symbolErrors;
}

void UNIX_LLDPEthernetPortStatistics::setSymbolErrors(Uint32 &value)
{
	_symbolErrors = value;
}

Boolean UNIX_LLDPEthernetPortStatistics::getAlignmentErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALIGNMENT_ERRORS, getAlignmentErrors());
	return true;
}

Uint32 UNIX_LLDPEthernetPortStatistics::getAlignmentErrors() const
{
	return _alignmentErrors;
}

void UNIX_LLDPEthernetPortStatistics::setAlignmentErrors(Uint32 &value)
{
	_alignmentErrors = value;
}

Boolean UNIX_LLDPEthernetPortStatistics::getFCSErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FCS_ERRORS, getFCSErrors());
	return true;
}

Uint32 UNIX_LLDPEthernetPortStatistics::getFCSErrors() const
{
	return _fCSErrors;
}

void UNIX_LLDPEthernetPortStatistics::setFCSErrors(Uint32 &value)
{
	_fCSErrors = value;
}

Boolean UNIX_LLDPEthernetPortStatistics::getSingleCollisionFrames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SINGLE_COLLISION_FRAMES, getSingleCollisionFrames());
	return true;
}

Uint32 UNIX_LLDPEthernetPortStatistics::getSingleCollisionFrames() const
{
	return _singleCollisionFrames;
}

void UNIX_LLDPEthernetPortStatistics::setSingleCollisionFrames(Uint32 &value)
{
	_singleCollisionFrames = value;
}

Boolean UNIX_LLDPEthernetPortStatistics::getMultipleCollisionFrames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MULTIPLE_COLLISION_FRAMES, getMultipleCollisionFrames());
	return true;
}

Uint32 UNIX_LLDPEthernetPortStatistics::getMultipleCollisionFrames() const
{
	return _multipleCollisionFrames;
}

void UNIX_LLDPEthernetPortStatistics::setMultipleCollisionFrames(Uint32 &value)
{
	_multipleCollisionFrames = value;
}

Boolean UNIX_LLDPEthernetPortStatistics::getSQETestErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_Q_E_TEST_ERRORS, getSQETestErrors());
	return true;
}

Uint32 UNIX_LLDPEthernetPortStatistics::getSQETestErrors() const
{
	return _sQETestErrors;
}

void UNIX_LLDPEthernetPortStatistics::setSQETestErrors(Uint32 &value)
{
	_sQETestErrors = value;
}

Boolean UNIX_LLDPEthernetPortStatistics::getDeferredTransmissions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEFERRED_TRANSMISSIONS, getDeferredTransmissions());
	return true;
}

Uint32 UNIX_LLDPEthernetPortStatistics::getDeferredTransmissions() const
{
	return _deferredTransmissions;
}

void UNIX_LLDPEthernetPortStatistics::setDeferredTransmissions(Uint32 &value)
{
	_deferredTransmissions = value;
}

Boolean UNIX_LLDPEthernetPortStatistics::getLateCollisions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LATE_COLLISIONS, getLateCollisions());
	return true;
}

Uint32 UNIX_LLDPEthernetPortStatistics::getLateCollisions() const
{
	return _lateCollisions;
}

void UNIX_LLDPEthernetPortStatistics::setLateCollisions(Uint32 &value)
{
	_lateCollisions = value;
}

Boolean UNIX_LLDPEthernetPortStatistics::getExcessiveCollisions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXCESSIVE_COLLISIONS, getExcessiveCollisions());
	return true;
}

Uint32 UNIX_LLDPEthernetPortStatistics::getExcessiveCollisions() const
{
	return _excessiveCollisions;
}

void UNIX_LLDPEthernetPortStatistics::setExcessiveCollisions(Uint32 &value)
{
	_excessiveCollisions = value;
}

Boolean UNIX_LLDPEthernetPortStatistics::getInternalMACTransmitErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INTERNAL_M_A_C_TRANSMIT_ERRORS, getInternalMACTransmitErrors());
	return true;
}

Uint32 UNIX_LLDPEthernetPortStatistics::getInternalMACTransmitErrors() const
{
	return _internalMACTransmitErrors;
}

void UNIX_LLDPEthernetPortStatistics::setInternalMACTransmitErrors(Uint32 &value)
{
	_internalMACTransmitErrors = value;
}

Boolean UNIX_LLDPEthernetPortStatistics::getInternalMACReceiveErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INTERNAL_M_A_C_RECEIVE_ERRORS, getInternalMACReceiveErrors());
	return true;
}

Uint32 UNIX_LLDPEthernetPortStatistics::getInternalMACReceiveErrors() const
{
	return _internalMACReceiveErrors;
}

void UNIX_LLDPEthernetPortStatistics::setInternalMACReceiveErrors(Uint32 &value)
{
	_internalMACReceiveErrors = value;
}

Boolean UNIX_LLDPEthernetPortStatistics::getCarrierSenseErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CARRIER_SENSE_ERRORS, getCarrierSenseErrors());
	return true;
}

Uint32 UNIX_LLDPEthernetPortStatistics::getCarrierSenseErrors() const
{
	return _carrierSenseErrors;
}

void UNIX_LLDPEthernetPortStatistics::setCarrierSenseErrors(Uint32 &value)
{
	_carrierSenseErrors = value;
}

Boolean UNIX_LLDPEthernetPortStatistics::getFrameTooLongs(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FRAME_TOO_LONGS, getFrameTooLongs());
	return true;
}

Uint32 UNIX_LLDPEthernetPortStatistics::getFrameTooLongs() const
{
	return _frameTooLongs;
}

void UNIX_LLDPEthernetPortStatistics::setFrameTooLongs(Uint32 &value)
{
	_frameTooLongs = value;
}

Boolean UNIX_LLDPEthernetPortStatistics::getTxDestMACAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TX_DEST_M_A_C_ADDRESS, getTxDestMACAddress());
	return true;
}

Array<String> UNIX_LLDPEthernetPortStatistics::getTxDestMACAddress() const
{
	return _txDestMACAddress;
}

void UNIX_LLDPEthernetPortStatistics::setTxDestMACAddress(Array<String> &value)
{
	_txDestMACAddress = value;
}

Boolean UNIX_LLDPEthernetPortStatistics::getTxPortFramesTotal(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TX_PORT_FRAMES_TOTAL, getTxPortFramesTotal());
	return true;
}

Array<Uint32> UNIX_LLDPEthernetPortStatistics::getTxPortFramesTotal() const
{
	return _txPortFramesTotal;
}

void UNIX_LLDPEthernetPortStatistics::setTxPortFramesTotal(Array<Uint32> &value)
{
	_txPortFramesTotal = value;
}

Boolean UNIX_LLDPEthernetPortStatistics::getTxLLDPDULengthErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TX_LLDP_D_U_LENGTH_ERRORS, getTxLLDPDULengthErrors());
	return true;
}

Array<Uint32> UNIX_LLDPEthernetPortStatistics::getTxLLDPDULengthErrors() const
{
	return _txLLDPDULengthErrors;
}

void UNIX_LLDPEthernetPortStatistics::setTxLLDPDULengthErrors(Array<Uint32> &value)
{
	_txLLDPDULengthErrors = value;
}

Boolean UNIX_LLDPEthernetPortStatistics::getRxDestMACAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RX_DEST_M_A_C_ADDRESS, getRxDestMACAddress());
	return true;
}

Array<String> UNIX_LLDPEthernetPortStatistics::getRxDestMACAddress() const
{
	return _rxDestMACAddress;
}

void UNIX_LLDPEthernetPortStatistics::setRxDestMACAddress(Array<String> &value)
{
	_rxDestMACAddress = value;
}

Boolean UNIX_LLDPEthernetPortStatistics::getRxPortFramesDiscardedTotal(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RX_PORT_FRAMES_DISCARDED_TOTAL, getRxPortFramesDiscardedTotal());
	return true;
}

Array<Uint32> UNIX_LLDPEthernetPortStatistics::getRxPortFramesDiscardedTotal() const
{
	return _rxPortFramesDiscardedTotal;
}

void UNIX_LLDPEthernetPortStatistics::setRxPortFramesDiscardedTotal(Array<Uint32> &value)
{
	_rxPortFramesDiscardedTotal = value;
}

Boolean UNIX_LLDPEthernetPortStatistics::getRxPortFramesErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RX_PORT_FRAMES_ERRORS, getRxPortFramesErrors());
	return true;
}

Array<Uint32> UNIX_LLDPEthernetPortStatistics::getRxPortFramesErrors() const
{
	return _rxPortFramesErrors;
}

void UNIX_LLDPEthernetPortStatistics::setRxPortFramesErrors(Array<Uint32> &value)
{
	_rxPortFramesErrors = value;
}

Boolean UNIX_LLDPEthernetPortStatistics::getRxPortTLVsDiscardedTotal(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RX_PORT_T_L_VS_DISCARDED_TOTAL, getRxPortTLVsDiscardedTotal());
	return true;
}

Array<Uint32> UNIX_LLDPEthernetPortStatistics::getRxPortTLVsDiscardedTotal() const
{
	return _rxPortTLVsDiscardedTotal;
}

void UNIX_LLDPEthernetPortStatistics::setRxPortTLVsDiscardedTotal(Array<Uint32> &value)
{
	_rxPortTLVsDiscardedTotal = value;
}

Boolean UNIX_LLDPEthernetPortStatistics::getRxPortTLVsUnrecognizedTotal(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RX_PORT_T_L_VS_UNRECOGNIZED_TOTAL, getRxPortTLVsUnrecognizedTotal());
	return true;
}

Array<Uint32> UNIX_LLDPEthernetPortStatistics::getRxPortTLVsUnrecognizedTotal() const
{
	return _rxPortTLVsUnrecognizedTotal;
}

void UNIX_LLDPEthernetPortStatistics::setRxPortTLVsUnrecognizedTotal(Array<Uint32> &value)
{
	_rxPortTLVsUnrecognizedTotal = value;
}

Boolean UNIX_LLDPEthernetPortStatistics::getRxPortAgeoutsTotal(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RX_PORT_AGEOUTS_TOTAL, getRxPortAgeoutsTotal());
	return true;
}

Array<Uint32> UNIX_LLDPEthernetPortStatistics::getRxPortAgeoutsTotal() const
{
	return _rxPortAgeoutsTotal;
}

void UNIX_LLDPEthernetPortStatistics::setRxPortAgeoutsTotal(Array<Uint32> &value)
{
	_rxPortAgeoutsTotal = value;
}


void UNIX_LLDPEthernetPortStatistics::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("LLDPEthernetPortStatistics");
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
	_txDestMACAddress.clear();
	_txPortFramesTotal.clear();
	_txLLDPDULengthErrors.clear();
	_rxDestMACAddress.clear();
	_rxPortFramesDiscardedTotal.clear();
	_rxPortFramesErrors.clear();
	_rxPortTLVsDiscardedTotal.clear();
	_rxPortTLVsUnrecognizedTotal.clear();
	_rxPortAgeoutsTotal.clear();

}

Boolean UNIX_LLDPEthernetPortStatistics::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "TxDestMACAddress"))
			{
				Array<String> txDestMACAddressValue;
				property.getValue().get(txDestMACAddressValue);
				setTxDestMACAddress(txDestMACAddressValue);
			}
			else if (String::equal(property.getName().getString(), "TxPortFramesTotal"))
			{
				Array<Uint32> txPortFramesTotalValue;
				property.getValue().get(txPortFramesTotalValue);
				setTxPortFramesTotal(txPortFramesTotalValue);
			}
			else if (String::equal(property.getName().getString(), "TxLLDPDULengthErrors"))
			{
				Array<Uint32> txLLDPDULengthErrorsValue;
				property.getValue().get(txLLDPDULengthErrorsValue);
				setTxLLDPDULengthErrors(txLLDPDULengthErrorsValue);
			}
			else if (String::equal(property.getName().getString(), "RxDestMACAddress"))
			{
				Array<String> rxDestMACAddressValue;
				property.getValue().get(rxDestMACAddressValue);
				setRxDestMACAddress(rxDestMACAddressValue);
			}
			else if (String::equal(property.getName().getString(), "RxPortFramesDiscardedTotal"))
			{
				Array<Uint32> rxPortFramesDiscardedTotalValue;
				property.getValue().get(rxPortFramesDiscardedTotalValue);
				setRxPortFramesDiscardedTotal(rxPortFramesDiscardedTotalValue);
			}
			else if (String::equal(property.getName().getString(), "RxPortFramesErrors"))
			{
				Array<Uint32> rxPortFramesErrorsValue;
				property.getValue().get(rxPortFramesErrorsValue);
				setRxPortFramesErrors(rxPortFramesErrorsValue);
			}
			else if (String::equal(property.getName().getString(), "RxPortTLVsDiscardedTotal"))
			{
				Array<Uint32> rxPortTLVsDiscardedTotalValue;
				property.getValue().get(rxPortTLVsDiscardedTotalValue);
				setRxPortTLVsDiscardedTotal(rxPortTLVsDiscardedTotalValue);
			}
			else if (String::equal(property.getName().getString(), "RxPortTLVsUnrecognizedTotal"))
			{
				Array<Uint32> rxPortTLVsUnrecognizedTotalValue;
				property.getValue().get(rxPortTLVsUnrecognizedTotalValue);
				setRxPortTLVsUnrecognizedTotal(rxPortTLVsUnrecognizedTotalValue);
			}
			else if (String::equal(property.getName().getString(), "RxPortAgeoutsTotal"))
			{
				Array<Uint32> rxPortAgeoutsTotalValue;
				property.getValue().get(rxPortAgeoutsTotalValue);
				setRxPortAgeoutsTotal(rxPortAgeoutsTotalValue);
			}
	}
	return true;
}

Uint32 UNIX_LLDPEthernetPortStatistics::invokeResetSelectedStats(
		Array<String> &inSelectedStatistics
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ResetSelectedStats */
	
	
	
	return returnValue;
}


Boolean UNIX_LLDPEthernetPortStatistics::initialize()
{
	return false;
}

Boolean UNIX_LLDPEthernetPortStatistics::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("LLDPEthernetPortStatistics");
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
	_txDestMACAddress.clear();
	_txPortFramesTotal.clear();
	_txLLDPDULengthErrors.clear();
	_rxDestMACAddress.clear();
	_rxPortFramesDiscardedTotal.clear();
	_rxPortFramesErrors.clear();
	_rxPortTLVsDiscardedTotal.clear();
	_rxPortTLVsUnrecognizedTotal.clear();
	_rxPortAgeoutsTotal.clear();
	
	return false;
}

Boolean UNIX_LLDPEthernetPortStatistics::finalize()
{
	return false;
}


Boolean UNIX_LLDPEthernetPortStatistics::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_LLDPEthernetPortStatistics::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_LLDPEthernetPortStatistics::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_LLDPEthernetPortStatistics::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_LLDPEthernetPortStatistics::validateInstance()
{
	return true;
}

