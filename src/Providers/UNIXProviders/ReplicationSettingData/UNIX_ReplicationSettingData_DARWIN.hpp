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


UNIX_ReplicationSettingData::UNIX_ReplicationSettingData(void)
{
}

UNIX_ReplicationSettingData::~UNIX_ReplicationSettingData(void)
{
}

Boolean UNIX_ReplicationSettingData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_ReplicationSettingData::getInstanceID() const
{
	return _instanceID;
}

void UNIX_ReplicationSettingData::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_ReplicationSettingData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_ReplicationSettingData::getCaption() const
{
	return _caption;
}

void UNIX_ReplicationSettingData::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_ReplicationSettingData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_ReplicationSettingData::getDescription() const
{
	return _description;
}

void UNIX_ReplicationSettingData::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_ReplicationSettingData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_ReplicationSettingData::getElementName() const
{
	return _elementName;
}

void UNIX_ReplicationSettingData::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_ReplicationSettingData::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_ReplicationSettingData::getGeneration() const
{
	return _generation;
}

void UNIX_ReplicationSettingData::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_ReplicationSettingData::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_ReplicationSettingData::getConfigurationName() const
{
	return _configurationName;
}

void UNIX_ReplicationSettingData::setConfigurationName(String &value)
{
	_configurationName = value;
}

Boolean UNIX_ReplicationSettingData::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_ReplicationSettingData::getChangeableType() const
{
	return _changeableType;
}

void UNIX_ReplicationSettingData::setChangeableType(Uint16 &value)
{
	_changeableType = value;
}

Boolean UNIX_ReplicationSettingData::getComponentSetting(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPONENT_SETTING, getComponentSetting());
	return true;
}

Array<String> UNIX_ReplicationSettingData::getComponentSetting() const
{
	return _componentSetting;
}

void UNIX_ReplicationSettingData::setComponentSetting(Array<String> &value)
{
	_componentSetting = value;
}

Boolean UNIX_ReplicationSettingData::getSoID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ID, getSoID());
	return true;
}

String UNIX_ReplicationSettingData::getSoID() const
{
	return _soID;
}

void UNIX_ReplicationSettingData::setSoID(String &value)
{
	_soID = value;
}

Boolean UNIX_ReplicationSettingData::getSoOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ORG_ID, getSoOrgID());
	return true;
}

String UNIX_ReplicationSettingData::getSoOrgID() const
{
	return _soOrgID;
}

void UNIX_ReplicationSettingData::setSoOrgID(String &value)
{
	_soOrgID = value;
}

Boolean UNIX_ReplicationSettingData::getPairing(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PAIRING, getPairing());
	return true;
}

Uint16 UNIX_ReplicationSettingData::getPairing() const
{
	return _pairing;
}

void UNIX_ReplicationSettingData::setPairing(Uint16 &value)
{
	_pairing = value;
}

Boolean UNIX_ReplicationSettingData::getUnequalGroupsAction(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNEQUAL_GROUPS_ACTION, getUnequalGroupsAction());
	return true;
}

Uint16 UNIX_ReplicationSettingData::getUnequalGroupsAction() const
{
	return _unequalGroupsAction;
}

void UNIX_ReplicationSettingData::setUnequalGroupsAction(Uint16 &value)
{
	_unequalGroupsAction = value;
}

Boolean UNIX_ReplicationSettingData::getDesiredCopyMethodology(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESIRED_COPY_METHODOLOGY, getDesiredCopyMethodology());
	return true;
}

Uint16 UNIX_ReplicationSettingData::getDesiredCopyMethodology() const
{
	return _desiredCopyMethodology;
}

void UNIX_ReplicationSettingData::setDesiredCopyMethodology(Uint16 &value)
{
	_desiredCopyMethodology = value;
}

Boolean UNIX_ReplicationSettingData::getTargetElementSupplier(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TARGET_ELEMENT_SUPPLIER, getTargetElementSupplier());
	return true;
}

Uint16 UNIX_ReplicationSettingData::getTargetElementSupplier() const
{
	return _targetElementSupplier;
}

void UNIX_ReplicationSettingData::setTargetElementSupplier(Uint16 &value)
{
	_targetElementSupplier = value;
}

