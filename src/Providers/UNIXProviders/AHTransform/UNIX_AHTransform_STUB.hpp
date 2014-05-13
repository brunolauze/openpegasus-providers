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


UNIX_AHTransform::UNIX_AHTransform(void)
{
}

UNIX_AHTransform::~UNIX_AHTransform(void)
{
}

Boolean UNIX_AHTransform::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_AHTransform::getInstanceID() const
{
	return _instanceID;
}

void UNIX_AHTransform::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_AHTransform::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_AHTransform::getCaption() const
{
	return _caption;
}

void UNIX_AHTransform::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_AHTransform::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_AHTransform::getDescription() const
{
	return _description;
}

void UNIX_AHTransform::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_AHTransform::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_AHTransform::getElementName() const
{
	return _elementName;
}

void UNIX_AHTransform::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_AHTransform::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_AHTransform::getGeneration() const
{
	return _generation;
}

void UNIX_AHTransform::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_AHTransform::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_AHTransform::getConfigurationName() const
{
	return _configurationName;
}

void UNIX_AHTransform::setConfigurationName(String &value)
{
	_configurationName = value;
}

Boolean UNIX_AHTransform::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_AHTransform::getChangeableType() const
{
	return _changeableType;
}

void UNIX_AHTransform::setChangeableType(Uint16 &value)
{
	_changeableType = value;
}

Boolean UNIX_AHTransform::getComponentSetting(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPONENT_SETTING, getComponentSetting());
	return true;
}

Array<String> UNIX_AHTransform::getComponentSetting() const
{
	return _componentSetting;
}

void UNIX_AHTransform::setComponentSetting(Array<String> &value)
{
	_componentSetting = value;
}

Boolean UNIX_AHTransform::getSoID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ID, getSoID());
	return true;
}

String UNIX_AHTransform::getSoID() const
{
	return _soID;
}

void UNIX_AHTransform::setSoID(String &value)
{
	_soID = value;
}

Boolean UNIX_AHTransform::getSoOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ORG_ID, getSoOrgID());
	return true;
}

String UNIX_AHTransform::getSoOrgID() const
{
	return _soOrgID;
}

void UNIX_AHTransform::setSoOrgID(String &value)
{
	_soOrgID = value;
}

Boolean UNIX_AHTransform::getMaxLifetimeSeconds(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_LIFETIME_SECONDS, getMaxLifetimeSeconds());
	return true;
}

Uint64 UNIX_AHTransform::getMaxLifetimeSeconds() const
{
	return _maxLifetimeSeconds;
}

void UNIX_AHTransform::setMaxLifetimeSeconds(Uint64 &value)
{
	_maxLifetimeSeconds = value;
}

Boolean UNIX_AHTransform::getMaxLifetimeKilobytes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_LIFETIME_KILOBYTES, getMaxLifetimeKilobytes());
	return true;
}

Uint64 UNIX_AHTransform::getMaxLifetimeKilobytes() const
{
	return _maxLifetimeKilobytes;
}

void UNIX_AHTransform::setMaxLifetimeKilobytes(Uint64 &value)
{
	_maxLifetimeKilobytes = value;
}

Boolean UNIX_AHTransform::getVendorID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR_ID, getVendorID());
	return true;
}

String UNIX_AHTransform::getVendorID() const
{
	return _vendorID;
}

void UNIX_AHTransform::setVendorID(String &value)
{
	_vendorID = value;
}

Boolean UNIX_AHTransform::getAHTransformId(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AHTRANSFORM_ID, getAHTransformId());
	return true;
}

Uint16 UNIX_AHTransform::getAHTransformId() const
{
	return _aHTransformId;
}

void UNIX_AHTransform::setAHTransformId(Uint16 &value)
{
	_aHTransformId = value;
}

Boolean UNIX_AHTransform::getOtherAHTransformId(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_AHTRANSFORM_ID, getOtherAHTransformId());
	return true;
}

String UNIX_AHTransform::getOtherAHTransformId() const
{
	return _otherAHTransformId;
}

void UNIX_AHTransform::setOtherAHTransformId(String &value)
{
	_otherAHTransformId = value;
}

Boolean UNIX_AHTransform::getUseReplayPrevention(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USE_REPLAY_PREVENTION, getUseReplayPrevention());
	return true;
}

Boolean UNIX_AHTransform::getUseReplayPrevention() const
{
	return _useReplayPrevention;
}

void UNIX_AHTransform::setUseReplayPrevention(Boolean &value)
{
	_useReplayPrevention = value;
}

Boolean UNIX_AHTransform::getReplayPreventionWindowSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REPLAY_PREVENTION_WINDOW_SIZE, getReplayPreventionWindowSize());
	return true;
}

Uint32 UNIX_AHTransform::getReplayPreventionWindowSize() const
{
	return _replayPreventionWindowSize;
}

void UNIX_AHTransform::setReplayPreventionWindowSize(Uint32 &value)
{
	_replayPreventionWindowSize = value;
}


void UNIX_AHTransform::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("AHTransform");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_maxLifetimeSeconds = Uint64(0);
	_maxLifetimeKilobytes = Uint64(0);
	_vendorID = String ("");
	_aHTransformId = Uint16(0);
	_otherAHTransformId = String ("");
	_useReplayPrevention = Boolean(false);
	_replayPreventionWindowSize = Uint32(0);

}

Boolean UNIX_AHTransform::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "AHTransformId"))
			{
				Uint16 aHTransformIdValue;
				property.getValue().get(aHTransformIdValue);
				setAHTransformId(aHTransformIdValue);
			}
			else if (String::equal(property.getName().getString(), "OtherAHTransformId"))
			{
				String otherAHTransformIdValue;
				property.getValue().get(otherAHTransformIdValue);
				setOtherAHTransformId(otherAHTransformIdValue);
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


Boolean UNIX_AHTransform::initialize()
{
	return false;
}

Boolean UNIX_AHTransform::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("AHTransform");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_maxLifetimeSeconds = Uint64(0);
	_maxLifetimeKilobytes = Uint64(0);
	_vendorID = String ("");
	_aHTransformId = Uint16(0);
	_otherAHTransformId = String ("");
	_useReplayPrevention = Boolean(false);
	_replayPreventionWindowSize = Uint32(0);
	
	return false;
}

Boolean UNIX_AHTransform::finalize()
{
	return false;
}


Boolean UNIX_AHTransform::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_AHTransform::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AHTransform::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AHTransform::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AHTransform::validateInstance()
{
	return true;
}

