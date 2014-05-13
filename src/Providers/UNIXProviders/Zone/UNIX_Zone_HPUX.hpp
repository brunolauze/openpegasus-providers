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


UNIX_Zone::UNIX_Zone(void)
{
}

UNIX_Zone::~UNIX_Zone(void)
{
}

Boolean UNIX_Zone::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_Zone::getInstanceID() const
{
	return _instanceID;
}

void UNIX_Zone::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_Zone::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_Zone::getCaption() const
{
	return _caption;
}

void UNIX_Zone::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_Zone::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_Zone::getDescription() const
{
	return _description;
}

void UNIX_Zone::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_Zone::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_Zone::getElementName() const
{
	return _elementName;
}

void UNIX_Zone::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_Zone::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_Zone::getGeneration() const
{
	return _generation;
}

void UNIX_Zone::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_Zone::getConnectivityStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONNECTIVITY_STATUS, getConnectivityStatus());
	return true;
}

Uint16 UNIX_Zone::getConnectivityStatus() const
{
	return _connectivityStatus;
}

void UNIX_Zone::setConnectivityStatus(Uint16 &value)
{
	_connectivityStatus = value;
}

Boolean UNIX_Zone::getActive(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACTIVE, getActive());
	return true;
}

Boolean UNIX_Zone::getActive() const
{
	return _active;
}

void UNIX_Zone::setActive(Boolean &value)
{
	_active = value;
}

Boolean UNIX_Zone::getZoneType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ZONE_TYPE, getZoneType());
	return true;
}

Uint16 UNIX_Zone::getZoneType() const
{
	return _zoneType;
}

void UNIX_Zone::setZoneType(Uint16 &value)
{
	_zoneType = value;
}

Boolean UNIX_Zone::getOtherZoneTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ZONE_TYPE_DESCRIPTION, getOtherZoneTypeDescription());
	return true;
}

String UNIX_Zone::getOtherZoneTypeDescription() const
{
	return _otherZoneTypeDescription;
}

void UNIX_Zone::setOtherZoneTypeDescription(String &value)
{
	_otherZoneTypeDescription = value;
}

Boolean UNIX_Zone::getZoneSubType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ZONE_SUB_TYPE, getZoneSubType());
	return true;
}

Uint16 UNIX_Zone::getZoneSubType() const
{
	return _zoneSubType;
}

void UNIX_Zone::setZoneSubType(Uint16 &value)
{
	_zoneSubType = value;
}

Boolean UNIX_Zone::getOtherZoneSubTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ZONE_SUB_TYPE_DESCRIPTION, getOtherZoneSubTypeDescription());
	return true;
}

String UNIX_Zone::getOtherZoneSubTypeDescription() const
{
	return _otherZoneSubTypeDescription;
}

void UNIX_Zone::setOtherZoneSubTypeDescription(String &value)
{
	_otherZoneSubTypeDescription = value;
}


void UNIX_Zone::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("Zone");
	_generation = Uint64(0);
	_connectivityStatus = Uint16(0);
	_active = Boolean(false);
	_zoneType = Uint16(0);
	_otherZoneTypeDescription = String ("");
	_zoneSubType = Uint16(0);
	_otherZoneSubTypeDescription = String ("");

}

Boolean UNIX_Zone::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "Active"))
			{
				Boolean activeValue;
				property.getValue().get(activeValue);
				setActive(activeValue);
			}
			else if (String::equal(property.getName().getString(), "ZoneType"))
			{
				Uint16 zoneTypeValue;
				property.getValue().get(zoneTypeValue);
				setZoneType(zoneTypeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherZoneTypeDescription"))
			{
				String otherZoneTypeDescriptionValue;
				property.getValue().get(otherZoneTypeDescriptionValue);
				setOtherZoneTypeDescription(otherZoneTypeDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "ZoneSubType"))
			{
				Uint16 zoneSubTypeValue;
				property.getValue().get(zoneSubTypeValue);
				setZoneSubType(zoneSubTypeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherZoneSubTypeDescription"))
			{
				String otherZoneSubTypeDescriptionValue;
				property.getValue().get(otherZoneSubTypeDescriptionValue);
				setOtherZoneSubTypeDescription(otherZoneSubTypeDescriptionValue);
			}
	}
	return true;
}


Boolean UNIX_Zone::initialize()
{
	return false;
}

Boolean UNIX_Zone::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("Zone");
	_generation = Uint64(0);
	_connectivityStatus = Uint16(0);
	_active = Boolean(false);
	_zoneType = Uint16(0);
	_otherZoneTypeDescription = String ("");
	_zoneSubType = Uint16(0);
	_otherZoneSubTypeDescription = String ("");
	
	return false;
}

Boolean UNIX_Zone::finalize()
{
	return false;
}


Boolean UNIX_Zone::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_Zone::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Zone::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Zone::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Zone::validateInstance()
{
	return true;
}

