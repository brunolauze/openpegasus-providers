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
2.6.0
*/


/* **** UMLPackagePath *** */
/*
CIM::User::Org
*/


/* **** Description *** */
/*
The Organization class is used to represent an organization such as a corporation or other autonomous entity. The class is defined so as to incorporate commonly-used LDAP attributes to permit implementations to easily derive this information from LDAP-accessible directories. This class's properties are a subset of a related class, OtherOrganizationInformation, which defines all the group properties and in array form for directory compatibility.
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

			UNIX_Organization:
				CreationClassName String
				Name String
				BusinessCategory String
				FacsimileTelephoneNumber String
				LocalityName String
				Mail String
				OrganizationName String
				PostalAddress String
				PostalCode String
				StateOrProvince String
				TelephoneNumber String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_OrganizationalEntity:

			UNIX_Organization:


*/

#ifndef __UNIX_ORGANIZATION_H
#define __UNIX_ORGANIZATION_H


#include "CIM_OrganizationalEntity.h"

#include "UNIX_OrganizationDeps.h"


#ifndef PROPERTY_CREATION_CLASS_NAME
#define PROPERTY_CREATION_CLASS_NAME \
					"CreationClassName"
#endif

#ifndef PROPERTY_NAME
#define PROPERTY_NAME \
					"Name"
#endif

#ifndef PROPERTY_BUSINESS_CATEGORY
#define PROPERTY_BUSINESS_CATEGORY \
					"BusinessCategory"
#endif

#ifndef PROPERTY_FACSIMILE_TELEPHONE_NUMBER
#define PROPERTY_FACSIMILE_TELEPHONE_NUMBER \
					"FacsimileTelephoneNumber"
#endif

#ifndef PROPERTY_LOCALITY_NAME
#define PROPERTY_LOCALITY_NAME \
					"LocalityName"
#endif

#ifndef PROPERTY_MAIL
#define PROPERTY_MAIL \
					"Mail"
#endif

#ifndef PROPERTY_ORGANIZATION_NAME
#define PROPERTY_ORGANIZATION_NAME \
					"OrganizationName"
#endif

#ifndef PROPERTY_POSTAL_ADDRESS
#define PROPERTY_POSTAL_ADDRESS \
					"PostalAddress"
#endif

#ifndef PROPERTY_POSTAL_CODE
#define PROPERTY_POSTAL_CODE \
					"PostalCode"
#endif

#ifndef PROPERTY_STATE_OR_PROVINCE
#define PROPERTY_STATE_OR_PROVINCE \
					"StateOrProvince"
#endif

#ifndef PROPERTY_TELEPHONE_NUMBER
#define PROPERTY_TELEPHONE_NUMBER \
					"TelephoneNumber"
#endif



class UNIX_Organization :
	public CIM_OrganizationalEntity
{
public:

	UNIX_Organization();
	~UNIX_Organization();

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
	virtual Boolean getBusinessCategory(CIMProperty&) const;
	virtual String getBusinessCategory() const;
	virtual void setBusinessCategory(String&);
	virtual Boolean getFacsimileTelephoneNumber(CIMProperty&) const;
	virtual String getFacsimileTelephoneNumber() const;
	virtual void setFacsimileTelephoneNumber(String&);
	virtual Boolean getLocalityName(CIMProperty&) const;
	virtual String getLocalityName() const;
	virtual void setLocalityName(String&);
	virtual Boolean getMail(CIMProperty&) const;
	virtual String getMail() const;
	virtual void setMail(String&);
	virtual Boolean getOrganizationName(CIMProperty&) const;
	virtual String getOrganizationName() const;
	virtual void setOrganizationName(String&);
	virtual Boolean getPostalAddress(CIMProperty&) const;
	virtual Array<String> getPostalAddress() const;
	virtual void setPostalAddress(Array<String>&);
	virtual Boolean getPostalCode(CIMProperty&) const;
	virtual String getPostalCode() const;
	virtual void setPostalCode(String&);
	virtual Boolean getStateOrProvince(CIMProperty&) const;
	virtual String getStateOrProvince() const;
	virtual void setStateOrProvince(String&);
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
	String _businessCategory;
	String _facsimileTelephoneNumber;
	String _localityName;
	String _mail;
	String _organizationName;
	Array<String> _postalAddress;
	String _postalCode;
	String _stateOrProvince;
	String _telephoneNumber;

#	include "UNIX_OrganizationPrivate.h"


};

#endif /* UNIX_ORGANIZATION */
