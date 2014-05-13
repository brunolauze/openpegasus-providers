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
This class is a subclass of the abstract class SchedulingElement. It introduces a new property, WeightingFactor, to give some inputs a higher probability of being serviced than other inputs. It also introduces a Priority property, to serve as a tiebreaker to be used when inputs have equal weighting factors. As is the case with all subclasses of SchedulingElement, the input associated with an instance of WRRSchedulingElement is of one of two types: either a queue, or another scheduler. Because scheduling of this type is always work conserving, the inherited boolean property, WorkConserving, is restricted to TRUE in this class.
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

			UNIX_WRRSchedulingElement:
				WeightingFactor UInt32
				Priority UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_SchedulingElement:

			UNIX_WRRSchedulingElement:


*/

#ifndef __UNIX_WRRSCHEDULINGELEMENT_H
#define __UNIX_WRRSCHEDULINGELEMENT_H


#include "CIM_SchedulingElement.h"

#include "UNIX_WRRSchedulingElementDeps.h"


#ifndef PROPERTY_WEIGHTING_FACTOR
#define PROPERTY_WEIGHTING_FACTOR \
					"WeightingFactor"
#endif

#ifndef PROPERTY_PRIORITY
#define PROPERTY_PRIORITY \
					"Priority"
#endif



class UNIX_WRRSchedulingElement :
	public CIM_SchedulingElement
{
public:

	UNIX_WRRSchedulingElement();
	~UNIX_WRRSchedulingElement();

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
	virtual Boolean getWeightingFactor(CIMProperty&) const;
	virtual Uint32 getWeightingFactor() const;
	virtual void setWeightingFactor(Uint32&);
	virtual Boolean getPriority(CIMProperty&) const;
	virtual Uint16 getPriority() const;
	virtual void setPriority(Uint16&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	Boolean _workConserving;
	Uint32 _weightingFactor;
	Uint16 _priority;

#	include "UNIX_WRRSchedulingElementPrivate.h"


};

#endif /* UNIX_WRRSCHEDULINGELEMENT */
