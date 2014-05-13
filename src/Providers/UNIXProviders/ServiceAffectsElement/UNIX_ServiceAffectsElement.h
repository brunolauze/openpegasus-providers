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
2.16.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Core::Service
*/


/* **** Description *** */
/*
ServiceAffectsElement represents an association between a Service and the ManagedElements that might be affected by its execution. Instantiating this association indicates that running the service may change, manage, provide functionality for,or pose some burden on the ManagedElement. This burden might affect performance, throughput, availability, and so on.
*/


/*
			 *** Properties ***

			UNIX_ServiceAffectsElement:
				AffectedElement Reference
				AffectingElement Reference
				ElementEffects UInt16
				OtherElementEffectsDescriptions String
				AssignedSequence UInt16


*/


/*
			 *** Methods ***

			UNIX_ServiceAffectsElement:


*/

#ifndef __UNIX_SERVICEAFFECTSELEMENT_H
#define __UNIX_SERVICEAFFECTSELEMENT_H


#include "CIM_ClassBase.h"

#include "UNIX_ServiceAffectsElementDeps.h"


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

#ifndef PROPERTY_ASSIGNED_SEQUENCE
#define PROPERTY_ASSIGNED_SEQUENCE \
					"AssignedSequence"
#endif



class UNIX_ServiceAffectsElement :
	public CIM_ClassBase
{
public:

	UNIX_ServiceAffectsElement();
	~UNIX_ServiceAffectsElement();

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
	virtual Boolean getAssignedSequence(CIMProperty&) const;
	virtual Uint16 getAssignedSequence() const;
	virtual void setAssignedSequence(Uint16&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _affectedElement;
	CIMInstance _affectingElement;
	Array<Uint16> _elementEffects;
	Array<String> _otherElementEffectsDescriptions;
	Uint16 _assignedSequence;

#	include "UNIX_ServiceAffectsElementPrivate.h"


};

#endif /* UNIX_SERVICEAFFECTSELEMENT */
