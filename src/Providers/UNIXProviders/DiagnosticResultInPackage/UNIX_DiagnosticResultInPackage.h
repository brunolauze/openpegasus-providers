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


/* **** Deprecated *** */
/*
No value
*/


/* **** Aggregation *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.7.0
*/


/* **** UMLPackagePath *** */
/*
CIM::System::Diagnostics
*/


/* **** Description *** */
/*
This class is being deprecated. Tests should be grouped at the test level, not by the model. Therefore, this association is no longer appropriate. /n This is an association class that identifies a Diagnostic Result as made up of lower level Results. In this case, the Result identified as the PackageResult reference (i.e., the higher level result) would have its IsPackage property set to TRUE.
*/


/*
			 *** Properties ***

			UNIX_DiagnosticResultInPackage:
				PackageResult Reference
				Result Reference


*/


/*
			 *** Methods ***

			UNIX_DiagnosticResultInPackage:


*/

#ifndef __UNIX_DIAGNOSTICRESULTINPACKAGE_H
#define __UNIX_DIAGNOSTICRESULTINPACKAGE_H


#include "CIM_ClassBase.h"

#include "UNIX_DiagnosticResultInPackageDeps.h"


#ifndef PROPERTY_PACKAGE_RESULT
#define PROPERTY_PACKAGE_RESULT \
					"PackageResult"
#endif

#ifndef PROPERTY_RESULT
#define PROPERTY_RESULT \
					"Result"
#endif



class UNIX_DiagnosticResultInPackage :
	public CIM_ClassBase
{
public:

	UNIX_DiagnosticResultInPackage();
	~UNIX_DiagnosticResultInPackage();

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

	virtual Boolean getPackageResult(CIMProperty&) const;
	virtual CIMInstance getPackageResult() const;
	virtual void setPackageResult(CIMInstance&);
	virtual Boolean getResult(CIMProperty&) const;
	virtual CIMInstance getResult() const;
	virtual void setResult(CIMInstance&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _packageResult;
	CIMInstance _result;

#	include "UNIX_DiagnosticResultInPackagePrivate.h"


};

#endif /* UNIX_DIAGNOSTICRESULTINPACKAGE */
