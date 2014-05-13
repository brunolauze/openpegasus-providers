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


UNIX_DiagnosticSettingRecord::UNIX_DiagnosticSettingRecord(void)
{
}

UNIX_DiagnosticSettingRecord::~UNIX_DiagnosticSettingRecord(void)
{
}

Boolean UNIX_DiagnosticSettingRecord::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_DiagnosticSettingRecord::getInstanceID() const
{
	return _instanceID;
}

void UNIX_DiagnosticSettingRecord::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_DiagnosticSettingRecord::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_DiagnosticSettingRecord::getCaption() const
{
	return _caption;
}

void UNIX_DiagnosticSettingRecord::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_DiagnosticSettingRecord::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_DiagnosticSettingRecord::getDescription() const
{
	return _description;
}

void UNIX_DiagnosticSettingRecord::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_DiagnosticSettingRecord::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_DiagnosticSettingRecord::getElementName() const
{
	return _elementName;
}

void UNIX_DiagnosticSettingRecord::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_DiagnosticSettingRecord::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_DiagnosticSettingRecord::getGeneration() const
{
	return _generation;
}

void UNIX_DiagnosticSettingRecord::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_DiagnosticSettingRecord::getRecordFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECORD_FORMAT, getRecordFormat());
	return true;
}

String UNIX_DiagnosticSettingRecord::getRecordFormat() const
{
	return _recordFormat;
}

void UNIX_DiagnosticSettingRecord::setRecordFormat(String &value)
{
	_recordFormat = value;
}

Boolean UNIX_DiagnosticSettingRecord::getRecordData(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECORD_DATA, getRecordData());
	return true;
}

String UNIX_DiagnosticSettingRecord::getRecordData() const
{
	return _recordData;
}

void UNIX_DiagnosticSettingRecord::setRecordData(String &value)
{
	_recordData = value;
}

Boolean UNIX_DiagnosticSettingRecord::getLocale(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCALE, getLocale());
	return true;
}

String UNIX_DiagnosticSettingRecord::getLocale() const
{
	return _locale;
}

void UNIX_DiagnosticSettingRecord::setLocale(String &value)
{
	_locale = value;
}

Boolean UNIX_DiagnosticSettingRecord::getPerceivedSeverity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERCEIVED_SEVERITY, getPerceivedSeverity());
	return true;
}

Uint16 UNIX_DiagnosticSettingRecord::getPerceivedSeverity() const
{
	return _perceivedSeverity;
}

void UNIX_DiagnosticSettingRecord::setPerceivedSeverity(Uint16 &value)
{
	_perceivedSeverity = value;
}

Boolean UNIX_DiagnosticSettingRecord::getServiceName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVICE_NAME, getServiceName());
	return true;
}

String UNIX_DiagnosticSettingRecord::getServiceName() const
{
	return _serviceName;
}

void UNIX_DiagnosticSettingRecord::setServiceName(String &value)
{
	_serviceName = value;
}

Boolean UNIX_DiagnosticSettingRecord::getManagedElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANAGED_ELEMENT_NAME, getManagedElementName());
	return true;
}

String UNIX_DiagnosticSettingRecord::getManagedElementName() const
{
	return _managedElementName;
}

void UNIX_DiagnosticSettingRecord::setManagedElementName(String &value)
{
	_managedElementName = value;
}

Boolean UNIX_DiagnosticSettingRecord::getExpirationDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXPIRATION_DATE, getExpirationDate());
	return true;
}

CIMDateTime UNIX_DiagnosticSettingRecord::getExpirationDate() const
{
	return _expirationDate;
}

void UNIX_DiagnosticSettingRecord::setExpirationDate(CIMDateTime &value)
{
	_expirationDate = value;
}

Boolean UNIX_DiagnosticSettingRecord::getRecordType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECORD_TYPE, getRecordType());
	return true;
}

Uint16 UNIX_DiagnosticSettingRecord::getRecordType() const
{
	return _recordType;
}

void UNIX_DiagnosticSettingRecord::setRecordType(Uint16 &value)
{
	_recordType = value;
}

Boolean UNIX_DiagnosticSettingRecord::getOtherRecordTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_RECORD_TYPE_DESCRIPTION, getOtherRecordTypeDescription());
	return true;
}

String UNIX_DiagnosticSettingRecord::getOtherRecordTypeDescription() const
{
	return _otherRecordTypeDescription;
}

void UNIX_DiagnosticSettingRecord::setOtherRecordTypeDescription(String &value)
{
	_otherRecordTypeDescription = value;
}

Boolean UNIX_DiagnosticSettingRecord::getCreationTimeStamp(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_TIME_STAMP, getCreationTimeStamp());
	return true;
}

CIMDateTime UNIX_DiagnosticSettingRecord::getCreationTimeStamp() const
{
	return _creationTimeStamp;
}

void UNIX_DiagnosticSettingRecord::setCreationTimeStamp(CIMDateTime &value)
{
	_creationTimeStamp = value;
}

