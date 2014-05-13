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


UNIX_VirtualSystemSettingData::UNIX_VirtualSystemSettingData(void)
{
}

UNIX_VirtualSystemSettingData::~UNIX_VirtualSystemSettingData(void)
{
}

Boolean UNIX_VirtualSystemSettingData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_VirtualSystemSettingData::getInstanceID() const
{
	return _instanceID;
}

void UNIX_VirtualSystemSettingData::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_VirtualSystemSettingData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_VirtualSystemSettingData::getCaption() const
{
	return _caption;
}

void UNIX_VirtualSystemSettingData::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_VirtualSystemSettingData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_VirtualSystemSettingData::getDescription() const
{
	return _description;
}

void UNIX_VirtualSystemSettingData::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_VirtualSystemSettingData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_VirtualSystemSettingData::getElementName() const
{
	return _elementName;
}

void UNIX_VirtualSystemSettingData::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_VirtualSystemSettingData::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_VirtualSystemSettingData::getGeneration() const
{
	return _generation;
}

void UNIX_VirtualSystemSettingData::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_VirtualSystemSettingData::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_VirtualSystemSettingData::getConfigurationName() const
{
	return _configurationName;
}

void UNIX_VirtualSystemSettingData::setConfigurationName(String &value)
{
	_configurationName = value;
}

Boolean UNIX_VirtualSystemSettingData::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_VirtualSystemSettingData::getChangeableType() const
{
	return _changeableType;
}

void UNIX_VirtualSystemSettingData::setChangeableType(Uint16 &value)
{
	_changeableType = value;
}

Boolean UNIX_VirtualSystemSettingData::getComponentSetting(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPONENT_SETTING, getComponentSetting());
	return true;
}

Array<String> UNIX_VirtualSystemSettingData::getComponentSetting() const
{
	return _componentSetting;
}

void UNIX_VirtualSystemSettingData::setComponentSetting(Array<String> &value)
{
	_componentSetting = value;
}

Boolean UNIX_VirtualSystemSettingData::getSoID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ID, getSoID());
	return true;
}

String UNIX_VirtualSystemSettingData::getSoID() const
{
	return _soID;
}

void UNIX_VirtualSystemSettingData::setSoID(String &value)
{
	_soID = value;
}

Boolean UNIX_VirtualSystemSettingData::getSoOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ORG_ID, getSoOrgID());
	return true;
}

String UNIX_VirtualSystemSettingData::getSoOrgID() const
{
	return _soOrgID;
}

void UNIX_VirtualSystemSettingData::setSoOrgID(String &value)
{
	_soOrgID = value;
}

Boolean UNIX_VirtualSystemSettingData::getVirtualSystemIdentifier(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VIRTUAL_SYSTEM_IDENTIFIER, getVirtualSystemIdentifier());
	return true;
}

String UNIX_VirtualSystemSettingData::getVirtualSystemIdentifier() const
{
	return _virtualSystemIdentifier;
}

void UNIX_VirtualSystemSettingData::setVirtualSystemIdentifier(String &value)
{
	_virtualSystemIdentifier = value;
}

Boolean UNIX_VirtualSystemSettingData::getVirtualSystemType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VIRTUAL_SYSTEM_TYPE, getVirtualSystemType());
	return true;
}

String UNIX_VirtualSystemSettingData::getVirtualSystemType() const
{
	return _virtualSystemType;
}

void UNIX_VirtualSystemSettingData::setVirtualSystemType(String &value)
{
	_virtualSystemType = value;
}

Boolean UNIX_VirtualSystemSettingData::getNotes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NOTES, getNotes());
	return true;
}

Array<String> UNIX_VirtualSystemSettingData::getNotes() const
{
	return _notes;
}

void UNIX_VirtualSystemSettingData::setNotes(Array<String> &value)
{
	_notes = value;
}

Boolean UNIX_VirtualSystemSettingData::getCreationTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_TIME, getCreationTime());
	return true;
}

CIMDateTime UNIX_VirtualSystemSettingData::getCreationTime() const
{
	return _creationTime;
}

void UNIX_VirtualSystemSettingData::setCreationTime(CIMDateTime &value)
{
	_creationTime = value;
}

Boolean UNIX_VirtualSystemSettingData::getConfigurationID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_ID, getConfigurationID());
	return true;
}

String UNIX_VirtualSystemSettingData::getConfigurationID() const
{
	return _configurationID;
}

void UNIX_VirtualSystemSettingData::setConfigurationID(String &value)
{
	_configurationID = value;
}

Boolean UNIX_VirtualSystemSettingData::getConfigurationDataRoot(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_DATA_ROOT, getConfigurationDataRoot());
	return true;
}

String UNIX_VirtualSystemSettingData::getConfigurationDataRoot() const
{
	return _configurationDataRoot;
}

void UNIX_VirtualSystemSettingData::setConfigurationDataRoot(String &value)
{
	_configurationDataRoot = value;
}

Boolean UNIX_VirtualSystemSettingData::getConfigurationFile(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_FILE, getConfigurationFile());
	return true;
}

String UNIX_VirtualSystemSettingData::getConfigurationFile() const
{
	return _configurationFile;
}

void UNIX_VirtualSystemSettingData::setConfigurationFile(String &value)
{
	_configurationFile = value;
}

