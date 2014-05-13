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


/* **** Experimental *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.19.0
*/


/* **** UMLPackagePath *** */
/*
CIM::System::Processing
*/


/* **** Description *** */
/*
BatchJobGroup describes a collection of BatchJobs that are logically grouped. Two grouping/scheduling concepts are modeled: (1) User grouping: Jobs are logically grouped by the user of the batch system to capture common characteristics. There is no sequencing relationship between the jobs belonging to the Group. The jobs are grouped using the MemberOfCollection association. (2) Job sequencing: An ordered collection of jobs is defined where the jobs are executed in sequence. This captures a simple sequencing relationship for a set of jobs, where the order is defined using the AssignedSequence property of the OrderedMemberOfCollection association. An individual BacthJob can belong to multiple BatchJobGroups. 

If possible, an instance of OwningCollectionElement SHOULD be created for this JobGroup. However, this association might not exist, given that collections of jobs can move between systems as they execute, and the lifecycle of the owning/controlling entity is not necessarily persisted for the total duration of the collection. However, this can be very useful information when available.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_Collection:

			UNIX_BatchJobGroup:
				GroupStatus UInt16
				GroupStatusDescription String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Collection:

			UNIX_BatchJobGroup:


*/

#ifndef __UNIX_BATCHJOBGROUP_H
#define __UNIX_BATCHJOBGROUP_H


#include "CIM_Collection.h"

#include "UNIX_BatchJobGroupDeps.h"


#ifndef PROPERTY_GROUP_STATUS
#define PROPERTY_GROUP_STATUS \
					"GroupStatus"
#endif

#ifndef PROPERTY_GROUP_STATUS_DESCRIPTION
#define PROPERTY_GROUP_STATUS_DESCRIPTION \
					"GroupStatusDescription"
#endif



class UNIX_BatchJobGroup :
	public CIM_Collection
{
public:

	UNIX_BatchJobGroup();
	~UNIX_BatchJobGroup();

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

	virtual Boolean getInstanceID(CIMProperty&) const;
	virtual String getInstanceID() const;
	virtual void setInstanceID(String&);
	virtual Boolean getCaption(CIMProperty&) const;
	virtual String getCaption() const;
	virtual void setCaption(String&);
	virtual Boolean getDescription(CIMProperty&) const;
	virtual String getDescription() const;
	virtual void setDescription(String&);
	virtual Boolean getElementName(CIMProperty&) const;
	virtual String getElementName() const;
	virtual void setElementName(String&);
	virtual Boolean getGeneration(CIMProperty&) const;
	virtual Uint64 getGeneration() const;
	virtual void setGeneration(Uint64&);
	virtual Boolean getGroupStatus(CIMProperty&) const;
	virtual Uint16 getGroupStatus() const;
	virtual void setGroupStatus(Uint16&);
	virtual Boolean getGroupStatusDescription(CIMProperty&) const;
	virtual String getGroupStatusDescription() const;
	virtual void setGroupStatusDescription(String&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	Uint16 _groupStatus;
	String _groupStatusDescription;

#	include "UNIX_BatchJobGroupPrivate.h"


};

#endif /* UNIX_BATCHJOBGROUP */
