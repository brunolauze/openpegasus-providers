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


#include "UNIX_CertificateManagementServiceProvider.h"

using PROVIDER_LIB_NS::CIMHelper;

UNIX_CertificateManagementServiceProvider::UNIX_CertificateManagementServiceProvider()
{
}

UNIX_CertificateManagementServiceProvider::~UNIX_CertificateManagementServiceProvider()
{
}

CIMInstance UNIX_CertificateManagementServiceProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_CertificateManagementService &instanceObject) const
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
	
	//CIM_ManagedSystemElement Properties
	if (instanceObject.getInstallDate(p)) inst.addProperty(p);
	if (instanceObject.getName(p)) inst.addProperty(p);
	if (instanceObject.getOperationalStatus(p)) inst.addProperty(p);
	if (instanceObject.getStatusDescriptions(p)) inst.addProperty(p);
	if (instanceObject.getStatus(p)) inst.addProperty(p);
	if (instanceObject.getHealthState(p)) inst.addProperty(p);
	if (instanceObject.getCommunicationStatus(p)) inst.addProperty(p);
	if (instanceObject.getDetailedStatus(p)) inst.addProperty(p);
	if (instanceObject.getOperatingStatus(p)) inst.addProperty(p);
	if (instanceObject.getPrimaryStatus(p)) inst.addProperty(p);
	if (className.equal("CIM_ManagedSystemElement")) return inst;
	
	//CIM_LogicalElement Properties
	if (className.equal("CIM_LogicalElement")) return inst;
	
	//CIM_EnabledLogicalElement Properties
	if (instanceObject.getEnabledState(p)) inst.addProperty(p);
	if (instanceObject.getOtherEnabledState(p)) inst.addProperty(p);
	if (instanceObject.getRequestedState(p)) inst.addProperty(p);
	if (instanceObject.getEnabledDefault(p)) inst.addProperty(p);
	if (instanceObject.getTimeOfLastStateChange(p)) inst.addProperty(p);
	if (instanceObject.getAvailableRequestedStates(p)) inst.addProperty(p);
	if (instanceObject.getTransitioningToState(p)) inst.addProperty(p);
	if (className.equal("CIM_EnabledLogicalElement")) return inst;
	
	//CIM_Service Properties
	if (instanceObject.getSystemCreationClassName(p)) inst.addProperty(p);
	if (instanceObject.getSystemName(p)) inst.addProperty(p);
	if (instanceObject.getCreationClassName(p)) inst.addProperty(p);
	if (instanceObject.getPrimaryOwnerName(p)) inst.addProperty(p);
	if (instanceObject.getPrimaryOwnerContact(p)) inst.addProperty(p);
	if (instanceObject.getStartMode(p)) inst.addProperty(p);
	if (instanceObject.getStarted(p)) inst.addProperty(p);
	if (instanceObject.getLoSID(p)) inst.addProperty(p);
	if (instanceObject.getLoSOrgID(p)) inst.addProperty(p);
	if (className.equal("CIM_Service")) return inst;
	
	//CIM_SecurityService Properties
	if (className.equal("CIM_SecurityService")) return inst;
	
	//CIM_AuthenticationService Properties
	if (className.equal("CIM_AuthenticationService")) return inst;
	
	//CIM_CredentialManagementService Properties
	if (className.equal("CIM_CredentialManagementService")) return inst;
	
	//UNIX_KeyBasedCredentialManagementService Properties
	if (className.equal("UNIX_KeyBasedCredentialManagementService")) return inst;
	
	//CIM_CertificateManagementService Properties
	

	return inst;
}

Array<CIMKeyBinding> UNIX_CertificateManagementServiceProvider::constructKeyBindings(const UNIX_CertificateManagementService& instanceObject) const
{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_SYSTEM_CREATION_CLASS_NAME,
		instanceObject.getSystemCreationClassName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_SYSTEM_NAME,
		instanceObject.getSystemName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_CREATION_CLASS_NAME,
		instanceObject.getCreationClassName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_NAME,
		instanceObject.getName(),
		CIMKeyBinding::STRING));


	return keys;
}

#define __invokeMethod_H
/*
================================================================================
NAME              : invokeMethod
DESCRIPTION       : invokeMethod for the current instance;
ASSUMPTIONS       : None
PRE-CONDITIONS    : 
POST-CONDITIONS   : 
NOTES             : 
================================================================================
*/

