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
CIM::User::Privilege
*/


/* **** Description *** */
/*
Privilege is the base class for all types of activities which are granted or denied to a Role or an Identity. AuthorizedPrivilege is a subclass defining static renderings of authorization policy rules. The association of Roles and Identities to AuthorizedPrivilege is accomplished using the AuthorizedSubject relationship. The entities that are protected are defined using the AuthorizedTarget relationship. 

Note that this class and its AuthorizedSubject/Target associations provide a short-hand, static mechanism to represent authorization policies.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			UNIX_Privilege:
				PrivilegeGranted Boolean
				Activities UInt16
				ActivityQualifiers String
				QualifierFormats UInt16
				RepresentsAuthorizationRights Boolean

			UNIX_AuthorizedPrivilege:


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			UNIX_Privilege:

			UNIX_AuthorizedPrivilege:


*/

#ifndef __UNIX_AUTHORIZEDPRIVILEGE_H
#define __UNIX_AUTHORIZEDPRIVILEGE_H


#include <Privilege/UNIX_Privilege.h>

#include "UNIX_AuthorizedPrivilegeDeps.h"




class UNIX_AuthorizedPrivilege :
	public UNIX_Privilege
{
public:

	UNIX_AuthorizedPrivilege();
	~UNIX_AuthorizedPrivilege();

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
	virtual Boolean getPrivilegeGranted(CIMProperty&) const;
	virtual Boolean getPrivilegeGranted() const;
	virtual void setPrivilegeGranted(Boolean&);
	virtual Boolean getActivities(CIMProperty&) const;
	virtual Array<Uint16> getActivities() const;
	virtual void setActivities(Array<Uint16>&);
	virtual Boolean getActivityQualifiers(CIMProperty&) const;
	virtual Array<String> getActivityQualifiers() const;
	virtual void setActivityQualifiers(Array<String>&);
	virtual Boolean getQualifierFormats(CIMProperty&) const;
	virtual Array<Uint16> getQualifierFormats() const;
	virtual void setQualifierFormats(Array<Uint16>&);
	virtual Boolean getRepresentsAuthorizationRights(CIMProperty&) const;
	virtual Boolean getRepresentsAuthorizationRights() const;
	virtual void setRepresentsAuthorizationRights(Boolean&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	Boolean _privilegeGranted;
	Array<Uint16> _activities;
	Array<String> _activityQualifiers;
	Array<Uint16> _qualifierFormats;
	Boolean _representsAuthorizationRights;

#	include "UNIX_AuthorizedPrivilegePrivate.h"


};

#endif /* UNIX_AUTHORIZEDPRIVILEGE */
