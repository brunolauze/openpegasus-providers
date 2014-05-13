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


UNIX_DiagnosticSetting::UNIX_DiagnosticSetting(void)
{
}

UNIX_DiagnosticSetting::~UNIX_DiagnosticSetting(void)
{
}

Boolean UNIX_DiagnosticSetting::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_DiagnosticSetting::getInstanceID() const
{
	return _instanceID;
}

void UNIX_DiagnosticSetting::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_DiagnosticSetting::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_DiagnosticSetting::getCaption() const
{
	return _caption;
}

void UNIX_DiagnosticSetting::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_DiagnosticSetting::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_DiagnosticSetting::getDescription() const
{
	return _description;
}

void UNIX_DiagnosticSetting::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_DiagnosticSetting::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_DiagnosticSetting::getElementName() const
{
	return _elementName;
}

void UNIX_DiagnosticSetting::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_DiagnosticSetting::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_DiagnosticSetting::getGeneration() const
{
	return _generation;
}

void UNIX_DiagnosticSetting::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_DiagnosticSetting::getSettingID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SETTING_ID, getSettingID());
	return true;
}

String UNIX_DiagnosticSetting::getSettingID() const
{
	return _settingID;
}

void UNIX_DiagnosticSetting::setSettingID(String &value)
{
	_settingID = value;
}

Boolean UNIX_DiagnosticSetting::getTestWarningLevel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TEST_WARNING_LEVEL, getTestWarningLevel());
	return true;
}

Uint16 UNIX_DiagnosticSetting::getTestWarningLevel() const
{
	return _testWarningLevel;
}

void UNIX_DiagnosticSetting::setTestWarningLevel(Uint16 &value)
{
	_testWarningLevel = value;
}

Boolean UNIX_DiagnosticSetting::getReportSoftErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REPORT_SOFT_ERRORS, getReportSoftErrors());
	return true;
}

Boolean UNIX_DiagnosticSetting::getReportSoftErrors() const
{
	return _reportSoftErrors;
}

void UNIX_DiagnosticSetting::setReportSoftErrors(Boolean &value)
{
	_reportSoftErrors = value;
}

Boolean UNIX_DiagnosticSetting::getReportStatusMessages(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REPORT_STATUS_MESSAGES, getReportStatusMessages());
	return true;
}

Boolean UNIX_DiagnosticSetting::getReportStatusMessages() const
{
	return _reportStatusMessages;
}

void UNIX_DiagnosticSetting::setReportStatusMessages(Boolean &value)
{
	_reportStatusMessages = value;
}

Boolean UNIX_DiagnosticSetting::getHaltOnError(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HALT_ON_ERROR, getHaltOnError());
	return true;
}

Boolean UNIX_DiagnosticSetting::getHaltOnError() const
{
	return _haltOnError;
}

void UNIX_DiagnosticSetting::setHaltOnError(Boolean &value)
{
	_haltOnError = value;
}

Boolean UNIX_DiagnosticSetting::getQuickMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_QUICK_MODE, getQuickMode());
	return true;
}

Boolean UNIX_DiagnosticSetting::getQuickMode() const
{
	return _quickMode;
}

void UNIX_DiagnosticSetting::setQuickMode(Boolean &value)
{
	_quickMode = value;
}

Boolean UNIX_DiagnosticSetting::getPercentOfTestCoverage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERCENT_OF_TEST_COVERAGE, getPercentOfTestCoverage());
	return true;
}

Uint8 UNIX_DiagnosticSetting::getPercentOfTestCoverage() const
{
	return _percentOfTestCoverage;
}

void UNIX_DiagnosticSetting::setPercentOfTestCoverage(Uint8 &value)
{
	_percentOfTestCoverage = value;
}

Boolean UNIX_DiagnosticSetting::getLoopControlParameter(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOOP_CONTROL_PARAMETER, getLoopControlParameter());
	return true;
}

Array<String> UNIX_DiagnosticSetting::getLoopControlParameter() const
{
	return _loopControlParameter;
}

void UNIX_DiagnosticSetting::setLoopControlParameter(Array<String> &value)
{
	_loopControlParameter = value;
}

Boolean UNIX_DiagnosticSetting::getLoopControl(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOOP_CONTROL, getLoopControl());
	return true;
}

Array<Uint16> UNIX_DiagnosticSetting::getLoopControl() const
{
	return _loopControl;
}

void UNIX_DiagnosticSetting::setLoopControl(Array<Uint16> &value)
{
	_loopControl = value;
}

Boolean UNIX_DiagnosticSetting::getOtherLoopControlDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_LOOP_CONTROL_DESCRIPTION, getOtherLoopControlDescription());
	return true;
}

String UNIX_DiagnosticSetting::getOtherLoopControlDescription() const
{
	return _otherLoopControlDescription;
}

void UNIX_DiagnosticSetting::setOtherLoopControlDescription(String &value)
{
	_otherLoopControlDescription = value;
}

