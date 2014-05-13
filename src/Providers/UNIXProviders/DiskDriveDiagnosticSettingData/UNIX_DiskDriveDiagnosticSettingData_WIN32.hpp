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


UNIX_DiskDriveDiagnosticSettingData::UNIX_DiskDriveDiagnosticSettingData(void)
{
}

UNIX_DiskDriveDiagnosticSettingData::~UNIX_DiskDriveDiagnosticSettingData(void)
{
}

Boolean UNIX_DiskDriveDiagnosticSettingData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_DiskDriveDiagnosticSettingData::getInstanceID() const
{
	return _instanceID;
}

void UNIX_DiskDriveDiagnosticSettingData::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_DiskDriveDiagnosticSettingData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_DiskDriveDiagnosticSettingData::getCaption() const
{
	return _caption;
}

void UNIX_DiskDriveDiagnosticSettingData::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_DiskDriveDiagnosticSettingData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_DiskDriveDiagnosticSettingData::getDescription() const
{
	return _description;
}

void UNIX_DiskDriveDiagnosticSettingData::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_DiskDriveDiagnosticSettingData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_DiskDriveDiagnosticSettingData::getElementName() const
{
	return _elementName;
}

void UNIX_DiskDriveDiagnosticSettingData::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_DiskDriveDiagnosticSettingData::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_DiskDriveDiagnosticSettingData::getGeneration() const
{
	return _generation;
}

void UNIX_DiskDriveDiagnosticSettingData::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_DiskDriveDiagnosticSettingData::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_DiskDriveDiagnosticSettingData::getConfigurationName() const
{
	return _configurationName;
}

void UNIX_DiskDriveDiagnosticSettingData::setConfigurationName(String &value)
{
	_configurationName = value;
}

Boolean UNIX_DiskDriveDiagnosticSettingData::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_DiskDriveDiagnosticSettingData::getChangeableType() const
{
	return _changeableType;
}

void UNIX_DiskDriveDiagnosticSettingData::setChangeableType(Uint16 &value)
{
	_changeableType = value;
}

Boolean UNIX_DiskDriveDiagnosticSettingData::getComponentSetting(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPONENT_SETTING, getComponentSetting());
	return true;
}

Array<String> UNIX_DiskDriveDiagnosticSettingData::getComponentSetting() const
{
	return _componentSetting;
}

void UNIX_DiskDriveDiagnosticSettingData::setComponentSetting(Array<String> &value)
{
	_componentSetting = value;
}

Boolean UNIX_DiskDriveDiagnosticSettingData::getSoID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ID, getSoID());
	return true;
}

String UNIX_DiskDriveDiagnosticSettingData::getSoID() const
{
	return _soID;
}

void UNIX_DiskDriveDiagnosticSettingData::setSoID(String &value)
{
	_soID = value;
}

Boolean UNIX_DiskDriveDiagnosticSettingData::getSoOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ORG_ID, getSoOrgID());
	return true;
}

String UNIX_DiskDriveDiagnosticSettingData::getSoOrgID() const
{
	return _soOrgID;
}

void UNIX_DiskDriveDiagnosticSettingData::setSoOrgID(String &value)
{
	_soOrgID = value;
}

Boolean UNIX_DiskDriveDiagnosticSettingData::getHaltOnError(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HALT_ON_ERROR, getHaltOnError());
	return true;
}

Boolean UNIX_DiskDriveDiagnosticSettingData::getHaltOnError() const
{
	return _haltOnError;
}

void UNIX_DiskDriveDiagnosticSettingData::setHaltOnError(Boolean &value)
{
	_haltOnError = value;
}

Boolean UNIX_DiskDriveDiagnosticSettingData::getQuickMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_QUICK_MODE, getQuickMode());
	return true;
}

Boolean UNIX_DiskDriveDiagnosticSettingData::getQuickMode() const
{
	return _quickMode;
}

void UNIX_DiskDriveDiagnosticSettingData::setQuickMode(Boolean &value)
{
	_quickMode = value;
}

Boolean UNIX_DiskDriveDiagnosticSettingData::getPercentOfTestCoverage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERCENT_OF_TEST_COVERAGE, getPercentOfTestCoverage());
	return true;
}

Uint8 UNIX_DiskDriveDiagnosticSettingData::getPercentOfTestCoverage() const
{
	return _percentOfTestCoverage;
}

void UNIX_DiskDriveDiagnosticSettingData::setPercentOfTestCoverage(Uint8 &value)
{
	_percentOfTestCoverage = value;
}

