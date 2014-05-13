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


UNIX_FCPortStatistics::UNIX_FCPortStatistics(void)
{
}

UNIX_FCPortStatistics::~UNIX_FCPortStatistics(void)
{
}

Boolean UNIX_FCPortStatistics::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_FCPortStatistics::getInstanceID() const
{
	return _instanceID;
}

void UNIX_FCPortStatistics::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_FCPortStatistics::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_FCPortStatistics::getCaption() const
{
	return _caption;
}

void UNIX_FCPortStatistics::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_FCPortStatistics::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_FCPortStatistics::getDescription() const
{
	return _description;
}

void UNIX_FCPortStatistics::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_FCPortStatistics::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_FCPortStatistics::getElementName() const
{
	return _elementName;
}

void UNIX_FCPortStatistics::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_FCPortStatistics::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_FCPortStatistics::getGeneration() const
{
	return _generation;
}

void UNIX_FCPortStatistics::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_FCPortStatistics::getStartStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_STATISTIC_TIME, getStartStatisticTime());
	return true;
}

CIMDateTime UNIX_FCPortStatistics::getStartStatisticTime() const
{
	return _startStatisticTime;
}

void UNIX_FCPortStatistics::setStartStatisticTime(CIMDateTime &value)
{
	_startStatisticTime = value;
}

Boolean UNIX_FCPortStatistics::getStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATISTIC_TIME, getStatisticTime());
	return true;
}

CIMDateTime UNIX_FCPortStatistics::getStatisticTime() const
{
	return _statisticTime;
}

void UNIX_FCPortStatistics::setStatisticTime(CIMDateTime &value)
{
	_statisticTime = value;
}

Boolean UNIX_FCPortStatistics::getSampleInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SAMPLE_INTERVAL, getSampleInterval());
	return true;
}

CIMDateTime UNIX_FCPortStatistics::getSampleInterval() const
{
	return _sampleInterval;
}

void UNIX_FCPortStatistics::setSampleInterval(CIMDateTime &value)
{
	_sampleInterval = value;
}

Boolean UNIX_FCPortStatistics::getRateIntervalEndTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_END_TIME, getRateIntervalEndTime());
	return true;
}

CIMDateTime UNIX_FCPortStatistics::getRateIntervalEndTime() const
{
	return _rateIntervalEndTime;
}

void UNIX_FCPortStatistics::setRateIntervalEndTime(CIMDateTime &value)
{
	_rateIntervalEndTime = value;
}

Boolean UNIX_FCPortStatistics::getRateIntervalStartTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_START_TIME, getRateIntervalStartTime());
	return true;
}

CIMDateTime UNIX_FCPortStatistics::getRateIntervalStartTime() const
{
	return _rateIntervalStartTime;
}

void UNIX_FCPortStatistics::setRateIntervalStartTime(CIMDateTime &value)
{
	_rateIntervalStartTime = value;
}

Boolean UNIX_FCPortStatistics::getBytesTransmitted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BYTES_TRANSMITTED, getBytesTransmitted());
	return true;
}

Uint64 UNIX_FCPortStatistics::getBytesTransmitted() const
{
	return _bytesTransmitted;
}

void UNIX_FCPortStatistics::setBytesTransmitted(Uint64 &value)
{
	_bytesTransmitted = value;
}

Boolean UNIX_FCPortStatistics::getBytesReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BYTES_RECEIVED, getBytesReceived());
	return true;
}

Uint64 UNIX_FCPortStatistics::getBytesReceived() const
{
	return _bytesReceived;
}

void UNIX_FCPortStatistics::setBytesReceived(Uint64 &value)
{
	_bytesReceived = value;
}

Boolean UNIX_FCPortStatistics::getPacketsTransmitted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKETS_TRANSMITTED, getPacketsTransmitted());
	return true;
}

Uint64 UNIX_FCPortStatistics::getPacketsTransmitted() const
{
	return _packetsTransmitted;
}

void UNIX_FCPortStatistics::setPacketsTransmitted(Uint64 &value)
{
	_packetsTransmitted = value;
}

Boolean UNIX_FCPortStatistics::getPacketsReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKETS_RECEIVED, getPacketsReceived());
	return true;
}

Uint64 UNIX_FCPortStatistics::getPacketsReceived() const
{
	return _packetsReceived;
}

void UNIX_FCPortStatistics::setPacketsReceived(Uint64 &value)
{
	_packetsReceived = value;
}

Boolean UNIX_FCPortStatistics::getLIPCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_L_IP_COUNT, getLIPCount());
	return true;
}

