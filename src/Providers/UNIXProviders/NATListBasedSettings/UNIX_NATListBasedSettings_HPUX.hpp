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


UNIX_NATListBasedSettings::UNIX_NATListBasedSettings(void)
{
}

UNIX_NATListBasedSettings::~UNIX_NATListBasedSettings(void)
{
}

Boolean UNIX_NATListBasedSettings::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_NATListBasedSettings::getInstanceID() const
{
	return _instanceID;
}

void UNIX_NATListBasedSettings::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_NATListBasedSettings::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_NATListBasedSettings::getCaption() const
{
	return _caption;
}

void UNIX_NATListBasedSettings::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_NATListBasedSettings::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_NATListBasedSettings::getDescription() const
{
	return _description;
}

void UNIX_NATListBasedSettings::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_NATListBasedSettings::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_NATListBasedSettings::getElementName() const
{
	return _elementName;
}

void UNIX_NATListBasedSettings::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_NATListBasedSettings::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_NATListBasedSettings::getGeneration() const
{
	return _generation;
}

void UNIX_NATListBasedSettings::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_NATListBasedSettings::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_NATListBasedSettings::getConfigurationName() const
{
	return _configurationName;
}

void UNIX_NATListBasedSettings::setConfigurationName(String &value)
{
	_configurationName = value;
}

Boolean UNIX_NATListBasedSettings::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_NATListBasedSettings::getChangeableType() const
{
	return _changeableType;
}

void UNIX_NATListBasedSettings::setChangeableType(Uint16 &value)
{
	_changeableType = value;
}

Boolean UNIX_NATListBasedSettings::getComponentSetting(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPONENT_SETTING, getComponentSetting());
	return true;
}

Array<String> UNIX_NATListBasedSettings::getComponentSetting() const
{
	return _componentSetting;
}

void UNIX_NATListBasedSettings::setComponentSetting(Array<String> &value)
{
	_componentSetting = value;
}

Boolean UNIX_NATListBasedSettings::getSoID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ID, getSoID());
	return true;
}

String UNIX_NATListBasedSettings::getSoID() const
{
	return _soID;
}

void UNIX_NATListBasedSettings::setSoID(String &value)
{
	_soID = value;
}

Boolean UNIX_NATListBasedSettings::getSoOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ORG_ID, getSoOrgID());
	return true;
}

String UNIX_NATListBasedSettings::getSoOrgID() const
{
	return _soOrgID;
}

void UNIX_NATListBasedSettings::setSoOrgID(String &value)
{
	_soOrgID = value;
}

Boolean UNIX_NATListBasedSettings::getIsInside(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_INSIDE, getIsInside());
	return true;
}

Boolean UNIX_NATListBasedSettings::getIsInside() const
{
	return _isInside;
}

void UNIX_NATListBasedSettings::setIsInside(Boolean &value)
{
	_isInside = value;
}

Boolean UNIX_NATListBasedSettings::getAddressExamined(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESS_EXAMINED, getAddressExamined());
	return true;
}

Uint16 UNIX_NATListBasedSettings::getAddressExamined() const
{
	return _addressExamined;
}

void UNIX_NATListBasedSettings::setAddressExamined(Uint16 &value)
{
	_addressExamined = value;
}

Boolean UNIX_NATListBasedSettings::getOverloadingPermitted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OVERLOADING_PERMITTED, getOverloadingPermitted());
	return true;
}

Boolean UNIX_NATListBasedSettings::getOverloadingPermitted() const
{
	return _overloadingPermitted;
}

void UNIX_NATListBasedSettings::setOverloadingPermitted(Boolean &value)
{
	_overloadingPermitted = value;
}


void UNIX_NATListBasedSettings::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("NATListBasedSettings");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_isInside = Boolean(false);
	_addressExamined = Uint16(0);
	_overloadingPermitted = Boolean(false);

}

Boolean UNIX_NATListBasedSettings::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "IsInside"))
			{
				Boolean isInsideValue;
				property.getValue().get(isInsideValue);
				setIsInside(isInsideValue);
			}
			else if (String::equal(property.getName().getString(), "AddressExamined"))
			{
				Uint16 addressExaminedValue;
				property.getValue().get(addressExaminedValue);
				setAddressExamined(addressExaminedValue);
			}
			else if (String::equal(property.getName().getString(), "OverloadingPermitted"))
			{
				Boolean overloadingPermittedValue;
				property.getValue().get(overloadingPermittedValue);
				setOverloadingPermitted(overloadingPermittedValue);
			}
	}
	return true;
}


Boolean UNIX_NATListBasedSettings::initialize()
{
	return false;
}

Boolean UNIX_NATListBasedSettings::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("NATListBasedSettings");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_isInside = Boolean(false);
	_addressExamined = Uint16(0);
	_overloadingPermitted = Boolean(false);
	
	return false;
}

Boolean UNIX_NATListBasedSettings::finalize()
{
	return false;
}


Boolean UNIX_NATListBasedSettings::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_NATListBasedSettings::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_NATListBasedSettings::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_NATListBasedSettings::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_NATListBasedSettings::validateInstance()
{
	return true;
}

