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


UNIX_DeviceErrorCounts::UNIX_DeviceErrorCounts(void)
{
}

UNIX_DeviceErrorCounts::~UNIX_DeviceErrorCounts(void)
{
}

Boolean UNIX_DeviceErrorCounts::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_DeviceErrorCounts::getInstanceID() const
{
	return _instanceID;
}

void UNIX_DeviceErrorCounts::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_DeviceErrorCounts::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_DeviceErrorCounts::getCaption() const
{
	return _caption;
}

void UNIX_DeviceErrorCounts::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_DeviceErrorCounts::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_DeviceErrorCounts::getDescription() const
{
	return _description;
}

void UNIX_DeviceErrorCounts::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_DeviceErrorCounts::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_DeviceErrorCounts::getElementName() const
{
	return _elementName;
}

void UNIX_DeviceErrorCounts::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_DeviceErrorCounts::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_DeviceErrorCounts::getGeneration() const
{
	return _generation;
}

void UNIX_DeviceErrorCounts::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_DeviceErrorCounts::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_DeviceErrorCounts::getName() const
{
	return _name;
}

void UNIX_DeviceErrorCounts::setName(String &value)
{
	_name = value;
}

Boolean UNIX_DeviceErrorCounts::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_DeviceErrorCounts::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_DeviceErrorCounts::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_DeviceErrorCounts::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_DeviceErrorCounts::getSystemName() const
{
	return _systemName;
}

void UNIX_DeviceErrorCounts::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_DeviceErrorCounts::getDeviceCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_CREATION_CLASS_NAME, getDeviceCreationClassName());
	return true;
}

String UNIX_DeviceErrorCounts::getDeviceCreationClassName() const
{
	return _deviceCreationClassName;
}

void UNIX_DeviceErrorCounts::setDeviceCreationClassName(String &value)
{
	_deviceCreationClassName = value;
}

Boolean UNIX_DeviceErrorCounts::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_DeviceErrorCounts::getDeviceID() const
{
	return _deviceID;
}

void UNIX_DeviceErrorCounts::setDeviceID(String &value)
{
	_deviceID = value;
}

Boolean UNIX_DeviceErrorCounts::getIndeterminateErrorCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INDETERMINATE_ERROR_COUNT, getIndeterminateErrorCount());
	return true;
}

Uint64 UNIX_DeviceErrorCounts::getIndeterminateErrorCount() const
{
	return _indeterminateErrorCount;
}

void UNIX_DeviceErrorCounts::setIndeterminateErrorCount(Uint64 &value)
{
	_indeterminateErrorCount = value;
}

Boolean UNIX_DeviceErrorCounts::getCriticalErrorCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CRITICAL_ERROR_COUNT, getCriticalErrorCount());
	return true;
}

Uint64 UNIX_DeviceErrorCounts::getCriticalErrorCount() const
{
	return _criticalErrorCount;
}

void UNIX_DeviceErrorCounts::setCriticalErrorCount(Uint64 &value)
{
	_criticalErrorCount = value;
}

Boolean UNIX_DeviceErrorCounts::getMajorErrorCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAJOR_ERROR_COUNT, getMajorErrorCount());
	return true;
}

Uint64 UNIX_DeviceErrorCounts::getMajorErrorCount() const
{
	return _majorErrorCount;
}

void UNIX_DeviceErrorCounts::setMajorErrorCount(Uint64 &value)
{
	_majorErrorCount = value;
}

Boolean UNIX_DeviceErrorCounts::getMinorErrorCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MINOR_ERROR_COUNT, getMinorErrorCount());
	return true;
}

Uint64 UNIX_DeviceErrorCounts::getMinorErrorCount() const
{
	return _minorErrorCount;
}

void UNIX_DeviceErrorCounts::setMinorErrorCount(Uint64 &value)
{
	_minorErrorCount = value;
}

