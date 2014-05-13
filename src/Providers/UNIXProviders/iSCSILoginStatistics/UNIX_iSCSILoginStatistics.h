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
Statistics for Logins and Logouts to or from an iSCSI Node. An instance of this class will be associated by ElementStatisticalData to an instance of SCSIProtocolController that represents the Node. The Node can be either an Initiator or Target and so the interpretation of the properties in this class varies accordingly.
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

			UNIX_iSCSILoginStatistics:
				LoginFailures UInt64
				LastLoginFailureTime DateTime
				LastLoginFailureType UInt16
				OtherLastLoginFailureType String
				LastLoginFailureRemoteNodeName String
				LastLoginFailureRemoteAddressType UInt16
				LastLoginFailureRemoteAddress UInt32
				SuccessfulLogins UInt64
				NegotiationLoginFailures UInt64
				AuthenticationLoginFailures UInt64
				AuthorizationLoginFailures UInt64
				LoginRedirects UInt64
				OtherLoginFailures UInt64
				NormalLogouts UInt64
				OtherLogouts UInt64


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_StatisticalData:
				ResetSelectedStats UInt32

			UNIX_iSCSILoginStatistics:


*/

#ifndef __UNIX_ISCSILOGINSTATISTICS_H
#define __UNIX_ISCSILOGINSTATISTICS_H


#include "CIM_StatisticalData.h"

#include "UNIX_iSCSILoginStatisticsDeps.h"


#ifndef PROPERTY_LOGIN_FAILURES
#define PROPERTY_LOGIN_FAILURES \
					"LoginFailures"
#endif

#ifndef PROPERTY_LAST_LOGIN_FAILURE_TIME
#define PROPERTY_LAST_LOGIN_FAILURE_TIME \
					"LastLoginFailureTime"
#endif

#ifndef PROPERTY_LAST_LOGIN_FAILURE_TYPE
#define PROPERTY_LAST_LOGIN_FAILURE_TYPE \
					"LastLoginFailureType"
#endif

#ifndef PROPERTY_OTHER_LAST_LOGIN_FAILURE_TYPE
#define PROPERTY_OTHER_LAST_LOGIN_FAILURE_TYPE \
					"OtherLastLoginFailureType"
#endif

#ifndef PROPERTY_LAST_LOGIN_FAILURE_REMOTE_NODE_NAME
#define PROPERTY_LAST_LOGIN_FAILURE_REMOTE_NODE_NAME \
					"LastLoginFailureRemoteNodeName"
#endif

#ifndef PROPERTY_LAST_LOGIN_FAILURE_REMOTE_ADDRESS_TYPE
#define PROPERTY_LAST_LOGIN_FAILURE_REMOTE_ADDRESS_TYPE \
					"LastLoginFailureRemoteAddressType"
#endif

#ifndef PROPERTY_LAST_LOGIN_FAILURE_REMOTE_ADDRESS
#define PROPERTY_LAST_LOGIN_FAILURE_REMOTE_ADDRESS \
					"LastLoginFailureRemoteAddress"
#endif

#ifndef PROPERTY_SUCCESSFUL_LOGINS
#define PROPERTY_SUCCESSFUL_LOGINS \
					"SuccessfulLogins"
#endif

#ifndef PROPERTY_NEGOTIATION_LOGIN_FAILURES
#define PROPERTY_NEGOTIATION_LOGIN_FAILURES \
					"NegotiationLoginFailures"
#endif

#ifndef PROPERTY_AUTHENTICATION_LOGIN_FAILURES
#define PROPERTY_AUTHENTICATION_LOGIN_FAILURES \
					"AuthenticationLoginFailures"
#endif

#ifndef PROPERTY_AUTHORIZATION_LOGIN_FAILURES
#define PROPERTY_AUTHORIZATION_LOGIN_FAILURES \
					"AuthorizationLoginFailures"
#endif

#ifndef PROPERTY_LOGIN_REDIRECTS
#define PROPERTY_LOGIN_REDIRECTS \
					"LoginRedirects"
#endif

#ifndef PROPERTY_OTHER_LOGIN_FAILURES
#define PROPERTY_OTHER_LOGIN_FAILURES \
					"OtherLoginFailures"
#endif

#ifndef PROPERTY_NORMAL_LOGOUTS
#define PROPERTY_NORMAL_LOGOUTS \
					"NormalLogouts"
