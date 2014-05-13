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


UNIX_QoSPolicyRuleSettingData::UNIX_QoSPolicyRuleSettingData(void)
{
}

UNIX_QoSPolicyRuleSettingData::~UNIX_QoSPolicyRuleSettingData(void)
{
}

Boolean UNIX_QoSPolicyRuleSettingData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_QoSPolicyRuleSettingData::getInstanceID() const
{
	return _instanceID;
}

void UNIX_QoSPolicyRuleSettingData::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_QoSPolicyRuleSettingData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_QoSPolicyRuleSettingData::getCaption() const
{
	return _caption;
}

void UNIX_QoSPolicyRuleSettingData::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_QoSPolicyRuleSettingData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_QoSPolicyRuleSettingData::getDescription() const
{
	return _description;
}

void UNIX_QoSPolicyRuleSettingData::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_QoSPolicyRuleSettingData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_QoSPolicyRuleSettingData::getElementName() const
{
	return _elementName;
}

void UNIX_QoSPolicyRuleSettingData::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_QoSPolicyRuleSettingData::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_QoSPolicyRuleSettingData::getGeneration() const
{
	return _generation;
}

void UNIX_QoSPolicyRuleSettingData::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_QoSPolicyRuleSettingData::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_QoSPolicyRuleSettingData::getConfigurationName() const
{
	return _configurationName;
}

void UNIX_QoSPolicyRuleSettingData::setConfigurationName(String &value)
{
	_configurationName = value;
}

Boolean UNIX_QoSPolicyRuleSettingData::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_QoSPolicyRuleSettingData::getChangeableType() const
{
	return _changeableType;
}

void UNIX_QoSPolicyRuleSettingData::setChangeableType(Uint16 &value)
{
	_changeableType = value;
}

Boolean UNIX_QoSPolicyRuleSettingData::getComponentSetting(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPONENT_SETTING, getComponentSetting());
	return true;
}

Array<String> UNIX_QoSPolicyRuleSettingData::getComponentSetting() const
{
	return _componentSetting;
}

void UNIX_QoSPolicyRuleSettingData::setComponentSetting(Array<String> &value)
{
	_componentSetting = value;
}

Boolean UNIX_QoSPolicyRuleSettingData::getSoID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ID, getSoID());
	return true;
}

String UNIX_QoSPolicyRuleSettingData::getSoID() const
{
	return _soID;
}

void UNIX_QoSPolicyRuleSettingData::setSoID(String &value)
{
	_soID = value;
}

Boolean UNIX_QoSPolicyRuleSettingData::getSoOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ORG_ID, getSoOrgID());
	return true;
}

String UNIX_QoSPolicyRuleSettingData::getSoOrgID() const
{
	return _soOrgID;
}

void UNIX_QoSPolicyRuleSettingData::setSoOrgID(String &value)
{
	_soOrgID = value;
}

Boolean UNIX_QoSPolicyRuleSettingData::getTransmitBandwidthLimit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSMIT_BANDWIDTH_LIMIT, getTransmitBandwidthLimit());
	return true;
}

Uint64 UNIX_QoSPolicyRuleSettingData::getTransmitBandwidthLimit() const
{
	return _transmitBandwidthLimit;
}

void UNIX_QoSPolicyRuleSettingData::setTransmitBandwidthLimit(Uint64 &value)
{
	_transmitBandwidthLimit = value;
}

Boolean UNIX_QoSPolicyRuleSettingData::getTransmitBandwidthReservation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSMIT_BANDWIDTH_RESERVATION, getTransmitBandwidthReservation());
	return true;
}

Uint64 UNIX_QoSPolicyRuleSettingData::getTransmitBandwidthReservation() const
{
	return _transmitBandwidthReservation;
}

void UNIX_QoSPolicyRuleSettingData::setTransmitBandwidthReservation(Uint64 &value)
{
	_transmitBandwidthReservation = value;
}

Boolean UNIX_QoSPolicyRuleSettingData::getMaxTrafficDelay(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_TRAFFIC_DELAY, getMaxTrafficDelay());
	return true;
}

Uint64 UNIX_QoSPolicyRuleSettingData::getMaxTrafficDelay() const
{
	return _maxTrafficDelay;
}

void UNIX_QoSPolicyRuleSettingData::setMaxTrafficDelay(Uint64 &value)
{
	_maxTrafficDelay = value;
}

Boolean UNIX_QoSPolicyRuleSettingData::getMaxTrafficJitter(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_TRAFFIC_JITTER, getMaxTrafficJitter());
	return true;
}

Uint64 UNIX_QoSPolicyRuleSettingData::getMaxTrafficJitter() const
{
	return _maxTrafficJitter;
}

