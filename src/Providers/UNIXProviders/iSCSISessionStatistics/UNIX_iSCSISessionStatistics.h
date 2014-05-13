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
CIM::Network::iSCSI
*/


/* **** Description *** */
/*
Traffic and error statistics for an iSCSI Session. An instance of this class will be associated by ElementStatisticalData to the instance of iSCSISession.
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

			UNIX_iSCSISessionStatistics:
				CommandPDUsTransferred UInt64
				ResponsePDUsTransferred UInt64
				BytesTransmitted UInt64
				BytesReceived UInt64
				DigestErrors UInt64
				ConnectionTimeoutErrors UInt64


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_StatisticalData:
				ResetSelectedStats UInt32

			UNIX_iSCSISessionStatistics:


*/

#ifndef __UNIX_ISCSISESSIONSTATISTICS_H
#define __UNIX_ISCSISESSIONSTATISTICS_H


#include "CIM_StatisticalData.h"

#include "UNIX_iSCSISessionStatisticsDeps.h"


#ifndef PROPERTY_COMMAND_P_D_US_TRANSFERRED
#define PROPERTY_COMMAND_P_D_US_TRANSFERRED \
					"CommandPDUsTransferred"
#endif

#ifndef PROPERTY_RESPONSE_P_D_US_TRANSFERRED
#define PROPERTY_RESPONSE_P_D_US_TRANSFERRED \
					"ResponsePDUsTransferred"
#endif

#ifndef PROPERTY_BYTES_TRANSMITTED
#define PROPERTY_BYTES_TRANSMITTED \
					"BytesTransmitted"
#endif

#ifndef PROPERTY_BYTES_RECEIVED
#define PROPERTY_BYTES_RECEIVED \
					"BytesReceived"
#endif

#ifndef PROPERTY_DIGEST_ERRORS
#define PROPERTY_DIGEST_ERRORS \
					"DigestErrors"
#endif

#ifndef PROPERTY_CONNECTION_TIMEOUT_ERRORS
#define PROPERTY_CONNECTION_TIMEOUT_ERRORS \
					"ConnectionTimeoutErrors"
#endif



class UNIX_iSCSISessionStatistics :
	public CIM_StatisticalData
{
public:

	UNIX_iSCSISessionStatistics();
	~UNIX_iSCSISessionStatistics();

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
	virtual Boolean getCommandPDUsTransferred(CIMProperty&) const;
	virtual Uint64 getCommandPDUsTransferred() const;
	virtual void setCommandPDUsTransferred(Uint64&);
	virtual Boolean getResponsePDUsTransferred(CIMProperty&) const;
	virtual Uint64 getResponsePDUsTransferred() const;
	virtual void setResponsePDUsTransferred(Uint64&);
	virtual Boolean getBytesTransmitted(CIMProperty&) const;
	virtual Uint64 getBytesTransmitted() const;
	virtual void setBytesTransmitted(Uint64&);
	virtual Boolean getBytesReceived(CIMProperty&) const;
	virtual Uint64 getBytesReceived() const;
	virtual void setBytesReceived(Uint64&);
	virtual Boolean getDigestErrors(CIMProperty&) const;
	virtual Uint64 getDigestErrors() const;
	virtual void setDigestErrors(Uint64&);
	virtual Boolean getConnectionTimeoutErrors(CIMProperty&) const;
	virtual Uint64 getConnectionTimeoutErrors() const;
	virtual void setConnectionTimeoutErrors(Uint64&);

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
	Uint64 _commandPDUsTransferred;
	Uint64 _responsePDUsTransferred;
	Uint64 _bytesTransmitted;
	Uint64 _bytesReceived;
	Uint64 _digestErrors;
	Uint64 _connectionTimeoutErrors;

#	include "UNIX_iSCSISessionStatisticsPrivate.h"


};

#endif /* UNIX_ISCSISESSIONSTATISTICS */
