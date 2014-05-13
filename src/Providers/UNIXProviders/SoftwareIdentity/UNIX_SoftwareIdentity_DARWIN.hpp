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


UNIX_SoftwareIdentity::UNIX_SoftwareIdentity(void)
{
}

UNIX_SoftwareIdentity::~UNIX_SoftwareIdentity(void)
{
}

Boolean UNIX_SoftwareIdentity::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_SoftwareIdentity::getInstanceID() const
{
	return _instanceID;
}

void UNIX_SoftwareIdentity::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_SoftwareIdentity::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_SoftwareIdentity::getCaption() const
{
	return _caption;
}

void UNIX_SoftwareIdentity::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_SoftwareIdentity::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_SoftwareIdentity::getDescription() const
{
	return _description;
}

void UNIX_SoftwareIdentity::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_SoftwareIdentity::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_SoftwareIdentity::getElementName() const
{
	return _elementName;
}

void UNIX_SoftwareIdentity::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_SoftwareIdentity::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_SoftwareIdentity::getGeneration() const
{
	return _generation;
}

void UNIX_SoftwareIdentity::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_SoftwareIdentity::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_SoftwareIdentity::getInstallDate() const
{
	return _installDate;
}

void UNIX_SoftwareIdentity::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_SoftwareIdentity::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_SoftwareIdentity::getName() const
{
	return _name;
}

void UNIX_SoftwareIdentity::setName(String &value)
{
	_name = value;
}

Boolean UNIX_SoftwareIdentity::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_SoftwareIdentity::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_SoftwareIdentity::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_SoftwareIdentity::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_SoftwareIdentity::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_SoftwareIdentity::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_SoftwareIdentity::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_SoftwareIdentity::getStatus() const
{
	return _status;
}

void UNIX_SoftwareIdentity::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_SoftwareIdentity::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_SoftwareIdentity::getHealthState() const
{
	return _healthState;
}

void UNIX_SoftwareIdentity::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_SoftwareIdentity::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_SoftwareIdentity::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_SoftwareIdentity::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_SoftwareIdentity::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_SoftwareIdentity::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_SoftwareIdentity::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_SoftwareIdentity::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_SoftwareIdentity::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_SoftwareIdentity::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_SoftwareIdentity::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_SoftwareIdentity::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_SoftwareIdentity::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_SoftwareIdentity::getMajorVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAJOR_VERSION, getMajorVersion());
	return true;
}

Uint16 UNIX_SoftwareIdentity::getMajorVersion() const
{
	return _majorVersion;
}

void UNIX_SoftwareIdentity::setMajorVersion(Uint16 &value)
{
	_majorVersion = value;
}

Boolean UNIX_SoftwareIdentity::getMinorVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MINOR_VERSION, getMinorVersion());
	return true;
}

Uint16 UNIX_SoftwareIdentity::getMinorVersion() const
{
	return _minorVersion;
}

void UNIX_SoftwareIdentity::setMinorVersion(Uint16 &value)
{
	_minorVersion = value;
}

Boolean UNIX_SoftwareIdentity::getRevisionNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REVISION_NUMBER, getRevisionNumber());
	return true;
}

Uint16 UNIX_SoftwareIdentity::getRevisionNumber() const
{
	return _revisionNumber;
}

void UNIX_SoftwareIdentity::setRevisionNumber(Uint16 &value)
{
	_revisionNumber = value;
}

Boolean UNIX_SoftwareIdentity::getBuildNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BUILD_NUMBER, getBuildNumber());
	return true;
}

Uint16 UNIX_SoftwareIdentity::getBuildNumber() const
{
	return _buildNumber;
}

void UNIX_SoftwareIdentity::setBuildNumber(Uint16 &value)
{
	_buildNumber = value;
}

Boolean UNIX_SoftwareIdentity::getLargeBuildNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LARGE_BUILD_NUMBER, getLargeBuildNumber());
	return true;
}

Uint64 UNIX_SoftwareIdentity::getLargeBuildNumber() const
{
	return _largeBuildNumber;
}

void UNIX_SoftwareIdentity::setLargeBuildNumber(Uint64 &value)
{
	_largeBuildNumber = value;
}

Boolean UNIX_SoftwareIdentity::getIsLargeBuildNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_LARGE_BUILD_NUMBER, getIsLargeBuildNumber());
	return true;
}

Boolean UNIX_SoftwareIdentity::getIsLargeBuildNumber() const
{
	return _isLargeBuildNumber;
}

