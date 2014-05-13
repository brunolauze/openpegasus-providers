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


UNIX_VLANEndpointSettingData::UNIX_VLANEndpointSettingData(void)
{
}

UNIX_VLANEndpointSettingData::~UNIX_VLANEndpointSettingData(void)
{
}

Boolean UNIX_VLANEndpointSettingData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_VLANEndpointSettingData::getInstanceID() const
{
	return _instanceID;
}

void UNIX_VLANEndpointSettingData::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_VLANEndpointSettingData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_VLANEndpointSettingData::getCaption() const
{
	return _caption;
}

void UNIX_VLANEndpointSettingData::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_VLANEndpointSettingData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_VLANEndpointSettingData::getDescription() const
{
	return _description;
}

void UNIX_VLANEndpointSettingData::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_VLANEndpointSettingData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_VLANEndpointSettingData::getElementName() const
{
	return _elementName;
}

void UNIX_VLANEndpointSettingData::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_VLANEndpointSettingData::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_VLANEndpointSettingData::getGeneration() const
{
	return _generation;
}

void UNIX_VLANEndpointSettingData::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_VLANEndpointSettingData::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_VLANEndpointSettingData::getConfigurationName() const
{
	return _configurationName;
}

void UNIX_VLANEndpointSettingData::setConfigurationName(String &value)
{
	_configurationName = value;
}

Boolean UNIX_VLANEndpointSettingData::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_VLANEndpointSettingData::getChangeableType() const
{
	return _changeableType;
}

void UNIX_VLANEndpointSettingData::setChangeableType(Uint16 &value)
{
	_changeableType = value;
}

Boolean UNIX_VLANEndpointSettingData::getComponentSetting(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPONENT_SETTING, getComponentSetting());
	return true;
}

Array<String> UNIX_VLANEndpointSettingData::getComponentSetting() const
{
	return _componentSetting;
}

void UNIX_VLANEndpointSettingData::setComponentSetting(Array<String> &value)
{
	_componentSetting = value;
}

Boolean UNIX_VLANEndpointSettingData::getSoID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ID, getSoID());
	return true;
}

String UNIX_VLANEndpointSettingData::getSoID() const
{
	return _soID;
}

void UNIX_VLANEndpointSettingData::setSoID(String &value)
{
	_soID = value;
}

Boolean UNIX_VLANEndpointSettingData::getSoOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ORG_ID, getSoOrgID());
	return true;
}

String UNIX_VLANEndpointSettingData::getSoOrgID() const
{
	return _soOrgID;
}

void UNIX_VLANEndpointSettingData::setSoOrgID(String &value)
{
	_soOrgID = value;
}

Boolean UNIX_VLANEndpointSettingData::getPruneEligibleVLANList(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRUNE_ELIGIBLE_VLAN_LIST, getPruneEligibleVLANList());
	return true;
}

Array<Uint16> UNIX_VLANEndpointSettingData::getPruneEligibleVLANList() const
{
	return _pruneEligibleVLANList;
}

void UNIX_VLANEndpointSettingData::setPruneEligibleVLANList(Array<Uint16> &value)
{
	_pruneEligibleVLANList = value;
}

Boolean UNIX_VLANEndpointSettingData::getNativeVLAN(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NATIVE_VLAN, getNativeVLAN());
	return true;
}

Uint16 UNIX_VLANEndpointSettingData::getNativeVLAN() const
{
	return _nativeVLAN;
}

void UNIX_VLANEndpointSettingData::setNativeVLAN(Uint16 &value)
{
	_nativeVLAN = value;
}

Boolean UNIX_VLANEndpointSettingData::getDefaultVLAN(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEFAULT_VLAN, getDefaultVLAN());
	return true;
}

Uint16 UNIX_VLANEndpointSettingData::getDefaultVLAN() const
{
	return _defaultVLAN;
}

void UNIX_VLANEndpointSettingData::setDefaultVLAN(Uint16 &value)
{
	_defaultVLAN = value;
}

Boolean UNIX_VLANEndpointSettingData::getTrunkedVLANList(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRUNKED_VLAN_LIST, getTrunkedVLANList());
	return true;
}

Array<Uint16> UNIX_VLANEndpointSettingData::getTrunkedVLANList() const
{
	return _trunkedVLANList;
}

void UNIX_VLANEndpointSettingData::setTrunkedVLANList(Array<Uint16> &value)
{
	_trunkedVLANList = value;
}

Boolean UNIX_VLANEndpointSettingData::getAccessVLAN(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCESS_VLAN, getAccessVLAN());
	return true;
}

Uint16 UNIX_VLANEndpointSettingData::getAccessVLAN() const
{
	return _accessVLAN;
}

void UNIX_VLANEndpointSettingData::setAccessVLAN(Uint16 &value)
{
	_accessVLAN = value;
}


void UNIX_VLANEndpointSettingData::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("VLANEndpointSettingData");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_pruneEligibleVLANList.clear();
	_nativeVLAN = Uint16(0);
	_defaultVLAN = Uint16(0);
	_trunkedVLANList.clear();
	_accessVLAN = Uint16(0);

}

Boolean UNIX_VLANEndpointSettingData::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "PruneEligibleVLANList"))
			{
				Array<Uint16> pruneEligibleVLANListValue;
				property.getValue().get(pruneEligibleVLANListValue);
				setPruneEligibleVLANList(pruneEligibleVLANListValue);
			}
			else if (String::equal(property.getName().getString(), "NativeVLAN"))
			{
				Uint16 nativeVLANValue;
				property.getValue().get(nativeVLANValue);
				setNativeVLAN(nativeVLANValue);
			}
			else if (String::equal(property.getName().getString(), "DefaultVLAN"))
			{
				Uint16 defaultVLANValue;
				property.getValue().get(defaultVLANValue);
				setDefaultVLAN(defaultVLANValue);
			}
			else if (String::equal(property.getName().getString(), "TrunkedVLANList"))
			{
				Array<Uint16> trunkedVLANListValue;
				property.getValue().get(trunkedVLANListValue);
				setTrunkedVLANList(trunkedVLANListValue);
			}
			else if (String::equal(property.getName().getString(), "AccessVLAN"))
			{
				Uint16 accessVLANValue;
				property.getValue().get(accessVLANValue);
				setAccessVLAN(accessVLANValue);
			}
	}
	return true;
}


Boolean UNIX_VLANEndpointSettingData::initialize()
{
	return false;
}

Boolean UNIX_VLANEndpointSettingData::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("VLANEndpointSettingData");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_pruneEligibleVLANList.clear();
	_nativeVLAN = Uint16(0);
	_defaultVLAN = Uint16(0);
	_trunkedVLANList.clear();
	_accessVLAN = Uint16(0);
	
	return false;
}

Boolean UNIX_VLANEndpointSettingData::finalize()
{
	return false;
}


Boolean UNIX_VLANEndpointSettingData::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_VLANEndpointSettingData::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VLANEndpointSettingData::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VLANEndpointSettingData::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VLANEndpointSettingData::validateInstance()
{
	return true;
}

