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
CIM_Identity
*/


/* **** Version *** */
/*
2.8.0
*/


/* **** UMLPackagePath *** */
/*
CIM::User::UsersAccess
*/


/* **** Description *** */
/*
The UsersAccess object class is used to specify a 'user' that is permitted access to resources. The ManagedElement that has access to the resources (represented in the model using the ElementAsUser association) may be a person, a service, a service access point or any collection thereof. 

This class is deprecated in lieu of the simpler CIM_Identity abstraction. The UsersAccess class combines credential requirements (in the form of biometric requirements) with the concepts of organizational information (via its position in the inheritance hierarchy), and identity management. These concepts need to be separated to be better understood and managed - hence, the deprecation.
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

			UNIX_UsersAccess:
				CreationClassName String
				Name String
				ElementID String
				Biometric UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_OrganizationalEntity:

			CIM_UserEntity:

			UNIX_UsersAccess:


*/

#ifndef __UNIX_USERSACCESS_H
#define __UNIX_USERSACCESS_H


#include "CIM_UserEntity.h"

#include "UNIX_UsersAccessDeps.h"


#ifndef PROPERTY_CREATION_CLASS_NAME
#define PROPERTY_CREATION_CLASS_NAME \
					"CreationClassName"
#endif

#ifndef PROPERTY_NAME
#define PROPERTY_NAME \
					"Name"
#endif

#ifndef PROPERTY_ELEMENT_ID
#define PROPERTY_ELEMENT_ID \
					"ElementID"
#endif

#ifndef PROPERTY_BIOMETRIC
#define PROPERTY_BIOMETRIC \
					"Biometric"
#endif



class UNIX_UsersAccess :
	public CIM_UserEntity
{
public:

	UNIX_UsersAccess();
	~UNIX_UsersAccess();

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
	virtual Boolean getElementID(CIMProperty&) const;
	virtual String getElementID() const;
	virtual void setElementID(String&);
	virtual Boolean getBiometric(CIMProperty&) const;
	virtual Array<Uint16> getBiometric() const;
	virtual void setBiometric(Array<Uint16>&);


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
	String _elementID;
	Array<Uint16> _biometric;

#	include "UNIX_UsersAccessPrivate.h"


};

#endif /* UNIX_USERSACCESS */
