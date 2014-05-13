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


UNIX_TierPolicySettingData::UNIX_TierPolicySettingData(void)
{
}

UNIX_TierPolicySettingData::~UNIX_TierPolicySettingData(void)
{
}

Boolean UNIX_TierPolicySettingData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_TierPolicySettingData::getInstanceID() const
{
	return _instanceID;
}

void UNIX_TierPolicySettingData::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_TierPolicySettingData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_TierPolicySettingData::getCaption() const
{
	return _caption;
}

void UNIX_TierPolicySettingData::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_TierPolicySettingData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_TierPolicySettingData::getDescription() const
{
	return _description;
}

void UNIX_TierPolicySettingData::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_TierPolicySettingData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_TierPolicySettingData::getElementName() const
{
	return _elementName;
}

void UNIX_TierPolicySettingData::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_TierPolicySettingData::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_TierPolicySettingData::getGeneration() const
{
	return _generation;
}

void UNIX_TierPolicySettingData::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_TierPolicySettingData::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_TierPolicySettingData::getConfigurationName() const
{
	return _configurationName;
}

void UNIX_TierPolicySettingData::setConfigurationName(String &value)
{
	_configurationName = value;
}

Boolean UNIX_TierPolicySettingData::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_TierPolicySettingData::getChangeableType() const
{
	return _changeableType;
}

void UNIX_TierPolicySettingData::setChangeableType(Uint16 &value)
{
	_changeableType = value;
}

Boolean UNIX_TierPolicySettingData::getComponentSetting(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPONENT_SETTING, getComponentSetting());
	return true;
}

Array<String> UNIX_TierPolicySettingData::getComponentSetting() const
{
	return _componentSetting;
}

void UNIX_TierPolicySettingData::setComponentSetting(Array<String> &value)
{
	_componentSetting = value;
}

Boolean UNIX_TierPolicySettingData::getSoID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ID, getSoID());
	return true;
}

String UNIX_TierPolicySettingData::getSoID() const
{
	return _soID;
}

void UNIX_TierPolicySettingData::setSoID(String &value)
{
	_soID = value;
}

Boolean UNIX_TierPolicySettingData::getSoOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ORG_ID, getSoOrgID());
	return true;
}

String UNIX_TierPolicySettingData::getSoOrgID() const
{
	return _soOrgID;
}

void UNIX_TierPolicySettingData::setSoOrgID(String &value)
{
	_soOrgID = value;
}

Boolean UNIX_TierPolicySettingData::getRelativePerformanceOrderGoal(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RELATIVE_PERFORMANCE_ORDER_GOAL, getRelativePerformanceOrderGoal());
	return true;
}

Uint16 UNIX_TierPolicySettingData::getRelativePerformanceOrderGoal() const
{
	return _relativePerformanceOrderGoal;
}

void UNIX_TierPolicySettingData::setRelativePerformanceOrderGoal(Uint16 &value)
{
	_relativePerformanceOrderGoal = value;
}

Boolean UNIX_TierPolicySettingData::getRelativePerformanceOrderMin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RELATIVE_PERFORMANCE_ORDER_MIN, getRelativePerformanceOrderMin());
	return true;
}

Uint16 UNIX_TierPolicySettingData::getRelativePerformanceOrderMin() const
{
	return _relativePerformanceOrderMin;
}

void UNIX_TierPolicySettingData::setRelativePerformanceOrderMin(Uint16 &value)
{
	_relativePerformanceOrderMin = value;
}

Boolean UNIX_TierPolicySettingData::getRelativePerformanceOrderMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RELATIVE_PERFORMANCE_ORDER_MAX, getRelativePerformanceOrderMax());
	return true;
}

Uint16 UNIX_TierPolicySettingData::getRelativePerformanceOrderMax() const
{
	return _relativePerformanceOrderMax;
}

void UNIX_TierPolicySettingData::setRelativePerformanceOrderMax(Uint16 &value)
{
	_relativePerformanceOrderMax = value;
}

Boolean UNIX_TierPolicySettingData::getStorageObjectType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STORAGE_OBJECT_TYPE, getStorageObjectType());
	return true;
}