void UNIX_CertificateManagementServiceProvider::invokeMethod(
	const OperationContext& context,
	const CIMObjectPath& objectReference,
	const CIMName& methodName,
	const Array<CIMParamValue>& inParameters,
	MethodResultResponseHandler& handler)
{
	if (!objectReference.getClassName().equal("UNIX_CertificateManagementService") && !objectReference.getClassName().equal("CIM_CertificateManagementService")) {
		String classMessage;
		classMessage.append("UNIX_CertificateManagementService Provider");
		classMessage.append (" does not support class ");
		classMessage.append (objectReference.getClassName().getString());
		throw CIMNotSupportedException(classMessage);
	}


	handler.processing();
	// Make cimom handle invokeMethod request with input parameters.
	CIMObjectPath localReference = CIMObjectPath(
		String(""),
		CIMNamespaceName("root/cimv2"),
		objectReference.getClassName(),
		objectReference.getKeyBindings());
	
	if (methodName.equal("CreateCertificateSigningRequest")) {

		if (inParameters.size() != 11)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking CreateCertificateSigningRequest method.
		Uint32 invokeCreateCertificateSigningRequestReturnValue;

		String inSubject;
		String inAltSubject;
		Uint16 inPublicKeyAlgorithm;
		Uint16 inPublicKeySize;
		CIMInstance inPublicPrivateKeyPair;
		Array<String> inExtendedKeyUsageValue;
		Array<Uint16> inExtendedKeyUsageType;
		Uint16 inSignatureAlgorithm;
		Uint16 inOutputFormat;
		CIMInstance inJob;
		Array<String> inCSR;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "Subject"))
			{
				p.getValue().get(inSubject);
			}
			if (String::equalNoCase(p.getParameterName(), "AltSubject"))
			{
				p.getValue().get(inAltSubject);
			}
			if (String::equalNoCase(p.getParameterName(), "PublicKeyAlgorithm"))
			{
				p.getValue().get(inPublicKeyAlgorithm);
			}
			if (String::equalNoCase(p.getParameterName(), "PublicKeySize"))
			{
				p.getValue().get(inPublicKeySize);
			}
			if (String::equalNoCase(p.getParameterName(), "PublicPrivateKeyPair"))
			{
				p.getValue().get(inPublicPrivateKeyPair);
			}
			if (String::equalNoCase(p.getParameterName(), "ExtendedKeyUsageValue"))
			{
				p.getValue().get(inExtendedKeyUsageValue);
			}
			if (String::equalNoCase(p.getParameterName(), "ExtendedKeyUsageType"))
			{
				p.getValue().get(inExtendedKeyUsageType);
			}
			if (String::equalNoCase(p.getParameterName(), "SignatureAlgorithm"))
			{
				p.getValue().get(inSignatureAlgorithm);
			}
			if (String::equalNoCase(p.getParameterName(), "OutputFormat"))
			{
				p.getValue().get(inOutputFormat);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
			if (String::equalNoCase(p.getParameterName(), "CSR"))
			{
				p.getValue().get(inCSR);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeCreateCertificateSigningRequestReturnValue = _p.invokeCreateCertificateSigningRequest(

			inSubject,
			inAltSubject,
			inPublicKeyAlgorithm,
			inPublicKeySize,
			inPublicPrivateKeyPair,
			inExtendedKeyUsageValue,
			inExtendedKeyUsageType,
			inSignatureAlgorithm,
			inOutputFormat,
			inJob,
			inCSR
		);
		_p.finalize();
		handler.deliver(invokeCreateCertificateSigningRequestReturnValue);

	}
	else if (methodName.equal("CreateSelfSignedCertificate")) {

		if (inParameters.size() != 11)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking CreateSelfSignedCertificate method.
		Uint32 invokeCreateSelfSignedCertificateReturnValue;

		String inSubject;
		String inAltSubject;
		Uint16 inPublicKeyAlgorithm;
		Uint16 inPublicKeySize;
		CIMInstance inPublicPrivateKeyPair;
		CIMInstance inKeystore;
		CIMInstance inCredentialContext;
		Uint16 inUsage;
		Uint16 inSignatureAlgorithm;
		CIMInstance inJob;
		CIMInstance inSelfSignedCertificate;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "Subject"))
			{
				p.getValue().get(inSubject);
			}
			if (String::equalNoCase(p.getParameterName(), "AltSubject"))
			{
				p.getValue().get(inAltSubject);
			}
			if (String::equalNoCase(p.getParameterName(), "PublicKeyAlgorithm"))
			{
				p.getValue().get(inPublicKeyAlgorithm);
			}
			if (String::equalNoCase(p.getParameterName(), "PublicKeySize"))
			{
				p.getValue().get(inPublicKeySize);
			}
			if (String::equalNoCase(p.getParameterName(), "PublicPrivateKeyPair"))
			{
				p.getValue().get(inPublicPrivateKeyPair);
			}
			if (String::equalNoCase(p.getParameterName(), "Keystore"))
			{
				p.getValue().get(inKeystore);
			}
			if (String::equalNoCase(p.getParameterName(), "CredentialContext"))
			{
				p.getValue().get(inCredentialContext);
			}
			if (String::equalNoCase(p.getParameterName(), "Usage"))
			{
				p.getValue().get(inUsage);
			}
			if (String::equalNoCase(p.getParameterName(), "SignatureAlgorithm"))
			{
				p.getValue().get(inSignatureAlgorithm);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
			if (String::equalNoCase(p.getParameterName(), "SelfSignedCertificate"))
			{
				p.getValue().get(inSelfSignedCertificate);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeCreateSelfSignedCertificateReturnValue = _p.invokeCreateSelfSignedCertificate(

			inSubject,
			inAltSubject,
			inPublicKeyAlgorithm,
			inPublicKeySize,
			inPublicPrivateKeyPair,
			inKeystore,
			inCredentialContext,
			inUsage,
			inSignatureAlgorithm,
			inJob,
			inSelfSignedCertificate
		);
		_p.finalize();
		handler.deliver(invokeCreateSelfSignedCertificateReturnValue);

	}
	else if (methodName.equal("ImportEncodedCertificates")) {

		if (inParameters.size() != 7)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking ImportEncodedCertificates method.
		Uint32 invokeImportEncodedCertificatesReturnValue;

		Array<String> inEncodedCertificates;
		Uint16 inFormat;
		CIMInstance inKeystore;
		CIMInstance inCredentialContext;
		Array<Uint16> inUsage;
		CIMInstance inJob;
		CIMInstance inNewCertificates;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "EncodedCertificates"))
			{
				p.getValue().get(inEncodedCertificates);
			}
			if (String::equalNoCase(p.getParameterName(), "Format"))
			{
				p.getValue().get(inFormat);
			}
			if (String::equalNoCase(p.getParameterName(), "Keystore"))
			{
				p.getValue().get(inKeystore);
			}
			if (String::equalNoCase(p.getParameterName(), "CredentialContext"))
			{
				p.getValue().get(inCredentialContext);
			}
			if (String::equalNoCase(p.getParameterName(), "Usage"))
			{
				p.getValue().get(inUsage);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
			if (String::equalNoCase(p.getParameterName(), "NewCertificates"))
			{
				p.getValue().get(inNewCertificates);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeImportEncodedCertificatesReturnValue = _p.invokeImportEncodedCertificates(

			inEncodedCertificates,
			inFormat,
			inKeystore,
			inCredentialContext,
			inUsage,
			inJob,
			inNewCertificates
		);
		_p.finalize();
		handler.deliver(invokeImportEncodedCertificatesReturnValue);

	}
	else if (methodName.equal("ImportCertificates")) {

		if (inParameters.size() != 6)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking ImportCertificates method.
		Uint32 invokeImportCertificatesReturnValue;

		Array<String> inInputCertificates;
		CIMInstance inKeystore;
		CIMInstance inCredentialContext;
		Array<Uint16> inUsage;
		CIMInstance inJob;
		CIMInstance inNewCertificates;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "InputCertificates"))
			{
				p.getValue().get(inInputCertificates);
			}
			if (String::equalNoCase(p.getParameterName(), "Keystore"))
			{
				p.getValue().get(inKeystore);
			}
			if (String::equalNoCase(p.getParameterName(), "CredentialContext"))
			{
				p.getValue().get(inCredentialContext);
			}
			if (String::equalNoCase(p.getParameterName(), "Usage"))
			{
				p.getValue().get(inUsage);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
			if (String::equalNoCase(p.getParameterName(), "NewCertificates"))
			{
				p.getValue().get(inNewCertificates);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeImportCertificatesReturnValue = _p.invokeImportCertificates(

			inInputCertificates,
			inKeystore,
			inCredentialContext,
			inUsage,
			inJob,
			inNewCertificates
		);
		_p.finalize();
		handler.deliver(invokeImportCertificatesReturnValue);

	}
	else if (methodName.equal("ExportEncodedCertificates")) {

		if (inParameters.size() != 4)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking ExportEncodedCertificates method.
		Uint32 invokeExportEncodedCertificatesReturnValue;

		CIMInstance inCertificatesToExport;
		Uint16 inFormat;
		CIMInstance inJob;
		Array<String> inEncodedCertificates;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "CertificatesToExport"))
			{
				p.getValue().get(inCertificatesToExport);
			}
			if (String::equalNoCase(p.getParameterName(), "Format"))
			{
				p.getValue().get(inFormat);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
			if (String::equalNoCase(p.getParameterName(), "EncodedCertificates"))
			{
				p.getValue().get(inEncodedCertificates);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeExportEncodedCertificatesReturnValue = _p.invokeExportEncodedCertificates(

			inCertificatesToExport,
			inFormat,
			inJob,
			inEncodedCertificates
		);
		_p.finalize();
		handler.deliver(invokeExportEncodedCertificatesReturnValue);

	}
	else if (methodName.equal("ApplyCRL")) {

		if (inParameters.size() != 6)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking ApplyCRL method.
		Uint32 invokeApplyCRLReturnValue;

		Array<String> inEncodedCRL;
		Uint16 inFormat;
		CIMInstance inKeystore;
		CIMInstance inCredentialContext;
		CIMInstance inJob;
		CIMInstance inAppliedCRL;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "EncodedCRL"))
			{
				p.getValue().get(inEncodedCRL);
			}
			if (String::equalNoCase(p.getParameterName(), "Format"))
			{
				p.getValue().get(inFormat);
			}
			if (String::equalNoCase(p.getParameterName(), "Keystore"))
			{
				p.getValue().get(inKeystore);
			}
			if (String::equalNoCase(p.getParameterName(), "CredentialContext"))
			{
				p.getValue().get(inCredentialContext);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
			if (String::equalNoCase(p.getParameterName(), "AppliedCRL"))
			{
				p.getValue().get(inAppliedCRL);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeApplyCRLReturnValue = _p.invokeApplyCRL(

			inEncodedCRL,
			inFormat,
			inKeystore,
			inCredentialContext,
			inJob,
			inAppliedCRL
		);
		_p.finalize();
		handler.deliver(invokeApplyCRLReturnValue);

	}
	else if (methodName.equal("ApplyDecodedCRL")) {

		if (inParameters.size() != 6)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking ApplyDecodedCRL method.
		Uint32 invokeApplyDecodedCRLReturnValue;

		String inIssuer;
		Array<String> inSerialNumbers;
		CIMInstance inKeystore;
		CIMInstance inCredentialContext;
		CIMInstance inJob;
		CIMInstance inAppliedCRL;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "Issuer"))
			{
				p.getValue().get(inIssuer);
			}
			if (String::equalNoCase(p.getParameterName(), "SerialNumbers"))
			{
				p.getValue().get(inSerialNumbers);
			}
			if (String::equalNoCase(p.getParameterName(), "Keystore"))
			{
				p.getValue().get(inKeystore);
			}
			if (String::equalNoCase(p.getParameterName(), "CredentialContext"))
			{
				p.getValue().get(inCredentialContext);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
			if (String::equalNoCase(p.getParameterName(), "AppliedCRL"))
			{
				p.getValue().get(inAppliedCRL);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeApplyDecodedCRLReturnValue = _p.invokeApplyDecodedCRL(

			inIssuer,
			inSerialNumbers,
			inKeystore,
			inCredentialContext,
			inJob,
			inAppliedCRL
		);
		_p.finalize();
		handler.deliver(invokeApplyDecodedCRLReturnValue);

	}
	else if (methodName.equal("ImportPublicPrivateKeyPair")) {

		if (inParameters.size() != 7)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking ImportPublicPrivateKeyPair method.
		Uint32 invokeImportPublicPrivateKeyPairReturnValue;

		Array<String> inPublicKey;
		Array<String> inPrivateKey;
		CIMInstance inKeystore;
		CIMInstance inCredentialContext;
		Uint16 inUsage;
		CIMInstance inJob;
		CIMInstance inPPKPCredential;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "PublicKey"))
			{
				p.getValue().get(inPublicKey);
			}
			if (String::equalNoCase(p.getParameterName(), "PrivateKey"))
			{
				p.getValue().get(inPrivateKey);
			}
			if (String::equalNoCase(p.getParameterName(), "Keystore"))
			{
				p.getValue().get(inKeystore);
			}
			if (String::equalNoCase(p.getParameterName(), "CredentialContext"))
			{
				p.getValue().get(inCredentialContext);
			}
			if (String::equalNoCase(p.getParameterName(), "Usage"))
			{
				p.getValue().get(inUsage);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
			if (String::equalNoCase(p.getParameterName(), "PPKPCredential"))
			{
				p.getValue().get(inPPKPCredential);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeImportPublicPrivateKeyPairReturnValue = _p.invokeImportPublicPrivateKeyPair(

			inPublicKey,
			inPrivateKey,
			inKeystore,
			inCredentialContext,
			inUsage,
			inJob,
			inPPKPCredential
		);
		_p.finalize();
		handler.deliver(invokeImportPublicPrivateKeyPairReturnValue);

	}
	else if (methodName.equal("CreateKeystore")) {

		if (inParameters.size() != 5)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking CreateKeystore method.
		Uint32 invokeCreateKeystoreReturnValue;

		String inKeystore;
		CIMInstance inOwningSystem;
		CIMInstance inKeystoreUtilizers;
		CIMInstance inJob;
		CIMInstance inNewKeystore;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "Keystore"))
			{
				p.getValue().get(inKeystore);
			}
			if (String::equalNoCase(p.getParameterName(), "OwningSystem"))
			{
				p.getValue().get(inOwningSystem);
			}
			if (String::equalNoCase(p.getParameterName(), "KeystoreUtilizers"))
			{
				p.getValue().get(inKeystoreUtilizers);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
			if (String::equalNoCase(p.getParameterName(), "NewKeystore"))
			{
				p.getValue().get(inNewKeystore);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeCreateKeystoreReturnValue = _p.invokeCreateKeystore(

			inKeystore,
			inOwningSystem,
			inKeystoreUtilizers,
			inJob,
			inNewKeystore
		);
		_p.finalize();
		handler.deliver(invokeCreateKeystoreReturnValue);

	}
	else if (methodName.equal("StartService")) {

		if (inParameters.size() != 0)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking StartService method.
		Uint32 invokeStartServiceReturnValue;

		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeStartServiceReturnValue = _p.invokeStartService();
		_p.finalize();
		handler.deliver(invokeStartServiceReturnValue);

	}
	else if (methodName.equal("StopService")) {

		if (inParameters.size() != 0)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking StopService method.
		Uint32 invokeStopServiceReturnValue;

		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeStopServiceReturnValue = _p.invokeStopService();
		_p.finalize();
		handler.deliver(invokeStopServiceReturnValue);

	}
	else if (methodName.equal("ChangeAffectedElementsAssignedSequence")) {

		if (inParameters.size() != 3)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking ChangeAffectedElementsAssignedSequence method.
		Uint32 invokeChangeAffectedElementsAssignedSequenceReturnValue;

		CIMInstance inManagedElements;
		Array<Uint16> inAssignedSequence;
		CIMInstance inJob;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "ManagedElements"))
			{
				p.getValue().get(inManagedElements);
			}
			if (String::equalNoCase(p.getParameterName(), "AssignedSequence"))
			{
				p.getValue().get(inAssignedSequence);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeChangeAffectedElementsAssignedSequenceReturnValue = _p.invokeChangeAffectedElementsAssignedSequence(

			inManagedElements,
			inAssignedSequence,
			inJob
		);
		_p.finalize();
		handler.deliver(invokeChangeAffectedElementsAssignedSequenceReturnValue);

	}
	else if (methodName.equal("RequestStateChange")) {

		if (inParameters.size() != 3)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking RequestStateChange method.
		Uint32 invokeRequestStateChangeReturnValue;

		Uint16 inRequestedState;
		CIMInstance inJob;
		CIMDateTime inTimeoutPeriod;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "RequestedState"))
			{
				p.getValue().get(inRequestedState);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
			if (String::equalNoCase(p.getParameterName(), "TimeoutPeriod"))
			{
				p.getValue().get(inTimeoutPeriod);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeRequestStateChangeReturnValue = _p.invokeRequestStateChange(

			inRequestedState,
			inJob,
			inTimeoutPeriod
		);
		_p.finalize();
		handler.deliver(invokeRequestStateChangeReturnValue);

	}
	else {
		String message;
		message.append("UNIX_CertificateManagementService");
		message.append (" does not support invokeMethod");
		throw CIMNotSupportedException(message);
	}
}


#define UNIX_PROVIDER UNIX_CertificateManagementServiceProvider
#define UNIX_PROVIDER_NAME "UNIX_CertificateManagementServiceProvider"
#define CLASS_IMPLEMENTATION UNIX_CertificateManagementService
#define CLASS_IMPLEMENTATION_NAME "UNIX_CertificateManagementService"
#define BASE_CLASS_NAME "CIM_CertificateManagementService"
#define NUMKEYS_CLASS_IMPLEMENTATION 4
#define CLASS_LOADABLE_BY_NAME 1


#include "UNIXProviderBase.hpp"

