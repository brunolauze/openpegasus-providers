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
2.6.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Application::CheckAction
*/


/* **** Description *** */
/*
The CIM_ActionSequence association defines a series of operations that either transition a SoftwareElement, referenced by the CIM_SoftwareElementActions association, to the next state or removes the element from its current state. The Action classes participating in this association must have the same value for the Action.Direction property - since they are either part of a sequence to transition a SoftwareElement into its next state or to uninstall it. The next-state and uninstall Actions associated with a particular SoftwareElement must be a continuous sequence. 
ActionSequence is an association that loops on the Action classes with roles for the 'prior' and 'next' Actions in the sequence. The need for a continuous sequence imples: (1)Within the set of next-state or uninstall Actions, there is one and only one Action that does not have an instance of ActionSequence referencing it in the 'next' role. This is the first Action in the sequence. (2) Within the set of next-state or uninstall Actions, there is one and only one Action that does not have an instance of ActionSequence referencing it in the 'prior' role. This is the last Action in the sequence. (3) All other Actions within the set of next-state and uninstall Actions must participate in two instances of ActionSequence, one in a 'prior' role and the other in the 'next' role.
*/


/*
			 *** Properties ***

			UNIX_ActionSequence:
				Next Reference
				Prior Reference


*/


/*
			 *** Methods ***

			UNIX_ActionSequence:


*/

#ifndef __UNIX_ACTIONSEQUENCE_H
#define __UNIX_ACTIONSEQUENCE_H


#include "CIM_ClassBase.h"

#include "UNIX_ActionSequenceDeps.h"


#ifndef PROPERTY_NEXT
#define PROPERTY_NEXT \
					"Next"
#endif

#ifndef PROPERTY_PRIOR
#define PROPERTY_PRIOR \
					"Prior"
#endif



class UNIX_ActionSequence :
	public CIM_ClassBase
{
public:

	UNIX_ActionSequence();
	~UNIX_ActionSequence();

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

	virtual Boolean getNext(CIMProperty&) const;
	virtual CIMInstance getNext() const;
	virtual void setNext(CIMInstance&);
	virtual Boolean getPrior(CIMProperty&) const;
	virtual CIMInstance getPrior() const;
	virtual void setPrior(CIMInstance&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _next;
	CIMInstance _prior;

#	include "UNIX_ActionSequencePrivate.h"


};

#endif /* UNIX_ACTIONSEQUENCE */
