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


UNIX_BIOSElement::UNIX_BIOSElement(void)
{
}

UNIX_BIOSElement::~UNIX_BIOSElement(void)
{
}

Boolean UNIX_BIOSElement::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_BIOSElement::getInstanceID() const
{
	return _instanceID;
}

void UNIX_BIOSElement::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_BIOSElement::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_BIOSElement::getCaption() const
{
	return _caption;
}

void UNIX_BIOSElement::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_BIOSElement::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_BIOSElement::getDescription() const
{
	return _description;
}

void UNIX_BIOSElement::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_BIOSElement::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_BIOSElement::getElementName() const
{
	return _elementName;
}

void UNIX_BIOSElement::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_BIOSElement::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_BIOSElement::getGeneration() const
{
	return _generation;
}

void UNIX_BIOSElement::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_BIOSElement::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_BIOSElement::getInstallDate() const
{
	return _installDate;
}

void UNIX_BIOSElement::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_BIOSElement::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_BIOSElement::getName() const
{
	return _name;
}

void UNIX_BIOSElement::setName(String &value)
{
	_name = value;
}

Boolean UNIX_BIOSElement::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_BIOSElement::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_BIOSElement::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_BIOSElement::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_BIOSElement::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_BIOSElement::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_BIOSElement::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_BIOSElement::getStatus() const
{
	return _status;
}

void UNIX_BIOSElement::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_BIOSElement::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_BIOSElement::getHealthState() const
{
	return _healthState;
}

void UNIX_BIOSElement::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_BIOSElement::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_BIOSElement::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_BIOSElement::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_BIOSElement::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_BIOSElement::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_BIOSElement::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_BIOSElement::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_BIOSElement::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_BIOSElement::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_BIOSElement::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_BIOSElement::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_BIOSElement::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_BIOSElement::getVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERSION, getVersion());
	return true;
}

String UNIX_BIOSElement::getVersion() const
{
	return _version;
}

void UNIX_BIOSElement::setVersion(String &value)
{
	_version = value;
}

Boolean UNIX_BIOSElement::getSoftwareElementState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SOFTWARE_ELEMENT_STATE, getSoftwareElementState());
	return true;
}

Uint16 UNIX_BIOSElement::getSoftwareElementState() const
{
	return _softwareElementState;
}

void UNIX_BIOSElement::setSoftwareElementState(Uint16 &value)
{
	_softwareElementState = value;
}

Boolean UNIX_BIOSElement::getSoftwareElementID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SOFTWARE_ELEMENT_ID, getSoftwareElementID());
	return true;
}

String UNIX_BIOSElement::getSoftwareElementID() const
{
	return _softwareElementID;
}

void UNIX_BIOSElement::setSoftwareElementID(String &value)
{
	_softwareElementID = value;
}

Boolean UNIX_BIOSElement::getTargetOperatingSystem(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TARGET_OPERATING_SYSTEM, getTargetOperatingSystem());
	return true;
}

Uint16 UNIX_BIOSElement::getTargetOperatingSystem() const
{
	return _targetOperatingSystem;
}

void UNIX_BIOSElement::setTargetOperatingSystem(Uint16 &value)
{
	_targetOperatingSystem = value;
}

Boolean UNIX_BIOSElement::getOtherTargetOS(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TARGET_OS, getOtherTargetOS());
	return true;
}

String UNIX_BIOSElement::getOtherTargetOS() const
{
	return _otherTargetOS;
}

void UNIX_BIOSElement::setOtherTargetOS(String &value)
{
	_otherTargetOS = value;
}

Boolean UNIX_BIOSElement::getManufacturer(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANUFACTURER, getManufacturer());
	return true;
}

String UNIX_BIOSElement::getManufacturer() const
{
	return _manufacturer;
}

void UNIX_BIOSElement::setManufacturer(String &value)
{
	_manufacturer = value;
}

Boolean UNIX_BIOSElement::getBuildNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BUILD_NUMBER, getBuildNumber());
	return true;
}

