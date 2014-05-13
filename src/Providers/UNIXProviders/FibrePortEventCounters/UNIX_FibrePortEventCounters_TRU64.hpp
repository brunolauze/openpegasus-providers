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


UNIX_FibrePortEventCounters::UNIX_FibrePortEventCounters(void)
{
}

UNIX_FibrePortEventCounters::~UNIX_FibrePortEventCounters(void)
{
}

Boolean UNIX_FibrePortEventCounters::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_FibrePortEventCounters::getInstanceID() const
{
	return _instanceID;
}

void UNIX_FibrePortEventCounters::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_FibrePortEventCounters::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_FibrePortEventCounters::getCaption() const
{
	return _caption;
}

void UNIX_FibrePortEventCounters::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_FibrePortEventCounters::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_FibrePortEventCounters::getDescription() const
{
	return _description;
}

void UNIX_FibrePortEventCounters::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_FibrePortEventCounters::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_FibrePortEventCounters::getElementName() const
{
	return _elementName;
}

void UNIX_FibrePortEventCounters::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_FibrePortEventCounters::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_FibrePortEventCounters::getGeneration() const
{
	return _generation;
}

void UNIX_FibrePortEventCounters::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_FibrePortEventCounters::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_FibrePortEventCounters::getName() const
{
	return _name;
}

void UNIX_FibrePortEventCounters::setName(String &value)
{
	_name = value;
}

Boolean UNIX_FibrePortEventCounters::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_FibrePortEventCounters::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_FibrePortEventCounters::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_FibrePortEventCounters::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_FibrePortEventCounters::getSystemName() const
{
	return _systemName;
}

void UNIX_FibrePortEventCounters::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_FibrePortEventCounters::getDeviceCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_CREATION_CLASS_NAME, getDeviceCreationClassName());
	return true;
}

String UNIX_FibrePortEventCounters::getDeviceCreationClassName() const
{
	return _deviceCreationClassName;
}

void UNIX_FibrePortEventCounters::setDeviceCreationClassName(String &value)
{
	_deviceCreationClassName = value;
}

Boolean UNIX_FibrePortEventCounters::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_FibrePortEventCounters::getDeviceID() const
{
	return _deviceID;
}

void UNIX_FibrePortEventCounters::setDeviceID(String &value)
{
	_deviceID = value;
}

Boolean UNIX_FibrePortEventCounters::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_FibrePortEventCounters::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_FibrePortEventCounters::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_FibrePortEventCounters::getPLOGIsReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_P_L_O_G_IS_RECEIVED, getPLOGIsReceived());
	return true;
}

Uint64 UNIX_FibrePortEventCounters::getPLOGIsReceived() const
{
	return _pLOGIsReceived;
}

void UNIX_FibrePortEventCounters::setPLOGIsReceived(Uint64 &value)
{
	_pLOGIsReceived = value;
}

Boolean UNIX_FibrePortEventCounters::getPLOGIsSent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_P_L_O_G_IS_SENT, getPLOGIsSent());
	return true;
}

Uint64 UNIX_FibrePortEventCounters::getPLOGIsSent() const
{
	return _pLOGIsSent;
}

void UNIX_FibrePortEventCounters::setPLOGIsSent(Uint64 &value)
{
	_pLOGIsSent = value;
}

Boolean UNIX_FibrePortEventCounters::getEOFAbortsReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_E_O_F_ABORTS_RECEIVED, getEOFAbortsReceived());
	return true;
}

Uint64 UNIX_FibrePortEventCounters::getEOFAbortsReceived() const
{
	return _eOFAbortsReceived;
}

void UNIX_FibrePortEventCounters::setEOFAbortsReceived(Uint64 &value)
{
	_eOFAbortsReceived = value;
}

Boolean UNIX_FibrePortEventCounters::getEOFAbortsTransmitted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_E_O_F_ABORTS_TRANSMITTED, getEOFAbortsTransmitted());
	return true;
}

Uint64 UNIX_FibrePortEventCounters::getEOFAbortsTransmitted() const
{
	return _eOFAbortsTransmitted;
}

void UNIX_FibrePortEventCounters::setEOFAbortsTransmitted(Uint64 &value)
{
	_eOFAbortsTransmitted = value;
}

Boolean UNIX_FibrePortEventCounters::getPLOGOsReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_P_L_O_G_OS_RECEIVED, getPLOGOsReceived());
	return true;
}

Uint64 UNIX_FibrePortEventCounters::getPLOGOsReceived() const
{
	return _pLOGOsReceived;
}

void UNIX_FibrePortEventCounters::setPLOGOsReceived(Uint64 &value)
{
	_pLOGOsReceived = value;
}

Boolean UNIX_FibrePortEventCounters::getPLOGOsSent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_P_L_O_G_OS_SENT, getPLOGOsSent());
	return true;
}

Uint64 UNIX_FibrePortEventCounters::getPLOGOsSent() const
{
	return _pLOGOsSent;
}

void UNIX_FibrePortEventCounters::setPLOGOsSent(Uint64 &value)
{
	_pLOGOsSent = value;
}

