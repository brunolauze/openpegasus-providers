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


UNIX_IPCOMPTransform::UNIX_IPCOMPTransform(void)
{
}

UNIX_IPCOMPTransform::~UNIX_IPCOMPTransform(void)
{
}

Boolean UNIX_IPCOMPTransform::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_IPCOMPTransform::getInstanceID() const
{
	return _instanceID;
}

void UNIX_IPCOMPTransform::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_IPCOMPTransform::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_IPCOMPTransform::getCaption() const
{
	return _caption;
}

void UNIX_IPCOMPTransform::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_IPCOMPTransform::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_IPCOMPTransform::getDescription() const
{
	return _description;
}

void UNIX_IPCOMPTransform::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_IPCOMPTransform::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_IPCOMPTransform::getElementName() const
{
	return _elementName;
}

void UNIX_IPCOMPTransform::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_IPCOMPTransform::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_IPCOMPTransform::getGeneration() const
{
	return _generation;
}

void UNIX_IPCOMPTransform::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_IPCOMPTransform::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_IPCOMPTransform::getConfigurationName() const
{
	return _configurationName;
}

void UNIX_IPCOMPTransform::setConfigurationName(String &value)
{
	_configurationName = value;
}

Boolean UNIX_IPCOMPTransform::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_IPCOMPTransform::getChangeableType() const
{
	return _changeableType;
}

void UNIX_IPCOMPTransform::setChangeableType(Uint16 &value)
{
	_changeableType = value;
}

Boolean UNIX_IPCOMPTransform::getComponentSetting(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPONENT_SETTING, getComponentSetting());
	return true;
}

Array<String> UNIX_IPCOMPTransform::getComponentSetting() const
{
	return _componentSetting;
}

void UNIX_IPCOMPTransform::setComponentSetting(Array<String> &value)
{
	_componentSetting = value;
}

Boolean UNIX_IPCOMPTransform::getSoID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ID, getSoID());
	return true;
}

String UNIX_IPCOMPTransform::getSoID() const
{
	return _soID;
}

void UNIX_IPCOMPTransform::setSoID(String &value)
{
	_soID = value;
}

Boolean UNIX_IPCOMPTransform::getSoOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ORG_ID, getSoOrgID());
	return true;
}

String UNIX_IPCOMPTransform::getSoOrgID() const
{
	return _soOrgID;
}

void UNIX_IPCOMPTransform::setSoOrgID(String &value)
{
	_soOrgID = value;
}

Boolean UNIX_IPCOMPTransform::getMaxLifetimeSeconds(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_LIFETIME_SECONDS, getMaxLifetimeSeconds());
	return true;
}

Uint64 UNIX_IPCOMPTransform::getMaxLifetimeSeconds() const
{
	return _maxLifetimeSeconds;
}

void UNIX_IPCOMPTransform::setMaxLifetimeSeconds(Uint64 &value)
{
	_maxLifetimeSeconds = value;
}

Boolean UNIX_IPCOMPTransform::getMaxLifetimeKilobytes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_LIFETIME_KILOBYTES, getMaxLifetimeKilobytes());
	return true;
}

Uint64 UNIX_IPCOMPTransform::getMaxLifetimeKilobytes() const
{
	return _maxLifetimeKilobytes;
}

void UNIX_IPCOMPTransform::setMaxLifetimeKilobytes(Uint64 &value)
{
	_maxLifetimeKilobytes = value;
}

Boolean UNIX_IPCOMPTransform::getVendorID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR_ID, getVendorID());
	return true;
}

String UNIX_IPCOMPTransform::getVendorID() const
{
	return _vendorID;
}

void UNIX_IPCOMPTransform::setVendorID(String &value)
{
	_vendorID = value;
}

Boolean UNIX_IPCOMPTransform::getAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALGORITHM, getAlgorithm());
	return true;
}

Uint16 UNIX_IPCOMPTransform::getAlgorithm() const
{
	return _algorithm;
}

void UNIX_IPCOMPTransform::setAlgorithm(Uint16 &value)
{
	_algorithm = value;
}

