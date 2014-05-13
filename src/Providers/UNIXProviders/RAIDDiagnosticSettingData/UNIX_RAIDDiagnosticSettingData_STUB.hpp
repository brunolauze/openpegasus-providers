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


UNIX_RAIDDiagnosticSettingData::UNIX_RAIDDiagnosticSettingData(void)
{
}

UNIX_RAIDDiagnosticSettingData::~UNIX_RAIDDiagnosticSettingData(void)
{
}

Boolean UNIX_RAIDDiagnosticSettingData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_RAIDDiagnosticSettingData::getInstanceID() const
{
	return _instanceID;
}

void UNIX_RAIDDiagnosticSettingData::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_RAIDDiagnosticSettingData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_RAIDDiagnosticSettingData::getCaption() const
{
	return _caption;
}

void UNIX_RAIDDiagnosticSettingData::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_RAIDDiagnosticSettingData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_RAIDDiagnosticSettingData::getDescription() const
{
	return _description;
}

void UNIX_RAIDDiagnosticSettingData::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_RAIDDiagnosticSettingData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_RAIDDiagnosticSettingData::getElementName() const
{
	return _elementName;
}

void UNIX_RAIDDiagnosticSettingData::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_RAIDDiagnosticSettingData::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_RAIDDiagnosticSettingData::getGeneration() const
{
	return _generation;
}

void UNIX_RAIDDiagnosticSettingData::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_RAIDDiagnosticSettingData::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_RAIDDiagnosticSettingData::getConfigurationName() const
{
	return _configurationName;
}

void UNIX_RAIDDiagnosticSettingData::setConfigurationName(String &value)
{
	_configurationName = value;
}

Boolean UNIX_RAIDDiagnosticSettingData::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_RAIDDiagnosticSettingData::getChangeableType() const
{
	return _changeableType;
}

void UNIX_RAIDDiagnosticSettingData::setChangeableType(Uint16 &value)
{
	_changeableType = value;
}

Boolean UNIX_RAIDDiagnosticSettingData::getComponentSetting(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPONENT_SETTING, getComponentSetting());
	return true;
}

Array<String> UNIX_RAIDDiagnosticSettingData::getComponentSetting() const
{
	return _componentSetting;
}

void UNIX_RAIDDiagnosticSettingData::setComponentSetting(Array<String> &value)
{
	_componentSetting = value;
}

Boolean UNIX_RAIDDiagnosticSettingData::getSoID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ID, getSoID());
	return true;
}

String UNIX_RAIDDiagnosticSettingData::getSoID() const
{
	return _soID;
}

void UNIX_RAIDDiagnosticSettingData::setSoID(String &value)
{
	_soID = value;
}

Boolean UNIX_RAIDDiagnosticSettingData::getSoOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ORG_ID, getSoOrgID());
	return true;
}

String UNIX_RAIDDiagnosticSettingData::getSoOrgID() const
{
	return _soOrgID;
}

void UNIX_RAIDDiagnosticSettingData::setSoOrgID(String &value)
{
	_soOrgID = value;
}

Boolean UNIX_RAIDDiagnosticSettingData::getHaltOnError(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HALT_ON_ERROR, getHaltOnError());
	return true;
}

Boolean UNIX_RAIDDiagnosticSettingData::getHaltOnError() const
{
	return _haltOnError;
}

void UNIX_RAIDDiagnosticSettingData::setHaltOnError(Boolean &value)
{
	_haltOnError = value;
}

Boolean UNIX_RAIDDiagnosticSettingData::getQuickMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_QUICK_MODE, getQuickMode());
	return true;
}

Boolean UNIX_RAIDDiagnosticSettingData::getQuickMode() const
{
	return _quickMode;
}

void UNIX_RAIDDiagnosticSettingData::setQuickMode(Boolean &value)
{
	_quickMode = value;
}

Boolean UNIX_RAIDDiagnosticSettingData::getPercentOfTestCoverage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERCENT_OF_TEST_COVERAGE, getPercentOfTestCoverage());
	return true;
}

Uint8 UNIX_RAIDDiagnosticSettingData::getPercentOfTestCoverage() const
{
	return _percentOfTestCoverage;
}

void UNIX_RAIDDiagnosticSettingData::setPercentOfTestCoverage(Uint8 &value)
{
	_percentOfTestCoverage = value;
}

