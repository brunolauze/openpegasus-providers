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


UNIX_ReplicationServiceCapabilities::UNIX_ReplicationServiceCapabilities(void)
{
}

UNIX_ReplicationServiceCapabilities::~UNIX_ReplicationServiceCapabilities(void)
{
}

Boolean UNIX_ReplicationServiceCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_ReplicationServiceCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_ReplicationServiceCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_ReplicationServiceCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_ReplicationServiceCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_ReplicationServiceCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_ReplicationServiceCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_ReplicationServiceCapabilities::getDescription() const
{
	return _description;
}

void UNIX_ReplicationServiceCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_ReplicationServiceCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_ReplicationServiceCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_ReplicationServiceCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_ReplicationServiceCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_ReplicationServiceCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_ReplicationServiceCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_ReplicationServiceCapabilities::getSupportedReplicationTypes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_REPLICATION_TYPES, getSupportedReplicationTypes());
	return true;
}

Array<Uint16> UNIX_ReplicationServiceCapabilities::getSupportedReplicationTypes() const
{
	return _supportedReplicationTypes;
}

void UNIX_ReplicationServiceCapabilities::setSupportedReplicationTypes(Array<Uint16> &value)
{
	_supportedReplicationTypes = value;
}

Boolean UNIX_ReplicationServiceCapabilities::getSupportedStorageObjects(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_STORAGE_OBJECTS, getSupportedStorageObjects());
	return true;
}

Array<Uint16> UNIX_ReplicationServiceCapabilities::getSupportedStorageObjects() const
{
	return _supportedStorageObjects;
}

void UNIX_ReplicationServiceCapabilities::setSupportedStorageObjects(Array<Uint16> &value)
{
	_supportedStorageObjects = value;
}

Boolean UNIX_ReplicationServiceCapabilities::getSupportedAsynchronousActions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_ASYNCHRONOUS_ACTIONS, getSupportedAsynchronousActions());
	return true;
}

Array<Uint16> UNIX_ReplicationServiceCapabilities::getSupportedAsynchronousActions() const
{
	return _supportedAsynchronousActions;
}

void UNIX_ReplicationServiceCapabilities::setSupportedAsynchronousActions(Array<Uint16> &value)
{
	_supportedAsynchronousActions = value;
}

Boolean UNIX_ReplicationServiceCapabilities::getSupportedSynchronousActions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_SYNCHRONOUS_ACTIONS, getSupportedSynchronousActions());
	return true;
}

Array<Uint16> UNIX_ReplicationServiceCapabilities::getSupportedSynchronousActions() const
{
	return _supportedSynchronousActions;
}

void UNIX_ReplicationServiceCapabilities::setSupportedSynchronousActions(Array<Uint16> &value)
{
	_supportedSynchronousActions = value;
}


void UNIX_ReplicationServiceCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("ReplicationServiceCapabilities");
	_generation = Uint64(0);
	_supportedReplicationTypes.clear();
	_supportedStorageObjects.clear();
	_supportedAsynchronousActions.clear();
	_supportedSynchronousActions.clear();

}

Boolean UNIX_ReplicationServiceCapabilities::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "SupportedReplicationTypes"))
			{
				Array<Uint16> supportedReplicationTypesValue;
				property.getValue().get(supportedReplicationTypesValue);
				setSupportedReplicationTypes(supportedReplicationTypesValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedStorageObjects"))
			{
				Array<Uint16> supportedStorageObjectsValue;
				property.getValue().get(supportedStorageObjectsValue);
				setSupportedStorageObjects(supportedStorageObjectsValue);
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
	}
	return true;
}

Uint16 UNIX_ReplicationServiceCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}

Uint32 UNIX_ReplicationServiceCapabilities::invokeConvertSyncTypeToReplicationType(
		Uint16 &inSyncType,
		Uint16 &inMode,
		Uint16 &inLocalOrRemote,
		Uint16 &inSupportedReplicationTypes
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ConvertSyncTypeToReplicationType */
	
	
	
	return returnValue;
}

