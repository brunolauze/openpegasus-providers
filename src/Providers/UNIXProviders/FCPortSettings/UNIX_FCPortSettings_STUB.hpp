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


UNIX_FCPortSettings::UNIX_FCPortSettings(void)
{
}

UNIX_FCPortSettings::~UNIX_FCPortSettings(void)
{
}

Boolean UNIX_FCPortSettings::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_FCPortSettings::getInstanceID() const
{
	return _instanceID;
}

void UNIX_FCPortSettings::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_FCPortSettings::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_FCPortSettings::getCaption() const
{
	return _caption;
}

void UNIX_FCPortSettings::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_FCPortSettings::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_FCPortSettings::getDescription() const
{
	return _description;
}

void UNIX_FCPortSettings::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_FCPortSettings::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_FCPortSettings::getElementName() const
{
	return _elementName;
}

void UNIX_FCPortSettings::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_FCPortSettings::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_FCPortSettings::getGeneration() const
{
	return _generation;
}

void UNIX_FCPortSettings::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_FCPortSettings::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_FCPortSettings::getConfigurationName() const
{
	return _configurationName;
}

void UNIX_FCPortSettings::setConfigurationName(String &value)
{
	_configurationName = value;
}

Boolean UNIX_FCPortSettings::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_FCPortSettings::getChangeableType() const
{
	return _changeableType;
}

void UNIX_FCPortSettings::setChangeableType(Uint16 &value)
{
	_changeableType = value;
}

Boolean UNIX_FCPortSettings::getComponentSetting(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPONENT_SETTING, getComponentSetting());
	return true;
}

Array<String> UNIX_FCPortSettings::getComponentSetting() const
{
	return _componentSetting;
}

void UNIX_FCPortSettings::setComponentSetting(Array<String> &value)
{
	_componentSetting = value;
}

Boolean UNIX_FCPortSettings::getSoID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ID, getSoID());
	return true;
}

String UNIX_FCPortSettings::getSoID() const
{
	return _soID;
}

void UNIX_FCPortSettings::setSoID(String &value)
{
	_soID = value;
}

Boolean UNIX_FCPortSettings::getSoOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ORG_ID, getSoOrgID());
	return true;
}

String UNIX_FCPortSettings::getSoOrgID() const
{
	return _soOrgID;
}

void UNIX_FCPortSettings::setSoOrgID(String &value)
{
	_soOrgID = value;
}

Boolean UNIX_FCPortSettings::getRequestedSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_SPEED, getRequestedSpeed());
	return true;
}

Uint64 UNIX_FCPortSettings::getRequestedSpeed() const
{
	return _requestedSpeed;
}

void UNIX_FCPortSettings::setRequestedSpeed(Uint64 &value)
{
	_requestedSpeed = value;
}

Boolean UNIX_FCPortSettings::getAutoSenseSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTO_SENSE_SPEED, getAutoSenseSpeed());
	return true;
}

Boolean UNIX_FCPortSettings::getAutoSenseSpeed() const
{
	return _autoSenseSpeed;
}

void UNIX_FCPortSettings::setAutoSenseSpeed(Boolean &value)
{
	_autoSenseSpeed = value;
}

Boolean UNIX_FCPortSettings::getNetworkIDs(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NETWORK_IDS, getNetworkIDs());
	return true;
}

Array<String> UNIX_FCPortSettings::getNetworkIDs() const
{
	return _networkIDs;
}

void UNIX_FCPortSettings::setNetworkIDs(Array<String> &value)
{
	_networkIDs = value;
}

Boolean UNIX_FCPortSettings::getLinkTechnology(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LINK_TECHNOLOGY, getLinkTechnology());
	return true;
}

Uint16 UNIX_FCPortSettings::getLinkTechnology() const
{
	return _linkTechnology;
}

void UNIX_FCPortSettings::setLinkTechnology(Uint16 &value)
{
	_linkTechnology = value;
}

Boolean UNIX_FCPortSettings::getRequestedType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_TYPE, getRequestedType());
	return true;
}

Uint16 UNIX_FCPortSettings::getRequestedType() const
{
	return _requestedType;
}

void UNIX_FCPortSettings::setRequestedType(Uint16 &value)
{
	_requestedType = value;
}


void UNIX_FCPortSettings::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("FCPortSettings");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_requestedSpeed = Uint64(0);
	_autoSenseSpeed = Boolean(false);
	_networkIDs.clear();
	_linkTechnology = Uint16(0);
	_requestedType = Uint16(0);

}

Boolean UNIX_FCPortSettings::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "NetworkIDs"))
			{
				Array<String> networkIDsValue;
				property.getValue().get(networkIDsValue);
				setNetworkIDs(networkIDsValue);
			}
			else if (String::equal(property.getName().getString(), "LinkTechnology"))
			{
				Uint16 linkTechnologyValue;
				property.getValue().get(linkTechnologyValue);
				setLinkTechnology(linkTechnologyValue);
			}
			else if (String::equal(property.getName().getString(), "RequestedType"))
			{
				Uint16 requestedTypeValue;
				property.getValue().get(requestedTypeValue);
				setRequestedType(requestedTypeValue);
			}
	}
	return true;
}


Boolean UNIX_FCPortSettings::initialize()
{
	return false;
}

Boolean UNIX_FCPortSettings::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("FCPortSettings");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_requestedSpeed = Uint64(0);
	_autoSenseSpeed = Boolean(false);
	_networkIDs.clear();
	_linkTechnology = Uint16(0);
	_requestedType = Uint16(0);
	
	return false;
}

Boolean UNIX_FCPortSettings::finalize()
{
	return false;
}


Boolean UNIX_FCPortSettings::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_FCPortSettings::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FCPortSettings::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FCPortSettings::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FCPortSettings::validateInstance()
{
	return true;
}

