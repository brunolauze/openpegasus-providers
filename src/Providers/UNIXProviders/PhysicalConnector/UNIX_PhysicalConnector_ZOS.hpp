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


using PROVIDER_LIB_NS::CIMHelper;


UNIX_PhysicalConnector::UNIX_PhysicalConnector(void)
{
}

UNIX_PhysicalConnector::~UNIX_PhysicalConnector(void)
{
}

Boolean UNIX_PhysicalConnector::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_PhysicalConnector::getInstanceID() const
{
	return _instanceID;
}

void UNIX_PhysicalConnector::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_PhysicalConnector::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_PhysicalConnector::getCaption() const
{
	return _caption;
}

void UNIX_PhysicalConnector::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_PhysicalConnector::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_PhysicalConnector::getDescription() const
{
	return _description;
}

void UNIX_PhysicalConnector::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_PhysicalConnector::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_PhysicalConnector::getElementName() const
{
	return _elementName;
}

void UNIX_PhysicalConnector::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_PhysicalConnector::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_PhysicalConnector::getGeneration() const
{
	return _generation;
}

void UNIX_PhysicalConnector::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_PhysicalConnector::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_PhysicalConnector::getInstallDate() const
{
	return _installDate;
}

void UNIX_PhysicalConnector::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_PhysicalConnector::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_PhysicalConnector::getName() const
{
	return _name;
}

void UNIX_PhysicalConnector::setName(String &value)
{
	_name = value;
}

Boolean UNIX_PhysicalConnector::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_PhysicalConnector::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_PhysicalConnector::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_PhysicalConnector::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_PhysicalConnector::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_PhysicalConnector::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_PhysicalConnector::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_PhysicalConnector::getStatus() const
{
	return _status;
}

void UNIX_PhysicalConnector::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_PhysicalConnector::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_PhysicalConnector::getHealthState() const
{
	return _healthState;
}

void UNIX_PhysicalConnector::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_PhysicalConnector::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_PhysicalConnector::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_PhysicalConnector::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_PhysicalConnector::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_PhysicalConnector::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_PhysicalConnector::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_PhysicalConnector::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_PhysicalConnector::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_PhysicalConnector::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_PhysicalConnector::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_PhysicalConnector::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_PhysicalConnector::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_PhysicalConnector::getTag(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TAG, getTag());
	return true;
}

String UNIX_PhysicalConnector::getTag() const
{
	return _tag;
}

void UNIX_PhysicalConnector::setTag(String &value)
{
	_tag = value;
}

Boolean UNIX_PhysicalConnector::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_PhysicalConnector::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_PhysicalConnector::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_PhysicalConnector::getManufacturer(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANUFACTURER, getManufacturer());
	return true;
}

String UNIX_PhysicalConnector::getManufacturer() const
{
	return _manufacturer;
}

void UNIX_PhysicalConnector::setManufacturer(String &value)
{
	_manufacturer = value;
}

Boolean UNIX_PhysicalConnector::getModel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MODEL, getModel());
	return true;
}

String UNIX_PhysicalConnector::getModel() const
{
	return _model;
}

void UNIX_PhysicalConnector::setModel(String &value)
{
	_model = value;
}

Boolean UNIX_PhysicalConnector::getSKU(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_K_U, getSKU());
	return true;
}

String UNIX_PhysicalConnector::getSKU() const
{
	return _sKU;
}

void UNIX_PhysicalConnector::setSKU(String &value)
{
	_sKU = value;
}

Boolean UNIX_PhysicalConnector::getSerialNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERIAL_NUMBER, getSerialNumber());
	return true;
}

String UNIX_PhysicalConnector::getSerialNumber() const
{
	return _serialNumber;
}

void UNIX_PhysicalConnector::setSerialNumber(String &value)
{
	_serialNumber = value;
}

Boolean UNIX_PhysicalConnector::getVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERSION, getVersion());
	return true;
}

String UNIX_PhysicalConnector::getVersion() const
{
	return _version;
}

void UNIX_PhysicalConnector::setVersion(String &value)
{
	_version = value;
}

Boolean UNIX_PhysicalConnector::getPartNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PART_NUMBER, getPartNumber());
	return true;
}

String UNIX_PhysicalConnector::getPartNumber() const
{
	return _partNumber;
}

void UNIX_PhysicalConnector::setPartNumber(String &value)
{
	_partNumber = value;
}

