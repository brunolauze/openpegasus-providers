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


UNIX_FCPortResourceUsage::UNIX_FCPortResourceUsage(void)
{
}

UNIX_FCPortResourceUsage::~UNIX_FCPortResourceUsage(void)
{
}

Boolean UNIX_FCPortResourceUsage::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_FCPortResourceUsage::getInstanceID() const
{
	return _instanceID;
}

void UNIX_FCPortResourceUsage::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_FCPortResourceUsage::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_FCPortResourceUsage::getCaption() const
{
	return _caption;
}

void UNIX_FCPortResourceUsage::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_FCPortResourceUsage::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_FCPortResourceUsage::getDescription() const
{
	return _description;
}

void UNIX_FCPortResourceUsage::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_FCPortResourceUsage::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_FCPortResourceUsage::getElementName() const
{
	return _elementName;
}

void UNIX_FCPortResourceUsage::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_FCPortResourceUsage::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_FCPortResourceUsage::getGeneration() const
{
	return _generation;
}

void UNIX_FCPortResourceUsage::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_FCPortResourceUsage::getStartStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_STATISTIC_TIME, getStartStatisticTime());
	return true;
}

CIMDateTime UNIX_FCPortResourceUsage::getStartStatisticTime() const
{
	return _startStatisticTime;
}

void UNIX_FCPortResourceUsage::setStartStatisticTime(CIMDateTime &value)
{
	_startStatisticTime = value;
}

Boolean UNIX_FCPortResourceUsage::getStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATISTIC_TIME, getStatisticTime());
	return true;
}

CIMDateTime UNIX_FCPortResourceUsage::getStatisticTime() const
{
	return _statisticTime;
}

void UNIX_FCPortResourceUsage::setStatisticTime(CIMDateTime &value)
{
	_statisticTime = value;
}

Boolean UNIX_FCPortResourceUsage::getSampleInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SAMPLE_INTERVAL, getSampleInterval());
	return true;
}

CIMDateTime UNIX_FCPortResourceUsage::getSampleInterval() const
{
	return _sampleInterval;
}

void UNIX_FCPortResourceUsage::setSampleInterval(CIMDateTime &value)
{
	_sampleInterval = value;
}

Boolean UNIX_FCPortResourceUsage::getRateIntervalEndTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_END_TIME, getRateIntervalEndTime());
	return true;
}

CIMDateTime UNIX_FCPortResourceUsage::getRateIntervalEndTime() const
{
	return _rateIntervalEndTime;
}

void UNIX_FCPortResourceUsage::setRateIntervalEndTime(CIMDateTime &value)
{
	_rateIntervalEndTime = value;
}

Boolean UNIX_FCPortResourceUsage::getRateIntervalStartTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_START_TIME, getRateIntervalStartTime());
	return true;
}

CIMDateTime UNIX_FCPortResourceUsage::getRateIntervalStartTime() const
{
	return _rateIntervalStartTime;
}

void UNIX_FCPortResourceUsage::setRateIntervalStartTime(CIMDateTime &value)
{
	_rateIntervalStartTime = value;
}

Boolean UNIX_FCPortResourceUsage::getBytesTransmitted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BYTES_TRANSMITTED, getBytesTransmitted());
	return true;
}

Uint64 UNIX_FCPortResourceUsage::getBytesTransmitted() const
{
	return _bytesTransmitted;
}

void UNIX_FCPortResourceUsage::setBytesTransmitted(Uint64 &value)
{
	_bytesTransmitted = value;
}

Boolean UNIX_FCPortResourceUsage::getBytesReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BYTES_RECEIVED, getBytesReceived());
	return true;
}

Uint64 UNIX_FCPortResourceUsage::getBytesReceived() const
{
	return _bytesReceived;
}

void UNIX_FCPortResourceUsage::setBytesReceived(Uint64 &value)
{
	_bytesReceived = value;
}