Uint16 UNIX_TierPolicySettingData::getStorageObjectType() const
{
	return _storageObjectType;
}

void UNIX_TierPolicySettingData::setStorageObjectType(Uint16 &value)
{
	_storageObjectType = value;
}

Boolean UNIX_TierPolicySettingData::getStorageTierCharacteristics(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STORAGE_TIER_CHARACTERISTICS, getStorageTierCharacteristics());
	return true;
}

Array<Uint16> UNIX_TierPolicySettingData::getStorageTierCharacteristics() const
{
	return _storageTierCharacteristics;
}

void UNIX_TierPolicySettingData::setStorageTierCharacteristics(Array<Uint16> &value)
{
	_storageTierCharacteristics = value;
}

Boolean UNIX_TierPolicySettingData::getTechnology(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TECHNOLOGY, getTechnology());
	return true;
}

Uint16 UNIX_TierPolicySettingData::getTechnology() const
{
	return _technology;
}

void UNIX_TierPolicySettingData::setTechnology(Uint16 &value)
{
	_technology = value;
}

Boolean UNIX_TierPolicySettingData::getInitialState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INITIAL_STATE, getInitialState());
	return true;
}

Uint16 UNIX_TierPolicySettingData::getInitialState() const
{
	return _initialState;
}

void UNIX_TierPolicySettingData::setInitialState(Uint16 &value)
{
	_initialState = value;
}

Boolean UNIX_TierPolicySettingData::getDynamic(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DYNAMIC, getDynamic());
	return true;
}

Boolean UNIX_TierPolicySettingData::getDynamic() const
{
	return _dynamic;
}

void UNIX_TierPolicySettingData::setDynamic(Boolean &value)
{
	_dynamic = value;
}

Boolean UNIX_TierPolicySettingData::getDeleteOnEmptyStorageTier(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELETE_ON_EMPTY_STORAGE_TIER, getDeleteOnEmptyStorageTier());
	return true;
}

Boolean UNIX_TierPolicySettingData::getDeleteOnEmptyStorageTier() const
{
	return _deleteOnEmptyStorageTier;
}

void UNIX_TierPolicySettingData::setDeleteOnEmptyStorageTier(Boolean &value)
{
	_deleteOnEmptyStorageTier = value;
}

Boolean UNIX_TierPolicySettingData::getPercentage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERCENTAGE, getPercentage());
	return true;
}

Uint16 UNIX_TierPolicySettingData::getPercentage() const
{
	return _percentage;
}

void UNIX_TierPolicySettingData::setPercentage(Uint16 &value)
{
	_percentage = value;
}

Boolean UNIX_TierPolicySettingData::getCompressionIdleInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPRESSION_IDLE_INTERVAL, getCompressionIdleInterval());
	return true;
}

CIMDateTime UNIX_TierPolicySettingData::getCompressionIdleInterval() const
{
	return _compressionIdleInterval;
}

void UNIX_TierPolicySettingData::setCompressionIdleInterval(CIMDateTime &value)
{
	_compressionIdleInterval = value;
}

Boolean UNIX_TierPolicySettingData::getCompressionRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPRESSION_RATE, getCompressionRate());
	return true;
}

Uint16 UNIX_TierPolicySettingData::getCompressionRate() const
{
	return _compressionRate;
}

void UNIX_TierPolicySettingData::setCompressionRate(Uint16 &value)
{
	_compressionRate = value;
}

Boolean UNIX_TierPolicySettingData::getProvisioningType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROVISIONING_TYPE, getProvisioningType());
	return true;
}

Uint16 UNIX_TierPolicySettingData::getProvisioningType() const
{
	return _provisioningType;
}

void UNIX_TierPolicySettingData::setProvisioningType(Uint16 &value)
{
	_provisioningType = value;
}

Boolean UNIX_TierPolicySettingData::getRulePriority(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RULE_PRIORITY, getRulePriority());
	return true;
}

Uint32 UNIX_TierPolicySettingData::getRulePriority() const
{
	return _rulePriority;
}

void UNIX_TierPolicySettingData::setRulePriority(Uint32 &value)
{
	_rulePriority = value;
}

