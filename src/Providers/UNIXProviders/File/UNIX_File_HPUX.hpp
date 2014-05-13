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


UNIX_File::UNIX_File(void)
{
}

UNIX_File::~UNIX_File(void)
{
}

Boolean UNIX_File::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_File::getInstanceID() const
{
	return _instanceID;
}

void UNIX_File::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_File::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_File::getCaption() const
{
	return _caption;
}

void UNIX_File::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_File::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_File::getDescription() const
{
	return _description;
}

void UNIX_File::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_File::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_File::getElementName() const
{
	return _elementName;
}

void UNIX_File::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_File::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_File::getGeneration() const
{
	return _generation;
}

void UNIX_File::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_File::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_File::getInstallDate() const
{
	return _installDate;
}

void UNIX_File::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_File::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_File::getName() const
{
	return _name;
}

void UNIX_File::setName(String &value)
{
	_name = value;
}

Boolean UNIX_File::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_File::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_File::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_File::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_File::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_File::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_File::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_File::getStatus() const
{
	return _status;
}

void UNIX_File::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_File::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_File::getHealthState() const
{
	return _healthState;
}

void UNIX_File::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_File::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_File::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_File::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_File::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_File::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_File::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_File::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_File::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_File::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_File::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_File::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_File::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_File::getCSCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CS_CREATION_CLASS_NAME, getCSCreationClassName());
	return true;
}

String UNIX_File::getCSCreationClassName() const
{
	return _cSCreationClassName;
}

void UNIX_File::setCSCreationClassName(String &value)
{
	_cSCreationClassName = value;
}

Boolean UNIX_File::getCSName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CS_NAME, getCSName());
	return true;
}

String UNIX_File::getCSName() const
{
	return _cSName;
}

void UNIX_File::setCSName(String &value)
{
	_cSName = value;
}

Boolean UNIX_File::getFSCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FS_CREATION_CLASS_NAME, getFSCreationClassName());
	return true;
}

String UNIX_File::getFSCreationClassName() const
{
	return _fSCreationClassName;
}

void UNIX_File::setFSCreationClassName(String &value)
{
	_fSCreationClassName = value;
}

Boolean UNIX_File::getFSName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FS_NAME, getFSName());
	return true;
}

String UNIX_File::getFSName() const
{
	return _fSName;
}

void UNIX_File::setFSName(String &value)
{
	_fSName = value;
}

Boolean UNIX_File::getLFCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_L_FCREATION_CLASS_NAME, getLFCreationClassName());
	return true;
}

String UNIX_File::getLFCreationClassName() const
{
	return _lFCreationClassName;
}

void UNIX_File::setLFCreationClassName(String &value)
{
	_lFCreationClassName = value;
}

Boolean UNIX_File::getLFName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_L_F_NAME, getLFName());
	return true;
}

String UNIX_File::getLFName() const
{
	return _lFName;
}

void UNIX_File::setLFName(String &value)
{
	_lFName = value;
}

Boolean UNIX_File::getUserID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_ID, getUserID());
	return true;
}

String UNIX_File::getUserID() const
{
	return _userID;
}

void UNIX_File::setUserID(String &value)
{
	_userID = value;
}

Boolean UNIX_File::getGroupID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GROUP_ID, getGroupID());
	return true;
}

String UNIX_File::getGroupID() const
{
	return _groupID;
}

void UNIX_File::setGroupID(String &value)
{
	_groupID = value;
}

Boolean UNIX_File::getSaveText(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SAVE_TEXT, getSaveText());
	return true;
}

Boolean UNIX_File::getSaveText() const
{
	return _saveText;
}

void UNIX_File::setSaveText(Boolean &value)
{
	_saveText = value;
}

Boolean UNIX_File::getLinkCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LINK_COUNT, getLinkCount());
	return true;
}

Uint64 UNIX_File::getLinkCount() const
{
	return _linkCount;
}

void UNIX_File::setLinkCount(Uint64 &value)
{
	_linkCount = value;
}

Boolean UNIX_File::getFileInodeNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FILE_INODE_NUMBER, getFileInodeNumber());
	return true;
}

String UNIX_File::getFileInodeNumber() const
{
	return _fileInodeNumber;
}

void UNIX_File::setFileInodeNumber(String &value)
{
	_fileInodeNumber = value;
}

Boolean UNIX_File::getSetUid(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SET_UID, getSetUid());
	return true;
}

Boolean UNIX_File::getSetUid() const
{
	return _setUid;
}

void UNIX_File::setSetUid(Boolean &value)
{
	_setUid = value;
}

Boolean UNIX_File::getSetGid(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SET_GID, getSetGid());
	return true;
}

Boolean UNIX_File::getSetGid() const
{
	return _setGid;
}

void UNIX_File::setSetGid(Boolean &value)
{
	_setGid = value;
}

