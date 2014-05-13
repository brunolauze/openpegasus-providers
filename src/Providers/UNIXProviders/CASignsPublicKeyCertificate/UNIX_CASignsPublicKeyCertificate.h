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
CIM_ServiceAffectsElement
*/


/* **** Version *** */
/*
2.16.0
*/


/* **** UMLPackagePath *** */
/*
CIM::User::PublicKey
*/


/* **** Description *** */
/*
This relationship associates a CertificateAuthority with the certificates it signs.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			CIM_ManagedCredential:

			UNIX_CASignsPublicKeyCertificate:
				SerialNumber String
				Signature UInt8
				Expires DateTime
				CRLDistributionPoint String


*/


/*
			 *** Methods ***

			CIM_Dependency:

			CIM_ManagedCredential:

			UNIX_CASignsPublicKeyCertificate:


*/

#ifndef __UNIX_CASIGNSPUBLICKEYCERTIFICATE_H
#define __UNIX_CASIGNSPUBLICKEYCERTIFICATE_H


#include "CIM_ManagedCredential.h"
#include <CertificateAuthority/UNIX_CertificateAuthorityProvider.h>
#include <PublicKeyCertificate/UNIX_PublicKeyCertificateProvider.h>

#include "UNIX_CASignsPublicKeyCertificateDeps.h"


#ifndef PROPERTY_SERIAL_NUMBER
#define PROPERTY_SERIAL_NUMBER \
					"SerialNumber"
#endif

#ifndef PROPERTY_SIGNATURE
#define PROPERTY_SIGNATURE \
					"Signature"
#endif

#ifndef PROPERTY_EXPIRES
#define PROPERTY_EXPIRES \
					"Expires"
#endif

#ifndef PROPERTY_CRL_DISTRIBUTION_POINT
#define PROPERTY_CRL_DISTRIBUTION_POINT \
					"CRLDistributionPoint"
#endif



class UNIX_CASignsPublicKeyCertificate :
	public CIM_ManagedCredential
{
public:

	UNIX_CASignsPublicKeyCertificate();
	~UNIX_CASignsPublicKeyCertificate();

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
	virtual Boolean getSerialNumber(CIMProperty&) const;
	virtual String getSerialNumber() const;
	virtual void setSerialNumber(String&);
	virtual Boolean getSignature(CIMProperty&) const;
	virtual Array<Uint8> getSignature() const;
	virtual void setSignature(Array<Uint8>&);
	virtual Boolean getExpires(CIMProperty&) const;
	virtual CIMDateTime getExpires() const;
	virtual void setExpires(CIMDateTime&);
	virtual Boolean getCRLDistributionPoint(CIMProperty&) const;
	virtual Array<String> getCRLDistributionPoint() const;
	virtual void setCRLDistributionPoint(Array<String>&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _antecedent;
	CIMInstance _dependent;
	String _serialNumber;
	Array<Uint8> _signature;
	CIMDateTime _expires;
	Array<String> _cRLDistributionPoint;

UNIX_CertificateAuthority _antecedentCertificateAuthority;
UNIX_CertificateAuthorityProvider _antecedentCertificateAuthorityProvider;

UNIX_PublicKeyCertificate _dependentPublicKeyCertificate;
UNIX_PublicKeyCertificateProvider _dependentPublicKeyCertificateProvider;

#	include "UNIX_CASignsPublicKeyCertificatePrivate.h"


};

#endif /* UNIX_CASIGNSPUBLICKEYCERTIFICATE */
