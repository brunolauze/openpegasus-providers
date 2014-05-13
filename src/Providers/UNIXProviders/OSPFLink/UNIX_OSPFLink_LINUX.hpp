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


UNIX_OSPFLink::UNIX_OSPFLink(void)
{
}

UNIX_OSPFLink::~UNIX_OSPFLink(void)
{
}

Boolean UNIX_OSPFLink::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_OSPFLink::getInstanceID() const
{
	return _instanceID;
}

void UNIX_OSPFLink::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_OSPFLink::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_OSPFLink::getCaption() const
{
	return _caption;
}

void UNIX_OSPFLink::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_OSPFLink::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_OSPFLink::getDescription() const
{
	return _description;
}

void UNIX_OSPFLink::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_OSPFLink::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_OSPFLink::getElementName() const
{
	return _elementName;
}

void UNIX_OSPFLink::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_OSPFLink::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_OSPFLink::getGeneration() const
{
	return _generation;
}

void UNIX_OSPFLink::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_OSPFLink::getConnectivityStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONNECTIVITY_STATUS, getConnectivityStatus());
	return true;
}

Uint16 UNIX_OSPFLink::getConnectivityStatus() const
{
	return _connectivityStatus;
}

void UNIX_OSPFLink::setConnectivityStatus(Uint16 &value)
{
	_connectivityStatus = value;
}

Boolean UNIX_OSPFLink::getLinkType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LINK_TYPE, getLinkType());
	return true;
}

Uint16 UNIX_OSPFLink::getLinkType() const
{
	return _linkType;
}

void UNIX_OSPFLink::setLinkType(Uint16 &value)
{
	_linkType = value;
}

Boolean UNIX_OSPFLink::getHelloInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HELLO_INTERVAL, getHelloInterval());
	return true;
}

Uint32 UNIX_OSPFLink::getHelloInterval() const
{
	return _helloInterval;
}

void UNIX_OSPFLink::setHelloInterval(Uint32 &value)
{
	_helloInterval = value;
}

Boolean UNIX_OSPFLink::getRouterDeadInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ROUTER_DEAD_INTERVAL, getRouterDeadInterval());
	return true;
}

Uint32 UNIX_OSPFLink::getRouterDeadInterval() const
{
	return _routerDeadInterval;
}

void UNIX_OSPFLink::setRouterDeadInterval(Uint32 &value)
{
	_routerDeadInterval = value;
}

Boolean UNIX_OSPFLink::getMulticastForwarding(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MULTICAST_FORWARDING, getMulticastForwarding());
	return true;
}

Uint16 UNIX_OSPFLink::getMulticastForwarding() const
{
	return _multicastForwarding;
}

void UNIX_OSPFLink::setMulticastForwarding(Uint16 &value)
{
	_multicastForwarding = value;
}


void UNIX_OSPFLink::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("OSPFLink");
	_generation = Uint64(0);
	_connectivityStatus = Uint16(0);
	_linkType = Uint16(0);
	_helloInterval = Uint32(0);
	_routerDeadInterval = Uint32(0);
	_multicastForwarding = Uint16(0);

}

Boolean UNIX_OSPFLink::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "LinkType"))
			{
				Uint16 linkTypeValue;
				property.getValue().get(linkTypeValue);
				setLinkType(linkTypeValue);
			}
			else if (String::equal(property.getName().getString(), "HelloInterval"))
			{
				Uint32 helloIntervalValue;
				property.getValue().get(helloIntervalValue);
				setHelloInterval(helloIntervalValue);
			}
			else if (String::equal(property.getName().getString(), "RouterDeadInterval"))
			{
				Uint32 routerDeadIntervalValue;
				property.getValue().get(routerDeadIntervalValue);
				setRouterDeadInterval(routerDeadIntervalValue);
			}
			else if (String::equal(property.getName().getString(), "MulticastForwarding"))
			{
				Uint16 multicastForwardingValue;
				property.getValue().get(multicastForwardingValue);
				setMulticastForwarding(multicastForwardingValue);
			}
	}
	return true;
}


Boolean UNIX_OSPFLink::initialize()
{
	return false;
}

Boolean UNIX_OSPFLink::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("OSPFLink");
	_generation = Uint64(0);
	_connectivityStatus = Uint16(0);
	_linkType = Uint16(0);
	_helloInterval = Uint32(0);
	_routerDeadInterval = Uint32(0);
	_multicastForwarding = Uint16(0);
	
	return false;
}

Boolean UNIX_OSPFLink::finalize()
{
	return false;
}


Boolean UNIX_OSPFLink::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_OSPFLink::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_OSPFLink::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_OSPFLink::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_OSPFLink::validateInstance()
{
	return true;
}

