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


/* **** Experimental *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.17.1
*/


/* **** UMLPackagePath *** */
/*
CIM::User::Identity
*/


/* **** Description *** */
/*
An instance of RemoteIdentity is an Identity that should be used to provide a persistent representation of a security principal for which authoritative information required for mapping to users or groups is not otherwise modeled.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_Identity:
				CurrentlyAuthenticated Boolean

			UNIX_RemoteIdentity:
				Name UInt8
				NameFormat UInt16
				OtherNameFormat String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Identity:

			UNIX_RemoteIdentity:


*/

#ifndef __UNIX_REMOTEIDENTITY_H
#define __UNIX_REMOTEIDENTITY_H


#include "CIM_Identity.h"

#include "UNIX_RemoteIdentityDeps.h"


#ifndef PROPERTY_NAME
#define PROPERTY_NAME \
					"Name"
#endif

#ifndef PROPERTY_NAME_FORMAT
#define PROPERTY_NAME_FORMAT \
					"NameFormat"
#endif

#ifndef PROPERTY_OTHER_NAME_FORMAT
#define PROPERTY_OTHER_NAME_FORMAT \
					"OtherNameFormat"
#endif



class UNIX_RemoteIdentity :
	public CIM_Identity
{
public:

	UNIX_RemoteIdentity();
	~UNIX_RemoteIdentity();

	virtual Boolean initialize();
	virtual Boolean load(int&);
	virtual Boolean loadByName(const String);
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
	virtual Boolean getCurrentlyAuthenticated(CIMProperty&) const;
	virtual Boolean getCurrentlyAuthenticated() const;
	virtual void setCurrentlyAuthenticated(Boolean&);
	virtual Boolean getName(CIMProperty&) const;
	virtual Array<Uint8> getName() const;
	virtual void setName(Array<Uint8>&);
	virtual Boolean getNameFormat(CIMProperty&) const;
	virtual Uint16 getNameFormat() const;
	virtual void setNameFormat(Uint16&);
	virtual Boolean getOtherNameFormat(CIMProperty&) const;
	virtual String getOtherNameFormat() const;
	virtual void setOtherNameFormat(String&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	Boolean _currentlyAuthenticated;
	Array<Uint8> _name;
	Uint16 _nameFormat;
	String _otherNameFormat;

#	include "UNIX_RemoteIdentityPrivate.h"


};

#endif /* UNIX_REMOTEIDENTITY */
