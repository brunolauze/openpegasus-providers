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


UNIX_LocalFileSystem::UNIX_LocalFileSystem(void)
{
}

UNIX_LocalFileSystem::~UNIX_LocalFileSystem(void)
{
}

Boolean UNIX_LocalFileSystem::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_LocalFileSystem::getInstanceID() const
{
	return _instanceID;
}

void UNIX_LocalFileSystem::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_LocalFileSystem::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_LocalFileSystem::getCaption() const
{
	return _caption;
}

void UNIX_LocalFileSystem::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_LocalFileSystem::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_LocalFileSystem::getDescription() const
{
	return _description;
}

void UNIX_LocalFileSystem::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_LocalFileSystem::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_LocalFileSystem::getElementName() const
{
	return _elementName;
}

void UNIX_LocalFileSystem::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_LocalFileSystem::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_LocalFileSystem::getGeneration() const
{
	return _generation;
}

void UNIX_LocalFileSystem::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_LocalFileSystem::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_LocalFileSystem::getInstallDate() const
{
	return _installDate;
}

void UNIX_LocalFileSystem::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_LocalFileSystem::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_LocalFileSystem::getName() const
{
	return _name;
}

void UNIX_LocalFileSystem::setName(String &value)
{
	_name = value;
}

Boolean UNIX_LocalFileSystem::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_LocalFileSystem::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_LocalFileSystem::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_LocalFileSystem::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_LocalFileSystem::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_LocalFileSystem::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_LocalFileSystem::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_LocalFileSystem::getStatus() const
{
	return _status;
}

void UNIX_LocalFileSystem::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_LocalFileSystem::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_LocalFileSystem::getHealthState() const
{
	return _healthState;
}

void UNIX_LocalFileSystem::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_LocalFileSystem::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_LocalFileSystem::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_LocalFileSystem::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_LocalFileSystem::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_LocalFileSystem::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_LocalFileSystem::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_LocalFileSystem::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_LocalFileSystem::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_LocalFileSystem::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_LocalFileSystem::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_LocalFileSystem::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_LocalFileSystem::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_LocalFileSystem::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_LocalFileSystem::getEnabledState() const
{
	return _enabledState;
}

void UNIX_LocalFileSystem::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_LocalFileSystem::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_LocalFileSystem::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_LocalFileSystem::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_LocalFileSystem::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_LocalFileSystem::getRequestedState() const
{
	return _requestedState;
}

void UNIX_LocalFileSystem::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_LocalFileSystem::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_LocalFileSystem::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_LocalFileSystem::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_LocalFileSystem::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_LocalFileSystem::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_LocalFileSystem::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_LocalFileSystem::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_LocalFileSystem::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_LocalFileSystem::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_LocalFileSystem::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_LocalFileSystem::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_LocalFileSystem::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_LocalFileSystem::getCSCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CS_CREATION_CLASS_NAME, getCSCreationClassName());
	return true;
}

String UNIX_LocalFileSystem::getCSCreationClassName() const
{
	return _cSCreationClassName;
}

void UNIX_LocalFileSystem::setCSCreationClassName(String &value)
{
	_cSCreationClassName = value;
}

Boolean UNIX_LocalFileSystem::getCSName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CS_NAME, getCSName());
	return true;
}

String UNIX_LocalFileSystem::getCSName() const
{
	return _cSName;
}

void UNIX_LocalFileSystem::setCSName(String &value)
{
	_cSName = value;
}

Boolean UNIX_LocalFileSystem::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_LocalFileSystem::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_LocalFileSystem::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_LocalFileSystem::getRoot(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ROOT, getRoot());
	return true;
}

String UNIX_LocalFileSystem::getRoot() const
{
	return _root;
}

void UNIX_LocalFileSystem::setRoot(String &value)
{
	_root = value;
}

Boolean UNIX_LocalFileSystem::getBlockSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BLOCK_SIZE, getBlockSize());
	return true;
}

Uint64 UNIX_LocalFileSystem::getBlockSize() const
{
	return _blockSize;
}

void UNIX_LocalFileSystem::setBlockSize(Uint64 &value)
{
	_blockSize = value;
}

Boolean UNIX_LocalFileSystem::getFileSystemSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FILE_SYSTEM_SIZE, getFileSystemSize());
	return true;
}

