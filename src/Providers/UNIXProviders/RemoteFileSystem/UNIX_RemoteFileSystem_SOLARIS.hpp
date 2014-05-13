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


UNIX_RemoteFileSystem::UNIX_RemoteFileSystem(void)
{
}

UNIX_RemoteFileSystem::~UNIX_RemoteFileSystem(void)
{
}

Boolean UNIX_RemoteFileSystem::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_RemoteFileSystem::getInstanceID() const
{
	return _instanceID;
}

void UNIX_RemoteFileSystem::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_RemoteFileSystem::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_RemoteFileSystem::getCaption() const
{
	return _caption;
}

void UNIX_RemoteFileSystem::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_RemoteFileSystem::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_RemoteFileSystem::getDescription() const
{
	return _description;
}

void UNIX_RemoteFileSystem::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_RemoteFileSystem::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_RemoteFileSystem::getElementName() const
{
	return _elementName;
}

void UNIX_RemoteFileSystem::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_RemoteFileSystem::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_RemoteFileSystem::getGeneration() const
{
	return _generation;
}

void UNIX_RemoteFileSystem::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_RemoteFileSystem::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_RemoteFileSystem::getInstallDate() const
{
	return _installDate;
}

void UNIX_RemoteFileSystem::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_RemoteFileSystem::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_RemoteFileSystem::getName() const
{
	return _name;
}

void UNIX_RemoteFileSystem::setName(String &value)
{
	_name = value;
}

Boolean UNIX_RemoteFileSystem::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_RemoteFileSystem::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_RemoteFileSystem::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_RemoteFileSystem::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_RemoteFileSystem::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_RemoteFileSystem::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_RemoteFileSystem::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_RemoteFileSystem::getStatus() const
{
	return _status;
}

void UNIX_RemoteFileSystem::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_RemoteFileSystem::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_RemoteFileSystem::getHealthState() const
{
	return _healthState;
}

void UNIX_RemoteFileSystem::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_RemoteFileSystem::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_RemoteFileSystem::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_RemoteFileSystem::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_RemoteFileSystem::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_RemoteFileSystem::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_RemoteFileSystem::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_RemoteFileSystem::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_RemoteFileSystem::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_RemoteFileSystem::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_RemoteFileSystem::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_RemoteFileSystem::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_RemoteFileSystem::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_RemoteFileSystem::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_RemoteFileSystem::getEnabledState() const
{
	return _enabledState;
}

void UNIX_RemoteFileSystem::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_RemoteFileSystem::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_RemoteFileSystem::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_RemoteFileSystem::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_RemoteFileSystem::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_RemoteFileSystem::getRequestedState() const
{
	return _requestedState;
}

void UNIX_RemoteFileSystem::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_RemoteFileSystem::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_RemoteFileSystem::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_RemoteFileSystem::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_RemoteFileSystem::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_RemoteFileSystem::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_RemoteFileSystem::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_RemoteFileSystem::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_RemoteFileSystem::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_RemoteFileSystem::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_RemoteFileSystem::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_RemoteFileSystem::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_RemoteFileSystem::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_RemoteFileSystem::getCSCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CS_CREATION_CLASS_NAME, getCSCreationClassName());
	return true;
}

String UNIX_RemoteFileSystem::getCSCreationClassName() const
{
	return _cSCreationClassName;
}

void UNIX_RemoteFileSystem::setCSCreationClassName(String &value)
{
	_cSCreationClassName = value;
}

Boolean UNIX_RemoteFileSystem::getCSName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CS_NAME, getCSName());
	return true;
}

String UNIX_RemoteFileSystem::getCSName() const
{
	return _cSName;
}

void UNIX_RemoteFileSystem::setCSName(String &value)
{
	_cSName = value;
}

Boolean UNIX_RemoteFileSystem::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_RemoteFileSystem::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_RemoteFileSystem::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_RemoteFileSystem::getRoot(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ROOT, getRoot());
	return true;
}

String UNIX_RemoteFileSystem::getRoot() const
{
	return _root;
}

void UNIX_RemoteFileSystem::setRoot(String &value)
{
	_root = value;
}