Uint32 UNIX_ReplicationServiceCapabilities::invokeConvertReplicationTypeToSyncType(
		Uint16 &inReplicationType,
		Uint16 &inSyncType,
		Uint16 &inMode,
		Uint16 &inLocalOrRemote
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ConvertReplicationTypeToSyncType */
	
	
	
	return returnValue;
}

Uint32 UNIX_ReplicationServiceCapabilities::invokeGetSupportedCopyStates(
		Uint16 &inReplicationType,
		Array<Uint16> &inSupportedCopyStates,
		Array<Boolean> &inHostAccessible,
		String &inReplicationSettingData
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method GetSupportedCopyStates */
	
	
	
	return returnValue;
}

Uint32 UNIX_ReplicationServiceCapabilities::invokeGetSupportedGroupCopyStates(
		Uint16 &inReplicationType,
		Array<Uint16> &inSupportedCopyStates,
		String &inReplicationSettingData
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method GetSupportedGroupCopyStates */
	
	
	
	return returnValue;
}

Uint32 UNIX_ReplicationServiceCapabilities::invokeGetSupportedWaitForCopyStates(
		Uint16 &inReplicationType,
		Uint16 &inMethodName,
		Array<Uint16> &inSupportedCopyStates,
		String &inReplicationSettingData
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method GetSupportedWaitForCopyStates */
	
	
	
	return returnValue;
}

Uint32 UNIX_ReplicationServiceCapabilities::invokeGetSupportedFeatures(
		Uint16 &inReplicationType,
		Array<Uint16> &inFeatures,
		String &inReplicationSettingData
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method GetSupportedFeatures */
	
	
	
	return returnValue;
}

Uint32 UNIX_ReplicationServiceCapabilities::invokeGetSupportedGroupFeatures(
		Uint16 &inReplicationType,
		Array<Uint16> &inGroupFeatures,
		String &inReplicationSettingData
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method GetSupportedGroupFeatures */
	
	
	
	return returnValue;
}

Uint32 UNIX_ReplicationServiceCapabilities::invokeGetSupportedConsistency(
		Uint16 &inReplicationType,
		Array<Uint16> &inSupportedConsistency,
		String &inReplicationSettingData
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method GetSupportedConsistency */
	
	
	
	return returnValue;
}

Uint32 UNIX_ReplicationServiceCapabilities::invokeGetSupportedOperations(
		Uint16 &inReplicationType,
		Array<Uint16> &inSupportedOperations,
		String &inReplicationSettingData
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method GetSupportedOperations */
	
	
	
	return returnValue;
}

Uint32 UNIX_ReplicationServiceCapabilities::invokeGetSupportedGroupOperations(
		Uint16 &inReplicationType,
		Array<Uint16> &inSupportedGroupOperations,
		String &inReplicationSettingData
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method GetSupportedGroupOperations */
	
	
	
	return returnValue;
}

Uint32 UNIX_ReplicationServiceCapabilities::invokeGetSupportedListOperations(
		Uint16 &inReplicationType,
		Uint16 &inSynchronizationType,
		Array<Uint16> &inSupportedListOperations,
		String &inReplicationSettingData
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method GetSupportedListOperations */
	
	
	
	return returnValue;
}

Uint32 UNIX_ReplicationServiceCapabilities::invokeGetSupportedSettingsDefineStateOperations(
		Uint16 &inReplicationType,
		Array<Uint16> &inSupportedOperations,
		String &inReplicationSettingData
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method GetSupportedSettingsDefineStateOperations */
	
	
	
	return returnValue;
}

Uint32 UNIX_ReplicationServiceCapabilities::invokeGetSupportedThinProvisioningFeatures(
		Uint16 &inReplicationType,
		Array<Uint16> &inSupportedThinProvisioningFeatures,
		String &inReplicationSettingData
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method GetSupportedThinProvisioningFeatures */
	
	
	
	return returnValue;
}

