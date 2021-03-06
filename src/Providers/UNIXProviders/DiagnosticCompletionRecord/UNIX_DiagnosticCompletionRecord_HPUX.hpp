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


UNIX_DiagnosticCompletionRecord::UNIX_DiagnosticCompletionRecord(void)
{
}

UNIX_DiagnosticCompletionRecord::~UNIX_DiagnosticCompletionRecord(void)
{
}

Boolean UNIX_DiagnosticCompletionRecord::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_DiagnosticCompletionRecord::getInstanceID() const
{
	return _instanceID;
}

void UNIX_DiagnosticCompletionRecord::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_DiagnosticCompletionRecord::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_DiagnosticCompletionRecord::getCaption() const
{
	return _caption;
}

void UNIX_DiagnosticCompletionRecord::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_DiagnosticCompletionRecord::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_DiagnosticCompletionRecord::getDescription() const
{
	return _description;
}

void UNIX_DiagnosticCompletionRecord::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_DiagnosticCompletionRecord::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_DiagnosticCompletionRecord::getElementName() const
{
	return _elementName;
}

void UNIX_DiagnosticCompletionRecord::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_DiagnosticCompletionRecord::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_DiagnosticCompletionRecord::getGeneration() const
{
	return _generation;
}

void UNIX_DiagnosticCompletionRecord::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_DiagnosticCompletionRecord::getRecordFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECORD_FORMAT, getRecordFormat());
	return true;
}

String UNIX_DiagnosticCompletionRecord::getRecordFormat() const
{
	return _recordFormat;
}

void UNIX_DiagnosticCompletionRecord::setRecordFormat(String &value)
{
	_recordFormat = value;
}

Boolean UNIX_DiagnosticCompletionRecord::getRecordData(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECORD_DATA, getRecordData());
	return true;
}

String UNIX_DiagnosticCompletionRecord::getRecordData() const
{
	return _recordData;
}

void UNIX_DiagnosticCompletionRecord::setRecordData(String &value)
{
	_recordData = value;
}

Boolean UNIX_DiagnosticCompletionRecord::getLocale(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCALE, getLocale());
	return true;
}

String UNIX_DiagnosticCompletionRecord::getLocale() const
{
	return _locale;
}

void UNIX_DiagnosticCompletionRecord::setLocale(String &value)
{
	_locale = value;
}

Boolean UNIX_DiagnosticCompletionRecord::getPerceivedSeverity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERCEIVED_SEVERITY, getPerceivedSeverity());
	return true;
}

Uint16 UNIX_DiagnosticCompletionRecord::getPerceivedSeverity() const
{
	return _perceivedSeverity;
}

void UNIX_DiagnosticCompletionRecord::setPerceivedSeverity(Uint16 &value)
{
	_perceivedSeverity = value;
}

Boolean UNIX_DiagnosticCompletionRecord::getServiceName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVICE_NAME, getServiceName());
	return true;
}

String UNIX_DiagnosticCompletionRecord::getServiceName() const
{
	return _serviceName;
}

void UNIX_DiagnosticCompletionRecord::setServiceName(String &value)
{
	_serviceName = value;
}

Boolean UNIX_DiagnosticCompletionRecord::getManagedElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANAGED_ELEMENT_NAME, getManagedElementName());
	return true;
}

String UNIX_DiagnosticCompletionRecord::getManagedElementName() const
{
	return _managedElementName;
}

void UNIX_DiagnosticCompletionRecord::setManagedElementName(String &value)
{
	_managedElementName = value;
}

Boolean UNIX_DiagnosticCompletionRecord::getExpirationDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXPIRATION_DATE, getExpirationDate());
	return true;
}

CIMDateTime UNIX_DiagnosticCompletionRecord::getExpirationDate() const
{
	return _expirationDate;
}

void UNIX_DiagnosticCompletionRecord::setExpirationDate(CIMDateTime &value)
{
	_expirationDate = value;
}

Boolean UNIX_DiagnosticCompletionRecord::getRecordType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECORD_TYPE, getRecordType());
	return true;
}

Uint16 UNIX_DiagnosticCompletionRecord::getRecordType() const
{
	return _recordType;
}

void UNIX_DiagnosticCompletionRecord::setRecordType(Uint16 &value)
{
	_recordType = value;
}

