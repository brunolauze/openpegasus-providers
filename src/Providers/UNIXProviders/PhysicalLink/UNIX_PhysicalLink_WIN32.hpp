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


UNIX_PhysicalLink::UNIX_PhysicalLink(void)
{
}

UNIX_PhysicalLink::~UNIX_PhysicalLink(void)
{
}

Boolean UNIX_PhysicalLink::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_PhysicalLink::getInstanceID() const
{
	return _instanceID;
}

void UNIX_PhysicalLink::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_PhysicalLink::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_PhysicalLink::getCaption() const
{
	return _caption;
}

void UNIX_PhysicalLink::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_PhysicalLink::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_PhysicalLink::getDescription() const
{
	return _description;
}

void UNIX_PhysicalLink::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_PhysicalLink::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_PhysicalLink::getElementName() const
{
	return _elementName;
}

void UNIX_PhysicalLink::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_PhysicalLink::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_PhysicalLink::getGeneration() const
{
	return _generation;
}

void UNIX_PhysicalLink::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_PhysicalLink::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_PhysicalLink::getInstallDate() const
{
	return _installDate;
}

void UNIX_PhysicalLink::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_PhysicalLink::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_PhysicalLink::getName() const
{
	return _name;
}

void UNIX_PhysicalLink::setName(String &value)
{
	_name = value;
}

Boolean UNIX_PhysicalLink::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_PhysicalLink::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_PhysicalLink::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_PhysicalLink::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_PhysicalLink::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_PhysicalLink::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_PhysicalLink::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_PhysicalLink::getStatus() const
{
	return _status;
}

void UNIX_PhysicalLink::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_PhysicalLink::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_PhysicalLink::getHealthState() const
{
	return _healthState;
}

void UNIX_PhysicalLink::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_PhysicalLink::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_PhysicalLink::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_PhysicalLink::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_PhysicalLink::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_PhysicalLink::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_PhysicalLink::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_PhysicalLink::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_PhysicalLink::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_PhysicalLink::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_PhysicalLink::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_PhysicalLink::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_PhysicalLink::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_PhysicalLink::getTag(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TAG, getTag());
	return true;
}

String UNIX_PhysicalLink::getTag() const
{
	return _tag;
}

void UNIX_PhysicalLink::setTag(String &value)
{
	_tag = value;
}

Boolean UNIX_PhysicalLink::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_PhysicalLink::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_PhysicalLink::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_PhysicalLink::getManufacturer(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANUFACTURER, getManufacturer());
	return true;
}

String UNIX_PhysicalLink::getManufacturer() const
{
	return _manufacturer;
}

void UNIX_PhysicalLink::setManufacturer(String &value)
{
	_manufacturer = value;
}

Boolean UNIX_PhysicalLink::getModel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MODEL, getModel());
	return true;
}

String UNIX_PhysicalLink::getModel() const
{
	return _model;
}

void UNIX_PhysicalLink::setModel(String &value)
{
	_model = value;
}

Boolean UNIX_PhysicalLink::getSKU(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_K_U, getSKU());
	return true;
}

String UNIX_PhysicalLink::getSKU() const
{
	return _sKU;
}

void UNIX_PhysicalLink::setSKU(String &value)
{
	_sKU = value;
}

Boolean UNIX_PhysicalLink::getSerialNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERIAL_NUMBER, getSerialNumber());
	return true;
}

String UNIX_PhysicalLink::getSerialNumber() const
{
	return _serialNumber;
}

void UNIX_PhysicalLink::setSerialNumber(String &value)
{
	_serialNumber = value;
}

Boolean UNIX_PhysicalLink::getVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERSION, getVersion());
	return true;
}

String UNIX_PhysicalLink::getVersion() const
{
	return _version;
}

void UNIX_PhysicalLink::setVersion(String &value)
{
	_version = value;
}

Boolean UNIX_PhysicalLink::getPartNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PART_NUMBER, getPartNumber());
	return true;
}

String UNIX_PhysicalLink::getPartNumber() const
{
	return _partNumber;
}

void UNIX_PhysicalLink::setPartNumber(String &value)
{
	_partNumber = value;
}

Boolean UNIX_PhysicalLink::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

String UNIX_PhysicalLink::getOtherIdentifyingInfo() const
{
	return _otherIdentifyingInfo;
}

void UNIX_PhysicalLink::setOtherIdentifyingInfo(String &value)
{
	_otherIdentifyingInfo = value;
}

Boolean UNIX_PhysicalLink::getPoweredOn(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWERED_ON, getPoweredOn());
	return true;
}