Boolean UNIX_FCPortResourceUsage::getPacketsTransmitted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKETS_TRANSMITTED, getPacketsTransmitted());
	return true;
}

Uint64 UNIX_FCPortResourceUsage::getPacketsTransmitted() const
{
	return _packetsTransmitted;
}

void UNIX_FCPortResourceUsage::setPacketsTransmitted(Uint64 &value)
{
	_packetsTransmitted = value;
}

Boolean UNIX_FCPortResourceUsage::getPacketsReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKETS_RECEIVED, getPacketsReceived());
	return true;
}

Uint64 UNIX_FCPortResourceUsage::getPacketsReceived() const
{
	return _packetsReceived;
}

void UNIX_FCPortResourceUsage::setPacketsReceived(Uint64 &value)
{
	_packetsReceived = value;
}

Boolean UNIX_FCPortResourceUsage::getLIPCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_L_IP_COUNT, getLIPCount());
	return true;
}

Uint64 UNIX_FCPortResourceUsage::getLIPCount() const
{
	return _lIPCount;
}

void UNIX_FCPortResourceUsage::setLIPCount(Uint64 &value)
{
	_lIPCount = value;
}

Boolean UNIX_FCPortResourceUsage::getNOSCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_N_OS_COUNT, getNOSCount());
	return true;
}

Uint64 UNIX_FCPortResourceUsage::getNOSCount() const
{
	return _nOSCount;
}

void UNIX_FCPortResourceUsage::setNOSCount(Uint64 &value)
{
	_nOSCount = value;
}

Boolean UNIX_FCPortResourceUsage::getErrorFrames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_FRAMES, getErrorFrames());
	return true;
}

Uint64 UNIX_FCPortResourceUsage::getErrorFrames() const
{
	return _errorFrames;
}

void UNIX_FCPortResourceUsage::setErrorFrames(Uint64 &value)
{
	_errorFrames = value;
}

Boolean UNIX_FCPortResourceUsage::getDumpedFrames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DUMPED_FRAMES, getDumpedFrames());
	return true;
}

Uint64 UNIX_FCPortResourceUsage::getDumpedFrames() const
{
	return _dumpedFrames;
}

void UNIX_FCPortResourceUsage::setDumpedFrames(Uint64 &value)
{
	_dumpedFrames = value;
}

Boolean UNIX_FCPortResourceUsage::getLinkFailures(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LINK_FAILURES, getLinkFailures());
	return true;
}

Uint64 UNIX_FCPortResourceUsage::getLinkFailures() const
{
	return _linkFailures;
}

void UNIX_FCPortResourceUsage::setLinkFailures(Uint64 &value)
{
	_linkFailures = value;
}

Boolean UNIX_FCPortResourceUsage::getLossOfSignalCounter(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOSS_OF_SIGNAL_COUNTER, getLossOfSignalCounter());
	return true;
}

Uint64 UNIX_FCPortResourceUsage::getLossOfSignalCounter() const
{
	return _lossOfSignalCounter;
}

void UNIX_FCPortResourceUsage::setLossOfSignalCounter(Uint64 &value)
{
	_lossOfSignalCounter = value;
}

Boolean UNIX_FCPortResourceUsage::getLossOfSyncCounter(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOSS_OF_SYNC_COUNTER, getLossOfSyncCounter());
	return true;
}

Uint64 UNIX_FCPortResourceUsage::getLossOfSyncCounter() const
{
	return _lossOfSyncCounter;
}

void UNIX_FCPortResourceUsage::setLossOfSyncCounter(Uint64 &value)
{
	_lossOfSyncCounter = value;
}

Boolean UNIX_FCPortResourceUsage::getPrimitiveSeqProtocolErrCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMITIVE_SEQ_PROTOCOL_ERR_COUNT, getPrimitiveSeqProtocolErrCount());
	return true;
}

Uint64 UNIX_FCPortResourceUsage::getPrimitiveSeqProtocolErrCount() const
{
	return _primitiveSeqProtocolErrCount;
}

