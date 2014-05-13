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


UNIX_VirtualSystemMigrationSettingData::UNIX_VirtualSystemMigrationSettingData(void)
{
}

UNIX_VirtualSystemMigrationSettingData::~UNIX_VirtualSystemMigrationSettingData(void)
{
}

Boolean UNIX_VirtualSystemMigrationSettingData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_VirtualSystemMigrationSettingData::getInstanceID() const
{
	return _instanceID;
}

void UNIX_VirtualSystemMigrationSettingData::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_VirtualSystemMigrationSettingData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_VirtualSystemMigrationSettingData::getCaption() const
{
	return _caption;
}

void UNIX_VirtualSystemMigrationSettingData::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_VirtualSystemMigrationSettingData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_VirtualSystemMigrationSettingData::getDescription() const
{
	return _description;
}

void UNIX_VirtualSystemMigrationSettingData::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_VirtualSystemMigrationSettingData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_VirtualSystemMigrationSettingData::getElementName() const
{
	return _elementName;
}

void UNIX_VirtualSystemMigrationSettingData::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_VirtualSystemMigrationSettingData::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_VirtualSystemMigrationSettingData::getGeneration() const
{
	return _generation;
}

void UNIX_VirtualSystemMigrationSettingData::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_VirtualSystemMigrationSettingData::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_VirtualSystemMigrationSettingData::getConfigurationName() const
{
	return _configurationName;
}

void UNIX_VirtualSystemMigrationSettingData::setConfigurationName(String &value)
{
	_configurationName = value;
}

Boolean UNIX_VirtualSystemMigrationSettingData::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_VirtualSystemMigrationSettingData::getChangeableType() const
{
	return _changeableType;
}

void UNIX_VirtualSystemMigrationSettingData::setChangeableType(Uint16 &value)
{
	_changeableType = value;
}

Boolean UNIX_VirtualSystemMigrationSettingData::getComponentSetting(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPONENT_SETTING, getComponentSetting());
	return true;
}

Array<String> UNIX_VirtualSystemMigrationSettingData::getComponentSetting() const
{
	return _componentSetting;
}

void UNIX_VirtualSystemMigrationSettingData::setComponentSetting(Array<String> &value)
{
	_componentSetting = value;
}

Boolean UNIX_VirtualSystemMigrationSettingData::getSoID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ID, getSoID());
	return true;
}

String UNIX_VirtualSystemMigrationSettingData::getSoID() const
{
	return _soID;
}

void UNIX_VirtualSystemMigrationSettingData::setSoID(String &value)
{
	_soID = value;
}

Boolean UNIX_VirtualSystemMigrationSettingData::getSoOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ORG_ID, getSoOrgID());
	return true;
}

String UNIX_VirtualSystemMigrationSettingData::getSoOrgID() const
{
	return _soOrgID;
}

void UNIX_VirtualSystemMigrationSettingData::setSoOrgID(String &value)
{
	_soOrgID = value;
}

Boolean UNIX_VirtualSystemMigrationSettingData::getMigrationType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIGRATION_TYPE, getMigrationType());
	return true;
}

Uint16 UNIX_VirtualSystemMigrationSettingData::getMigrationType() const
{
	return _migrationType;
}

void UNIX_VirtualSystemMigrationSettingData::setMigrationType(Uint16 &value)
{
	_migrationType = value;
}

Boolean UNIX_VirtualSystemMigrationSettingData::getPriority(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIORITY, getPriority());
	return true;
}

Uint16 UNIX_VirtualSystemMigrationSettingData::getPriority() const
{
	return _priority;
}

void UNIX_VirtualSystemMigrationSettingData::setPriority(Uint16 &value)
{
	_priority = value;
}

Boolean UNIX_VirtualSystemMigrationSettingData::getBandwidth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BANDWIDTH, getBandwidth());
	return true;
}

Uint16 UNIX_VirtualSystemMigrationSettingData::getBandwidth() const
{
	return _bandwidth;
}

