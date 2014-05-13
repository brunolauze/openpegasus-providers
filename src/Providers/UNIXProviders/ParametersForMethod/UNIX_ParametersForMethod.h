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
2.10.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Core::MethodParms
*/


/* **** Description *** */
/*
ParametersForMethod represents the association between MethodParameters classes and a ManagedElement that has a method that can use the MethodParameters during its invocation. This association is optional. The Method Parameters instance can be passed as a parameter to a method or used to create a method signature before the method is invoked. This association is useful for finding all the valid MethodParameters instances for a particular method. It might be particularly useful for user-oriented interfaces and automated or policy driven method invocations.
*/


/*
			 *** Properties ***

			UNIX_ParametersForMethod:
				Parameters Reference
				TheMethod Reference
				MethodName String


*/


/*
			 *** Methods ***

			UNIX_ParametersForMethod:


*/

#ifndef __UNIX_PARAMETERSFORMETHOD_H
#define __UNIX_PARAMETERSFORMETHOD_H


#include "CIM_ClassBase.h"

#include "UNIX_ParametersForMethodDeps.h"


#ifndef PROPERTY_PARAMETERS
#define PROPERTY_PARAMETERS \
					"Parameters"
#endif

#ifndef PROPERTY_THE_METHOD
#define PROPERTY_THE_METHOD \
					"TheMethod"
#endif

#ifndef PROPERTY_METHOD_NAME
#define PROPERTY_METHOD_NAME \
					"MethodName"
#endif



class UNIX_ParametersForMethod :
	public CIM_ClassBase
{
public:

	UNIX_ParametersForMethod();
	~UNIX_ParametersForMethod();

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

	virtual Boolean getParameters(CIMProperty&) const;
	virtual CIMInstance getParameters() const;
	virtual void setParameters(CIMInstance&);
	virtual Boolean getTheMethod(CIMProperty&) const;
	virtual CIMInstance getTheMethod() const;
	virtual void setTheMethod(CIMInstance&);
	virtual Boolean getMethodName(CIMProperty&) const;
	virtual String getMethodName() const;
	virtual void setMethodName(String&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _parameters;
	CIMInstance _theMethod;
	String _methodName;

#	include "UNIX_ParametersForMethodPrivate.h"


};

#endif /* UNIX_PARAMETERSFORMETHOD */