Boolean UNIX_DiskDriveDiagnosticSettingData::getLoopControlParameter(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOOP_CONTROL_PARAMETER, getLoopControlParameter());
	return true;
}

Array<String> UNIX_DiskDriveDiagnosticSettingData::getLoopControlParameter() const
{
	return _loopControlParameter;
}

void UNIX_DiskDriveDiagnosticSettingData::setLoopControlParameter(Array<String> &value)
{
	_loopControlParameter = value;
}

Boolean UNIX_DiskDriveDiagnosticSettingData::getLoopControl(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOOP_CONTROL, getLoopControl());
	return true;
}

Array<Uint16> UNIX_DiskDriveDiagnosticSettingData::getLoopControl() const
{
	return _loopControl;
}

void UNIX_DiskDriveDiagnosticSettingData::setLoopControl(Array<Uint16> &value)
{
	_loopControl = value;
}

Boolean UNIX_DiskDriveDiagnosticSettingData::getOtherLoopControlDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_LOOP_CONTROL_DESCRIPTIONS, getOtherLoopControlDescriptions());
	return true;
}

Array<String> UNIX_DiskDriveDiagnosticSettingData::getOtherLoopControlDescriptions() const
{
	return _otherLoopControlDescriptions;
}

void UNIX_DiskDriveDiagnosticSettingData::setOtherLoopControlDescriptions(Array<String> &value)
{
	_otherLoopControlDescriptions = value;
}

Boolean UNIX_DiskDriveDiagnosticSettingData::getResultPersistence(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESULT_PERSISTENCE, getResultPersistence());
	return true;
}

Uint32 UNIX_DiskDriveDiagnosticSettingData::getResultPersistence() const
{
	return _resultPersistence;
}

void UNIX_DiskDriveDiagnosticSettingData::setResultPersistence(Uint32 &value)
{
	_resultPersistence = value;
}

Boolean UNIX_DiskDriveDiagnosticSettingData::getLogOptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOG_OPTIONS, getLogOptions());
	return true;
}

Array<Uint16> UNIX_DiskDriveDiagnosticSettingData::getLogOptions() const
{
	return _logOptions;
}

void UNIX_DiskDriveDiagnosticSettingData::setLogOptions(Array<Uint16> &value)
{
	_logOptions = value;
}

Boolean UNIX_DiskDriveDiagnosticSettingData::getOtherLogOptionsDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_LOG_OPTIONS_DESCRIPTIONS, getOtherLogOptionsDescriptions());
	return true;
}

Array<String> UNIX_DiskDriveDiagnosticSettingData::getOtherLogOptionsDescriptions() const
{
	return _otherLogOptionsDescriptions;
}

void UNIX_DiskDriveDiagnosticSettingData::setOtherLogOptionsDescriptions(Array<String> &value)
{
	_otherLogOptionsDescriptions = value;
}

Boolean UNIX_DiskDriveDiagnosticSettingData::getLogStorage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOG_STORAGE, getLogStorage());
	return true;
}

Array<Uint16> UNIX_DiskDriveDiagnosticSettingData::getLogStorage() const
{
	return _logStorage;
}

void UNIX_DiskDriveDiagnosticSettingData::setLogStorage(Array<Uint16> &value)
{
	_logStorage = value;
}

Boolean UNIX_DiskDriveDiagnosticSettingData::getOtherLogStorageDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_LOG_STORAGE_DESCRIPTIONS, getOtherLogStorageDescriptions());
	return true;
}

Array<String> UNIX_DiskDriveDiagnosticSettingData::getOtherLogStorageDescriptions() const
{
	return _otherLogStorageDescriptions;
}

void UNIX_DiskDriveDiagnosticSettingData::setOtherLogStorageDescriptions(Array<String> &value)
{
	_otherLogStorageDescriptions = value;
}

Boolean UNIX_DiskDriveDiagnosticSettingData::getVerbosityLevel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERBOSITY_LEVEL, getVerbosityLevel());
	return true;
}

Array<Uint16> UNIX_DiskDriveDiagnosticSettingData::getVerbosityLevel() const
{
	return _verbosityLevel;
}

void UNIX_DiskDriveDiagnosticSettingData::setVerbosityLevel(Array<Uint16> &value)
{
	_verbosityLevel = value;
}

Boolean UNIX_DiskDriveDiagnosticSettingData::getQueryTimeout(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_QUERY_TIMEOUT, getQueryTimeout());
	return true;
}

