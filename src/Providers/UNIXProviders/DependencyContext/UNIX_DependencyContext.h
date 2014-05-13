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
2.10.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Core::Settings
*/


/* **** Description *** */
/*
Note: The Configuration class is being deprecated in lieu of using a ConcreteComponent relationship to indicate a hierarchy of Setting or SettingData instances. Therefore, this association is also deprecated but it is deprecated to "No value" because there are no equivalent relationships currently defined for the Setting or SettingData classes. This association is an anomaly because it defines what cannot be expressed for the components of the Configuration. Also, it singles out the Dependency association as opposed to allowing any relationships to be defined as "settings". Its use in the industry is discouraged. 
Deprecated description: This relationship associates a Dependency with one or more Configuration objects. For example, dependencies for a ComputerSystem could change based on the site or network to which the System is attached.
*/


/*
			 *** Properties ***

			UNIX_DependencyContext:
				Context Reference
				Dependency Reference


*/


/*
			 *** Methods ***

			UNIX_DependencyContext:


*/

#ifndef __UNIX_DEPENDENCYCONTEXT_H
#define __UNIX_DEPENDENCYCONTEXT_H


#include "CIM_ClassBase.h"

#include "UNIX_DependencyContextDeps.h"


#ifndef PROPERTY_CONTEXT
#define PROPERTY_CONTEXT \
					"Context"
#endif

#ifndef PROPERTY_DEPENDENCY
#define PROPERTY_DEPENDENCY \
					"Dependency"
#endif



class UNIX_DependencyContext :
	public CIM_ClassBase
{
public:

	UNIX_DependencyContext();
	~UNIX_DependencyContext();

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

	virtual Boolean getContext(CIMProperty&) const;
	virtual CIMInstance getContext() const;
	virtual void setContext(CIMInstance&);
	virtual Boolean getDependency(CIMProperty&) const;
	virtual CIMInstance getDependency() const;
	virtual void setDependency(CIMInstance&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _context;
	CIMInstance _dependency;

#	include "UNIX_DependencyContextPrivate.h"


};

#endif /* UNIX_DEPENDENCYCONTEXT */
