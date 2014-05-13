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
CIM_DiagnosticSettingData
*/


/* **** Version *** */
/*
2.11.0
*/


/* **** UMLPackagePath *** */
/*
CIM::System::Diagnostics
*/


/* **** Description *** */
/*
DiagnosticSetting is being deprecated and replaced by an identical class that derives from CIM_SettingData. CIM_Setting is to be replaced by CIM_SettingData in future versions of CIM. 
Specific diagnostic test parameters and execution instructions are defined by this class. To provide more detailed Settings for a type of test (i.e., additional properties), subclassing is appropriate.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_Setting:
				SettingID String

			UNIX_DiagnosticSetting:
				TestWarningLevel UInt16
				ReportSoftErrors Boolean
				ReportStatusMessages Boolean
				HaltOnError Boolean
				QuickMode Boolean
				PercentOfTestCoverage UInt8
				LoopControlParameter String
				LoopControl UInt16
				OtherLoopControlDescription String
				OtherLoopControlDescriptions String
				ResultPersistence UInt32
				LogOptions UInt16
				OtherLogOptionsDescriptions String
				LogStorage UInt16
				OtherLogStorageDescriptions String
				VerbosityLevel UInt16
				Locales String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Setting:
				VerifyOKToApplyToMSE UInt32
				ApplyToMSE UInt32
				VerifyOKToApplyToCollection UInt32
				ApplyToCollection UInt32
				VerifyOKToApplyIncrementalChangeToMSE UInt32
				ApplyIncrementalChangeToMSE UInt32
				VerifyOKToApplyIncrementalChangeToCollection UInt32
				ApplyIncrementalChangeToCollection UInt32

			UNIX_DiagnosticSetting:


*/

#ifndef __UNIX_DIAGNOSTICSETTING_H
#define __UNIX_DIAGNOSTICSETTING_H


#include "CIM_Setting.h"

#include "UNIX_DiagnosticSettingDeps.h"


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

#ifndef PROPERTY_LOOP_CONTROL_PARAMETER
#define PROPERTY_LOOP_CONTROL_PARAMETER \
					"LoopControlParameter"
#endif

#ifndef PROPERTY_LOOP_CONTROL
#define PROPERTY_LOOP_CONTROL \
					"LoopControl"
#endif

#ifndef PROPERTY_OTHER_LOOP_CONTROL_DESCRIPTION
#define PROPERTY_OTHER_LOOP_CONTROL_DESCRIPTION \
					"OtherLoopControlDescription"
#endif

#ifndef PROPERTY_OTHER_LOOP_CONTROL_DESCRIPTIONS
#define PROPERTY_OTHER_LOOP_CONTROL_DESCRIPTIONS \
					"OtherLoopControlDescriptions"
#endif

#ifndef PROPERTY_RESULT_PERSISTENCE
#define PROPERTY_RESULT_PERSISTENCE \
					"ResultPersistence"
#endif

#ifndef PROPERTY_LOG_OPTIONS
#define PROPERTY_LOG_OPTIONS \
					"LogOptions"
#endif

#ifndef PROPERTY_OTHER_LOG_OPTIONS_DESCRIPTIONS
#define PROPERTY_OTHER_LOG_OPTIONS_DESCRIPTIONS \
					"OtherLogOptionsDescriptions"
#endif

#ifndef PROPERTY_LOG_STORAGE
#define PROPERTY_LOG_STORAGE \
					"LogStorage"
#endif

#ifndef PROPERTY_OTHER_LOG_STORAGE_DESCRIPTIONS
#define PROPERTY_OTHER_LOG_STORAGE_DESCRIPTIONS \
					"OtherLogStorageDescriptions"
#endif

#ifndef PROPERTY_VERBOSITY_LEVEL
#define PROPERTY_VERBOSITY_LEVEL \
					"VerbosityLevel"
#endif

#ifndef PROPERTY_LOCALES
#define PROPERTY_LOCALES \
					"Locales"
#endif