String UNIX_BIOSElement::getBuildNumber() const
{
	return _buildNumber;
}

void UNIX_BIOSElement::setBuildNumber(String &value)
{
	_buildNumber = value;
}

Boolean UNIX_BIOSElement::getSerialNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERIAL_NUMBER, getSerialNumber());
	return true;
}

String UNIX_BIOSElement::getSerialNumber() const
{
	return _serialNumber;
}

void UNIX_BIOSElement::setSerialNumber(String &value)
{
	_serialNumber = value;
}

Boolean UNIX_BIOSElement::getCodeSet(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CODE_SET, getCodeSet());
	return true;
}

String UNIX_BIOSElement::getCodeSet() const
{
	return _codeSet;
}

void UNIX_BIOSElement::setCodeSet(String &value)
{
	_codeSet = value;
}

Boolean UNIX_BIOSElement::getIdentificationCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFICATION_CODE, getIdentificationCode());
	return true;
}

String UNIX_BIOSElement::getIdentificationCode() const
{
	return _identificationCode;
}

void UNIX_BIOSElement::setIdentificationCode(String &value)
{
	_identificationCode = value;
}

Boolean UNIX_BIOSElement::getLanguageEdition(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LANGUAGE_EDITION, getLanguageEdition());
	return true;
}

String UNIX_BIOSElement::getLanguageEdition() const
{
	return _languageEdition;
}

void UNIX_BIOSElement::setLanguageEdition(String &value)
{
	_languageEdition = value;
}

Boolean UNIX_BIOSElement::getPrimaryBIOS(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_BIOS, getPrimaryBIOS());
	return true;
}

Boolean UNIX_BIOSElement::getPrimaryBIOS() const
{
	return _primaryBIOS;
}

void UNIX_BIOSElement::setPrimaryBIOS(Boolean &value)
{
	_primaryBIOS = value;
}

Boolean UNIX_BIOSElement::getListOfLanguages(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LIST_OF_LANGUAGES, getListOfLanguages());
	return true;
}

Array<String> UNIX_BIOSElement::getListOfLanguages() const
{
	return _listOfLanguages;
}

void UNIX_BIOSElement::setListOfLanguages(Array<String> &value)
{
	_listOfLanguages = value;
}

Boolean UNIX_BIOSElement::getCurrentLanguage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_LANGUAGE, getCurrentLanguage());
	return true;
}

String UNIX_BIOSElement::getCurrentLanguage() const
{
	return _currentLanguage;
}

void UNIX_BIOSElement::setCurrentLanguage(String &value)
{
	_currentLanguage = value;
}

Boolean UNIX_BIOSElement::getLoadedStartingAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOADED_STARTING_ADDRESS, getLoadedStartingAddress());
	return true;
}

Uint64 UNIX_BIOSElement::getLoadedStartingAddress() const
{
	return _loadedStartingAddress;
}

void UNIX_BIOSElement::setLoadedStartingAddress(Uint64 &value)
{
	_loadedStartingAddress = value;
}

Boolean UNIX_BIOSElement::getLoadedEndingAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOADED_ENDING_ADDRESS, getLoadedEndingAddress());
	return true;
}

Uint64 UNIX_BIOSElement::getLoadedEndingAddress() const
{
	return _loadedEndingAddress;
}

void UNIX_BIOSElement::setLoadedEndingAddress(Uint64 &value)
{
	_loadedEndingAddress = value;
}

Boolean UNIX_BIOSElement::getLoadUtilityInformation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOAD_UTILITY_INFORMATION, getLoadUtilityInformation());
	return true;
}

String UNIX_BIOSElement::getLoadUtilityInformation() const
{
	return _loadUtilityInformation;
}

void UNIX_BIOSElement::setLoadUtilityInformation(String &value)
{
	_loadUtilityInformation = value;
}

Boolean UNIX_BIOSElement::getReleaseDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RELEASE_DATE, getReleaseDate());
	return true;
}

