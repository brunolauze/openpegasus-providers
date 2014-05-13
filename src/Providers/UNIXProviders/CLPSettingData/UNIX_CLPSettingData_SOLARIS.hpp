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


UNIX_CLPSettingData::UNIX_CLPSettingData(void)
{
}

UNIX_CLPSettingData::~UNIX_CLPSettingData(void)
{
}

Boolean UNIX_CLPSettingData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_CLPSettingData::getInstanceID() const
{
	return _instanceID;
}

void UNIX_CLPSettingData::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_CLPSettingData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_CLPSettingData::getCaption() const
{
	return _caption;
}

void UNIX_CLPSettingData::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_CLPSettingData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_CLPSettingData::getDescription() const
{
	return _description;
}

void UNIX_CLPSettingData::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_CLPSettingData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_CLPSettingData::getElementName() const
{
	return _elementName;
}

void UNIX_CLPSettingData::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_CLPSettingData::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_CLPSettingData::getGeneration() const
{
	return _generation;
}

void UNIX_CLPSettingData::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_CLPSettingData::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_CLPSettingData::getConfigurationName() const
{
	return _configurationName;
}

void UNIX_CLPSettingData::setConfigurationName(String &value)
{
	_configurationName = value;
}

Boolean UNIX_CLPSettingData::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_CLPSettingData::getChangeableType() const
{
	return _changeableType;
}

void UNIX_CLPSettingData::setChangeableType(Uint16 &value)
{
	_changeableType = value;
}

Boolean UNIX_CLPSettingData::getComponentSetting(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPONENT_SETTING, getComponentSetting());
	return true;
}

Array<String> UNIX_CLPSettingData::getComponentSetting() const
{
	return _componentSetting;
}

void UNIX_CLPSettingData::setComponentSetting(Array<String> &value)
{
	_componentSetting = value;
}

Boolean UNIX_CLPSettingData::getSoID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ID, getSoID());
	return true;
}

String UNIX_CLPSettingData::getSoID() const
{
	return _soID;
}

void UNIX_CLPSettingData::setSoID(String &value)
{
	_soID = value;
}

Boolean UNIX_CLPSettingData::getSoOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ORG_ID, getSoOrgID());
	return true;
}

String UNIX_CLPSettingData::getSoOrgID() const
{
	return _soOrgID;
}

void UNIX_CLPSettingData::setSoOrgID(String &value)
{
	_soOrgID = value;
}

Boolean UNIX_CLPSettingData::getCurrentDefaultTarget(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_DEFAULT_TARGET, getCurrentDefaultTarget());
	return true;
}

String UNIX_CLPSettingData::getCurrentDefaultTarget() const
{
	return _currentDefaultTarget;
}

void UNIX_CLPSettingData::setCurrentDefaultTarget(String &value)
{
	_currentDefaultTarget = value;
}

Boolean UNIX_CLPSettingData::getKeepTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_KEEP_TIME, getKeepTime());
	return true;
}

Uint16 UNIX_CLPSettingData::getKeepTime() const
{
	return _keepTime;
}

void UNIX_CLPSettingData::setKeepTime(Uint16 &value)
{
	_keepTime = value;
}

Boolean UNIX_CLPSettingData::getWaitBehavior(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WAIT_BEHAVIOR, getWaitBehavior());
	return true;
}

Boolean UNIX_CLPSettingData::getWaitBehavior() const
{
	return _waitBehavior;
}

void UNIX_CLPSettingData::setWaitBehavior(Boolean &value)
{
	_waitBehavior = value;
}

Boolean UNIX_CLPSettingData::getOutputFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OUTPUT_FORMAT, getOutputFormat());
	return true;
}

Uint16 UNIX_CLPSettingData::getOutputFormat() const
{
	return _outputFormat;
}

void UNIX_CLPSettingData::setOutputFormat(Uint16 &value)
{
	_outputFormat = value;
}

Boolean UNIX_CLPSettingData::getOutputVerbosity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OUTPUT_VERBOSITY, getOutputVerbosity());
	return true;
}

Uint16 UNIX_CLPSettingData::getOutputVerbosity() const
{
	return _outputVerbosity;
}

void UNIX_CLPSettingData::setOutputVerbosity(Uint16 &value)
{
	_outputVerbosity = value;
}

Boolean UNIX_CLPSettingData::getOutputLanguage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OUTPUT_LANGUAGE, getOutputLanguage());
	return true;
}

String UNIX_CLPSettingData::getOutputLanguage() const
{
	return _outputLanguage;
}

void UNIX_CLPSettingData::setOutputLanguage(String &value)
{
	_outputLanguage = value;
}

Boolean UNIX_CLPSettingData::getOutputPosition(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OUTPUT_POSITION, getOutputPosition());
	return true;
}

