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


UNIX_MemoryError::UNIX_MemoryError(void)
{
}

UNIX_MemoryError::~UNIX_MemoryError(void)
{
}

Boolean UNIX_MemoryError::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_MemoryError::getInstanceID() const
{
	return _instanceID;
}

void UNIX_MemoryError::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_MemoryError::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_MemoryError::getCaption() const
{
	return _caption;
}

void UNIX_MemoryError::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_MemoryError::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_MemoryError::getDescription() const
{
	return _description;
}

void UNIX_MemoryError::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_MemoryError::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_MemoryError::getElementName() const
{
	return _elementName;
}

void UNIX_MemoryError::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_MemoryError::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_MemoryError::getGeneration() const
{
	return _generation;
}

void UNIX_MemoryError::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_MemoryError::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_MemoryError::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_MemoryError::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_MemoryError::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_MemoryError::getSystemName() const
{
	return _systemName;
}

void UNIX_MemoryError::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_MemoryError::getDeviceCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_CREATION_CLASS_NAME, getDeviceCreationClassName());
	return true;
}

String UNIX_MemoryError::getDeviceCreationClassName() const
{
	return _deviceCreationClassName;
}

void UNIX_MemoryError::setDeviceCreationClassName(String &value)
{
	_deviceCreationClassName = value;
}

Boolean UNIX_MemoryError::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_MemoryError::getDeviceID() const
{
	return _deviceID;
}

void UNIX_MemoryError::setDeviceID(String &value)
{
	_deviceID = value;
}

Boolean UNIX_MemoryError::getStartingAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTING_ADDRESS, getStartingAddress());
	return true;
}

Uint64 UNIX_MemoryError::getStartingAddress() const
{
	return _startingAddress;
}

void UNIX_MemoryError::setStartingAddress(Uint64 &value)
{
	_startingAddress = value;
}

Boolean UNIX_MemoryError::getEndingAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENDING_ADDRESS, getEndingAddress());
	return true;
}

Uint64 UNIX_MemoryError::getEndingAddress() const
{
	return _endingAddress;
}

void UNIX_MemoryError::setEndingAddress(Uint64 &value)
{
	_endingAddress = value;
}

Boolean UNIX_MemoryError::getErrorInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_INFO, getErrorInfo());
	return true;
}

Uint16 UNIX_MemoryError::getErrorInfo() const
{
	return _errorInfo;
}

void UNIX_MemoryError::setErrorInfo(Uint16 &value)
{
	_errorInfo = value;
}

Boolean UNIX_MemoryError::getOtherErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ERROR_DESCRIPTION, getOtherErrorDescription());
	return true;
}

String UNIX_MemoryError::getOtherErrorDescription() const
{
	return _otherErrorDescription;
}

void UNIX_MemoryError::setOtherErrorDescription(String &value)
{
	_otherErrorDescription = value;
}

Boolean UNIX_MemoryError::getCorrectableError(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CORRECTABLE_ERROR, getCorrectableError());
	return true;
}

Boolean UNIX_MemoryError::getCorrectableError() const
{
	return _correctableError;
}

void UNIX_MemoryError::setCorrectableError(Boolean &value)
{
	_correctableError = value;
}

Boolean UNIX_MemoryError::getErrorTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_TIME, getErrorTime());
	return true;
}

CIMDateTime UNIX_MemoryError::getErrorTime() const
{
	return _errorTime;
}

void UNIX_MemoryError::setErrorTime(CIMDateTime &value)
{
	_errorTime = value;
}

Boolean UNIX_MemoryError::getErrorAccess(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_ACCESS, getErrorAccess());
	return true;
}

Uint16 UNIX_MemoryError::getErrorAccess() const
{
	return _errorAccess;
}

void UNIX_MemoryError::setErrorAccess(Uint16 &value)
{
	_errorAccess = value;
}

Boolean UNIX_MemoryError::getErrorTransferSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_TRANSFER_SIZE, getErrorTransferSize());
	return true;
}

Uint32 UNIX_MemoryError::getErrorTransferSize() const
{
	return _errorTransferSize;
}

