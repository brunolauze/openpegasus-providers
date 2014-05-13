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


UNIX_VideoBIOSFeature::UNIX_VideoBIOSFeature(void)
{
}

UNIX_VideoBIOSFeature::~UNIX_VideoBIOSFeature(void)
{
}

Boolean UNIX_VideoBIOSFeature::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_VideoBIOSFeature::getInstanceID() const
{
	return _instanceID;
}

void UNIX_VideoBIOSFeature::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_VideoBIOSFeature::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_VideoBIOSFeature::getCaption() const
{
	return _caption;
}

void UNIX_VideoBIOSFeature::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_VideoBIOSFeature::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_VideoBIOSFeature::getDescription() const
{
	return _description;
}

void UNIX_VideoBIOSFeature::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_VideoBIOSFeature::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_VideoBIOSFeature::getElementName() const
{
	return _elementName;
}

void UNIX_VideoBIOSFeature::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_VideoBIOSFeature::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_VideoBIOSFeature::getGeneration() const
{
	return _generation;
}

void UNIX_VideoBIOSFeature::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_VideoBIOSFeature::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_VideoBIOSFeature::getInstallDate() const
{
	return _installDate;
}

void UNIX_VideoBIOSFeature::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_VideoBIOSFeature::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_VideoBIOSFeature::getName() const
{
	return _name;
}

void UNIX_VideoBIOSFeature::setName(String &value)
{
	_name = value;
}

Boolean UNIX_VideoBIOSFeature::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_VideoBIOSFeature::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_VideoBIOSFeature::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_VideoBIOSFeature::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_VideoBIOSFeature::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_VideoBIOSFeature::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_VideoBIOSFeature::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_VideoBIOSFeature::getStatus() const
{
	return _status;
}

void UNIX_VideoBIOSFeature::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_VideoBIOSFeature::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_VideoBIOSFeature::getHealthState() const
{
	return _healthState;
}

void UNIX_VideoBIOSFeature::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_VideoBIOSFeature::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_VideoBIOSFeature::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_VideoBIOSFeature::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_VideoBIOSFeature::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_VideoBIOSFeature::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_VideoBIOSFeature::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_VideoBIOSFeature::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_VideoBIOSFeature::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_VideoBIOSFeature::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_VideoBIOSFeature::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_VideoBIOSFeature::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_VideoBIOSFeature::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_VideoBIOSFeature::getIdentifyingNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_NUMBER, getIdentifyingNumber());
	return true;
}

String UNIX_VideoBIOSFeature::getIdentifyingNumber() const
{
	return _identifyingNumber;
}

void UNIX_VideoBIOSFeature::setIdentifyingNumber(String &value)
{
	_identifyingNumber = value;
}

Boolean UNIX_VideoBIOSFeature::getProductName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRODUCT_NAME, getProductName());
	return true;
}

String UNIX_VideoBIOSFeature::getProductName() const
{
	return _productName;
}

void UNIX_VideoBIOSFeature::setProductName(String &value)
{
	_productName = value;
}

Boolean UNIX_VideoBIOSFeature::getVendor(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR, getVendor());
	return true;
}

String UNIX_VideoBIOSFeature::getVendor() const
{
	return _vendor;
}

void UNIX_VideoBIOSFeature::setVendor(String &value)
{
	_vendor = value;
}

Boolean UNIX_VideoBIOSFeature::getVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERSION, getVersion());
	return true;
}

String UNIX_VideoBIOSFeature::getVersion() const
{
	return _version;
}

void UNIX_VideoBIOSFeature::setVersion(String &value)
{
	_version = value;
}

Boolean UNIX_VideoBIOSFeature::getCharacteristics(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHARACTERISTICS, getCharacteristics());
	return true;
}

Array<Uint16> UNIX_VideoBIOSFeature::getCharacteristics() const
{
	return _characteristics;
}

void UNIX_VideoBIOSFeature::setCharacteristics(Array<Uint16> &value)
{
	_characteristics = value;
}

Boolean UNIX_VideoBIOSFeature::getCharacteristicDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHARACTERISTIC_DESCRIPTIONS, getCharacteristicDescriptions());
	return true;
}

Array<String> UNIX_VideoBIOSFeature::getCharacteristicDescriptions() const
{
	return _characteristicDescriptions;
}

void UNIX_VideoBIOSFeature::setCharacteristicDescriptions(Array<String> &value)
{
	_characteristicDescriptions = value;
}


void UNIX_VideoBIOSFeature::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("VideoBIOSFeature");
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

Boolean UNIX_VideoBIOSFeature::loadInstance(const CIMInstance &instance)
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


Boolean UNIX_VideoBIOSFeature::initialize()
{
	return false;
}

Boolean UNIX_VideoBIOSFeature::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("VideoBIOSFeature");
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

Boolean UNIX_VideoBIOSFeature::finalize()
{
	return false;
}

Boolean UNIX_VideoBIOSFeature::loadByName(const String name)
{
	return false;
}

Boolean UNIX_VideoBIOSFeature::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_VideoBIOSFeature::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VideoBIOSFeature::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VideoBIOSFeature::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VideoBIOSFeature::validateInstance()
{
	return true;
}

