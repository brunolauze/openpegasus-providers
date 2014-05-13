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
2.28.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::StorageServices
*/


/* **** Description *** */
/*
This class represents a collection of storage objects, such as a group of StorageVolumes.
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

			CIM_SystemSpecificCollection:

			UNIX_ReplicationGroup:
				Persistent Boolean
				DeleteOnEmptyElement Boolean
				DeleteOnUnassociated Boolean
				ConsistentPointInTime Boolean


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Collection:

			CIM_SystemSpecificCollection:

			UNIX_ReplicationGroup:


*/

#ifndef __UNIX_REPLICATIONGROUP_H
#define __UNIX_REPLICATIONGROUP_H


#include "CIM_SystemSpecificCollection.h"

#include "UNIX_ReplicationGroupDeps.h"


#ifndef PROPERTY_PERSISTENT
#define PROPERTY_PERSISTENT \
					"Persistent"
#endif

#ifndef PROPERTY_DELETE_ON_EMPTY_ELEMENT
#define PROPERTY_DELETE_ON_EMPTY_ELEMENT \
					"DeleteOnEmptyElement"
#endif

#ifndef PROPERTY_DELETE_ON_UNASSOCIATED
#define PROPERTY_DELETE_ON_UNASSOCIATED \
					"DeleteOnUnassociated"
#endif

#ifndef PROPERTY_CONSISTENT_POINT_IN_TIME
#define PROPERTY_CONSISTENT_POINT_IN_TIME \
					"ConsistentPointInTime"
#endif



class UNIX_ReplicationGroup :
	public CIM_SystemSpecificCollection
{
public:

	UNIX_ReplicationGroup();
	~UNIX_ReplicationGroup();

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
	virtual Boolean getPersistent(CIMProperty&) const;
	virtual Boolean getPersistent() const;
	virtual void setPersistent(Boolean&);
	virtual Boolean getDeleteOnEmptyElement(CIMProperty&) const;
	virtual Boolean getDeleteOnEmptyElement() const;
	virtual void setDeleteOnEmptyElement(Boolean&);
	virtual Boolean getDeleteOnUnassociated(CIMProperty&) const;
	virtual Boolean getDeleteOnUnassociated() const;
	virtual void setDeleteOnUnassociated(Boolean&);
	virtual Boolean getConsistentPointInTime(CIMProperty&) const;
	virtual Boolean getConsistentPointInTime() const;
	virtual void setConsistentPointInTime(Boolean&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	Boolean _persistent;
	Boolean _deleteOnEmptyElement;
	Boolean _deleteOnUnassociated;
	Boolean _consistentPointInTime;

#	include "UNIX_ReplicationGroupPrivate.h"


};

#endif /* UNIX_REPLICATIONGROUP */
