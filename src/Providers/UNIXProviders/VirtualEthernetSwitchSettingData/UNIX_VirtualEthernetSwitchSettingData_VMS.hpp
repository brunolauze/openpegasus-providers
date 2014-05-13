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


UNIX_VirtualEthernetSwitchSettingData::UNIX_VirtualEthernetSwitchSettingData(void)
{
}

UNIX_VirtualEthernetSwitchSettingData::~UNIX_VirtualEthernetSwitchSettingData(void)
{
}

Boolean UNIX_VirtualEthernetSwitchSettingData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_VirtualEthernetSwitchSettingData::getInstanceID() const
{
	return _instanceID;
}

void UNIX_VirtualEthernetSwitchSettingData::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_VirtualEthernetSwitchSettingData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_VirtualEthernetSwitchSettingData::getCaption() const
{
	return _caption;
}

void UNIX_VirtualEthernetSwitchSettingData::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_VirtualEthernetSwitchSettingData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_VirtualEthernetSwitchSettingData::getDescription() const
{
	return _description;
}

void UNIX_VirtualEthernetSwitchSettingData::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_VirtualEthernetSwitchSettingData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_VirtualEthernetSwitchSettingData::getElementName() const
{
	return _elementName;
}

void UNIX_VirtualEthernetSwitchSettingData::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_VirtualEthernetSwitchSettingData::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_VirtualEthernetSwitchSettingData::getGeneration() const
{
	return _generation;
}

void UNIX_VirtualEthernetSwitchSettingData::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_VirtualEthernetSwitchSettingData::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_VirtualEthernetSwitchSettingData::getConfigurationName() const
{
	return _configurationName;
}

void UNIX_VirtualEthernetSwitchSettingData::setConfigurationName(String &value)
{
	_configurationName = value;
}

Boolean UNIX_VirtualEthernetSwitchSettingData::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_VirtualEthernetSwitchSettingData::getChangeableType() const
{
	return _changeableType;
}

void UNIX_VirtualEthernetSwitchSettingData::setChangeableType(Uint16 &value)
{
	_changeableType = value;
}

Boolean UNIX_VirtualEthernetSwitchSettingData::getComponentSetting(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPONENT_SETTING, getComponentSetting());
	return true;
}

Array<String> UNIX_VirtualEthernetSwitchSettingData::getComponentSetting() const
{
	return _componentSetting;
}

void UNIX_VirtualEthernetSwitchSettingData::setComponentSetting(Array<String> &value)
{
	_componentSetting = value;
}

Boolean UNIX_VirtualEthernetSwitchSettingData::getSoID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ID, getSoID());
	return true;
}

String UNIX_VirtualEthernetSwitchSettingData::getSoID() const
{
	return _soID;
}

void UNIX_VirtualEthernetSwitchSettingData::setSoID(String &value)
{
	_soID = value;
}

Boolean UNIX_VirtualEthernetSwitchSettingData::getSoOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ORG_ID, getSoOrgID());
	return true;
}

String UNIX_VirtualEthernetSwitchSettingData::getSoOrgID() const
{
	return _soOrgID;
}

void UNIX_VirtualEthernetSwitchSettingData::setSoOrgID(String &value)
{
	_soOrgID = value;
}

Boolean UNIX_VirtualEthernetSwitchSettingData::getVirtualSystemIdentifier(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VIRTUAL_SYSTEM_IDENTIFIER, getVirtualSystemIdentifier());
	return true;
}

String UNIX_VirtualEthernetSwitchSettingData::getVirtualSystemIdentifier() const
{
	return _virtualSystemIdentifier;
}

void UNIX_VirtualEthernetSwitchSettingData::setVirtualSystemIdentifier(String &value)
{
	_virtualSystemIdentifier = value;
}

Boolean UNIX_VirtualEthernetSwitchSettingData::getVirtualSystemType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VIRTUAL_SYSTEM_TYPE, getVirtualSystemType());
	return true;
}

String UNIX_VirtualEthernetSwitchSettingData::getVirtualSystemType() const
{
	return _virtualSystemType;
}

void UNIX_VirtualEthernetSwitchSettingData::setVirtualSystemType(String &value)
{
	_virtualSystemType = value;
}

Boolean UNIX_VirtualEthernetSwitchSettingData::getNotes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NOTES, getNotes());
	return true;
}

