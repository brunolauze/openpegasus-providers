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


using PROVIDER_LIB_NS::CIMHelper;


UNIX_X509Certificate::UNIX_X509Certificate(void)
{
}

UNIX_X509Certificate::~UNIX_X509Certificate(void)
{
}

Boolean UNIX_X509Certificate::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_X509Certificate::getInstanceID() const
{
	return _instanceID;
}

void UNIX_X509Certificate::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_X509Certificate::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_X509Certificate::getCaption() const
{
	return _caption;
}

void UNIX_X509Certificate::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_X509Certificate::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_X509Certificate::getDescription() const
{
	return _description;
}

void UNIX_X509Certificate::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_X509Certificate::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_X509Certificate::getElementName() const
{
	return _elementName;
}

void UNIX_X509Certificate::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_X509Certificate::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_X509Certificate::getGeneration() const
{
	return _generation;
}

void UNIX_X509Certificate::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_X509Certificate::getIssued(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ISSUED, getIssued());
	return true;
}

CIMDateTime UNIX_X509Certificate::getIssued() const
{
	return _issued;
}

void UNIX_X509Certificate::setIssued(CIMDateTime &value)
{
	_issued = value;
}

Boolean UNIX_X509Certificate::getExpires(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXPIRES, getExpires());
	return true;
}

CIMDateTime UNIX_X509Certificate::getExpires() const
{
	return _expires;
}

void UNIX_X509Certificate::setExpires(CIMDateTime &value)
{
	_expires = value;
}

Boolean UNIX_X509Certificate::getValidFrom(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VALID_FROM, getValidFrom());
	return true;
}

CIMDateTime UNIX_X509Certificate::getValidFrom() const
{
	return _validFrom;
}

void UNIX_X509Certificate::setValidFrom(CIMDateTime &value)
{
	_validFrom = value;
}

Boolean UNIX_X509Certificate::getIssuerName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ISSUER_NAME, getIssuerName());
	return true;
}

String UNIX_X509Certificate::getIssuerName() const
{
	return _issuerName;
}

void UNIX_X509Certificate::setIssuerName(String &value)
{
	_issuerName = value;
}

Boolean UNIX_X509Certificate::getSignature(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SIGNATURE, getSignature());
	return true;
}

Array<Uint8> UNIX_X509Certificate::getSignature() const
{
	return _signature;
}

void UNIX_X509Certificate::setSignature(Array<Uint8> &value)
{
	_signature = value;
}

Boolean UNIX_X509Certificate::getSignatureAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SIGNATURE_ALGORITHM, getSignatureAlgorithm());
	return true;
}

Uint16 UNIX_X509Certificate::getSignatureAlgorithm() const
{
	return _signatureAlgorithm;
}

void UNIX_X509Certificate::setSignatureAlgorithm(Uint16 &value)
{
	_signatureAlgorithm = value;
}

Boolean UNIX_X509Certificate::getOtherSignatureAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SIGNATURE_ALGORITHM, getOtherSignatureAlgorithm());
	return true;
}

String UNIX_X509Certificate::getOtherSignatureAlgorithm() const
{
	return _otherSignatureAlgorithm;
}

void UNIX_X509Certificate::setOtherSignatureAlgorithm(String &value)
{
	_otherSignatureAlgorithm = value;
}

Boolean UNIX_X509Certificate::getSignatureAlgorithmOID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SIGNATURE_ALGORITHM_O_ID, getSignatureAlgorithmOID());
	return true;
}

String UNIX_X509Certificate::getSignatureAlgorithmOID() const
{
	return _signatureAlgorithmOID;
}

void UNIX_X509Certificate::setSignatureAlgorithmOID(String &value)
{
	_signatureAlgorithmOID = value;
}

Boolean UNIX_X509Certificate::getVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERSION, getVersion());
	return true;
}

Uint16 UNIX_X509Certificate::getVersion() const
{
	return _version;
}

