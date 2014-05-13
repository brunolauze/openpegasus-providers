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


UNIX_FileSystemReplicationServiceCapabilities::UNIX_FileSystemReplicationServiceCapabilities(void)
{
}

UNIX_FileSystemReplicationServiceCapabilities::~UNIX_FileSystemReplicationServiceCapabilities(void)
{
}

Boolean UNIX_FileSystemReplicationServiceCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_FileSystemReplicationServiceCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_FileSystemReplicationServiceCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_FileSystemReplicationServiceCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_FileSystemReplicationServiceCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_FileSystemReplicationServiceCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_FileSystemReplicationServiceCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_FileSystemReplicationServiceCapabilities::getDescription() const
{
	return _description;
}

void UNIX_FileSystemReplicationServiceCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_FileSystemReplicationServiceCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_FileSystemReplicationServiceCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_FileSystemReplicationServiceCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_FileSystemReplicationServiceCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_FileSystemReplicationServiceCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_FileSystemReplicationServiceCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_FileSystemReplicationServiceCapabilities::getSupportedReplicationTypes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_REPLICATION_TYPES, getSupportedReplicationTypes());
	return true;
}

Array<Uint16> UNIX_FileSystemReplicationServiceCapabilities::getSupportedReplicationTypes() const
{
	return _supportedReplicationTypes;
}

void UNIX_FileSystemReplicationServiceCapabilities::setSupportedReplicationTypes(Array<Uint16> &value)
{
	_supportedReplicationTypes = value;
}

Boolean UNIX_FileSystemReplicationServiceCapabilities::getSupportedStorageObjects(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_STORAGE_OBJECTS, getSupportedStorageObjects());
	return true;
}

Array<Uint16> UNIX_FileSystemReplicationServiceCapabilities::getSupportedStorageObjects() const
{
	return _supportedStorageObjects;
}

void UNIX_FileSystemReplicationServiceCapabilities::setSupportedStorageObjects(Array<Uint16> &value)
{
	_supportedStorageObjects = value;
}

Boolean UNIX_FileSystemReplicationServiceCapabilities::getSupportedAsynchronousActions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_ASYNCHRONOUS_ACTIONS, getSupportedAsynchronousActions());
	return true;
}

Array<Uint16> UNIX_FileSystemReplicationServiceCapabilities::getSupportedAsynchronousActions() const
{
	return _supportedAsynchronousActions;
}

void UNIX_FileSystemReplicationServiceCapabilities::setSupportedAsynchronousActions(Array<Uint16> &value)
{
	_supportedAsynchronousActions = value;
}

Boolean UNIX_FileSystemReplicationServiceCapabilities::getSupportedSynchronousActions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_SYNCHRONOUS_ACTIONS, getSupportedSynchronousActions());
	return true;
}

Array<Uint16> UNIX_FileSystemReplicationServiceCapabilities::getSupportedSynchronousActions() const
{
	return _supportedSynchronousActions;
}

void UNIX_FileSystemReplicationServiceCapabilities::setSupportedSynchronousActions(Array<Uint16> &value)
{
	_supportedSynchronousActions = value;
}


void UNIX_FileSystemReplicationServiceCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("FileSystemReplicationServiceCapabilities");
	_generation = Uint64(0);
	_supportedReplicationTypes.clear();
	_supportedStorageObjects.clear();
	_supportedAsynchronousActions.clear();
	_supportedSynchronousActions.clear();

}

Boolean UNIX_FileSystemReplicationServiceCapabilities::loadInstance(const CIMInstance &instance)
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

Uint16 UNIX_FileSystemReplicationServiceCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}

