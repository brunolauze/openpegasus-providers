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


UNIX_DiskPartitionConfigurationCapabilities::UNIX_DiskPartitionConfigurationCapabilities(void)
{
}

UNIX_DiskPartitionConfigurationCapabilities::~UNIX_DiskPartitionConfigurationCapabilities(void)
{
}

Boolean UNIX_DiskPartitionConfigurationCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_DiskPartitionConfigurationCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_DiskPartitionConfigurationCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_DiskPartitionConfigurationCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_DiskPartitionConfigurationCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_DiskPartitionConfigurationCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_DiskPartitionConfigurationCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_DiskPartitionConfigurationCapabilities::getDescription() const
{
	return _description;
}

void UNIX_DiskPartitionConfigurationCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_DiskPartitionConfigurationCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_DiskPartitionConfigurationCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_DiskPartitionConfigurationCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_DiskPartitionConfigurationCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_DiskPartitionConfigurationCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_DiskPartitionConfigurationCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_DiskPartitionConfigurationCapabilities::getPartitionStyle(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PARTITION_STYLE, getPartitionStyle());
	return true;
}

Uint16 UNIX_DiskPartitionConfigurationCapabilities::getPartitionStyle() const
{
	return _partitionStyle;
}

void UNIX_DiskPartitionConfigurationCapabilities::setPartitionStyle(Uint16 &value)
{
	_partitionStyle = value;
}

Boolean UNIX_DiskPartitionConfigurationCapabilities::getValidSubPartitionStyles(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VALID_SUB_PARTITION_STYLES, getValidSubPartitionStyles());
	return true;
}

Array<Uint16> UNIX_DiskPartitionConfigurationCapabilities::getValidSubPartitionStyles() const
{
	return _validSubPartitionStyles;
}

void UNIX_DiskPartitionConfigurationCapabilities::setValidSubPartitionStyles(Array<Uint16> &value)
{
	_validSubPartitionStyles = value;
}

Boolean UNIX_DiskPartitionConfigurationCapabilities::getOtherValidSubPartitionStyles(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_VALID_SUB_PARTITION_STYLES, getOtherValidSubPartitionStyles());
	return true;
}

Array<String> UNIX_DiskPartitionConfigurationCapabilities::getOtherValidSubPartitionStyles() const
{
	return _otherValidSubPartitionStyles;
}

void UNIX_DiskPartitionConfigurationCapabilities::setOtherValidSubPartitionStyles(Array<String> &value)
{
	_otherValidSubPartitionStyles = value;
}

Boolean UNIX_DiskPartitionConfigurationCapabilities::getVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERSION, getVersion());
	return true;
}

Uint16 UNIX_DiskPartitionConfigurationCapabilities::getVersion() const
{
	return _version;
}

void UNIX_DiskPartitionConfigurationCapabilities::setVersion(Uint16 &value)
{
	_version = value;
}

Boolean UNIX_DiskPartitionConfigurationCapabilities::getMaxNumberOfPartitions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_NUMBER_OF_PARTITIONS, getMaxNumberOfPartitions());
	return true;
}

Uint16 UNIX_DiskPartitionConfigurationCapabilities::getMaxNumberOfPartitions() const
{
	return _maxNumberOfPartitions;
}

void UNIX_DiskPartitionConfigurationCapabilities::setMaxNumberOfPartitions(Uint16 &value)
{
	_maxNumberOfPartitions = value;
}

Boolean UNIX_DiskPartitionConfigurationCapabilities::getMaxCapacity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_CAPACITY, getMaxCapacity());
	return true;
}

Uint64 UNIX_DiskPartitionConfigurationCapabilities::getMaxCapacity() const
{
	return _maxCapacity;
}

void UNIX_DiskPartitionConfigurationCapabilities::setMaxCapacity(Uint64 &value)
{
	_maxCapacity = value;
}

Boolean UNIX_DiskPartitionConfigurationCapabilities::getOverlapAllowed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OVERLAP_ALLOWED, getOverlapAllowed());
	return true;
}

Boolean UNIX_DiskPartitionConfigurationCapabilities::getOverlapAllowed() const
{
	return _overlapAllowed;
}

void UNIX_DiskPartitionConfigurationCapabilities::setOverlapAllowed(Boolean &value)
{
	_overlapAllowed = value;
}

Boolean UNIX_DiskPartitionConfigurationCapabilities::getPartitionTableSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PARTITION_TABLE_SIZE, getPartitionTableSize());
	return true;
}

Uint32 UNIX_DiskPartitionConfigurationCapabilities::getPartitionTableSize() const
{
	return _partitionTableSize;
}

