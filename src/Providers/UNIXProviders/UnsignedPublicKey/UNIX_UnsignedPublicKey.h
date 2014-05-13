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


/* **** Deprecated *** */
/*
CIM_UnsignedCredential
*/


/* **** Version *** */
/*
2.16.0
*/


/* **** UMLPackagePath *** */
/*
CIM::User::PublicKey
*/


/* **** Description *** */
/*
A CIM_UnsignedPublicKey represents an unsigned public key credential. Services accept the public key as authentic because of a direct trust relationship, rather than via a third-party Certificate Authority.
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

			UNIX_UnsignedPublicKey:
				SystemCreationClassName String
				SystemName String
				ServiceCreationClassName String
				ServiceName String
				PeerIdentity String
				PeerIdentityType UInt16
				PublicKey UInt8


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Credential:

			UNIX_UnsignedPublicKey:


*/

#ifndef __UNIX_UNSIGNEDPUBLICKEY_H
#define __UNIX_UNSIGNEDPUBLICKEY_H


#include "CIM_Credential.h"

#include "UNIX_UnsignedPublicKeyDeps.h"


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



class UNIX_UnsignedPublicKey :
	public CIM_Credential
{
public:

	UNIX_UnsignedPublicKey();
	~UNIX_UnsignedPublicKey();

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
	virtual Boolean getPeerIdentity(CIMProperty&) const;
	virtual String getPeerIdentity() const;
	virtual void setPeerIdentity(String&);
	virtual Boolean getPeerIdentityType(CIMProperty&) const;
	virtual Uint16 getPeerIdentityType() const;
	virtual void setPeerIdentityType(Uint16&);
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
	String _systemCreationClassName;
	String _systemName;
	String _serviceCreationClassName;
	String _serviceName;
	String _peerIdentity;
	Uint16 _peerIdentityType;
	Array<Uint8> _publicKey;

#	include "UNIX_UnsignedPublicKeyPrivate.h"


};

#endif /* UNIX_UNSIGNEDPUBLICKEY */