Boolean UNIX_IPCOMPTransform::getOtherAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ALGORITHM, getOtherAlgorithm());
	return true;
}

String UNIX_IPCOMPTransform::getOtherAlgorithm() const
{
	return _otherAlgorithm;
}

void UNIX_IPCOMPTransform::setOtherAlgorithm(String &value)
{
	_otherAlgorithm = value;
}

Boolean UNIX_IPCOMPTransform::getPrivateAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIVATE_ALGORITHM, getPrivateAlgorithm());
	return true;
}

Uint32 UNIX_IPCOMPTransform::getPrivateAlgorithm() const
{
	return _privateAlgorithm;
}

void UNIX_IPCOMPTransform::setPrivateAlgorithm(Uint32 &value)
{
	_privateAlgorithm = value;
}

Boolean UNIX_IPCOMPTransform::getDictionarySize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DICTIONARY_SIZE, getDictionarySize());
	return true;
}

Uint16 UNIX_IPCOMPTransform::getDictionarySize() const
{
	return _dictionarySize;
}

void UNIX_IPCOMPTransform::setDictionarySize(Uint16 &value)
{
	_dictionarySize = value;
}


void UNIX_IPCOMPTransform::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("IPCOMPTransform");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_maxLifetimeSeconds = Uint64(0);
	_maxLifetimeKilobytes = Uint64(0);
	_vendorID = String ("");
	_algorithm = Uint16(0);
	_otherAlgorithm = String ("");
	_privateAlgorithm = Uint32(0);
	_dictionarySize = Uint16(0);

}

Boolean UNIX_IPCOMPTransform::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "MaxLifetimeSeconds"))
			{
				Uint64 maxLifetimeSecondsValue;
				property.getValue().get(maxLifetimeSecondsValue);
				setMaxLifetimeSeconds(maxLifetimeSecondsValue);
			}
			else if (String::equal(property.getName().getString(), "MaxLifetimeKilobytes"))
			{
				Uint64 maxLifetimeKilobytesValue;
				property.getValue().get(maxLifetimeKilobytesValue);
				setMaxLifetimeKilobytes(maxLifetimeKilobytesValue);
			}
			else if (String::equal(property.getName().getString(), "VendorID"))
			{
				String vendorIDValue;
				property.getValue().get(vendorIDValue);
				setVendorID(vendorIDValue);
			}
			else if (String::equal(property.getName().getString(), "Algorithm"))
			{
				Uint16 algorithmValue;
				property.getValue().get(algorithmValue);
				setAlgorithm(algorithmValue);
			}
			else if (String::equal(property.getName().getString(), "OtherAlgorithm"))
			{
				String otherAlgorithmValue;
				property.getValue().get(otherAlgorithmValue);
				setOtherAlgorithm(otherAlgorithmValue);
			}
			else if (String::equal(property.getName().getString(), "PrivateAlgorithm"))
			{
				Uint32 privateAlgorithmValue;
				property.getValue().get(privateAlgorithmValue);
				setPrivateAlgorithm(privateAlgorithmValue);
			}
			else if (String::equal(property.getName().getString(), "DictionarySize"))
			{
				Uint16 dictionarySizeValue;
				property.getValue().get(dictionarySizeValue);
				setDictionarySize(dictionarySizeValue);
			}
	}
	return true;
}


Boolean UNIX_IPCOMPTransform::initialize()
{
	return false;
}

Boolean UNIX_IPCOMPTransform::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("IPCOMPTransform");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_maxLifetimeSeconds = Uint64(0);
	_maxLifetimeKilobytes = Uint64(0);
	_vendorID = String ("");
	_algorithm = Uint16(0);
	_otherAlgorithm = String ("");
	_privateAlgorithm = Uint32(0);
	_dictionarySize = Uint16(0);
	
	return false;
}

Boolean UNIX_IPCOMPTransform::finalize()
{
	return false;
}


Boolean UNIX_IPCOMPTransform::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_IPCOMPTransform::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IPCOMPTransform::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IPCOMPTransform::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IPCOMPTransform::validateInstance()
{
	return true;
}

