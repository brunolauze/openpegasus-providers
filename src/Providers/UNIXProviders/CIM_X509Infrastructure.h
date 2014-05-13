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


/* **** Version *** */
/*
2.29.0
*/


/* **** ClassConstraint *** */
/*
 The constraints below aim to efficiently 
     represent a singular OctetString. Each of the properties
     is a single encoded string, thus only the first element 
     needs to be populated. 
   inv:self.TBSCertificate->size()<=1
*/


/* **** UMLPackagePath *** */
/*
CIM::User::PublicKey
*/


/* **** Description *** */
/*
CIM_X509Infrastructure describes Internet X509 Public Key Infrastructure (PKI) standard based properties used by certificates and certificate revocation lists. For more information on the Internet X509 PKI refer to the RFC 3280.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_Credential:
				Issued DateTime
				Expires DateTime
				ValidFrom DateTime

			CIM_SignedCredential:
				IssuerName String
				Signature UInt8
				SignatureAlgorithm UInt16
				OtherSignatureAlgorithm String
				SignatureAlgorithmOID String

			CIM_X509Infrastructure:
				Version UInt16
				TBSCertificate String
				MD5Fingerprint String
				SHA1Fingerprint String
				FingerprintDigestAlgorithms UInt16
				Fingerprints String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Credential:

			CIM_SignedCredential:

			CIM_X509Infrastructure:


*/

#ifndef __CIM_X509INFRASTRUCTURE_H
#define __CIM_X509INFRASTRUCTURE_H


#include "CIM_SignedCredential.h"


#ifndef PROPERTY_VERSION
#define PROPERTY_VERSION \
					"Version"
#endif

#ifndef PROPERTY_T_B_S_CERTIFICATE
#define PROPERTY_T_B_S_CERTIFICATE \
					"TBSCertificate"
#endif

#ifndef PROPERTY_M_D_5_FINGERPRINT
#define PROPERTY_M_D_5_FINGERPRINT \
					"MD5Fingerprint"
#endif

#ifndef PROPERTY_S_H_A_1_FINGERPRINT
#define PROPERTY_S_H_A_1_FINGERPRINT \
					"SHA1Fingerprint"
#endif

#ifndef PROPERTY_FINGERPRINT_DIGEST_ALGORITHMS
#define PROPERTY_FINGERPRINT_DIGEST_ALGORITHMS \
					"FingerprintDigestAlgorithms"
#endif

#ifndef PROPERTY_FINGERPRINTS
#define PROPERTY_FINGERPRINTS \
					"Fingerprints"
#endif



class CIM_X509Infrastructure :
	public CIM_SignedCredential
{
public:

	virtual Boolean initialize()=0;
	virtual Boolean load(int&)=0;
	virtual Boolean finalize()=0;
	virtual Boolean find(const Array<CIMKeyBinding>&)=0;
	virtual Boolean validateKey(CIMKeyBinding&) const=0;
	virtual void setScope(CIMName)=0;
	virtual void setCIMOMHandle(CIMOMHandle&)=0;
	virtual void clearInstance()=0;
	virtual Boolean loadInstance(const CIMInstance&)=0;
	virtual Boolean createInstance(const OperationContext&)=0;
	virtual Boolean modifyInstance(const OperationContext&)=0;
	virtual Boolean deleteInstance(const OperationContext&)=0;
	virtual Boolean validateInstance()=0;

	virtual Boolean getVersion(CIMProperty&) const=0;
	virtual Uint16 getVersion() const=0;
	virtual void setVersion(Uint16&)=0;
	virtual Boolean getTBSCertificate(CIMProperty&) const=0;
	virtual Array<String> getTBSCertificate() const=0;
	virtual void setTBSCertificate(Array<String>&)=0;
	virtual Boolean getMD5Fingerprint(CIMProperty&) const=0;
	virtual Array<String> getMD5Fingerprint() const=0;
	virtual void setMD5Fingerprint(Array<String>&)=0;
	virtual Boolean getSHA1Fingerprint(CIMProperty&) const=0;
	virtual Array<String> getSHA1Fingerprint() const=0;
	virtual void setSHA1Fingerprint(Array<String>&)=0;
	virtual Boolean getFingerprintDigestAlgorithms(CIMProperty&) const=0;
	virtual Array<Uint16> getFingerprintDigestAlgorithms() const=0;
	virtual void setFingerprintDigestAlgorithms(Array<Uint16>&)=0;
	virtual Boolean getFingerprints(CIMProperty&) const=0;
	virtual Array<String> getFingerprints() const=0;
	virtual void setFingerprints(Array<String>&)=0;
	virtual Boolean getIssuerName(CIMProperty&) const=0;
	virtual String getIssuerName() const=0;
	virtual void setIssuerName(String&)=0;


private:

};

#endif /* CIM_X509INFRASTRUCTURE */