Uint64 UNIX_FCPortStatistics::getLIPCount() const
{
	return _lIPCount;
}

void UNIX_FCPortStatistics::setLIPCount(Uint64 &value)
{
	_lIPCount = value;
}

Boolean UNIX_FCPortStatistics::getNOSCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_N_OS_COUNT, getNOSCount());
	return true;
}

Uint64 UNIX_FCPortStatistics::getNOSCount() const
{
	return _nOSCount;
}

void UNIX_FCPortStatistics::setNOSCount(Uint64 &value)
{
	_nOSCount = value;
}

Boolean UNIX_FCPortStatistics::getErrorFrames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_FRAMES, getErrorFrames());
	return true;
}

Uint64 UNIX_FCPortStatistics::getErrorFrames() const
{
	return _errorFrames;
}

void UNIX_FCPortStatistics::setErrorFrames(Uint64 &value)
{
	_errorFrames = value;
}

Boolean UNIX_FCPortStatistics::getDumpedFrames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DUMPED_FRAMES, getDumpedFrames());
	return true;
}

Uint64 UNIX_FCPortStatistics::getDumpedFrames() const
{
	return _dumpedFrames;
}

void UNIX_FCPortStatistics::setDumpedFrames(Uint64 &value)
{
	_dumpedFrames = value;
}

Boolean UNIX_FCPortStatistics::getLinkFailures(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LINK_FAILURES, getLinkFailures());
	return true;
}

Uint64 UNIX_FCPortStatistics::getLinkFailures() const
{
	return _linkFailures;
}

void UNIX_FCPortStatistics::setLinkFailures(Uint64 &value)
{
	_linkFailures = value;
}

Boolean UNIX_FCPortStatistics::getLossOfSignalCounter(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOSS_OF_SIGNAL_COUNTER, getLossOfSignalCounter());
	return true;
}

Uint64 UNIX_FCPortStatistics::getLossOfSignalCounter() const
{
	return _lossOfSignalCounter;
}

void UNIX_FCPortStatistics::setLossOfSignalCounter(Uint64 &value)
{
	_lossOfSignalCounter = value;
}

Boolean UNIX_FCPortStatistics::getLossOfSyncCounter(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOSS_OF_SYNC_COUNTER, getLossOfSyncCounter());
	return true;
}

Uint64 UNIX_FCPortStatistics::getLossOfSyncCounter() const
{
	return _lossOfSyncCounter;
}

void UNIX_FCPortStatistics::setLossOfSyncCounter(Uint64 &value)
{
	_lossOfSyncCounter = value;
}

Boolean UNIX_FCPortStatistics::getPrimitiveSeqProtocolErrCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMITIVE_SEQ_PROTOCOL_ERR_COUNT, getPrimitiveSeqProtocolErrCount());
	return true;
}

Uint64 UNIX_FCPortStatistics::getPrimitiveSeqProtocolErrCount() const
{
	return _primitiveSeqProtocolErrCount;
}

void UNIX_FCPortStatistics::setPrimitiveSeqProtocolErrCount(Uint64 &value)
{
	_primitiveSeqProtocolErrCount = value;
}

Boolean UNIX_FCPortStatistics::getCRCErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_C_R_C_ERRORS, getCRCErrors());
	return true;
}

Uint64 UNIX_FCPortStatistics::getCRCErrors() const
{
	return _cRCErrors;
}

void UNIX_FCPortStatistics::setCRCErrors(Uint64 &value)
{
	_cRCErrors = value;
}

Boolean UNIX_FCPortStatistics::getInvalidTransmissionWords(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INVALID_TRANSMISSION_WORDS, getInvalidTransmissionWords());
	return true;
}

Uint64 UNIX_FCPortStatistics::getInvalidTransmissionWords() const
{
	return _invalidTransmissionWords;
}

void UNIX_FCPortStatistics::setInvalidTransmissionWords(Uint64 &value)
{
	_invalidTransmissionWords = value;
}

Boolean UNIX_FCPortStatistics::getFramesTooShort(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FRAMES_TOO_SHORT, getFramesTooShort());
	return true;
}

Uint64 UNIX_FCPortStatistics::getFramesTooShort() const
{
	return _framesTooShort;
}

void UNIX_FCPortStatistics::setFramesTooShort(Uint64 &value)
{
	_framesTooShort = value;
}

Boolean UNIX_FCPortStatistics::getFramesTooLong(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FRAMES_TOO_LONG, getFramesTooLong());
	return true;
}

Uint64 UNIX_FCPortStatistics::getFramesTooLong() const
{
	return _framesTooLong;
}

