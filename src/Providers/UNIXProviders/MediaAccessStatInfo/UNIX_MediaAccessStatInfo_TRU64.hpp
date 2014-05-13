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


UNIX_MediaAccessStatInfo::UNIX_MediaAccessStatInfo(void)
{
}

UNIX_MediaAccessStatInfo::~UNIX_MediaAccessStatInfo(void)
{
}

Boolean UNIX_MediaAccessStatInfo::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_MediaAccessStatInfo::getInstanceID() const
{
	return _instanceID;
}

void UNIX_MediaAccessStatInfo::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_MediaAccessStatInfo::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_MediaAccessStatInfo::getCaption() const
{
	return _caption;
}

void UNIX_MediaAccessStatInfo::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_MediaAccessStatInfo::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_MediaAccessStatInfo::getDescription() const
{
	return _description;
}

void UNIX_MediaAccessStatInfo::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_MediaAccessStatInfo::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_MediaAccessStatInfo::getElementName() const
{
	return _elementName;
}

void UNIX_MediaAccessStatInfo::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_MediaAccessStatInfo::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_MediaAccessStatInfo::getGeneration() const
{
	return _generation;
}

void UNIX_MediaAccessStatInfo::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_MediaAccessStatInfo::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_MediaAccessStatInfo::getName() const
{
	return _name;
}

void UNIX_MediaAccessStatInfo::setName(String &value)
{
	_name = value;
}

Boolean UNIX_MediaAccessStatInfo::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_MediaAccessStatInfo::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_MediaAccessStatInfo::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_MediaAccessStatInfo::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_MediaAccessStatInfo::getSystemName() const
{
	return _systemName;
}

void UNIX_MediaAccessStatInfo::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_MediaAccessStatInfo::getDeviceCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_CREATION_CLASS_NAME, getDeviceCreationClassName());
	return true;
}

String UNIX_MediaAccessStatInfo::getDeviceCreationClassName() const
{
	return _deviceCreationClassName;
}

void UNIX_MediaAccessStatInfo::setDeviceCreationClassName(String &value)
{
	_deviceCreationClassName = value;
}

Boolean UNIX_MediaAccessStatInfo::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_MediaAccessStatInfo::getDeviceID() const
{
	return _deviceID;
}

void UNIX_MediaAccessStatInfo::setDeviceID(String &value)
{
	_deviceID = value;
}

Boolean UNIX_MediaAccessStatInfo::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_MediaAccessStatInfo::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_MediaAccessStatInfo::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_MediaAccessStatInfo::getReadOperations(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_READ_OPERATIONS, getReadOperations());
	return true;
}

Uint64 UNIX_MediaAccessStatInfo::getReadOperations() const
{
	return _readOperations;
}

void UNIX_MediaAccessStatInfo::setReadOperations(Uint64 &value)
{
	_readOperations = value;
}

Boolean UNIX_MediaAccessStatInfo::getUnrecoverableReadOperations(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNRECOVERABLE_READ_OPERATIONS, getUnrecoverableReadOperations());
	return true;
}

Uint64 UNIX_MediaAccessStatInfo::getUnrecoverableReadOperations() const
{
	return _unrecoverableReadOperations;
}

void UNIX_MediaAccessStatInfo::setUnrecoverableReadOperations(Uint64 &value)
{
	_unrecoverableReadOperations = value;
}

Boolean UNIX_MediaAccessStatInfo::getWriteOperations(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WRITE_OPERATIONS, getWriteOperations());
	return true;
}

Uint64 UNIX_MediaAccessStatInfo::getWriteOperations() const
{
	return _writeOperations;
}

void UNIX_MediaAccessStatInfo::setWriteOperations(Uint64 &value)
{
	_writeOperations = value;
}

Boolean UNIX_MediaAccessStatInfo::getUnrecoverableWriteOperations(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNRECOVERABLE_WRITE_OPERATIONS, getUnrecoverableWriteOperations());
	return true;
}

Uint64 UNIX_MediaAccessStatInfo::getUnrecoverableWriteOperations() const
{
	return _unrecoverableWriteOperations;
}

void UNIX_MediaAccessStatInfo::setUnrecoverableWriteOperations(Uint64 &value)
{
	_unrecoverableWriteOperations = value;
}

Boolean UNIX_MediaAccessStatInfo::getRecoveredReadOperations(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECOVERED_READ_OPERATIONS, getRecoveredReadOperations());
	return true;
}

Uint64 UNIX_MediaAccessStatInfo::getRecoveredReadOperations() const
{
	return _recoveredReadOperations;
}

void UNIX_MediaAccessStatInfo::setRecoveredReadOperations(Uint64 &value)
{
	_recoveredReadOperations = value;
}

Boolean UNIX_MediaAccessStatInfo::getRecoveredWriteOperations(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECOVERED_WRITE_OPERATIONS, getRecoveredWriteOperations());
	return true;
}

Uint64 UNIX_MediaAccessStatInfo::getRecoveredWriteOperations() const
{
	return _recoveredWriteOperations;
}

void UNIX_MediaAccessStatInfo::setRecoveredWriteOperations(Uint64 &value)
{
	_recoveredWriteOperations = value;
}

Boolean UNIX_MediaAccessStatInfo::getRecoveredSeekOperations(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECOVERED_SEEK_OPERATIONS, getRecoveredSeekOperations());
	return true;
}

Uint64 UNIX_MediaAccessStatInfo::getRecoveredSeekOperations() const
{
	return _recoveredSeekOperations;
}

void UNIX_MediaAccessStatInfo::setRecoveredSeekOperations(Uint64 &value)
{
	_recoveredSeekOperations = value;
}

