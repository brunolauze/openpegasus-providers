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


UNIX_FIFOPipeFile::UNIX_FIFOPipeFile(void)
{
}

UNIX_FIFOPipeFile::~UNIX_FIFOPipeFile(void)
{
}

Boolean UNIX_FIFOPipeFile::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_FIFOPipeFile::getInstanceID() const
{
	return _instanceID;
}

void UNIX_FIFOPipeFile::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_FIFOPipeFile::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_FIFOPipeFile::getCaption() const
{
	return _caption;
}

void UNIX_FIFOPipeFile::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_FIFOPipeFile::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_FIFOPipeFile::getDescription() const
{
	return _description;
}

void UNIX_FIFOPipeFile::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_FIFOPipeFile::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_FIFOPipeFile::getElementName() const
{
	return _elementName;
}

void UNIX_FIFOPipeFile::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_FIFOPipeFile::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_FIFOPipeFile::getGeneration() const
{
	return _generation;
}

void UNIX_FIFOPipeFile::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_FIFOPipeFile::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_FIFOPipeFile::getInstallDate() const
{
	return _installDate;
}

void UNIX_FIFOPipeFile::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_FIFOPipeFile::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_FIFOPipeFile::getName() const
{
	return _name;
}

void UNIX_FIFOPipeFile::setName(String &value)
{
	_name = value;
}

Boolean UNIX_FIFOPipeFile::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_FIFOPipeFile::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_FIFOPipeFile::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_FIFOPipeFile::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_FIFOPipeFile::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_FIFOPipeFile::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_FIFOPipeFile::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_FIFOPipeFile::getStatus() const
{
	return _status;
}

void UNIX_FIFOPipeFile::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_FIFOPipeFile::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_FIFOPipeFile::getHealthState() const
{
	return _healthState;
}

void UNIX_FIFOPipeFile::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_FIFOPipeFile::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_FIFOPipeFile::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_FIFOPipeFile::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_FIFOPipeFile::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_FIFOPipeFile::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_FIFOPipeFile::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_FIFOPipeFile::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_FIFOPipeFile::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_FIFOPipeFile::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_FIFOPipeFile::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_FIFOPipeFile::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_FIFOPipeFile::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_FIFOPipeFile::getCSCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CS_CREATION_CLASS_NAME, getCSCreationClassName());
	return true;
}

String UNIX_FIFOPipeFile::getCSCreationClassName() const
{
	return _cSCreationClassName;
}

void UNIX_FIFOPipeFile::setCSCreationClassName(String &value)
{
	_cSCreationClassName = value;
}

Boolean UNIX_FIFOPipeFile::getCSName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CS_NAME, getCSName());
	return true;
}

String UNIX_FIFOPipeFile::getCSName() const
{
	return _cSName;
}

void UNIX_FIFOPipeFile::setCSName(String &value)
{
	_cSName = value;
}

Boolean UNIX_FIFOPipeFile::getFSCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FS_CREATION_CLASS_NAME, getFSCreationClassName());
	return true;
}

String UNIX_FIFOPipeFile::getFSCreationClassName() const
{
	return _fSCreationClassName;
}

void UNIX_FIFOPipeFile::setFSCreationClassName(String &value)
{
	_fSCreationClassName = value;
}

Boolean UNIX_FIFOPipeFile::getFSName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FS_NAME, getFSName());
	return true;
}

String UNIX_FIFOPipeFile::getFSName() const
{
	return _fSName;
}

void UNIX_FIFOPipeFile::setFSName(String &value)
{
	_fSName = value;
}

Boolean UNIX_FIFOPipeFile::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_FIFOPipeFile::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_FIFOPipeFile::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_FIFOPipeFile::getFileSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FILE_SIZE, getFileSize());
	return true;
}

Uint64 UNIX_FIFOPipeFile::getFileSize() const
{
	return _fileSize;
}

void UNIX_FIFOPipeFile::setFileSize(Uint64 &value)
{
	_fileSize = value;
}

Boolean UNIX_FIFOPipeFile::getCreationDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_DATE, getCreationDate());
	return true;
}

CIMDateTime UNIX_FIFOPipeFile::getCreationDate() const
{
	return _creationDate;
}

