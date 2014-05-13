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
CIM::User::Group
*/


/* **** Description *** */
/*
The OtherGroupInformation class provides additional information about an associated Group instance. This class is defined so as to incorporate commonly-used LDAP attributes to permit implementations to easily derive this information from LDAP-accessible directories.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			UNIX_OtherGroupInformation:
				CreationClassName String
				Name String
				ObjectClass String
				BusinessCategory String
				CommonName String
				Descriptions String
				OrganizationName String
				OU String
				Owner String
				SeeAlso String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			UNIX_OtherGroupInformation:


*/

#ifndef __UNIX_OTHERGROUPINFORMATION_H
#define __UNIX_OTHERGROUPINFORMATION_H


#include "CIM_ManagedElement.h"

#include "UNIX_OtherGroupInformationDeps.h"


#ifndef PROPERTY_CREATION_CLASS_NAME
#define PROPERTY_CREATION_CLASS_NAME \
					"CreationClassName"
#endif

#ifndef PROPERTY_NAME
#define PROPERTY_NAME \
					"Name"
#endif

#ifndef PROPERTY_OBJECT_CLASS
#define PROPERTY_OBJECT_CLASS \
					"ObjectClass"
#endif

#ifndef PROPERTY_BUSINESS_CATEGORY
#define PROPERTY_BUSINESS_CATEGORY \
					"BusinessCategory"
#endif

#ifndef PROPERTY_COMMON_NAME
#define PROPERTY_COMMON_NAME \
					"CommonName"
#endif

#ifndef PROPERTY_DESCRIPTIONS
#define PROPERTY_DESCRIPTIONS \
					"Descriptions"
#endif

#ifndef PROPERTY_ORGANIZATION_NAME
#define PROPERTY_ORGANIZATION_NAME \
					"OrganizationName"
#endif

#ifndef PROPERTY_OU
#define PROPERTY_OU \
					"OU"
#endif

#ifndef PROPERTY_OWNER
#define PROPERTY_OWNER \
					"Owner"
#endif

#ifndef PROPERTY_SEE_ALSO
#define PROPERTY_SEE_ALSO \
					"SeeAlso"
#endif



class UNIX_OtherGroupInformation :
	public CIM_ManagedElement
{
public:

	UNIX_OtherGroupInformation();
	~UNIX_OtherGroupInformation();

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
	virtual Boolean getObjectClass(CIMProperty&) const;
	virtual Array<String> getObjectClass() const;
	virtual void setObjectClass(Array<String>&);
	virtual Boolean getBusinessCategory(CIMProperty&) const;
	virtual Array<String> getBusinessCategory() const;
	virtual void setBusinessCategory(Array<String>&);
	virtual Boolean getCommonName(CIMProperty&) const;
	virtual Array<String> getCommonName() const;
	virtual void setCommonName(Array<String>&);
	virtual Boolean getDescriptions(CIMProperty&) const;
	virtual Array<String> getDescriptions() const;
	virtual void setDescriptions(Array<String>&);
	virtual Boolean getOrganizationName(CIMProperty&) const;
	virtual Array<String> getOrganizationName() const;
	virtual void setOrganizationName(Array<String>&);
	virtual Boolean getOU(CIMProperty&) const;
	virtual Array<String> getOU() const;
	virtual void setOU(Array<String>&);
	virtual Boolean getOwner(CIMProperty&) const;
	virtual Array<String> getOwner() const;
	virtual void setOwner(Array<String>&);
	virtual Boolean getSeeAlso(CIMProperty&) const;
	virtual Array<String> getSeeAlso() const;
	virtual void setSeeAlso(Array<String>&);


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
	Array<String> _objectClass;
	Array<String> _businessCategory;
	Array<String> _commonName;
	Array<String> _descriptions;
	Array<String> _organizationName;
	Array<String> _oU;
	Array<String> _owner;
	Array<String> _seeAlso;

#	include "UNIX_OtherGroupInformationPrivate.h"


};

#endif /* UNIX_OTHERGROUPINFORMATION */
