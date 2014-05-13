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


UNIX_TierPolicyServiceCapabilities::UNIX_TierPolicyServiceCapabilities(void)
{
}

UNIX_TierPolicyServiceCapabilities::~UNIX_TierPolicyServiceCapabilities(void)
{
}

Boolean UNIX_TierPolicyServiceCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_TierPolicyServiceCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_TierPolicyServiceCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_TierPolicyServiceCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_TierPolicyServiceCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_TierPolicyServiceCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_TierPolicyServiceCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_TierPolicyServiceCapabilities::getDescription() const
{
	return _description;
}

void UNIX_TierPolicyServiceCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_TierPolicyServiceCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_TierPolicyServiceCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_TierPolicyServiceCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_TierPolicyServiceCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_TierPolicyServiceCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_TierPolicyServiceCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_TierPolicyServiceCapabilities::getSupportedFeatures(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_FEATURES, getSupportedFeatures());
	return true;
}

Array<Uint16> UNIX_TierPolicyServiceCapabilities::getSupportedFeatures() const
{
	return _supportedFeatures;
}

void UNIX_TierPolicyServiceCapabilities::setSupportedFeatures(Array<Uint16> &value)
{
	_supportedFeatures = value;
}

Boolean UNIX_TierPolicyServiceCapabilities::getSupportedStorageObjects(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_STORAGE_OBJECTS, getSupportedStorageObjects());
	return true;
}

Array<Uint16> UNIX_TierPolicyServiceCapabilities::getSupportedStorageObjects() const
{
	return _supportedStorageObjects;
}

void UNIX_TierPolicyServiceCapabilities::setSupportedStorageObjects(Array<Uint16> &value)
{
	_supportedStorageObjects = value;
}

Boolean UNIX_TierPolicyServiceCapabilities::getSupportedStorageElements(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_STORAGE_ELEMENTS, getSupportedStorageElements());
	return true;
}

Array<Uint16> UNIX_TierPolicyServiceCapabilities::getSupportedStorageElements() const
{
	return _supportedStorageElements;
}

void UNIX_TierPolicyServiceCapabilities::setSupportedStorageElements(Array<Uint16> &value)
{
	_supportedStorageElements = value;
}

Boolean UNIX_TierPolicyServiceCapabilities::getSupportedAsynchronousActions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_ASYNCHRONOUS_ACTIONS, getSupportedAsynchronousActions());
	return true;
}

Array<Uint16> UNIX_TierPolicyServiceCapabilities::getSupportedAsynchronousActions() const
{
	return _supportedAsynchronousActions;
}

void UNIX_TierPolicyServiceCapabilities::setSupportedAsynchronousActions(Array<Uint16> &value)
{
	_supportedAsynchronousActions = value;
}

Boolean UNIX_TierPolicyServiceCapabilities::getSupportedSynchronousActions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_SYNCHRONOUS_ACTIONS, getSupportedSynchronousActions());
	return true;
}

Array<Uint16> UNIX_TierPolicyServiceCapabilities::getSupportedSynchronousActions() const
{
	return _supportedSynchronousActions;
}

void UNIX_TierPolicyServiceCapabilities::setSupportedSynchronousActions(Array<Uint16> &value)
{
	_supportedSynchronousActions = value;
}

Boolean UNIX_TierPolicyServiceCapabilities::getSupportedTierFeatures(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_TIER_FEATURES, getSupportedTierFeatures());
	return true;
}

Array<Uint16> UNIX_TierPolicyServiceCapabilities::getSupportedTierFeatures() const
{
	return _supportedTierFeatures;
}

void UNIX_TierPolicyServiceCapabilities::setSupportedTierFeatures(Array<Uint16> &value)
{
	_supportedTierFeatures = value;
}

Boolean UNIX_TierPolicyServiceCapabilities::getSupportedCompression(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_COMPRESSION, getSupportedCompression());
	return true;
}

Array<Uint16> UNIX_TierPolicyServiceCapabilities::getSupportedCompression() const
{
	return _supportedCompression;
}

void UNIX_TierPolicyServiceCapabilities::setSupportedCompression(Array<Uint16> &value)
{
	_supportedCompression = value;
}

Boolean UNIX_TierPolicyServiceCapabilities::getSupportedDataMovement(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_DATA_MOVEMENT, getSupportedDataMovement());
	return true;
}

Array<Uint16> UNIX_TierPolicyServiceCapabilities::getSupportedDataMovement() const
{
	return _supportedDataMovement;
}

void UNIX_TierPolicyServiceCapabilities::setSupportedDataMovement(Array<Uint16> &value)
{
	_supportedDataMovement = value;
}

Boolean UNIX_TierPolicyServiceCapabilities::getSupportedManualMovementProvisioning(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_MANUAL_MOVEMENT_PROVISIONING, getSupportedManualMovementProvisioning());
	return true;
}