void UNIX_X509Certificate::setVersion(Uint16 &value)
{
	_version = value;
}

Boolean UNIX_X509Certificate::getTBSCertificate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_T_B_S_CERTIFICATE, getTBSCertificate());
	return true;
}

Array<String> UNIX_X509Certificate::getTBSCertificate() const
{
	return _tBSCertificate;
}

void UNIX_X509Certificate::setTBSCertificate(Array<String> &value)
{
	_tBSCertificate = value;
}

Boolean UNIX_X509Certificate::getMD5Fingerprint(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_M_D_5_FINGERPRINT, getMD5Fingerprint());
	return true;
}

Array<String> UNIX_X509Certificate::getMD5Fingerprint() const
{
	return _mD5Fingerprint;
}

void UNIX_X509Certificate::setMD5Fingerprint(Array<String> &value)
{
	_mD5Fingerprint = value;
}

Boolean UNIX_X509Certificate::getSHA1Fingerprint(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_H_A_1_FINGERPRINT, getSHA1Fingerprint());
	return true;
}

Array<String> UNIX_X509Certificate::getSHA1Fingerprint() const
{
	return _sHA1Fingerprint;
}

void UNIX_X509Certificate::setSHA1Fingerprint(Array<String> &value)
{
	_sHA1Fingerprint = value;
}

Boolean UNIX_X509Certificate::getFingerprintDigestAlgorithms(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FINGERPRINT_DIGEST_ALGORITHMS, getFingerprintDigestAlgorithms());
	return true;
}

Array<Uint16> UNIX_X509Certificate::getFingerprintDigestAlgorithms() const
{
	return _fingerprintDigestAlgorithms;
}

void UNIX_X509Certificate::setFingerprintDigestAlgorithms(Array<Uint16> &value)
{
	_fingerprintDigestAlgorithms = value;
}

Boolean UNIX_X509Certificate::getFingerprints(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FINGERPRINTS, getFingerprints());
	return true;
}

Array<String> UNIX_X509Certificate::getFingerprints() const
{
	return _fingerprints;
}

void UNIX_X509Certificate::setFingerprints(Array<String> &value)
{
	_fingerprints = value;
}

Boolean UNIX_X509Certificate::getSubject(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUBJECT, getSubject());
	return true;
}

String UNIX_X509Certificate::getSubject() const
{
	return _subject;
}

void UNIX_X509Certificate::setSubject(String &value)
{
	_subject = value;
}

Boolean UNIX_X509Certificate::getAltSubject(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALT_SUBJECT, getAltSubject());
	return true;
}

String UNIX_X509Certificate::getAltSubject() const
{
	return _altSubject;
}

void UNIX_X509Certificate::setAltSubject(String &value)
{
	_altSubject = value;
}

Boolean UNIX_X509Certificate::getPublicKey(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PUBLIC_KEY, getPublicKey());
	return true;
}

Array<String> UNIX_X509Certificate::getPublicKey() const
{
	return _publicKey;
}

void UNIX_X509Certificate::setPublicKey(Array<String> &value)
{
	_publicKey = value;
}

Boolean UNIX_X509Certificate::getPublicKeySize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PUBLIC_KEY_SIZE, getPublicKeySize());
	return true;
}

Uint16 UNIX_X509Certificate::getPublicKeySize() const
{
	return _publicKeySize;
}

void UNIX_X509Certificate::setPublicKeySize(Uint16 &value)
{
	_publicKeySize = value;
}

Boolean UNIX_X509Certificate::getIsValid(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_VALID, getIsValid());
	return true;
}

Boolean UNIX_X509Certificate::getIsValid() const
{
	return _isValid;
}

void UNIX_X509Certificate::setIsValid(Boolean &value)
{
	_isValid = value;
}

Boolean UNIX_X509Certificate::getSerialNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERIAL_NUMBER, getSerialNumber());
	return true;
}