Boolean UNIX_RemoteFileSystem::getBlockSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BLOCK_SIZE, getBlockSize());
	return true;
}

Uint64 UNIX_RemoteFileSystem::getBlockSize() const
{
	return _blockSize;
}

void UNIX_RemoteFileSystem::setBlockSize(Uint64 &value)
{
	_blockSize = value;
}

Boolean UNIX_RemoteFileSystem::getFileSystemSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FILE_SYSTEM_SIZE, getFileSystemSize());
	return true;
}

Uint64 UNIX_RemoteFileSystem::getFileSystemSize() const
{
	return _fileSystemSize;
}

void UNIX_RemoteFileSystem::setFileSystemSize(Uint64 &value)
{
	_fileSystemSize = value;
}

Boolean UNIX_RemoteFileSystem::getAvailableSpace(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_SPACE, getAvailableSpace());
	return true;
}

Uint64 UNIX_RemoteFileSystem::getAvailableSpace() const
{
	return _availableSpace;
}

void UNIX_RemoteFileSystem::setAvailableSpace(Uint64 &value)
{
	_availableSpace = value;
}

Boolean UNIX_RemoteFileSystem::getReadOnly(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_READ_ONLY, getReadOnly());
	return true;
}

Boolean UNIX_RemoteFileSystem::getReadOnly() const
{
	return _readOnly;
}

void UNIX_RemoteFileSystem::setReadOnly(Boolean &value)
{
	_readOnly = value;
}

Boolean UNIX_RemoteFileSystem::getEncryptionMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENCRYPTION_METHOD, getEncryptionMethod());
	return true;
}

String UNIX_RemoteFileSystem::getEncryptionMethod() const
{
	return _encryptionMethod;
}

void UNIX_RemoteFileSystem::setEncryptionMethod(String &value)
{
	_encryptionMethod = value;
}

Boolean UNIX_RemoteFileSystem::getCompressionMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPRESSION_METHOD, getCompressionMethod());
	return true;
}

String UNIX_RemoteFileSystem::getCompressionMethod() const
{
	return _compressionMethod;
}

void UNIX_RemoteFileSystem::setCompressionMethod(String &value)
{
	_compressionMethod = value;
}

Boolean UNIX_RemoteFileSystem::getCaseSensitive(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CASE_SENSITIVE, getCaseSensitive());
	return true;
}

Boolean UNIX_RemoteFileSystem::getCaseSensitive() const
{
	return _caseSensitive;
}

void UNIX_RemoteFileSystem::setCaseSensitive(Boolean &value)
{
	_caseSensitive = value;
}

Boolean UNIX_RemoteFileSystem::getCasePreserved(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CASE_PRESERVED, getCasePreserved());
	return true;
}

Boolean UNIX_RemoteFileSystem::getCasePreserved() const
{
	return _casePreserved;
}

void UNIX_RemoteFileSystem::setCasePreserved(Boolean &value)
{
	_casePreserved = value;
}

Boolean UNIX_RemoteFileSystem::getCodeSet(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CODE_SET, getCodeSet());
	return true;
}

Array<Uint16> UNIX_RemoteFileSystem::getCodeSet() const
{
	return _codeSet;
}

void UNIX_RemoteFileSystem::setCodeSet(Array<Uint16> &value)
{
	_codeSet = value;
}

Boolean UNIX_RemoteFileSystem::getMaxFileNameLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_FILE_NAME_LENGTH, getMaxFileNameLength());
	return true;
}

Uint32 UNIX_RemoteFileSystem::getMaxFileNameLength() const
{
	return _maxFileNameLength;
}

void UNIX_RemoteFileSystem::setMaxFileNameLength(Uint32 &value)
{
	_maxFileNameLength = value;
}

Boolean UNIX_RemoteFileSystem::getClusterSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLUSTER_SIZE, getClusterSize());
	return true;
}

Uint32 UNIX_RemoteFileSystem::getClusterSize() const
{
	return _clusterSize;
}

void UNIX_RemoteFileSystem::setClusterSize(Uint32 &value)
{
	_clusterSize = value;
}