Uint32 UNIX_FileSystemReplicationServiceCapabilities::invokeConvertSyncTypeToReplicationType(
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

Uint32 UNIX_FileSystemReplicationServiceCapabilities::invokeConvertReplicationTypeToSyncType(
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

Uint32 UNIX_FileSystemReplicationServiceCapabilities::invokeGetSupportedCopyStates(
		Uint16 &inReplicationType,
		Array<Uint16> &inSupportedCopyStates,
		Array<Boolean> &inHostAccessible
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method GetSupportedCopyStates */
	
	
	
	return returnValue;
}

Uint32 UNIX_FileSystemReplicationServiceCapabilities::invokeGetSupportedGroupCopyStates(
		Uint16 &inReplicationType,
		Array<Uint16> &inSupportedCopyStates
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method GetSupportedGroupCopyStates */
	
	
	
	return returnValue;
}

Uint32 UNIX_FileSystemReplicationServiceCapabilities::invokeGetSupportedWaitForCopyStates(
		Uint16 &inReplicationType,
		Uint16 &inMethodName,
		Array<Uint16> &inSupportedCopyStates
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method GetSupportedWaitForCopyStates */
	
	
	
	return returnValue;
}

Uint32 UNIX_FileSystemReplicationServiceCapabilities::invokeGetSupportedFeatures(
		Uint16 &inReplicationType,
		Array<Uint16> &inFeatures
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method GetSupportedFeatures */
	
	
	
	return returnValue;
}

Uint32 UNIX_FileSystemReplicationServiceCapabilities::invokeGetSupportedGroupFeatures(
		Uint16 &inReplicationType,
		Array<Uint16> &inGroupFeatures
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method GetSupportedGroupFeatures */
	
	
	
	return returnValue;
}

Uint32 UNIX_FileSystemReplicationServiceCapabilities::invokeGetSupportedConsistency(
		Uint16 &inReplicationType,
		Array<Uint16> &inSupportedConsistency
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method GetSupportedConsistency */
	
	
	
	return returnValue;
}

Uint32 UNIX_FileSystemReplicationServiceCapabilities::invokeGetSupportedOperations(
		Uint16 &inReplicationType,
		Array<Uint16> &inSupportedOperations
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method GetSupportedOperations */
	
	
	
	return returnValue;
}

Uint32 UNIX_FileSystemReplicationServiceCapabilities::invokeGetSupportedGroupOperations(
		Uint16 &inReplicationType,
		Array<Uint16> &inSupportedGroupOperations
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method GetSupportedGroupOperations */
	
	
	
	return returnValue;
}

Uint32 UNIX_FileSystemReplicationServiceCapabilities::invokeGetSupportedListOperations(
		Uint16 &inReplicationType,
		Uint16 &inSynchronizationType,
		Array<Uint16> &inSupportedListOperations
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method GetSupportedListOperations */
	
	
	
	return returnValue;
}

Uint32 UNIX_FileSystemReplicationServiceCapabilities::invokeGetSupportedSettingsDefineStateOperations(
		Uint16 &inReplicationType,
		Array<Uint16> &inSupportedOperations
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method GetSupportedSettingsDefineStateOperations */
	
	
	
	return returnValue;
}

Uint32 UNIX_FileSystemReplicationServiceCapabilities::invokeGetSupportedThinProvisioningFeatures(
		Uint16 &inReplicationType,
		Array<Uint16> &inSupportedThinProvisioningFeatures
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method GetSupportedThinProvisioningFeatures */
	
	
	
	return returnValue;
}

Uint32 UNIX_FileSystemReplicationServiceCapabilities::invokeGetSupportedMaximum(
		Uint16 &inReplicationType,
		Uint16 &inComponent,
		Uint16 &inMaxValue
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method GetSupportedMaximum */
	
	
	
	return returnValue;
}

Uint32 UNIX_FileSystemReplicationServiceCapabilities::invokeGetDefaultConsistency(
		Uint16 &inReplicationType,
		Uint16 &inDefaultConsistency
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method GetDefaultConsistency */
	
	
	
	return returnValue;
}

Uint32 UNIX_FileSystemReplicationServiceCapabilities::invokeGetDefaultGroupPersistency(
		Uint16 &inDefaultGroupPersistency
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method GetDefaultGroupPersistency */
	
	
	
	return returnValue;
}

Uint32 UNIX_FileSystemReplicationServiceCapabilities::invokeGetSupportedReplicationSettingData(
		Uint16 &inReplicationType,
		Uint16 &inPropertyName,
		Array<Uint64> &inSupportedValues
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method GetSupportedReplicationSettingData */
	
	
	
	return returnValue;
}

Uint32 UNIX_FileSystemReplicationServiceCapabilities::invokeGetDefaultReplicationSettingData(
		Uint16 &inReplicationType,
		String &inDefaultInstance
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method GetDefaultReplicationSettingData */
	
	
	
	return returnValue;
}

Uint32 UNIX_FileSystemReplicationServiceCapabilities::invokeGetSupportedConnectionFeatures(
		CIMInstance &inconnection,
		Array<Uint16> &inSupportedConnectionFeatures
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method GetSupportedConnectionFeatures */
	
	
	
	return returnValue;
}

Uint32 UNIX_FileSystemReplicationServiceCapabilities::invokeGetSynchronizationSupported(
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

Uint32 UNIX_FileSystemReplicationServiceCapabilities::invokeGetSupportedStorageCompressionFeatures(
		Uint16 &inReplicationType,
		Array<Uint16> &inSupportedStorageCompressionFeatures
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method GetSupportedStorageCompressionFeatures */
	
	
	
	return returnValue;
}


Boolean UNIX_FileSystemReplicationServiceCapabilities::initialize()
{
	return false;
}

Boolean UNIX_FileSystemReplicationServiceCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("FileSystemReplicationServiceCapabilities");
	_generation = Uint64(0);
	_supportedReplicationTypes.clear();
	_supportedStorageObjects.clear();
	_supportedAsynchronousActions.clear();
	_supportedSynchronousActions.clear();
	
	return false;
}

Boolean UNIX_FileSystemReplicationServiceCapabilities::finalize()
{
	return false;
}


Boolean UNIX_FileSystemReplicationServiceCapabilities::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_FileSystemReplicationServiceCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FileSystemReplicationServiceCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FileSystemReplicationServiceCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FileSystemReplicationServiceCapabilities::validateInstance()
{
	return true;
}