void UNIX_FCPortStatistics::setFramesTooLong(Uint64 &value)
{
	_framesTooLong = value;
}

Boolean UNIX_FCPortStatistics::getAddressErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESS_ERRORS, getAddressErrors());
	return true;
}

Uint64 UNIX_FCPortStatistics::getAddressErrors() const
{
	return _addressErrors;
}

void UNIX_FCPortStatistics::setAddressErrors(Uint64 &value)
{
	_addressErrors = value;
}

Boolean UNIX_FCPortStatistics::getBufferCreditNotProvided(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BUFFER_CREDIT_NOT_PROVIDED, getBufferCreditNotProvided());
	return true;
}

Uint64 UNIX_FCPortStatistics::getBufferCreditNotProvided() const
{
	return _bufferCreditNotProvided;
}

void UNIX_FCPortStatistics::setBufferCreditNotProvided(Uint64 &value)
{
	_bufferCreditNotProvided = value;
}

Boolean UNIX_FCPortStatistics::getBufferCreditNotReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BUFFER_CREDIT_NOT_RECEIVED, getBufferCreditNotReceived());
	return true;
}

Uint64 UNIX_FCPortStatistics::getBufferCreditNotReceived() const
{
	return _bufferCreditNotReceived;
}

void UNIX_FCPortStatistics::setBufferCreditNotReceived(Uint64 &value)
{
	_bufferCreditNotReceived = value;
}

Boolean UNIX_FCPortStatistics::getDelimiterErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELIMITER_ERRORS, getDelimiterErrors());
	return true;
}

Uint64 UNIX_FCPortStatistics::getDelimiterErrors() const
{
	return _delimiterErrors;
}

void UNIX_FCPortStatistics::setDelimiterErrors(Uint64 &value)
{
	_delimiterErrors = value;
}

Boolean UNIX_FCPortStatistics::getEncodingDisparityErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENCODING_DISPARITY_ERRORS, getEncodingDisparityErrors());
	return true;
}

Uint64 UNIX_FCPortStatistics::getEncodingDisparityErrors() const
{
	return _encodingDisparityErrors;
}

void UNIX_FCPortStatistics::setEncodingDisparityErrors(Uint64 &value)
{
	_encodingDisparityErrors = value;
}

Boolean UNIX_FCPortStatistics::getLinkResetsReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LINK_RESETS_RECEIVED, getLinkResetsReceived());
	return true;
}

Uint64 UNIX_FCPortStatistics::getLinkResetsReceived() const
{
	return _linkResetsReceived;
}

void UNIX_FCPortStatistics::setLinkResetsReceived(Uint64 &value)
{
	_linkResetsReceived = value;
}

Boolean UNIX_FCPortStatistics::getLinkResetsTransmitted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LINK_RESETS_TRANSMITTED, getLinkResetsTransmitted());
	return true;
}

Uint64 UNIX_FCPortStatistics::getLinkResetsTransmitted() const
{
	return _linkResetsTransmitted;
}

void UNIX_FCPortStatistics::setLinkResetsTransmitted(Uint64 &value)
{
	_linkResetsTransmitted = value;
}

Boolean UNIX_FCPortStatistics::getMulticastFramesReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MULTICAST_FRAMES_RECEIVED, getMulticastFramesReceived());
	return true;
}

Uint64 UNIX_FCPortStatistics::getMulticastFramesReceived() const
{
	return _multicastFramesReceived;
}

void UNIX_FCPortStatistics::setMulticastFramesReceived(Uint64 &value)
{
	_multicastFramesReceived = value;
}

Boolean UNIX_FCPortStatistics::getMulticastFramesTransmitted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MULTICAST_FRAMES_TRANSMITTED, getMulticastFramesTransmitted());
	return true;
}

Uint64 UNIX_FCPortStatistics::getMulticastFramesTransmitted() const
{
	return _multicastFramesTransmitted;
}

void UNIX_FCPortStatistics::setMulticastFramesTransmitted(Uint64 &value)
{
	_multicastFramesTransmitted = value;
}

Boolean UNIX_FCPortStatistics::getFBSYFrames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_F_B_S_Y_FRAMES, getFBSYFrames());
	return true;
}

Uint64 UNIX_FCPortStatistics::getFBSYFrames() const
{
	return _fBSYFrames;
}

void UNIX_FCPortStatistics::setFBSYFrames(Uint64 &value)
{
	_fBSYFrames = value;
}

Boolean UNIX_FCPortStatistics::getPBSYFrames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_P_B_S_Y_FRAMES, getPBSYFrames());
	return true;
}

