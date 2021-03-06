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
CIM::Physical::PhysicalMedia
*/


/* **** Description *** */
/*
MemoryWithMedia indicates that Memory is associated with a PhysicalMedia and its cartridge. The Memory provides media identification and also stores user-specific data.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			UNIX_MemoryWithMedia:


*/


/*
			 *** Methods ***

			CIM_Dependency:

			UNIX_MemoryWithMedia:


*/

#ifndef __UNIX_MEMORYWITHMEDIA_H
#define __UNIX_MEMORYWITHMEDIA_H


#include "CIM_Dependency.h"
#include <PhysicalMemory/UNIX_PhysicalMemoryProvider.h>
#include <PhysicalMedia/UNIX_PhysicalMediaProvider.h>

#include "UNIX_MemoryWithMediaDeps.h"




class UNIX_MemoryWithMedia :
	public CIM_Dependency
{
public:

	UNIX_MemoryWithMedia();
	~UNIX_MemoryWithMedia();

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


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _antecedent;
	CIMInstance _dependent;

UNIX_PhysicalMemory _antecedentPhysicalMemory;
UNIX_PhysicalMemoryProvider _antecedentPhysicalMemoryProvider;

UNIX_PhysicalMedia _dependentPhysicalMedia;
UNIX_PhysicalMediaProvider _dependentPhysicalMediaProvider;

#	include "UNIX_MemoryWithMediaPrivate.h"


};

#endif /* UNIX_MEMORYWITHMEDIA */