Array<String> UNIX_X509Certificate::getSerialNumber() const
{
	return _serialNumber;
}

void UNIX_X509Certificate::setSerialNumber(Array<String> &value)
{
	_serialNumber = value;
}

Boolean UNIX_X509Certificate::getPublicKeyAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PUBLIC_KEY_ALGORITHM, getPublicKeyAlgorithm());
	return true;
}

Uint16 UNIX_X509Certificate::getPublicKeyAlgorithm() const
{
	return _publicKeyAlgorithm;
}

void UNIX_X509Certificate::setPublicKeyAlgorithm(Uint16 &value)
{
	_publicKeyAlgorithm = value;
}

Boolean UNIX_X509Certificate::getKeyUsage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_KEY_USAGE, getKeyUsage());
	return true;
}

Array<Uint16> UNIX_X509Certificate::getKeyUsage() const
{
	return _keyUsage;
}

void UNIX_X509Certificate::setKeyUsage(Array<Uint16> &value)
{
	_keyUsage = value;
}

Boolean UNIX_X509Certificate::getExtendedKeyUsage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENDED_KEY_USAGE, getExtendedKeyUsage());
	return true;
}

Array<String> UNIX_X509Certificate::getExtendedKeyUsage() const
{
	return _extendedKeyUsage;
}

void UNIX_X509Certificate::setExtendedKeyUsage(Array<String> &value)
{
	_extendedKeyUsage = value;
}

Boolean UNIX_X509Certificate::getPathLengthConstraint(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PATH_LENGTH_CONSTRAINT, getPathLengthConstraint());
	return true;
}

Uint16 UNIX_X509Certificate::getPathLengthConstraint() const
{
	return _pathLengthConstraint;
}

void UNIX_X509Certificate::setPathLengthConstraint(Uint16 &value)
{
	_pathLengthConstraint = value;
}

Boolean UNIX_X509Certificate::getEncodedCertificate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENCODED_CERTIFICATE, getEncodedCertificate());
	return true;
}

Array<String> UNIX_X509Certificate::getEncodedCertificate() const
{
	return _encodedCertificate;
}

void UNIX_X509Certificate::setEncodedCertificate(Array<String> &value)
{
	_encodedCertificate = value;
}

Boolean UNIX_X509Certificate::getExtensionID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENSION_ID, getExtensionID());
	return true;
}

Array<String> UNIX_X509Certificate::getExtensionID() const
{
	return _extensionID;
}

void UNIX_X509Certificate::setExtensionID(Array<String> &value)
{
	_extensionID = value;
}

Boolean UNIX_X509Certificate::getExtensionValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENSION_VALUE, getExtensionValue());
	return true;
}

Array<String> UNIX_X509Certificate::getExtensionValue() const
{
	return _extensionValue;
}

void UNIX_X509Certificate::setExtensionValue(Array<String> &value)
{
	_extensionValue = value;
}

Boolean UNIX_X509Certificate::getIsCritical(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_CRITICAL, getIsCritical());
	return true;
}

Array<Boolean> UNIX_X509Certificate::getIsCritical() const
{
	return _isCritical;
}

void UNIX_X509Certificate::setIsCritical(Array<Boolean> &value)
{
	_isCritical = value;
}

Boolean UNIX_X509Certificate::getIssuerUniqueID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ISSUER_UNIQUE_ID, getIssuerUniqueID());
	return true;
}

String UNIX_X509Certificate::getIssuerUniqueID() const
{
	return _issuerUniqueID;
}

void UNIX_X509Certificate::setIssuerUniqueID(String &value)
{
	_issuerUniqueID = value;
}

Boolean UNIX_X509Certificate::getSubjectUniqueID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUBJECT_UNIQUE_ID, getSubjectUniqueID());
	return true;
}

String UNIX_X509Certificate::getSubjectUniqueID() const
{
	return _subjectUniqueID;
}

