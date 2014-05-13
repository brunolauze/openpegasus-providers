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


UNIX_FCHBADiagnosticSettingData::UNIX_FCHBADiagnosticSettingData(void)
{
}

UNIX_FCHBADiagnosticSettingData::~UNIX_FCHBADiagnosticSettingData(void)
{
}

Boolean UNIX_FCHBADiagnosticSettingData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_FCHBADiagnosticSettingData::getInstanceID() const
{
	return _instanceID;
}

void UNIX_FCHBADiagnosticSettingData::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_FCHBADiagnosticSettingData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_FCHBADiagnosticSettingData::getCaption() const
{
	return _caption;
}

void UNIX_FCHBADiagnosticSettingData::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_FCHBADiagnosticSettingData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_FCHBADiagnosticSettingData::getDescription() const
{
	return _description;
}

void UNIX_FCHBADiagnosticSettingData::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_FCHBADiagnosticSettingData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_FCHBADiagnosticSettingData::getElementName() const
{
	return _elementName;
}

void UNIX_FCHBADiagnosticSettingData::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_FCHBADiagnosticSettingData::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_FCHBADiagnosticSettingData::getGeneration() const
{
	return _generation;
}

void UNIX_FCHBADiagnosticSettingData::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_FCHBADiagnosticSettingData::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_FCHBADiagnosticSettingData::getConfigurationName() const
{
	return _configurationName;
}

void UNIX_FCHBADiagnosticSettingData::setConfigurationName(String &value)
{
	_configurationName = value;
}

Boolean UNIX_FCHBADiagnosticSettingData::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_FCHBADiagnosticSettingData::getChangeableType() const
{
	return _changeableType;
}

void UNIX_FCHBADiagnosticSettingData::setChangeableType(Uint16 &value)
{
	_changeableType = value;
}

Boolean UNIX_FCHBADiagnosticSettingData::getComponentSetting(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPONENT_SETTING, getComponentSetting());
	return true;
}

Array<String> UNIX_FCHBADiagnosticSettingData::getComponentSetting() const
{
	return _componentSetting;
}

void UNIX_FCHBADiagnosticSettingData::setComponentSetting(Array<String> &value)
{
	_componentSetting = value;
}

Boolean UNIX_FCHBADiagnosticSettingData::getSoID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ID, getSoID());
	return true;
}

String UNIX_FCHBADiagnosticSettingData::getSoID() const
{
	return _soID;
}

void UNIX_FCHBADiagnosticSettingData::setSoID(String &value)
{
	_soID = value;
}

Boolean UNIX_FCHBADiagnosticSettingData::getSoOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ORG_ID, getSoOrgID());
	return true;
}

String UNIX_FCHBADiagnosticSettingData::getSoOrgID() const
{
	return _soOrgID;
}

void UNIX_FCHBADiagnosticSettingData::setSoOrgID(String &value)
{
	_soOrgID = value;
}

Boolean UNIX_FCHBADiagnosticSettingData::getHaltOnError(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HALT_ON_ERROR, getHaltOnError());
	return true;
}

Boolean UNIX_FCHBADiagnosticSettingData::getHaltOnError() const
{
	return _haltOnError;
}

void UNIX_FCHBADiagnosticSettingData::setHaltOnError(Boolean &value)
{
	_haltOnError = value;
}

Boolean UNIX_FCHBADiagnosticSettingData::getQuickMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_QUICK_MODE, getQuickMode());
	return true;
}

Boolean UNIX_FCHBADiagnosticSettingData::getQuickMode() const
{
	return _quickMode;
}

void UNIX_FCHBADiagnosticSettingData::setQuickMode(Boolean &value)
{
	_quickMode = value;
}

Boolean UNIX_FCHBADiagnosticSettingData::getPercentOfTestCoverage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERCENT_OF_TEST_COVERAGE, getPercentOfTestCoverage());
	return true;
}

Uint8 UNIX_FCHBADiagnosticSettingData::getPercentOfTestCoverage() const
{
	return _percentOfTestCoverage;
}

void UNIX_FCHBADiagnosticSettingData::setPercentOfTestCoverage(Uint8 &value)
{
	_percentOfTestCoverage = value;
}

Boolean UNIX_FCHBADiagnosticSettingData::getLoopControlParameter(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOOP_CONTROL_PARAMETER, getLoopControlParameter());
	return true;
}

