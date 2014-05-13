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


/* **** Composition *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.7.0
*/


/* **** UMLPackagePath *** */
/*
CIM::System::Processing
*/


/* **** Description *** */
/*
ProcessOfJob describes that the referenced Process is the result of the execution of the Job. A Job may cause multiple Processes to run, perhaps on different operating systems. This is allowed by the '*' cardinality of the Process reference. Note that a Process can result from only one Job - hence, the '0..1' cardinality on Job.
*/


/*
			 *** Properties ***

			CIM_AbstractComponent:
				GroupComponent Reference
				PartComponent Reference

			CIM_Component:

			UNIX_ProcessOfJob:


*/


/*
			 *** Methods ***

			CIM_AbstractComponent:

			CIM_Component:

			UNIX_ProcessOfJob:


*/

#ifndef __UNIX_PROCESSOFJOB_H
#define __UNIX_PROCESSOFJOB_H


#include "CIM_Component.h"
#include <ConcreteJob/UNIX_ConcreteJobProvider.h>
#include <BatchJob/UNIX_BatchJobProvider.h>
#include <PrintJob/UNIX_PrintJobProvider.h>
#include <Process/UNIX_ProcessProvider.h>

#include "UNIX_ProcessOfJobDeps.h"




class UNIX_ProcessOfJob :
	public CIM_Component
{
public:

	UNIX_ProcessOfJob();
	~UNIX_ProcessOfJob();

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


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _groupComponent;
	CIMInstance _partComponent;

	int groupIndex;
	int partIndex;
	UNIX_ConcreteJob group_UNIX_ConcreteJob_Component;
	int group_UNIX_ConcreteJob_Index;
	bool endOf_UNIX_ConcreteJob_Group;
	UNIX_BatchJob group_UNIX_BatchJob_Component;
	int group_UNIX_BatchJob_Index;
	bool endOf_UNIX_BatchJob_Group;
	UNIX_PrintJob group_UNIX_PrintJob_Component;
	int group_UNIX_PrintJob_Index;
	bool endOf_UNIX_PrintJob_Group;

	UNIX_Process part_UNIX_Process_Component;
	int part_UNIX_Process_Index;
	bool endOf_UNIX_Process_Part;

#	include "UNIX_ProcessOfJobPrivate.h"


};

#endif /* UNIX_PROCESSOFJOB */