void UNIX_SoftwareIdentity::setIsLargeBuildNumber(Boolean &value)
{
	_isLargeBuildNumber = value;
}

Boolean UNIX_SoftwareIdentity::getVersionString(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERSION_STRING, getVersionString());
	return true;
}

String UNIX_SoftwareIdentity::getVersionString() const
{
	return _versionString;
}

void UNIX_SoftwareIdentity::setVersionString(String &value)
{
	_versionString = value;
}

Boolean UNIX_SoftwareIdentity::getTargetOperatingSystems(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TARGET_OPERATING_SYSTEMS, getTargetOperatingSystems());
	return true;
}

Array<String> UNIX_SoftwareIdentity::getTargetOperatingSystems() const
{
	return _targetOperatingSystems;
}

void UNIX_SoftwareIdentity::setTargetOperatingSystems(Array<String> &value)
{
	_targetOperatingSystems = value;
}

Boolean UNIX_SoftwareIdentity::getManufacturer(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANUFACTURER, getManufacturer());
	return true;
}

String UNIX_SoftwareIdentity::getManufacturer() const
{
	return _manufacturer;
}

void UNIX_SoftwareIdentity::setManufacturer(String &value)
{
	_manufacturer = value;
}

Boolean UNIX_SoftwareIdentity::getLanguages(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LANGUAGES, getLanguages());
	return true;
}

Array<String> UNIX_SoftwareIdentity::getLanguages() const
{
	return _languages;
}

void UNIX_SoftwareIdentity::setLanguages(Array<String> &value)
{
	_languages = value;
}

Boolean UNIX_SoftwareIdentity::getClassifications(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASSIFICATIONS, getClassifications());
	return true;
}

Array<Uint16> UNIX_SoftwareIdentity::getClassifications() const
{
	return _classifications;
}

void UNIX_SoftwareIdentity::setClassifications(Array<Uint16> &value)
{
	_classifications = value;
}

Boolean UNIX_SoftwareIdentity::getClassificationDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASSIFICATION_DESCRIPTIONS, getClassificationDescriptions());
	return true;
}

Array<String> UNIX_SoftwareIdentity::getClassificationDescriptions() const
{
	return _classificationDescriptions;
}

void UNIX_SoftwareIdentity::setClassificationDescriptions(Array<String> &value)
{
	_classificationDescriptions = value;
}

Boolean UNIX_SoftwareIdentity::getSerialNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERIAL_NUMBER, getSerialNumber());
	return true;
}

String UNIX_SoftwareIdentity::getSerialNumber() const
{
	return _serialNumber;
}

void UNIX_SoftwareIdentity::setSerialNumber(String &value)
{
	_serialNumber = value;
}

Boolean UNIX_SoftwareIdentity::getTargetTypes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TARGET_TYPES, getTargetTypes());
	return true;
}

Array<String> UNIX_SoftwareIdentity::getTargetTypes() const
{
	return _targetTypes;
}

void UNIX_SoftwareIdentity::setTargetTypes(Array<String> &value)
{
	_targetTypes = value;
}

Boolean UNIX_SoftwareIdentity::getIdentityInfoValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTITY_INFO_VALUE, getIdentityInfoValue());
	return true;
}

Array<String> UNIX_SoftwareIdentity::getIdentityInfoValue() const
{
	return _identityInfoValue;
}

void UNIX_SoftwareIdentity::setIdentityInfoValue(Array<String> &value)
{
	_identityInfoValue = value;
}

Boolean UNIX_SoftwareIdentity::getIdentityInfoType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTITY_INFO_TYPE, getIdentityInfoType());
	return true;
}

Array<String> UNIX_SoftwareIdentity::getIdentityInfoType() const
{
	return _identityInfoType;
}

void UNIX_SoftwareIdentity::setIdentityInfoType(Array<String> &value)
{
	_identityInfoType = value;
}

Boolean UNIX_SoftwareIdentity::getReleaseDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RELEASE_DATE, getReleaseDate());
	return true;
}

CIMDateTime UNIX_SoftwareIdentity::getReleaseDate() const
{
	return _releaseDate;
}

void UNIX_SoftwareIdentity::setReleaseDate(CIMDateTime &value)
{
	_releaseDate = value;
}

Boolean UNIX_SoftwareIdentity::getIsEntity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_ENTITY, getIsEntity());
	return true;
}