Boolean UNIX_DiagnosticCompletionRecord::getOtherRecordTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_RECORD_TYPE_DESCRIPTION, getOtherRecordTypeDescription());
	return true;
}

String UNIX_DiagnosticCompletionRecord::getOtherRecordTypeDescription() const
{
	return _otherRecordTypeDescription;
}

void UNIX_DiagnosticCompletionRecord::setOtherRecordTypeDescription(String &value)
{
	_otherRecordTypeDescription = value;
}

Boolean UNIX_DiagnosticCompletionRecord::getCreationTimeStamp(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_TIME_STAMP, getCreationTimeStamp());
	return true;
}

CIMDateTime UNIX_DiagnosticCompletionRecord::getCreationTimeStamp() const
{
	return _creationTimeStamp;
}

void UNIX_DiagnosticCompletionRecord::setCreationTimeStamp(CIMDateTime &value)
{
	_creationTimeStamp = value;
}

Boolean UNIX_DiagnosticCompletionRecord::getErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CODE, getErrorCode());
	return true;
}

Array<String> UNIX_DiagnosticCompletionRecord::getErrorCode() const
{
	return _errorCode;
}

void UNIX_DiagnosticCompletionRecord::setErrorCode(Array<String> &value)
{
	_errorCode = value;
}

Boolean UNIX_DiagnosticCompletionRecord::getErrorCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_COUNT, getErrorCount());
	return true;
}

Array<Uint32> UNIX_DiagnosticCompletionRecord::getErrorCount() const
{
	return _errorCount;
}

void UNIX_DiagnosticCompletionRecord::setErrorCount(Array<Uint32> &value)
{
	_errorCount = value;
}

Boolean UNIX_DiagnosticCompletionRecord::getLoopsFailed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOOPS_FAILED, getLoopsFailed());
	return true;
}

Uint32 UNIX_DiagnosticCompletionRecord::getLoopsFailed() const
{
	return _loopsFailed;
}

void UNIX_DiagnosticCompletionRecord::setLoopsFailed(Uint32 &value)
{
	_loopsFailed = value;
}

Boolean UNIX_DiagnosticCompletionRecord::getLoopsPassed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOOPS_PASSED, getLoopsPassed());
	return true;
}

Uint32 UNIX_DiagnosticCompletionRecord::getLoopsPassed() const
{
	return _loopsPassed;
}

void UNIX_DiagnosticCompletionRecord::setLoopsPassed(Uint32 &value)
{
	_loopsPassed = value;
}

Boolean UNIX_DiagnosticCompletionRecord::getCompletionState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPLETION_STATE, getCompletionState());
	return true;
}

Uint16 UNIX_DiagnosticCompletionRecord::getCompletionState() const
{
	return _completionState;
}

void UNIX_DiagnosticCompletionRecord::setCompletionState(Uint16 &value)
{
	_completionState = value;
}

Boolean UNIX_DiagnosticCompletionRecord::getOtherCompletionStateDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_COMPLETION_STATE_DESCRIPTION, getOtherCompletionStateDescription());
	return true;
}

String UNIX_DiagnosticCompletionRecord::getOtherCompletionStateDescription() const
{
	return _otherCompletionStateDescription;
}

void UNIX_DiagnosticCompletionRecord::setOtherCompletionStateDescription(String &value)
{
	_otherCompletionStateDescription = value;
}


void UNIX_DiagnosticCompletionRecord::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("DiagnosticCompletionRecord");
	_generation = Uint64(0);
	_recordFormat = String ("");
	_recordData = String ("");
	_locale = String ("");
	_perceivedSeverity = Uint16(0);
	_serviceName = String ("");
	_managedElementName = String ("");
	_expirationDate = CIMHelper::getCurrentTime();
	_recordType = Uint16(0);
	_otherRecordTypeDescription = String ("");
	_creationTimeStamp = CIMHelper::getCurrentTime();
	_errorCode.clear();
	_errorCount.clear();
	_loopsFailed = Uint32(0);
	_loopsPassed = Uint32(0);
	_completionState = Uint16(0);
	_otherCompletionStateDescription = String ("");

}

