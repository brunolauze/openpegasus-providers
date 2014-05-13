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


UNIX_ListenerDestinationLog::UNIX_ListenerDestinationLog(void)
{
}

UNIX_ListenerDestinationLog::~UNIX_ListenerDestinationLog(void)
{
}

Boolean UNIX_ListenerDestinationLog::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_ListenerDestinationLog::getInstanceID() const
{
	return _instanceID;
}

void UNIX_ListenerDestinationLog::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_ListenerDestinationLog::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_ListenerDestinationLog::getCaption() const
{
	return _caption;
}

void UNIX_ListenerDestinationLog::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_ListenerDestinationLog::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_ListenerDestinationLog::getDescription() const
{
	return _description;
}

void UNIX_ListenerDestinationLog::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_ListenerDestinationLog::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_ListenerDestinationLog::getElementName() const
{
	return _elementName;
}

void UNIX_ListenerDestinationLog::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_ListenerDestinationLog::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_ListenerDestinationLog::getGeneration() const
{
	return _generation;
}

void UNIX_ListenerDestinationLog::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_ListenerDestinationLog::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_ListenerDestinationLog::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_ListenerDestinationLog::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_ListenerDestinationLog::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_ListenerDestinationLog::getSystemName() const
{
	return _systemName;
}

void UNIX_ListenerDestinationLog::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_ListenerDestinationLog::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_ListenerDestinationLog::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_ListenerDestinationLog::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_ListenerDestinationLog::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_ListenerDestinationLog::getName() const
{
	return _name;
}

void UNIX_ListenerDestinationLog::setName(String &value)
{
	_name = value;
}

Boolean UNIX_ListenerDestinationLog::getPersistenceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERSISTENCE_TYPE, getPersistenceType());
	return true;
}

Uint16 UNIX_ListenerDestinationLog::getPersistenceType() const
{
	return _persistenceType;
}

void UNIX_ListenerDestinationLog::setPersistenceType(Uint16 &value)
{
	_persistenceType = value;
}

Boolean UNIX_ListenerDestinationLog::getOtherPersistenceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_PERSISTENCE_TYPE, getOtherPersistenceType());
	return true;
}

String UNIX_ListenerDestinationLog::getOtherPersistenceType() const
{
	return _otherPersistenceType;
}

void UNIX_ListenerDestinationLog::setOtherPersistenceType(String &value)
{
	_otherPersistenceType = value;
}

Boolean UNIX_ListenerDestinationLog::getDestination(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESTINATION, getDestination());
	return true;
}

String UNIX_ListenerDestinationLog::getDestination() const
{
	return _destination;
}

void UNIX_ListenerDestinationLog::setDestination(String &value)
{
	_destination = value;
}

Boolean UNIX_ListenerDestinationLog::getOtherProtocol(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_PROTOCOL, getOtherProtocol());
	return true;
}

String UNIX_ListenerDestinationLog::getOtherProtocol() const
{
	return _otherProtocol;
}

void UNIX_ListenerDestinationLog::setOtherProtocol(String &value)
{
	_otherProtocol = value;
}

Boolean UNIX_ListenerDestinationLog::getProtocol(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL, getProtocol());
	return true;
}

Uint16 UNIX_ListenerDestinationLog::getProtocol() const
{
	return _protocol;
}

void UNIX_ListenerDestinationLog::setProtocol(Uint16 &value)
{
	_protocol = value;
}


void UNIX_ListenerDestinationLog::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("ListenerDestinationLog");
	_generation = Uint64(0);
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_creationClassName = String("UNIX_ListenerDestinationLog");
	_name = String ("");
	_persistenceType = Uint16(0);
	_otherPersistenceType = String ("");
	_destination = String ("");
	_otherProtocol = String ("");
	_protocol = Uint16(0);

}

Boolean UNIX_ListenerDestinationLog::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "CreationClassName"))
			{
				String creationClassNameValue;
				property.getValue().get(creationClassNameValue);
				setCreationClassName(creationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "Name"))
			{
				String nameValue;
				property.getValue().get(nameValue);
				setName(nameValue);
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
			else if (String::equal(property.getName().getString(), "Destination"))
			{
				String destinationValue;
				property.getValue().get(destinationValue);
				setDestination(destinationValue);
			}
			else if (String::equal(property.getName().getString(), "OtherProtocol"))
			{
				String otherProtocolValue;
				property.getValue().get(otherProtocolValue);
				setOtherProtocol(otherProtocolValue);
			}
			else if (String::equal(property.getName().getString(), "Protocol"))
			{
				Uint16 protocolValue;
				property.getValue().get(protocolValue);
				setProtocol(protocolValue);
			}
	}
	return true;
}


Boolean UNIX_ListenerDestinationLog::initialize()
{
	return false;
}

Boolean UNIX_ListenerDestinationLog::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("ListenerDestinationLog");
	_generation = Uint64(0);
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_creationClassName = String("UNIX_ListenerDestinationLog");
	_name = String ("");
	_persistenceType = Uint16(0);
	_otherPersistenceType = String ("");
	_destination = String ("");
	_otherProtocol = String ("");
	_protocol = Uint16(0);
	
	return false;
}

Boolean UNIX_ListenerDestinationLog::finalize()
{
	return false;
}

Boolean UNIX_ListenerDestinationLog::loadByName(const String name)
{
	return false;
}

Boolean UNIX_ListenerDestinationLog::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String systemCreationClassNameKey;
	String systemNameKey;
	String creationClassNameKey;
	String nameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SYSTEM_CREATION_CLASS_NAME)) systemCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SYSTEM_NAME)) systemNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getSystemCreationClassName(), systemCreationClassNameKey)) && 
			(String::equalNoCase(getSystemName(), systemNameKey)) && 
			(String::equalNoCase(getCreationClassName(), creationClassNameKey)) && 
			(String::equalNoCase(getName(), nameKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_ListenerDestinationLog::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ListenerDestinationLog::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ListenerDestinationLog::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ListenerDestinationLog::validateInstance()
{
	return true;
}

