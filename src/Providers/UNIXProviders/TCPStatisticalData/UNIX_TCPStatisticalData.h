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


/* **** Experimental *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.8.1000
*/


/* **** UMLPackagePath *** */
/*
CIM::Network::ChannelExtender
*/


/* **** Description *** */
/*
TCPStatisticalData is the statistics class for a TCP connection group which belongs to the transport layer of the ComputerSystem or more granular to TCP NetworkPipe.
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

			UNIX_TCPStatisticalData:
				ActiveOpenConnections UInt32
				PassiveOpenConnections UInt32
				AttemptsFails UInt32
				EstablishedResets UInt32
				EstablishedConnections UInt32
				ReceivedSegments UInt32
				SentSegments UInt32
				RetransmittedSegments UInt32
				ReceivedSegmentsInError UInt32
				SentResetSegments UInt32


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_StatisticalData:
				ResetSelectedStats UInt32

			UNIX_TCPStatisticalData:


*/

#ifndef __UNIX_TCPSTATISTICALDATA_H
#define __UNIX_TCPSTATISTICALDATA_H


#include "CIM_StatisticalData.h"

#include "UNIX_TCPStatisticalDataDeps.h"


#ifndef PROPERTY_ACTIVE_OPEN_CONNECTIONS
#define PROPERTY_ACTIVE_OPEN_CONNECTIONS \
					"ActiveOpenConnections"
#endif

#ifndef PROPERTY_PASSIVE_OPEN_CONNECTIONS
#define PROPERTY_PASSIVE_OPEN_CONNECTIONS \
					"PassiveOpenConnections"
#endif

#ifndef PROPERTY_ATTEMPTS_FAILS
#define PROPERTY_ATTEMPTS_FAILS \
					"AttemptsFails"
#endif

#ifndef PROPERTY_ESTABLISHED_RESETS
#define PROPERTY_ESTABLISHED_RESETS \
					"EstablishedResets"
#endif

#ifndef PROPERTY_ESTABLISHED_CONNECTIONS
#define PROPERTY_ESTABLISHED_CONNECTIONS \
					"EstablishedConnections"
#endif

#ifndef PROPERTY_RECEIVED_SEGMENTS
#define PROPERTY_RECEIVED_SEGMENTS \
					"ReceivedSegments"
#endif

#ifndef PROPERTY_SENT_SEGMENTS
#define PROPERTY_SENT_SEGMENTS \
					"SentSegments"
#endif

#ifndef PROPERTY_RETRANSMITTED_SEGMENTS
#define PROPERTY_RETRANSMITTED_SEGMENTS \
					"RetransmittedSegments"
#endif

#ifndef PROPERTY_RECEIVED_SEGMENTS_IN_ERROR
#define PROPERTY_RECEIVED_SEGMENTS_IN_ERROR \
					"ReceivedSegmentsInError"
#endif

#ifndef PROPERTY_SENT_RESET_SEGMENTS
#define PROPERTY_SENT_RESET_SEGMENTS \
					"SentResetSegments"
#endif



class UNIX_TCPStatisticalData :
	public CIM_StatisticalData
{
public:

	UNIX_TCPStatisticalData();
	~UNIX_TCPStatisticalData();

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
	virtual Boolean getActiveOpenConnections(CIMProperty&) const;
	virtual Uint32 getActiveOpenConnections() const;
	virtual void setActiveOpenConnections(Uint32&);
	virtual Boolean getPassiveOpenConnections(CIMProperty&) const;
	virtual Uint32 getPassiveOpenConnections() const;
	virtual void setPassiveOpenConnections(Uint32&);
	virtual Boolean getAttemptsFails(CIMProperty&) const;
	virtual Uint32 getAttemptsFails() const;
	virtual void setAttemptsFails(Uint32&);
	virtual Boolean getEstablishedResets(CIMProperty&) const;
	virtual Uint32 getEstablishedResets() const;
	virtual void setEstablishedResets(Uint32&);
	virtual Boolean getEstablishedConnections(CIMProperty&) const;
	virtual Uint32 getEstablishedConnections() const;
	virtual void setEstablishedConnections(Uint32&);
	virtual Boolean getReceivedSegments(CIMProperty&) const;
	virtual Uint32 getReceivedSegments() const;
	virtual void setReceivedSegments(Uint32&);
	virtual Boolean getSentSegments(CIMProperty&) const;
	virtual Uint32 getSentSegments() const;
	virtual void setSentSegments(Uint32&);
	virtual Boolean getRetransmittedSegments(CIMProperty&) const;
	virtual Uint32 getRetransmittedSegments() const;
	virtual void setRetransmittedSegments(Uint32&);
	virtual Boolean getReceivedSegmentsInError(CIMProperty&) const;
	virtual Uint32 getReceivedSegmentsInError() const;
	virtual void setReceivedSegmentsInError(Uint32&);
	virtual Boolean getSentResetSegments(CIMProperty&) const;
	virtual Uint32 getSentResetSegments() const;
	virtual void setSentResetSegments(Uint32&);

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
	Uint32 _activeOpenConnections;
	Uint32 _passiveOpenConnections;
	Uint32 _attemptsFails;
	Uint32 _establishedResets;
	Uint32 _establishedConnections;
	Uint32 _receivedSegments;
	Uint32 _sentSegments;
	Uint32 _retransmittedSegments;
	Uint32 _receivedSegmentsInError;
	Uint32 _sentResetSegments;

#	include "UNIX_TCPStatisticalDataPrivate.h"


};

#endif /* UNIX_TCPSTATISTICALDATA */
