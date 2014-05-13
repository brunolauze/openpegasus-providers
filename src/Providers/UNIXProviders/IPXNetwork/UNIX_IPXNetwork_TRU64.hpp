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


UNIX_IPXNetwork::UNIX_IPXNetwork(void)
{
}

UNIX_IPXNetwork::~UNIX_IPXNetwork(void)
{
}

Boolean UNIX_IPXNetwork::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_IPXNetwork::getInstanceID() const
{
	return _instanceID;
}

void UNIX_IPXNetwork::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_IPXNetwork::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_IPXNetwork::getCaption() const
{
	return _caption;
}

void UNIX_IPXNetwork::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_IPXNetwork::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_IPXNetwork::getDescription() const
{
	return _description;
}

void UNIX_IPXNetwork::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_IPXNetwork::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_IPXNetwork::getElementName() const
{
	return _elementName;
}

void UNIX_IPXNetwork::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_IPXNetwork::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_IPXNetwork::getGeneration() const
{
	return _generation;
}

void UNIX_IPXNetwork::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_IPXNetwork::getCollectionID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COLLECTION_ID, getCollectionID());
	return true;
}

String UNIX_IPXNetwork::getCollectionID() const
{
	return _collectionID;
}

void UNIX_IPXNetwork::setCollectionID(String &value)
{
	_collectionID = value;
}

Boolean UNIX_IPXNetwork::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_IPXNetwork::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_IPXNetwork::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_IPXNetwork::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_IPXNetwork::getSystemName() const
{
	return _systemName;
}

void UNIX_IPXNetwork::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_IPXNetwork::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_IPXNetwork::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_IPXNetwork::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_IPXNetwork::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_IPXNetwork::getName() const
{
	return _name;
}

void UNIX_IPXNetwork::setName(String &value)
{
	_name = value;
}

Boolean UNIX_IPXNetwork::getNetworkType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NETWORK_TYPE, getNetworkType());
	return true;
}

Uint16 UNIX_IPXNetwork::getNetworkType() const
{
	return _networkType;
}

void UNIX_IPXNetwork::setNetworkType(Uint16 &value)
{
	_networkType = value;
}

Boolean UNIX_IPXNetwork::getOtherTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TYPE_DESCRIPTION, getOtherTypeDescription());
	return true;
}

String UNIX_IPXNetwork::getOtherTypeDescription() const
{
	return _otherTypeDescription;
}

void UNIX_IPXNetwork::setOtherTypeDescription(String &value)
{
	_otherTypeDescription = value;
}

Boolean UNIX_IPXNetwork::getNetworkNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NETWORK_NUMBER, getNetworkNumber());
	return true;
}

String UNIX_IPXNetwork::getNetworkNumber() const
{
	return _networkNumber;
}

void UNIX_IPXNetwork::setNetworkNumber(String &value)
{
	_networkNumber = value;
}


void UNIX_IPXNetwork::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("IPXNetwork");
	_generation = Uint64(0);
	_collectionID = String ("");
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_creationClassName = String("UNIX_IPXNetwork");
	_name = String ("");
	_networkType = Uint16(0);
	_otherTypeDescription = String ("");
	_networkNumber = String ("");

}

Boolean UNIX_IPXNetwork::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "CollectionID"))
			{
				String collectionIDValue;
				property.getValue().get(collectionIDValue);
				setCollectionID(collectionIDValue);
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
			else if (String::equal(property.getName().getString(), "NetworkType"))
			{
				Uint16 networkTypeValue;
				property.getValue().get(networkTypeValue);
				setNetworkType(networkTypeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherTypeDescription"))
			{
				String otherTypeDescriptionValue;
				property.getValue().get(otherTypeDescriptionValue);
				setOtherTypeDescription(otherTypeDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "NetworkNumber"))
			{
				String networkNumberValue;
				property.getValue().get(networkNumberValue);
				setNetworkNumber(networkNumberValue);
			}
	}
	return true;
}


Boolean UNIX_IPXNetwork::initialize()
{
	return false;
}

Boolean UNIX_IPXNetwork::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("IPXNetwork");
	_generation = Uint64(0);
	_collectionID = String ("");
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_creationClassName = String("UNIX_IPXNetwork");
	_name = String ("");
	_networkType = Uint16(0);
	_otherTypeDescription = String ("");
	_networkNumber = String ("");
	
	return false;
}

Boolean UNIX_IPXNetwork::finalize()
{
	return false;
}

Boolean UNIX_IPXNetwork::loadByName(const String name)
{
	return false;
}

Boolean UNIX_IPXNetwork::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_IPXNetwork::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IPXNetwork::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IPXNetwork::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IPXNetwork::validateInstance()
{
	return true;
}