void UNIX_X509Certificate::setSubjectUniqueID(String &value)
{
	_subjectUniqueID = value;
}

Boolean UNIX_X509Certificate::getTrustedRootCertificate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRUSTED_ROOT_CERTIFICATE, getTrustedRootCertificate());
	return true;
}

Boolean UNIX_X509Certificate::getTrustedRootCertificate() const
{
	return _trustedRootCertificate;
}

void UNIX_X509Certificate::setTrustedRootCertificate(Boolean &value)
{
	_trustedRootCertificate = value;
}


void UNIX_X509Certificate::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("X509Certificate");
	_generation = Uint64(0);
	_issued = CIMHelper::getCurrentTime();
	_expires = CIMHelper::getCurrentTime();
	_validFrom = CIMHelper::getCurrentTime();
	_issuerName = String ("");
	_signature.clear();
	_signatureAlgorithm = Uint16(0);
	_otherSignatureAlgorithm = String ("");
	_signatureAlgorithmOID = String ("");
	_version = Uint16(0);
	_tBSCertificate.clear();
	_mD5Fingerprint.clear();
	_sHA1Fingerprint.clear();
	_fingerprintDigestAlgorithms.clear();
	_fingerprints.clear();
	_subject = String ("");
	_altSubject = String ("");
	_publicKey.clear();
	_publicKeySize = Uint16(0);
	_isValid = Boolean(false);
	_serialNumber.clear();
	_publicKeyAlgorithm = Uint16(0);
	_keyUsage.clear();
	_extendedKeyUsage.clear();
	_pathLengthConstraint = Uint16(0);
	_encodedCertificate.clear();
	_extensionID.clear();
	_extensionValue.clear();
	_isCritical.clear();
	_issuerUniqueID = String ("");
	_subjectUniqueID = String ("");
	_trustedRootCertificate = Boolean(false);

}

