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


UNIX_IPSubnet::UNIX_IPSubnet(void)
{
}

UNIX_IPSubnet::~UNIX_IPSubnet(void)
{
}

Boolean UNIX_IPSubnet::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_IPSubnet::getInstanceID() const
{
	return _instanceID;
}

void UNIX_IPSubnet::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_IPSubnet::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_IPSubnet::getCaption() const
{
	return _caption;
}

void UNIX_IPSubnet::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_IPSubnet::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_IPSubnet::getDescription() const
{
	return _description;
}

void UNIX_IPSubnet::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_IPSubnet::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_IPSubnet::getElementName() const
{
	return _elementName;
}

void UNIX_IPSubnet::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_IPSubnet::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_IPSubnet::getGeneration() const
{
	return _generation;
}

void UNIX_IPSubnet::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_IPSubnet::getCollectionID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COLLECTION_ID, getCollectionID());
	return true;
}

String UNIX_IPSubnet::getCollectionID() const
{
	return _collectionID;
}

void UNIX_IPSubnet::setCollectionID(String &value)
{
	_collectionID = value;
}

Boolean UNIX_IPSubnet::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_IPSubnet::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_IPSubnet::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_IPSubnet::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_IPSubnet::getSystemName() const
{
	return _systemName;
}

void UNIX_IPSubnet::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_IPSubnet::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_IPSubnet::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_IPSubnet::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_IPSubnet::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_IPSubnet::getName() const
{
	return _name;
}

void UNIX_IPSubnet::setName(String &value)
{
	_name = value;
}

Boolean UNIX_IPSubnet::getNetworkType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NETWORK_TYPE, getNetworkType());
	return true;
}

Uint16 UNIX_IPSubnet::getNetworkType() const
{
	return _networkType;
}

void UNIX_IPSubnet::setNetworkType(Uint16 &value)
{
	_networkType = value;
}

Boolean UNIX_IPSubnet::getOtherTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TYPE_DESCRIPTION, getOtherTypeDescription());
	return true;
}

String UNIX_IPSubnet::getOtherTypeDescription() const
{
	return _otherTypeDescription;
}

void UNIX_IPSubnet::setOtherTypeDescription(String &value)
{
	_otherTypeDescription = value;
}

Boolean UNIX_IPSubnet::getSubnetNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUBNET_NUMBER, getSubnetNumber());
	return true;
}

String UNIX_IPSubnet::getSubnetNumber() const
{
	return _subnetNumber;
}

void UNIX_IPSubnet::setSubnetNumber(String &value)
{
	_subnetNumber = value;
}

Boolean UNIX_IPSubnet::getSubnetMask(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUBNET_MASK, getSubnetMask());
	return true;
}

String UNIX_IPSubnet::getSubnetMask() const
{
	return _subnetMask;
}

void UNIX_IPSubnet::setSubnetMask(String &value)
{
	_subnetMask = value;
}

Boolean UNIX_IPSubnet::getPrefixLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PREFIX_LENGTH, getPrefixLength());
	return true;
}

Uint8 UNIX_IPSubnet::getPrefixLength() const
{
	return _prefixLength;
}

void UNIX_IPSubnet::setPrefixLength(Uint8 &value)
{
	_prefixLength = value;
}

Boolean UNIX_IPSubnet::getAddressType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESS_TYPE, getAddressType());
	return true;
}

Uint16 UNIX_IPSubnet::getAddressType() const
{
	return _addressType;
}

void UNIX_IPSubnet::setAddressType(Uint16 &value)
{
	_addressType = value;
}


void UNIX_IPSubnet::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("IPSubnet");
	_generation = Uint64(0);
	_collectionID = String ("");
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_creationClassName = String("UNIX_IPSubnet");
	_name = String ("");
	_networkType = Uint16(0);
	_otherTypeDescription = String ("");
	_subnetNumber = String ("");
	_subnetMask = String ("");
	_prefixLength = Uint8(0);
	_addressType = Uint16(0);

}

Boolean UNIX_IPSubnet::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "SubnetNumber"))
			{
				String subnetNumberValue;
				property.getValue().get(subnetNumberValue);
				setSubnetNumber(subnetNumberValue);
			}
			else if (String::equal(property.getName().getString(), "SubnetMask"))
			{
				String subnetMaskValue;
				property.getValue().get(subnetMaskValue);
				setSubnetMask(subnetMaskValue);
			}
			else if (String::equal(property.getName().getString(), "PrefixLength"))
			{
				Uint8 prefixLengthValue;
				property.getValue().get(prefixLengthValue);
				setPrefixLength(prefixLengthValue);
			}
			else if (String::equal(property.getName().getString(), "AddressType"))
			{
				Uint16 addressTypeValue;
				property.getValue().get(addressTypeValue);
				setAddressType(addressTypeValue);
			}
	}
	return true;
}


Boolean UNIX_IPSubnet::initialize()
{
	return false;
}

Boolean UNIX_IPSubnet::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("IPSubnet");
	_generation = Uint64(0);
	_collectionID = String ("");
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_creationClassName = String("UNIX_IPSubnet");
	_name = String ("");
	_networkType = Uint16(0);
	_otherTypeDescription = String ("");
	_subnetNumber = String ("");
	_subnetMask = String ("");
	_prefixLength = Uint8(0);
	_addressType = Uint16(0);
	
	return false;
}

Boolean UNIX_IPSubnet::finalize()
{
	return false;
}

Boolean UNIX_IPSubnet::loadByName(const String name)
{
	return false;
}

Boolean UNIX_IPSubnet::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_IPSubnet::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IPSubnet::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IPSubnet::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IPSubnet::validateInstance()
{
	return true;
}

