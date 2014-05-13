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


UNIX_ListenerDestinationWSManagement::UNIX_ListenerDestinationWSManagement(void)
{
}

UNIX_ListenerDestinationWSManagement::~UNIX_ListenerDestinationWSManagement(void)
{
}

Boolean UNIX_ListenerDestinationWSManagement::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_ListenerDestinationWSManagement::getInstanceID() const
{
	return _instanceID;
}

void UNIX_ListenerDestinationWSManagement::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_ListenerDestinationWSManagement::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_ListenerDestinationWSManagement::getCaption() const
{
	return _caption;
}

void UNIX_ListenerDestinationWSManagement::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_ListenerDestinationWSManagement::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_ListenerDestinationWSManagement::getDescription() const
{
	return _description;
}

void UNIX_ListenerDestinationWSManagement::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_ListenerDestinationWSManagement::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_ListenerDestinationWSManagement::getElementName() const
{
	return _elementName;
}

void UNIX_ListenerDestinationWSManagement::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_ListenerDestinationWSManagement::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_ListenerDestinationWSManagement::getGeneration() const
{
	return _generation;
}

void UNIX_ListenerDestinationWSManagement::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_ListenerDestinationWSManagement::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_ListenerDestinationWSManagement::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_ListenerDestinationWSManagement::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_ListenerDestinationWSManagement::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_ListenerDestinationWSManagement::getSystemName() const
{
	return _systemName;
}

void UNIX_ListenerDestinationWSManagement::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_ListenerDestinationWSManagement::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_ListenerDestinationWSManagement::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_ListenerDestinationWSManagement::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_ListenerDestinationWSManagement::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_ListenerDestinationWSManagement::getName() const
{
	return _name;
}

void UNIX_ListenerDestinationWSManagement::setName(String &value)
{
	_name = value;
}

Boolean UNIX_ListenerDestinationWSManagement::getPersistenceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERSISTENCE_TYPE, getPersistenceType());
	return true;
}

Uint16 UNIX_ListenerDestinationWSManagement::getPersistenceType() const
{
	return _persistenceType;
}

void UNIX_ListenerDestinationWSManagement::setPersistenceType(Uint16 &value)
{
	_persistenceType = value;
}

Boolean UNIX_ListenerDestinationWSManagement::getOtherPersistenceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_PERSISTENCE_TYPE, getOtherPersistenceType());
	return true;
}

String UNIX_ListenerDestinationWSManagement::getOtherPersistenceType() const
{
	return _otherPersistenceType;
}

void UNIX_ListenerDestinationWSManagement::setOtherPersistenceType(String &value)
{
	_otherPersistenceType = value;
}

Boolean UNIX_ListenerDestinationWSManagement::getDestination(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESTINATION, getDestination());
	return true;
}

String UNIX_ListenerDestinationWSManagement::getDestination() const
{
	return _destination;
}

void UNIX_ListenerDestinationWSManagement::setDestination(String &value)
{
	_destination = value;
}

Boolean UNIX_ListenerDestinationWSManagement::getOtherProtocol(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_PROTOCOL, getOtherProtocol());
	return true;
}

String UNIX_ListenerDestinationWSManagement::getOtherProtocol() const
{
	return _otherProtocol;
}

void UNIX_ListenerDestinationWSManagement::setOtherProtocol(String &value)
{
	_otherProtocol = value;
}

Boolean UNIX_ListenerDestinationWSManagement::getProtocol(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL, getProtocol());
	return true;
}

Uint16 UNIX_ListenerDestinationWSManagement::getProtocol() const
{
	return _protocol;
}

void UNIX_ListenerDestinationWSManagement::setProtocol(Uint16 &value)
{
	_protocol = value;
}

Boolean UNIX_ListenerDestinationWSManagement::getDestinationEndTo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESTINATION_END_TO, getDestinationEndTo());
	return true;
}

String UNIX_ListenerDestinationWSManagement::getDestinationEndTo() const
{
	return _destinationEndTo;
}

void UNIX_ListenerDestinationWSManagement::setDestinationEndTo(String &value)
{
	_destinationEndTo = value;
}

Boolean UNIX_ListenerDestinationWSManagement::getLocale(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCALE, getLocale());
	return true;
}

String UNIX_ListenerDestinationWSManagement::getLocale() const
{
	return _locale;
}

void UNIX_ListenerDestinationWSManagement::setLocale(String &value)
{
	_locale = value;
}

Boolean UNIX_ListenerDestinationWSManagement::getContentEncoding(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONTENT_ENCODING, getContentEncoding());
	return true;
}

String UNIX_ListenerDestinationWSManagement::getContentEncoding() const
{
	return _contentEncoding;
}

void UNIX_ListenerDestinationWSManagement::setContentEncoding(String &value)
{
	_contentEncoding = value;
}

Boolean UNIX_ListenerDestinationWSManagement::getDeliveryMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELIVERY_MODE, getDeliveryMode());
	return true;
}

Uint16 UNIX_ListenerDestinationWSManagement::getDeliveryMode() const
{
	return _deliveryMode;
}

void UNIX_ListenerDestinationWSManagement::setDeliveryMode(Uint16 &value)
{
	_deliveryMode = value;
}

Boolean UNIX_ListenerDestinationWSManagement::getHeartbeat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEARTBEAT, getHeartbeat());
	return true;
}

Uint64 UNIX_ListenerDestinationWSManagement::getHeartbeat() const
{
	return _heartbeat;
}

void UNIX_ListenerDestinationWSManagement::setHeartbeat(Uint64 &value)
{
	_heartbeat = value;
}