void UNIX_MemoryError::setErrorTransferSize(Uint32 &value)
{
	_errorTransferSize = value;
}

Boolean UNIX_MemoryError::getErrorData(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DATA, getErrorData());
	return true;
}

Array<Uint8> UNIX_MemoryError::getErrorData() const
{
	return _errorData;
}

void UNIX_MemoryError::setErrorData(Array<Uint8> &value)
{
	_errorData = value;
}

Boolean UNIX_MemoryError::getErrorDataOrder(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DATA_ORDER, getErrorDataOrder());
	return true;
}

Uint16 UNIX_MemoryError::getErrorDataOrder() const
{
	return _errorDataOrder;
}

void UNIX_MemoryError::setErrorDataOrder(Uint16 &value)
{
	_errorDataOrder = value;
}

Boolean UNIX_MemoryError::getSystemLevelAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_LEVEL_ADDRESS, getSystemLevelAddress());
	return true;
}

Boolean UNIX_MemoryError::getSystemLevelAddress() const
{
	return _systemLevelAddress;
}

void UNIX_MemoryError::setSystemLevelAddress(Boolean &value)
{
	_systemLevelAddress = value;
}

Boolean UNIX_MemoryError::getErrorResolution(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_RESOLUTION, getErrorResolution());
	return true;
}

Uint64 UNIX_MemoryError::getErrorResolution() const
{
	return _errorResolution;
}

void UNIX_MemoryError::setErrorResolution(Uint64 &value)
{
	_errorResolution = value;
}

Boolean UNIX_MemoryError::getAdditionalErrorData(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_ERROR_DATA, getAdditionalErrorData());
	return true;
}

Array<Uint8> UNIX_MemoryError::getAdditionalErrorData() const
{
	return _additionalErrorData;
}

void UNIX_MemoryError::setAdditionalErrorData(Array<Uint8> &value)
{
	_additionalErrorData = value;
}


void UNIX_MemoryError::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("MemoryError");
	_generation = Uint64(0);
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_deviceCreationClassName = String ("");
	_deviceID = String ("");
	_startingAddress = Uint64(0);
	_endingAddress = Uint64(0);
	_errorInfo = Uint16(0);
	_otherErrorDescription = String ("");
	_correctableError = Boolean(false);
	_errorTime = CIMHelper::getCurrentTime();
	_errorAccess = Uint16(0);
	_errorTransferSize = Uint32(0);
	_errorData.clear();
	_errorDataOrder = Uint16(0);
	_systemLevelAddress = Boolean(false);
	_errorResolution = Uint64(0);
	_additionalErrorData.clear();

}

