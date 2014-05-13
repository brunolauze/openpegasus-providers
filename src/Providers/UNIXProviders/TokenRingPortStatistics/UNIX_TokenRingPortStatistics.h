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
CIM::Device::Ports
*/


/* **** Description *** */
/*
The TokenRingPortStatistics class describes the statistics for the TokenRingPort.
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

			UNIX_TokenRingPortStatistics:
				BurstErrors UInt32
				ACErrors UInt32
				AbortTransErrors UInt32
				InternalErrors UInt32
				LostFrameErrors UInt32
				ReceiveCongestions UInt32
				FrameCopiedErrors UInt32
				TokenErrors UInt32
				SoftErrors UInt32
				HardErrors UInt32
				SignalLossCount UInt32
				TransmittedBeacons UInt32
				Recoverys UInt32
				LobeWires UInt32
				Removes UInt32
				Singles UInt32
				FrequencyErrors UInt32


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_StatisticalData:
				ResetSelectedStats UInt32

			CIM_NetworkPortStatistics:

			UNIX_TokenRingPortStatistics:


*/

#ifndef __UNIX_TOKENRINGPORTSTATISTICS_H
#define __UNIX_TOKENRINGPORTSTATISTICS_H


#include "CIM_NetworkPortStatistics.h"

#include "UNIX_TokenRingPortStatisticsDeps.h"


#ifndef PROPERTY_BURST_ERRORS
#define PROPERTY_BURST_ERRORS \
					"BurstErrors"
#endif

#ifndef PROPERTY_A_C_ERRORS
#define PROPERTY_A_C_ERRORS \
					"ACErrors"
#endif

#ifndef PROPERTY_ABORT_TRANS_ERRORS
#define PROPERTY_ABORT_TRANS_ERRORS \
					"AbortTransErrors"
#endif

#ifndef PROPERTY_INTERNAL_ERRORS
#define PROPERTY_INTERNAL_ERRORS \
					"InternalErrors"
#endif

#ifndef PROPERTY_LOST_FRAME_ERRORS
#define PROPERTY_LOST_FRAME_ERRORS \
					"LostFrameErrors"
#endif

#ifndef PROPERTY_RECEIVE_CONGESTIONS
#define PROPERTY_RECEIVE_CONGESTIONS \
					"ReceiveCongestions"
#endif

#ifndef PROPERTY_FRAME_COPIED_ERRORS
#define PROPERTY_FRAME_COPIED_ERRORS \
					"FrameCopiedErrors"
#endif

#ifndef PROPERTY_TOKEN_ERRORS
#define PROPERTY_TOKEN_ERRORS \
					"TokenErrors"
#endif

#ifndef PROPERTY_SOFT_ERRORS
#define PROPERTY_SOFT_ERRORS \
					"SoftErrors"
#endif

#ifndef PROPERTY_HARD_ERRORS
#define PROPERTY_HARD_ERRORS \
					"HardErrors"
#endif

#ifndef PROPERTY_SIGNAL_LOSS_COUNT
#define PROPERTY_SIGNAL_LOSS_COUNT \
					"SignalLossCount"
#endif

#ifndef PROPERTY_TRANSMITTED_BEACONS
#define PROPERTY_TRANSMITTED_BEACONS \
					"TransmittedBeacons"
#endif

#ifndef PROPERTY_RECOVERYS
#define PROPERTY_RECOVERYS \
					"Recoverys"
#endif

#ifndef PROPERTY_LOBE_WIRES
#define PROPERTY_LOBE_WIRES \
					"LobeWires"
#endif

#ifndef PROPERTY_REMOVES
#define PROPERTY_REMOVES \
					"Removes"
#endif

#ifndef PROPERTY_SINGLES
#define PROPERTY_SINGLES \
					"Singles"
#endif

#ifndef PROPERTY_FREQUENCY_ERRORS
#define PROPERTY_FREQUENCY_ERRORS \
					"FrequencyErrors"
