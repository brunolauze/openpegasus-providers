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
2.7.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Network::QoS
*/


/* **** Description *** */
/*
This class is a subclass of the abstract class SchedulingElement. It introduces five new properties to support bandwidth-based scheduling. As is the case with all subclasses of SchedulingElement, the input associated with an instance of AllocationSchedulingElement is of one of two types: either a queue, or another scheduler.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_SchedulingElement:
				WorkConserving Boolean

			UNIX_AllocationSchedulingElement:
				AllocationUnits UInt16
				BandwidthAllocation UInt32
				BurstAllocation UInt32
				CanShare Boolean
				WorkFlexible Boolean


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_SchedulingElement:

			UNIX_AllocationSchedulingElement:


*/

#ifndef __UNIX_ALLOCATIONSCHEDULINGELEMENT_H
#define __UNIX_ALLOCATIONSCHEDULINGELEMENT_H


#include "CIM_SchedulingElement.h"

#include "UNIX_AllocationSchedulingElementDeps.h"


#ifndef PROPERTY_ALLOCATION_UNITS
#define PROPERTY_ALLOCATION_UNITS \
					"AllocationUnits"
#endif

#ifndef PROPERTY_BANDWIDTH_ALLOCATION
#define PROPERTY_BANDWIDTH_ALLOCATION \
					"BandwidthAllocation"
#endif

#ifndef PROPERTY_BURST_ALLOCATION
#define PROPERTY_BURST_ALLOCATION \
					"BurstAllocation"
#endif

#ifndef PROPERTY_CAN_SHARE
#define PROPERTY_CAN_SHARE \
					"CanShare"
#endif

#ifndef PROPERTY_WORK_FLEXIBLE
#define PROPERTY_WORK_FLEXIBLE \
					"WorkFlexible"
#endif



class UNIX_AllocationSchedulingElement :
	public CIM_SchedulingElement
{
public:

	UNIX_AllocationSchedulingElement();
	~UNIX_AllocationSchedulingElement();

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
	virtual Boolean getWorkConserving(CIMProperty&) const;
	virtual Boolean getWorkConserving() const;
	virtual void setWorkConserving(Boolean&);
	virtual Boolean getAllocationUnits(CIMProperty&) const;
	virtual Uint16 getAllocationUnits() const;
	virtual void setAllocationUnits(Uint16&);
	virtual Boolean getBandwidthAllocation(CIMProperty&) const;
	virtual Uint32 getBandwidthAllocation() const;
	virtual void setBandwidthAllocation(Uint32&);
	virtual Boolean getBurstAllocation(CIMProperty&) const;
	virtual Uint32 getBurstAllocation() const;
	virtual void setBurstAllocation(Uint32&);
	virtual Boolean getCanShare(CIMProperty&) const;
	virtual Boolean getCanShare() const;
	virtual void setCanShare(Boolean&);
	virtual Boolean getWorkFlexible(CIMProperty&) const;
	virtual Boolean getWorkFlexible() const;
	virtual void setWorkFlexible(Boolean&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	Boolean _workConserving;
	Uint16 _allocationUnits;
	Uint32 _bandwidthAllocation;
	Uint32 _burstAllocation;
	Boolean _canShare;
	Boolean _workFlexible;

#	include "UNIX_AllocationSchedulingElementPrivate.h"


};

#endif /* UNIX_ALLOCATIONSCHEDULINGELEMENT */