Boolean UNIX_DiagnosticSetting::getOtherLoopControlDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_LOOP_CONTROL_DESCRIPTIONS, getOtherLoopControlDescriptions());
	return true;
}

Array<String> UNIX_DiagnosticSetting::getOtherLoopControlDescriptions() const
{
	return _otherLoopControlDescriptions;
}

void UNIX_DiagnosticSetting::setOtherLoopControlDescriptions(Array<String> &value)
{
	_otherLoopControlDescriptions = value;
}

Boolean UNIX_DiagnosticSetting::getResultPersistence(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESULT_PERSISTENCE, getResultPersistence());
	return true;
}

Uint32 UNIX_DiagnosticSetting::getResultPersistence() const
{
	return _resultPersistence;
}

void UNIX_DiagnosticSetting::setResultPersistence(Uint32 &value)
{
	_resultPersistence = value;
}

Boolean UNIX_DiagnosticSetting::getLogOptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOG_OPTIONS, getLogOptions());
	return true;
}

Array<Uint16> UNIX_DiagnosticSetting::getLogOptions() const
{
	return _logOptions;
}

void UNIX_DiagnosticSetting::setLogOptions(Array<Uint16> &value)
{
	_logOptions = value;
}

Boolean UNIX_DiagnosticSetting::getOtherLogOptionsDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_LOG_OPTIONS_DESCRIPTIONS, getOtherLogOptionsDescriptions());
	return true;
}

Array<String> UNIX_DiagnosticSetting::getOtherLogOptionsDescriptions() const
{
	return _otherLogOptionsDescriptions;
}

void UNIX_DiagnosticSetting::setOtherLogOptionsDescriptions(Array<String> &value)
{
	_otherLogOptionsDescriptions = value;
}

Boolean UNIX_DiagnosticSetting::getLogStorage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOG_STORAGE, getLogStorage());
	return true;
}

Array<Uint16> UNIX_DiagnosticSetting::getLogStorage() const
{
	return _logStorage;
}

void UNIX_DiagnosticSetting::setLogStorage(Array<Uint16> &value)
{
	_logStorage = value;
}

Boolean UNIX_DiagnosticSetting::getOtherLogStorageDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_LOG_STORAGE_DESCRIPTIONS, getOtherLogStorageDescriptions());
	return true;
}

Array<String> UNIX_DiagnosticSetting::getOtherLogStorageDescriptions() const
{
	return _otherLogStorageDescriptions;
}

void UNIX_DiagnosticSetting::setOtherLogStorageDescriptions(Array<String> &value)
{
	_otherLogStorageDescriptions = value;
}

Boolean UNIX_DiagnosticSetting::getVerbosityLevel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERBOSITY_LEVEL, getVerbosityLevel());
	return true;
}

Array<Uint16> UNIX_DiagnosticSetting::getVerbosityLevel() const
{
	return _verbosityLevel;
}

void UNIX_DiagnosticSetting::setVerbosityLevel(Array<Uint16> &value)
{
	_verbosityLevel = value;
}

Boolean UNIX_DiagnosticSetting::getLocales(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCALES, getLocales());
	return true;
}

Array<String> UNIX_DiagnosticSetting::getLocales() const
{
	return _locales;
}

void UNIX_DiagnosticSetting::setLocales(Array<String> &value)
{
	_locales = value;
}


void UNIX_DiagnosticSetting::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("DiagnosticSetting");
	_generation = Uint64(0);
	_settingID = String ("");
	_testWarningLevel = Uint16(0);
	_reportSoftErrors = Boolean(false);
	_reportStatusMessages = Boolean(false);
	_haltOnError = Boolean(false);
	_quickMode = Boolean(false);
	_percentOfTestCoverage = Uint8(0);
	_loopControlParameter.clear();
	_loopControl.clear();
	_otherLoopControlDescription = String ("");
	_otherLoopControlDescriptions.clear();
	_resultPersistence = Uint32(0);
	_logOptions.clear();
	_otherLogOptionsDescriptions.clear();
	_logStorage.clear();
	_otherLogStorageDescriptions.clear();
	_verbosityLevel.clear();
	_locales.clear();

}

Boolean UNIX_DiagnosticSetting::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "SettingID"))
			{
				String settingIDValue;
				property.getValue().get(settingIDValue);
				setSettingID(settingIDValue);
			}
			else if (String::equal(property.getName().getString(), "TestWarningLevel"))
			{
				Uint16 testWarningLevelValue;
				property.getValue().get(testWarningLevelValue);
				setTestWarningLevel(testWarningLevelValue);
			}
			else if (String::equal(property.getName().getString(), "ReportSoftErrors"))
			{
				Boolean reportSoftErrorsValue;
				property.getValue().get(reportSoftErrorsValue);
				setReportSoftErrors(reportSoftErrorsValue);
			}
			else if (String::equal(property.getName().getString(), "ReportStatusMessages"))
			{
				Boolean reportStatusMessagesValue;
				property.getValue().get(reportStatusMessagesValue);
				setReportStatusMessages(reportStatusMessagesValue);
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
			else if (String::equal(property.getName().getString(), "OtherLoopControlDescription"))
			{
				String otherLoopControlDescriptionValue;
				property.getValue().get(otherLoopControlDescriptionValue);
				setOtherLoopControlDescription(otherLoopControlDescriptionValue);
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
			else if (String::equal(property.getName().getString(), "Locales"))
			{
				Array<String> localesValue;
				property.getValue().get(localesValue);
				setLocales(localesValue);
			}
	}
	return true;
}

