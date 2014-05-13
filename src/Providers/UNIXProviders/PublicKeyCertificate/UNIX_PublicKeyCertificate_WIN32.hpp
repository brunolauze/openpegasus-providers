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


UNIX_PublicKeyCertificate::UNIX_PublicKeyCertificate(void)
{
}

UNIX_PublicKeyCertificate::~UNIX_PublicKeyCertificate(void)
{
}

Boolean UNIX_PublicKeyCertificate::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_PublicKeyCertificate::getInstanceID() const
{
	return _instanceID;
}

void UNIX_PublicKeyCertificate::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_PublicKeyCertificate::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_PublicKeyCertificate::getCaption() const
{
	return _caption;
}

void UNIX_PublicKeyCertificate::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_PublicKeyCertificate::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_PublicKeyCertificate::getDescription() const
{
	return _description;
}

void UNIX_PublicKeyCertificate::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_PublicKeyCertificate::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_PublicKeyCertificate::getElementName() const
{
	return _elementName;
}

void UNIX_PublicKeyCertificate::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_PublicKeyCertificate::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_PublicKeyCertificate::getGeneration() const
{
	return _generation;
}

void UNIX_PublicKeyCertificate::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_PublicKeyCertificate::getIssued(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ISSUED, getIssued());
	return true;
}

CIMDateTime UNIX_PublicKeyCertificate::getIssued() const
{
	return _issued;
}

void UNIX_PublicKeyCertificate::setIssued(CIMDateTime &value)
{
	_issued = value;
}

Boolean UNIX_PublicKeyCertificate::getExpires(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXPIRES, getExpires());
	return true;
}

CIMDateTime UNIX_PublicKeyCertificate::getExpires() const
{
	return _expires;
}

void UNIX_PublicKeyCertificate::setExpires(CIMDateTime &value)
{
	_expires = value;
}

Boolean UNIX_PublicKeyCertificate::getValidFrom(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VALID_FROM, getValidFrom());
	return true;
}

CIMDateTime UNIX_PublicKeyCertificate::getValidFrom() const
{
	return _validFrom;
}

void UNIX_PublicKeyCertificate::setValidFrom(CIMDateTime &value)
{
	_validFrom = value;
}

Boolean UNIX_PublicKeyCertificate::getIssuerName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ISSUER_NAME, getIssuerName());
	return true;
}

String UNIX_PublicKeyCertificate::getIssuerName() const
{
	return _issuerName;
}

void UNIX_PublicKeyCertificate::setIssuerName(String &value)
{
	_issuerName = value;
}

Boolean UNIX_PublicKeyCertificate::getSignature(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SIGNATURE, getSignature());
	return true;
}

Array<Uint8> UNIX_PublicKeyCertificate::getSignature() const
{
	return _signature;
}

void UNIX_PublicKeyCertificate::setSignature(Array<Uint8> &value)
{
	_signature = value;
}

Boolean UNIX_PublicKeyCertificate::getSignatureAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SIGNATURE_ALGORITHM, getSignatureAlgorithm());
	return true;
}

Uint16 UNIX_PublicKeyCertificate::getSignatureAlgorithm() const
{
	return _signatureAlgorithm;
}

void UNIX_PublicKeyCertificate::setSignatureAlgorithm(Uint16 &value)
{
	_signatureAlgorithm = value;
}

Boolean UNIX_PublicKeyCertificate::getOtherSignatureAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SIGNATURE_ALGORITHM, getOtherSignatureAlgorithm());
	return true;
}

String UNIX_PublicKeyCertificate::getOtherSignatureAlgorithm() const
{
	return _otherSignatureAlgorithm;
}

void UNIX_PublicKeyCertificate::setOtherSignatureAlgorithm(String &value)
{
	_otherSignatureAlgorithm = value;
}

Boolean UNIX_PublicKeyCertificate::getSignatureAlgorithmOID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SIGNATURE_ALGORITHM_O_ID, getSignatureAlgorithmOID());
	return true;
}

String UNIX_PublicKeyCertificate::getSignatureAlgorithmOID() const
{
	return _signatureAlgorithmOID;
}

void UNIX_PublicKeyCertificate::setSignatureAlgorithmOID(String &value)
{
	_signatureAlgorithmOID = value;
}

Boolean UNIX_PublicKeyCertificate::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_PublicKeyCertificate::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_PublicKeyCertificate::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_PublicKeyCertificate::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_PublicKeyCertificate::getSystemName() const
{
	return _systemName;
}

