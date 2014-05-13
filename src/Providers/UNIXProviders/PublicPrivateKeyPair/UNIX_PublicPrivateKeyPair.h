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
CIM_AuthenticationCondition
*/


/* **** Version *** */
/*
2.8.0
*/


/* **** UMLPackagePath *** */
/*
CIM::User::UsersAccess
*/


/* **** Description *** */
/*
This relationship associates a PublicKeyCertificate with the Principal who has the PrivateKey used with the PublicKey. The PrivateKey is not modeled, since it is not a data element that ever SHOULD be accessible via management applications, other than key recovery services, which are outside our scope. 

Since the UsersAccess class and this association's superclass are deprecated, this association is also deprecated. There is no need to have a special subclass for public-private credentials. This is especially true since the properties of the association describe aspects of the certificate and its handling. The latter is currently out of scope for the model.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			UNIX_UsersCredential:

			UNIX_PublicPrivateKeyPair:
				Use UInt16
				NonRepudiation Boolean
				BackedUp Boolean
				Repository String


*/


/*
			 *** Methods ***

			CIM_Dependency:

			UNIX_UsersCredential:

			UNIX_PublicPrivateKeyPair:


*/

#ifndef __UNIX_PUBLICPRIVATEKEYPAIR_H
#define __UNIX_PUBLICPRIVATEKEYPAIR_H


#include <UsersCredential/UNIX_UsersCredential.h>
#include <PublicKeyCertificate/UNIX_PublicKeyCertificateProvider.h>
#include <UsersAccess/UNIX_UsersAccessProvider.h>

#include "UNIX_PublicPrivateKeyPairDeps.h"


#ifndef PROPERTY_USE
#define PROPERTY_USE \
					"Use"
#endif

#ifndef PROPERTY_NON_REPUDIATION
#define PROPERTY_NON_REPUDIATION \
					"NonRepudiation"
#endif

#ifndef PROPERTY_BACKED_UP
#define PROPERTY_BACKED_UP \
					"BackedUp"
#endif

#ifndef PROPERTY_REPOSITORY
#define PROPERTY_REPOSITORY \
					"Repository"
#endif



class UNIX_PublicPrivateKeyPair :
	public UNIX_UsersCredential
{
public:

	UNIX_PublicPrivateKeyPair();
	~UNIX_PublicPrivateKeyPair();

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
	virtual Boolean getUse(CIMProperty&) const;
	virtual Uint16 getUse() const;
	virtual void setUse(Uint16&);
	virtual Boolean getNonRepudiation(CIMProperty&) const;
	virtual Boolean getNonRepudiation() const;
	virtual void setNonRepudiation(Boolean&);
	virtual Boolean getBackedUp(CIMProperty&) const;
	virtual Boolean getBackedUp() const;
	virtual void setBackedUp(Boolean&);
	virtual Boolean getRepository(CIMProperty&) const;
	virtual String getRepository() const;
	virtual void setRepository(String&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _antecedent;
	CIMInstance _dependent;
	Uint16 _use;
	Boolean _nonRepudiation;
	Boolean _backedUp;
	String _repository;

UNIX_PublicKeyCertificate _antecedentPublicKeyCertificate;
UNIX_PublicKeyCertificateProvider _antecedentPublicKeyCertificateProvider;

UNIX_UsersAccess _dependentUsersAccess;
UNIX_UsersAccessProvider _dependentUsersAccessProvider;

#	include "UNIX_PublicPrivateKeyPairPrivate.h"


};

#endif /* UNIX_PUBLICPRIVATEKEYPAIR */