Boolean UNIX_X509Certificate::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "InstanceID"))
			{
				String instanceIDValue;
				property.getValue().get(instanceIDValue);
				setInstanceID(instanceIDValue);
			}
			else if (String::equal(property.getName().getString(), "Caption"))
			{
				String captionValue;
				property.getValue().get(captionValue);
				setCaption(captionValue);
			}
			else if (String::equal(property.getName().getString(), "Description"))
			{
				String descriptionValue;
				property.getValue().get(descriptionValue);
				setDescription(descriptionValue);
			}
			else if (String::equal(property.getName().getString(), "ElementName"))
			{
				String elementNameValue;
				property.getValue().get(elementNameValue);
				setElementName(elementNameValue);
			}
			else if (String::equal(property.getName().getString(), "Generation"))
			{
				Uint64 generationValue;
				property.getValue().get(generationValue);
				setGeneration(generationValue);
			}
			else if (String::equal(property.getName().getString(), "Issued"))
			{
				CIMDateTime issuedValue;
				property.getValue().get(issuedValue);
				setIssued(issuedValue);
			}
			else if (String::equal(property.getName().getString(), "Expires"))
			{
				CIMDateTime expiresValue;
				property.getValue().get(expiresValue);
				setExpires(expiresValue);
			}
			else if (String::equal(property.getName().getString(), "ValidFrom"))
			{
				CIMDateTime validFromValue;
				property.getValue().get(validFromValue);
				setValidFrom(validFromValue);
			}
			else if (String::equal(property.getName().getString(), "IssuerName"))
			{
				String issuerNameValue;
				property.getValue().get(issuerNameValue);
				setIssuerName(issuerNameValue);
			}
			else if (String::equal(property.getName().getString(), "Signature"))
			{
				Array<Uint8> signatureValue;
				property.getValue().get(signatureValue);
				setSignature(signatureValue);
			}
			else if (String::equal(property.getName().getString(), "SignatureAlgorithm"))
			{
				Uint16 signatureAlgorithmValue;
				property.getValue().get(signatureAlgorithmValue);
				setSignatureAlgorithm(signatureAlgorithmValue);
			}
			else if (String::equal(property.getName().getString(), "OtherSignatureAlgorithm"))
			{
				String otherSignatureAlgorithmValue;
				property.getValue().get(otherSignatureAlgorithmValue);
				setOtherSignatureAlgorithm(otherSignatureAlgorithmValue);
			}
			else if (String::equal(property.getName().getString(), "SignatureAlgorithmOID"))
			{
				String signatureAlgorithmOIDValue;
				property.getValue().get(signatureAlgorithmOIDValue);
				setSignatureAlgorithmOID(signatureAlgorithmOIDValue);
			}
			else if (String::equal(property.getName().getString(), "Version"))
			{
				Uint16 versionValue;
				property.getValue().get(versionValue);
				setVersion(versionValue);
			}
			else if (String::equal(property.getName().getString(), "TBSCertificate"))
			{
				Array<String> tBSCertificateValue;
				property.getValue().get(tBSCertificateValue);
				setTBSCertificate(tBSCertificateValue);
			}
			else if (String::equal(property.getName().getString(), "MD5Fingerprint"))
			{
				Array<String> mD5FingerprintValue;
				property.getValue().get(mD5FingerprintValue);
				setMD5Fingerprint(mD5FingerprintValue);
			}
			else if (String::equal(property.getName().getString(), "SHA1Fingerprint"))
			{
				Array<String> sHA1FingerprintValue;
				property.getValue().get(sHA1FingerprintValue);
				setSHA1Fingerprint(sHA1FingerprintValue);
			}
			else if (String::equal(property.getName().getString(), "FingerprintDigestAlgorithms"))
			{
				Array<Uint16> fingerprintDigestAlgorithmsValue;
				property.getValue().get(fingerprintDigestAlgorithmsValue);
				setFingerprintDigestAlgorithms(fingerprintDigestAlgorithmsValue);
			}
			else if (String::equal(property.getName().getString(), "Fingerprints"))
			{
				Array<String> fingerprintsValue;
				property.getValue().get(fingerprintsValue);
				setFingerprints(fingerprintsValue);
			}
			else if (String::equal(property.getName().getString(), "Subject"))
			{
				String subjectValue;
				property.getValue().get(subjectValue);
				setSubject(subjectValue);
			}
			else if (String::equal(property.getName().getString(), "AltSubject"))
			{
				String altSubjectValue;
				property.getValue().get(altSubjectValue);
				setAltSubject(altSubjectValue);
			}
			else if (String::equal(property.getName().getString(), "PublicKey"))
			{
				Array<String> publicKeyValue;
				property.getValue().get(publicKeyValue);
				setPublicKey(publicKeyValue);
			}
			else if (String::equal(property.getName().getString(), "PublicKeySize"))
			{
				Uint16 publicKeySizeValue;
				property.getValue().get(publicKeySizeValue);
				setPublicKeySize(publicKeySizeValue);
			}
			else if (String::equal(property.getName().getString(), "IsValid"))
			{
				Boolean isValidValue;
				property.getValue().get(isValidValue);
				setIsValid(isValidValue);
			}
			else if (String::equal(property.getName().getString(), "SerialNumber"))
			{
				Array<String> serialNumberValue;
				property.getValue().get(serialNumberValue);
				setSerialNumber(serialNumberValue);
			}
			else if (String::equal(property.getName().getString(), "PublicKeyAlgorithm"))
			{
				Uint16 publicKeyAlgorithmValue;
				property.getValue().get(publicKeyAlgorithmValue);
				setPublicKeyAlgorithm(publicKeyAlgorithmValue);
			}
			else if (String::equal(property.getName().getString(), "KeyUsage"))
			{
				Array<Uint16> keyUsageValue;
				property.getValue().get(keyUsageValue);
				setKeyUsage(keyUsageValue);
			}
			else if (String::equal(property.getName().getString(), "ExtendedKeyUsage"))
			{
				Array<String> extendedKeyUsageValue;
				property.getValue().get(extendedKeyUsageValue);
				setExtendedKeyUsage(extendedKeyUsageValue);
			}
			else if (String::equal(property.getName().getString(), "PathLengthConstraint"))
			{
				Uint16 pathLengthConstraintValue;
				property.getValue().get(pathLengthConstraintValue);
				setPathLengthConstraint(pathLengthConstraintValue);
			}
			else if (String::equal(property.getName().getString(), "EncodedCertificate"))
			{
				Array<String> encodedCertificateValue;
				property.getValue().get(encodedCertificateValue);
				setEncodedCertificate(encodedCertificateValue);
			}
			else if (String::equal(property.getName().getString(), "ExtensionID"))
			{
				Array<String> extensionIDValue;
				property.getValue().get(extensionIDValue);
				setExtensionID(extensionIDValue);
			}
			else if (String::equal(property.getName().getString(), "ExtensionValue"))
			{
				Array<String> extensionValueValue;
				property.getValue().get(extensionValueValue);
				setExtensionValue(extensionValueValue);
			}
			else if (String::equal(property.getName().getString(), "IsCritical"))
			{
				Array<Boolean> isCriticalValue;
				property.getValue().get(isCriticalValue);
				setIsCritical(isCriticalValue);
			}
			else if (String::equal(property.getName().getString(), "IssuerUniqueID"))
			{
				String issuerUniqueIDValue;
				property.getValue().get(issuerUniqueIDValue);
				setIssuerUniqueID(issuerUniqueIDValue);
			}
			else if (String::equal(property.getName().getString(), "SubjectUniqueID"))
			{
				String subjectUniqueIDValue;
				property.getValue().get(subjectUniqueIDValue);
				setSubjectUniqueID(subjectUniqueIDValue);
			}
			else if (String::equal(property.getName().getString(), "TrustedRootCertificate"))
			{
				Boolean trustedRootCertificateValue;
				property.getValue().get(trustedRootCertificateValue);
				setTrustedRootCertificate(trustedRootCertificateValue);
			}
	}
	return true;
}


