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


UNIX_DatabaseSegmentSettingData::UNIX_DatabaseSegmentSettingData(void)
{
}

UNIX_DatabaseSegmentSettingData::~UNIX_DatabaseSegmentSettingData(void)
{
}

Boolean UNIX_DatabaseSegmentSettingData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_DatabaseSegmentSettingData::getInstanceID() const
{
	return _instanceID;
}

void UNIX_DatabaseSegmentSettingData::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_DatabaseSegmentSettingData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_DatabaseSegmentSettingData::getCaption() const
{
	return _caption;
}

void UNIX_DatabaseSegmentSettingData::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_DatabaseSegmentSettingData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_DatabaseSegmentSettingData::getDescription() const
{
	return _description;
}

void UNIX_DatabaseSegmentSettingData::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_DatabaseSegmentSettingData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_DatabaseSegmentSettingData::getElementName() const
{
	return _elementName;
}

void UNIX_DatabaseSegmentSettingData::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_DatabaseSegmentSettingData::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_DatabaseSegmentSettingData::getGeneration() const
{
	return _generation;
}

void UNIX_DatabaseSegmentSettingData::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_DatabaseSegmentSettingData::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_DatabaseSegmentSettingData::getConfigurationName() const
{
	return _configurationName;
}

void UNIX_DatabaseSegmentSettingData::setConfigurationName(String &value)
{
	_configurationName = value;
}

Boolean UNIX_DatabaseSegmentSettingData::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_DatabaseSegmentSettingData::getChangeableType() const
{
	return _changeableType;
}

void UNIX_DatabaseSegmentSettingData::setChangeableType(Uint16 &value)
{
	_changeableType = value;
}

Boolean UNIX_DatabaseSegmentSettingData::getComponentSetting(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPONENT_SETTING, getComponentSetting());
	return true;
}

Array<String> UNIX_DatabaseSegmentSettingData::getComponentSetting() const
{
	return _componentSetting;
}

void UNIX_DatabaseSegmentSettingData::setComponentSetting(Array<String> &value)
{
	_componentSetting = value;
}

Boolean UNIX_DatabaseSegmentSettingData::getSoID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ID, getSoID());
	return true;
}

String UNIX_DatabaseSegmentSettingData::getSoID() const
{
	return _soID;
}

void UNIX_DatabaseSegmentSettingData::setSoID(String &value)
{
	_soID = value;
}

Boolean UNIX_DatabaseSegmentSettingData::getSoOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ORG_ID, getSoOrgID());
	return true;
}

String UNIX_DatabaseSegmentSettingData::getSoOrgID() const
{
	return _soOrgID;
}

void UNIX_DatabaseSegmentSettingData::setSoOrgID(String &value)
{
	_soOrgID = value;
}

Boolean UNIX_DatabaseSegmentSettingData::getInitialExtentSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INITIAL_EXTENT_SIZE, getInitialExtentSize());
	return true;
}

Uint64 UNIX_DatabaseSegmentSettingData::getInitialExtentSize() const
{
	return _initialExtentSize;
}

void UNIX_DatabaseSegmentSettingData::setInitialExtentSize(Uint64 &value)
{
	_initialExtentSize = value;
}

Boolean UNIX_DatabaseSegmentSettingData::getMinimumExtents(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MINIMUM_EXTENTS, getMinimumExtents());
	return true;
}

Uint64 UNIX_DatabaseSegmentSettingData::getMinimumExtents() const
{
	return _minimumExtents;
}

void UNIX_DatabaseSegmentSettingData::setMinimumExtents(Uint64 &value)
{
	_minimumExtents = value;
}

Boolean UNIX_DatabaseSegmentSettingData::getMaximumExtents(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAXIMUM_EXTENTS, getMaximumExtents());
	return true;
}

Uint64 UNIX_DatabaseSegmentSettingData::getMaximumExtents() const
{
	return _maximumExtents;
}

void UNIX_DatabaseSegmentSettingData::setMaximumExtents(Uint64 &value)
{
	_maximumExtents = value;
}

