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
CIM::Physical::Connector
*/


/* **** Description *** */
/*
The Slot class represents Connectors into which Packages are inserted. For example, a PhysicalPackage that is a DiskDrive may be inserted into an SCA 'Slot'. As another example, a Card (subclass of PhysicalPackage) may be inserted into a 16-, 32-, or 64-bit expansion 'Slot' on a HostingBoard. PCI or PCMCIA Type III Slots are examples of the latter.
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

			UNIX_PhysicalConnector:
				ConnectorPinout String
				ConnectorType UInt16
				OtherTypeDescription String
				ConnectorGender UInt16
				ConnectorElectricalCharacteristics UInt16
				OtherElectricalCharacteristics String
				NumPhysicalPins UInt32
				ConnectorLayout UInt16
				ConnectorDescription String

			UNIX_Slot:
				SupportsHotPlug Boolean
				HeightAllowed Real32
				LengthAllowed Real32
				MaxDataWidth UInt16
				VccMixedVoltageSupport UInt16
				VppMixedVoltageSupport UInt16
				ThermalRating UInt32
				SpecialPurpose Boolean
				PurposeDescription String
				Number UInt16
				Powered Boolean
				OpenSwitch Boolean
				MaxLinkWidth UInt16
				VendorCompatibilityStrings String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_ManagedSystemElement:

			CIM_PhysicalElement:

			UNIX_PhysicalConnector:

			UNIX_Slot:


*/

#ifndef __UNIX_SLOT_H
#define __UNIX_SLOT_H


#include <PhysicalConnector/UNIX_PhysicalConnector.h>

#include "UNIX_SlotDeps.h"


#ifndef PROPERTY_SUPPORTS_HOT_PLUG
#define PROPERTY_SUPPORTS_HOT_PLUG \
					"SupportsHotPlug"
#endif

#ifndef PROPERTY_HEIGHT_ALLOWED
#define PROPERTY_HEIGHT_ALLOWED \
					"HeightAllowed"
#endif

#ifndef PROPERTY_LENGTH_ALLOWED
#define PROPERTY_LENGTH_ALLOWED \
					"LengthAllowed"
#endif

#ifndef PROPERTY_MAX_DATA_WIDTH
#define PROPERTY_MAX_DATA_WIDTH \
					"MaxDataWidth"
#endif

#ifndef PROPERTY_VCC_MIXED_VOLTAGE_SUPPORT
#define PROPERTY_VCC_MIXED_VOLTAGE_SUPPORT \
					"VccMixedVoltageSupport"
#endif

#ifndef PROPERTY_VPP_MIXED_VOLTAGE_SUPPORT
#define PROPERTY_VPP_MIXED_VOLTAGE_SUPPORT \
					"VppMixedVoltageSupport"
#endif

#ifndef PROPERTY_THERMAL_RATING
#define PROPERTY_THERMAL_RATING \
					"ThermalRating"
#endif

#ifndef PROPERTY_SPECIAL_PURPOSE
#define PROPERTY_SPECIAL_PURPOSE \
					"SpecialPurpose"
#endif

#ifndef PROPERTY_PURPOSE_DESCRIPTION
#define PROPERTY_PURPOSE_DESCRIPTION \
					"PurposeDescription"
#endif

#ifndef PROPERTY_NUMBER
#define PROPERTY_NUMBER \
					"Number"
#endif

#ifndef PROPERTY_POWERED
#define PROPERTY_POWERED \
					"Powered"
#endif

#ifndef PROPERTY_OPEN_SWITCH
#define PROPERTY_OPEN_SWITCH \
					"OpenSwitch"
#endif

#ifndef PROPERTY_MAX_LINK_WIDTH
#define PROPERTY_MAX_LINK_WIDTH \
					"MaxLinkWidth"
#endif

#ifndef PROPERTY_VENDOR_COMPATIBILITY_STRINGS
#define PROPERTY_VENDOR_COMPATIBILITY_STRINGS \
					"VendorCompatibilityStrings"
#endif



