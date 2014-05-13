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


/* **** Association *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.9.0
*/


/* **** UMLPackagePath *** */
/*
CIM::System::Logs
*/


/* **** Description *** */
/*
ManagedSystemElements may create RecordForLog objects to record their event, error or informational data within Logs. The relationship between these managed elements and the records they create is described by this association.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			UNIX_RecordAppliesToElement:


*/


/*
			 *** Methods ***

			CIM_Dependency:

			UNIX_RecordAppliesToElement:


*/

#ifndef __UNIX_RECORDAPPLIESTOELEMENT_H
#define __UNIX_RECORDAPPLIESTOELEMENT_H


#include "CIM_Dependency.h"
#include <LogRecord/UNIX_LogRecordProvider.h>
#include <LogEntry/UNIX_LogEntryProvider.h>
#include <PrintAlertRecord/UNIX_PrintAlertRecordProvider.h>
#include <DiagnosticServiceRecord/UNIX_DiagnosticServiceRecordProvider.h>
#include <DiagnosticCompletionRecord/UNIX_DiagnosticCompletionRecordProvider.h>
#include <DiagnosticSettingDataRecord/UNIX_DiagnosticSettingDataRecordProvider.h>
#include <DiagnosticSettingRecord/UNIX_DiagnosticSettingRecordProvider.h>

#include "UNIX_RecordAppliesToElementDeps.h"




class UNIX_RecordAppliesToElement :
	public CIM_Dependency
{
public:

	UNIX_RecordAppliesToElement();
	~UNIX_RecordAppliesToElement();

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

	virtual Boolean getAntecedent(CIMProperty&) const;
	virtual CIMInstance getAntecedent() const;
	virtual void setAntecedent(CIMInstance&);
	virtual Boolean getDependent(CIMProperty&) const;
	virtual CIMInstance getDependent() const;
	virtual void setDependent(CIMInstance&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _antecedent;
	CIMInstance _dependent;

UNIX_LogRecord _antecedentLogRecord;
UNIX_LogRecordProvider _antecedentLogRecordProvider;
UNIX_LogEntry _antecedentLogEntry;
UNIX_LogEntryProvider _antecedentLogEntryProvider;
UNIX_PrintAlertRecord _antecedentPrintAlertRecord;
UNIX_PrintAlertRecordProvider _antecedentPrintAlertRecordProvider;
UNIX_DiagnosticServiceRecord _antecedentDiagnosticServiceRecord;
UNIX_DiagnosticServiceRecordProvider _antecedentDiagnosticServiceRecordProvider;
UNIX_DiagnosticCompletionRecord _antecedentDiagnosticCompletionRecord;
UNIX_DiagnosticCompletionRecordProvider _antecedentDiagnosticCompletionRecordProvider;
UNIX_DiagnosticSettingDataRecord _antecedentDiagnosticSettingDataRecord;
UNIX_DiagnosticSettingDataRecordProvider _antecedentDiagnosticSettingDataRecordProvider;
UNIX_DiagnosticSettingRecord _antecedentDiagnosticSettingRecord;
UNIX_DiagnosticSettingRecordProvider _antecedentDiagnosticSettingRecordProvider;


#	include "UNIX_RecordAppliesToElementPrivate.h"


};

#endif /* UNIX_RECORDAPPLIESTOELEMENT */
