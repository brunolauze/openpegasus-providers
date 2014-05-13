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


UNIX_IPSettings::UNIX_IPSettings(void)
{
}

UNIX_IPSettings::~UNIX_IPSettings(void)
{
}

Boolean UNIX_IPSettings::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_IPSettings::getInstanceID() const
{
	return _instanceID;
}

void UNIX_IPSettings::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_IPSettings::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_IPSettings::getCaption() const
{
	return _caption;
}

void UNIX_IPSettings::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_IPSettings::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_IPSettings::getDescription() const
{
	return _description;
}

void UNIX_IPSettings::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_IPSettings::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_IPSettings::getElementName() const
{
	return _elementName;
}

void UNIX_IPSettings::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_IPSettings::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_IPSettings::getGeneration() const
{
	return _generation;
}

void UNIX_IPSettings::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_IPSettings::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_IPSettings::getConfigurationName() const
{
	return _configurationName;
}

void UNIX_IPSettings::setConfigurationName(String &value)
{
	_configurationName = value;
}

Boolean UNIX_IPSettings::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_IPSettings::getChangeableType() const
{
	return _changeableType;
}

void UNIX_IPSettings::setChangeableType(Uint16 &value)
{
	_changeableType = value;
}

Boolean UNIX_IPSettings::getComponentSetting(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPONENT_SETTING, getComponentSetting());
	return true;
}

Array<String> UNIX_IPSettings::getComponentSetting() const
{
	return _componentSetting;
}

void UNIX_IPSettings::setComponentSetting(Array<String> &value)
{
	_componentSetting = value;
}

Boolean UNIX_IPSettings::getSoID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ID, getSoID());
	return true;
}

String UNIX_IPSettings::getSoID() const
{
	return _soID;
}

void UNIX_IPSettings::setSoID(String &value)
{
	_soID = value;
}

Boolean UNIX_IPSettings::getSoOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ORG_ID, getSoOrgID());
	return true;
}

String UNIX_IPSettings::getSoOrgID() const
{
	return _soOrgID;
}

void UNIX_IPSettings::setSoOrgID(String &value)
{
	_soOrgID = value;
}

Boolean UNIX_IPSettings::getFragmentationTimeout(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FRAGMENTATION_TIMEOUT, getFragmentationTimeout());
	return true;
}

Uint32 UNIX_IPSettings::getFragmentationTimeout() const
{
	return _fragmentationTimeout;
}

void UNIX_IPSettings::setFragmentationTimeout(Uint32 &value)
{
	_fragmentationTimeout = value;
}

Boolean UNIX_IPSettings::getDefaultTimeToLive(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEFAULT_TIME_TO_LIVE, getDefaultTimeToLive());
	return true;
}

Uint32 UNIX_IPSettings::getDefaultTimeToLive() const
{
	return _defaultTimeToLive;
}

void UNIX_IPSettings::setDefaultTimeToLive(Uint32 &value)
{
	_defaultTimeToLive = value;
}

Boolean UNIX_IPSettings::getEnableIPForwarding(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLE_IP_FORWARDING, getEnableIPForwarding());
	return true;
}

Boolean UNIX_IPSettings::getEnableIPForwarding() const
{
	return _enableIPForwarding;
}

void UNIX_IPSettings::setEnableIPForwarding(Boolean &value)
{
	_enableIPForwarding = value;
}


void UNIX_IPSettings::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("IPSettings");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_fragmentationTimeout = Uint32(0);
	_defaultTimeToLive = Uint32(0);
	_enableIPForwarding = Boolean(false);

}

Boolean UNIX_IPSettings::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "FragmentationTimeout"))
			{
				Uint32 fragmentationTimeoutValue;
				property.getValue().get(fragmentationTimeoutValue);
				setFragmentationTimeout(fragmentationTimeoutValue);
			}
			else if (String::equal(property.getName().getString(), "DefaultTimeToLive"))
			{
				Uint32 defaultTimeToLiveValue;
				property.getValue().get(defaultTimeToLiveValue);
				setDefaultTimeToLive(defaultTimeToLiveValue);
			}
			else if (String::equal(property.getName().getString(), "EnableIPForwarding"))
			{
				Boolean enableIPForwardingValue;
				property.getValue().get(enableIPForwardingValue);
				setEnableIPForwarding(enableIPForwardingValue);
			}
	}
	return true;
}


Boolean UNIX_IPSettings::initialize()
{
	return false;
}

Boolean UNIX_IPSettings::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("IPSettings");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_fragmentationTimeout = Uint32(0);
	_defaultTimeToLive = Uint32(0);
	_enableIPForwarding = Boolean(false);
	
	return false;
}

Boolean UNIX_IPSettings::finalize()
{
	return false;
}


Boolean UNIX_IPSettings::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_IPSettings::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IPSettings::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IPSettings::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IPSettings::validateInstance()
{
	return true;
}