CIMDateTime UNIX_BIOSElement::getReleaseDate() const
{
	return _releaseDate;
}

void UNIX_BIOSElement::setReleaseDate(CIMDateTime &value)
{
	_releaseDate = value;
}

Boolean UNIX_BIOSElement::getSystemBIOSMajorRelease(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_BIOS_MAJOR_RELEASE, getSystemBIOSMajorRelease());
	return true;
}

Uint8 UNIX_BIOSElement::getSystemBIOSMajorRelease() const
{
	return _systemBIOSMajorRelease;
}

void UNIX_BIOSElement::setSystemBIOSMajorRelease(Uint8 &value)
{
	_systemBIOSMajorRelease = value;
}

Boolean UNIX_BIOSElement::getSystemBIOSMinorRelease(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_BIOS_MINOR_RELEASE, getSystemBIOSMinorRelease());
	return true;
}

Uint8 UNIX_BIOSElement::getSystemBIOSMinorRelease() const
{
	return _systemBIOSMinorRelease;
}

void UNIX_BIOSElement::setSystemBIOSMinorRelease(Uint8 &value)
{
	_systemBIOSMinorRelease = value;
}

Boolean UNIX_BIOSElement::getEmbeddedControllerFirmwareMajorRelease(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EMBEDDED_CONTROLLER_FIRMWARE_MAJOR_RELEASE, getEmbeddedControllerFirmwareMajorRelease());
	return true;
}

Uint8 UNIX_BIOSElement::getEmbeddedControllerFirmwareMajorRelease() const
{
	return _embeddedControllerFirmwareMajorRelease;
}

void UNIX_BIOSElement::setEmbeddedControllerFirmwareMajorRelease(Uint8 &value)
{
	_embeddedControllerFirmwareMajorRelease = value;
}

Boolean UNIX_BIOSElement::getEmbeddedControllerFirmwareMinorRelease(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EMBEDDED_CONTROLLER_FIRMWARE_MINOR_RELEASE, getEmbeddedControllerFirmwareMinorRelease());
	return true;
}

Uint8 UNIX_BIOSElement::getEmbeddedControllerFirmwareMinorRelease() const
{
	return _embeddedControllerFirmwareMinorRelease;
}

void UNIX_BIOSElement::setEmbeddedControllerFirmwareMinorRelease(Uint8 &value)
{
	_embeddedControllerFirmwareMinorRelease = value;
}

Boolean UNIX_BIOSElement::getRegistryURIs(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REGISTRY_U_R_IS, getRegistryURIs());
	return true;
}

Array<String> UNIX_BIOSElement::getRegistryURIs() const
{
	return _registryURIs;
}

void UNIX_BIOSElement::setRegistryURIs(Array<String> &value)
{
	_registryURIs = value;
}


void UNIX_BIOSElement::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("BIOSElement");
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
	_primaryBIOS = Boolean(false);
	_listOfLanguages.clear();
	_currentLanguage = String ("");
	_loadedStartingAddress = Uint64(0);
	_loadedEndingAddress = Uint64(0);
	_loadUtilityInformation = String ("");
	_releaseDate = CIMHelper::getCurrentTime();
	_systemBIOSMajorRelease = Uint8(0);
	_systemBIOSMinorRelease = Uint8(0);
	_embeddedControllerFirmwareMajorRelease = Uint8(0);
	_embeddedControllerFirmwareMinorRelease = Uint8(0);
	_registryURIs.clear();

}

