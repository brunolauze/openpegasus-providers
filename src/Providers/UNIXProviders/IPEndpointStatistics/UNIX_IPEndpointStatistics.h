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
CIM_IPEndpointStatistics records the statistics for an associated CIM_IPProtocolEndpoint.
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

			CIM_ProtocolEndpointStatistics:
				ReceivedPDUs UInt32
				ReceivedPDUHeaderErrors UInt32
				ReceivedPDUAddressErrors UInt32
				SentPDUs UInt32

			UNIX_IPEndpointStatistics:
				ReceivedPDUForwards UInt32
				ReceivedPDUUnknownProtocolErrors UInt32
				ReceivedPDUDiscards UInt32
				PDUDelivers UInt32
				SentPDUDiscards UInt32
				SentPDUNoRouteErrors UInt32
				ReassemblyRequired UInt32
				ReassembledPackets UInt32
				ReassemblyFailed UInt32
				Fragmentation UInt32
				FragmentationFails UInt32
				FragmentedPDUsCreates UInt32
				RouteEntriesDiscards UInt32


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_StatisticalData:
				ResetSelectedStats UInt32

			CIM_ProtocolEndpointStatistics:

			UNIX_IPEndpointStatistics:


*/

#ifndef __UNIX_IPENDPOINTSTATISTICS_H
#define __UNIX_IPENDPOINTSTATISTICS_H


#include "CIM_ProtocolEndpointStatistics.h"

#include "UNIX_IPEndpointStatisticsDeps.h"


#ifndef PROPERTY_RECEIVED_P_D_U_FORWARDS
#define PROPERTY_RECEIVED_P_D_U_FORWARDS \
					"ReceivedPDUForwards"
#endif

#ifndef PROPERTY_RECEIVED_P_D_U_UNKNOWN_PROTOCOL_ERRORS
#define PROPERTY_RECEIVED_P_D_U_UNKNOWN_PROTOCOL_ERRORS \
					"ReceivedPDUUnknownProtocolErrors"
#endif

#ifndef PROPERTY_RECEIVED_P_D_U_DISCARDS
#define PROPERTY_RECEIVED_P_D_U_DISCARDS \
					"ReceivedPDUDiscards"
#endif

#ifndef PROPERTY_P_D_U_DELIVERS
#define PROPERTY_P_D_U_DELIVERS \
					"PDUDelivers"
#endif

#ifndef PROPERTY_SENT_P_D_U_DISCARDS
#define PROPERTY_SENT_P_D_U_DISCARDS \
					"SentPDUDiscards"
#endif

#ifndef PROPERTY_SENT_P_D_U_NO_ROUTE_ERRORS
#define PROPERTY_SENT_P_D_U_NO_ROUTE_ERRORS \
					"SentPDUNoRouteErrors"
#endif

#ifndef PROPERTY_REASSEMBLY_REQUIRED
#define PROPERTY_REASSEMBLY_REQUIRED \
					"ReassemblyRequired"
#endif

#ifndef PROPERTY_REASSEMBLED_PACKETS
#define PROPERTY_REASSEMBLED_PACKETS \
					"ReassembledPackets"
#endif

#ifndef PROPERTY_REASSEMBLY_FAILED
#define PROPERTY_REASSEMBLY_FAILED \
					"ReassemblyFailed"
#endif

#ifndef PROPERTY_FRAGMENTATION
#define PROPERTY_FRAGMENTATION \
					"Fragmentation"
#endif

#ifndef PROPERTY_FRAGMENTATION_FAILS
#define PROPERTY_FRAGMENTATION_FAILS \
					"FragmentationFails"
#endif

#ifndef PROPERTY_FRAGMENTED_P_D_US_CREATES
#define PROPERTY_FRAGMENTED_P_D_US_CREATES \
					"FragmentedPDUsCreates"
#endif

#ifndef PROPERTY_ROUTE_ENTRIES_DISCARDS
#define PROPERTY_ROUTE_ENTRIES_DISCARDS \
					"RouteEntriesDiscards"
#endif