Uint64 UNIX_FCPortStatistics::getPBSYFrames() const
{
	return _pBSYFrames;
}

void UNIX_FCPortStatistics::setPBSYFrames(Uint64 &value)
{
	_pBSYFrames = value;
}

Boolean UNIX_FCPortStatistics::getFRJTFrames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_F_R_J_T_FRAMES, getFRJTFrames());
	return true;
}

Uint64 UNIX_FCPortStatistics::getFRJTFrames() const
{
	return _fRJTFrames;
}

void UNIX_FCPortStatistics::setFRJTFrames(Uint64 &value)
{
	_fRJTFrames = value;
}

Boolean UNIX_FCPortStatistics::getPRJTFrames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_P_R_J_T_FRAMES, getPRJTFrames());
	return true;
}

Uint64 UNIX_FCPortStatistics::getPRJTFrames() const
{
	return _pRJTFrames;
}

void UNIX_FCPortStatistics::setPRJTFrames(Uint64 &value)
{
	_pRJTFrames = value;
}

Boolean UNIX_FCPortStatistics::getRXClass1Frames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_R_X_CLASS_1_FRAMES, getRXClass1Frames());
	return true;
}

Uint64 UNIX_FCPortStatistics::getRXClass1Frames() const
{
	return _rXClass1Frames;
}

void UNIX_FCPortStatistics::setRXClass1Frames(Uint64 &value)
{
	_rXClass1Frames = value;
}

Boolean UNIX_FCPortStatistics::getTXClass1Frames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_T_X_CLASS_1_FRAMES, getTXClass1Frames());
	return true;
}

Uint64 UNIX_FCPortStatistics::getTXClass1Frames() const
{
	return _tXClass1Frames;
}

void UNIX_FCPortStatistics::setTXClass1Frames(Uint64 &value)
{
	_tXClass1Frames = value;
}

Boolean UNIX_FCPortStatistics::getClass1FBSY(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASS_1_F_B_S_Y, getClass1FBSY());
	return true;
}

Uint64 UNIX_FCPortStatistics::getClass1FBSY() const
{
	return _class1FBSY;
}

void UNIX_FCPortStatistics::setClass1FBSY(Uint64 &value)
{
	_class1FBSY = value;
}

Boolean UNIX_FCPortStatistics::getClass1PBSY(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASS_1_P_B_S_Y, getClass1PBSY());
	return true;
}

Uint64 UNIX_FCPortStatistics::getClass1PBSY() const
{
	return _class1PBSY;
}

void UNIX_FCPortStatistics::setClass1PBSY(Uint64 &value)
{
	_class1PBSY = value;
}

Boolean UNIX_FCPortStatistics::getClass1FRJT(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASS_1_F_R_J_T, getClass1FRJT());
	return true;
}

Uint64 UNIX_FCPortStatistics::getClass1FRJT() const
{
	return _class1FRJT;
}

void UNIX_FCPortStatistics::setClass1FRJT(Uint64 &value)
{
	_class1FRJT = value;
}

Boolean UNIX_FCPortStatistics::getClass1PRJT(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASS_1_P_R_J_T, getClass1PRJT());
	return true;
}

Uint64 UNIX_FCPortStatistics::getClass1PRJT() const
{
	return _class1PRJT;
}

void UNIX_FCPortStatistics::setClass1PRJT(Uint64 &value)
{
	_class1PRJT = value;
}

Boolean UNIX_FCPortStatistics::getRXClass2Frames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_R_X_CLASS_2_FRAMES, getRXClass2Frames());
	return true;
}

Uint64 UNIX_FCPortStatistics::getRXClass2Frames() const
{
	return _rXClass2Frames;
}

void UNIX_FCPortStatistics::setRXClass2Frames(Uint64 &value)
{
	_rXClass2Frames = value;
}

Boolean UNIX_FCPortStatistics::getTXClass2Frames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_T_X_CLASS_2_FRAMES, getTXClass2Frames());
	return true;
}

Uint64 UNIX_FCPortStatistics::getTXClass2Frames() const
{
	return _tXClass2Frames;
}

void UNIX_FCPortStatistics::setTXClass2Frames(Uint64 &value)
{
	_tXClass2Frames = value;
}

Boolean UNIX_FCPortStatistics::getClass2FBSY(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASS_2_F_B_S_Y, getClass2FBSY());
	return true;
}

Uint64 UNIX_FCPortStatistics::getClass2FBSY() const
{
	return _class2FBSY;
}

void UNIX_FCPortStatistics::setClass2FBSY(Uint64 &value)
{
	_class2FBSY = value;
}

