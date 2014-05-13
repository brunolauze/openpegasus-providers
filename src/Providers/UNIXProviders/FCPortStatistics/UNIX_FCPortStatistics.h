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


/* **** Version *** */
/*
2.10.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::FC
*/


/* **** Description *** */
/*
FCPortStatistics is the statistics for the FCPort.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_StatisticalData:
				StartStatisticTime DateTime
				StatisticTime DateTime
				SampleInterval DateTime
				RateIntervalEndTime DateTime
				RateIntervalStartTime DateTime

			CIM_NetworkPortStatistics:
				BytesTransmitted UInt64
				BytesReceived UInt64
				PacketsTransmitted UInt64
				PacketsReceived UInt64

			UNIX_FCPortStatistics:
				LIPCount UInt64
				NOSCount UInt64
				ErrorFrames UInt64
				DumpedFrames UInt64
				LinkFailures UInt64
				LossOfSignalCounter UInt64
				LossOfSyncCounter UInt64
				PrimitiveSeqProtocolErrCount UInt64
				CRCErrors UInt64
				InvalidTransmissionWords UInt64
				FramesTooShort UInt64
				FramesTooLong UInt64
				AddressErrors UInt64
				BufferCreditNotProvided UInt64
				BufferCreditNotReceived UInt64
				DelimiterErrors UInt64
				EncodingDisparityErrors UInt64
				LinkResetsReceived UInt64
				LinkResetsTransmitted UInt64
				MulticastFramesReceived UInt64
				MulticastFramesTransmitted UInt64
				FBSYFrames UInt64
				PBSYFrames UInt64
				FRJTFrames UInt64
				PRJTFrames UInt64
				RXClass1Frames UInt64
				TXClass1Frames UInt64
				Class1FBSY UInt64
				Class1PBSY UInt64
				Class1FRJT UInt64
				Class1PRJT UInt64
				RXClass2Frames UInt64
				TXClass2Frames UInt64
				Class2FBSY UInt64
				Class2PBSY UInt64
				Class2FRJT UInt64
				Class2PRJT UInt64
				RXClass3Frames UInt64
				TXClass3Frames UInt64
				Class3FramesDiscarded UInt64
				RXBroadcastFrames UInt64
				TXBroadcastFrames UInt64


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_StatisticalData:
				ResetSelectedStats UInt32

			CIM_NetworkPortStatistics:

			UNIX_FCPortStatistics:


*/

#ifndef __UNIX_FCPORTSTATISTICS_H
#define __UNIX_FCPORTSTATISTICS_H


#include "CIM_NetworkPortStatistics.h"

#include "UNIX_FCPortStatisticsDeps.h"


#ifndef PROPERTY_L_IP_COUNT
#define PROPERTY_L_IP_COUNT \
					"LIPCount"
#endif

#ifndef PROPERTY_N_OS_COUNT
#define PROPERTY_N_OS_COUNT \
					"NOSCount"
#endif

#ifndef PROPERTY_ERROR_FRAMES
#define PROPERTY_ERROR_FRAMES \
					"ErrorFrames"
#endif

#ifndef PROPERTY_DUMPED_FRAMES
#define PROPERTY_DUMPED_FRAMES \
					"DumpedFrames"
#endif

#ifndef PROPERTY_LINK_FAILURES
#define PROPERTY_LINK_FAILURES \
					"LinkFailures"
#endif

#ifndef PROPERTY_LOSS_OF_SIGNAL_COUNTER
#define PROPERTY_LOSS_OF_SIGNAL_COUNTER \
					"LossOfSignalCounter"
#endif

#ifndef PROPERTY_LOSS_OF_SYNC_COUNTER
#define PROPERTY_LOSS_OF_SYNC_COUNTER \
					"LossOfSyncCounter"
#endif

#ifndef PROPERTY_PRIMITIVE_SEQ_PROTOCOL_ERR_COUNT
#define PROPERTY_PRIMITIVE_SEQ_PROTOCOL_ERR_COUNT \
					"PrimitiveSeqProtocolErrCount"
