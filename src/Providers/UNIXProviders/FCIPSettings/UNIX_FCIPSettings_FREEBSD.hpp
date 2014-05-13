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


UNIX_FCIPSettings::UNIX_FCIPSettings(void)
{
}

UNIX_FCIPSettings::~UNIX_FCIPSettings(void)
{
}

Boolean UNIX_FCIPSettings::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_FCIPSettings::getInstanceID() const
{
	return _instanceID;
}

void UNIX_FCIPSettings::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_FCIPSettings::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_FCIPSettings::getCaption() const
{
	return _caption;
}

void UNIX_FCIPSettings::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_FCIPSettings::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_FCIPSettings::getDescription() const
{
	return _description;
}

void UNIX_FCIPSettings::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_FCIPSettings::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_FCIPSettings::getElementName() const
{
	return _elementName;
}

void UNIX_FCIPSettings::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_FCIPSettings::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_FCIPSettings::getGeneration() const
{
	return _generation;
}

void UNIX_FCIPSettings::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_FCIPSettings::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_FCIPSettings::getConfigurationName() const
{
	return _configurationName;
}

void UNIX_FCIPSettings::setConfigurationName(String &value)
{
	_configurationName = value;
}

Boolean UNIX_FCIPSettings::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_FCIPSettings::getChangeableType() const
{
	return _changeableType;
}

void UNIX_FCIPSettings::setChangeableType(Uint16 &value)
{
	_changeableType = value;
}

Boolean UNIX_FCIPSettings::getComponentSetting(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPONENT_SETTING, getComponentSetting());
	return true;
}

Array<String> UNIX_FCIPSettings::getComponentSetting() const
{
	return _componentSetting;
}

void UNIX_FCIPSettings::setComponentSetting(Array<String> &value)
{
	_componentSetting = value;
}

Boolean UNIX_FCIPSettings::getSoID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ID, getSoID());
	return true;
}

String UNIX_FCIPSettings::getSoID() const
{
	return _soID;
}

void UNIX_FCIPSettings::setSoID(String &value)
{
	_soID = value;
}

Boolean UNIX_FCIPSettings::getSoOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ORG_ID, getSoOrgID());
	return true;
}

String UNIX_FCIPSettings::getSoOrgID() const
{
	return _soOrgID;
}

void UNIX_FCIPSettings::setSoOrgID(String &value)
{
	_soOrgID = value;
}

Boolean UNIX_FCIPSettings::getConnectionUsageFlags(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONNECTION_USAGE_FLAGS, getConnectionUsageFlags());
	return true;
}

Uint16 UNIX_FCIPSettings::getConnectionUsageFlags() const
{
	return _connectionUsageFlags;
}

void UNIX_FCIPSettings::setConnectionUsageFlags(Uint16 &value)
{
	_connectionUsageFlags = value;
}

Boolean UNIX_FCIPSettings::getSpecialFrameTimeout(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SPECIAL_FRAME_TIMEOUT, getSpecialFrameTimeout());
	return true;
}

Uint32 UNIX_FCIPSettings::getSpecialFrameTimeout() const
{
	return _specialFrameTimeout;
}

void UNIX_FCIPSettings::setSpecialFrameTimeout(Uint32 &value)
{
	_specialFrameTimeout = value;
}

Boolean UNIX_FCIPSettings::getKeepAliveTimeout(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_KEEP_ALIVE_TIMEOUT, getKeepAliveTimeout());
	return true;
}

Uint32 UNIX_FCIPSettings::getKeepAliveTimeout() const
{
	return _keepAliveTimeout;
}

void UNIX_FCIPSettings::setKeepAliveTimeout(Uint32 &value)
{
	_keepAliveTimeout = value;
}


void UNIX_FCIPSettings::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("FCIPSettings");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_connectionUsageFlags = Uint16(0);
	_specialFrameTimeout = Uint32(0);
	_keepAliveTimeout = Uint32(0);

}

Boolean UNIX_FCIPSettings::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "ConnectionUsageFlags"))
			{
				Uint16 connectionUsageFlagsValue;
				property.getValue().get(connectionUsageFlagsValue);
				setConnectionUsageFlags(connectionUsageFlagsValue);
			}
			else if (String::equal(property.getName().getString(), "SpecialFrameTimeout"))
			{
				Uint32 specialFrameTimeoutValue;
				property.getValue().get(specialFrameTimeoutValue);
				setSpecialFrameTimeout(specialFrameTimeoutValue);
			}
			else if (String::equal(property.getName().getString(), "KeepAliveTimeout"))
			{
				Uint32 keepAliveTimeoutValue;
				property.getValue().get(keepAliveTimeoutValue);
				setKeepAliveTimeout(keepAliveTimeoutValue);
			}
	}
	return true;
}


Boolean UNIX_FCIPSettings::initialize()
{
	return false;
}

Boolean UNIX_FCIPSettings::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("FCIPSettings");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_connectionUsageFlags = Uint16(0);
	_specialFrameTimeout = Uint32(0);
	_keepAliveTimeout = Uint32(0);
	
	return false;
}

Boolean UNIX_FCIPSettings::finalize()
{
	return false;
}


Boolean UNIX_FCIPSettings::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_FCIPSettings::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FCIPSettings::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FCIPSettings::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FCIPSettings::validateInstance()
{
	return true;
}