Array<String> UNIX_FCHBADiagnosticSettingData::getLoopControlParameter() const
{
	return _loopControlParameter;
}

void UNIX_FCHBADiagnosticSettingData::setLoopControlParameter(Array<String> &value)
{
	_loopControlParameter = value;
}

Boolean UNIX_FCHBADiagnosticSettingData::getLoopControl(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOOP_CONTROL, getLoopControl());
	return true;
}

Array<Uint16> UNIX_FCHBADiagnosticSettingData::getLoopControl() const
{
	return _loopControl;
}

void UNIX_FCHBADiagnosticSettingData::setLoopControl(Array<Uint16> &value)
{
	_loopControl = value;
}

Boolean UNIX_FCHBADiagnosticSettingData::getOtherLoopControlDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_LOOP_CONTROL_DESCRIPTIONS, getOtherLoopControlDescriptions());
	return true;
}

Array<String> UNIX_FCHBADiagnosticSettingData::getOtherLoopControlDescriptions() const
{
	return _otherLoopControlDescriptions;
}

void UNIX_FCHBADiagnosticSettingData::setOtherLoopControlDescriptions(Array<String> &value)
{
	_otherLoopControlDescriptions = value;
}

Boolean UNIX_FCHBADiagnosticSettingData::getResultPersistence(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESULT_PERSISTENCE, getResultPersistence());
	return true;
}

Uint32 UNIX_FCHBADiagnosticSettingData::getResultPersistence() const
{
	return _resultPersistence;
}

void UNIX_FCHBADiagnosticSettingData::setResultPersistence(Uint32 &value)
{
	_resultPersistence = value;
}

Boolean UNIX_FCHBADiagnosticSettingData::getLogOptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOG_OPTIONS, getLogOptions());
	return true;
}

Array<Uint16> UNIX_FCHBADiagnosticSettingData::getLogOptions() const
{
	return _logOptions;
}

void UNIX_FCHBADiagnosticSettingData::setLogOptions(Array<Uint16> &value)
{
	_logOptions = value;
}

Boolean UNIX_FCHBADiagnosticSettingData::getOtherLogOptionsDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_LOG_OPTIONS_DESCRIPTIONS, getOtherLogOptionsDescriptions());
	return true;
}

Array<String> UNIX_FCHBADiagnosticSettingData::getOtherLogOptionsDescriptions() const
{
	return _otherLogOptionsDescriptions;
}

void UNIX_FCHBADiagnosticSettingData::setOtherLogOptionsDescriptions(Array<String> &value)
{
	_otherLogOptionsDescriptions = value;
}

Boolean UNIX_FCHBADiagnosticSettingData::getLogStorage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOG_STORAGE, getLogStorage());
	return true;
}

Array<Uint16> UNIX_FCHBADiagnosticSettingData::getLogStorage() const
{
	return _logStorage;
}

void UNIX_FCHBADiagnosticSettingData::setLogStorage(Array<Uint16> &value)
{
	_logStorage = value;
}

Boolean UNIX_FCHBADiagnosticSettingData::getOtherLogStorageDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_LOG_STORAGE_DESCRIPTIONS, getOtherLogStorageDescriptions());
	return true;
}

Array<String> UNIX_FCHBADiagnosticSettingData::getOtherLogStorageDescriptions() const
{
	return _otherLogStorageDescriptions;
}

void UNIX_FCHBADiagnosticSettingData::setOtherLogStorageDescriptions(Array<String> &value)
{
	_otherLogStorageDescriptions = value;
}

Boolean UNIX_FCHBADiagnosticSettingData::getVerbosityLevel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERBOSITY_LEVEL, getVerbosityLevel());
	return true;
}

Array<Uint16> UNIX_FCHBADiagnosticSettingData::getVerbosityLevel() const
{
	return _verbosityLevel;
}

void UNIX_FCHBADiagnosticSettingData::setVerbosityLevel(Array<Uint16> &value)
{
	_verbosityLevel = value;
}

Boolean UNIX_FCHBADiagnosticSettingData::getQueryTimeout(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_QUERY_TIMEOUT, getQueryTimeout());
	return true;
}

Uint32 UNIX_FCHBADiagnosticSettingData::getQueryTimeout() const
{
	return _queryTimeout;
}