#endif

#ifndef PROPERTY_C_R_C_ERRORS
#define PROPERTY_C_R_C_ERRORS \
					"CRCErrors"
#endif

#ifndef PROPERTY_INVALID_TRANSMISSION_WORDS
#define PROPERTY_INVALID_TRANSMISSION_WORDS \
					"InvalidTransmissionWords"
#endif

#ifndef PROPERTY_FRAMES_TOO_SHORT
#define PROPERTY_FRAMES_TOO_SHORT \
					"FramesTooShort"
#endif

#ifndef PROPERTY_FRAMES_TOO_LONG
#define PROPERTY_FRAMES_TOO_LONG \
					"FramesTooLong"
#endif

#ifndef PROPERTY_ADDRESS_ERRORS
#define PROPERTY_ADDRESS_ERRORS \
					"AddressErrors"
#endif

#ifndef PROPERTY_BUFFER_CREDIT_NOT_PROVIDED
#define PROPERTY_BUFFER_CREDIT_NOT_PROVIDED \
					"BufferCreditNotProvided"
#endif

#ifndef PROPERTY_BUFFER_CREDIT_NOT_RECEIVED
#define PROPERTY_BUFFER_CREDIT_NOT_RECEIVED \
					"BufferCreditNotReceived"
#endif

#ifndef PROPERTY_DELIMITER_ERRORS
#define PROPERTY_DELIMITER_ERRORS \
					"DelimiterErrors"
#endif

#ifndef PROPERTY_ENCODING_DISPARITY_ERRORS
#define PROPERTY_ENCODING_DISPARITY_ERRORS \
					"EncodingDisparityErrors"
#endif

#ifndef PROPERTY_LINK_RESETS_RECEIVED
#define PROPERTY_LINK_RESETS_RECEIVED \
					"LinkResetsReceived"
#endif

#ifndef PROPERTY_LINK_RESETS_TRANSMITTED
#define PROPERTY_LINK_RESETS_TRANSMITTED \
					"LinkResetsTransmitted"
#endif

#ifndef PROPERTY_MULTICAST_FRAMES_RECEIVED
#define PROPERTY_MULTICAST_FRAMES_RECEIVED \
					"MulticastFramesReceived"
#endif

#ifndef PROPERTY_MULTICAST_FRAMES_TRANSMITTED
#define PROPERTY_MULTICAST_FRAMES_TRANSMITTED \
					"MulticastFramesTransmitted"
#endif

#ifndef PROPERTY_F_B_S_Y_FRAMES
#define PROPERTY_F_B_S_Y_FRAMES \
					"FBSYFrames"
#endif

#ifndef PROPERTY_P_B_S_Y_FRAMES
#define PROPERTY_P_B_S_Y_FRAMES \
					"PBSYFrames"
#endif

#ifndef PROPERTY_F_R_J_T_FRAMES
#define PROPERTY_F_R_J_T_FRAMES \
					"FRJTFrames"
#endif

#ifndef PROPERTY_P_R_J_T_FRAMES
#define PROPERTY_P_R_J_T_FRAMES \
					"PRJTFrames"
#endif

#ifndef PROPERTY_R_X_CLASS_1_FRAMES
#define PROPERTY_R_X_CLASS_1_FRAMES \
					"RXClass1Frames"
#endif

#ifndef PROPERTY_T_X_CLASS_1_FRAMES
#define PROPERTY_T_X_CLASS_1_FRAMES \
					"TXClass1Frames"
#endif

#ifndef PROPERTY_CLASS_1_F_B_S_Y
#define PROPERTY_CLASS_1_F_B_S_Y \
					"Class1FBSY"
#endif

#ifndef PROPERTY_CLASS_1_P_B_S_Y
#define PROPERTY_CLASS_1_P_B_S_Y \
					"Class1PBSY"
#endif

