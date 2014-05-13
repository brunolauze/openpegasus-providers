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
2.8.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Core::Software
*/


/* **** Description *** */
/*
The InstalledSoftwareIdentity association identifies the System on which a SoftwareIdentity is installed. This class is a corollary to InstalledSoftwareElement, but deals with the asset aspects of software (as indicated by SoftwareIdentity), versus the deployment aspects (as indicated by SoftwareElement).
*/


/*
			 *** Properties ***

			UNIX_InstalledSoftwareIdentity:
				System Reference
				InstalledSoftware Reference


*/


/*
			 *** Methods ***

			UNIX_InstalledSoftwareIdentity:


*/

#ifndef __UNIX_INSTALLEDSOFTWAREIDENTITY_H
#define __UNIX_INSTALLEDSOFTWAREIDENTITY_H


#include "CIM_ClassBase.h"

#include "UNIX_InstalledSoftwareIdentityDeps.h"


#ifndef PROPERTY_SYSTEM
#define PROPERTY_SYSTEM \
					"System"
#endif

#ifndef PROPERTY_INSTALLED_SOFTWARE
#define PROPERTY_INSTALLED_SOFTWARE \
					"InstalledSoftware"
#endif



class UNIX_InstalledSoftwareIdentity :
	public CIM_ClassBase
{
public:

	UNIX_InstalledSoftwareIdentity();
	~UNIX_InstalledSoftwareIdentity();

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

	virtual Boolean getSystem(CIMProperty&) const;
	virtual CIMInstance getSystem() const;
	virtual void setSystem(CIMInstance&);
	virtual Boolean getInstalledSoftware(CIMProperty&) const;
	virtual CIMInstance getInstalledSoftware() const;
	virtual void setInstalledSoftware(CIMInstance&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _system;
	CIMInstance _installedSoftware;

#	include "UNIX_InstalledSoftwareIdentityPrivate.h"


};

#endif /* UNIX_INSTALLEDSOFTWAREIDENTITY */
