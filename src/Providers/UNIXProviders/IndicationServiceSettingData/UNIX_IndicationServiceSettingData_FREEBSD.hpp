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


UNIX_IndicationServiceSettingData::UNIX_IndicationServiceSettingData(void)
{
}

UNIX_IndicationServiceSettingData::~UNIX_IndicationServiceSettingData(void)
{
}

Boolean UNIX_IndicationServiceSettingData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_IndicationServiceSettingData::getInstanceID() const
{
	return _instanceID;
}

void UNIX_IndicationServiceSettingData::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_IndicationServiceSettingData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_IndicationServiceSettingData::getCaption() const
{
	return _caption;
}

void UNIX_IndicationServiceSettingData::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_IndicationServiceSettingData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_IndicationServiceSettingData::getDescription() const
{
	return _description;
}

void UNIX_IndicationServiceSettingData::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_IndicationServiceSettingData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_IndicationServiceSettingData::getElementName() const
{
	return _elementName;
}

void UNIX_IndicationServiceSettingData::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_IndicationServiceSettingData::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_IndicationServiceSettingData::getGeneration() const
{
	return _generation;
}

void UNIX_IndicationServiceSettingData::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_IndicationServiceSettingData::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_IndicationServiceSettingData::getConfigurationName() const
{
	return _configurationName;
}

void UNIX_IndicationServiceSettingData::setConfigurationName(String &value)
{
	_configurationName = value;
}

Boolean UNIX_IndicationServiceSettingData::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_IndicationServiceSettingData::getChangeableType() const
{
	return _changeableType;
}

void UNIX_IndicationServiceSettingData::setChangeableType(Uint16 &value)
{
	_changeableType = value;
}

Boolean UNIX_IndicationServiceSettingData::getComponentSetting(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPONENT_SETTING, getComponentSetting());
	return true;
}

Array<String> UNIX_IndicationServiceSettingData::getComponentSetting() const
{
	return _componentSetting;
}

void UNIX_IndicationServiceSettingData::setComponentSetting(Array<String> &value)
{
	_componentSetting = value;
}

Boolean UNIX_IndicationServiceSettingData::getSoID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ID, getSoID());
	return true;
}

String UNIX_IndicationServiceSettingData::getSoID() const
{
	return _soID;
}

void UNIX_IndicationServiceSettingData::setSoID(String &value)
{
	_soID = value;
}

Boolean UNIX_IndicationServiceSettingData::getSoOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ORG_ID, getSoOrgID());
	return true;
}

String UNIX_IndicationServiceSettingData::getSoOrgID() const
{
	return _soOrgID;
}

void UNIX_IndicationServiceSettingData::setSoOrgID(String &value)
{
	_soOrgID = value;
}

Boolean UNIX_IndicationServiceSettingData::getFilterCreationEnabled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FILTER_CREATION_ENABLED, getFilterCreationEnabled());
	return true;
}

Boolean UNIX_IndicationServiceSettingData::getFilterCreationEnabled() const
{
	return _filterCreationEnabled;
}

void UNIX_IndicationServiceSettingData::setFilterCreationEnabled(Boolean &value)
{
	_filterCreationEnabled = value;
}

Boolean UNIX_IndicationServiceSettingData::getDeliveryRetryAttempts(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELIVERY_RETRY_ATTEMPTS, getDeliveryRetryAttempts());
	return true;
}

Uint16 UNIX_IndicationServiceSettingData::getDeliveryRetryAttempts() const
{
	return _deliveryRetryAttempts;
}

void UNIX_IndicationServiceSettingData::setDeliveryRetryAttempts(Uint16 &value)
{
	_deliveryRetryAttempts = value;
}

Boolean UNIX_IndicationServiceSettingData::getDeliveryRetryInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELIVERY_RETRY_INTERVAL, getDeliveryRetryInterval());
	return true;
}

Uint32 UNIX_IndicationServiceSettingData::getDeliveryRetryInterval() const
{
	return _deliveryRetryInterval;
}

