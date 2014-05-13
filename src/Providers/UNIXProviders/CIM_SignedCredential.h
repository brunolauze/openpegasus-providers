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


/* **** UMLPackagePath *** */
/*
CIM::User::PublicKey
*/


/* **** Description *** */
/*
A SignedCredential is a credential that is cryptographically signed by a trusted Certificate Authority (CA) or the owner of the credential itself.
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


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Credential:

			CIM_SignedCredential:


*/

#ifndef __CIM_SIGNEDCREDENTIAL_H
#define __CIM_SIGNEDCREDENTIAL_H


#include "CIM_Credential.h"


#ifndef PROPERTY_ISSUER_NAME
#define PROPERTY_ISSUER_NAME \
					"IssuerName"
#endif

#ifndef PROPERTY_SIGNATURE
#define PROPERTY_SIGNATURE \
					"Signature"
#endif

#ifndef PROPERTY_SIGNATURE_ALGORITHM
#define PROPERTY_SIGNATURE_ALGORITHM \
					"SignatureAlgorithm"
#endif

#ifndef PROPERTY_OTHER_SIGNATURE_ALGORITHM
#define PROPERTY_OTHER_SIGNATURE_ALGORITHM \
					"OtherSignatureAlgorithm"
#endif

#ifndef PROPERTY_SIGNATURE_ALGORITHM_O_ID
#define PROPERTY_SIGNATURE_ALGORITHM_O_ID \
					"SignatureAlgorithmOID"
#endif



class CIM_SignedCredential :
	public CIM_Credential
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

	virtual Boolean getInstanceID(CIMProperty&) const=0;
	virtual String getInstanceID() const=0;
	virtual void setInstanceID(String&)=0;
	virtual Boolean getIssuerName(CIMProperty&) const=0;
	virtual String getIssuerName() const=0;
	virtual void setIssuerName(String&)=0;
	virtual Boolean getSignature(CIMProperty&) const=0;
	virtual Array<Uint8> getSignature() const=0;
	virtual void setSignature(Array<Uint8>&)=0;
	virtual Boolean getSignatureAlgorithm(CIMProperty&) const=0;
	virtual Uint16 getSignatureAlgorithm() const=0;
	virtual void setSignatureAlgorithm(Uint16&)=0;
	virtual Boolean getOtherSignatureAlgorithm(CIMProperty&) const=0;
	virtual String getOtherSignatureAlgorithm() const=0;
	virtual void setOtherSignatureAlgorithm(String&)=0;
	virtual Boolean getSignatureAlgorithmOID(CIMProperty&) const=0;
	virtual String getSignatureAlgorithmOID() const=0;
	virtual void setSignatureAlgorithmOID(String&)=0;


private:

};

#endif /* CIM_SIGNEDCREDENTIAL */