Boolean UNIX_BIOSElement::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "PrimaryBIOS"))
			{
				Boolean primaryBIOSValue;
				property.getValue().get(primaryBIOSValue);
				setPrimaryBIOS(primaryBIOSValue);
			}
			else if (String::equal(property.getName().getString(), "ListOfLanguages"))
			{
				Array<String> listOfLanguagesValue;
				property.getValue().get(listOfLanguagesValue);
				setListOfLanguages(listOfLanguagesValue);
			}
			else if (String::equal(property.getName().getString(), "CurrentLanguage"))
			{
				String currentLanguageValue;
				property.getValue().get(currentLanguageValue);
				setCurrentLanguage(currentLanguageValue);
			}
			else if (String::equal(property.getName().getString(), "LoadedStartingAddress"))
			{
				Uint64 loadedStartingAddressValue;
				property.getValue().get(loadedStartingAddressValue);
				setLoadedStartingAddress(loadedStartingAddressValue);
			}
			else if (String::equal(property.getName().getString(), "LoadedEndingAddress"))
			{
				Uint64 loadedEndingAddressValue;
				property.getValue().get(loadedEndingAddressValue);
				setLoadedEndingAddress(loadedEndingAddressValue);
			}
			else if (String::equal(property.getName().getString(), "LoadUtilityInformation"))
			{
				String loadUtilityInformationValue;
				property.getValue().get(loadUtilityInformationValue);
				setLoadUtilityInformation(loadUtilityInformationValue);
			}
			else if (String::equal(property.getName().getString(), "ReleaseDate"))
			{
				CIMDateTime releaseDateValue;
				property.getValue().get(releaseDateValue);
				setReleaseDate(releaseDateValue);
			}
			else if (String::equal(property.getName().getString(), "SystemBIOSMajorRelease"))
			{
				Uint8 systemBIOSMajorReleaseValue;
				property.getValue().get(systemBIOSMajorReleaseValue);
				setSystemBIOSMajorRelease(systemBIOSMajorReleaseValue);
			}
			else if (String::equal(property.getName().getString(), "SystemBIOSMinorRelease"))
			{
				Uint8 systemBIOSMinorReleaseValue;
				property.getValue().get(systemBIOSMinorReleaseValue);
				setSystemBIOSMinorRelease(systemBIOSMinorReleaseValue);
			}
			else if (String::equal(property.getName().getString(), "EmbeddedControllerFirmwareMajorRelease"))
			{
				Uint8 embeddedControllerFirmwareMajorReleaseValue;
				property.getValue().get(embeddedControllerFirmwareMajorReleaseValue);
				setEmbeddedControllerFirmwareMajorRelease(embeddedControllerFirmwareMajorReleaseValue);
			}
			else if (String::equal(property.getName().getString(), "EmbeddedControllerFirmwareMinorRelease"))
			{
				Uint8 embeddedControllerFirmwareMinorReleaseValue;
				property.getValue().get(embeddedControllerFirmwareMinorReleaseValue);
				setEmbeddedControllerFirmwareMinorRelease(embeddedControllerFirmwareMinorReleaseValue);
			}
			else if (String::equal(property.getName().getString(), "RegistryURIs"))
			{
				Array<String> registryURIsValue;
				property.getValue().get(registryURIsValue);
				setRegistryURIs(registryURIsValue);
			}
	}
	return true;
}


Boolean UNIX_BIOSElement::initialize()
{
	return false;
}

Boolean UNIX_BIOSElement::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("BIOSElement");
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
	_primaryBIOS = Boolean(false);
	_listOfLanguages.clear();
	_currentLanguage = String ("");
	_loadedStartingAddress = Uint64(0);
	_loadedEndingAddress = Uint64(0);
	_loadUtilityInformation = String ("");
	_releaseDate = CIMHelper::getCurrentTime();
	_systemBIOSMajorRelease = Uint8(0);
	_systemBIOSMinorRelease = Uint8(0);
	_embeddedControllerFirmwareMajorRelease = Uint8(0);
	_embeddedControllerFirmwareMinorRelease = Uint8(0);
	_registryURIs.clear();
	
	return false;
}

Boolean UNIX_BIOSElement::finalize()
{
	return false;
}

Boolean UNIX_BIOSElement::loadByName(const String name)
{
	return false;
}

Boolean UNIX_BIOSElement::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_BIOSElement::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BIOSElement::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BIOSElement::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BIOSElement::validateInstance()
{
	return true;
}

