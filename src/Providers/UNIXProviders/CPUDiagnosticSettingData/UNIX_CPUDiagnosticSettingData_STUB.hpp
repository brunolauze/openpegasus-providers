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


UNIX_CPUDiagnosticSettingData::UNIX_CPUDiagnosticSettingData(void)
{
}

UNIX_CPUDiagnosticSettingData::~UNIX_CPUDiagnosticSettingData(void)
{
}

Boolean UNIX_CPUDiagnosticSettingData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_CPUDiagnosticSettingData::getInstanceID() const
{
	return _instanceID;
}

void UNIX_CPUDiagnosticSettingData::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_CPUDiagnosticSettingData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_CPUDiagnosticSettingData::getCaption() const
{
	return _caption;
}

void UNIX_CPUDiagnosticSettingData::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_CPUDiagnosticSettingData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_CPUDiagnosticSettingData::getDescription() const
{
	return _description;
}

void UNIX_CPUDiagnosticSettingData::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_CPUDiagnosticSettingData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_CPUDiagnosticSettingData::getElementName() const
{
	return _elementName;
}

void UNIX_CPUDiagnosticSettingData::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_CPUDiagnosticSettingData::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_CPUDiagnosticSettingData::getGeneration() const
{
	return _generation;
}

void UNIX_CPUDiagnosticSettingData::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_CPUDiagnosticSettingData::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_CPUDiagnosticSettingData::getConfigurationName() const
{
	return _configurationName;
}

void UNIX_CPUDiagnosticSettingData::setConfigurationName(String &value)
{
	_configurationName = value;
}

Boolean UNIX_CPUDiagnosticSettingData::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_CPUDiagnosticSettingData::getChangeableType() const
{
	return _changeableType;
}

void UNIX_CPUDiagnosticSettingData::setChangeableType(Uint16 &value)
{
	_changeableType = value;
}

Boolean UNIX_CPUDiagnosticSettingData::getComponentSetting(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPONENT_SETTING, getComponentSetting());
	return true;
}

Array<String> UNIX_CPUDiagnosticSettingData::getComponentSetting() const
{
	return _componentSetting;
}

void UNIX_CPUDiagnosticSettingData::setComponentSetting(Array<String> &value)
{
	_componentSetting = value;
}

Boolean UNIX_CPUDiagnosticSettingData::getSoID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ID, getSoID());
	return true;
}

String UNIX_CPUDiagnosticSettingData::getSoID() const
{
	return _soID;
}

void UNIX_CPUDiagnosticSettingData::setSoID(String &value)
{
	_soID = value;
}

Boolean UNIX_CPUDiagnosticSettingData::getSoOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ORG_ID, getSoOrgID());
	return true;
}

String UNIX_CPUDiagnosticSettingData::getSoOrgID() const
{
	return _soOrgID;
}

void UNIX_CPUDiagnosticSettingData::setSoOrgID(String &value)
{
	_soOrgID = value;
}

Boolean UNIX_CPUDiagnosticSettingData::getHaltOnError(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HALT_ON_ERROR, getHaltOnError());
	return true;
}

Boolean UNIX_CPUDiagnosticSettingData::getHaltOnError() const
{
	return _haltOnError;
}

void UNIX_CPUDiagnosticSettingData::setHaltOnError(Boolean &value)
{
	_haltOnError = value;
}

Boolean UNIX_CPUDiagnosticSettingData::getQuickMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_QUICK_MODE, getQuickMode());
	return true;
}

Boolean UNIX_CPUDiagnosticSettingData::getQuickMode() const
{
	return _quickMode;
}

void UNIX_CPUDiagnosticSettingData::setQuickMode(Boolean &value)
{
	_quickMode = value;
}

Boolean UNIX_CPUDiagnosticSettingData::getPercentOfTestCoverage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERCENT_OF_TEST_COVERAGE, getPercentOfTestCoverage());
	return true;
}