Boolean UNIX_VirtualSystemSettingData::getSnapshotDataRoot(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SNAPSHOT_DATA_ROOT, getSnapshotDataRoot());
	return true;
}

String UNIX_VirtualSystemSettingData::getSnapshotDataRoot() const
{
	return _snapshotDataRoot;
}

void UNIX_VirtualSystemSettingData::setSnapshotDataRoot(String &value)
{
	_snapshotDataRoot = value;
}

Boolean UNIX_VirtualSystemSettingData::getSuspendDataRoot(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUSPEND_DATA_ROOT, getSuspendDataRoot());
	return true;
}

String UNIX_VirtualSystemSettingData::getSuspendDataRoot() const
{
	return _suspendDataRoot;
}

void UNIX_VirtualSystemSettingData::setSuspendDataRoot(String &value)
{
	_suspendDataRoot = value;
}

Boolean UNIX_VirtualSystemSettingData::getSwapFileDataRoot(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SWAP_FILE_DATA_ROOT, getSwapFileDataRoot());
	return true;
}

String UNIX_VirtualSystemSettingData::getSwapFileDataRoot() const
{
	return _swapFileDataRoot;
}

void UNIX_VirtualSystemSettingData::setSwapFileDataRoot(String &value)
{
	_swapFileDataRoot = value;
}

Boolean UNIX_VirtualSystemSettingData::getLogDataRoot(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOG_DATA_ROOT, getLogDataRoot());
	return true;
}

String UNIX_VirtualSystemSettingData::getLogDataRoot() const
{
	return _logDataRoot;
}

void UNIX_VirtualSystemSettingData::setLogDataRoot(String &value)
{
	_logDataRoot = value;
}

Boolean UNIX_VirtualSystemSettingData::getAutomaticStartupAction(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTOMATIC_STARTUP_ACTION, getAutomaticStartupAction());
	return true;
}

Uint16 UNIX_VirtualSystemSettingData::getAutomaticStartupAction() const
{
	return _automaticStartupAction;
}

void UNIX_VirtualSystemSettingData::setAutomaticStartupAction(Uint16 &value)
{
	_automaticStartupAction = value;
}

Boolean UNIX_VirtualSystemSettingData::getAutomaticStartupActionDelay(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTOMATIC_STARTUP_ACTION_DELAY, getAutomaticStartupActionDelay());
	return true;
}

CIMDateTime UNIX_VirtualSystemSettingData::getAutomaticStartupActionDelay() const
{
	return _automaticStartupActionDelay;
}

void UNIX_VirtualSystemSettingData::setAutomaticStartupActionDelay(CIMDateTime &value)
{
	_automaticStartupActionDelay = value;
}

Boolean UNIX_VirtualSystemSettingData::getAutomaticStartupActionSequenceNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTOMATIC_STARTUP_ACTION_SEQUENCE_NUMBER, getAutomaticStartupActionSequenceNumber());
	return true;
}

Uint16 UNIX_VirtualSystemSettingData::getAutomaticStartupActionSequenceNumber() const
{
	return _automaticStartupActionSequenceNumber;
}

void UNIX_VirtualSystemSettingData::setAutomaticStartupActionSequenceNumber(Uint16 &value)
{
	_automaticStartupActionSequenceNumber = value;
}

Boolean UNIX_VirtualSystemSettingData::getAutomaticShutdownAction(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTOMATIC_SHUTDOWN_ACTION, getAutomaticShutdownAction());
	return true;
}

Uint16 UNIX_VirtualSystemSettingData::getAutomaticShutdownAction() const
{
	return _automaticShutdownAction;
}

void UNIX_VirtualSystemSettingData::setAutomaticShutdownAction(Uint16 &value)
{
	_automaticShutdownAction = value;
}

Boolean UNIX_VirtualSystemSettingData::getAutomaticRecoveryAction(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTOMATIC_RECOVERY_ACTION, getAutomaticRecoveryAction());
	return true;
}

Uint16 UNIX_VirtualSystemSettingData::getAutomaticRecoveryAction() const
{
	return _automaticRecoveryAction;
}

void UNIX_VirtualSystemSettingData::setAutomaticRecoveryAction(Uint16 &value)
{
	_automaticRecoveryAction = value;
}

Boolean UNIX_VirtualSystemSettingData::getRecoveryFile(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECOVERY_FILE, getRecoveryFile());
	return true;
}

String UNIX_VirtualSystemSettingData::getRecoveryFile() const
{
	return _recoveryFile;
}

void UNIX_VirtualSystemSettingData::setRecoveryFile(String &value)
{
	_recoveryFile = value;
}


void UNIX_VirtualSystemSettingData::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("VirtualSystemSettingData");
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

}

Boolean UNIX_VirtualSystemSettingData::loadInstance(const CIMInstance &instance)
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
	}
	return true;
}


Boolean UNIX_VirtualSystemSettingData::initialize()
{
	return false;
}

Boolean UNIX_VirtualSystemSettingData::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("VirtualSystemSettingData");
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
	
	return false;
}

Boolean UNIX_VirtualSystemSettingData::finalize()
{
	return false;
}


Boolean UNIX_VirtualSystemSettingData::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_VirtualSystemSettingData::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VirtualSystemSettingData::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VirtualSystemSettingData::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VirtualSystemSettingData::validateInstance()
{
	return true;
}

