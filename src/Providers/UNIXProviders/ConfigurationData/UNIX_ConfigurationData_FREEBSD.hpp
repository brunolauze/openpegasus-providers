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


UNIX_ConfigurationData::UNIX_ConfigurationData(void)
{
}

UNIX_ConfigurationData::~UNIX_ConfigurationData(void)
{
}

Boolean UNIX_ConfigurationData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_ConfigurationData::getInstanceID() const
{
	return _instanceID;
}

void UNIX_ConfigurationData::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_ConfigurationData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_ConfigurationData::getCaption() const
{
	return _caption;
}

void UNIX_ConfigurationData::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_ConfigurationData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_ConfigurationData::getDescription() const
{
	return _description;
}

void UNIX_ConfigurationData::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_ConfigurationData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_ConfigurationData::getElementName() const
{
	return _elementName;
}

void UNIX_ConfigurationData::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_ConfigurationData::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_ConfigurationData::getGeneration() const
{
	return _generation;
}

void UNIX_ConfigurationData::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_ConfigurationData::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_ConfigurationData::getConfigurationName() const
{
	return _configurationName;
}

void UNIX_ConfigurationData::setConfigurationName(String &value)
{
	_configurationName = value;
}

Boolean UNIX_ConfigurationData::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_ConfigurationData::getChangeableType() const
{
	return _changeableType;
}

void UNIX_ConfigurationData::setChangeableType(Uint16 &value)
{
	_changeableType = value;
}

Boolean UNIX_ConfigurationData::getComponentSetting(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPONENT_SETTING, getComponentSetting());
	return true;
}

Array<String> UNIX_ConfigurationData::getComponentSetting() const
{
	return _componentSetting;
}

void UNIX_ConfigurationData::setComponentSetting(Array<String> &value)
{
	_componentSetting = value;
}

Boolean UNIX_ConfigurationData::getSoID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ID, getSoID());
	return true;
}

String UNIX_ConfigurationData::getSoID() const
{
	return _soID;
}

void UNIX_ConfigurationData::setSoID(String &value)
{
	_soID = value;
}

Boolean UNIX_ConfigurationData::getSoOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ORG_ID, getSoOrgID());
	return true;
}

String UNIX_ConfigurationData::getSoOrgID() const
{
	return _soOrgID;
}

void UNIX_ConfigurationData::setSoOrgID(String &value)
{
	_soOrgID = value;
}

Boolean UNIX_ConfigurationData::getConfigurationInformation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_INFORMATION, getConfigurationInformation());
	return true;
}

Array<Uint8> UNIX_ConfigurationData::getConfigurationInformation() const
{
	return _configurationInformation;
}

void UNIX_ConfigurationData::setConfigurationInformation(Array<Uint8> &value)
{
	_configurationInformation = value;
}

Boolean UNIX_ConfigurationData::getConfigurationTimestamp(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_TIMESTAMP, getConfigurationTimestamp());
	return true;
}

CIMDateTime UNIX_ConfigurationData::getConfigurationTimestamp() const
{
	return _configurationTimestamp;
}

void UNIX_ConfigurationData::setConfigurationTimestamp(CIMDateTime &value)
{
	_configurationTimestamp = value;
}


void UNIX_ConfigurationData::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("ConfigurationData");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_configurationInformation.clear();
	_configurationTimestamp = CIMHelper::getCurrentTime();

}

Boolean UNIX_ConfigurationData::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "ConfigurationInformation"))
			{
				Array<Uint8> configurationInformationValue;
				property.getValue().get(configurationInformationValue);
				setConfigurationInformation(configurationInformationValue);
			}
			else if (String::equal(property.getName().getString(), "ConfigurationTimestamp"))
			{
				CIMDateTime configurationTimestampValue;
				property.getValue().get(configurationTimestampValue);
				setConfigurationTimestamp(configurationTimestampValue);
			}
	}
	return true;
}

Uint32 UNIX_ConfigurationData::invokeApplyConfiguration(
		Boolean &inValidateOnly,
		Uint16 &inTypeOfConfiguration,
		CIMInstance &inManagedElement
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ApplyConfiguration */
	
	
	
	return returnValue;
}


Boolean UNIX_ConfigurationData::initialize()
{
	return false;
}

Boolean UNIX_ConfigurationData::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("ConfigurationData");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_configurationInformation.clear();
	_configurationTimestamp = CIMHelper::getCurrentTime();
	
	return false;
}

Boolean UNIX_ConfigurationData::finalize()
{
	return false;
}


Boolean UNIX_ConfigurationData::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_ConfigurationData::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ConfigurationData::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ConfigurationData::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ConfigurationData::validateInstance()
{
	return true;
}

