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


UNIX_LAGPortPartnerSettings::UNIX_LAGPortPartnerSettings(void)
{
}

UNIX_LAGPortPartnerSettings::~UNIX_LAGPortPartnerSettings(void)
{
}

Boolean UNIX_LAGPortPartnerSettings::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_LAGPortPartnerSettings::getInstanceID() const
{
	return _instanceID;
}

void UNIX_LAGPortPartnerSettings::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_LAGPortPartnerSettings::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_LAGPortPartnerSettings::getCaption() const
{
	return _caption;
}

void UNIX_LAGPortPartnerSettings::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_LAGPortPartnerSettings::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_LAGPortPartnerSettings::getDescription() const
{
	return _description;
}

void UNIX_LAGPortPartnerSettings::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_LAGPortPartnerSettings::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_LAGPortPartnerSettings::getElementName() const
{
	return _elementName;
}

void UNIX_LAGPortPartnerSettings::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_LAGPortPartnerSettings::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_LAGPortPartnerSettings::getGeneration() const
{
	return _generation;
}

void UNIX_LAGPortPartnerSettings::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_LAGPortPartnerSettings::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_LAGPortPartnerSettings::getConfigurationName() const
{
	return _configurationName;
}

void UNIX_LAGPortPartnerSettings::setConfigurationName(String &value)
{
	_configurationName = value;
}

Boolean UNIX_LAGPortPartnerSettings::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_LAGPortPartnerSettings::getChangeableType() const
{
	return _changeableType;
}

void UNIX_LAGPortPartnerSettings::setChangeableType(Uint16 &value)
{
	_changeableType = value;
}

Boolean UNIX_LAGPortPartnerSettings::getComponentSetting(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPONENT_SETTING, getComponentSetting());
	return true;
}

Array<String> UNIX_LAGPortPartnerSettings::getComponentSetting() const
{
	return _componentSetting;
}

void UNIX_LAGPortPartnerSettings::setComponentSetting(Array<String> &value)
{
	_componentSetting = value;
}

Boolean UNIX_LAGPortPartnerSettings::getSoID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ID, getSoID());
	return true;
}

String UNIX_LAGPortPartnerSettings::getSoID() const
{
	return _soID;
}

void UNIX_LAGPortPartnerSettings::setSoID(String &value)
{
	_soID = value;
}

Boolean UNIX_LAGPortPartnerSettings::getSoOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ORG_ID, getSoOrgID());
	return true;
}

String UNIX_LAGPortPartnerSettings::getSoOrgID() const
{
	return _soOrgID;
}

void UNIX_LAGPortPartnerSettings::setSoOrgID(String &value)
{
	_soOrgID = value;
}

Boolean UNIX_LAGPortPartnerSettings::getPortPartnerAdminSystemID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_PARTNER_ADMIN_SYSTEM_ID, getPortPartnerAdminSystemID());
	return true;
}

String UNIX_LAGPortPartnerSettings::getPortPartnerAdminSystemID() const
{
	return _portPartnerAdminSystemID;
}

void UNIX_LAGPortPartnerSettings::setPortPartnerAdminSystemID(String &value)
{
	_portPartnerAdminSystemID = value;
}

Boolean UNIX_LAGPortPartnerSettings::getPortPartnerAdminSystemPriority(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_PARTNER_ADMIN_SYSTEM_PRIORITY, getPortPartnerAdminSystemPriority());
	return true;
}

Uint16 UNIX_LAGPortPartnerSettings::getPortPartnerAdminSystemPriority() const
{
	return _portPartnerAdminSystemPriority;
}

void UNIX_LAGPortPartnerSettings::setPortPartnerAdminSystemPriority(Uint16 &value)
{
	_portPartnerAdminSystemPriority = value;
}

Boolean UNIX_LAGPortPartnerSettings::getPortPartnerAdminKey(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_PARTNER_ADMIN_KEY, getPortPartnerAdminKey());
	return true;
}

Uint16 UNIX_LAGPortPartnerSettings::getPortPartnerAdminKey() const
{
	return _portPartnerAdminKey;
}

