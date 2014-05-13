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
2.8.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Application::DeploymentModel
*/


/* **** Description *** */
/*
CIM_ApplicationSystemDirectory is an association used to establish a relationship between an ApplicationSystem and the Directories that it uses. This is used to identify the single root installation directory for an ApplicationSystem, as well as the logical purpose of other directories utilized by the ApplicationSystem. Note: This class is intended to be a subclass of CIM_Dependency but the current specification prohibits the extension of parent keys in a subclass. This will be revisited when the specification changes to make the intended inheritance possible.
*/


/*
			 *** Properties ***

			UNIX_ApplicationSystemDirectory:
				Antecedent Reference
				Dependent Reference
				Name String
				ApplicationDirectoryUses UInt16
				OtherUseDescriptions String


*/


/*
			 *** Methods ***

			UNIX_ApplicationSystemDirectory:


*/

#ifndef __UNIX_APPLICATIONSYSTEMDIRECTORY_H
#define __UNIX_APPLICATIONSYSTEMDIRECTORY_H


#include "CIM_ClassBase.h"

#include "UNIX_ApplicationSystemDirectoryDeps.h"


#ifndef PROPERTY_ANTECEDENT
#define PROPERTY_ANTECEDENT \
					"Antecedent"
#endif

#ifndef PROPERTY_DEPENDENT
#define PROPERTY_DEPENDENT \
					"Dependent"
#endif

#ifndef PROPERTY_NAME
#define PROPERTY_NAME \
					"Name"
#endif

#ifndef PROPERTY_APPLICATION_DIRECTORY_USES
#define PROPERTY_APPLICATION_DIRECTORY_USES \
					"ApplicationDirectoryUses"
#endif

#ifndef PROPERTY_OTHER_USE_DESCRIPTIONS
#define PROPERTY_OTHER_USE_DESCRIPTIONS \
					"OtherUseDescriptions"
#endif



class UNIX_ApplicationSystemDirectory :
	public CIM_ClassBase
{
public:

	UNIX_ApplicationSystemDirectory();
	~UNIX_ApplicationSystemDirectory();

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

	virtual Boolean getAntecedent(CIMProperty&) const;
	virtual CIMInstance getAntecedent() const;
	virtual void setAntecedent(CIMInstance&);
	virtual Boolean getDependent(CIMProperty&) const;
	virtual CIMInstance getDependent() const;
	virtual void setDependent(CIMInstance&);
	virtual Boolean getName(CIMProperty&) const;
	virtual String getName() const;
	virtual void setName(String&);
	virtual Boolean getApplicationDirectoryUses(CIMProperty&) const;
	virtual Array<Uint16> getApplicationDirectoryUses() const;
	virtual void setApplicationDirectoryUses(Array<Uint16>&);
	virtual Boolean getOtherUseDescriptions(CIMProperty&) const;
	virtual Array<String> getOtherUseDescriptions() const;
	virtual void setOtherUseDescriptions(Array<String>&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _antecedent;
	CIMInstance _dependent;
	String _name;
	Array<Uint16> _applicationDirectoryUses;
	Array<String> _otherUseDescriptions;

#	include "UNIX_ApplicationSystemDirectoryPrivate.h"


};

#endif /* UNIX_APPLICATIONSYSTEMDIRECTORY */
