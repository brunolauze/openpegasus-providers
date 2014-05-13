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
CIM_HostedDependency
*/


/* **** Version *** */
/*
2.39.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Interop
*/


/* **** Description *** */
/*
CIM_NamespaceInManager is deprecated. See CIM_WBEMServerNamespace and CIM_HostedDependency to model the relationship between a WBEMServer and the hosted namespaces.
NamespaceInManager is an association describing the Namespaces hosted by a CIM ObjectManager.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			CIM_HostedDependency:

			UNIX_NamespaceInManager:


*/


/*
			 *** Methods ***

			CIM_Dependency:

			CIM_HostedDependency:

			UNIX_NamespaceInManager:


*/

#ifndef __UNIX_NAMESPACEINMANAGER_H
#define __UNIX_NAMESPACEINMANAGER_H


#include "CIM_HostedDependency.h"
#include <ObjectManager/UNIX_ObjectManagerProvider.h>
#include <Namespace/UNIX_NamespaceProvider.h>

#include "UNIX_NamespaceInManagerDeps.h"




class UNIX_NamespaceInManager :
	public CIM_HostedDependency
{
public:

	UNIX_NamespaceInManager();
	~UNIX_NamespaceInManager();

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

UNIX_ObjectManager _antecedentObjectManager;
UNIX_ObjectManagerProvider _antecedentObjectManagerProvider;

UNIX_Namespace _dependentNamespace;
UNIX_NamespaceProvider _dependentNamespaceProvider;

#	include "UNIX_NamespaceInManagerPrivate.h"


};

#endif /* UNIX_NAMESPACEINMANAGER */
