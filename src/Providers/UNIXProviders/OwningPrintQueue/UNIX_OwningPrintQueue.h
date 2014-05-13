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
2.14.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::Printing
*/


/* **** Description *** */
/*
This association indicates which Queue holds a PrintJob and where the Job is located within that Queue. A Job can remain on its final Queue when it has been printed with a PrintJobStatus of "Complete" or "Completed With Error".
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			UNIX_JobDestinationJobs:

			UNIX_OwningPrintQueue:
				QueuePosition UInt32


*/


/*
			 *** Methods ***

			CIM_Dependency:

			UNIX_JobDestinationJobs:

			UNIX_OwningPrintQueue:


*/

#ifndef __UNIX_OWNINGPRINTQUEUE_H
#define __UNIX_OWNINGPRINTQUEUE_H


#include <JobDestinationJobs/UNIX_JobDestinationJobs.h>
#include <PrintQueue/UNIX_PrintQueueProvider.h>
#include <PrintJob/UNIX_PrintJobProvider.h>

#include "UNIX_OwningPrintQueueDeps.h"


#ifndef PROPERTY_QUEUE_POSITION
#define PROPERTY_QUEUE_POSITION \
					"QueuePosition"
#endif



class UNIX_OwningPrintQueue :
	public UNIX_JobDestinationJobs
{
public:

	UNIX_OwningPrintQueue();
	~UNIX_OwningPrintQueue();

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
	virtual Boolean getQueuePosition(CIMProperty&) const;
	virtual Uint32 getQueuePosition() const;
	virtual void setQueuePosition(Uint32&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _antecedent;
	CIMInstance _dependent;
	Uint32 _queuePosition;

UNIX_PrintQueue _antecedentPrintQueue;
UNIX_PrintQueueProvider _antecedentPrintQueueProvider;

UNIX_PrintJob _dependentPrintJob;
UNIX_PrintJobProvider _dependentPrintJobProvider;

#	include "UNIX_OwningPrintQueuePrivate.h"


};

#endif /* UNIX_OWNINGPRINTQUEUE */
