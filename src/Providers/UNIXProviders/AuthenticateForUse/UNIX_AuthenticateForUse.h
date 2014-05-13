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
CIM::User::AuthenticationReqmt
*/


/* **** Description *** */
/*
CIM_AuthenticateForUse is an association used to provide an AuthenticationService with the AuthenticationRequirement it needs to do its job. This association is unnecessary and therefore deprecated, since it is implied that an Identity MUST be authenticated (its CurrentlyAuthenticatedBoolean set to TRUE) in order to have any Privileges.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			UNIX_AuthenticateForUse:


*/


/*
			 *** Methods ***

			CIM_Dependency:

			UNIX_AuthenticateForUse:


*/

#ifndef __UNIX_AUTHENTICATEFORUSE_H
#define __UNIX_AUTHENTICATEFORUSE_H


#include "CIM_Dependency.h"
#include <AuthenticationRequirement/UNIX_AuthenticationRequirementProvider.h>
#include <VerificationService/UNIX_VerificationServiceProvider.h>
#include <CertificateAuthority/UNIX_CertificateAuthorityProvider.h>
#include <Notary/UNIX_NotaryProvider.h>
#include <KeyBasedCredentialManagementService/UNIX_KeyBasedCredentialManagementServiceProvider.h>
#include <CertificateManagementService/UNIX_CertificateManagementServiceProvider.h>
#include <KerberosKeyDistributionCenter/UNIX_KerberosKeyDistributionCenterProvider.h>
#include <PublicKeyManagementService/UNIX_PublicKeyManagementServiceProvider.h>
#include <SharedSecretService/UNIX_SharedSecretServiceProvider.h>
#include <IdentityManagementService/UNIX_IdentityManagementServiceProvider.h>
#include <StorageHardwareIDManagementService/UNIX_StorageHardwareIDManagementServiceProvider.h>

#include "UNIX_AuthenticateForUseDeps.h"




class UNIX_AuthenticateForUse :
	public CIM_Dependency
{
public:

	UNIX_AuthenticateForUse();
	~UNIX_AuthenticateForUse();

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

UNIX_AuthenticationRequirement _antecedentAuthenticationRequirement;
UNIX_AuthenticationRequirementProvider _antecedentAuthenticationRequirementProvider;

UNIX_VerificationService _dependentVerificationService;
UNIX_VerificationServiceProvider _dependentVerificationServiceProvider;
UNIX_CertificateAuthority _dependentCertificateAuthority;
UNIX_CertificateAuthorityProvider _dependentCertificateAuthorityProvider;
UNIX_Notary _dependentNotary;
UNIX_NotaryProvider _dependentNotaryProvider;
UNIX_KeyBasedCredentialManagementService _dependentKeyBasedCredentialManagementService;
UNIX_KeyBasedCredentialManagementServiceProvider _dependentKeyBasedCredentialManagementServiceProvider;
UNIX_CertificateManagementService _dependentCertificateManagementService;
UNIX_CertificateManagementServiceProvider _dependentCertificateManagementServiceProvider;
UNIX_KerberosKeyDistributionCenter _dependentKerberosKeyDistributionCenter;
UNIX_KerberosKeyDistributionCenterProvider _dependentKerberosKeyDistributionCenterProvider;
UNIX_PublicKeyManagementService _dependentPublicKeyManagementService;
UNIX_PublicKeyManagementServiceProvider _dependentPublicKeyManagementServiceProvider;
UNIX_SharedSecretService _dependentSharedSecretService;
UNIX_SharedSecretServiceProvider _dependentSharedSecretServiceProvider;
UNIX_IdentityManagementService _dependentIdentityManagementService;
UNIX_IdentityManagementServiceProvider _dependentIdentityManagementServiceProvider;
UNIX_StorageHardwareIDManagementService _dependentStorageHardwareIDManagementService;
UNIX_StorageHardwareIDManagementServiceProvider _dependentStorageHardwareIDManagementServiceProvider;

#	include "UNIX_AuthenticateForUsePrivate.h"


};

#endif /* UNIX_AUTHENTICATEFORUSE */
