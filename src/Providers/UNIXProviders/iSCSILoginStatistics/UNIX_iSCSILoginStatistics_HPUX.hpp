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


using PROVIDER_LIB_NS::CIMHelper;


UNIX_iSCSILoginStatistics::UNIX_iSCSILoginStatistics(void)
{
}

UNIX_iSCSILoginStatistics::~UNIX_iSCSILoginStatistics(void)
{
}

Boolean UNIX_iSCSILoginStatistics::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_iSCSILoginStatistics::getInstanceID() const
{
	return _instanceID;
}

void UNIX_iSCSILoginStatistics::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_iSCSILoginStatistics::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_iSCSILoginStatistics::getCaption() const
{
	return _caption;
}

void UNIX_iSCSILoginStatistics::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_iSCSILoginStatistics::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_iSCSILoginStatistics::getDescription() const
{
	return _description;
}

void UNIX_iSCSILoginStatistics::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_iSCSILoginStatistics::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_iSCSILoginStatistics::getElementName() const
{
	return _elementName;
}

void UNIX_iSCSILoginStatistics::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_iSCSILoginStatistics::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_iSCSILoginStatistics::getGeneration() const
{
	return _generation;
}

void UNIX_iSCSILoginStatistics::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_iSCSILoginStatistics::getStartStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_STATISTIC_TIME, getStartStatisticTime());
	return true;
}

CIMDateTime UNIX_iSCSILoginStatistics::getStartStatisticTime() const
{
	return _startStatisticTime;
}

void UNIX_iSCSILoginStatistics::setStartStatisticTime(CIMDateTime &value)
{
	_startStatisticTime = value;
}

Boolean UNIX_iSCSILoginStatistics::getStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATISTIC_TIME, getStatisticTime());
	return true;
}

CIMDateTime UNIX_iSCSILoginStatistics::getStatisticTime() const
{
	return _statisticTime;
}

void UNIX_iSCSILoginStatistics::setStatisticTime(CIMDateTime &value)
{
	_statisticTime = value;
}

Boolean UNIX_iSCSILoginStatistics::getSampleInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SAMPLE_INTERVAL, getSampleInterval());
	return true;
}

CIMDateTime UNIX_iSCSILoginStatistics::getSampleInterval() const
{
	return _sampleInterval;
}

void UNIX_iSCSILoginStatistics::setSampleInterval(CIMDateTime &value)
{
	_sampleInterval = value;
}

Boolean UNIX_iSCSILoginStatistics::getRateIntervalEndTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_END_TIME, getRateIntervalEndTime());
	return true;
}

CIMDateTime UNIX_iSCSILoginStatistics::getRateIntervalEndTime() const
{
	return _rateIntervalEndTime;
}

void UNIX_iSCSILoginStatistics::setRateIntervalEndTime(CIMDateTime &value)
{
	_rateIntervalEndTime = value;
}

Boolean UNIX_iSCSILoginStatistics::getRateIntervalStartTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_START_TIME, getRateIntervalStartTime());
	return true;
}

CIMDateTime UNIX_iSCSILoginStatistics::getRateIntervalStartTime() const
{
	return _rateIntervalStartTime;
}

void UNIX_iSCSILoginStatistics::setRateIntervalStartTime(CIMDateTime &value)
{
	_rateIntervalStartTime = value;
}

Boolean UNIX_iSCSILoginStatistics::getLoginFailures(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOGIN_FAILURES, getLoginFailures());
	return true;
}

Uint64 UNIX_iSCSILoginStatistics::getLoginFailures() const
{
	return _loginFailures;
}

void UNIX_iSCSILoginStatistics::setLoginFailures(Uint64 &value)
{
	_loginFailures = value;
}

Boolean UNIX_iSCSILoginStatistics::getLastLoginFailureTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_LOGIN_FAILURE_TIME, getLastLoginFailureTime());
	return true;
}

CIMDateTime UNIX_iSCSILoginStatistics::getLastLoginFailureTime() const
{
	return _lastLoginFailureTime;
}

void UNIX_iSCSILoginStatistics::setLastLoginFailureTime(CIMDateTime &value)
{
	_lastLoginFailureTime = value;
}

Boolean UNIX_iSCSILoginStatistics::getLastLoginFailureType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_LOGIN_FAILURE_TYPE, getLastLoginFailureType());
	return true;
}

Uint16 UNIX_iSCSILoginStatistics::getLastLoginFailureType() const
{
	return _lastLoginFailureType;
}

void UNIX_iSCSILoginStatistics::setLastLoginFailureType(Uint16 &value)
{
	_lastLoginFailureType = value;
}

Boolean UNIX_iSCSILoginStatistics::getOtherLastLoginFailureType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_LAST_LOGIN_FAILURE_TYPE, getOtherLastLoginFailureType());
	return true;
}