Uint32 UNIX_ReplicationServiceCapabilities::invokeGetSupportedMaximum(
		Uint16 &inReplicationType,
		Uint16 &inComponent,
		Uint64 &inMaxValue,
		String &inReplicationSettingData
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method GetSupportedMaximum */
	
	
	
	return returnValue;
}

Uint32 UNIX_ReplicationServiceCapabilities::invokeGetDefaultConsistency(
		Uint16 &inReplicationType,
		Uint16 &inDefaultConsistency,
		String &inReplicationSettingData
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method GetDefaultConsistency */
	
	
	
	return returnValue;
}

Uint32 UNIX_ReplicationServiceCapabilities::invokeGetDefaultGroupPersistency(
		Uint16 &inDefaultGroupPersistency
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method GetDefaultGroupPersistency */
	
	
	
	return returnValue;
}

Uint32 UNIX_ReplicationServiceCapabilities::invokeGetSupportedReplicationSettingData(
		Uint16 &inReplicationType,
		Uint16 &inPropertyName,
		Array<Uint64> &inSupportedValues,
		String &inReplicationSettingData
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method GetSupportedReplicationSettingData */
	
	
	
	return returnValue;
}

Uint32 UNIX_ReplicationServiceCapabilities::invokeGetDefaultReplicationSettingData(
		Uint16 &inReplicationType,
		String &inDefaultInstance
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method GetDefaultReplicationSettingData */
	
	
	
	return returnValue;
}

Uint32 UNIX_ReplicationServiceCapabilities::invokeGetSupportedConnectionFeatures(
		CIMInstance &inconnection,
		Array<Uint16> &inSupportedConnectionFeatures
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method GetSupportedConnectionFeatures */
	
	
	
	return returnValue;
}

Uint32 UNIX_ReplicationServiceCapabilities::invokeGetSynchronizationSupported(
		CIMInstance &inLocalElement,
		CIMInstance &inOtherElement,
		CIMInstance &inOtherElementAccessPoint,
		Uint16 &inMethodName,
		String &inReplicationSettingData,
		Array<Uint16> &inSyncTypes,
		Array<Uint16> &inModes,
		Array<Uint16> &inLocalElementRole
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method GetSynchronizationSupported */
	
	
	
	return returnValue;
}

Uint32 UNIX_ReplicationServiceCapabilities::invokeGetSupportedStorageCompressionFeatures(
		Uint16 &inReplicationType,
		Array<Uint16> &inSupportedStorageCompressionFeatures,
		String &inReplicationSettingData
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method GetSupportedStorageCompressionFeatures */
	
	
	
	return returnValue;
}

Uint32 UNIX_ReplicationServiceCapabilities::invokeGetSupportedTokenizedReplicationType(
		CIMInstance &inSourceElement,
		CIMInstance &inTargetElement,
		CIMInstance &inElementAccessPoint,
		String &inReplicationSettingData,
		Array<Uint16> &inReplicationTypes
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method GetSupportedTokenizedReplicationType */
	
	
	
	return returnValue;
}


Boolean UNIX_ReplicationServiceCapabilities::initialize()
{
	return false;
}

Boolean UNIX_ReplicationServiceCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("ReplicationServiceCapabilities");
	_generation = Uint64(0);
	_supportedReplicationTypes.clear();
	_supportedStorageObjects.clear();
	_supportedAsynchronousActions.clear();
	_supportedSynchronousActions.clear();
	
	return false;
}

Boolean UNIX_ReplicationServiceCapabilities::finalize()
{
	return false;
}


Boolean UNIX_ReplicationServiceCapabilities::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_ReplicationServiceCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ReplicationServiceCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ReplicationServiceCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ReplicationServiceCapabilities::validateInstance()
{
	return true;
}

