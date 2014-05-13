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


UNIX_DiagnosticResult::UNIX_DiagnosticResult(void)
{
}

UNIX_DiagnosticResult::~UNIX_DiagnosticResult(void)
{
}

Boolean UNIX_DiagnosticResult::getDiagnosticCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DIAGNOSTIC_CREATION_CLASS_NAME, getDiagnosticCreationClassName());
	return true;
}

String UNIX_DiagnosticResult::getDiagnosticCreationClassName() const
{
	return _diagnosticCreationClassName;
}

void UNIX_DiagnosticResult::setDiagnosticCreationClassName(String &value)
{
	_diagnosticCreationClassName = value;
}

Boolean UNIX_DiagnosticResult::getDiagnosticName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DIAGNOSTIC_NAME, getDiagnosticName());
	return true;
}

String UNIX_DiagnosticResult::getDiagnosticName() const
{
	return _diagnosticName;
}

void UNIX_DiagnosticResult::setDiagnosticName(String &value)
{
	_diagnosticName = value;
}

Boolean UNIX_DiagnosticResult::getDiagSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DIAG_SYSTEM_CREATION_CLASS_NAME, getDiagSystemCreationClassName());
	return true;
}

String UNIX_DiagnosticResult::getDiagSystemCreationClassName() const
{
	return _diagSystemCreationClassName;
}

void UNIX_DiagnosticResult::setDiagSystemCreationClassName(String &value)
{
	_diagSystemCreationClassName = value;
}

Boolean UNIX_DiagnosticResult::getDiagSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DIAG_SYSTEM_NAME, getDiagSystemName());
	return true;
}

String UNIX_DiagnosticResult::getDiagSystemName() const
{
	return _diagSystemName;
}

void UNIX_DiagnosticResult::setDiagSystemName(String &value)
{
	_diagSystemName = value;
}

Boolean UNIX_DiagnosticResult::getExecutionID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXECUTION_ID, getExecutionID());
	return true;
}

String UNIX_DiagnosticResult::getExecutionID() const
{
	return _executionID;
}

void UNIX_DiagnosticResult::setExecutionID(String &value)
{
	_executionID = value;
}

Boolean UNIX_DiagnosticResult::getTimeStamp(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_STAMP, getTimeStamp());
	return true;
}

CIMDateTime UNIX_DiagnosticResult::getTimeStamp() const
{
	return _timeStamp;
}

void UNIX_DiagnosticResult::setTimeStamp(CIMDateTime &value)
{
	_timeStamp = value;
}

Boolean UNIX_DiagnosticResult::getIsPackage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_PACKAGE, getIsPackage());
	return true;
}

Boolean UNIX_DiagnosticResult::getIsPackage() const
{
	return _isPackage;
}

void UNIX_DiagnosticResult::setIsPackage(Boolean &value)
{
	_isPackage = value;
}

Boolean UNIX_DiagnosticResult::getTestStartTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TEST_START_TIME, getTestStartTime());
	return true;
}

CIMDateTime UNIX_DiagnosticResult::getTestStartTime() const
{
	return _testStartTime;
}

void UNIX_DiagnosticResult::setTestStartTime(CIMDateTime &value)
{
	_testStartTime = value;
}

Boolean UNIX_DiagnosticResult::getTestCompletionTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TEST_COMPLETION_TIME, getTestCompletionTime());
	return true;
}

CIMDateTime UNIX_DiagnosticResult::getTestCompletionTime() const
{
	return _testCompletionTime;
}

void UNIX_DiagnosticResult::setTestCompletionTime(CIMDateTime &value)
{
	_testCompletionTime = value;
}

Boolean UNIX_DiagnosticResult::getTestState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TEST_STATE, getTestState());
	return true;
}

Uint16 UNIX_DiagnosticResult::getTestState() const
{
	return _testState;
}

void UNIX_DiagnosticResult::setTestState(Uint16 &value)
{
	_testState = value;
}

