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


UNIX_SoftwareInstallationServiceCapabilities::UNIX_SoftwareInstallationServiceCapabilities(void)
{
}

UNIX_SoftwareInstallationServiceCapabilities::~UNIX_SoftwareInstallationServiceCapabilities(void)
{
}

Boolean UNIX_SoftwareInstallationServiceCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_SoftwareInstallationServiceCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_SoftwareInstallationServiceCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_SoftwareInstallationServiceCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_SoftwareInstallationServiceCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_SoftwareInstallationServiceCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_SoftwareInstallationServiceCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_SoftwareInstallationServiceCapabilities::getDescription() const
{
	return _description;
}

void UNIX_SoftwareInstallationServiceCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_SoftwareInstallationServiceCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_SoftwareInstallationServiceCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_SoftwareInstallationServiceCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_SoftwareInstallationServiceCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_SoftwareInstallationServiceCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_SoftwareInstallationServiceCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_SoftwareInstallationServiceCapabilities::getSupportedAsynchronousActions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_ASYNCHRONOUS_ACTIONS, getSupportedAsynchronousActions());
	return true;
}

Array<Uint16> UNIX_SoftwareInstallationServiceCapabilities::getSupportedAsynchronousActions() const
{
	return _supportedAsynchronousActions;
}

void UNIX_SoftwareInstallationServiceCapabilities::setSupportedAsynchronousActions(Array<Uint16> &value)
{
	_supportedAsynchronousActions = value;
}

Boolean UNIX_SoftwareInstallationServiceCapabilities::getSupportedSynchronousActions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_SYNCHRONOUS_ACTIONS, getSupportedSynchronousActions());
	return true;
}

Array<Uint16> UNIX_SoftwareInstallationServiceCapabilities::getSupportedSynchronousActions() const
{
	return _supportedSynchronousActions;
}

void UNIX_SoftwareInstallationServiceCapabilities::setSupportedSynchronousActions(Array<Uint16> &value)
{
	_supportedSynchronousActions = value;
}

Boolean UNIX_SoftwareInstallationServiceCapabilities::getSupportedTargetTypes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_TARGET_TYPES, getSupportedTargetTypes());
	return true;
}

Array<String> UNIX_SoftwareInstallationServiceCapabilities::getSupportedTargetTypes() const
{
	return _supportedTargetTypes;
}

void UNIX_SoftwareInstallationServiceCapabilities::setSupportedTargetTypes(Array<String> &value)
{
	_supportedTargetTypes = value;
}

Boolean UNIX_SoftwareInstallationServiceCapabilities::getSupportedExtendedResourceTypes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_EXTENDED_RESOURCE_TYPES, getSupportedExtendedResourceTypes());
	return true;
}

Array<Uint16> UNIX_SoftwareInstallationServiceCapabilities::getSupportedExtendedResourceTypes() const
{
	return _supportedExtendedResourceTypes;
}

void UNIX_SoftwareInstallationServiceCapabilities::setSupportedExtendedResourceTypes(Array<Uint16> &value)
{
	_supportedExtendedResourceTypes = value;
}

Boolean UNIX_SoftwareInstallationServiceCapabilities::getCanAddToCollection(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAN_ADD_TO_COLLECTION, getCanAddToCollection());
	return true;
}

Boolean UNIX_SoftwareInstallationServiceCapabilities::getCanAddToCollection() const
{
	return _canAddToCollection;
}

void UNIX_SoftwareInstallationServiceCapabilities::setCanAddToCollection(Boolean &value)
{
	_canAddToCollection = value;
}

Boolean UNIX_SoftwareInstallationServiceCapabilities::getSupportedInstallOptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_INSTALL_OPTIONS, getSupportedInstallOptions());
	return true;
}

Array<Uint16> UNIX_SoftwareInstallationServiceCapabilities::getSupportedInstallOptions() const
{
	return _supportedInstallOptions;
}

void UNIX_SoftwareInstallationServiceCapabilities::setSupportedInstallOptions(Array<Uint16> &value)
{
	_supportedInstallOptions = value;
}

Boolean UNIX_SoftwareInstallationServiceCapabilities::getOtherSupportedExtendedResourceTypeDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SUPPORTED_EXTENDED_RESOURCE_TYPE_DESCRIPTIONS, getOtherSupportedExtendedResourceTypeDescriptions());
	return true;
}

