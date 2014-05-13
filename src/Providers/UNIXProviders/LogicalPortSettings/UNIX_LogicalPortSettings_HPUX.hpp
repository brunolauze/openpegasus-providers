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


UNIX_LogicalPortSettings::UNIX_LogicalPortSettings(void)
{
}

UNIX_LogicalPortSettings::~UNIX_LogicalPortSettings(void)
{
}

Boolean UNIX_LogicalPortSettings::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_LogicalPortSettings::getInstanceID() const
{
	return _instanceID;
}

void UNIX_LogicalPortSettings::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_LogicalPortSettings::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_LogicalPortSettings::getCaption() const
{
	return _caption;
}

void UNIX_LogicalPortSettings::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_LogicalPortSettings::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_LogicalPortSettings::getDescription() const
{
	return _description;
}

void UNIX_LogicalPortSettings::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_LogicalPortSettings::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_LogicalPortSettings::getElementName() const
{
	return _elementName;
}

void UNIX_LogicalPortSettings::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_LogicalPortSettings::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_LogicalPortSettings::getGeneration() const
{
	return _generation;
}

void UNIX_LogicalPortSettings::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_LogicalPortSettings::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_LogicalPortSettings::getConfigurationName() const
{
	return _configurationName;
}

void UNIX_LogicalPortSettings::setConfigurationName(String &value)
{
	_configurationName = value;
}

Boolean UNIX_LogicalPortSettings::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_LogicalPortSettings::getChangeableType() const
{
	return _changeableType;
}

void UNIX_LogicalPortSettings::setChangeableType(Uint16 &value)
{
	_changeableType = value;
}

Boolean UNIX_LogicalPortSettings::getComponentSetting(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPONENT_SETTING, getComponentSetting());
	return true;
}

Array<String> UNIX_LogicalPortSettings::getComponentSetting() const
{
	return _componentSetting;
}

void UNIX_LogicalPortSettings::setComponentSetting(Array<String> &value)
{
	_componentSetting = value;
}

Boolean UNIX_LogicalPortSettings::getSoID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ID, getSoID());
	return true;
}

String UNIX_LogicalPortSettings::getSoID() const
{
	return _soID;
}

void UNIX_LogicalPortSettings::setSoID(String &value)
{
	_soID = value;
}

Boolean UNIX_LogicalPortSettings::getSoOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ORG_ID, getSoOrgID());
	return true;
}

String UNIX_LogicalPortSettings::getSoOrgID() const
{
	return _soOrgID;
}

void UNIX_LogicalPortSettings::setSoOrgID(String &value)
{
	_soOrgID = value;
}

Boolean UNIX_LogicalPortSettings::getRequestedSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_SPEED, getRequestedSpeed());
	return true;
}

Uint64 UNIX_LogicalPortSettings::getRequestedSpeed() const
{
	return _requestedSpeed;
}

void UNIX_LogicalPortSettings::setRequestedSpeed(Uint64 &value)
{
	_requestedSpeed = value;
}

Boolean UNIX_LogicalPortSettings::getAutoSenseSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTO_SENSE_SPEED, getAutoSenseSpeed());
	return true;
}

Boolean UNIX_LogicalPortSettings::getAutoSenseSpeed() const
{
	return _autoSenseSpeed;
}

void UNIX_LogicalPortSettings::setAutoSenseSpeed(Boolean &value)
{
	_autoSenseSpeed = value;
}


void UNIX_LogicalPortSettings::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("LogicalPortSettings");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_requestedSpeed = Uint64(0);
	_autoSenseSpeed = Boolean(false);

}

Boolean UNIX_LogicalPortSettings::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "RequestedSpeed"))
			{
				Uint64 requestedSpeedValue;
				property.getValue().get(requestedSpeedValue);
				setRequestedSpeed(requestedSpeedValue);
			}
			else if (String::equal(property.getName().getString(), "AutoSenseSpeed"))
			{
				Boolean autoSenseSpeedValue;
				property.getValue().get(autoSenseSpeedValue);
				setAutoSenseSpeed(autoSenseSpeedValue);
			}
	}
	return true;
}


Boolean UNIX_LogicalPortSettings::initialize()
{
	return false;
}

Boolean UNIX_LogicalPortSettings::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("LogicalPortSettings");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_requestedSpeed = Uint64(0);
	_autoSenseSpeed = Boolean(false);
	
	return false;
}

Boolean UNIX_LogicalPortSettings::finalize()
{
	return false;
}


Boolean UNIX_LogicalPortSettings::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_LogicalPortSettings::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_LogicalPortSettings::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_LogicalPortSettings::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_LogicalPortSettings::validateInstance()
{
	return true;
}

