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


/* **** Deprecated *** */
/*
CIM_ProtectedExtentBasedOn
*/


/* **** Version *** */
/*
2.8.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::SccExtents
*/


/* **** Description *** */
/*
This association is deprecated in lieu of ProtectedSpaceBasedOn, since PhysicalExtents and AggregatePSExtents are themselves deprecated. The association describes that AggregatePSExtents are BasedOn a single PhysicalExtent.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			CIM_AbstractBasedOn:
				StartingAddress UInt64
				EndingAddress UInt64
				OrderIndex UInt16

			CIM_BasedOn:

			UNIX_AggregatePSExtentBasedOnPExtent:


*/


/*
			 *** Methods ***

			CIM_Dependency:

			CIM_AbstractBasedOn:

			CIM_BasedOn:

			UNIX_AggregatePSExtentBasedOnPExtent:


*/

#ifndef __UNIX_AGGREGATEPSEXTENTBASEDONPEXTENT_H
#define __UNIX_AGGREGATEPSEXTENTBASEDONPEXTENT_H


#include "CIM_BasedOn.h"
#include <PhysicalExtent/UNIX_PhysicalExtentProvider.h>
#include <AggregatePSExtent/UNIX_AggregatePSExtentProvider.h>

#include "UNIX_AggregatePSExtentBasedOnPExtentDeps.h"




class UNIX_AggregatePSExtentBasedOnPExtent :
	public CIM_BasedOn
{
public:

	UNIX_AggregatePSExtentBasedOnPExtent();
	~UNIX_AggregatePSExtentBasedOnPExtent();

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
	virtual Boolean getStartingAddress(CIMProperty&) const;
	virtual Uint64 getStartingAddress() const;
	virtual void setStartingAddress(Uint64&);
	virtual Boolean getEndingAddress(CIMProperty&) const;
	virtual Uint64 getEndingAddress() const;
	virtual void setEndingAddress(Uint64&);
	virtual Boolean getOrderIndex(CIMProperty&) const;
	virtual Uint16 getOrderIndex() const;
	virtual void setOrderIndex(Uint16&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _antecedent;
	CIMInstance _dependent;
	Uint64 _startingAddress;
	Uint64 _endingAddress;
	Uint16 _orderIndex;

UNIX_PhysicalExtent _antecedentPhysicalExtent;
UNIX_PhysicalExtentProvider _antecedentPhysicalExtentProvider;

UNIX_AggregatePSExtent _dependentAggregatePSExtent;
UNIX_AggregatePSExtentProvider _dependentAggregatePSExtentProvider;

#	include "UNIX_AggregatePSExtentBasedOnPExtentPrivate.h"


};

#endif /* UNIX_AGGREGATEPSEXTENTBASEDONPEXTENT */