void UNIX_IndicationServiceSettingData::setDeliveryRetryInterval(Uint32 &value)
{
	_deliveryRetryInterval = value;
}

Boolean UNIX_IndicationServiceSettingData::getSubscriptionRemovalAction(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUBSCRIPTION_REMOVAL_ACTION, getSubscriptionRemovalAction());
	return true;
}

Uint16 UNIX_IndicationServiceSettingData::getSubscriptionRemovalAction() const
{
	return _subscriptionRemovalAction;
}

void UNIX_IndicationServiceSettingData::setSubscriptionRemovalAction(Uint16 &value)
{
	_subscriptionRemovalAction = value;
}

Boolean UNIX_IndicationServiceSettingData::getSubscriptionRemovalTimeInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUBSCRIPTION_REMOVAL_TIME_INTERVAL, getSubscriptionRemovalTimeInterval());
	return true;
}

Uint32 UNIX_IndicationServiceSettingData::getSubscriptionRemovalTimeInterval() const
{
	return _subscriptionRemovalTimeInterval;
}

void UNIX_IndicationServiceSettingData::setSubscriptionRemovalTimeInterval(Uint32 &value)
{
	_subscriptionRemovalTimeInterval = value;
}


void UNIX_IndicationServiceSettingData::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("IndicationServiceSettingData");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_filterCreationEnabled = Boolean(false);
	_deliveryRetryAttempts = Uint16(0);
	_deliveryRetryInterval = Uint32(0);
	_subscriptionRemovalAction = Uint16(0);
	_subscriptionRemovalTimeInterval = Uint32(0);

}

Boolean UNIX_IndicationServiceSettingData::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "FilterCreationEnabled"))
			{
				Boolean filterCreationEnabledValue;
				property.getValue().get(filterCreationEnabledValue);
				setFilterCreationEnabled(filterCreationEnabledValue);
			}
			else if (String::equal(property.getName().getString(), "DeliveryRetryAttempts"))
			{
				Uint16 deliveryRetryAttemptsValue;
				property.getValue().get(deliveryRetryAttemptsValue);
				setDeliveryRetryAttempts(deliveryRetryAttemptsValue);
			}
			else if (String::equal(property.getName().getString(), "DeliveryRetryInterval"))
			{
				Uint32 deliveryRetryIntervalValue;
				property.getValue().get(deliveryRetryIntervalValue);
				setDeliveryRetryInterval(deliveryRetryIntervalValue);
			}
			else if (String::equal(property.getName().getString(), "SubscriptionRemovalAction"))
			{
				Uint16 subscriptionRemovalActionValue;
				property.getValue().get(subscriptionRemovalActionValue);
				setSubscriptionRemovalAction(subscriptionRemovalActionValue);
			}
			else if (String::equal(property.getName().getString(), "SubscriptionRemovalTimeInterval"))
			{
				Uint32 subscriptionRemovalTimeIntervalValue;
				property.getValue().get(subscriptionRemovalTimeIntervalValue);
				setSubscriptionRemovalTimeInterval(subscriptionRemovalTimeIntervalValue);
			}
	}
	return true;
}


Boolean UNIX_IndicationServiceSettingData::initialize()
{
	return false;
}

Boolean UNIX_IndicationServiceSettingData::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("IndicationServiceSettingData");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_filterCreationEnabled = Boolean(false);
	_deliveryRetryAttempts = Uint16(0);
	_deliveryRetryInterval = Uint32(0);
	_subscriptionRemovalAction = Uint16(0);
	_subscriptionRemovalTimeInterval = Uint32(0);
	
	return false;
}

Boolean UNIX_IndicationServiceSettingData::finalize()
{
	return false;
}


Boolean UNIX_IndicationServiceSettingData::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_IndicationServiceSettingData::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IndicationServiceSettingData::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IndicationServiceSettingData::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IndicationServiceSettingData::validateInstance()
{
	return true;
}