Boolean UNIX_RAIDDiagnosticSettingData::getLoopControlParameter(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOOP_CONTROL_PARAMETER, getLoopControlParameter());
	return true;
}

Array<String> UNIX_RAIDDiagnosticSettingData::getLoopControlParameter() const
{
	return _loopControlParameter;
}

void UNIX_RAIDDiagnosticSettingData::setLoopControlParameter(Array<String> &value)
{
	_loopControlParameter = value;
}

Boolean UNIX_RAIDDiagnosticSettingData::getLoopControl(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOOP_CONTROL, getLoopControl());
	return true;
}

Array<Uint16> UNIX_RAIDDiagnosticSettingData::getLoopControl() const
{
	return _loopControl;
}

void UNIX_RAIDDiagnosticSettingData::setLoopControl(Array<Uint16> &value)
{
	_loopControl = value;
}

Boolean UNIX_RAIDDiagnosticSettingData::getOtherLoopControlDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_LOOP_CONTROL_DESCRIPTIONS, getOtherLoopControlDescriptions());
	return true;
}

Array<String> UNIX_RAIDDiagnosticSettingData::getOtherLoopControlDescriptions() const
{
	return _otherLoopControlDescriptions;
}

void UNIX_RAIDDiagnosticSettingData::setOtherLoopControlDescriptions(Array<String> &value)
{
	_otherLoopControlDescriptions = value;
}

Boolean UNIX_RAIDDiagnosticSettingData::getResultPersistence(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESULT_PERSISTENCE, getResultPersistence());
	return true;
}

Uint32 UNIX_RAIDDiagnosticSettingData::getResultPersistence() const
{
	return _resultPersistence;
}

void UNIX_RAIDDiagnosticSettingData::setResultPersistence(Uint32 &value)
{
	_resultPersistence = value;
}

Boolean UNIX_RAIDDiagnosticSettingData::getLogOptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOG_OPTIONS, getLogOptions());
	return true;
}

Array<Uint16> UNIX_RAIDDiagnosticSettingData::getLogOptions() const
{
	return _logOptions;
}

void UNIX_RAIDDiagnosticSettingData::setLogOptions(Array<Uint16> &value)
{
	_logOptions = value;
}

Boolean UNIX_RAIDDiagnosticSettingData::getOtherLogOptionsDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_LOG_OPTIONS_DESCRIPTIONS, getOtherLogOptionsDescriptions());
	return true;
}

Array<String> UNIX_RAIDDiagnosticSettingData::getOtherLogOptionsDescriptions() const
{
	return _otherLogOptionsDescriptions;
}

void UNIX_RAIDDiagnosticSettingData::setOtherLogOptionsDescriptions(Array<String> &value)
{
	_otherLogOptionsDescriptions = value;
}

Boolean UNIX_RAIDDiagnosticSettingData::getLogStorage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOG_STORAGE, getLogStorage());
	return true;
}

Array<Uint16> UNIX_RAIDDiagnosticSettingData::getLogStorage() const
{
	return _logStorage;
}

void UNIX_RAIDDiagnosticSettingData::setLogStorage(Array<Uint16> &value)
{
	_logStorage = value;
}

Boolean UNIX_RAIDDiagnosticSettingData::getOtherLogStorageDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_LOG_STORAGE_DESCRIPTIONS, getOtherLogStorageDescriptions());
	return true;
}

Array<String> UNIX_RAIDDiagnosticSettingData::getOtherLogStorageDescriptions() const
{
	return _otherLogStorageDescriptions;
}

void UNIX_RAIDDiagnosticSettingData::setOtherLogStorageDescriptions(Array<String> &value)
{
	_otherLogStorageDescriptions = value;
}

Boolean UNIX_RAIDDiagnosticSettingData::getVerbosityLevel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERBOSITY_LEVEL, getVerbosityLevel());
	return true;
}

Array<Uint16> UNIX_RAIDDiagnosticSettingData::getVerbosityLevel() const
{
	return _verbosityLevel;
}

void UNIX_RAIDDiagnosticSettingData::setVerbosityLevel(Array<Uint16> &value)
{
	_verbosityLevel = value;
}

Boolean UNIX_RAIDDiagnosticSettingData::getQueryTimeout(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_QUERY_TIMEOUT, getQueryTimeout());
	return true;
}

