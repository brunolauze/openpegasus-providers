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
ManagedSystemElements may record their event, error or informational data within Logs. The use of a Log to hold a ManagedSystemElement's data is described by this association. The type of Element data captured by the Log can be specified using the RecordedData string property.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			UNIX_UseOfLog:
				RecordedData String


*/


/*
			 *** Methods ***

			CIM_Dependency:

			UNIX_UseOfLog:


*/

#ifndef __UNIX_USEOFLOG_H
#define __UNIX_USEOFLOG_H


#include "CIM_Dependency.h"
#include <MessageLog/UNIX_MessageLogProvider.h>
#include <DiagnosticLog/UNIX_DiagnosticLogProvider.h>
#include <DiagnosticsLog/UNIX_DiagnosticsLogProvider.h>

#include "UNIX_UseOfLogDeps.h"


#ifndef PROPERTY_RECORDED_DATA
#define PROPERTY_RECORDED_DATA \
					"RecordedData"
#endif



class UNIX_UseOfLog :
	public CIM_Dependency
{
public:

	UNIX_UseOfLog();
	~UNIX_UseOfLog();

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
	virtual Boolean getRecordedData(CIMProperty&) const;
	virtual String getRecordedData() const;
	virtual void setRecordedData(String&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _antecedent;
	CIMInstance _dependent;
	String _recordedData;

UNIX_MessageLog _antecedentMessageLog;
UNIX_MessageLogProvider _antecedentMessageLogProvider;
UNIX_DiagnosticLog _antecedentDiagnosticLog;
UNIX_DiagnosticLogProvider _antecedentDiagnosticLogProvider;
UNIX_DiagnosticsLog _antecedentDiagnosticsLog;
UNIX_DiagnosticsLogProvider _antecedentDiagnosticsLogProvider;


#	include "UNIX_UseOfLogPrivate.h"


};

#endif /* UNIX_USEOFLOG */