void UNIX_FCHBADiagnosticSettingData::setQueryTimeout(Uint32 &value)
{
	_queryTimeout = value;
}

Boolean UNIX_FCHBADiagnosticSettingData::getNonDestructive(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NON_DESTRUCTIVE, getNonDestructive());
	return true;
}

Boolean UNIX_FCHBADiagnosticSettingData::getNonDestructive() const
{
	return _nonDestructive;
}

void UNIX_FCHBADiagnosticSettingData::setNonDestructive(Boolean &value)
{
	_nonDestructive = value;
}

Boolean UNIX_FCHBADiagnosticSettingData::getEchoMechanism(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ECHO_MECHANISM, getEchoMechanism());
	return true;
}

Uint32 UNIX_FCHBADiagnosticSettingData::getEchoMechanism() const
{
	return _echoMechanism;
}

void UNIX_FCHBADiagnosticSettingData::setEchoMechanism(Uint32 &value)
{
	_echoMechanism = value;
}

Boolean UNIX_FCHBADiagnosticSettingData::getOtherEchoMechanism(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ECHO_MECHANISM, getOtherEchoMechanism());
	return true;
}

String UNIX_FCHBADiagnosticSettingData::getOtherEchoMechanism() const
{
	return _otherEchoMechanism;
}

void UNIX_FCHBADiagnosticSettingData::setOtherEchoMechanism(String &value)
{
	_otherEchoMechanism = value;
}

Boolean UNIX_FCHBADiagnosticSettingData::getTargetDeviceFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TARGET_DEVICE_FORMAT, getTargetDeviceFormat());
	return true;
}

String UNIX_FCHBADiagnosticSettingData::getTargetDeviceFormat() const
{
	return _targetDeviceFormat;
}

void UNIX_FCHBADiagnosticSettingData::setTargetDeviceFormat(String &value)
{
	_targetDeviceFormat = value;
}

Boolean UNIX_FCHBADiagnosticSettingData::getTargetDevice(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TARGET_DEVICE, getTargetDevice());
	return true;
}

String UNIX_FCHBADiagnosticSettingData::getTargetDevice() const
{
	return _targetDevice;
}

void UNIX_FCHBADiagnosticSettingData::setTargetDevice(String &value)
{
	_targetDevice = value;
}

Boolean UNIX_FCHBADiagnosticSettingData::getLUN(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_L_U_N, getLUN());
	return true;
}

Uint64 UNIX_FCHBADiagnosticSettingData::getLUN() const
{
	return _lUN;
}

void UNIX_FCHBADiagnosticSettingData::setLUN(Uint64 &value)
{
	_lUN = value;
}

Boolean UNIX_FCHBADiagnosticSettingData::getBufferSizes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BUFFER_SIZES, getBufferSizes());
	return true;
}

Array<Uint32> UNIX_FCHBADiagnosticSettingData::getBufferSizes() const
{
	return _bufferSizes;
}

void UNIX_FCHBADiagnosticSettingData::setBufferSizes(Array<Uint32> &value)
{
	_bufferSizes = value;
}

Boolean UNIX_FCHBADiagnosticSettingData::getBufferPattern(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BUFFER_PATTERN, getBufferPattern());
	return true;
}

Array<Uint8> UNIX_FCHBADiagnosticSettingData::getBufferPattern() const
{
	return _bufferPattern;
}

void UNIX_FCHBADiagnosticSettingData::setBufferPattern(Array<Uint8> &value)
{
	_bufferPattern = value;
}

Boolean UNIX_FCHBADiagnosticSettingData::getPingMechanism(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PING_MECHANISM, getPingMechanism());
	return true;
}

Uint16 UNIX_FCHBADiagnosticSettingData::getPingMechanism() const
{
	return _pingMechanism;
}

void UNIX_FCHBADiagnosticSettingData::setPingMechanism(Uint16 &value)
{
	_pingMechanism = value;
}

Boolean UNIX_FCHBADiagnosticSettingData::getOtherPingMechanism(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_PING_MECHANISM, getOtherPingMechanism());
	return true;
}

String UNIX_FCHBADiagnosticSettingData::getOtherPingMechanism() const
{
	return _otherPingMechanism;
}

void UNIX_FCHBADiagnosticSettingData::setOtherPingMechanism(String &value)
{
	_otherPingMechanism = value;
}

