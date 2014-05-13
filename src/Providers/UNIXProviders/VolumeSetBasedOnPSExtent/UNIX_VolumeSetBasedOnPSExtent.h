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
CIM_CompositeExtentBasedOn
*/


/* **** Version *** */
/*
2.7.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::SccExtents
*/


/* **** Description *** */
/*
This association is deprecated in lieu of CompositeExtentBasedOn, since VolumeSets and ProtectedSpaceExtents are themselves deprecated. The relationship describes that VolumeSets are BasedOn on one or more ProtectedSpaceExtents.
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

			UNIX_VolumeSetBasedOnPSExtent:
				LBAsMappedByDecrementing Boolean
				LBAMappingIncludesCheckData Boolean


*/


/*
			 *** Methods ***

			CIM_Dependency:

			CIM_AbstractBasedOn:

			CIM_BasedOn:

			UNIX_VolumeSetBasedOnPSExtent:


*/

#ifndef __UNIX_VOLUMESETBASEDONPSEXTENT_H
#define __UNIX_VOLUMESETBASEDONPSEXTENT_H


#include "CIM_BasedOn.h"
#include <ProtectedSpaceExtent/UNIX_ProtectedSpaceExtentProvider.h>
#include <VolumeSet/UNIX_VolumeSetProvider.h>

#include "UNIX_VolumeSetBasedOnPSExtentDeps.h"


#ifndef PROPERTY_L_B_AS_MAPPED_BY_DECREMENTING
#define PROPERTY_L_B_AS_MAPPED_BY_DECREMENTING \
					"LBAsMappedByDecrementing"
#endif

#ifndef PROPERTY_L_B_A_MAPPING_INCLUDES_CHECK_DATA
#define PROPERTY_L_B_A_MAPPING_INCLUDES_CHECK_DATA \
					"LBAMappingIncludesCheckData"
#endif



class UNIX_VolumeSetBasedOnPSExtent :
	public CIM_BasedOn
{
public:

	UNIX_VolumeSetBasedOnPSExtent();
	~UNIX_VolumeSetBasedOnPSExtent();

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
	virtual Boolean getLBAsMappedByDecrementing(CIMProperty&) const;
	virtual Boolean getLBAsMappedByDecrementing() const;
	virtual void setLBAsMappedByDecrementing(Boolean&);
	virtual Boolean getLBAMappingIncludesCheckData(CIMProperty&) const;
	virtual Boolean getLBAMappingIncludesCheckData() const;
	virtual void setLBAMappingIncludesCheckData(Boolean&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _antecedent;
	CIMInstance _dependent;
	Uint64 _startingAddress;
	Uint64 _endingAddress;
	Uint16 _orderIndex;
	Boolean _lBAsMappedByDecrementing;
	Boolean _lBAMappingIncludesCheckData;

UNIX_ProtectedSpaceExtent _antecedentProtectedSpaceExtent;
UNIX_ProtectedSpaceExtentProvider _antecedentProtectedSpaceExtentProvider;

UNIX_VolumeSet _dependentVolumeSet;
UNIX_VolumeSetProvider _dependentVolumeSetProvider;

#	include "UNIX_VolumeSetBasedOnPSExtentPrivate.h"


};

#endif /* UNIX_VOLUMESETBASEDONPSEXTENT */