Boolean UNIX_File::getLastModifiedInode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_MODIFIED_INODE, getLastModifiedInode());
	return true;
}

CIMDateTime UNIX_File::getLastModifiedInode() const
{
	return _lastModifiedInode;
}

void UNIX_File::setLastModifiedInode(CIMDateTime &value)
{
	_lastModifiedInode = value;
}

Boolean UNIX_File::getLinkMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LINK_MAX, getLinkMax());
	return true;
}

Uint64 UNIX_File::getLinkMax() const
{
	return _linkMax;
}

void UNIX_File::setLinkMax(Uint64 &value)
{
	_linkMax = value;
}

Boolean UNIX_File::getNameMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_MAX, getNameMax());
	return true;
}

Uint64 UNIX_File::getNameMax() const
{
	return _nameMax;
}

void UNIX_File::setNameMax(Uint64 &value)
{
	_nameMax = value;
}

Boolean UNIX_File::getPathMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PATH_MAX, getPathMax());
	return true;
}

Uint64 UNIX_File::getPathMax() const
{
	return _pathMax;
}

void UNIX_File::setPathMax(Uint64 &value)
{
	_pathMax = value;
}

Boolean UNIX_File::getPosixChownRestricted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POSIX_CHOWN_RESTRICTED, getPosixChownRestricted());
	return true;
}

Uint64 UNIX_File::getPosixChownRestricted() const
{
	return _posixChownRestricted;
}

void UNIX_File::setPosixChownRestricted(Uint64 &value)
{
	_posixChownRestricted = value;
}

Boolean UNIX_File::getPosixNoTrunc(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POSIX_NO_TRUNC, getPosixNoTrunc());
	return true;
}

Uint64 UNIX_File::getPosixNoTrunc() const
{
	return _posixNoTrunc;
}

void UNIX_File::setPosixNoTrunc(Uint64 &value)
{
	_posixNoTrunc = value;
}

Boolean UNIX_File::getPosixAsyncIo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POSIX_ASYNC_IO, getPosixAsyncIo());
	return true;
}

Uint64 UNIX_File::getPosixAsyncIo() const
{
	return _posixAsyncIo;
}

void UNIX_File::setPosixAsyncIo(Uint64 &value)
{
	_posixAsyncIo = value;
}

Boolean UNIX_File::getPosixPrioIo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POSIX_PRIO_IO, getPosixPrioIo());
	return true;
}

Uint64 UNIX_File::getPosixPrioIo() const
{
	return _posixPrioIo;
}

void UNIX_File::setPosixPrioIo(Uint64 &value)
{
	_posixPrioIo = value;
}

Boolean UNIX_File::getPosixSyncIo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POSIX_SYNC_IO, getPosixSyncIo());
	return true;
}

Uint64 UNIX_File::getPosixSyncIo() const
{
	return _posixSyncIo;
}

void UNIX_File::setPosixSyncIo(Uint64 &value)
{
	_posixSyncIo = value;
}


void UNIX_File::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("File");
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
	_lFCreationClassName = String ("");
	_lFName = String ("");
	_userID = String ("");
	_groupID = String ("");
	_saveText = Boolean(false);
	_linkCount = Uint64(0);
	_fileInodeNumber = String ("");
	_setUid = Boolean(false);
	_setGid = Boolean(false);
	_lastModifiedInode = CIMHelper::getCurrentTime();
	_linkMax = Uint64(0);
	_nameMax = Uint64(0);
	_pathMax = Uint64(0);
	_posixChownRestricted = Uint64(0);
	_posixNoTrunc = Uint64(0);
	_posixAsyncIo = Uint64(0);
	_posixPrioIo = Uint64(0);
	_posixSyncIo = Uint64(0);

}

