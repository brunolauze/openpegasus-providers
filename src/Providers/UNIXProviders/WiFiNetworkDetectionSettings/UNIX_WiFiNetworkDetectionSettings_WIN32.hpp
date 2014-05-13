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


UNIX_WiFiNetworkDetectionSettings::UNIX_WiFiNetworkDetectionSettings(void)
{
}

UNIX_WiFiNetworkDetectionSettings::~UNIX_WiFiNetworkDetectionSettings(void)
{
}

Boolean UNIX_WiFiNetworkDetectionSettings::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_WiFiNetworkDetectionSettings::getInstanceID() const
{
	return _instanceID;
}

void UNIX_WiFiNetworkDetectionSettings::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_WiFiNetworkDetectionSettings::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_WiFiNetworkDetectionSettings::getCaption() const
{
	return _caption;
}

void UNIX_WiFiNetworkDetectionSettings::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_WiFiNetworkDetectionSettings::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_WiFiNetworkDetectionSettings::getDescription() const
{
	return _description;
}

void UNIX_WiFiNetworkDetectionSettings::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_WiFiNetworkDetectionSettings::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_WiFiNetworkDetectionSettings::getElementName() const
{
	return _elementName;
}

void UNIX_WiFiNetworkDetectionSettings::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_WiFiNetworkDetectionSettings::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_WiFiNetworkDetectionSettings::getGeneration() const
{
	return _generation;
}

void UNIX_WiFiNetworkDetectionSettings::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_WiFiNetworkDetectionSettings::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_WiFiNetworkDetectionSettings::getConfigurationName() const
{
	return _configurationName;
}

void UNIX_WiFiNetworkDetectionSettings::setConfigurationName(String &value)
{
	_configurationName = value;
}

Boolean UNIX_WiFiNetworkDetectionSettings::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_WiFiNetworkDetectionSettings::getChangeableType() const
{
	return _changeableType;
}

void UNIX_WiFiNetworkDetectionSettings::setChangeableType(Uint16 &value)
{
	_changeableType = value;
}

Boolean UNIX_WiFiNetworkDetectionSettings::getComponentSetting(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPONENT_SETTING, getComponentSetting());
	return true;
}

Array<String> UNIX_WiFiNetworkDetectionSettings::getComponentSetting() const
{
	return _componentSetting;
}

void UNIX_WiFiNetworkDetectionSettings::setComponentSetting(Array<String> &value)
{
	_componentSetting = value;
}

Boolean UNIX_WiFiNetworkDetectionSettings::getSoID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ID, getSoID());
	return true;
}

String UNIX_WiFiNetworkDetectionSettings::getSoID() const
{
	return _soID;
}

void UNIX_WiFiNetworkDetectionSettings::setSoID(String &value)
{
	_soID = value;
}

Boolean UNIX_WiFiNetworkDetectionSettings::getSoOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ORG_ID, getSoOrgID());
	return true;
}

String UNIX_WiFiNetworkDetectionSettings::getSoOrgID() const
{
	return _soOrgID;
}

void UNIX_WiFiNetworkDetectionSettings::setSoOrgID(String &value)
{
	_soOrgID = value;
}

Boolean UNIX_WiFiNetworkDetectionSettings::getTargetNetworkCategories(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TARGET_NETWORK_CATEGORIES, getTargetNetworkCategories());
	return true;
}

Uint16 UNIX_WiFiNetworkDetectionSettings::getTargetNetworkCategories() const
{
	return _targetNetworkCategories;
}

void UNIX_WiFiNetworkDetectionSettings::setTargetNetworkCategories(Uint16 &value)
{
	_targetNetworkCategories = value;
}

Boolean UNIX_WiFiNetworkDetectionSettings::getPreferredNetworks(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PREFERRED_NETWORKS, getPreferredNetworks());
	return true;
}

Array<String> UNIX_WiFiNetworkDetectionSettings::getPreferredNetworks() const
{
	return _preferredNetworks;
}

