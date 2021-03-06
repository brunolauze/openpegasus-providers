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
2.7.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Network::BGP
*/


/* **** Description *** */
/*
This class contains statistical information for a connection on a BGPProtocolEndpoint. It is defined as a subclass of StatisticalData and associated with the Endpoint using the relationship, ElementStatisticalData.
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

			UNIX_BGPEndpointStatistics:
				InUpdates UInt32
				OutUpdates UInt32
				InTotalMessages UInt32
				OutTotalMessages UInt32
				LastError UInt8
				FsmEstablishedTransitions UInt32
				FsmEstablishedTime UInt32
				InUpdateElapsedTime UInt32


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_StatisticalData:
				ResetSelectedStats UInt32

			UNIX_BGPEndpointStatistics:


*/

#ifndef __UNIX_BGPENDPOINTSTATISTICS_H
#define __UNIX_BGPENDPOINTSTATISTICS_H


#include "CIM_StatisticalData.h"

#include "UNIX_BGPEndpointStatisticsDeps.h"


#ifndef PROPERTY_IN_UPDATES
#define PROPERTY_IN_UPDATES \
					"InUpdates"
#endif

#ifndef PROPERTY_OUT_UPDATES
#define PROPERTY_OUT_UPDATES \
					"OutUpdates"
#endif

#ifndef PROPERTY_IN_TOTAL_MESSAGES
#define PROPERTY_IN_TOTAL_MESSAGES \
					"InTotalMessages"
#endif

#ifndef PROPERTY_OUT_TOTAL_MESSAGES
#define PROPERTY_OUT_TOTAL_MESSAGES \
					"OutTotalMessages"
#endif

#ifndef PROPERTY_LAST_ERROR
#define PROPERTY_LAST_ERROR \
					"LastError"
#endif

#ifndef PROPERTY_FSM_ESTABLISHED_TRANSITIONS
#define PROPERTY_FSM_ESTABLISHED_TRANSITIONS \
					"FsmEstablishedTransitions"
#endif

#ifndef PROPERTY_FSM_ESTABLISHED_TIME
#define PROPERTY_FSM_ESTABLISHED_TIME \
					"FsmEstablishedTime"
#endif

#ifndef PROPERTY_IN_UPDATE_ELAPSED_TIME
#define PROPERTY_IN_UPDATE_ELAPSED_TIME \
					"InUpdateElapsedTime"
#endif



class UNIX_BGPEndpointStatistics :
	public CIM_StatisticalData
{
public:

	UNIX_BGPEndpointStatistics();
	~UNIX_BGPEndpointStatistics();

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
	virtual Boolean getInUpdates(CIMProperty&) const;
	virtual Uint32 getInUpdates() const;
	virtual void setInUpdates(Uint32&);
	virtual Boolean getOutUpdates(CIMProperty&) const;
	virtual Uint32 getOutUpdates() const;
	virtual void setOutUpdates(Uint32&);
	virtual Boolean getInTotalMessages(CIMProperty&) const;
	virtual Uint32 getInTotalMessages() const;
	virtual void setInTotalMessages(Uint32&);
	virtual Boolean getOutTotalMessages(CIMProperty&) const;
	virtual Uint32 getOutTotalMessages() const;
	virtual void setOutTotalMessages(Uint32&);
	virtual Boolean getLastError(CIMProperty&) const;
	virtual Array<Uint8> getLastError() const;
	virtual void setLastError(Array<Uint8>&);
	virtual Boolean getFsmEstablishedTransitions(CIMProperty&) const;
	virtual Uint32 getFsmEstablishedTransitions() const;
	virtual void setFsmEstablishedTransitions(Uint32&);
	virtual Boolean getFsmEstablishedTime(CIMProperty&) const;
	virtual Uint32 getFsmEstablishedTime() const;
	virtual void setFsmEstablishedTime(Uint32&);
	virtual Boolean getInUpdateElapsedTime(CIMProperty&) const;
	virtual Uint32 getInUpdateElapsedTime() const;
	virtual void setInUpdateElapsedTime(Uint32&);

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
	Uint32 _inUpdates;
	Uint32 _outUpdates;
	Uint32 _inTotalMessages;
	Uint32 _outTotalMessages;
	Array<Uint8> _lastError;
	Uint32 _fsmEstablishedTransitions;
	Uint32 _fsmEstablishedTime;
	Uint32 _inUpdateElapsedTime;

#	include "UNIX_BGPEndpointStatisticsPrivate.h"


};

#endif /* UNIX_BGPENDPOINTSTATISTICS */
