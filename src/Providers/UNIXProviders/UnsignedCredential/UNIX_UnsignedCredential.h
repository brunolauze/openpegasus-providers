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
A UnsignedCredential represents an unsigned public key credential. Services accept the public key as authentic because of a direct trust relationship, rather than via a third-party Certificate Authority.
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

			UNIX_UnsignedCredential:
				PeerIdentity String
				PeerIdentityType UInt16
				PublicKey String
				PublicKeyEncoding UInt16
				OtherPublicKeyEncoding String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Credential:

			UNIX_UnsignedCredential:


*/

#ifndef __UNIX_UNSIGNEDCREDENTIAL_H
#define __UNIX_UNSIGNEDCREDENTIAL_H


#include "CIM_Credential.h"

#include "UNIX_UnsignedCredentialDeps.h"


#ifndef PROPERTY_PEER_IDENTITY
#define PROPERTY_PEER_IDENTITY \
					"PeerIdentity"
#endif

#ifndef PROPERTY_PEER_IDENTITY_TYPE
#define PROPERTY_PEER_IDENTITY_TYPE \
					"PeerIdentityType"
#endif

#ifndef PROPERTY_PUBLIC_KEY
#define PROPERTY_PUBLIC_KEY \
					"PublicKey"
#endif

#ifndef PROPERTY_PUBLIC_KEY_ENCODING
#define PROPERTY_PUBLIC_KEY_ENCODING \
					"PublicKeyEncoding"
#endif

#ifndef PROPERTY_OTHER_PUBLIC_KEY_ENCODING
#define PROPERTY_OTHER_PUBLIC_KEY_ENCODING \
					"OtherPublicKeyEncoding"
#endif



class UNIX_UnsignedCredential :
	public CIM_Credential
{
public:

	UNIX_UnsignedCredential();
	~UNIX_UnsignedCredential();

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
	virtual Boolean getPeerIdentity(CIMProperty&) const;
	virtual String getPeerIdentity() const;
	virtual void setPeerIdentity(String&);
	virtual Boolean getPeerIdentityType(CIMProperty&) const;
	virtual Uint16 getPeerIdentityType() const;
	virtual void setPeerIdentityType(Uint16&);
	virtual Boolean getPublicKey(CIMProperty&) const;
	virtual Array<String> getPublicKey() const;
	virtual void setPublicKey(Array<String>&);
	virtual Boolean getPublicKeyEncoding(CIMProperty&) const;
	virtual Uint16 getPublicKeyEncoding() const;
	virtual void setPublicKeyEncoding(Uint16&);
	virtual Boolean getOtherPublicKeyEncoding(CIMProperty&) const;
	virtual String getOtherPublicKeyEncoding() const;
	virtual void setOtherPublicKeyEncoding(String&);


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
	String _peerIdentity;
	Uint16 _peerIdentityType;
	Array<String> _publicKey;
	Uint16 _publicKeyEncoding;
	String _otherPublicKeyEncoding;

#	include "UNIX_UnsignedCredentialPrivate.h"


};

#endif /* UNIX_UNSIGNEDCREDENTIAL */