Boolean UNIX_FCPortStatistics::getClass2PBSY(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASS_2_P_B_S_Y, getClass2PBSY());
	return true;
}

Uint64 UNIX_FCPortStatistics::getClass2PBSY() const
{
	return _class2PBSY;
}

void UNIX_FCPortStatistics::setClass2PBSY(Uint64 &value)
{
	_class2PBSY = value;
}

Boolean UNIX_FCPortStatistics::getClass2FRJT(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASS_2_F_R_J_T, getClass2FRJT());
	return true;
}

Uint64 UNIX_FCPortStatistics::getClass2FRJT() const
{
	return _class2FRJT;
}

void UNIX_FCPortStatistics::setClass2FRJT(Uint64 &value)
{
	_class2FRJT = value;
}

Boolean UNIX_FCPortStatistics::getClass2PRJT(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASS_2_P_R_J_T, getClass2PRJT());
	return true;
}

Uint64 UNIX_FCPortStatistics::getClass2PRJT() const
{
	return _class2PRJT;
}

void UNIX_FCPortStatistics::setClass2PRJT(Uint64 &value)
{
	_class2PRJT = value;
}

Boolean UNIX_FCPortStatistics::getRXClass3Frames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_R_X_CLASS_3_FRAMES, getRXClass3Frames());
	return true;
}

Uint64 UNIX_FCPortStatistics::getRXClass3Frames() const
{
	return _rXClass3Frames;
}

void UNIX_FCPortStatistics::setRXClass3Frames(Uint64 &value)
{
	_rXClass3Frames = value;
}

Boolean UNIX_FCPortStatistics::getTXClass3Frames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_T_X_CLASS_3_FRAMES, getTXClass3Frames());
	return true;
}

Uint64 UNIX_FCPortStatistics::getTXClass3Frames() const
{
	return _tXClass3Frames;
}

void UNIX_FCPortStatistics::setTXClass3Frames(Uint64 &value)
{
	_tXClass3Frames = value;
}

Boolean UNIX_FCPortStatistics::getClass3FramesDiscarded(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASS_3_FRAMES_DISCARDED, getClass3FramesDiscarded());
	return true;
}

Uint64 UNIX_FCPortStatistics::getClass3FramesDiscarded() const
{
	return _class3FramesDiscarded;
}

void UNIX_FCPortStatistics::setClass3FramesDiscarded(Uint64 &value)
{
	_class3FramesDiscarded = value;
}

Boolean UNIX_FCPortStatistics::getRXBroadcastFrames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_R_X_BROADCAST_FRAMES, getRXBroadcastFrames());
	return true;
}

Uint64 UNIX_FCPortStatistics::getRXBroadcastFrames() const
{
	return _rXBroadcastFrames;
}

void UNIX_FCPortStatistics::setRXBroadcastFrames(Uint64 &value)
{
	_rXBroadcastFrames = value;
}

Boolean UNIX_FCPortStatistics::getTXBroadcastFrames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_T_X_BROADCAST_FRAMES, getTXBroadcastFrames());
	return true;
}

Uint64 UNIX_FCPortStatistics::getTXBroadcastFrames() const
{
	return _tXBroadcastFrames;
}

void UNIX_FCPortStatistics::setTXBroadcastFrames(Uint64 &value)
{
	_tXBroadcastFrames = value;
}


void UNIX_FCPortStatistics::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("FCPortStatistics");
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
	_lIPCount = Uint64(0);
	_nOSCount = Uint64(0);
	_errorFrames = Uint64(0);
	_dumpedFrames = Uint64(0);
	_linkFailures = Uint64(0);
	_lossOfSignalCounter = Uint64(0);
	_lossOfSyncCounter = Uint64(0);
	_primitiveSeqProtocolErrCount = Uint64(0);
	_cRCErrors = Uint64(0);
	_invalidTransmissionWords = Uint64(0);
	_framesTooShort = Uint64(0);
	_framesTooLong = Uint64(0);
	_addressErrors = Uint64(0);
	_bufferCreditNotProvided = Uint64(0);
	_bufferCreditNotReceived = Uint64(0);
	_delimiterErrors = Uint64(0);
	_encodingDisparityErrors = Uint64(0);
	_linkResetsReceived = Uint64(0);
	_linkResetsTransmitted = Uint64(0);
	_multicastFramesReceived = Uint64(0);
	_multicastFramesTransmitted = Uint64(0);
	_fBSYFrames = Uint64(0);
	_pBSYFrames = Uint64(0);
	_fRJTFrames = Uint64(0);
	_pRJTFrames = Uint64(0);
	_rXClass1Frames = Uint64(0);
	_tXClass1Frames = Uint64(0);
	_class1FBSY = Uint64(0);
	_class1PBSY = Uint64(0);
	_class1FRJT = Uint64(0);
	_class1PRJT = Uint64(0);
	_rXClass2Frames = Uint64(0);
	_tXClass2Frames = Uint64(0);
	_class2FBSY = Uint64(0);
	_class2PBSY = Uint64(0);
	_class2FRJT = Uint64(0);
	_class2PRJT = Uint64(0);
	_rXClass3Frames = Uint64(0);
	_tXClass3Frames = Uint64(0);
	_class3FramesDiscarded = Uint64(0);
	_rXBroadcastFrames = Uint64(0);
	_tXBroadcastFrames = Uint64(0);

}