Uint32 UNIX_DiagnosticSetting::invokeVerifyOKToApplyToMSE(
		CIMInstance &inMSE,
		CIMDateTime &inTimeToApply,
		CIMDateTime &inMustBeCompletedBy
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method VerifyOKToApplyToMSE */
	
	
	
	return returnValue;
}

Uint32 UNIX_DiagnosticSetting::invokeApplyToMSE(
		CIMInstance &inMSE,
		CIMDateTime &inTimeToApply,
		CIMDateTime &inMustBeCompletedBy
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ApplyToMSE */
	
	
	
	return returnValue;
}

Uint32 UNIX_DiagnosticSetting::invokeVerifyOKToApplyToCollection(
		CIMInstance &inCollection,
		CIMDateTime &inTimeToApply,
		CIMDateTime &inMustBeCompletedBy,
		Array<String> &inCanNotApply
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method VerifyOKToApplyToCollection */
	
	
	
	return returnValue;
}

Uint32 UNIX_DiagnosticSetting::invokeApplyToCollection(
		CIMInstance &inCollection,
		CIMDateTime &inTimeToApply,
		Boolean &inContinueOnError,
		CIMDateTime &inMustBeCompletedBy,
		Array<String> &inCanNotApply
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ApplyToCollection */
	
	
	
	return returnValue;
}

Uint32 UNIX_DiagnosticSetting::invokeVerifyOKToApplyIncrementalChangeToMSE(
		CIMInstance &inMSE,
		CIMDateTime &inTimeToApply,
		CIMDateTime &inMustBeCompletedBy,
		Array<String> &inPropertiesToApply
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method VerifyOKToApplyIncrementalChangeToMSE */
	
	
	
	return returnValue;
}

Uint32 UNIX_DiagnosticSetting::invokeApplyIncrementalChangeToMSE(
		CIMInstance &inMSE,
		CIMDateTime &inTimeToApply,
		CIMDateTime &inMustBeCompletedBy,
		Array<String> &inPropertiesToApply
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ApplyIncrementalChangeToMSE */
	
	
	
	return returnValue;
}

Uint32 UNIX_DiagnosticSetting::invokeVerifyOKToApplyIncrementalChangeToCollection(
		CIMInstance &inCollection,
		CIMDateTime &inTimeToApply,
		CIMDateTime &inMustBeCompletedBy,
		Array<String> &inPropertiesToApply,
		Array<String> &inCanNotApply
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method VerifyOKToApplyIncrementalChangeToCollection */
	
	
	
	return returnValue;
}

Uint32 UNIX_DiagnosticSetting::invokeApplyIncrementalChangeToCollection(
		CIMInstance &inCollection,
		CIMDateTime &inTimeToApply,
		Boolean &inContinueOnError,
		CIMDateTime &inMustBeCompletedBy,
		Array<String> &inPropertiesToApply,
		Array<String> &inCanNotApply
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ApplyIncrementalChangeToCollection */
	
	
	
	return returnValue;
}


Boolean UNIX_DiagnosticSetting::initialize()
{
	return false;
}

Boolean UNIX_DiagnosticSetting::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("DiagnosticSetting");
	_generation = Uint64(0);
	_settingID = String ("");
	_testWarningLevel = Uint16(0);
	_reportSoftErrors = Boolean(false);
	_reportStatusMessages = Boolean(false);
	_haltOnError = Boolean(false);
	_quickMode = Boolean(false);
	_percentOfTestCoverage = Uint8(0);
	_loopControlParameter.clear();
	_loopControl.clear();
	_otherLoopControlDescription = String ("");
	_otherLoopControlDescriptions.clear();
	_resultPersistence = Uint32(0);
	_logOptions.clear();
	_otherLogOptionsDescriptions.clear();
	_logStorage.clear();
	_otherLogStorageDescriptions.clear();
	_verbosityLevel.clear();
	_locales.clear();
	
	return false;
}

Boolean UNIX_DiagnosticSetting::finalize()
{
	return false;
}


Boolean UNIX_DiagnosticSetting::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String settingIDKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SETTING_ID)) settingIDKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getSettingID(), settingIDKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_DiagnosticSetting::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DiagnosticSetting::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DiagnosticSetting::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DiagnosticSetting::validateInstance()
{
	return true;
}

