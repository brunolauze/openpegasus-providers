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


/* **** Aggregation *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.19.1
*/


/* **** UMLPackagePath *** */
/*
CIM::Core::CoreElements
*/


/* **** Description *** */
/*
CIM_OrderedComponent is a generic association used to establish 'part of' relationships between ManagedElements. It arranges the PartComponents in a specific assigned order. The semantics of the order depends on the context and use by the referencing classes. For example, if this association is used to arrange settings in a hierarchical order, then this specifies the sequence in which the settings are applied.
*/


/*
			 *** Properties ***

			CIM_AbstractComponent:
				GroupComponent Reference
				PartComponent Reference

			CIM_Component:

			UNIX_OrderedComponent:
				AssignedSequence UInt64


*/


/*
			 *** Methods ***

			CIM_AbstractComponent:

			CIM_Component:

			UNIX_OrderedComponent:


*/

#ifndef __UNIX_ORDEREDCOMPONENT_H
#define __UNIX_ORDEREDCOMPONENT_H


#include "CIM_Component.h"

#include "UNIX_OrderedComponentDeps.h"


#ifndef PROPERTY_ASSIGNED_SEQUENCE
#define PROPERTY_ASSIGNED_SEQUENCE \
					"AssignedSequence"
#endif



class UNIX_OrderedComponent :
	public CIM_Component
{
public:

	UNIX_OrderedComponent();
	~UNIX_OrderedComponent();

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

	virtual Boolean getGroupComponent(CIMProperty&) const;
	virtual CIMInstance getGroupComponent() const;
	virtual void setGroupComponent(CIMInstance&);
	virtual Boolean getPartComponent(CIMProperty&) const;
	virtual CIMInstance getPartComponent() const;
	virtual void setPartComponent(CIMInstance&);
	virtual Boolean getAssignedSequence(CIMProperty&) const;
	virtual Uint64 getAssignedSequence() const;
	virtual void setAssignedSequence(Uint64&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _groupComponent;
	CIMInstance _partComponent;
	Uint64 _assignedSequence;

#	include "UNIX_OrderedComponentPrivate.h"


};

#endif /* UNIX_ORDEREDCOMPONENT */
