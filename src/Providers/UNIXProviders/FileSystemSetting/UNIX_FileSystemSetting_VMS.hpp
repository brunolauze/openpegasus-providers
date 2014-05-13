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


UNIX_FileSystemSetting::UNIX_FileSystemSetting(void)
{
}

UNIX_FileSystemSetting::~UNIX_FileSystemSetting(void)
{
}

Boolean UNIX_FileSystemSetting::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_FileSystemSetting::getInstanceID() const
{
	return _instanceID;
}

void UNIX_FileSystemSetting::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_FileSystemSetting::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_FileSystemSetting::getCaption() const
{
	return _caption;
}

void UNIX_FileSystemSetting::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_FileSystemSetting::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_FileSystemSetting::getDescription() const
{
	return _description;
}

void UNIX_FileSystemSetting::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_FileSystemSetting::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_FileSystemSetting::getElementName() const
{
	return _elementName;
}

void UNIX_FileSystemSetting::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_FileSystemSetting::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_FileSystemSetting::getGeneration() const
{
	return _generation;
}

void UNIX_FileSystemSetting::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_FileSystemSetting::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_FileSystemSetting::getConfigurationName() const
{
	return _configurationName;
}

void UNIX_FileSystemSetting::setConfigurationName(String &value)
{
	_configurationName = value;
}

Boolean UNIX_FileSystemSetting::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_FileSystemSetting::getChangeableType() const
{
	return _changeableType;
}

void UNIX_FileSystemSetting::setChangeableType(Uint16 &value)
{
	_changeableType = value;
}

Boolean UNIX_FileSystemSetting::getComponentSetting(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPONENT_SETTING, getComponentSetting());
	return true;
}

Array<String> UNIX_FileSystemSetting::getComponentSetting() const
{
	return _componentSetting;
}

void UNIX_FileSystemSetting::setComponentSetting(Array<String> &value)
{
	_componentSetting = value;
}

Boolean UNIX_FileSystemSetting::getSoID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ID, getSoID());
	return true;
}

String UNIX_FileSystemSetting::getSoID() const
{
	return _soID;
}

void UNIX_FileSystemSetting::setSoID(String &value)
{
	_soID = value;
}

Boolean UNIX_FileSystemSetting::getSoOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ORG_ID, getSoOrgID());
	return true;
}

String UNIX_FileSystemSetting::getSoOrgID() const
{
	return _soOrgID;
}

void UNIX_FileSystemSetting::setSoOrgID(String &value)
{
	_soOrgID = value;
}

Boolean UNIX_FileSystemSetting::getActualFileSystemType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACTUAL_FILE_SYSTEM_TYPE, getActualFileSystemType());
	return true;
}

Uint16 UNIX_FileSystemSetting::getActualFileSystemType() const
{
	return _actualFileSystemType;
}

void UNIX_FileSystemSetting::setActualFileSystemType(Uint16 &value)
{
	_actualFileSystemType = value;
}

Boolean UNIX_FileSystemSetting::getDataExtentsSharing(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_EXTENTS_SHARING, getDataExtentsSharing());
	return true;
}

Uint16 UNIX_FileSystemSetting::getDataExtentsSharing() const
{
	return _dataExtentsSharing;
}

void UNIX_FileSystemSetting::setDataExtentsSharing(Uint16 &value)
{
	_dataExtentsSharing = value;
}

Boolean UNIX_FileSystemSetting::getCopyTarget(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COPY_TARGET, getCopyTarget());
	return true;
}

Uint16 UNIX_FileSystemSetting::getCopyTarget() const
{
	return _copyTarget;
}

void UNIX_FileSystemSetting::setCopyTarget(Uint16 &value)
{
	_copyTarget = value;
}

Boolean UNIX_FileSystemSetting::getFilenameCaseAttributes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FILENAME_CASE_ATTRIBUTES, getFilenameCaseAttributes());
	return true;
}