class UNIX_IPEndpointStatistics :
	public CIM_ProtocolEndpointStatistics
{
public:

	UNIX_IPEndpointStatistics();
	~UNIX_IPEndpointStatistics();

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
	virtual Boolean getReceivedPDUs(CIMProperty&) const;
	virtual Uint32 getReceivedPDUs() const;
	virtual void setReceivedPDUs(Uint32&);
	virtual Boolean getReceivedPDUHeaderErrors(CIMProperty&) const;
	virtual Uint32 getReceivedPDUHeaderErrors() const;
	virtual void setReceivedPDUHeaderErrors(Uint32&);
	virtual Boolean getReceivedPDUAddressErrors(CIMProperty&) const;
	virtual Uint32 getReceivedPDUAddressErrors() const;
	virtual void setReceivedPDUAddressErrors(Uint32&);
	virtual Boolean getSentPDUs(CIMProperty&) const;
	virtual Uint32 getSentPDUs() const;
	virtual void setSentPDUs(Uint32&);
	virtual Boolean getReceivedPDUForwards(CIMProperty&) const;
	virtual Uint32 getReceivedPDUForwards() const;
	virtual void setReceivedPDUForwards(Uint32&);
	virtual Boolean getReceivedPDUUnknownProtocolErrors(CIMProperty&) const;
	virtual Uint32 getReceivedPDUUnknownProtocolErrors() const;
	virtual void setReceivedPDUUnknownProtocolErrors(Uint32&);
	virtual Boolean getReceivedPDUDiscards(CIMProperty&) const;
	virtual Uint32 getReceivedPDUDiscards() const;
	virtual void setReceivedPDUDiscards(Uint32&);
	virtual Boolean getPDUDelivers(CIMProperty&) const;
	virtual Uint32 getPDUDelivers() const;
	virtual void setPDUDelivers(Uint32&);
	virtual Boolean getSentPDUDiscards(CIMProperty&) const;
	virtual Uint32 getSentPDUDiscards() const;
	virtual void setSentPDUDiscards(Uint32&);
	virtual Boolean getSentPDUNoRouteErrors(CIMProperty&) const;
	virtual Uint32 getSentPDUNoRouteErrors() const;
	virtual void setSentPDUNoRouteErrors(Uint32&);
	virtual Boolean getReassemblyRequired(CIMProperty&) const;
	virtual Uint32 getReassemblyRequired() const;
	virtual void setReassemblyRequired(Uint32&);
	virtual Boolean getReassembledPackets(CIMProperty&) const;
	virtual Uint32 getReassembledPackets() const;
	virtual void setReassembledPackets(Uint32&);
	virtual Boolean getReassemblyFailed(CIMProperty&) const;
	virtual Uint32 getReassemblyFailed() const;
	virtual void setReassemblyFailed(Uint32&);
	virtual Boolean getFragmentation(CIMProperty&) const;
	virtual Uint32 getFragmentation() const;
	virtual void setFragmentation(Uint32&);
	virtual Boolean getFragmentationFails(CIMProperty&) const;
	virtual Uint32 getFragmentationFails() const;
	virtual void setFragmentationFails(Uint32&);
	virtual Boolean getFragmentedPDUsCreates(CIMProperty&) const;
	virtual Uint32 getFragmentedPDUsCreates() const;
	virtual void setFragmentedPDUsCreates(Uint32&);
	virtual Boolean getRouteEntriesDiscards(CIMProperty&) const;
	virtual Uint32 getRouteEntriesDiscards() const;
	virtual void setRouteEntriesDiscards(Uint32&);

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
	Uint32 _receivedPDUs;
	Uint32 _receivedPDUHeaderErrors;
	Uint32 _receivedPDUAddressErrors;
	Uint32 _sentPDUs;
	Uint32 _receivedPDUForwards;
	Uint32 _receivedPDUUnknownProtocolErrors;
	Uint32 _receivedPDUDiscards;
	Uint32 _pDUDelivers;
	Uint32 _sentPDUDiscards;
	Uint32 _sentPDUNoRouteErrors;
	Uint32 _reassemblyRequired;
	Uint32 _reassembledPackets;
	Uint32 _reassemblyFailed;
	Uint32 _fragmentation;
	Uint32 _fragmentationFails;
	Uint32 _fragmentedPDUsCreates;
	Uint32 _routeEntriesDiscards;

#	include "UNIX_IPEndpointStatisticsPrivate.h"


};

#endif /* UNIX_IPENDPOINTSTATISTICS */