Boolean UNIX_PhysicalConnector::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

String UNIX_PhysicalConnector::getOtherIdentifyingInfo() const
{
	return _otherIdentifyingInfo;
}

void UNIX_PhysicalConnector::setOtherIdentifyingInfo(String &value)
{
	_otherIdentifyingInfo = value;
}

Boolean UNIX_PhysicalConnector::getPoweredOn(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWERED_ON, getPoweredOn());
	return true;
}

Boolean UNIX_PhysicalConnector::getPoweredOn() const
{
	return _poweredOn;
}

void UNIX_PhysicalConnector::setPoweredOn(Boolean &value)
{
	_poweredOn = value;
}

Boolean UNIX_PhysicalConnector::getManufactureDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANUFACTURE_DATE, getManufactureDate());
	return true;
}

CIMDateTime UNIX_PhysicalConnector::getManufactureDate() const
{
	return _manufactureDate;
}

void UNIX_PhysicalConnector::setManufactureDate(CIMDateTime &value)
{
	_manufactureDate = value;
}

Boolean UNIX_PhysicalConnector::getVendorEquipmentType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR_EQUIPMENT_TYPE, getVendorEquipmentType());
	return true;
}

String UNIX_PhysicalConnector::getVendorEquipmentType() const
{
	return _vendorEquipmentType;
}

void UNIX_PhysicalConnector::setVendorEquipmentType(String &value)
{
	_vendorEquipmentType = value;
}

Boolean UNIX_PhysicalConnector::getUserTracking(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_TRACKING, getUserTracking());
	return true;
}

String UNIX_PhysicalConnector::getUserTracking() const
{
	return _userTracking;
}

void UNIX_PhysicalConnector::setUserTracking(String &value)
{
	_userTracking = value;
}

Boolean UNIX_PhysicalConnector::getCanBeFRUed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAN_BE_F_R_UED, getCanBeFRUed());
	return true;
}

Boolean UNIX_PhysicalConnector::getCanBeFRUed() const
{
	return _canBeFRUed;
}

void UNIX_PhysicalConnector::setCanBeFRUed(Boolean &value)
{
	_canBeFRUed = value;
}

Boolean UNIX_PhysicalConnector::getConnectorPinout(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONNECTOR_PINOUT, getConnectorPinout());
	return true;
}

String UNIX_PhysicalConnector::getConnectorPinout() const
{
	return _connectorPinout;
}

void UNIX_PhysicalConnector::setConnectorPinout(String &value)
{
	_connectorPinout = value;
}

Boolean UNIX_PhysicalConnector::getConnectorType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONNECTOR_TYPE, getConnectorType());
	return true;
}

Array<Uint16> UNIX_PhysicalConnector::getConnectorType() const
{
	return _connectorType;
}

void UNIX_PhysicalConnector::setConnectorType(Array<Uint16> &value)
{
	_connectorType = value;
}

Boolean UNIX_PhysicalConnector::getOtherTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TYPE_DESCRIPTION, getOtherTypeDescription());
	return true;
}

String UNIX_PhysicalConnector::getOtherTypeDescription() const
{
	return _otherTypeDescription;
}

void UNIX_PhysicalConnector::setOtherTypeDescription(String &value)
{
	_otherTypeDescription = value;
}

Boolean UNIX_PhysicalConnector::getConnectorGender(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONNECTOR_GENDER, getConnectorGender());
	return true;
}

Uint16 UNIX_PhysicalConnector::getConnectorGender() const
{
	return _connectorGender;
}

void UNIX_PhysicalConnector::setConnectorGender(Uint16 &value)
{
	_connectorGender = value;
}

Boolean UNIX_PhysicalConnector::getConnectorElectricalCharacteristics(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONNECTOR_ELECTRICAL_CHARACTERISTICS, getConnectorElectricalCharacteristics());
	return true;
}

Array<Uint16> UNIX_PhysicalConnector::getConnectorElectricalCharacteristics() const
{
	return _connectorElectricalCharacteristics;
}

void UNIX_PhysicalConnector::setConnectorElectricalCharacteristics(Array<Uint16> &value)
{
	_connectorElectricalCharacteristics = value;
}

Boolean UNIX_PhysicalConnector::getOtherElectricalCharacteristics(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ELECTRICAL_CHARACTERISTICS, getOtherElectricalCharacteristics());
	return true;
}

