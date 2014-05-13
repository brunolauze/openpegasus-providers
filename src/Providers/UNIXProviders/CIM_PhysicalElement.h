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


/* **** Abstract *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.10.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Core::Physical
*/


/* **** Description *** */
/*
Subclasses of CIM_PhysicalElement define any component of a System that has a distinct physical identity. Instances of this class can be defined as an object that can be seen or touched. All Processes, Files, and LogicalDevices are considered not to be Physical Elements. For example, it is not possible to touch the functionality of a 'modem.' You can touch only the card or package that implements the modem. The same card could also implement a LAN adapter. PhysicalElements are tangible ManagedSystemElements that have a physical manifestation of some sort. 

Note that the properties of PhysicalElement describe a hardware entity. Possible replacement (FRU) information is defined by following the ElementFRU association to one or more instances of the ReplacementFRU class. This definition allows a client to determine what hardware can be replaced (FRUed) and what 'spare' parts might be required by a customer or engineer doing the replacement. If it can be instrumented or manually determined that an element actually replaced (FRUed) another, then this can be described in the model using the ElementHasBeenFRUed association.
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


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_ManagedSystemElement:

			CIM_PhysicalElement:


*/

#ifndef __CIM_PHYSICALELEMENT_H
#define __CIM_PHYSICALELEMENT_H


#include "CIM_ManagedSystemElement.h"


#ifndef PROPERTY_TAG
#define PROPERTY_TAG \
					"Tag"
#endif

#ifndef PROPERTY_CREATION_CLASS_NAME
#define PROPERTY_CREATION_CLASS_NAME \
					"CreationClassName"
#endif

#ifndef PROPERTY_MANUFACTURER
#define PROPERTY_MANUFACTURER \
					"Manufacturer"
#endif

#ifndef PROPERTY_MODEL
#define PROPERTY_MODEL \
					"Model"
#endif

#ifndef PROPERTY_S_K_U
#define PROPERTY_S_K_U \
					"SKU"
#endif

#ifndef PROPERTY_SERIAL_NUMBER
#define PROPERTY_SERIAL_NUMBER \
					"SerialNumber"
#endif

#ifndef PROPERTY_VERSION
#define PROPERTY_VERSION \
					"Version"
#endif

#ifndef PROPERTY_PART_NUMBER
#define PROPERTY_PART_NUMBER \
					"PartNumber"
#endif

#ifndef PROPERTY_OTHER_IDENTIFYING_INFO
#define PROPERTY_OTHER_IDENTIFYING_INFO \
					"OtherIdentifyingInfo"
#endif

#ifndef PROPERTY_POWERED_ON
#define PROPERTY_POWERED_ON \
					"PoweredOn"
#endif

#ifndef PROPERTY_MANUFACTURE_DATE
#define PROPERTY_MANUFACTURE_DATE \
					"ManufactureDate"
#endif

#ifndef PROPERTY_VENDOR_EQUIPMENT_TYPE
#define PROPERTY_VENDOR_EQUIPMENT_TYPE \
					"VendorEquipmentType"
#endif

#ifndef PROPERTY_USER_TRACKING
#define PROPERTY_USER_TRACKING \
					"UserTracking"
#endif

#ifndef PROPERTY_CAN_BE_F_R_UED
#define PROPERTY_CAN_BE_F_R_UED \
					"CanBeFRUed"
#endif



class CIM_PhysicalElement :
	public CIM_ManagedSystemElement
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

	virtual Boolean getTag(CIMProperty&) const=0;
	virtual String getTag() const=0;
	virtual void setTag(String&)=0;
	virtual Boolean getDescription(CIMProperty&) const=0;
	virtual String getDescription() const=0;
	virtual void setDescription(String&)=0;
	virtual Boolean getCreationClassName(CIMProperty&) const=0;
	virtual String getCreationClassName() const=0;
	virtual void setCreationClassName(String&)=0;
	virtual Boolean getElementName(CIMProperty&) const=0;
	virtual String getElementName() const=0;
	virtual void setElementName(String&)=0;
	virtual Boolean getManufacturer(CIMProperty&) const=0;
	virtual String getManufacturer() const=0;
	virtual void setManufacturer(String&)=0;
	virtual Boolean getModel(CIMProperty&) const=0;
	virtual String getModel() const=0;
	virtual void setModel(String&)=0;
	virtual Boolean getSKU(CIMProperty&) const=0;
	virtual String getSKU() const=0;
	virtual void setSKU(String&)=0;
	virtual Boolean getSerialNumber(CIMProperty&) const=0;
	virtual String getSerialNumber() const=0;
	virtual void setSerialNumber(String&)=0;
	virtual Boolean getVersion(CIMProperty&) const=0;
	virtual String getVersion() const=0;
	virtual void setVersion(String&)=0;
	virtual Boolean getPartNumber(CIMProperty&) const=0;
	virtual String getPartNumber() const=0;
	virtual void setPartNumber(String&)=0;
	virtual Boolean getOtherIdentifyingInfo(CIMProperty&) const=0;
	virtual String getOtherIdentifyingInfo() const=0;
	virtual void setOtherIdentifyingInfo(String&)=0;
	virtual Boolean getPoweredOn(CIMProperty&) const=0;
	virtual Boolean getPoweredOn() const=0;
	virtual void setPoweredOn(Boolean&)=0;
	virtual Boolean getManufactureDate(CIMProperty&) const=0;
	virtual CIMDateTime getManufactureDate() const=0;
	virtual void setManufactureDate(CIMDateTime&)=0;
	virtual Boolean getVendorEquipmentType(CIMProperty&) const=0;
	virtual String getVendorEquipmentType() const=0;
	virtual void setVendorEquipmentType(String&)=0;
	virtual Boolean getUserTracking(CIMProperty&) const=0;
	virtual String getUserTracking() const=0;
	virtual void setUserTracking(String&)=0;
	virtual Boolean getCanBeFRUed(CIMProperty&) const=0;
	virtual Boolean getCanBeFRUed() const=0;
	virtual void setCanBeFRUed(Boolean&)=0;


private:

};

#endif /* CIM_PHYSICALELEMENT */
