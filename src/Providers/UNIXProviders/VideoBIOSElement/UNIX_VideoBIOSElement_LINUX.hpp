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


UNIX_VideoBIOSElement::UNIX_VideoBIOSElement(void)
{
}

UNIX_VideoBIOSElement::~UNIX_VideoBIOSElement(void)
{
}

Boolean UNIX_VideoBIOSElement::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_VideoBIOSElement::getInstanceID() const
{
	return _instanceID;
}

void UNIX_VideoBIOSElement::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_VideoBIOSElement::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_VideoBIOSElement::getCaption() const
{
	return _caption;
}

void UNIX_VideoBIOSElement::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_VideoBIOSElement::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_VideoBIOSElement::getDescription() const
{
	return _description;
}

void UNIX_VideoBIOSElement::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_VideoBIOSElement::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_VideoBIOSElement::getElementName() const
{
	return _elementName;
}

void UNIX_VideoBIOSElement::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_VideoBIOSElement::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_VideoBIOSElement::getGeneration() const
{
	return _generation;
}

void UNIX_VideoBIOSElement::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_VideoBIOSElement::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_VideoBIOSElement::getInstallDate() const
{
	return _installDate;
}

void UNIX_VideoBIOSElement::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_VideoBIOSElement::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_VideoBIOSElement::getName() const
{
	return _name;
}

void UNIX_VideoBIOSElement::setName(String &value)
{
	_name = value;
}

Boolean UNIX_VideoBIOSElement::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_VideoBIOSElement::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_VideoBIOSElement::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_VideoBIOSElement::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_VideoBIOSElement::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_VideoBIOSElement::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_VideoBIOSElement::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_VideoBIOSElement::getStatus() const
{
	return _status;
}

void UNIX_VideoBIOSElement::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_VideoBIOSElement::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_VideoBIOSElement::getHealthState() const
{
	return _healthState;
}

void UNIX_VideoBIOSElement::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_VideoBIOSElement::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_VideoBIOSElement::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_VideoBIOSElement::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_VideoBIOSElement::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_VideoBIOSElement::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_VideoBIOSElement::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_VideoBIOSElement::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_VideoBIOSElement::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_VideoBIOSElement::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_VideoBIOSElement::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_VideoBIOSElement::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_VideoBIOSElement::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_VideoBIOSElement::getVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERSION, getVersion());
	return true;
}

String UNIX_VideoBIOSElement::getVersion() const
{
	return _version;
}

void UNIX_VideoBIOSElement::setVersion(String &value)
{
	_version = value;
}

Boolean UNIX_VideoBIOSElement::getSoftwareElementState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SOFTWARE_ELEMENT_STATE, getSoftwareElementState());
	return true;
}

Uint16 UNIX_VideoBIOSElement::getSoftwareElementState() const
{
	return _softwareElementState;
}

void UNIX_VideoBIOSElement::setSoftwareElementState(Uint16 &value)
{
	_softwareElementState = value;
}

Boolean UNIX_VideoBIOSElement::getSoftwareElementID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SOFTWARE_ELEMENT_ID, getSoftwareElementID());
	return true;
}

String UNIX_VideoBIOSElement::getSoftwareElementID() const
{
	return _softwareElementID;
}

void UNIX_VideoBIOSElement::setSoftwareElementID(String &value)
{
	_softwareElementID = value;
}

Boolean UNIX_VideoBIOSElement::getTargetOperatingSystem(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TARGET_OPERATING_SYSTEM, getTargetOperatingSystem());
	return true;
}

Uint16 UNIX_VideoBIOSElement::getTargetOperatingSystem() const
{
	return _targetOperatingSystem;
}

void UNIX_VideoBIOSElement::setTargetOperatingSystem(Uint16 &value)
{
	_targetOperatingSystem = value;
}

Boolean UNIX_VideoBIOSElement::getOtherTargetOS(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TARGET_OS, getOtherTargetOS());
	return true;
}

String UNIX_VideoBIOSElement::getOtherTargetOS() const
{
	return _otherTargetOS;
}