Boolean UNIX_DatabaseSegmentSettingData::getNextExtentSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NEXT_EXTENT_SIZE, getNextExtentSize());
	return true;
}

Uint64 UNIX_DatabaseSegmentSettingData::getNextExtentSize() const
{
	return _nextExtentSize;
}

void UNIX_DatabaseSegmentSettingData::setNextExtentSize(Uint64 &value)
{
	_nextExtentSize = value;
}

Boolean UNIX_DatabaseSegmentSettingData::getPercentIncrease(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERCENT_INCREASE, getPercentIncrease());
	return true;
}

Uint16 UNIX_DatabaseSegmentSettingData::getPercentIncrease() const
{
	return _percentIncrease;
}

void UNIX_DatabaseSegmentSettingData::setPercentIncrease(Uint16 &value)
{
	_percentIncrease = value;
}

Boolean UNIX_DatabaseSegmentSettingData::getNumberOfFreeLists(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_FREE_LISTS, getNumberOfFreeLists());
	return true;
}

Uint32 UNIX_DatabaseSegmentSettingData::getNumberOfFreeLists() const
{
	return _numberOfFreeLists;
}

void UNIX_DatabaseSegmentSettingData::setNumberOfFreeLists(Uint32 &value)
{
	_numberOfFreeLists = value;
}


void UNIX_DatabaseSegmentSettingData::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("DatabaseSegmentSettingData");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_initialExtentSize = Uint64(0);
	_minimumExtents = Uint64(0);
	_maximumExtents = Uint64(0);
	_nextExtentSize = Uint64(0);
	_percentIncrease = Uint16(0);
	_numberOfFreeLists = Uint32(0);

}

Boolean UNIX_DatabaseSegmentSettingData::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "InitialExtentSize"))
			{
				Uint64 initialExtentSizeValue;
				property.getValue().get(initialExtentSizeValue);
				setInitialExtentSize(initialExtentSizeValue);
			}
			else if (String::equal(property.getName().getString(), "MinimumExtents"))
			{
				Uint64 minimumExtentsValue;
				property.getValue().get(minimumExtentsValue);
				setMinimumExtents(minimumExtentsValue);
			}
			else if (String::equal(property.getName().getString(), "MaximumExtents"))
			{
				Uint64 maximumExtentsValue;
				property.getValue().get(maximumExtentsValue);
				setMaximumExtents(maximumExtentsValue);
			}
			else if (String::equal(property.getName().getString(), "NextExtentSize"))
			{
				Uint64 nextExtentSizeValue;
				property.getValue().get(nextExtentSizeValue);
				setNextExtentSize(nextExtentSizeValue);
			}
			else if (String::equal(property.getName().getString(), "PercentIncrease"))
			{
				Uint16 percentIncreaseValue;
				property.getValue().get(percentIncreaseValue);
				setPercentIncrease(percentIncreaseValue);
			}
			else if (String::equal(property.getName().getString(), "NumberOfFreeLists"))
			{
				Uint32 numberOfFreeListsValue;
				property.getValue().get(numberOfFreeListsValue);
				setNumberOfFreeLists(numberOfFreeListsValue);
			}
	}
	return true;
}


Boolean UNIX_DatabaseSegmentSettingData::initialize()
{
	return false;
}

Boolean UNIX_DatabaseSegmentSettingData::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("DatabaseSegmentSettingData");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_initialExtentSize = Uint64(0);
	_minimumExtents = Uint64(0);
	_maximumExtents = Uint64(0);
	_nextExtentSize = Uint64(0);
	_percentIncrease = Uint16(0);
	_numberOfFreeLists = Uint32(0);
	
	return false;
}

Boolean UNIX_DatabaseSegmentSettingData::finalize()
{
	return false;
}


Boolean UNIX_DatabaseSegmentSettingData::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_DatabaseSegmentSettingData::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DatabaseSegmentSettingData::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DatabaseSegmentSettingData::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DatabaseSegmentSettingData::validateInstance()
{
	return true;
}