Uint32 UNIX_RAIDDiagnosticSettingData::getQueryTimeout() const
{
	return _queryTimeout;
}

void UNIX_RAIDDiagnosticSettingData::setQueryTimeout(Uint32 &value)
{
	_queryTimeout = value;
}

Boolean UNIX_RAIDDiagnosticSettingData::getNonDestructive(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NON_DESTRUCTIVE, getNonDestructive());
	return true;
}

Boolean UNIX_RAIDDiagnosticSettingData::getNonDestructive() const
{
	return _nonDestructive;
}

void UNIX_RAIDDiagnosticSettingData::setNonDestructive(Boolean &value)
{
	_nonDestructive = value;
}

Boolean UNIX_RAIDDiagnosticSettingData::getSeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SEED, getSeed());
	return true;
}

Uint32 UNIX_RAIDDiagnosticSettingData::getSeed() const
{
	return _seed;
}

void UNIX_RAIDDiagnosticSettingData::setSeed(Uint32 &value)
{
	_seed = value;
}

Boolean UNIX_RAIDDiagnosticSettingData::getLBAStart(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_L_B_A_START, getLBAStart());
	return true;
}

Uint64 UNIX_RAIDDiagnosticSettingData::getLBAStart() const
{
	return _lBAStart;
}

void UNIX_RAIDDiagnosticSettingData::setLBAStart(Uint64 &value)
{
	_lBAStart = value;
}

Boolean UNIX_RAIDDiagnosticSettingData::getLBAEnd(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_L_B_A_END, getLBAEnd());
	return true;
}

Uint64 UNIX_RAIDDiagnosticSettingData::getLBAEnd() const
{
	return _lBAEnd;
}

void UNIX_RAIDDiagnosticSettingData::setLBAEnd(Uint64 &value)
{
	_lBAEnd = value;
}

Boolean UNIX_RAIDDiagnosticSettingData::getTargetHDDs(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TARGET_H_D_DS, getTargetHDDs());
	return true;
}

Array<String> UNIX_RAIDDiagnosticSettingData::getTargetHDDs() const
{
	return _targetHDDs;
}

void UNIX_RAIDDiagnosticSettingData::setTargetHDDs(Array<String> &value)
{
	_targetHDDs = value;
}


void UNIX_RAIDDiagnosticSettingData::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("RAIDDiagnosticSettingData");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_haltOnError = Boolean(false);
	_quickMode = Boolean(false);
	_percentOfTestCoverage = Uint8(0);
	_loopControlParameter.clear();
	_loopControl.clear();
	_otherLoopControlDescriptions.clear();
	_resultPersistence = Uint32(0);
	_logOptions.clear();
	_otherLogOptionsDescriptions.clear();
	_logStorage.clear();
	_otherLogStorageDescriptions.clear();
	_verbosityLevel.clear();
	_queryTimeout = Uint32(0);
	_nonDestructive = Boolean(false);
	_seed = Uint32(0);
	_lBAStart = Uint64(0);
	_lBAEnd = Uint64(0);
	_targetHDDs.clear();

}