Array<String> UNIX_SoftwareInstallationServiceCapabilities::getOtherSupportedExtendedResourceTypeDescriptions() const
{
	return _otherSupportedExtendedResourceTypeDescriptions;
}

void UNIX_SoftwareInstallationServiceCapabilities::setOtherSupportedExtendedResourceTypeDescriptions(Array<String> &value)
{
	_otherSupportedExtendedResourceTypeDescriptions = value;
}

Boolean UNIX_SoftwareInstallationServiceCapabilities::getSupportedExtendedResourceTypesMajorVersions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_EXTENDED_RESOURCE_TYPES_MAJOR_VERSIONS, getSupportedExtendedResourceTypesMajorVersions());
	return true;
}

Array<Uint16> UNIX_SoftwareInstallationServiceCapabilities::getSupportedExtendedResourceTypesMajorVersions() const
{
	return _supportedExtendedResourceTypesMajorVersions;
}

void UNIX_SoftwareInstallationServiceCapabilities::setSupportedExtendedResourceTypesMajorVersions(Array<Uint16> &value)
{
	_supportedExtendedResourceTypesMajorVersions = value;
}

Boolean UNIX_SoftwareInstallationServiceCapabilities::getSupportedExtendedResourceTypesMinorVersions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_EXTENDED_RESOURCE_TYPES_MINOR_VERSIONS, getSupportedExtendedResourceTypesMinorVersions());
	return true;
}

Array<Uint16> UNIX_SoftwareInstallationServiceCapabilities::getSupportedExtendedResourceTypesMinorVersions() const
{
	return _supportedExtendedResourceTypesMinorVersions;
}

void UNIX_SoftwareInstallationServiceCapabilities::setSupportedExtendedResourceTypesMinorVersions(Array<Uint16> &value)
{
	_supportedExtendedResourceTypesMinorVersions = value;
}

Boolean UNIX_SoftwareInstallationServiceCapabilities::getSupportedExtendedResourceTypesRevisionNumbers(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_EXTENDED_RESOURCE_TYPES_REVISION_NUMBERS, getSupportedExtendedResourceTypesRevisionNumbers());
	return true;
}

Array<Uint16> UNIX_SoftwareInstallationServiceCapabilities::getSupportedExtendedResourceTypesRevisionNumbers() const
{
	return _supportedExtendedResourceTypesRevisionNumbers;
}

void UNIX_SoftwareInstallationServiceCapabilities::setSupportedExtendedResourceTypesRevisionNumbers(Array<Uint16> &value)
{
	_supportedExtendedResourceTypesRevisionNumbers = value;
}

Boolean UNIX_SoftwareInstallationServiceCapabilities::getSupportedExtendedResourceTypesBuildNumbers(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_EXTENDED_RESOURCE_TYPES_BUILD_NUMBERS, getSupportedExtendedResourceTypesBuildNumbers());
	return true;
}

Array<Uint16> UNIX_SoftwareInstallationServiceCapabilities::getSupportedExtendedResourceTypesBuildNumbers() const
{
	return _supportedExtendedResourceTypesBuildNumbers;
}

void UNIX_SoftwareInstallationServiceCapabilities::setSupportedExtendedResourceTypesBuildNumbers(Array<Uint16> &value)
{
	_supportedExtendedResourceTypesBuildNumbers = value;
}

Boolean UNIX_SoftwareInstallationServiceCapabilities::getSupportedURISchemes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_U_R_I_SCHEMES, getSupportedURISchemes());
	return true;
}

Array<Uint16> UNIX_SoftwareInstallationServiceCapabilities::getSupportedURISchemes() const
{
	return _supportedURISchemes;
}

void UNIX_SoftwareInstallationServiceCapabilities::setSupportedURISchemes(Array<Uint16> &value)
{
	_supportedURISchemes = value;
}


void UNIX_SoftwareInstallationServiceCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("SoftwareInstallationServiceCapabilities");
	_generation = Uint64(0);
	_supportedAsynchronousActions.clear();
	_supportedSynchronousActions.clear();
	_supportedTargetTypes.clear();
	_supportedExtendedResourceTypes.clear();
	_canAddToCollection = Boolean(false);
	_supportedInstallOptions.clear();
	_otherSupportedExtendedResourceTypeDescriptions.clear();
	_supportedExtendedResourceTypesMajorVersions.clear();
	_supportedExtendedResourceTypesMinorVersions.clear();
	_supportedExtendedResourceTypesRevisionNumbers.clear();
	_supportedExtendedResourceTypesBuildNumbers.clear();
	_supportedURISchemes.clear();

}

