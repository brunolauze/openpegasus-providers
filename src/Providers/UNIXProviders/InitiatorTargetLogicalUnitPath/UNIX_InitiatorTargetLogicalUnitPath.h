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


/* **** Experimental *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.15.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::StorageDevices
*/


/* **** Description *** */
/*
An association that models a host driver path to a logical unit. Each permutation of initiator and target ProtocolEndpoints and logical units is considered a separate path.
*/


/*
			 *** Properties ***

			UNIX_InitiatorTargetLogicalUnitPath:
				Initiator Reference
				Target Reference
				LogicalUnit Reference
				State UInt32


*/


/*
			 *** Methods ***

			UNIX_InitiatorTargetLogicalUnitPath:


*/

#ifndef __UNIX_INITIATORTARGETLOGICALUNITPATH_H
#define __UNIX_INITIATORTARGETLOGICALUNITPATH_H


#include "CIM_ClassBase.h"

#include "UNIX_InitiatorTargetLogicalUnitPathDeps.h"


#ifndef PROPERTY_INITIATOR
#define PROPERTY_INITIATOR \
					"Initiator"
#endif

#ifndef PROPERTY_TARGET
#define PROPERTY_TARGET \
					"Target"
#endif

#ifndef PROPERTY_LOGICAL_UNIT
#define PROPERTY_LOGICAL_UNIT \
					"LogicalUnit"
#endif

#ifndef PROPERTY_STATE
#define PROPERTY_STATE \
					"State"
#endif



class UNIX_InitiatorTargetLogicalUnitPath :
	public CIM_ClassBase
{
public:

	UNIX_InitiatorTargetLogicalUnitPath();
	~UNIX_InitiatorTargetLogicalUnitPath();

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

	virtual Boolean getInitiator(CIMProperty&) const;
	virtual CIMInstance getInitiator() const;
	virtual void setInitiator(CIMInstance&);
	virtual Boolean getTarget(CIMProperty&) const;
	virtual CIMInstance getTarget() const;
	virtual void setTarget(CIMInstance&);
	virtual Boolean getLogicalUnit(CIMProperty&) const;
	virtual CIMInstance getLogicalUnit() const;
	virtual void setLogicalUnit(CIMInstance&);
	virtual Boolean getState(CIMProperty&) const;
	virtual Uint32 getState() const;
	virtual void setState(Uint32&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _initiator;
	CIMInstance _target;
	CIMInstance _logicalUnit;
	Uint32 _state;

#	include "UNIX_InitiatorTargetLogicalUnitPathPrivate.h"


};

#endif /* UNIX_INITIATORTARGETLOGICALUNITPATH */