Boolean UNIX_FibrePortEventCounters::getPLOGIsRejected(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_P_L_O_G_IS_REJECTED, getPLOGIsRejected());
	return true;
}

Uint64 UNIX_FibrePortEventCounters::getPLOGIsRejected() const
{
	return _pLOGIsRejected;
}

void UNIX_FibrePortEventCounters::setPLOGIsRejected(Uint64 &value)
{
	_pLOGIsRejected = value;
}

Boolean UNIX_FibrePortEventCounters::getPLOGOsRejected(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_P_L_O_G_OS_REJECTED, getPLOGOsRejected());
	return true;
}

Uint64 UNIX_FibrePortEventCounters::getPLOGOsRejected() const
{
	return _pLOGOsRejected;
}

void UNIX_FibrePortEventCounters::setPLOGOsRejected(Uint64 &value)
{
	_pLOGOsRejected = value;
}


void UNIX_FibrePortEventCounters::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("FibrePortEventCounters");
	_generation = Uint64(0);
	_name = String ("");
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_deviceCreationClassName = String ("");
	_deviceID = String ("");
	_creationClassName = String("UNIX_FibrePortEventCounters");
	_pLOGIsReceived = Uint64(0);
	_pLOGIsSent = Uint64(0);
	_eOFAbortsReceived = Uint64(0);
	_eOFAbortsTransmitted = Uint64(0);
	_pLOGOsReceived = Uint64(0);
	_pLOGOsSent = Uint64(0);
	_pLOGIsRejected = Uint64(0);
	_pLOGOsRejected = Uint64(0);

}

Boolean UNIX_FibrePortEventCounters::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "PLOGIsReceived"))
			{
				Uint64 pLOGIsReceivedValue;
				property.getValue().get(pLOGIsReceivedValue);
				setPLOGIsReceived(pLOGIsReceivedValue);
			}
			else if (String::equal(property.getName().getString(), "PLOGIsSent"))
			{
				Uint64 pLOGIsSentValue;
				property.getValue().get(pLOGIsSentValue);
				setPLOGIsSent(pLOGIsSentValue);
			}
			else if (String::equal(property.getName().getString(), "EOFAbortsReceived"))
			{
				Uint64 eOFAbortsReceivedValue;
				property.getValue().get(eOFAbortsReceivedValue);
				setEOFAbortsReceived(eOFAbortsReceivedValue);
			}
			else if (String::equal(property.getName().getString(), "EOFAbortsTransmitted"))
			{
				Uint64 eOFAbortsTransmittedValue;
				property.getValue().get(eOFAbortsTransmittedValue);
				setEOFAbortsTransmitted(eOFAbortsTransmittedValue);
			}
			else if (String::equal(property.getName().getString(), "PLOGOsReceived"))
			{
				Uint64 pLOGOsReceivedValue;
				property.getValue().get(pLOGOsReceivedValue);
				setPLOGOsReceived(pLOGOsReceivedValue);
			}
			else if (String::equal(property.getName().getString(), "PLOGOsSent"))
			{
				Uint64 pLOGOsSentValue;
				property.getValue().get(pLOGOsSentValue);
				setPLOGOsSent(pLOGOsSentValue);
			}
			else if (String::equal(property.getName().getString(), "PLOGIsRejected"))
			{
				Uint64 pLOGIsRejectedValue;
				property.getValue().get(pLOGIsRejectedValue);
				setPLOGIsRejected(pLOGIsRejectedValue);
			}
			else if (String::equal(property.getName().getString(), "PLOGOsRejected"))
			{
				Uint64 pLOGOsRejectedValue;
				property.getValue().get(pLOGOsRejectedValue);
				setPLOGOsRejected(pLOGOsRejectedValue);
			}
	}
	return true;
}

Uint32 UNIX_FibrePortEventCounters::invokeResetCounter(
		Uint16 &inSelectedCounter
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ResetCounter */
	
	
	
	return returnValue;
}


Boolean UNIX_FibrePortEventCounters::initialize()
{
	return false;
}

Boolean UNIX_FibrePortEventCounters::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("FibrePortEventCounters");
	_generation = Uint64(0);
	_name = String ("");
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_deviceCreationClassName = String ("");
	_deviceID = String ("");
	_creationClassName = String("UNIX_FibrePortEventCounters");
	_pLOGIsReceived = Uint64(0);
	_pLOGIsSent = Uint64(0);
	_eOFAbortsReceived = Uint64(0);
	_eOFAbortsTransmitted = Uint64(0);
	_pLOGOsReceived = Uint64(0);
	_pLOGOsSent = Uint64(0);
	_pLOGIsRejected = Uint64(0);
	_pLOGOsRejected = Uint64(0);
	
	return false;
}

Boolean UNIX_FibrePortEventCounters::finalize()
{
	return false;
}

Boolean UNIX_FibrePortEventCounters::loadByName(const String name)
{
	return false;
}

Boolean UNIX_FibrePortEventCounters::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_FibrePortEventCounters::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FibrePortEventCounters::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FibrePortEventCounters::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FibrePortEventCounters::validateInstance()
{
	return true;
}

