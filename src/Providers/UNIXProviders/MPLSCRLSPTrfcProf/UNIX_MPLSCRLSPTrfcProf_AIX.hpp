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


UNIX_MPLSCRLSPTrfcProf::UNIX_MPLSCRLSPTrfcProf(void)
{
}

UNIX_MPLSCRLSPTrfcProf::~UNIX_MPLSCRLSPTrfcProf(void)
{
}

Boolean UNIX_MPLSCRLSPTrfcProf::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_MPLSCRLSPTrfcProf::getInstanceID() const
{
	return _instanceID;
}

void UNIX_MPLSCRLSPTrfcProf::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_MPLSCRLSPTrfcProf::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_MPLSCRLSPTrfcProf::getCaption() const
{
	return _caption;
}

void UNIX_MPLSCRLSPTrfcProf::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_MPLSCRLSPTrfcProf::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_MPLSCRLSPTrfcProf::getDescription() const
{
	return _description;
}

void UNIX_MPLSCRLSPTrfcProf::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_MPLSCRLSPTrfcProf::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_MPLSCRLSPTrfcProf::getElementName() const
{
	return _elementName;
}

void UNIX_MPLSCRLSPTrfcProf::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_MPLSCRLSPTrfcProf::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_MPLSCRLSPTrfcProf::getGeneration() const
{
	return _generation;
}

void UNIX_MPLSCRLSPTrfcProf::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_MPLSCRLSPTrfcProf::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_MPLSCRLSPTrfcProf::getConfigurationName() const
{
	return _configurationName;
}

void UNIX_MPLSCRLSPTrfcProf::setConfigurationName(String &value)
{
	_configurationName = value;
}

Boolean UNIX_MPLSCRLSPTrfcProf::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_MPLSCRLSPTrfcProf::getChangeableType() const
{
	return _changeableType;
}

void UNIX_MPLSCRLSPTrfcProf::setChangeableType(Uint16 &value)
{
	_changeableType = value;
}

Boolean UNIX_MPLSCRLSPTrfcProf::getComponentSetting(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPONENT_SETTING, getComponentSetting());
	return true;
}

Array<String> UNIX_MPLSCRLSPTrfcProf::getComponentSetting() const
{
	return _componentSetting;
}

void UNIX_MPLSCRLSPTrfcProf::setComponentSetting(Array<String> &value)
{
	_componentSetting = value;
}

Boolean UNIX_MPLSCRLSPTrfcProf::getSoID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ID, getSoID());
	return true;
}

String UNIX_MPLSCRLSPTrfcProf::getSoID() const
{
	return _soID;
}

void UNIX_MPLSCRLSPTrfcProf::setSoID(String &value)
{
	_soID = value;
}

Boolean UNIX_MPLSCRLSPTrfcProf::getSoOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ORG_ID, getSoOrgID());
	return true;
}

String UNIX_MPLSCRLSPTrfcProf::getSoOrgID() const
{
	return _soOrgID;
}

void UNIX_MPLSCRLSPTrfcProf::setSoOrgID(String &value)
{
	_soOrgID = value;
}

Boolean UNIX_MPLSCRLSPTrfcProf::getPRRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_P_R_RATE, getPRRate());
	return true;
}

Uint32 UNIX_MPLSCRLSPTrfcProf::getPRRate() const
{
	return _pRRate;
}

void UNIX_MPLSCRLSPTrfcProf::setPRRate(Uint32 &value)
{
	_pRRate = value;
}

Boolean UNIX_MPLSCRLSPTrfcProf::getPRNormalBurst(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_P_R_NORMAL_BURST, getPRNormalBurst());
	return true;
}

Uint16 UNIX_MPLSCRLSPTrfcProf::getPRNormalBurst() const
{
	return _pRNormalBurst;
}

void UNIX_MPLSCRLSPTrfcProf::setPRNormalBurst(Uint16 &value)
{
	_pRNormalBurst = value;
}

Boolean UNIX_MPLSCRLSPTrfcProf::getPRExcessBurst(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_P_R_EXCESS_BURST, getPRExcessBurst());
	return true;
}

Uint16 UNIX_MPLSCRLSPTrfcProf::getPRExcessBurst() const
{
	return _pRExcessBurst;
}

void UNIX_MPLSCRLSPTrfcProf::setPRExcessBurst(Uint16 &value)
{
	_pRExcessBurst = value;
}

Boolean UNIX_MPLSCRLSPTrfcProf::getCRLSPFrequency(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CRL_S_P_FREQUENCY, getCRLSPFrequency());
	return true;
}

Uint16 UNIX_MPLSCRLSPTrfcProf::getCRLSPFrequency() const
{
	return _cRLSPFrequency;
}

void UNIX_MPLSCRLSPTrfcProf::setCRLSPFrequency(Uint16 &value)
{
	_cRLSPFrequency = value;
}

