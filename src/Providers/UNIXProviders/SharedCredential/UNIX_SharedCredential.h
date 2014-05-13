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
2.27.0
*/


/* **** UMLPackagePath *** */
/*
CIM::User::SharedCredential
*/


/* **** Description *** */
/*
SharedCredential is a secret (such as a password or the response to a challenge question) that is shared between a principal and a particular SharedCredential security service. Secrets may be in the form of a password used for initial authentication, or as with a session key, used as part of a message to verify the originator of the message. It is important to note that SharedCredential is not just a password, but rather is the password used with a particular security service.
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

			UNIX_SharedCredential:
				RemoteID String
				Secret String
				Algorithm String
				Protocol String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Credential:

			UNIX_SharedCredential:


*/

#ifndef __UNIX_SHAREDCREDENTIAL_H
#define __UNIX_SHAREDCREDENTIAL_H


#include "CIM_Credential.h"

#include "UNIX_SharedCredentialDeps.h"


#ifndef PROPERTY_REMOTE_ID
#define PROPERTY_REMOTE_ID \
					"RemoteID"
#endif

#ifndef PROPERTY_SECRET
#define PROPERTY_SECRET \
					"Secret"
#endif

#ifndef PROPERTY_ALGORITHM
#define PROPERTY_ALGORITHM \
					"Algorithm"
#endif

#ifndef PROPERTY_PROTOCOL
#define PROPERTY_PROTOCOL \
					"Protocol"
#endif



class UNIX_SharedCredential :
	public CIM_Credential
{
public:

	UNIX_SharedCredential();
	~UNIX_SharedCredential();

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
	virtual Boolean getRemoteID(CIMProperty&) const;
	virtual String getRemoteID() const;
	virtual void setRemoteID(String&);
	virtual Boolean getSecret(CIMProperty&) const;
	virtual String getSecret() const;
	virtual void setSecret(String&);
	virtual Boolean getAlgorithm(CIMProperty&) const;
	virtual String getAlgorithm() const;
	virtual void setAlgorithm(String&);
	virtual Boolean getProtocol(CIMProperty&) const;
	virtual String getProtocol() const;
	virtual void setProtocol(String&);


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
	String _remoteID;
	String _secret;
	String _algorithm;
	String _protocol;

#	include "UNIX_SharedCredentialPrivate.h"


};

#endif /* UNIX_SHAREDCREDENTIAL */