Array<Uint16> UNIX_TierPolicyServiceCapabilities::getSupportedManualMovementProvisioning() const
{
	return _supportedManualMovementProvisioning;
}

void UNIX_TierPolicyServiceCapabilities::setSupportedManualMovementProvisioning(Array<Uint16> &value)
{
	_supportedManualMovementProvisioning = value;
}

Boolean UNIX_TierPolicyServiceCapabilities::getSupportsTieringPolicies(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTS_TIERING_POLICIES, getSupportsTieringPolicies());
	return true;
}

Boolean UNIX_TierPolicyServiceCapabilities::getSupportsTieringPolicies() const
{
	return _supportsTieringPolicies;
}

void UNIX_TierPolicyServiceCapabilities::setSupportsTieringPolicies(Boolean &value)
{
	_supportsTieringPolicies = value;
}

Boolean UNIX_TierPolicyServiceCapabilities::getSupportedPolicyFeatures(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_POLICY_FEATURES, getSupportedPolicyFeatures());
	return true;
}

Array<Uint16> UNIX_TierPolicyServiceCapabilities::getSupportedPolicyFeatures() const
{
	return _supportedPolicyFeatures;
}

void UNIX_TierPolicyServiceCapabilities::setSupportedPolicyFeatures(Array<Uint16> &value)
{
	_supportedPolicyFeatures = value;
}

Boolean UNIX_TierPolicyServiceCapabilities::getPolicyAppliesToElements(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_APPLIES_TO_ELEMENTS, getPolicyAppliesToElements());
	return true;
}

Array<Uint16> UNIX_TierPolicyServiceCapabilities::getPolicyAppliesToElements() const
{
	return _policyAppliesToElements;
}

void UNIX_TierPolicyServiceCapabilities::setPolicyAppliesToElements(Array<Uint16> &value)
{
	_policyAppliesToElements = value;
}

Boolean UNIX_TierPolicyServiceCapabilities::getSupportedProvisioningTypes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_PROVISIONING_TYPES, getSupportedProvisioningTypes());
	return true;
}

Array<Uint16> UNIX_TierPolicyServiceCapabilities::getSupportedProvisioningTypes() const
{
	return _supportedProvisioningTypes;
}

void UNIX_TierPolicyServiceCapabilities::setSupportedProvisioningTypes(Array<Uint16> &value)
{
	_supportedProvisioningTypes = value;
}

Boolean UNIX_TierPolicyServiceCapabilities::getSupportedDataMovementRates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_DATA_MOVEMENT_RATES, getSupportedDataMovementRates());
	return true;
}

Array<Uint16> UNIX_TierPolicyServiceCapabilities::getSupportedDataMovementRates() const
{
	return _supportedDataMovementRates;
}

void UNIX_TierPolicyServiceCapabilities::setSupportedDataMovementRates(Array<Uint16> &value)
{
	_supportedDataMovementRates = value;
}

Boolean UNIX_TierPolicyServiceCapabilities::getSupportedRemoteTieringCoordination(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_REMOTE_TIERING_COORDINATION, getSupportedRemoteTieringCoordination());
	return true;
}

Array<Uint16> UNIX_TierPolicyServiceCapabilities::getSupportedRemoteTieringCoordination() const
{
	return _supportedRemoteTieringCoordination;
}

void UNIX_TierPolicyServiceCapabilities::setSupportedRemoteTieringCoordination(Array<Uint16> &value)
{
	_supportedRemoteTieringCoordination = value;
}

Boolean UNIX_TierPolicyServiceCapabilities::getSupportsAutomaticStoragePoolAllocation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTS_AUTOMATIC_STORAGE_POOL_ALLOCATION, getSupportsAutomaticStoragePoolAllocation());
	return true;
}

Boolean UNIX_TierPolicyServiceCapabilities::getSupportsAutomaticStoragePoolAllocation() const
{
	return _supportsAutomaticStoragePoolAllocation;
}

void UNIX_TierPolicyServiceCapabilities::setSupportsAutomaticStoragePoolAllocation(Boolean &value)
{
	_supportsAutomaticStoragePoolAllocation = value;
}


void UNIX_TierPolicyServiceCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("TierPolicyServiceCapabilities");
	_generation = Uint64(0);
	_supportedFeatures.clear();
	_supportedStorageObjects.clear();
	_supportedStorageElements.clear();
	_supportedAsynchronousActions.clear();
	_supportedSynchronousActions.clear();
	_supportedTierFeatures.clear();
	_supportedCompression.clear();
	_supportedDataMovement.clear();
	_supportedManualMovementProvisioning.clear();
	_supportsTieringPolicies = Boolean(false);
	_supportedPolicyFeatures.clear();
	_policyAppliesToElements.clear();
	_supportedProvisioningTypes.clear();
	_supportedDataMovementRates.clear();
	_supportedRemoteTieringCoordination.clear();
	_supportsAutomaticStoragePoolAllocation = Boolean(false);

}