Array<String> UNIX_VirtualEthernetSwitchSettingData::getNotes() const
{
	return _notes;
}

void UNIX_VirtualEthernetSwitchSettingData::setNotes(Array<String> &value)
{
	_notes = value;
}

Boolean UNIX_VirtualEthernetSwitchSettingData::getCreationTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_TIME, getCreationTime());
	return true;
}

CIMDateTime UNIX_VirtualEthernetSwitchSettingData::getCreationTime() const
{
	return _creationTime;
}

void UNIX_VirtualEthernetSwitchSettingData::setCreationTime(CIMDateTime &value)
{
	_creationTime = value;
}

Boolean UNIX_VirtualEthernetSwitchSettingData::getConfigurationID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_ID, getConfigurationID());
	return true;
}

String UNIX_VirtualEthernetSwitchSettingData::getConfigurationID() const
{
	return _configurationID;
}

void UNIX_VirtualEthernetSwitchSettingData::setConfigurationID(String &value)
{
	_configurationID = value;
}

Boolean UNIX_VirtualEthernetSwitchSettingData::getConfigurationDataRoot(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_DATA_ROOT, getConfigurationDataRoot());
	return true;
}

String UNIX_VirtualEthernetSwitchSettingData::getConfigurationDataRoot() const
{
	return _configurationDataRoot;
}

void UNIX_VirtualEthernetSwitchSettingData::setConfigurationDataRoot(String &value)
{
	_configurationDataRoot = value;
}

Boolean UNIX_VirtualEthernetSwitchSettingData::getConfigurationFile(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_FILE, getConfigurationFile());
	return true;
}

String UNIX_VirtualEthernetSwitchSettingData::getConfigurationFile() const
{
	return _configurationFile;
}

void UNIX_VirtualEthernetSwitchSettingData::setConfigurationFile(String &value)
{
	_configurationFile = value;
}

Boolean UNIX_VirtualEthernetSwitchSettingData::getSnapshotDataRoot(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SNAPSHOT_DATA_ROOT, getSnapshotDataRoot());
	return true;
}

String UNIX_VirtualEthernetSwitchSettingData::getSnapshotDataRoot() const
{
	return _snapshotDataRoot;
}

void UNIX_VirtualEthernetSwitchSettingData::setSnapshotDataRoot(String &value)
{
	_snapshotDataRoot = value;
}

Boolean UNIX_VirtualEthernetSwitchSettingData::getSuspendDataRoot(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUSPEND_DATA_ROOT, getSuspendDataRoot());
	return true;
}

String UNIX_VirtualEthernetSwitchSettingData::getSuspendDataRoot() const
{
	return _suspendDataRoot;
}

void UNIX_VirtualEthernetSwitchSettingData::setSuspendDataRoot(String &value)
{
	_suspendDataRoot = value;
}

Boolean UNIX_VirtualEthernetSwitchSettingData::getSwapFileDataRoot(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SWAP_FILE_DATA_ROOT, getSwapFileDataRoot());
	return true;
}

String UNIX_VirtualEthernetSwitchSettingData::getSwapFileDataRoot() const
{
	return _swapFileDataRoot;
}

void UNIX_VirtualEthernetSwitchSettingData::setSwapFileDataRoot(String &value)
{
	_swapFileDataRoot = value;
}

Boolean UNIX_VirtualEthernetSwitchSettingData::getLogDataRoot(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOG_DATA_ROOT, getLogDataRoot());
	return true;
}

String UNIX_VirtualEthernetSwitchSettingData::getLogDataRoot() const
{
	return _logDataRoot;
}

void UNIX_VirtualEthernetSwitchSettingData::setLogDataRoot(String &value)
{
	_logDataRoot = value;
}

Boolean UNIX_VirtualEthernetSwitchSettingData::getAutomaticStartupAction(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTOMATIC_STARTUP_ACTION, getAutomaticStartupAction());
	return true;
}

Uint16 UNIX_VirtualEthernetSwitchSettingData::getAutomaticStartupAction() const
{
	return _automaticStartupAction;
}

void UNIX_VirtualEthernetSwitchSettingData::setAutomaticStartupAction(Uint16 &value)
{
	_automaticStartupAction = value;
}

