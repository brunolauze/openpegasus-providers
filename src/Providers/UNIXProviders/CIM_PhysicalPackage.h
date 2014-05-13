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
2.18.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Physical::Package
*/


/* **** Description *** */
/*
The PhysicalPackage class represents PhysicalElements that contain or host other components. Examples are a Rack enclosure or an adapter Card.
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

			CIM_PhysicalPackage:
				RemovalConditions UInt16
				Removable Boolean
				Replaceable Boolean
				HotSwappable Boolean
				Height Real32
				Depth Real32
				Width Real32
				Weight Real32
				PackageType UInt16
				OtherPackageType String
				VendorCompatibilityStrings String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_ManagedSystemElement:

			CIM_PhysicalElement:

			CIM_PhysicalPackage:
				IsCompatible UInt32


*/

#ifndef __CIM_PHYSICALPACKAGE_H
#define __CIM_PHYSICALPACKAGE_H


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

#ifndef PROPERTY_HEIGHT
#define PROPERTY_HEIGHT \
					"Height"
#endif

#ifndef PROPERTY_DEPTH
#define PROPERTY_DEPTH \
					"Depth"
#endif

#ifndef PROPERTY_WIDTH
#define PROPERTY_WIDTH \
					"Width"
#endif

#ifndef PROPERTY_WEIGHT
#define PROPERTY_WEIGHT \
					"Weight"
#endif

#ifndef PROPERTY_PACKAGE_TYPE
#define PROPERTY_PACKAGE_TYPE \
					"PackageType"
#endif

#ifndef PROPERTY_OTHER_PACKAGE_TYPE
#define PROPERTY_OTHER_PACKAGE_TYPE \
					"OtherPackageType"
#endif

#ifndef PROPERTY_VENDOR_COMPATIBILITY_STRINGS
#define PROPERTY_VENDOR_COMPATIBILITY_STRINGS \
					"VendorCompatibilityStrings"
#endif



class CIM_PhysicalPackage :
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
	virtual Boolean getHeight(CIMProperty&) const=0;
	virtual Real32 getHeight() const=0;
	virtual void setHeight(Real32&)=0;
	virtual Boolean getDepth(CIMProperty&) const=0;
	virtual Real32 getDepth() const=0;
	virtual void setDepth(Real32&)=0;
	virtual Boolean getWidth(CIMProperty&) const=0;
	virtual Real32 getWidth() const=0;
	virtual void setWidth(Real32&)=0;
	virtual Boolean getWeight(CIMProperty&) const=0;
	virtual Real32 getWeight() const=0;
	virtual void setWeight(Real32&)=0;
	virtual Boolean getPackageType(CIMProperty&) const=0;
	virtual Uint16 getPackageType() const=0;
	virtual void setPackageType(Uint16&)=0;
	virtual Boolean getOtherPackageType(CIMProperty&) const=0;
	virtual String getOtherPackageType() const=0;
	virtual void setOtherPackageType(String&)=0;
	virtual Boolean getVendorCompatibilityStrings(CIMProperty&) const=0;
	virtual Array<String> getVendorCompatibilityStrings() const=0;
	virtual void setVendorCompatibilityStrings(Array<String>&)=0;

	virtual Uint32 invokeIsCompatible(
		CIMInstance &inElementToCheck
	)=0;



private:

};

#endif /* CIM_PHYSICALPACKAGE */
