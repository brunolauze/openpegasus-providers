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


UNIX_SWRLimitSetting::UNIX_SWRLimitSetting(void)
{
}

UNIX_SWRLimitSetting::~UNIX_SWRLimitSetting(void)
{
}

Boolean UNIX_SWRLimitSetting::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_SWRLimitSetting::getInstanceID() const
{
	return _instanceID;
}

void UNIX_SWRLimitSetting::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_SWRLimitSetting::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_SWRLimitSetting::getCaption() const
{
	return _caption;
}

void UNIX_SWRLimitSetting::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_SWRLimitSetting::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_SWRLimitSetting::getDescription() const
{
	return _description;
}

void UNIX_SWRLimitSetting::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_SWRLimitSetting::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_SWRLimitSetting::getElementName() const
{
	return _elementName;
}

void UNIX_SWRLimitSetting::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_SWRLimitSetting::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_SWRLimitSetting::getGeneration() const
{
	return _generation;
}

void UNIX_SWRLimitSetting::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_SWRLimitSetting::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_SWRLimitSetting::getConfigurationName() const
{
	return _configurationName;
}

void UNIX_SWRLimitSetting::setConfigurationName(String &value)
{
	_configurationName = value;
}

Boolean UNIX_SWRLimitSetting::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_SWRLimitSetting::getChangeableType() const
{
	return _changeableType;
}

void UNIX_SWRLimitSetting::setChangeableType(Uint16 &value)
{
	_changeableType = value;
}

Boolean UNIX_SWRLimitSetting::getComponentSetting(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPONENT_SETTING, getComponentSetting());
	return true;
}

Array<String> UNIX_SWRLimitSetting::getComponentSetting() const
{
	return _componentSetting;
}

void UNIX_SWRLimitSetting::setComponentSetting(Array<String> &value)
{
	_componentSetting = value;
}

Boolean UNIX_SWRLimitSetting::getSoID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ID, getSoID());
	return true;
}

String UNIX_SWRLimitSetting::getSoID() const
{
	return _soID;
}

void UNIX_SWRLimitSetting::setSoID(String &value)
{
	_soID = value;
}

Boolean UNIX_SWRLimitSetting::getSoOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ORG_ID, getSoOrgID());
	return true;
}

String UNIX_SWRLimitSetting::getSoOrgID() const
{
	return _soOrgID;
}

void UNIX_SWRLimitSetting::setSoOrgID(String &value)
{
	_soOrgID = value;
}

Boolean UNIX_SWRLimitSetting::getLowerInputLimit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOWER_INPUT_LIMIT, getLowerInputLimit());
	return true;
}

Uint32 UNIX_SWRLimitSetting::getLowerInputLimit() const
{
	return _lowerInputLimit;
}

void UNIX_SWRLimitSetting::setLowerInputLimit(Uint32 &value)
{
	_lowerInputLimit = value;
}

Boolean UNIX_SWRLimitSetting::getUpperInputLimit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UPPER_INPUT_LIMIT, getUpperInputLimit());
	return true;
}

Uint32 UNIX_SWRLimitSetting::getUpperInputLimit() const
{
	return _upperInputLimit;
}

void UNIX_SWRLimitSetting::setUpperInputLimit(Uint32 &value)
{
	_upperInputLimit = value;
}

Boolean UNIX_SWRLimitSetting::getInputUnit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INPUT_UNIT, getInputUnit());
	return true;
}

String UNIX_SWRLimitSetting::getInputUnit() const
{
	return _inputUnit;
}

void UNIX_SWRLimitSetting::setInputUnit(String &value)
{
	_inputUnit = value;
}

Boolean UNIX_SWRLimitSetting::getLowerOutputLimit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOWER_OUTPUT_LIMIT, getLowerOutputLimit());
	return true;
}

Uint32 UNIX_SWRLimitSetting::getLowerOutputLimit() const
{
	return _lowerOutputLimit;
}

void UNIX_SWRLimitSetting::setLowerOutputLimit(Uint32 &value)
{
	_lowerOutputLimit = value;
}

Boolean UNIX_SWRLimitSetting::getUpperOutputLimit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UPPER_OUTPUT_LIMIT, getUpperOutputLimit());
	return true;
}

Uint32 UNIX_SWRLimitSetting::getUpperOutputLimit() const
{
	return _upperOutputLimit;
}

void UNIX_SWRLimitSetting::setUpperOutputLimit(Uint32 &value)
{
	_upperOutputLimit = value;
}