Uint64 UNIX_LocalFileSystem::getFileSystemSize() const
{
	return _fileSystemSize;
}

void UNIX_LocalFileSystem::setFileSystemSize(Uint64 &value)
{
	_fileSystemSize = value;
}

Boolean UNIX_LocalFileSystem::getAvailableSpace(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_SPACE, getAvailableSpace());
	return true;
}

Uint64 UNIX_LocalFileSystem::getAvailableSpace() const
{
	return _availableSpace;
}

void UNIX_LocalFileSystem::setAvailableSpace(Uint64 &value)
{
	_availableSpace = value;
}

Boolean UNIX_LocalFileSystem::getReadOnly(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_READ_ONLY, getReadOnly());
	return true;
}

Boolean UNIX_LocalFileSystem::getReadOnly() const
{
	return _readOnly;
}

void UNIX_LocalFileSystem::setReadOnly(Boolean &value)
{
	_readOnly = value;
}

Boolean UNIX_LocalFileSystem::getEncryptionMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENCRYPTION_METHOD, getEncryptionMethod());
	return true;
}

String UNIX_LocalFileSystem::getEncryptionMethod() const
{
	return _encryptionMethod;
}

void UNIX_LocalFileSystem::setEncryptionMethod(String &value)
{
	_encryptionMethod = value;
}

Boolean UNIX_LocalFileSystem::getCompressionMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPRESSION_METHOD, getCompressionMethod());
	return true;
}

String UNIX_LocalFileSystem::getCompressionMethod() const
{
	return _compressionMethod;
}

void UNIX_LocalFileSystem::setCompressionMethod(String &value)
{
	_compressionMethod = value;
}

Boolean UNIX_LocalFileSystem::getCaseSensitive(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CASE_SENSITIVE, getCaseSensitive());
	return true;
}

Boolean UNIX_LocalFileSystem::getCaseSensitive() const
{
	return _caseSensitive;
}

void UNIX_LocalFileSystem::setCaseSensitive(Boolean &value)
{
	_caseSensitive = value;
}

Boolean UNIX_LocalFileSystem::getCasePreserved(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CASE_PRESERVED, getCasePreserved());
	return true;
}

Boolean UNIX_LocalFileSystem::getCasePreserved() const
{
	return _casePreserved;
}

void UNIX_LocalFileSystem::setCasePreserved(Boolean &value)
{
	_casePreserved = value;
}

Boolean UNIX_LocalFileSystem::getCodeSet(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CODE_SET, getCodeSet());
	return true;
}

Array<Uint16> UNIX_LocalFileSystem::getCodeSet() const
{
	return _codeSet;
}

void UNIX_LocalFileSystem::setCodeSet(Array<Uint16> &value)
{
	_codeSet = value;
}

Boolean UNIX_LocalFileSystem::getMaxFileNameLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_FILE_NAME_LENGTH, getMaxFileNameLength());
	return true;
}

Uint32 UNIX_LocalFileSystem::getMaxFileNameLength() const
{
	return _maxFileNameLength;
}

void UNIX_LocalFileSystem::setMaxFileNameLength(Uint32 &value)
{
	_maxFileNameLength = value;
}

Boolean UNIX_LocalFileSystem::getClusterSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLUSTER_SIZE, getClusterSize());
	return true;
}

Uint32 UNIX_LocalFileSystem::getClusterSize() const
{
	return _clusterSize;
}

void UNIX_LocalFileSystem::setClusterSize(Uint32 &value)
{
	_clusterSize = value;
}

Boolean UNIX_LocalFileSystem::getFileSystemType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FILE_SYSTEM_TYPE, getFileSystemType());
	return true;
}

String UNIX_LocalFileSystem::getFileSystemType() const
{
	return _fileSystemType;
}

void UNIX_LocalFileSystem::setFileSystemType(String &value)
{
	_fileSystemType = value;
}

Boolean UNIX_LocalFileSystem::getPersistenceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERSISTENCE_TYPE, getPersistenceType());
	return true;
}

Uint16 UNIX_LocalFileSystem::getPersistenceType() const
{
	return _persistenceType;
}

void UNIX_LocalFileSystem::setPersistenceType(Uint16 &value)
{
	_persistenceType = value;
}

Boolean UNIX_LocalFileSystem::getOtherPersistenceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_PERSISTENCE_TYPE, getOtherPersistenceType());
	return true;
}

