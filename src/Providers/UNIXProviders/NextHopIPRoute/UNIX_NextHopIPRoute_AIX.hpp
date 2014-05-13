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


UNIX_NextHopIPRoute::UNIX_NextHopIPRoute(void)
{
}

UNIX_NextHopIPRoute::~UNIX_NextHopIPRoute(void)
{
}

Boolean UNIX_NextHopIPRoute::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_NextHopIPRoute::getInstanceID() const
{
	return _instanceID;
}

void UNIX_NextHopIPRoute::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_NextHopIPRoute::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_NextHopIPRoute::getCaption() const
{
	return _caption;
}

void UNIX_NextHopIPRoute::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_NextHopIPRoute::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_NextHopIPRoute::getDescription() const
{
	return _description;
}

void UNIX_NextHopIPRoute::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_NextHopIPRoute::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_NextHopIPRoute::getElementName() const
{
	return _elementName;
}

void UNIX_NextHopIPRoute::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_NextHopIPRoute::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_NextHopIPRoute::getGeneration() const
{
	return _generation;
}

void UNIX_NextHopIPRoute::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_NextHopIPRoute::getDestinationAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESTINATION_ADDRESS, getDestinationAddress());
	return true;
}

String UNIX_NextHopIPRoute::getDestinationAddress() const
{
	return _destinationAddress;
}

void UNIX_NextHopIPRoute::setDestinationAddress(String &value)
{
	_destinationAddress = value;
}

Boolean UNIX_NextHopIPRoute::getAdminDistance(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADMIN_DISTANCE, getAdminDistance());
	return true;
}

Uint16 UNIX_NextHopIPRoute::getAdminDistance() const
{
	return _adminDistance;
}

void UNIX_NextHopIPRoute::setAdminDistance(Uint16 &value)
{
	_adminDistance = value;
}

Boolean UNIX_NextHopIPRoute::getRouteMetric(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ROUTE_METRIC, getRouteMetric());
	return true;
}

Uint16 UNIX_NextHopIPRoute::getRouteMetric() const
{
	return _routeMetric;
}

void UNIX_NextHopIPRoute::setRouteMetric(Uint16 &value)
{
	_routeMetric = value;
}

Boolean UNIX_NextHopIPRoute::getIsStatic(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_STATIC, getIsStatic());
	return true;
}

Boolean UNIX_NextHopIPRoute::getIsStatic() const
{
	return _isStatic;
}

void UNIX_NextHopIPRoute::setIsStatic(Boolean &value)
{
	_isStatic = value;
}

Boolean UNIX_NextHopIPRoute::getTypeOfRoute(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TYPE_OF_ROUTE, getTypeOfRoute());
	return true;
}

Uint16 UNIX_NextHopIPRoute::getTypeOfRoute() const
{
	return _typeOfRoute;
}

void UNIX_NextHopIPRoute::setTypeOfRoute(Uint16 &value)
{
	_typeOfRoute = value;
}

Boolean UNIX_NextHopIPRoute::getNextHopAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NEXT_HOP_ADDRESS, getNextHopAddress());
	return true;
}

String UNIX_NextHopIPRoute::getNextHopAddress() const
{
	return _nextHopAddress;
}

void UNIX_NextHopIPRoute::setNextHopAddress(String &value)
{
	_nextHopAddress = value;
}

Boolean UNIX_NextHopIPRoute::getNextHopInterface(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NEXT_HOP_INTERFACE, getNextHopInterface());
	return true;
}

String UNIX_NextHopIPRoute::getNextHopInterface() const
{
	return _nextHopInterface;
}

void UNIX_NextHopIPRoute::setNextHopInterface(String &value)
{
	_nextHopInterface = value;
}

Boolean UNIX_NextHopIPRoute::getRouteDerivation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ROUTE_DERIVATION, getRouteDerivation());
	return true;
}

Uint16 UNIX_NextHopIPRoute::getRouteDerivation() const
{
	return _routeDerivation;
}

void UNIX_NextHopIPRoute::setRouteDerivation(Uint16 &value)
{
	_routeDerivation = value;
}

Boolean UNIX_NextHopIPRoute::getOtherDerivation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_DERIVATION, getOtherDerivation());
	return true;
}

String UNIX_NextHopIPRoute::getOtherDerivation() const
{
	return _otherDerivation;
}

void UNIX_NextHopIPRoute::setOtherDerivation(String &value)
{
	_otherDerivation = value;
}

Boolean UNIX_NextHopIPRoute::getDestinationMask(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESTINATION_MASK, getDestinationMask());
	return true;
}

