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
2.33.0
*/


/* **** ClassConstraint *** */
/*
inv:self.IsSpeedInMhz=true implies self.Speed = 0 and self.MaxMemorySpeed > 0
inv:self.IsSpeedInMhz=false implies self.MaxMemorySpeed=null
*/


/* **** UMLPackagePath *** */
/*
CIM::Physical::Component
*/


/* **** Description *** */
/*
PhysicalMemory is a subclass of CIM_Chip, representing low level memory devices - SIMMS, DIMMs, raw memory chips, etc.
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

			UNIX_Chip:
				FormFactor UInt16

			UNIX_PhysicalMemory:
				MemoryType UInt16
				TotalWidth UInt16
				DataWidth UInt16
				Speed UInt32
				Capacity UInt64
				BankLabel String
				PositionInRow UInt32
				InterleavePosition UInt32
				IsSpeedInMhz Boolean
				MaxMemorySpeed UInt32
				ConfiguredMemoryClockSpeed UInt32


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_ManagedSystemElement:

			CIM_PhysicalElement:

			CIM_PhysicalComponent:

			UNIX_Chip:

			UNIX_PhysicalMemory:


*/

#ifndef __UNIX_PHYSICALMEMORY_H
#define __UNIX_PHYSICALMEMORY_H


#include <Chip/UNIX_Chip.h>

#include "UNIX_PhysicalMemoryDeps.h"


#ifndef PROPERTY_MEMORY_TYPE
#define PROPERTY_MEMORY_TYPE \
					"MemoryType"
#endif

#ifndef PROPERTY_TOTAL_WIDTH
#define PROPERTY_TOTAL_WIDTH \
					"TotalWidth"
#endif

#ifndef PROPERTY_DATA_WIDTH
#define PROPERTY_DATA_WIDTH \
					"DataWidth"
#endif

#ifndef PROPERTY_SPEED
#define PROPERTY_SPEED \
					"Speed"
#endif

#ifndef PROPERTY_CAPACITY
#define PROPERTY_CAPACITY \
					"Capacity"
#endif

#ifndef PROPERTY_BANK_LABEL
#define PROPERTY_BANK_LABEL \
					"BankLabel"
#endif

#ifndef PROPERTY_POSITION_IN_ROW
#define PROPERTY_POSITION_IN_ROW \
					"PositionInRow"
#endif

#ifndef PROPERTY_INTERLEAVE_POSITION
#define PROPERTY_INTERLEAVE_POSITION \
					"InterleavePosition"
#endif

#ifndef PROPERTY_IS_SPEED_IN_MHZ
#define PROPERTY_IS_SPEED_IN_MHZ \
					"IsSpeedInMhz"
#endif

#ifndef PROPERTY_MAX_MEMORY_SPEED
#define PROPERTY_MAX_MEMORY_SPEED \
					"MaxMemorySpeed"
#endif

#ifndef PROPERTY_CONFIGURED_MEMORY_CLOCK_SPEED
#define PROPERTY_CONFIGURED_MEMORY_CLOCK_SPEED \
					"ConfiguredMemoryClockSpeed"
#endif



class UNIX_PhysicalMemory :
	public UNIX_Chip
{
public:

	UNIX_PhysicalMemory();
	~UNIX_PhysicalMemory();

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
	virtual Boolean getFormFactor(CIMProperty&) const;
	virtual Uint16 getFormFactor() const;
	virtual void setFormFactor(Uint16&);
	virtual Boolean getMemoryType(CIMProperty&) const;
	virtual Uint16 getMemoryType() const;
	virtual void setMemoryType(Uint16&);
	virtual Boolean getTotalWidth(CIMProperty&) const;
	virtual Uint16 getTotalWidth() const;
	virtual void setTotalWidth(Uint16&);
	virtual Boolean getDataWidth(CIMProperty&) const;
	virtual Uint16 getDataWidth() const;
	virtual void setDataWidth(Uint16&);
	virtual Boolean getSpeed(CIMProperty&) const;
	virtual Uint32 getSpeed() const;
	virtual void setSpeed(Uint32&);
	virtual Boolean getCapacity(CIMProperty&) const;
	virtual Uint64 getCapacity() const;
	virtual void setCapacity(Uint64&);
	virtual Boolean getBankLabel(CIMProperty&) const;
	virtual String getBankLabel() const;
	virtual void setBankLabel(String&);
	virtual Boolean getPositionInRow(CIMProperty&) const;
	virtual Uint32 getPositionInRow() const;
	virtual void setPositionInRow(Uint32&);
	virtual Boolean getInterleavePosition(CIMProperty&) const;
	virtual Uint32 getInterleavePosition() const;
	virtual void setInterleavePosition(Uint32&);
	virtual Boolean getIsSpeedInMhz(CIMProperty&) const;
	virtual Boolean getIsSpeedInMhz() const;
	virtual void setIsSpeedInMhz(Boolean&);
	virtual Boolean getMaxMemorySpeed(CIMProperty&) const;
	virtual Uint32 getMaxMemorySpeed() const;
	virtual void setMaxMemorySpeed(Uint32&);
	virtual Boolean getConfiguredMemoryClockSpeed(CIMProperty&) const;
	virtual Uint32 getConfiguredMemoryClockSpeed() const;
	virtual void setConfiguredMemoryClockSpeed(Uint32&);


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
	Uint16 _formFactor;
	Uint16 _memoryType;
	Uint16 _totalWidth;
	Uint16 _dataWidth;
	Uint32 _speed;
	Uint64 _capacity;
	String _bankLabel;
	Uint32 _positionInRow;
	Uint32 _interleavePosition;
	Boolean _isSpeedInMhz;
	Uint32 _maxMemorySpeed;
	Uint32 _configuredMemoryClockSpeed;

#	include "UNIX_PhysicalMemoryPrivate.h"


};

#endif /* UNIX_PHYSICALMEMORY */
