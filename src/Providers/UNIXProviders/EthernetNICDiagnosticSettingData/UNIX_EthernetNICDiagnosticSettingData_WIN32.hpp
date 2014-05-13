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


UNIX_EthernetNICDiagnosticSettingData::UNIX_EthernetNICDiagnosticSettingData(void)
{
}

UNIX_EthernetNICDiagnosticSettingData::~UNIX_EthernetNICDiagnosticSettingData(void)
{
}

Boolean UNIX_EthernetNICDiagnosticSettingData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_EthernetNICDiagnosticSettingData::getInstanceID() const
{
	return _instanceID;
}

void UNIX_EthernetNICDiagnosticSettingData::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_EthernetNICDiagnosticSettingData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_EthernetNICDiagnosticSettingData::getCaption() const
{
	return _caption;
}

void UNIX_EthernetNICDiagnosticSettingData::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_EthernetNICDiagnosticSettingData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_EthernetNICDiagnosticSettingData::getDescription() const
{
	return _description;
}

void UNIX_EthernetNICDiagnosticSettingData::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_EthernetNICDiagnosticSettingData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_EthernetNICDiagnosticSettingData::getElementName() const
{
	return _elementName;
}

void UNIX_EthernetNICDiagnosticSettingData::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_EthernetNICDiagnosticSettingData::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_EthernetNICDiagnosticSettingData::getGeneration() const
{
	return _generation;
}

void UNIX_EthernetNICDiagnosticSettingData::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_EthernetNICDiagnosticSettingData::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_EthernetNICDiagnosticSettingData::getConfigurationName() const
{
	return _configurationName;
}

void UNIX_EthernetNICDiagnosticSettingData::setConfigurationName(String &value)
{
	_configurationName = value;
}

Boolean UNIX_EthernetNICDiagnosticSettingData::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_EthernetNICDiagnosticSettingData::getChangeableType() const
{
	return _changeableType;
}

void UNIX_EthernetNICDiagnosticSettingData::setChangeableType(Uint16 &value)
{
	_changeableType = value;
}

Boolean UNIX_EthernetNICDiagnosticSettingData::getComponentSetting(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPONENT_SETTING, getComponentSetting());
	return true;
}

Array<String> UNIX_EthernetNICDiagnosticSettingData::getComponentSetting() const
{
	return _componentSetting;
}

void UNIX_EthernetNICDiagnosticSettingData::setComponentSetting(Array<String> &value)
{
	_componentSetting = value;
}

Boolean UNIX_EthernetNICDiagnosticSettingData::getSoID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ID, getSoID());
	return true;
}

String UNIX_EthernetNICDiagnosticSettingData::getSoID() const
{
	return _soID;
}

void UNIX_EthernetNICDiagnosticSettingData::setSoID(String &value)
{
	_soID = value;
}

Boolean UNIX_EthernetNICDiagnosticSettingData::getSoOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ORG_ID, getSoOrgID());
	return true;
}

String UNIX_EthernetNICDiagnosticSettingData::getSoOrgID() const
{
	return _soOrgID;
}

void UNIX_EthernetNICDiagnosticSettingData::setSoOrgID(String &value)
{
	_soOrgID = value;
}

Boolean UNIX_EthernetNICDiagnosticSettingData::getHaltOnError(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HALT_ON_ERROR, getHaltOnError());
	return true;
}

Boolean UNIX_EthernetNICDiagnosticSettingData::getHaltOnError() const
{
	return _haltOnError;
}

void UNIX_EthernetNICDiagnosticSettingData::setHaltOnError(Boolean &value)
{
	_haltOnError = value;
}

Boolean UNIX_EthernetNICDiagnosticSettingData::getQuickMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_QUICK_MODE, getQuickMode());
	return true;
}

Boolean UNIX_EthernetNICDiagnosticSettingData::getQuickMode() const
{
	return _quickMode;
}

void UNIX_EthernetNICDiagnosticSettingData::setQuickMode(Boolean &value)
{
	_quickMode = value;
}

Boolean UNIX_EthernetNICDiagnosticSettingData::getPercentOfTestCoverage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERCENT_OF_TEST_COVERAGE, getPercentOfTestCoverage());
	return true;
}

Uint8 UNIX_EthernetNICDiagnosticSettingData::getPercentOfTestCoverage() const
{
	return _percentOfTestCoverage;
}

void UNIX_EthernetNICDiagnosticSettingData::setPercentOfTestCoverage(Uint8 &value)
{
	_percentOfTestCoverage = value;
}