Boolean UNIX_SWRLimitSetting::getOutputUnit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OUTPUT_UNIT, getOutputUnit());
	return true;
}

String UNIX_SWRLimitSetting::getOutputUnit() const
{
	return _outputUnit;
}

void UNIX_SWRLimitSetting::setOutputUnit(String &value)
{
	_outputUnit = value;
}

Boolean UNIX_SWRLimitSetting::getLowerAllocationLimit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOWER_ALLOCATION_LIMIT, getLowerAllocationLimit());
	return true;
}

Uint32 UNIX_SWRLimitSetting::getLowerAllocationLimit() const
{
	return _lowerAllocationLimit;
}

void UNIX_SWRLimitSetting::setLowerAllocationLimit(Uint32 &value)
{
	_lowerAllocationLimit = value;
}

Boolean UNIX_SWRLimitSetting::getUpperAllocationLimit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UPPER_ALLOCATION_LIMIT, getUpperAllocationLimit());
	return true;
}

Uint32 UNIX_SWRLimitSetting::getUpperAllocationLimit() const
{
	return _upperAllocationLimit;
}

void UNIX_SWRLimitSetting::setUpperAllocationLimit(Uint32 &value)
{
	_upperAllocationLimit = value;
}

Boolean UNIX_SWRLimitSetting::getAllocationUnit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOCATION_UNIT, getAllocationUnit());
	return true;
}

String UNIX_SWRLimitSetting::getAllocationUnit() const
{
	return _allocationUnit;
}

void UNIX_SWRLimitSetting::setAllocationUnit(String &value)
{
	_allocationUnit = value;
}

Boolean UNIX_SWRLimitSetting::getOtherLowerInputLimit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_LOWER_INPUT_LIMIT, getOtherLowerInputLimit());
	return true;
}

Uint32 UNIX_SWRLimitSetting::getOtherLowerInputLimit() const
{
	return _otherLowerInputLimit;
}

void UNIX_SWRLimitSetting::setOtherLowerInputLimit(Uint32 &value)
{
	_otherLowerInputLimit = value;
}

Boolean UNIX_SWRLimitSetting::getOtherUpperInputLimit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_UPPER_INPUT_LIMIT, getOtherUpperInputLimit());
	return true;
}

Uint32 UNIX_SWRLimitSetting::getOtherUpperInputLimit() const
{
	return _otherUpperInputLimit;
}

void UNIX_SWRLimitSetting::setOtherUpperInputLimit(Uint32 &value)
{
	_otherUpperInputLimit = value;
}

Boolean UNIX_SWRLimitSetting::getOtherInputUnit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_INPUT_UNIT, getOtherInputUnit());
	return true;
}

String UNIX_SWRLimitSetting::getOtherInputUnit() const
{
	return _otherInputUnit;
}

void UNIX_SWRLimitSetting::setOtherInputUnit(String &value)
{
	_otherInputUnit = value;
}

Boolean UNIX_SWRLimitSetting::getOtherLowerOutputLimit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_LOWER_OUTPUT_LIMIT, getOtherLowerOutputLimit());
	return true;
}

Uint32 UNIX_SWRLimitSetting::getOtherLowerOutputLimit() const
{
	return _otherLowerOutputLimit;
}

void UNIX_SWRLimitSetting::setOtherLowerOutputLimit(Uint32 &value)
{
	_otherLowerOutputLimit = value;
}

Boolean UNIX_SWRLimitSetting::getOtherUpperOutputLimit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_UPPER_OUTPUT_LIMIT, getOtherUpperOutputLimit());
	return true;
}

Uint32 UNIX_SWRLimitSetting::getOtherUpperOutputLimit() const
{
	return _otherUpperOutputLimit;
}

void UNIX_SWRLimitSetting::setOtherUpperOutputLimit(Uint32 &value)
{
	_otherUpperOutputLimit = value;
}

Boolean UNIX_SWRLimitSetting::getOtherOutputUnit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_OUTPUT_UNIT, getOtherOutputUnit());
	return true;
}

String UNIX_SWRLimitSetting::getOtherOutputUnit() const
{
	return _otherOutputUnit;
}

void UNIX_SWRLimitSetting::setOtherOutputUnit(String &value)
{
	_otherOutputUnit = value;
}

Boolean UNIX_SWRLimitSetting::getOtherLowerAllocationLimit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_LOWER_ALLOCATION_LIMIT, getOtherLowerAllocationLimit());
	return true;
}