Boolean UNIX_ReplicationSettingData::getThinProvisioningPolicy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_THIN_PROVISIONING_POLICY, getThinProvisioningPolicy());
	return true;
}

Uint16 UNIX_ReplicationSettingData::getThinProvisioningPolicy() const
{
	return _thinProvisioningPolicy;
}

void UNIX_ReplicationSettingData::setThinProvisioningPolicy(Uint16 &value)
{
	_thinProvisioningPolicy = value;
}

Boolean UNIX_ReplicationSettingData::getConsistentPointInTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONSISTENT_POINT_IN_TIME, getConsistentPointInTime());
	return true;
}

Boolean UNIX_ReplicationSettingData::getConsistentPointInTime() const
{
	return _consistentPointInTime;
}

void UNIX_ReplicationSettingData::setConsistentPointInTime(Boolean &value)
{
	_consistentPointInTime = value;
}

Boolean UNIX_ReplicationSettingData::getDeltaUpdateInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELTA_UPDATE_INTERVAL, getDeltaUpdateInterval());
	return true;
}

CIMDateTime UNIX_ReplicationSettingData::getDeltaUpdateInterval() const
{
	return _deltaUpdateInterval;
}

void UNIX_ReplicationSettingData::setDeltaUpdateInterval(CIMDateTime &value)
{
	_deltaUpdateInterval = value;
}

Boolean UNIX_ReplicationSettingData::getMultihop(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MULTIHOP, getMultihop());
	return true;
}

Uint16 UNIX_ReplicationSettingData::getMultihop() const
{
	return _multihop;
}

void UNIX_ReplicationSettingData::setMultihop(Uint16 &value)
{
	_multihop = value;
}

Boolean UNIX_ReplicationSettingData::getOnGroupOrListError(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ON_GROUP_OR_LIST_ERROR, getOnGroupOrListError());
	return true;
}

Uint16 UNIX_ReplicationSettingData::getOnGroupOrListError() const
{
	return _onGroupOrListError;
}

void UNIX_ReplicationSettingData::setOnGroupOrListError(Uint16 &value)
{
	_onGroupOrListError = value;
}

Boolean UNIX_ReplicationSettingData::getCopyPriority(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COPY_PRIORITY, getCopyPriority());
	return true;
}

Uint16 UNIX_ReplicationSettingData::getCopyPriority() const
{
	return _copyPriority;
}

void UNIX_ReplicationSettingData::setCopyPriority(Uint16 &value)
{
	_copyPriority = value;
}

Boolean UNIX_ReplicationSettingData::getCopyRecoveryMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COPY_RECOVERY_MODE, getCopyRecoveryMode());
	return true;
}

Uint16 UNIX_ReplicationSettingData::getCopyRecoveryMode() const
{
	return _copyRecoveryMode;
}

void UNIX_ReplicationSettingData::setCopyRecoveryMode(Uint16 &value)
{
	_copyRecoveryMode = value;
}

Boolean UNIX_ReplicationSettingData::getDeltaUpdateBlocks(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELTA_UPDATE_BLOCKS, getDeltaUpdateBlocks());
	return true;
}

Uint64 UNIX_ReplicationSettingData::getDeltaUpdateBlocks() const
{
	return _deltaUpdateBlocks;
}

void UNIX_ReplicationSettingData::setDeltaUpdateBlocks(Uint64 &value)
{
	_deltaUpdateBlocks = value;
}

Boolean UNIX_ReplicationSettingData::getFailedCopyStopsHostIO(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FAILED_COPY_STOPS_HOST_IO, getFailedCopyStopsHostIO());
	return true;
}

Boolean UNIX_ReplicationSettingData::getFailedCopyStopsHostIO() const
{
	return _failedCopyStopsHostIO;
}

void UNIX_ReplicationSettingData::setFailedCopyStopsHostIO(Boolean &value)
{
	_failedCopyStopsHostIO = value;
}

Boolean UNIX_ReplicationSettingData::getUnequalListsAction(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNEQUAL_LISTS_ACTION, getUnequalListsAction());
	return true;
}

