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
2.14.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Physical::Package
*/


/* **** Description *** */
/*
The Chassis class represents the PhysicalElements that enclose other Elements and provide definable functionality, such as a desktop, processing node, UPS, disk or tape storage, or a combination of these.
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

			CIM_PhysicalFrame:
				CableManagementStrategy String
				ServicePhilosophy UInt16
				ServiceDescriptions String
				LockPresent Boolean
				AudibleAlarm Boolean
				VisibleAlarm Boolean
				SecurityBreach UInt16
				BreachDescription String
				IsLocked Boolean

			UNIX_Chassis:
				NumberOfPowerCords UInt16
				CurrentRequiredOrProduced SInt16
				HeatGeneration UInt16
				ChassisTypes UInt16
				TypeDescriptions String
				ChassisPackageType UInt16
				ChassisTypeDescription String
				MultipleSystemSupport UInt16
				RackMountable UInt16
				InputCurrentType UInt16
				OtherInputCurrentType String
				InputVoltage SInt32


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_ManagedSystemElement:

			CIM_PhysicalElement:

			CIM_PhysicalPackage:
				IsCompatible UInt32

			CIM_PhysicalFrame:

			UNIX_Chassis:


*/

#ifndef __UNIX_CHASSIS_H
#define __UNIX_CHASSIS_H


#include "CIM_PhysicalFrame.h"

#include "UNIX_ChassisDeps.h"


#ifndef PROPERTY_NUMBER_OF_POWER_CORDS
#define PROPERTY_NUMBER_OF_POWER_CORDS \
					"NumberOfPowerCords"
#endif

#ifndef PROPERTY_CURRENT_REQUIRED_OR_PRODUCED
#define PROPERTY_CURRENT_REQUIRED_OR_PRODUCED \
					"CurrentRequiredOrProduced"
#endif

#ifndef PROPERTY_HEAT_GENERATION
#define PROPERTY_HEAT_GENERATION \
					"HeatGeneration"
#endif

#ifndef PROPERTY_CHASSIS_TYPES
#define PROPERTY_CHASSIS_TYPES \
					"ChassisTypes"
#endif

#ifndef PROPERTY_TYPE_DESCRIPTIONS
#define PROPERTY_TYPE_DESCRIPTIONS \
					"TypeDescriptions"
#endif

#ifndef PROPERTY_CHASSIS_PACKAGE_TYPE
#define PROPERTY_CHASSIS_PACKAGE_TYPE \
					"ChassisPackageType"
#endif

#ifndef PROPERTY_CHASSIS_TYPE_DESCRIPTION
#define PROPERTY_CHASSIS_TYPE_DESCRIPTION \
					"ChassisTypeDescription"
#endif

#ifndef PROPERTY_MULTIPLE_SYSTEM_SUPPORT
#define PROPERTY_MULTIPLE_SYSTEM_SUPPORT \
					"MultipleSystemSupport"
#endif

#ifndef PROPERTY_RACK_MOUNTABLE
#define PROPERTY_RACK_MOUNTABLE \
					"RackMountable"
#endif

#ifndef PROPERTY_INPUT_CURRENT_TYPE
#define PROPERTY_INPUT_CURRENT_TYPE \
					"InputCurrentType"
#endif

#ifndef PROPERTY_OTHER_INPUT_CURRENT_TYPE
#define PROPERTY_OTHER_INPUT_CURRENT_TYPE \
					"OtherInputCurrentType"
#endif

#ifndef PROPERTY_INPUT_VOLTAGE
#define PROPERTY_INPUT_VOLTAGE \
					"InputVoltage"
#endif



