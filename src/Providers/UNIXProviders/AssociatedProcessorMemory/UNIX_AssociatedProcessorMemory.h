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
CIM::Device::Memory
*/


/* **** Description *** */
/*
Associates the Processor and system Memory, or a Processor's Cache.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			CIM_AssociatedMemory:

			UNIX_AssociatedProcessorMemory:
				BusSpeed UInt32


*/


/*
			 *** Methods ***

			CIM_Dependency:

			CIM_AssociatedMemory:

			UNIX_AssociatedProcessorMemory:


*/

#ifndef __UNIX_ASSOCIATEDPROCESSORMEMORY_H
#define __UNIX_ASSOCIATEDPROCESSORMEMORY_H


#include "CIM_AssociatedMemory.h"
#include <CacheMemory/UNIX_CacheMemoryProvider.h>
#include <VolatileStorage/UNIX_VolatileStorageProvider.h>
#include <NonVolatileStorage/UNIX_NonVolatileStorageProvider.h>
#include <Processor/UNIX_ProcessorProvider.h>

#include "UNIX_AssociatedProcessorMemoryDeps.h"


#ifndef PROPERTY_BUS_SPEED
#define PROPERTY_BUS_SPEED \
					"BusSpeed"
#endif



class UNIX_AssociatedProcessorMemory :
	public CIM_AssociatedMemory
{
public:

	UNIX_AssociatedProcessorMemory();
	~UNIX_AssociatedProcessorMemory();

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
	virtual Boolean getBusSpeed(CIMProperty&) const;
	virtual Uint32 getBusSpeed() const;
	virtual void setBusSpeed(Uint32&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _antecedent;
	CIMInstance _dependent;
	Uint32 _busSpeed;

UNIX_CacheMemory _antecedentCacheMemory;
UNIX_CacheMemoryProvider _antecedentCacheMemoryProvider;
UNIX_VolatileStorage _antecedentVolatileStorage;
UNIX_VolatileStorageProvider _antecedentVolatileStorageProvider;
UNIX_NonVolatileStorage _antecedentNonVolatileStorage;
UNIX_NonVolatileStorageProvider _antecedentNonVolatileStorageProvider;

UNIX_Processor _dependentProcessor;
UNIX_ProcessorProvider _dependentProcessorProvider;

#	include "UNIX_AssociatedProcessorMemoryPrivate.h"


};

#endif /* UNIX_ASSOCIATEDPROCESSORMEMORY */