void UNIX_FCPortResourceUsage::setPrimitiveSeqProtocolErrCount(Uint64 &value)
{
	_primitiveSeqProtocolErrCount = value;
}

Boolean UNIX_FCPortResourceUsage::getCRCErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_C_R_C_ERRORS, getCRCErrors());
	return true;
}

Uint64 UNIX_FCPortResourceUsage::getCRCErrors() const
{
	return _cRCErrors;
}

void UNIX_FCPortResourceUsage::setCRCErrors(Uint64 &value)
{
	_cRCErrors = value;
}

Boolean UNIX_FCPortResourceUsage::getInvalidTransmissionWords(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INVALID_TRANSMISSION_WORDS, getInvalidTransmissionWords());
	return true;
}

Uint64 UNIX_FCPortResourceUsage::getInvalidTransmissionWords() const
{
	return _invalidTransmissionWords;
}

void UNIX_FCPortResourceUsage::setInvalidTransmissionWords(Uint64 &value)
{
	_invalidTransmissionWords = value;
}

Boolean UNIX_FCPortResourceUsage::getFramesTooShort(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FRAMES_TOO_SHORT, getFramesTooShort());
	return true;
}

Uint64 UNIX_FCPortResourceUsage::getFramesTooShort() const
{
	return _framesTooShort;
}

void UNIX_FCPortResourceUsage::setFramesTooShort(Uint64 &value)
{
	_framesTooShort = value;
}

Boolean UNIX_FCPortResourceUsage::getFramesTooLong(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FRAMES_TOO_LONG, getFramesTooLong());
	return true;
}

Uint64 UNIX_FCPortResourceUsage::getFramesTooLong() const
{
	return _framesTooLong;
}

void UNIX_FCPortResourceUsage::setFramesTooLong(Uint64 &value)
{
	_framesTooLong = value;
}

Boolean UNIX_FCPortResourceUsage::getAddressErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESS_ERRORS, getAddressErrors());
	return true;
}

Uint64 UNIX_FCPortResourceUsage::getAddressErrors() const
{
	return _addressErrors;
}

void UNIX_FCPortResourceUsage::setAddressErrors(Uint64 &value)
{
	_addressErrors = value;
}

Boolean UNIX_FCPortResourceUsage::getBufferCreditNotProvided(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BUFFER_CREDIT_NOT_PROVIDED, getBufferCreditNotProvided());
	return true;
}

Uint64 UNIX_FCPortResourceUsage::getBufferCreditNotProvided() const
{
	return _bufferCreditNotProvided;
}

void UNIX_FCPortResourceUsage::setBufferCreditNotProvided(Uint64 &value)
{
	_bufferCreditNotProvided = value;
}

Boolean UNIX_FCPortResourceUsage::getBufferCreditNotReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BUFFER_CREDIT_NOT_RECEIVED, getBufferCreditNotReceived());
	return true;
}

Uint64 UNIX_FCPortResourceUsage::getBufferCreditNotReceived() const
{
	return _bufferCreditNotReceived;
}

void UNIX_FCPortResourceUsage::setBufferCreditNotReceived(Uint64 &value)
{
	_bufferCreditNotReceived = value;
}

Boolean UNIX_FCPortResourceUsage::getDelimiterErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELIMITER_ERRORS, getDelimiterErrors());
	return true;
}

Uint64 UNIX_FCPortResourceUsage::getDelimiterErrors() const
{
	return _delimiterErrors;
}

void UNIX_FCPortResourceUsage::setDelimiterErrors(Uint64 &value)
{
	_delimiterErrors = value;
}

Boolean UNIX_FCPortResourceUsage::getEncodingDisparityErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENCODING_DISPARITY_ERRORS, getEncodingDisparityErrors());
	return true;
}

Uint64 UNIX_FCPortResourceUsage::getEncodingDisparityErrors() const
{
	return _encodingDisparityErrors;
}

