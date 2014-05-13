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


UNIX_StoragePoolView::UNIX_StoragePoolView(void)
{
}

UNIX_StoragePoolView::~UNIX_StoragePoolView(void)
{
}

Boolean UNIX_StoragePoolView::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_StoragePoolView::getInstanceID() const
{
	return _instanceID;
}

void UNIX_StoragePoolView::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_StoragePoolView::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_StoragePoolView::getCaption() const
{
	return _caption;
}

void UNIX_StoragePoolView::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_StoragePoolView::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_StoragePoolView::getDescription() const
{
	return _description;
}

void UNIX_StoragePoolView::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_StoragePoolView::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_StoragePoolView::getElementName() const
{
	return _elementName;
}

void UNIX_StoragePoolView::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_StoragePoolView::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_StoragePoolView::getGeneration() const
{
	return _generation;
}

void UNIX_StoragePoolView::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_StoragePoolView::getSPInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SPINSTANCE_ID, getSPInstanceID());
	return true;
}

String UNIX_StoragePoolView::getSPInstanceID() const
{
	return _sPInstanceID;
}

void UNIX_StoragePoolView::setSPInstanceID(String &value)
{
	_sPInstanceID = value;
}

Boolean UNIX_StoragePoolView::getSPElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_P_ELEMENT_NAME, getSPElementName());
	return true;
}

String UNIX_StoragePoolView::getSPElementName() const
{
	return _sPElementName;
}

void UNIX_StoragePoolView::setSPElementName(String &value)
{
	_sPElementName = value;
}

Boolean UNIX_StoragePoolView::getSPPoolID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_P_POOL_ID, getSPPoolID());
	return true;
}

String UNIX_StoragePoolView::getSPPoolID() const
{
	return _sPPoolID;
}

void UNIX_StoragePoolView::setSPPoolID(String &value)
{
	_sPPoolID = value;
}

Boolean UNIX_StoragePoolView::getSPRemainingManagedSpace(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_P_REMAINING_MANAGED_SPACE, getSPRemainingManagedSpace());
	return true;
}

Uint64 UNIX_StoragePoolView::getSPRemainingManagedSpace() const
{
	return _sPRemainingManagedSpace;
}

void UNIX_StoragePoolView::setSPRemainingManagedSpace(Uint64 &value)
{
	_sPRemainingManagedSpace = value;
}

Boolean UNIX_StoragePoolView::getSPTotalManagedSpace(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_P_TOTAL_MANAGED_SPACE, getSPTotalManagedSpace());
	return true;
}

Uint64 UNIX_StoragePoolView::getSPTotalManagedSpace() const
{
	return _sPTotalManagedSpace;
}

void UNIX_StoragePoolView::setSPTotalManagedSpace(Uint64 &value)
{
	_sPTotalManagedSpace = value;
}

Boolean UNIX_StoragePoolView::getSPPrimordial(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_P_PRIMORDIAL, getSPPrimordial());
	return true;
}

Boolean UNIX_StoragePoolView::getSPPrimordial() const
{
	return _sPPrimordial;
}

void UNIX_StoragePoolView::setSPPrimordial(Boolean &value)
{
	_sPPrimordial = value;
}

Boolean UNIX_StoragePoolView::getSPUsage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_P_USAGE, getSPUsage());
	return true;
}

Uint16 UNIX_StoragePoolView::getSPUsage() const
{
	return _sPUsage;
}

void UNIX_StoragePoolView::setSPUsage(Uint16 &value)
{
	_sPUsage = value;
}

Boolean UNIX_StoragePoolView::getSPOtherUsageDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_P_OTHER_USAGE_DESCRIPTION, getSPOtherUsageDescription());
	return true;
}

String UNIX_StoragePoolView::getSPOtherUsageDescription() const
{
	return _sPOtherUsageDescription;
}

void UNIX_StoragePoolView::setSPOtherUsageDescription(String &value)
{
	_sPOtherUsageDescription = value;
}