String UNIX_NextHopIPRoute::getDestinationMask() const
{
	return _destinationMask;
}

void UNIX_NextHopIPRoute::setDestinationMask(String &value)
{
	_destinationMask = value;
}

Boolean UNIX_NextHopIPRoute::getPrefixLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PREFIX_LENGTH, getPrefixLength());
	return true;
}

Uint8 UNIX_NextHopIPRoute::getPrefixLength() const
{
	return _prefixLength;
}

void UNIX_NextHopIPRoute::setPrefixLength(Uint8 &value)
{
	_prefixLength = value;
}

Boolean UNIX_NextHopIPRoute::getAddressType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESS_TYPE, getAddressType());
	return true;
}

Uint16 UNIX_NextHopIPRoute::getAddressType() const
{
	return _addressType;
}

void UNIX_NextHopIPRoute::setAddressType(Uint16 &value)
{
	_addressType = value;
}

Boolean UNIX_NextHopIPRoute::getNextHopMask(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NEXT_HOP_MASK, getNextHopMask());
	return true;
}

String UNIX_NextHopIPRoute::getNextHopMask() const
{
	return _nextHopMask;
}

void UNIX_NextHopIPRoute::setNextHopMask(String &value)
{
	_nextHopMask = value;
}

Boolean UNIX_NextHopIPRoute::getNextHopAddressType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NEXT_HOP_ADDRESS_TYPE, getNextHopAddressType());
	return true;
}

Uint16 UNIX_NextHopIPRoute::getNextHopAddressType() const
{
	return _nextHopAddressType;
}

void UNIX_NextHopIPRoute::setNextHopAddressType(Uint16 &value)
{
	_nextHopAddressType = value;
}


void UNIX_NextHopIPRoute::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("NextHopIPRoute");
	_generation = Uint64(0);
	_destinationAddress = String ("");
	_adminDistance = Uint16(0);
	_routeMetric = Uint16(0);
	_isStatic = Boolean(false);
	_typeOfRoute = Uint16(0);
	_nextHopAddress = String ("");
	_nextHopInterface = String ("");
	_routeDerivation = Uint16(0);
	_otherDerivation = String ("");
	_destinationMask = String ("");
	_prefixLength = Uint8(0);
	_addressType = Uint16(0);
	_nextHopMask = String ("");
	_nextHopAddressType = Uint16(0);

}

Boolean UNIX_NextHopIPRoute::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "RouteDerivation"))
			{
				Uint16 routeDerivationValue;
				property.getValue().get(routeDerivationValue);
				setRouteDerivation(routeDerivationValue);
			}
			else if (String::equal(property.getName().getString(), "OtherDerivation"))
			{
				String otherDerivationValue;
				property.getValue().get(otherDerivationValue);
				setOtherDerivation(otherDerivationValue);
			}
			else if (String::equal(property.getName().getString(), "DestinationMask"))
			{
				String destinationMaskValue;
				property.getValue().get(destinationMaskValue);
				setDestinationMask(destinationMaskValue);
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
			else if (String::equal(property.getName().getString(), "NextHopMask"))
			{
				String nextHopMaskValue;
				property.getValue().get(nextHopMaskValue);
				setNextHopMask(nextHopMaskValue);
			}
			else if (String::equal(property.getName().getString(), "NextHopAddressType"))
			{
				Uint16 nextHopAddressTypeValue;
				property.getValue().get(nextHopAddressTypeValue);
				setNextHopAddressType(nextHopAddressTypeValue);
			}
	}
	return true;
}


Boolean UNIX_NextHopIPRoute::initialize()
{
	return false;
}

Boolean UNIX_NextHopIPRoute::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("NextHopIPRoute");
	_generation = Uint64(0);
	_destinationAddress = String ("");
	_adminDistance = Uint16(0);
	_routeMetric = Uint16(0);
	_isStatic = Boolean(false);
	_typeOfRoute = Uint16(0);
	_nextHopAddress = String ("");
	_nextHopInterface = String ("");
	_routeDerivation = Uint16(0);
	_otherDerivation = String ("");
	_destinationMask = String ("");
	_prefixLength = Uint8(0);
	_addressType = Uint16(0);
	_nextHopMask = String ("");
	_nextHopAddressType = Uint16(0);
	
	return false;
}

Boolean UNIX_NextHopIPRoute::finalize()
{
	return false;
}


Boolean UNIX_NextHopIPRoute::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_NextHopIPRoute::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_NextHopIPRoute::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_NextHopIPRoute::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_NextHopIPRoute::validateInstance()
{
	return true;
}