Array<String> UNIX_PhysicalConnector::getOtherElectricalCharacteristics() const
{
	return _otherElectricalCharacteristics;
}

void UNIX_PhysicalConnector::setOtherElectricalCharacteristics(Array<String> &value)
{
	_otherElectricalCharacteristics = value;
}

Boolean UNIX_PhysicalConnector::getNumPhysicalPins(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUM_PHYSICAL_PINS, getNumPhysicalPins());
	return true;
}

Uint32 UNIX_PhysicalConnector::getNumPhysicalPins() const
{
	return _numPhysicalPins;
}

void UNIX_PhysicalConnector::setNumPhysicalPins(Uint32 &value)
{
	_numPhysicalPins = value;
}

Boolean UNIX_PhysicalConnector::getConnectorLayout(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONNECTOR_LAYOUT, getConnectorLayout());
	return true;
}

Uint16 UNIX_PhysicalConnector::getConnectorLayout() const
{
	return _connectorLayout;
}

void UNIX_PhysicalConnector::setConnectorLayout(Uint16 &value)
{
	_connectorLayout = value;
}

Boolean UNIX_PhysicalConnector::getConnectorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONNECTOR_DESCRIPTION, getConnectorDescription());
	return true;
}

String UNIX_PhysicalConnector::getConnectorDescription() const
{
	return _connectorDescription;
}

void UNIX_PhysicalConnector::setConnectorDescription(String &value)
{
	_connectorDescription = value;
}


void UNIX_PhysicalConnector::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PhysicalConnector");
	_generation = Uint64(0);
	_installDate = CIMHelper::getCurrentTime();
	_name = String ("");
	_operationalStatus.clear();
	_statusDescriptions.clear();
	_status = String(DEFAULT_STATUS);
	_healthState = Uint16(DEFAULT_HEALTH_STATE);
	_communicationStatus = Uint16(0);
	_detailedStatus = Uint16(0);
	_operatingStatus = Uint16(DEFAULT_OPERATING_STATUS);
	_primaryStatus = Uint16(DEFAULT_PRIMARY_STATUS);
	_tag = String ("");
	_creationClassName = String("UNIX_PhysicalConnector");
	_manufacturer = String ("");
	_model = String ("");
	_sKU = String ("");
	_serialNumber = String ("");
	_version = String ("");
	_partNumber = String ("");
	_otherIdentifyingInfo = String ("");
	_poweredOn = Boolean(false);
	_manufactureDate = CIMHelper::getCurrentTime();
	_vendorEquipmentType = String ("");
	_userTracking = String ("");
	_canBeFRUed = Boolean(false);
	_connectorPinout = String ("");
	_connectorType.clear();
	_otherTypeDescription = String ("");
	_connectorGender = Uint16(0);
	_connectorElectricalCharacteristics.clear();
	_otherElectricalCharacteristics.clear();
	_numPhysicalPins = Uint32(0);
	_connectorLayout = Uint16(0);
	_connectorDescription = String ("");

}

