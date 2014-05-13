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
CIM::Physical::Connector
*/


/* **** Description *** */
/*
AdjacentSlots describes the layout of Slots on a HostingBoard or adapter Card. Information like the distance between the Slots and whether they are 'shared' (if one is populated, then the other Slot can not be used), is conveyed as properties of the association.
*/


/*
			 *** Properties ***

			UNIX_AdjacentSlots:
				SlotA Reference
				SlotB Reference
				DistanceBetweenSlots Real32
				SharedSlots Boolean


*/


/*
			 *** Methods ***

			UNIX_AdjacentSlots:


*/

#ifndef __UNIX_ADJACENTSLOTS_H
#define __UNIX_ADJACENTSLOTS_H


#include "CIM_ClassBase.h"

#include "UNIX_AdjacentSlotsDeps.h"


#ifndef PROPERTY_SLOT_A
#define PROPERTY_SLOT_A \
					"SlotA"
#endif

#ifndef PROPERTY_SLOT_B
#define PROPERTY_SLOT_B \
					"SlotB"
#endif

#ifndef PROPERTY_DISTANCE_BETWEEN_SLOTS
#define PROPERTY_DISTANCE_BETWEEN_SLOTS \
					"DistanceBetweenSlots"
#endif

#ifndef PROPERTY_SHARED_SLOTS
#define PROPERTY_SHARED_SLOTS \
					"SharedSlots"
#endif



class UNIX_AdjacentSlots :
	public CIM_ClassBase
{
public:

	UNIX_AdjacentSlots();
	~UNIX_AdjacentSlots();

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

	virtual Boolean getSlotA(CIMProperty&) const;
	virtual CIMInstance getSlotA() const;
	virtual void setSlotA(CIMInstance&);
	virtual Boolean getSlotB(CIMProperty&) const;
	virtual CIMInstance getSlotB() const;
	virtual void setSlotB(CIMInstance&);
	virtual Boolean getDistanceBetweenSlots(CIMProperty&) const;
	virtual Real32 getDistanceBetweenSlots() const;
	virtual void setDistanceBetweenSlots(Real32&);
	virtual Boolean getSharedSlots(CIMProperty&) const;
	virtual Boolean getSharedSlots() const;
	virtual void setSharedSlots(Boolean&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _slotA;
	CIMInstance _slotB;
	Real32 _distanceBetweenSlots;
	Boolean _sharedSlots;

#	include "UNIX_AdjacentSlotsPrivate.h"


};

#endif /* UNIX_ADJACENTSLOTS */
