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


/* **** Experimental *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.18.1
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::StorageServices
*/


/* **** Description *** */
/*
This association indicates the accessibility of StorageVolumes in the StorageResourceLoadGroup through ports in the associated TargetPortGroup.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			UNIX_AsymmetricAccessibility:
				CurrentAccessState UInt16
				NormalAccessState UInt16


*/


/*
			 *** Methods ***

			CIM_Dependency:

			UNIX_AsymmetricAccessibility:


*/

#ifndef __UNIX_ASYMMETRICACCESSIBILITY_H
#define __UNIX_ASYMMETRICACCESSIBILITY_H


#include "CIM_Dependency.h"
#include <TargetPortGroup/UNIX_TargetPortGroupProvider.h>
#include <StorageResourceLoadGroup/UNIX_StorageResourceLoadGroupProvider.h>

#include "UNIX_AsymmetricAccessibilityDeps.h"


#ifndef PROPERTY_CURRENT_ACCESS_STATE
#define PROPERTY_CURRENT_ACCESS_STATE \
					"CurrentAccessState"
#endif

#ifndef PROPERTY_NORMAL_ACCESS_STATE
#define PROPERTY_NORMAL_ACCESS_STATE \
					"NormalAccessState"
#endif



class UNIX_AsymmetricAccessibility :
	public CIM_Dependency
{
public:

	UNIX_AsymmetricAccessibility();
	~UNIX_AsymmetricAccessibility();

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

	virtual Boolean getAntecedent(CIMProperty&) const;
	virtual CIMInstance getAntecedent() const;
	virtual void setAntecedent(CIMInstance&);
	virtual Boolean getDependent(CIMProperty&) const;
	virtual CIMInstance getDependent() const;
	virtual void setDependent(CIMInstance&);
	virtual Boolean getCurrentAccessState(CIMProperty&) const;
	virtual Uint16 getCurrentAccessState() const;
	virtual void setCurrentAccessState(Uint16&);
	virtual Boolean getNormalAccessState(CIMProperty&) const;
	virtual Uint16 getNormalAccessState() const;
	virtual void setNormalAccessState(Uint16&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _antecedent;
	CIMInstance _dependent;
	Uint16 _currentAccessState;
	Uint16 _normalAccessState;

UNIX_TargetPortGroup _antecedentTargetPortGroup;
UNIX_TargetPortGroupProvider _antecedentTargetPortGroupProvider;

UNIX_StorageResourceLoadGroup _dependentStorageResourceLoadGroup;
UNIX_StorageResourceLoadGroupProvider _dependentStorageResourceLoadGroupProvider;

#	include "UNIX_AsymmetricAccessibilityPrivate.h"


};

#endif /* UNIX_ASYMMETRICACCESSIBILITY */