Boolean UNIX_DiagnosticSettingRecord::getHaltOnError(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HALT_ON_ERROR, getHaltOnError());
	return true;
}

Boolean UNIX_DiagnosticSettingRecord::getHaltOnError() const
{
	return _haltOnError;
}

void UNIX_DiagnosticSettingRecord::setHaltOnError(Boolean &value)
{
	_haltOnError = value;
}

Boolean UNIX_DiagnosticSettingRecord::getQuickMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_QUICK_MODE, getQuickMode());
	return true;
}

Boolean UNIX_DiagnosticSettingRecord::getQuickMode() const
{
	return _quickMode;
}

void UNIX_DiagnosticSettingRecord::setQuickMode(Boolean &value)
{
	_quickMode = value;
}

Boolean UNIX_DiagnosticSettingRecord::getPercentOfTestCoverage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERCENT_OF_TEST_COVERAGE, getPercentOfTestCoverage());
	return true;
}

Uint8 UNIX_DiagnosticSettingRecord::getPercentOfTestCoverage() const
{
	return _percentOfTestCoverage;
}

void UNIX_DiagnosticSettingRecord::setPercentOfTestCoverage(Uint8 &value)
{
	_percentOfTestCoverage = value;
}

Boolean UNIX_DiagnosticSettingRecord::getLoopControlParameter(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOOP_CONTROL_PARAMETER, getLoopControlParameter());
	return true;
}

Array<String> UNIX_DiagnosticSettingRecord::getLoopControlParameter() const
{
	return _loopControlParameter;
}

void UNIX_DiagnosticSettingRecord::setLoopControlParameter(Array<String> &value)
{
	_loopControlParameter = value;
}

Boolean UNIX_DiagnosticSettingRecord::getLoopControl(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOOP_CONTROL, getLoopControl());
	return true;
}

Array<Uint16> UNIX_DiagnosticSettingRecord::getLoopControl() const
{
	return _loopControl;
}

void UNIX_DiagnosticSettingRecord::setLoopControl(Array<Uint16> &value)
{
	_loopControl = value;
}

Boolean UNIX_DiagnosticSettingRecord::getOtherLoopControlDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_LOOP_CONTROL_DESCRIPTIONS, getOtherLoopControlDescriptions());
	return true;
}

Array<String> UNIX_DiagnosticSettingRecord::getOtherLoopControlDescriptions() const
{
	return _otherLoopControlDescriptions;
}

void UNIX_DiagnosticSettingRecord::setOtherLoopControlDescriptions(Array<String> &value)
{
	_otherLoopControlDescriptions = value;
}

Boolean UNIX_DiagnosticSettingRecord::getResultPersistence(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESULT_PERSISTENCE, getResultPersistence());
	return true;
}

Uint32 UNIX_DiagnosticSettingRecord::getResultPersistence() const
{
	return _resultPersistence;
}

void UNIX_DiagnosticSettingRecord::setResultPersistence(Uint32 &value)
{
	_resultPersistence = value;
}

Boolean UNIX_DiagnosticSettingRecord::getLogOptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOG_OPTIONS, getLogOptions());
	return true;
}

Array<Uint16> UNIX_DiagnosticSettingRecord::getLogOptions() const
{
	return _logOptions;
}

void UNIX_DiagnosticSettingRecord::setLogOptions(Array<Uint16> &value)
{
	_logOptions = value;
}

Boolean UNIX_DiagnosticSettingRecord::getOtherLogOptionsDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_LOG_OPTIONS_DESCRIPTIONS, getOtherLogOptionsDescriptions());
	return true;
}

Array<String> UNIX_DiagnosticSettingRecord::getOtherLogOptionsDescriptions() const
{
	return _otherLogOptionsDescriptions;
}

void UNIX_DiagnosticSettingRecord::setOtherLogOptionsDescriptions(Array<String> &value)
{
	_otherLogOptionsDescriptions = value;
}

Boolean UNIX_DiagnosticSettingRecord::getLogStorage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOG_STORAGE, getLogStorage());
	return true;
}

Array<Uint16> UNIX_DiagnosticSettingRecord::getLogStorage() const
{
	return _logStorage;
}

void UNIX_DiagnosticSettingRecord::setLogStorage(Array<Uint16> &value)
{
	_logStorage = value;
}

Boolean UNIX_DiagnosticSettingRecord::getOtherLogStorageDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_LOG_STORAGE_DESCRIPTIONS, getOtherLogStorageDescriptions());
	return true;
}

Array<String> UNIX_DiagnosticSettingRecord::getOtherLogStorageDescriptions() const
{
	return _otherLogStorageDescriptions;
}

void UNIX_DiagnosticSettingRecord::setOtherLogStorageDescriptions(Array<String> &value)
{
	_otherLogStorageDescriptions = value;
}

Boolean UNIX_DiagnosticSettingRecord::getVerbosityLevel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERBOSITY_LEVEL, getVerbosityLevel());
	return true;
}