Boolean UNIX_MPLSCRLSPTrfcProf::getCRLSPWeight(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CRL_S_P_WEIGHT, getCRLSPWeight());
	return true;
}

Uint8 UNIX_MPLSCRLSPTrfcProf::getCRLSPWeight() const
{
	return _cRLSPWeight;
}

void UNIX_MPLSCRLSPTrfcProf::setCRLSPWeight(Uint8 &value)
{
	_cRLSPWeight = value;
}

Boolean UNIX_MPLSCRLSPTrfcProf::getCRLSPCommitedDataRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CRL_S_P_COMMITED_DATA_RATE, getCRLSPCommitedDataRate());
	return true;
}

Uint16 UNIX_MPLSCRLSPTrfcProf::getCRLSPCommitedDataRate() const
{
	return _cRLSPCommitedDataRate;
}

void UNIX_MPLSCRLSPTrfcProf::setCRLSPCommitedDataRate(Uint16 &value)
{
	_cRLSPCommitedDataRate = value;
}

Boolean UNIX_MPLSCRLSPTrfcProf::getCRLSPCommitedBurstSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CRL_S_P_COMMITED_BURST_SIZE, getCRLSPCommitedBurstSize());
	return true;
}

Uint16 UNIX_MPLSCRLSPTrfcProf::getCRLSPCommitedBurstSize() const
{
	return _cRLSPCommitedBurstSize;
}

void UNIX_MPLSCRLSPTrfcProf::setCRLSPCommitedBurstSize(Uint16 &value)
{
	_cRLSPCommitedBurstSize = value;
}


void UNIX_MPLSCRLSPTrfcProf::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("MPLSCRLSPTrfcProf");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_pRRate = Uint32(0);
	_pRNormalBurst = Uint16(0);
	_pRExcessBurst = Uint16(0);
	_cRLSPFrequency = Uint16(0);
	_cRLSPWeight = Uint8(0);
	_cRLSPCommitedDataRate = Uint16(0);
	_cRLSPCommitedBurstSize = Uint16(0);

}

Boolean UNIX_MPLSCRLSPTrfcProf::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "PRRate"))
			{
				Uint32 pRRateValue;
				property.getValue().get(pRRateValue);
				setPRRate(pRRateValue);
			}
			else if (String::equal(property.getName().getString(), "PRNormalBurst"))
			{
				Uint16 pRNormalBurstValue;
				property.getValue().get(pRNormalBurstValue);
				setPRNormalBurst(pRNormalBurstValue);
			}
			else if (String::equal(property.getName().getString(), "PRExcessBurst"))
			{
				Uint16 pRExcessBurstValue;
				property.getValue().get(pRExcessBurstValue);
				setPRExcessBurst(pRExcessBurstValue);
			}
			else if (String::equal(property.getName().getString(), "CRLSPFrequency"))
			{
				Uint16 cRLSPFrequencyValue;
				property.getValue().get(cRLSPFrequencyValue);
				setCRLSPFrequency(cRLSPFrequencyValue);
			}
			else if (String::equal(property.getName().getString(), "CRLSPWeight"))
			{
				Uint8 cRLSPWeightValue;
				property.getValue().get(cRLSPWeightValue);
				setCRLSPWeight(cRLSPWeightValue);
			}
			else if (String::equal(property.getName().getString(), "CRLSPCommitedDataRate"))
			{
				Uint16 cRLSPCommitedDataRateValue;
				property.getValue().get(cRLSPCommitedDataRateValue);
				setCRLSPCommitedDataRate(cRLSPCommitedDataRateValue);
			}
			else if (String::equal(property.getName().getString(), "CRLSPCommitedBurstSize"))
			{
				Uint16 cRLSPCommitedBurstSizeValue;
				property.getValue().get(cRLSPCommitedBurstSizeValue);
				setCRLSPCommitedBurstSize(cRLSPCommitedBurstSizeValue);
			}
	}
	return true;
}


Boolean UNIX_MPLSCRLSPTrfcProf::initialize()
{
	return false;
}

Boolean UNIX_MPLSCRLSPTrfcProf::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("MPLSCRLSPTrfcProf");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_pRRate = Uint32(0);
	_pRNormalBurst = Uint16(0);
	_pRExcessBurst = Uint16(0);
	_cRLSPFrequency = Uint16(0);
	_cRLSPWeight = Uint8(0);
	_cRLSPCommitedDataRate = Uint16(0);
	_cRLSPCommitedBurstSize = Uint16(0);
	
	return false;
}

Boolean UNIX_MPLSCRLSPTrfcProf::finalize()
{
	return false;
}


Boolean UNIX_MPLSCRLSPTrfcProf::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_MPLSCRLSPTrfcProf::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_MPLSCRLSPTrfcProf::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_MPLSCRLSPTrfcProf::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_MPLSCRLSPTrfcProf::validateInstance()
{
	return true;
}

