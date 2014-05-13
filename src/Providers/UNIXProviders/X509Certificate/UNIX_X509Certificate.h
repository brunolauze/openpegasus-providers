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
     is a single encoded stringthus only the first element 
     needs to be populated. 
   inv:self.PublicKey->size()<=1 and self.SerialNumber->size()<=1 and self.EncodedCertificate->size()<=1
*/


/* **** UMLPackagePath *** */
/*
CIM::User::PublicKey
*/


/* **** Description *** */
/*
CIM_X509Certificate describes Internet X509 Public Key Infrastructure (PKI) standard based certificates. The certificates are signed by a trusted Certificate Authority (CA) or by the owner of the certificate and issued to an authenticated entity (e.g., human user, service, etc.) called the Subject in the certificate. The public key in the certificate is cryptographically related to a private key that is held and kept private by the authenticated Subject. The certificate and its related private key can then be used for establishing trust relationships and securing communications with the Subject. Refer to the Internet X.509 PKI standard (RFC 3280) for more information.
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

			UNIX_X509Certificate:
				Subject String
				AltSubject String
				PublicKey String
				PublicKeySize UInt16
				IsValid Boolean
				SerialNumber String
				PublicKeyAlgorithm UInt16
				KeyUsage UInt16
				ExtendedKeyUsage String
				PathLengthConstraint UInt16
				EncodedCertificate String
				ExtensionID String
				ExtensionValue String
				IsCritical Boolean
				IssuerUniqueID String
				SubjectUniqueID String
				TrustedRootCertificate Boolean


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Credential:

			CIM_SignedCredential:

			CIM_X509Infrastructure:

			UNIX_X509Certificate:


*/

#ifndef __UNIX_X509CERTIFICATE_H
#define __UNIX_X509CERTIFICATE_H


#include "CIM_X509Infrastructure.h"

#include "UNIX_X509CertificateDeps.h"


#ifndef PROPERTY_SUBJECT
#define PROPERTY_SUBJECT \
					"Subject"
#endif

#ifndef PROPERTY_ALT_SUBJECT
#define PROPERTY_ALT_SUBJECT \
					"AltSubject"
#endif

#ifndef PROPERTY_PUBLIC_KEY
#define PROPERTY_PUBLIC_KEY \
					"PublicKey"
#endif

#ifndef PROPERTY_PUBLIC_KEY_SIZE
#define PROPERTY_PUBLIC_KEY_SIZE \
					"PublicKeySize"
#endif

#ifndef PROPERTY_IS_VALID
#define PROPERTY_IS_VALID \
					"IsValid"
#endif

#ifndef PROPERTY_SERIAL_NUMBER
#define PROPERTY_SERIAL_NUMBER \
					"SerialNumber"
#endif

#ifndef PROPERTY_PUBLIC_KEY_ALGORITHM
#define PROPERTY_PUBLIC_KEY_ALGORITHM \
					"PublicKeyAlgorithm"
#endif

#ifndef PROPERTY_KEY_USAGE
#define PROPERTY_KEY_USAGE \
					"KeyUsage"
#endif

#ifndef PROPERTY_EXTENDED_KEY_USAGE
#define PROPERTY_EXTENDED_KEY_USAGE \
					"ExtendedKeyUsage"
#endif

#ifndef PROPERTY_PATH_LENGTH_CONSTRAINT
#define PROPERTY_PATH_LENGTH_CONSTRAINT \
					"PathLengthConstraint"
#endif

#ifndef PROPERTY_ENCODED_CERTIFICATE
#define PROPERTY_ENCODED_CERTIFICATE \
					"EncodedCertificate"
#endif

#ifndef PROPERTY_EXTENSION_ID
#define PROPERTY_EXTENSION_ID \
					"ExtensionID"
#endif

#ifndef PROPERTY_EXTENSION_VALUE
#define PROPERTY_EXTENSION_VALUE \
					"ExtensionValue"
#endif

#ifndef PROPERTY_IS_CRITICAL
#define PROPERTY_IS_CRITICAL \
					"IsCritical"
#endif

#ifndef PROPERTY_ISSUER_UNIQUE_ID
#define PROPERTY_ISSUER_UNIQUE_ID \
					"IssuerUniqueID"
#endif