Boolean UNIX_File::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "LFCreationClassName"))
			{
				String lFCreationClassNameValue;
				property.getValue().get(lFCreationClassNameValue);
				setLFCreationClassName(lFCreationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "LFName"))
			{
				String lFNameValue;
				property.getValue().get(lFNameValue);
				setLFName(lFNameValue);
			}
			else if (String::equal(property.getName().getString(), "UserID"))
			{
				String userIDValue;
				property.getValue().get(userIDValue);
				setUserID(userIDValue);
			}
			else if (String::equal(property.getName().getString(), "GroupID"))
			{
				String groupIDValue;
				property.getValue().get(groupIDValue);
				setGroupID(groupIDValue);
			}
			else if (String::equal(property.getName().getString(), "SaveText"))
			{
				Boolean saveTextValue;
				property.getValue().get(saveTextValue);
				setSaveText(saveTextValue);
			}
			else if (String::equal(property.getName().getString(), "LinkCount"))
			{
				Uint64 linkCountValue;
				property.getValue().get(linkCountValue);
				setLinkCount(linkCountValue);
			}
			else if (String::equal(property.getName().getString(), "FileInodeNumber"))
			{
				String fileInodeNumberValue;
				property.getValue().get(fileInodeNumberValue);
				setFileInodeNumber(fileInodeNumberValue);
			}
			else if (String::equal(property.getName().getString(), "SetUid"))
			{
				Boolean setUidValue;
				property.getValue().get(setUidValue);
				setSetUid(setUidValue);
			}
			else if (String::equal(property.getName().getString(), "SetGid"))
			{
				Boolean setGidValue;
				property.getValue().get(setGidValue);
				setSetGid(setGidValue);
			}
			else if (String::equal(property.getName().getString(), "LastModifiedInode"))
			{
				CIMDateTime lastModifiedInodeValue;
				property.getValue().get(lastModifiedInodeValue);
				setLastModifiedInode(lastModifiedInodeValue);
			}
			else if (String::equal(property.getName().getString(), "LinkMax"))
			{
				Uint64 linkMaxValue;
				property.getValue().get(linkMaxValue);
				setLinkMax(linkMaxValue);
			}
			else if (String::equal(property.getName().getString(), "NameMax"))
			{
				Uint64 nameMaxValue;
				property.getValue().get(nameMaxValue);
				setNameMax(nameMaxValue);
			}
			else if (String::equal(property.getName().getString(), "PathMax"))
			{
				Uint64 pathMaxValue;
				property.getValue().get(pathMaxValue);
				setPathMax(pathMaxValue);
			}
			else if (String::equal(property.getName().getString(), "PosixChownRestricted"))
			{
				Uint64 posixChownRestrictedValue;
				property.getValue().get(posixChownRestrictedValue);
				setPosixChownRestricted(posixChownRestrictedValue);
			}
			else if (String::equal(property.getName().getString(), "PosixNoTrunc"))
			{
				Uint64 posixNoTruncValue;
				property.getValue().get(posixNoTruncValue);
				setPosixNoTrunc(posixNoTruncValue);
			}
			else if (String::equal(property.getName().getString(), "PosixAsyncIo"))
			{
				Uint64 posixAsyncIoValue;
				property.getValue().get(posixAsyncIoValue);
				setPosixAsyncIo(posixAsyncIoValue);
			}
			else if (String::equal(property.getName().getString(), "PosixPrioIo"))
			{
				Uint64 posixPrioIoValue;
				property.getValue().get(posixPrioIoValue);
				setPosixPrioIo(posixPrioIoValue);
			}
			else if (String::equal(property.getName().getString(), "PosixSyncIo"))
			{
				Uint64 posixSyncIoValue;
				property.getValue().get(posixSyncIoValue);
				setPosixSyncIo(posixSyncIoValue);
			}
	}
	return true;
}


Boolean UNIX_File::initialize()
{
	return false;
}

Boolean UNIX_File::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("File");
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
	_lFCreationClassName = String ("");
	_lFName = String ("");
	_userID = String ("");
	_groupID = String ("");
	_saveText = Boolean(false);
	_linkCount = Uint64(0);
	_fileInodeNumber = String ("");
	_setUid = Boolean(false);
	_setGid = Boolean(false);
	_lastModifiedInode = CIMHelper::getCurrentTime();
	_linkMax = Uint64(0);
	_nameMax = Uint64(0);
	_pathMax = Uint64(0);
	_posixChownRestricted = Uint64(0);
	_posixNoTrunc = Uint64(0);
	_posixAsyncIo = Uint64(0);
	_posixPrioIo = Uint64(0);
	_posixSyncIo = Uint64(0);
	
	return false;
}

Boolean UNIX_File::finalize()
{
	return false;
}

Boolean UNIX_File::loadByName(const String name)
{
	return false;
}

Boolean UNIX_File::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String cSCreationClassNameKey;
	String cSNameKey;
	String fSCreationClassNameKey;
	String fSNameKey;
	String lFCreationClassNameKey;
	String lFNameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_CS_CREATION_CLASS_NAME)) cSCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CS_NAME)) cSNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_FS_CREATION_CLASS_NAME)) fSCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_FS_NAME)) fSNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_L_FCREATION_CLASS_NAME)) lFCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_L_F_NAME)) lFNameKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getCSCreationClassName(), cSCreationClassNameKey)) && 
			(String::equalNoCase(getCSName(), cSNameKey)) && 
			(String::equalNoCase(getFSCreationClassName(), fSCreationClassNameKey)) && 
			(String::equalNoCase(getFSName(), fSNameKey)) && 
			(String::equalNoCase(getLFCreationClassName(), lFCreationClassNameKey)) && 
			(String::equalNoCase(getLFName(), lFNameKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_File::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_File::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_File::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_File::validateInstance()
{
	return true;
}

