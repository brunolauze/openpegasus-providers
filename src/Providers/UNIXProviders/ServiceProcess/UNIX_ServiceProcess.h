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
2.14.0
*/


/* **** UMLPackagePath *** */
/*
CIM::System::Processing
*/


/* **** Description *** */
/*
CIM_ServiceProcess is an association used to establish relationships between Services and Processes. It is used to indicate if a Service is running in a particular Process. It is also used to indicate, via the ExecutionType property, if the Service started and is wholly responsible for the Process, or if the Service is running in an existing Process, perhaps with other unrelated Services, which is owned or started by a different entity.
*/


/*
			 *** Properties ***

			UNIX_ServiceProcess:
				Service Reference
				Process Reference
				ExecutionType UInt16


*/


/*
			 *** Methods ***

			UNIX_ServiceProcess:


*/

#ifndef __UNIX_SERVICEPROCESS_H
#define __UNIX_SERVICEPROCESS_H


#include "CIM_ClassBase.h"

#include "UNIX_ServiceProcessDeps.h"


#ifndef PROPERTY_SERVICE
#define PROPERTY_SERVICE \
					"Service"
#endif

#ifndef PROPERTY_PROCESS
#define PROPERTY_PROCESS \
					"Process"
#endif

#ifndef PROPERTY_EXECUTION_TYPE
#define PROPERTY_EXECUTION_TYPE \
					"ExecutionType"
#endif



class UNIX_ServiceProcess :
	public CIM_ClassBase
{
public:

	UNIX_ServiceProcess();
	~UNIX_ServiceProcess();

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

	virtual Boolean getService(CIMProperty&) const;
	virtual CIMInstance getService() const;
	virtual void setService(CIMInstance&);
	virtual Boolean getProcess(CIMProperty&) const;
	virtual CIMInstance getProcess() const;
	virtual void setProcess(CIMInstance&);
	virtual Boolean getExecutionType(CIMProperty&) const;
	virtual Uint16 getExecutionType() const;
	virtual void setExecutionType(Uint16&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _service;
	CIMInstance _process;
	Uint16 _executionType;

#	include "UNIX_ServiceProcessPrivate.h"


};

#endif /* UNIX_SERVICEPROCESS */
