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


UNIX_StorageConfigurationCapabilities::UNIX_StorageConfigurationCapabilities(void)
{
}

UNIX_StorageConfigurationCapabilities::~UNIX_StorageConfigurationCapabilities(void)
{
}

Boolean UNIX_StorageConfigurationCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_StorageConfigurationCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_StorageConfigurationCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_StorageConfigurationCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_StorageConfigurationCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_StorageConfigurationCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_StorageConfigurationCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_StorageConfigurationCapabilities::getDescription() const
{
	return _description;
}

void UNIX_StorageConfigurationCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_StorageConfigurationCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_StorageConfigurationCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_StorageConfigurationCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_StorageConfigurationCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_StorageConfigurationCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_StorageConfigurationCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_StorageConfigurationCapabilities::getSupportedAsynchronousActions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_ASYNCHRONOUS_ACTIONS, getSupportedAsynchronousActions());
	return true;
}

Array<Uint16> UNIX_StorageConfigurationCapabilities::getSupportedAsynchronousActions() const
{
	return _supportedAsynchronousActions;
}

void UNIX_StorageConfigurationCapabilities::setSupportedAsynchronousActions(Array<Uint16> &value)
{
	_supportedAsynchronousActions = value;
}

Boolean UNIX_StorageConfigurationCapabilities::getSupportedSynchronousActions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_SYNCHRONOUS_ACTIONS, getSupportedSynchronousActions());
	return true;
}

Array<Uint16> UNIX_StorageConfigurationCapabilities::getSupportedSynchronousActions() const
{
	return _supportedSynchronousActions;
}

void UNIX_StorageConfigurationCapabilities::setSupportedSynchronousActions(Array<Uint16> &value)
{
	_supportedSynchronousActions = value;
}

Boolean UNIX_StorageConfigurationCapabilities::getSupportedStorageElementTypes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_STORAGE_ELEMENT_TYPES, getSupportedStorageElementTypes());
	return true;
}

Array<Uint16> UNIX_StorageConfigurationCapabilities::getSupportedStorageElementTypes() const
{
	return _supportedStorageElementTypes;
}

void UNIX_StorageConfigurationCapabilities::setSupportedStorageElementTypes(Array<Uint16> &value)
{
	_supportedStorageElementTypes = value;
}

Boolean UNIX_StorageConfigurationCapabilities::getSupportedStoragePoolFeatures(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_STORAGE_POOL_FEATURES, getSupportedStoragePoolFeatures());
	return true;
}

Array<Uint16> UNIX_StorageConfigurationCapabilities::getSupportedStoragePoolFeatures() const
{
	return _supportedStoragePoolFeatures;
}

void UNIX_StorageConfigurationCapabilities::setSupportedStoragePoolFeatures(Array<Uint16> &value)
{
	_supportedStoragePoolFeatures = value;
}

Boolean UNIX_StorageConfigurationCapabilities::getSupportedStorageElementFeatures(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_STORAGE_ELEMENT_FEATURES, getSupportedStorageElementFeatures());
	return true;
}

Array<Uint16> UNIX_StorageConfigurationCapabilities::getSupportedStorageElementFeatures() const
{
	return _supportedStorageElementFeatures;
}

void UNIX_StorageConfigurationCapabilities::setSupportedStorageElementFeatures(Array<Uint16> &value)
{
	_supportedStorageElementFeatures = value;
}

Boolean UNIX_StorageConfigurationCapabilities::getSupportedCopyTypes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_COPY_TYPES, getSupportedCopyTypes());
	return true;
}

Array<Uint16> UNIX_StorageConfigurationCapabilities::getSupportedCopyTypes() const
{
	return _supportedCopyTypes;
}

void UNIX_StorageConfigurationCapabilities::setSupportedCopyTypes(Array<Uint16> &value)
{
	_supportedCopyTypes = value;
}

Boolean UNIX_StorageConfigurationCapabilities::getInitialReplicationState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INITIAL_REPLICATION_STATE, getInitialReplicationState());
	return true;
}

Uint16 UNIX_StorageConfigurationCapabilities::getInitialReplicationState() const
{
	return _initialReplicationState;
}

void UNIX_StorageConfigurationCapabilities::setInitialReplicationState(Uint16 &value)
{
	_initialReplicationState = value;
}

Boolean UNIX_StorageConfigurationCapabilities::getSupportedStorageElementUsage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_STORAGE_ELEMENT_USAGE, getSupportedStorageElementUsage());
	return true;
}

Array<Uint16> UNIX_StorageConfigurationCapabilities::getSupportedStorageElementUsage() const
{
	return _supportedStorageElementUsage;
}

