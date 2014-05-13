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


UNIX_LoadBalancingActionSettingData::UNIX_LoadBalancingActionSettingData(void)
{
}

UNIX_LoadBalancingActionSettingData::~UNIX_LoadBalancingActionSettingData(void)
{
}

Boolean UNIX_LoadBalancingActionSettingData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_LoadBalancingActionSettingData::getInstanceID() const
{
	return _instanceID;
}

void UNIX_LoadBalancingActionSettingData::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_LoadBalancingActionSettingData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_LoadBalancingActionSettingData::getCaption() const
{
	return _caption;
}

void UNIX_LoadBalancingActionSettingData::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_LoadBalancingActionSettingData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_LoadBalancingActionSettingData::getDescription() const
{
	return _description;
}

void UNIX_LoadBalancingActionSettingData::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_LoadBalancingActionSettingData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_LoadBalancingActionSettingData::getElementName() const
{
	return _elementName;
}

void UNIX_LoadBalancingActionSettingData::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_LoadBalancingActionSettingData::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_LoadBalancingActionSettingData::getGeneration() const
{
	return _generation;
}

void UNIX_LoadBalancingActionSettingData::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_LoadBalancingActionSettingData::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_LoadBalancingActionSettingData::getConfigurationName() const
{
	return _configurationName;
}

void UNIX_LoadBalancingActionSettingData::setConfigurationName(String &value)
{
	_configurationName = value;
}

Boolean UNIX_LoadBalancingActionSettingData::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_LoadBalancingActionSettingData::getChangeableType() const
{
	return _changeableType;
}

void UNIX_LoadBalancingActionSettingData::setChangeableType(Uint16 &value)
{
	_changeableType = value;
}

Boolean UNIX_LoadBalancingActionSettingData::getComponentSetting(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPONENT_SETTING, getComponentSetting());
	return true;
}

Array<String> UNIX_LoadBalancingActionSettingData::getComponentSetting() const
{
	return _componentSetting;
}

void UNIX_LoadBalancingActionSettingData::setComponentSetting(Array<String> &value)
{
	_componentSetting = value;
}

Boolean UNIX_LoadBalancingActionSettingData::getSoID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ID, getSoID());
	return true;
}

String UNIX_LoadBalancingActionSettingData::getSoID() const
{
	return _soID;
}

void UNIX_LoadBalancingActionSettingData::setSoID(String &value)
{
	_soID = value;
}

Boolean UNIX_LoadBalancingActionSettingData::getSoOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ORG_ID, getSoOrgID());
	return true;
}

String UNIX_LoadBalancingActionSettingData::getSoOrgID() const
{
	return _soOrgID;
}

void UNIX_LoadBalancingActionSettingData::setSoOrgID(String &value)
{
	_soOrgID = value;
}

Boolean UNIX_LoadBalancingActionSettingData::getHealthCheckPolicyType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_CHECK_POLICY_TYPE, getHealthCheckPolicyType());
	return true;
}

Uint16 UNIX_LoadBalancingActionSettingData::getHealthCheckPolicyType() const
{
	return _healthCheckPolicyType;
}

void UNIX_LoadBalancingActionSettingData::setHealthCheckPolicyType(Uint16 &value)
{
	_healthCheckPolicyType = value;
}

Boolean UNIX_LoadBalancingActionSettingData::getHealthCheckPolicyValueType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_CHECK_POLICY_VALUE_TYPE, getHealthCheckPolicyValueType());
	return true;
}

Uint16 UNIX_LoadBalancingActionSettingData::getHealthCheckPolicyValueType() const
{
	return _healthCheckPolicyValueType;
}

void UNIX_LoadBalancingActionSettingData::setHealthCheckPolicyValueType(Uint16 &value)
{
	_healthCheckPolicyValueType = value;
}

Boolean UNIX_LoadBalancingActionSettingData::getHealthCheckPolicyValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_CHECK_POLICY_VALUE, getHealthCheckPolicyValue());
	return true;
}

String UNIX_LoadBalancingActionSettingData::getHealthCheckPolicyValue() const
{
	return _healthCheckPolicyValue;
}

void UNIX_LoadBalancingActionSettingData::setHealthCheckPolicyValue(String &value)
{
	_healthCheckPolicyValue = value;
}

Boolean UNIX_LoadBalancingActionSettingData::getHealthCheckPolicyFailDetectCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_CHECK_POLICY_FAIL_DETECT_COUNT, getHealthCheckPolicyFailDetectCount());
	return true;
}

Uint16 UNIX_LoadBalancingActionSettingData::getHealthCheckPolicyFailDetectCount() const
{
	return _healthCheckPolicyFailDetectCount;
}

