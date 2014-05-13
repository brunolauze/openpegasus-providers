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


UNIX_JobSettingData::UNIX_JobSettingData(void)
{
}

UNIX_JobSettingData::~UNIX_JobSettingData(void)
{
}

Boolean UNIX_JobSettingData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_JobSettingData::getInstanceID() const
{
	return _instanceID;
}

void UNIX_JobSettingData::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_JobSettingData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_JobSettingData::getCaption() const
{
	return _caption;
}

void UNIX_JobSettingData::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_JobSettingData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_JobSettingData::getDescription() const
{
	return _description;
}

void UNIX_JobSettingData::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_JobSettingData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_JobSettingData::getElementName() const
{
	return _elementName;
}

void UNIX_JobSettingData::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_JobSettingData::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_JobSettingData::getGeneration() const
{
	return _generation;
}

void UNIX_JobSettingData::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_JobSettingData::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_JobSettingData::getConfigurationName() const
{
	return _configurationName;
}

void UNIX_JobSettingData::setConfigurationName(String &value)
{
	_configurationName = value;
}

Boolean UNIX_JobSettingData::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_JobSettingData::getChangeableType() const
{
	return _changeableType;
}

void UNIX_JobSettingData::setChangeableType(Uint16 &value)
{
	_changeableType = value;
}

Boolean UNIX_JobSettingData::getComponentSetting(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPONENT_SETTING, getComponentSetting());
	return true;
}

Array<String> UNIX_JobSettingData::getComponentSetting() const
{
	return _componentSetting;
}

void UNIX_JobSettingData::setComponentSetting(Array<String> &value)
{
	_componentSetting = value;
}

Boolean UNIX_JobSettingData::getSoID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ID, getSoID());
	return true;
}

String UNIX_JobSettingData::getSoID() const
{
	return _soID;
}

void UNIX_JobSettingData::setSoID(String &value)
{
	_soID = value;
}

Boolean UNIX_JobSettingData::getSoOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ORG_ID, getSoOrgID());
	return true;
}

String UNIX_JobSettingData::getSoOrgID() const
{
	return _soOrgID;
}

void UNIX_JobSettingData::setSoOrgID(String &value)
{
	_soOrgID = value;
}

Boolean UNIX_JobSettingData::getDeleteOnCompletion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELETE_ON_COMPLETION, getDeleteOnCompletion());
	return true;
}

Boolean UNIX_JobSettingData::getDeleteOnCompletion() const
{
	return _deleteOnCompletion;
}

void UNIX_JobSettingData::setDeleteOnCompletion(Boolean &value)
{
	_deleteOnCompletion = value;
}

Boolean UNIX_JobSettingData::getRecoveryAction(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECOVERY_ACTION, getRecoveryAction());
	return true;
}

Uint16 UNIX_JobSettingData::getRecoveryAction() const
{
	return _recoveryAction;
}

void UNIX_JobSettingData::setRecoveryAction(Uint16 &value)
{
	_recoveryAction = value;
}

Boolean UNIX_JobSettingData::getOtherRecoveryAction(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_RECOVERY_ACTION, getOtherRecoveryAction());
	return true;
}

String UNIX_JobSettingData::getOtherRecoveryAction() const
{
	return _otherRecoveryAction;
}

void UNIX_JobSettingData::setOtherRecoveryAction(String &value)
{
	_otherRecoveryAction = value;
}

Boolean UNIX_JobSettingData::getClientRetries(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLIENT_RETRIES, getClientRetries());
	return true;
}

Uint32 UNIX_JobSettingData::getClientRetries() const
{
	return _clientRetries;
}

void UNIX_JobSettingData::setClientRetries(Uint32 &value)
{
	_clientRetries = value;
}

Boolean UNIX_JobSettingData::getDefaultInputNames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEFAULT_INPUT_NAMES, getDefaultInputNames());
	return true;
}

Array<String> UNIX_JobSettingData::getDefaultInputNames() const
{
	return _defaultInputNames;
}

void UNIX_JobSettingData::setDefaultInputNames(Array<String> &value)
{
	_defaultInputNames = value;
}

Boolean UNIX_JobSettingData::getDefaultInputValues(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEFAULT_INPUT_VALUES, getDefaultInputValues());
	return true;
}

Array<String> UNIX_JobSettingData::getDefaultInputValues() const
{
	return _defaultInputValues;
}

void UNIX_JobSettingData::setDefaultInputValues(Array<String> &value)
{
	_defaultInputValues = value;
}

Boolean UNIX_JobSettingData::getInteractiveTimeout(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INTERACTIVE_TIMEOUT, getInteractiveTimeout());
	return true;
}

CIMDateTime UNIX_JobSettingData::getInteractiveTimeout() const
{
	return _interactiveTimeout;
}

void UNIX_JobSettingData::setInteractiveTimeout(CIMDateTime &value)
{
	_interactiveTimeout = value;
}

Boolean UNIX_JobSettingData::getRunInSilentMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RUN_IN_SILENT_MODE, getRunInSilentMode());
	return true;
}

Boolean UNIX_JobSettingData::getRunInSilentMode() const
{
	return _runInSilentMode;
}

