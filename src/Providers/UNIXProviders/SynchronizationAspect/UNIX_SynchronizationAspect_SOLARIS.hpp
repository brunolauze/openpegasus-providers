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


UNIX_SynchronizationAspect::UNIX_SynchronizationAspect(void)
{
}

UNIX_SynchronizationAspect::~UNIX_SynchronizationAspect(void)
{
}

Boolean UNIX_SynchronizationAspect::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_SynchronizationAspect::getInstanceID() const
{
	return _instanceID;
}

void UNIX_SynchronizationAspect::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_SynchronizationAspect::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_SynchronizationAspect::getCaption() const
{
	return _caption;
}

void UNIX_SynchronizationAspect::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_SynchronizationAspect::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_SynchronizationAspect::getDescription() const
{
	return _description;
}

void UNIX_SynchronizationAspect::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_SynchronizationAspect::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_SynchronizationAspect::getElementName() const
{
	return _elementName;
}

void UNIX_SynchronizationAspect::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_SynchronizationAspect::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_SynchronizationAspect::getGeneration() const
{
	return _generation;
}

void UNIX_SynchronizationAspect::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_SynchronizationAspect::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_SynchronizationAspect::getConfigurationName() const
{
	return _configurationName;
}

void UNIX_SynchronizationAspect::setConfigurationName(String &value)
{
	_configurationName = value;
}

Boolean UNIX_SynchronizationAspect::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_SynchronizationAspect::getChangeableType() const
{
	return _changeableType;
}

void UNIX_SynchronizationAspect::setChangeableType(Uint16 &value)
{
	_changeableType = value;
}

Boolean UNIX_SynchronizationAspect::getComponentSetting(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPONENT_SETTING, getComponentSetting());
	return true;
}

Array<String> UNIX_SynchronizationAspect::getComponentSetting() const
{
	return _componentSetting;
}

void UNIX_SynchronizationAspect::setComponentSetting(Array<String> &value)
{
	_componentSetting = value;
}

Boolean UNIX_SynchronizationAspect::getSoID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ID, getSoID());
	return true;
}

String UNIX_SynchronizationAspect::getSoID() const
{
	return _soID;
}

void UNIX_SynchronizationAspect::setSoID(String &value)
{
	_soID = value;
}

Boolean UNIX_SynchronizationAspect::getSoOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ORG_ID, getSoOrgID());
	return true;
}

String UNIX_SynchronizationAspect::getSoOrgID() const
{
	return _soOrgID;
}

void UNIX_SynchronizationAspect::setSoOrgID(String &value)
{
	_soOrgID = value;
}

Boolean UNIX_SynchronizationAspect::getSyncType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYNC_TYPE, getSyncType());
	return true;
}

Uint16 UNIX_SynchronizationAspect::getSyncType() const
{
	return _syncType;
}

void UNIX_SynchronizationAspect::setSyncType(Uint16 &value)
{
	_syncType = value;
}

Boolean UNIX_SynchronizationAspect::getConsistencyEnabled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONSISTENCY_ENABLED, getConsistencyEnabled());
	return true;
}

Boolean UNIX_SynchronizationAspect::getConsistencyEnabled() const
{
	return _consistencyEnabled;
}

void UNIX_SynchronizationAspect::setConsistencyEnabled(Boolean &value)
{
	_consistencyEnabled = value;
}

Boolean UNIX_SynchronizationAspect::getConsistencyType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONSISTENCY_TYPE, getConsistencyType());
	return true;
}

Uint16 UNIX_SynchronizationAspect::getConsistencyType() const
{
	return _consistencyType;
}

void UNIX_SynchronizationAspect::setConsistencyType(Uint16 &value)
{
	_consistencyType = value;
}

Boolean UNIX_SynchronizationAspect::getCopyStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COPY_STATUS, getCopyStatus());
	return true;
}

Uint16 UNIX_SynchronizationAspect::getCopyStatus() const
{
	return _copyStatus;
}

void UNIX_SynchronizationAspect::setCopyStatus(Uint16 &value)
{
	_copyStatus = value;
}

Boolean UNIX_SynchronizationAspect::getCopyMethodology(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COPY_METHODOLOGY, getCopyMethodology());
	return true;
}

Uint16 UNIX_SynchronizationAspect::getCopyMethodology() const
{
	return _copyMethodology;
}

void UNIX_SynchronizationAspect::setCopyMethodology(Uint16 &value)
{
	_copyMethodology = value;
}

Boolean UNIX_SynchronizationAspect::getWhenPointInTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WHEN_POINT_IN_TIME, getWhenPointInTime());
	return true;
}

CIMDateTime UNIX_SynchronizationAspect::getWhenPointInTime() const
{
	return _whenPointInTime;
}