void UNIX_LoadBalancingActionSettingData::setHealthCheckPolicyFailDetectCount(Uint16 &value)
{
	_healthCheckPolicyFailDetectCount = value;
}

Boolean UNIX_LoadBalancingActionSettingData::getHealthCheckPolicyInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_CHECK_POLICY_INTERVAL, getHealthCheckPolicyInterval());
	return true;
}

CIMDateTime UNIX_LoadBalancingActionSettingData::getHealthCheckPolicyInterval() const
{
	return _healthCheckPolicyInterval;
}

void UNIX_LoadBalancingActionSettingData::setHealthCheckPolicyInterval(CIMDateTime &value)
{
	_healthCheckPolicyInterval = value;
}

Boolean UNIX_LoadBalancingActionSettingData::getHealthCheckPolicyIntervalForRecovery(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_CHECK_POLICY_INTERVAL_FOR_RECOVERY, getHealthCheckPolicyIntervalForRecovery());
	return true;
}

CIMDateTime UNIX_LoadBalancingActionSettingData::getHealthCheckPolicyIntervalForRecovery() const
{
	return _healthCheckPolicyIntervalForRecovery;
}

void UNIX_LoadBalancingActionSettingData::setHealthCheckPolicyIntervalForRecovery(CIMDateTime &value)
{
	_healthCheckPolicyIntervalForRecovery = value;
}

Boolean UNIX_LoadBalancingActionSettingData::getHealthCheckTimeout(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_CHECK_TIMEOUT, getHealthCheckTimeout());
	return true;
}

CIMDateTime UNIX_LoadBalancingActionSettingData::getHealthCheckTimeout() const
{
	return _healthCheckTimeout;
}

void UNIX_LoadBalancingActionSettingData::setHealthCheckTimeout(CIMDateTime &value)
{
	_healthCheckTimeout = value;
}

Boolean UNIX_LoadBalancingActionSettingData::getHealthCheckHitsForRecovery(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_CHECK_HITS_FOR_RECOVERY, getHealthCheckHitsForRecovery());
	return true;
}

Uint16 UNIX_LoadBalancingActionSettingData::getHealthCheckHitsForRecovery() const
{
	return _healthCheckHitsForRecovery;
}

void UNIX_LoadBalancingActionSettingData::setHealthCheckHitsForRecovery(Uint16 &value)
{
	_healthCheckHitsForRecovery = value;
}

Boolean UNIX_LoadBalancingActionSettingData::getPersistenceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERSISTENCE_TYPE, getPersistenceType());
	return true;
}

Uint16 UNIX_LoadBalancingActionSettingData::getPersistenceType() const
{
	return _persistenceType;
}

void UNIX_LoadBalancingActionSettingData::setPersistenceType(Uint16 &value)
{
	_persistenceType = value;
}

Boolean UNIX_LoadBalancingActionSettingData::getPersistenceValueType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERSISTENCE_VALUE_TYPE, getPersistenceValueType());
	return true;
}

Uint16 UNIX_LoadBalancingActionSettingData::getPersistenceValueType() const
{
	return _persistenceValueType;
}

void UNIX_LoadBalancingActionSettingData::setPersistenceValueType(Uint16 &value)
{
	_persistenceValueType = value;
}

Boolean UNIX_LoadBalancingActionSettingData::getPersistenceValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERSISTENCE_VALUE, getPersistenceValue());
	return true;
}

String UNIX_LoadBalancingActionSettingData::getPersistenceValue() const
{
	return _persistenceValue;
}

void UNIX_LoadBalancingActionSettingData::setPersistenceValue(String &value)
{
	_persistenceValue = value;
}

Boolean UNIX_LoadBalancingActionSettingData::getPersistenceTimeout(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERSISTENCE_TIMEOUT, getPersistenceTimeout());
	return true;
}

CIMDateTime UNIX_LoadBalancingActionSettingData::getPersistenceTimeout() const
{
	return _persistenceTimeout;
}

void UNIX_LoadBalancingActionSettingData::setPersistenceTimeout(CIMDateTime &value)
{
	_persistenceTimeout = value;
}

Boolean UNIX_LoadBalancingActionSettingData::getConnectionNormalLimit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONNECTION_NORMAL_LIMIT, getConnectionNormalLimit());
	return true;
}

Uint64 UNIX_LoadBalancingActionSettingData::getConnectionNormalLimit() const
{
	return _connectionNormalLimit;
}

void UNIX_LoadBalancingActionSettingData::setConnectionNormalLimit(Uint64 &value)
{
	_connectionNormalLimit = value;
}

Boolean UNIX_LoadBalancingActionSettingData::getConnectionMaxLimit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONNECTION_MAX_LIMIT, getConnectionMaxLimit());
	return true;
}