Uint16 UNIX_ReplicationSettingData::getUnequalListsAction() const
{
	return _unequalListsAction;
}

void UNIX_ReplicationSettingData::setUnequalListsAction(Uint16 &value)
{
	_unequalListsAction = value;
}

Boolean UNIX_ReplicationSettingData::getReadOnly(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_READ_ONLY, getReadOnly());
	return true;
}

Uint16 UNIX_ReplicationSettingData::getReadOnly() const
{
	return _readOnly;
}

void UNIX_ReplicationSettingData::setReadOnly(Uint16 &value)
{
	_readOnly = value;
}

Boolean UNIX_ReplicationSettingData::getStorageCompressionPolicy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STORAGE_COMPRESSION_POLICY, getStorageCompressionPolicy());
	return true;
}

Uint16 UNIX_ReplicationSettingData::getStorageCompressionPolicy() const
{
	return _storageCompressionPolicy;
}

void UNIX_ReplicationSettingData::setStorageCompressionPolicy(Uint16 &value)
{
	_storageCompressionPolicy = value;
}

Boolean UNIX_ReplicationSettingData::getAutoDelete(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTO_DELETE, getAutoDelete());
	return true;
}

Boolean UNIX_ReplicationSettingData::getAutoDelete() const
{
	return _autoDelete;
}

void UNIX_ReplicationSettingData::setAutoDelete(Boolean &value)
{
	_autoDelete = value;
}

Boolean UNIX_ReplicationSettingData::getRRCHardwareCompressionEnabled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_R_R_C_HARDWARE_COMPRESSION_ENABLED, getRRCHardwareCompressionEnabled());
	return true;
}

Boolean UNIX_ReplicationSettingData::getRRCHardwareCompressionEnabled() const
{
	return _rRCHardwareCompressionEnabled;
}

void UNIX_ReplicationSettingData::setRRCHardwareCompressionEnabled(Boolean &value)
{
	_rRCHardwareCompressionEnabled = value;
}

Boolean UNIX_ReplicationSettingData::getRRCSoftwareCompressionEnabled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_R_R_CSOFTWARE_COMPRESSION_ENABLED, getRRCSoftwareCompressionEnabled());
	return true;
}

Boolean UNIX_ReplicationSettingData::getRRCSoftwareCompressionEnabled() const
{
	return _rRCSoftwareCompressionEnabled;
}

void UNIX_ReplicationSettingData::setRRCSoftwareCompressionEnabled(Boolean &value)
{
	_rRCSoftwareCompressionEnabled = value;
}

Boolean UNIX_ReplicationSettingData::getTargetElementGoal(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TARGET_ELEMENT_GOAL, getTargetElementGoal());
	return true;
}

Uint16 UNIX_ReplicationSettingData::getTargetElementGoal() const
{
	return _targetElementGoal;
}

void UNIX_ReplicationSettingData::setTargetElementGoal(Uint16 &value)
{
	_targetElementGoal = value;
}

Boolean UNIX_ReplicationSettingData::getTargetElementResourcePool(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TARGET_ELEMENT_RESOURCE_POOL, getTargetElementResourcePool());
	return true;
}

Uint16 UNIX_ReplicationSettingData::getTargetElementResourcePool() const
{
	return _targetElementResourcePool;
}

void UNIX_ReplicationSettingData::setTargetElementResourcePool(Uint16 &value)
{
	_targetElementResourcePool = value;
}

Boolean UNIX_ReplicationSettingData::getTimeBeforeRemoval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_BEFORE_REMOVAL, getTimeBeforeRemoval());
	return true;
}

CIMDateTime UNIX_ReplicationSettingData::getTimeBeforeRemoval() const
{
	return _timeBeforeRemoval;
}

void UNIX_ReplicationSettingData::setTimeBeforeRemoval(CIMDateTime &value)
{
	_timeBeforeRemoval = value;
}