void UNIX_LAGPortPartnerSettings::setPortPartnerAdminKey(Uint16 &value)
{
	_portPartnerAdminKey = value;
}

Boolean UNIX_LAGPortPartnerSettings::getPortPartnerAdminPort(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_PARTNER_ADMIN_PORT, getPortPartnerAdminPort());
	return true;
}

Uint16 UNIX_LAGPortPartnerSettings::getPortPartnerAdminPort() const
{
	return _portPartnerAdminPort;
}

void UNIX_LAGPortPartnerSettings::setPortPartnerAdminPort(Uint16 &value)
{
	_portPartnerAdminPort = value;
}

Boolean UNIX_LAGPortPartnerSettings::getPortPartnerAdminPortPriority(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_PARTNER_ADMIN_PORT_PRIORITY, getPortPartnerAdminPortPriority());
	return true;
}

Uint16 UNIX_LAGPortPartnerSettings::getPortPartnerAdminPortPriority() const
{
	return _portPartnerAdminPortPriority;
}

void UNIX_LAGPortPartnerSettings::setPortPartnerAdminPortPriority(Uint16 &value)
{
	_portPartnerAdminPortPriority = value;
}


void UNIX_LAGPortPartnerSettings::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("LAGPortPartnerSettings");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_portPartnerAdminSystemID = String ("");
	_portPartnerAdminSystemPriority = Uint16(0);
	_portPartnerAdminKey = Uint16(0);
	_portPartnerAdminPort = Uint16(0);
	_portPartnerAdminPortPriority = Uint16(0);

}

Boolean UNIX_LAGPortPartnerSettings::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "PortPartnerAdminSystemID"))
			{
				String portPartnerAdminSystemIDValue;
				property.getValue().get(portPartnerAdminSystemIDValue);
				setPortPartnerAdminSystemID(portPartnerAdminSystemIDValue);
			}
			else if (String::equal(property.getName().getString(), "PortPartnerAdminSystemPriority"))
			{
				Uint16 portPartnerAdminSystemPriorityValue;
				property.getValue().get(portPartnerAdminSystemPriorityValue);
				setPortPartnerAdminSystemPriority(portPartnerAdminSystemPriorityValue);
			}
			else if (String::equal(property.getName().getString(), "PortPartnerAdminKey"))
			{
				Uint16 portPartnerAdminKeyValue;
				property.getValue().get(portPartnerAdminKeyValue);
				setPortPartnerAdminKey(portPartnerAdminKeyValue);
			}
			else if (String::equal(property.getName().getString(), "PortPartnerAdminPort"))
			{
				Uint16 portPartnerAdminPortValue;
				property.getValue().get(portPartnerAdminPortValue);
				setPortPartnerAdminPort(portPartnerAdminPortValue);
			}
			else if (String::equal(property.getName().getString(), "PortPartnerAdminPortPriority"))
			{
				Uint16 portPartnerAdminPortPriorityValue;
				property.getValue().get(portPartnerAdminPortPriorityValue);
				setPortPartnerAdminPortPriority(portPartnerAdminPortPriorityValue);
			}
	}
	return true;
}


Boolean UNIX_LAGPortPartnerSettings::initialize()
{
	return false;
}

Boolean UNIX_LAGPortPartnerSettings::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("LAGPortPartnerSettings");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_portPartnerAdminSystemID = String ("");
	_portPartnerAdminSystemPriority = Uint16(0);
	_portPartnerAdminKey = Uint16(0);
	_portPartnerAdminPort = Uint16(0);
	_portPartnerAdminPortPriority = Uint16(0);
	
	return false;
}

Boolean UNIX_LAGPortPartnerSettings::finalize()
{
	return false;
}


Boolean UNIX_LAGPortPartnerSettings::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_LAGPortPartnerSettings::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_LAGPortPartnerSettings::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_LAGPortPartnerSettings::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_LAGPortPartnerSettings::validateInstance()
{
	return true;
}