Uint8 UNIX_CPUDiagnosticSettingData::getPercentOfTestCoverage() const
{
	return _percentOfTestCoverage;
}

void UNIX_CPUDiagnosticSettingData::setPercentOfTestCoverage(Uint8 &value)
{
	_percentOfTestCoverage = value;
}

Boolean UNIX_CPUDiagnosticSettingData::getLoopControlParameter(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOOP_CONTROL_PARAMETER, getLoopControlParameter());
	return true;
}

Array<String> UNIX_CPUDiagnosticSettingData::getLoopControlParameter() const
{
	return _loopControlParameter;
}

void UNIX_CPUDiagnosticSettingData::setLoopControlParameter(Array<String> &value)
{
	_loopControlParameter = value;
}

Boolean UNIX_CPUDiagnosticSettingData::getLoopControl(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOOP_CONTROL, getLoopControl());
	return true;
}

Array<Uint16> UNIX_CPUDiagnosticSettingData::getLoopControl() const
{
	return _loopControl;
}

void UNIX_CPUDiagnosticSettingData::setLoopControl(Array<Uint16> &value)
{
	_loopControl = value;
}

Boolean UNIX_CPUDiagnosticSettingData::getOtherLoopControlDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_LOOP_CONTROL_DESCRIPTIONS, getOtherLoopControlDescriptions());
	return true;
}

Array<String> UNIX_CPUDiagnosticSettingData::getOtherLoopControlDescriptions() const
{
	return _otherLoopControlDescriptions;
}

void UNIX_CPUDiagnosticSettingData::setOtherLoopControlDescriptions(Array<String> &value)
{
	_otherLoopControlDescriptions = value;
}

Boolean UNIX_CPUDiagnosticSettingData::getResultPersistence(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESULT_PERSISTENCE, getResultPersistence());
	return true;
}

Uint32 UNIX_CPUDiagnosticSettingData::getResultPersistence() const
{
	return _resultPersistence;
}

void UNIX_CPUDiagnosticSettingData::setResultPersistence(Uint32 &value)
{
	_resultPersistence = value;
}

Boolean UNIX_CPUDiagnosticSettingData::getLogOptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOG_OPTIONS, getLogOptions());
	return true;
}

Array<Uint16> UNIX_CPUDiagnosticSettingData::getLogOptions() const
{
	return _logOptions;
}

void UNIX_CPUDiagnosticSettingData::setLogOptions(Array<Uint16> &value)
{
	_logOptions = value;
}

Boolean UNIX_CPUDiagnosticSettingData::getOtherLogOptionsDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_LOG_OPTIONS_DESCRIPTIONS, getOtherLogOptionsDescriptions());
	return true;
}

Array<String> UNIX_CPUDiagnosticSettingData::getOtherLogOptionsDescriptions() const
{
	return _otherLogOptionsDescriptions;
}

void UNIX_CPUDiagnosticSettingData::setOtherLogOptionsDescriptions(Array<String> &value)
{
	_otherLogOptionsDescriptions = value;
}

Boolean UNIX_CPUDiagnosticSettingData::getLogStorage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOG_STORAGE, getLogStorage());
	return true;
}

Array<Uint16> UNIX_CPUDiagnosticSettingData::getLogStorage() const
{
	return _logStorage;
}

void UNIX_CPUDiagnosticSettingData::setLogStorage(Array<Uint16> &value)
{
	_logStorage = value;
}

Boolean UNIX_CPUDiagnosticSettingData::getOtherLogStorageDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_LOG_STORAGE_DESCRIPTIONS, getOtherLogStorageDescriptions());
	return true;
}

Array<String> UNIX_CPUDiagnosticSettingData::getOtherLogStorageDescriptions() const
{
	return _otherLogStorageDescriptions;
}

void UNIX_CPUDiagnosticSettingData::setOtherLogStorageDescriptions(Array<String> &value)
{
	_otherLogStorageDescriptions = value;
}

Boolean UNIX_CPUDiagnosticSettingData::getVerbosityLevel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERBOSITY_LEVEL, getVerbosityLevel());
	return true;
}