Boolean UNIX_FCPortStatistics::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "LIPCount"))
			{
				Uint64 lIPCountValue;
				property.getValue().get(lIPCountValue);
				setLIPCount(lIPCountValue);
			}
			else if (String::equal(property.getName().getString(), "NOSCount"))
			{
				Uint64 nOSCountValue;
				property.getValue().get(nOSCountValue);
				setNOSCount(nOSCountValue);
			}
			else if (String::equal(property.getName().getString(), "ErrorFrames"))
			{
				Uint64 errorFramesValue;
				property.getValue().get(errorFramesValue);
				setErrorFrames(errorFramesValue);
			}
			else if (String::equal(property.getName().getString(), "DumpedFrames"))
			{
				Uint64 dumpedFramesValue;
				property.getValue().get(dumpedFramesValue);
				setDumpedFrames(dumpedFramesValue);
			}
			else if (String::equal(property.getName().getString(), "LinkFailures"))
			{
				Uint64 linkFailuresValue;
				property.getValue().get(linkFailuresValue);
				setLinkFailures(linkFailuresValue);
			}
			else if (String::equal(property.getName().getString(), "LossOfSignalCounter"))
			{
				Uint64 lossOfSignalCounterValue;
				property.getValue().get(lossOfSignalCounterValue);
				setLossOfSignalCounter(lossOfSignalCounterValue);
			}
			else if (String::equal(property.getName().getString(), "LossOfSyncCounter"))
			{
				Uint64 lossOfSyncCounterValue;
				property.getValue().get(lossOfSyncCounterValue);
				setLossOfSyncCounter(lossOfSyncCounterValue);
			}
			else if (String::equal(property.getName().getString(), "PrimitiveSeqProtocolErrCount"))
			{
				Uint64 primitiveSeqProtocolErrCountValue;
				property.getValue().get(primitiveSeqProtocolErrCountValue);
				setPrimitiveSeqProtocolErrCount(primitiveSeqProtocolErrCountValue);
			}
			else if (String::equal(property.getName().getString(), "CRCErrors"))
			{
				Uint64 cRCErrorsValue;
				property.getValue().get(cRCErrorsValue);
				setCRCErrors(cRCErrorsValue);
			}
			else if (String::equal(property.getName().getString(), "InvalidTransmissionWords"))
			{
				Uint64 invalidTransmissionWordsValue;
				property.getValue().get(invalidTransmissionWordsValue);
				setInvalidTransmissionWords(invalidTransmissionWordsValue);
			}
			else if (String::equal(property.getName().getString(), "FramesTooShort"))
			{
				Uint64 framesTooShortValue;
				property.getValue().get(framesTooShortValue);
				setFramesTooShort(framesTooShortValue);
			}
			else if (String::equal(property.getName().getString(), "FramesTooLong"))
			{
				Uint64 framesTooLongValue;
				property.getValue().get(framesTooLongValue);
				setFramesTooLong(framesTooLongValue);
			}
			else if (String::equal(property.getName().getString(), "AddressErrors"))
			{
				Uint64 addressErrorsValue;
				property.getValue().get(addressErrorsValue);
				setAddressErrors(addressErrorsValue);
			}
			else if (String::equal(property.getName().getString(), "BufferCreditNotProvided"))
			{
				Uint64 bufferCreditNotProvidedValue;
				property.getValue().get(bufferCreditNotProvidedValue);
				setBufferCreditNotProvided(bufferCreditNotProvidedValue);
			}
			else if (String::equal(property.getName().getString(), "BufferCreditNotReceived"))
			{
				Uint64 bufferCreditNotReceivedValue;
				property.getValue().get(bufferCreditNotReceivedValue);
				setBufferCreditNotReceived(bufferCreditNotReceivedValue);
			}
			else if (String::equal(property.getName().getString(), "DelimiterErrors"))
			{
				Uint64 delimiterErrorsValue;
				property.getValue().get(delimiterErrorsValue);
				setDelimiterErrors(delimiterErrorsValue);
			}
			else if (String::equal(property.getName().getString(), "EncodingDisparityErrors"))
			{
				Uint64 encodingDisparityErrorsValue;
				property.getValue().get(encodingDisparityErrorsValue);
				setEncodingDisparityErrors(encodingDisparityErrorsValue);
			}
			else if (String::equal(property.getName().getString(), "LinkResetsReceived"))
			{
				Uint64 linkResetsReceivedValue;
				property.getValue().get(linkResetsReceivedValue);
				setLinkResetsReceived(linkResetsReceivedValue);
			}
			else if (String::equal(property.getName().getString(), "LinkResetsTransmitted"))
			{
				Uint64 linkResetsTransmittedValue;
				property.getValue().get(linkResetsTransmittedValue);
				setLinkResetsTransmitted(linkResetsTransmittedValue);
			}
			else if (String::equal(property.getName().getString(), "MulticastFramesReceived"))
			{
				Uint64 multicastFramesReceivedValue;
				property.getValue().get(multicastFramesReceivedValue);
				setMulticastFramesReceived(multicastFramesReceivedValue);
			}
			else if (String::equal(property.getName().getString(), "MulticastFramesTransmitted"))
			{
				Uint64 multicastFramesTransmittedValue;
				property.getValue().get(multicastFramesTransmittedValue);
				setMulticastFramesTransmitted(multicastFramesTransmittedValue);
			}
			else if (String::equal(property.getName().getString(), "FBSYFrames"))
			{
				Uint64 fBSYFramesValue;
				property.getValue().get(fBSYFramesValue);
				setFBSYFrames(fBSYFramesValue);
			}
			else if (String::equal(property.getName().getString(), "PBSYFrames"))
			{
				Uint64 pBSYFramesValue;
				property.getValue().get(pBSYFramesValue);
				setPBSYFrames(pBSYFramesValue);
			}
			else if (String::equal(property.getName().getString(), "FRJTFrames"))
			{
				Uint64 fRJTFramesValue;
				property.getValue().get(fRJTFramesValue);
				setFRJTFrames(fRJTFramesValue);
			}
			else if (String::equal(property.getName().getString(), "PRJTFrames"))
			{
				Uint64 pRJTFramesValue;
				property.getValue().get(pRJTFramesValue);
				setPRJTFrames(pRJTFramesValue);
			}
			else if (String::equal(property.getName().getString(), "RXClass1Frames"))
			{
				Uint64 rXClass1FramesValue;
				property.getValue().get(rXClass1FramesValue);
				setRXClass1Frames(rXClass1FramesValue);
			}
			else if (String::equal(property.getName().getString(), "TXClass1Frames"))
			{
				Uint64 tXClass1FramesValue;
				property.getValue().get(tXClass1FramesValue);
				setTXClass1Frames(tXClass1FramesValue);
			}
			else if (String::equal(property.getName().getString(), "Class1FBSY"))
			{
				Uint64 class1FBSYValue;
				property.getValue().get(class1FBSYValue);
				setClass1FBSY(class1FBSYValue);
			}
			else if (String::equal(property.getName().getString(), "Class1PBSY"))
			{
				Uint64 class1PBSYValue;
				property.getValue().get(class1PBSYValue);
				setClass1PBSY(class1PBSYValue);
			}
			else if (String::equal(property.getName().getString(), "Class1FRJT"))
			{
				Uint64 class1FRJTValue;
				property.getValue().get(class1FRJTValue);
				setClass1FRJT(class1FRJTValue);
			}
			else if (String::equal(property.getName().getString(), "Class1PRJT"))
			{
				Uint64 class1PRJTValue;
				property.getValue().get(class1PRJTValue);
				setClass1PRJT(class1PRJTValue);
			}
			else if (String::equal(property.getName().getString(), "RXClass2Frames"))
			{
				Uint64 rXClass2FramesValue;
				property.getValue().get(rXClass2FramesValue);
				setRXClass2Frames(rXClass2FramesValue);
			}
			else if (String::equal(property.getName().getString(), "TXClass2Frames"))
			{
				Uint64 tXClass2FramesValue;
				property.getValue().get(tXClass2FramesValue);
				setTXClass2Frames(tXClass2FramesValue);
			}
			else if (String::equal(property.getName().getString(), "Class2FBSY"))
			{
				Uint64 class2FBSYValue;
				property.getValue().get(class2FBSYValue);
				setClass2FBSY(class2FBSYValue);
			}
			else if (String::equal(property.getName().getString(), "Class2PBSY"))
			{
				Uint64 class2PBSYValue;
				property.getValue().get(class2PBSYValue);
				setClass2PBSY(class2PBSYValue);
			}
			else if (String::equal(property.getName().getString(), "Class2FRJT"))
			{
				Uint64 class2FRJTValue;
				property.getValue().get(class2FRJTValue);
				setClass2FRJT(class2FRJTValue);
			}
			else if (String::equal(property.getName().getString(), "Class2PRJT"))
			{
				Uint64 class2PRJTValue;
				property.getValue().get(class2PRJTValue);
				setClass2PRJT(class2PRJTValue);
			}
			else if (String::equal(property.getName().getString(), "RXClass3Frames"))
			{
				Uint64 rXClass3FramesValue;
				property.getValue().get(rXClass3FramesValue);
				setRXClass3Frames(rXClass3FramesValue);
			}
			else if (String::equal(property.getName().getString(), "TXClass3Frames"))
			{
				Uint64 tXClass3FramesValue;
				property.getValue().get(tXClass3FramesValue);
				setTXClass3Frames(tXClass3FramesValue);
			}
			else if (String::equal(property.getName().getString(), "Class3FramesDiscarded"))
			{
				Uint64 class3FramesDiscardedValue;
				property.getValue().get(class3FramesDiscardedValue);
				setClass3FramesDiscarded(class3FramesDiscardedValue);
			}
			else if (String::equal(property.getName().getString(), "RXBroadcastFrames"))
			{
				Uint64 rXBroadcastFramesValue;
				property.getValue().get(rXBroadcastFramesValue);
				setRXBroadcastFrames(rXBroadcastFramesValue);
			}
			else if (String::equal(property.getName().getString(), "TXBroadcastFrames"))
			{
				Uint64 tXBroadcastFramesValue;
				property.getValue().get(tXBroadcastFramesValue);
				setTXBroadcastFrames(tXBroadcastFramesValue);
			}
	}
	return true;
}

