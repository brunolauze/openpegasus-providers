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


UNIX_AccessControlServiceSettingData::UNIX_AccessControlServiceSettingData(void)
{
}

UNIX_AccessControlServiceSettingData::~UNIX_AccessControlServiceSettingData(void)
{
}

Boolean UNIX_AccessControlServiceSettingData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_AccessControlServiceSettingData::getInstanceID() const
{
	return _instanceID;
}

void UNIX_AccessControlServiceSettingData::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_AccessControlServiceSettingData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_AccessControlServiceSettingData::getCaption() const
{
	return _caption;
}

void UNIX_AccessControlServiceSettingData::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_AccessControlServiceSettingData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_AccessControlServiceSettingData::getDescription() const
{
	return _description;
}

void UNIX_AccessControlServiceSettingData::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_AccessControlServiceSettingData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_AccessControlServiceSettingData::getElementName() const
{
	return _elementName;
}

void UNIX_AccessControlServiceSettingData::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_AccessControlServiceSettingData::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_AccessControlServiceSettingData::getGeneration() const
{
	return _generation;
}

void UNIX_AccessControlServiceSettingData::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_AccessControlServiceSettingData::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_AccessControlServiceSettingData::getConfigurationName() const
{
	return _configurationName;
}

void UNIX_AccessControlServiceSettingData::setConfigurationName(String &value)
{
	_configurationName = value;
}

Boolean UNIX_AccessControlServiceSettingData::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_AccessControlServiceSettingData::getChangeableType() const
{
	return _changeableType;
}

void UNIX_AccessControlServiceSettingData::setChangeableType(Uint16 &value)
{
	_changeableType = value;
}

Boolean UNIX_AccessControlServiceSettingData::getComponentSetting(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPONENT_SETTING, getComponentSetting());
	return true;
}

Array<String> UNIX_AccessControlServiceSettingData::getComponentSetting() const
{
	return _componentSetting;
}

void UNIX_AccessControlServiceSettingData::setComponentSetting(Array<String> &value)
{
	_componentSetting = value;
}

Boolean UNIX_AccessControlServiceSettingData::getSoID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ID, getSoID());
	return true;
}

String UNIX_AccessControlServiceSettingData::getSoID() const
{
	return _soID;
}

void UNIX_AccessControlServiceSettingData::setSoID(String &value)
{
	_soID = value;
}

Boolean UNIX_AccessControlServiceSettingData::getSoOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ORG_ID, getSoOrgID());
	return true;
}

String UNIX_AccessControlServiceSettingData::getSoOrgID() const
{
	return _soOrgID;
}

void UNIX_AccessControlServiceSettingData::setSoOrgID(String &value)
{
	_soOrgID = value;
}

Boolean UNIX_AccessControlServiceSettingData::getPrincipalType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRINCIPAL_TYPE, getPrincipalType());
	return true;
}

Uint16 UNIX_AccessControlServiceSettingData::getPrincipalType() const
{
	return _principalType;
}

void UNIX_AccessControlServiceSettingData::setPrincipalType(Uint16 &value)
{
	_principalType = value;
}

Boolean UNIX_AccessControlServiceSettingData::getOtherResourceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_RESOURCE_TYPE, getOtherResourceType());
	return true;
}

String UNIX_AccessControlServiceSettingData::getOtherResourceType() const
{
	return _otherResourceType;
}

void UNIX_AccessControlServiceSettingData::setOtherResourceType(String &value)
{
	_otherResourceType = value;
}

Boolean UNIX_AccessControlServiceSettingData::getResourceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESOURCE_TYPE, getResourceType());
	return true;
}

Array<Uint16> UNIX_AccessControlServiceSettingData::getResourceType() const
{
	return _resourceType;
}

void UNIX_AccessControlServiceSettingData::setResourceType(Array<Uint16> &value)
{
	_resourceType = value;
}


void UNIX_AccessControlServiceSettingData::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("AccessControlServiceSettingData");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_principalType = Uint16(0);
	_otherResourceType = String ("");
	_resourceType.clear();

}

Boolean UNIX_AccessControlServiceSettingData::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "ConfigurationName"))
			{
				String configurationNameValue;
				property.getValue().get(configurationNameValue);
				setConfigurationName(configurationNameValue);
			}
			else if (String::equal(property.getName().getString(), "ChangeableType"))
			{
				Uint16 changeableTypeValue;
				property.getValue().get(changeableTypeValue);
				setChangeableType(changeableTypeValue);
			}
			else if (String::equal(property.getName().getString(), "ComponentSetting"))
			{
				Array<String> componentSettingValue;
				property.getValue().get(componentSettingValue);
				setComponentSetting(componentSettingValue);
			}
			else if (String::equal(property.getName().getString(), "SoID"))
			{
				String soIDValue;
				property.getValue().get(soIDValue);
				setSoID(soIDValue);
			}
			else if (String::equal(property.getName().getString(), "SoOrgID"))
			{
				String soOrgIDValue;
				property.getValue().get(soOrgIDValue);
				setSoOrgID(soOrgIDValue);
			}
			else if (String::equal(property.getName().getString(), "PrincipalType"))
			{
				Uint16 principalTypeValue;
				property.getValue().get(principalTypeValue);
				setPrincipalType(principalTypeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherResourceType"))
			{
				String otherResourceTypeValue;
				property.getValue().get(otherResourceTypeValue);
				setOtherResourceType(otherResourceTypeValue);
			}
			else if (String::equal(property.getName().getString(), "ResourceType"))
			{
				Array<Uint16> resourceTypeValue;
				property.getValue().get(resourceTypeValue);
				setResourceType(resourceTypeValue);
			}
	}
	return true;
}


Boolean UNIX_AccessControlServiceSettingData::initialize()
{
	return false;
}

Boolean UNIX_AccessControlServiceSettingData::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("AccessControlServiceSettingData");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_principalType = Uint16(0);
	_otherResourceType = String ("");
	_resourceType.clear();
	
	return false;
}

Boolean UNIX_AccessControlServiceSettingData::finalize()
{
	return false;
}


Boolean UNIX_AccessControlServiceSettingData::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_AccessControlServiceSettingData::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AccessControlServiceSettingData::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AccessControlServiceSettingData::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AccessControlServiceSettingData::validateInstance()
{
	return true;
}

