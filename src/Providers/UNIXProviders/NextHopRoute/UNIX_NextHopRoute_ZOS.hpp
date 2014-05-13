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


UNIX_NextHopRoute::UNIX_NextHopRoute(void)
{
}

UNIX_NextHopRoute::~UNIX_NextHopRoute(void)
{
}

Boolean UNIX_NextHopRoute::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_NextHopRoute::getInstanceID() const
{
	return _instanceID;
}

void UNIX_NextHopRoute::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_NextHopRoute::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_NextHopRoute::getCaption() const
{
	return _caption;
}

void UNIX_NextHopRoute::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_NextHopRoute::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_NextHopRoute::getDescription() const
{
	return _description;
}

void UNIX_NextHopRoute::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_NextHopRoute::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_NextHopRoute::getElementName() const
{
	return _elementName;
}

void UNIX_NextHopRoute::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_NextHopRoute::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_NextHopRoute::getGeneration() const
{
	return _generation;
}

void UNIX_NextHopRoute::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_NextHopRoute::getDestinationAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESTINATION_ADDRESS, getDestinationAddress());
	return true;
}

String UNIX_NextHopRoute::getDestinationAddress() const
{
	return _destinationAddress;
}

void UNIX_NextHopRoute::setDestinationAddress(String &value)
{
	_destinationAddress = value;
}

Boolean UNIX_NextHopRoute::getAdminDistance(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADMIN_DISTANCE, getAdminDistance());
	return true;
}

Uint16 UNIX_NextHopRoute::getAdminDistance() const
{
	return _adminDistance;
}

void UNIX_NextHopRoute::setAdminDistance(Uint16 &value)
{
	_adminDistance = value;
}

Boolean UNIX_NextHopRoute::getRouteMetric(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ROUTE_METRIC, getRouteMetric());
	return true;
}

Uint16 UNIX_NextHopRoute::getRouteMetric() const
{
	return _routeMetric;
}

void UNIX_NextHopRoute::setRouteMetric(Uint16 &value)
{
	_routeMetric = value;
}

Boolean UNIX_NextHopRoute::getIsStatic(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_STATIC, getIsStatic());
	return true;
}

Boolean UNIX_NextHopRoute::getIsStatic() const
{
	return _isStatic;
}

void UNIX_NextHopRoute::setIsStatic(Boolean &value)
{
	_isStatic = value;
}

Boolean UNIX_NextHopRoute::getTypeOfRoute(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TYPE_OF_ROUTE, getTypeOfRoute());
	return true;
}

Uint16 UNIX_NextHopRoute::getTypeOfRoute() const
{
	return _typeOfRoute;
}

void UNIX_NextHopRoute::setTypeOfRoute(Uint16 &value)
{
	_typeOfRoute = value;
}

Boolean UNIX_NextHopRoute::getNextHopAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NEXT_HOP_ADDRESS, getNextHopAddress());
	return true;
}

String UNIX_NextHopRoute::getNextHopAddress() const
{
	return _nextHopAddress;
}

void UNIX_NextHopRoute::setNextHopAddress(String &value)
{
	_nextHopAddress = value;
}

Boolean UNIX_NextHopRoute::getNextHopInterface(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NEXT_HOP_INTERFACE, getNextHopInterface());
	return true;
}

String UNIX_NextHopRoute::getNextHopInterface() const
{
	return _nextHopInterface;
}

void UNIX_NextHopRoute::setNextHopInterface(String &value)
{
	_nextHopInterface = value;
}


void UNIX_NextHopRoute::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("NextHopRoute");
	_generation = Uint64(0);
	_destinationAddress = String ("");
	_adminDistance = Uint16(0);
	_routeMetric = Uint16(0);
	_isStatic = Boolean(false);
	_typeOfRoute = Uint16(0);
	_nextHopAddress = String ("");
	_nextHopInterface = String ("");

}

Boolean UNIX_NextHopRoute::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "DestinationAddress"))
			{
				String destinationAddressValue;
				property.getValue().get(destinationAddressValue);
				setDestinationAddress(destinationAddressValue);
			}
			else if (String::equal(property.getName().getString(), "AdminDistance"))
			{
				Uint16 adminDistanceValue;
				property.getValue().get(adminDistanceValue);
				setAdminDistance(adminDistanceValue);
			}
			else if (String::equal(property.getName().getString(), "RouteMetric"))
			{
				Uint16 routeMetricValue;
				property.getValue().get(routeMetricValue);
				setRouteMetric(routeMetricValue);
			}
			else if (String::equal(property.getName().getString(), "IsStatic"))
			{
				Boolean isStaticValue;
				property.getValue().get(isStaticValue);
				setIsStatic(isStaticValue);
			}
			else if (String::equal(property.getName().getString(), "TypeOfRoute"))
			{
				Uint16 typeOfRouteValue;
				property.getValue().get(typeOfRouteValue);
				setTypeOfRoute(typeOfRouteValue);
			}
			else if (String::equal(property.getName().getString(), "NextHopAddress"))
			{
				String nextHopAddressValue;
				property.getValue().get(nextHopAddressValue);
				setNextHopAddress(nextHopAddressValue);
			}
			else if (String::equal(property.getName().getString(), "NextHopInterface"))
			{
				String nextHopInterfaceValue;
				property.getValue().get(nextHopInterfaceValue);
				setNextHopInterface(nextHopInterfaceValue);
			}
	}
	return true;
}


Boolean UNIX_NextHopRoute::initialize()
{
	return false;
}

Boolean UNIX_NextHopRoute::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("NextHopRoute");
	_generation = Uint64(0);
	_destinationAddress = String ("");
	_adminDistance = Uint16(0);
	_routeMetric = Uint16(0);
	_isStatic = Boolean(false);
	_typeOfRoute = Uint16(0);
	_nextHopAddress = String ("");
	_nextHopInterface = String ("");
	
	return false;
}

Boolean UNIX_NextHopRoute::finalize()
{
	return false;
}


Boolean UNIX_NextHopRoute::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_NextHopRoute::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_NextHopRoute::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_NextHopRoute::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_NextHopRoute::validateInstance()
{
	return true;
}

