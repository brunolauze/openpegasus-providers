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
2.31.1
*/


/* **** UMLPackagePath *** */
/*
CIM::User::PublicKey
*/


/* **** Description *** */
/*
A PublicKeyCertificate is a credential that is cryptographically signed by a trusted Certificate Authority (CA) and issued to an authenticated entity (e.g., human user, service, etc.) called the Subject in the certificate. The public key in the certificate is cryptographically related to a private key that is held and kept private by the authenticated Subject. The certificate and its related private key can then be used for establishing trust relationships and securing communications with the Subject. Refer to the ITU/CCITT X.509 standard as an example of such certificates.
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

			UNIX_PublicKeyCertificate:
				SystemCreationClassName String
				SystemName String
				ServiceCreationClassName String
				ServiceName String
				Subject String
				AltSubject String
				PublicKey UInt8


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Credential:

			CIM_SignedCredential:

			UNIX_PublicKeyCertificate:


*/

#ifndef __UNIX_PUBLICKEYCERTIFICATE_H
#define __UNIX_PUBLICKEYCERTIFICATE_H


#include "CIM_SignedCredential.h"

#include "UNIX_PublicKeyCertificateDeps.h"


#ifndef PROPERTY_SYSTEM_CREATION_CLASS_NAME
#define PROPERTY_SYSTEM_CREATION_CLASS_NAME \
					"SystemCreationClassName"
#endif

#ifndef PROPERTY_SYSTEM_NAME
#define PROPERTY_SYSTEM_NAME \
					"SystemName"
#endif

#ifndef PROPERTY_SERVICE_CREATION_CLASS_NAME
#define PROPERTY_SERVICE_CREATION_CLASS_NAME \
					"ServiceCreationClassName"
#endif

#ifndef PROPERTY_SERVICE_NAME
#define PROPERTY_SERVICE_NAME \
					"ServiceName"
#endif

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



class UNIX_PublicKeyCertificate :
	public CIM_SignedCredential
{
public:

	UNIX_PublicKeyCertificate();
	~UNIX_PublicKeyCertificate();

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
	virtual Boolean getSystemCreationClassName(CIMProperty&) const;
	virtual String getSystemCreationClassName() const;
	virtual void setSystemCreationClassName(String&);
	virtual Boolean getSystemName(CIMProperty&) const;
	virtual String getSystemName() const;
	virtual void setSystemName(String&);
	virtual Boolean getServiceCreationClassName(CIMProperty&) const;
	virtual String getServiceCreationClassName() const;
	virtual void setServiceCreationClassName(String&);
	virtual Boolean getServiceName(CIMProperty&) const;
	virtual String getServiceName() const;
	virtual void setServiceName(String&);
	virtual Boolean getSubject(CIMProperty&) const;
	virtual String getSubject() const;
	virtual void setSubject(String&);
	virtual Boolean getAltSubject(CIMProperty&) const;
	virtual String getAltSubject() const;
	virtual void setAltSubject(String&);
	virtual Boolean getPublicKey(CIMProperty&) const;
	virtual Array<Uint8> getPublicKey() const;
	virtual void setPublicKey(Array<Uint8>&);


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
	String _systemCreationClassName;
	String _systemName;
	String _serviceCreationClassName;
	String _serviceName;
	String _subject;
	String _altSubject;
	Array<Uint8> _publicKey;

#	include "UNIX_PublicKeyCertificatePrivate.h"


};

#endif /* UNIX_PUBLICKEYCERTIFICATE */
