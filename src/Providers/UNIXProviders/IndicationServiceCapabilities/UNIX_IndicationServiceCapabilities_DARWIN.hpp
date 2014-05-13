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


UNIX_IndicationServiceCapabilities::UNIX_IndicationServiceCapabilities(void)
{
}

UNIX_IndicationServiceCapabilities::~UNIX_IndicationServiceCapabilities(void)
{
}

Boolean UNIX_IndicationServiceCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_IndicationServiceCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_IndicationServiceCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_IndicationServiceCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_IndicationServiceCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_IndicationServiceCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_IndicationServiceCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_IndicationServiceCapabilities::getDescription() const
{
	return _description;
}

void UNIX_IndicationServiceCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_IndicationServiceCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_IndicationServiceCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_IndicationServiceCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_IndicationServiceCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_IndicationServiceCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_IndicationServiceCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_IndicationServiceCapabilities::getFilterCreationEnabledIsSettable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FILTER_CREATION_ENABLED_IS_SETTABLE, getFilterCreationEnabledIsSettable());
	return true;
}

Boolean UNIX_IndicationServiceCapabilities::getFilterCreationEnabledIsSettable() const
{
	return _filterCreationEnabledIsSettable;
}

void UNIX_IndicationServiceCapabilities::setFilterCreationEnabledIsSettable(Boolean &value)
{
	_filterCreationEnabledIsSettable = value;
}

Boolean UNIX_IndicationServiceCapabilities::getDeliveryRetryAttemptsIsSettable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELIVERY_RETRY_ATTEMPTS_IS_SETTABLE, getDeliveryRetryAttemptsIsSettable());
	return true;
}

Boolean UNIX_IndicationServiceCapabilities::getDeliveryRetryAttemptsIsSettable() const
{
	return _deliveryRetryAttemptsIsSettable;
}

void UNIX_IndicationServiceCapabilities::setDeliveryRetryAttemptsIsSettable(Boolean &value)
{
	_deliveryRetryAttemptsIsSettable = value;
}

Boolean UNIX_IndicationServiceCapabilities::getDeliveryRetryIntervalIsSettable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELIVERY_RETRY_INTERVAL_IS_SETTABLE, getDeliveryRetryIntervalIsSettable());
	return true;
}

Boolean UNIX_IndicationServiceCapabilities::getDeliveryRetryIntervalIsSettable() const
{
	return _deliveryRetryIntervalIsSettable;
}

void UNIX_IndicationServiceCapabilities::setDeliveryRetryIntervalIsSettable(Boolean &value)
{
	_deliveryRetryIntervalIsSettable = value;
}

Boolean UNIX_IndicationServiceCapabilities::getSubscriptionRemovalActionIsSettable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUBSCRIPTION_REMOVAL_ACTION_IS_SETTABLE, getSubscriptionRemovalActionIsSettable());
	return true;
}

Boolean UNIX_IndicationServiceCapabilities::getSubscriptionRemovalActionIsSettable() const
{
	return _subscriptionRemovalActionIsSettable;
}

void UNIX_IndicationServiceCapabilities::setSubscriptionRemovalActionIsSettable(Boolean &value)
{
	_subscriptionRemovalActionIsSettable = value;
}

Boolean UNIX_IndicationServiceCapabilities::getSubscriptionRemovalTimeIntervalIsSettable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUBSCRIPTION_REMOVAL_TIME_INTERVAL_IS_SETTABLE, getSubscriptionRemovalTimeIntervalIsSettable());
	return true;
}

Boolean UNIX_IndicationServiceCapabilities::getSubscriptionRemovalTimeIntervalIsSettable() const
{
	return _subscriptionRemovalTimeIntervalIsSettable;
}

void UNIX_IndicationServiceCapabilities::setSubscriptionRemovalTimeIntervalIsSettable(Boolean &value)
{
	_subscriptionRemovalTimeIntervalIsSettable = value;
}

Boolean UNIX_IndicationServiceCapabilities::getMaxListenerDestinations(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_LISTENER_DESTINATIONS, getMaxListenerDestinations());
	return true;
}

Uint32 UNIX_IndicationServiceCapabilities::getMaxListenerDestinations() const
{
	return _maxListenerDestinations;
}

void UNIX_IndicationServiceCapabilities::setMaxListenerDestinations(Uint32 &value)
{
	_maxListenerDestinations = value;
}

Boolean UNIX_IndicationServiceCapabilities::getMaxActiveSubscriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_ACTIVE_SUBSCRIPTIONS, getMaxActiveSubscriptions());
	return true;
}

Uint32 UNIX_IndicationServiceCapabilities::getMaxActiveSubscriptions() const
{
	return _maxActiveSubscriptions;
}

void UNIX_IndicationServiceCapabilities::setMaxActiveSubscriptions(Uint32 &value)
{
	_maxActiveSubscriptions = value;
}