Uint32 UNIX_DiskDriveDiagnosticSettingData::getQueryTimeout() const
{
	return _queryTimeout;
}

void UNIX_DiskDriveDiagnosticSettingData::setQueryTimeout(Uint32 &value)
{
	_queryTimeout = value;
}

Boolean UNIX_DiskDriveDiagnosticSettingData::getNonDestructive(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NON_DESTRUCTIVE, getNonDestructive());
	return true;
}

Boolean UNIX_DiskDriveDiagnosticSettingData::getNonDestructive() const
{
	return _nonDestructive;
}

void UNIX_DiskDriveDiagnosticSettingData::setNonDestructive(Boolean &value)
{
	_nonDestructive = value;
}

Boolean UNIX_DiskDriveDiagnosticSettingData::getLBAStart(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_L_B_A_START, getLBAStart());
	return true;
}

Uint64 UNIX_DiskDriveDiagnosticSettingData::getLBAStart() const
{
	return _lBAStart;
}

void UNIX_DiskDriveDiagnosticSettingData::setLBAStart(Uint64 &value)
{
	_lBAStart = value;
}

Boolean UNIX_DiskDriveDiagnosticSettingData::getLBAEnd(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_L_B_A_END, getLBAEnd());
	return true;
}

Uint64 UNIX_DiskDriveDiagnosticSettingData::getLBAEnd() const
{
	return _lBAEnd;
}

void UNIX_DiskDriveDiagnosticSettingData::setLBAEnd(Uint64 &value)
{
	_lBAEnd = value;
}

Boolean UNIX_DiskDriveDiagnosticSettingData::getSeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SEED, getSeed());
	return true;
}

Uint32 UNIX_DiskDriveDiagnosticSettingData::getSeed() const
{
	return _seed;
}

void UNIX_DiskDriveDiagnosticSettingData::setSeed(Uint32 &value)
{
	_seed = value;
}

Boolean UNIX_DiskDriveDiagnosticSettingData::getDataSizes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_SIZES, getDataSizes());
	return true;
}

Array<Uint32> UNIX_DiskDriveDiagnosticSettingData::getDataSizes() const
{
	return _dataSizes;
}

void UNIX_DiskDriveDiagnosticSettingData::setDataSizes(Array<Uint32> &value)
{
	_dataSizes = value;
}

Boolean UNIX_DiskDriveDiagnosticSettingData::getDataPatterns(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_PATTERNS, getDataPatterns());
	return true;
}

Array<String> UNIX_DiskDriveDiagnosticSettingData::getDataPatterns() const
{
	return _dataPatterns;
}

void UNIX_DiskDriveDiagnosticSettingData::setDataPatterns(Array<String> &value)
{
	_dataPatterns = value;
}


void UNIX_DiskDriveDiagnosticSettingData::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("DiskDriveDiagnosticSettingData");
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
	_lBAStart = Uint64(0);
	_lBAEnd = Uint64(0);
	_seed = Uint32(0);
	_dataSizes.clear();
	_dataPatterns.clear();

}

Boolean UNIX_DiskDriveDiagnosticSettingData::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "Seed"))
			{
				Uint32 seedValue;
				property.getValue().get(seedValue);
				setSeed(seedValue);
			}
			else if (String::equal(property.getName().getString(), "DataSizes"))
			{
				Array<Uint32> dataSizesValue;
				property.getValue().get(dataSizesValue);
				setDataSizes(dataSizesValue);
			}
			else if (String::equal(property.getName().getString(), "DataPatterns"))
			{
				Array<String> dataPatternsValue;
				property.getValue().get(dataPatternsValue);
				setDataPatterns(dataPatternsValue);
			}
	}
	return true;
}


Boolean UNIX_DiskDriveDiagnosticSettingData::initialize()
{
	return false;
}

Boolean UNIX_DiskDriveDiagnosticSettingData::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("DiskDriveDiagnosticSettingData");
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
	_lBAStart = Uint64(0);
	_lBAEnd = Uint64(0);
	_seed = Uint32(0);
	_dataSizes.clear();
	_dataPatterns.clear();
	
	return false;
}

Boolean UNIX_DiskDriveDiagnosticSettingData::finalize()
{
	return false;
}


Boolean UNIX_DiskDriveDiagnosticSettingData::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_DiskDriveDiagnosticSettingData::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DiskDriveDiagnosticSettingData::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DiskDriveDiagnosticSettingData::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DiskDriveDiagnosticSettingData::validateInstance()
{
	return true;
}