Boolean UNIX_RemoteFileSystem::getFileSystemType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FILE_SYSTEM_TYPE, getFileSystemType());
	return true;
}

String UNIX_RemoteFileSystem::getFileSystemType() const
{
	return _fileSystemType;
}

void UNIX_RemoteFileSystem::setFileSystemType(String &value)
{
	_fileSystemType = value;
}

Boolean UNIX_RemoteFileSystem::getPersistenceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERSISTENCE_TYPE, getPersistenceType());
	return true;
}

Uint16 UNIX_RemoteFileSystem::getPersistenceType() const
{
	return _persistenceType;
}

void UNIX_RemoteFileSystem::setPersistenceType(Uint16 &value)
{
	_persistenceType = value;
}

Boolean UNIX_RemoteFileSystem::getOtherPersistenceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_PERSISTENCE_TYPE, getOtherPersistenceType());
	return true;
}

String UNIX_RemoteFileSystem::getOtherPersistenceType() const
{
	return _otherPersistenceType;
}

void UNIX_RemoteFileSystem::setOtherPersistenceType(String &value)
{
	_otherPersistenceType = value;
}

Boolean UNIX_RemoteFileSystem::getNumberOfFiles(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_FILES, getNumberOfFiles());
	return true;
}

Uint64 UNIX_RemoteFileSystem::getNumberOfFiles() const
{
	return _numberOfFiles;
}

void UNIX_RemoteFileSystem::setNumberOfFiles(Uint64 &value)
{
	_numberOfFiles = value;
}

Boolean UNIX_RemoteFileSystem::getIsFixedSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_FIXED_SIZE, getIsFixedSize());
	return true;
}

Uint16 UNIX_RemoteFileSystem::getIsFixedSize() const
{
	return _isFixedSize;
}

void UNIX_RemoteFileSystem::setIsFixedSize(Uint16 &value)
{
	_isFixedSize = value;
}

Boolean UNIX_RemoteFileSystem::getResizeIncrement(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESIZE_INCREMENT, getResizeIncrement());
	return true;
}

Uint64 UNIX_RemoteFileSystem::getResizeIncrement() const
{
	return _resizeIncrement;
}

void UNIX_RemoteFileSystem::setResizeIncrement(Uint64 &value)
{
	_resizeIncrement = value;
}


void UNIX_RemoteFileSystem::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("RemoteFileSystem");
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
	_enabledState = Uint16(DEFAULT_ENABLED_STATE);
	_otherEnabledState = String ("");
	_requestedState = Uint16(0);
	_enabledDefault = Uint16(0);
	_timeOfLastStateChange = CIMHelper::getCurrentTime();
	_availableRequestedStates.clear();
	_transitioningToState = Uint16(0);
	_cSCreationClassName = String("UNIX_ComputerSystem");
	_cSName = CIMHelper::HostName;
	_creationClassName = String("UNIX_RemoteFileSystem");
	_root = String ("");
	_blockSize = Uint64(0);
	_fileSystemSize = Uint64(0);
	_availableSpace = Uint64(0);
	_readOnly = Boolean(false);
	_encryptionMethod = String ("");
	_compressionMethod = String ("");
	_caseSensitive = Boolean(false);
	_casePreserved = Boolean(false);
	_codeSet.clear();
	_maxFileNameLength = Uint32(0);
	_clusterSize = Uint32(0);
	_fileSystemType = String ("");
	_persistenceType = Uint16(0);
	_otherPersistenceType = String ("");
	_numberOfFiles = Uint64(0);
	_isFixedSize = Uint16(0);
	_resizeIncrement = Uint64(0);

}