Uint16 UNIX_FileSystemSetting::getFilenameCaseAttributes() const
{
	return _filenameCaseAttributes;
}

void UNIX_FileSystemSetting::setFilenameCaseAttributes(Uint16 &value)
{
	_filenameCaseAttributes = value;
}

Boolean UNIX_FileSystemSetting::getObjectTypes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OBJECT_TYPES, getObjectTypes());
	return true;
}

Array<Uint16> UNIX_FileSystemSetting::getObjectTypes() const
{
	return _objectTypes;
}

void UNIX_FileSystemSetting::setObjectTypes(Array<Uint16> &value)
{
	_objectTypes = value;
}

Boolean UNIX_FileSystemSetting::getNumberOfObjectsMin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_OBJECTS_MIN, getNumberOfObjectsMin());
	return true;
}

Array<Uint64> UNIX_FileSystemSetting::getNumberOfObjectsMin() const
{
	return _numberOfObjectsMin;
}

void UNIX_FileSystemSetting::setNumberOfObjectsMin(Array<Uint64> &value)
{
	_numberOfObjectsMin = value;
}

Boolean UNIX_FileSystemSetting::getNumberOfObjectsMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_OBJECTS_MAX, getNumberOfObjectsMax());
	return true;
}

Array<Uint64> UNIX_FileSystemSetting::getNumberOfObjectsMax() const
{
	return _numberOfObjectsMax;
}

void UNIX_FileSystemSetting::setNumberOfObjectsMax(Array<Uint64> &value)
{
	_numberOfObjectsMax = value;
}

Boolean UNIX_FileSystemSetting::getNumberOfObjects(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_OBJECTS, getNumberOfObjects());
	return true;
}

Array<Uint64> UNIX_FileSystemSetting::getNumberOfObjects() const
{
	return _numberOfObjects;
}

void UNIX_FileSystemSetting::setNumberOfObjects(Array<Uint64> &value)
{
	_numberOfObjects = value;
}

Boolean UNIX_FileSystemSetting::getObjectSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OBJECT_SIZE, getObjectSize());
	return true;
}

Array<Uint64> UNIX_FileSystemSetting::getObjectSize() const
{
	return _objectSize;
}

void UNIX_FileSystemSetting::setObjectSize(Array<Uint64> &value)
{
	_objectSize = value;
}

Boolean UNIX_FileSystemSetting::getObjectSizeMin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OBJECT_SIZE_MIN, getObjectSizeMin());
	return true;
}

Array<Uint64> UNIX_FileSystemSetting::getObjectSizeMin() const
{
	return _objectSizeMin;
}

void UNIX_FileSystemSetting::setObjectSizeMin(Array<Uint64> &value)
{
	_objectSizeMin = value;
}

Boolean UNIX_FileSystemSetting::getObjectSizeMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OBJECT_SIZE_MAX, getObjectSizeMax());
	return true;
}

Array<Uint64> UNIX_FileSystemSetting::getObjectSizeMax() const
{
	return _objectSizeMax;
}

void UNIX_FileSystemSetting::setObjectSizeMax(Array<Uint64> &value)
{
	_objectSizeMax = value;
}

Boolean UNIX_FileSystemSetting::getFilenameStreamFormats(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FILENAME_STREAM_FORMATS, getFilenameStreamFormats());
	return true;
}

Array<Uint16> UNIX_FileSystemSetting::getFilenameStreamFormats() const
{
	return _filenameStreamFormats;
}

void UNIX_FileSystemSetting::setFilenameStreamFormats(Array<Uint16> &value)
{
	_filenameStreamFormats = value;
}

Boolean UNIX_FileSystemSetting::getFilenameFormats(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FILENAME_FORMATS, getFilenameFormats());
	return true;
}

Array<Uint16> UNIX_FileSystemSetting::getFilenameFormats() const
{
	return _filenameFormats;
}

void UNIX_FileSystemSetting::setFilenameFormats(Array<Uint16> &value)
{
	_filenameFormats = value;
}

