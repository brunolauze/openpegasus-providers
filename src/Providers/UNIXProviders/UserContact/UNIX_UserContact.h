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
2.33.0
*/


/* **** UMLPackagePath *** */
/*
CIM::User::Org
*/


/* **** Description *** */
/*
UserContact contains the details related to contacting a user. This information will be promoted to UserEntity in a later major release of CIM, but cannot be promoted at this time since UserEntity is abstract today, with no keys. Key and required properties cannot be added to a class in a minor version release since this breaks backward compatibility.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_OrganizationalEntity:

			CIM_UserEntity:

			UNIX_UserContact:
				CreationClassName String
				Name String
				GivenName String
				Surname String
				Mail String
				UserID String
				LocalityName String
				PostalAddress String
				StateOrProvince String
				PostalCode String
				TelephoneNumber String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_OrganizationalEntity:

			CIM_UserEntity:

			UNIX_UserContact:


*/

#ifndef __UNIX_USERCONTACT_H
#define __UNIX_USERCONTACT_H


#include "CIM_UserEntity.h"

#include "UNIX_UserContactDeps.h"


#ifndef PROPERTY_CREATION_CLASS_NAME
#define PROPERTY_CREATION_CLASS_NAME \
					"CreationClassName"
#endif

#ifndef PROPERTY_NAME
#define PROPERTY_NAME \
					"Name"
#endif

#ifndef PROPERTY_GIVEN_NAME
#define PROPERTY_GIVEN_NAME \
					"GivenName"
#endif

#ifndef PROPERTY_SURNAME
#define PROPERTY_SURNAME \
					"Surname"
#endif

#ifndef PROPERTY_MAIL
#define PROPERTY_MAIL \
					"Mail"
#endif

#ifndef PROPERTY_USER_ID
#define PROPERTY_USER_ID \
					"UserID"
#endif

#ifndef PROPERTY_LOCALITY_NAME
#define PROPERTY_LOCALITY_NAME \
					"LocalityName"
#endif

#ifndef PROPERTY_POSTAL_ADDRESS
#define PROPERTY_POSTAL_ADDRESS \
					"PostalAddress"
#endif

#ifndef PROPERTY_STATE_OR_PROVINCE
#define PROPERTY_STATE_OR_PROVINCE \
					"StateOrProvince"
#endif

#ifndef PROPERTY_POSTAL_CODE
#define PROPERTY_POSTAL_CODE \
					"PostalCode"
#endif

#ifndef PROPERTY_TELEPHONE_NUMBER
#define PROPERTY_TELEPHONE_NUMBER \
					"TelephoneNumber"
#endif



class UNIX_UserContact :
	public CIM_UserEntity
{
public:

	UNIX_UserContact();
	~UNIX_UserContact();

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
	virtual Boolean getCreationClassName(CIMProperty&) const;
	virtual String getCreationClassName() const;
	virtual void setCreationClassName(String&);
	virtual Boolean getName(CIMProperty&) const;
	virtual String getName() const;
	virtual void setName(String&);
	virtual Boolean getGivenName(CIMProperty&) const;
	virtual String getGivenName() const;
	virtual void setGivenName(String&);
	virtual Boolean getSurname(CIMProperty&) const;
	virtual String getSurname() const;
	virtual void setSurname(String&);
	virtual Boolean getMail(CIMProperty&) const;
	virtual String getMail() const;
	virtual void setMail(String&);
	virtual Boolean getUserID(CIMProperty&) const;
	virtual String getUserID() const;
	virtual void setUserID(String&);
	virtual Boolean getLocalityName(CIMProperty&) const;
	virtual String getLocalityName() const;
	virtual void setLocalityName(String&);
	virtual Boolean getPostalAddress(CIMProperty&) const;
	virtual Array<String> getPostalAddress() const;
	virtual void setPostalAddress(Array<String>&);
	virtual Boolean getStateOrProvince(CIMProperty&) const;
	virtual String getStateOrProvince() const;
	virtual void setStateOrProvince(String&);
	virtual Boolean getPostalCode(CIMProperty&) const;
	virtual String getPostalCode() const;
	virtual void setPostalCode(String&);
	virtual Boolean getTelephoneNumber(CIMProperty&) const;
	virtual String getTelephoneNumber() const;
	virtual void setTelephoneNumber(String&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	String _creationClassName;
	String _name;
	String _givenName;
	String _surname;
	String _mail;
	String _userID;
	String _localityName;
	Array<String> _postalAddress;
	String _stateOrProvince;
	String _postalCode;
	String _telephoneNumber;

#	include "UNIX_UserContactPrivate.h"


};

#endif /* UNIX_USERCONTACT */
