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


#include "UNIX_X509CertificateProvider.h"

using PROVIDER_LIB_NS::CIMHelper;

UNIX_X509CertificateProvider::UNIX_X509CertificateProvider()
{
}

UNIX_X509CertificateProvider::~UNIX_X509CertificateProvider()
{
}

CIMInstance UNIX_X509CertificateProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_X509Certificate &instanceObject) const
{
	CIMProperty p;

	CIMInstance inst(className);

	// Set path
	inst.setPath(CIMObjectPath(String(""), // hostname
			nameSpace,
			className,
			constructKeyBindings(instanceObject)));

	//CIM_ManagedElement Properties
	if (instanceObject.getInstanceID(p)) inst.addProperty(p);
	if (instanceObject.getCaption(p)) inst.addProperty(p);
	if (instanceObject.getDescription(p)) inst.addProperty(p);
	if (instanceObject.getElementName(p)) inst.addProperty(p);
	if (instanceObject.getGeneration(p)) inst.addProperty(p);
	if (className.equal("CIM_ManagedElement")) return inst;
	
	//CIM_Credential Properties
	if (instanceObject.getIssued(p)) inst.addProperty(p);
	if (instanceObject.getExpires(p)) inst.addProperty(p);
	if (instanceObject.getValidFrom(p)) inst.addProperty(p);
	if (className.equal("CIM_Credential")) return inst;
	
	//CIM_SignedCredential Properties
	if (instanceObject.getIssuerName(p)) inst.addProperty(p);
	if (instanceObject.getSignature(p)) inst.addProperty(p);
	if (instanceObject.getSignatureAlgorithm(p)) inst.addProperty(p);
	if (instanceObject.getOtherSignatureAlgorithm(p)) inst.addProperty(p);
	if (instanceObject.getSignatureAlgorithmOID(p)) inst.addProperty(p);
	if (className.equal("CIM_SignedCredential")) return inst;
	
	//CIM_X509Infrastructure Properties
	if (instanceObject.getVersion(p)) inst.addProperty(p);
	if (instanceObject.getTBSCertificate(p)) inst.addProperty(p);
	if (instanceObject.getMD5Fingerprint(p)) inst.addProperty(p);
	if (instanceObject.getSHA1Fingerprint(p)) inst.addProperty(p);
	if (instanceObject.getFingerprintDigestAlgorithms(p)) inst.addProperty(p);
	if (instanceObject.getFingerprints(p)) inst.addProperty(p);
	if (className.equal("CIM_X509Infrastructure")) return inst;
	
	//CIM_X509Certificate Properties
	if (instanceObject.getSubject(p)) inst.addProperty(p);
	if (instanceObject.getAltSubject(p)) inst.addProperty(p);
	if (instanceObject.getPublicKey(p)) inst.addProperty(p);
	if (instanceObject.getPublicKeySize(p)) inst.addProperty(p);
	if (instanceObject.getIsValid(p)) inst.addProperty(p);
	if (instanceObject.getSerialNumber(p)) inst.addProperty(p);
	if (instanceObject.getPublicKeyAlgorithm(p)) inst.addProperty(p);
	if (instanceObject.getKeyUsage(p)) inst.addProperty(p);
	if (instanceObject.getExtendedKeyUsage(p)) inst.addProperty(p);
	if (instanceObject.getPathLengthConstraint(p)) inst.addProperty(p);
	if (instanceObject.getEncodedCertificate(p)) inst.addProperty(p);
	if (instanceObject.getExtensionID(p)) inst.addProperty(p);
	if (instanceObject.getExtensionValue(p)) inst.addProperty(p);
	if (instanceObject.getIsCritical(p)) inst.addProperty(p);
	if (instanceObject.getIssuerUniqueID(p)) inst.addProperty(p);
	if (instanceObject.getSubjectUniqueID(p)) inst.addProperty(p);
	if (instanceObject.getTrustedRootCertificate(p)) inst.addProperty(p);
	

	return inst;
}

Array<CIMKeyBinding> UNIX_X509CertificateProvider::constructKeyBindings(const UNIX_X509Certificate& instanceObject) const
{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_INSTANCE_ID,
		instanceObject.getInstanceID(),
		CIMKeyBinding::STRING));


	return keys;
}



#define UNIX_PROVIDER UNIX_X509CertificateProvider
#define UNIX_PROVIDER_NAME "UNIX_X509CertificateProvider"
#define CLASS_IMPLEMENTATION UNIX_X509Certificate
#define CLASS_IMPLEMENTATION_NAME "UNIX_X509Certificate"
#define BASE_CLASS_NAME "CIM_X509Certificate"
#define NUMKEYS_CLASS_IMPLEMENTATION 1


#include "UNIXProviderBase.hpp"

