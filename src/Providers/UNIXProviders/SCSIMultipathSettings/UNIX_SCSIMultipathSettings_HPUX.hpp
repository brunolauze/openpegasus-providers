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


UNIX_SCSIMultipathSettings::UNIX_SCSIMultipathSettings(void)
{
}

UNIX_SCSIMultipathSettings::~UNIX_SCSIMultipathSettings(void)
{
}

Boolean UNIX_SCSIMultipathSettings::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_SCSIMultipathSettings::getInstanceID() const
{
	return _instanceID;
}

void UNIX_SCSIMultipathSettings::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_SCSIMultipathSettings::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_SCSIMultipathSettings::getCaption() const
{
	return _caption;
}

void UNIX_SCSIMultipathSettings::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_SCSIMultipathSettings::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_SCSIMultipathSettings::getDescription() const
{
	return _description;
}

void UNIX_SCSIMultipathSettings::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_SCSIMultipathSettings::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_SCSIMultipathSettings::getElementName() const
{
	return _elementName;
}

void UNIX_SCSIMultipathSettings::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_SCSIMultipathSettings::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_SCSIMultipathSettings::getGeneration() const
{
	return _generation;
}

void UNIX_SCSIMultipathSettings::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_SCSIMultipathSettings::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_SCSIMultipathSettings::getConfigurationName() const
{
	return _configurationName;
}

void UNIX_SCSIMultipathSettings::setConfigurationName(String &value)
{
	_configurationName = value;
}

Boolean UNIX_SCSIMultipathSettings::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_SCSIMultipathSettings::getChangeableType() const
{
	return _changeableType;
}

void UNIX_SCSIMultipathSettings::setChangeableType(Uint16 &value)
{
	_changeableType = value;
}

Boolean UNIX_SCSIMultipathSettings::getComponentSetting(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPONENT_SETTING, getComponentSetting());
	return true;
}

Array<String> UNIX_SCSIMultipathSettings::getComponentSetting() const
{
	return _componentSetting;
}

void UNIX_SCSIMultipathSettings::setComponentSetting(Array<String> &value)
{
	_componentSetting = value;
}

Boolean UNIX_SCSIMultipathSettings::getSoID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ID, getSoID());
	return true;
}

String UNIX_SCSIMultipathSettings::getSoID() const
{
	return _soID;
}

void UNIX_SCSIMultipathSettings::setSoID(String &value)
{
	_soID = value;
}

Boolean UNIX_SCSIMultipathSettings::getSoOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ORG_ID, getSoOrgID());
	return true;
}

String UNIX_SCSIMultipathSettings::getSoOrgID() const
{
	return _soOrgID;
}

void UNIX_SCSIMultipathSettings::setSoOrgID(String &value)
{
	_soOrgID = value;
}

Boolean UNIX_SCSIMultipathSettings::getAsymmetric(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ASYMMETRIC, getAsymmetric());
	return true;
}

Boolean UNIX_SCSIMultipathSettings::getAsymmetric() const
{
	return _asymmetric;
}

void UNIX_SCSIMultipathSettings::setAsymmetric(Boolean &value)
{
	_asymmetric = value;
}

Boolean UNIX_SCSIMultipathSettings::getCurrentLoadBalanceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_LOAD_BALANCE_TYPE, getCurrentLoadBalanceType());
	return true;
}

Uint16 UNIX_SCSIMultipathSettings::getCurrentLoadBalanceType() const
{
	return _currentLoadBalanceType;
}

void UNIX_SCSIMultipathSettings::setCurrentLoadBalanceType(Uint16 &value)
{
	_currentLoadBalanceType = value;
}

Boolean UNIX_SCSIMultipathSettings::getOtherCurrentLoadBalanceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_CURRENT_LOAD_BALANCE_TYPE, getOtherCurrentLoadBalanceType());
	return true;
}

String UNIX_SCSIMultipathSettings::getOtherCurrentLoadBalanceType() const
{
	return _otherCurrentLoadBalanceType;
}

void UNIX_SCSIMultipathSettings::setOtherCurrentLoadBalanceType(String &value)
{
	_otherCurrentLoadBalanceType = value;
}