Uint32 UNIX_FCPortStatistics::invokeResetSelectedStats(
		Array<String> &inSelectedStatistics
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ResetSelectedStats */
	
	
	
	return returnValue;
}


Boolean UNIX_FCPortStatistics::initialize()
{
	return false;
}

Boolean UNIX_FCPortStatistics::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("FCPortStatistics");
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
	_lIPCount = Uint64(0);
	_nOSCount = Uint64(0);
	_errorFrames = Uint64(0);
	_dumpedFrames = Uint64(0);
	_linkFailures = Uint64(0);
	_lossOfSignalCounter = Uint64(0);
	_lossOfSyncCounter = Uint64(0);
	_primitiveSeqProtocolErrCount = Uint64(0);
	_cRCErrors = Uint64(0);
	_invalidTransmissionWords = Uint64(0);
	_framesTooShort = Uint64(0);
	_framesTooLong = Uint64(0);
	_addressErrors = Uint64(0);
	_bufferCreditNotProvided = Uint64(0);
	_bufferCreditNotReceived = Uint64(0);
	_delimiterErrors = Uint64(0);
	_encodingDisparityErrors = Uint64(0);
	_linkResetsReceived = Uint64(0);
	_linkResetsTransmitted = Uint64(0);
	_multicastFramesReceived = Uint64(0);
	_multicastFramesTransmitted = Uint64(0);
	_fBSYFrames = Uint64(0);
	_pBSYFrames = Uint64(0);
	_fRJTFrames = Uint64(0);
	_pRJTFrames = Uint64(0);
	_rXClass1Frames = Uint64(0);
	_tXClass1Frames = Uint64(0);
	_class1FBSY = Uint64(0);
	_class1PBSY = Uint64(0);
	_class1FRJT = Uint64(0);
	_class1PRJT = Uint64(0);
	_rXClass2Frames = Uint64(0);
	_tXClass2Frames = Uint64(0);
	_class2FBSY = Uint64(0);
	_class2PBSY = Uint64(0);
	_class2FRJT = Uint64(0);
	_class2PRJT = Uint64(0);
	_rXClass3Frames = Uint64(0);
	_tXClass3Frames = Uint64(0);
	_class3FramesDiscarded = Uint64(0);
	_rXBroadcastFrames = Uint64(0);
	_tXBroadcastFrames = Uint64(0);
	
	return false;
}

Boolean UNIX_FCPortStatistics::finalize()
{
	return false;
}


Boolean UNIX_FCPortStatistics::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_FCPortStatistics::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FCPortStatistics::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FCPortStatistics::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FCPortStatistics::validateInstance()
{
	return true;
}

