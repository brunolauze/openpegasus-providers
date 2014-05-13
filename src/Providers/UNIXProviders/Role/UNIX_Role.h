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
2.18.0
*/


/* **** UMLPackagePath *** */
/*
CIM::User::Role
*/


/* **** Description *** */
/*
The Role object class is used to represent a position or set of responsibilities within an organization, organizational unit or other scope, and MAY be filled by a person or persons (or non-human entities represented by ManagedSystemElement subclasses) - i.e., the 'role occupants'. The latter MAY be explicitly associated to a Role, by associating Identities using MemberOfCollection. The 'position or set of responsibilities' of a Role are represented as a set of rights defined by instances of the Privilege class, and are also associated to the Role via MemberOfCollection. If Identities are not explicitly associated, instances of AuthorizationRule MUST be associated with a Role using AuthorizationRuleAppliesToRole. The rule defines how subject entities are authorized for a Role and to which target entities the Role applies. 

The Role class is defined so as to incorporate commonly-used LDAP attributes to permit implementations to easily derive this information from LDAP-accessible directories. This class's properties are a subset of a related class, OtherRoleInformation, which defines all the group properties and uses arrays for directory compatibility.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_Collection:

			UNIX_Role:
				CreationClassName String
				Name String
				BusinessCategory String
				CommonName String
				RoleCharacteristics UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Collection:

			UNIX_Role:


*/

#ifndef __UNIX_ROLE_H
#define __UNIX_ROLE_H


#include "CIM_Collection.h"

#include "UNIX_RoleDeps.h"


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

#ifndef PROPERTY_COMMON_NAME
#define PROPERTY_COMMON_NAME \
					"CommonName"
#endif

#ifndef PROPERTY_ROLE_CHARACTERISTICS
#define PROPERTY_ROLE_CHARACTERISTICS \
					"RoleCharacteristics"
#endif



class UNIX_Role :
	public CIM_Collection
{
public:

	UNIX_Role();
	~UNIX_Role();

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
	virtual Boolean getCommonName(CIMProperty&) const;
	virtual String getCommonName() const;
	virtual void setCommonName(String&);
	virtual Boolean getRoleCharacteristics(CIMProperty&) const;
	virtual Array<Uint16> getRoleCharacteristics() const;
	virtual void setRoleCharacteristics(Array<Uint16>&);


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
	String _commonName;
	Array<Uint16> _roleCharacteristics;

#	include "UNIX_RolePrivate.h"


};

#endif /* UNIX_ROLE */
