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
2.11.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Network::iSCSI
*/


/* **** Description *** */
/*
Failure Statistics for Sessions associated with a iSCSI Node. An instance of this class will be associated by ElementStatisticalData to an instance of SCSIProtocolController representing an iSCSI Node. These statistics are associated to a Node since they describe the aggregated Session data for all failed Sessions associated to iSCSI protocol endpoints used by the Node.
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

			UNIX_iSCSISessionFailures:
				SessionFailures UInt64
				LastSessionFailureType UInt16
				OtherLastSessionFailureType String
				LastSessionFailureRemoteNodeName String
				SessionDigestFailures UInt64
				SessionConnectionTimeoutFailures UInt64
				SessionFormatErrors UInt64


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_StatisticalData:
				ResetSelectedStats UInt32

			UNIX_iSCSISessionFailures:


*/

#ifndef __UNIX_ISCSISESSIONFAILURES_H
#define __UNIX_ISCSISESSIONFAILURES_H


#include "CIM_StatisticalData.h"

#include "UNIX_iSCSISessionFailuresDeps.h"


#ifndef PROPERTY_SESSION_FAILURES
#define PROPERTY_SESSION_FAILURES \
					"SessionFailures"
#endif

#ifndef PROPERTY_LAST_SESSION_FAILURE_TYPE
#define PROPERTY_LAST_SESSION_FAILURE_TYPE \
					"LastSessionFailureType"
#endif

#ifndef PROPERTY_OTHER_LAST_SESSION_FAILURE_TYPE
#define PROPERTY_OTHER_LAST_SESSION_FAILURE_TYPE \
					"OtherLastSessionFailureType"
#endif

#ifndef PROPERTY_LAST_SESSION_FAILURE_REMOTE_NODE_NAME
#define PROPERTY_LAST_SESSION_FAILURE_REMOTE_NODE_NAME \
					"LastSessionFailureRemoteNodeName"
#endif

#ifndef PROPERTY_SESSION_DIGEST_FAILURES
#define PROPERTY_SESSION_DIGEST_FAILURES \
					"SessionDigestFailures"
#endif

#ifndef PROPERTY_SESSION_CONNECTION_TIMEOUT_FAILURES
#define PROPERTY_SESSION_CONNECTION_TIMEOUT_FAILURES \
					"SessionConnectionTimeoutFailures"
#endif

#ifndef PROPERTY_SESSION_FORMAT_ERRORS
#define PROPERTY_SESSION_FORMAT_ERRORS \
					"SessionFormatErrors"
#endif



class UNIX_iSCSISessionFailures :
	public CIM_StatisticalData
{
public:

	UNIX_iSCSISessionFailures();
	~UNIX_iSCSISessionFailures();

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
	virtual Boolean getSessionFailures(CIMProperty&) const;
	virtual Uint64 getSessionFailures() const;
	virtual void setSessionFailures(Uint64&);
	virtual Boolean getLastSessionFailureType(CIMProperty&) const;
	virtual Uint16 getLastSessionFailureType() const;
	virtual void setLastSessionFailureType(Uint16&);
	virtual Boolean getOtherLastSessionFailureType(CIMProperty&) const;
	virtual String getOtherLastSessionFailureType() const;
	virtual void setOtherLastSessionFailureType(String&);
	virtual Boolean getLastSessionFailureRemoteNodeName(CIMProperty&) const;
	virtual String getLastSessionFailureRemoteNodeName() const;
	virtual void setLastSessionFailureRemoteNodeName(String&);
	virtual Boolean getSessionDigestFailures(CIMProperty&) const;
	virtual Uint64 getSessionDigestFailures() const;
	virtual void setSessionDigestFailures(Uint64&);
	virtual Boolean getSessionConnectionTimeoutFailures(CIMProperty&) const;
	virtual Uint64 getSessionConnectionTimeoutFailures() const;
	virtual void setSessionConnectionTimeoutFailures(Uint64&);
	virtual Boolean getSessionFormatErrors(CIMProperty&) const;
	virtual Uint64 getSessionFormatErrors() const;
	virtual void setSessionFormatErrors(Uint64&);

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
	Uint64 _sessionFailures;
	Uint16 _lastSessionFailureType;
	String _otherLastSessionFailureType;
	String _lastSessionFailureRemoteNodeName;
	Uint64 _sessionDigestFailures;
	Uint64 _sessionConnectionTimeoutFailures;
	Uint64 _sessionFormatErrors;

#	include "UNIX_iSCSISessionFailuresPrivate.h"


};

#endif /* UNIX_ISCSISESSIONFAILURES */
