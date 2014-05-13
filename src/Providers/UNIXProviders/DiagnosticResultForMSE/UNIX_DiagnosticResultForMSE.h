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


/* **** Version *** */
/*
2.9.0
*/


/* **** UMLPackagePath *** */
/*
CIM::System::Diagnostics
*/


/* **** Description *** */
/*
This class is being deprecated as part of the deprecation of the DiagnosticResult class. 
This is an association class relating diagnostic test results to the ManagedSystemElement that is/was tested.
*/


/*
			 *** Properties ***

			UNIX_DiagnosticResultForMSE:
				Result Reference
				SystemElement Reference


*/


/*
			 *** Methods ***

			UNIX_DiagnosticResultForMSE:


*/

#ifndef __UNIX_DIAGNOSTICRESULTFORMSE_H
#define __UNIX_DIAGNOSTICRESULTFORMSE_H


#include "CIM_ClassBase.h"

#include "UNIX_DiagnosticResultForMSEDeps.h"


#ifndef PROPERTY_RESULT
#define PROPERTY_RESULT \
					"Result"
#endif

#ifndef PROPERTY_SYSTEM_ELEMENT
#define PROPERTY_SYSTEM_ELEMENT \
					"SystemElement"
#endif



class UNIX_DiagnosticResultForMSE :
	public CIM_ClassBase
{
public:

	UNIX_DiagnosticResultForMSE();
	~UNIX_DiagnosticResultForMSE();

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

	virtual Boolean getResult(CIMProperty&) const;
	virtual CIMInstance getResult() const;
	virtual void setResult(CIMInstance&);
	virtual Boolean getSystemElement(CIMProperty&) const;
	virtual CIMInstance getSystemElement() const;
	virtual void setSystemElement(CIMInstance&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _result;
	CIMInstance _systemElement;

#	include "UNIX_DiagnosticResultForMSEPrivate.h"


};

#endif /* UNIX_DIAGNOSTICRESULTFORMSE */