void UNIX_FCPortResourceUsage::setEncodingDisparityErrors(Uint64 &value)
{
	_encodingDisparityErrors = value;
}

Boolean UNIX_FCPortResourceUsage::getLinkResetsReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LINK_RESETS_RECEIVED, getLinkResetsReceived());
	return true;
}

Uint64 UNIX_FCPortResourceUsage::getLinkResetsReceived() const
{
	return _linkResetsReceived;
}

void UNIX_FCPortResourceUsage::setLinkResetsReceived(Uint64 &value)
{
	_linkResetsReceived = value;
}

Boolean UNIX_FCPortResourceUsage::getLinkResetsTransmitted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LINK_RESETS_TRANSMITTED, getLinkResetsTransmitted());
	return true;
}

Uint64 UNIX_FCPortResourceUsage::getLinkResetsTransmitted() const
{
	return _linkResetsTransmitted;
}

void UNIX_FCPortResourceUsage::setLinkResetsTransmitted(Uint64 &value)
{
	_linkResetsTransmitted = value;
}

Boolean UNIX_FCPortResourceUsage::getMulticastFramesReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MULTICAST_FRAMES_RECEIVED, getMulticastFramesReceived());
	return true;
}

Uint64 UNIX_FCPortResourceUsage::getMulticastFramesReceived() const
{
	return _multicastFramesReceived;
}

void UNIX_FCPortResourceUsage::setMulticastFramesReceived(Uint64 &value)
{
	_multicastFramesReceived = value;
}

Boolean UNIX_FCPortResourceUsage::getMulticastFramesTransmitted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MULTICAST_FRAMES_TRANSMITTED, getMulticastFramesTransmitted());
	return true;
}

Uint64 UNIX_FCPortResourceUsage::getMulticastFramesTransmitted() const
{
	return _multicastFramesTransmitted;
}

void UNIX_FCPortResourceUsage::setMulticastFramesTransmitted(Uint64 &value)
{
	_multicastFramesTransmitted = value;
}

Boolean UNIX_FCPortResourceUsage::getFBSYFrames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_F_B_S_Y_FRAMES, getFBSYFrames());
	return true;
}

Uint64 UNIX_FCPortResourceUsage::getFBSYFrames() const
{
	return _fBSYFrames;
}

void UNIX_FCPortResourceUsage::setFBSYFrames(Uint64 &value)
{
	_fBSYFrames = value;
}

Boolean UNIX_FCPortResourceUsage::getPBSYFrames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_P_B_S_Y_FRAMES, getPBSYFrames());
	return true;
}

Uint64 UNIX_FCPortResourceUsage::getPBSYFrames() const
{
	return _pBSYFrames;
}

void UNIX_FCPortResourceUsage::setPBSYFrames(Uint64 &value)
{
	_pBSYFrames = value;
}

Boolean UNIX_FCPortResourceUsage::getFRJTFrames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_F_R_J_T_FRAMES, getFRJTFrames());
	return true;
}

Uint64 UNIX_FCPortResourceUsage::getFRJTFrames() const
{
	return _fRJTFrames;
}

void UNIX_FCPortResourceUsage::setFRJTFrames(Uint64 &value)
{
	_fRJTFrames = value;
}

Boolean UNIX_FCPortResourceUsage::getPRJTFrames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_P_R_J_T_FRAMES, getPRJTFrames());
	return true;
}

Uint64 UNIX_FCPortResourceUsage::getPRJTFrames() const
{
	return _pRJTFrames;
}

void UNIX_FCPortResourceUsage::setPRJTFrames(Uint64 &value)
{
	_pRJTFrames = value;
}

Boolean UNIX_FCPortResourceUsage::getRXClass1Frames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_R_X_CLASS_1_FRAMES, getRXClass1Frames());
	return true;
}

Uint64 UNIX_FCPortResourceUsage::getRXClass1Frames() const
{
	return _rXClass1Frames;
}

