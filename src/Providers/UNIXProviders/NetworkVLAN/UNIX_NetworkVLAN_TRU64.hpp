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


UNIX_NetworkVLAN::UNIX_NetworkVLAN(void)
{
}

UNIX_NetworkVLAN::~UNIX_NetworkVLAN(void)
{
}

Boolean UNIX_NetworkVLAN::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_NetworkVLAN::getInstanceID() const
{
	return _instanceID;
}

void UNIX_NetworkVLAN::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_NetworkVLAN::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_NetworkVLAN::getCaption() const
{
	return _caption;
}

void UNIX_NetworkVLAN::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_NetworkVLAN::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_NetworkVLAN::getDescription() const
{
	return _description;
}

void UNIX_NetworkVLAN::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_NetworkVLAN::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_NetworkVLAN::getElementName() const
{
	return _elementName;
}

void UNIX_NetworkVLAN::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_NetworkVLAN::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_NetworkVLAN::getGeneration() const
{
	return _generation;
}

void UNIX_NetworkVLAN::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_NetworkVLAN::getConnectivityStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONNECTIVITY_STATUS, getConnectivityStatus());
	return true;
}

Uint16 UNIX_NetworkVLAN::getConnectivityStatus() const
{
	return _connectivityStatus;
}

void UNIX_NetworkVLAN::setConnectivityStatus(Uint16 &value)
{
	_connectivityStatus = value;
}

Boolean UNIX_NetworkVLAN::getVLANId(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VLAN_ID, getVLANId());
	return true;
}

Uint16 UNIX_NetworkVLAN::getVLANId() const
{
	return _vLANId;
}

void UNIX_NetworkVLAN::setVLANId(Uint16 &value)
{
	_vLANId = value;
}

Boolean UNIX_NetworkVLAN::getSAIdentifier(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_A_IDENTIFIER, getSAIdentifier());
	return true;
}

Uint32 UNIX_NetworkVLAN::getSAIdentifier() const
{
	return _sAIdentifier;
}

void UNIX_NetworkVLAN::setSAIdentifier(Uint32 &value)
{
	_sAIdentifier = value;
}

Boolean UNIX_NetworkVLAN::getTransmissionSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSMISSION_SIZE, getTransmissionSize());
	return true;
}

Sint32 UNIX_NetworkVLAN::getTransmissionSize() const
{
	return _transmissionSize;
}

void UNIX_NetworkVLAN::setTransmissionSize(Sint32 &value)
{
	_transmissionSize = value;
}

Boolean UNIX_NetworkVLAN::getTypeOfMedia(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TYPE_OF_MEDIA, getTypeOfMedia());
	return true;
}

Uint16 UNIX_NetworkVLAN::getTypeOfMedia() const
{
	return _typeOfMedia;
}

void UNIX_NetworkVLAN::setTypeOfMedia(Uint16 &value)
{
	_typeOfMedia = value;
}

Boolean UNIX_NetworkVLAN::getOtherTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TYPE_DESCRIPTION, getOtherTypeDescription());
	return true;
}

String UNIX_NetworkVLAN::getOtherTypeDescription() const
{
	return _otherTypeDescription;
}

void UNIX_NetworkVLAN::setOtherTypeDescription(String &value)
{
	_otherTypeDescription = value;
}


void UNIX_NetworkVLAN::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("NetworkVLAN");
	_generation = Uint64(0);
	_connectivityStatus = Uint16(0);
	_vLANId = Uint16(0);
	_sAIdentifier = Uint32(0);
	_transmissionSize = Sint32(0);
	_typeOfMedia = Uint16(0);
	_otherTypeDescription = String ("");

}

Boolean UNIX_NetworkVLAN::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "VLANId"))
			{
				Uint16 vLANIdValue;
				property.getValue().get(vLANIdValue);
				setVLANId(vLANIdValue);
			}
			else if (String::equal(property.getName().getString(), "SAIdentifier"))
			{
				Uint32 sAIdentifierValue;
				property.getValue().get(sAIdentifierValue);
				setSAIdentifier(sAIdentifierValue);
			}
			else if (String::equal(property.getName().getString(), "TransmissionSize"))
			{
				Sint32 transmissionSizeValue;
				property.getValue().get(transmissionSizeValue);
				setTransmissionSize(transmissionSizeValue);
			}
			else if (String::equal(property.getName().getString(), "TypeOfMedia"))
			{
				Uint16 typeOfMediaValue;
				property.getValue().get(typeOfMediaValue);
				setTypeOfMedia(typeOfMediaValue);
			}
			else if (String::equal(property.getName().getString(), "OtherTypeDescription"))
			{
				String otherTypeDescriptionValue;
				property.getValue().get(otherTypeDescriptionValue);
				setOtherTypeDescription(otherTypeDescriptionValue);
			}
	}
	return true;
}


Boolean UNIX_NetworkVLAN::initialize()
{
	return false;
}

Boolean UNIX_NetworkVLAN::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("NetworkVLAN");
	_generation = Uint64(0);
	_connectivityStatus = Uint16(0);
	_vLANId = Uint16(0);
	_sAIdentifier = Uint32(0);
	_transmissionSize = Sint32(0);
	_typeOfMedia = Uint16(0);
	_otherTypeDescription = String ("");
	
	return false;
}

Boolean UNIX_NetworkVLAN::finalize()
{
	return false;
}


Boolean UNIX_NetworkVLAN::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_NetworkVLAN::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_NetworkVLAN::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_NetworkVLAN::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_NetworkVLAN::validateInstance()
{
	return true;
}