Boolean UNIX_EthernetNICDiagnosticSettingData::getLoopControlParameter(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOOP_CONTROL_PARAMETER, getLoopControlParameter());
	return true;
}

Array<String> UNIX_EthernetNICDiagnosticSettingData::getLoopControlParameter() const
{
	return _loopControlParameter;
}

void UNIX_EthernetNICDiagnosticSettingData::setLoopControlParameter(Array<String> &value)
{
	_loopControlParameter = value;
}

Boolean UNIX_EthernetNICDiagnosticSettingData::getLoopControl(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOOP_CONTROL, getLoopControl());
	return true;
}

Array<Uint16> UNIX_EthernetNICDiagnosticSettingData::getLoopControl() const
{
	return _loopControl;
}

void UNIX_EthernetNICDiagnosticSettingData::setLoopControl(Array<Uint16> &value)
{
	_loopControl = value;
}

Boolean UNIX_EthernetNICDiagnosticSettingData::getOtherLoopControlDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_LOOP_CONTROL_DESCRIPTIONS, getOtherLoopControlDescriptions());
	return true;
}

Array<String> UNIX_EthernetNICDiagnosticSettingData::getOtherLoopControlDescriptions() const
{
	return _otherLoopControlDescriptions;
}

void UNIX_EthernetNICDiagnosticSettingData::setOtherLoopControlDescriptions(Array<String> &value)
{
	_otherLoopControlDescriptions = value;
}

Boolean UNIX_EthernetNICDiagnosticSettingData::getResultPersistence(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESULT_PERSISTENCE, getResultPersistence());
	return true;
}

Uint32 UNIX_EthernetNICDiagnosticSettingData::getResultPersistence() const
{
	return _resultPersistence;
}

void UNIX_EthernetNICDiagnosticSettingData::setResultPersistence(Uint32 &value)
{
	_resultPersistence = value;
}

Boolean UNIX_EthernetNICDiagnosticSettingData::getLogOptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOG_OPTIONS, getLogOptions());
	return true;
}

Array<Uint16> UNIX_EthernetNICDiagnosticSettingData::getLogOptions() const
{
	return _logOptions;
}

void UNIX_EthernetNICDiagnosticSettingData::setLogOptions(Array<Uint16> &value)
{
	_logOptions = value;
}

Boolean UNIX_EthernetNICDiagnosticSettingData::getOtherLogOptionsDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_LOG_OPTIONS_DESCRIPTIONS, getOtherLogOptionsDescriptions());
	return true;
}

Array<String> UNIX_EthernetNICDiagnosticSettingData::getOtherLogOptionsDescriptions() const
{
	return _otherLogOptionsDescriptions;
}

void UNIX_EthernetNICDiagnosticSettingData::setOtherLogOptionsDescriptions(Array<String> &value)
{
	_otherLogOptionsDescriptions = value;
}

Boolean UNIX_EthernetNICDiagnosticSettingData::getLogStorage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOG_STORAGE, getLogStorage());
	return true;
}

Array<Uint16> UNIX_EthernetNICDiagnosticSettingData::getLogStorage() const
{
	return _logStorage;
}

void UNIX_EthernetNICDiagnosticSettingData::setLogStorage(Array<Uint16> &value)
{
	_logStorage = value;
}

Boolean UNIX_EthernetNICDiagnosticSettingData::getOtherLogStorageDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_LOG_STORAGE_DESCRIPTIONS, getOtherLogStorageDescriptions());
	return true;
}

Array<String> UNIX_EthernetNICDiagnosticSettingData::getOtherLogStorageDescriptions() const
{
	return _otherLogStorageDescriptions;
}

void UNIX_EthernetNICDiagnosticSettingData::setOtherLogStorageDescriptions(Array<String> &value)
{
	_otherLogStorageDescriptions = value;
}

Boolean UNIX_EthernetNICDiagnosticSettingData::getVerbosityLevel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERBOSITY_LEVEL, getVerbosityLevel());
	return true;
}

Array<Uint16> UNIX_EthernetNICDiagnosticSettingData::getVerbosityLevel() const
{
	return _verbosityLevel;
}

void UNIX_EthernetNICDiagnosticSettingData::setVerbosityLevel(Array<Uint16> &value)
{
	_verbosityLevel = value;
}

Boolean UNIX_EthernetNICDiagnosticSettingData::getQueryTimeout(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_QUERY_TIMEOUT, getQueryTimeout());
	return true;
}

Uint32 UNIX_EthernetNICDiagnosticSettingData::getQueryTimeout() const
{
	return _queryTimeout;
}

