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


UNIX_VideoHeadResolution::UNIX_VideoHeadResolution(void)
{
}

UNIX_VideoHeadResolution::~UNIX_VideoHeadResolution(void)
{
}

Boolean UNIX_VideoHeadResolution::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_VideoHeadResolution::getInstanceID() const
{
	return _instanceID;
}

void UNIX_VideoHeadResolution::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_VideoHeadResolution::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_VideoHeadResolution::getCaption() const
{
	return _caption;
}

void UNIX_VideoHeadResolution::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_VideoHeadResolution::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_VideoHeadResolution::getDescription() const
{
	return _description;
}

void UNIX_VideoHeadResolution::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_VideoHeadResolution::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_VideoHeadResolution::getElementName() const
{
	return _elementName;
}

void UNIX_VideoHeadResolution::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_VideoHeadResolution::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_VideoHeadResolution::getGeneration() const
{
	return _generation;
}

void UNIX_VideoHeadResolution::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_VideoHeadResolution::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_VideoHeadResolution::getConfigurationName() const
{
	return _configurationName;
}

void UNIX_VideoHeadResolution::setConfigurationName(String &value)
{
	_configurationName = value;
}

Boolean UNIX_VideoHeadResolution::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_VideoHeadResolution::getChangeableType() const
{
	return _changeableType;
}

void UNIX_VideoHeadResolution::setChangeableType(Uint16 &value)
{
	_changeableType = value;
}

Boolean UNIX_VideoHeadResolution::getComponentSetting(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPONENT_SETTING, getComponentSetting());
	return true;
}

Array<String> UNIX_VideoHeadResolution::getComponentSetting() const
{
	return _componentSetting;
}

void UNIX_VideoHeadResolution::setComponentSetting(Array<String> &value)
{
	_componentSetting = value;
}

Boolean UNIX_VideoHeadResolution::getSoID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ID, getSoID());
	return true;
}

String UNIX_VideoHeadResolution::getSoID() const
{
	return _soID;
}

void UNIX_VideoHeadResolution::setSoID(String &value)
{
	_soID = value;
}

Boolean UNIX_VideoHeadResolution::getSoOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ORG_ID, getSoOrgID());
	return true;
}

String UNIX_VideoHeadResolution::getSoOrgID() const
{
	return _soOrgID;
}

void UNIX_VideoHeadResolution::setSoOrgID(String &value)
{
	_soOrgID = value;
}

Boolean UNIX_VideoHeadResolution::getHorizontalResolution(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HORIZONTAL_RESOLUTION, getHorizontalResolution());
	return true;
}

Uint32 UNIX_VideoHeadResolution::getHorizontalResolution() const
{
	return _horizontalResolution;
}

void UNIX_VideoHeadResolution::setHorizontalResolution(Uint32 &value)
{
	_horizontalResolution = value;
}

Boolean UNIX_VideoHeadResolution::getVerticalResolution(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERTICAL_RESOLUTION, getVerticalResolution());
	return true;
}

Uint32 UNIX_VideoHeadResolution::getVerticalResolution() const
{
	return _verticalResolution;
}

void UNIX_VideoHeadResolution::setVerticalResolution(Uint32 &value)
{
	_verticalResolution = value;
}

Boolean UNIX_VideoHeadResolution::getRefreshRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REFRESH_RATE, getRefreshRate());
	return true;
}

Uint32 UNIX_VideoHeadResolution::getRefreshRate() const
{
	return _refreshRate;
}

void UNIX_VideoHeadResolution::setRefreshRate(Uint32 &value)
{
	_refreshRate = value;
}

Boolean UNIX_VideoHeadResolution::getMinRefreshRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIN_REFRESH_RATE, getMinRefreshRate());
	return true;
}

Uint32 UNIX_VideoHeadResolution::getMinRefreshRate() const
{
	return _minRefreshRate;
}

void UNIX_VideoHeadResolution::setMinRefreshRate(Uint32 &value)
{
	_minRefreshRate = value;
}

Boolean UNIX_VideoHeadResolution::getMaxRefreshRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_REFRESH_RATE, getMaxRefreshRate());
	return true;
}

Uint32 UNIX_VideoHeadResolution::getMaxRefreshRate() const
{
	return _maxRefreshRate;
}

