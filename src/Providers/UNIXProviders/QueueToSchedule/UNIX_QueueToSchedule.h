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
2.7.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Network::QoS
*/


/* **** Description *** */
/*
This is a top-level association, representing the relationship between a queue (QueuingService) and a SchedulingElement. The SchedulingElement, in turn, represents the information in a packet scheduling service that is specific to this queue, such as relative priority or allocated bandwidth. 

Although it cannot be expressed formally with the association cardinalities, there is an additional constraint on participation in this association. A particular instance of (a subclass of) SchedulingElement always participates either in exactly one instance of this association, or in exactly one instance of the association SchedulingServiceToSchedule.
*/


/*
			 *** Properties ***

			UNIX_QueueToSchedule:
				Queue Reference
				SchedElement Reference


*/


/*
			 *** Methods ***

			UNIX_QueueToSchedule:


*/

#ifndef __UNIX_QUEUETOSCHEDULE_H
#define __UNIX_QUEUETOSCHEDULE_H


#include "CIM_ClassBase.h"

#include "UNIX_QueueToScheduleDeps.h"


#ifndef PROPERTY_QUEUE
#define PROPERTY_QUEUE \
					"Queue"
#endif

#ifndef PROPERTY_SCHED_ELEMENT
#define PROPERTY_SCHED_ELEMENT \
					"SchedElement"
#endif



class UNIX_QueueToSchedule :
	public CIM_ClassBase
{
public:

	UNIX_QueueToSchedule();
	~UNIX_QueueToSchedule();

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

	virtual Boolean getQueue(CIMProperty&) const;
	virtual CIMInstance getQueue() const;
	virtual void setQueue(CIMInstance&);
	virtual Boolean getSchedElement(CIMProperty&) const;
	virtual CIMInstance getSchedElement() const;
	virtual void setSchedElement(CIMInstance&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _queue;
	CIMInstance _schedElement;

#	include "UNIX_QueueToSchedulePrivate.h"


};

#endif /* UNIX_QUEUETOSCHEDULE */