#ifndef PROPERTY_SUBJECT_UNIQUE_ID
#define PROPERTY_SUBJECT_UNIQUE_ID \
					"SubjectUniqueID"
#endif

#ifndef PROPERTY_TRUSTED_ROOT_CERTIFICATE
#define PROPERTY_TRUSTED_ROOT_CERTIFICATE \
					"TrustedRootCertificate"
#endif



class UNIX_X509Certificate :
	public CIM_X509Infrastructure
{
public:

	UNIX_X509Certificate();
	~UNIX_X509Certificate();

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
	virtual Boolean getSubject(CIMProperty&) const;
	virtual String getSubject() const;
	virtual void setSubject(String&);
	virtual Boolean getAltSubject(CIMProperty&) const;
	virtual String getAltSubject() const;
	virtual void setAltSubject(String&);
	virtual Boolean getPublicKey(CIMProperty&) const;
	virtual Array<String> getPublicKey() const;
	virtual void setPublicKey(Array<String>&);
	virtual Boolean getPublicKeySize(CIMProperty&) const;
	virtual Uint16 getPublicKeySize() const;
	virtual void setPublicKeySize(Uint16&);
	virtual Boolean getIsValid(CIMProperty&) const;
	virtual Boolean getIsValid() const;
	virtual void setIsValid(Boolean&);
	virtual Boolean getSerialNumber(CIMProperty&) const;
	virtual Array<String> getSerialNumber() const;
	virtual void setSerialNumber(Array<String>&);
	virtual Boolean getPublicKeyAlgorithm(CIMProperty&) const;
	virtual Uint16 getPublicKeyAlgorithm() const;
	virtual void setPublicKeyAlgorithm(Uint16&);
	virtual Boolean getKeyUsage(CIMProperty&) const;
	virtual Array<Uint16> getKeyUsage() const;
	virtual void setKeyUsage(Array<Uint16>&);
	virtual Boolean getExtendedKeyUsage(CIMProperty&) const;
	virtual Array<String> getExtendedKeyUsage() const;
	virtual void setExtendedKeyUsage(Array<String>&);
	virtual Boolean getPathLengthConstraint(CIMProperty&) const;
	virtual Uint16 getPathLengthConstraint() const;
	virtual void setPathLengthConstraint(Uint16&);
	virtual Boolean getEncodedCertificate(CIMProperty&) const;
	virtual Array<String> getEncodedCertificate() const;
	virtual void setEncodedCertificate(Array<String>&);
	virtual Boolean getExtensionID(CIMProperty&) const;
	virtual Array<String> getExtensionID() const;
	virtual void setExtensionID(Array<String>&);
	virtual Boolean getExtensionValue(CIMProperty&) const;
	virtual Array<String> getExtensionValue() const;
	virtual void setExtensionValue(Array<String>&);
	virtual Boolean getIsCritical(CIMProperty&) const;
	virtual Array<Boolean> getIsCritical() const;
	virtual void setIsCritical(Array<Boolean>&);
	virtual Boolean getIssuerUniqueID(CIMProperty&) const;
	virtual String getIssuerUniqueID() const;
	virtual void setIssuerUniqueID(String&);
	virtual Boolean getSubjectUniqueID(CIMProperty&) const;
	virtual String getSubjectUniqueID() const;
	virtual void setSubjectUniqueID(String&);
	virtual Boolean getTrustedRootCertificate(CIMProperty&) const;
	virtual Boolean getTrustedRootCertificate() const;
	virtual void setTrustedRootCertificate(Boolean&);


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
	String _subject;
	String _altSubject;
	Array<String> _publicKey;
	Uint16 _publicKeySize;
	Boolean _isValid;
	Array<String> _serialNumber;
	Uint16 _publicKeyAlgorithm;
	Array<Uint16> _keyUsage;
	Array<String> _extendedKeyUsage;
	Uint16 _pathLengthConstraint;
	Array<String> _encodedCertificate;
	Array<String> _extensionID;
	Array<String> _extensionValue;
	Array<Boolean> _isCritical;
	String _issuerUniqueID;
	String _subjectUniqueID;
	Boolean _trustedRootCertificate;

#	include "UNIX_X509CertificatePrivate.h"


};

#endif /* UNIX_X509CERTIFICATE */