#ifndef PROPERTY_CLASS_1_F_R_J_T
#define PROPERTY_CLASS_1_F_R_J_T \
					"Class1FRJT"
#endif

#ifndef PROPERTY_CLASS_1_P_R_J_T
#define PROPERTY_CLASS_1_P_R_J_T \
					"Class1PRJT"
#endif

#ifndef PROPERTY_R_X_CLASS_2_FRAMES
#define PROPERTY_R_X_CLASS_2_FRAMES \
					"RXClass2Frames"
#endif

#ifndef PROPERTY_T_X_CLASS_2_FRAMES
#define PROPERTY_T_X_CLASS_2_FRAMES \
					"TXClass2Frames"
#endif

#ifndef PROPERTY_CLASS_2_F_B_S_Y
#define PROPERTY_CLASS_2_F_B_S_Y \
					"Class2FBSY"
#endif

#ifndef PROPERTY_CLASS_2_P_B_S_Y
#define PROPERTY_CLASS_2_P_B_S_Y \
					"Class2PBSY"
#endif

#ifndef PROPERTY_CLASS_2_F_R_J_T
#define PROPERTY_CLASS_2_F_R_J_T \
					"Class2FRJT"
#endif

#ifndef PROPERTY_CLASS_2_P_R_J_T
#define PROPERTY_CLASS_2_P_R_J_T \
					"Class2PRJT"
#endif

#ifndef PROPERTY_R_X_CLASS_3_FRAMES
#define PROPERTY_R_X_CLASS_3_FRAMES \
					"RXClass3Frames"
#endif

#ifndef PROPERTY_T_X_CLASS_3_FRAMES
#define PROPERTY_T_X_CLASS_3_FRAMES \
					"TXClass3Frames"
#endif

#ifndef PROPERTY_CLASS_3_FRAMES_DISCARDED
#define PROPERTY_CLASS_3_FRAMES_DISCARDED \
					"Class3FramesDiscarded"
#endif

#ifndef PROPERTY_R_X_BROADCAST_FRAMES
#define PROPERTY_R_X_BROADCAST_FRAMES \
					"RXBroadcastFrames"
#endif

#ifndef PROPERTY_T_X_BROADCAST_FRAMES
#define PROPERTY_T_X_BROADCAST_FRAMES \
					"TXBroadcastFrames"
#endif