Boolean UNIX_PhysicalConnector::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "InstanceID"))
			{
				String instanceIDValue;
				property.getValue().get(instanceIDValue);
				setInstanceID(instanceIDValue);
			}
			else if (String::equal(property.getName().getString(), "Caption"))
			{
				String captionValue;
				property.getValue().get(captionValue);
				setCaption(captionValue);
			}
			else if (String::equal(property.getName().getString(), "Description"))
			{
				String descriptionValue;
				property.getValue().get(descriptionValue);
				setDescription(descriptionValue);
			}
			else if (String::equal(property.getName().getString(), "ElementName"))
			{
				String elementNameValue;
				property.getValue().get(elementNameValue);
				setElementName(elementNameValue);
			}
			else if (String::equal(property.getName().getString(), "Generation"))
			{
				Uint64 generationValue;
				property.getValue().get(generationValue);
				setGeneration(generationValue);
			}
			else if (String::equal(property.getName().getString(), "InstallDate"))
			{
				CIMDateTime installDateValue;
				property.getValue().get(installDateValue);
				setInstallDate(installDateValue);
			}
			else if (String::equal(property.getName().getString(), "Name"))
			{
				String nameValue;
				property.getValue().get(nameValue);
				setName(nameValue);
			}
			else if (String::equal(property.getName().getString(), "OperationalStatus"))
			{
				Array<Uint16> operationalStatusValue;
				property.getValue().get(operationalStatusValue);
				setOperationalStatus(operationalStatusValue);
			}
			else if (String::equal(property.getName().getString(), "StatusDescriptions"))
			{
				Array<String> statusDescriptionsValue;
				property.getValue().get(statusDescriptionsValue);
				setStatusDescriptions(statusDescriptionsValue);
			}
			else if (String::equal(property.getName().getString(), "Status"))
			{
				String statusValue;
				property.getValue().get(statusValue);
				setStatus(statusValue);
			}
			else if (String::equal(property.getName().getString(), "HealthState"))
			{
				Uint16 healthStateValue;
				property.getValue().get(healthStateValue);
				setHealthState(healthStateValue);
			}
			else if (String::equal(property.getName().getString(), "CommunicationStatus"))
			{
				Uint16 communicationStatusValue;
				property.getValue().get(communicationStatusValue);
				setCommunicationStatus(communicationStatusValue);
			}
			else if (String::equal(property.getName().getString(), "DetailedStatus"))
			{
				Uint16 detailedStatusValue;
				property.getValue().get(detailedStatusValue);
				setDetailedStatus(detailedStatusValue);
			}
			else if (String::equal(property.getName().getString(), "OperatingStatus"))
			{
				Uint16 operatingStatusValue;
				property.getValue().get(operatingStatusValue);
				setOperatingStatus(operatingStatusValue);
			}
			else if (String::equal(property.getName().getString(), "PrimaryStatus"))
			{
				Uint16 primaryStatusValue;
				property.getValue().get(primaryStatusValue);
				setPrimaryStatus(primaryStatusValue);
			}
			else if (String::equal(property.getName().getString(), "Tag"))
			{
				String tagValue;
				property.getValue().get(tagValue);
				setTag(tagValue);
			}
			else if (String::equal(property.getName().getString(), "CreationClassName"))
			{
				String creationClassNameValue;
				property.getValue().get(creationClassNameValue);
				setCreationClassName(creationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "Manufacturer"))
			{
				String manufacturerValue;
				property.getValue().get(manufacturerValue);
				setManufacturer(manufacturerValue);
			}
			else if (String::equal(property.getName().getString(), "Model"))
			{
				String modelValue;
				property.getValue().get(modelValue);
				setModel(modelValue);
			}
			else if (String::equal(property.getName().getString(), "SKU"))
			{
				String sKUValue;
				property.getValue().get(sKUValue);
				setSKU(sKUValue);
			}
			else if (String::equal(property.getName().getString(), "SerialNumber"))
			{
				String serialNumberValue;
				property.getValue().get(serialNumberValue);
				setSerialNumber(serialNumberValue);
			}
			else if (String::equal(property.getName().getString(), "Version"))
			{
				String versionValue;
				property.getValue().get(versionValue);
				setVersion(versionValue);
			}
			else if (String::equal(property.getName().getString(), "PartNumber"))
			{
				String partNumberValue;
				property.getValue().get(partNumberValue);
				setPartNumber(partNumberValue);
			}
			else if (String::equal(property.getName().getString(), "OtherIdentifyingInfo"))
			{
				String otherIdentifyingInfoValue;
				property.getValue().get(otherIdentifyingInfoValue);
				setOtherIdentifyingInfo(otherIdentifyingInfoValue);
			}
			else if (String::equal(property.getName().getString(), "PoweredOn"))
			{
				Boolean poweredOnValue;
				property.getValue().get(poweredOnValue);
				setPoweredOn(poweredOnValue);
			}
			else if (String::equal(property.getName().getString(), "ManufactureDate"))
			{
				CIMDateTime manufactureDateValue;
				property.getValue().get(manufactureDateValue);
				setManufactureDate(manufactureDateValue);
			}
			else if (String::equal(property.getName().getString(), "VendorEquipmentType"))
			{
				String vendorEquipmentTypeValue;
				property.getValue().get(vendorEquipmentTypeValue);
				setVendorEquipmentType(vendorEquipmentTypeValue);
			}
			else if (String::equal(property.getName().getString(), "UserTracking"))
			{
				String userTrackingValue;
				property.getValue().get(userTrackingValue);
				setUserTracking(userTrackingValue);
			}
			else if (String::equal(property.getName().getString(), "CanBeFRUed"))
			{
				Boolean canBeFRUedValue;
				property.getValue().get(canBeFRUedValue);
				setCanBeFRUed(canBeFRUedValue);
			}
			else if (String::equal(property.getName().getString(), "ConnectorPinout"))
			{
				String connectorPinoutValue;
				property.getValue().get(connectorPinoutValue);
				setConnectorPinout(connectorPinoutValue);
			}
			else if (String::equal(property.getName().getString(), "ConnectorType"))
			{
				Array<Uint16> connectorTypeValue;
				property.getValue().get(connectorTypeValue);
				setConnectorType(connectorTypeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherTypeDescription"))
			{
				String otherTypeDescriptionValue;
				property.getValue().get(otherTypeDescriptionValue);
				setOtherTypeDescription(otherTypeDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "ConnectorGender"))
			{
				Uint16 connectorGenderValue;
				property.getValue().get(connectorGenderValue);
				setConnectorGender(connectorGenderValue);
			}
			else if (String::equal(property.getName().getString(), "ConnectorElectricalCharacteristics"))
			{
				Array<Uint16> connectorElectricalCharacteristicsValue;
				property.getValue().get(connectorElectricalCharacteristicsValue);
				setConnectorElectricalCharacteristics(connectorElectricalCharacteristicsValue);
			}
			else if (String::equal(property.getName().getString(), "OtherElectricalCharacteristics"))
			{
				Array<String> otherElectricalCharacteristicsValue;
				property.getValue().get(otherElectricalCharacteristicsValue);
				setOtherElectricalCharacteristics(otherElectricalCharacteristicsValue);
			}
			else if (String::equal(property.getName().getString(), "NumPhysicalPins"))
			{
				Uint32 numPhysicalPinsValue;
				property.getValue().get(numPhysicalPinsValue);
				setNumPhysicalPins(numPhysicalPinsValue);
			}
			else if (String::equal(property.getName().getString(), "ConnectorLayout"))
			{
				Uint16 connectorLayoutValue;
				property.getValue().get(connectorLayoutValue);
				setConnectorLayout(connectorLayoutValue);
			}
			else if (String::equal(property.getName().getString(), "ConnectorDescription"))
			{
				String connectorDescriptionValue;
				property.getValue().get(connectorDescriptionValue);
				setConnectorDescription(connectorDescriptionValue);
			}
	}
	return true;
}


