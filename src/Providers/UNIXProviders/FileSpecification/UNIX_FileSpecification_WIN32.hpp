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


UNIX_FileSpecification::UNIX_FileSpecification(void)
{
}

UNIX_FileSpecification::~UNIX_FileSpecification(void)
{
}

Boolean UNIX_FileSpecification::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_FileSpecification::getInstanceID() const
{
	return _instanceID;
}

void UNIX_FileSpecification::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_FileSpecification::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_FileSpecification::getCaption() const
{
	return _caption;
}

void UNIX_FileSpecification::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_FileSpecification::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_FileSpecification::getDescription() const
{
	return _description;
}

void UNIX_FileSpecification::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_FileSpecification::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_FileSpecification::getElementName() const
{
	return _elementName;
}

void UNIX_FileSpecification::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_FileSpecification::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_FileSpecification::getGeneration() const
{
	return _generation;
}

void UNIX_FileSpecification::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_FileSpecification::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_FileSpecification::getName() const
{
	return _name;
}

void UNIX_FileSpecification::setName(String &value)
{
	_name = value;
}

Boolean UNIX_FileSpecification::getVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERSION, getVersion());
	return true;
}

String UNIX_FileSpecification::getVersion() const
{
	return _version;
}

void UNIX_FileSpecification::setVersion(String &value)
{
	_version = value;
}

Boolean UNIX_FileSpecification::getSoftwareElementState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SOFTWARE_ELEMENT_STATE, getSoftwareElementState());
	return true;
}

Uint16 UNIX_FileSpecification::getSoftwareElementState() const
{
	return _softwareElementState;
}

void UNIX_FileSpecification::setSoftwareElementState(Uint16 &value)
{
	_softwareElementState = value;
}

Boolean UNIX_FileSpecification::getSoftwareElementID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SOFTWARE_ELEMENT_ID, getSoftwareElementID());
	return true;
}

String UNIX_FileSpecification::getSoftwareElementID() const
{
	return _softwareElementID;
}

void UNIX_FileSpecification::setSoftwareElementID(String &value)
{
	_softwareElementID = value;
}

Boolean UNIX_FileSpecification::getTargetOperatingSystem(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TARGET_OPERATING_SYSTEM, getTargetOperatingSystem());
	return true;
}

Uint16 UNIX_FileSpecification::getTargetOperatingSystem() const
{
	return _targetOperatingSystem;
}

void UNIX_FileSpecification::setTargetOperatingSystem(Uint16 &value)
{
	_targetOperatingSystem = value;
}

Boolean UNIX_FileSpecification::getCheckID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHECK_ID, getCheckID());
	return true;
}

String UNIX_FileSpecification::getCheckID() const
{
	return _checkID;
}

void UNIX_FileSpecification::setCheckID(String &value)
{
	_checkID = value;
}

Boolean UNIX_FileSpecification::getCheckMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHECK_MODE, getCheckMode());
	return true;
}

Boolean UNIX_FileSpecification::getCheckMode() const
{
	return _checkMode;
}

void UNIX_FileSpecification::setCheckMode(Boolean &value)
{
	_checkMode = value;
}

Boolean UNIX_FileSpecification::getFileName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FILE_NAME, getFileName());
	return true;
}

String UNIX_FileSpecification::getFileName() const
{
	return _fileName;
}

void UNIX_FileSpecification::setFileName(String &value)
{
	_fileName = value;
}

Boolean UNIX_FileSpecification::getCreateTimeStamp(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATE_TIME_STAMP, getCreateTimeStamp());
	return true;
}

CIMDateTime UNIX_FileSpecification::getCreateTimeStamp() const
{
	return _createTimeStamp;
}

void UNIX_FileSpecification::setCreateTimeStamp(CIMDateTime &value)
{
	_createTimeStamp = value;
}

Boolean UNIX_FileSpecification::getFileSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FILE_SIZE, getFileSize());
	return true;
}

Uint64 UNIX_FileSpecification::getFileSize() const
{
	return _fileSize;
}

void UNIX_FileSpecification::setFileSize(Uint64 &value)
{
	_fileSize = value;
}

Boolean UNIX_FileSpecification::getCheckSum(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHECK_SUM, getCheckSum());
	return true;
}

Uint32 UNIX_FileSpecification::getCheckSum() const
{
	return _checkSum;
}

void UNIX_FileSpecification::setCheckSum(Uint32 &value)
{
	_checkSum = value;
}

Boolean UNIX_FileSpecification::getCRC1(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_C_R_C_1, getCRC1());
	return true;
}

Uint32 UNIX_FileSpecification::getCRC1() const
{
	return _cRC1;
}

void UNIX_FileSpecification::setCRC1(Uint32 &value)
{
	_cRC1 = value;
}

Boolean UNIX_FileSpecification::getCRC2(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_C_R_C_2, getCRC2());
	return true;
}

Uint32 UNIX_FileSpecification::getCRC2() const
{
	return _cRC2;
}

void UNIX_FileSpecification::setCRC2(Uint32 &value)
{
	_cRC2 = value;
}

Boolean UNIX_FileSpecification::getMD5Checksum(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_M_D_5_CHECKSUM, getMD5Checksum());
	return true;
}

String UNIX_FileSpecification::getMD5Checksum() const
{
	return _mD5Checksum;
}