class UNIX_Chassis :
	public CIM_PhysicalFrame
{
public:

	UNIX_Chassis();
	~UNIX_Chassis();

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
	virtual Boolean getInstallDate(CIMProperty&) const;
	virtual CIMDateTime getInstallDate() const;
	virtual void setInstallDate(CIMDateTime&);
	virtual Boolean getName(CIMProperty&) const;
	virtual String getName() const;
	virtual void setName(String&);
	virtual Boolean getOperationalStatus(CIMProperty&) const;
	virtual Array<Uint16> getOperationalStatus() const;
	virtual void setOperationalStatus(Array<Uint16>&);
	virtual Boolean getStatusDescriptions(CIMProperty&) const;
	virtual Array<String> getStatusDescriptions() const;
	virtual void setStatusDescriptions(Array<String>&);
	virtual Boolean getStatus(CIMProperty&) const;
	virtual String getStatus() const;
	virtual void setStatus(String&);
	virtual Boolean getHealthState(CIMProperty&) const;
	virtual Uint16 getHealthState() const;
	virtual void setHealthState(Uint16&);
	virtual Boolean getCommunicationStatus(CIMProperty&) const;
	virtual Uint16 getCommunicationStatus() const;
	virtual void setCommunicationStatus(Uint16&);
	virtual Boolean getDetailedStatus(CIMProperty&) const;
	virtual Uint16 getDetailedStatus() const;
	virtual void setDetailedStatus(Uint16&);
	virtual Boolean getOperatingStatus(CIMProperty&) const;
	virtual Uint16 getOperatingStatus() const;
	virtual void setOperatingStatus(Uint16&);
	virtual Boolean getPrimaryStatus(CIMProperty&) const;
	virtual Uint16 getPrimaryStatus() const;
	virtual void setPrimaryStatus(Uint16&);
	virtual Boolean getTag(CIMProperty&) const;
	virtual String getTag() const;
	virtual void setTag(String&);
	virtual Boolean getCreationClassName(CIMProperty&) const;
	virtual String getCreationClassName() const;
	virtual void setCreationClassName(String&);
	virtual Boolean getManufacturer(CIMProperty&) const;
	virtual String getManufacturer() const;
	virtual void setManufacturer(String&);
	virtual Boolean getModel(CIMProperty&) const;
	virtual String getModel() const;
	virtual void setModel(String&);
	virtual Boolean getSKU(CIMProperty&) const;
	virtual String getSKU() const;
	virtual void setSKU(String&);
	virtual Boolean getSerialNumber(CIMProperty&) const;
	virtual String getSerialNumber() const;
	virtual void setSerialNumber(String&);
	virtual Boolean getVersion(CIMProperty&) const;
	virtual String getVersion() const;
	virtual void setVersion(String&);
	virtual Boolean getPartNumber(CIMProperty&) const;
	virtual String getPartNumber() const;
	virtual void setPartNumber(String&);
	virtual Boolean getOtherIdentifyingInfo(CIMProperty&) const;
	virtual String getOtherIdentifyingInfo() const;
	virtual void setOtherIdentifyingInfo(String&);
	virtual Boolean getPoweredOn(CIMProperty&) const;
	virtual Boolean getPoweredOn() const;
	virtual void setPoweredOn(Boolean&);
	virtual Boolean getManufactureDate(CIMProperty&) const;
	virtual CIMDateTime getManufactureDate() const;
	virtual void setManufactureDate(CIMDateTime&);
	virtual Boolean getVendorEquipmentType(CIMProperty&) const;
	virtual String getVendorEquipmentType() const;
	virtual void setVendorEquipmentType(String&);
	virtual Boolean getUserTracking(CIMProperty&) const;
	virtual String getUserTracking() const;
	virtual void setUserTracking(String&);
	virtual Boolean getCanBeFRUed(CIMProperty&) const;
	virtual Boolean getCanBeFRUed() const;
	virtual void setCanBeFRUed(Boolean&);
	virtual Boolean getRemovalConditions(CIMProperty&) const;
	virtual Uint16 getRemovalConditions() const;
	virtual void setRemovalConditions(Uint16&);
	virtual Boolean getRemovable(CIMProperty&) const;
	virtual Boolean getRemovable() const;
	virtual void setRemovable(Boolean&);
	virtual Boolean getReplaceable(CIMProperty&) const;
	virtual Boolean getReplaceable() const;
	virtual void setReplaceable(Boolean&);
	virtual Boolean getHotSwappable(CIMProperty&) const;
	virtual Boolean getHotSwappable() const;
	virtual void setHotSwappable(Boolean&);
	virtual Boolean getHeight(CIMProperty&) const;
	virtual Real32 getHeight() const;
	virtual void setHeight(Real32&);
	virtual Boolean getDepth(CIMProperty&) const;
	virtual Real32 getDepth() const;
	virtual void setDepth(Real32&);
	virtual Boolean getWidth(CIMProperty&) const;
	virtual Real32 getWidth() const;
	virtual void setWidth(Real32&);
	virtual Boolean getWeight(CIMProperty&) const;
	virtual Real32 getWeight() const;
	virtual void setWeight(Real32&);
	virtual Boolean getPackageType(CIMProperty&) const;
	virtual Uint16 getPackageType() const;
	virtual void setPackageType(Uint16&);
	virtual Boolean getOtherPackageType(CIMProperty&) const;
	virtual String getOtherPackageType() const;
	virtual void setOtherPackageType(String&);
	virtual Boolean getVendorCompatibilityStrings(CIMProperty&) const;
	virtual Array<String> getVendorCompatibilityStrings() const;
	virtual void setVendorCompatibilityStrings(Array<String>&);
	virtual Boolean getCableManagementStrategy(CIMProperty&) const;
	virtual String getCableManagementStrategy() const;
	virtual void setCableManagementStrategy(String&);
	virtual Boolean getServicePhilosophy(CIMProperty&) const;
	virtual Array<Uint16> getServicePhilosophy() const;
	virtual void setServicePhilosophy(Array<Uint16>&);
	virtual Boolean getServiceDescriptions(CIMProperty&) const;
	virtual Array<String> getServiceDescriptions() const;
	virtual void setServiceDescriptions(Array<String>&);
	virtual Boolean getLockPresent(CIMProperty&) const;
	virtual Boolean getLockPresent() const;
	virtual void setLockPresent(Boolean&);
	virtual Boolean getAudibleAlarm(CIMProperty&) const;
	virtual Boolean getAudibleAlarm() const;
	virtual void setAudibleAlarm(Boolean&);
	virtual Boolean getVisibleAlarm(CIMProperty&) const;
	virtual Boolean getVisibleAlarm() const;
	virtual void setVisibleAlarm(Boolean&);
	virtual Boolean getSecurityBreach(CIMProperty&) const;
	virtual Uint16 getSecurityBreach() const;
	virtual void setSecurityBreach(Uint16&);
	virtual Boolean getBreachDescription(CIMProperty&) const;
	virtual String getBreachDescription() const;
	virtual void setBreachDescription(String&);
	virtual Boolean getIsLocked(CIMProperty&) const;
	virtual Boolean getIsLocked() const;
	virtual void setIsLocked(Boolean&);
	virtual Boolean getNumberOfPowerCords(CIMProperty&) const;
	virtual Uint16 getNumberOfPowerCords() const;
	virtual void setNumberOfPowerCords(Uint16&);
	virtual Boolean getCurrentRequiredOrProduced(CIMProperty&) const;
	virtual Sint16 getCurrentRequiredOrProduced() const;
	virtual void setCurrentRequiredOrProduced(Sint16&);
	virtual Boolean getHeatGeneration(CIMProperty&) const;
	virtual Uint16 getHeatGeneration() const;
	virtual void setHeatGeneration(Uint16&);
	virtual Boolean getChassisTypes(CIMProperty&) const;
	virtual Array<Uint16> getChassisTypes() const;
	virtual void setChassisTypes(Array<Uint16>&);
	virtual Boolean getTypeDescriptions(CIMProperty&) const;
	virtual Array<String> getTypeDescriptions() const;
	virtual void setTypeDescriptions(Array<String>&);
	virtual Boolean getChassisPackageType(CIMProperty&) const;
	virtual Uint16 getChassisPackageType() const;
	virtual void setChassisPackageType(Uint16&);
	virtual Boolean getChassisTypeDescription(CIMProperty&) const;
	virtual String getChassisTypeDescription() const;
	virtual void setChassisTypeDescription(String&);
	virtual Boolean getMultipleSystemSupport(CIMProperty&) const;
	virtual Uint16 getMultipleSystemSupport() const;
	virtual void setMultipleSystemSupport(Uint16&);
	virtual Boolean getRackMountable(CIMProperty&) const;
	virtual Uint16 getRackMountable() const;
	virtual void setRackMountable(Uint16&);
	virtual Boolean getInputCurrentType(CIMProperty&) const;
	virtual Uint16 getInputCurrentType() const;
	virtual void setInputCurrentType(Uint16&);
	virtual Boolean getOtherInputCurrentType(CIMProperty&) const;
	virtual String getOtherInputCurrentType() const;
	virtual void setOtherInputCurrentType(String&);
	virtual Boolean getInputVoltage(CIMProperty&) const;
	virtual Sint32 getInputVoltage() const;
	virtual void setInputVoltage(Sint32&);

	virtual Uint32 invokeIsCompatible(
		CIMInstance &inElementToCheck
	);



private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	CIMDateTime _installDate;
	String _name;
	Array<Uint16> _operationalStatus;
	Array<String> _statusDescriptions;
	String _status;
	Uint16 _healthState;
	Uint16 _communicationStatus;
	Uint16 _detailedStatus;
	Uint16 _operatingStatus;
	Uint16 _primaryStatus;
	String _tag;
	String _creationClassName;
	String _manufacturer;
	String _model;
	String _sKU;
	String _serialNumber;
	String _version;
	String _partNumber;
	String _otherIdentifyingInfo;
	Boolean _poweredOn;
	CIMDateTime _manufactureDate;
	String _vendorEquipmentType;
	String _userTracking;
	Boolean _canBeFRUed;
	Uint16 _removalConditions;
	Boolean _removable;
	Boolean _replaceable;
	Boolean _hotSwappable;
	Real32 _height;
	Real32 _depth;
	Real32 _width;
	Real32 _weight;
	Uint16 _packageType;
	String _otherPackageType;
	Array<String> _vendorCompatibilityStrings;
	String _cableManagementStrategy;
	Array<Uint16> _servicePhilosophy;
	Array<String> _serviceDescriptions;
	Boolean _lockPresent;
	Boolean _audibleAlarm;
	Boolean _visibleAlarm;
	Uint16 _securityBreach;
	String _breachDescription;
	Boolean _isLocked;
	Uint16 _numberOfPowerCords;
	Sint16 _currentRequiredOrProduced;
	Uint16 _heatGeneration;
	Array<Uint16> _chassisTypes;
	Array<String> _typeDescriptions;
	Uint16 _chassisPackageType;
	String _chassisTypeDescription;
	Uint16 _multipleSystemSupport;
	Uint16 _rackMountable;
	Uint16 _inputCurrentType;
	String _otherInputCurrentType;
	Sint32 _inputVoltage;

#	include "UNIX_ChassisPrivate.h"


};

#endif /* UNIX_CHASSIS */
