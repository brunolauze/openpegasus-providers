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
   inv:self.EncodedCRL->size()=1
*/


/* **** UMLPackagePath *** */
/*
CIM::User::PublicKey
*/


/* **** Description *** */
/*
CIM_X509CRL describes Internet X509 Public Key Infrastructure (PKI) standard based Certificate Revocation List (CRL). CRL is issued by a Certificate Authority's (CA) to update the list of the certificates used in the authentication. Upon application of a CRL to a set of certificates, the certificates matched to those contained in the CRL would be revoked and invalidated for use in authentication. Refer to the Internet X.509 PKI standard (RFC 3280) for more information.
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

			UNIX_X509CRL:
				NextUpdate DateTime
				EncodedCRL String
				SerialNumbers String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Credential:

			CIM_SignedCredential:

			CIM_X509Infrastructure:

			UNIX_X509CRL:


*/

#ifndef __UNIX_X509CRL_H
#define __UNIX_X509CRL_H


#include "CIM_X509Infrastructure.h"

#include "UNIX_X509CRLDeps.h"


#ifndef PROPERTY_NEXT_UPDATE
#define PROPERTY_NEXT_UPDATE \
					"NextUpdate"
#endif

#ifndef PROPERTY_ENCODED_CRL
#define PROPERTY_ENCODED_CRL \
					"EncodedCRL"
#endif

#ifndef PROPERTY_SERIAL_NUMBERS
#define PROPERTY_SERIAL_NUMBERS \
					"SerialNumbers"
#endif



class UNIX_X509CRL :
	public CIM_X509Infrastructure
{
public:

	UNIX_X509CRL();
	~UNIX_X509CRL();

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

	virtual Boolean getInstanceID(CIMProperty&) const;
	virtual String getInstanceID() const;
	virtual void setInstanceID(String&);
	virtual Boolean getCaption(CIMProperty&) const;
	virtual String getCaption() const;
	virtual void setCaption(String&);
	virtual Boolean getDescription(CIMProperty&) const;
	virtual String getDescription() const;
	virtual void setDescription(String&);
	virtual Boolean getElementName(CIMProperty&) const;
	virtual String getElementName() const;
	virtual void setElementName(String&);
	virtual Boolean getGeneration(CIMProperty&) const;
	virtual Uint64 getGeneration() const;
	virtual void setGeneration(Uint64&);
	virtual Boolean getIssued(CIMProperty&) const;
	virtual CIMDateTime getIssued() const;
	virtual void setIssued(CIMDateTime&);
	virtual Boolean getExpires(CIMProperty&) const;
	virtual CIMDateTime getExpires() const;
	virtual void setExpires(CIMDateTime&);
	virtual Boolean getValidFrom(CIMProperty&) const;
	virtual CIMDateTime getValidFrom() const;
	virtual void setValidFrom(CIMDateTime&);
	virtual Boolean getIssuerName(CIMProperty&) const;
	virtual String getIssuerName() const;
	virtual void setIssuerName(String&);
	virtual Boolean getSignature(CIMProperty&) const;
	virtual Array<Uint8> getSignature() const;
	virtual void setSignature(Array<Uint8>&);
	virtual Boolean getSignatureAlgorithm(CIMProperty&) const;
	virtual Uint16 getSignatureAlgorithm() const;
	virtual void setSignatureAlgorithm(Uint16&);
	virtual Boolean getOtherSignatureAlgorithm(CIMProperty&) const;
	virtual String getOtherSignatureAlgorithm() const;
	virtual void setOtherSignatureAlgorithm(String&);
	virtual Boolean getSignatureAlgorithmOID(CIMProperty&) const;
	virtual String getSignatureAlgorithmOID() const;
	virtual void setSignatureAlgorithmOID(String&);
	virtual Boolean getVersion(CIMProperty&) const;
	virtual Uint16 getVersion() const;
	virtual void setVersion(Uint16&);
	virtual Boolean getTBSCertificate(CIMProperty&) const;
	virtual Array<String> getTBSCertificate() const;
	virtual void setTBSCertificate(Array<String>&);
	virtual Boolean getMD5Fingerprint(CIMProperty&) const;
	virtual Array<String> getMD5Fingerprint() const;
	virtual void setMD5Fingerprint(Array<String>&);
	virtual Boolean getSHA1Fingerprint(CIMProperty&) const;
	virtual Array<String> getSHA1Fingerprint() const;
	virtual void setSHA1Fingerprint(Array<String>&);
	virtual Boolean getFingerprintDigestAlgorithms(CIMProperty&) const;
	virtual Array<Uint16> getFingerprintDigestAlgorithms() const;
	virtual void setFingerprintDigestAlgorithms(Array<Uint16>&);
	virtual Boolean getFingerprints(CIMProperty&) const;
	virtual Array<String> getFingerprints() const;
	virtual void setFingerprints(Array<String>&);
	virtual Boolean getNextUpdate(CIMProperty&) const;
	virtual CIMDateTime getNextUpdate() const;
	virtual void setNextUpdate(CIMDateTime&);
	virtual Boolean getEncodedCRL(CIMProperty&) const;
	virtual Array<String> getEncodedCRL() const;
	virtual void setEncodedCRL(Array<String>&);
	virtual Boolean getSerialNumbers(CIMProperty&) const;
	virtual Array<String> getSerialNumbers() const;
	virtual void setSerialNumbers(Array<String>&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	CIMDateTime _issued;
	CIMDateTime _expires;
	CIMDateTime _validFrom;
	String _issuerName;
	Array<Uint8> _signature;
	Uint16 _signatureAlgorithm;
	String _otherSignatureAlgorithm;
	String _signatureAlgorithmOID;
	Uint16 _version;
	Array<String> _tBSCertificate;
	Array<String> _mD5Fingerprint;
	Array<String> _sHA1Fingerprint;
	Array<Uint16> _fingerprintDigestAlgorithms;
	Array<String> _fingerprints;
	CIMDateTime _nextUpdate;
	Array<String> _encodedCRL;
	Array<String> _serialNumbers;

#	include "UNIX_X509CRLPrivate.h"


};

#endif /* UNIX_X509CRL */