void UNIX_VirtualSystemMigrationSettingData::setBandwidth(Uint16 &value)
{
	_bandwidth = value;
}

Boolean UNIX_VirtualSystemMigrationSettingData::getBandwidthUnit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BANDWIDTH_UNIT, getBandwidthUnit());
	return true;
}

String UNIX_VirtualSystemMigrationSettingData::getBandwidthUnit() const
{
	return _bandwidthUnit;
}

void UNIX_VirtualSystemMigrationSettingData::setBandwidthUnit(String &value)
{
	_bandwidthUnit = value;
}

Boolean UNIX_VirtualSystemMigrationSettingData::getOtherTransportType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TRANSPORT_TYPE, getOtherTransportType());
	return true;
}

String UNIX_VirtualSystemMigrationSettingData::getOtherTransportType() const
{
	return _otherTransportType;
}

void UNIX_VirtualSystemMigrationSettingData::setOtherTransportType(String &value)
{
	_otherTransportType = value;
}

Boolean UNIX_VirtualSystemMigrationSettingData::getTransportType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSPORT_TYPE, getTransportType());
	return true;
}

Uint16 UNIX_VirtualSystemMigrationSettingData::getTransportType() const
{
	return _transportType;
}

void UNIX_VirtualSystemMigrationSettingData::setTransportType(Uint16 &value)
{
	_transportType = value;
}


void UNIX_VirtualSystemMigrationSettingData::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("VirtualSystemMigrationSettingData");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_migrationType = Uint16(0);
	_priority = Uint16(0);
	_bandwidth = Uint16(0);
	_bandwidthUnit = String ("");
	_otherTransportType = String ("");
	_transportType = Uint16(0);

}

Boolean UNIX_VirtualSystemMigrationSettingData::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "MigrationType"))
			{
				Uint16 migrationTypeValue;
				property.getValue().get(migrationTypeValue);
				setMigrationType(migrationTypeValue);
			}
			else if (String::equal(property.getName().getString(), "Priority"))
			{
				Uint16 priorityValue;
				property.getValue().get(priorityValue);
				setPriority(priorityValue);
			}
			else if (String::equal(property.getName().getString(), "Bandwidth"))
			{
				Uint16 bandwidthValue;
				property.getValue().get(bandwidthValue);
				setBandwidth(bandwidthValue);
			}
			else if (String::equal(property.getName().getString(), "BandwidthUnit"))
			{
				String bandwidthUnitValue;
				property.getValue().get(bandwidthUnitValue);
				setBandwidthUnit(bandwidthUnitValue);
			}
			else if (String::equal(property.getName().getString(), "OtherTransportType"))
			{
				String otherTransportTypeValue;
				property.getValue().get(otherTransportTypeValue);
				setOtherTransportType(otherTransportTypeValue);
			}
			else if (String::equal(property.getName().getString(), "TransportType"))
			{
				Uint16 transportTypeValue;
				property.getValue().get(transportTypeValue);
				setTransportType(transportTypeValue);
			}
	}
	return true;
}


Boolean UNIX_VirtualSystemMigrationSettingData::initialize()
{
	return false;
}

Boolean UNIX_VirtualSystemMigrationSettingData::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("VirtualSystemMigrationSettingData");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_migrationType = Uint16(0);
	_priority = Uint16(0);
	_bandwidth = Uint16(0);
	_bandwidthUnit = String ("");
	_otherTransportType = String ("");
	_transportType = Uint16(0);
	
	return false;
}

Boolean UNIX_VirtualSystemMigrationSettingData::finalize()
{
	return false;
}


Boolean UNIX_VirtualSystemMigrationSettingData::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_VirtualSystemMigrationSettingData::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VirtualSystemMigrationSettingData::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VirtualSystemMigrationSettingData::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VirtualSystemMigrationSettingData::validateInstance()
{
	return true;
}