Boolean UNIX_RemoteFileSystem::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "EnabledState"))
			{
				Uint16 enabledStateValue;
				property.getValue().get(enabledStateValue);
				setEnabledState(enabledStateValue);
			}
			else if (String::equal(property.getName().getString(), "OtherEnabledState"))
			{
				String otherEnabledStateValue;
				property.getValue().get(otherEnabledStateValue);
				setOtherEnabledState(otherEnabledStateValue);
			}
			else if (String::equal(property.getName().getString(), "RequestedState"))
			{
				Uint16 requestedStateValue;
				property.getValue().get(requestedStateValue);
				setRequestedState(requestedStateValue);
			}
			else if (String::equal(property.getName().getString(), "EnabledDefault"))
			{
				Uint16 enabledDefaultValue;
				property.getValue().get(enabledDefaultValue);
				setEnabledDefault(enabledDefaultValue);
			}
			else if (String::equal(property.getName().getString(), "TimeOfLastStateChange"))
			{
				CIMDateTime timeOfLastStateChangeValue;
				property.getValue().get(timeOfLastStateChangeValue);
				setTimeOfLastStateChange(timeOfLastStateChangeValue);
			}
			else if (String::equal(property.getName().getString(), "AvailableRequestedStates"))
			{
				Array<Uint16> availableRequestedStatesValue;
				property.getValue().get(availableRequestedStatesValue);
				setAvailableRequestedStates(availableRequestedStatesValue);
			}
			else if (String::equal(property.getName().getString(), "TransitioningToState"))
			{
				Uint16 transitioningToStateValue;
				property.getValue().get(transitioningToStateValue);
				setTransitioningToState(transitioningToStateValue);
			}
			else if (String::equal(property.getName().getString(), "CSCreationClassName"))
			{
				String cSCreationClassNameValue;
				property.getValue().get(cSCreationClassNameValue);
				setCSCreationClassName(cSCreationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "CSName"))
			{
				String cSNameValue;
				property.getValue().get(cSNameValue);
				setCSName(cSNameValue);
			}
			else if (String::equal(property.getName().getString(), "CreationClassName"))
			{
				String creationClassNameValue;
				property.getValue().get(creationClassNameValue);
				setCreationClassName(creationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "Root"))
			{
				String rootValue;
				property.getValue().get(rootValue);
				setRoot(rootValue);
			}
			else if (String::equal(property.getName().getString(), "BlockSize"))
			{
				Uint64 blockSizeValue;
				property.getValue().get(blockSizeValue);
				setBlockSize(blockSizeValue);
			}
			else if (String::equal(property.getName().getString(), "FileSystemSize"))
			{
				Uint64 fileSystemSizeValue;
				property.getValue().get(fileSystemSizeValue);
				setFileSystemSize(fileSystemSizeValue);
			}
			else if (String::equal(property.getName().getString(), "AvailableSpace"))
			{
				Uint64 availableSpaceValue;
				property.getValue().get(availableSpaceValue);
				setAvailableSpace(availableSpaceValue);
			}
			else if (String::equal(property.getName().getString(), "ReadOnly"))
			{
				Boolean readOnlyValue;
				property.getValue().get(readOnlyValue);
				setReadOnly(readOnlyValue);
			}
			else if (String::equal(property.getName().getString(), "EncryptionMethod"))
			{
				String encryptionMethodValue;
				property.getValue().get(encryptionMethodValue);
				setEncryptionMethod(encryptionMethodValue);
			}
			else if (String::equal(property.getName().getString(), "CompressionMethod"))
			{
				String compressionMethodValue;
				property.getValue().get(compressionMethodValue);
				setCompressionMethod(compressionMethodValue);
			}
			else if (String::equal(property.getName().getString(), "CaseSensitive"))
			{
				Boolean caseSensitiveValue;
				property.getValue().get(caseSensitiveValue);
				setCaseSensitive(caseSensitiveValue);
			}
			else if (String::equal(property.getName().getString(), "CasePreserved"))
			{
				Boolean casePreservedValue;
				property.getValue().get(casePreservedValue);
				setCasePreserved(casePreservedValue);
			}
			else if (String::equal(property.getName().getString(), "CodeSet"))
			{
				Array<Uint16> codeSetValue;
				property.getValue().get(codeSetValue);
				setCodeSet(codeSetValue);
			}
			else if (String::equal(property.getName().getString(), "MaxFileNameLength"))
			{
				Uint32 maxFileNameLengthValue;
				property.getValue().get(maxFileNameLengthValue);
				setMaxFileNameLength(maxFileNameLengthValue);
			}
			else if (String::equal(property.getName().getString(), "ClusterSize"))
			{
				Uint32 clusterSizeValue;
				property.getValue().get(clusterSizeValue);
				setClusterSize(clusterSizeValue);
			}
			else if (String::equal(property.getName().getString(), "FileSystemType"))
			{
				String fileSystemTypeValue;
				property.getValue().get(fileSystemTypeValue);
				setFileSystemType(fileSystemTypeValue);
			}
			else if (String::equal(property.getName().getString(), "PersistenceType"))
			{
				Uint16 persistenceTypeValue;
				property.getValue().get(persistenceTypeValue);
				setPersistenceType(persistenceTypeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherPersistenceType"))
			{
				String otherPersistenceTypeValue;
				property.getValue().get(otherPersistenceTypeValue);
				setOtherPersistenceType(otherPersistenceTypeValue);
			}
			else if (String::equal(property.getName().getString(), "NumberOfFiles"))
			{
				Uint64 numberOfFilesValue;
				property.getValue().get(numberOfFilesValue);
				setNumberOfFiles(numberOfFilesValue);
			}
			else if (String::equal(property.getName().getString(), "IsFixedSize"))
			{
				Uint16 isFixedSizeValue;
				property.getValue().get(isFixedSizeValue);
				setIsFixedSize(isFixedSizeValue);
			}
			else if (String::equal(property.getName().getString(), "ResizeIncrement"))
			{
				Uint64 resizeIncrementValue;
				property.getValue().get(resizeIncrementValue);
				setResizeIncrement(resizeIncrementValue);
			}
	}
	return true;
}