Boolean UNIX_TierPolicyServiceCapabilities::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "SupportedFeatures"))
			{
				Array<Uint16> supportedFeaturesValue;
				property.getValue().get(supportedFeaturesValue);
				setSupportedFeatures(supportedFeaturesValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedStorageObjects"))
			{
				Array<Uint16> supportedStorageObjectsValue;
				property.getValue().get(supportedStorageObjectsValue);
				setSupportedStorageObjects(supportedStorageObjectsValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedStorageElements"))
			{
				Array<Uint16> supportedStorageElementsValue;
				property.getValue().get(supportedStorageElementsValue);
				setSupportedStorageElements(supportedStorageElementsValue);
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
			else if (String::equal(property.getName().getString(), "SupportedTierFeatures"))
			{
				Array<Uint16> supportedTierFeaturesValue;
				property.getValue().get(supportedTierFeaturesValue);
				setSupportedTierFeatures(supportedTierFeaturesValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedCompression"))
			{
				Array<Uint16> supportedCompressionValue;
				property.getValue().get(supportedCompressionValue);
				setSupportedCompression(supportedCompressionValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedDataMovement"))
			{
				Array<Uint16> supportedDataMovementValue;
				property.getValue().get(supportedDataMovementValue);
				setSupportedDataMovement(supportedDataMovementValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedManualMovementProvisioning"))
			{
				Array<Uint16> supportedManualMovementProvisioningValue;
				property.getValue().get(supportedManualMovementProvisioningValue);
				setSupportedManualMovementProvisioning(supportedManualMovementProvisioningValue);
			}
			else if (String::equal(property.getName().getString(), "SupportsTieringPolicies"))
			{
				Boolean supportsTieringPoliciesValue;
				property.getValue().get(supportsTieringPoliciesValue);
				setSupportsTieringPolicies(supportsTieringPoliciesValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedPolicyFeatures"))
			{
				Array<Uint16> supportedPolicyFeaturesValue;
				property.getValue().get(supportedPolicyFeaturesValue);
				setSupportedPolicyFeatures(supportedPolicyFeaturesValue);
			}
			else if (String::equal(property.getName().getString(), "PolicyAppliesToElements"))
			{
				Array<Uint16> policyAppliesToElementsValue;
				property.getValue().get(policyAppliesToElementsValue);
				setPolicyAppliesToElements(policyAppliesToElementsValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedProvisioningTypes"))
			{
				Array<Uint16> supportedProvisioningTypesValue;
				property.getValue().get(supportedProvisioningTypesValue);
				setSupportedProvisioningTypes(supportedProvisioningTypesValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedDataMovementRates"))
			{
				Array<Uint16> supportedDataMovementRatesValue;
				property.getValue().get(supportedDataMovementRatesValue);
				setSupportedDataMovementRates(supportedDataMovementRatesValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedRemoteTieringCoordination"))
			{
				Array<Uint16> supportedRemoteTieringCoordinationValue;
				property.getValue().get(supportedRemoteTieringCoordinationValue);
				setSupportedRemoteTieringCoordination(supportedRemoteTieringCoordinationValue);
			}
			else if (String::equal(property.getName().getString(), "SupportsAutomaticStoragePoolAllocation"))
			{
				Boolean supportsAutomaticStoragePoolAllocationValue;
				property.getValue().get(supportsAutomaticStoragePoolAllocationValue);
				setSupportsAutomaticStoragePoolAllocation(supportsAutomaticStoragePoolAllocationValue);
			}
	}
	return true;
}

Uint16 UNIX_TierPolicyServiceCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}


Boolean UNIX_TierPolicyServiceCapabilities::initialize()
{
	return false;
}

Boolean UNIX_TierPolicyServiceCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("TierPolicyServiceCapabilities");
	_generation = Uint64(0);
	_supportedFeatures.clear();
	_supportedStorageObjects.clear();
	_supportedStorageElements.clear();
	_supportedAsynchronousActions.clear();
	_supportedSynchronousActions.clear();
	_supportedTierFeatures.clear();
	_supportedCompression.clear();
	_supportedDataMovement.clear();
	_supportedManualMovementProvisioning.clear();
	_supportsTieringPolicies = Boolean(false);
	_supportedPolicyFeatures.clear();
	_policyAppliesToElements.clear();
	_supportedProvisioningTypes.clear();
	_supportedDataMovementRates.clear();
	_supportedRemoteTieringCoordination.clear();
	_supportsAutomaticStoragePoolAllocation = Boolean(false);
	
	return false;
}

Boolean UNIX_TierPolicyServiceCapabilities::finalize()
{
	return false;
}


Boolean UNIX_TierPolicyServiceCapabilities::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_TierPolicyServiceCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_TierPolicyServiceCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_TierPolicyServiceCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_TierPolicyServiceCapabilities::validateInstance()
{
	return true;
}