Boolean UNIX_VirtualEthernetSwitchSettingData::getAutomaticStartupActionDelay(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTOMATIC_STARTUP_ACTION_DELAY, getAutomaticStartupActionDelay());
	return true;
}

CIMDateTime UNIX_VirtualEthernetSwitchSettingData::getAutomaticStartupActionDelay() const
{
	return _automaticStartupActionDelay;
}

void UNIX_VirtualEthernetSwitchSettingData::setAutomaticStartupActionDelay(CIMDateTime &value)
{
	_automaticStartupActionDelay = value;
}

Boolean UNIX_VirtualEthernetSwitchSettingData::getAutomaticStartupActionSequenceNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTOMATIC_STARTUP_ACTION_SEQUENCE_NUMBER, getAutomaticStartupActionSequenceNumber());
	return true;
}

Uint16 UNIX_VirtualEthernetSwitchSettingData::getAutomaticStartupActionSequenceNumber() const
{
	return _automaticStartupActionSequenceNumber;
}

void UNIX_VirtualEthernetSwitchSettingData::setAutomaticStartupActionSequenceNumber(Uint16 &value)
{
	_automaticStartupActionSequenceNumber = value;
}

Boolean UNIX_VirtualEthernetSwitchSettingData::getAutomaticShutdownAction(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTOMATIC_SHUTDOWN_ACTION, getAutomaticShutdownAction());
	return true;
}

Uint16 UNIX_VirtualEthernetSwitchSettingData::getAutomaticShutdownAction() const
{
	return _automaticShutdownAction;
}

void UNIX_VirtualEthernetSwitchSettingData::setAutomaticShutdownAction(Uint16 &value)
{
	_automaticShutdownAction = value;
}

Boolean UNIX_VirtualEthernetSwitchSettingData::getAutomaticRecoveryAction(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTOMATIC_RECOVERY_ACTION, getAutomaticRecoveryAction());
	return true;
}

Uint16 UNIX_VirtualEthernetSwitchSettingData::getAutomaticRecoveryAction() const
{
	return _automaticRecoveryAction;
}

void UNIX_VirtualEthernetSwitchSettingData::setAutomaticRecoveryAction(Uint16 &value)
{
	_automaticRecoveryAction = value;
}

Boolean UNIX_VirtualEthernetSwitchSettingData::getRecoveryFile(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECOVERY_FILE, getRecoveryFile());
	return true;
}

String UNIX_VirtualEthernetSwitchSettingData::getRecoveryFile() const
{
	return _recoveryFile;
}

void UNIX_VirtualEthernetSwitchSettingData::setRecoveryFile(String &value)
{
	_recoveryFile = value;
}

Boolean UNIX_VirtualEthernetSwitchSettingData::getVLANConnection(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VLAN_CONNECTION, getVLANConnection());
	return true;
}

Array<String> UNIX_VirtualEthernetSwitchSettingData::getVLANConnection() const
{
	return _vLANConnection;
}

void UNIX_VirtualEthernetSwitchSettingData::setVLANConnection(Array<String> &value)
{
	_vLANConnection = value;
}

Boolean UNIX_VirtualEthernetSwitchSettingData::getAssociatedResourcePool(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ASSOCIATED_RESOURCE_POOL, getAssociatedResourcePool());
	return true;
}

Array<String> UNIX_VirtualEthernetSwitchSettingData::getAssociatedResourcePool() const
{
	return _associatedResourcePool;
}

void UNIX_VirtualEthernetSwitchSettingData::setAssociatedResourcePool(Array<String> &value)
{
	_associatedResourcePool = value;
}

Boolean UNIX_VirtualEthernetSwitchSettingData::getMaxNumMACAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_NUM_M_A_C_ADDRESS, getMaxNumMACAddress());
	return true;
}

Uint32 UNIX_VirtualEthernetSwitchSettingData::getMaxNumMACAddress() const
{
	return _maxNumMACAddress;
}

void UNIX_VirtualEthernetSwitchSettingData::setMaxNumMACAddress(Uint32 &value)
{
	_maxNumMACAddress = value;
}

Boolean UNIX_VirtualEthernetSwitchSettingData::getEVBMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_E_V_B_MODE, getEVBMode());
	return true;
}

Uint16 UNIX_VirtualEthernetSwitchSettingData::getEVBMode() const
{
	return _eVBMode;
}

