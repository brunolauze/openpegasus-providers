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


UNIX_FCSwitchSettings::UNIX_FCSwitchSettings(void)
{
}

UNIX_FCSwitchSettings::~UNIX_FCSwitchSettings(void)
{
}

Boolean UNIX_FCSwitchSettings::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_FCSwitchSettings::getInstanceID() const
{
	return _instanceID;
}

void UNIX_FCSwitchSettings::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_FCSwitchSettings::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_FCSwitchSettings::getCaption() const
{
	return _caption;
}

void UNIX_FCSwitchSettings::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_FCSwitchSettings::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_FCSwitchSettings::getDescription() const
{
	return _description;
}

void UNIX_FCSwitchSettings::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_FCSwitchSettings::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_FCSwitchSettings::getElementName() const
{
	return _elementName;
}

void UNIX_FCSwitchSettings::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_FCSwitchSettings::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_FCSwitchSettings::getGeneration() const
{
	return _generation;
}

void UNIX_FCSwitchSettings::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_FCSwitchSettings::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_FCSwitchSettings::getConfigurationName() const
{
	return _configurationName;
}

void UNIX_FCSwitchSettings::setConfigurationName(String &value)
{
	_configurationName = value;
}

Boolean UNIX_FCSwitchSettings::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_FCSwitchSettings::getChangeableType() const
{
	return _changeableType;
}

void UNIX_FCSwitchSettings::setChangeableType(Uint16 &value)
{
	_changeableType = value;
}

Boolean UNIX_FCSwitchSettings::getComponentSetting(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPONENT_SETTING, getComponentSetting());
	return true;
}

Array<String> UNIX_FCSwitchSettings::getComponentSetting() const
{
	return _componentSetting;
}

void UNIX_FCSwitchSettings::setComponentSetting(Array<String> &value)
{
	_componentSetting = value;
}

Boolean UNIX_FCSwitchSettings::getSoID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ID, getSoID());
	return true;
}

String UNIX_FCSwitchSettings::getSoID() const
{
	return _soID;
}

void UNIX_FCSwitchSettings::setSoID(String &value)
{
	_soID = value;
}

Boolean UNIX_FCSwitchSettings::getSoOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ORG_ID, getSoOrgID());
	return true;
}

String UNIX_FCSwitchSettings::getSoOrgID() const
{
	return _soOrgID;
}

void UNIX_FCSwitchSettings::setSoOrgID(String &value)
{
	_soOrgID = value;
}

Boolean UNIX_FCSwitchSettings::getPreferredDomainID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PREFERRED_DOMAIN_ID, getPreferredDomainID());
	return true;
}

Uint8 UNIX_FCSwitchSettings::getPreferredDomainID() const
{
	return _preferredDomainID;
}

void UNIX_FCSwitchSettings::setPreferredDomainID(Uint8 &value)
{
	_preferredDomainID = value;
}

Boolean UNIX_FCSwitchSettings::getDomainIDLocked(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DOMAIN_ID_LOCKED, getDomainIDLocked());
	return true;
}

Boolean UNIX_FCSwitchSettings::getDomainIDLocked() const
{
	return _domainIDLocked;
}

void UNIX_FCSwitchSettings::setDomainIDLocked(Boolean &value)
{
	_domainIDLocked = value;
}

Boolean UNIX_FCSwitchSettings::getPrincipalPriority(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRINCIPAL_PRIORITY, getPrincipalPriority());
	return true;
}

Uint16 UNIX_FCSwitchSettings::getPrincipalPriority() const
{
	return _principalPriority;
}

void UNIX_FCSwitchSettings::setPrincipalPriority(Uint16 &value)
{
	_principalPriority = value;
}


void UNIX_FCSwitchSettings::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("FCSwitchSettings");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_preferredDomainID = Uint8(0);
	_domainIDLocked = Boolean(false);
	_principalPriority = Uint16(0);

}

Boolean UNIX_FCSwitchSettings::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "PreferredDomainID"))
			{
				Uint8 preferredDomainIDValue;
				property.getValue().get(preferredDomainIDValue);
				setPreferredDomainID(preferredDomainIDValue);
			}
			else if (String::equal(property.getName().getString(), "DomainIDLocked"))
			{
				Boolean domainIDLockedValue;
				property.getValue().get(domainIDLockedValue);
				setDomainIDLocked(domainIDLockedValue);
			}
			else if (String::equal(property.getName().getString(), "PrincipalPriority"))
			{
				Uint16 principalPriorityValue;
				property.getValue().get(principalPriorityValue);
				setPrincipalPriority(principalPriorityValue);
			}
	}
	return true;
}


Boolean UNIX_FCSwitchSettings::initialize()
{
	return false;
}

Boolean UNIX_FCSwitchSettings::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("FCSwitchSettings");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_preferredDomainID = Uint8(0);
	_domainIDLocked = Boolean(false);
	_principalPriority = Uint16(0);
	
	return false;
}

Boolean UNIX_FCSwitchSettings::finalize()
{
	return false;
}


Boolean UNIX_FCSwitchSettings::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_FCSwitchSettings::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FCSwitchSettings::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FCSwitchSettings::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FCSwitchSettings::validateInstance()
{
	return true;
}

