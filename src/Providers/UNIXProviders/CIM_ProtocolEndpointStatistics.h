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
ProtocolEndpointStatistics is the statistics class for the Protocol Endpoint.
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


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_StatisticalData:
				ResetSelectedStats UInt32

			CIM_ProtocolEndpointStatistics:


*/

#ifndef __CIM_PROTOCOLENDPOINTSTATISTICS_H
#define __CIM_PROTOCOLENDPOINTSTATISTICS_H


#include "CIM_StatisticalData.h"


#ifndef PROPERTY_RECEIVED_P_D_US
#define PROPERTY_RECEIVED_P_D_US \
					"ReceivedPDUs"
#endif

#ifndef PROPERTY_RECEIVED_P_D_U_HEADER_ERRORS
#define PROPERTY_RECEIVED_P_D_U_HEADER_ERRORS \
					"ReceivedPDUHeaderErrors"
#endif

#ifndef PROPERTY_RECEIVED_P_D_U_ADDRESS_ERRORS
#define PROPERTY_RECEIVED_P_D_U_ADDRESS_ERRORS \
					"ReceivedPDUAddressErrors"
#endif

#ifndef PROPERTY_SENT_P_D_US
#define PROPERTY_SENT_P_D_US \
					"SentPDUs"
#endif



class CIM_ProtocolEndpointStatistics :
	public CIM_StatisticalData
{
public:

	virtual Boolean initialize()=0;
	virtual Boolean load(int&)=0;
	virtual Boolean finalize()=0;
	virtual Boolean find(const Array<CIMKeyBinding>&)=0;
	virtual Boolean validateKey(CIMKeyBinding&) const=0;
	virtual void setScope(CIMName)=0;
	virtual void setCIMOMHandle(CIMOMHandle&)=0;
	virtual void clearInstance()=0;
	virtual Boolean loadInstance(const CIMInstance&)=0;
	virtual Boolean createInstance(const OperationContext&)=0;
	virtual Boolean modifyInstance(const OperationContext&)=0;
	virtual Boolean deleteInstance(const OperationContext&)=0;
	virtual Boolean validateInstance()=0;

	virtual Boolean getReceivedPDUs(CIMProperty&) const=0;
	virtual Uint32 getReceivedPDUs() const=0;
	virtual void setReceivedPDUs(Uint32&)=0;
	virtual Boolean getReceivedPDUHeaderErrors(CIMProperty&) const=0;
	virtual Uint32 getReceivedPDUHeaderErrors() const=0;
	virtual void setReceivedPDUHeaderErrors(Uint32&)=0;
	virtual Boolean getReceivedPDUAddressErrors(CIMProperty&) const=0;
	virtual Uint32 getReceivedPDUAddressErrors() const=0;
	virtual void setReceivedPDUAddressErrors(Uint32&)=0;
	virtual Boolean getSentPDUs(CIMProperty&) const=0;
	virtual Uint32 getSentPDUs() const=0;
	virtual void setSentPDUs(Uint32&)=0;

	virtual Uint32 invokeResetSelectedStats(
		Array<String> &inSelectedStatistics
	)=0;



private:

};

#endif /* CIM_PROTOCOLENDPOINTSTATISTICS */