void UNIX_ReplicationSettingData::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("ReplicationSettingData");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_pairing = Uint16(0);
	_unequalGroupsAction = Uint16(0);
	_desiredCopyMethodology = Uint16(0);
	_targetElementSupplier = Uint16(0);
	_thinProvisioningPolicy = Uint16(0);
	_consistentPointInTime = Boolean(false);
	_deltaUpdateInterval = CIMHelper::getCurrentTime();
	_multihop = Uint16(0);
	_onGroupOrListError = Uint16(0);
	_copyPriority = Uint16(0);
	_copyRecoveryMode = Uint16(0);
	_deltaUpdateBlocks = Uint64(0);
	_failedCopyStopsHostIO = Boolean(false);
	_unequalListsAction = Uint16(0);
	_readOnly = Uint16(0);
	_storageCompressionPolicy = Uint16(0);
	_autoDelete = Boolean(false);
	_rRCHardwareCompressionEnabled = Boolean(false);
	_rRCSoftwareCompressionEnabled = Boolean(false);
	_targetElementGoal = Uint16(0);
	_targetElementResourcePool = Uint16(0);
	_timeBeforeRemoval = CIMHelper::getCurrentTime();

}

Boolean UNIX_ReplicationSettingData::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "Pairing"))
			{
				Uint16 pairingValue;
				property.getValue().get(pairingValue);
				setPairing(pairingValue);
			}
			else if (String::equal(property.getName().getString(), "UnequalGroupsAction"))
			{
				Uint16 unequalGroupsActionValue;
				property.getValue().get(unequalGroupsActionValue);
				setUnequalGroupsAction(unequalGroupsActionValue);
			}
			else if (String::equal(property.getName().getString(), "DesiredCopyMethodology"))
			{
				Uint16 desiredCopyMethodologyValue;
				property.getValue().get(desiredCopyMethodologyValue);
				setDesiredCopyMethodology(desiredCopyMethodologyValue);
			}
			else if (String::equal(property.getName().getString(), "TargetElementSupplier"))
			{
				Uint16 targetElementSupplierValue;
				property.getValue().get(targetElementSupplierValue);
				setTargetElementSupplier(targetElementSupplierValue);
			}
			else if (String::equal(property.getName().getString(), "ThinProvisioningPolicy"))
			{
				Uint16 thinProvisioningPolicyValue;
				property.getValue().get(thinProvisioningPolicyValue);
				setThinProvisioningPolicy(thinProvisioningPolicyValue);
			}
			else if (String::equal(property.getName().getString(), "ConsistentPointInTime"))
			{
				Boolean consistentPointInTimeValue;
				property.getValue().get(consistentPointInTimeValue);
				setConsistentPointInTime(consistentPointInTimeValue);
			}
			else if (String::equal(property.getName().getString(), "DeltaUpdateInterval"))
			{
				CIMDateTime deltaUpdateIntervalValue;
				property.getValue().get(deltaUpdateIntervalValue);
				setDeltaUpdateInterval(deltaUpdateIntervalValue);
			}
			else if (String::equal(property.getName().getString(), "Multihop"))
			{
				Uint16 multihopValue;
				property.getValue().get(multihopValue);
				setMultihop(multihopValue);
			}
			else if (String::equal(property.getName().getString(), "OnGroupOrListError"))
			{
				Uint16 onGroupOrListErrorValue;
				property.getValue().get(onGroupOrListErrorValue);
				setOnGroupOrListError(onGroupOrListErrorValue);
			}
			else if (String::equal(property.getName().getString(), "CopyPriority"))
			{
				Uint16 copyPriorityValue;
				property.getValue().get(copyPriorityValue);
				setCopyPriority(copyPriorityValue);
			}
			else if (String::equal(property.getName().getString(), "CopyRecoveryMode"))
			{
				Uint16 copyRecoveryModeValue;
				property.getValue().get(copyRecoveryModeValue);
				setCopyRecoveryMode(copyRecoveryModeValue);
			}
			else if (String::equal(property.getName().getString(), "DeltaUpdateBlocks"))
			{
				Uint64 deltaUpdateBlocksValue;
				property.getValue().get(deltaUpdateBlocksValue);
				setDeltaUpdateBlocks(deltaUpdateBlocksValue);
			}
			else if (String::equal(property.getName().getString(), "FailedCopyStopsHostIO"))
			{
				Boolean failedCopyStopsHostIOValue;
				property.getValue().get(failedCopyStopsHostIOValue);
				setFailedCopyStopsHostIO(failedCopyStopsHostIOValue);
			}
			else if (String::equal(property.getName().getString(), "UnequalListsAction"))
			{
				Uint16 unequalListsActionValue;
				property.getValue().get(unequalListsActionValue);
				setUnequalListsAction(unequalListsActionValue);
			}
			else if (String::equal(property.getName().getString(), "ReadOnly"))
			{
				Uint16 readOnlyValue;
				property.getValue().get(readOnlyValue);
				setReadOnly(readOnlyValue);
			}
			else if (String::equal(property.getName().getString(), "StorageCompressionPolicy"))
			{
				Uint16 storageCompressionPolicyValue;
				property.getValue().get(storageCompressionPolicyValue);
				setStorageCompressionPolicy(storageCompressionPolicyValue);
			}
			else if (String::equal(property.getName().getString(), "AutoDelete"))
			{
				Boolean autoDeleteValue;
				property.getValue().get(autoDeleteValue);
				setAutoDelete(autoDeleteValue);
			}
			else if (String::equal(property.getName().getString(), "RRCHardwareCompressionEnabled"))
			{
				Boolean rRCHardwareCompressionEnabledValue;
				property.getValue().get(rRCHardwareCompressionEnabledValue);
				setRRCHardwareCompressionEnabled(rRCHardwareCompressionEnabledValue);
			}
			else if (String::equal(property.getName().getString(), "RRCSoftwareCompressionEnabled"))
			{
				Boolean rRCSoftwareCompressionEnabledValue;
				property.getValue().get(rRCSoftwareCompressionEnabledValue);
				setRRCSoftwareCompressionEnabled(rRCSoftwareCompressionEnabledValue);
			}
			else if (String::equal(property.getName().getString(), "TargetElementGoal"))
			{
				Uint16 targetElementGoalValue;
				property.getValue().get(targetElementGoalValue);
				setTargetElementGoal(targetElementGoalValue);
			}
			else if (String::equal(property.getName().getString(), "TargetElementResourcePool"))
			{
				Uint16 targetElementResourcePoolValue;
				property.getValue().get(targetElementResourcePoolValue);
				setTargetElementResourcePool(targetElementResourcePoolValue);
			}
			else if (String::equal(property.getName().getString(), "TimeBeforeRemoval"))
			{
				CIMDateTime timeBeforeRemovalValue;
				property.getValue().get(timeBeforeRemovalValue);
				setTimeBeforeRemoval(timeBeforeRemovalValue);
			}
	}
	return true;
}