Uint32 UNIX_SWRLimitSetting::getOtherLowerAllocationLimit() const
{
	return _otherLowerAllocationLimit;
}

void UNIX_SWRLimitSetting::setOtherLowerAllocationLimit(Uint32 &value)
{
	_otherLowerAllocationLimit = value;
}

Boolean UNIX_SWRLimitSetting::getOtherUpperAllocationLimit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_UPPER_ALLOCATION_LIMIT, getOtherUpperAllocationLimit());
	return true;
}

Uint32 UNIX_SWRLimitSetting::getOtherUpperAllocationLimit() const
{
	return _otherUpperAllocationLimit;
}

void UNIX_SWRLimitSetting::setOtherUpperAllocationLimit(Uint32 &value)
{
	_otherUpperAllocationLimit = value;
}

Boolean UNIX_SWRLimitSetting::getOtherAllocationUnit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ALLOCATION_UNIT, getOtherAllocationUnit());
	return true;
}

String UNIX_SWRLimitSetting::getOtherAllocationUnit() const
{
	return _otherAllocationUnit;
}

void UNIX_SWRLimitSetting::setOtherAllocationUnit(String &value)
{
	_otherAllocationUnit = value;
}

Boolean UNIX_SWRLimitSetting::getLimitSettingType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LIMIT_SETTING_TYPE, getLimitSettingType());
	return true;
}

Uint16 UNIX_SWRLimitSetting::getLimitSettingType() const
{
	return _limitSettingType;
}

void UNIX_SWRLimitSetting::setLimitSettingType(Uint16 &value)
{
	_limitSettingType = value;
}


void UNIX_SWRLimitSetting::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("SWRLimitSetting");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_lowerInputLimit = Uint32(0);
	_upperInputLimit = Uint32(0);
	_inputUnit = String ("");
	_lowerOutputLimit = Uint32(0);
	_upperOutputLimit = Uint32(0);
	_outputUnit = String ("");
	_lowerAllocationLimit = Uint32(0);
	_upperAllocationLimit = Uint32(0);
	_allocationUnit = String ("");
	_otherLowerInputLimit = Uint32(0);
	_otherUpperInputLimit = Uint32(0);
	_otherInputUnit = String ("");
	_otherLowerOutputLimit = Uint32(0);
	_otherUpperOutputLimit = Uint32(0);
	_otherOutputUnit = String ("");
	_otherLowerAllocationLimit = Uint32(0);
	_otherUpperAllocationLimit = Uint32(0);
	_otherAllocationUnit = String ("");
	_limitSettingType = Uint16(0);

}