Boolean UNIX_StoragePoolView::getSPClientSettableUsage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_P_CLIENT_SETTABLE_USAGE, getSPClientSettableUsage());
	return true;
}

Array<Uint16> UNIX_StoragePoolView::getSPClientSettableUsage() const
{
	return _sPClientSettableUsage;
}

void UNIX_StoragePoolView::setSPClientSettableUsage(Array<Uint16> &value)
{
	_sPClientSettableUsage = value;
}

Boolean UNIX_StoragePoolView::getSCInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_C_INSTANCE_ID, getSCInstanceID());
	return true;
}

String UNIX_StoragePoolView::getSCInstanceID() const
{
	return _sCInstanceID;
}

void UNIX_StoragePoolView::setSCInstanceID(String &value)
{
	_sCInstanceID = value;
}

Boolean UNIX_StoragePoolView::getSCElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_C_ELEMENT_NAME, getSCElementName());
	return true;
}

String UNIX_StoragePoolView::getSCElementName() const
{
	return _sCElementName;
}

void UNIX_StoragePoolView::setSCElementName(String &value)
{
	_sCElementName = value;
}

Boolean UNIX_StoragePoolView::getSCElementType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_C_ELEMENT_TYPE, getSCElementType());
	return true;
}

Uint16 UNIX_StoragePoolView::getSCElementType() const
{
	return _sCElementType;
}

void UNIX_StoragePoolView::setSCElementType(Uint16 &value)
{
	_sCElementType = value;
}

Boolean UNIX_StoragePoolView::getSCNoSinglePointOfFailure(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_C_NO_SINGLE_POINT_OF_FAILURE, getSCNoSinglePointOfFailure());
	return true;
}

Boolean UNIX_StoragePoolView::getSCNoSinglePointOfFailure() const
{
	return _sCNoSinglePointOfFailure;
}

void UNIX_StoragePoolView::setSCNoSinglePointOfFailure(Boolean &value)
{
	_sCNoSinglePointOfFailure = value;
}

Boolean UNIX_StoragePoolView::getSCNoSinglePointOfFailureDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_C_NO_SINGLE_POINT_OF_FAILURE_DEFAULT, getSCNoSinglePointOfFailureDefault());
	return true;
}

Boolean UNIX_StoragePoolView::getSCNoSinglePointOfFailureDefault() const
{
	return _sCNoSinglePointOfFailureDefault;
}

void UNIX_StoragePoolView::setSCNoSinglePointOfFailureDefault(Boolean &value)
{
	_sCNoSinglePointOfFailureDefault = value;
}

Boolean UNIX_StoragePoolView::getSCPackageRedundancyDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_C_PACKAGE_REDUNDANCY_DEFAULT, getSCPackageRedundancyDefault());
	return true;
}

Uint16 UNIX_StoragePoolView::getSCPackageRedundancyDefault() const
{
	return _sCPackageRedundancyDefault;
}

void UNIX_StoragePoolView::setSCPackageRedundancyDefault(Uint16 &value)
{
	_sCPackageRedundancyDefault = value;
}

Boolean UNIX_StoragePoolView::getSCPackageRedundancyMin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_C_PACKAGE_REDUNDANCY_MIN, getSCPackageRedundancyMin());
	return true;
}

Uint16 UNIX_StoragePoolView::getSCPackageRedundancyMin() const
{
	return _sCPackageRedundancyMin;
}

void UNIX_StoragePoolView::setSCPackageRedundancyMin(Uint16 &value)
{
	_sCPackageRedundancyMin = value;
}

Boolean UNIX_StoragePoolView::getSCPackageRedundancyMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_C_PACKAGE_REDUNDANCY_MAX, getSCPackageRedundancyMax());
	return true;
}

Uint16 UNIX_StoragePoolView::getSCPackageRedundancyMax() const
{
	return _sCPackageRedundancyMax;
}