Uint64 UNIX_LoadBalancingActionSettingData::getConnectionMaxLimit() const
{
	return _connectionMaxLimit;
}

void UNIX_LoadBalancingActionSettingData::setConnectionMaxLimit(Uint64 &value)
{
	_connectionMaxLimit = value;
}

Boolean UNIX_LoadBalancingActionSettingData::getBandwidthNormalLimit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BANDWIDTH_NORMAL_LIMIT, getBandwidthNormalLimit());
	return true;
}

Uint64 UNIX_LoadBalancingActionSettingData::getBandwidthNormalLimit() const
{
	return _bandwidthNormalLimit;
}

void UNIX_LoadBalancingActionSettingData::setBandwidthNormalLimit(Uint64 &value)
{
	_bandwidthNormalLimit = value;
}

Boolean UNIX_LoadBalancingActionSettingData::getBandwidthMaxLimit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BANDWIDTH_MAX_LIMIT, getBandwidthMaxLimit());
	return true;
}

Uint64 UNIX_LoadBalancingActionSettingData::getBandwidthMaxLimit() const
{
	return _bandwidthMaxLimit;
}

void UNIX_LoadBalancingActionSettingData::setBandwidthMaxLimit(Uint64 &value)
{
	_bandwidthMaxLimit = value;
}

Boolean UNIX_LoadBalancingActionSettingData::getEncryptionAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENCRYPTION_ALGORITHM, getEncryptionAlgorithm());
	return true;
}

Uint16 UNIX_LoadBalancingActionSettingData::getEncryptionAlgorithm() const
{
	return _encryptionAlgorithm;
}

void UNIX_LoadBalancingActionSettingData::setEncryptionAlgorithm(Uint16 &value)
{
	_encryptionAlgorithm = value;
}


void UNIX_LoadBalancingActionSettingData::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("LoadBalancingActionSettingData");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_healthCheckPolicyType = Uint16(0);
	_healthCheckPolicyValueType = Uint16(0);
	_healthCheckPolicyValue = String ("");
	_healthCheckPolicyFailDetectCount = Uint16(0);
	_healthCheckPolicyInterval = CIMHelper::getCurrentTime();
	_healthCheckPolicyIntervalForRecovery = CIMHelper::getCurrentTime();
	_healthCheckTimeout = CIMHelper::getCurrentTime();
	_healthCheckHitsForRecovery = Uint16(0);
	_persistenceType = Uint16(0);
	_persistenceValueType = Uint16(0);
	_persistenceValue = String ("");
	_persistenceTimeout = CIMHelper::getCurrentTime();
	_connectionNormalLimit = Uint64(0);
	_connectionMaxLimit = Uint64(0);
	_bandwidthNormalLimit = Uint64(0);
	_bandwidthMaxLimit = Uint64(0);
	_encryptionAlgorithm = Uint16(0);

}

