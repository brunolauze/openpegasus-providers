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


UNIX_ESPTransform::UNIX_ESPTransform(void)
{
}

UNIX_ESPTransform::~UNIX_ESPTransform(void)
{
}

Boolean UNIX_ESPTransform::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_ESPTransform::getInstanceID() const
{
	return _instanceID;
}

void UNIX_ESPTransform::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_ESPTransform::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_ESPTransform::getCaption() const
{
	return _caption;
}

void UNIX_ESPTransform::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_ESPTransform::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_ESPTransform::getDescription() const
{
	return _description;
}

void UNIX_ESPTransform::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_ESPTransform::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_ESPTransform::getElementName() const
{
	return _elementName;
}

void UNIX_ESPTransform::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_ESPTransform::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_ESPTransform::getGeneration() const
{
	return _generation;
}

void UNIX_ESPTransform::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_ESPTransform::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_ESPTransform::getConfigurationName() const
{
	return _configurationName;
}

void UNIX_ESPTransform::setConfigurationName(String &value)
{
	_configurationName = value;
}

Boolean UNIX_ESPTransform::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_ESPTransform::getChangeableType() const
{
	return _changeableType;
}

void UNIX_ESPTransform::setChangeableType(Uint16 &value)
{
	_changeableType = value;
}

Boolean UNIX_ESPTransform::getComponentSetting(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPONENT_SETTING, getComponentSetting());
	return true;
}

Array<String> UNIX_ESPTransform::getComponentSetting() const
{
	return _componentSetting;
}

void UNIX_ESPTransform::setComponentSetting(Array<String> &value)
{
	_componentSetting = value;
}

Boolean UNIX_ESPTransform::getSoID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ID, getSoID());
	return true;
}

String UNIX_ESPTransform::getSoID() const
{
	return _soID;
}

void UNIX_ESPTransform::setSoID(String &value)
{
	_soID = value;
}

Boolean UNIX_ESPTransform::getSoOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ORG_ID, getSoOrgID());
	return true;
}

String UNIX_ESPTransform::getSoOrgID() const
{
	return _soOrgID;
}

void UNIX_ESPTransform::setSoOrgID(String &value)
{
	_soOrgID = value;
}

Boolean UNIX_ESPTransform::getMaxLifetimeSeconds(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_LIFETIME_SECONDS, getMaxLifetimeSeconds());
	return true;
}

Uint64 UNIX_ESPTransform::getMaxLifetimeSeconds() const
{
	return _maxLifetimeSeconds;
}

void UNIX_ESPTransform::setMaxLifetimeSeconds(Uint64 &value)
{
	_maxLifetimeSeconds = value;
}

Boolean UNIX_ESPTransform::getMaxLifetimeKilobytes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_LIFETIME_KILOBYTES, getMaxLifetimeKilobytes());
	return true;
}

Uint64 UNIX_ESPTransform::getMaxLifetimeKilobytes() const
{
	return _maxLifetimeKilobytes;
}

void UNIX_ESPTransform::setMaxLifetimeKilobytes(Uint64 &value)
{
	_maxLifetimeKilobytes = value;
}

Boolean UNIX_ESPTransform::getVendorID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR_ID, getVendorID());
	return true;
}

String UNIX_ESPTransform::getVendorID() const
{
	return _vendorID;
}

void UNIX_ESPTransform::setVendorID(String &value)
{
	_vendorID = value;
}

Boolean UNIX_ESPTransform::getIntegrityTransformId(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INTEGRITY_TRANSFORM_ID, getIntegrityTransformId());
	return true;
}

Uint16 UNIX_ESPTransform::getIntegrityTransformId() const
{
	return _integrityTransformId;
}

void UNIX_ESPTransform::setIntegrityTransformId(Uint16 &value)
{
	_integrityTransformId = value;
}

Boolean UNIX_ESPTransform::getOtherIntegrityTransformId(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_INTEGRITY_TRANSFORM_ID, getOtherIntegrityTransformId());
	return true;
}

String UNIX_ESPTransform::getOtherIntegrityTransformId() const
{
	return _otherIntegrityTransformId;
}

void UNIX_ESPTransform::setOtherIntegrityTransformId(String &value)
{
	_otherIntegrityTransformId = value;
}

Boolean UNIX_ESPTransform::getCipherTransformId(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CIPHER_TRANSFORM_ID, getCipherTransformId());
	return true;
}

Uint16 UNIX_ESPTransform::getCipherTransformId() const
{
	return _cipherTransformId;
}

void UNIX_ESPTransform::setCipherTransformId(Uint16 &value)
{
	_cipherTransformId = value;
}

Boolean UNIX_ESPTransform::getOtherCipherTransformId(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_CIPHER_TRANSFORM_ID, getOtherCipherTransformId());
	return true;
}

String UNIX_ESPTransform::getOtherCipherTransformId() const
{
	return _otherCipherTransformId;
}

void UNIX_ESPTransform::setOtherCipherTransformId(String &value)
{
	_otherCipherTransformId = value;
}

Boolean UNIX_ESPTransform::getCipherKeyLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CIPHER_KEY_LENGTH, getCipherKeyLength());
	return true;
}