Boolean UNIX_MediaAccessStatInfo::getUnrecoverableSeekOperations(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNRECOVERABLE_SEEK_OPERATIONS, getUnrecoverableSeekOperations());
	return true;
}

Uint64 UNIX_MediaAccessStatInfo::getUnrecoverableSeekOperations() const
{
	return _unrecoverableSeekOperations;
}

void UNIX_MediaAccessStatInfo::setUnrecoverableSeekOperations(Uint64 &value)
{
	_unrecoverableSeekOperations = value;
}


void UNIX_MediaAccessStatInfo::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("MediaAccessStatInfo");
	_generation = Uint64(0);
	_name = String ("");
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_deviceCreationClassName = String ("");
	_deviceID = String ("");
	_creationClassName = String("UNIX_MediaAccessStatInfo");
	_readOperations = Uint64(0);
	_unrecoverableReadOperations = Uint64(0);
	_writeOperations = Uint64(0);
	_unrecoverableWriteOperations = Uint64(0);
	_recoveredReadOperations = Uint64(0);
	_recoveredWriteOperations = Uint64(0);
	_recoveredSeekOperations = Uint64(0);
	_unrecoverableSeekOperations = Uint64(0);

}

Boolean UNIX_MediaAccessStatInfo::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "CreationClassName"))
			{
				String creationClassNameValue;
				property.getValue().get(creationClassNameValue);
				setCreationClassName(creationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "ReadOperations"))
			{
				Uint64 readOperationsValue;
				property.getValue().get(readOperationsValue);
				setReadOperations(readOperationsValue);
			}
			else if (String::equal(property.getName().getString(), "UnrecoverableReadOperations"))
			{
				Uint64 unrecoverableReadOperationsValue;
				property.getValue().get(unrecoverableReadOperationsValue);
				setUnrecoverableReadOperations(unrecoverableReadOperationsValue);
			}
			else if (String::equal(property.getName().getString(), "WriteOperations"))
			{
				Uint64 writeOperationsValue;
				property.getValue().get(writeOperationsValue);
				setWriteOperations(writeOperationsValue);
			}
			else if (String::equal(property.getName().getString(), "UnrecoverableWriteOperations"))
			{
				Uint64 unrecoverableWriteOperationsValue;
				property.getValue().get(unrecoverableWriteOperationsValue);
				setUnrecoverableWriteOperations(unrecoverableWriteOperationsValue);
			}
			else if (String::equal(property.getName().getString(), "RecoveredReadOperations"))
			{
				Uint64 recoveredReadOperationsValue;
				property.getValue().get(recoveredReadOperationsValue);
				setRecoveredReadOperations(recoveredReadOperationsValue);
			}
			else if (String::equal(property.getName().getString(), "RecoveredWriteOperations"))
			{
				Uint64 recoveredWriteOperationsValue;
				property.getValue().get(recoveredWriteOperationsValue);
				setRecoveredWriteOperations(recoveredWriteOperationsValue);
			}
			else if (String::equal(property.getName().getString(), "RecoveredSeekOperations"))
			{
				Uint64 recoveredSeekOperationsValue;
				property.getValue().get(recoveredSeekOperationsValue);
				setRecoveredSeekOperations(recoveredSeekOperationsValue);
			}
			else if (String::equal(property.getName().getString(), "UnrecoverableSeekOperations"))
			{
				Uint64 unrecoverableSeekOperationsValue;
				property.getValue().get(unrecoverableSeekOperationsValue);
				setUnrecoverableSeekOperations(unrecoverableSeekOperationsValue);
			}
	}
	return true;
}

Uint32 UNIX_MediaAccessStatInfo::invokeResetCounter(
		Uint16 &inSelectedCounter
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ResetCounter */
	
	
	
	return returnValue;
}


Boolean UNIX_MediaAccessStatInfo::initialize()
{
	return false;
}

Boolean UNIX_MediaAccessStatInfo::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("MediaAccessStatInfo");
	_generation = Uint64(0);
	_name = String ("");
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_deviceCreationClassName = String ("");
	_deviceID = String ("");
	_creationClassName = String("UNIX_MediaAccessStatInfo");
	_readOperations = Uint64(0);
	_unrecoverableReadOperations = Uint64(0);
	_writeOperations = Uint64(0);
	_unrecoverableWriteOperations = Uint64(0);
	_recoveredReadOperations = Uint64(0);
	_recoveredWriteOperations = Uint64(0);
	_recoveredSeekOperations = Uint64(0);
	_unrecoverableSeekOperations = Uint64(0);
	
	return false;
}

Boolean UNIX_MediaAccessStatInfo::finalize()
{
	return false;
}

Boolean UNIX_MediaAccessStatInfo::loadByName(const String name)
{
	return false;
}

Boolean UNIX_MediaAccessStatInfo::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String systemCreationClassNameKey;
	String systemNameKey;
	String deviceCreationClassNameKey;
	String deviceIDKey;
	String creationClassNameKey;
	String nameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SYSTEM_CREATION_CLASS_NAME)) systemCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SYSTEM_NAME)) systemNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_DEVICE_CREATION_CLASS_NAME)) deviceCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_DEVICE_ID)) deviceIDKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getSystemCreationClassName(), systemCreationClassNameKey)) && 
			(String::equalNoCase(getSystemName(), systemNameKey)) && 
			(String::equalNoCase(getDeviceCreationClassName(), deviceCreationClassNameKey)) && 
			(String::equalNoCase(getDeviceID(), deviceIDKey)) && 
			(String::equalNoCase(getCreationClassName(), creationClassNameKey)) && 
			(String::equalNoCase(getName(), nameKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_MediaAccessStatInfo::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_MediaAccessStatInfo::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_MediaAccessStatInfo::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_MediaAccessStatInfo::validateInstance()
{
	return true;
}