Boolean UNIX_TierPolicySettingData::getDataMovementRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_MOVEMENT_RATE, getDataMovementRate());
	return true;
}

Uint16 UNIX_TierPolicySettingData::getDataMovementRate() const
{
	return _dataMovementRate;
}

void UNIX_TierPolicySettingData::setDataMovementRate(Uint16 &value)
{
	_dataMovementRate = value;
}

Boolean UNIX_TierPolicySettingData::getAutomaticStoragePoolAllocationEnabled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTOMATIC_STORAGE_POOL_ALLOCATION_ENABLED, getAutomaticStoragePoolAllocationEnabled());
	return true;
}

Boolean UNIX_TierPolicySettingData::getAutomaticStoragePoolAllocationEnabled() const
{
	return _automaticStoragePoolAllocationEnabled;
}

void UNIX_TierPolicySettingData::setAutomaticStoragePoolAllocationEnabled(Boolean &value)
{
	_automaticStoragePoolAllocationEnabled = value;
}

Boolean UNIX_TierPolicySettingData::getRemoteTieringCoordinationEnabled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMOTE_TIERING_COORDINATION_ENABLED, getRemoteTieringCoordinationEnabled());
	return true;
}

Boolean UNIX_TierPolicySettingData::getRemoteTieringCoordinationEnabled() const
{
	return _remoteTieringCoordinationEnabled;
}

void UNIX_TierPolicySettingData::setRemoteTieringCoordinationEnabled(Boolean &value)
{
	_remoteTieringCoordinationEnabled = value;
}


void UNIX_TierPolicySettingData::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("TierPolicySettingData");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_relativePerformanceOrderGoal = Uint16(0);
	_relativePerformanceOrderMin = Uint16(0);
	_relativePerformanceOrderMax = Uint16(0);
	_storageObjectType = Uint16(0);
	_storageTierCharacteristics.clear();
	_technology = Uint16(0);
	_initialState = Uint16(0);
	_dynamic = Boolean(false);
	_deleteOnEmptyStorageTier = Boolean(false);
	_percentage = Uint16(0);
	_compressionIdleInterval = CIMHelper::getCurrentTime();
	_compressionRate = Uint16(0);
	_provisioningType = Uint16(0);
	_rulePriority = Uint32(0);
	_dataMovementRate = Uint16(0);
	_automaticStoragePoolAllocationEnabled = Boolean(false);
	_remoteTieringCoordinationEnabled = Boolean(false);

}