void UNIX_StoragePoolView::setSCPackageRedundancyMax(Uint16 &value)
{
	_sCPackageRedundancyMax = value;
}

Boolean UNIX_StoragePoolView::getSCDataRedundancyDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_C_DATA_REDUNDANCY_DEFAULT, getSCDataRedundancyDefault());
	return true;
}

Uint16 UNIX_StoragePoolView::getSCDataRedundancyDefault() const
{
	return _sCDataRedundancyDefault;
}

void UNIX_StoragePoolView::setSCDataRedundancyDefault(Uint16 &value)
{
	_sCDataRedundancyDefault = value;
}

Boolean UNIX_StoragePoolView::getSCDataRedundancyMin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_C_DATA_REDUNDANCY_MIN, getSCDataRedundancyMin());
	return true;
}

Uint16 UNIX_StoragePoolView::getSCDataRedundancyMin() const
{
	return _sCDataRedundancyMin;
}

void UNIX_StoragePoolView::setSCDataRedundancyMin(Uint16 &value)
{
	_sCDataRedundancyMin = value;
}

Boolean UNIX_StoragePoolView::getSCDataRedundancyMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_C_DATA_REDUNDANCY_MAX, getSCDataRedundancyMax());
	return true;
}

Uint16 UNIX_StoragePoolView::getSCDataRedundancyMax() const
{
	return _sCDataRedundancyMax;
}

void UNIX_StoragePoolView::setSCDataRedundancyMax(Uint16 &value)
{
	_sCDataRedundancyMax = value;
}

Boolean UNIX_StoragePoolView::getSCExtentStripeLengthDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_C_EXTENT_STRIPE_LENGTH_DEFAULT, getSCExtentStripeLengthDefault());
	return true;
}

Uint16 UNIX_StoragePoolView::getSCExtentStripeLengthDefault() const
{
	return _sCExtentStripeLengthDefault;
}

void UNIX_StoragePoolView::setSCExtentStripeLengthDefault(Uint16 &value)
{
	_sCExtentStripeLengthDefault = value;
}

Boolean UNIX_StoragePoolView::getSCParityLayoutDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_C_PARITY_LAYOUT_DEFAULT, getSCParityLayoutDefault());
	return true;
}

Uint16 UNIX_StoragePoolView::getSCParityLayoutDefault() const
{
	return _sCParityLayoutDefault;
}

void UNIX_StoragePoolView::setSCParityLayoutDefault(Uint16 &value)
{
	_sCParityLayoutDefault = value;
}

Boolean UNIX_StoragePoolView::getSCUserDataStripeDepthDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_C_USER_DATA_STRIPE_DEPTH_DEFAULT, getSCUserDataStripeDepthDefault());
	return true;
}

Uint64 UNIX_StoragePoolView::getSCUserDataStripeDepthDefault() const
{
	return _sCUserDataStripeDepthDefault;
}

void UNIX_StoragePoolView::setSCUserDataStripeDepthDefault(Uint64 &value)
{
	_sCUserDataStripeDepthDefault = value;
}

Boolean UNIX_StoragePoolView::getAFSPSpaceConsumed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AFS_P_SPACE_CONSUMED, getAFSPSpaceConsumed());
	return true;
}

Uint64 UNIX_StoragePoolView::getAFSPSpaceConsumed() const
{
	return _aFSPSpaceConsumed;
}

void UNIX_StoragePoolView::setAFSPSpaceConsumed(Uint64 &value)
{
	_aFSPSpaceConsumed = value;
}

Boolean UNIX_StoragePoolView::getSCCInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_C_C_INSTANCE_ID, getSCCInstanceID());
	return true;
}

String UNIX_StoragePoolView::getSCCInstanceID() const
{
	return _sCCInstanceID;
}

void UNIX_StoragePoolView::setSCCInstanceID(String &value)
{
	_sCCInstanceID = value;
}

Boolean UNIX_StoragePoolView::getSCCElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_C_C_ELEMENT_NAME, getSCCElementName());
	return true;
}

