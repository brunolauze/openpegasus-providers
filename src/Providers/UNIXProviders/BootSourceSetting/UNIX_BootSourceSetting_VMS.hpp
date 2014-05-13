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


UNIX_BootSourceSetting::UNIX_BootSourceSetting(void)
{
}

UNIX_BootSourceSetting::~UNIX_BootSourceSetting(void)
{
}

Boolean UNIX_BootSourceSetting::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_BootSourceSetting::getInstanceID() const
{
	return _instanceID;
}

void UNIX_BootSourceSetting::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_BootSourceSetting::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_BootSourceSetting::getCaption() const
{
	return _caption;
}

void UNIX_BootSourceSetting::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_BootSourceSetting::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_BootSourceSetting::getDescription() const
{
	return _description;
}

void UNIX_BootSourceSetting::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_BootSourceSetting::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_BootSourceSetting::getElementName() const
{
	return _elementName;
}

void UNIX_BootSourceSetting::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_BootSourceSetting::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_BootSourceSetting::getGeneration() const
{
	return _generation;
}

void UNIX_BootSourceSetting::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_BootSourceSetting::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_BootSourceSetting::getConfigurationName() const
{
	return _configurationName;
}

void UNIX_BootSourceSetting::setConfigurationName(String &value)
{
	_configurationName = value;
}

Boolean UNIX_BootSourceSetting::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_BootSourceSetting::getChangeableType() const
{
	return _changeableType;
}

void UNIX_BootSourceSetting::setChangeableType(Uint16 &value)
{
	_changeableType = value;
}

Boolean UNIX_BootSourceSetting::getComponentSetting(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPONENT_SETTING, getComponentSetting());
	return true;
}

Array<String> UNIX_BootSourceSetting::getComponentSetting() const
{
	return _componentSetting;
}

void UNIX_BootSourceSetting::setComponentSetting(Array<String> &value)
{
	_componentSetting = value;
}

Boolean UNIX_BootSourceSetting::getSoID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ID, getSoID());
	return true;
}

String UNIX_BootSourceSetting::getSoID() const
{
	return _soID;
}

void UNIX_BootSourceSetting::setSoID(String &value)
{
	_soID = value;
}

Boolean UNIX_BootSourceSetting::getSoOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ORG_ID, getSoOrgID());
	return true;
}

String UNIX_BootSourceSetting::getSoOrgID() const
{
	return _soOrgID;
}

void UNIX_BootSourceSetting::setSoOrgID(String &value)
{
	_soOrgID = value;
}

Boolean UNIX_BootSourceSetting::getBootString(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BOOT_STRING, getBootString());
	return true;
}

String UNIX_BootSourceSetting::getBootString() const
{
	return _bootString;
}

void UNIX_BootSourceSetting::setBootString(String &value)
{
	_bootString = value;
}

Boolean UNIX_BootSourceSetting::getBIOSBootString(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BIOS_BOOT_STRING, getBIOSBootString());
	return true;
}

String UNIX_BootSourceSetting::getBIOSBootString() const
{
	return _bIOSBootString;
}

void UNIX_BootSourceSetting::setBIOSBootString(String &value)
{
	_bIOSBootString = value;
}

Boolean UNIX_BootSourceSetting::getStructuredBootString(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STRUCTURED_BOOT_STRING, getStructuredBootString());
	return true;
}

String UNIX_BootSourceSetting::getStructuredBootString() const
{
	return _structuredBootString;
}

void UNIX_BootSourceSetting::setStructuredBootString(String &value)
{
	_structuredBootString = value;
}

Boolean UNIX_BootSourceSetting::getFailThroughSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FAIL_THROUGH_SUPPORTED, getFailThroughSupported());
	return true;
}

Uint16 UNIX_BootSourceSetting::getFailThroughSupported() const
{
	return _failThroughSupported;
}

void UNIX_BootSourceSetting::setFailThroughSupported(Uint16 &value)
{
	_failThroughSupported = value;
}


void UNIX_BootSourceSetting::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("BootSourceSetting");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_bootString = String ("");
	_bIOSBootString = String ("");
	_structuredBootString = String ("");
	_failThroughSupported = Uint16(0);

}

Boolean UNIX_BootSourceSetting::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "BootString"))
			{
				String bootStringValue;
				property.getValue().get(bootStringValue);
				setBootString(bootStringValue);
			}
			else if (String::equal(property.getName().getString(), "BIOSBootString"))
			{
				String bIOSBootStringValue;
				property.getValue().get(bIOSBootStringValue);
				setBIOSBootString(bIOSBootStringValue);
			}
			else if (String::equal(property.getName().getString(), "StructuredBootString"))
			{
				String structuredBootStringValue;
				property.getValue().get(structuredBootStringValue);
				setStructuredBootString(structuredBootStringValue);
			}
			else if (String::equal(property.getName().getString(), "FailThroughSupported"))
			{
				Uint16 failThroughSupportedValue;
				property.getValue().get(failThroughSupportedValue);
				setFailThroughSupported(failThroughSupportedValue);
			}
	}
	return true;
}


Boolean UNIX_BootSourceSetting::initialize()
{
	return false;
}

Boolean UNIX_BootSourceSetting::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("BootSourceSetting");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_bootString = String ("");
	_bIOSBootString = String ("");
	_structuredBootString = String ("");
	_failThroughSupported = Uint16(0);
	
	return false;
}

Boolean UNIX_BootSourceSetting::finalize()
{
	return false;
}


Boolean UNIX_BootSourceSetting::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_BootSourceSetting::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BootSourceSetting::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BootSourceSetting::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BootSourceSetting::validateInstance()
{
	return true;
}