Boolean UNIX_FCHBADiagnosticSettingData::getOtherTargetDeviceFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TARGET_DEVICE_FORMAT, getOtherTargetDeviceFormat());
	return true;
}

String UNIX_FCHBADiagnosticSettingData::getOtherTargetDeviceFormat() const
{
	return _otherTargetDeviceFormat;
}

void UNIX_FCHBADiagnosticSettingData::setOtherTargetDeviceFormat(String &value)
{
	_otherTargetDeviceFormat = value;
}


void UNIX_FCHBADiagnosticSettingData::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("FCHBADiagnosticSettingData");
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
	_echoMechanism = Uint32(0);
	_otherEchoMechanism = String ("");
	_targetDeviceFormat = String ("");
	_targetDevice = String ("");
	_lUN = Uint64(0);
	_bufferSizes.clear();
	_bufferPattern.clear();
	_pingMechanism = Uint16(0);
	_otherPingMechanism = String ("");
	_otherTargetDeviceFormat = String ("");

}

Boolean UNIX_FCHBADiagnosticSettingData::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "EchoMechanism"))
			{
				Uint32 echoMechanismValue;
				property.getValue().get(echoMechanismValue);
				setEchoMechanism(echoMechanismValue);
			}
			else if (String::equal(property.getName().getString(), "OtherEchoMechanism"))
			{
				String otherEchoMechanismValue;
				property.getValue().get(otherEchoMechanismValue);
				setOtherEchoMechanism(otherEchoMechanismValue);
			}
			else if (String::equal(property.getName().getString(), "TargetDeviceFormat"))
			{
				String targetDeviceFormatValue;
				property.getValue().get(targetDeviceFormatValue);
				setTargetDeviceFormat(targetDeviceFormatValue);
			}
			else if (String::equal(property.getName().getString(), "TargetDevice"))
			{
				String targetDeviceValue;
				property.getValue().get(targetDeviceValue);
				setTargetDevice(targetDeviceValue);
			}
			else if (String::equal(property.getName().getString(), "LUN"))
			{
				Uint64 lUNValue;
				property.getValue().get(lUNValue);
				setLUN(lUNValue);
			}
			else if (String::equal(property.getName().getString(), "BufferSizes"))
			{
				Array<Uint32> bufferSizesValue;
				property.getValue().get(bufferSizesValue);
				setBufferSizes(bufferSizesValue);
			}
			else if (String::equal(property.getName().getString(), "BufferPattern"))
			{
				Array<Uint8> bufferPatternValue;
				property.getValue().get(bufferPatternValue);
				setBufferPattern(bufferPatternValue);
			}
			else if (String::equal(property.getName().getString(), "PingMechanism"))
			{
				Uint16 pingMechanismValue;
				property.getValue().get(pingMechanismValue);
				setPingMechanism(pingMechanismValue);
			}
			else if (String::equal(property.getName().getString(), "OtherPingMechanism"))
			{
				String otherPingMechanismValue;
				property.getValue().get(otherPingMechanismValue);
				setOtherPingMechanism(otherPingMechanismValue);
			}
			else if (String::equal(property.getName().getString(), "OtherTargetDeviceFormat"))
			{
				String otherTargetDeviceFormatValue;
				property.getValue().get(otherTargetDeviceFormatValue);
				setOtherTargetDeviceFormat(otherTargetDeviceFormatValue);
			}
	}
	return true;
}


Boolean UNIX_FCHBADiagnosticSettingData::initialize()
{
	return false;
}

Boolean UNIX_FCHBADiagnosticSettingData::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("FCHBADiagnosticSettingData");
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
	_echoMechanism = Uint32(0);
	_otherEchoMechanism = String ("");
	_targetDeviceFormat = String ("");
	_targetDevice = String ("");
	_lUN = Uint64(0);
	_bufferSizes.clear();
	_bufferPattern.clear();
	_pingMechanism = Uint16(0);
	_otherPingMechanism = String ("");
	_otherTargetDeviceFormat = String ("");
	
	return false;
}

Boolean UNIX_FCHBADiagnosticSettingData::finalize()
{
	return false;
}


Boolean UNIX_FCHBADiagnosticSettingData::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_FCHBADiagnosticSettingData::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FCHBADiagnosticSettingData::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FCHBADiagnosticSettingData::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FCHBADiagnosticSettingData::validateInstance()
{
	return true;
}

