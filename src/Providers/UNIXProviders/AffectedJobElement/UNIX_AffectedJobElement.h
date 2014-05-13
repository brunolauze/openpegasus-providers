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
2.15.0
*/


/* **** UMLPackagePath *** */
/*
CIM::System::Processing
*/


/* **** Description *** */
/*
AffectedJobElement represents an association between a Job and the ManagedElement(s) that may be affected by its execution. It may not be feasible for the Job to describe all of the affected elements. The main purpose of this association is to provide information when a Job requires exclusive use of the 'affected' ManagedElment(s) or when describing that side effects may result.
*/


/*
			 *** Properties ***

			UNIX_AffectedJobElement:
				AffectedElement Reference
				AffectingElement Reference
				ElementEffects UInt16
				OtherElementEffectsDescriptions String


*/


/*
			 *** Methods ***

			UNIX_AffectedJobElement:


*/

#ifndef __UNIX_AFFECTEDJOBELEMENT_H
#define __UNIX_AFFECTEDJOBELEMENT_H


#include "CIM_ClassBase.h"

#include "UNIX_AffectedJobElementDeps.h"


#ifndef PROPERTY_AFFECTED_ELEMENT
#define PROPERTY_AFFECTED_ELEMENT \
					"AffectedElement"
#endif

#ifndef PROPERTY_AFFECTING_ELEMENT
#define PROPERTY_AFFECTING_ELEMENT \
					"AffectingElement"
#endif

#ifndef PROPERTY_ELEMENT_EFFECTS
#define PROPERTY_ELEMENT_EFFECTS \
					"ElementEffects"
#endif

#ifndef PROPERTY_OTHER_ELEMENT_EFFECTS_DESCRIPTIONS
#define PROPERTY_OTHER_ELEMENT_EFFECTS_DESCRIPTIONS \
					"OtherElementEffectsDescriptions"
#endif



class UNIX_AffectedJobElement :
	public CIM_ClassBase
{
public:

	UNIX_AffectedJobElement();
	~UNIX_AffectedJobElement();

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

	virtual Boolean getAffectedElement(CIMProperty&) const;
	virtual CIMInstance getAffectedElement() const;
	virtual void setAffectedElement(CIMInstance&);
	virtual Boolean getAffectingElement(CIMProperty&) const;
	virtual CIMInstance getAffectingElement() const;
	virtual void setAffectingElement(CIMInstance&);
	virtual Boolean getElementEffects(CIMProperty&) const;
	virtual Array<Uint16> getElementEffects() const;
	virtual void setElementEffects(Array<Uint16>&);
	virtual Boolean getOtherElementEffectsDescriptions(CIMProperty&) const;
	virtual Array<String> getOtherElementEffectsDescriptions() const;
	virtual void setOtherElementEffectsDescriptions(Array<String>&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _affectedElement;
	CIMInstance _affectingElement;
	Array<Uint16> _elementEffects;
	Array<String> _otherElementEffectsDescriptions;

#	include "UNIX_AffectedJobElementPrivate.h"


};

#endif /* UNIX_AFFECTEDJOBELEMENT */
