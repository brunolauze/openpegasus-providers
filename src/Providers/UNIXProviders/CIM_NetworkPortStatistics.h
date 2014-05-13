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
The NetworkPortStatistics class describes the statistics for the NetworkPort.
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


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_StatisticalData:
				ResetSelectedStats UInt32

			CIM_NetworkPortStatistics:


*/

#ifndef __CIM_NETWORKPORTSTATISTICS_H
#define __CIM_NETWORKPORTSTATISTICS_H


#include "CIM_StatisticalData.h"


#ifndef PROPERTY_BYTES_TRANSMITTED
#define PROPERTY_BYTES_TRANSMITTED \
					"BytesTransmitted"
#endif

#ifndef PROPERTY_BYTES_RECEIVED
#define PROPERTY_BYTES_RECEIVED \
					"BytesReceived"
#endif

#ifndef PROPERTY_PACKETS_TRANSMITTED
#define PROPERTY_PACKETS_TRANSMITTED \
					"PacketsTransmitted"
#endif

#ifndef PROPERTY_PACKETS_RECEIVED
#define PROPERTY_PACKETS_RECEIVED \
					"PacketsReceived"
#endif



class CIM_NetworkPortStatistics :
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

	virtual Boolean getBytesTransmitted(CIMProperty&) const=0;
	virtual Uint64 getBytesTransmitted() const=0;
	virtual void setBytesTransmitted(Uint64&)=0;
	virtual Boolean getBytesReceived(CIMProperty&) const=0;
	virtual Uint64 getBytesReceived() const=0;
	virtual void setBytesReceived(Uint64&)=0;
	virtual Boolean getPacketsTransmitted(CIMProperty&) const=0;
	virtual Uint64 getPacketsTransmitted() const=0;
	virtual void setPacketsTransmitted(Uint64&)=0;
	virtual Boolean getPacketsReceived(CIMProperty&) const=0;
	virtual Uint64 getPacketsReceived() const=0;
	virtual void setPacketsReceived(Uint64&)=0;

	virtual Uint32 invokeResetSelectedStats(
		Array<String> &inSelectedStatistics
	)=0;



private:

};

#endif /* CIM_NETWORKPORTSTATISTICS */