Array<Uint16> UNIX_DiagnosticSettingRecord::getVerbosityLevel() const
{
	return _verbosityLevel;
}

void UNIX_DiagnosticSettingRecord::setVerbosityLevel(Array<Uint16> &value)
{
	_verbosityLevel = value;
}


void UNIX_DiagnosticSettingRecord::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("DiagnosticSettingRecord");
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
	_haltOnError = Boolean(false);
	_quickMode = Boolean(false);
	_percentOfTestCoverage = Uint8(0);
	_loopControlParameter.clear();
	_loopControl.clear();
	_otherLoopControlDescriptions.clear();
	_resultPersistence = Uint32(0);
	_logOptions.clear();
	_otherLogOptionsDescriptions.clear();
	_logStorage.clear();
	_otherLogStorageDescriptions.clear();
	_verbosityLevel.clear();

}

Boolean UNIX_DiagnosticSettingRecord::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "HaltOnError"))
			{
				Boolean haltOnErrorValue;
				property.getValue().get(haltOnErrorValue);
				setHaltOnError(haltOnErrorValue);
			}
			else if (String::equal(property.getName().getString(), "QuickMode"))
			{
				Boolean quickModeValue;
				property.getValue().get(quickModeValue);
				setQuickMode(quickModeValue);
			}
			else if (String::equal(property.getName().getString(), "PercentOfTestCoverage"))
			{
				Uint8 percentOfTestCoverageValue;
				property.getValue().get(percentOfTestCoverageValue);
				setPercentOfTestCoverage(percentOfTestCoverageValue);
			}
			else if (String::equal(property.getName().getString(), "LoopControlParameter"))
			{
				Array<String> loopControlParameterValue;
				property.getValue().get(loopControlParameterValue);
				setLoopControlParameter(loopControlParameterValue);
			}
			else if (String::equal(property.getName().getString(), "LoopControl"))
			{
				Array<Uint16> loopControlValue;
				property.getValue().get(loopControlValue);
				setLoopControl(loopControlValue);
			}
			else if (String::equal(property.getName().getString(), "OtherLoopControlDescriptions"))
			{
				Array<String> otherLoopControlDescriptionsValue;
				property.getValue().get(otherLoopControlDescriptionsValue);
				setOtherLoopControlDescriptions(otherLoopControlDescriptionsValue);
			}
			else if (String::equal(property.getName().getString(), "ResultPersistence"))
			{
				Uint32 resultPersistenceValue;
				property.getValue().get(resultPersistenceValue);
				setResultPersistence(resultPersistenceValue);
			}
			else if (String::equal(property.getName().getString(), "LogOptions"))
			{
				Array<Uint16> logOptionsValue;
				property.getValue().get(logOptionsValue);
				setLogOptions(logOptionsValue);
			}
			else if (String::equal(property.getName().getString(), "OtherLogOptionsDescriptions"))
			{
				Array<String> otherLogOptionsDescriptionsValue;
				property.getValue().get(otherLogOptionsDescriptionsValue);
				setOtherLogOptionsDescriptions(otherLogOptionsDescriptionsValue);
			}
			else if (String::equal(property.getName().getString(), "LogStorage"))
			{
				Array<Uint16> logStorageValue;
				property.getValue().get(logStorageValue);
				setLogStorage(logStorageValue);
			}
			else if (String::equal(property.getName().getString(), "OtherLogStorageDescriptions"))
			{
				Array<String> otherLogStorageDescriptionsValue;
				property.getValue().get(otherLogStorageDescriptionsValue);
				setOtherLogStorageDescriptions(otherLogStorageDescriptionsValue);
			}
			else if (String::equal(property.getName().getString(), "VerbosityLevel"))
			{
				Array<Uint16> verbosityLevelValue;
				property.getValue().get(verbosityLevelValue);
				setVerbosityLevel(verbosityLevelValue);
			}
	}
	return true;
}


Boolean UNIX_DiagnosticSettingRecord::initialize()
{
	return false;
}

Boolean UNIX_DiagnosticSettingRecord::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("DiagnosticSettingRecord");
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
	_haltOnError = Boolean(false);
	_quickMode = Boolean(false);
	_percentOfTestCoverage = Uint8(0);
	_loopControlParameter.clear();
	_loopControl.clear();
	_otherLoopControlDescriptions.clear();
	_resultPersistence = Uint32(0);
	_logOptions.clear();
	_otherLogOptionsDescriptions.clear();
	_logStorage.clear();
	_otherLogStorageDescriptions.clear();
	_verbosityLevel.clear();
	
	return false;
}

Boolean UNIX_DiagnosticSettingRecord::finalize()
{
	return false;
}


Boolean UNIX_DiagnosticSettingRecord::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_DiagnosticSettingRecord::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DiagnosticSettingRecord::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DiagnosticSettingRecord::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DiagnosticSettingRecord::validateInstance()
{
	return true;
}