void UNIX_VirtualEthernetSwitchSettingData::setEVBMode(Uint16 &value)
{
	_eVBMode = value;
}

Boolean UNIX_VirtualEthernetSwitchSettingData::getOtherEVBMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_E_V_B_MODE, getOtherEVBMode());
	return true;
}

String UNIX_VirtualEthernetSwitchSettingData::getOtherEVBMode() const
{
	return _otherEVBMode;
}

void UNIX_VirtualEthernetSwitchSettingData::setOtherEVBMode(String &value)
{
	_otherEVBMode = value;
}


void UNIX_VirtualEthernetSwitchSettingData::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("VirtualEthernetSwitchSettingData");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_virtualSystemIdentifier = String ("");
	_virtualSystemType = String ("");
	_notes.clear();
	_creationTime = CIMHelper::getCurrentTime();
	_configurationID = String ("");
	_configurationDataRoot = String ("");
	_configurationFile = String ("");
	_snapshotDataRoot = String ("");
	_suspendDataRoot = String ("");
	_swapFileDataRoot = String ("");
	_logDataRoot = String ("");
	_automaticStartupAction = Uint16(0);
	_automaticStartupActionDelay = CIMHelper::getCurrentTime();
	_automaticStartupActionSequenceNumber = Uint16(0);
	_automaticShutdownAction = Uint16(0);
	_automaticRecoveryAction = Uint16(0);
	_recoveryFile = String ("");
	_vLANConnection.clear();
	_associatedResourcePool.clear();
	_maxNumMACAddress = Uint32(0);
	_eVBMode = Uint16(0);
	_otherEVBMode = String ("");

}

