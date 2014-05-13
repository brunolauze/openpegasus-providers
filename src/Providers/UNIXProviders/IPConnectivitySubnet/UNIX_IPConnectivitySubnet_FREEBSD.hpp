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


UNIX_IPConnectivitySubnet::UNIX_IPConnectivitySubnet(void)
{
}

UNIX_IPConnectivitySubnet::~UNIX_IPConnectivitySubnet(void)
{
}

Boolean UNIX_IPConnectivitySubnet::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_IPConnectivitySubnet::getInstanceID() const
{
	return _instanceID;
}

void UNIX_IPConnectivitySubnet::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_IPConnectivitySubnet::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_IPConnectivitySubnet::getCaption() const
{
	return _caption;
}

void UNIX_IPConnectivitySubnet::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_IPConnectivitySubnet::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_IPConnectivitySubnet::getDescription() const
{
	return _description;
}

void UNIX_IPConnectivitySubnet::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_IPConnectivitySubnet::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_IPConnectivitySubnet::getElementName() const
{
	return _elementName;
}

void UNIX_IPConnectivitySubnet::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_IPConnectivitySubnet::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_IPConnectivitySubnet::getGeneration() const
{
	return _generation;
}

void UNIX_IPConnectivitySubnet::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_IPConnectivitySubnet::getConnectivityStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONNECTIVITY_STATUS, getConnectivityStatus());
	return true;
}

Uint16 UNIX_IPConnectivitySubnet::getConnectivityStatus() const
{
	return _connectivityStatus;
}

void UNIX_IPConnectivitySubnet::setConnectivityStatus(Uint16 &value)
{
	_connectivityStatus = value;
}

Boolean UNIX_IPConnectivitySubnet::getSubnetNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUBNET_NUMBER, getSubnetNumber());
	return true;
}

String UNIX_IPConnectivitySubnet::getSubnetNumber() const
{
	return _subnetNumber;
}

void UNIX_IPConnectivitySubnet::setSubnetNumber(String &value)
{
	_subnetNumber = value;
}

Boolean UNIX_IPConnectivitySubnet::getSubnetMask(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUBNET_MASK, getSubnetMask());
	return true;
}

String UNIX_IPConnectivitySubnet::getSubnetMask() const
{
	return _subnetMask;
}

void UNIX_IPConnectivitySubnet::setSubnetMask(String &value)
{
	_subnetMask = value;
}

Boolean UNIX_IPConnectivitySubnet::getPrefixLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PREFIX_LENGTH, getPrefixLength());
	return true;
}

Uint8 UNIX_IPConnectivitySubnet::getPrefixLength() const
{
	return _prefixLength;
}

void UNIX_IPConnectivitySubnet::setPrefixLength(Uint8 &value)
{
	_prefixLength = value;
}

Boolean UNIX_IPConnectivitySubnet::getAddressType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESS_TYPE, getAddressType());
	return true;
}

Uint16 UNIX_IPConnectivitySubnet::getAddressType() const
{
	return _addressType;
}

void UNIX_IPConnectivitySubnet::setAddressType(Uint16 &value)
{
	_addressType = value;
}


void UNIX_IPConnectivitySubnet::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("IPConnectivitySubnet");
	_generation = Uint64(0);
	_connectivityStatus = Uint16(0);
	_subnetNumber = String ("");
	_subnetMask = String ("");
	_prefixLength = Uint8(0);
	_addressType = Uint16(0);

}

Boolean UNIX_IPConnectivitySubnet::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "ConnectivityStatus"))
			{
				Uint16 connectivityStatusValue;
				property.getValue().get(connectivityStatusValue);
				setConnectivityStatus(connectivityStatusValue);
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


Boolean UNIX_IPConnectivitySubnet::initialize()
{
	return false;
}

Boolean UNIX_IPConnectivitySubnet::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("IPConnectivitySubnet");
	_generation = Uint64(0);
	_connectivityStatus = Uint16(0);
	_subnetNumber = String ("");
	_subnetMask = String ("");
	_prefixLength = Uint8(0);
	_addressType = Uint16(0);
	
	return false;
}

Boolean UNIX_IPConnectivitySubnet::finalize()
{
	return false;
}


Boolean UNIX_IPConnectivitySubnet::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String instanceIDKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_INSTANCE_ID)) instanceIDKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getInstanceID(), instanceIDKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_IPConnectivitySubnet::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IPConnectivitySubnet::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IPConnectivitySubnet::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IPConnectivitySubnet::validateInstance()
{
	return true;
}

