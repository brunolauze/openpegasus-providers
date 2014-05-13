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
CIM::Core::CoreElements
*/


/* **** Description *** */
/*
CIM_OrderedDependency is used to establish a relationship between a ManagedElement and its dependencies. Each dependency is an Antecedent reference and the order in which the dependencies need to be resolved is indicated by the AssignedSequence property. 
For example, if this association is used to arrange dependencies of a software in a hierarchical order, then this specifies the sequence in which the dependencies need to be installed prior to installing the software.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			UNIX_OrderedDependency:
				AssignedSequence UInt64


*/


/*
			 *** Methods ***

			CIM_Dependency:

			UNIX_OrderedDependency:


*/

#ifndef __UNIX_ORDEREDDEPENDENCY_H
#define __UNIX_ORDEREDDEPENDENCY_H


#include "CIM_Dependency.h"

#include "UNIX_OrderedDependencyDeps.h"


#ifndef PROPERTY_ASSIGNED_SEQUENCE
#define PROPERTY_ASSIGNED_SEQUENCE \
					"AssignedSequence"
#endif



class UNIX_OrderedDependency :
	public CIM_Dependency
{
public:

	UNIX_OrderedDependency();
	~UNIX_OrderedDependency();

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
	virtual Boolean getAssignedSequence(CIMProperty&) const;
	virtual Uint64 getAssignedSequence() const;
	virtual void setAssignedSequence(Uint64&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _antecedent;
	CIMInstance _dependent;
	Uint64 _assignedSequence;



#	include "UNIX_OrderedDependencyPrivate.h"


};

#endif /* UNIX_ORDEREDDEPENDENCY */