void UNIX_StorageConfigurationCapabilities::setSupportedStorageElementUsage(Array<Uint16> &value)
{
	_supportedStorageElementUsage = value;
}

Boolean UNIX_StorageConfigurationCapabilities::getClientSettableElementUsage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLIENT_SETTABLE_ELEMENT_USAGE, getClientSettableElementUsage());
	return true;
}

Array<Uint16> UNIX_StorageConfigurationCapabilities::getClientSettableElementUsage() const
{
	return _clientSettableElementUsage;
}

void UNIX_StorageConfigurationCapabilities::setClientSettableElementUsage(Array<Uint16> &value)
{
	_clientSettableElementUsage = value;
}

Boolean UNIX_StorageConfigurationCapabilities::getSupportedStoragePoolUsage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_STORAGE_POOL_USAGE, getSupportedStoragePoolUsage());
	return true;
}

Array<Uint16> UNIX_StorageConfigurationCapabilities::getSupportedStoragePoolUsage() const
{
	return _supportedStoragePoolUsage;
}

void UNIX_StorageConfigurationCapabilities::setSupportedStoragePoolUsage(Array<Uint16> &value)
{
	_supportedStoragePoolUsage = value;
}

Boolean UNIX_StorageConfigurationCapabilities::getClientSettablePoolUsage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLIENT_SETTABLE_POOL_USAGE, getClientSettablePoolUsage());
	return true;
}

Array<Uint16> UNIX_StorageConfigurationCapabilities::getClientSettablePoolUsage() const
{
	return _clientSettablePoolUsage;
}

void UNIX_StorageConfigurationCapabilities::setClientSettablePoolUsage(Array<Uint16> &value)
{
	_clientSettablePoolUsage = value;
}

Boolean UNIX_StorageConfigurationCapabilities::getThinProvisionedClientSettableReserve(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_THIN_PROVISIONED_CLIENT_SETTABLE_RESERVE, getThinProvisionedClientSettableReserve());
	return true;
}

Boolean UNIX_StorageConfigurationCapabilities::getThinProvisionedClientSettableReserve() const
{
	return _thinProvisionedClientSettableReserve;
}

void UNIX_StorageConfigurationCapabilities::setThinProvisionedClientSettableReserve(Boolean &value)
{
	_thinProvisionedClientSettableReserve = value;
}

Boolean UNIX_StorageConfigurationCapabilities::getThinProvisionedDefaultReserve(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_THIN_PROVISIONED_DEFAULT_RESERVE, getThinProvisionedDefaultReserve());
	return true;
}

Uint64 UNIX_StorageConfigurationCapabilities::getThinProvisionedDefaultReserve() const
{
	return _thinProvisionedDefaultReserve;
}

void UNIX_StorageConfigurationCapabilities::setThinProvisionedDefaultReserve(Uint64 &value)
{
	_thinProvisionedDefaultReserve = value;
}

Boolean UNIX_StorageConfigurationCapabilities::getMaximumElementCreateCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAXIMUM_ELEMENT_CREATE_COUNT, getMaximumElementCreateCount());
	return true;
}

Uint64 UNIX_StorageConfigurationCapabilities::getMaximumElementCreateCount() const
{
	return _maximumElementCreateCount;
}

void UNIX_StorageConfigurationCapabilities::setMaximumElementCreateCount(Uint64 &value)
{
	_maximumElementCreateCount = value;
}

Boolean UNIX_StorageConfigurationCapabilities::getMaximumElementDeleteCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAXIMUM_ELEMENT_DELETE_COUNT, getMaximumElementDeleteCount());
	return true;
}

Uint64 UNIX_StorageConfigurationCapabilities::getMaximumElementDeleteCount() const
{
	return _maximumElementDeleteCount;
}

void UNIX_StorageConfigurationCapabilities::setMaximumElementDeleteCount(Uint64 &value)
{
	_maximumElementDeleteCount = value;
}

Boolean UNIX_StorageConfigurationCapabilities::getMultipleElementCreateFeatures(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MULTIPLE_ELEMENT_CREATE_FEATURES, getMultipleElementCreateFeatures());
	return true;
}

Array<Uint16> UNIX_StorageConfigurationCapabilities::getMultipleElementCreateFeatures() const
{
	return _multipleElementCreateFeatures;
}

void UNIX_StorageConfigurationCapabilities::setMultipleElementCreateFeatures(Array<Uint16> &value)
{
	_multipleElementCreateFeatures = value;
}