Boolean UNIX_DiagnosticCompletionRecord::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "RecordFormat"))
			{
				String recordFormatValue;
				property.getValue().get(recordFormatValue);
				setRecordFormat(recordFormatValue);
			}
			else if (String::equal(property.getName().getString(), "RecordData"))
			{
				String recordDataValue;
				property.getValue().get(recordDataValue);
				setRecordData(recordDataValue);
			}
			else if (String::equal(property.getName().getString(), "Locale"))
			{
				String localeValue;
				property.getValue().get(localeValue);
				setLocale(localeValue);
			}
			else if (String::equal(property.getName().getString(), "PerceivedSeverity"))
			{
				Uint16 perceivedSeverityValue;
				property.getValue().get(perceivedSeverityValue);
				setPerceivedSeverity(perceivedSeverityValue);
			}
			else if (String::equal(property.getName().getString(), "ServiceName"))
			{
				String serviceNameValue;
				property.getValue().get(serviceNameValue);
				setServiceName(serviceNameValue);
			}
			else if (String::equal(property.getName().getString(), "ManagedElementName"))
			{
				String managedElementNameValue;
				property.getValue().get(managedElementNameValue);
				setManagedElementName(managedElementNameValue);
			}
			else if (String::equal(property.getName().getString(), "ExpirationDate"))
			{
				CIMDateTime expirationDateValue;
				property.getValue().get(expirationDateValue);
				setExpirationDate(expirationDateValue);
			}
			else if (String::equal(property.getName().getString(), "RecordType"))
			{
				Uint16 recordTypeValue;
				property.getValue().get(recordTypeValue);
				setRecordType(recordTypeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherRecordTypeDescription"))
			{
				String otherRecordTypeDescriptionValue;
				property.getValue().get(otherRecordTypeDescriptionValue);
				setOtherRecordTypeDescription(otherRecordTypeDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "CreationTimeStamp"))
			{
				CIMDateTime creationTimeStampValue;
				property.getValue().get(creationTimeStampValue);
				setCreationTimeStamp(creationTimeStampValue);
			}
			else if (String::equal(property.getName().getString(), "ErrorCode"))
			{
				Array<String> errorCodeValue;
				property.getValue().get(errorCodeValue);
				setErrorCode(errorCodeValue);
			}
			else if (String::equal(property.getName().getString(), "ErrorCount"))
			{
				Array<Uint32> errorCountValue;
				property.getValue().get(errorCountValue);
				setErrorCount(errorCountValue);
			}
			else if (String::equal(property.getName().getString(), "LoopsFailed"))
			{
				Uint32 loopsFailedValue;
				property.getValue().get(loopsFailedValue);
				setLoopsFailed(loopsFailedValue);
			}
			else if (String::equal(property.getName().getString(), "LoopsPassed"))
			{
				Uint32 loopsPassedValue;
				property.getValue().get(loopsPassedValue);
				setLoopsPassed(loopsPassedValue);
			}
			else if (String::equal(property.getName().getString(), "CompletionState"))
			{
				Uint16 completionStateValue;
				property.getValue().get(completionStateValue);
				setCompletionState(completionStateValue);
			}
			else if (String::equal(property.getName().getString(), "OtherCompletionStateDescription"))
			{
				String otherCompletionStateDescriptionValue;
				property.getValue().get(otherCompletionStateDescriptionValue);
				setOtherCompletionStateDescription(otherCompletionStateDescriptionValue);
			}
	}
	return true;
}


Boolean UNIX_DiagnosticCompletionRecord::initialize()
{
	return false;
}

Boolean UNIX_DiagnosticCompletionRecord::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("DiagnosticCompletionRecord");
	_generation = Uint64(0);
	_recordFormat = String ("");
	_recordData = String ("");
	_locale = String ("");
	_perceivedSeverity = Uint16(0);
	_serviceName = String ("");
	_managedElementName = String ("");
	_expirationDate = CIMHelper::getCurrentTime();
	_recordType = Uint16(0);
	_otherRecordTypeDescription = String ("");
	_creationTimeStamp = CIMHelper::getCurrentTime();
	_errorCode.clear();
	_errorCount.clear();
	_loopsFailed = Uint32(0);
	_loopsPassed = Uint32(0);
	_completionState = Uint16(0);
	_otherCompletionStateDescription = String ("");
	
	return false;
}

Boolean UNIX_DiagnosticCompletionRecord::finalize()
{
	return false;
}


Boolean UNIX_DiagnosticCompletionRecord::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_DiagnosticCompletionRecord::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DiagnosticCompletionRecord::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DiagnosticCompletionRecord::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DiagnosticCompletionRecord::validateInstance()
{
	return true;
}