void UNIX_EthernetNICDiagnosticSettingData::setQueryTimeout(Uint32 &value)
{
	_queryTimeout = value;
}

Boolean UNIX_EthernetNICDiagnosticSettingData::getNonDestructive(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NON_DESTRUCTIVE, getNonDestructive());
	return true;
}

Boolean UNIX_EthernetNICDiagnosticSettingData::getNonDestructive() const
{
	return _nonDestructive;
}

void UNIX_EthernetNICDiagnosticSettingData::setNonDestructive(Boolean &value)
{
	_nonDestructive = value;
}

Boolean UNIX_EthernetNICDiagnosticSettingData::getPacketSizes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKET_SIZES, getPacketSizes());
	return true;
}

Array<Uint16> UNIX_EthernetNICDiagnosticSettingData::getPacketSizes() const
{
	return _packetSizes;
}

void UNIX_EthernetNICDiagnosticSettingData::setPacketSizes(Array<Uint16> &value)
{
	_packetSizes = value;
}

Boolean UNIX_EthernetNICDiagnosticSettingData::getLinkSpeeds(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LINK_SPEEDS, getLinkSpeeds());
	return true;
}

Array<Uint64> UNIX_EthernetNICDiagnosticSettingData::getLinkSpeeds() const
{
	return _linkSpeeds;
}

void UNIX_EthernetNICDiagnosticSettingData::setLinkSpeeds(Array<Uint64> &value)
{
	_linkSpeeds = value;
}

Boolean UNIX_EthernetNICDiagnosticSettingData::getLoopbackLayers(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOOPBACK_LAYERS, getLoopbackLayers());
	return true;
}

Array<Uint16> UNIX_EthernetNICDiagnosticSettingData::getLoopbackLayers() const
{
	return _loopbackLayers;
}

void UNIX_EthernetNICDiagnosticSettingData::setLoopbackLayers(Array<Uint16> &value)
{
	_loopbackLayers = value;
}

Boolean UNIX_EthernetNICDiagnosticSettingData::getOtherLoopbackLayers(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_LOOPBACK_LAYERS, getOtherLoopbackLayers());
	return true;
}

Array<String> UNIX_EthernetNICDiagnosticSettingData::getOtherLoopbackLayers() const
{
	return _otherLoopbackLayers;
}

void UNIX_EthernetNICDiagnosticSettingData::setOtherLoopbackLayers(Array<String> &value)
{
	_otherLoopbackLayers = value;
}


void UNIX_EthernetNICDiagnosticSettingData::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("EthernetNICDiagnosticSettingData");
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
	_packetSizes.clear();
	_linkSpeeds.clear();
	_loopbackLayers.clear();
	_otherLoopbackLayers.clear();

}

Boolean UNIX_EthernetNICDiagnosticSettingData::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "PacketSizes"))
			{
				Array<Uint16> packetSizesValue;
				property.getValue().get(packetSizesValue);
				setPacketSizes(packetSizesValue);
			}
			else if (String::equal(property.getName().getString(), "LinkSpeeds"))
			{
				Array<Uint64> linkSpeedsValue;
				property.getValue().get(linkSpeedsValue);
				setLinkSpeeds(linkSpeedsValue);
			}
			else if (String::equal(property.getName().getString(), "LoopbackLayers"))
			{
				Array<Uint16> loopbackLayersValue;
				property.getValue().get(loopbackLayersValue);
				setLoopbackLayers(loopbackLayersValue);
			}
			else if (String::equal(property.getName().getString(), "OtherLoopbackLayers"))
			{
				Array<String> otherLoopbackLayersValue;
				property.getValue().get(otherLoopbackLayersValue);
				setOtherLoopbackLayers(otherLoopbackLayersValue);
			}
	}
	return true;
}


Boolean UNIX_EthernetNICDiagnosticSettingData::initialize()
{
	return false;
}

Boolean UNIX_EthernetNICDiagnosticSettingData::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("EthernetNICDiagnosticSettingData");
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
	_packetSizes.clear();
	_linkSpeeds.clear();
	_loopbackLayers.clear();
	_otherLoopbackLayers.clear();
	
	return false;
}

Boolean UNIX_EthernetNICDiagnosticSettingData::finalize()
{
	return false;
}


Boolean UNIX_EthernetNICDiagnosticSettingData::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_EthernetNICDiagnosticSettingData::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_EthernetNICDiagnosticSettingData::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_EthernetNICDiagnosticSettingData::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_EthernetNICDiagnosticSettingData::validateInstance()
{
	return true;
}