#endif

#ifndef PROPERTY_OTHER_LOGOUTS
#define PROPERTY_OTHER_LOGOUTS \
					"OtherLogouts"
#endif



class UNIX_iSCSILoginStatistics :
	public CIM_StatisticalData
{
public:

	UNIX_iSCSILoginStatistics();
	~UNIX_iSCSILoginStatistics();

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
	virtual Boolean getLoginFailures(CIMProperty&) const;
	virtual Uint64 getLoginFailures() const;
	virtual void setLoginFailures(Uint64&);
	virtual Boolean getLastLoginFailureTime(CIMProperty&) const;
	virtual CIMDateTime getLastLoginFailureTime() const;
	virtual void setLastLoginFailureTime(CIMDateTime&);
	virtual Boolean getLastLoginFailureType(CIMProperty&) const;
	virtual Uint16 getLastLoginFailureType() const;
	virtual void setLastLoginFailureType(Uint16&);
	virtual Boolean getOtherLastLoginFailureType(CIMProperty&) const;
	virtual String getOtherLastLoginFailureType() const;
	virtual void setOtherLastLoginFailureType(String&);
	virtual Boolean getLastLoginFailureRemoteNodeName(CIMProperty&) const;
	virtual String getLastLoginFailureRemoteNodeName() const;
	virtual void setLastLoginFailureRemoteNodeName(String&);
	virtual Boolean getLastLoginFailureRemoteAddressType(CIMProperty&) const;
	virtual Uint16 getLastLoginFailureRemoteAddressType() const;
	virtual void setLastLoginFailureRemoteAddressType(Uint16&);
	virtual Boolean getLastLoginFailureRemoteAddress(CIMProperty&) const;
	virtual Uint32 getLastLoginFailureRemoteAddress() const;
	virtual void setLastLoginFailureRemoteAddress(Uint32&);
	virtual Boolean getSuccessfulLogins(CIMProperty&) const;
	virtual Uint64 getSuccessfulLogins() const;
	virtual void setSuccessfulLogins(Uint64&);
	virtual Boolean getNegotiationLoginFailures(CIMProperty&) const;
	virtual Uint64 getNegotiationLoginFailures() const;
	virtual void setNegotiationLoginFailures(Uint64&);
	virtual Boolean getAuthenticationLoginFailures(CIMProperty&) const;
	virtual Uint64 getAuthenticationLoginFailures() const;
	virtual void setAuthenticationLoginFailures(Uint64&);
	virtual Boolean getAuthorizationLoginFailures(CIMProperty&) const;
	virtual Uint64 getAuthorizationLoginFailures() const;
	virtual void setAuthorizationLoginFailures(Uint64&);
	virtual Boolean getLoginRedirects(CIMProperty&) const;
	virtual Uint64 getLoginRedirects() const;
	virtual void setLoginRedirects(Uint64&);
	virtual Boolean getOtherLoginFailures(CIMProperty&) const;
	virtual Uint64 getOtherLoginFailures() const;
	virtual void setOtherLoginFailures(Uint64&);
	virtual Boolean getNormalLogouts(CIMProperty&) const;
	virtual Uint64 getNormalLogouts() const;
	virtual void setNormalLogouts(Uint64&);
	virtual Boolean getOtherLogouts(CIMProperty&) const;
	virtual Uint64 getOtherLogouts() const;
	virtual void setOtherLogouts(Uint64&);

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
	Uint64 _loginFailures;
	CIMDateTime _lastLoginFailureTime;
	Uint16 _lastLoginFailureType;
	String _otherLastLoginFailureType;
	String _lastLoginFailureRemoteNodeName;
	Uint16 _lastLoginFailureRemoteAddressType;
	Uint32 _lastLoginFailureRemoteAddress;
	Uint64 _successfulLogins;
	Uint64 _negotiationLoginFailures;
	Uint64 _authenticationLoginFailures;
	Uint64 _authorizationLoginFailures;
	Uint64 _loginRedirects;
	Uint64 _otherLoginFailures;
	Uint64 _normalLogouts;
	Uint64 _otherLogouts;

#	include "UNIX_iSCSILoginStatisticsPrivate.h"


};

#endif /* UNIX_ISCSILOGINSTATISTICS */
