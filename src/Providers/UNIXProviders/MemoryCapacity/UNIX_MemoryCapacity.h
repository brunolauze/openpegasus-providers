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
2.38.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Physical::Misc
*/


/* **** Description *** */
/*
MemoryCapacity describes the type of Memory that can be installed on a PhysicalElement and its minimum/maximum configurations. Information on what memory is currently 'installed', versus an Element's min/max requirements, is located in instances of the PhysicalMemory class.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_PhysicalCapacity:
				Name String

			UNIX_MemoryCapacity:
				MemoryType UInt16
				MinimumMemoryCapacity UInt64
				MaximumMemoryCapacity UInt64


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_PhysicalCapacity:

			UNIX_MemoryCapacity:


*/

#ifndef __UNIX_MEMORYCAPACITY_H
#define __UNIX_MEMORYCAPACITY_H


#include "CIM_PhysicalCapacity.h"

#include "UNIX_MemoryCapacityDeps.h"


#ifndef PROPERTY_MEMORY_TYPE
#define PROPERTY_MEMORY_TYPE \
					"MemoryType"
#endif

#ifndef PROPERTY_MINIMUM_MEMORY_CAPACITY
#define PROPERTY_MINIMUM_MEMORY_CAPACITY \
					"MinimumMemoryCapacity"
#endif

#ifndef PROPERTY_MAXIMUM_MEMORY_CAPACITY
#define PROPERTY_MAXIMUM_MEMORY_CAPACITY \
					"MaximumMemoryCapacity"
#endif



class UNIX_MemoryCapacity :
	public CIM_PhysicalCapacity
{
public:

	UNIX_MemoryCapacity();
	~UNIX_MemoryCapacity();

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
	virtual Boolean getName(CIMProperty&) const;
	virtual String getName() const;
	virtual void setName(String&);
	virtual Boolean getMemoryType(CIMProperty&) const;
	virtual Uint16 getMemoryType() const;
	virtual void setMemoryType(Uint16&);
	virtual Boolean getMinimumMemoryCapacity(CIMProperty&) const;
	virtual Uint64 getMinimumMemoryCapacity() const;
	virtual void setMinimumMemoryCapacity(Uint64&);
	virtual Boolean getMaximumMemoryCapacity(CIMProperty&) const;
	virtual Uint64 getMaximumMemoryCapacity() const;
	virtual void setMaximumMemoryCapacity(Uint64&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	String _name;
	Uint16 _memoryType;
	Uint64 _minimumMemoryCapacity;
	Uint64 _maximumMemoryCapacity;

#	include "UNIX_MemoryCapacityPrivate.h"


};

#endif /* UNIX_MEMORYCAPACITY */