Boolean UNIX_SoftwareIdentity::getIsEntity() const
{
	return _isEntity;
}

void UNIX_SoftwareIdentity::setIsEntity(Boolean &value)
{
	_isEntity = value;
}

Boolean UNIX_SoftwareIdentity::getExtendedResourceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENDED_RESOURCE_TYPE, getExtendedResourceType());
	return true;
}

Uint16 UNIX_SoftwareIdentity::getExtendedResourceType() const
{
	return _extendedResourceType;
}

void UNIX_SoftwareIdentity::setExtendedResourceType(Uint16 &value)
{
	_extendedResourceType = value;
}

Boolean UNIX_SoftwareIdentity::getOtherExtendedResourceTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_EXTENDED_RESOURCE_TYPE_DESCRIPTION, getOtherExtendedResourceTypeDescription());
	return true;
}

String UNIX_SoftwareIdentity::getOtherExtendedResourceTypeDescription() const
{
	return _otherExtendedResourceTypeDescription;
}

void UNIX_SoftwareIdentity::setOtherExtendedResourceTypeDescription(String &value)
{
	_otherExtendedResourceTypeDescription = value;
}

Boolean UNIX_SoftwareIdentity::getMinExtendedResourceTypeMajorVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIN_EXTENDED_RESOURCE_TYPE_MAJOR_VERSION, getMinExtendedResourceTypeMajorVersion());
	return true;
}

Uint16 UNIX_SoftwareIdentity::getMinExtendedResourceTypeMajorVersion() const
{
	return _minExtendedResourceTypeMajorVersion;
}

void UNIX_SoftwareIdentity::setMinExtendedResourceTypeMajorVersion(Uint16 &value)
{
	_minExtendedResourceTypeMajorVersion = value;
}

Boolean UNIX_SoftwareIdentity::getMinExtendedResourceTypeMinorVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIN_EXTENDED_RESOURCE_TYPE_MINOR_VERSION, getMinExtendedResourceTypeMinorVersion());
	return true;
}

Uint16 UNIX_SoftwareIdentity::getMinExtendedResourceTypeMinorVersion() const
{
	return _minExtendedResourceTypeMinorVersion;
}

void UNIX_SoftwareIdentity::setMinExtendedResourceTypeMinorVersion(Uint16 &value)
{
	_minExtendedResourceTypeMinorVersion = value;
}

Boolean UNIX_SoftwareIdentity::getMinExtendedResourceTypeRevisionNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIN_EXTENDED_RESOURCE_TYPE_REVISION_NUMBER, getMinExtendedResourceTypeRevisionNumber());
	return true;
}

Uint16 UNIX_SoftwareIdentity::getMinExtendedResourceTypeRevisionNumber() const
{
	return _minExtendedResourceTypeRevisionNumber;
}

void UNIX_SoftwareIdentity::setMinExtendedResourceTypeRevisionNumber(Uint16 &value)
{
	_minExtendedResourceTypeRevisionNumber = value;
}

Boolean UNIX_SoftwareIdentity::getMinExtendedResourceTypeBuildNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIN_EXTENDED_RESOURCE_TYPE_BUILD_NUMBER, getMinExtendedResourceTypeBuildNumber());
	return true;
}

Uint16 UNIX_SoftwareIdentity::getMinExtendedResourceTypeBuildNumber() const
{
	return _minExtendedResourceTypeBuildNumber;
}

void UNIX_SoftwareIdentity::setMinExtendedResourceTypeBuildNumber(Uint16 &value)
{
	_minExtendedResourceTypeBuildNumber = value;
}

Boolean UNIX_SoftwareIdentity::getTargetOSTypes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TARGET_OS_TYPES, getTargetOSTypes());
	return true;
}

Array<Uint16> UNIX_SoftwareIdentity::getTargetOSTypes() const
{
	return _targetOSTypes;
}

void UNIX_SoftwareIdentity::setTargetOSTypes(Array<Uint16> &value)
{
	_targetOSTypes = value;
}