class UNIX_Slot :
	public UNIX_PhysicalConnector
{
public:

	UNIX_Slot();
	~UNIX_Slot();

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
	virtual Boolean getConnectorPinout(CIMProperty&) const;
	virtual String getConnectorPinout() const;
	virtual void setConnectorPinout(String&);
	virtual Boolean getConnectorType(CIMProperty&) const;
	virtual Array<Uint16> getConnectorType() const;
	virtual void setConnectorType(Array<Uint16>&);
	virtual Boolean getOtherTypeDescription(CIMProperty&) const;
	virtual String getOtherTypeDescription() const;
	virtual void setOtherTypeDescription(String&);
	virtual Boolean getConnectorGender(CIMProperty&) const;
	virtual Uint16 getConnectorGender() const;
	virtual void setConnectorGender(Uint16&);
	virtual Boolean getConnectorElectricalCharacteristics(CIMProperty&) const;
	virtual Array<Uint16> getConnectorElectricalCharacteristics() const;
	virtual void setConnectorElectricalCharacteristics(Array<Uint16>&);
	virtual Boolean getOtherElectricalCharacteristics(CIMProperty&) const;
	virtual Array<String> getOtherElectricalCharacteristics() const;
	virtual void setOtherElectricalCharacteristics(Array<String>&);
	virtual Boolean getNumPhysicalPins(CIMProperty&) const;
	virtual Uint32 getNumPhysicalPins() const;
	virtual void setNumPhysicalPins(Uint32&);
	virtual Boolean getConnectorLayout(CIMProperty&) const;
	virtual Uint16 getConnectorLayout() const;
	virtual void setConnectorLayout(Uint16&);
	virtual Boolean getConnectorDescription(CIMProperty&) const;
	virtual String getConnectorDescription() const;
	virtual void setConnectorDescription(String&);
	virtual Boolean getSupportsHotPlug(CIMProperty&) const;
	virtual Boolean getSupportsHotPlug() const;
	virtual void setSupportsHotPlug(Boolean&);
	virtual Boolean getHeightAllowed(CIMProperty&) const;
	virtual Real32 getHeightAllowed() const;
	virtual void setHeightAllowed(Real32&);
	virtual Boolean getLengthAllowed(CIMProperty&) const;
	virtual Real32 getLengthAllowed() const;
	virtual void setLengthAllowed(Real32&);
	virtual Boolean getMaxDataWidth(CIMProperty&) const;
	virtual Uint16 getMaxDataWidth() const;
	virtual void setMaxDataWidth(Uint16&);
	virtual Boolean getVccMixedVoltageSupport(CIMProperty&) const;
	virtual Array<Uint16> getVccMixedVoltageSupport() const;
	virtual void setVccMixedVoltageSupport(Array<Uint16>&);
	virtual Boolean getVppMixedVoltageSupport(CIMProperty&) const;
	virtual Array<Uint16> getVppMixedVoltageSupport() const;
	virtual void setVppMixedVoltageSupport(Array<Uint16>&);
	virtual Boolean getThermalRating(CIMProperty&) const;
	virtual Uint32 getThermalRating() const;
	virtual void setThermalRating(Uint32&);
	virtual Boolean getSpecialPurpose(CIMProperty&) const;
	virtual Boolean getSpecialPurpose() const;
	virtual void setSpecialPurpose(Boolean&);
	virtual Boolean getPurposeDescription(CIMProperty&) const;
	virtual String getPurposeDescription() const;
	virtual void setPurposeDescription(String&);
	virtual Boolean getNumber(CIMProperty&) const;
	virtual Uint16 getNumber() const;
	virtual void setNumber(Uint16&);
	virtual Boolean getPowered(CIMProperty&) const;
	virtual Boolean getPowered() const;
	virtual void setPowered(Boolean&);
	virtual Boolean getOpenSwitch(CIMProperty&) const;
	virtual Boolean getOpenSwitch() const;
	virtual void setOpenSwitch(Boolean&);
	virtual Boolean getMaxLinkWidth(CIMProperty&) const;
	virtual Uint16 getMaxLinkWidth() const;
	virtual void setMaxLinkWidth(Uint16&);
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
	String _connectorPinout;
	Array<Uint16> _connectorType;
	String _otherTypeDescription;
	Uint16 _connectorGender;
	Array<Uint16> _connectorElectricalCharacteristics;
	Array<String> _otherElectricalCharacteristics;
	Uint32 _numPhysicalPins;
	Uint16 _connectorLayout;
	String _connectorDescription;
	Boolean _supportsHotPlug;
	Real32 _heightAllowed;
	Real32 _lengthAllowed;
	Uint16 _maxDataWidth;
	Array<Uint16> _vccMixedVoltageSupport;
	Array<Uint16> _vppMixedVoltageSupport;
	Uint32 _thermalRating;
	Boolean _specialPurpose;
	String _purposeDescription;
	Uint16 _number;
	Boolean _powered;
	Boolean _openSwitch;
	Uint16 _maxLinkWidth;
	Array<String> _vendorCompatibilityStrings;

#	include "UNIX_SlotPrivate.h"


};

#endif /* UNIX_SLOT */
