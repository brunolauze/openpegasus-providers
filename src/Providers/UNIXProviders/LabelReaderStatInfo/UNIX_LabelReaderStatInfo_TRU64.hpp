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


UNIX_LabelReaderStatInfo::UNIX_LabelReaderStatInfo(void)
{
}

UNIX_LabelReaderStatInfo::~UNIX_LabelReaderStatInfo(void)
{
}

Boolean UNIX_LabelReaderStatInfo::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_LabelReaderStatInfo::getInstanceID() const
{
	return _instanceID;
}

void UNIX_LabelReaderStatInfo::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_LabelReaderStatInfo::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_LabelReaderStatInfo::getCaption() const
{
	return _caption;
}

void UNIX_LabelReaderStatInfo::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_LabelReaderStatInfo::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_LabelReaderStatInfo::getDescription() const
{
	return _description;
}

void UNIX_LabelReaderStatInfo::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_LabelReaderStatInfo::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_LabelReaderStatInfo::getElementName() const
{
	return _elementName;
}

void UNIX_LabelReaderStatInfo::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_LabelReaderStatInfo::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_LabelReaderStatInfo::getGeneration() const
{
	return _generation;
}

void UNIX_LabelReaderStatInfo::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_LabelReaderStatInfo::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_LabelReaderStatInfo::getName() const
{
	return _name;
}

void UNIX_LabelReaderStatInfo::setName(String &value)
{
	_name = value;
}

Boolean UNIX_LabelReaderStatInfo::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_LabelReaderStatInfo::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_LabelReaderStatInfo::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_LabelReaderStatInfo::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_LabelReaderStatInfo::getSystemName() const
{
	return _systemName;
}

void UNIX_LabelReaderStatInfo::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_LabelReaderStatInfo::getDeviceCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_CREATION_CLASS_NAME, getDeviceCreationClassName());
	return true;
}

String UNIX_LabelReaderStatInfo::getDeviceCreationClassName() const
{
	return _deviceCreationClassName;
}

void UNIX_LabelReaderStatInfo::setDeviceCreationClassName(String &value)
{
	_deviceCreationClassName = value;
}

Boolean UNIX_LabelReaderStatInfo::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_LabelReaderStatInfo::getDeviceID() const
{
	return _deviceID;
}

void UNIX_LabelReaderStatInfo::setDeviceID(String &value)
{
	_deviceID = value;
}

Boolean UNIX_LabelReaderStatInfo::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_LabelReaderStatInfo::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_LabelReaderStatInfo::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_LabelReaderStatInfo::getScanSuccesses(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SCAN_SUCCESSES, getScanSuccesses());
	return true;
}

Uint64 UNIX_LabelReaderStatInfo::getScanSuccesses() const
{
	return _scanSuccesses;
}

void UNIX_LabelReaderStatInfo::setScanSuccesses(Uint64 &value)
{
	_scanSuccesses = value;
}

Boolean UNIX_LabelReaderStatInfo::getScanFailures(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SCAN_FAILURES, getScanFailures());
	return true;
}

Uint64 UNIX_LabelReaderStatInfo::getScanFailures() const
{
	return _scanFailures;
}

void UNIX_LabelReaderStatInfo::setScanFailures(Uint64 &value)
{
	_scanFailures = value;
}

Boolean UNIX_LabelReaderStatInfo::getScanRetries(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SCAN_RETRIES, getScanRetries());
	return true;
}

Uint64 UNIX_LabelReaderStatInfo::getScanRetries() const
{
	return _scanRetries;
}

void UNIX_LabelReaderStatInfo::setScanRetries(Uint64 &value)
{
	_scanRetries = value;
}


void UNIX_LabelReaderStatInfo::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("LabelReaderStatInfo");
	_generation = Uint64(0);
	_name = String ("");
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_deviceCreationClassName = String ("");
	_deviceID = String ("");
	_creationClassName = String("UNIX_LabelReaderStatInfo");
	_scanSuccesses = Uint64(0);
	_scanFailures = Uint64(0);
	_scanRetries = Uint64(0);

}

Boolean UNIX_LabelReaderStatInfo::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "ScanSuccesses"))
			{
				Uint64 scanSuccessesValue;
				property.getValue().get(scanSuccessesValue);
				setScanSuccesses(scanSuccessesValue);
			}
			else if (String::equal(property.getName().getString(), "ScanFailures"))
			{
				Uint64 scanFailuresValue;
				property.getValue().get(scanFailuresValue);
				setScanFailures(scanFailuresValue);
			}
			else if (String::equal(property.getName().getString(), "ScanRetries"))
			{
				Uint64 scanRetriesValue;
				property.getValue().get(scanRetriesValue);
				setScanRetries(scanRetriesValue);
			}
	}
	return true;
}

Uint32 UNIX_LabelReaderStatInfo::invokeResetCounter(
		Uint16 &inSelectedCounter
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ResetCounter */
	
	
	
	return returnValue;
}


Boolean UNIX_LabelReaderStatInfo::initialize()
{
	return false;
}

Boolean UNIX_LabelReaderStatInfo::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("LabelReaderStatInfo");
	_generation = Uint64(0);
	_name = String ("");
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_deviceCreationClassName = String ("");
	_deviceID = String ("");
	_creationClassName = String("UNIX_LabelReaderStatInfo");
	_scanSuccesses = Uint64(0);
	_scanFailures = Uint64(0);
	_scanRetries = Uint64(0);
	
	return false;
}

Boolean UNIX_LabelReaderStatInfo::finalize()
{
	return false;
}

Boolean UNIX_LabelReaderStatInfo::loadByName(const String name)
{
	return false;
}

Boolean UNIX_LabelReaderStatInfo::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_LabelReaderStatInfo::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_LabelReaderStatInfo::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_LabelReaderStatInfo::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_LabelReaderStatInfo::validateInstance()
{
	return true;
}