Boolean UNIX_DiagnosticResult::getOtherStateDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_STATE_DESCRIPTION, getOtherStateDescription());
	return true;
}

String UNIX_DiagnosticResult::getOtherStateDescription() const
{
	return _otherStateDescription;
}

void UNIX_DiagnosticResult::setOtherStateDescription(String &value)
{
	_otherStateDescription = value;
}

Boolean UNIX_DiagnosticResult::getEstimatedTimeOfPerforming(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ESTIMATED_TIME_OF_PERFORMING, getEstimatedTimeOfPerforming());
	return true;
}

Uint32 UNIX_DiagnosticResult::getEstimatedTimeOfPerforming() const
{
	return _estimatedTimeOfPerforming;
}

void UNIX_DiagnosticResult::setEstimatedTimeOfPerforming(Uint32 &value)
{
	_estimatedTimeOfPerforming = value;
}

Boolean UNIX_DiagnosticResult::getTestResults(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TEST_RESULTS, getTestResults());
	return true;
}

Array<String> UNIX_DiagnosticResult::getTestResults() const
{
	return _testResults;
}

void UNIX_DiagnosticResult::setTestResults(Array<String> &value)
{
	_testResults = value;
}

Boolean UNIX_DiagnosticResult::getPercentComplete(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERCENT_COMPLETE, getPercentComplete());
	return true;
}

Uint8 UNIX_DiagnosticResult::getPercentComplete() const
{
	return _percentComplete;
}

void UNIX_DiagnosticResult::setPercentComplete(Uint8 &value)
{
	_percentComplete = value;
}

Boolean UNIX_DiagnosticResult::getErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CODE, getErrorCode());
	return true;
}

Array<String> UNIX_DiagnosticResult::getErrorCode() const
{
	return _errorCode;
}

void UNIX_DiagnosticResult::setErrorCode(Array<String> &value)
{
	_errorCode = value;
}

Boolean UNIX_DiagnosticResult::getErrorCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_COUNT, getErrorCount());
	return true;
}

Array<Uint32> UNIX_DiagnosticResult::getErrorCount() const
{
	return _errorCount;
}

void UNIX_DiagnosticResult::setErrorCount(Array<Uint32> &value)
{
	_errorCount = value;
}

Boolean UNIX_DiagnosticResult::getLoopsFailed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOOPS_FAILED, getLoopsFailed());
	return true;
}

Uint32 UNIX_DiagnosticResult::getLoopsFailed() const
{
	return _loopsFailed;
}

void UNIX_DiagnosticResult::setLoopsFailed(Uint32 &value)
{
	_loopsFailed = value;
}

Boolean UNIX_DiagnosticResult::getLoopsPassed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOOPS_PASSED, getLoopsPassed());
	return true;
}

Uint32 UNIX_DiagnosticResult::getLoopsPassed() const
{
	return _loopsPassed;
}

void UNIX_DiagnosticResult::setLoopsPassed(Uint32 &value)
{
	_loopsPassed = value;
}

Boolean UNIX_DiagnosticResult::getTestWarningLevel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TEST_WARNING_LEVEL, getTestWarningLevel());
	return true;
}

Uint16 UNIX_DiagnosticResult::getTestWarningLevel() const
{
	return _testWarningLevel;
}

void UNIX_DiagnosticResult::setTestWarningLevel(Uint16 &value)
{
	_testWarningLevel = value;
}

Boolean UNIX_DiagnosticResult::getReportSoftErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REPORT_SOFT_ERRORS, getReportSoftErrors());
	return true;
}

Boolean UNIX_DiagnosticResult::getReportSoftErrors() const
{
	return _reportSoftErrors;
}

void UNIX_DiagnosticResult::setReportSoftErrors(Boolean &value)
{
	_reportSoftErrors = value;
}

Boolean UNIX_DiagnosticResult::getReportStatusMessages(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REPORT_STATUS_MESSAGES, getReportStatusMessages());
	return true;
}

Boolean UNIX_DiagnosticResult::getReportStatusMessages() const
{
	return _reportStatusMessages;
}