Boolean UNIX_ReplicationSettingData::initialize()
{
	return false;
}

Boolean UNIX_ReplicationSettingData::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("ReplicationSettingData");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_pairing = Uint16(0);
	_unequalGroupsAction = Uint16(0);
	_desiredCopyMethodology = Uint16(0);
	_targetElementSupplier = Uint16(0);
	_thinProvisioningPolicy = Uint16(0);
	_consistentPointInTime = Boolean(false);
	_deltaUpdateInterval = CIMHelper::getCurrentTime();
	_multihop = Uint16(0);
	_onGroupOrListError = Uint16(0);
	_copyPriority = Uint16(0);
	_copyRecoveryMode = Uint16(0);
	_deltaUpdateBlocks = Uint64(0);
	_failedCopyStopsHostIO = Boolean(false);
	_unequalListsAction = Uint16(0);
	_readOnly = Uint16(0);
	_storageCompressionPolicy = Uint16(0);
	_autoDelete = Boolean(false);
	_rRCHardwareCompressionEnabled = Boolean(false);
	_rRCSoftwareCompressionEnabled = Boolean(false);
	_targetElementGoal = Uint16(0);
	_targetElementResourcePool = Uint16(0);
	_timeBeforeRemoval = CIMHelper::getCurrentTime();
	
	return false;
}

Boolean UNIX_ReplicationSettingData::finalize()
{
	return false;
}


Boolean UNIX_ReplicationSettingData::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_ReplicationSettingData::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ReplicationSettingData::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ReplicationSettingData::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ReplicationSettingData::validateInstance()
{
	return true;
}