String UNIX_iSCSILoginStatistics::getOtherLastLoginFailureType() const
{
	return _otherLastLoginFailureType;
}

void UNIX_iSCSILoginStatistics::setOtherLastLoginFailureType(String &value)
{
	_otherLastLoginFailureType = value;
}

Boolean UNIX_iSCSILoginStatistics::getLastLoginFailureRemoteNodeName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_LOGIN_FAILURE_REMOTE_NODE_NAME, getLastLoginFailureRemoteNodeName());
	return true;
}

String UNIX_iSCSILoginStatistics::getLastLoginFailureRemoteNodeName() const
{
	return _lastLoginFailureRemoteNodeName;
}

void UNIX_iSCSILoginStatistics::setLastLoginFailureRemoteNodeName(String &value)
{
	_lastLoginFailureRemoteNodeName = value;
}

Boolean UNIX_iSCSILoginStatistics::getLastLoginFailureRemoteAddressType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_LOGIN_FAILURE_REMOTE_ADDRESS_TYPE, getLastLoginFailureRemoteAddressType());
	return true;
}

Uint16 UNIX_iSCSILoginStatistics::getLastLoginFailureRemoteAddressType() const
{
	return _lastLoginFailureRemoteAddressType;
}

void UNIX_iSCSILoginStatistics::setLastLoginFailureRemoteAddressType(Uint16 &value)
{
	_lastLoginFailureRemoteAddressType = value;
}

Boolean UNIX_iSCSILoginStatistics::getLastLoginFailureRemoteAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_LOGIN_FAILURE_REMOTE_ADDRESS, getLastLoginFailureRemoteAddress());
	return true;
}

Uint32 UNIX_iSCSILoginStatistics::getLastLoginFailureRemoteAddress() const
{
	return _lastLoginFailureRemoteAddress;
}

void UNIX_iSCSILoginStatistics::setLastLoginFailureRemoteAddress(Uint32 &value)
{
	_lastLoginFailureRemoteAddress = value;
}

Boolean UNIX_iSCSILoginStatistics::getSuccessfulLogins(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUCCESSFUL_LOGINS, getSuccessfulLogins());
	return true;
}

Uint64 UNIX_iSCSILoginStatistics::getSuccessfulLogins() const
{
	return _successfulLogins;
}

void UNIX_iSCSILoginStatistics::setSuccessfulLogins(Uint64 &value)
{
	_successfulLogins = value;
}

Boolean UNIX_iSCSILoginStatistics::getNegotiationLoginFailures(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NEGOTIATION_LOGIN_FAILURES, getNegotiationLoginFailures());
	return true;
}

Uint64 UNIX_iSCSILoginStatistics::getNegotiationLoginFailures() const
{
	return _negotiationLoginFailures;
}

void UNIX_iSCSILoginStatistics::setNegotiationLoginFailures(Uint64 &value)
{
	_negotiationLoginFailures = value;
}

Boolean UNIX_iSCSILoginStatistics::getAuthenticationLoginFailures(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTHENTICATION_LOGIN_FAILURES, getAuthenticationLoginFailures());
	return true;
}

Uint64 UNIX_iSCSILoginStatistics::getAuthenticationLoginFailures() const
{
	return _authenticationLoginFailures;
}

void UNIX_iSCSILoginStatistics::setAuthenticationLoginFailures(Uint64 &value)
{
	_authenticationLoginFailures = value;
}

Boolean UNIX_iSCSILoginStatistics::getAuthorizationLoginFailures(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTHORIZATION_LOGIN_FAILURES, getAuthorizationLoginFailures());
	return true;
}

Uint64 UNIX_iSCSILoginStatistics::getAuthorizationLoginFailures() const
{
	return _authorizationLoginFailures;
}

void UNIX_iSCSILoginStatistics::setAuthorizationLoginFailures(Uint64 &value)
{
	_authorizationLoginFailures = value;
}

Boolean UNIX_iSCSILoginStatistics::getLoginRedirects(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOGIN_REDIRECTS, getLoginRedirects());
	return true;
}

Uint64 UNIX_iSCSILoginStatistics::getLoginRedirects() const
{
	return _loginRedirects;
}

void UNIX_iSCSILoginStatistics::setLoginRedirects(Uint64 &value)
{
	_loginRedirects = value;
}

Boolean UNIX_iSCSILoginStatistics::getOtherLoginFailures(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_LOGIN_FAILURES, getOtherLoginFailures());
	return true;
}

Uint64 UNIX_iSCSILoginStatistics::getOtherLoginFailures() const
{
	return _otherLoginFailures;
}

void UNIX_iSCSILoginStatistics::setOtherLoginFailures(Uint64 &value)
{
	_otherLoginFailures = value;
}