Boolean UNIX_SoftwareInstallationServiceCapabilities::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "SupportedTargetTypes"))
			{
				Array<String> supportedTargetTypesValue;
				property.getValue().get(supportedTargetTypesValue);
				setSupportedTargetTypes(supportedTargetTypesValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedExtendedResourceTypes"))
			{
				Array<Uint16> supportedExtendedResourceTypesValue;
				property.getValue().get(supportedExtendedResourceTypesValue);
				setSupportedExtendedResourceTypes(supportedExtendedResourceTypesValue);
			}
			else if (String::equal(property.getName().getString(), "CanAddToCollection"))
			{
				Boolean canAddToCollectionValue;
				property.getValue().get(canAddToCollectionValue);
				setCanAddToCollection(canAddToCollectionValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedInstallOptions"))
			{
				Array<Uint16> supportedInstallOptionsValue;
				property.getValue().get(supportedInstallOptionsValue);
				setSupportedInstallOptions(supportedInstallOptionsValue);
			}
			else if (String::equal(property.getName().getString(), "OtherSupportedExtendedResourceTypeDescriptions"))
			{
				Array<String> otherSupportedExtendedResourceTypeDescriptionsValue;
				property.getValue().get(otherSupportedExtendedResourceTypeDescriptionsValue);
				setOtherSupportedExtendedResourceTypeDescriptions(otherSupportedExtendedResourceTypeDescriptionsValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedExtendedResourceTypesMajorVersions"))
			{
				Array<Uint16> supportedExtendedResourceTypesMajorVersionsValue;
				property.getValue().get(supportedExtendedResourceTypesMajorVersionsValue);
				setSupportedExtendedResourceTypesMajorVersions(supportedExtendedResourceTypesMajorVersionsValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedExtendedResourceTypesMinorVersions"))
			{
				Array<Uint16> supportedExtendedResourceTypesMinorVersionsValue;
				property.getValue().get(supportedExtendedResourceTypesMinorVersionsValue);
				setSupportedExtendedResourceTypesMinorVersions(supportedExtendedResourceTypesMinorVersionsValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedExtendedResourceTypesRevisionNumbers"))
			{
				Array<Uint16> supportedExtendedResourceTypesRevisionNumbersValue;
				property.getValue().get(supportedExtendedResourceTypesRevisionNumbersValue);
				setSupportedExtendedResourceTypesRevisionNumbers(supportedExtendedResourceTypesRevisionNumbersValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedExtendedResourceTypesBuildNumbers"))
			{
				Array<Uint16> supportedExtendedResourceTypesBuildNumbersValue;
				property.getValue().get(supportedExtendedResourceTypesBuildNumbersValue);
				setSupportedExtendedResourceTypesBuildNumbers(supportedExtendedResourceTypesBuildNumbersValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedURISchemes"))
			{
				Array<Uint16> supportedURISchemesValue;
				property.getValue().get(supportedURISchemesValue);
				setSupportedURISchemes(supportedURISchemesValue);
			}
	}
	return true;
}

Uint16 UNIX_SoftwareInstallationServiceCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}


Boolean UNIX_SoftwareInstallationServiceCapabilities::initialize()
{
	return false;
}

Boolean UNIX_SoftwareInstallationServiceCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("SoftwareInstallationServiceCapabilities");
	_generation = Uint64(0);
	_supportedAsynchronousActions.clear();
	_supportedSynchronousActions.clear();
	_supportedTargetTypes.clear();
	_supportedExtendedResourceTypes.clear();
	_canAddToCollection = Boolean(false);
	_supportedInstallOptions.clear();
	_otherSupportedExtendedResourceTypeDescriptions.clear();
	_supportedExtendedResourceTypesMajorVersions.clear();
	_supportedExtendedResourceTypesMinorVersions.clear();
	_supportedExtendedResourceTypesRevisionNumbers.clear();
	_supportedExtendedResourceTypesBuildNumbers.clear();
	_supportedURISchemes.clear();
	
	return false;
}

Boolean UNIX_SoftwareInstallationServiceCapabilities::finalize()
{
	return false;
}


Boolean UNIX_SoftwareInstallationServiceCapabilities::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_SoftwareInstallationServiceCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SoftwareInstallationServiceCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SoftwareInstallationServiceCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SoftwareInstallationServiceCapabilities::validateInstance()
{
	return true;
}

