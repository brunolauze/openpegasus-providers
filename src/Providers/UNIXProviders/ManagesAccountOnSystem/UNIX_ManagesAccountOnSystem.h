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
CIM_ServiceAvailableToElement.UserOfService
*/


/* **** Version *** */
/*
2.37.0
*/


/* **** UMLPackagePath *** */
/*
CIM::User::Account
*/


/* **** Description *** */
/*
The CIM_ManagesAccountOnSystem provides the association between a System and the AccountManagementService that manages accounts for that system. This association does not add any constraints or semantics to ServiceAvailableToElement. As a result, it is deprecated.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			CIM_ProvidesServiceToElement:

			UNIX_SecurityServiceForSystem:

			UNIX_ManagesAccountOnSystem:


*/


/*
			 *** Methods ***

			CIM_Dependency:

			CIM_ProvidesServiceToElement:

			UNIX_SecurityServiceForSystem:

			UNIX_ManagesAccountOnSystem:


*/

#ifndef __UNIX_MANAGESACCOUNTONSYSTEM_H
#define __UNIX_MANAGESACCOUNTONSYSTEM_H


#include <SecurityServiceForSystem/UNIX_SecurityServiceForSystem.h>
#include <AccountManagementService/UNIX_AccountManagementServiceProvider.h>
#include <ComputerSystem/UNIX_ComputerSystemProvider.h>

#include "UNIX_ManagesAccountOnSystemDeps.h"




class UNIX_ManagesAccountOnSystem :
	public UNIX_SecurityServiceForSystem
{
public:

	UNIX_ManagesAccountOnSystem();
	~UNIX_ManagesAccountOnSystem();

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

UNIX_AccountManagementService _antecedentAccountManagementService;
UNIX_AccountManagementServiceProvider _antecedentAccountManagementServiceProvider;

UNIX_ComputerSystem _dependentComputerSystem;
UNIX_ComputerSystemProvider _dependentComputerSystemProvider;

#	include "UNIX_ManagesAccountOnSystemPrivate.h"


};

#endif /* UNIX_MANAGESACCOUNTONSYSTEM */