Boolean UNIX_PhysicalLink::getPoweredOn() const
{
	return _poweredOn;
}

void UNIX_PhysicalLink::setPoweredOn(Boolean &value)
{
	_poweredOn = value;
}

Boolean UNIX_PhysicalLink::getManufactureDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANUFACTURE_DATE, getManufactureDate());
	return true;
}

CIMDateTime UNIX_PhysicalLink::getManufactureDate() const
{
	return _manufactureDate;
}

void UNIX_PhysicalLink::setManufactureDate(CIMDateTime &value)
{
	_manufactureDate = value;
}

Boolean UNIX_PhysicalLink::getVendorEquipmentType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR_EQUIPMENT_TYPE, getVendorEquipmentType());
	return true;
}

String UNIX_PhysicalLink::getVendorEquipmentType() const
{
	return _vendorEquipmentType;
}

void UNIX_PhysicalLink::setVendorEquipmentType(String &value)
{
	_vendorEquipmentType = value;
}

Boolean UNIX_PhysicalLink::getUserTracking(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_TRACKING, getUserTracking());
	return true;
}

String UNIX_PhysicalLink::getUserTracking() const
{
	return _userTracking;
}

void UNIX_PhysicalLink::setUserTracking(String &value)
{
	_userTracking = value;
}

Boolean UNIX_PhysicalLink::getCanBeFRUed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAN_BE_F_R_UED, getCanBeFRUed());
	return true;
}

Boolean UNIX_PhysicalLink::getCanBeFRUed() const
{
	return _canBeFRUed;
}

void UNIX_PhysicalLink::setCanBeFRUed(Boolean &value)
{
	_canBeFRUed = value;
}

Boolean UNIX_PhysicalLink::getMaxLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_LENGTH, getMaxLength());
	return true;
}

Real64 UNIX_PhysicalLink::getMaxLength() const
{
	return _maxLength;
}

void UNIX_PhysicalLink::setMaxLength(Real64 &value)
{
	_maxLength = value;
}

Boolean UNIX_PhysicalLink::getLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LENGTH, getLength());
	return true;
}

Real64 UNIX_PhysicalLink::getLength() const
{
	return _length;
}

void UNIX_PhysicalLink::setLength(Real64 &value)
{
	_length = value;
}

Boolean UNIX_PhysicalLink::getWired(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WIRED, getWired());
	return true;
}

Boolean UNIX_PhysicalLink::getWired() const
{
	return _wired;
}

void UNIX_PhysicalLink::setWired(Boolean &value)
{
	_wired = value;
}

Boolean UNIX_PhysicalLink::getMediaType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MEDIA_TYPE, getMediaType());
	return true;
}

Uint16 UNIX_PhysicalLink::getMediaType() const
{
	return _mediaType;
}

void UNIX_PhysicalLink::setMediaType(Uint16 &value)
{
	_mediaType = value;
}


void UNIX_PhysicalLink::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PhysicalLink");
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
	_creationClassName = String("UNIX_PhysicalLink");
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
	_maxLength = Real64(0);
	_length = Real64(0);
	_wired = Boolean(false);
	_mediaType = Uint16(0);

}

Boolean UNIX_PhysicalLink::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "MaxLength"))
			{
				Real64 maxLengthValue;
				property.getValue().get(maxLengthValue);
				setMaxLength(maxLengthValue);
			}
			else if (String::equal(property.getName().getString(), "Length"))
			{
				Real64 lengthValue;
				property.getValue().get(lengthValue);
				setLength(lengthValue);
			}
			else if (String::equal(property.getName().getString(), "Wired"))
			{
				Boolean wiredValue;
				property.getValue().get(wiredValue);
				setWired(wiredValue);
			}
			else if (String::equal(property.getName().getString(), "MediaType"))
			{
				Uint16 mediaTypeValue;
				property.getValue().get(mediaTypeValue);
				setMediaType(mediaTypeValue);
			}
	}
	return true;
}


Boolean UNIX_PhysicalLink::initialize()
{
	return false;
}

Boolean UNIX_PhysicalLink::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PhysicalLink");
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
	_creationClassName = String("UNIX_PhysicalLink");
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
	_maxLength = Real64(0);
	_length = Real64(0);
	_wired = Boolean(false);
	_mediaType = Uint16(0);
	
	return false;
}

Boolean UNIX_PhysicalLink::finalize()
{
	return false;
}

Boolean UNIX_PhysicalLink::loadByName(const String name)
{
	return false;
}

Boolean UNIX_PhysicalLink::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_PhysicalLink::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PhysicalLink::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PhysicalLink::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PhysicalLink::validateInstance()
{
	return true;
}

