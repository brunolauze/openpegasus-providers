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
CIM::User::SharedSecret
*/


/* **** Description *** */
/*
CIM_NamedCredential indirectly represents a shared secret credential. The local identity, IKEIdentity, and the remote peer identity share the secret that is named by the SharedSecretName. The SharedSecretName is used by the SharedSecretService to reference the secret.
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

			UNIX_NamedCredential:
				LocalIdentity String
				LocalIdentityType UInt16
				PeerIdentity String
				PeerIdentityType UInt16
				SharedSecretName String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Credential:

			UNIX_NamedCredential:


*/

#ifndef __UNIX_NAMEDCREDENTIAL_H
#define __UNIX_NAMEDCREDENTIAL_H


#include "CIM_Credential.h"

#include "UNIX_NamedCredentialDeps.h"


#ifndef PROPERTY_LOCAL_IDENTITY
#define PROPERTY_LOCAL_IDENTITY \
					"LocalIdentity"
#endif

#ifndef PROPERTY_LOCAL_IDENTITY_TYPE
#define PROPERTY_LOCAL_IDENTITY_TYPE \
					"LocalIdentityType"
#endif

#ifndef PROPERTY_PEER_IDENTITY
#define PROPERTY_PEER_IDENTITY \
					"PeerIdentity"
#endif

#ifndef PROPERTY_PEER_IDENTITY_TYPE
#define PROPERTY_PEER_IDENTITY_TYPE \
					"PeerIdentityType"
#endif

#ifndef PROPERTY_SHARED_SECRET_NAME
#define PROPERTY_SHARED_SECRET_NAME \
					"SharedSecretName"
#endif



class UNIX_NamedCredential :
	public CIM_Credential
{
public:

	UNIX_NamedCredential();
	~UNIX_NamedCredential();

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
	virtual Boolean getLocalIdentity(CIMProperty&) const;
	virtual String getLocalIdentity() const;
	virtual void setLocalIdentity(String&);
	virtual Boolean getLocalIdentityType(CIMProperty&) const;
	virtual Uint16 getLocalIdentityType() const;
	virtual void setLocalIdentityType(Uint16&);
	virtual Boolean getPeerIdentity(CIMProperty&) const;
	virtual String getPeerIdentity() const;
	virtual void setPeerIdentity(String&);
	virtual Boolean getPeerIdentityType(CIMProperty&) const;
	virtual Uint16 getPeerIdentityType() const;
	virtual void setPeerIdentityType(Uint16&);
	virtual Boolean getSharedSecretName(CIMProperty&) const;
	virtual String getSharedSecretName() const;
	virtual void setSharedSecretName(String&);


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
	String _localIdentity;
	Uint16 _localIdentityType;
	String _peerIdentity;
	Uint16 _peerIdentityType;
	String _sharedSecretName;

#	include "UNIX_NamedCredentialPrivate.h"


};

#endif /* UNIX_NAMEDCREDENTIAL */