class UNIX_DiagnosticSetting :
	public CIM_Setting
{
public:

	UNIX_DiagnosticSetting();
	~UNIX_DiagnosticSetting();

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
	virtual Boolean getSettingID(CIMProperty&) const;
	virtual String getSettingID() const;
	virtual void setSettingID(String&);
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
	virtual Boolean getLoopControlParameter(CIMProperty&) const;
	virtual Array<String> getLoopControlParameter() const;
	virtual void setLoopControlParameter(Array<String>&);
	virtual Boolean getLoopControl(CIMProperty&) const;
	virtual Array<Uint16> getLoopControl() const;
	virtual void setLoopControl(Array<Uint16>&);
	virtual Boolean getOtherLoopControlDescription(CIMProperty&) const;
	virtual String getOtherLoopControlDescription() const;
	virtual void setOtherLoopControlDescription(String&);
	virtual Boolean getOtherLoopControlDescriptions(CIMProperty&) const;
	virtual Array<String> getOtherLoopControlDescriptions() const;
	virtual void setOtherLoopControlDescriptions(Array<String>&);
	virtual Boolean getResultPersistence(CIMProperty&) const;
	virtual Uint32 getResultPersistence() const;
	virtual void setResultPersistence(Uint32&);
	virtual Boolean getLogOptions(CIMProperty&) const;
	virtual Array<Uint16> getLogOptions() const;
	virtual void setLogOptions(Array<Uint16>&);
	virtual Boolean getOtherLogOptionsDescriptions(CIMProperty&) const;
	virtual Array<String> getOtherLogOptionsDescriptions() const;
	virtual void setOtherLogOptionsDescriptions(Array<String>&);
	virtual Boolean getLogStorage(CIMProperty&) const;
	virtual Array<Uint16> getLogStorage() const;
	virtual void setLogStorage(Array<Uint16>&);
	virtual Boolean getOtherLogStorageDescriptions(CIMProperty&) const;
	virtual Array<String> getOtherLogStorageDescriptions() const;
	virtual void setOtherLogStorageDescriptions(Array<String>&);
	virtual Boolean getVerbosityLevel(CIMProperty&) const;
	virtual Array<Uint16> getVerbosityLevel() const;
	virtual void setVerbosityLevel(Array<Uint16>&);
	virtual Boolean getLocales(CIMProperty&) const;
	virtual Array<String> getLocales() const;
	virtual void setLocales(Array<String>&);

	virtual Uint32 invokeVerifyOKToApplyToMSE(
		CIMInstance &inMSE,
		CIMDateTime &inTimeToApply,
		CIMDateTime &inMustBeCompletedBy
	);

	virtual Uint32 invokeApplyToMSE(
		CIMInstance &inMSE,
		CIMDateTime &inTimeToApply,
		CIMDateTime &inMustBeCompletedBy
	);

	virtual Uint32 invokeVerifyOKToApplyToCollection(
		CIMInstance &inCollection,
		CIMDateTime &inTimeToApply,
		CIMDateTime &inMustBeCompletedBy,
		Array<String> &inCanNotApply
	);

	virtual Uint32 invokeApplyToCollection(
		CIMInstance &inCollection,
		CIMDateTime &inTimeToApply,
		Boolean &inContinueOnError,
		CIMDateTime &inMustBeCompletedBy,
		Array<String> &inCanNotApply
	);

	virtual Uint32 invokeVerifyOKToApplyIncrementalChangeToMSE(
		CIMInstance &inMSE,
		CIMDateTime &inTimeToApply,
		CIMDateTime &inMustBeCompletedBy,
		Array<String> &inPropertiesToApply
	);

	virtual Uint32 invokeApplyIncrementalChangeToMSE(
		CIMInstance &inMSE,
		CIMDateTime &inTimeToApply,
		CIMDateTime &inMustBeCompletedBy,
		Array<String> &inPropertiesToApply
	);

	virtual Uint32 invokeVerifyOKToApplyIncrementalChangeToCollection(
		CIMInstance &inCollection,
		CIMDateTime &inTimeToApply,
		CIMDateTime &inMustBeCompletedBy,
		Array<String> &inPropertiesToApply,
		Array<String> &inCanNotApply
	);

	virtual Uint32 invokeApplyIncrementalChangeToCollection(
		CIMInstance &inCollection,
		CIMDateTime &inTimeToApply,
		Boolean &inContinueOnError,
		CIMDateTime &inMustBeCompletedBy,
		Array<String> &inPropertiesToApply,
		Array<String> &inCanNotApply
	);



private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	String _settingID;
	Uint16 _testWarningLevel;
	Boolean _reportSoftErrors;
	Boolean _reportStatusMessages;
	Boolean _haltOnError;
	Boolean _quickMode;
	Uint8 _percentOfTestCoverage;
	Array<String> _loopControlParameter;
	Array<Uint16> _loopControl;
	String _otherLoopControlDescription;
	Array<String> _otherLoopControlDescriptions;
	Uint32 _resultPersistence;
	Array<Uint16> _logOptions;
	Array<String> _otherLogOptionsDescriptions;
	Array<Uint16> _logStorage;
	Array<String> _otherLogStorageDescriptions;
	Array<Uint16> _verbosityLevel;
	Array<String> _locales;

#	include "UNIX_DiagnosticSettingPrivate.h"


};

#endif /* UNIX_DIAGNOSTICSETTING */