String UNIX_StoragePoolView::getSCCElementName() const
{
	return _sCCElementName;
}

void UNIX_StoragePoolView::setSCCElementName(String &value)
{
	_sCCElementName = value;
}

Boolean UNIX_StoragePoolView::getSCCSupportedStoragePoolFeatures(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_C_CSUPPORTED_STORAGE_POOL_FEATURES, getSCCSupportedStoragePoolFeatures());
	return true;
}

Array<Uint16> UNIX_StoragePoolView::getSCCSupportedStoragePoolFeatures() const
{
	return _sCCSupportedStoragePoolFeatures;
}

void UNIX_StoragePoolView::setSCCSupportedStoragePoolFeatures(Array<Uint16> &value)
{
	_sCCSupportedStoragePoolFeatures = value;
}

Boolean UNIX_StoragePoolView::getSCCSupportedStorageElementTypes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_C_CSUPPORTED_STORAGE_ELEMENT_TYPES, getSCCSupportedStorageElementTypes());
	return true;
}

Array<Uint16> UNIX_StoragePoolView::getSCCSupportedStorageElementTypes() const
{
	return _sCCSupportedStorageElementTypes;
}

void UNIX_StoragePoolView::setSCCSupportedStorageElementTypes(Array<Uint16> &value)
{
	_sCCSupportedStorageElementTypes = value;
}

Boolean UNIX_StoragePoolView::getSCCSupportedStorageElementFeatures(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_C_CSUPPORTED_STORAGE_ELEMENT_FEATURES, getSCCSupportedStorageElementFeatures());
	return true;
}

Array<Uint16> UNIX_StoragePoolView::getSCCSupportedStorageElementFeatures() const
{
	return _sCCSupportedStorageElementFeatures;
}

void UNIX_StoragePoolView::setSCCSupportedStorageElementFeatures(Array<Uint16> &value)
{
	_sCCSupportedStorageElementFeatures = value;
}

Boolean UNIX_StoragePoolView::getSCCSupportedSynchronousActions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_C_CSUPPORTED_SYNCHRONOUS_ACTIONS, getSCCSupportedSynchronousActions());
	return true;
}

Array<Uint16> UNIX_StoragePoolView::getSCCSupportedSynchronousActions() const
{
	return _sCCSupportedSynchronousActions;
}

void UNIX_StoragePoolView::setSCCSupportedSynchronousActions(Array<Uint16> &value)
{
	_sCCSupportedSynchronousActions = value;
}

Boolean UNIX_StoragePoolView::getSCCSupportedAsynchronousActions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_C_CSUPPORTED_ASYNCHRONOUS_ACTIONS, getSCCSupportedAsynchronousActions());
	return true;
}

Array<Uint16> UNIX_StoragePoolView::getSCCSupportedAsynchronousActions() const
{
	return _sCCSupportedAsynchronousActions;
}

void UNIX_StoragePoolView::setSCCSupportedAsynchronousActions(Array<Uint16> &value)
{
	_sCCSupportedAsynchronousActions = value;
}

Boolean UNIX_StoragePoolView::getSCCSupportedStorageElementUsage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_C_CSUPPORTED_STORAGE_ELEMENT_USAGE, getSCCSupportedStorageElementUsage());
	return true;
}

Array<Uint16> UNIX_StoragePoolView::getSCCSupportedStorageElementUsage() const
{
	return _sCCSupportedStorageElementUsage;
}

void UNIX_StoragePoolView::setSCCSupportedStorageElementUsage(Array<Uint16> &value)
{
	_sCCSupportedStorageElementUsage = value;
}

Boolean UNIX_StoragePoolView::getSCCClientSettableElementUsage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_C_C_CLIENT_SETTABLE_ELEMENT_USAGE, getSCCClientSettableElementUsage());
	return true;
}

Array<String> UNIX_StoragePoolView::getSCCClientSettableElementUsage() const
{
	return _sCCClientSettableElementUsage;
}