void UNIX_FCPortResourceUsage::setRXClass1Frames(Uint64 &value)
{
	_rXClass1Frames = value;
}

Boolean UNIX_FCPortResourceUsage::getTXClass1Frames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_T_X_CLASS_1_FRAMES, getTXClass1Frames());
	return true;
}

Uint64 UNIX_FCPortResourceUsage::getTXClass1Frames() const
{
	return _tXClass1Frames;
}

void UNIX_FCPortResourceUsage::setTXClass1Frames(Uint64 &value)
{
	_tXClass1Frames = value;
}

Boolean UNIX_FCPortResourceUsage::getClass1FBSY(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASS_1_F_B_S_Y, getClass1FBSY());
	return true;
}

Uint64 UNIX_FCPortResourceUsage::getClass1FBSY() const
{
	return _class1FBSY;
}

void UNIX_FCPortResourceUsage::setClass1FBSY(Uint64 &value)
{
	_class1FBSY = value;
}

Boolean UNIX_FCPortResourceUsage::getClass1PBSY(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASS_1_P_B_S_Y, getClass1PBSY());
	return true;
}

Uint64 UNIX_FCPortResourceUsage::getClass1PBSY() const
{
	return _class1PBSY;
}

void UNIX_FCPortResourceUsage::setClass1PBSY(Uint64 &value)
{
	_class1PBSY = value;
}

Boolean UNIX_FCPortResourceUsage::getClass1FRJT(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASS_1_F_R_J_T, getClass1FRJT());
	return true;
}

Uint64 UNIX_FCPortResourceUsage::getClass1FRJT() const
{
	return _class1FRJT;
}

void UNIX_FCPortResourceUsage::setClass1FRJT(Uint64 &value)
{
	_class1FRJT = value;
}

Boolean UNIX_FCPortResourceUsage::getClass1PRJT(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASS_1_P_R_J_T, getClass1PRJT());
	return true;
}

Uint64 UNIX_FCPortResourceUsage::getClass1PRJT() const
{
	return _class1PRJT;
}

void UNIX_FCPortResourceUsage::setClass1PRJT(Uint64 &value)
{
	_class1PRJT = value;
}

Boolean UNIX_FCPortResourceUsage::getRXClass2Frames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_R_X_CLASS_2_FRAMES, getRXClass2Frames());
	return true;
}

Uint64 UNIX_FCPortResourceUsage::getRXClass2Frames() const
{
	return _rXClass2Frames;
}

void UNIX_FCPortResourceUsage::setRXClass2Frames(Uint64 &value)
{
	_rXClass2Frames = value;
}

Boolean UNIX_FCPortResourceUsage::getTXClass2Frames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_T_X_CLASS_2_FRAMES, getTXClass2Frames());
	return true;
}

Uint64 UNIX_FCPortResourceUsage::getTXClass2Frames() const
{
	return _tXClass2Frames;
}

void UNIX_FCPortResourceUsage::setTXClass2Frames(Uint64 &value)
{
	_tXClass2Frames = value;
}

Boolean UNIX_FCPortResourceUsage::getClass2FBSY(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASS_2_F_B_S_Y, getClass2FBSY());
	return true;
}

Uint64 UNIX_FCPortResourceUsage::getClass2FBSY() const
{
	return _class2FBSY;
}

void UNIX_FCPortResourceUsage::setClass2FBSY(Uint64 &value)
{
	_class2FBSY = value;
}

Boolean UNIX_FCPortResourceUsage::getClass2PBSY(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASS_2_P_B_S_Y, getClass2PBSY());
	return true;
}

Uint64 UNIX_FCPortResourceUsage::getClass2PBSY() const
{
	return _class2PBSY;
}

void UNIX_FCPortResourceUsage::setClass2PBSY(Uint64 &value)
{
	_class2PBSY = value;
}

Boolean UNIX_FCPortResourceUsage::getClass2FRJT(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASS_2_F_R_J_T, getClass2FRJT());
	return true;
}