void UNIX_SoftwareIdentity::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("SoftwareIdentity");
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
	_majorVersion = Uint16(0);
	_minorVersion = Uint16(0);
	_revisionNumber = Uint16(0);
	_buildNumber = Uint16(0);
	_largeBuildNumber = Uint64(0);
	_isLargeBuildNumber = Boolean(false);
	_versionString = String ("");
	_targetOperatingSystems.clear();
	_manufacturer = String ("");
	_languages.clear();
	_classifications.clear();
	_classificationDescriptions.clear();
	_serialNumber = String ("");
	_targetTypes.clear();
	_identityInfoValue.clear();
	_identityInfoType.clear();
	_releaseDate = CIMHelper::getCurrentTime();
	_isEntity = Boolean(false);
	_extendedResourceType = Uint16(0);
	_otherExtendedResourceTypeDescription = String ("");
	_minExtendedResourceTypeMajorVersion = Uint16(0);
	_minExtendedResourceTypeMinorVersion = Uint16(0);
	_minExtendedResourceTypeRevisionNumber = Uint16(0);
	_minExtendedResourceTypeBuildNumber = Uint16(0);
	_targetOSTypes.clear();

}

Boolean UNIX_SoftwareIdentity::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "MajorVersion"))
			{
				Uint16 majorVersionValue;
				property.getValue().get(majorVersionValue);
				setMajorVersion(majorVersionValue);
			}
			else if (String::equal(property.getName().getString(), "MinorVersion"))
			{
				Uint16 minorVersionValue;
				property.getValue().get(minorVersionValue);
				setMinorVersion(minorVersionValue);
			}
			else if (String::equal(property.getName().getString(), "RevisionNumber"))
			{
				Uint16 revisionNumberValue;
				property.getValue().get(revisionNumberValue);
				setRevisionNumber(revisionNumberValue);
			}
			else if (String::equal(property.getName().getString(), "BuildNumber"))
			{
				Uint16 buildNumberValue;
				property.getValue().get(buildNumberValue);
				setBuildNumber(buildNumberValue);
			}
			else if (String::equal(property.getName().getString(), "LargeBuildNumber"))
			{
				Uint64 largeBuildNumberValue;
				property.getValue().get(largeBuildNumberValue);
				setLargeBuildNumber(largeBuildNumberValue);
			}
			else if (String::equal(property.getName().getString(), "IsLargeBuildNumber"))
			{
				Boolean isLargeBuildNumberValue;
				property.getValue().get(isLargeBuildNumberValue);
				setIsLargeBuildNumber(isLargeBuildNumberValue);
			}
			else if (String::equal(property.getName().getString(), "VersionString"))
			{
				String versionStringValue;
				property.getValue().get(versionStringValue);
				setVersionString(versionStringValue);
			}
			else if (String::equal(property.getName().getString(), "TargetOperatingSystems"))
			{
				Array<String> targetOperatingSystemsValue;
				property.getValue().get(targetOperatingSystemsValue);
				setTargetOperatingSystems(targetOperatingSystemsValue);
			}
			else if (String::equal(property.getName().getString(), "Manufacturer"))
			{
				String manufacturerValue;
				property.getValue().get(manufacturerValue);
				setManufacturer(manufacturerValue);
			}
			else if (String::equal(property.getName().getString(), "Languages"))
			{
				Array<String> languagesValue;
				property.getValue().get(languagesValue);
				setLanguages(languagesValue);
			}
			else if (String::equal(property.getName().getString(), "Classifications"))
			{
				Array<Uint16> classificationsValue;
				property.getValue().get(classificationsValue);
				setClassifications(classificationsValue);
			}
			else if (String::equal(property.getName().getString(), "ClassificationDescriptions"))
			{
				Array<String> classificationDescriptionsValue;
				property.getValue().get(classificationDescriptionsValue);
				setClassificationDescriptions(classificationDescriptionsValue);
			}
			else if (String::equal(property.getName().getString(), "SerialNumber"))
			{
				String serialNumberValue;
				property.getValue().get(serialNumberValue);
				setSerialNumber(serialNumberValue);
			}
			else if (String::equal(property.getName().getString(), "TargetTypes"))
			{
				Array<String> targetTypesValue;
				property.getValue().get(targetTypesValue);
				setTargetTypes(targetTypesValue);
			}
			else if (String::equal(property.getName().getString(), "IdentityInfoValue"))
			{
				Array<String> identityInfoValueValue;
				property.getValue().get(identityInfoValueValue);
				setIdentityInfoValue(identityInfoValueValue);
			}
			else if (String::equal(property.getName().getString(), "IdentityInfoType"))
			{
				Array<String> identityInfoTypeValue;
				property.getValue().get(identityInfoTypeValue);
				setIdentityInfoType(identityInfoTypeValue);
			}
			else if (String::equal(property.getName().getString(), "ReleaseDate"))
			{
				CIMDateTime releaseDateValue;
				property.getValue().get(releaseDateValue);
				setReleaseDate(releaseDateValue);
			}
			else if (String::equal(property.getName().getString(), "IsEntity"))
			{
				Boolean isEntityValue;
				property.getValue().get(isEntityValue);
				setIsEntity(isEntityValue);
			}
			else if (String::equal(property.getName().getString(), "ExtendedResourceType"))
			{
				Uint16 extendedResourceTypeValue;
				property.getValue().get(extendedResourceTypeValue);
				setExtendedResourceType(extendedResourceTypeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherExtendedResourceTypeDescription"))
			{
				String otherExtendedResourceTypeDescriptionValue;
				property.getValue().get(otherExtendedResourceTypeDescriptionValue);
				setOtherExtendedResourceTypeDescription(otherExtendedResourceTypeDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "MinExtendedResourceTypeMajorVersion"))
			{
				Uint16 minExtendedResourceTypeMajorVersionValue;
				property.getValue().get(minExtendedResourceTypeMajorVersionValue);
				setMinExtendedResourceTypeMajorVersion(minExtendedResourceTypeMajorVersionValue);
			}
			else if (String::equal(property.getName().getString(), "MinExtendedResourceTypeMinorVersion"))
			{
				Uint16 minExtendedResourceTypeMinorVersionValue;
				property.getValue().get(minExtendedResourceTypeMinorVersionValue);
				setMinExtendedResourceTypeMinorVersion(minExtendedResourceTypeMinorVersionValue);
			}
			else if (String::equal(property.getName().getString(), "MinExtendedResourceTypeRevisionNumber"))
			{
				Uint16 minExtendedResourceTypeRevisionNumberValue;
				property.getValue().get(minExtendedResourceTypeRevisionNumberValue);
				setMinExtendedResourceTypeRevisionNumber(minExtendedResourceTypeRevisionNumberValue);
			}
			else if (String::equal(property.getName().getString(), "MinExtendedResourceTypeBuildNumber"))
			{
				Uint16 minExtendedResourceTypeBuildNumberValue;
				property.getValue().get(minExtendedResourceTypeBuildNumberValue);
				setMinExtendedResourceTypeBuildNumber(minExtendedResourceTypeBuildNumberValue);
			}
			else if (String::equal(property.getName().getString(), "TargetOSTypes"))
			{
				Array<Uint16> targetOSTypesValue;
				property.getValue().get(targetOSTypesValue);
				setTargetOSTypes(targetOSTypesValue);
			}
	}
	return true;
}