Boolean UNIX_FileSystemSetting::getFilenameLengthMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FILENAME_LENGTH_MAX, getFilenameLengthMax());
	return true;
}

Array<Uint16> UNIX_FileSystemSetting::getFilenameLengthMax() const
{
	return _filenameLengthMax;
}

void UNIX_FileSystemSetting::setFilenameLengthMax(Array<Uint16> &value)
{
	_filenameLengthMax = value;
}

Boolean UNIX_FileSystemSetting::getFilenameReservedCharacterSet(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FILENAME_RESERVED_CHARACTER_SET, getFilenameReservedCharacterSet());
	return true;
}

Array<String> UNIX_FileSystemSetting::getFilenameReservedCharacterSet() const
{
	return _filenameReservedCharacterSet;
}

void UNIX_FileSystemSetting::setFilenameReservedCharacterSet(Array<String> &value)
{
	_filenameReservedCharacterSet = value;
}

Boolean UNIX_FileSystemSetting::getSupportedLockingSemantics(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_LOCKING_SEMANTICS, getSupportedLockingSemantics());
	return true;
}

Array<Uint16> UNIX_FileSystemSetting::getSupportedLockingSemantics() const
{
	return _supportedLockingSemantics;
}

void UNIX_FileSystemSetting::setSupportedLockingSemantics(Array<Uint16> &value)
{
	_supportedLockingSemantics = value;
}

Boolean UNIX_FileSystemSetting::getSupportedAuthorizationProtocols(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_AUTHORIZATION_PROTOCOLS, getSupportedAuthorizationProtocols());
	return true;
}

Array<Uint16> UNIX_FileSystemSetting::getSupportedAuthorizationProtocols() const
{
	return _supportedAuthorizationProtocols;
}

void UNIX_FileSystemSetting::setSupportedAuthorizationProtocols(Array<Uint16> &value)
{
	_supportedAuthorizationProtocols = value;
}

Boolean UNIX_FileSystemSetting::getSupportedAuthenticationProtocols(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_AUTHENTICATION_PROTOCOLS, getSupportedAuthenticationProtocols());
	return true;
}

Array<Uint16> UNIX_FileSystemSetting::getSupportedAuthenticationProtocols() const
{
	return _supportedAuthenticationProtocols;
}

void UNIX_FileSystemSetting::setSupportedAuthenticationProtocols(Array<Uint16> &value)
{
	_supportedAuthenticationProtocols = value;
}

Boolean UNIX_FileSystemSetting::getPersistenceTypes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERSISTENCE_TYPES, getPersistenceTypes());
	return true;
}

Array<Uint16> UNIX_FileSystemSetting::getPersistenceTypes() const
{
	return _persistenceTypes;
}

void UNIX_FileSystemSetting::setPersistenceTypes(Array<Uint16> &value)
{
	_persistenceTypes = value;
}

Boolean UNIX_FileSystemSetting::getOtherPersistenceTypes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_PERSISTENCE_TYPES, getOtherPersistenceTypes());
	return true;
}

Array<String> UNIX_FileSystemSetting::getOtherPersistenceTypes() const
{
	return _otherPersistenceTypes;
}

void UNIX_FileSystemSetting::setOtherPersistenceTypes(Array<String> &value)
{
	_otherPersistenceTypes = value;
}


void UNIX_FileSystemSetting::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("FileSystemSetting");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_actualFileSystemType = Uint16(0);
	_dataExtentsSharing = Uint16(0);
	_copyTarget = Uint16(0);
	_filenameCaseAttributes = Uint16(0);
	_objectTypes.clear();
	_numberOfObjectsMin.clear();
	_numberOfObjectsMax.clear();
	_numberOfObjects.clear();
	_objectSize.clear();
	_objectSizeMin.clear();
	_objectSizeMax.clear();
	_filenameStreamFormats.clear();
	_filenameFormats.clear();
	_filenameLengthMax.clear();
	_filenameReservedCharacterSet.clear();
	_supportedLockingSemantics.clear();
	_supportedAuthorizationProtocols.clear();
	_supportedAuthenticationProtocols.clear();
	_persistenceTypes.clear();
	_otherPersistenceTypes.clear();

}