void UNIX_FIFOPipeFile::setCreationDate(CIMDateTime &value)
{
	_creationDate = value;
}

Boolean UNIX_FIFOPipeFile::getLastModified(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_MODIFIED, getLastModified());
	return true;
}

CIMDateTime UNIX_FIFOPipeFile::getLastModified() const
{
	return _lastModified;
}

void UNIX_FIFOPipeFile::setLastModified(CIMDateTime &value)
{
	_lastModified = value;
}

Boolean UNIX_FIFOPipeFile::getLastAccessed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ACCESSED, getLastAccessed());
	return true;
}

CIMDateTime UNIX_FIFOPipeFile::getLastAccessed() const
{
	return _lastAccessed;
}

void UNIX_FIFOPipeFile::setLastAccessed(CIMDateTime &value)
{
	_lastAccessed = value;
}

Boolean UNIX_FIFOPipeFile::getReadable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_READABLE, getReadable());
	return true;
}

Boolean UNIX_FIFOPipeFile::getReadable() const
{
	return _readable;
}

void UNIX_FIFOPipeFile::setReadable(Boolean &value)
{
	_readable = value;
}

Boolean UNIX_FIFOPipeFile::getWriteable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WRITEABLE, getWriteable());
	return true;
}

Boolean UNIX_FIFOPipeFile::getWriteable() const
{
	return _writeable;
}

void UNIX_FIFOPipeFile::setWriteable(Boolean &value)
{
	_writeable = value;
}

Boolean UNIX_FIFOPipeFile::getExecutable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXECUTABLE, getExecutable());
	return true;
}

Boolean UNIX_FIFOPipeFile::getExecutable() const
{
	return _executable;
}

void UNIX_FIFOPipeFile::setExecutable(Boolean &value)
{
	_executable = value;
}

Boolean UNIX_FIFOPipeFile::getCompressionMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPRESSION_METHOD, getCompressionMethod());
	return true;
}

String UNIX_FIFOPipeFile::getCompressionMethod() const
{
	return _compressionMethod;
}

void UNIX_FIFOPipeFile::setCompressionMethod(String &value)
{
	_compressionMethod = value;
}

Boolean UNIX_FIFOPipeFile::getEncryptionMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENCRYPTION_METHOD, getEncryptionMethod());
	return true;
}

String UNIX_FIFOPipeFile::getEncryptionMethod() const
{
	return _encryptionMethod;
}

void UNIX_FIFOPipeFile::setEncryptionMethod(String &value)
{
	_encryptionMethod = value;
}

Boolean UNIX_FIFOPipeFile::getInUseCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IN_USE_COUNT, getInUseCount());
	return true;
}

Uint64 UNIX_FIFOPipeFile::getInUseCount() const
{
	return _inUseCount;
}

void UNIX_FIFOPipeFile::setInUseCount(Uint64 &value)
{
	_inUseCount = value;
}


void UNIX_FIFOPipeFile::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("FIFOPipeFile");
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
	_cSCreationClassName = String("UNIX_ComputerSystem");
	_cSName = CIMHelper::HostName;
	_fSCreationClassName = String("UNIX_FileSystem");
	_fSName = String ("");
	_creationClassName = String("UNIX_FIFOPipeFile");
	_fileSize = Uint64(0);
	_creationDate = CIMHelper::getCurrentTime();
	_lastModified = CIMHelper::getCurrentTime();
	_lastAccessed = CIMHelper::getCurrentTime();
	_readable = Boolean(false);
	_writeable = Boolean(false);
	_executable = Boolean(false);
	_compressionMethod = String ("");
	_encryptionMethod = String ("");
	_inUseCount = Uint64(0);

}

