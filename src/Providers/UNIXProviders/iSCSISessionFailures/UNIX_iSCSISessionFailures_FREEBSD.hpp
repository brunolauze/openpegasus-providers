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


UNIX_iSCSISessionFailures::UNIX_iSCSISessionFailures(void)
{
}

UNIX_iSCSISessionFailures::~UNIX_iSCSISessionFailures(void)
{
}

Boolean UNIX_iSCSISessionFailures::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_iSCSISessionFailures::getInstanceID() const
{
	return _instanceID;
}

void UNIX_iSCSISessionFailures::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_iSCSISessionFailures::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_iSCSISessionFailures::getCaption() const
{
	return _caption;
}

void UNIX_iSCSISessionFailures::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_iSCSISessionFailures::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_iSCSISessionFailures::getDescription() const
{
	return _description;
}

void UNIX_iSCSISessionFailures::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_iSCSISessionFailures::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_iSCSISessionFailures::getElementName() const
{
	return _elementName;
}

void UNIX_iSCSISessionFailures::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_iSCSISessionFailures::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_iSCSISessionFailures::getGeneration() const
{
	return _generation;
}

void UNIX_iSCSISessionFailures::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_iSCSISessionFailures::getStartStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_STATISTIC_TIME, getStartStatisticTime());
	return true;
}

CIMDateTime UNIX_iSCSISessionFailures::getStartStatisticTime() const
{
	return _startStatisticTime;
}

void UNIX_iSCSISessionFailures::setStartStatisticTime(CIMDateTime &value)
{
	_startStatisticTime = value;
}

Boolean UNIX_iSCSISessionFailures::getStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATISTIC_TIME, getStatisticTime());
	return true;
}

CIMDateTime UNIX_iSCSISessionFailures::getStatisticTime() const
{
	return _statisticTime;
}

void UNIX_iSCSISessionFailures::setStatisticTime(CIMDateTime &value)
{
	_statisticTime = value;
}

Boolean UNIX_iSCSISessionFailures::getSampleInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SAMPLE_INTERVAL, getSampleInterval());
	return true;
}

CIMDateTime UNIX_iSCSISessionFailures::getSampleInterval() const
{
	return _sampleInterval;
}

void UNIX_iSCSISessionFailures::setSampleInterval(CIMDateTime &value)
{
	_sampleInterval = value;
}

Boolean UNIX_iSCSISessionFailures::getRateIntervalEndTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_END_TIME, getRateIntervalEndTime());
	return true;
}

CIMDateTime UNIX_iSCSISessionFailures::getRateIntervalEndTime() const
{
	return _rateIntervalEndTime;
}

void UNIX_iSCSISessionFailures::setRateIntervalEndTime(CIMDateTime &value)
{
	_rateIntervalEndTime = value;
}

Boolean UNIX_iSCSISessionFailures::getRateIntervalStartTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_START_TIME, getRateIntervalStartTime());
	return true;
}

CIMDateTime UNIX_iSCSISessionFailures::getRateIntervalStartTime() const
{
	return _rateIntervalStartTime;
}

void UNIX_iSCSISessionFailures::setRateIntervalStartTime(CIMDateTime &value)
{
	_rateIntervalStartTime = value;
}

Boolean UNIX_iSCSISessionFailures::getSessionFailures(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SESSION_FAILURES, getSessionFailures());
	return true;
}

Uint64 UNIX_iSCSISessionFailures::getSessionFailures() const
{
	return _sessionFailures;
}

void UNIX_iSCSISessionFailures::setSessionFailures(Uint64 &value)
{
	_sessionFailures = value;
}

Boolean UNIX_iSCSISessionFailures::getLastSessionFailureType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_SESSION_FAILURE_TYPE, getLastSessionFailureType());
	return true;
}

Uint16 UNIX_iSCSISessionFailures::getLastSessionFailureType() const
{
	return _lastSessionFailureType;
}

void UNIX_iSCSISessionFailures::setLastSessionFailureType(Uint16 &value)
{
	_lastSessionFailureType = value;
}

Boolean UNIX_iSCSISessionFailures::getOtherLastSessionFailureType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_LAST_SESSION_FAILURE_TYPE, getOtherLastSessionFailureType());
	return true;
}

String UNIX_iSCSISessionFailures::getOtherLastSessionFailureType() const
{
	return _otherLastSessionFailureType;
}

void UNIX_iSCSISessionFailures::setOtherLastSessionFailureType(String &value)
{
	_otherLastSessionFailureType = value;
}

Boolean UNIX_iSCSISessionFailures::getLastSessionFailureRemoteNodeName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_SESSION_FAILURE_REMOTE_NODE_NAME, getLastSessionFailureRemoteNodeName());
	return true;
}

String UNIX_iSCSISessionFailures::getLastSessionFailureRemoteNodeName() const
{
	return _lastSessionFailureRemoteNodeName;
}

void UNIX_iSCSISessionFailures::setLastSessionFailureRemoteNodeName(String &value)
{
	_lastSessionFailureRemoteNodeName = value;
}

