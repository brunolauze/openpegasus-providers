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


/* **** Association *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.22.0
*/


/* **** UMLPackagePath *** */
/*
CIM::User::Privilege
*/


/* **** Description *** */
/*
CIM_AssociatedPrivilege is an association that models the privileges that a Subject element has to access or authorize other elements to access a Target element.
*/


/*
			 *** Properties ***

			UNIX_AssociatedPrivilege:
				Subject Reference
				Target Reference
				UseKey String
				PrivilegeGranted Boolean
				Activities UInt16
				ActivityQualifiers String
				QualifierFormats UInt16
				RepresentsAuthorizationRights Boolean


*/


/*
			 *** Methods ***

			UNIX_AssociatedPrivilege:


*/

#ifndef __UNIX_ASSOCIATEDPRIVILEGE_H
#define __UNIX_ASSOCIATEDPRIVILEGE_H


#include "CIM_ClassBase.h"

#include "UNIX_AssociatedPrivilegeDeps.h"


#ifndef PROPERTY_SUBJECT
#define PROPERTY_SUBJECT \
					"Subject"
#endif

#ifndef PROPERTY_TARGET
#define PROPERTY_TARGET \
					"Target"
#endif

#ifndef PROPERTY_USE_KEY
#define PROPERTY_USE_KEY \
					"UseKey"
#endif

#ifndef PROPERTY_PRIVILEGE_GRANTED
#define PROPERTY_PRIVILEGE_GRANTED \
					"PrivilegeGranted"
#endif

#ifndef PROPERTY_ACTIVITIES
#define PROPERTY_ACTIVITIES \
					"Activities"
#endif

#ifndef PROPERTY_ACTIVITY_QUALIFIERS
#define PROPERTY_ACTIVITY_QUALIFIERS \
					"ActivityQualifiers"
#endif

#ifndef PROPERTY_QUALIFIER_FORMATS
#define PROPERTY_QUALIFIER_FORMATS \
					"QualifierFormats"
#endif

#ifndef PROPERTY_REPRESENTS_AUTHORIZATION_RIGHTS
#define PROPERTY_REPRESENTS_AUTHORIZATION_RIGHTS \
					"RepresentsAuthorizationRights"
#endif



class UNIX_AssociatedPrivilege :
	public CIM_ClassBase
{
public:

	UNIX_AssociatedPrivilege();
	~UNIX_AssociatedPrivilege();

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

	virtual Boolean getSubject(CIMProperty&) const;
	virtual CIMInstance getSubject() const;
	virtual void setSubject(CIMInstance&);
	virtual Boolean getTarget(CIMProperty&) const;
	virtual CIMInstance getTarget() const;
	virtual void setTarget(CIMInstance&);
	virtual Boolean getUseKey(CIMProperty&) const;
	virtual String getUseKey() const;
	virtual void setUseKey(String&);
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
	CIMInstance _subject;
	CIMInstance _target;
	String _useKey;
	Boolean _privilegeGranted;
	Array<Uint16> _activities;
	Array<String> _activityQualifiers;
	Array<Uint16> _qualifierFormats;
	Boolean _representsAuthorizationRights;

#	include "UNIX_AssociatedPrivilegePrivate.h"


};

#endif /* UNIX_ASSOCIATEDPRIVILEGE */
