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


UNIX_AGPSoftwareFeature::UNIX_AGPSoftwareFeature(void)
{
}

UNIX_AGPSoftwareFeature::~UNIX_AGPSoftwareFeature(void)
{
}

Boolean UNIX_AGPSoftwareFeature::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_AGPSoftwareFeature::getInstanceID() const
{
	return _instanceID;
}

void UNIX_AGPSoftwareFeature::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_AGPSoftwareFeature::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_AGPSoftwareFeature::getCaption() const
{
	return _caption;
}

void UNIX_AGPSoftwareFeature::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_AGPSoftwareFeature::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_AGPSoftwareFeature::getDescription() const
{
	return _description;
}

void UNIX_AGPSoftwareFeature::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_AGPSoftwareFeature::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_AGPSoftwareFeature::getElementName() const
{
	return _elementName;
}

void UNIX_AGPSoftwareFeature::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_AGPSoftwareFeature::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_AGPSoftwareFeature::getGeneration() const
{
	return _generation;
}

void UNIX_AGPSoftwareFeature::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_AGPSoftwareFeature::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_AGPSoftwareFeature::getInstallDate() const
{
	return _installDate;
}

void UNIX_AGPSoftwareFeature::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_AGPSoftwareFeature::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_AGPSoftwareFeature::getName() const
{
	return _name;
}

void UNIX_AGPSoftwareFeature::setName(String &value)
{
	_name = value;
}

Boolean UNIX_AGPSoftwareFeature::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_AGPSoftwareFeature::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_AGPSoftwareFeature::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_AGPSoftwareFeature::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_AGPSoftwareFeature::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_AGPSoftwareFeature::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_AGPSoftwareFeature::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_AGPSoftwareFeature::getStatus() const
{
	return _status;
}

void UNIX_AGPSoftwareFeature::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_AGPSoftwareFeature::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_AGPSoftwareFeature::getHealthState() const
{
	return _healthState;
}

void UNIX_AGPSoftwareFeature::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_AGPSoftwareFeature::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_AGPSoftwareFeature::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_AGPSoftwareFeature::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_AGPSoftwareFeature::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_AGPSoftwareFeature::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_AGPSoftwareFeature::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_AGPSoftwareFeature::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_AGPSoftwareFeature::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_AGPSoftwareFeature::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_AGPSoftwareFeature::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_AGPSoftwareFeature::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_AGPSoftwareFeature::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_AGPSoftwareFeature::getIdentifyingNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_NUMBER, getIdentifyingNumber());
	return true;
}

String UNIX_AGPSoftwareFeature::getIdentifyingNumber() const
{
	return _identifyingNumber;
}

void UNIX_AGPSoftwareFeature::setIdentifyingNumber(String &value)
{
	_identifyingNumber = value;
}

Boolean UNIX_AGPSoftwareFeature::getProductName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRODUCT_NAME, getProductName());
	return true;
}

String UNIX_AGPSoftwareFeature::getProductName() const
{
	return _productName;
}

void UNIX_AGPSoftwareFeature::setProductName(String &value)
{
	_productName = value;
}

Boolean UNIX_AGPSoftwareFeature::getVendor(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR, getVendor());
	return true;
}

String UNIX_AGPSoftwareFeature::getVendor() const
{
	return _vendor;
}

void UNIX_AGPSoftwareFeature::setVendor(String &value)
{
	_vendor = value;
}

Boolean UNIX_AGPSoftwareFeature::getVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERSION, getVersion());
	return true;
}

String UNIX_AGPSoftwareFeature::getVersion() const
{
	return _version;
}

void UNIX_AGPSoftwareFeature::setVersion(String &value)
{
	_version = value;
}

Boolean UNIX_AGPSoftwareFeature::getCharacteristics(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHARACTERISTICS, getCharacteristics());
	return true;
}

Array<Uint16> UNIX_AGPSoftwareFeature::getCharacteristics() const
{
	return _characteristics;
}

void UNIX_AGPSoftwareFeature::setCharacteristics(Array<Uint16> &value)
{
	_characteristics = value;
}

Boolean UNIX_AGPSoftwareFeature::getCharacteristicDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHARACTERISTIC_DESCRIPTIONS, getCharacteristicDescriptions());
	return true;
}

Array<String> UNIX_AGPSoftwareFeature::getCharacteristicDescriptions() const
{
	return _characteristicDescriptions;
}

void UNIX_AGPSoftwareFeature::setCharacteristicDescriptions(Array<String> &value)
{
	_characteristicDescriptions = value;
}


void UNIX_AGPSoftwareFeature::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("AGPSoftwareFeature");
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
	_identifyingNumber = String ("");
	_productName = String ("");
	_vendor = String ("");
	_version = String ("");
	_characteristics.clear();
	_characteristicDescriptions.clear();

}

Boolean UNIX_AGPSoftwareFeature::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "IdentifyingNumber"))
			{
				String identifyingNumberValue;
				property.getValue().get(identifyingNumberValue);
				setIdentifyingNumber(identifyingNumberValue);
			}
			else if (String::equal(property.getName().getString(), "ProductName"))
			{
				String productNameValue;
				property.getValue().get(productNameValue);
				setProductName(productNameValue);
			}
			else if (String::equal(property.getName().getString(), "Vendor"))
			{
				String vendorValue;
				property.getValue().get(vendorValue);
				setVendor(vendorValue);
			}
			else if (String::equal(property.getName().getString(), "Version"))
			{
				String versionValue;
				property.getValue().get(versionValue);
				setVersion(versionValue);
			}
			else if (String::equal(property.getName().getString(), "Characteristics"))
			{
				Array<Uint16> characteristicsValue;
				property.getValue().get(characteristicsValue);
				setCharacteristics(characteristicsValue);
			}
			else if (String::equal(property.getName().getString(), "CharacteristicDescriptions"))
			{
				Array<String> characteristicDescriptionsValue;
				property.getValue().get(characteristicDescriptionsValue);
				setCharacteristicDescriptions(characteristicDescriptionsValue);
			}
	}
	return true;
}


Boolean UNIX_AGPSoftwareFeature::initialize()
{
	return false;
}

Boolean UNIX_AGPSoftwareFeature::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("AGPSoftwareFeature");
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
	_identifyingNumber = String ("");
	_productName = String ("");
	_vendor = String ("");
	_version = String ("");
	_characteristics.clear();
	_characteristicDescriptions.clear();
	
	return false;
}

Boolean UNIX_AGPSoftwareFeature::finalize()
{
	return false;
}

Boolean UNIX_AGPSoftwareFeature::loadByName(const String name)
{
	return false;
}

Boolean UNIX_AGPSoftwareFeature::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String identifyingNumberKey;
	String productNameKey;
	String vendorKey;
	String versionKey;
	String nameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_IDENTIFYING_NUMBER)) identifyingNumberKey = kb.getValue();
		else if (keyName.equal(PROPERTY_PRODUCT_NAME)) productNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_VENDOR)) vendorKey = kb.getValue();
		else if (keyName.equal(PROPERTY_VERSION)) versionKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getIdentifyingNumber(), identifyingNumberKey)) && 
			(String::equalNoCase(getProductName(), productNameKey)) && 
			(String::equalNoCase(getVendor(), vendorKey)) && 
			(String::equalNoCase(getVersion(), versionKey)) && 
			(String::equalNoCase(getName(), nameKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_AGPSoftwareFeature::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AGPSoftwareFeature::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AGPSoftwareFeature::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AGPSoftwareFeature::validateInstance()
{
	return true;
}