void UNIX_DiagnosticResult::setReportStatusMessages(Boolean &value)
{
	_reportStatusMessages = value;
}

Boolean UNIX_DiagnosticResult::getHaltOnError(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HALT_ON_ERROR, getHaltOnError());
	return true;
}

Boolean UNIX_DiagnosticResult::getHaltOnError() const
{
	return _haltOnError;
}

void UNIX_DiagnosticResult::setHaltOnError(Boolean &value)
{
	_haltOnError = value;
}

Boolean UNIX_DiagnosticResult::getQuickMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_QUICK_MODE, getQuickMode());
	return true;
}

Boolean UNIX_DiagnosticResult::getQuickMode() const
{
	return _quickMode;
}

void UNIX_DiagnosticResult::setQuickMode(Boolean &value)
{
	_quickMode = value;
}

Boolean UNIX_DiagnosticResult::getPercentOfTestCoverage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERCENT_OF_TEST_COVERAGE, getPercentOfTestCoverage());
	return true;
}

Uint8 UNIX_DiagnosticResult::getPercentOfTestCoverage() const
{
	return _percentOfTestCoverage;
}

void UNIX_DiagnosticResult::setPercentOfTestCoverage(Uint8 &value)
{
	_percentOfTestCoverage = value;
}


void UNIX_DiagnosticResult::clearInstance()
{

	_diagnosticCreationClassName = String ("");
	_diagnosticName = String ("");
	_diagSystemCreationClassName = String ("");
	_diagSystemName = String ("");
	_executionID = String ("");
	_timeStamp = CIMHelper::getCurrentTime();
	_isPackage = Boolean(false);
	_testStartTime = CIMHelper::getCurrentTime();
	_testCompletionTime = CIMHelper::getCurrentTime();
	_testState = Uint16(0);
	_otherStateDescription = String ("");
	_estimatedTimeOfPerforming = Uint32(0);
	_testResults.clear();
	_percentComplete = Uint8(0);
	_errorCode.clear();
	_errorCount.clear();
	_loopsFailed = Uint32(0);
	_loopsPassed = Uint32(0);
	_testWarningLevel = Uint16(0);
	_reportSoftErrors = Boolean(false);
	_reportStatusMessages = Boolean(false);
	_haltOnError = Boolean(false);
	_quickMode = Boolean(false);
	_percentOfTestCoverage = Uint8(0);

}

Boolean UNIX_DiagnosticResult::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "DiagnosticCreationClassName"))
			{
				String diagnosticCreationClassNameValue;
				property.getValue().get(diagnosticCreationClassNameValue);
				setDiagnosticCreationClassName(diagnosticCreationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "DiagnosticName"))
			{
				String diagnosticNameValue;
				property.getValue().get(diagnosticNameValue);
				setDiagnosticName(diagnosticNameValue);
			}
			else if (String::equal(property.getName().getString(), "DiagSystemCreationClassName"))
			{
				String diagSystemCreationClassNameValue;
				property.getValue().get(diagSystemCreationClassNameValue);
				setDiagSystemCreationClassName(diagSystemCreationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "DiagSystemName"))
			{
				String diagSystemNameValue;
				property.getValue().get(diagSystemNameValue);
				setDiagSystemName(diagSystemNameValue);
			}
			else if (String::equal(property.getName().getString(), "ExecutionID"))
			{
				String executionIDValue;
				property.getValue().get(executionIDValue);
				setExecutionID(executionIDValue);
			}
			else if (String::equal(property.getName().getString(), "TimeStamp"))
			{
				CIMDateTime timeStampValue;
				property.getValue().get(timeStampValue);
				setTimeStamp(timeStampValue);
			}
			else if (String::equal(property.getName().getString(), "IsPackage"))
			{
				Boolean isPackageValue;
				property.getValue().get(isPackageValue);
				setIsPackage(isPackageValue);
			}
			else if (String::equal(property.getName().getString(), "TestStartTime"))
			{
				CIMDateTime testStartTimeValue;
				property.getValue().get(testStartTimeValue);
				setTestStartTime(testStartTimeValue);
			}
			else if (String::equal(property.getName().getString(), "TestCompletionTime"))
			{
				CIMDateTime testCompletionTimeValue;
				property.getValue().get(testCompletionTimeValue);
				setTestCompletionTime(testCompletionTimeValue);
			}
			else if (String::equal(property.getName().getString(), "TestState"))
			{
				Uint16 testStateValue;
				property.getValue().get(testStateValue);
				setTestState(testStateValue);
			}
			else if (String::equal(property.getName().getString(), "OtherStateDescription"))
			{
				String otherStateDescriptionValue;
				property.getValue().get(otherStateDescriptionValue);
				setOtherStateDescription(otherStateDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "EstimatedTimeOfPerforming"))
			{
				Uint32 estimatedTimeOfPerformingValue;
				property.getValue().get(estimatedTimeOfPerformingValue);
				setEstimatedTimeOfPerforming(estimatedTimeOfPerformingValue);
			}
			else if (String::equal(property.getName().getString(), "TestResults"))
			{
				Array<String> testResultsValue;
				property.getValue().get(testResultsValue);
				setTestResults(testResultsValue);
			}
			else if (String::equal(property.getName().getString(), "PercentComplete"))
			{
				Uint8 percentCompleteValue;
				property.getValue().get(percentCompleteValue);
				setPercentComplete(percentCompleteValue);
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
	}
	return true;
}


