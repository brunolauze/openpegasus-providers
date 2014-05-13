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
CIM::User::Kerberos
*/


/* **** Description *** */
/*
A CIM_KerberosCredential represents a credential issued by a particular Kerberos Key Distribution Center (KDC) to establish an identity, as the result of a successful authentication process. There are two types of tickets that a KDC may issue - a TicketGranting ticket, which is used to protect and authenticate communications between an entity and the KDC, and a Session ticket, which the KDC issues to two entities to allow them to communicate with each other.
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

			UNIX_KerberosCredential:
				AccessesService String
				RemoteID String
				TicketType UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Credential:

			UNIX_KerberosCredential:


*/

#ifndef __UNIX_KERBEROSCREDENTIAL_H
#define __UNIX_KERBEROSCREDENTIAL_H


#include "CIM_Credential.h"

#include "UNIX_KerberosCredentialDeps.h"


#ifndef PROPERTY_ACCESSES_SERVICE
#define PROPERTY_ACCESSES_SERVICE \
					"AccessesService"
#endif

#ifndef PROPERTY_REMOTE_ID
#define PROPERTY_REMOTE_ID \
					"RemoteID"
#endif

#ifndef PROPERTY_TICKET_TYPE
#define PROPERTY_TICKET_TYPE \
					"TicketType"
#endif



class UNIX_KerberosCredential :
	public CIM_Credential
{
public:

	UNIX_KerberosCredential();
	~UNIX_KerberosCredential();

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
	virtual Boolean getAccessesService(CIMProperty&) const;
	virtual String getAccessesService() const;
	virtual void setAccessesService(String&);
	virtual Boolean getRemoteID(CIMProperty&) const;
	virtual String getRemoteID() const;
	virtual void setRemoteID(String&);
	virtual Boolean getTicketType(CIMProperty&) const;
	virtual Uint16 getTicketType() const;
	virtual void setTicketType(Uint16&);


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
	String _accessesService;
	String _remoteID;
	Uint16 _ticketType;

#	include "UNIX_KerberosCredentialPrivate.h"


};

#endif /* UNIX_KERBEROSCREDENTIAL */
