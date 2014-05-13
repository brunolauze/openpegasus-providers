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


UNIX_GatewayPathID::UNIX_GatewayPathID(void)
{
}

UNIX_GatewayPathID::~UNIX_GatewayPathID(void)
{
}

Boolean UNIX_GatewayPathID::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_GatewayPathID::getInstanceID() const
{
	return _instanceID;
}

void UNIX_GatewayPathID::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_GatewayPathID::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_GatewayPathID::getCaption() const
{
	return _caption;
}

void UNIX_GatewayPathID::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_GatewayPathID::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_GatewayPathID::getDescription() const
{
	return _description;
}

void UNIX_GatewayPathID::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_GatewayPathID::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_GatewayPathID::getElementName() const
{
	return _elementName;
}

void UNIX_GatewayPathID::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_GatewayPathID::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_GatewayPathID::getGeneration() const
{
	return _generation;
}

void UNIX_GatewayPathID::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_GatewayPathID::getCurrentlyAuthenticated(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENTLY_AUTHENTICATED, getCurrentlyAuthenticated());
	return true;
}

Boolean UNIX_GatewayPathID::getCurrentlyAuthenticated() const
{
	return _currentlyAuthenticated;
}

void UNIX_GatewayPathID::setCurrentlyAuthenticated(Boolean &value)
{
	_currentlyAuthenticated = value;
}

Boolean UNIX_GatewayPathID::getStorageID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STORAGE_ID, getStorageID());
	return true;
}

String UNIX_GatewayPathID::getStorageID() const
{
	return _storageID;
}

void UNIX_GatewayPathID::setStorageID(String &value)
{
	_storageID = value;
}

Boolean UNIX_GatewayPathID::getIDType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ID_TYPE, getIDType());
	return true;
}

Uint16 UNIX_GatewayPathID::getIDType() const
{
	return _iDType;
}

void UNIX_GatewayPathID::setIDType(Uint16 &value)
{
	_iDType = value;
}

Boolean UNIX_GatewayPathID::getOtherIDType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ID_TYPE, getOtherIDType());
	return true;
}

String UNIX_GatewayPathID::getOtherIDType() const
{
	return _otherIDType;
}

void UNIX_GatewayPathID::setOtherIDType(String &value)
{
	_otherIDType = value;
}

Boolean UNIX_GatewayPathID::getGatewayID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GATEWAY_ID, getGatewayID());
	return true;
}

String UNIX_GatewayPathID::getGatewayID() const
{
	return _gatewayID;
}

void UNIX_GatewayPathID::setGatewayID(String &value)
{
	_gatewayID = value;
}

Boolean UNIX_GatewayPathID::getGatewayIDType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GATEWAY_ID_TYPE, getGatewayIDType());
	return true;
}

Uint16 UNIX_GatewayPathID::getGatewayIDType() const
{
	return _gatewayIDType;
}

void UNIX_GatewayPathID::setGatewayIDType(Uint16 &value)
{
	_gatewayIDType = value;
}

Boolean UNIX_GatewayPathID::getOtherGatewayIDType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_GATEWAY_ID_TYPE, getOtherGatewayIDType());
	return true;
}

String UNIX_GatewayPathID::getOtherGatewayIDType() const
{
	return _otherGatewayIDType;
}

void UNIX_GatewayPathID::setOtherGatewayIDType(String &value)
{
	_otherGatewayIDType = value;
}


void UNIX_GatewayPathID::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("GatewayPathID");
	_generation = Uint64(0);
	_currentlyAuthenticated = Boolean(false);
	_storageID = String ("");
	_iDType = Uint16(0);
	_otherIDType = String ("");
	_gatewayID = String ("");
	_gatewayIDType = Uint16(0);
	_otherGatewayIDType = String ("");

}

Boolean UNIX_GatewayPathID::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "CurrentlyAuthenticated"))
			{
				Boolean currentlyAuthenticatedValue;
				property.getValue().get(currentlyAuthenticatedValue);
				setCurrentlyAuthenticated(currentlyAuthenticatedValue);
			}
			else if (String::equal(property.getName().getString(), "StorageID"))
			{
				String storageIDValue;
				property.getValue().get(storageIDValue);
				setStorageID(storageIDValue);
			}
			else if (String::equal(property.getName().getString(), "IDType"))
			{
				Uint16 iDTypeValue;
				property.getValue().get(iDTypeValue);
				setIDType(iDTypeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherIDType"))
			{
				String otherIDTypeValue;
				property.getValue().get(otherIDTypeValue);
				setOtherIDType(otherIDTypeValue);
			}
			else if (String::equal(property.getName().getString(), "GatewayID"))
			{
				String gatewayIDValue;
				property.getValue().get(gatewayIDValue);
				setGatewayID(gatewayIDValue);
			}
			else if (String::equal(property.getName().getString(), "GatewayIDType"))
			{
				Uint16 gatewayIDTypeValue;
				property.getValue().get(gatewayIDTypeValue);
				setGatewayIDType(gatewayIDTypeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherGatewayIDType"))
			{
				String otherGatewayIDTypeValue;
				property.getValue().get(otherGatewayIDTypeValue);
				setOtherGatewayIDType(otherGatewayIDTypeValue);
			}
	}
	return true;
}


Boolean UNIX_GatewayPathID::initialize()
{
	return false;
}

Boolean UNIX_GatewayPathID::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("GatewayPathID");
	_generation = Uint64(0);
	_currentlyAuthenticated = Boolean(false);
	_storageID = String ("");
	_iDType = Uint16(0);
	_otherIDType = String ("");
	_gatewayID = String ("");
	_gatewayIDType = Uint16(0);
	_otherGatewayIDType = String ("");
	
	return false;
}

Boolean UNIX_GatewayPathID::finalize()
{
	return false;
}


Boolean UNIX_GatewayPathID::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_GatewayPathID::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_GatewayPathID::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_GatewayPathID::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_GatewayPathID::validateInstance()
{
	return true;
}