Boolean UNIX_MemoryError::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "SystemCreationClassName"))
			{
				String systemCreationClassNameValue;
				property.getValue().get(systemCreationClassNameValue);
				setSystemCreationClassName(systemCreationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "SystemName"))
			{
				String systemNameValue;
				property.getValue().get(systemNameValue);
				setSystemName(systemNameValue);
			}
			else if (String::equal(property.getName().getString(), "DeviceCreationClassName"))
			{
				String deviceCreationClassNameValue;
				property.getValue().get(deviceCreationClassNameValue);
				setDeviceCreationClassName(deviceCreationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "DeviceID"))
			{
				String deviceIDValue;
				property.getValue().get(deviceIDValue);
				setDeviceID(deviceIDValue);
			}
			else if (String::equal(property.getName().getString(), "StartingAddress"))
			{
				Uint64 startingAddressValue;
				property.getValue().get(startingAddressValue);
				setStartingAddress(startingAddressValue);
			}
			else if (String::equal(property.getName().getString(), "EndingAddress"))
			{
				Uint64 endingAddressValue;
				property.getValue().get(endingAddressValue);
				setEndingAddress(endingAddressValue);
			}
			else if (String::equal(property.getName().getString(), "ErrorInfo"))
			{
				Uint16 errorInfoValue;
				property.getValue().get(errorInfoValue);
				setErrorInfo(errorInfoValue);
			}
			else if (String::equal(property.getName().getString(), "OtherErrorDescription"))
			{
				String otherErrorDescriptionValue;
				property.getValue().get(otherErrorDescriptionValue);
				setOtherErrorDescription(otherErrorDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "CorrectableError"))
			{
				Boolean correctableErrorValue;
				property.getValue().get(correctableErrorValue);
				setCorrectableError(correctableErrorValue);
			}
			else if (String::equal(property.getName().getString(), "ErrorTime"))
			{
				CIMDateTime errorTimeValue;
				property.getValue().get(errorTimeValue);
				setErrorTime(errorTimeValue);
			}
			else if (String::equal(property.getName().getString(), "ErrorAccess"))
			{
				Uint16 errorAccessValue;
				property.getValue().get(errorAccessValue);
				setErrorAccess(errorAccessValue);
			}
			else if (String::equal(property.getName().getString(), "ErrorTransferSize"))
			{
				Uint32 errorTransferSizeValue;
				property.getValue().get(errorTransferSizeValue);
				setErrorTransferSize(errorTransferSizeValue);
			}
			else if (String::equal(property.getName().getString(), "ErrorData"))
			{
				Array<Uint8> errorDataValue;
				property.getValue().get(errorDataValue);
				setErrorData(errorDataValue);
			}
			else if (String::equal(property.getName().getString(), "ErrorDataOrder"))
			{
				Uint16 errorDataOrderValue;
				property.getValue().get(errorDataOrderValue);
				setErrorDataOrder(errorDataOrderValue);
			}
			else if (String::equal(property.getName().getString(), "SystemLevelAddress"))
			{
				Boolean systemLevelAddressValue;
				property.getValue().get(systemLevelAddressValue);
				setSystemLevelAddress(systemLevelAddressValue);
			}
			else if (String::equal(property.getName().getString(), "ErrorResolution"))
			{
				Uint64 errorResolutionValue;
				property.getValue().get(errorResolutionValue);
				setErrorResolution(errorResolutionValue);
			}
			else if (String::equal(property.getName().getString(), "AdditionalErrorData"))
			{
				Array<Uint8> additionalErrorDataValue;
				property.getValue().get(additionalErrorDataValue);
				setAdditionalErrorData(additionalErrorDataValue);
			}
	}
	return true;
}


Boolean UNIX_MemoryError::initialize()
{
	return false;
}

Boolean UNIX_MemoryError::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("MemoryError");
	_generation = Uint64(0);
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_deviceCreationClassName = String ("");
	_deviceID = String ("");
	_startingAddress = Uint64(0);
	_endingAddress = Uint64(0);
	_errorInfo = Uint16(0);
	_otherErrorDescription = String ("");
	_correctableError = Boolean(false);
	_errorTime = CIMHelper::getCurrentTime();
	_errorAccess = Uint16(0);
	_errorTransferSize = Uint32(0);
	_errorData.clear();
	_errorDataOrder = Uint16(0);
	_systemLevelAddress = Boolean(false);
	_errorResolution = Uint64(0);
	_additionalErrorData.clear();
	
	return false;
}

Boolean UNIX_MemoryError::finalize()
{
	return false;
}


Boolean UNIX_MemoryError::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String systemCreationClassNameKey;
	String systemNameKey;
	String deviceCreationClassNameKey;
	String deviceIDKey;
	String startingAddressKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SYSTEM_CREATION_CLASS_NAME)) systemCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SYSTEM_NAME)) systemNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_DEVICE_CREATION_CLASS_NAME)) deviceCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_DEVICE_ID)) deviceIDKey = kb.getValue();
		else if (keyName.equal(PROPERTY_STARTING_ADDRESS)) startingAddressKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getSystemCreationClassName(), systemCreationClassNameKey)) && 
			(String::equalNoCase(getSystemName(), systemNameKey)) && 
			(String::equalNoCase(getDeviceCreationClassName(), deviceCreationClassNameKey)) && 
			(String::equalNoCase(getDeviceID(), deviceIDKey)) && 
			(String::equalNoCase(String(std::to_string(getStartingAddress()).c_str()), startingAddressKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_MemoryError::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_MemoryError::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_MemoryError::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_MemoryError::validateInstance()
{
	return true;
}