Boolean UNIX_VirtualEthernetSwitchSettingData::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "VirtualSystemIdentifier"))
			{
				String virtualSystemIdentifierValue;
				property.getValue().get(virtualSystemIdentifierValue);
				setVirtualSystemIdentifier(virtualSystemIdentifierValue);
			}
			else if (String::equal(property.getName().getString(), "VirtualSystemType"))
			{
				String virtualSystemTypeValue;
				property.getValue().get(virtualSystemTypeValue);
				setVirtualSystemType(virtualSystemTypeValue);
			}
			else if (String::equal(property.getName().getString(), "Notes"))
			{
				Array<String> notesValue;
				property.getValue().get(notesValue);
				setNotes(notesValue);
			}
			else if (String::equal(property.getName().getString(), "CreationTime"))
			{
				CIMDateTime creationTimeValue;
				property.getValue().get(creationTimeValue);
				setCreationTime(creationTimeValue);
			}
			else if (String::equal(property.getName().getString(), "ConfigurationID"))
			{
				String configurationIDValue;
				property.getValue().get(configurationIDValue);
				setConfigurationID(configurationIDValue);
			}
			else if (String::equal(property.getName().getString(), "ConfigurationDataRoot"))
			{
				String configurationDataRootValue;
				property.getValue().get(configurationDataRootValue);
				setConfigurationDataRoot(configurationDataRootValue);
			}
			else if (String::equal(property.getName().getString(), "ConfigurationFile"))
			{
				String configurationFileValue;
				property.getValue().get(configurationFileValue);
				setConfigurationFile(configurationFileValue);
			}
			else if (String::equal(property.getName().getString(), "SnapshotDataRoot"))
			{
				String snapshotDataRootValue;
				property.getValue().get(snapshotDataRootValue);
				setSnapshotDataRoot(snapshotDataRootValue);
			}
			else if (String::equal(property.getName().getString(), "SuspendDataRoot"))
			{
				String suspendDataRootValue;
				property.getValue().get(suspendDataRootValue);
				setSuspendDataRoot(suspendDataRootValue);
			}
			else if (String::equal(property.getName().getString(), "SwapFileDataRoot"))
			{
				String swapFileDataRootValue;
				property.getValue().get(swapFileDataRootValue);
				setSwapFileDataRoot(swapFileDataRootValue);
			}
			else if (String::equal(property.getName().getString(), "LogDataRoot"))
			{
				String logDataRootValue;
				property.getValue().get(logDataRootValue);
				setLogDataRoot(logDataRootValue);
			}
			else if (String::equal(property.getName().getString(), "AutomaticStartupAction"))
			{
				Uint16 automaticStartupActionValue;
				property.getValue().get(automaticStartupActionValue);
				setAutomaticStartupAction(automaticStartupActionValue);
			}
			else if (String::equal(property.getName().getString(), "AutomaticStartupActionDelay"))
			{
				CIMDateTime automaticStartupActionDelayValue;
				property.getValue().get(automaticStartupActionDelayValue);
				setAutomaticStartupActionDelay(automaticStartupActionDelayValue);
			}
			else if (String::equal(property.getName().getString(), "AutomaticStartupActionSequenceNumber"))
			{
				Uint16 automaticStartupActionSequenceNumberValue;
				property.getValue().get(automaticStartupActionSequenceNumberValue);
				setAutomaticStartupActionSequenceNumber(automaticStartupActionSequenceNumberValue);
			}
			else if (String::equal(property.getName().getString(), "AutomaticShutdownAction"))
			{
				Uint16 automaticShutdownActionValue;
				property.getValue().get(automaticShutdownActionValue);
				setAutomaticShutdownAction(automaticShutdownActionValue);
			}
			else if (String::equal(property.getName().getString(), "AutomaticRecoveryAction"))
			{
				Uint16 automaticRecoveryActionValue;
				property.getValue().get(automaticRecoveryActionValue);
				setAutomaticRecoveryAction(automaticRecoveryActionValue);
			}
			else if (String::equal(property.getName().getString(), "RecoveryFile"))
			{
				String recoveryFileValue;
				property.getValue().get(recoveryFileValue);
				setRecoveryFile(recoveryFileValue);
			}
			else if (String::equal(property.getName().getString(), "VLANConnection"))
			{
				Array<String> vLANConnectionValue;
				property.getValue().get(vLANConnectionValue);
				setVLANConnection(vLANConnectionValue);
			}
			else if (String::equal(property.getName().getString(), "AssociatedResourcePool"))
			{
				Array<String> associatedResourcePoolValue;
				property.getValue().get(associatedResourcePoolValue);
				setAssociatedResourcePool(associatedResourcePoolValue);
			}
			else if (String::equal(property.getName().getString(), "MaxNumMACAddress"))
			{
				Uint32 maxNumMACAddressValue;
				property.getValue().get(maxNumMACAddressValue);
				setMaxNumMACAddress(maxNumMACAddressValue);
			}
			else if (String::equal(property.getName().getString(), "EVBMode"))
			{
				Uint16 eVBModeValue;
				property.getValue().get(eVBModeValue);
				setEVBMode(eVBModeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherEVBMode"))
			{
				String otherEVBModeValue;
				property.getValue().get(otherEVBModeValue);
				setOtherEVBMode(otherEVBModeValue);
			}
	}
	return true;
}


Boolean UNIX_VirtualEthernetSwitchSettingData::initialize()
{
	return false;
}

Boolean UNIX_VirtualEthernetSwitchSettingData::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("VirtualEthernetSwitchSettingData");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_virtualSystemIdentifier = String ("");
	_virtualSystemType = String ("");
	_notes.clear();
	_creationTime = CIMHelper::getCurrentTime();
	_configurationID = String ("");
	_configurationDataRoot = String ("");
	_configurationFile = String ("");
	_snapshotDataRoot = String ("");
	_suspendDataRoot = String ("");
	_swapFileDataRoot = String ("");
	_logDataRoot = String ("");
	_automaticStartupAction = Uint16(0);
	_automaticStartupActionDelay = CIMHelper::getCurrentTime();
	_automaticStartupActionSequenceNumber = Uint16(0);
	_automaticShutdownAction = Uint16(0);
	_automaticRecoveryAction = Uint16(0);
	_recoveryFile = String ("");
	_vLANConnection.clear();
	_associatedResourcePool.clear();
	_maxNumMACAddress = Uint32(0);
	_eVBMode = Uint16(0);
	_otherEVBMode = String ("");
	
	return false;
}

Boolean UNIX_VirtualEthernetSwitchSettingData::finalize()
{
	return false;
}


Boolean UNIX_VirtualEthernetSwitchSettingData::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_VirtualEthernetSwitchSettingData::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VirtualEthernetSwitchSettingData::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VirtualEthernetSwitchSettingData::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VirtualEthernetSwitchSettingData::validateInstance()
{
	return true;
}

