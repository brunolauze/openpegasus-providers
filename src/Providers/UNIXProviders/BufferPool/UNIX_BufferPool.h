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


/* **** Version *** */
/*
2.6.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Network::Buffers
*/


/* **** Description *** */
/*
This class represents the use of buffers by a Queuing Service. The existence and management of individual buffers will be modeled in a future release. At the current level of abstraction, modeling the existence of the BufferPool is necessary. Long term, it is not sufficient. 

In implementations where there are multiple buffer sizes, an instance of BufferPool should be defined for each set of buffers with identical or similar sizes. These instances of buffer pools can then be grouped together using the CollectedBuffersPool association. 

Note that this class is derived from CollectionOfMSEs, and not from Forwarding or ConditioningService. BufferPool is only a collection of storage, and is NOT a Service.
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

			CIM_CollectionOfMSEs:
				CollectionID String

			UNIX_BufferPool:
				CreationClassName String
				Name String
				BufferSize UInt16
				SizeOfBuffers UInt32
				TotalBuffers UInt32
				AvailableBuffers UInt32
				SharedBuffers UInt32


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Collection:

			CIM_CollectionOfMSEs:

			UNIX_BufferPool:


*/

#ifndef __UNIX_BUFFERPOOL_H
#define __UNIX_BUFFERPOOL_H


#include "CIM_CollectionOfMSEs.h"

#include "UNIX_BufferPoolDeps.h"


#ifndef PROPERTY_CREATION_CLASS_NAME
#define PROPERTY_CREATION_CLASS_NAME \
					"CreationClassName"
#endif

#ifndef PROPERTY_NAME
#define PROPERTY_NAME \
					"Name"
#endif

#ifndef PROPERTY_BUFFER_SIZE
#define PROPERTY_BUFFER_SIZE \
					"BufferSize"
#endif

#ifndef PROPERTY_SIZE_OF_BUFFERS
#define PROPERTY_SIZE_OF_BUFFERS \
					"SizeOfBuffers"
#endif

#ifndef PROPERTY_TOTAL_BUFFERS
#define PROPERTY_TOTAL_BUFFERS \
					"TotalBuffers"
#endif

#ifndef PROPERTY_AVAILABLE_BUFFERS
#define PROPERTY_AVAILABLE_BUFFERS \
					"AvailableBuffers"
#endif

#ifndef PROPERTY_SHARED_BUFFERS
#define PROPERTY_SHARED_BUFFERS \
					"SharedBuffers"
#endif



class UNIX_BufferPool :
	public CIM_CollectionOfMSEs
{
public:

	UNIX_BufferPool();
	~UNIX_BufferPool();

	virtual Boolean initialize();
	virtual Boolean load(int&);
	virtual Boolean loadByName(const String);
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
	virtual Boolean getCollectionID(CIMProperty&) const;
	virtual String getCollectionID() const;
	virtual void setCollectionID(String&);
	virtual Boolean getCreationClassName(CIMProperty&) const;
	virtual String getCreationClassName() const;
	virtual void setCreationClassName(String&);
	virtual Boolean getName(CIMProperty&) const;
	virtual String getName() const;
	virtual void setName(String&);
	virtual Boolean getBufferSize(CIMProperty&) const;
	virtual Uint16 getBufferSize() const;
	virtual void setBufferSize(Uint16&);
	virtual Boolean getSizeOfBuffers(CIMProperty&) const;
	virtual Uint32 getSizeOfBuffers() const;
	virtual void setSizeOfBuffers(Uint32&);
	virtual Boolean getTotalBuffers(CIMProperty&) const;
	virtual Uint32 getTotalBuffers() const;
	virtual void setTotalBuffers(Uint32&);
	virtual Boolean getAvailableBuffers(CIMProperty&) const;
	virtual Uint32 getAvailableBuffers() const;
	virtual void setAvailableBuffers(Uint32&);
	virtual Boolean getSharedBuffers(CIMProperty&) const;
	virtual Uint32 getSharedBuffers() const;
	virtual void setSharedBuffers(Uint32&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	String _collectionID;
	String _creationClassName;
	String _name;
	Uint16 _bufferSize;
	Uint32 _sizeOfBuffers;
	Uint32 _totalBuffers;
	Uint32 _availableBuffers;
	Uint32 _sharedBuffers;

#	include "UNIX_BufferPoolPrivate.h"


};

#endif /* UNIX_BUFFERPOOL */
