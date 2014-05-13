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


UNIX_FirewallRuleSettingData::UNIX_FirewallRuleSettingData(void)
{
}

UNIX_FirewallRuleSettingData::~UNIX_FirewallRuleSettingData(void)
{
}

Boolean UNIX_FirewallRuleSettingData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_FirewallRuleSettingData::getInstanceID() const
{
	return _instanceID;
}

void UNIX_FirewallRuleSettingData::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_FirewallRuleSettingData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_FirewallRuleSettingData::getCaption() const
{
	return _caption;
}

void UNIX_FirewallRuleSettingData::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_FirewallRuleSettingData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_FirewallRuleSettingData::getDescription() const
{
	return _description;
}

void UNIX_FirewallRuleSettingData::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_FirewallRuleSettingData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_FirewallRuleSettingData::getElementName() const
{
	return _elementName;
}

void UNIX_FirewallRuleSettingData::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_FirewallRuleSettingData::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_FirewallRuleSettingData::getGeneration() const
{
	return _generation;
}

void UNIX_FirewallRuleSettingData::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_FirewallRuleSettingData::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_FirewallRuleSettingData::getConfigurationName() const
{
	return _configurationName;
}

void UNIX_FirewallRuleSettingData::setConfigurationName(String &value)
{
	_configurationName = value;
}

Boolean UNIX_FirewallRuleSettingData::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_FirewallRuleSettingData::getChangeableType() const
{
	return _changeableType;
}

void UNIX_FirewallRuleSettingData::setChangeableType(Uint16 &value)
{
	_changeableType = value;
}

Boolean UNIX_FirewallRuleSettingData::getComponentSetting(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPONENT_SETTING, getComponentSetting());
	return true;
}

Array<String> UNIX_FirewallRuleSettingData::getComponentSetting() const
{
	return _componentSetting;
}

void UNIX_FirewallRuleSettingData::setComponentSetting(Array<String> &value)
{
	_componentSetting = value;
}

Boolean UNIX_FirewallRuleSettingData::getSoID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ID, getSoID());
	return true;
}

String UNIX_FirewallRuleSettingData::getSoID() const
{
	return _soID;
}

void UNIX_FirewallRuleSettingData::setSoID(String &value)
{
	_soID = value;
}

Boolean UNIX_FirewallRuleSettingData::getSoOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ORG_ID, getSoOrgID());
	return true;
}

String UNIX_FirewallRuleSettingData::getSoOrgID() const
{
	return _soOrgID;
}

void UNIX_FirewallRuleSettingData::setSoOrgID(String &value)
{
	_soOrgID = value;
}

Boolean UNIX_FirewallRuleSettingData::getFromGroupMembers(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FROM_GROUP_MEMBERS, getFromGroupMembers());
	return true;
}

Array<String> UNIX_FirewallRuleSettingData::getFromGroupMembers() const
{
	return _fromGroupMembers;
}

void UNIX_FirewallRuleSettingData::setFromGroupMembers(Array<String> &value)
{
	_fromGroupMembers = value;
}

Boolean UNIX_FirewallRuleSettingData::getToGroupMembers(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TO_GROUP_MEMBERS, getToGroupMembers());
	return true;
}

Array<String> UNIX_FirewallRuleSettingData::getToGroupMembers() const
{
	return _toGroupMembers;
}

void UNIX_FirewallRuleSettingData::setToGroupMembers(Array<String> &value)
{
	_toGroupMembers = value;
}

Boolean UNIX_FirewallRuleSettingData::getFromGroupMemberType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FROM_GROUP_MEMBER_TYPE, getFromGroupMemberType());
	return true;
}

Array<Uint16> UNIX_FirewallRuleSettingData::getFromGroupMemberType() const
{
	return _fromGroupMemberType;
}

void UNIX_FirewallRuleSettingData::setFromGroupMemberType(Array<Uint16> &value)
{
	_fromGroupMemberType = value;
}

Boolean UNIX_FirewallRuleSettingData::getToGroupMemberType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TO_GROUP_MEMBER_TYPE, getToGroupMemberType());
	return true;
}

Array<Uint16> UNIX_FirewallRuleSettingData::getToGroupMemberType() const
{
	return _toGroupMemberType;
}

void UNIX_FirewallRuleSettingData::setToGroupMemberType(Array<Uint16> &value)
{
	_toGroupMemberType = value;
}


void UNIX_FirewallRuleSettingData::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("FirewallRuleSettingData");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_fromGroupMembers.clear();
	_toGroupMembers.clear();
	_fromGroupMemberType.clear();
	_toGroupMemberType.clear();

}

Boolean UNIX_FirewallRuleSettingData::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "FromGroupMembers"))
			{
				Array<String> fromGroupMembersValue;
				property.getValue().get(fromGroupMembersValue);
				setFromGroupMembers(fromGroupMembersValue);
			}
			else if (String::equal(property.getName().getString(), "ToGroupMembers"))
			{
				Array<String> toGroupMembersValue;
				property.getValue().get(toGroupMembersValue);
				setToGroupMembers(toGroupMembersValue);
			}
			else if (String::equal(property.getName().getString(), "FromGroupMemberType"))
			{
				Array<Uint16> fromGroupMemberTypeValue;
				property.getValue().get(fromGroupMemberTypeValue);
				setFromGroupMemberType(fromGroupMemberTypeValue);
			}
			else if (String::equal(property.getName().getString(), "ToGroupMemberType"))
			{
				Array<Uint16> toGroupMemberTypeValue;
				property.getValue().get(toGroupMemberTypeValue);
				setToGroupMemberType(toGroupMemberTypeValue);
			}
	}
	return true;
}


Boolean UNIX_FirewallRuleSettingData::initialize()
{
	return false;
}

Boolean UNIX_FirewallRuleSettingData::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("FirewallRuleSettingData");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_fromGroupMembers.clear();
	_toGroupMembers.clear();
	_fromGroupMemberType.clear();
	_toGroupMemberType.clear();
	
	return false;
}

Boolean UNIX_FirewallRuleSettingData::finalize()
{
	return false;
}


Boolean UNIX_FirewallRuleSettingData::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_FirewallRuleSettingData::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FirewallRuleSettingData::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FirewallRuleSettingData::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FirewallRuleSettingData::validateInstance()
{
	return true;
}