Boolean UNIX_PhysicalConnector::initialize()
{
	return false;
}

Boolean UNIX_PhysicalConnector::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PhysicalConnector");
	_generation = Uint64(0);
	_installDate = CIMHelper::getCurrentTime();
	_name = String ("");
	_operationalStatus.clear();
	_statusDescriptions.clear();
	_status = String(DEFAULT_STATUS);
	_healthState = Uint16(DEFAULT_HEALTH_STATE);
	_communicationStatus = Uint16(0);
	_detailedStatus = Uint16(0);
	_operatingStatus = Uint16(DEFAULT_OPERATING_STATUS);
	_primaryStatus = Uint16(DEFAULT_PRIMARY_STATUS);
	_tag = String ("");
	_creationClassName = String("UNIX_PhysicalConnector");
	_manufacturer = String ("");
	_model = String ("");
	_sKU = String ("");
	_serialNumber = String ("");
	_version = String ("");
	_partNumber = String ("");
	_otherIdentifyingInfo = String ("");
	_poweredOn = Boolean(false);
	_manufactureDate = CIMHelper::getCurrentTime();
	_vendorEquipmentType = String ("");
	_userTracking = String ("");
	_canBeFRUed = Boolean(false);
	_connectorPinout = String ("");
	_connectorType.clear();
	_otherTypeDescription = String ("");
	_connectorGender = Uint16(0);
	_connectorElectricalCharacteristics.clear();
	_otherElectricalCharacteristics.clear();
	_numPhysicalPins = Uint32(0);
	_connectorLayout = Uint16(0);
	_connectorDescription = String ("");
	
	return false;
}

Boolean UNIX_PhysicalConnector::finalize()
{
	return false;
}

Boolean UNIX_PhysicalConnector::loadByName(const String name)
{
	return false;
}

Boolean UNIX_PhysicalConnector::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String tagKey;
	String creationClassNameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_TAG)) tagKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getTag(), tagKey)) && 
			(String::equalNoCase(getCreationClassName(), creationClassNameKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_PhysicalConnector::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PhysicalConnector::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PhysicalConnector::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PhysicalConnector::validateInstance()
{
	return true;
}

