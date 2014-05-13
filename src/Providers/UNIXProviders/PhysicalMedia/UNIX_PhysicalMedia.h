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
2.6.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Physical::PhysicalMedia
*/


/* **** Description *** */
/*
The PhysicalMedia class represents any type of documentation or storage medium, such as tapes, CDROMs, etc. This class is typically used to locate and manage Removable Media (versus Media sealed with the MediaAccessDevice, as a single Package, as is the case with hard disks). However, 'sealed' Media can also be modeled using this class, where the Media would then be associated with the PhysicalPackage using the PackagedComponent relationship.
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

			UNIX_PhysicalMedia:
				Capacity UInt64
				MediaType UInt16
				MediaDescription String
				WriteProtectOn Boolean
				CleanerMedia Boolean
				MediaSize Real32
				MaxMounts UInt64
				MountCount UInt64
				DualSided Boolean
				PhysicalLabels String
				LabelStates UInt16
				LabelFormats UInt16
				TimeOfLastMount DateTime
				TotalMountTime UInt64


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_ManagedSystemElement:

			CIM_PhysicalElement:

			CIM_PhysicalComponent:

			UNIX_PhysicalMedia:


*/

#ifndef __UNIX_PHYSICALMEDIA_H
#define __UNIX_PHYSICALMEDIA_H


#include "CIM_PhysicalComponent.h"

#include "UNIX_PhysicalMediaDeps.h"


#ifndef PROPERTY_CAPACITY
#define PROPERTY_CAPACITY \
					"Capacity"
#endif

#ifndef PROPERTY_MEDIA_TYPE
#define PROPERTY_MEDIA_TYPE \
					"MediaType"
#endif

#ifndef PROPERTY_MEDIA_DESCRIPTION
#define PROPERTY_MEDIA_DESCRIPTION \
					"MediaDescription"
#endif

#ifndef PROPERTY_WRITE_PROTECT_ON
#define PROPERTY_WRITE_PROTECT_ON \
					"WriteProtectOn"
#endif

#ifndef PROPERTY_CLEANER_MEDIA
#define PROPERTY_CLEANER_MEDIA \
					"CleanerMedia"
#endif

#ifndef PROPERTY_MEDIA_SIZE
#define PROPERTY_MEDIA_SIZE \
					"MediaSize"
#endif

#ifndef PROPERTY_MAX_MOUNTS
#define PROPERTY_MAX_MOUNTS \
					"MaxMounts"
#endif

#ifndef PROPERTY_MOUNT_COUNT
#define PROPERTY_MOUNT_COUNT \
					"MountCount"
#endif

#ifndef PROPERTY_DUAL_SIDED
#define PROPERTY_DUAL_SIDED \
					"DualSided"
#endif

#ifndef PROPERTY_PHYSICAL_LABELS
#define PROPERTY_PHYSICAL_LABELS \
					"PhysicalLabels"
#endif

#ifndef PROPERTY_LABEL_STATES
#define PROPERTY_LABEL_STATES \
					"LabelStates"
#endif

#ifndef PROPERTY_LABEL_FORMATS
#define PROPERTY_LABEL_FORMATS \
					"LabelFormats"
#endif

#ifndef PROPERTY_TIME_OF_LAST_MOUNT
#define PROPERTY_TIME_OF_LAST_MOUNT \
					"TimeOfLastMount"
#endif

#ifndef PROPERTY_TOTAL_MOUNT_TIME
#define PROPERTY_TOTAL_MOUNT_TIME \
					"TotalMountTime"
#endif



class UNIX_PhysicalMedia :
	public CIM_PhysicalComponent
{
public:

	UNIX_PhysicalMedia();
	~UNIX_PhysicalMedia();

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
	virtual Boolean getCapacity(CIMProperty&) const;
	virtual Uint64 getCapacity() const;
	virtual void setCapacity(Uint64&);
	virtual Boolean getMediaType(CIMProperty&) const;
	virtual Uint16 getMediaType() const;
	virtual void setMediaType(Uint16&);
	virtual Boolean getMediaDescription(CIMProperty&) const;
	virtual String getMediaDescription() const;
	virtual void setMediaDescription(String&);
	virtual Boolean getWriteProtectOn(CIMProperty&) const;
	virtual Boolean getWriteProtectOn() const;
	virtual void setWriteProtectOn(Boolean&);
	virtual Boolean getCleanerMedia(CIMProperty&) const;
	virtual Boolean getCleanerMedia() const;
	virtual void setCleanerMedia(Boolean&);
	virtual Boolean getMediaSize(CIMProperty&) const;
	virtual Real32 getMediaSize() const;
	virtual void setMediaSize(Real32&);
	virtual Boolean getMaxMounts(CIMProperty&) const;
	virtual Uint64 getMaxMounts() const;
	virtual void setMaxMounts(Uint64&);
	virtual Boolean getMountCount(CIMProperty&) const;
	virtual Uint64 getMountCount() const;
	virtual void setMountCount(Uint64&);
	virtual Boolean getDualSided(CIMProperty&) const;
	virtual Boolean getDualSided() const;
	virtual void setDualSided(Boolean&);
	virtual Boolean getPhysicalLabels(CIMProperty&) const;
	virtual Array<String> getPhysicalLabels() const;
	virtual void setPhysicalLabels(Array<String>&);
	virtual Boolean getLabelStates(CIMProperty&) const;
	virtual Array<Uint16> getLabelStates() const;
	virtual void setLabelStates(Array<Uint16>&);
	virtual Boolean getLabelFormats(CIMProperty&) const;
	virtual Array<Uint16> getLabelFormats() const;
	virtual void setLabelFormats(Array<Uint16>&);
	virtual Boolean getTimeOfLastMount(CIMProperty&) const;
	virtual CIMDateTime getTimeOfLastMount() const;
	virtual void setTimeOfLastMount(CIMDateTime&);
	virtual Boolean getTotalMountTime(CIMProperty&) const;
	virtual Uint64 getTotalMountTime() const;
	virtual void setTotalMountTime(Uint64&);


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
	Uint64 _capacity;
	Uint16 _mediaType;
	String _mediaDescription;
	Boolean _writeProtectOn;
	Boolean _cleanerMedia;
	Real32 _mediaSize;
	Uint64 _maxMounts;
	Uint64 _mountCount;
	Boolean _dualSided;
	Array<String> _physicalLabels;
	Array<Uint16> _labelStates;
	Array<Uint16> _labelFormats;
	CIMDateTime _timeOfLastMount;
	Uint64 _totalMountTime;

#	include "UNIX_PhysicalMediaPrivate.h"


};

#endif /* UNIX_PHYSICALMEDIA */
