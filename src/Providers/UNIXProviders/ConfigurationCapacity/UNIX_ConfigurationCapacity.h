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
CIM::Physical::Misc
*/


/* **** Description *** */
/*
ConfigurationCapacity provides information on the minimum and maximum numbers of power supplies, fans, disk drives, etc. that can be connected to or placed on/into a PhysicalElement (and the number that must be connected/added/removed at a time). The PhysicalElement whose configuration is described is identified using the ElementCapacity association, inherited from PhysicalCapacity. The object whose capacities are indicated (ie, the power supply or fan) is identified in the ObjectType and VendorCompatibilityStrings properties of this class. When ObjectType has a value of 25 (Multi-Purpose) then additional description of the object is provided in the VendorCompatibilityStrings property. Since the same min/max configurations can apply to multiple instances, this class is not defined as 'weak'. 
Examples of the use of the ConfigurationCapacity class are to describe that a 'control unit' Chassis may be connected to (at most) 4 other I/O chassis, or to describe what a StorageLibrary's cabinet may contain. Continuing the latter example, a particular StorageLibrary's cabinet might hold a minimum of 3 and a maximum of 9 TapeDrives, and a minimum of 88 and a maximum of 264 StorageMediaLocations ("Slots"). This information would be described in two instances of ConfigurationCapacity, both associated to the StorageLibrary's PhysicalPackage. 
This class does NOT represent the tradeoffs that are likely to be required of one resource for another. It simply represents capacities. In the case of the StorageLibrary, there may be only 2 valid configurations - 9 TapeDrives with 88 Slots, or 3 TapeDrives with 264 Slots. This class only conveys that 'up to' 9 Drives and 'up to' 264 slots may be available and are supported.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_PhysicalCapacity:
				Name String

			UNIX_ConfigurationCapacity:
				ObjectType UInt16
				OtherTypeDescription String
				MinimumCapacity UInt64
				MaximumCapacity UInt64
				Increment UInt32
				VendorCompatibilityStrings String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_PhysicalCapacity:

			UNIX_ConfigurationCapacity:


*/

#ifndef __UNIX_CONFIGURATIONCAPACITY_H
#define __UNIX_CONFIGURATIONCAPACITY_H


#include "CIM_PhysicalCapacity.h"

#include "UNIX_ConfigurationCapacityDeps.h"


#ifndef PROPERTY_OBJECT_TYPE
#define PROPERTY_OBJECT_TYPE \
					"ObjectType"
#endif

#ifndef PROPERTY_OTHER_TYPE_DESCRIPTION
#define PROPERTY_OTHER_TYPE_DESCRIPTION \
					"OtherTypeDescription"
#endif

#ifndef PROPERTY_MINIMUM_CAPACITY
#define PROPERTY_MINIMUM_CAPACITY \
					"MinimumCapacity"
#endif

#ifndef PROPERTY_MAXIMUM_CAPACITY
#define PROPERTY_MAXIMUM_CAPACITY \
					"MaximumCapacity"
#endif

#ifndef PROPERTY_INCREMENT
#define PROPERTY_INCREMENT \
					"Increment"
#endif

#ifndef PROPERTY_VENDOR_COMPATIBILITY_STRINGS
#define PROPERTY_VENDOR_COMPATIBILITY_STRINGS \
					"VendorCompatibilityStrings"
#endif



class UNIX_ConfigurationCapacity :
	public CIM_PhysicalCapacity
{
public:

	UNIX_ConfigurationCapacity();
	~UNIX_ConfigurationCapacity();

	virtual Boolean initialize();
	virtual Boolean load(int&);
	virtual Boolean loadByName(const String);
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
	virtual Boolean getName(CIMProperty&) const;
	virtual String getName() const;
	virtual void setName(String&);
	virtual Boolean getObjectType(CIMProperty&) const;
	virtual Uint16 getObjectType() const;
	virtual void setObjectType(Uint16&);
	virtual Boolean getOtherTypeDescription(CIMProperty&) const;
	virtual String getOtherTypeDescription() const;
	virtual void setOtherTypeDescription(String&);
	virtual Boolean getMinimumCapacity(CIMProperty&) const;
	virtual Uint64 getMinimumCapacity() const;
	virtual void setMinimumCapacity(Uint64&);
	virtual Boolean getMaximumCapacity(CIMProperty&) const;
	virtual Uint64 getMaximumCapacity() const;
	virtual void setMaximumCapacity(Uint64&);
	virtual Boolean getIncrement(CIMProperty&) const;
	virtual Uint32 getIncrement() const;
	virtual void setIncrement(Uint32&);
	virtual Boolean getVendorCompatibilityStrings(CIMProperty&) const;
	virtual Array<String> getVendorCompatibilityStrings() const;
	virtual void setVendorCompatibilityStrings(Array<String>&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	String _name;
	Uint16 _objectType;
	String _otherTypeDescription;
	Uint64 _minimumCapacity;
	Uint64 _maximumCapacity;
	Uint32 _increment;
	Array<String> _vendorCompatibilityStrings;

#	include "UNIX_ConfigurationCapacityPrivate.h"


};

#endif /* UNIX_CONFIGURATIONCAPACITY */