Boolean UNIX_FileSystemSetting::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "ConfigurationName"))
			{
				String configurationNameValue;
				property.getValue().get(configurationNameValue);
				setConfigurationName(configurationNameValue);
			}
			else if (String::equal(property.getName().getString(), "ChangeableType"))
			{
				Uint16 changeableTypeValue;
				property.getValue().get(changeableTypeValue);
				setChangeableType(changeableTypeValue);
			}
			else if (String::equal(property.getName().getString(), "ComponentSetting"))
			{
				Array<String> componentSettingValue;
				property.getValue().get(componentSettingValue);
				setComponentSetting(componentSettingValue);
			}
			else if (String::equal(property.getName().getString(), "SoID"))
			{
				String soIDValue;
				property.getValue().get(soIDValue);
				setSoID(soIDValue);
			}
			else if (String::equal(property.getName().getString(), "SoOrgID"))
			{
				String soOrgIDValue;
				property.getValue().get(soOrgIDValue);
				setSoOrgID(soOrgIDValue);
			}
			else if (String::equal(property.getName().getString(), "ActualFileSystemType"))
			{
				Uint16 actualFileSystemTypeValue;
				property.getValue().get(actualFileSystemTypeValue);
				setActualFileSystemType(actualFileSystemTypeValue);
			}
			else if (String::equal(property.getName().getString(), "DataExtentsSharing"))
			{
				Uint16 dataExtentsSharingValue;
				property.getValue().get(dataExtentsSharingValue);
				setDataExtentsSharing(dataExtentsSharingValue);
			}
			else if (String::equal(property.getName().getString(), "CopyTarget"))
			{
				Uint16 copyTargetValue;
				property.getValue().get(copyTargetValue);
				setCopyTarget(copyTargetValue);
			}
			else if (String::equal(property.getName().getString(), "FilenameCaseAttributes"))
			{
				Uint16 filenameCaseAttributesValue;
				property.getValue().get(filenameCaseAttributesValue);
				setFilenameCaseAttributes(filenameCaseAttributesValue);
			}
			else if (String::equal(property.getName().getString(), "ObjectTypes"))
			{
				Array<Uint16> objectTypesValue;
				property.getValue().get(objectTypesValue);
				setObjectTypes(objectTypesValue);
			}
			else if (String::equal(property.getName().getString(), "NumberOfObjectsMin"))
			{
				Array<Uint64> numberOfObjectsMinValue;
				property.getValue().get(numberOfObjectsMinValue);
				setNumberOfObjectsMin(numberOfObjectsMinValue);
			}
			else if (String::equal(property.getName().getString(), "NumberOfObjectsMax"))
			{
				Array<Uint64> numberOfObjectsMaxValue;
				property.getValue().get(numberOfObjectsMaxValue);
				setNumberOfObjectsMax(numberOfObjectsMaxValue);
			}
			else if (String::equal(property.getName().getString(), "NumberOfObjects"))
			{
				Array<Uint64> numberOfObjectsValue;
				property.getValue().get(numberOfObjectsValue);
				setNumberOfObjects(numberOfObjectsValue);
			}
			else if (String::equal(property.getName().getString(), "ObjectSize"))
			{
				Array<Uint64> objectSizeValue;
				property.getValue().get(objectSizeValue);
				setObjectSize(objectSizeValue);
			}
			else if (String::equal(property.getName().getString(), "ObjectSizeMin"))
			{
				Array<Uint64> objectSizeMinValue;
				property.getValue().get(objectSizeMinValue);
				setObjectSizeMin(objectSizeMinValue);
			}
			else if (String::equal(property.getName().getString(), "ObjectSizeMax"))
			{
				Array<Uint64> objectSizeMaxValue;
				property.getValue().get(objectSizeMaxValue);
				setObjectSizeMax(objectSizeMaxValue);
			}
			else if (String::equal(property.getName().getString(), "FilenameStreamFormats"))
			{
				Array<Uint16> filenameStreamFormatsValue;
				property.getValue().get(filenameStreamFormatsValue);
				setFilenameStreamFormats(filenameStreamFormatsValue);
			}
			else if (String::equal(property.getName().getString(), "FilenameFormats"))
			{
				Array<Uint16> filenameFormatsValue;
				property.getValue().get(filenameFormatsValue);
				setFilenameFormats(filenameFormatsValue);
			}
			else if (String::equal(property.getName().getString(), "FilenameLengthMax"))
			{
				Array<Uint16> filenameLengthMaxValue;
				property.getValue().get(filenameLengthMaxValue);
				setFilenameLengthMax(filenameLengthMaxValue);
			}
			else if (String::equal(property.getName().getString(), "FilenameReservedCharacterSet"))
			{
				Array<String> filenameReservedCharacterSetValue;
				property.getValue().get(filenameReservedCharacterSetValue);
				setFilenameReservedCharacterSet(filenameReservedCharacterSetValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedLockingSemantics"))
			{
				Array<Uint16> supportedLockingSemanticsValue;
				property.getValue().get(supportedLockingSemanticsValue);
				setSupportedLockingSemantics(supportedLockingSemanticsValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedAuthorizationProtocols"))
			{
				Array<Uint16> supportedAuthorizationProtocolsValue;
				property.getValue().get(supportedAuthorizationProtocolsValue);
				setSupportedAuthorizationProtocols(supportedAuthorizationProtocolsValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedAuthenticationProtocols"))
			{
				Array<Uint16> supportedAuthenticationProtocolsValue;
				property.getValue().get(supportedAuthenticationProtocolsValue);
				setSupportedAuthenticationProtocols(supportedAuthenticationProtocolsValue);
			}
			else if (String::equal(property.getName().getString(), "PersistenceTypes"))
			{
				Array<Uint16> persistenceTypesValue;
				property.getValue().get(persistenceTypesValue);
				setPersistenceTypes(persistenceTypesValue);
			}
			else if (String::equal(property.getName().getString(), "OtherPersistenceTypes"))
			{
				Array<String> otherPersistenceTypesValue;
				property.getValue().get(otherPersistenceTypesValue);
				setOtherPersistenceTypes(otherPersistenceTypesValue);
			}
	}
	return true;
}


Boolean UNIX_FileSystemSetting::initialize()
{
	return false;
}

Boolean UNIX_FileSystemSetting::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("FileSystemSetting");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_actualFileSystemType = Uint16(0);
	_dataExtentsSharing = Uint16(0);
	_copyTarget = Uint16(0);
	_filenameCaseAttributes = Uint16(0);
	_objectTypes.clear();
	_numberOfObjectsMin.clear();
	_numberOfObjectsMax.clear();
	_numberOfObjects.clear();
	_objectSize.clear();
	_objectSizeMin.clear();
	_objectSizeMax.clear();
	_filenameStreamFormats.clear();
	_filenameFormats.clear();
	_filenameLengthMax.clear();
	_filenameReservedCharacterSet.clear();
	_supportedLockingSemantics.clear();
	_supportedAuthorizationProtocols.clear();
	_supportedAuthenticationProtocols.clear();
	_persistenceTypes.clear();
	_otherPersistenceTypes.clear();
	
	return false;
}

Boolean UNIX_FileSystemSetting::finalize()
{
	return false;
}


Boolean UNIX_FileSystemSetting::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_FileSystemSetting::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FileSystemSetting::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FileSystemSetting::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FileSystemSetting::validateInstance()
{
	return true;
}