Boolean UNIX_ListenerDestinationWSManagement::getSendBookmark(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SEND_BOOKMARK, getSendBookmark());
	return true;
}

Boolean UNIX_ListenerDestinationWSManagement::getSendBookmark() const
{
	return _sendBookmark;
}

void UNIX_ListenerDestinationWSManagement::setSendBookmark(Boolean &value)
{
	_sendBookmark = value;
}

Boolean UNIX_ListenerDestinationWSManagement::getMaxTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_TIME, getMaxTime());
	return true;
}

Uint64 UNIX_ListenerDestinationWSManagement::getMaxTime() const
{
	return _maxTime;
}

void UNIX_ListenerDestinationWSManagement::setMaxTime(Uint64 &value)
{
	_maxTime = value;
}

Boolean UNIX_ListenerDestinationWSManagement::getDeliveryAuth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELIVERY_AUTH, getDeliveryAuth());
	return true;
}

String UNIX_ListenerDestinationWSManagement::getDeliveryAuth() const
{
	return _deliveryAuth;
}

void UNIX_ListenerDestinationWSManagement::setDeliveryAuth(String &value)
{
	_deliveryAuth = value;
}

Boolean UNIX_ListenerDestinationWSManagement::getPolyMorphismMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLY_MORPHISM_MODE, getPolyMorphismMode());
	return true;
}

Uint16 UNIX_ListenerDestinationWSManagement::getPolyMorphismMode() const
{
	return _polyMorphismMode;
}

void UNIX_ListenerDestinationWSManagement::setPolyMorphismMode(Uint16 &value)
{
	_polyMorphismMode = value;
}


void UNIX_ListenerDestinationWSManagement::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("ListenerDestinationWSManagement");
	_generation = Uint64(0);
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_creationClassName = String("UNIX_ListenerDestinationWSManagement");
	_name = String ("");
	_persistenceType = Uint16(0);
	_otherPersistenceType = String ("");
	_destination = String ("");
	_otherProtocol = String ("");
	_protocol = Uint16(0);
	_destinationEndTo = String ("");
	_locale = String ("");
	_contentEncoding = String ("");
	_deliveryMode = Uint16(0);
	_heartbeat = Uint64(0);
	_sendBookmark = Boolean(false);
	_maxTime = Uint64(0);
	_deliveryAuth = String ("");
	_polyMorphismMode = Uint16(0);

}

Boolean UNIX_ListenerDestinationWSManagement::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "DestinationEndTo"))
			{
				String destinationEndToValue;
				property.getValue().get(destinationEndToValue);
				setDestinationEndTo(destinationEndToValue);
			}
			else if (String::equal(property.getName().getString(), "Locale"))
			{
				String localeValue;
				property.getValue().get(localeValue);
				setLocale(localeValue);
			}
			else if (String::equal(property.getName().getString(), "ContentEncoding"))
			{
				String contentEncodingValue;
				property.getValue().get(contentEncodingValue);
				setContentEncoding(contentEncodingValue);
			}
			else if (String::equal(property.getName().getString(), "DeliveryMode"))
			{
				Uint16 deliveryModeValue;
				property.getValue().get(deliveryModeValue);
				setDeliveryMode(deliveryModeValue);
			}
			else if (String::equal(property.getName().getString(), "Heartbeat"))
			{
				Uint64 heartbeatValue;
				property.getValue().get(heartbeatValue);
				setHeartbeat(heartbeatValue);
			}
			else if (String::equal(property.getName().getString(), "SendBookmark"))
			{
				Boolean sendBookmarkValue;
				property.getValue().get(sendBookmarkValue);
				setSendBookmark(sendBookmarkValue);
			}
			else if (String::equal(property.getName().getString(), "MaxTime"))
			{
				Uint64 maxTimeValue;
				property.getValue().get(maxTimeValue);
				setMaxTime(maxTimeValue);
			}
			else if (String::equal(property.getName().getString(), "DeliveryAuth"))
			{
				String deliveryAuthValue;
				property.getValue().get(deliveryAuthValue);
				setDeliveryAuth(deliveryAuthValue);
			}
			else if (String::equal(property.getName().getString(), "PolyMorphismMode"))
			{
				Uint16 polyMorphismModeValue;
				property.getValue().get(polyMorphismModeValue);
				setPolyMorphismMode(polyMorphismModeValue);
			}
	}
	return true;
}


Boolean UNIX_ListenerDestinationWSManagement::initialize()
{
	return false;
}

Boolean UNIX_ListenerDestinationWSManagement::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("ListenerDestinationWSManagement");
	_generation = Uint64(0);
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_creationClassName = String("UNIX_ListenerDestinationWSManagement");
	_name = String ("");
	_persistenceType = Uint16(0);
	_otherPersistenceType = String ("");
	_destination = String ("");
	_otherProtocol = String ("");
	_protocol = Uint16(0);
	_destinationEndTo = String ("");
	_locale = String ("");
	_contentEncoding = String ("");
	_deliveryMode = Uint16(0);
	_heartbeat = Uint64(0);
	_sendBookmark = Boolean(false);
	_maxTime = Uint64(0);
	_deliveryAuth = String ("");
	_polyMorphismMode = Uint16(0);
	
	return false;
}

Boolean UNIX_ListenerDestinationWSManagement::finalize()
{
	return false;
}

Boolean UNIX_ListenerDestinationWSManagement::loadByName(const String name)
{
	return false;
}

Boolean UNIX_ListenerDestinationWSManagement::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_ListenerDestinationWSManagement::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ListenerDestinationWSManagement::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ListenerDestinationWSManagement::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ListenerDestinationWSManagement::validateInstance()
{
	return true;
}

