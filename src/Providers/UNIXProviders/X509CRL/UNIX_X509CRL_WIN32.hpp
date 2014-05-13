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


UNIX_X509CRL::UNIX_X509CRL(void)
{
}

UNIX_X509CRL::~UNIX_X509CRL(void)
{
}

Boolean UNIX_X509CRL::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_X509CRL::getInstanceID() const
{
	return _instanceID;
}

void UNIX_X509CRL::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_X509CRL::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_X509CRL::getCaption() const
{
	return _caption;
}

void UNIX_X509CRL::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_X509CRL::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_X509CRL::getDescription() const
{
	return _description;
}

void UNIX_X509CRL::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_X509CRL::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_X509CRL::getElementName() const
{
	return _elementName;
}

void UNIX_X509CRL::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_X509CRL::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_X509CRL::getGeneration() const
{
	return _generation;
}

void UNIX_X509CRL::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_X509CRL::getIssued(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ISSUED, getIssued());
	return true;
}

CIMDateTime UNIX_X509CRL::getIssued() const
{
	return _issued;
}

void UNIX_X509CRL::setIssued(CIMDateTime &value)
{
	_issued = value;
}

Boolean UNIX_X509CRL::getExpires(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXPIRES, getExpires());
	return true;
}

CIMDateTime UNIX_X509CRL::getExpires() const
{
	return _expires;
}

void UNIX_X509CRL::setExpires(CIMDateTime &value)
{
	_expires = value;
}

Boolean UNIX_X509CRL::getValidFrom(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VALID_FROM, getValidFrom());
	return true;
}

CIMDateTime UNIX_X509CRL::getValidFrom() const
{
	return _validFrom;
}

void UNIX_X509CRL::setValidFrom(CIMDateTime &value)
{
	_validFrom = value;
}

Boolean UNIX_X509CRL::getIssuerName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ISSUER_NAME, getIssuerName());
	return true;
}

String UNIX_X509CRL::getIssuerName() const
{
	return _issuerName;
}

void UNIX_X509CRL::setIssuerName(String &value)
{
	_issuerName = value;
}

Boolean UNIX_X509CRL::getSignature(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SIGNATURE, getSignature());
	return true;
}

Array<Uint8> UNIX_X509CRL::getSignature() const
{
	return _signature;
}

void UNIX_X509CRL::setSignature(Array<Uint8> &value)
{
	_signature = value;
}

Boolean UNIX_X509CRL::getSignatureAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SIGNATURE_ALGORITHM, getSignatureAlgorithm());
	return true;
}

Uint16 UNIX_X509CRL::getSignatureAlgorithm() const
{
	return _signatureAlgorithm;
}

void UNIX_X509CRL::setSignatureAlgorithm(Uint16 &value)
{
	_signatureAlgorithm = value;
}

Boolean UNIX_X509CRL::getOtherSignatureAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SIGNATURE_ALGORITHM, getOtherSignatureAlgorithm());
	return true;
}

String UNIX_X509CRL::getOtherSignatureAlgorithm() const
{
	return _otherSignatureAlgorithm;
}

void UNIX_X509CRL::setOtherSignatureAlgorithm(String &value)
{
	_otherSignatureAlgorithm = value;
}

Boolean UNIX_X509CRL::getSignatureAlgorithmOID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SIGNATURE_ALGORITHM_O_ID, getSignatureAlgorithmOID());
	return true;
}

String UNIX_X509CRL::getSignatureAlgorithmOID() const
{
	return _signatureAlgorithmOID;
}

void UNIX_X509CRL::setSignatureAlgorithmOID(String &value)
{
	_signatureAlgorithmOID = value;
}

Boolean UNIX_X509CRL::getVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERSION, getVersion());
	return true;
}

Uint16 UNIX_X509CRL::getVersion() const
{
	return _version;
}

void UNIX_X509CRL::setVersion(Uint16 &value)
{
	_version = value;
}

Boolean UNIX_X509CRL::getTBSCertificate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_T_B_S_CERTIFICATE, getTBSCertificate());
	return true;
}

Array<String> UNIX_X509CRL::getTBSCertificate() const
{
	return _tBSCertificate;
}

