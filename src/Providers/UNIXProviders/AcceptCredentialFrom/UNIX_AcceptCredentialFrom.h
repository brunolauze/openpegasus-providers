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
CIM::Policy
*/


/* **** Description *** */
/*
This association specifies that a credential management service (e.g., CertificateAuthority or Kerberos key distribution service) is to be trusted to certify credentials, presented at the packet level. The association defines an 'approved' CredentialManagementService that is used for validation. 

The use of this class is best explained via an example: 
If a CertificateAuthority is specified using this association, and a corresponding X509CredentialFilterEntry is also associated with a PacketFilterCondition (via the relationship, FilterOfPacketCondition), then the credential MUST match the FilterEntry data AND be certified by that CA (or one of the CredentialManagementServices in its trust hierarchy). Otherwise, the X509CredentialFilterEntry is deemed not to match. If a credential is certified by a CredentialManagementService associated with the PacketFilterCondition through the AcceptCredentialFrom relationship, but there is no corresponding CredentialFilterEntry, then all credentials from the related service are considered to match.
*/


/* **** MappingStrings *** */
/*
IPSP Policy Model.IETF|AcceptCredentialFrom
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			UNIX_AcceptCredentialFrom:


*/


/*
			 *** Methods ***

			CIM_Dependency:

			UNIX_AcceptCredentialFrom:


*/

#ifndef __UNIX_ACCEPTCREDENTIALFROM_H
#define __UNIX_ACCEPTCREDENTIALFROM_H


#include "CIM_Dependency.h"
#include <CertificateAuthority/UNIX_CertificateAuthorityProvider.h>
#include <Notary/UNIX_NotaryProvider.h>
#include <KeyBasedCredentialManagementService/UNIX_KeyBasedCredentialManagementServiceProvider.h>
#include <CertificateManagementService/UNIX_CertificateManagementServiceProvider.h>
#include <KerberosKeyDistributionCenter/UNIX_KerberosKeyDistributionCenterProvider.h>
#include <PublicKeyManagementService/UNIX_PublicKeyManagementServiceProvider.h>
#include <SharedSecretService/UNIX_SharedSecretServiceProvider.h>
#include <PacketFilterCondition/UNIX_PacketFilterConditionProvider.h>

#include "UNIX_AcceptCredentialFromDeps.h"




class UNIX_AcceptCredentialFrom :
	public CIM_Dependency
{
public:

	UNIX_AcceptCredentialFrom();
	~UNIX_AcceptCredentialFrom();

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

UNIX_PacketFilterCondition _dependentPacketFilterCondition;
UNIX_PacketFilterConditionProvider _dependentPacketFilterConditionProvider;

#	include "UNIX_AcceptCredentialFromPrivate.h"


};

#endif /* UNIX_ACCEPTCREDENTIALFROM */