void UNIX_WiFiNetworkDetectionSettings::setPreferredNetworks(Array<String> &value)
{
	_preferredNetworks = value;
}

Boolean UNIX_WiFiNetworkDetectionSettings::getKnownNetworks(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_KNOWN_NETWORKS, getKnownNetworks());
	return true;
}

Array<String> UNIX_WiFiNetworkDetectionSettings::getKnownNetworks() const
{
	return _knownNetworks;
}

void UNIX_WiFiNetworkDetectionSettings::setKnownNetworks(Array<String> &value)
{
	_knownNetworks = value;
}

Boolean UNIX_WiFiNetworkDetectionSettings::getMinimumSignalStrength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MINIMUM_SIGNAL_STRENGTH, getMinimumSignalStrength());
	return true;
}

Uint16 UNIX_WiFiNetworkDetectionSettings::getMinimumSignalStrength() const
{
	return _minimumSignalStrength;
}

void UNIX_WiFiNetworkDetectionSettings::setMinimumSignalStrength(Uint16 &value)
{
	_minimumSignalStrength = value;
}

Boolean UNIX_WiFiNetworkDetectionSettings::getPortTypes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_TYPES, getPortTypes());
	return true;
}

Array<Uint16> UNIX_WiFiNetworkDetectionSettings::getPortTypes() const
{
	return _portTypes;
}

void UNIX_WiFiNetworkDetectionSettings::setPortTypes(Array<Uint16> &value)
{
	_portTypes = value;
}


void UNIX_WiFiNetworkDetectionSettings::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("WiFiNetworkDetectionSettings");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_targetNetworkCategories = Uint16(0);
	_preferredNetworks.clear();
	_knownNetworks.clear();
	_minimumSignalStrength = Uint16(0);
	_portTypes.clear();

}

Boolean UNIX_WiFiNetworkDetectionSettings::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "TargetNetworkCategories"))
			{
				Uint16 targetNetworkCategoriesValue;
				property.getValue().get(targetNetworkCategoriesValue);
				setTargetNetworkCategories(targetNetworkCategoriesValue);
			}
			else if (String::equal(property.getName().getString(), "PreferredNetworks"))
			{
				Array<String> preferredNetworksValue;
				property.getValue().get(preferredNetworksValue);
				setPreferredNetworks(preferredNetworksValue);
			}
			else if (String::equal(property.getName().getString(), "KnownNetworks"))
			{
				Array<String> knownNetworksValue;
				property.getValue().get(knownNetworksValue);
				setKnownNetworks(knownNetworksValue);
			}
			else if (String::equal(property.getName().getString(), "MinimumSignalStrength"))
			{
				Uint16 minimumSignalStrengthValue;
				property.getValue().get(minimumSignalStrengthValue);
				setMinimumSignalStrength(minimumSignalStrengthValue);
			}
			else if (String::equal(property.getName().getString(), "PortTypes"))
			{
				Array<Uint16> portTypesValue;
				property.getValue().get(portTypesValue);
				setPortTypes(portTypesValue);
			}
	}
	return true;
}


Boolean UNIX_WiFiNetworkDetectionSettings::initialize()
{
	return false;
}

Boolean UNIX_WiFiNetworkDetectionSettings::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("WiFiNetworkDetectionSettings");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_targetNetworkCategories = Uint16(0);
	_preferredNetworks.clear();
	_knownNetworks.clear();
	_minimumSignalStrength = Uint16(0);
	_portTypes.clear();
	
	return false;
}

Boolean UNIX_WiFiNetworkDetectionSettings::finalize()
{
	return false;
}


Boolean UNIX_WiFiNetworkDetectionSettings::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_WiFiNetworkDetectionSettings::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_WiFiNetworkDetectionSettings::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_WiFiNetworkDetectionSettings::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_WiFiNetworkDetectionSettings::validateInstance()
{
	return true;
}