void UNIX_X509CRL::setTBSCertificate(Array<String> &value)
{
	_tBSCertificate = value;
}

Boolean UNIX_X509CRL::getMD5Fingerprint(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_M_D_5_FINGERPRINT, getMD5Fingerprint());
	return true;
}

Array<String> UNIX_X509CRL::getMD5Fingerprint() const
{
	return _mD5Fingerprint;
}

void UNIX_X509CRL::setMD5Fingerprint(Array<String> &value)
{
	_mD5Fingerprint = value;
}

Boolean UNIX_X509CRL::getSHA1Fingerprint(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_H_A_1_FINGERPRINT, getSHA1Fingerprint());
	return true;
}

Array<String> UNIX_X509CRL::getSHA1Fingerprint() const
{
	return _sHA1Fingerprint;
}

void UNIX_X509CRL::setSHA1Fingerprint(Array<String> &value)
{
	_sHA1Fingerprint = value;
}

Boolean UNIX_X509CRL::getFingerprintDigestAlgorithms(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FINGERPRINT_DIGEST_ALGORITHMS, getFingerprintDigestAlgorithms());
	return true;
}

Array<Uint16> UNIX_X509CRL::getFingerprintDigestAlgorithms() const
{
	return _fingerprintDigestAlgorithms;
}

void UNIX_X509CRL::setFingerprintDigestAlgorithms(Array<Uint16> &value)
{
	_fingerprintDigestAlgorithms = value;
}

Boolean UNIX_X509CRL::getFingerprints(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FINGERPRINTS, getFingerprints());
	return true;
}

Array<String> UNIX_X509CRL::getFingerprints() const
{
	return _fingerprints;
}

void UNIX_X509CRL::setFingerprints(Array<String> &value)
{
	_fingerprints = value;
}

Boolean UNIX_X509CRL::getNextUpdate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NEXT_UPDATE, getNextUpdate());
	return true;
}

CIMDateTime UNIX_X509CRL::getNextUpdate() const
{
	return _nextUpdate;
}

void UNIX_X509CRL::setNextUpdate(CIMDateTime &value)
{
	_nextUpdate = value;
}

Boolean UNIX_X509CRL::getEncodedCRL(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENCODED_CRL, getEncodedCRL());
	return true;
}

Array<String> UNIX_X509CRL::getEncodedCRL() const
{
	return _encodedCRL;
}

void UNIX_X509CRL::setEncodedCRL(Array<String> &value)
{
	_encodedCRL = value;
}

Boolean UNIX_X509CRL::getSerialNumbers(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERIAL_NUMBERS, getSerialNumbers());
	return true;
}

Array<String> UNIX_X509CRL::getSerialNumbers() const
{
	return _serialNumbers;
}

void UNIX_X509CRL::setSerialNumbers(Array<String> &value)
{
	_serialNumbers = value;
}


void UNIX_X509CRL::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("X509CRL");
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
	_nextUpdate = CIMHelper::getCurrentTime();
	_encodedCRL.clear();
	_serialNumbers.clear();

}

Boolean UNIX_X509CRL::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "NextUpdate"))
			{
				CIMDateTime nextUpdateValue;
				property.getValue().get(nextUpdateValue);
				setNextUpdate(nextUpdateValue);
			}
			else if (String::equal(property.getName().getString(), "EncodedCRL"))
			{
				Array<String> encodedCRLValue;
				property.getValue().get(encodedCRLValue);
				setEncodedCRL(encodedCRLValue);
			}
			else if (String::equal(property.getName().getString(), "SerialNumbers"))
			{
				Array<String> serialNumbersValue;
				property.getValue().get(serialNumbersValue);
				setSerialNumbers(serialNumbersValue);
			}
	}
	return true;
}


Boolean UNIX_X509CRL::initialize()
{
	return false;
}

Boolean UNIX_X509CRL::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("X509CRL");
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
	_nextUpdate = CIMHelper::getCurrentTime();
	_encodedCRL.clear();
	_serialNumbers.clear();
	
	return false;
}

Boolean UNIX_X509CRL::finalize()
{
	return false;
}


Boolean UNIX_X509CRL::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_X509CRL::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_X509CRL::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_X509CRL::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_X509CRL::validateInstance()
{
	return true;
}

