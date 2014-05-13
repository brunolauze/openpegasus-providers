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


UNIX_IndicationHandlerCIMXML::UNIX_IndicationHandlerCIMXML(void)
{
}

UNIX_IndicationHandlerCIMXML::~UNIX_IndicationHandlerCIMXML(void)
{
}

Boolean UNIX_IndicationHandlerCIMXML::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_IndicationHandlerCIMXML::getInstanceID() const
{
	return _instanceID;
}

void UNIX_IndicationHandlerCIMXML::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_IndicationHandlerCIMXML::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_IndicationHandlerCIMXML::getCaption() const
{
	return _caption;
}

void UNIX_IndicationHandlerCIMXML::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_IndicationHandlerCIMXML::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_IndicationHandlerCIMXML::getDescription() const
{
	return _description;
}

void UNIX_IndicationHandlerCIMXML::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_IndicationHandlerCIMXML::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_IndicationHandlerCIMXML::getElementName() const
{
	return _elementName;
}

void UNIX_IndicationHandlerCIMXML::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_IndicationHandlerCIMXML::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_IndicationHandlerCIMXML::getGeneration() const
{
	return _generation;
}

void UNIX_IndicationHandlerCIMXML::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_IndicationHandlerCIMXML::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_IndicationHandlerCIMXML::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_IndicationHandlerCIMXML::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_IndicationHandlerCIMXML::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_IndicationHandlerCIMXML::getSystemName() const
{
	return _systemName;
}

void UNIX_IndicationHandlerCIMXML::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_IndicationHandlerCIMXML::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_IndicationHandlerCIMXML::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_IndicationHandlerCIMXML::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_IndicationHandlerCIMXML::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_IndicationHandlerCIMXML::getName() const
{
	return _name;
}

void UNIX_IndicationHandlerCIMXML::setName(String &value)
{
	_name = value;
}

Boolean UNIX_IndicationHandlerCIMXML::getPersistenceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERSISTENCE_TYPE, getPersistenceType());
	return true;
}

Uint16 UNIX_IndicationHandlerCIMXML::getPersistenceType() const
{
	return _persistenceType;
}

void UNIX_IndicationHandlerCIMXML::setPersistenceType(Uint16 &value)
{
	_persistenceType = value;
}

Boolean UNIX_IndicationHandlerCIMXML::getOtherPersistenceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_PERSISTENCE_TYPE, getOtherPersistenceType());
	return true;
}

String UNIX_IndicationHandlerCIMXML::getOtherPersistenceType() const
{
	return _otherPersistenceType;
}

void UNIX_IndicationHandlerCIMXML::setOtherPersistenceType(String &value)
{
	_otherPersistenceType = value;
}

Boolean UNIX_IndicationHandlerCIMXML::getDestination(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESTINATION, getDestination());
	return true;
}

String UNIX_IndicationHandlerCIMXML::getDestination() const
{
	return _destination;
}

void UNIX_IndicationHandlerCIMXML::setDestination(String &value)
{
	_destination = value;
}

Boolean UNIX_IndicationHandlerCIMXML::getOtherProtocol(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_PROTOCOL, getOtherProtocol());
	return true;
}

String UNIX_IndicationHandlerCIMXML::getOtherProtocol() const
{
	return _otherProtocol;
}

void UNIX_IndicationHandlerCIMXML::setOtherProtocol(String &value)
{
	_otherProtocol = value;
}

Boolean UNIX_IndicationHandlerCIMXML::getProtocol(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL, getProtocol());
	return true;
}

Uint16 UNIX_IndicationHandlerCIMXML::getProtocol() const
{
	return _protocol;
}

void UNIX_IndicationHandlerCIMXML::setProtocol(Uint16 &value)
{
	_protocol = value;
}

Boolean UNIX_IndicationHandlerCIMXML::getOwner(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OWNER, getOwner());
	return true;
}

String UNIX_IndicationHandlerCIMXML::getOwner() const
{
	return _owner;
}

void UNIX_IndicationHandlerCIMXML::setOwner(String &value)
{
	_owner = value;
}


void UNIX_IndicationHandlerCIMXML::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("IndicationHandlerCIMXML");
	_generation = Uint64(0);
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_creationClassName = String("UNIX_IndicationHandlerCIMXML");
	_name = String ("");
	_persistenceType = Uint16(0);
	_otherPersistenceType = String ("");
	_destination = String ("");
	_otherProtocol = String ("");
	_protocol = Uint16(0);
	_owner = String ("");

}

Boolean UNIX_IndicationHandlerCIMXML::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "Owner"))
			{
				String ownerValue;
				property.getValue().get(ownerValue);
				setOwner(ownerValue);
			}
	}
	return true;
}


Boolean UNIX_IndicationHandlerCIMXML::initialize()
{
	return false;
}

Boolean UNIX_IndicationHandlerCIMXML::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("IndicationHandlerCIMXML");
	_generation = Uint64(0);
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_creationClassName = String("UNIX_IndicationHandlerCIMXML");
	_name = String ("");
	_persistenceType = Uint16(0);
	_otherPersistenceType = String ("");
	_destination = String ("");
	_otherProtocol = String ("");
	_protocol = Uint16(0);
	_owner = String ("");
	
	return false;
}

Boolean UNIX_IndicationHandlerCIMXML::finalize()
{
	return false;
}

Boolean UNIX_IndicationHandlerCIMXML::loadByName(const String name)
{
	return false;
}

Boolean UNIX_IndicationHandlerCIMXML::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_IndicationHandlerCIMXML::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IndicationHandlerCIMXML::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IndicationHandlerCIMXML::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IndicationHandlerCIMXML::validateInstance()
{
	return true;
}