Boolean UNIX_SoftwareIdentity::initialize()
{
	return false;
}

Boolean UNIX_SoftwareIdentity::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("SoftwareIdentity");
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
	_majorVersion = Uint16(0);
	_minorVersion = Uint16(0);
	_revisionNumber = Uint16(0);
	_buildNumber = Uint16(0);
	_largeBuildNumber = Uint64(0);
	_isLargeBuildNumber = Boolean(false);
	_versionString = String ("");
	_targetOperatingSystems.clear();
	_manufacturer = String ("");
	_languages.clear();
	_classifications.clear();
	_classificationDescriptions.clear();
	_serialNumber = String ("");
	_targetTypes.clear();
	_identityInfoValue.clear();
	_identityInfoType.clear();
	_releaseDate = CIMHelper::getCurrentTime();
	_isEntity = Boolean(false);
	_extendedResourceType = Uint16(0);
	_otherExtendedResourceTypeDescription = String ("");
	_minExtendedResourceTypeMajorVersion = Uint16(0);
	_minExtendedResourceTypeMinorVersion = Uint16(0);
	_minExtendedResourceTypeRevisionNumber = Uint16(0);
	_minExtendedResourceTypeBuildNumber = Uint16(0);
	_targetOSTypes.clear();
	
	return false;
}

Boolean UNIX_SoftwareIdentity::finalize()
{
	return false;
}

Boolean UNIX_SoftwareIdentity::loadByName(const String name)
{
	return false;
}

Boolean UNIX_SoftwareIdentity::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String instanceIDKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_INSTANCE_ID)) instanceIDKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getInstanceID(), instanceIDKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_SoftwareIdentity::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SoftwareIdentity::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SoftwareIdentity::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SoftwareIdentity::validateInstance()
{
	return true;
}

