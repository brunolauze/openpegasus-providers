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


/* **** Deprecated *** */
/*
CIM_DiagnosticServiceRecord
*/


/* **** Version *** */
/*
2.10.0
*/


/* **** UMLPackagePath *** */
/*
CIM::System::Diagnostics
*/


/* **** Description *** */
/*
When a DiagnosticTest Service is running, test results are reported using a DiagnosticResult object, or one of its subclasses. A DiagnosticTest may be running because its Service is Started or due to an invocation of the RunTest method. Diagnostic Results are related to their Test via an instance of the DiagnosticResultsForMSE association. 
For every running of DiagnosticTest, a new instance of DiagnosticResult, or one of it's subclasses should be created.
*/


/*
			 *** Properties ***

			UNIX_DiagnosticResult:
				DiagnosticCreationClassName String
				DiagnosticName String
				DiagSystemCreationClassName String
				DiagSystemName String
				ExecutionID String
				TimeStamp DateTime
				IsPackage Boolean
				TestStartTime DateTime
				TestCompletionTime DateTime
				TestState UInt16
				OtherStateDescription String
				EstimatedTimeOfPerforming UInt32
				TestResults String
				PercentComplete UInt8
				ErrorCode String
				ErrorCount UInt32
				LoopsFailed UInt32
				LoopsPassed UInt32
				TestWarningLevel UInt16
				ReportSoftErrors Boolean
				ReportStatusMessages Boolean
				HaltOnError Boolean
				QuickMode Boolean
				PercentOfTestCoverage UInt8


*/


/*
			 *** Methods ***

			UNIX_DiagnosticResult:


*/

#ifndef __UNIX_DIAGNOSTICRESULT_H
#define __UNIX_DIAGNOSTICRESULT_H


#include "CIM_ClassBase.h"

#include "UNIX_DiagnosticResultDeps.h"


#ifndef PROPERTY_DIAGNOSTIC_CREATION_CLASS_NAME
#define PROPERTY_DIAGNOSTIC_CREATION_CLASS_NAME \
					"DiagnosticCreationClassName"
#endif

#ifndef PROPERTY_DIAGNOSTIC_NAME
#define PROPERTY_DIAGNOSTIC_NAME \
					"DiagnosticName"
#endif

#ifndef PROPERTY_DIAG_SYSTEM_CREATION_CLASS_NAME
#define PROPERTY_DIAG_SYSTEM_CREATION_CLASS_NAME \
					"DiagSystemCreationClassName"
#endif

#ifndef PROPERTY_DIAG_SYSTEM_NAME
#define PROPERTY_DIAG_SYSTEM_NAME \
					"DiagSystemName"
#endif

#ifndef PROPERTY_EXECUTION_ID
#define PROPERTY_EXECUTION_ID \
					"ExecutionID"
#endif

#ifndef PROPERTY_TIME_STAMP
#define PROPERTY_TIME_STAMP \
					"TimeStamp"
#endif

#ifndef PROPERTY_IS_PACKAGE
#define PROPERTY_IS_PACKAGE \
					"IsPackage"
#endif

#ifndef PROPERTY_TEST_START_TIME
#define PROPERTY_TEST_START_TIME \
					"TestStartTime"
#endif

#ifndef PROPERTY_TEST_COMPLETION_TIME
#define PROPERTY_TEST_COMPLETION_TIME \
					"TestCompletionTime"
#endif

#ifndef PROPERTY_TEST_STATE
#define PROPERTY_TEST_STATE \
					"TestState"
#endif

#ifndef PROPERTY_OTHER_STATE_DESCRIPTION
#define PROPERTY_OTHER_STATE_DESCRIPTION \
					"OtherStateDescription"
#endif

#ifndef PROPERTY_ESTIMATED_TIME_OF_PERFORMING
#define PROPERTY_ESTIMATED_TIME_OF_PERFORMING \
					"EstimatedTimeOfPerforming"
#endif

#ifndef PROPERTY_TEST_RESULTS
#define PROPERTY_TEST_RESULTS \
					"TestResults"
#endif

#ifndef PROPERTY_PERCENT_COMPLETE
#define PROPERTY_PERCENT_COMPLETE \
					"PercentComplete"
#endif

#ifndef PROPERTY_ERROR_CODE
#define PROPERTY_ERROR_CODE \
					"ErrorCode"
#endif

#ifndef PROPERTY_ERROR_COUNT
#define PROPERTY_ERROR_COUNT \
					"ErrorCount"
#endif

#ifndef PROPERTY_LOOPS_FAILED
#define PROPERTY_LOOPS_FAILED \
					"LoopsFailed"
#endif

#ifndef PROPERTY_LOOPS_PASSED
#define PROPERTY_LOOPS_PASSED \
					"LoopsPassed"
#endif

#ifndef PROPERTY_TEST_WARNING_LEVEL
#define PROPERTY_TEST_WARNING_LEVEL \
					"TestWarningLevel"
#endif

#ifndef PROPERTY_REPORT_SOFT_ERRORS
#define PROPERTY_REPORT_SOFT_ERRORS \
					"ReportSoftErrors"
#endif

#ifndef PROPERTY_REPORT_STATUS_MESSAGES
#define PROPERTY_REPORT_STATUS_MESSAGES \
					"ReportStatusMessages"
#endif

#ifndef PROPERTY_HALT_ON_ERROR
#define PROPERTY_HALT_ON_ERROR \
					"HaltOnError"
#endif

#ifndef PROPERTY_QUICK_MODE
#define PROPERTY_QUICK_MODE \
					"QuickMode"
