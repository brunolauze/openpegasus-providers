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
CIM_DiagnosticSettingDataRecord
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
This class is being deprecated as part of the change to have Diagnostic Settings derive from CIM_SettingData instead of CIM_Setting. The replacement class will have the settings as an embedded instance. 
A snapshot of the properties in the DiagnosticSetting instance that was used when the Diagnostic was run.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_RecordForLog:
				RecordFormat String
				RecordData String
				Locale String
				PerceivedSeverity UInt16

			CIM_DiagnosticRecord:
				ServiceName String
				ManagedElementName String
				ExpirationDate DateTime
				RecordType UInt16
				OtherRecordTypeDescription String
				CreationTimeStamp DateTime

			UNIX_DiagnosticSettingRecord:
				HaltOnError Boolean
				QuickMode Boolean
				PercentOfTestCoverage UInt8
				LoopControlParameter String
				LoopControl UInt16
				OtherLoopControlDescriptions String
				ResultPersistence UInt32
				LogOptions UInt16
				OtherLogOptionsDescriptions String
				LogStorage UInt16
				OtherLogStorageDescriptions String
				VerbosityLevel UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_RecordForLog:

			CIM_DiagnosticRecord:

			UNIX_DiagnosticSettingRecord:


*/

#ifndef __UNIX_DIAGNOSTICSETTINGRECORD_H
#define __UNIX_DIAGNOSTICSETTINGRECORD_H


#include "CIM_DiagnosticRecord.h"

#include "UNIX_DiagnosticSettingRecordDeps.h"


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



class UNIX_DiagnosticSettingRecord :
	public CIM_DiagnosticRecord
{
public:

	UNIX_DiagnosticSettingRecord();
	~UNIX_DiagnosticSettingRecord();

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
	virtual Boolean getRecordFormat(CIMProperty&) const;
	virtual String getRecordFormat() const;
	virtual void setRecordFormat(String&);
	virtual Boolean getRecordData(CIMProperty&) const;
	virtual String getRecordData() const;
	virtual void setRecordData(String&);
	virtual Boolean getLocale(CIMProperty&) const;
	virtual String getLocale() const;
	virtual void setLocale(String&);
	virtual Boolean getPerceivedSeverity(CIMProperty&) const;
	virtual Uint16 getPerceivedSeverity() const;
	virtual void setPerceivedSeverity(Uint16&);
	virtual Boolean getServiceName(CIMProperty&) const;
	virtual String getServiceName() const;
	virtual void setServiceName(String&);
	virtual Boolean getManagedElementName(CIMProperty&) const;
	virtual String getManagedElementName() const;
	virtual void setManagedElementName(String&);
	virtual Boolean getExpirationDate(CIMProperty&) const;
	virtual CIMDateTime getExpirationDate() const;
	virtual void setExpirationDate(CIMDateTime&);
	virtual Boolean getRecordType(CIMProperty&) const;
	virtual Uint16 getRecordType() const;
	virtual void setRecordType(Uint16&);
	virtual Boolean getOtherRecordTypeDescription(CIMProperty&) const;
	virtual String getOtherRecordTypeDescription() const;
	virtual void setOtherRecordTypeDescription(String&);
	virtual Boolean getCreationTimeStamp(CIMProperty&) const;
	virtual CIMDateTime getCreationTimeStamp() const;
	virtual void setCreationTimeStamp(CIMDateTime&);
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


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	String _recordFormat;
	String _recordData;
	String _locale;
	Uint16 _perceivedSeverity;
	String _serviceName;
	String _managedElementName;
	CIMDateTime _expirationDate;
	Uint16 _recordType;
	String _otherRecordTypeDescription;
	CIMDateTime _creationTimeStamp;
	Boolean _haltOnError;
	Boolean _quickMode;
	Uint8 _percentOfTestCoverage;
	Array<String> _loopControlParameter;
	Array<Uint16> _loopControl;
	Array<String> _otherLoopControlDescriptions;
	Uint32 _resultPersistence;
	Array<Uint16> _logOptions;
	Array<String> _otherLogOptionsDescriptions;
	Array<Uint16> _logStorage;
	Array<String> _otherLogStorageDescriptions;
	Array<Uint16> _verbosityLevel;

#	include "UNIX_DiagnosticSettingRecordPrivate.h"


};

#endif /* UNIX_DIAGNOSTICSETTINGRECORD */