Boolean UNIX_RAIDDiagnosticSettingData::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "HaltOnError"))
			{
				Boolean haltOnErrorValue;
				property.getValue().get(haltOnErrorValue);
				setHaltOnError(haltOnErrorValue);
			}
			else if (String::equal(property.getName().getString(), "QuickMode"))
			{
				Boolean quickModeValue;
				property.getValue().get(quickModeValue);
				setQuickMode(quickModeValue);
			}
			else if (String::equal(property.getName().getString(), "PercentOfTestCoverage"))
			{
				Uint8 percentOfTestCoverageValue;
				property.getValue().get(percentOfTestCoverageValue);
				setPercentOfTestCoverage(percentOfTestCoverageValue);
			}
			else if (String::equal(property.getName().getString(), "LoopControlParameter"))
			{
				Array<String> loopControlParameterValue;
				property.getValue().get(loopControlParameterValue);
				setLoopControlParameter(loopControlParameterValue);
			}
			else if (String::equal(property.getName().getString(), "LoopControl"))
			{
				Array<Uint16> loopControlValue;
				property.getValue().get(loopControlValue);
				setLoopControl(loopControlValue);
			}
			else if (String::equal(property.getName().getString(), "OtherLoopControlDescriptions"))
			{
				Array<String> otherLoopControlDescriptionsValue;
				property.getValue().get(otherLoopControlDescriptionsValue);
				setOtherLoopControlDescriptions(otherLoopControlDescriptionsValue);
			}
			else if (String::equal(property.getName().getString(), "ResultPersistence"))
			{
				Uint32 resultPersistenceValue;
				property.getValue().get(resultPersistenceValue);
				setResultPersistence(resultPersistenceValue);
			}
			else if (String::equal(property.getName().getString(), "LogOptions"))
			{
				Array<Uint16> logOptionsValue;
				property.getValue().get(logOptionsValue);
				setLogOptions(logOptionsValue);
			}
			else if (String::equal(property.getName().getString(), "OtherLogOptionsDescriptions"))
			{
				Array<String> otherLogOptionsDescriptionsValue;
				property.getValue().get(otherLogOptionsDescriptionsValue);
				setOtherLogOptionsDescriptions(otherLogOptionsDescriptionsValue);
			}
			else if (String::equal(property.getName().getString(), "LogStorage"))
			{
				Array<Uint16> logStorageValue;
				property.getValue().get(logStorageValue);
				setLogStorage(logStorageValue);
			}
			else if (String::equal(property.getName().getString(), "OtherLogStorageDescriptions"))
			{
				Array<String> otherLogStorageDescriptionsValue;
				property.getValue().get(otherLogStorageDescriptionsValue);
				setOtherLogStorageDescriptions(otherLogStorageDescriptionsValue);
			}
			else if (String::equal(property.getName().getString(), "VerbosityLevel"))
			{
				Array<Uint16> verbosityLevelValue;
				property.getValue().get(verbosityLevelValue);
				setVerbosityLevel(verbosityLevelValue);
			}
			else if (String::equal(property.getName().getString(), "QueryTimeout"))
			{
				Uint32 queryTimeoutValue;
				property.getValue().get(queryTimeoutValue);
				setQueryTimeout(queryTimeoutValue);
			}
			else if (String::equal(property.getName().getString(), "NonDestructive"))
			{
				Boolean nonDestructiveValue;
				property.getValue().get(nonDestructiveValue);
				setNonDestructive(nonDestructiveValue);
			}
			else if (String::equal(property.getName().getString(), "Seed"))
			{
				Uint32 seedValue;
				property.getValue().get(seedValue);
				setSeed(seedValue);
			}
			else if (String::equal(property.getName().getString(), "LBAStart"))
			{
				Uint64 lBAStartValue;
				property.getValue().get(lBAStartValue);
				setLBAStart(lBAStartValue);
			}
			else if (String::equal(property.getName().getString(), "LBAEnd"))
			{
				Uint64 lBAEndValue;
				property.getValue().get(lBAEndValue);
				setLBAEnd(lBAEndValue);
			}
			else if (String::equal(property.getName().getString(), "TargetHDDs"))
			{
				Array<String> targetHDDsValue;
				property.getValue().get(targetHDDsValue);
				setTargetHDDs(targetHDDsValue);
			}
	}
	return true;
}


Boolean UNIX_RAIDDiagnosticSettingData::initialize()
{
	return false;
}

Boolean UNIX_RAIDDiagnosticSettingData::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("RAIDDiagnosticSettingData");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_haltOnError = Boolean(false);
	_quickMode = Boolean(false);
	_percentOfTestCoverage = Uint8(0);
	_loopControlParameter.clear();
	_loopControl.clear();
	_otherLoopControlDescriptions.clear();
	_resultPersistence = Uint32(0);
	_logOptions.clear();
	_otherLogOptionsDescriptions.clear();
	_logStorage.clear();
	_otherLogStorageDescriptions.clear();
	_verbosityLevel.clear();
	_queryTimeout = Uint32(0);
	_nonDestructive = Boolean(false);
	_seed = Uint32(0);
	_lBAStart = Uint64(0);
	_lBAEnd = Uint64(0);
	_targetHDDs.clear();
	
	return false;
}

Boolean UNIX_RAIDDiagnosticSettingData::finalize()
{
	return false;
}


Boolean UNIX_RAIDDiagnosticSettingData::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_RAIDDiagnosticSettingData::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_RAIDDiagnosticSettingData::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_RAIDDiagnosticSettingData::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_RAIDDiagnosticSettingData::validateInstance()
{
	return true;
}