Boolean UNIX_iSCSISessionFailures::getSessionDigestFailures(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SESSION_DIGEST_FAILURES, getSessionDigestFailures());
	return true;
}

Uint64 UNIX_iSCSISessionFailures::getSessionDigestFailures() const
{
	return _sessionDigestFailures;
}

void UNIX_iSCSISessionFailures::setSessionDigestFailures(Uint64 &value)
{
	_sessionDigestFailures = value;
}

Boolean UNIX_iSCSISessionFailures::getSessionConnectionTimeoutFailures(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SESSION_CONNECTION_TIMEOUT_FAILURES, getSessionConnectionTimeoutFailures());
	return true;
}

Uint64 UNIX_iSCSISessionFailures::getSessionConnectionTimeoutFailures() const
{
	return _sessionConnectionTimeoutFailures;
}

void UNIX_iSCSISessionFailures::setSessionConnectionTimeoutFailures(Uint64 &value)
{
	_sessionConnectionTimeoutFailures = value;
}

Boolean UNIX_iSCSISessionFailures::getSessionFormatErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SESSION_FORMAT_ERRORS, getSessionFormatErrors());
	return true;
}

Uint64 UNIX_iSCSISessionFailures::getSessionFormatErrors() const
{
	return _sessionFormatErrors;
}

void UNIX_iSCSISessionFailures::setSessionFormatErrors(Uint64 &value)
{
	_sessionFormatErrors = value;
}


void UNIX_iSCSISessionFailures::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("iSCSISessionFailures");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_sessionFailures = Uint64(0);
	_lastSessionFailureType = Uint16(0);
	_otherLastSessionFailureType = String ("");
	_lastSessionFailureRemoteNodeName = String ("");
	_sessionDigestFailures = Uint64(0);
	_sessionConnectionTimeoutFailures = Uint64(0);
	_sessionFormatErrors = Uint64(0);

}

Boolean UNIX_iSCSISessionFailures::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "SessionFailures"))
			{
				Uint64 sessionFailuresValue;
				property.getValue().get(sessionFailuresValue);
				setSessionFailures(sessionFailuresValue);
			}
			else if (String::equal(property.getName().getString(), "LastSessionFailureType"))
			{
				Uint16 lastSessionFailureTypeValue;
				property.getValue().get(lastSessionFailureTypeValue);
				setLastSessionFailureType(lastSessionFailureTypeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherLastSessionFailureType"))
			{
				String otherLastSessionFailureTypeValue;
				property.getValue().get(otherLastSessionFailureTypeValue);
				setOtherLastSessionFailureType(otherLastSessionFailureTypeValue);
			}
			else if (String::equal(property.getName().getString(), "LastSessionFailureRemoteNodeName"))
			{
				String lastSessionFailureRemoteNodeNameValue;
				property.getValue().get(lastSessionFailureRemoteNodeNameValue);
				setLastSessionFailureRemoteNodeName(lastSessionFailureRemoteNodeNameValue);
			}
			else if (String::equal(property.getName().getString(), "SessionDigestFailures"))
			{
				Uint64 sessionDigestFailuresValue;
				property.getValue().get(sessionDigestFailuresValue);
				setSessionDigestFailures(sessionDigestFailuresValue);
			}
			else if (String::equal(property.getName().getString(), "SessionConnectionTimeoutFailures"))
			{
				Uint64 sessionConnectionTimeoutFailuresValue;
				property.getValue().get(sessionConnectionTimeoutFailuresValue);
				setSessionConnectionTimeoutFailures(sessionConnectionTimeoutFailuresValue);
			}
			else if (String::equal(property.getName().getString(), "SessionFormatErrors"))
			{
				Uint64 sessionFormatErrorsValue;
				property.getValue().get(sessionFormatErrorsValue);
				setSessionFormatErrors(sessionFormatErrorsValue);
			}
	}
	return true;
}

Uint32 UNIX_iSCSISessionFailures::invokeResetSelectedStats(
		Array<String> &inSelectedStatistics
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ResetSelectedStats */
	
	
	
	return returnValue;
}


Boolean UNIX_iSCSISessionFailures::initialize()
{
	return false;
}

Boolean UNIX_iSCSISessionFailures::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("iSCSISessionFailures");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_sessionFailures = Uint64(0);
	_lastSessionFailureType = Uint16(0);
	_otherLastSessionFailureType = String ("");
	_lastSessionFailureRemoteNodeName = String ("");
	_sessionDigestFailures = Uint64(0);
	_sessionConnectionTimeoutFailures = Uint64(0);
	_sessionFormatErrors = Uint64(0);
	
	return false;
}

Boolean UNIX_iSCSISessionFailures::finalize()
{
	return false;
}


Boolean UNIX_iSCSISessionFailures::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_iSCSISessionFailures::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_iSCSISessionFailures::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_iSCSISessionFailures::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_iSCSISessionFailures::validateInstance()
{
	return true;
}