Boolean UNIX_X509Certificate::initialize()
{
	return false;
}

Boolean UNIX_X509Certificate::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("X509Certificate");
	_generation = Uint64(0);
	_issued = CIMHelper::getCurrentTime();
	_expires = CIMHelper::getCurrentTime();
	_validFrom = CIMHelper::getCurrentTime();
	_issuerName = String ("");
	_signature.clear();
	_signatureAlgorithm = Uint16(0);
	_otherSignatureAlgorithm = String ("");
	_signatureAlgorithmOID = String ("");
	_version = Uint16(0);
	_tBSCertificate.clear();
	_mD5Fingerprint.clear();
	_sHA1Fingerprint.clear();
	_fingerprintDigestAlgorithms.clear();
	_fingerprints.clear();
	_subject = String ("");
	_altSubject = String ("");
	_publicKey.clear();
	_publicKeySize = Uint16(0);
	_isValid = Boolean(false);
	_serialNumber.clear();
	_publicKeyAlgorithm = Uint16(0);
	_keyUsage.clear();
	_extendedKeyUsage.clear();
	_pathLengthConstraint = Uint16(0);
	_encodedCertificate.clear();
	_extensionID.clear();
	_extensionValue.clear();
	_isCritical.clear();
	_issuerUniqueID = String ("");
	_subjectUniqueID = String ("");
	_trustedRootCertificate = Boolean(false);
	
	return false;
}

Boolean UNIX_X509Certificate::finalize()
{
	return false;
}


Boolean UNIX_X509Certificate::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String instanceIDKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_INSTANCE_ID)) instanceIDKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getInstanceID(), instanceIDKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_X509Certificate::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_X509Certificate::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_X509Certificate::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_X509Certificate::validateInstance()
{
	return true;
}