void UNIX_StoragePoolView::setSCCClientSettableElementUsage(Array<String> &value)
{
	_sCCClientSettableElementUsage = value;
}

Boolean UNIX_StoragePoolView::getSCCSupportedStoragePoolUsage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_C_CSUPPORTED_STORAGE_POOL_USAGE, getSCCSupportedStoragePoolUsage());
	return true;
}

Array<String> UNIX_StoragePoolView::getSCCSupportedStoragePoolUsage() const
{
	return _sCCSupportedStoragePoolUsage;
}

void UNIX_StoragePoolView::setSCCSupportedStoragePoolUsage(Array<String> &value)
{
	_sCCSupportedStoragePoolUsage = value;
}

Boolean UNIX_StoragePoolView::getSCCClientSettablePoolUsage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_C_C_CLIENT_SETTABLE_POOL_USAGE, getSCCClientSettablePoolUsage());
	return true;
}

Array<String> UNIX_StoragePoolView::getSCCClientSettablePoolUsage() const
{
	return _sCCClientSettablePoolUsage;
}

void UNIX_StoragePoolView::setSCCClientSettablePoolUsage(Array<String> &value)
{
	_sCCClientSettablePoolUsage = value;
}


void UNIX_StoragePoolView::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("StoragePoolView");
	_generation = Uint64(0);
	_sPInstanceID = String ("");
	_sPElementName = String ("");
	_sPPoolID = String ("");
	_sPRemainingManagedSpace = Uint64(0);
	_sPTotalManagedSpace = Uint64(0);
	_sPPrimordial = Boolean(false);
	_sPUsage = Uint16(0);
	_sPOtherUsageDescription = String ("");
	_sPClientSettableUsage.clear();
	_sCInstanceID = String ("");
	_sCElementName = String ("");
	_sCElementType = Uint16(0);
	_sCNoSinglePointOfFailure = Boolean(false);
	_sCNoSinglePointOfFailureDefault = Boolean(false);
	_sCPackageRedundancyDefault = Uint16(0);
	_sCPackageRedundancyMin = Uint16(0);
	_sCPackageRedundancyMax = Uint16(0);
	_sCDataRedundancyDefault = Uint16(0);
	_sCDataRedundancyMin = Uint16(0);
	_sCDataRedundancyMax = Uint16(0);
	_sCExtentStripeLengthDefault = Uint16(0);
	_sCParityLayoutDefault = Uint16(0);
	_sCUserDataStripeDepthDefault = Uint64(0);
	_aFSPSpaceConsumed = Uint64(0);
	_sCCInstanceID = String ("");
	_sCCElementName = String ("");
	_sCCSupportedStoragePoolFeatures.clear();
	_sCCSupportedStorageElementTypes.clear();
	_sCCSupportedStorageElementFeatures.clear();
	_sCCSupportedSynchronousActions.clear();
	_sCCSupportedAsynchronousActions.clear();
	_sCCSupportedStorageElementUsage.clear();
	_sCCClientSettableElementUsage.clear();
	_sCCSupportedStoragePoolUsage.clear();
	_sCCClientSettablePoolUsage.clear();

}