void UNIX_FileSpecification::setMD5Checksum(String &value)
{
	_mD5Checksum = value;
}


void UNIX_FileSpecification::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("FileSpecification");
	_generation = Uint64(0);
	_name = String ("");
	_version = String ("");
	_softwareElementState = Uint16(0);
	_softwareElementID = String ("");
	_targetOperatingSystem = Uint16(0);
	_checkID = String ("");
	_checkMode = Boolean(false);
	_fileName = String ("");
	_createTimeStamp = CIMHelper::getCurrentTime();
	_fileSize = Uint64(0);
	_checkSum = Uint32(0);
	_cRC1 = Uint32(0);
	_cRC2 = Uint32(0);
	_mD5Checksum = String ("");

}

Boolean UNIX_FileSpecification::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "Name"))
			{
				String nameValue;
				property.getValue().get(nameValue);
				setName(nameValue);
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
			else if (String::equal(property.getName().getString(), "CheckID"))
			{
				String checkIDValue;
				property.getValue().get(checkIDValue);
				setCheckID(checkIDValue);
			}
			else if (String::equal(property.getName().getString(), "CheckMode"))
			{
				Boolean checkModeValue;
				property.getValue().get(checkModeValue);
				setCheckMode(checkModeValue);
			}
			else if (String::equal(property.getName().getString(), "FileName"))
			{
				String fileNameValue;
				property.getValue().get(fileNameValue);
				setFileName(fileNameValue);
			}
			else if (String::equal(property.getName().getString(), "CreateTimeStamp"))
			{
				CIMDateTime createTimeStampValue;
				property.getValue().get(createTimeStampValue);
				setCreateTimeStamp(createTimeStampValue);
			}
			else if (String::equal(property.getName().getString(), "FileSize"))
			{
				Uint64 fileSizeValue;
				property.getValue().get(fileSizeValue);
				setFileSize(fileSizeValue);
			}
			else if (String::equal(property.getName().getString(), "CheckSum"))
			{
				Uint32 checkSumValue;
				property.getValue().get(checkSumValue);
				setCheckSum(checkSumValue);
			}
			else if (String::equal(property.getName().getString(), "CRC1"))
			{
				Uint32 cRC1Value;
				property.getValue().get(cRC1Value);
				setCRC1(cRC1Value);
			}
			else if (String::equal(property.getName().getString(), "CRC2"))
			{
				Uint32 cRC2Value;
				property.getValue().get(cRC2Value);
				setCRC2(cRC2Value);
			}
			else if (String::equal(property.getName().getString(), "MD5Checksum"))
			{
				String mD5ChecksumValue;
				property.getValue().get(mD5ChecksumValue);
				setMD5Checksum(mD5ChecksumValue);
			}
	}
	return true;
}

Uint32 UNIX_FileSpecification::invokeInvoke()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method Invoke */
	
	
	
	return returnValue;
}

Uint32 UNIX_FileSpecification::invokeInvokeOnSystem(
		CIMInstance &inTargetSystem
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ComputerSystem inTargetSystemObject;
	inTargetSystemObject.loadInstance(inTargetSystem);
	
	/* Execute method InvokeOnSystem */
	
	
	
	return returnValue;
}


Boolean UNIX_FileSpecification::initialize()
{
	return false;
}

Boolean UNIX_FileSpecification::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("FileSpecification");
	_generation = Uint64(0);
	_name = String ("");
	_version = String ("");
	_softwareElementState = Uint16(0);
	_softwareElementID = String ("");
	_targetOperatingSystem = Uint16(0);
	_checkID = String ("");
	_checkMode = Boolean(false);
	_fileName = String ("");
	_createTimeStamp = CIMHelper::getCurrentTime();
	_fileSize = Uint64(0);
	_checkSum = Uint32(0);
	_cRC1 = Uint32(0);
	_cRC2 = Uint32(0);
	_mD5Checksum = String ("");
	
	return false;
}

Boolean UNIX_FileSpecification::finalize()
{
	return false;
}

Boolean UNIX_FileSpecification::loadByName(const String name)
{
	return false;
}

Boolean UNIX_FileSpecification::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String nameKey;
	String versionKey;
	String softwareElementStateKey;
	String softwareElementIDKey;
	String targetOperatingSystemKey;
	String checkIDKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_VERSION)) versionKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SOFTWARE_ELEMENT_STATE)) softwareElementStateKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SOFTWARE_ELEMENT_ID)) softwareElementIDKey = kb.getValue();
		else if (keyName.equal(PROPERTY_TARGET_OPERATING_SYSTEM)) targetOperatingSystemKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CHECK_ID)) checkIDKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getName(), nameKey)) && 
			(String::equalNoCase(getVersion(), versionKey)) && 
			(String::equalNoCase(String(std::to_string(getSoftwareElementState()).c_str()), softwareElementStateKey)) && 
			(String::equalNoCase(getSoftwareElementID(), softwareElementIDKey)) && 
			(String::equalNoCase(String(std::to_string(getTargetOperatingSystem()).c_str()), targetOperatingSystemKey)) && 
			(String::equalNoCase(getCheckID(), checkIDKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_FileSpecification::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FileSpecification::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FileSpecification::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FileSpecification::validateInstance()
{
	return true;
}