void UNIX_SynchronizationAspect::setWhenPointInTime(CIMDateTime &value)
{
	_whenPointInTime = value;
}

Boolean UNIX_SynchronizationAspect::getSourceElement(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SOURCE_ELEMENT, getSourceElement());
	return true;
}

String UNIX_SynchronizationAspect::getSourceElement() const
{
	return _sourceElement;
}

void UNIX_SynchronizationAspect::setSourceElement(String &value)
{
	_sourceElement = value;
}

Boolean UNIX_SynchronizationAspect::getAutoDelete(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTO_DELETE, getAutoDelete());
	return true;
}

Boolean UNIX_SynchronizationAspect::getAutoDelete() const
{
	return _autoDelete;
}

void UNIX_SynchronizationAspect::setAutoDelete(Boolean &value)
{
	_autoDelete = value;
}

Boolean UNIX_SynchronizationAspect::getTimeBeforeRemoval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_BEFORE_REMOVAL, getTimeBeforeRemoval());
	return true;
}

CIMDateTime UNIX_SynchronizationAspect::getTimeBeforeRemoval() const
{
	return _timeBeforeRemoval;
}

void UNIX_SynchronizationAspect::setTimeBeforeRemoval(CIMDateTime &value)
{
	_timeBeforeRemoval = value;
}


void UNIX_SynchronizationAspect::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("SynchronizationAspect");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_syncType = Uint16(0);
	_consistencyEnabled = Boolean(false);
	_consistencyType = Uint16(0);
	_copyStatus = Uint16(0);
	_copyMethodology = Uint16(0);
	_whenPointInTime = CIMHelper::getCurrentTime();
	_sourceElement = String ("");
	_autoDelete = Boolean(false);
	_timeBeforeRemoval = CIMHelper::getCurrentTime();

}

Boolean UNIX_SynchronizationAspect::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "SyncType"))
			{
				Uint16 syncTypeValue;
				property.getValue().get(syncTypeValue);
				setSyncType(syncTypeValue);
			}
			else if (String::equal(property.getName().getString(), "ConsistencyEnabled"))
			{
				Boolean consistencyEnabledValue;
				property.getValue().get(consistencyEnabledValue);
				setConsistencyEnabled(consistencyEnabledValue);
			}
			else if (String::equal(property.getName().getString(), "ConsistencyType"))
			{
				Uint16 consistencyTypeValue;
				property.getValue().get(consistencyTypeValue);
				setConsistencyType(consistencyTypeValue);
			}
			else if (String::equal(property.getName().getString(), "CopyStatus"))
			{
				Uint16 copyStatusValue;
				property.getValue().get(copyStatusValue);
				setCopyStatus(copyStatusValue);
			}
			else if (String::equal(property.getName().getString(), "CopyMethodology"))
			{
				Uint16 copyMethodologyValue;
				property.getValue().get(copyMethodologyValue);
				setCopyMethodology(copyMethodologyValue);
			}
			else if (String::equal(property.getName().getString(), "WhenPointInTime"))
			{
				CIMDateTime whenPointInTimeValue;
				property.getValue().get(whenPointInTimeValue);
				setWhenPointInTime(whenPointInTimeValue);
			}
			else if (String::equal(property.getName().getString(), "SourceElement"))
			{
				String sourceElementValue;
				property.getValue().get(sourceElementValue);
				setSourceElement(sourceElementValue);
			}
			else if (String::equal(property.getName().getString(), "AutoDelete"))
			{
				Boolean autoDeleteValue;
				property.getValue().get(autoDeleteValue);
				setAutoDelete(autoDeleteValue);
			}
			else if (String::equal(property.getName().getString(), "TimeBeforeRemoval"))
			{
				CIMDateTime timeBeforeRemovalValue;
				property.getValue().get(timeBeforeRemovalValue);
				setTimeBeforeRemoval(timeBeforeRemovalValue);
			}
	}
	return true;
}


Boolean UNIX_SynchronizationAspect::initialize()
{
	return false;
}

Boolean UNIX_SynchronizationAspect::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("SynchronizationAspect");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_syncType = Uint16(0);
	_consistencyEnabled = Boolean(false);
	_consistencyType = Uint16(0);
	_copyStatus = Uint16(0);
	_copyMethodology = Uint16(0);
	_whenPointInTime = CIMHelper::getCurrentTime();
	_sourceElement = String ("");
	_autoDelete = Boolean(false);
	_timeBeforeRemoval = CIMHelper::getCurrentTime();
	
	return false;
}

Boolean UNIX_SynchronizationAspect::finalize()
{
	return false;
}


Boolean UNIX_SynchronizationAspect::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_SynchronizationAspect::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SynchronizationAspect::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SynchronizationAspect::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SynchronizationAspect::validateInstance()
{
	return true;
}