class UNIX_FCPortStatistics :
	public CIM_NetworkPortStatistics
{
public:

	UNIX_FCPortStatistics();
	~UNIX_FCPortStatistics();

	virtual Boolean initialize();
	virtual Boolean load(int&);
	virtual Boolean finalize();
	virtual Boolean find(const Array<CIMKeyBinding>&);
	virtual Boolean validateKey(CIMKeyBinding&) const;
	virtual void setScope(CIMName);
	virtual void setCIMOMHandle(CIMOMHandle&);
	virtual void clearInstance();
	virtual Boolean loadInstance(const CIMInstance&);
	virtual Boolean createInstance(const OperationContext&);
	virtual Boolean modifyInstance(const OperationContext&);
	virtual Boolean deleteInstance(const OperationContext&);
	virtual Boolean validateInstance();

	virtual Boolean getInstanceID(CIMProperty&) const;
	virtual String getInstanceID() const;
	virtual void setInstanceID(String&);
	virtual Boolean getCaption(CIMProperty&) const;
	virtual String getCaption() const;
	virtual void setCaption(String&);
	virtual Boolean getDescription(CIMProperty&) const;
	virtual String getDescription() const;
	virtual void setDescription(String&);
	virtual Boolean getElementName(CIMProperty&) const;
	virtual String getElementName() const;
	virtual void setElementName(String&);
	virtual Boolean getGeneration(CIMProperty&) const;
	virtual Uint64 getGeneration() const;
	virtual void setGeneration(Uint64&);
	virtual Boolean getStartStatisticTime(CIMProperty&) const;
	virtual CIMDateTime getStartStatisticTime() const;
	virtual void setStartStatisticTime(CIMDateTime&);
	virtual Boolean getStatisticTime(CIMProperty&) const;
	virtual CIMDateTime getStatisticTime() const;
	virtual void setStatisticTime(CIMDateTime&);
	virtual Boolean getSampleInterval(CIMProperty&) const;
	virtual CIMDateTime getSampleInterval() const;
	virtual void setSampleInterval(CIMDateTime&);
	virtual Boolean getRateIntervalEndTime(CIMProperty&) const;
	virtual CIMDateTime getRateIntervalEndTime() const;
	virtual void setRateIntervalEndTime(CIMDateTime&);
	virtual Boolean getRateIntervalStartTime(CIMProperty&) const;
	virtual CIMDateTime getRateIntervalStartTime() const;
	virtual void setRateIntervalStartTime(CIMDateTime&);
	virtual Boolean getBytesTransmitted(CIMProperty&) const;
	virtual Uint64 getBytesTransmitted() const;
	virtual void setBytesTransmitted(Uint64&);
	virtual Boolean getBytesReceived(CIMProperty&) const;
	virtual Uint64 getBytesReceived() const;
	virtual void setBytesReceived(Uint64&);
	virtual Boolean getPacketsTransmitted(CIMProperty&) const;
	virtual Uint64 getPacketsTransmitted() const;
	virtual void setPacketsTransmitted(Uint64&);
	virtual Boolean getPacketsReceived(CIMProperty&) const;
	virtual Uint64 getPacketsReceived() const;
	virtual void setPacketsReceived(Uint64&);
	virtual Boolean getLIPCount(CIMProperty&) const;
	virtual Uint64 getLIPCount() const;
	virtual void setLIPCount(Uint64&);
	virtual Boolean getNOSCount(CIMProperty&) const;
	virtual Uint64 getNOSCount() const;
	virtual void setNOSCount(Uint64&);
	virtual Boolean getErrorFrames(CIMProperty&) const;
	virtual Uint64 getErrorFrames() const;
	virtual void setErrorFrames(Uint64&);
	virtual Boolean getDumpedFrames(CIMProperty&) const;
	virtual Uint64 getDumpedFrames() const;
	virtual void setDumpedFrames(Uint64&);
	virtual Boolean getLinkFailures(CIMProperty&) const;
	virtual Uint64 getLinkFailures() const;
	virtual void setLinkFailures(Uint64&);
	virtual Boolean getLossOfSignalCounter(CIMProperty&) const;
	virtual Uint64 getLossOfSignalCounter() const;
	virtual void setLossOfSignalCounter(Uint64&);
	virtual Boolean getLossOfSyncCounter(CIMProperty&) const;
	virtual Uint64 getLossOfSyncCounter() const;
	virtual void setLossOfSyncCounter(Uint64&);
	virtual Boolean getPrimitiveSeqProtocolErrCount(CIMProperty&) const;
	virtual Uint64 getPrimitiveSeqProtocolErrCount() const;
	virtual void setPrimitiveSeqProtocolErrCount(Uint64&);
	virtual Boolean getCRCErrors(CIMProperty&) const;
	virtual Uint64 getCRCErrors() const;
	virtual void setCRCErrors(Uint64&);
	virtual Boolean getInvalidTransmissionWords(CIMProperty&) const;
	virtual Uint64 getInvalidTransmissionWords() const;
	virtual void setInvalidTransmissionWords(Uint64&);
	virtual Boolean getFramesTooShort(CIMProperty&) const;
	virtual Uint64 getFramesTooShort() const;
	virtual void setFramesTooShort(Uint64&);
	virtual Boolean getFramesTooLong(CIMProperty&) const;
	virtual Uint64 getFramesTooLong() const;
	virtual void setFramesTooLong(Uint64&);
	virtual Boolean getAddressErrors(CIMProperty&) const;
	virtual Uint64 getAddressErrors() const;
	virtual void setAddressErrors(Uint64&);
	virtual Boolean getBufferCreditNotProvided(CIMProperty&) const;
	virtual Uint64 getBufferCreditNotProvided() const;
	virtual void setBufferCreditNotProvided(Uint64&);
	virtual Boolean getBufferCreditNotReceived(CIMProperty&) const;
	virtual Uint64 getBufferCreditNotReceived() const;
	virtual void setBufferCreditNotReceived(Uint64&);
	virtual Boolean getDelimiterErrors(CIMProperty&) const;
	virtual Uint64 getDelimiterErrors() const;
	virtual void setDelimiterErrors(Uint64&);
	virtual Boolean getEncodingDisparityErrors(CIMProperty&) const;
	virtual Uint64 getEncodingDisparityErrors() const;
	virtual void setEncodingDisparityErrors(Uint64&);
	virtual Boolean getLinkResetsReceived(CIMProperty&) const;
	virtual Uint64 getLinkResetsReceived() const;
	virtual void setLinkResetsReceived(Uint64&);
	virtual Boolean getLinkResetsTransmitted(CIMProperty&) const;
	virtual Uint64 getLinkResetsTransmitted() const;
	virtual void setLinkResetsTransmitted(Uint64&);
	virtual Boolean getMulticastFramesReceived(CIMProperty&) const;
	virtual Uint64 getMulticastFramesReceived() const;
	virtual void setMulticastFramesReceived(Uint64&);
	virtual Boolean getMulticastFramesTransmitted(CIMProperty&) const;
	virtual Uint64 getMulticastFramesTransmitted() const;
	virtual void setMulticastFramesTransmitted(Uint64&);
	virtual Boolean getFBSYFrames(CIMProperty&) const;
	virtual Uint64 getFBSYFrames() const;
	virtual void setFBSYFrames(Uint64&);
	virtual Boolean getPBSYFrames(CIMProperty&) const;
	virtual Uint64 getPBSYFrames() const;
	virtual void setPBSYFrames(Uint64&);
	virtual Boolean getFRJTFrames(CIMProperty&) const;
	virtual Uint64 getFRJTFrames() const;
	virtual void setFRJTFrames(Uint64&);
	virtual Boolean getPRJTFrames(CIMProperty&) const;
	virtual Uint64 getPRJTFrames() const;
	virtual void setPRJTFrames(Uint64&);
	virtual Boolean getRXClass1Frames(CIMProperty&) const;
	virtual Uint64 getRXClass1Frames() const;
	virtual void setRXClass1Frames(Uint64&);
	virtual Boolean getTXClass1Frames(CIMProperty&) const;
	virtual Uint64 getTXClass1Frames() const;
	virtual void setTXClass1Frames(Uint64&);
	virtual Boolean getClass1FBSY(CIMProperty&) const;
	virtual Uint64 getClass1FBSY() const;
	virtual void setClass1FBSY(Uint64&);
	virtual Boolean getClass1PBSY(CIMProperty&) const;
	virtual Uint64 getClass1PBSY() const;
	virtual void setClass1PBSY(Uint64&);
	virtual Boolean getClass1FRJT(CIMProperty&) const;
	virtual Uint64 getClass1FRJT() const;
	virtual void setClass1FRJT(Uint64&);
	virtual Boolean getClass1PRJT(CIMProperty&) const;
	virtual Uint64 getClass1PRJT() const;
	virtual void setClass1PRJT(Uint64&);
	virtual Boolean getRXClass2Frames(CIMProperty&) const;
	virtual Uint64 getRXClass2Frames() const;
	virtual void setRXClass2Frames(Uint64&);
	virtual Boolean getTXClass2Frames(CIMProperty&) const;
	virtual Uint64 getTXClass2Frames() const;
	virtual void setTXClass2Frames(Uint64&);
	virtual Boolean getClass2FBSY(CIMProperty&) const;
	virtual Uint64 getClass2FBSY() const;
	virtual void setClass2FBSY(Uint64&);
	virtual Boolean getClass2PBSY(CIMProperty&) const;
	virtual Uint64 getClass2PBSY() const;
	virtual void setClass2PBSY(Uint64&);
	virtual Boolean getClass2FRJT(CIMProperty&) const;
	virtual Uint64 getClass2FRJT() const;
	virtual void setClass2FRJT(Uint64&);
	virtual Boolean getClass2PRJT(CIMProperty&) const;
	virtual Uint64 getClass2PRJT() const;
	virtual void setClass2PRJT(Uint64&);
	virtual Boolean getRXClass3Frames(CIMProperty&) const;
	virtual Uint64 getRXClass3Frames() const;
	virtual void setRXClass3Frames(Uint64&);
	virtual Boolean getTXClass3Frames(CIMProperty&) const;
	virtual Uint64 getTXClass3Frames() const;
	virtual void setTXClass3Frames(Uint64&);
	virtual Boolean getClass3FramesDiscarded(CIMProperty&) const;
	virtual Uint64 getClass3FramesDiscarded() const;
	virtual void setClass3FramesDiscarded(Uint64&);
	virtual Boolean getRXBroadcastFrames(CIMProperty&) const;
	virtual Uint64 getRXBroadcastFrames() const;
	virtual void setRXBroadcastFrames(Uint64&);
	virtual Boolean getTXBroadcastFrames(CIMProperty&) const;
	virtual Uint64 getTXBroadcastFrames() const;
	virtual void setTXBroadcastFrames(Uint64&);

	virtual Uint32 invokeResetSelectedStats(
		Array<String> &inSelectedStatistics
	);



private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	CIMDateTime _startStatisticTime;
	CIMDateTime _statisticTime;
	CIMDateTime _sampleInterval;
	CIMDateTime _rateIntervalEndTime;
	CIMDateTime _rateIntervalStartTime;
	Uint64 _bytesTransmitted;
	Uint64 _bytesReceived;
	Uint64 _packetsTransmitted;
	Uint64 _packetsReceived;
	Uint64 _lIPCount;
	Uint64 _nOSCount;
	Uint64 _errorFrames;
	Uint64 _dumpedFrames;
	Uint64 _linkFailures;
	Uint64 _lossOfSignalCounter;
	Uint64 _lossOfSyncCounter;
	Uint64 _primitiveSeqProtocolErrCount;
	Uint64 _cRCErrors;
	Uint64 _invalidTransmissionWords;
	Uint64 _framesTooShort;
	Uint64 _framesTooLong;
	Uint64 _addressErrors;
	Uint64 _bufferCreditNotProvided;
	Uint64 _bufferCreditNotReceived;
	Uint64 _delimiterErrors;
	Uint64 _encodingDisparityErrors;
	Uint64 _linkResetsReceived;
	Uint64 _linkResetsTransmitted;
	Uint64 _multicastFramesReceived;
	Uint64 _multicastFramesTransmitted;
	Uint64 _fBSYFrames;
	Uint64 _pBSYFrames;
	Uint64 _fRJTFrames;
	Uint64 _pRJTFrames;
	Uint64 _rXClass1Frames;
	Uint64 _tXClass1Frames;
	Uint64 _class1FBSY;
	Uint64 _class1PBSY;
	Uint64 _class1FRJT;
	Uint64 _class1PRJT;
	Uint64 _rXClass2Frames;
	Uint64 _tXClass2Frames;
	Uint64 _class2FBSY;
	Uint64 _class2PBSY;
	Uint64 _class2FRJT;
	Uint64 _class2PRJT;
	Uint64 _rXClass3Frames;
	Uint64 _tXClass3Frames;
	Uint64 _class3FramesDiscarded;
	Uint64 _rXBroadcastFrames;
	Uint64 _tXBroadcastFrames;

#	include "UNIX_FCPortStatisticsPrivate.h"


};

#endif /* UNIX_FCPORTSTATISTICS */