Boolean UNIX_DiagnosticResult::initialize()
{
	return false;
}

Boolean UNIX_DiagnosticResult::load(int &pIndex)
{
	
	_diagnosticCreationClassName = String ("");
	_diagnosticName = String ("");
	_diagSystemCreationClassName = String ("");
	_diagSystemName = String ("");
	_executionID = String ("");
	_timeStamp = CIMHelper::getCurrentTime();
	_isPackage = Boolean(false);
	_testStartTime = CIMHelper::getCurrentTime();
	_testCompletionTime = CIMHelper::getCurrentTime();
	_testState = Uint16(0);
	_otherStateDescription = String ("");
	_estimatedTimeOfPerforming = Uint32(0);
	_testResults.clear();
	_percentComplete = Uint8(0);
	_errorCode.clear();
	_errorCount.clear();
	_loopsFailed = Uint32(0);
	_loopsPassed = Uint32(0);
	_testWarningLevel = Uint16(0);
	_reportSoftErrors = Boolean(false);
	_reportStatusMessages = Boolean(false);
	_haltOnError = Boolean(false);
	_quickMode = Boolean(false);
	_percentOfTestCoverage = Uint8(0);
	
	return false;
}

Boolean UNIX_DiagnosticResult::finalize()
{
	return false;
}


Boolean UNIX_DiagnosticResult::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String diagnosticCreationClassNameKey;
	String diagnosticNameKey;
	String diagSystemCreationClassNameKey;
	String diagSystemNameKey;
	String executionIDKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_DIAGNOSTIC_CREATION_CLASS_NAME)) diagnosticCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_DIAGNOSTIC_NAME)) diagnosticNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_DIAG_SYSTEM_CREATION_CLASS_NAME)) diagSystemCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_DIAG_SYSTEM_NAME)) diagSystemNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_EXECUTION_ID)) executionIDKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getDiagnosticCreationClassName(), diagnosticCreationClassNameKey)) && 
			(String::equalNoCase(getDiagnosticName(), diagnosticNameKey)) && 
			(String::equalNoCase(getDiagSystemCreationClassName(), diagSystemCreationClassNameKey)) && 
			(String::equalNoCase(getDiagSystemName(), diagSystemNameKey)) && 
			(String::equalNoCase(getExecutionID(), executionIDKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_DiagnosticResult::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DiagnosticResult::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DiagnosticResult::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DiagnosticResult::validateInstance()
{
	return true;
}

