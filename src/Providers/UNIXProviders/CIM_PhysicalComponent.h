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
2.8.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Physical::Component
*/


/* **** Description *** */
/*
The PhysicalComponent class represents any low-level or basic Component within a Package. A Component object either can not or does not need to be decomposed into its constituent parts. For example, an ASIC (or Chip) can not be further decomposed. A tape for data storage (PhysicalMedia) does not need to be decomposed. Any PhysicalElement that is not a Link, Connector, or Package is a descendent (or member) of this class. For example, the UART chipset on an internal modem Card would be a subclass (if additional properties or associations are defined) or an instance of PhysicalComponent.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_ManagedSystemElement:
				InstallDate DateTime
				Name String
				OperationalStatus UInt16
				StatusDescriptions String
				Status String
				HealthState UInt16
				CommunicationStatus UInt16
				DetailedStatus UInt16
				OperatingStatus UInt16
				PrimaryStatus UInt16

			CIM_PhysicalElement:
				Tag String
				CreationClassName String
				Manufacturer String
				Model String
				SKU String
				SerialNumber String
				Version String
				PartNumber String
				OtherIdentifyingInfo String
				PoweredOn Boolean
				ManufactureDate DateTime
				VendorEquipmentType String
				UserTracking String
				CanBeFRUed Boolean

			CIM_PhysicalComponent:
				RemovalConditions UInt16
				Removable Boolean
				Replaceable Boolean
				HotSwappable Boolean


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_ManagedSystemElement:

			CIM_PhysicalElement:

			CIM_PhysicalComponent:


*/

#ifndef __CIM_PHYSICALCOMPONENT_H
#define __CIM_PHYSICALCOMPONENT_H


#include "CIM_PhysicalElement.h"


#ifndef PROPERTY_REMOVAL_CONDITIONS
#define PROPERTY_REMOVAL_CONDITIONS \
					"RemovalConditions"
#endif

#ifndef PROPERTY_REMOVABLE
#define PROPERTY_REMOVABLE \
					"Removable"
#endif

#ifndef PROPERTY_REPLACEABLE
#define PROPERTY_REPLACEABLE \
					"Replaceable"
#endif

#ifndef PROPERTY_HOT_SWAPPABLE
#define PROPERTY_HOT_SWAPPABLE \
					"HotSwappable"
#endif



class CIM_PhysicalComponent :
	public CIM_PhysicalElement
{
public:

	virtual Boolean initialize()=0;
	virtual Boolean load(int&)=0;
	virtual Boolean loadByName(const String)=0;
	virtual Boolean finalize()=0;
	virtual Boolean find(const Array<CIMKeyBinding>&)=0;
	virtual Boolean validateKey(CIMKeyBinding&) const=0;
	virtual void setScope(CIMName)=0;
	virtual void setCIMOMHandle(CIMOMHandle&)=0;
	virtual void clearInstance()=0;
	virtual Boolean loadInstance(const CIMInstance&)=0;
	virtual Boolean createInstance(const OperationContext&)=0;
	virtual Boolean modifyInstance(const OperationContext&)=0;
	virtual Boolean deleteInstance(const OperationContext&)=0;
	virtual Boolean validateInstance()=0;

	virtual Boolean getRemovalConditions(CIMProperty&) const=0;
	virtual Uint16 getRemovalConditions() const=0;
	virtual void setRemovalConditions(Uint16&)=0;
	virtual Boolean getRemovable(CIMProperty&) const=0;
	virtual Boolean getRemovable() const=0;
	virtual void setRemovable(Boolean&)=0;
	virtual Boolean getReplaceable(CIMProperty&) const=0;
	virtual Boolean getReplaceable() const=0;
	virtual void setReplaceable(Boolean&)=0;
	virtual Boolean getHotSwappable(CIMProperty&) const=0;
	virtual Boolean getHotSwappable() const=0;
	virtual void setHotSwappable(Boolean&)=0;


private:

};

#endif /* CIM_PHYSICALCOMPONENT */
