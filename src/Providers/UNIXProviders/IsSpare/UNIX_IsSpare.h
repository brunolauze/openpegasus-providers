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
2.10.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Core::Redundancy
*/


/* **** Description *** */
/*
The IsSpare association indicates an element that can spare or replace any of the elements in the referenced RedundancySet. If the 'spare' is itself a Collection, this indicates that each of the 'spare' members can replace any of the elements in the RedundancySet. In the case of a collection all of the values in the properties of this association MUST apply to all members of the Collection. 
If this is not true, then the Collection SHOULD be broken down into smaller sets (and the IsSpare association defined for each of these smaller sets), such that the properties of this association apply to all collected members.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			UNIX_IsSpare:
				SpareStatus UInt16
				FailoverSupported UInt16


*/


/*
			 *** Methods ***

			CIM_Dependency:

			UNIX_IsSpare:


*/

#ifndef __UNIX_ISSPARE_H
#define __UNIX_ISSPARE_H


#include "CIM_Dependency.h"
#include <RedundancySet/UNIX_RedundancySetProvider.h>

#include "UNIX_IsSpareDeps.h"


#ifndef PROPERTY_SPARE_STATUS
#define PROPERTY_SPARE_STATUS \
					"SpareStatus"
#endif

#ifndef PROPERTY_FAILOVER_SUPPORTED
#define PROPERTY_FAILOVER_SUPPORTED \
					"FailoverSupported"
#endif



class UNIX_IsSpare :
	public CIM_Dependency
{
public:

	UNIX_IsSpare();
	~UNIX_IsSpare();

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
	virtual Boolean getSpareStatus(CIMProperty&) const;
	virtual Uint16 getSpareStatus() const;
	virtual void setSpareStatus(Uint16&);
	virtual Boolean getFailoverSupported(CIMProperty&) const;
	virtual Uint16 getFailoverSupported() const;
	virtual void setFailoverSupported(Uint16&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _antecedent;
	CIMInstance _dependent;
	Uint16 _spareStatus;
	Uint16 _failoverSupported;


UNIX_RedundancySet _dependentRedundancySet;
UNIX_RedundancySetProvider _dependentRedundancySetProvider;

#	include "UNIX_IsSparePrivate.h"


};

#endif /* UNIX_ISSPARE */