Uint16 UNIX_CLPSettingData::getOutputPosition() const
{
	return _outputPosition;
}

void UNIX_CLPSettingData::setOutputPosition(Uint16 &value)
{
	_outputPosition = value;
}

Boolean UNIX_CLPSettingData::getOutputOrder(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OUTPUT_ORDER, getOutputOrder());
	return true;
}

Uint16 UNIX_CLPSettingData::getOutputOrder() const
{
	return _outputOrder;
}

void UNIX_CLPSettingData::setOutputOrder(Uint16 &value)
{
	_outputOrder = value;
}

Boolean UNIX_CLPSettingData::getOutputCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OUTPUT_COUNT, getOutputCount());
	return true;
}

Uint32 UNIX_CLPSettingData::getOutputCount() const
{
	return _outputCount;
}

void UNIX_CLPSettingData::setOutputCount(Uint32 &value)
{
	_outputCount = value;
}

Boolean UNIX_CLPSettingData::getDisplayOption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DISPLAY_OPTION, getDisplayOption());
	return true;
}

String UNIX_CLPSettingData::getDisplayOption() const
{
	return _displayOption;
}

void UNIX_CLPSettingData::setDisplayOption(String &value)
{
	_displayOption = value;
}


void UNIX_CLPSettingData::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("CLPSettingData");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_currentDefaultTarget = String ("");
	_keepTime = Uint16(0);
	_waitBehavior = Boolean(false);
	_outputFormat = Uint16(0);
	_outputVerbosity = Uint16(0);
	_outputLanguage = String ("");
	_outputPosition = Uint16(0);
	_outputOrder = Uint16(0);
	_outputCount = Uint32(0);
	_displayOption = String ("");

}

Boolean UNIX_CLPSettingData::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "CurrentDefaultTarget"))
			{
				String currentDefaultTargetValue;
				property.getValue().get(currentDefaultTargetValue);
				setCurrentDefaultTarget(currentDefaultTargetValue);
			}
			else if (String::equal(property.getName().getString(), "KeepTime"))
			{
				Uint16 keepTimeValue;
				property.getValue().get(keepTimeValue);
				setKeepTime(keepTimeValue);
			}
			else if (String::equal(property.getName().getString(), "WaitBehavior"))
			{
				Boolean waitBehaviorValue;
				property.getValue().get(waitBehaviorValue);
				setWaitBehavior(waitBehaviorValue);
			}
			else if (String::equal(property.getName().getString(), "OutputFormat"))
			{
				Uint16 outputFormatValue;
				property.getValue().get(outputFormatValue);
				setOutputFormat(outputFormatValue);
			}
			else if (String::equal(property.getName().getString(), "OutputVerbosity"))
			{
				Uint16 outputVerbosityValue;
				property.getValue().get(outputVerbosityValue);
				setOutputVerbosity(outputVerbosityValue);
			}
			else if (String::equal(property.getName().getString(), "OutputLanguage"))
			{
				String outputLanguageValue;
				property.getValue().get(outputLanguageValue);
				setOutputLanguage(outputLanguageValue);
			}
			else if (String::equal(property.getName().getString(), "OutputPosition"))
			{
				Uint16 outputPositionValue;
				property.getValue().get(outputPositionValue);
				setOutputPosition(outputPositionValue);
			}
			else if (String::equal(property.getName().getString(), "OutputOrder"))
			{
				Uint16 outputOrderValue;
				property.getValue().get(outputOrderValue);
				setOutputOrder(outputOrderValue);
			}
			else if (String::equal(property.getName().getString(), "OutputCount"))
			{
				Uint32 outputCountValue;
				property.getValue().get(outputCountValue);
				setOutputCount(outputCountValue);
			}
			else if (String::equal(property.getName().getString(), "DisplayOption"))
			{
				String displayOptionValue;
				property.getValue().get(displayOptionValue);
				setDisplayOption(displayOptionValue);
			}
	}
	return true;
}


Boolean UNIX_CLPSettingData::initialize()
{
	return false;
}

Boolean UNIX_CLPSettingData::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("CLPSettingData");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_currentDefaultTarget = String ("");
	_keepTime = Uint16(0);
	_waitBehavior = Boolean(false);
	_outputFormat = Uint16(0);
	_outputVerbosity = Uint16(0);
	_outputLanguage = String ("");
	_outputPosition = Uint16(0);
	_outputOrder = Uint16(0);
	_outputCount = Uint32(0);
	_displayOption = String ("");
	
	return false;
}

Boolean UNIX_CLPSettingData::finalize()
{
	return false;
}


Boolean UNIX_CLPSettingData::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_CLPSettingData::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_CLPSettingData::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_CLPSettingData::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_CLPSettingData::validateInstance()
{
	return true;
}