Boolean UNIX_SCSIMultipathSettings::getAutoFailbackEnabled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTO_FAILBACK_ENABLED, getAutoFailbackEnabled());
	return true;
}

Uint16 UNIX_SCSIMultipathSettings::getAutoFailbackEnabled() const
{
	return _autoFailbackEnabled;
}

void UNIX_SCSIMultipathSettings::setAutoFailbackEnabled(Uint16 &value)
{
	_autoFailbackEnabled = value;
}

Boolean UNIX_SCSIMultipathSettings::getPollingRateMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLLING_RATE_MAX, getPollingRateMax());
	return true;
}

Uint32 UNIX_SCSIMultipathSettings::getPollingRateMax() const
{
	return _pollingRateMax;
}

void UNIX_SCSIMultipathSettings::setPollingRateMax(Uint32 &value)
{
	_pollingRateMax = value;
}

Boolean UNIX_SCSIMultipathSettings::getCurrentPollingRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_POLLING_RATE, getCurrentPollingRate());
	return true;
}

Uint32 UNIX_SCSIMultipathSettings::getCurrentPollingRate() const
{
	return _currentPollingRate;
}

void UNIX_SCSIMultipathSettings::setCurrentPollingRate(Uint32 &value)
{
	_currentPollingRate = value;
}


void UNIX_SCSIMultipathSettings::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("SCSIMultipathSettings");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_asymmetric = Boolean(false);
	_currentLoadBalanceType = Uint16(0);
	_otherCurrentLoadBalanceType = String ("");
	_autoFailbackEnabled = Uint16(0);
	_pollingRateMax = Uint32(0);
	_currentPollingRate = Uint32(0);

}

Boolean UNIX_SCSIMultipathSettings::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "Asymmetric"))
			{
				Boolean asymmetricValue;
				property.getValue().get(asymmetricValue);
				setAsymmetric(asymmetricValue);
			}
			else if (String::equal(property.getName().getString(), "CurrentLoadBalanceType"))
			{
				Uint16 currentLoadBalanceTypeValue;
				property.getValue().get(currentLoadBalanceTypeValue);
				setCurrentLoadBalanceType(currentLoadBalanceTypeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherCurrentLoadBalanceType"))
			{
				String otherCurrentLoadBalanceTypeValue;
				property.getValue().get(otherCurrentLoadBalanceTypeValue);
				setOtherCurrentLoadBalanceType(otherCurrentLoadBalanceTypeValue);
			}
			else if (String::equal(property.getName().getString(), "AutoFailbackEnabled"))
			{
				Uint16 autoFailbackEnabledValue;
				property.getValue().get(autoFailbackEnabledValue);
				setAutoFailbackEnabled(autoFailbackEnabledValue);
			}
			else if (String::equal(property.getName().getString(), "PollingRateMax"))
			{
				Uint32 pollingRateMaxValue;
				property.getValue().get(pollingRateMaxValue);
				setPollingRateMax(pollingRateMaxValue);
			}
			else if (String::equal(property.getName().getString(), "CurrentPollingRate"))
			{
				Uint32 currentPollingRateValue;
				property.getValue().get(currentPollingRateValue);
				setCurrentPollingRate(currentPollingRateValue);
			}
	}
	return true;
}


Boolean UNIX_SCSIMultipathSettings::initialize()
{
	return false;
}

Boolean UNIX_SCSIMultipathSettings::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("SCSIMultipathSettings");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_asymmetric = Boolean(false);
	_currentLoadBalanceType = Uint16(0);
	_otherCurrentLoadBalanceType = String ("");
	_autoFailbackEnabled = Uint16(0);
	_pollingRateMax = Uint32(0);
	_currentPollingRate = Uint32(0);
	
	return false;
}

Boolean UNIX_SCSIMultipathSettings::finalize()
{
	return false;
}


Boolean UNIX_SCSIMultipathSettings::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_SCSIMultipathSettings::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SCSIMultipathSettings::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SCSIMultipathSettings::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SCSIMultipathSettings::validateInstance()
{
	return true;
}