void UNIX_QoSPolicyRuleSettingData::setMaxTrafficJitter(Uint64 &value)
{
	_maxTrafficJitter = value;
}

Boolean UNIX_QoSPolicyRuleSettingData::getMaxTrafficLoss(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_TRAFFIC_LOSS, getMaxTrafficLoss());
	return true;
}

Real64 UNIX_QoSPolicyRuleSettingData::getMaxTrafficLoss() const
{
	return _maxTrafficLoss;
}

void UNIX_QoSPolicyRuleSettingData::setMaxTrafficLoss(Real64 &value)
{
	_maxTrafficLoss = value;
}

Boolean UNIX_QoSPolicyRuleSettingData::getMaxBurstSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_BURST_SIZE, getMaxBurstSize());
	return true;
}

Uint64 UNIX_QoSPolicyRuleSettingData::getMaxBurstSize() const
{
	return _maxBurstSize;
}

void UNIX_QoSPolicyRuleSettingData::setMaxBurstSize(Uint64 &value)
{
	_maxBurstSize = value;
}

Boolean UNIX_QoSPolicyRuleSettingData::getMinBurstSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIN_BURST_SIZE, getMinBurstSize());
	return true;
}

Uint64 UNIX_QoSPolicyRuleSettingData::getMinBurstSize() const
{
	return _minBurstSize;
}

void UNIX_QoSPolicyRuleSettingData::setMinBurstSize(Uint64 &value)
{
	_minBurstSize = value;
}


void UNIX_QoSPolicyRuleSettingData::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("QoSPolicyRuleSettingData");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_transmitBandwidthLimit = Uint64(0);
	_transmitBandwidthReservation = Uint64(0);
	_maxTrafficDelay = Uint64(0);
	_maxTrafficJitter = Uint64(0);
	_maxTrafficLoss = Real64(0);
	_maxBurstSize = Uint64(0);
	_minBurstSize = Uint64(0);

}

Boolean UNIX_QoSPolicyRuleSettingData::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "TransmitBandwidthLimit"))
			{
				Uint64 transmitBandwidthLimitValue;
				property.getValue().get(transmitBandwidthLimitValue);
				setTransmitBandwidthLimit(transmitBandwidthLimitValue);
			}
			else if (String::equal(property.getName().getString(), "TransmitBandwidthReservation"))
			{
				Uint64 transmitBandwidthReservationValue;
				property.getValue().get(transmitBandwidthReservationValue);
				setTransmitBandwidthReservation(transmitBandwidthReservationValue);
			}
			else if (String::equal(property.getName().getString(), "MaxTrafficDelay"))
			{
				Uint64 maxTrafficDelayValue;
				property.getValue().get(maxTrafficDelayValue);
				setMaxTrafficDelay(maxTrafficDelayValue);
			}
			else if (String::equal(property.getName().getString(), "MaxTrafficJitter"))
			{
				Uint64 maxTrafficJitterValue;
				property.getValue().get(maxTrafficJitterValue);
				setMaxTrafficJitter(maxTrafficJitterValue);
			}
			else if (String::equal(property.getName().getString(), "MaxTrafficLoss"))
			{
				Real64 maxTrafficLossValue;
				property.getValue().get(maxTrafficLossValue);
				setMaxTrafficLoss(maxTrafficLossValue);
			}
			else if (String::equal(property.getName().getString(), "MaxBurstSize"))
			{
				Uint64 maxBurstSizeValue;
				property.getValue().get(maxBurstSizeValue);
				setMaxBurstSize(maxBurstSizeValue);
			}
			else if (String::equal(property.getName().getString(), "MinBurstSize"))
			{
				Uint64 minBurstSizeValue;
				property.getValue().get(minBurstSizeValue);
				setMinBurstSize(minBurstSizeValue);
			}
	}
	return true;
}


Boolean UNIX_QoSPolicyRuleSettingData::initialize()
{
	return false;
}

Boolean UNIX_QoSPolicyRuleSettingData::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("QoSPolicyRuleSettingData");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_transmitBandwidthLimit = Uint64(0);
	_transmitBandwidthReservation = Uint64(0);
	_maxTrafficDelay = Uint64(0);
	_maxTrafficJitter = Uint64(0);
	_maxTrafficLoss = Real64(0);
	_maxBurstSize = Uint64(0);
	_minBurstSize = Uint64(0);
	
	return false;
}

Boolean UNIX_QoSPolicyRuleSettingData::finalize()
{
	return false;
}


Boolean UNIX_QoSPolicyRuleSettingData::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_QoSPolicyRuleSettingData::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_QoSPolicyRuleSettingData::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_QoSPolicyRuleSettingData::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_QoSPolicyRuleSettingData::validateInstance()
{
	return true;
}