Boolean UNIX_SWRLimitSetting::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "LowerInputLimit"))
			{
				Uint32 lowerInputLimitValue;
				property.getValue().get(lowerInputLimitValue);
				setLowerInputLimit(lowerInputLimitValue);
			}
			else if (String::equal(property.getName().getString(), "UpperInputLimit"))
			{
				Uint32 upperInputLimitValue;
				property.getValue().get(upperInputLimitValue);
				setUpperInputLimit(upperInputLimitValue);
			}
			else if (String::equal(property.getName().getString(), "InputUnit"))
			{
				String inputUnitValue;
				property.getValue().get(inputUnitValue);
				setInputUnit(inputUnitValue);
			}
			else if (String::equal(property.getName().getString(), "LowerOutputLimit"))
			{
				Uint32 lowerOutputLimitValue;
				property.getValue().get(lowerOutputLimitValue);
				setLowerOutputLimit(lowerOutputLimitValue);
			}
			else if (String::equal(property.getName().getString(), "UpperOutputLimit"))
			{
				Uint32 upperOutputLimitValue;
				property.getValue().get(upperOutputLimitValue);
				setUpperOutputLimit(upperOutputLimitValue);
			}
			else if (String::equal(property.getName().getString(), "OutputUnit"))
			{
				String outputUnitValue;
				property.getValue().get(outputUnitValue);
				setOutputUnit(outputUnitValue);
			}
			else if (String::equal(property.getName().getString(), "LowerAllocationLimit"))
			{
				Uint32 lowerAllocationLimitValue;
				property.getValue().get(lowerAllocationLimitValue);
				setLowerAllocationLimit(lowerAllocationLimitValue);
			}
			else if (String::equal(property.getName().getString(), "UpperAllocationLimit"))
			{
				Uint32 upperAllocationLimitValue;
				property.getValue().get(upperAllocationLimitValue);
				setUpperAllocationLimit(upperAllocationLimitValue);
			}
			else if (String::equal(property.getName().getString(), "AllocationUnit"))
			{
				String allocationUnitValue;
				property.getValue().get(allocationUnitValue);
				setAllocationUnit(allocationUnitValue);
			}
			else if (String::equal(property.getName().getString(), "OtherLowerInputLimit"))
			{
				Uint32 otherLowerInputLimitValue;
				property.getValue().get(otherLowerInputLimitValue);
				setOtherLowerInputLimit(otherLowerInputLimitValue);
			}
			else if (String::equal(property.getName().getString(), "OtherUpperInputLimit"))
			{
				Uint32 otherUpperInputLimitValue;
				property.getValue().get(otherUpperInputLimitValue);
				setOtherUpperInputLimit(otherUpperInputLimitValue);
			}
			else if (String::equal(property.getName().getString(), "OtherInputUnit"))
			{
				String otherInputUnitValue;
				property.getValue().get(otherInputUnitValue);
				setOtherInputUnit(otherInputUnitValue);
			}
			else if (String::equal(property.getName().getString(), "OtherLowerOutputLimit"))
			{
				Uint32 otherLowerOutputLimitValue;
				property.getValue().get(otherLowerOutputLimitValue);
				setOtherLowerOutputLimit(otherLowerOutputLimitValue);
			}
			else if (String::equal(property.getName().getString(), "OtherUpperOutputLimit"))
			{
				Uint32 otherUpperOutputLimitValue;
				property.getValue().get(otherUpperOutputLimitValue);
				setOtherUpperOutputLimit(otherUpperOutputLimitValue);
			}
			else if (String::equal(property.getName().getString(), "OtherOutputUnit"))
			{
				String otherOutputUnitValue;
				property.getValue().get(otherOutputUnitValue);
				setOtherOutputUnit(otherOutputUnitValue);
			}
			else if (String::equal(property.getName().getString(), "OtherLowerAllocationLimit"))
			{
				Uint32 otherLowerAllocationLimitValue;
				property.getValue().get(otherLowerAllocationLimitValue);
				setOtherLowerAllocationLimit(otherLowerAllocationLimitValue);
			}
			else if (String::equal(property.getName().getString(), "OtherUpperAllocationLimit"))
			{
				Uint32 otherUpperAllocationLimitValue;
				property.getValue().get(otherUpperAllocationLimitValue);
				setOtherUpperAllocationLimit(otherUpperAllocationLimitValue);
			}
			else if (String::equal(property.getName().getString(), "OtherAllocationUnit"))
			{
				String otherAllocationUnitValue;
				property.getValue().get(otherAllocationUnitValue);
				setOtherAllocationUnit(otherAllocationUnitValue);
			}
			else if (String::equal(property.getName().getString(), "LimitSettingType"))
			{
				Uint16 limitSettingTypeValue;
				property.getValue().get(limitSettingTypeValue);
				setLimitSettingType(limitSettingTypeValue);
			}
	}
	return true;
}


Boolean UNIX_SWRLimitSetting::initialize()
{
	return false;
}

Boolean UNIX_SWRLimitSetting::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("SWRLimitSetting");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_lowerInputLimit = Uint32(0);
	_upperInputLimit = Uint32(0);
	_inputUnit = String ("");
	_lowerOutputLimit = Uint32(0);
	_upperOutputLimit = Uint32(0);
	_outputUnit = String ("");
	_lowerAllocationLimit = Uint32(0);
	_upperAllocationLimit = Uint32(0);
	_allocationUnit = String ("");
	_otherLowerInputLimit = Uint32(0);
	_otherUpperInputLimit = Uint32(0);
	_otherInputUnit = String ("");
	_otherLowerOutputLimit = Uint32(0);
	_otherUpperOutputLimit = Uint32(0);
	_otherOutputUnit = String ("");
	_otherLowerAllocationLimit = Uint32(0);
	_otherUpperAllocationLimit = Uint32(0);
	_otherAllocationUnit = String ("");
	_limitSettingType = Uint16(0);
	
	return false;
}

Boolean UNIX_SWRLimitSetting::finalize()
{
	return false;
}


Boolean UNIX_SWRLimitSetting::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_SWRLimitSetting::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SWRLimitSetting::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SWRLimitSetting::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SWRLimitSetting::validateInstance()
{
	return true;
}

