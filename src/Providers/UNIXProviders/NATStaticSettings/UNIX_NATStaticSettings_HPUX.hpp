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


UNIX_NATStaticSettings::UNIX_NATStaticSettings(void)
{
}

UNIX_NATStaticSettings::~UNIX_NATStaticSettings(void)
{
}

Boolean UNIX_NATStaticSettings::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_NATStaticSettings::getInstanceID() const
{
	return _instanceID;
}

void UNIX_NATStaticSettings::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_NATStaticSettings::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_NATStaticSettings::getCaption() const
{
	return _caption;
}

void UNIX_NATStaticSettings::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_NATStaticSettings::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_NATStaticSettings::getDescription() const
{
	return _description;
}

void UNIX_NATStaticSettings::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_NATStaticSettings::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_NATStaticSettings::getElementName() const
{
	return _elementName;
}

void UNIX_NATStaticSettings::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_NATStaticSettings::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_NATStaticSettings::getGeneration() const
{
	return _generation;
}

void UNIX_NATStaticSettings::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_NATStaticSettings::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_NATStaticSettings::getConfigurationName() const
{
	return _configurationName;
}

void UNIX_NATStaticSettings::setConfigurationName(String &value)
{
	_configurationName = value;
}

Boolean UNIX_NATStaticSettings::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_NATStaticSettings::getChangeableType() const
{
	return _changeableType;
}

void UNIX_NATStaticSettings::setChangeableType(Uint16 &value)
{
	_changeableType = value;
}

Boolean UNIX_NATStaticSettings::getComponentSetting(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPONENT_SETTING, getComponentSetting());
	return true;
}

Array<String> UNIX_NATStaticSettings::getComponentSetting() const
{
	return _componentSetting;
}

void UNIX_NATStaticSettings::setComponentSetting(Array<String> &value)
{
	_componentSetting = value;
}

Boolean UNIX_NATStaticSettings::getSoID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ID, getSoID());
	return true;
}

String UNIX_NATStaticSettings::getSoID() const
{
	return _soID;
}

void UNIX_NATStaticSettings::setSoID(String &value)
{
	_soID = value;
}

Boolean UNIX_NATStaticSettings::getSoOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ORG_ID, getSoOrgID());
	return true;
}

String UNIX_NATStaticSettings::getSoOrgID() const
{
	return _soOrgID;
}

void UNIX_NATStaticSettings::setSoOrgID(String &value)
{
	_soOrgID = value;
}

Boolean UNIX_NATStaticSettings::getIsInside(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_INSIDE, getIsInside());
	return true;
}

Boolean UNIX_NATStaticSettings::getIsInside() const
{
	return _isInside;
}

void UNIX_NATStaticSettings::setIsInside(Boolean &value)
{
	_isInside = value;
}

Boolean UNIX_NATStaticSettings::getAddressExamined(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESS_EXAMINED, getAddressExamined());
	return true;
}

Uint16 UNIX_NATStaticSettings::getAddressExamined() const
{
	return _addressExamined;
}

void UNIX_NATStaticSettings::setAddressExamined(Uint16 &value)
{
	_addressExamined = value;
}

Boolean UNIX_NATStaticSettings::getInsideAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSIDE_ADDRESS, getInsideAddress());
	return true;
}

String UNIX_NATStaticSettings::getInsideAddress() const
{
	return _insideAddress;
}

void UNIX_NATStaticSettings::setInsideAddress(String &value)
{
	_insideAddress = value;
}

Boolean UNIX_NATStaticSettings::getOutsideAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OUTSIDE_ADDRESS, getOutsideAddress());
	return true;
}

String UNIX_NATStaticSettings::getOutsideAddress() const
{
	return _outsideAddress;
}

void UNIX_NATStaticSettings::setOutsideAddress(String &value)
{
	_outsideAddress = value;
}


void UNIX_NATStaticSettings::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("NATStaticSettings");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_isInside = Boolean(false);
	_addressExamined = Uint16(0);
	_insideAddress = String ("");
	_outsideAddress = String ("");

}

Boolean UNIX_NATStaticSettings::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "InsideAddress"))
			{
				String insideAddressValue;
				property.getValue().get(insideAddressValue);
				setInsideAddress(insideAddressValue);
			}
			else if (String::equal(property.getName().getString(), "OutsideAddress"))
			{
				String outsideAddressValue;
				property.getValue().get(outsideAddressValue);
				setOutsideAddress(outsideAddressValue);
			}
	}
	return true;
}


Boolean UNIX_NATStaticSettings::initialize()
{
	return false;
}

Boolean UNIX_NATStaticSettings::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("NATStaticSettings");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_isInside = Boolean(false);
	_addressExamined = Uint16(0);
	_insideAddress = String ("");
	_outsideAddress = String ("");
	
	return false;
}

Boolean UNIX_NATStaticSettings::finalize()
{
	return false;
}


Boolean UNIX_NATStaticSettings::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_NATStaticSettings::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_NATStaticSettings::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_NATStaticSettings::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_NATStaticSettings::validateInstance()
{
	return true;
}

