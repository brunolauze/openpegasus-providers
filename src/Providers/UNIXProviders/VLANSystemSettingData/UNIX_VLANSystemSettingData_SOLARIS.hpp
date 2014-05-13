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


UNIX_VLANSystemSettingData::UNIX_VLANSystemSettingData(void)
{
}

UNIX_VLANSystemSettingData::~UNIX_VLANSystemSettingData(void)
{
}

Boolean UNIX_VLANSystemSettingData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_VLANSystemSettingData::getInstanceID() const
{
	return _instanceID;
}

void UNIX_VLANSystemSettingData::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_VLANSystemSettingData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_VLANSystemSettingData::getCaption() const
{
	return _caption;
}

void UNIX_VLANSystemSettingData::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_VLANSystemSettingData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_VLANSystemSettingData::getDescription() const
{
	return _description;
}

void UNIX_VLANSystemSettingData::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_VLANSystemSettingData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_VLANSystemSettingData::getElementName() const
{
	return _elementName;
}

void UNIX_VLANSystemSettingData::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_VLANSystemSettingData::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_VLANSystemSettingData::getGeneration() const
{
	return _generation;
}

void UNIX_VLANSystemSettingData::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_VLANSystemSettingData::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_VLANSystemSettingData::getConfigurationName() const
{
	return _configurationName;
}

void UNIX_VLANSystemSettingData::setConfigurationName(String &value)
{
	_configurationName = value;
}

Boolean UNIX_VLANSystemSettingData::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_VLANSystemSettingData::getChangeableType() const
{
	return _changeableType;
}

void UNIX_VLANSystemSettingData::setChangeableType(Uint16 &value)
{
	_changeableType = value;
}

Boolean UNIX_VLANSystemSettingData::getComponentSetting(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPONENT_SETTING, getComponentSetting());
	return true;
}

Array<String> UNIX_VLANSystemSettingData::getComponentSetting() const
{
	return _componentSetting;
}

void UNIX_VLANSystemSettingData::setComponentSetting(Array<String> &value)
{
	_componentSetting = value;
}

Boolean UNIX_VLANSystemSettingData::getSoID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ID, getSoID());
	return true;
}

String UNIX_VLANSystemSettingData::getSoID() const
{
	return _soID;
}

void UNIX_VLANSystemSettingData::setSoID(String &value)
{
	_soID = value;
}

Boolean UNIX_VLANSystemSettingData::getSoOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ORG_ID, getSoOrgID());
	return true;
}

String UNIX_VLANSystemSettingData::getSoOrgID() const
{
	return _soOrgID;
}

void UNIX_VLANSystemSettingData::setSoOrgID(String &value)
{
	_soOrgID = value;
}

Boolean UNIX_VLANSystemSettingData::getReservedVLANList(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESERVED_VLAN_LIST, getReservedVLANList());
	return true;
}

Array<Uint16> UNIX_VLANSystemSettingData::getReservedVLANList() const
{
	return _reservedVLANList;
}

void UNIX_VLANSystemSettingData::setReservedVLANList(Array<Uint16> &value)
{
	_reservedVLANList = value;
}

Boolean UNIX_VLANSystemSettingData::getInternalVLANList(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INTERNAL_VLAN_LIST, getInternalVLANList());
	return true;
}

Array<Uint16> UNIX_VLANSystemSettingData::getInternalVLANList() const
{
	return _internalVLANList;
}

void UNIX_VLANSystemSettingData::setInternalVLANList(Array<Uint16> &value)
{
	_internalVLANList = value;
}

Boolean UNIX_VLANSystemSettingData::getNumberOfConfiguredVLANs(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_CONFIGURED_VLANS, getNumberOfConfiguredVLANs());
	return true;
}

Uint16 UNIX_VLANSystemSettingData::getNumberOfConfiguredVLANs() const
{
	return _numberOfConfiguredVLANs;
}

void UNIX_VLANSystemSettingData::setNumberOfConfiguredVLANs(Uint16 &value)
{
	_numberOfConfiguredVLANs = value;
}

Boolean UNIX_VLANSystemSettingData::getDynamicVLANList(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DYNAMIC_VLAN_LIST, getDynamicVLANList());
	return true;
}

Array<Uint16> UNIX_VLANSystemSettingData::getDynamicVLANList() const
{
	return _dynamicVLANList;
}

void UNIX_VLANSystemSettingData::setDynamicVLANList(Array<Uint16> &value)
{
	_dynamicVLANList = value;
}

Boolean UNIX_VLANSystemSettingData::getStaticVLANList(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATIC_VLAN_LIST, getStaticVLANList());
	return true;
}

Array<Uint16> UNIX_VLANSystemSettingData::getStaticVLANList() const
{
	return _staticVLANList;
}

void UNIX_VLANSystemSettingData::setStaticVLANList(Array<Uint16> &value)
{
	_staticVLANList = value;
}


void UNIX_VLANSystemSettingData::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("VLANSystemSettingData");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_reservedVLANList.clear();
	_internalVLANList.clear();
	_numberOfConfiguredVLANs = Uint16(0);
	_dynamicVLANList.clear();
	_staticVLANList.clear();

}

Boolean UNIX_VLANSystemSettingData::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "ReservedVLANList"))
			{
				Array<Uint16> reservedVLANListValue;
				property.getValue().get(reservedVLANListValue);
				setReservedVLANList(reservedVLANListValue);
			}
			else if (String::equal(property.getName().getString(), "InternalVLANList"))
			{
				Array<Uint16> internalVLANListValue;
				property.getValue().get(internalVLANListValue);
				setInternalVLANList(internalVLANListValue);
			}
			else if (String::equal(property.getName().getString(), "NumberOfConfiguredVLANs"))
			{
				Uint16 numberOfConfiguredVLANsValue;
				property.getValue().get(numberOfConfiguredVLANsValue);
				setNumberOfConfiguredVLANs(numberOfConfiguredVLANsValue);
			}
			else if (String::equal(property.getName().getString(), "DynamicVLANList"))
			{
				Array<Uint16> dynamicVLANListValue;
				property.getValue().get(dynamicVLANListValue);
				setDynamicVLANList(dynamicVLANListValue);
			}
			else if (String::equal(property.getName().getString(), "StaticVLANList"))
			{
				Array<Uint16> staticVLANListValue;
				property.getValue().get(staticVLANListValue);
				setStaticVLANList(staticVLANListValue);
			}
	}
	return true;
}


Boolean UNIX_VLANSystemSettingData::initialize()
{
	return false;
}

Boolean UNIX_VLANSystemSettingData::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("VLANSystemSettingData");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_reservedVLANList.clear();
	_internalVLANList.clear();
	_numberOfConfiguredVLANs = Uint16(0);
	_dynamicVLANList.clear();
	_staticVLANList.clear();
	
	return false;
}

Boolean UNIX_VLANSystemSettingData::finalize()
{
	return false;
}


Boolean UNIX_VLANSystemSettingData::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_VLANSystemSettingData::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VLANSystemSettingData::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VLANSystemSettingData::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VLANSystemSettingData::validateInstance()
{
	return true;
}

