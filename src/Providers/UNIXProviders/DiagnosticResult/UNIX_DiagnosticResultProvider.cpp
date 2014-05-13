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


#include "UNIX_DiagnosticResultProvider.h"

using PROVIDER_LIB_NS::CIMHelper;

UNIX_DiagnosticResultProvider::UNIX_DiagnosticResultProvider()
{
}

UNIX_DiagnosticResultProvider::~UNIX_DiagnosticResultProvider()
{
}

CIMInstance UNIX_DiagnosticResultProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_DiagnosticResult &instanceObject) const
{
	CIMProperty p;

	CIMInstance inst(className);

	// Set path
	inst.setPath(CIMObjectPath(String(""), // hostname
			nameSpace,
			className,
			constructKeyBindings(instanceObject)));

	//CIM_DiagnosticResult Properties
	if (instanceObject.getDiagnosticCreationClassName(p)) inst.addProperty(p);
	if (instanceObject.getDiagnosticName(p)) inst.addProperty(p);
	if (instanceObject.getDiagSystemCreationClassName(p)) inst.addProperty(p);
	if (instanceObject.getDiagSystemName(p)) inst.addProperty(p);
	if (instanceObject.getExecutionID(p)) inst.addProperty(p);
	if (instanceObject.getTimeStamp(p)) inst.addProperty(p);
	if (instanceObject.getIsPackage(p)) inst.addProperty(p);
	if (instanceObject.getTestStartTime(p)) inst.addProperty(p);
	if (instanceObject.getTestCompletionTime(p)) inst.addProperty(p);
	if (instanceObject.getTestState(p)) inst.addProperty(p);
	if (instanceObject.getOtherStateDescription(p)) inst.addProperty(p);
	if (instanceObject.getEstimatedTimeOfPerforming(p)) inst.addProperty(p);
	if (instanceObject.getTestResults(p)) inst.addProperty(p);
	if (instanceObject.getPercentComplete(p)) inst.addProperty(p);
	if (instanceObject.getErrorCode(p)) inst.addProperty(p);
	if (instanceObject.getErrorCount(p)) inst.addProperty(p);
	if (instanceObject.getLoopsFailed(p)) inst.addProperty(p);
	if (instanceObject.getLoopsPassed(p)) inst.addProperty(p);
	if (instanceObject.getTestWarningLevel(p)) inst.addProperty(p);
	if (instanceObject.getReportSoftErrors(p)) inst.addProperty(p);
	if (instanceObject.getReportStatusMessages(p)) inst.addProperty(p);
	if (instanceObject.getHaltOnError(p)) inst.addProperty(p);
	if (instanceObject.getQuickMode(p)) inst.addProperty(p);
	if (instanceObject.getPercentOfTestCoverage(p)) inst.addProperty(p);
	

	return inst;
}

Array<CIMKeyBinding> UNIX_DiagnosticResultProvider::constructKeyBindings(const UNIX_DiagnosticResult& instanceObject) const
{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_DIAGNOSTIC_CREATION_CLASS_NAME,
		instanceObject.getDiagnosticCreationClassName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_DIAGNOSTIC_NAME,
		instanceObject.getDiagnosticName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_DIAG_SYSTEM_CREATION_CLASS_NAME,
		instanceObject.getDiagSystemCreationClassName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_DIAG_SYSTEM_NAME,
		instanceObject.getDiagSystemName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_EXECUTION_ID,
		instanceObject.getExecutionID(),
		CIMKeyBinding::STRING));


	return keys;
}



#define UNIX_PROVIDER UNIX_DiagnosticResultProvider
#define UNIX_PROVIDER_NAME "UNIX_DiagnosticResultProvider"
#define CLASS_IMPLEMENTATION UNIX_DiagnosticResult
#define CLASS_IMPLEMENTATION_NAME "UNIX_DiagnosticResult"
#define BASE_CLASS_NAME "CIM_DiagnosticResult"
#define NUMKEYS_CLASS_IMPLEMENTATION 5


#include "UNIXProviderBase.hpp"

