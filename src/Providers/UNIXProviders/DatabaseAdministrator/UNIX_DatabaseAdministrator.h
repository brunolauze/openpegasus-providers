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
2.7.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Database::System
*/


/* **** Description *** */
/*
The DatabaseAdministrator association identifies a UserEntity as a database administrator of a CommonDatabase. 
The current version of CIM includes a UserContact class that is concrete and extends from UserEntity. UserContact contains the information that is needed to contact a database administrator. The DatabaseAdministrator association should be implemented through the UserContact class in favor of creating a vendor-specific concrete class to define database administrator contact information for the database administrator.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			UNIX_DatabaseAdministrator:


*/


/*
			 *** Methods ***

			CIM_Dependency:

			UNIX_DatabaseAdministrator:


*/

#ifndef __UNIX_DATABASEADMINISTRATOR_H
#define __UNIX_DATABASEADMINISTRATOR_H


#include "CIM_Dependency.h"
#include <CommonDatabase/UNIX_CommonDatabaseProvider.h>
#include <UserContact/UNIX_UserContactProvider.h>
#include <Person/UNIX_PersonProvider.h>
#include <UsersAccess/UNIX_UsersAccessProvider.h>

#include "UNIX_DatabaseAdministratorDeps.h"




class UNIX_DatabaseAdministrator :
	public CIM_Dependency
{
public:

	UNIX_DatabaseAdministrator();
	~UNIX_DatabaseAdministrator();

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

UNIX_CommonDatabase _antecedentCommonDatabase;
UNIX_CommonDatabaseProvider _antecedentCommonDatabaseProvider;

UNIX_UserContact _dependentUserContact;
UNIX_UserContactProvider _dependentUserContactProvider;
UNIX_Person _dependentPerson;
UNIX_PersonProvider _dependentPersonProvider;
UNIX_UsersAccess _dependentUsersAccess;
UNIX_UsersAccessProvider _dependentUsersAccessProvider;

#	include "UNIX_DatabaseAdministratorPrivate.h"


};

#endif /* UNIX_DATABASEADMINISTRATOR */