Boolean UNIX_StoragePoolView::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "SPInstanceID"))
			{
				String sPInstanceIDValue;
				property.getValue().get(sPInstanceIDValue);
				setSPInstanceID(sPInstanceIDValue);
			}
			else if (String::equal(property.getName().getString(), "SPElementName"))
			{
				String sPElementNameValue;
				property.getValue().get(sPElementNameValue);
				setSPElementName(sPElementNameValue);
			}
			else if (String::equal(property.getName().getString(), "SPPoolID"))
			{
				String sPPoolIDValue;
				property.getValue().get(sPPoolIDValue);
				setSPPoolID(sPPoolIDValue);
			}
			else if (String::equal(property.getName().getString(), "SPRemainingManagedSpace"))
			{
				Uint64 sPRemainingManagedSpaceValue;
				property.getValue().get(sPRemainingManagedSpaceValue);
				setSPRemainingManagedSpace(sPRemainingManagedSpaceValue);
			}
			else if (String::equal(property.getName().getString(), "SPTotalManagedSpace"))
			{
				Uint64 sPTotalManagedSpaceValue;
				property.getValue().get(sPTotalManagedSpaceValue);
				setSPTotalManagedSpace(sPTotalManagedSpaceValue);
			}
			else if (String::equal(property.getName().getString(), "SPPrimordial"))
			{
				Boolean sPPrimordialValue;
				property.getValue().get(sPPrimordialValue);
				setSPPrimordial(sPPrimordialValue);
			}
			else if (String::equal(property.getName().getString(), "SPUsage"))
			{
				Uint16 sPUsageValue;
				property.getValue().get(sPUsageValue);
				setSPUsage(sPUsageValue);
			}
			else if (String::equal(property.getName().getString(), "SPOtherUsageDescription"))
			{
				String sPOtherUsageDescriptionValue;
				property.getValue().get(sPOtherUsageDescriptionValue);
				setSPOtherUsageDescription(sPOtherUsageDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "SPClientSettableUsage"))
			{
				Array<Uint16> sPClientSettableUsageValue;
				property.getValue().get(sPClientSettableUsageValue);
				setSPClientSettableUsage(sPClientSettableUsageValue);
			}
			else if (String::equal(property.getName().getString(), "SCInstanceID"))
			{
				String sCInstanceIDValue;
				property.getValue().get(sCInstanceIDValue);
				setSCInstanceID(sCInstanceIDValue);
			}
			else if (String::equal(property.getName().getString(), "SCElementName"))
			{
				String sCElementNameValue;
				property.getValue().get(sCElementNameValue);
				setSCElementName(sCElementNameValue);
			}
			else if (String::equal(property.getName().getString(), "SCElementType"))
			{
				Uint16 sCElementTypeValue;
				property.getValue().get(sCElementTypeValue);
				setSCElementType(sCElementTypeValue);
			}
			else if (String::equal(property.getName().getString(), "SCNoSinglePointOfFailure"))
			{
				Boolean sCNoSinglePointOfFailureValue;
				property.getValue().get(sCNoSinglePointOfFailureValue);
				setSCNoSinglePointOfFailure(sCNoSinglePointOfFailureValue);
			}
			else if (String::equal(property.getName().getString(), "SCNoSinglePointOfFailureDefault"))
			{
				Boolean sCNoSinglePointOfFailureDefaultValue;
				property.getValue().get(sCNoSinglePointOfFailureDefaultValue);
				setSCNoSinglePointOfFailureDefault(sCNoSinglePointOfFailureDefaultValue);
			}
			else if (String::equal(property.getName().getString(), "SCPackageRedundancyDefault"))
			{
				Uint16 sCPackageRedundancyDefaultValue;
				property.getValue().get(sCPackageRedundancyDefaultValue);
				setSCPackageRedundancyDefault(sCPackageRedundancyDefaultValue);
			}
			else if (String::equal(property.getName().getString(), "SCPackageRedundancyMin"))
			{
				Uint16 sCPackageRedundancyMinValue;
				property.getValue().get(sCPackageRedundancyMinValue);
				setSCPackageRedundancyMin(sCPackageRedundancyMinValue);
			}
			else if (String::equal(property.getName().getString(), "SCPackageRedundancyMax"))
			{
				Uint16 sCPackageRedundancyMaxValue;
				property.getValue().get(sCPackageRedundancyMaxValue);
				setSCPackageRedundancyMax(sCPackageRedundancyMaxValue);
			}
			else if (String::equal(property.getName().getString(), "SCDataRedundancyDefault"))
			{
				Uint16 sCDataRedundancyDefaultValue;
				property.getValue().get(sCDataRedundancyDefaultValue);
				setSCDataRedundancyDefault(sCDataRedundancyDefaultValue);
			}
			else if (String::equal(property.getName().getString(), "SCDataRedundancyMin"))
			{
				Uint16 sCDataRedundancyMinValue;
				property.getValue().get(sCDataRedundancyMinValue);
				setSCDataRedundancyMin(sCDataRedundancyMinValue);
			}
			else if (String::equal(property.getName().getString(), "SCDataRedundancyMax"))
			{
				Uint16 sCDataRedundancyMaxValue;
				property.getValue().get(sCDataRedundancyMaxValue);
				setSCDataRedundancyMax(sCDataRedundancyMaxValue);
			}
			else if (String::equal(property.getName().getString(), "SCExtentStripeLengthDefault"))
			{
				Uint16 sCExtentStripeLengthDefaultValue;
				property.getValue().get(sCExtentStripeLengthDefaultValue);
				setSCExtentStripeLengthDefault(sCExtentStripeLengthDefaultValue);
			}
			else if (String::equal(property.getName().getString(), "SCParityLayoutDefault"))
			{
				Uint16 sCParityLayoutDefaultValue;
				property.getValue().get(sCParityLayoutDefaultValue);
				setSCParityLayoutDefault(sCParityLayoutDefaultValue);
			}
			else if (String::equal(property.getName().getString(), "SCUserDataStripeDepthDefault"))
			{
				Uint64 sCUserDataStripeDepthDefaultValue;
				property.getValue().get(sCUserDataStripeDepthDefaultValue);
				setSCUserDataStripeDepthDefault(sCUserDataStripeDepthDefaultValue);
			}
			else if (String::equal(property.getName().getString(), "AFSPSpaceConsumed"))
			{
				Uint64 aFSPSpaceConsumedValue;
				property.getValue().get(aFSPSpaceConsumedValue);
				setAFSPSpaceConsumed(aFSPSpaceConsumedValue);
			}
			else if (String::equal(property.getName().getString(), "SCCInstanceID"))
			{
				String sCCInstanceIDValue;
				property.getValue().get(sCCInstanceIDValue);
				setSCCInstanceID(sCCInstanceIDValue);
			}
			else if (String::equal(property.getName().getString(), "SCCElementName"))
			{
				String sCCElementNameValue;
				property.getValue().get(sCCElementNameValue);
				setSCCElementName(sCCElementNameValue);
			}
			else if (String::equal(property.getName().getString(), "SCCSupportedStoragePoolFeatures"))
			{
				Array<Uint16> sCCSupportedStoragePoolFeaturesValue;
				property.getValue().get(sCCSupportedStoragePoolFeaturesValue);
				setSCCSupportedStoragePoolFeatures(sCCSupportedStoragePoolFeaturesValue);
			}
			else if (String::equal(property.getName().getString(), "SCCSupportedStorageElementTypes"))
			{
				Array<Uint16> sCCSupportedStorageElementTypesValue;
				property.getValue().get(sCCSupportedStorageElementTypesValue);
				setSCCSupportedStorageElementTypes(sCCSupportedStorageElementTypesValue);
			}
			else if (String::equal(property.getName().getString(), "SCCSupportedStorageElementFeatures"))
			{
				Array<Uint16> sCCSupportedStorageElementFeaturesValue;
				property.getValue().get(sCCSupportedStorageElementFeaturesValue);
				setSCCSupportedStorageElementFeatures(sCCSupportedStorageElementFeaturesValue);
			}
			else if (String::equal(property.getName().getString(), "SCCSupportedSynchronousActions"))
			{
				Array<Uint16> sCCSupportedSynchronousActionsValue;
				property.getValue().get(sCCSupportedSynchronousActionsValue);
				setSCCSupportedSynchronousActions(sCCSupportedSynchronousActionsValue);
			}
			else if (String::equal(property.getName().getString(), "SCCSupportedAsynchronousActions"))
			{
				Array<Uint16> sCCSupportedAsynchronousActionsValue;
				property.getValue().get(sCCSupportedAsynchronousActionsValue);
				setSCCSupportedAsynchronousActions(sCCSupportedAsynchronousActionsValue);
			}
			else if (String::equal(property.getName().getString(), "SCCSupportedStorageElementUsage"))
			{
				Array<Uint16> sCCSupportedStorageElementUsageValue;
				property.getValue().get(sCCSupportedStorageElementUsageValue);
				setSCCSupportedStorageElementUsage(sCCSupportedStorageElementUsageValue);
			}
			else if (String::equal(property.getName().getString(), "SCCClientSettableElementUsage"))
			{
				Array<String> sCCClientSettableElementUsageValue;
				property.getValue().get(sCCClientSettableElementUsageValue);
				setSCCClientSettableElementUsage(sCCClientSettableElementUsageValue);
			}
			else if (String::equal(property.getName().getString(), "SCCSupportedStoragePoolUsage"))
			{
				Array<String> sCCSupportedStoragePoolUsageValue;
				property.getValue().get(sCCSupportedStoragePoolUsageValue);
				setSCCSupportedStoragePoolUsage(sCCSupportedStoragePoolUsageValue);
			}
			else if (String::equal(property.getName().getString(), "SCCClientSettablePoolUsage"))
			{
				Array<String> sCCClientSettablePoolUsageValue;
				property.getValue().get(sCCClientSettablePoolUsageValue);
				setSCCClientSettablePoolUsage(sCCClientSettablePoolUsageValue);
			}
	}
	return true;
}


