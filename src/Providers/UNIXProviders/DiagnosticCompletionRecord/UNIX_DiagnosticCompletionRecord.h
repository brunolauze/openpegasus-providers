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
CIM::System::Diagnostics
*/


/* **** Description *** */
/*
When a DiagnosticService has completed, results generated by the service will be recorded in a DiagnosticCompletionRecord object. This class is used when a DiagnosticRecord.RecordType value = "Results", to contain completion information.
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

			UNIX_DiagnosticServiceRecord:
				ErrorCode String
				ErrorCount UInt32
				LoopsFailed UInt32
				LoopsPassed UInt32

			UNIX_DiagnosticCompletionRecord:
				CompletionState UInt16
				OtherCompletionStateDescription String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_RecordForLog:

			CIM_DiagnosticRecord:

			UNIX_DiagnosticServiceRecord:

			UNIX_DiagnosticCompletionRecord:


*/

#ifndef __UNIX_DIAGNOSTICCOMPLETIONRECORD_H
#define __UNIX_DIAGNOSTICCOMPLETIONRECORD_H


#include <DiagnosticServiceRecord/UNIX_DiagnosticServiceRecord.h>

#include "UNIX_DiagnosticCompletionRecordDeps.h"


#ifndef PROPERTY_COMPLETION_STATE
#define PROPERTY_COMPLETION_STATE \
					"CompletionState"
#endif

#ifndef PROPERTY_OTHER_COMPLETION_STATE_DESCRIPTION
#define PROPERTY_OTHER_COMPLETION_STATE_DESCRIPTION \
					"OtherCompletionStateDescription"
#endif



class UNIX_DiagnosticCompletionRecord :
	public UNIX_DiagnosticServiceRecord
{
public:

	UNIX_DiagnosticCompletionRecord();
	~UNIX_DiagnosticCompletionRecord();

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
	virtual Boolean getCompletionState(CIMProperty&) const;
	virtual Uint16 getCompletionState() const;
	virtual void setCompletionState(Uint16&);
	virtual Boolean getOtherCompletionStateDescription(CIMProperty&) const;
	virtual String getOtherCompletionStateDescription() const;
	virtual void setOtherCompletionStateDescription(String&);


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
	Array<String> _errorCode;
	Array<Uint32> _errorCount;
	Uint32 _loopsFailed;
	Uint32 _loopsPassed;
	Uint16 _completionState;
	String _otherCompletionStateDescription;

#	include "UNIX_DiagnosticCompletionRecordPrivate.h"


};

#endif /* UNIX_DIAGNOSTICCOMPLETIONRECORD */
