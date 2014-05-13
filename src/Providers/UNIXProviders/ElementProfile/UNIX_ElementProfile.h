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


/* **** Deprecated *** */
/*
CIM_ElementSettingData
CIM_ElementSetting
*/


/* **** Version *** */
/*
2.10.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Core::Settings
*/


/* **** Description *** */
/*
Note: The Profile class is being deprecated in lieu of using a ConcreteComponent relationship to indicate a hierarchy of Setting or SettingData instances. This relationship allows the reuse of the element to Setting or SettingData associations instead of defining a peer association specifically for Profiles. 
Deprecated description: ElementProfile represents the association between ManagedElements and the Profiles (collection of settings) that are defined for them. This association indicates that the settings that are collected by the Profile apply to the associated ManagedElement.
*/


/*
			 *** Properties ***

			UNIX_ElementProfile:
				ManagedElement Reference
				Profile Reference


*/


/*
			 *** Methods ***

			UNIX_ElementProfile:


*/

#ifndef __UNIX_ELEMENTPROFILE_H
#define __UNIX_ELEMENTPROFILE_H


#include "CIM_ClassBase.h"

#include "UNIX_ElementProfileDeps.h"


#ifndef PROPERTY_MANAGED_ELEMENT
#define PROPERTY_MANAGED_ELEMENT \
					"ManagedElement"
#endif

#ifndef PROPERTY_PROFILE
#define PROPERTY_PROFILE \
					"Profile"
#endif



class UNIX_ElementProfile :
	public CIM_ClassBase
{
public:

	UNIX_ElementProfile();
	~UNIX_ElementProfile();

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

	virtual Boolean getManagedElement(CIMProperty&) const;
	virtual CIMInstance getManagedElement() const;
	virtual void setManagedElement(CIMInstance&);
	virtual Boolean getProfile(CIMProperty&) const;
	virtual CIMInstance getProfile() const;
	virtual void setProfile(CIMInstance&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _managedElement;
	CIMInstance _profile;

#	include "UNIX_ElementProfilePrivate.h"


};

#endif /* UNIX_ELEMENTPROFILE */