Array<Uint16> UNIX_CPUDiagnosticSettingData::getVerbosityLevel() const
{
	return _verbosityLevel;
}

void UNIX_CPUDiagnosticSettingData::setVerbosityLevel(Array<Uint16> &value)
{
	_verbosityLevel = value;
}

Boolean UNIX_CPUDiagnosticSettingData::getQueryTimeout(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_QUERY_TIMEOUT, getQueryTimeout());
	return true;
}

Uint32 UNIX_CPUDiagnosticSettingData::getQueryTimeout() const
{
	return _queryTimeout;
}

void UNIX_CPUDiagnosticSettingData::setQueryTimeout(Uint32 &value)
{
	_queryTimeout = value;
}

Boolean UNIX_CPUDiagnosticSettingData::getNonDestructive(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NON_DESTRUCTIVE, getNonDestructive());
	return true;
}

Boolean UNIX_CPUDiagnosticSettingData::getNonDestructive() const
{
	return _nonDestructive;
}

void UNIX_CPUDiagnosticSettingData::setNonDestructive(Boolean &value)
{
	_nonDestructive = value;
}

Boolean UNIX_CPUDiagnosticSettingData::getCoreVoltages(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CORE_VOLTAGES, getCoreVoltages());
	return true;
}

Array<Real32> UNIX_CPUDiagnosticSettingData::getCoreVoltages() const
{
	return _coreVoltages;
}

void UNIX_CPUDiagnosticSettingData::setCoreVoltages(Array<Real32> &value)
{
	_coreVoltages = value;
}

Boolean UNIX_CPUDiagnosticSettingData::getCPUSpeeds(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CPU_SPEEDS, getCPUSpeeds());
	return true;
}

Array<Real32> UNIX_CPUDiagnosticSettingData::getCPUSpeeds() const
{
	return _cPUSpeeds;
}

void UNIX_CPUDiagnosticSettingData::setCPUSpeeds(Array<Real32> &value)
{
	_cPUSpeeds = value;
}

Boolean UNIX_CPUDiagnosticSettingData::getSeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SEED, getSeed());
	return true;
}

Uint32 UNIX_CPUDiagnosticSettingData::getSeed() const
{
	return _seed;
}

void UNIX_CPUDiagnosticSettingData::setSeed(Uint32 &value)
{
	_seed = value;
}


void UNIX_CPUDiagnosticSettingData::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("CPUDiagnosticSettingData");
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
	_coreVoltages.clear();
	_cPUSpeeds.clear();
	_seed = Uint32(0);

}

Boolean UNIX_CPUDiagnosticSettingData::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "CoreVoltages"))
			{
				Array<Real32> coreVoltagesValue;
				property.getValue().get(coreVoltagesValue);
				setCoreVoltages(coreVoltagesValue);
			}
			else if (String::equal(property.getName().getString(), "CPUSpeeds"))
			{
				Array<Real32> cPUSpeedsValue;
				property.getValue().get(cPUSpeedsValue);
				setCPUSpeeds(cPUSpeedsValue);
			}
			else if (String::equal(property.getName().getString(), "Seed"))
			{
				Uint32 seedValue;
				property.getValue().get(seedValue);
				setSeed(seedValue);
			}
	}
	return true;
}


Boolean UNIX_CPUDiagnosticSettingData::initialize()
{
	return false;
}

Boolean UNIX_CPUDiagnosticSettingData::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("CPUDiagnosticSettingData");
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
	_coreVoltages.clear();
	_cPUSpeeds.clear();
	_seed = Uint32(0);
	
	return false;
}

Boolean UNIX_CPUDiagnosticSettingData::finalize()
{
	return false;
}


Boolean UNIX_CPUDiagnosticSettingData::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_CPUDiagnosticSettingData::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_CPUDiagnosticSettingData::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_CPUDiagnosticSettingData::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_CPUDiagnosticSettingData::validateInstance()
{
	return true;
}

