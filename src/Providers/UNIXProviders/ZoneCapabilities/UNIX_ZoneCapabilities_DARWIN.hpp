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


UNIX_ZoneCapabilities::UNIX_ZoneCapabilities(void)
{
}

UNIX_ZoneCapabilities::~UNIX_ZoneCapabilities(void)
{
}

Boolean UNIX_ZoneCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_ZoneCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_ZoneCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_ZoneCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_ZoneCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_ZoneCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_ZoneCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_ZoneCapabilities::getDescription() const
{
	return _description;
}

void UNIX_ZoneCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_ZoneCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_ZoneCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_ZoneCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_ZoneCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_ZoneCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_ZoneCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_ZoneCapabilities::getZoneNameMaxLen(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ZONE_NAME_MAX_LEN, getZoneNameMaxLen());
	return true;
}

Uint32 UNIX_ZoneCapabilities::getZoneNameMaxLen() const
{
	return _zoneNameMaxLen;
}

void UNIX_ZoneCapabilities::setZoneNameMaxLen(Uint32 &value)
{
	_zoneNameMaxLen = value;
}

Boolean UNIX_ZoneCapabilities::getZoneNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ZONE_NAME_FORMAT, getZoneNameFormat());
	return true;
}

Uint16 UNIX_ZoneCapabilities::getZoneNameFormat() const
{
	return _zoneNameFormat;
}

void UNIX_ZoneCapabilities::setZoneNameFormat(Uint16 &value)
{
	_zoneNameFormat = value;
}

Boolean UNIX_ZoneCapabilities::getMaxNumZoneSets(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_NUM_ZONE_SETS, getMaxNumZoneSets());
	return true;
}

Uint32 UNIX_ZoneCapabilities::getMaxNumZoneSets() const
{
	return _maxNumZoneSets;
}

void UNIX_ZoneCapabilities::setMaxNumZoneSets(Uint32 &value)
{
	_maxNumZoneSets = value;
}

Boolean UNIX_ZoneCapabilities::getMaxNumZone(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_NUM_ZONE, getMaxNumZone());
	return true;
}

Uint32 UNIX_ZoneCapabilities::getMaxNumZone() const
{
	return _maxNumZone;
}

void UNIX_ZoneCapabilities::setMaxNumZone(Uint32 &value)
{
	_maxNumZone = value;
}

Boolean UNIX_ZoneCapabilities::getMaxNumZoneMembers(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_NUM_ZONE_MEMBERS, getMaxNumZoneMembers());
	return true;
}

Uint32 UNIX_ZoneCapabilities::getMaxNumZoneMembers() const
{
	return _maxNumZoneMembers;
}

void UNIX_ZoneCapabilities::setMaxNumZoneMembers(Uint32 &value)
{
	_maxNumZoneMembers = value;
}

Boolean UNIX_ZoneCapabilities::getMaxNumZonesPerZoneSet(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_NUM_ZONES_PER_ZONE_SET, getMaxNumZonesPerZoneSet());
	return true;
}

Uint32 UNIX_ZoneCapabilities::getMaxNumZonesPerZoneSet() const
{
	return _maxNumZonesPerZoneSet;
}

void UNIX_ZoneCapabilities::setMaxNumZonesPerZoneSet(Uint32 &value)
{
	_maxNumZonesPerZoneSet = value;
}

Boolean UNIX_ZoneCapabilities::getMaxNumZoneAliases(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_NUM_ZONE_ALIASES, getMaxNumZoneAliases());
	return true;
}

Uint32 UNIX_ZoneCapabilities::getMaxNumZoneAliases() const
{
	return _maxNumZoneAliases;
}

void UNIX_ZoneCapabilities::setMaxNumZoneAliases(Uint32 &value)
{
	_maxNumZoneAliases = value;
}

Boolean UNIX_ZoneCapabilities::getSupportedConnectivityMemberTypes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_CONNECTIVITY_MEMBER_TYPES, getSupportedConnectivityMemberTypes());
	return true;
}

Array<Uint16> UNIX_ZoneCapabilities::getSupportedConnectivityMemberTypes() const
{
	return _supportedConnectivityMemberTypes;
}

void UNIX_ZoneCapabilities::setSupportedConnectivityMemberTypes(Array<Uint16> &value)
{
	_supportedConnectivityMemberTypes = value;
}

Boolean UNIX_ZoneCapabilities::getOtherSupportedConnectivityMemberTypes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SUPPORTED_CONNECTIVITY_MEMBER_TYPES, getOtherSupportedConnectivityMemberTypes());
	return true;
}