Boolean UNIX_StorageConfigurationCapabilities::getMultipleElementDeleteFeatures(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MULTIPLE_ELEMENT_DELETE_FEATURES, getMultipleElementDeleteFeatures());
	return true;
}

Array<Uint16> UNIX_StorageConfigurationCapabilities::getMultipleElementDeleteFeatures() const
{
	return _multipleElementDeleteFeatures;
}

void UNIX_StorageConfigurationCapabilities::setMultipleElementDeleteFeatures(Array<Uint16> &value)
{
	_multipleElementDeleteFeatures = value;
}

Boolean UNIX_StorageConfigurationCapabilities::getAutomaticPoolSelectionAllowed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTOMATIC_POOL_SELECTION_ALLOWED, getAutomaticPoolSelectionAllowed());
	return true;
}

Boolean UNIX_StorageConfigurationCapabilities::getAutomaticPoolSelectionAllowed() const
{
	return _automaticPoolSelectionAllowed;
}

void UNIX_StorageConfigurationCapabilities::setAutomaticPoolSelectionAllowed(Boolean &value)
{
	_automaticPoolSelectionAllowed = value;
}


void UNIX_StorageConfigurationCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("StorageConfigurationCapabilities");
	_generation = Uint64(0);
	_supportedAsynchronousActions.clear();
	_supportedSynchronousActions.clear();
	_supportedStorageElementTypes.clear();
	_supportedStoragePoolFeatures.clear();
	_supportedStorageElementFeatures.clear();
	_supportedCopyTypes.clear();
	_initialReplicationState = Uint16(0);
	_supportedStorageElementUsage.clear();
	_clientSettableElementUsage.clear();
	_supportedStoragePoolUsage.clear();
	_clientSettablePoolUsage.clear();
	_thinProvisionedClientSettableReserve = Boolean(false);
	_thinProvisionedDefaultReserve = Uint64(0);
	_maximumElementCreateCount = Uint64(0);
	_maximumElementDeleteCount = Uint64(0);
	_multipleElementCreateFeatures.clear();
	_multipleElementDeleteFeatures.clear();
	_automaticPoolSelectionAllowed = Boolean(false);

}