String UNIX_LocalFileSystem::getOtherPersistenceType() const
{
	return _otherPersistenceType;
}

void UNIX_LocalFileSystem::setOtherPersistenceType(String &value)
{
	_otherPersistenceType = value;
}

Boolean UNIX_LocalFileSystem::getNumberOfFiles(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_FILES, getNumberOfFiles());
	return true;
}

Uint64 UNIX_LocalFileSystem::getNumberOfFiles() const
{
	return _numberOfFiles;
}

void UNIX_LocalFileSystem::setNumberOfFiles(Uint64 &value)
{
	_numberOfFiles = value;
}

Boolean UNIX_LocalFileSystem::getIsFixedSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_FIXED_SIZE, getIsFixedSize());
	return true;
}

Uint16 UNIX_LocalFileSystem::getIsFixedSize() const
{
	return _isFixedSize;
}

void UNIX_LocalFileSystem::setIsFixedSize(Uint16 &value)
{
	_isFixedSize = value;
}

Boolean UNIX_LocalFileSystem::getResizeIncrement(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESIZE_INCREMENT, getResizeIncrement());
	return true;
}

Uint64 UNIX_LocalFileSystem::getResizeIncrement() const
{
	return _resizeIncrement;
}

void UNIX_LocalFileSystem::setResizeIncrement(Uint64 &value)
{
	_resizeIncrement = value;
}

Boolean UNIX_LocalFileSystem::getFreeInodes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FREE_INODES, getFreeInodes());
	return true;
}

Uint64 UNIX_LocalFileSystem::getFreeInodes() const
{
	return _freeInodes;
}

void UNIX_LocalFileSystem::setFreeInodes(Uint64 &value)
{
	_freeInodes = value;
}

Boolean UNIX_LocalFileSystem::getTotalInodes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_INODES, getTotalInodes());
	return true;
}

Uint64 UNIX_LocalFileSystem::getTotalInodes() const
{
	return _totalInodes;
}

void UNIX_LocalFileSystem::setTotalInodes(Uint64 &value)
{
	_totalInodes = value;
}

Boolean UNIX_LocalFileSystem::getFSReservedCapacity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FS_RESERVED_CAPACITY, getFSReservedCapacity());
	return true;
}

Uint64 UNIX_LocalFileSystem::getFSReservedCapacity() const
{
	return _fSReservedCapacity;
}

void UNIX_LocalFileSystem::setFSReservedCapacity(Uint64 &value)
{
	_fSReservedCapacity = value;
}


void UNIX_LocalFileSystem::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("LocalFileSystem");
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
	_creationClassName = String("UNIX_LocalFileSystem");
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
	_freeInodes = Uint64(0);
	_totalInodes = Uint64(0);
	_fSReservedCapacity = Uint64(0);

}

Boolean UNIX_LocalFileSystem::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "FreeInodes"))
			{
				Uint64 freeInodesValue;
				property.getValue().get(freeInodesValue);
				setFreeInodes(freeInodesValue);
			}
			else if (String::equal(property.getName().getString(), "TotalInodes"))
			{
				Uint64 totalInodesValue;
				property.getValue().get(totalInodesValue);
				setTotalInodes(totalInodesValue);
			}
			else if (String::equal(property.getName().getString(), "FSReservedCapacity"))
			{
				Uint64 fSReservedCapacityValue;
				property.getValue().get(fSReservedCapacityValue);
				setFSReservedCapacity(fSReservedCapacityValue);
			}
	}
	return true;
}

Uint32 UNIX_LocalFileSystem::invokeRequestStateChange(
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


Boolean UNIX_LocalFileSystem::initialize()
{
	return false;
}

Boolean UNIX_LocalFileSystem::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("LocalFileSystem");
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
	_creationClassName = String("UNIX_LocalFileSystem");
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
	_freeInodes = Uint64(0);
	_totalInodes = Uint64(0);
	_fSReservedCapacity = Uint64(0);
	
	return false;
}

Boolean UNIX_LocalFileSystem::finalize()
{
	return false;
}

Boolean UNIX_LocalFileSystem::loadByName(const String name)
{
	return false;
}

Boolean UNIX_LocalFileSystem::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_LocalFileSystem::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_LocalFileSystem::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_LocalFileSystem::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_LocalFileSystem::validateInstance()
{
	return true;
}

