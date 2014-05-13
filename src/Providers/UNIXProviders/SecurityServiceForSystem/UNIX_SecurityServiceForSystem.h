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
CIM_ServiceAvailableToElement
*/


/* **** Version *** */
/*
2.8.0
*/


/* **** UMLPackagePath *** */
/*
CIM::User::SecurityServices
*/


/* **** Description *** */
/*
The CIM_SecurityServiceForSystem provides the association between a System and a SecurityService that provides services for that system. This association does not add any constraints or semantics to ServiceAvailableToElement. As a result, it is deprecated.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			CIM_ProvidesServiceToElement:

			UNIX_SecurityServiceForSystem:


*/


/*
			 *** Methods ***

			CIM_Dependency:

			CIM_ProvidesServiceToElement:

			UNIX_SecurityServiceForSystem:


*/

#ifndef __UNIX_SECURITYSERVICEFORSYSTEM_H
#define __UNIX_SECURITYSERVICEFORSYSTEM_H


#include "CIM_ProvidesServiceToElement.h"
#include <AccountManagementService/UNIX_AccountManagementServiceProvider.h>
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
#include <AuthorizationService/UNIX_AuthorizationServiceProvider.h>
#include <PrivilegeManagementService/UNIX_PrivilegeManagementServiceProvider.h>
#include <RoleBasedAuthorizationService/UNIX_RoleBasedAuthorizationServiceProvider.h>
#include <AccessControlService/UNIX_AccessControlServiceProvider.h>
#include <ComputerSystem/UNIX_ComputerSystemProvider.h>

#include "UNIX_SecurityServiceForSystemDeps.h"




class UNIX_SecurityServiceForSystem :
	public CIM_ProvidesServiceToElement
{
public:

	UNIX_SecurityServiceForSystem();
	~UNIX_SecurityServiceForSystem();

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
UNIX_VerificationService _antecedentVerificationService;
UNIX_VerificationServiceProvider _antecedentVerificationServiceProvider;
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
UNIX_IdentityManagementService _antecedentIdentityManagementService;
UNIX_IdentityManagementServiceProvider _antecedentIdentityManagementServiceProvider;
UNIX_StorageHardwareIDManagementService _antecedentStorageHardwareIDManagementService;
UNIX_StorageHardwareIDManagementServiceProvider _antecedentStorageHardwareIDManagementServiceProvider;
UNIX_AuthorizationService _antecedentAuthorizationService;
UNIX_AuthorizationServiceProvider _antecedentAuthorizationServiceProvider;
UNIX_PrivilegeManagementService _antecedentPrivilegeManagementService;
UNIX_PrivilegeManagementServiceProvider _antecedentPrivilegeManagementServiceProvider;
UNIX_RoleBasedAuthorizationService _antecedentRoleBasedAuthorizationService;
UNIX_RoleBasedAuthorizationServiceProvider _antecedentRoleBasedAuthorizationServiceProvider;
UNIX_AccessControlService _antecedentAccessControlService;
UNIX_AccessControlServiceProvider _antecedentAccessControlServiceProvider;

UNIX_ComputerSystem _dependentComputerSystem;
UNIX_ComputerSystemProvider _dependentComputerSystemProvider;

#	include "UNIX_SecurityServiceForSystemPrivate.h"


};

#endif /* UNIX_SECURITYSERVICEFORSYSTEM */