Boolean UNIX_StorageConfigurationCapabilities::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "SupportedAsynchronousActions"))
			{
				Array<Uint16> supportedAsynchronousActionsValue;
				property.getValue().get(supportedAsynchronousActionsValue);
				setSupportedAsynchronousActions(supportedAsynchronousActionsValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedSynchronousActions"))
			{
				Array<Uint16> supportedSynchronousActionsValue;
				property.getValue().get(supportedSynchronousActionsValue);
				setSupportedSynchronousActions(supportedSynchronousActionsValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedStorageElementTypes"))
			{
				Array<Uint16> supportedStorageElementTypesValue;
				property.getValue().get(supportedStorageElementTypesValue);
				setSupportedStorageElementTypes(supportedStorageElementTypesValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedStoragePoolFeatures"))
			{
				Array<Uint16> supportedStoragePoolFeaturesValue;
				property.getValue().get(supportedStoragePoolFeaturesValue);
				setSupportedStoragePoolFeatures(supportedStoragePoolFeaturesValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedStorageElementFeatures"))
			{
				Array<Uint16> supportedStorageElementFeaturesValue;
				property.getValue().get(supportedStorageElementFeaturesValue);
				setSupportedStorageElementFeatures(supportedStorageElementFeaturesValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedCopyTypes"))
			{
				Array<Uint16> supportedCopyTypesValue;
				property.getValue().get(supportedCopyTypesValue);
				setSupportedCopyTypes(supportedCopyTypesValue);
			}
			else if (String::equal(property.getName().getString(), "InitialReplicationState"))
			{
				Uint16 initialReplicationStateValue;
				property.getValue().get(initialReplicationStateValue);
				setInitialReplicationState(initialReplicationStateValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedStorageElementUsage"))
			{
				Array<Uint16> supportedStorageElementUsageValue;
				property.getValue().get(supportedStorageElementUsageValue);
				setSupportedStorageElementUsage(supportedStorageElementUsageValue);
			}
			else if (String::equal(property.getName().getString(), "ClientSettableElementUsage"))
			{
				Array<Uint16> clientSettableElementUsageValue;
				property.getValue().get(clientSettableElementUsageValue);
				setClientSettableElementUsage(clientSettableElementUsageValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedStoragePoolUsage"))
			{
				Array<Uint16> supportedStoragePoolUsageValue;
				property.getValue().get(supportedStoragePoolUsageValue);
				setSupportedStoragePoolUsage(supportedStoragePoolUsageValue);
			}
			else if (String::equal(property.getName().getString(), "ClientSettablePoolUsage"))
			{
				Array<Uint16> clientSettablePoolUsageValue;
				property.getValue().get(clientSettablePoolUsageValue);
				setClientSettablePoolUsage(clientSettablePoolUsageValue);
			}
			else if (String::equal(property.getName().getString(), "ThinProvisionedClientSettableReserve"))
			{
				Boolean thinProvisionedClientSettableReserveValue;
				property.getValue().get(thinProvisionedClientSettableReserveValue);
				setThinProvisionedClientSettableReserve(thinProvisionedClientSettableReserveValue);
			}
			else if (String::equal(property.getName().getString(), "ThinProvisionedDefaultReserve"))
			{
				Uint64 thinProvisionedDefaultReserveValue;
				property.getValue().get(thinProvisionedDefaultReserveValue);
				setThinProvisionedDefaultReserve(thinProvisionedDefaultReserveValue);
			}
			else if (String::equal(property.getName().getString(), "MaximumElementCreateCount"))
			{
				Uint64 maximumElementCreateCountValue;
				property.getValue().get(maximumElementCreateCountValue);
				setMaximumElementCreateCount(maximumElementCreateCountValue);
			}
			else if (String::equal(property.getName().getString(), "MaximumElementDeleteCount"))
			{
				Uint64 maximumElementDeleteCountValue;
				property.getValue().get(maximumElementDeleteCountValue);
				setMaximumElementDeleteCount(maximumElementDeleteCountValue);
			}
			else if (String::equal(property.getName().getString(), "MultipleElementCreateFeatures"))
			{
				Array<Uint16> multipleElementCreateFeaturesValue;
				property.getValue().get(multipleElementCreateFeaturesValue);
				setMultipleElementCreateFeatures(multipleElementCreateFeaturesValue);
			}
			else if (String::equal(property.getName().getString(), "MultipleElementDeleteFeatures"))
			{
				Array<Uint16> multipleElementDeleteFeaturesValue;
				property.getValue().get(multipleElementDeleteFeaturesValue);
				setMultipleElementDeleteFeatures(multipleElementDeleteFeaturesValue);
			}
			else if (String::equal(property.getName().getString(), "AutomaticPoolSelectionAllowed"))
			{
				Boolean automaticPoolSelectionAllowedValue;
				property.getValue().get(automaticPoolSelectionAllowedValue);
				setAutomaticPoolSelectionAllowed(automaticPoolSelectionAllowedValue);
			}
	}
	return true;
}

Uint16 UNIX_StorageConfigurationCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}

Uint32 UNIX_StorageConfigurationCapabilities::invokeGetElementNameCapabilities(
		Uint16 &inElementType,
		CIMInstance &inGoal,
		CIMInstance &inInPool,
		Array<Uint16> &inSupportedFeatures,
		Uint16 &inMaxElementNameLen,
		String &inElementNameMask
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_StoragePool inInPoolObject;
	inInPoolObject.loadInstance(inInPool);
	
	/* Execute method GetElementNameCapabilities */
	
	
	
	return returnValue;
}


Boolean UNIX_StorageConfigurationCapabilities::initialize()
{
	return false;
}

Boolean UNIX_StorageConfigurationCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("StorageConfigurationCapabilities");
	_generation = Uint64(0);
	_supportedAsynchronousActions.clear();
	_supportedSynchronousActions.clear();
	_supportedStorageElementTypes.clear();
	_supportedStoragePoolFeatures.clear();
	_supportedStorageElementFeatures.clear();
	_supportedCopyTypes.clear();
	_initialReplicationState = Uint16(0);
	_supportedStorageElementUsage.clear();
	_clientSettableElementUsage.clear();
	_supportedStoragePoolUsage.clear();
	_clientSettablePoolUsage.clear();
	_thinProvisionedClientSettableReserve = Boolean(false);
	_thinProvisionedDefaultReserve = Uint64(0);
	_maximumElementCreateCount = Uint64(0);
	_maximumElementDeleteCount = Uint64(0);
	_multipleElementCreateFeatures.clear();
	_multipleElementDeleteFeatures.clear();
	_automaticPoolSelectionAllowed = Boolean(false);
	
	return false;
}

Boolean UNIX_StorageConfigurationCapabilities::finalize()
{
	return false;
}


Boolean UNIX_StorageConfigurationCapabilities::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_StorageConfigurationCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StorageConfigurationCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StorageConfigurationCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StorageConfigurationCapabilities::validateInstance()
{
	return true;
}

