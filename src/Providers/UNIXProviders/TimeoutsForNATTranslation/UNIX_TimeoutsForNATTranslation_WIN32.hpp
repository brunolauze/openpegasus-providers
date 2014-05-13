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


UNIX_TimeoutsForNATTranslation::UNIX_TimeoutsForNATTranslation(void)
{
}

UNIX_TimeoutsForNATTranslation::~UNIX_TimeoutsForNATTranslation(void)
{
}

Boolean UNIX_TimeoutsForNATTranslation::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_TimeoutsForNATTranslation::getInstanceID() const
{
	return _instanceID;
}

void UNIX_TimeoutsForNATTranslation::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_TimeoutsForNATTranslation::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_TimeoutsForNATTranslation::getCaption() const
{
	return _caption;
}

void UNIX_TimeoutsForNATTranslation::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_TimeoutsForNATTranslation::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_TimeoutsForNATTranslation::getDescription() const
{
	return _description;
}

void UNIX_TimeoutsForNATTranslation::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_TimeoutsForNATTranslation::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_TimeoutsForNATTranslation::getElementName() const
{
	return _elementName;
}

void UNIX_TimeoutsForNATTranslation::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_TimeoutsForNATTranslation::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_TimeoutsForNATTranslation::getGeneration() const
{
	return _generation;
}

void UNIX_TimeoutsForNATTranslation::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_TimeoutsForNATTranslation::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_TimeoutsForNATTranslation::getConfigurationName() const
{
	return _configurationName;
}

void UNIX_TimeoutsForNATTranslation::setConfigurationName(String &value)
{
	_configurationName = value;
}

Boolean UNIX_TimeoutsForNATTranslation::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_TimeoutsForNATTranslation::getChangeableType() const
{
	return _changeableType;
}

void UNIX_TimeoutsForNATTranslation::setChangeableType(Uint16 &value)
{
	_changeableType = value;
}

Boolean UNIX_TimeoutsForNATTranslation::getComponentSetting(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPONENT_SETTING, getComponentSetting());
	return true;
}

Array<String> UNIX_TimeoutsForNATTranslation::getComponentSetting() const
{
	return _componentSetting;
}

void UNIX_TimeoutsForNATTranslation::setComponentSetting(Array<String> &value)
{
	_componentSetting = value;
}

Boolean UNIX_TimeoutsForNATTranslation::getSoID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ID, getSoID());
	return true;
}

String UNIX_TimeoutsForNATTranslation::getSoID() const
{
	return _soID;
}

void UNIX_TimeoutsForNATTranslation::setSoID(String &value)
{
	_soID = value;
}

Boolean UNIX_TimeoutsForNATTranslation::getSoOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ORG_ID, getSoOrgID());
	return true;
}

String UNIX_TimeoutsForNATTranslation::getSoOrgID() const
{
	return _soOrgID;
}

void UNIX_TimeoutsForNATTranslation::setSoOrgID(String &value)
{
	_soOrgID = value;
}

Boolean UNIX_TimeoutsForNATTranslation::getTranslationTimeout(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSLATION_TIMEOUT, getTranslationTimeout());
	return true;
}

CIMDateTime UNIX_TimeoutsForNATTranslation::getTranslationTimeout() const
{
	return _translationTimeout;
}

void UNIX_TimeoutsForNATTranslation::setTranslationTimeout(CIMDateTime &value)
{
	_translationTimeout = value;
}

Boolean UNIX_TimeoutsForNATTranslation::getUDPTimeout(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UDP_TIMEOUT, getUDPTimeout());
	return true;
}

CIMDateTime UNIX_TimeoutsForNATTranslation::getUDPTimeout() const
{
	return _uDPTimeout;
}

void UNIX_TimeoutsForNATTranslation::setUDPTimeout(CIMDateTime &value)
{
	_uDPTimeout = value;
}

Boolean UNIX_TimeoutsForNATTranslation::getTCPTimeout(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TCP_TIMEOUT, getTCPTimeout());
	return true;
}

CIMDateTime UNIX_TimeoutsForNATTranslation::getTCPTimeout() const
{
	return _tCPTimeout;
}

void UNIX_TimeoutsForNATTranslation::setTCPTimeout(CIMDateTime &value)
{
	_tCPTimeout = value;
}


void UNIX_TimeoutsForNATTranslation::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("TimeoutsForNATTranslation");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_translationTimeout = CIMHelper::getCurrentTime();
	_uDPTimeout = CIMHelper::getCurrentTime();
	_tCPTimeout = CIMHelper::getCurrentTime();

}

Boolean UNIX_TimeoutsForNATTranslation::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "TranslationTimeout"))
			{
				CIMDateTime translationTimeoutValue;
				property.getValue().get(translationTimeoutValue);
				setTranslationTimeout(translationTimeoutValue);
			}
			else if (String::equal(property.getName().getString(), "UDPTimeout"))
			{
				CIMDateTime uDPTimeoutValue;
				property.getValue().get(uDPTimeoutValue);
				setUDPTimeout(uDPTimeoutValue);
			}
			else if (String::equal(property.getName().getString(), "TCPTimeout"))
			{
				CIMDateTime tCPTimeoutValue;
				property.getValue().get(tCPTimeoutValue);
				setTCPTimeout(tCPTimeoutValue);
			}
	}
	return true;
}


Boolean UNIX_TimeoutsForNATTranslation::initialize()
{
	return false;
}

Boolean UNIX_TimeoutsForNATTranslation::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("TimeoutsForNATTranslation");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_translationTimeout = CIMHelper::getCurrentTime();
	_uDPTimeout = CIMHelper::getCurrentTime();
	_tCPTimeout = CIMHelper::getCurrentTime();
	
	return false;
}

Boolean UNIX_TimeoutsForNATTranslation::finalize()
{
	return false;
}


Boolean UNIX_TimeoutsForNATTranslation::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_TimeoutsForNATTranslation::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_TimeoutsForNATTranslation::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_TimeoutsForNATTranslation::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_TimeoutsForNATTranslation::validateInstance()
{
	return true;
}