Boolean UNIX_DeviceErrorCounts::getWarningCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WARNING_COUNT, getWarningCount());
	return true;
}

Uint64 UNIX_DeviceErrorCounts::getWarningCount() const
{
	return _warningCount;
}

void UNIX_DeviceErrorCounts::setWarningCount(Uint64 &value)
{
	_warningCount = value;
}


void UNIX_DeviceErrorCounts::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("DeviceErrorCounts");
	_generation = Uint64(0);
	_name = String ("");
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_deviceCreationClassName = String ("");
	_deviceID = String ("");
	_indeterminateErrorCount = Uint64(0);
	_criticalErrorCount = Uint64(0);
	_majorErrorCount = Uint64(0);
	_minorErrorCount = Uint64(0);
	_warningCount = Uint64(0);

}

Boolean UNIX_DeviceErrorCounts::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "IndeterminateErrorCount"))
			{
				Uint64 indeterminateErrorCountValue;
				property.getValue().get(indeterminateErrorCountValue);
				setIndeterminateErrorCount(indeterminateErrorCountValue);
			}
			else if (String::equal(property.getName().getString(), "CriticalErrorCount"))
			{
				Uint64 criticalErrorCountValue;
				property.getValue().get(criticalErrorCountValue);
				setCriticalErrorCount(criticalErrorCountValue);
			}
			else if (String::equal(property.getName().getString(), "MajorErrorCount"))
			{
				Uint64 majorErrorCountValue;
				property.getValue().get(majorErrorCountValue);
				setMajorErrorCount(majorErrorCountValue);
			}
			else if (String::equal(property.getName().getString(), "MinorErrorCount"))
			{
				Uint64 minorErrorCountValue;
				property.getValue().get(minorErrorCountValue);
				setMinorErrorCount(minorErrorCountValue);
			}
			else if (String::equal(property.getName().getString(), "WarningCount"))
			{
				Uint64 warningCountValue;
				property.getValue().get(warningCountValue);
				setWarningCount(warningCountValue);
			}
	}
	return true;
}

Uint32 UNIX_DeviceErrorCounts::invokeResetCounter(
		Uint16 &inSelectedCounter
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ResetCounter */
	
	
	
	return returnValue;
}


Boolean UNIX_DeviceErrorCounts::initialize()
{
	return false;
}

Boolean UNIX_DeviceErrorCounts::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("DeviceErrorCounts");
	_generation = Uint64(0);
	_name = String ("");
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_deviceCreationClassName = String ("");
	_deviceID = String ("");
	_indeterminateErrorCount = Uint64(0);
	_criticalErrorCount = Uint64(0);
	_majorErrorCount = Uint64(0);
	_minorErrorCount = Uint64(0);
	_warningCount = Uint64(0);
	
	return false;
}

Boolean UNIX_DeviceErrorCounts::finalize()
{
	return false;
}

Boolean UNIX_DeviceErrorCounts::loadByName(const String name)
{
	return false;
}

Boolean UNIX_DeviceErrorCounts::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String systemCreationClassNameKey;
	String systemNameKey;
	String deviceCreationClassNameKey;
	String deviceIDKey;
	String nameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SYSTEM_CREATION_CLASS_NAME)) systemCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SYSTEM_NAME)) systemNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_DEVICE_CREATION_CLASS_NAME)) deviceCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_DEVICE_ID)) deviceIDKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getSystemCreationClassName(), systemCreationClassNameKey)) && 
			(String::equalNoCase(getSystemName(), systemNameKey)) && 
			(String::equalNoCase(getDeviceCreationClassName(), deviceCreationClassNameKey)) && 
			(String::equalNoCase(getDeviceID(), deviceIDKey)) && 
			(String::equalNoCase(getName(), nameKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_DeviceErrorCounts::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DeviceErrorCounts::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DeviceErrorCounts::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DeviceErrorCounts::validateInstance()
{
	return true;
}