Uint16 UNIX_ESPTransform::getCipherKeyLength() const
{
	return _cipherKeyLength;
}

void UNIX_ESPTransform::setCipherKeyLength(Uint16 &value)
{
	_cipherKeyLength = value;
}

Boolean UNIX_ESPTransform::getCipherKeyRounds(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CIPHER_KEY_ROUNDS, getCipherKeyRounds());
	return true;
}

Uint16 UNIX_ESPTransform::getCipherKeyRounds() const
{
	return _cipherKeyRounds;
}

void UNIX_ESPTransform::setCipherKeyRounds(Uint16 &value)
{
	_cipherKeyRounds = value;
}

Boolean UNIX_ESPTransform::getUseReplayPrevention(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USE_REPLAY_PREVENTION, getUseReplayPrevention());
	return true;
}

Boolean UNIX_ESPTransform::getUseReplayPrevention() const
{
	return _useReplayPrevention;
}

void UNIX_ESPTransform::setUseReplayPrevention(Boolean &value)
{
	_useReplayPrevention = value;
}

Boolean UNIX_ESPTransform::getReplayPreventionWindowSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REPLAY_PREVENTION_WINDOW_SIZE, getReplayPreventionWindowSize());
	return true;
}

Uint32 UNIX_ESPTransform::getReplayPreventionWindowSize() const
{
	return _replayPreventionWindowSize;
}

void UNIX_ESPTransform::setReplayPreventionWindowSize(Uint32 &value)
{
	_replayPreventionWindowSize = value;
}


void UNIX_ESPTransform::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("ESPTransform");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_maxLifetimeSeconds = Uint64(0);
	_maxLifetimeKilobytes = Uint64(0);
	_vendorID = String ("");
	_integrityTransformId = Uint16(0);
	_otherIntegrityTransformId = String ("");
	_cipherTransformId = Uint16(0);
	_otherCipherTransformId = String ("");
	_cipherKeyLength = Uint16(0);
	_cipherKeyRounds = Uint16(0);
	_useReplayPrevention = Boolean(false);
	_replayPreventionWindowSize = Uint32(0);

}

Boolean UNIX_ESPTransform::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "IntegrityTransformId"))
			{
				Uint16 integrityTransformIdValue;
				property.getValue().get(integrityTransformIdValue);
				setIntegrityTransformId(integrityTransformIdValue);
			}
			else if (String::equal(property.getName().getString(), "OtherIntegrityTransformId"))
			{
				String otherIntegrityTransformIdValue;
				property.getValue().get(otherIntegrityTransformIdValue);
				setOtherIntegrityTransformId(otherIntegrityTransformIdValue);
			}
			else if (String::equal(property.getName().getString(), "CipherTransformId"))
			{
				Uint16 cipherTransformIdValue;
				property.getValue().get(cipherTransformIdValue);
				setCipherTransformId(cipherTransformIdValue);
			}
			else if (String::equal(property.getName().getString(), "OtherCipherTransformId"))
			{
				String otherCipherTransformIdValue;
				property.getValue().get(otherCipherTransformIdValue);
				setOtherCipherTransformId(otherCipherTransformIdValue);
			}
			else if (String::equal(property.getName().getString(), "CipherKeyLength"))
			{
				Uint16 cipherKeyLengthValue;
				property.getValue().get(cipherKeyLengthValue);
				setCipherKeyLength(cipherKeyLengthValue);
			}
			else if (String::equal(property.getName().getString(), "CipherKeyRounds"))
			{
				Uint16 cipherKeyRoundsValue;
				property.getValue().get(cipherKeyRoundsValue);
				setCipherKeyRounds(cipherKeyRoundsValue);
			}
			else if (String::equal(property.getName().getString(), "UseReplayPrevention"))
			{
				Boolean useReplayPreventionValue;
				property.getValue().get(useReplayPreventionValue);
				setUseReplayPrevention(useReplayPreventionValue);
			}
			else if (String::equal(property.getName().getString(), "ReplayPreventionWindowSize"))
			{
				Uint32 replayPreventionWindowSizeValue;
				property.getValue().get(replayPreventionWindowSizeValue);
				setReplayPreventionWindowSize(replayPreventionWindowSizeValue);
			}
	}
	return true;
}


Boolean UNIX_ESPTransform::initialize()
{
	return false;
}

Boolean UNIX_ESPTransform::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("ESPTransform");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_maxLifetimeSeconds = Uint64(0);
	_maxLifetimeKilobytes = Uint64(0);
	_vendorID = String ("");
	_integrityTransformId = Uint16(0);
	_otherIntegrityTransformId = String ("");
	_cipherTransformId = Uint16(0);
	_otherCipherTransformId = String ("");
	_cipherKeyLength = Uint16(0);
	_cipherKeyRounds = Uint16(0);
	_useReplayPrevention = Boolean(false);
	_replayPreventionWindowSize = Uint32(0);
	
	return false;
}

Boolean UNIX_ESPTransform::finalize()
{
	return false;
}


Boolean UNIX_ESPTransform::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_ESPTransform::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ESPTransform::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ESPTransform::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ESPTransform::validateInstance()
{
	return true;
}