Boolean UNIX_TierPolicySettingData::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "RelativePerformanceOrderGoal"))
			{
				Uint16 relativePerformanceOrderGoalValue;
				property.getValue().get(relativePerformanceOrderGoalValue);
				setRelativePerformanceOrderGoal(relativePerformanceOrderGoalValue);
			}
			else if (String::equal(property.getName().getString(), "RelativePerformanceOrderMin"))
			{
				Uint16 relativePerformanceOrderMinValue;
				property.getValue().get(relativePerformanceOrderMinValue);
				setRelativePerformanceOrderMin(relativePerformanceOrderMinValue);
			}
			else if (String::equal(property.getName().getString(), "RelativePerformanceOrderMax"))
			{
				Uint16 relativePerformanceOrderMaxValue;
				property.getValue().get(relativePerformanceOrderMaxValue);
				setRelativePerformanceOrderMax(relativePerformanceOrderMaxValue);
			}
			else if (String::equal(property.getName().getString(), "StorageObjectType"))
			{
				Uint16 storageObjectTypeValue;
				property.getValue().get(storageObjectTypeValue);
				setStorageObjectType(storageObjectTypeValue);
			}
			else if (String::equal(property.getName().getString(), "StorageTierCharacteristics"))
			{
				Array<Uint16> storageTierCharacteristicsValue;
				property.getValue().get(storageTierCharacteristicsValue);
				setStorageTierCharacteristics(storageTierCharacteristicsValue);
			}
			else if (String::equal(property.getName().getString(), "Technology"))
			{
				Uint16 technologyValue;
				property.getValue().get(technologyValue);
				setTechnology(technologyValue);
			}
			else if (String::equal(property.getName().getString(), "InitialState"))
			{
				Uint16 initialStateValue;
				property.getValue().get(initialStateValue);
				setInitialState(initialStateValue);
			}
			else if (String::equal(property.getName().getString(), "Dynamic"))
			{
				Boolean dynamicValue;
				property.getValue().get(dynamicValue);
				setDynamic(dynamicValue);
			}
			else if (String::equal(property.getName().getString(), "DeleteOnEmptyStorageTier"))
			{
				Boolean deleteOnEmptyStorageTierValue;
				property.getValue().get(deleteOnEmptyStorageTierValue);
				setDeleteOnEmptyStorageTier(deleteOnEmptyStorageTierValue);
			}
			else if (String::equal(property.getName().getString(), "Percentage"))
			{
				Uint16 percentageValue;
				property.getValue().get(percentageValue);
				setPercentage(percentageValue);
			}
			else if (String::equal(property.getName().getString(), "CompressionIdleInterval"))
			{
				CIMDateTime compressionIdleIntervalValue;
				property.getValue().get(compressionIdleIntervalValue);
				setCompressionIdleInterval(compressionIdleIntervalValue);
			}
			else if (String::equal(property.getName().getString(), "CompressionRate"))
			{
				Uint16 compressionRateValue;
				property.getValue().get(compressionRateValue);
				setCompressionRate(compressionRateValue);
			}
			else if (String::equal(property.getName().getString(), "ProvisioningType"))
			{
				Uint16 provisioningTypeValue;
				property.getValue().get(provisioningTypeValue);
				setProvisioningType(provisioningTypeValue);
			}
			else if (String::equal(property.getName().getString(), "RulePriority"))
			{
				Uint32 rulePriorityValue;
				property.getValue().get(rulePriorityValue);
				setRulePriority(rulePriorityValue);
			}
			else if (String::equal(property.getName().getString(), "DataMovementRate"))
			{
				Uint16 dataMovementRateValue;
				property.getValue().get(dataMovementRateValue);
				setDataMovementRate(dataMovementRateValue);
			}
			else if (String::equal(property.getName().getString(), "AutomaticStoragePoolAllocationEnabled"))
			{
				Boolean automaticStoragePoolAllocationEnabledValue;
				property.getValue().get(automaticStoragePoolAllocationEnabledValue);
				setAutomaticStoragePoolAllocationEnabled(automaticStoragePoolAllocationEnabledValue);
			}
			else if (String::equal(property.getName().getString(), "RemoteTieringCoordinationEnabled"))
			{
				Boolean remoteTieringCoordinationEnabledValue;
				property.getValue().get(remoteTieringCoordinationEnabledValue);
				setRemoteTieringCoordinationEnabled(remoteTieringCoordinationEnabledValue);
			}
	}
	return true;
}


Boolean UNIX_TierPolicySettingData::initialize()
{
	return false;
}

Boolean UNIX_TierPolicySettingData::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("TierPolicySettingData");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_relativePerformanceOrderGoal = Uint16(0);
	_relativePerformanceOrderMin = Uint16(0);
	_relativePerformanceOrderMax = Uint16(0);
	_storageObjectType = Uint16(0);
	_storageTierCharacteristics.clear();
	_technology = Uint16(0);
	_initialState = Uint16(0);
	_dynamic = Boolean(false);
	_deleteOnEmptyStorageTier = Boolean(false);
	_percentage = Uint16(0);
	_compressionIdleInterval = CIMHelper::getCurrentTime();
	_compressionRate = Uint16(0);
	_provisioningType = Uint16(0);
	_rulePriority = Uint32(0);
	_dataMovementRate = Uint16(0);
	_automaticStoragePoolAllocationEnabled = Boolean(false);
	_remoteTieringCoordinationEnabled = Boolean(false);
	
	return false;
}

Boolean UNIX_TierPolicySettingData::finalize()
{
	return false;
}


Boolean UNIX_TierPolicySettingData::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_TierPolicySettingData::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_TierPolicySettingData::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_TierPolicySettingData::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_TierPolicySettingData::validateInstance()
{
	return true;
}