Boolean UNIX_iSCSILoginStatistics::getNormalLogouts(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NORMAL_LOGOUTS, getNormalLogouts());
	return true;
}

Uint64 UNIX_iSCSILoginStatistics::getNormalLogouts() const
{
	return _normalLogouts;
}

void UNIX_iSCSILoginStatistics::setNormalLogouts(Uint64 &value)
{
	_normalLogouts = value;
}

Boolean UNIX_iSCSILoginStatistics::getOtherLogouts(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_LOGOUTS, getOtherLogouts());
	return true;
}

Uint64 UNIX_iSCSILoginStatistics::getOtherLogouts() const
{
	return _otherLogouts;
}

void UNIX_iSCSILoginStatistics::setOtherLogouts(Uint64 &value)
{
	_otherLogouts = value;
}


void UNIX_iSCSILoginStatistics::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("iSCSILoginStatistics");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_loginFailures = Uint64(0);
	_lastLoginFailureTime = CIMHelper::getCurrentTime();
	_lastLoginFailureType = Uint16(0);
	_otherLastLoginFailureType = String ("");
	_lastLoginFailureRemoteNodeName = String ("");
	_lastLoginFailureRemoteAddressType = Uint16(0);
	_lastLoginFailureRemoteAddress = Uint32(0);
	_successfulLogins = Uint64(0);
	_negotiationLoginFailures = Uint64(0);
	_authenticationLoginFailures = Uint64(0);
	_authorizationLoginFailures = Uint64(0);
	_loginRedirects = Uint64(0);
	_otherLoginFailures = Uint64(0);
	_normalLogouts = Uint64(0);
	_otherLogouts = Uint64(0);

}