Boolean UNIX_FIFOPipeFile::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "FSCreationClassName"))
			{
				String fSCreationClassNameValue;
				property.getValue().get(fSCreationClassNameValue);
				setFSCreationClassName(fSCreationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "FSName"))
			{
				String fSNameValue;
				property.getValue().get(fSNameValue);
				setFSName(fSNameValue);
			}
			else if (String::equal(property.getName().getString(), "CreationClassName"))
			{
				String creationClassNameValue;
				property.getValue().get(creationClassNameValue);
				setCreationClassName(creationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "FileSize"))
			{
				Uint64 fileSizeValue;
				property.getValue().get(fileSizeValue);
				setFileSize(fileSizeValue);
			}
			else if (String::equal(property.getName().getString(), "CreationDate"))
			{
				CIMDateTime creationDateValue;
				property.getValue().get(creationDateValue);
				setCreationDate(creationDateValue);
			}
			else if (String::equal(property.getName().getString(), "LastModified"))
			{
				CIMDateTime lastModifiedValue;
				property.getValue().get(lastModifiedValue);
				setLastModified(lastModifiedValue);
			}
			else if (String::equal(property.getName().getString(), "LastAccessed"))
			{
				CIMDateTime lastAccessedValue;
				property.getValue().get(lastAccessedValue);
				setLastAccessed(lastAccessedValue);
			}
			else if (String::equal(property.getName().getString(), "Readable"))
			{
				Boolean readableValue;
				property.getValue().get(readableValue);
				setReadable(readableValue);
			}
			else if (String::equal(property.getName().getString(), "Writeable"))
			{
				Boolean writeableValue;
				property.getValue().get(writeableValue);
				setWriteable(writeableValue);
			}
			else if (String::equal(property.getName().getString(), "Executable"))
			{
				Boolean executableValue;
				property.getValue().get(executableValue);
				setExecutable(executableValue);
			}
			else if (String::equal(property.getName().getString(), "CompressionMethod"))
			{
				String compressionMethodValue;
				property.getValue().get(compressionMethodValue);
				setCompressionMethod(compressionMethodValue);
			}
			else if (String::equal(property.getName().getString(), "EncryptionMethod"))
			{
				String encryptionMethodValue;
				property.getValue().get(encryptionMethodValue);
				setEncryptionMethod(encryptionMethodValue);
			}
			else if (String::equal(property.getName().getString(), "InUseCount"))
			{
				Uint64 inUseCountValue;
				property.getValue().get(inUseCountValue);
				setInUseCount(inUseCountValue);
			}
	}
	return true;
}


Boolean UNIX_FIFOPipeFile::initialize()
{
	return false;
}

Boolean UNIX_FIFOPipeFile::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("FIFOPipeFile");
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
	_cSCreationClassName = String("UNIX_ComputerSystem");
	_cSName = CIMHelper::HostName;
	_fSCreationClassName = String("UNIX_FileSystem");
	_fSName = String ("");
	_creationClassName = String("UNIX_FIFOPipeFile");
	_fileSize = Uint64(0);
	_creationDate = CIMHelper::getCurrentTime();
	_lastModified = CIMHelper::getCurrentTime();
	_lastAccessed = CIMHelper::getCurrentTime();
	_readable = Boolean(false);
	_writeable = Boolean(false);
	_executable = Boolean(false);
	_compressionMethod = String ("");
	_encryptionMethod = String ("");
	_inUseCount = Uint64(0);
	
	return false;
}

Boolean UNIX_FIFOPipeFile::finalize()
{
	return false;
}

Boolean UNIX_FIFOPipeFile::loadByName(const String name)
{
	return false;
}

Boolean UNIX_FIFOPipeFile::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String cSCreationClassNameKey;
	String cSNameKey;
	String fSCreationClassNameKey;
	String fSNameKey;
	String creationClassNameKey;
	String nameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_CS_CREATION_CLASS_NAME)) cSCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CS_NAME)) cSNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_FS_CREATION_CLASS_NAME)) fSCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_FS_NAME)) fSNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getCSCreationClassName(), cSCreationClassNameKey)) && 
			(String::equalNoCase(getCSName(), cSNameKey)) && 
			(String::equalNoCase(getFSCreationClassName(), fSCreationClassNameKey)) && 
			(String::equalNoCase(getFSName(), fSNameKey)) && 
			(String::equalNoCase(getCreationClassName(), creationClassNameKey)) && 
			(String::equalNoCase(getName(), nameKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_FIFOPipeFile::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FIFOPipeFile::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FIFOPipeFile::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FIFOPipeFile::validateInstance()
{
	return true;
}

