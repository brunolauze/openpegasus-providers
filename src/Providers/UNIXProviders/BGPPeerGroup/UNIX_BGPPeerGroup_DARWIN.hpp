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


UNIX_BGPPeerGroup::UNIX_BGPPeerGroup(void)
{
}

UNIX_BGPPeerGroup::~UNIX_BGPPeerGroup(void)
{
}

Boolean UNIX_BGPPeerGroup::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_BGPPeerGroup::getInstanceID() const
{
	return _instanceID;
}

void UNIX_BGPPeerGroup::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_BGPPeerGroup::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_BGPPeerGroup::getCaption() const
{
	return _caption;
}

void UNIX_BGPPeerGroup::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_BGPPeerGroup::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_BGPPeerGroup::getDescription() const
{
	return _description;
}

void UNIX_BGPPeerGroup::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_BGPPeerGroup::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_BGPPeerGroup::getElementName() const
{
	return _elementName;
}

void UNIX_BGPPeerGroup::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_BGPPeerGroup::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_BGPPeerGroup::getGeneration() const
{
	return _generation;
}

void UNIX_BGPPeerGroup::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_BGPPeerGroup::getCollectionID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COLLECTION_ID, getCollectionID());
	return true;
}

String UNIX_BGPPeerGroup::getCollectionID() const
{
	return _collectionID;
}

void UNIX_BGPPeerGroup::setCollectionID(String &value)
{
	_collectionID = value;
}

Boolean UNIX_BGPPeerGroup::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_BGPPeerGroup::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_BGPPeerGroup::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_BGPPeerGroup::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_BGPPeerGroup::getSystemName() const
{
	return _systemName;
}

void UNIX_BGPPeerGroup::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_BGPPeerGroup::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_BGPPeerGroup::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_BGPPeerGroup::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_BGPPeerGroup::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_BGPPeerGroup::getName() const
{
	return _name;
}

void UNIX_BGPPeerGroup::setName(String &value)
{
	_name = value;
}

Boolean UNIX_BGPPeerGroup::getConnectRetryInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONNECT_RETRY_INTERVAL, getConnectRetryInterval());
	return true;
}

Uint32 UNIX_BGPPeerGroup::getConnectRetryInterval() const
{
	return _connectRetryInterval;
}

void UNIX_BGPPeerGroup::setConnectRetryInterval(Uint32 &value)
{
	_connectRetryInterval = value;
}

Boolean UNIX_BGPPeerGroup::getHoldTimeConfigured(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HOLD_TIME_CONFIGURED, getHoldTimeConfigured());
	return true;
}

Uint16 UNIX_BGPPeerGroup::getHoldTimeConfigured() const
{
	return _holdTimeConfigured;
}

void UNIX_BGPPeerGroup::setHoldTimeConfigured(Uint16 &value)
{
	_holdTimeConfigured = value;
}

Boolean UNIX_BGPPeerGroup::getKeepAliveConfigured(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_KEEP_ALIVE_CONFIGURED, getKeepAliveConfigured());
	return true;
}

Uint16 UNIX_BGPPeerGroup::getKeepAliveConfigured() const
{
	return _keepAliveConfigured;
}

void UNIX_BGPPeerGroup::setKeepAliveConfigured(Uint16 &value)
{
	_keepAliveConfigured = value;
}

Boolean UNIX_BGPPeerGroup::getMinASOriginationInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIN_A_S_ORIGINATION_INTERVAL, getMinASOriginationInterval());
	return true;
}

Uint16 UNIX_BGPPeerGroup::getMinASOriginationInterval() const
{
	return _minASOriginationInterval;
}

void UNIX_BGPPeerGroup::setMinASOriginationInterval(Uint16 &value)
{
	_minASOriginationInterval = value;
}

Boolean UNIX_BGPPeerGroup::getMinRouteAdvertisementInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIN_ROUTE_ADVERTISEMENT_INTERVAL, getMinRouteAdvertisementInterval());
	return true;
}

Uint16 UNIX_BGPPeerGroup::getMinRouteAdvertisementInterval() const
{
	return _minRouteAdvertisementInterval;
}

void UNIX_BGPPeerGroup::setMinRouteAdvertisementInterval(Uint16 &value)
{
	_minRouteAdvertisementInterval = value;
}


void UNIX_BGPPeerGroup::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("BGPPeerGroup");
	_generation = Uint64(0);
	_collectionID = String ("");
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_creationClassName = String("UNIX_BGPPeerGroup");
	_name = String ("");
	_connectRetryInterval = Uint32(0);
	_holdTimeConfigured = Uint16(0);
	_keepAliveConfigured = Uint16(0);
	_minASOriginationInterval = Uint16(0);
	_minRouteAdvertisementInterval = Uint16(0);

}

Boolean UNIX_BGPPeerGroup::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "ConnectRetryInterval"))
			{
				Uint32 connectRetryIntervalValue;
				property.getValue().get(connectRetryIntervalValue);
				setConnectRetryInterval(connectRetryIntervalValue);
			}
			else if (String::equal(property.getName().getString(), "HoldTimeConfigured"))
			{
				Uint16 holdTimeConfiguredValue;
				property.getValue().get(holdTimeConfiguredValue);
				setHoldTimeConfigured(holdTimeConfiguredValue);
			}
			else if (String::equal(property.getName().getString(), "KeepAliveConfigured"))
			{
				Uint16 keepAliveConfiguredValue;
				property.getValue().get(keepAliveConfiguredValue);
				setKeepAliveConfigured(keepAliveConfiguredValue);
			}
			else if (String::equal(property.getName().getString(), "MinASOriginationInterval"))
			{
				Uint16 minASOriginationIntervalValue;
				property.getValue().get(minASOriginationIntervalValue);
				setMinASOriginationInterval(minASOriginationIntervalValue);
			}
			else if (String::equal(property.getName().getString(), "MinRouteAdvertisementInterval"))
			{
				Uint16 minRouteAdvertisementIntervalValue;
				property.getValue().get(minRouteAdvertisementIntervalValue);
				setMinRouteAdvertisementInterval(minRouteAdvertisementIntervalValue);
			}
	}
	return true;
}


Boolean UNIX_BGPPeerGroup::initialize()
{
	return false;
}

Boolean UNIX_BGPPeerGroup::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("BGPPeerGroup");
	_generation = Uint64(0);
	_collectionID = String ("");
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_creationClassName = String("UNIX_BGPPeerGroup");
	_name = String ("");
	_connectRetryInterval = Uint32(0);
	_holdTimeConfigured = Uint16(0);
	_keepAliveConfigured = Uint16(0);
	_minASOriginationInterval = Uint16(0);
	_minRouteAdvertisementInterval = Uint16(0);
	
	return false;
}

Boolean UNIX_BGPPeerGroup::finalize()
{
	return false;
}

Boolean UNIX_BGPPeerGroup::loadByName(const String name)
{
	return false;
}

Boolean UNIX_BGPPeerGroup::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_BGPPeerGroup::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BGPPeerGroup::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BGPPeerGroup::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BGPPeerGroup::validateInstance()
{
	return true;
}