Boolean UNIX_iSCSILoginStatistics::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "InstanceID"))
			{
				String instanceIDValue;
				property.getValue().get(instanceIDValue);
				setInstanceID(instanceIDValue);
			}
			else if (String::equal(property.getName().getString(), "Caption"))
			{
				String captionValue;
				property.getValue().get(captionValue);
				setCaption(captionValue);
			}
			else if (String::equal(property.getName().getString(), "Description"))
			{
				String descriptionValue;
				property.getValue().get(descriptionValue);
				setDescription(descriptionValue);
			}
			else if (String::equal(property.getName().getString(), "ElementName"))
			{
				String elementNameValue;
				property.getValue().get(elementNameValue);
				setElementName(elementNameValue);
			}
			else if (String::equal(property.getName().getString(), "Generation"))
			{
				Uint64 generationValue;
				property.getValue().get(generationValue);
				setGeneration(generationValue);
			}
			else if (String::equal(property.getName().getString(), "StartStatisticTime"))
			{
				CIMDateTime startStatisticTimeValue;
				property.getValue().get(startStatisticTimeValue);
				setStartStatisticTime(startStatisticTimeValue);
			}
			else if (String::equal(property.getName().getString(), "StatisticTime"))
			{
				CIMDateTime statisticTimeValue;
				property.getValue().get(statisticTimeValue);
				setStatisticTime(statisticTimeValue);
			}
			else if (String::equal(property.getName().getString(), "SampleInterval"))
			{
				CIMDateTime sampleIntervalValue;
				property.getValue().get(sampleIntervalValue);
				setSampleInterval(sampleIntervalValue);
			}
			else if (String::equal(property.getName().getString(), "RateIntervalEndTime"))
			{
				CIMDateTime rateIntervalEndTimeValue;
				property.getValue().get(rateIntervalEndTimeValue);
				setRateIntervalEndTime(rateIntervalEndTimeValue);
			}
			else if (String::equal(property.getName().getString(), "RateIntervalStartTime"))
			{
				CIMDateTime rateIntervalStartTimeValue;
				property.getValue().get(rateIntervalStartTimeValue);
				setRateIntervalStartTime(rateIntervalStartTimeValue);
			}
			else if (String::equal(property.getName().getString(), "LoginFailures"))
			{
				Uint64 loginFailuresValue;
				property.getValue().get(loginFailuresValue);
				setLoginFailures(loginFailuresValue);
			}
			else if (String::equal(property.getName().getString(), "LastLoginFailureTime"))
			{
				CIMDateTime lastLoginFailureTimeValue;
				property.getValue().get(lastLoginFailureTimeValue);
				setLastLoginFailureTime(lastLoginFailureTimeValue);
			}
			else if (String::equal(property.getName().getString(), "LastLoginFailureType"))
			{
				Uint16 lastLoginFailureTypeValue;
				property.getValue().get(lastLoginFailureTypeValue);
				setLastLoginFailureType(lastLoginFailureTypeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherLastLoginFailureType"))
			{
				String otherLastLoginFailureTypeValue;
				property.getValue().get(otherLastLoginFailureTypeValue);
				setOtherLastLoginFailureType(otherLastLoginFailureTypeValue);
			}
			else if (String::equal(property.getName().getString(), "LastLoginFailureRemoteNodeName"))
			{
				String lastLoginFailureRemoteNodeNameValue;
				property.getValue().get(lastLoginFailureRemoteNodeNameValue);
				setLastLoginFailureRemoteNodeName(lastLoginFailureRemoteNodeNameValue);
			}
			else if (String::equal(property.getName().getString(), "LastLoginFailureRemoteAddressType"))
			{
				Uint16 lastLoginFailureRemoteAddressTypeValue;
				property.getValue().get(lastLoginFailureRemoteAddressTypeValue);
				setLastLoginFailureRemoteAddressType(lastLoginFailureRemoteAddressTypeValue);
			}
			else if (String::equal(property.getName().getString(), "LastLoginFailureRemoteAddress"))
			{
				Uint32 lastLoginFailureRemoteAddressValue;
				property.getValue().get(lastLoginFailureRemoteAddressValue);
				setLastLoginFailureRemoteAddress(lastLoginFailureRemoteAddressValue);
			}
			else if (String::equal(property.getName().getString(), "SuccessfulLogins"))
			{
				Uint64 successfulLoginsValue;
				property.getValue().get(successfulLoginsValue);
				setSuccessfulLogins(successfulLoginsValue);
			}
			else if (String::equal(property.getName().getString(), "NegotiationLoginFailures"))
			{
				Uint64 negotiationLoginFailuresValue;
				property.getValue().get(negotiationLoginFailuresValue);
				setNegotiationLoginFailures(negotiationLoginFailuresValue);
			}
			else if (String::equal(property.getName().getString(), "AuthenticationLoginFailures"))
			{
				Uint64 authenticationLoginFailuresValue;
				property.getValue().get(authenticationLoginFailuresValue);
				setAuthenticationLoginFailures(authenticationLoginFailuresValue);
			}
			else if (String::equal(property.getName().getString(), "AuthorizationLoginFailures"))
			{
				Uint64 authorizationLoginFailuresValue;
				property.getValue().get(authorizationLoginFailuresValue);
				setAuthorizationLoginFailures(authorizationLoginFailuresValue);
			}
			else if (String::equal(property.getName().getString(), "LoginRedirects"))
			{
				Uint64 loginRedirectsValue;
				property.getValue().get(loginRedirectsValue);
				setLoginRedirects(loginRedirectsValue);
			}
			else if (String::equal(property.getName().getString(), "OtherLoginFailures"))
			{
				Uint64 otherLoginFailuresValue;
				property.getValue().get(otherLoginFailuresValue);
				setOtherLoginFailures(otherLoginFailuresValue);
			}
			else if (String::equal(property.getName().getString(), "NormalLogouts"))
			{
				Uint64 normalLogoutsValue;
				property.getValue().get(normalLogoutsValue);
				setNormalLogouts(normalLogoutsValue);
			}
			else if (String::equal(property.getName().getString(), "OtherLogouts"))
			{
				Uint64 otherLogoutsValue;
				property.getValue().get(otherLogoutsValue);
				setOtherLogouts(otherLogoutsValue);
			}
	}
	return true;
}

Uint32 UNIX_iSCSILoginStatistics::invokeResetSelectedStats(
		Array<String> &inSelectedStatistics
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ResetSelectedStats */
	
	
	
	return returnValue;
}


Boolean UNIX_iSCSILoginStatistics::initialize()
{
	return false;
}

Boolean UNIX_iSCSILoginStatistics::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("iSCSILoginStatistics");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_loginFailures = Uint64(0);
	_lastLoginFailureTime = CIMHelper::getCurrentTime();
	_lastLoginFailureType = Uint16(0);
	_otherLastLoginFailureType = String ("");
	_lastLoginFailureRemoteNodeName = String ("");
	_lastLoginFailureRemoteAddressType = Uint16(0);
	_lastLoginFailureRemoteAddress = Uint32(0);
	_successfulLogins = Uint64(0);
	_negotiationLoginFailures = Uint64(0);
	_authenticationLoginFailures = Uint64(0);
	_authorizationLoginFailures = Uint64(0);
	_loginRedirects = Uint64(0);
	_otherLoginFailures = Uint64(0);
	_normalLogouts = Uint64(0);
	_otherLogouts = Uint64(0);
	
	return false;
}

Boolean UNIX_iSCSILoginStatistics::finalize()
{
	return false;
}


Boolean UNIX_iSCSILoginStatistics::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String instanceIDKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_INSTANCE_ID)) instanceIDKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getInstanceID(), instanceIDKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_iSCSILoginStatistics::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_iSCSILoginStatistics::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_iSCSILoginStatistics::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_iSCSILoginStatistics::validateInstance()
{
	return true;
}

