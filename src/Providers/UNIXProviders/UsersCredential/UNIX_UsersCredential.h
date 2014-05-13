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
CIM_UsersCredential is an association used to establish the credentials that may be used for a UsersAccess to a system or set of systems. 

Since the UsersAccess class is deprecated in lieu of CIM_Identity, this association is also deprecated and replaced by policy - where the AuthenticationCondition class describes the credentials that SHOULD be authenticated in order to establish the Identity.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			UNIX_UsersCredential:


*/


/*
			 *** Methods ***

			CIM_Dependency:

			UNIX_UsersCredential:


*/

#ifndef __UNIX_USERSCREDENTIAL_H
#define __UNIX_USERSCREDENTIAL_H


#include "CIM_Dependency.h"
#include <UnsignedPublicKey/UNIX_UnsignedPublicKeyProvider.h>
#include <NamedSharedIKESecret/UNIX_NamedSharedIKESecretProvider.h>
#include <FingerprintImage/UNIX_FingerprintImageProvider.h>
#include <UnsignedCredential/UNIX_UnsignedCredentialProvider.h>
#include <SharedCredential/UNIX_SharedCredentialProvider.h>
#include <KerberosCredential/UNIX_KerberosCredentialProvider.h>
#include <KerberosTicket/UNIX_KerberosTicketProvider.h>
#include <NamedCredential/UNIX_NamedCredentialProvider.h>
#include <X509Certificate/UNIX_X509CertificateProvider.h>
#include <X509CRL/UNIX_X509CRLProvider.h>
#include <PublicKeyCertificate/UNIX_PublicKeyCertificateProvider.h>
#include <FingerprintTemplate/UNIX_FingerprintTemplateProvider.h>
#include <SharedSecret/UNIX_SharedSecretProvider.h>
#include <UsersAccess/UNIX_UsersAccessProvider.h>

#include "UNIX_UsersCredentialDeps.h"




class UNIX_UsersCredential :
	public CIM_Dependency
{
public:

	UNIX_UsersCredential();
	~UNIX_UsersCredential();

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

UNIX_UnsignedPublicKey _antecedentUnsignedPublicKey;
UNIX_UnsignedPublicKeyProvider _antecedentUnsignedPublicKeyProvider;
UNIX_NamedSharedIKESecret _antecedentNamedSharedIKESecret;
UNIX_NamedSharedIKESecretProvider _antecedentNamedSharedIKESecretProvider;
UNIX_FingerprintImage _antecedentFingerprintImage;
UNIX_FingerprintImageProvider _antecedentFingerprintImageProvider;
UNIX_UnsignedCredential _antecedentUnsignedCredential;
UNIX_UnsignedCredentialProvider _antecedentUnsignedCredentialProvider;
UNIX_SharedCredential _antecedentSharedCredential;
UNIX_SharedCredentialProvider _antecedentSharedCredentialProvider;
UNIX_KerberosCredential _antecedentKerberosCredential;
UNIX_KerberosCredentialProvider _antecedentKerberosCredentialProvider;
UNIX_KerberosTicket _antecedentKerberosTicket;
UNIX_KerberosTicketProvider _antecedentKerberosTicketProvider;
UNIX_NamedCredential _antecedentNamedCredential;
UNIX_NamedCredentialProvider _antecedentNamedCredentialProvider;
UNIX_X509Certificate _antecedentX509Certificate;
UNIX_X509CertificateProvider _antecedentX509CertificateProvider;
UNIX_X509CRL _antecedentX509CRL;
UNIX_X509CRLProvider _antecedentX509CRLProvider;
UNIX_PublicKeyCertificate _antecedentPublicKeyCertificate;
UNIX_PublicKeyCertificateProvider _antecedentPublicKeyCertificateProvider;
UNIX_FingerprintTemplate _antecedentFingerprintTemplate;
UNIX_FingerprintTemplateProvider _antecedentFingerprintTemplateProvider;
UNIX_SharedSecret _antecedentSharedSecret;
UNIX_SharedSecretProvider _antecedentSharedSecretProvider;

UNIX_UsersAccess _dependentUsersAccess;
UNIX_UsersAccessProvider _dependentUsersAccessProvider;

#	include "UNIX_UsersCredentialPrivate.h"


};

#endif /* UNIX_USERSCREDENTIAL */