Array<String> UNIX_ZoneCapabilities::getOtherSupportedConnectivityMemberTypes() const
{
	return _otherSupportedConnectivityMemberTypes;
}

void UNIX_ZoneCapabilities::setOtherSupportedConnectivityMemberTypes(Array<String> &value)
{
	_otherSupportedConnectivityMemberTypes = value;
}


void UNIX_ZoneCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("ZoneCapabilities");
	_generation = Uint64(0);
	_zoneNameMaxLen = Uint32(0);
	_zoneNameFormat = Uint16(0);
	_maxNumZoneSets = Uint32(0);
	_maxNumZone = Uint32(0);
	_maxNumZoneMembers = Uint32(0);
	_maxNumZonesPerZoneSet = Uint32(0);
	_maxNumZoneAliases = Uint32(0);
	_supportedConnectivityMemberTypes.clear();
	_otherSupportedConnectivityMemberTypes.clear();

}

Boolean UNIX_ZoneCapabilities::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "ZoneNameMaxLen"))
			{
				Uint32 zoneNameMaxLenValue;
				property.getValue().get(zoneNameMaxLenValue);
				setZoneNameMaxLen(zoneNameMaxLenValue);
			}
			else if (String::equal(property.getName().getString(), "ZoneNameFormat"))
			{
				Uint16 zoneNameFormatValue;
				property.getValue().get(zoneNameFormatValue);
				setZoneNameFormat(zoneNameFormatValue);
			}
			else if (String::equal(property.getName().getString(), "MaxNumZoneSets"))
			{
				Uint32 maxNumZoneSetsValue;
				property.getValue().get(maxNumZoneSetsValue);
				setMaxNumZoneSets(maxNumZoneSetsValue);
			}
			else if (String::equal(property.getName().getString(), "MaxNumZone"))
			{
				Uint32 maxNumZoneValue;
				property.getValue().get(maxNumZoneValue);
				setMaxNumZone(maxNumZoneValue);
			}
			else if (String::equal(property.getName().getString(), "MaxNumZoneMembers"))
			{
				Uint32 maxNumZoneMembersValue;
				property.getValue().get(maxNumZoneMembersValue);
				setMaxNumZoneMembers(maxNumZoneMembersValue);
			}
			else if (String::equal(property.getName().getString(), "MaxNumZonesPerZoneSet"))
			{
				Uint32 maxNumZonesPerZoneSetValue;
				property.getValue().get(maxNumZonesPerZoneSetValue);
				setMaxNumZonesPerZoneSet(maxNumZonesPerZoneSetValue);
			}
			else if (String::equal(property.getName().getString(), "MaxNumZoneAliases"))
			{
				Uint32 maxNumZoneAliasesValue;
				property.getValue().get(maxNumZoneAliasesValue);
				setMaxNumZoneAliases(maxNumZoneAliasesValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedConnectivityMemberTypes"))
			{
				Array<Uint16> supportedConnectivityMemberTypesValue;
				property.getValue().get(supportedConnectivityMemberTypesValue);
				setSupportedConnectivityMemberTypes(supportedConnectivityMemberTypesValue);
			}
			else if (String::equal(property.getName().getString(), "OtherSupportedConnectivityMemberTypes"))
			{
				Array<String> otherSupportedConnectivityMemberTypesValue;
				property.getValue().get(otherSupportedConnectivityMemberTypesValue);
				setOtherSupportedConnectivityMemberTypes(otherSupportedConnectivityMemberTypesValue);
			}
	}
	return true;
}

Uint16 UNIX_ZoneCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}


Boolean UNIX_ZoneCapabilities::initialize()
{
	return false;
}

Boolean UNIX_ZoneCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("ZoneCapabilities");
	_generation = Uint64(0);
	_zoneNameMaxLen = Uint32(0);
	_zoneNameFormat = Uint16(0);
	_maxNumZoneSets = Uint32(0);
	_maxNumZone = Uint32(0);
	_maxNumZoneMembers = Uint32(0);
	_maxNumZonesPerZoneSet = Uint32(0);
	_maxNumZoneAliases = Uint32(0);
	_supportedConnectivityMemberTypes.clear();
	_otherSupportedConnectivityMemberTypes.clear();
	
	return false;
}

Boolean UNIX_ZoneCapabilities::finalize()
{
	return false;
}


Boolean UNIX_ZoneCapabilities::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_ZoneCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ZoneCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ZoneCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ZoneCapabilities::validateInstance()
{
	return true;
}