#endif



class UNIX_TokenRingPortStatistics :
	public CIM_NetworkPortStatistics
{
public:

	UNIX_TokenRingPortStatistics();
	~UNIX_TokenRingPortStatistics();

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
	virtual Boolean getBurstErrors(CIMProperty&) const;
	virtual Uint32 getBurstErrors() const;
	virtual void setBurstErrors(Uint32&);
	virtual Boolean getACErrors(CIMProperty&) const;
	virtual Uint32 getACErrors() const;
	virtual void setACErrors(Uint32&);
	virtual Boolean getAbortTransErrors(CIMProperty&) const;
	virtual Uint32 getAbortTransErrors() const;
	virtual void setAbortTransErrors(Uint32&);
	virtual Boolean getInternalErrors(CIMProperty&) const;
	virtual Uint32 getInternalErrors() const;
	virtual void setInternalErrors(Uint32&);
	virtual Boolean getLostFrameErrors(CIMProperty&) const;
	virtual Uint32 getLostFrameErrors() const;
	virtual void setLostFrameErrors(Uint32&);
	virtual Boolean getReceiveCongestions(CIMProperty&) const;
	virtual Uint32 getReceiveCongestions() const;
	virtual void setReceiveCongestions(Uint32&);
	virtual Boolean getFrameCopiedErrors(CIMProperty&) const;
	virtual Uint32 getFrameCopiedErrors() const;
	virtual void setFrameCopiedErrors(Uint32&);
	virtual Boolean getTokenErrors(CIMProperty&) const;
	virtual Uint32 getTokenErrors() const;
	virtual void setTokenErrors(Uint32&);
	virtual Boolean getSoftErrors(CIMProperty&) const;
	virtual Uint32 getSoftErrors() const;
	virtual void setSoftErrors(Uint32&);
	virtual Boolean getHardErrors(CIMProperty&) const;
	virtual Uint32 getHardErrors() const;
	virtual void setHardErrors(Uint32&);
	virtual Boolean getSignalLossCount(CIMProperty&) const;
	virtual Uint32 getSignalLossCount() const;
	virtual void setSignalLossCount(Uint32&);
	virtual Boolean getTransmittedBeacons(CIMProperty&) const;
	virtual Uint32 getTransmittedBeacons() const;
	virtual void setTransmittedBeacons(Uint32&);
	virtual Boolean getRecoverys(CIMProperty&) const;
	virtual Uint32 getRecoverys() const;
	virtual void setRecoverys(Uint32&);
	virtual Boolean getLobeWires(CIMProperty&) const;
	virtual Uint32 getLobeWires() const;
	virtual void setLobeWires(Uint32&);
	virtual Boolean getRemoves(CIMProperty&) const;
	virtual Uint32 getRemoves() const;
	virtual void setRemoves(Uint32&);
	virtual Boolean getSingles(CIMProperty&) const;
	virtual Uint32 getSingles() const;
	virtual void setSingles(Uint32&);
	virtual Boolean getFrequencyErrors(CIMProperty&) const;
	virtual Uint32 getFrequencyErrors() const;
	virtual void setFrequencyErrors(Uint32&);

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
	Uint32 _burstErrors;
	Uint32 _aCErrors;
	Uint32 _abortTransErrors;
	Uint32 _internalErrors;
	Uint32 _lostFrameErrors;
	Uint32 _receiveCongestions;
	Uint32 _frameCopiedErrors;
	Uint32 _tokenErrors;
	Uint32 _softErrors;
	Uint32 _hardErrors;
	Uint32 _signalLossCount;
	Uint32 _transmittedBeacons;
	Uint32 _recoverys;
	Uint32 _lobeWires;
	Uint32 _removes;
	Uint32 _singles;
	Uint32 _frequencyErrors;

#	include "UNIX_TokenRingPortStatisticsPrivate.h"


};

#endif /* UNIX_TOKENRINGPORTSTATISTICS */