Boolean UNIX_LoadBalancingActionSettingData::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "HealthCheckPolicyType"))
			{
				Uint16 healthCheckPolicyTypeValue;
				property.getValue().get(healthCheckPolicyTypeValue);
				setHealthCheckPolicyType(healthCheckPolicyTypeValue);
			}
			else if (String::equal(property.getName().getString(), "HealthCheckPolicyValueType"))
			{
				Uint16 healthCheckPolicyValueTypeValue;
				property.getValue().get(healthCheckPolicyValueTypeValue);
				setHealthCheckPolicyValueType(healthCheckPolicyValueTypeValue);
			}
			else if (String::equal(property.getName().getString(), "HealthCheckPolicyValue"))
			{
				String healthCheckPolicyValueValue;
				property.getValue().get(healthCheckPolicyValueValue);
				setHealthCheckPolicyValue(healthCheckPolicyValueValue);
			}
			else if (String::equal(property.getName().getString(), "HealthCheckPolicyFailDetectCount"))
			{
				Uint16 healthCheckPolicyFailDetectCountValue;
				property.getValue().get(healthCheckPolicyFailDetectCountValue);
				setHealthCheckPolicyFailDetectCount(healthCheckPolicyFailDetectCountValue);
			}
			else if (String::equal(property.getName().getString(), "HealthCheckPolicyInterval"))
			{
				CIMDateTime healthCheckPolicyIntervalValue;
				property.getValue().get(healthCheckPolicyIntervalValue);
				setHealthCheckPolicyInterval(healthCheckPolicyIntervalValue);
			}
			else if (String::equal(property.getName().getString(), "HealthCheckPolicyIntervalForRecovery"))
			{
				CIMDateTime healthCheckPolicyIntervalForRecoveryValue;
				property.getValue().get(healthCheckPolicyIntervalForRecoveryValue);
				setHealthCheckPolicyIntervalForRecovery(healthCheckPolicyIntervalForRecoveryValue);
			}
			else if (String::equal(property.getName().getString(), "HealthCheckTimeout"))
			{
				CIMDateTime healthCheckTimeoutValue;
				property.getValue().get(healthCheckTimeoutValue);
				setHealthCheckTimeout(healthCheckTimeoutValue);
			}
			else if (String::equal(property.getName().getString(), "HealthCheckHitsForRecovery"))
			{
				Uint16 healthCheckHitsForRecoveryValue;
				property.getValue().get(healthCheckHitsForRecoveryValue);
				setHealthCheckHitsForRecovery(healthCheckHitsForRecoveryValue);
			}
			else if (String::equal(property.getName().getString(), "PersistenceType"))
			{
				Uint16 persistenceTypeValue;
				property.getValue().get(persistenceTypeValue);
				setPersistenceType(persistenceTypeValue);
			}
			else if (String::equal(property.getName().getString(), "PersistenceValueType"))
			{
				Uint16 persistenceValueTypeValue;
				property.getValue().get(persistenceValueTypeValue);
				setPersistenceValueType(persistenceValueTypeValue);
			}
			else if (String::equal(property.getName().getString(), "PersistenceValue"))
			{
				String persistenceValueValue;
				property.getValue().get(persistenceValueValue);
				setPersistenceValue(persistenceValueValue);
			}
			else if (String::equal(property.getName().getString(), "PersistenceTimeout"))
			{
				CIMDateTime persistenceTimeoutValue;
				property.getValue().get(persistenceTimeoutValue);
				setPersistenceTimeout(persistenceTimeoutValue);
			}
			else if (String::equal(property.getName().getString(), "ConnectionNormalLimit"))
			{
				Uint64 connectionNormalLimitValue;
				property.getValue().get(connectionNormalLimitValue);
				setConnectionNormalLimit(connectionNormalLimitValue);
			}
			else if (String::equal(property.getName().getString(), "ConnectionMaxLimit"))
			{
				Uint64 connectionMaxLimitValue;
				property.getValue().get(connectionMaxLimitValue);
				setConnectionMaxLimit(connectionMaxLimitValue);
			}
			else if (String::equal(property.getName().getString(), "BandwidthNormalLimit"))
			{
				Uint64 bandwidthNormalLimitValue;
				property.getValue().get(bandwidthNormalLimitValue);
				setBandwidthNormalLimit(bandwidthNormalLimitValue);
			}
			else if (String::equal(property.getName().getString(), "BandwidthMaxLimit"))
			{
				Uint64 bandwidthMaxLimitValue;
				property.getValue().get(bandwidthMaxLimitValue);
				setBandwidthMaxLimit(bandwidthMaxLimitValue);
			}
			else if (String::equal(property.getName().getString(), "EncryptionAlgorithm"))
			{
				Uint16 encryptionAlgorithmValue;
				property.getValue().get(encryptionAlgorithmValue);
				setEncryptionAlgorithm(encryptionAlgorithmValue);
			}
	}
	return true;
}


Boolean UNIX_LoadBalancingActionSettingData::initialize()
{
	return false;
}

Boolean UNIX_LoadBalancingActionSettingData::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("LoadBalancingActionSettingData");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_healthCheckPolicyType = Uint16(0);
	_healthCheckPolicyValueType = Uint16(0);
	_healthCheckPolicyValue = String ("");
	_healthCheckPolicyFailDetectCount = Uint16(0);
	_healthCheckPolicyInterval = CIMHelper::getCurrentTime();
	_healthCheckPolicyIntervalForRecovery = CIMHelper::getCurrentTime();
	_healthCheckTimeout = CIMHelper::getCurrentTime();
	_healthCheckHitsForRecovery = Uint16(0);
	_persistenceType = Uint16(0);
	_persistenceValueType = Uint16(0);
	_persistenceValue = String ("");
	_persistenceTimeout = CIMHelper::getCurrentTime();
	_connectionNormalLimit = Uint64(0);
	_connectionMaxLimit = Uint64(0);
	_bandwidthNormalLimit = Uint64(0);
	_bandwidthMaxLimit = Uint64(0);
	_encryptionAlgorithm = Uint16(0);
	
	return false;
}

Boolean UNIX_LoadBalancingActionSettingData::finalize()
{
	return false;
}


Boolean UNIX_LoadBalancingActionSettingData::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_LoadBalancingActionSettingData::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_LoadBalancingActionSettingData::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_LoadBalancingActionSettingData::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_LoadBalancingActionSettingData::validateInstance()
{
	return true;
}