#endif

#ifndef PROPERTY_PERCENT_OF_TEST_COVERAGE
#define PROPERTY_PERCENT_OF_TEST_COVERAGE \
					"PercentOfTestCoverage"
#endif



class UNIX_DiagnosticResult :
	public CIM_ClassBase
{
public:

	UNIX_DiagnosticResult();
	~UNIX_DiagnosticResult();

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

	virtual Boolean getDiagnosticCreationClassName(CIMProperty&) const;
	virtual String getDiagnosticCreationClassName() const;
	virtual void setDiagnosticCreationClassName(String&);
	virtual Boolean getDiagnosticName(CIMProperty&) const;
	virtual String getDiagnosticName() const;
	virtual void setDiagnosticName(String&);
	virtual Boolean getDiagSystemCreationClassName(CIMProperty&) const;
	virtual String getDiagSystemCreationClassName() const;
	virtual void setDiagSystemCreationClassName(String&);
	virtual Boolean getDiagSystemName(CIMProperty&) const;
	virtual String getDiagSystemName() const;
	virtual void setDiagSystemName(String&);
	virtual Boolean getExecutionID(CIMProperty&) const;
	virtual String getExecutionID() const;
	virtual void setExecutionID(String&);
	virtual Boolean getTimeStamp(CIMProperty&) const;
	virtual CIMDateTime getTimeStamp() const;
	virtual void setTimeStamp(CIMDateTime&);
	virtual Boolean getIsPackage(CIMProperty&) const;
	virtual Boolean getIsPackage() const;
	virtual void setIsPackage(Boolean&);
	virtual Boolean getTestStartTime(CIMProperty&) const;
	virtual CIMDateTime getTestStartTime() const;
	virtual void setTestStartTime(CIMDateTime&);
	virtual Boolean getTestCompletionTime(CIMProperty&) const;
	virtual CIMDateTime getTestCompletionTime() const;
	virtual void setTestCompletionTime(CIMDateTime&);
	virtual Boolean getTestState(CIMProperty&) const;
	virtual Uint16 getTestState() const;
	virtual void setTestState(Uint16&);
	virtual Boolean getOtherStateDescription(CIMProperty&) const;
	virtual String getOtherStateDescription() const;
	virtual void setOtherStateDescription(String&);
	virtual Boolean getEstimatedTimeOfPerforming(CIMProperty&) const;
	virtual Uint32 getEstimatedTimeOfPerforming() const;
	virtual void setEstimatedTimeOfPerforming(Uint32&);
	virtual Boolean getTestResults(CIMProperty&) const;
	virtual Array<String> getTestResults() const;
	virtual void setTestResults(Array<String>&);
	virtual Boolean getPercentComplete(CIMProperty&) const;
	virtual Uint8 getPercentComplete() const;
	virtual void setPercentComplete(Uint8&);
	virtual Boolean getErrorCode(CIMProperty&) const;
	virtual Array<String> getErrorCode() const;
	virtual void setErrorCode(Array<String>&);
	virtual Boolean getErrorCount(CIMProperty&) const;
	virtual Array<Uint32> getErrorCount() const;
	virtual void setErrorCount(Array<Uint32>&);
	virtual Boolean getLoopsFailed(CIMProperty&) const;
	virtual Uint32 getLoopsFailed() const;
	virtual void setLoopsFailed(Uint32&);
	virtual Boolean getLoopsPassed(CIMProperty&) const;
	virtual Uint32 getLoopsPassed() const;
	virtual void setLoopsPassed(Uint32&);
	virtual Boolean getTestWarningLevel(CIMProperty&) const;
	virtual Uint16 getTestWarningLevel() const;
	virtual void setTestWarningLevel(Uint16&);
	virtual Boolean getReportSoftErrors(CIMProperty&) const;
	virtual Boolean getReportSoftErrors() const;
	virtual void setReportSoftErrors(Boolean&);
	virtual Boolean getReportStatusMessages(CIMProperty&) const;
	virtual Boolean getReportStatusMessages() const;
	virtual void setReportStatusMessages(Boolean&);
	virtual Boolean getHaltOnError(CIMProperty&) const;
	virtual Boolean getHaltOnError() const;
	virtual void setHaltOnError(Boolean&);
	virtual Boolean getQuickMode(CIMProperty&) const;
	virtual Boolean getQuickMode() const;
	virtual void setQuickMode(Boolean&);
	virtual Boolean getPercentOfTestCoverage(CIMProperty&) const;
	virtual Uint8 getPercentOfTestCoverage() const;
	virtual void setPercentOfTestCoverage(Uint8&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _diagnosticCreationClassName;
	String _diagnosticName;
	String _diagSystemCreationClassName;
	String _diagSystemName;
	String _executionID;
	CIMDateTime _timeStamp;
	Boolean _isPackage;
	CIMDateTime _testStartTime;
	CIMDateTime _testCompletionTime;
	Uint16 _testState;
	String _otherStateDescription;
	Uint32 _estimatedTimeOfPerforming;
	Array<String> _testResults;
	Uint8 _percentComplete;
	Array<String> _errorCode;
	Array<Uint32> _errorCount;
	Uint32 _loopsFailed;
	Uint32 _loopsPassed;
	Uint16 _testWarningLevel;
	Boolean _reportSoftErrors;
	Boolean _reportStatusMessages;
	Boolean _haltOnError;
	Boolean _quickMode;
	Uint8 _percentOfTestCoverage;

#	include "UNIX_DiagnosticResultPrivate.h"


};

#endif /* UNIX_DIAGNOSTICRESULT */