Uint32 UNIX_RemoteFileSystem::invokeRequestStateChange(
		Uint16 &inRequestedState,
		CIMInstance &inJob,
		CIMDateTime &inTimeoutPeriod
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ConcreteJob inJobObject;
	inJobObject.loadInstance(inJob);
	
	/* Execute method RequestStateChange */
	
	
	
	return returnValue;
}


Boolean UNIX_RemoteFileSystem::initialize()
{
	return false;
}

Boolean UNIX_RemoteFileSystem::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("RemoteFileSystem");
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
	_enabledState = Uint16(DEFAULT_ENABLED_STATE);
	_otherEnabledState = String ("");
	_requestedState = Uint16(0);
	_enabledDefault = Uint16(0);
	_timeOfLastStateChange = CIMHelper::getCurrentTime();
	_availableRequestedStates.clear();
	_transitioningToState = Uint16(0);
	_cSCreationClassName = String("UNIX_ComputerSystem");
	_cSName = CIMHelper::HostName;
	_creationClassName = String("UNIX_RemoteFileSystem");
	_root = String ("");
	_blockSize = Uint64(0);
	_fileSystemSize = Uint64(0);
	_availableSpace = Uint64(0);
	_readOnly = Boolean(false);
	_encryptionMethod = String ("");
	_compressionMethod = String ("");
	_caseSensitive = Boolean(false);
	_casePreserved = Boolean(false);
	_codeSet.clear();
	_maxFileNameLength = Uint32(0);
	_clusterSize = Uint32(0);
	_fileSystemType = String ("");
	_persistenceType = Uint16(0);
	_otherPersistenceType = String ("");
	_numberOfFiles = Uint64(0);
	_isFixedSize = Uint16(0);
	_resizeIncrement = Uint64(0);
	
	return false;
}

Boolean UNIX_RemoteFileSystem::finalize()
{
	return false;
}

Boolean UNIX_RemoteFileSystem::loadByName(const String name)
{
	return false;
}

Boolean UNIX_RemoteFileSystem::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String cSCreationClassNameKey;
	String cSNameKey;
	String creationClassNameKey;
	String nameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_CS_CREATION_CLASS_NAME)) cSCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CS_NAME)) cSNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getCSCreationClassName(), cSCreationClassNameKey)) && 
			(String::equalNoCase(getCSName(), cSNameKey)) && 
			(String::equalNoCase(getCreationClassName(), creationClassNameKey)) && 
			(String::equalNoCase(getName(), nameKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_RemoteFileSystem::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_RemoteFileSystem::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_RemoteFileSystem::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_RemoteFileSystem::validateInstance()
{
	return true;
}