Boolean UNIX_IndicationServiceCapabilities::getSubscriptionsPersisted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUBSCRIPTIONS_PERSISTED, getSubscriptionsPersisted());
	return true;
}

Boolean UNIX_IndicationServiceCapabilities::getSubscriptionsPersisted() const
{
	return _subscriptionsPersisted;
}

void UNIX_IndicationServiceCapabilities::setSubscriptionsPersisted(Boolean &value)
{
	_subscriptionsPersisted = value;
}


void UNIX_IndicationServiceCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("IndicationServiceCapabilities");
	_generation = Uint64(0);
	_filterCreationEnabledIsSettable = Boolean(false);
	_deliveryRetryAttemptsIsSettable = Boolean(false);
	_deliveryRetryIntervalIsSettable = Boolean(false);
	_subscriptionRemovalActionIsSettable = Boolean(false);
	_subscriptionRemovalTimeIntervalIsSettable = Boolean(false);
	_maxListenerDestinations = Uint32(0);
	_maxActiveSubscriptions = Uint32(0);
	_subscriptionsPersisted = Boolean(false);

}

Boolean UNIX_IndicationServiceCapabilities::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "FilterCreationEnabledIsSettable"))
			{
				Boolean filterCreationEnabledIsSettableValue;
				property.getValue().get(filterCreationEnabledIsSettableValue);
				setFilterCreationEnabledIsSettable(filterCreationEnabledIsSettableValue);
			}
			else if (String::equal(property.getName().getString(), "DeliveryRetryAttemptsIsSettable"))
			{
				Boolean deliveryRetryAttemptsIsSettableValue;
				property.getValue().get(deliveryRetryAttemptsIsSettableValue);
				setDeliveryRetryAttemptsIsSettable(deliveryRetryAttemptsIsSettableValue);
			}
			else if (String::equal(property.getName().getString(), "DeliveryRetryIntervalIsSettable"))
			{
				Boolean deliveryRetryIntervalIsSettableValue;
				property.getValue().get(deliveryRetryIntervalIsSettableValue);
				setDeliveryRetryIntervalIsSettable(deliveryRetryIntervalIsSettableValue);
			}
			else if (String::equal(property.getName().getString(), "SubscriptionRemovalActionIsSettable"))
			{
				Boolean subscriptionRemovalActionIsSettableValue;
				property.getValue().get(subscriptionRemovalActionIsSettableValue);
				setSubscriptionRemovalActionIsSettable(subscriptionRemovalActionIsSettableValue);
			}
			else if (String::equal(property.getName().getString(), "SubscriptionRemovalTimeIntervalIsSettable"))
			{
				Boolean subscriptionRemovalTimeIntervalIsSettableValue;
				property.getValue().get(subscriptionRemovalTimeIntervalIsSettableValue);
				setSubscriptionRemovalTimeIntervalIsSettable(subscriptionRemovalTimeIntervalIsSettableValue);
			}
			else if (String::equal(property.getName().getString(), "MaxListenerDestinations"))
			{
				Uint32 maxListenerDestinationsValue;
				property.getValue().get(maxListenerDestinationsValue);
				setMaxListenerDestinations(maxListenerDestinationsValue);
			}
			else if (String::equal(property.getName().getString(), "MaxActiveSubscriptions"))
			{
				Uint32 maxActiveSubscriptionsValue;
				property.getValue().get(maxActiveSubscriptionsValue);
				setMaxActiveSubscriptions(maxActiveSubscriptionsValue);
			}
			else if (String::equal(property.getName().getString(), "SubscriptionsPersisted"))
			{
				Boolean subscriptionsPersistedValue;
				property.getValue().get(subscriptionsPersistedValue);
				setSubscriptionsPersisted(subscriptionsPersistedValue);
			}
	}
	return true;
}

Uint16 UNIX_IndicationServiceCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}


Boolean UNIX_IndicationServiceCapabilities::initialize()
{
	return false;
}

Boolean UNIX_IndicationServiceCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("IndicationServiceCapabilities");
	_generation = Uint64(0);
	_filterCreationEnabledIsSettable = Boolean(false);
	_deliveryRetryAttemptsIsSettable = Boolean(false);
	_deliveryRetryIntervalIsSettable = Boolean(false);
	_subscriptionRemovalActionIsSettable = Boolean(false);
	_subscriptionRemovalTimeIntervalIsSettable = Boolean(false);
	_maxListenerDestinations = Uint32(0);
	_maxActiveSubscriptions = Uint32(0);
	_subscriptionsPersisted = Boolean(false);
	
	return false;
}

Boolean UNIX_IndicationServiceCapabilities::finalize()
{
	return false;
}


Boolean UNIX_IndicationServiceCapabilities::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_IndicationServiceCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IndicationServiceCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IndicationServiceCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IndicationServiceCapabilities::validateInstance()
{
	return true;
}