void UNIX_VideoBIOSElement::setOtherTargetOS(String &value)
{
	_otherTargetOS = value;
}

Boolean UNIX_VideoBIOSElement::getManufacturer(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANUFACTURER, getManufacturer());
	return true;
}

String UNIX_VideoBIOSElement::getManufacturer() const
{
	return _manufacturer;
}

void UNIX_VideoBIOSElement::setManufacturer(String &value)
{
	_manufacturer = value;
}

Boolean UNIX_VideoBIOSElement::getBuildNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BUILD_NUMBER, getBuildNumber());
	return true;
}

String UNIX_VideoBIOSElement::getBuildNumber() const
{
	return _buildNumber;
}

void UNIX_VideoBIOSElement::setBuildNumber(String &value)
{
	_buildNumber = value;
}

Boolean UNIX_VideoBIOSElement::getSerialNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERIAL_NUMBER, getSerialNumber());
	return true;
}

String UNIX_VideoBIOSElement::getSerialNumber() const
{
	return _serialNumber;
}

void UNIX_VideoBIOSElement::setSerialNumber(String &value)
{
	_serialNumber = value;
}

Boolean UNIX_VideoBIOSElement::getCodeSet(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CODE_SET, getCodeSet());
	return true;
}

String UNIX_VideoBIOSElement::getCodeSet() const
{
	return _codeSet;
}

void UNIX_VideoBIOSElement::setCodeSet(String &value)
{
	_codeSet = value;
}

Boolean UNIX_VideoBIOSElement::getIdentificationCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFICATION_CODE, getIdentificationCode());
	return true;
}

String UNIX_VideoBIOSElement::getIdentificationCode() const
{
	return _identificationCode;
}

void UNIX_VideoBIOSElement::setIdentificationCode(String &value)
{
	_identificationCode = value;
}

Boolean UNIX_VideoBIOSElement::getLanguageEdition(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LANGUAGE_EDITION, getLanguageEdition());
	return true;
}

String UNIX_VideoBIOSElement::getLanguageEdition() const
{
	return _languageEdition;
}

void UNIX_VideoBIOSElement::setLanguageEdition(String &value)
{
	_languageEdition = value;
}

Boolean UNIX_VideoBIOSElement::getIsShadowed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_SHADOWED, getIsShadowed());
	return true;
}

Boolean UNIX_VideoBIOSElement::getIsShadowed() const
{
	return _isShadowed;
}

void UNIX_VideoBIOSElement::setIsShadowed(Boolean &value)
{
	_isShadowed = value;
}

Boolean UNIX_VideoBIOSElement::getReleaseDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RELEASE_DATE, getReleaseDate());
	return true;
}

CIMDateTime UNIX_VideoBIOSElement::getReleaseDate() const
{
	return _releaseDate;
}

void UNIX_VideoBIOSElement::setReleaseDate(CIMDateTime &value)
{
	_releaseDate = value;
}


void UNIX_VideoBIOSElement::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("VideoBIOSElement");
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
	_version = String ("");
	_softwareElementState = Uint16(0);
	_softwareElementID = String ("");
	_targetOperatingSystem = Uint16(0);
	_otherTargetOS = String ("");
	_manufacturer = String ("");
	_buildNumber = String ("");
	_serialNumber = String ("");
	_codeSet = String ("");
	_identificationCode = String ("");
	_languageEdition = String ("");
	_isShadowed = Boolean(false);
	_releaseDate = CIMHelper::getCurrentTime();

}