void UNIX_VideoHeadResolution::setMaxRefreshRate(Uint32 &value)
{
	_maxRefreshRate = value;
}

Boolean UNIX_VideoHeadResolution::getScanMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SCAN_MODE, getScanMode());
	return true;
}

Uint16 UNIX_VideoHeadResolution::getScanMode() const
{
	return _scanMode;
}

void UNIX_VideoHeadResolution::setScanMode(Uint16 &value)
{
	_scanMode = value;
}

Boolean UNIX_VideoHeadResolution::getOtherScanMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SCAN_MODE, getOtherScanMode());
	return true;
}

String UNIX_VideoHeadResolution::getOtherScanMode() const
{
	return _otherScanMode;
}

void UNIX_VideoHeadResolution::setOtherScanMode(String &value)
{
	_otherScanMode = value;
}

Boolean UNIX_VideoHeadResolution::getNumberOfColors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_COLORS, getNumberOfColors());
	return true;
}

Uint64 UNIX_VideoHeadResolution::getNumberOfColors() const
{
	return _numberOfColors;
}

void UNIX_VideoHeadResolution::setNumberOfColors(Uint64 &value)
{
	_numberOfColors = value;
}


void UNIX_VideoHeadResolution::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("VideoHeadResolution");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_horizontalResolution = Uint32(0);
	_verticalResolution = Uint32(0);
	_refreshRate = Uint32(0);
	_minRefreshRate = Uint32(0);
	_maxRefreshRate = Uint32(0);
	_scanMode = Uint16(0);
	_otherScanMode = String ("");
	_numberOfColors = Uint64(0);

}

Boolean UNIX_VideoHeadResolution::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "HorizontalResolution"))
			{
				Uint32 horizontalResolutionValue;
				property.getValue().get(horizontalResolutionValue);
				setHorizontalResolution(horizontalResolutionValue);
			}
			else if (String::equal(property.getName().getString(), "VerticalResolution"))
			{
				Uint32 verticalResolutionValue;
				property.getValue().get(verticalResolutionValue);
				setVerticalResolution(verticalResolutionValue);
			}
			else if (String::equal(property.getName().getString(), "RefreshRate"))
			{
				Uint32 refreshRateValue;
				property.getValue().get(refreshRateValue);
				setRefreshRate(refreshRateValue);
			}
			else if (String::equal(property.getName().getString(), "MinRefreshRate"))
			{
				Uint32 minRefreshRateValue;
				property.getValue().get(minRefreshRateValue);
				setMinRefreshRate(minRefreshRateValue);
			}
			else if (String::equal(property.getName().getString(), "MaxRefreshRate"))
			{
				Uint32 maxRefreshRateValue;
				property.getValue().get(maxRefreshRateValue);
				setMaxRefreshRate(maxRefreshRateValue);
			}
			else if (String::equal(property.getName().getString(), "ScanMode"))
			{
				Uint16 scanModeValue;
				property.getValue().get(scanModeValue);
				setScanMode(scanModeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherScanMode"))
			{
				String otherScanModeValue;
				property.getValue().get(otherScanModeValue);
				setOtherScanMode(otherScanModeValue);
			}
			else if (String::equal(property.getName().getString(), "NumberOfColors"))
			{
				Uint64 numberOfColorsValue;
				property.getValue().get(numberOfColorsValue);
				setNumberOfColors(numberOfColorsValue);
			}
	}
	return true;
}


Boolean UNIX_VideoHeadResolution::initialize()
{
	return false;
}

Boolean UNIX_VideoHeadResolution::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("VideoHeadResolution");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_horizontalResolution = Uint32(0);
	_verticalResolution = Uint32(0);
	_refreshRate = Uint32(0);
	_minRefreshRate = Uint32(0);
	_maxRefreshRate = Uint32(0);
	_scanMode = Uint16(0);
	_otherScanMode = String ("");
	_numberOfColors = Uint64(0);
	
	return false;
}

Boolean UNIX_VideoHeadResolution::finalize()
{
	return false;
}


Boolean UNIX_VideoHeadResolution::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_VideoHeadResolution::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VideoHeadResolution::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VideoHeadResolution::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VideoHeadResolution::validateInstance()
{
	return true;
}

