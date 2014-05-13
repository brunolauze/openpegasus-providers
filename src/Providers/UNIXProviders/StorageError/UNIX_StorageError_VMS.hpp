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


UNIX_StorageError::UNIX_StorageError(void)
{
}

UNIX_StorageError::~UNIX_StorageError(void)
{
}

Boolean UNIX_StorageError::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_StorageError::getInstanceID() const
{
	return _instanceID;
}

void UNIX_StorageError::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_StorageError::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_StorageError::getCaption() const
{
	return _caption;
}

void UNIX_StorageError::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_StorageError::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_StorageError::getDescription() const
{
	return _description;
}

void UNIX_StorageError::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_StorageError::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_StorageError::getElementName() const
{
	return _elementName;
}

void UNIX_StorageError::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_StorageError::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_StorageError::getGeneration() const
{
	return _generation;
}

void UNIX_StorageError::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_StorageError::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_StorageError::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_StorageError::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_StorageError::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_StorageError::getSystemName() const
{
	return _systemName;
}

void UNIX_StorageError::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_StorageError::getDeviceCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_CREATION_CLASS_NAME, getDeviceCreationClassName());
	return true;
}

String UNIX_StorageError::getDeviceCreationClassName() const
{
	return _deviceCreationClassName;
}

void UNIX_StorageError::setDeviceCreationClassName(String &value)
{
	_deviceCreationClassName = value;
}

Boolean UNIX_StorageError::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_StorageError::getDeviceID() const
{
	return _deviceID;
}

void UNIX_StorageError::setDeviceID(String &value)
{
	_deviceID = value;
}

Boolean UNIX_StorageError::getStartingAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTING_ADDRESS, getStartingAddress());
	return true;
}

Uint64 UNIX_StorageError::getStartingAddress() const
{
	return _startingAddress;
}

void UNIX_StorageError::setStartingAddress(Uint64 &value)
{
	_startingAddress = value;
}

Boolean UNIX_StorageError::getEndingAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENDING_ADDRESS, getEndingAddress());
	return true;
}

Uint64 UNIX_StorageError::getEndingAddress() const
{
	return _endingAddress;
}

void UNIX_StorageError::setEndingAddress(Uint64 &value)
{
	_endingAddress = value;
}


void UNIX_StorageError::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("StorageError");
	_generation = Uint64(0);
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_deviceCreationClassName = String ("");
	_deviceID = String ("");
	_startingAddress = Uint64(0);
	_endingAddress = Uint64(0);

}

Boolean UNIX_StorageError::loadInstance(const CIMInstance &instance)
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
	}
	return true;
}


Boolean UNIX_StorageError::initialize()
{
	return false;
}

Boolean UNIX_StorageError::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("StorageError");
	_generation = Uint64(0);
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_deviceCreationClassName = String ("");
	_deviceID = String ("");
	_startingAddress = Uint64(0);
	_endingAddress = Uint64(0);
	
	return false;
}

Boolean UNIX_StorageError::finalize()
{
	return false;
}


Boolean UNIX_StorageError::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_StorageError::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StorageError::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StorageError::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StorageError::validateInstance()
{
	return true;
}