Boolean UNIX_VideoBIOSElement::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "Version"))
			{
				String versionValue;
				property.getValue().get(versionValue);
				setVersion(versionValue);
			}
			else if (String::equal(property.getName().getString(), "SoftwareElementState"))
			{
				Uint16 softwareElementStateValue;
				property.getValue().get(softwareElementStateValue);
				setSoftwareElementState(softwareElementStateValue);
			}
			else if (String::equal(property.getName().getString(), "SoftwareElementID"))
			{
				String softwareElementIDValue;
				property.getValue().get(softwareElementIDValue);
				setSoftwareElementID(softwareElementIDValue);
			}
			else if (String::equal(property.getName().getString(), "TargetOperatingSystem"))
			{
				Uint16 targetOperatingSystemValue;
				property.getValue().get(targetOperatingSystemValue);
				setTargetOperatingSystem(targetOperatingSystemValue);
			}
			else if (String::equal(property.getName().getString(), "OtherTargetOS"))
			{
				String otherTargetOSValue;
				property.getValue().get(otherTargetOSValue);
				setOtherTargetOS(otherTargetOSValue);
			}
			else if (String::equal(property.getName().getString(), "Manufacturer"))
			{
				String manufacturerValue;
				property.getValue().get(manufacturerValue);
				setManufacturer(manufacturerValue);
			}
			else if (String::equal(property.getName().getString(), "BuildNumber"))
			{
				String buildNumberValue;
				property.getValue().get(buildNumberValue);
				setBuildNumber(buildNumberValue);
			}
			else if (String::equal(property.getName().getString(), "SerialNumber"))
			{
				String serialNumberValue;
				property.getValue().get(serialNumberValue);
				setSerialNumber(serialNumberValue);
			}
			else if (String::equal(property.getName().getString(), "CodeSet"))
			{
				String codeSetValue;
				property.getValue().get(codeSetValue);
				setCodeSet(codeSetValue);
			}
			else if (String::equal(property.getName().getString(), "IdentificationCode"))
			{
				String identificationCodeValue;
				property.getValue().get(identificationCodeValue);
				setIdentificationCode(identificationCodeValue);
			}
			else if (String::equal(property.getName().getString(), "LanguageEdition"))
			{
				String languageEditionValue;
				property.getValue().get(languageEditionValue);
				setLanguageEdition(languageEditionValue);
			}
			else if (String::equal(property.getName().getString(), "IsShadowed"))
			{
				Boolean isShadowedValue;
				property.getValue().get(isShadowedValue);
				setIsShadowed(isShadowedValue);
			}
			else if (String::equal(property.getName().getString(), "ReleaseDate"))
			{
				CIMDateTime releaseDateValue;
				property.getValue().get(releaseDateValue);
				setReleaseDate(releaseDateValue);
			}
	}
	return true;
}


Boolean UNIX_VideoBIOSElement::initialize()
{
	return false;
}

Boolean UNIX_VideoBIOSElement::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("VideoBIOSElement");
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
	_version = String ("");
	_softwareElementState = Uint16(0);
	_softwareElementID = String ("");
	_targetOperatingSystem = Uint16(0);
	_otherTargetOS = String ("");
	_manufacturer = String ("");
	_buildNumber = String ("");
	_serialNumber = String ("");
	_codeSet = String ("");
	_identificationCode = String ("");
	_languageEdition = String ("");
	_isShadowed = Boolean(false);
	_releaseDate = CIMHelper::getCurrentTime();
	
	return false;
}

Boolean UNIX_VideoBIOSElement::finalize()
{
	return false;
}

Boolean UNIX_VideoBIOSElement::loadByName(const String name)
{
	return false;
}

Boolean UNIX_VideoBIOSElement::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String nameKey;
	String versionKey;
	String softwareElementStateKey;
	String softwareElementIDKey;
	String targetOperatingSystemKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_VERSION)) versionKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SOFTWARE_ELEMENT_STATE)) softwareElementStateKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SOFTWARE_ELEMENT_ID)) softwareElementIDKey = kb.getValue();
		else if (keyName.equal(PROPERTY_TARGET_OPERATING_SYSTEM)) targetOperatingSystemKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getName(), nameKey)) && 
			(String::equalNoCase(getVersion(), versionKey)) && 
			(String::equalNoCase(String(std::to_string(getSoftwareElementState()).c_str()), softwareElementStateKey)) && 
			(String::equalNoCase(getSoftwareElementID(), softwareElementIDKey)) && 
			(String::equalNoCase(String(std::to_string(getTargetOperatingSystem()).c_str()), targetOperatingSystemKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_VideoBIOSElement::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VideoBIOSElement::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VideoBIOSElement::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VideoBIOSElement::validateInstance()
{
	return true;
}

