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
2.8.0
*/


/* **** UMLPackagePath *** */
/*
CIM::User::AccessControl
*/


/* **** Description *** */
/*
CIM_HostedACI is an association used to provide the namespace scoping of AccessControlInformation. Since the referenced class, AccessControlInformation, is deprecated, this Weak association is similarly deprecated. Also, although Privileges/access control can be defined in the context of a System, this is not a mandatory association nor does it provide any additional semantics for the Privilege. Therefore, HostedACI is deprecated with no replacement association.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			CIM_HostedDependency:

			UNIX_HostedACI:


*/


/*
			 *** Methods ***

			CIM_Dependency:

			CIM_HostedDependency:

			UNIX_HostedACI:


*/

#ifndef __UNIX_HOSTEDACI_H
#define __UNIX_HOSTEDACI_H


#include "CIM_HostedDependency.h"
#include <ComputerSystem/UNIX_ComputerSystemProvider.h>
#include <AccessControlInformation/UNIX_AccessControlInformationProvider.h>

#include "UNIX_HostedACIDeps.h"




class UNIX_HostedACI :
	public CIM_HostedDependency
{
public:

	UNIX_HostedACI();
	~UNIX_HostedACI();

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

UNIX_ComputerSystem _antecedentComputerSystem;
UNIX_ComputerSystemProvider _antecedentComputerSystemProvider;

UNIX_AccessControlInformation _dependentAccessControlInformation;
UNIX_AccessControlInformationProvider _dependentAccessControlInformationProvider;

#	include "UNIX_HostedACIPrivate.h"


};

#endif /* UNIX_HOSTEDACI */