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
2.8.0
*/


/* **** UMLPackagePath *** */
/*
CIM::User::Org
*/


/* **** Description *** */
/*
The Person class is used to represent people, and holds their white and yellow pages data. The class is defined so as to incorporate commonly-used LDAP attributes to permit implementations to easily derive this information from LDAP-accessible directories. This class's properties are a subset of a related class, OtherPersonInformation, which defines all the group properties and in array form for directory compatibility.
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

			UNIX_Person:
				BusinessCategory String
				CommonName String
				EmployeeNumber String
				EmployeeType String
				FacsimileTelephoneNumber String
				HomePhone String
				HomePostalAddress String
				JPEGPhoto String
				Manager String
				Mobile String
				OU String
				Pager String
				PreferredLanguage String
				Secretary String
				Title String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_OrganizationalEntity:

			CIM_UserEntity:

			UNIX_UserContact:

			UNIX_Person:


*/

#ifndef __UNIX_PERSON_H
#define __UNIX_PERSON_H


#include <UserContact/UNIX_UserContact.h>

#include "UNIX_PersonDeps.h"


#ifndef PROPERTY_BUSINESS_CATEGORY
#define PROPERTY_BUSINESS_CATEGORY \
					"BusinessCategory"
#endif

#ifndef PROPERTY_COMMON_NAME
#define PROPERTY_COMMON_NAME \
					"CommonName"
#endif

#ifndef PROPERTY_EMPLOYEE_NUMBER
#define PROPERTY_EMPLOYEE_NUMBER \
					"EmployeeNumber"
#endif

#ifndef PROPERTY_EMPLOYEE_TYPE
#define PROPERTY_EMPLOYEE_TYPE \
					"EmployeeType"
#endif

#ifndef PROPERTY_FACSIMILE_TELEPHONE_NUMBER
#define PROPERTY_FACSIMILE_TELEPHONE_NUMBER \
					"FacsimileTelephoneNumber"
#endif

#ifndef PROPERTY_HOME_PHONE
#define PROPERTY_HOME_PHONE \
					"HomePhone"
#endif

#ifndef PROPERTY_HOME_POSTAL_ADDRESS
#define PROPERTY_HOME_POSTAL_ADDRESS \
					"HomePostalAddress"
#endif

#ifndef PROPERTY_J_P_E_G_PHOTO
#define PROPERTY_J_P_E_G_PHOTO \
					"JPEGPhoto"
#endif

#ifndef PROPERTY_MANAGER
#define PROPERTY_MANAGER \
					"Manager"
#endif

#ifndef PROPERTY_MOBILE
#define PROPERTY_MOBILE \
					"Mobile"
#endif

#ifndef PROPERTY_OU
#define PROPERTY_OU \
					"OU"
#endif

#ifndef PROPERTY_PAGER
#define PROPERTY_PAGER \
					"Pager"
#endif

#ifndef PROPERTY_PREFERRED_LANGUAGE
#define PROPERTY_PREFERRED_LANGUAGE \
					"PreferredLanguage"
#endif

#ifndef PROPERTY_SECRETARY
#define PROPERTY_SECRETARY \
					"Secretary"
#endif

#ifndef PROPERTY_TITLE
#define PROPERTY_TITLE \
					"Title"
#endif



class UNIX_Person :
	public UNIX_UserContact
{
public:

	UNIX_Person();
	~UNIX_Person();

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
	virtual Boolean getBusinessCategory(CIMProperty&) const;
	virtual String getBusinessCategory() const;
	virtual void setBusinessCategory(String&);
	virtual Boolean getCommonName(CIMProperty&) const;
	virtual String getCommonName() const;
	virtual void setCommonName(String&);
	virtual Boolean getEmployeeNumber(CIMProperty&) const;
	virtual String getEmployeeNumber() const;
	virtual void setEmployeeNumber(String&);
	virtual Boolean getEmployeeType(CIMProperty&) const;
	virtual String getEmployeeType() const;
	virtual void setEmployeeType(String&);
	virtual Boolean getFacsimileTelephoneNumber(CIMProperty&) const;
	virtual String getFacsimileTelephoneNumber() const;
	virtual void setFacsimileTelephoneNumber(String&);
	virtual Boolean getHomePhone(CIMProperty&) const;
	virtual String getHomePhone() const;
	virtual void setHomePhone(String&);
	virtual Boolean getHomePostalAddress(CIMProperty&) const;
	virtual Array<String> getHomePostalAddress() const;
	virtual void setHomePostalAddress(Array<String>&);
	virtual Boolean getJPEGPhoto(CIMProperty&) const;
	virtual String getJPEGPhoto() const;
	virtual void setJPEGPhoto(String&);
	virtual Boolean getManager(CIMProperty&) const;
	virtual String getManager() const;
	virtual void setManager(String&);
	virtual Boolean getMobile(CIMProperty&) const;
	virtual String getMobile() const;
	virtual void setMobile(String&);
	virtual Boolean getOU(CIMProperty&) const;
	virtual String getOU() const;
	virtual void setOU(String&);
	virtual Boolean getPager(CIMProperty&) const;
	virtual String getPager() const;
	virtual void setPager(String&);
	virtual Boolean getPreferredLanguage(CIMProperty&) const;
	virtual String getPreferredLanguage() const;
	virtual void setPreferredLanguage(String&);
	virtual Boolean getSecretary(CIMProperty&) const;
	virtual String getSecretary() const;
	virtual void setSecretary(String&);
	virtual Boolean getTitle(CIMProperty&) const;
	virtual String getTitle() const;
	virtual void setTitle(String&);


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
	String _businessCategory;
	String _commonName;
	String _employeeNumber;
	String _employeeType;
	String _facsimileTelephoneNumber;
	String _homePhone;
	Array<String> _homePostalAddress;
	String _jPEGPhoto;
	String _manager;
	String _mobile;
	String _oU;
	String _pager;
	String _preferredLanguage;
	String _secretary;
	String _title;

#	include "UNIX_PersonPrivate.h"


};

#endif /* UNIX_PERSON */