Uint64 UNIX_FCPortResourceUsage::getClass2FRJT() const
{
	return _class2FRJT;
}

void UNIX_FCPortResourceUsage::setClass2FRJT(Uint64 &value)
{
	_class2FRJT = value;
}

Boolean UNIX_FCPortResourceUsage::getClass2PRJT(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASS_2_P_R_J_T, getClass2PRJT());
	return true;
}

Uint64 UNIX_FCPortResourceUsage::getClass2PRJT() const
{
	return _class2PRJT;
}

void UNIX_FCPortResourceUsage::setClass2PRJT(Uint64 &value)
{
	_class2PRJT = value;
}

Boolean UNIX_FCPortResourceUsage::getRXClass3Frames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_R_X_CLASS_3_FRAMES, getRXClass3Frames());
	return true;
}

Uint64 UNIX_FCPortResourceUsage::getRXClass3Frames() const
{
	return _rXClass3Frames;
}

void UNIX_FCPortResourceUsage::setRXClass3Frames(Uint64 &value)
{
	_rXClass3Frames = value;
}

Boolean UNIX_FCPortResourceUsage::getTXClass3Frames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_T_X_CLASS_3_FRAMES, getTXClass3Frames());
	return true;
}

Uint64 UNIX_FCPortResourceUsage::getTXClass3Frames() const
{
	return _tXClass3Frames;
}

void UNIX_FCPortResourceUsage::setTXClass3Frames(Uint64 &value)
{
	_tXClass3Frames = value;
}

Boolean UNIX_FCPortResourceUsage::getClass3FramesDiscarded(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASS_3_FRAMES_DISCARDED, getClass3FramesDiscarded());
	return true;
}

Uint64 UNIX_FCPortResourceUsage::getClass3FramesDiscarded() const
{
	return _class3FramesDiscarded;
}

void UNIX_FCPortResourceUsage::setClass3FramesDiscarded(Uint64 &value)
{
	_class3FramesDiscarded = value;
}

Boolean UNIX_FCPortResourceUsage::getRXBroadcastFrames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_R_X_BROADCAST_FRAMES, getRXBroadcastFrames());
	return true;
}

Uint64 UNIX_FCPortResourceUsage::getRXBroadcastFrames() const
{
	return _rXBroadcastFrames;
}

void UNIX_FCPortResourceUsage::setRXBroadcastFrames(Uint64 &value)
{
	_rXBroadcastFrames = value;
}

Boolean UNIX_FCPortResourceUsage::getTXBroadcastFrames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_T_X_BROADCAST_FRAMES, getTXBroadcastFrames());
	return true;
}

Uint64 UNIX_FCPortResourceUsage::getTXBroadcastFrames() const
{
	return _tXBroadcastFrames;
}

void UNIX_FCPortResourceUsage::setTXBroadcastFrames(Uint64 &value)
{
	_tXBroadcastFrames = value;
}

Boolean UNIX_FCPortResourceUsage::getSRRCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_R_R_COUNT, getSRRCount());
	return true;
}

Uint64 UNIX_FCPortResourceUsage::getSRRCount() const
{
	return _sRRCount;
}

void UNIX_FCPortResourceUsage::setSRRCount(Uint64 &value)
{
	_sRRCount = value;
}

Boolean UNIX_FCPortResourceUsage::getAbortCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ABORT_COUNT, getAbortCount());
	return true;
}

Uint64 UNIX_FCPortResourceUsage::getAbortCount() const
{
	return _abortCount;
}

void UNIX_FCPortResourceUsage::setAbortCount(Uint64 &value)
{
	_abortCount = value;
}

Boolean UNIX_FCPortResourceUsage::getMinSRRCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIN_S_R_R_COUNT, getMinSRRCount());
	return true;
}

Uint64 UNIX_FCPortResourceUsage::getMinSRRCount() const
{
	return _minSRRCount;
}