void UNIX_DiskPartitionConfigurationCapabilities::setPartitionTableSize(Uint32 &value)
{
	_partitionTableSize = value;
}

Boolean UNIX_DiskPartitionConfigurationCapabilities::getSupportedSynchronousActions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_SYNCHRONOUS_ACTIONS, getSupportedSynchronousActions());
	return true;
}

Array<Uint16> UNIX_DiskPartitionConfigurationCapabilities::getSupportedSynchronousActions() const
{
	return _supportedSynchronousActions;
}

void UNIX_DiskPartitionConfigurationCapabilities::setSupportedSynchronousActions(Array<Uint16> &value)
{
	_supportedSynchronousActions = value;
}


void UNIX_DiskPartitionConfigurationCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("DiskPartitionConfigurationCapabilities");
	_generation = Uint64(0);
	_partitionStyle = Uint16(0);
	_validSubPartitionStyles.clear();
	_otherValidSubPartitionStyles.clear();
	_version = Uint16(0);
	_maxNumberOfPartitions = Uint16(0);
	_maxCapacity = Uint64(0);
	_overlapAllowed = Boolean(false);
	_partitionTableSize = Uint32(0);
	_supportedSynchronousActions.clear();

}

Boolean UNIX_DiskPartitionConfigurationCapabilities::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "PartitionStyle"))
			{
				Uint16 partitionStyleValue;
				property.getValue().get(partitionStyleValue);
				setPartitionStyle(partitionStyleValue);
			}
			else if (String::equal(property.getName().getString(), "ValidSubPartitionStyles"))
			{
				Array<Uint16> validSubPartitionStylesValue;
				property.getValue().get(validSubPartitionStylesValue);
				setValidSubPartitionStyles(validSubPartitionStylesValue);
			}
			else if (String::equal(property.getName().getString(), "OtherValidSubPartitionStyles"))
			{
				Array<String> otherValidSubPartitionStylesValue;
				property.getValue().get(otherValidSubPartitionStylesValue);
				setOtherValidSubPartitionStyles(otherValidSubPartitionStylesValue);
			}
			else if (String::equal(property.getName().getString(), "Version"))
			{
				Uint16 versionValue;
				property.getValue().get(versionValue);
				setVersion(versionValue);
			}
			else if (String::equal(property.getName().getString(), "MaxNumberOfPartitions"))
			{
				Uint16 maxNumberOfPartitionsValue;
				property.getValue().get(maxNumberOfPartitionsValue);
				setMaxNumberOfPartitions(maxNumberOfPartitionsValue);
			}
			else if (String::equal(property.getName().getString(), "MaxCapacity"))
			{
				Uint64 maxCapacityValue;
				property.getValue().get(maxCapacityValue);
				setMaxCapacity(maxCapacityValue);
			}
			else if (String::equal(property.getName().getString(), "OverlapAllowed"))
			{
				Boolean overlapAllowedValue;
				property.getValue().get(overlapAllowedValue);
				setOverlapAllowed(overlapAllowedValue);
			}
			else if (String::equal(property.getName().getString(), "PartitionTableSize"))
			{
				Uint32 partitionTableSizeValue;
				property.getValue().get(partitionTableSizeValue);
				setPartitionTableSize(partitionTableSizeValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedSynchronousActions"))
			{
				Array<Uint16> supportedSynchronousActionsValue;
				property.getValue().get(supportedSynchronousActionsValue);
				setSupportedSynchronousActions(supportedSynchronousActionsValue);
			}
	}
	return true;
}

Uint16 UNIX_DiskPartitionConfigurationCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}


Boolean UNIX_DiskPartitionConfigurationCapabilities::initialize()
{
	return false;
}

Boolean UNIX_DiskPartitionConfigurationCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("DiskPartitionConfigurationCapabilities");
	_generation = Uint64(0);
	_partitionStyle = Uint16(0);
	_validSubPartitionStyles.clear();
	_otherValidSubPartitionStyles.clear();
	_version = Uint16(0);
	_maxNumberOfPartitions = Uint16(0);
	_maxCapacity = Uint64(0);
	_overlapAllowed = Boolean(false);
	_partitionTableSize = Uint32(0);
	_supportedSynchronousActions.clear();
	
	return false;
}

Boolean UNIX_DiskPartitionConfigurationCapabilities::finalize()
{
	return false;
}


Boolean UNIX_DiskPartitionConfigurationCapabilities::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_DiskPartitionConfigurationCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DiskPartitionConfigurationCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DiskPartitionConfigurationCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DiskPartitionConfigurationCapabilities::validateInstance()
{
	return true;
}

