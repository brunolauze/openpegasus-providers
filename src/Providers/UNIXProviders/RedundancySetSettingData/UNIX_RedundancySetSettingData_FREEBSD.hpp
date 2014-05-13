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


UNIX_RedundancySetSettingData::UNIX_RedundancySetSettingData(void)
{
}

UNIX_RedundancySetSettingData::~UNIX_RedundancySetSettingData(void)
{
}

Boolean UNIX_RedundancySetSettingData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_RedundancySetSettingData::getInstanceID() const
{
	return _instanceID;
}

void UNIX_RedundancySetSettingData::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_RedundancySetSettingData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_RedundancySetSettingData::getCaption() const
{
	return _caption;
}

void UNIX_RedundancySetSettingData::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_RedundancySetSettingData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_RedundancySetSettingData::getDescription() const
{
	return _description;
}

void UNIX_RedundancySetSettingData::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_RedundancySetSettingData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_RedundancySetSettingData::getElementName() const
{
	return _elementName;
}

void UNIX_RedundancySetSettingData::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_RedundancySetSettingData::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_RedundancySetSettingData::getGeneration() const
{
	return _generation;
}

void UNIX_RedundancySetSettingData::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_RedundancySetSettingData::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_RedundancySetSettingData::getConfigurationName() const
{
	return _configurationName;
}

void UNIX_RedundancySetSettingData::setConfigurationName(String &value)
{
	_configurationName = value;
}

Boolean UNIX_RedundancySetSettingData::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_RedundancySetSettingData::getChangeableType() const
{
	return _changeableType;
}

void UNIX_RedundancySetSettingData::setChangeableType(Uint16 &value)
{
	_changeableType = value;
}

Boolean UNIX_RedundancySetSettingData::getComponentSetting(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPONENT_SETTING, getComponentSetting());
	return true;
}

Array<String> UNIX_RedundancySetSettingData::getComponentSetting() const
{
	return _componentSetting;
}

void UNIX_RedundancySetSettingData::setComponentSetting(Array<String> &value)
{
	_componentSetting = value;
}

Boolean UNIX_RedundancySetSettingData::getSoID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ID, getSoID());
	return true;
}

String UNIX_RedundancySetSettingData::getSoID() const
{
	return _soID;
}

void UNIX_RedundancySetSettingData::setSoID(String &value)
{
	_soID = value;
}

Boolean UNIX_RedundancySetSettingData::getSoOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ORG_ID, getSoOrgID());
	return true;
}

String UNIX_RedundancySetSettingData::getSoOrgID() const
{
	return _soOrgID;
}

void UNIX_RedundancySetSettingData::setSoOrgID(String &value)
{
	_soOrgID = value;
}

Boolean UNIX_RedundancySetSettingData::getTypeOfSet(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TYPE_OF_SET, getTypeOfSet());
	return true;
}

Array<Uint16> UNIX_RedundancySetSettingData::getTypeOfSet() const
{
	return _typeOfSet;
}

void UNIX_RedundancySetSettingData::setTypeOfSet(Array<Uint16> &value)
{
	_typeOfSet = value;
}

Boolean UNIX_RedundancySetSettingData::getMinNumberNeeded(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIN_NUMBER_NEEDED, getMinNumberNeeded());
	return true;
}

Uint32 UNIX_RedundancySetSettingData::getMinNumberNeeded() const
{
	return _minNumberNeeded;
}

void UNIX_RedundancySetSettingData::setMinNumberNeeded(Uint32 &value)
{
	_minNumberNeeded = value;
}

Boolean UNIX_RedundancySetSettingData::getMaxNumberSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_NUMBER_SUPPORTED, getMaxNumberSupported());
	return true;
}

Uint32 UNIX_RedundancySetSettingData::getMaxNumberSupported() const
{
	return _maxNumberSupported;
}

void UNIX_RedundancySetSettingData::setMaxNumberSupported(Uint32 &value)
{
	_maxNumberSupported = value;
}

Boolean UNIX_RedundancySetSettingData::getLoadBalanceAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOAD_BALANCE_ALGORITHM, getLoadBalanceAlgorithm());
	return true;
}

Uint16 UNIX_RedundancySetSettingData::getLoadBalanceAlgorithm() const
{
	return _loadBalanceAlgorithm;
}

void UNIX_RedundancySetSettingData::setLoadBalanceAlgorithm(Uint16 &value)
{
	_loadBalanceAlgorithm = value;
}

Boolean UNIX_RedundancySetSettingData::getVendorIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR_IDENTIFYING_INFO, getVendorIdentifyingInfo());
	return true;
}

String UNIX_RedundancySetSettingData::getVendorIdentifyingInfo() const
{
	return _vendorIdentifyingInfo;
}

void UNIX_RedundancySetSettingData::setVendorIdentifyingInfo(String &value)
{
	_vendorIdentifyingInfo = value;
}


void UNIX_RedundancySetSettingData::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("RedundancySetSettingData");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_typeOfSet.clear();
	_minNumberNeeded = Uint32(0);
	_maxNumberSupported = Uint32(0);
	_loadBalanceAlgorithm = Uint16(0);
	_vendorIdentifyingInfo = String ("");

}

Boolean UNIX_RedundancySetSettingData::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "TypeOfSet"))
			{
				Array<Uint16> typeOfSetValue;
				property.getValue().get(typeOfSetValue);
				setTypeOfSet(typeOfSetValue);
			}
			else if (String::equal(property.getName().getString(), "MinNumberNeeded"))
			{
				Uint32 minNumberNeededValue;
				property.getValue().get(minNumberNeededValue);
				setMinNumberNeeded(minNumberNeededValue);
			}
			else if (String::equal(property.getName().getString(), "MaxNumberSupported"))
			{
				Uint32 maxNumberSupportedValue;
				property.getValue().get(maxNumberSupportedValue);
				setMaxNumberSupported(maxNumberSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "LoadBalanceAlgorithm"))
			{
				Uint16 loadBalanceAlgorithmValue;
				property.getValue().get(loadBalanceAlgorithmValue);
				setLoadBalanceAlgorithm(loadBalanceAlgorithmValue);
			}
			else if (String::equal(property.getName().getString(), "VendorIdentifyingInfo"))
			{
				String vendorIdentifyingInfoValue;
				property.getValue().get(vendorIdentifyingInfoValue);
				setVendorIdentifyingInfo(vendorIdentifyingInfoValue);
			}
	}
	return true;
}


Boolean UNIX_RedundancySetSettingData::initialize()
{
	return false;
}

Boolean UNIX_RedundancySetSettingData::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("RedundancySetSettingData");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_typeOfSet.clear();
	_minNumberNeeded = Uint32(0);
	_maxNumberSupported = Uint32(0);
	_loadBalanceAlgorithm = Uint16(0);
	_vendorIdentifyingInfo = String ("");
	
	return false;
}

Boolean UNIX_RedundancySetSettingData::finalize()
{
	return false;
}


Boolean UNIX_RedundancySetSettingData::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_RedundancySetSettingData::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_RedundancySetSettingData::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_RedundancySetSettingData::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_RedundancySetSettingData::validateInstance()
{
	return true;
}