void UNIX_PublicKeyCertificate::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_PublicKeyCertificate::getServiceCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVICE_CREATION_CLASS_NAME, getServiceCreationClassName());
	return true;
}

String UNIX_PublicKeyCertificate::getServiceCreationClassName() const
{
	return _serviceCreationClassName;
}

void UNIX_PublicKeyCertificate::setServiceCreationClassName(String &value)
{
	_serviceCreationClassName = value;
}

Boolean UNIX_PublicKeyCertificate::getServiceName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVICE_NAME, getServiceName());
	return true;
}

String UNIX_PublicKeyCertificate::getServiceName() const
{
	return _serviceName;
}

void UNIX_PublicKeyCertificate::setServiceName(String &value)
{
	_serviceName = value;
}

Boolean UNIX_PublicKeyCertificate::getSubject(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUBJECT, getSubject());
	return true;
}

String UNIX_PublicKeyCertificate::getSubject() const
{
	return _subject;
}

void UNIX_PublicKeyCertificate::setSubject(String &value)
{
	_subject = value;
}

Boolean UNIX_PublicKeyCertificate::getAltSubject(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALT_SUBJECT, getAltSubject());
	return true;
}

String UNIX_PublicKeyCertificate::getAltSubject() const
{
	return _altSubject;
}

void UNIX_PublicKeyCertificate::setAltSubject(String &value)
{
	_altSubject = value;
}

Boolean UNIX_PublicKeyCertificate::getPublicKey(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PUBLIC_KEY, getPublicKey());
	return true;
}

Array<Uint8> UNIX_PublicKeyCertificate::getPublicKey() const
{
	return _publicKey;
}

void UNIX_PublicKeyCertificate::setPublicKey(Array<Uint8> &value)
{
	_publicKey = value;
}


void UNIX_PublicKeyCertificate::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PublicKeyCertificate");
	_generation = Uint64(0);
	_issued = CIMHelper::getCurrentTime();
	_expires = CIMHelper::getCurrentTime();
	_validFrom = CIMHelper::getCurrentTime();
	_issuerName = String ("");
	_signature.clear();
	_signatureAlgorithm = Uint16(0);
	_otherSignatureAlgorithm = String ("");
	_signatureAlgorithmOID = String ("");
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_serviceCreationClassName = String ("");
	_serviceName = String ("");
	_subject = String ("");
	_altSubject = String ("");
	_publicKey.clear();

}

Boolean UNIX_PublicKeyCertificate::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "SystemCreationClassName"))
			{
				String systemCreationClassNameValue;
				property.getValue().get(systemCreationClassNameValue);
				setSystemCreationClassName(systemCreationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "SystemName"))
			{
				String systemNameValue;
				property.getValue().get(systemNameValue);
				setSystemName(systemNameValue);
			}
			else if (String::equal(property.getName().getString(), "ServiceCreationClassName"))
			{
				String serviceCreationClassNameValue;
				property.getValue().get(serviceCreationClassNameValue);
				setServiceCreationClassName(serviceCreationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "ServiceName"))
			{
				String serviceNameValue;
				property.getValue().get(serviceNameValue);
				setServiceName(serviceNameValue);
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
				Array<Uint8> publicKeyValue;
				property.getValue().get(publicKeyValue);
				setPublicKey(publicKeyValue);
			}
	}
	return true;
}


Boolean UNIX_PublicKeyCertificate::initialize()
{
	return false;
}

Boolean UNIX_PublicKeyCertificate::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PublicKeyCertificate");
	_generation = Uint64(0);
	_issued = CIMHelper::getCurrentTime();
	_expires = CIMHelper::getCurrentTime();
	_validFrom = CIMHelper::getCurrentTime();
	_issuerName = String ("");
	_signature.clear();
	_signatureAlgorithm = Uint16(0);
	_otherSignatureAlgorithm = String ("");
	_signatureAlgorithmOID = String ("");
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_serviceCreationClassName = String ("");
	_serviceName = String ("");
	_subject = String ("");
	_altSubject = String ("");
	_publicKey.clear();
	
	return false;
}

Boolean UNIX_PublicKeyCertificate::finalize()
{
	return false;
}


Boolean UNIX_PublicKeyCertificate::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_PublicKeyCertificate::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PublicKeyCertificate::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PublicKeyCertificate::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PublicKeyCertificate::validateInstance()
{
	return true;
}