Boolean UNIX_StoragePoolView::initialize()
{
	return false;
}

Boolean UNIX_StoragePoolView::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("StoragePoolView");
	_generation = Uint64(0);
	_sPInstanceID = String ("");
	_sPElementName = String ("");
	_sPPoolID = String ("");
	_sPRemainingManagedSpace = Uint64(0);
	_sPTotalManagedSpace = Uint64(0);
	_sPPrimordial = Boolean(false);
	_sPUsage = Uint16(0);
	_sPOtherUsageDescription = String ("");
	_sPClientSettableUsage.clear();
	_sCInstanceID = String ("");
	_sCElementName = String ("");
	_sCElementType = Uint16(0);
	_sCNoSinglePointOfFailure = Boolean(false);
	_sCNoSinglePointOfFailureDefault = Boolean(false);
	_sCPackageRedundancyDefault = Uint16(0);
	_sCPackageRedundancyMin = Uint16(0);
	_sCPackageRedundancyMax = Uint16(0);
	_sCDataRedundancyDefault = Uint16(0);
	_sCDataRedundancyMin = Uint16(0);
	_sCDataRedundancyMax = Uint16(0);
	_sCExtentStripeLengthDefault = Uint16(0);
	_sCParityLayoutDefault = Uint16(0);
	_sCUserDataStripeDepthDefault = Uint64(0);
	_aFSPSpaceConsumed = Uint64(0);
	_sCCInstanceID = String ("");
	_sCCElementName = String ("");
	_sCCSupportedStoragePoolFeatures.clear();
	_sCCSupportedStorageElementTypes.clear();
	_sCCSupportedStorageElementFeatures.clear();
	_sCCSupportedSynchronousActions.clear();
	_sCCSupportedAsynchronousActions.clear();
	_sCCSupportedStorageElementUsage.clear();
	_sCCClientSettableElementUsage.clear();
	_sCCSupportedStoragePoolUsage.clear();
	_sCCClientSettablePoolUsage.clear();
	
	return false;
}

Boolean UNIX_StoragePoolView::finalize()
{
	return false;
}


Boolean UNIX_StoragePoolView::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String sPInstanceIDKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SPINSTANCE_ID)) sPInstanceIDKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getSPInstanceID(), sPInstanceIDKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_StoragePoolView::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StoragePoolView::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StoragePoolView::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StoragePoolView::validateInstance()
{
	return true;
}

