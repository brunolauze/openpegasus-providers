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
2.19.0
*/


/* **** UMLPackagePath *** */
/*
CIM::User::SecurityLevel
*/


/* **** Description *** */
/*
An instance of this class defines a security label used to characterize the security clearance necessary to access information in a system that supports mandatory access controls. The labels have two components, one a hierarchical security level and the other a set of non-hierarchical security categories. 

Mandatory access control determines whether to allow certain actions, based on the following rules: - If the security level of a security principal is equal to or greater than the security level of an element, and the security categories the security principal include all of the security categories of the element, then the security principal may read from the element. - If the security label of a security principal is equal to or less than the security label of an element, and the security categories the element include all of the security categories of the security principal, then the security principal may write to the element.

An element is assigned a security level via the association, ElementSecurityLevel. It can be assigned to any ManagedElement, such as Locations, Identities, Roles, Systems, Services and LogicalFiles. 

The clearance of a security principal, represented by an instance of Identity may be specified by associating an instance of this class via IdentitySecurityClearance.

The set of security levels and categories are determined by a business, organization and/or government based on the need to protect data and entities from attack, loss, abuse or unauthorized disclosure, and the ramifications if this protection is not maintained.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			UNIX_SecuritySensitivity:
				SecurityLevel String
				SecurityCategories String
				LabelExpiration DateTime


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			UNIX_SecuritySensitivity:


*/

#ifndef __UNIX_SECURITYSENSITIVITY_H
#define __UNIX_SECURITYSENSITIVITY_H


#include "CIM_ManagedElement.h"

#include "UNIX_SecuritySensitivityDeps.h"


#ifndef PROPERTY_SECURITY_LEVEL
#define PROPERTY_SECURITY_LEVEL \
					"SecurityLevel"
#endif

#ifndef PROPERTY_SECURITY_CATEGORIES
#define PROPERTY_SECURITY_CATEGORIES \
					"SecurityCategories"
#endif

#ifndef PROPERTY_LABEL_EXPIRATION
#define PROPERTY_LABEL_EXPIRATION \
					"LabelExpiration"
#endif



class UNIX_SecuritySensitivity :
	public CIM_ManagedElement
{
public:

	UNIX_SecuritySensitivity();
	~UNIX_SecuritySensitivity();

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
	virtual Boolean getSecurityLevel(CIMProperty&) const;
	virtual String getSecurityLevel() const;
	virtual void setSecurityLevel(String&);
	virtual Boolean getSecurityCategories(CIMProperty&) const;
	virtual Array<String> getSecurityCategories() const;
	virtual void setSecurityCategories(Array<String>&);
	virtual Boolean getLabelExpiration(CIMProperty&) const;
	virtual CIMDateTime getLabelExpiration() const;
	virtual void setLabelExpiration(CIMDateTime&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	String _securityLevel;
	Array<String> _securityCategories;
	CIMDateTime _labelExpiration;

#	include "UNIX_SecuritySensitivityPrivate.h"


};

#endif /* UNIX_SECURITYSENSITIVITY */