void UNIX_FCPortResourceUsage::setMinSRRCount(Uint64 &value)
{
	_minSRRCount = value;
}

Boolean UNIX_FCPortResourceUsage::getMaxSRRCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_S_R_R_COUNT, getMaxSRRCount());
	return true;
}

Uint64 UNIX_FCPortResourceUsage::getMaxSRRCount() const
{
	return _maxSRRCount;
}

void UNIX_FCPortResourceUsage::setMaxSRRCount(Uint64 &value)
{
	_maxSRRCount = value;
}

Boolean UNIX_FCPortResourceUsage::getMinAbortCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIN_ABORT_COUNT, getMinAbortCount());
	return true;
}

Uint64 UNIX_FCPortResourceUsage::getMinAbortCount() const
{
	return _minAbortCount;
}

void UNIX_FCPortResourceUsage::setMinAbortCount(Uint64 &value)
{
	_minAbortCount = value;
}

Boolean UNIX_FCPortResourceUsage::getMaxAbortCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_ABORT_COUNT, getMaxAbortCount());
	return true;
}

Uint64 UNIX_FCPortResourceUsage::getMaxAbortCount() const
{
	return _maxAbortCount;
}

void UNIX_FCPortResourceUsage::setMaxAbortCount(Uint64 &value)
{
	_maxAbortCount = value;
}


void UNIX_FCPortResourceUsage::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("FCPortResourceUsage");
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
	_sRRCount = Uint64(0);
	_abortCount = Uint64(0);
	_minSRRCount = Uint64(0);
	_maxSRRCount = Uint64(0);
	_minAbortCount = Uint64(0);
	_maxAbortCount = Uint64(0);

}

Boolean UNIX_FCPortResourceUsage::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "SRRCount"))
			{
				Uint64 sRRCountValue;
				property.getValue().get(sRRCountValue);
				setSRRCount(sRRCountValue);
			}
			else if (String::equal(property.getName().getString(), "AbortCount"))
			{
				Uint64 abortCountValue;
				property.getValue().get(abortCountValue);
				setAbortCount(abortCountValue);
			}
			else if (String::equal(property.getName().getString(), "MinSRRCount"))
			{
				Uint64 minSRRCountValue;
				property.getValue().get(minSRRCountValue);
				setMinSRRCount(minSRRCountValue);
			}
			else if (String::equal(property.getName().getString(), "MaxSRRCount"))
			{
				Uint64 maxSRRCountValue;
				property.getValue().get(maxSRRCountValue);
				setMaxSRRCount(maxSRRCountValue);
			}
			else if (String::equal(property.getName().getString(), "MinAbortCount"))
			{
				Uint64 minAbortCountValue;
				property.getValue().get(minAbortCountValue);
				setMinAbortCount(minAbortCountValue);
			}
			else if (String::equal(property.getName().getString(), "MaxAbortCount"))
			{
				Uint64 maxAbortCountValue;
				property.getValue().get(maxAbortCountValue);
				setMaxAbortCount(maxAbortCountValue);
			}
	}
	return true;
}

Uint32 UNIX_FCPortResourceUsage::invokeResetSelectedStats(
		Array<String> &inSelectedStatistics
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ResetSelectedStats */
	
	
	
	return returnValue;
}


Boolean UNIX_FCPortResourceUsage::initialize()
{
	return false;
}

Boolean UNIX_FCPortResourceUsage::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("FCPortResourceUsage");
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
	_sRRCount = Uint64(0);
	_abortCount = Uint64(0);
	_minSRRCount = Uint64(0);
	_maxSRRCount = Uint64(0);
	_minAbortCount = Uint64(0);
	_maxAbortCount = Uint64(0);
	
	return false;
}

Boolean UNIX_FCPortResourceUsage::finalize()
{
	return false;
}


Boolean UNIX_FCPortResourceUsage::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_FCPortResourceUsage::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FCPortResourceUsage::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FCPortResourceUsage::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FCPortResourceUsage::validateInstance()
{
	return true;
}

