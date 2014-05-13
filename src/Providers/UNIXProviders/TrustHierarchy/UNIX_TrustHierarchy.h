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
2.6.0
*/


/* **** UMLPackagePath *** */
/*
CIM::User::SecurityServices
*/


/* **** Description *** */
/*
CIM_TrustHierarchy is an association between two CredentialManagementService instances that establishes the trust hierarchy between them.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			UNIX_TrustHierarchy:


*/


/*
			 *** Methods ***

			CIM_Dependency:

			UNIX_TrustHierarchy:


*/

#ifndef __UNIX_TRUSTHIERARCHY_H
#define __UNIX_TRUSTHIERARCHY_H


#include "CIM_Dependency.h"
#include <CertificateAuthority/UNIX_CertificateAuthorityProvider.h>
#include <Notary/UNIX_NotaryProvider.h>
#include <KeyBasedCredentialManagementService/UNIX_KeyBasedCredentialManagementServiceProvider.h>
#include <CertificateManagementService/UNIX_CertificateManagementServiceProvider.h>
#include <KerberosKeyDistributionCenter/UNIX_KerberosKeyDistributionCenterProvider.h>
#include <PublicKeyManagementService/UNIX_PublicKeyManagementServiceProvider.h>
#include <SharedSecretService/UNIX_SharedSecretServiceProvider.h>

#include "UNIX_TrustHierarchyDeps.h"




class UNIX_TrustHierarchy :
	public CIM_Dependency
{
public:

	UNIX_TrustHierarchy();
	~UNIX_TrustHierarchy();

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

UNIX_CertificateAuthority _antecedentCertificateAuthority;
UNIX_CertificateAuthorityProvider _antecedentCertificateAuthorityProvider;
UNIX_Notary _antecedentNotary;
UNIX_NotaryProvider _antecedentNotaryProvider;
UNIX_KeyBasedCredentialManagementService _antecedentKeyBasedCredentialManagementService;
UNIX_KeyBasedCredentialManagementServiceProvider _antecedentKeyBasedCredentialManagementServiceProvider;
UNIX_CertificateManagementService _antecedentCertificateManagementService;
UNIX_CertificateManagementServiceProvider _antecedentCertificateManagementServiceProvider;
UNIX_KerberosKeyDistributionCenter _antecedentKerberosKeyDistributionCenter;
UNIX_KerberosKeyDistributionCenterProvider _antecedentKerberosKeyDistributionCenterProvider;
UNIX_PublicKeyManagementService _antecedentPublicKeyManagementService;
UNIX_PublicKeyManagementServiceProvider _antecedentPublicKeyManagementServiceProvider;
UNIX_SharedSecretService _antecedentSharedSecretService;
UNIX_SharedSecretServiceProvider _antecedentSharedSecretServiceProvider;

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

#	include "UNIX_TrustHierarchyPrivate.h"


};

#endif /* UNIX_TRUSTHIERARCHY */