void UNIX_JobSettingData::setRunInSilentMode(Boolean &value)
{
	_runInSilentMode = value;
}

Boolean UNIX_JobSettingData::getTerminateOnTimeout(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TERMINATE_ON_TIMEOUT, getTerminateOnTimeout());
	return true;
}

Boolean UNIX_JobSettingData::getTerminateOnTimeout() const
{
	return _terminateOnTimeout;
}

void UNIX_JobSettingData::setTerminateOnTimeout(Boolean &value)
{
	_terminateOnTimeout = value;
}

Boolean UNIX_JobSettingData::getApplicableMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_APPLICABLE_METHOD, getApplicableMethod());
	return true;
}

String UNIX_JobSettingData::getApplicableMethod() const
{
	return _applicableMethod;
}

void UNIX_JobSettingData::setApplicableMethod(String &value)
{
	_applicableMethod = value;
}

Boolean UNIX_JobSettingData::getTimeBeforeRemoval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_BEFORE_REMOVAL, getTimeBeforeRemoval());
	return true;
}

CIMDateTime UNIX_JobSettingData::getTimeBeforeRemoval() const
{
	return _timeBeforeRemoval;
}

void UNIX_JobSettingData::setTimeBeforeRemoval(CIMDateTime &value)
{
	_timeBeforeRemoval = value;
}


void UNIX_JobSettingData::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("JobSettingData");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_deleteOnCompletion = Boolean(false);
	_recoveryAction = Uint16(0);
	_otherRecoveryAction = String ("");
	_clientRetries = Uint32(0);
	_defaultInputNames.clear();
	_defaultInputValues.clear();
	_interactiveTimeout = CIMHelper::getCurrentTime();
	_runInSilentMode = Boolean(false);
	_terminateOnTimeout = Boolean(false);
	_applicableMethod = String ("");
	_timeBeforeRemoval = CIMHelper::getCurrentTime();

}

Boolean UNIX_JobSettingData::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "DeleteOnCompletion"))
			{
				Boolean deleteOnCompletionValue;
				property.getValue().get(deleteOnCompletionValue);
				setDeleteOnCompletion(deleteOnCompletionValue);
			}
			else if (String::equal(property.getName().getString(), "RecoveryAction"))
			{
				Uint16 recoveryActionValue;
				property.getValue().get(recoveryActionValue);
				setRecoveryAction(recoveryActionValue);
			}
			else if (String::equal(property.getName().getString(), "OtherRecoveryAction"))
			{
				String otherRecoveryActionValue;
				property.getValue().get(otherRecoveryActionValue);
				setOtherRecoveryAction(otherRecoveryActionValue);
			}
			else if (String::equal(property.getName().getString(), "ClientRetries"))
			{
				Uint32 clientRetriesValue;
				property.getValue().get(clientRetriesValue);
				setClientRetries(clientRetriesValue);
			}
			else if (String::equal(property.getName().getString(), "DefaultInputNames"))
			{
				Array<String> defaultInputNamesValue;
				property.getValue().get(defaultInputNamesValue);
				setDefaultInputNames(defaultInputNamesValue);
			}
			else if (String::equal(property.getName().getString(), "DefaultInputValues"))
			{
				Array<String> defaultInputValuesValue;
				property.getValue().get(defaultInputValuesValue);
				setDefaultInputValues(defaultInputValuesValue);
			}
			else if (String::equal(property.getName().getString(), "InteractiveTimeout"))
			{
				CIMDateTime interactiveTimeoutValue;
				property.getValue().get(interactiveTimeoutValue);
				setInteractiveTimeout(interactiveTimeoutValue);
			}
			else if (String::equal(property.getName().getString(), "RunInSilentMode"))
			{
				Boolean runInSilentModeValue;
				property.getValue().get(runInSilentModeValue);
				setRunInSilentMode(runInSilentModeValue);
			}
			else if (String::equal(property.getName().getString(), "TerminateOnTimeout"))
			{
				Boolean terminateOnTimeoutValue;
				property.getValue().get(terminateOnTimeoutValue);
				setTerminateOnTimeout(terminateOnTimeoutValue);
			}
			else if (String::equal(property.getName().getString(), "ApplicableMethod"))
			{
				String applicableMethodValue;
				property.getValue().get(applicableMethodValue);
				setApplicableMethod(applicableMethodValue);
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


Boolean UNIX_JobSettingData::initialize()
{
	return false;
}

Boolean UNIX_JobSettingData::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("JobSettingData");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_deleteOnCompletion = Boolean(false);
	_recoveryAction = Uint16(0);
	_otherRecoveryAction = String ("");
	_clientRetries = Uint32(0);
	_defaultInputNames.clear();
	_defaultInputValues.clear();
	_interactiveTimeout = CIMHelper::getCurrentTime();
	_runInSilentMode = Boolean(false);
	_terminateOnTimeout = Boolean(false);
	_applicableMethod = String ("");
	_timeBeforeRemoval = CIMHelper::getCurrentTime();
	
	return false;
}

Boolean UNIX_JobSettingData::finalize()
{
	return false;
}


Boolean UNIX_JobSettingData::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_JobSettingData::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_JobSettingData::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_JobSettingData::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_JobSettingData::validateInstance()
{
	return true;
}

