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


UNIX_VolumeView::UNIX_VolumeView(void)
{
}

UNIX_VolumeView::~UNIX_VolumeView(void)
{
}

Boolean UNIX_VolumeView::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_VolumeView::getInstanceID() const
{
	return _instanceID;
}

void UNIX_VolumeView::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_VolumeView::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_VolumeView::getCaption() const
{
	return _caption;
}

void UNIX_VolumeView::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_VolumeView::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_VolumeView::getDescription() const
{
	return _description;
}

void UNIX_VolumeView::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_VolumeView::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_VolumeView::getElementName() const
{
	return _elementName;
}

void UNIX_VolumeView::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_VolumeView::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_VolumeView::getGeneration() const
{
	return _generation;
}

void UNIX_VolumeView::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_VolumeView::getSVSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_SYSTEM_CREATION_CLASS_NAME, getSVSystemCreationClassName());
	return true;
}

String UNIX_VolumeView::getSVSystemCreationClassName() const
{
	return _sVSystemCreationClassName;
}

void UNIX_VolumeView::setSVSystemCreationClassName(String &value)
{
	_sVSystemCreationClassName = value;
}

Boolean UNIX_VolumeView::getSVSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_SYSTEM_NAME, getSVSystemName());
	return true;
}

String UNIX_VolumeView::getSVSystemName() const
{
	return _sVSystemName;
}

void UNIX_VolumeView::setSVSystemName(String &value)
{
	_sVSystemName = value;
}

Boolean UNIX_VolumeView::getSVCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_CREATION_CLASS_NAME, getSVCreationClassName());
	return true;
}

String UNIX_VolumeView::getSVCreationClassName() const
{
	return _sVCreationClassName;
}

void UNIX_VolumeView::setSVCreationClassName(String &value)
{
	_sVCreationClassName = value;
}

Boolean UNIX_VolumeView::getSVDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_DEVICE_ID, getSVDeviceID());
	return true;
}

String UNIX_VolumeView::getSVDeviceID() const
{
	return _sVDeviceID;
}

void UNIX_VolumeView::setSVDeviceID(String &value)
{
	_sVDeviceID = value;
}

Boolean UNIX_VolumeView::getSVName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_NAME, getSVName());
	return true;
}

String UNIX_VolumeView::getSVName() const
{
	return _sVName;
}

void UNIX_VolumeView::setSVName(String &value)
{
	_sVName = value;
}

Boolean UNIX_VolumeView::getSVNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_NAME_FORMAT, getSVNameFormat());
	return true;
}

Uint16 UNIX_VolumeView::getSVNameFormat() const
{
	return _sVNameFormat;
}

void UNIX_VolumeView::setSVNameFormat(Uint16 &value)
{
	_sVNameFormat = value;
}

Boolean UNIX_VolumeView::getSVNameNamespace(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_NAME_NAMESPACE, getSVNameNamespace());
	return true;
}

Uint16 UNIX_VolumeView::getSVNameNamespace() const
{
	return _sVNameNamespace;
}

void UNIX_VolumeView::setSVNameNamespace(Uint16 &value)
{
	_sVNameNamespace = value;
}

Boolean UNIX_VolumeView::getSVExtentStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_EXTENT_STATUS, getSVExtentStatus());
	return true;
}

Array<Uint16> UNIX_VolumeView::getSVExtentStatus() const
{
	return _sVExtentStatus;
}

void UNIX_VolumeView::setSVExtentStatus(Array<Uint16> &value)
{
	_sVExtentStatus = value;
}

Boolean UNIX_VolumeView::getSVOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_OPERATIONAL_STATUS, getSVOperationalStatus());
	return true;
}

Array<Uint16> UNIX_VolumeView::getSVOperationalStatus() const
{
	return _sVOperationalStatus;
}

void UNIX_VolumeView::setSVOperationalStatus(Array<Uint16> &value)
{
	_sVOperationalStatus = value;
}

Boolean UNIX_VolumeView::getSVBlockSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_BLOCK_SIZE, getSVBlockSize());
	return true;
}

Uint64 UNIX_VolumeView::getSVBlockSize() const
{
	return _sVBlockSize;
}

void UNIX_VolumeView::setSVBlockSize(Uint64 &value)
{
	_sVBlockSize = value;
}

Boolean UNIX_VolumeView::getSVNumberOfBlocks(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_NUMBER_OF_BLOCKS, getSVNumberOfBlocks());
	return true;
}

Uint64 UNIX_VolumeView::getSVNumberOfBlocks() const
{
	return _sVNumberOfBlocks;
}

void UNIX_VolumeView::setSVNumberOfBlocks(Uint64 &value)
{
	_sVNumberOfBlocks = value;
}

Boolean UNIX_VolumeView::getSVConsumableBlocks(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_CONSUMABLE_BLOCKS, getSVConsumableBlocks());
	return true;
}

Uint64 UNIX_VolumeView::getSVConsumableBlocks() const
{
	return _sVConsumableBlocks;
}

void UNIX_VolumeView::setSVConsumableBlocks(Uint64 &value)
{
	_sVConsumableBlocks = value;
}

Boolean UNIX_VolumeView::getSVIsBasedOnUnderlyingRedundancy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_IS_BASED_ON_UNDERLYING_REDUNDANCY, getSVIsBasedOnUnderlyingRedundancy());
	return true;
}

Boolean UNIX_VolumeView::getSVIsBasedOnUnderlyingRedundancy() const
{
	return _sVIsBasedOnUnderlyingRedundancy;
}

void UNIX_VolumeView::setSVIsBasedOnUnderlyingRedundancy(Boolean &value)
{
	_sVIsBasedOnUnderlyingRedundancy = value;
}

Boolean UNIX_VolumeView::getSVNoSinglePointOfFailure(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_NO_SINGLE_POINT_OF_FAILURE, getSVNoSinglePointOfFailure());
	return true;
}

Boolean UNIX_VolumeView::getSVNoSinglePointOfFailure() const
{
	return _sVNoSinglePointOfFailure;
}

void UNIX_VolumeView::setSVNoSinglePointOfFailure(Boolean &value)
{
	_sVNoSinglePointOfFailure = value;
}

Boolean UNIX_VolumeView::getSVDataRedundancy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_DATA_REDUNDANCY, getSVDataRedundancy());
	return true;
}

Uint16 UNIX_VolumeView::getSVDataRedundancy() const
{
	return _sVDataRedundancy;
}

void UNIX_VolumeView::setSVDataRedundancy(Uint16 &value)
{
	_sVDataRedundancy = value;
}

Boolean UNIX_VolumeView::getSVPackageRedundancy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_PACKAGE_REDUNDANCY, getSVPackageRedundancy());
	return true;
}

Uint16 UNIX_VolumeView::getSVPackageRedundancy() const
{
	return _sVPackageRedundancy;
}

void UNIX_VolumeView::setSVPackageRedundancy(Uint16 &value)
{
	_sVPackageRedundancy = value;
}

Boolean UNIX_VolumeView::getSVDeltaReservation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_DELTA_RESERVATION, getSVDeltaReservation());
	return true;
}

Uint8 UNIX_VolumeView::getSVDeltaReservation() const
{
	return _sVDeltaReservation;
}

void UNIX_VolumeView::setSVDeltaReservation(Uint8 &value)
{
	_sVDeltaReservation = value;
}

Boolean UNIX_VolumeView::getSVUsage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_USAGE, getSVUsage());
	return true;
}

Uint16 UNIX_VolumeView::getSVUsage() const
{
	return _sVUsage;
}

void UNIX_VolumeView::setSVUsage(Uint16 &value)
{
	_sVUsage = value;
}

Boolean UNIX_VolumeView::getSVOtherUsageDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_OTHER_USAGE_DESCRIPTION, getSVOtherUsageDescription());
	return true;
}

String UNIX_VolumeView::getSVOtherUsageDescription() const
{
	return _sVOtherUsageDescription;
}

void UNIX_VolumeView::setSVOtherUsageDescription(String &value)
{
	_sVOtherUsageDescription = value;
}

Boolean UNIX_VolumeView::getSVClientSettableUsage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_CLIENT_SETTABLE_USAGE, getSVClientSettableUsage());
	return true;
}

Array<Uint16> UNIX_VolumeView::getSVClientSettableUsage() const
{
	return _sVClientSettableUsage;
}

void UNIX_VolumeView::setSVClientSettableUsage(Array<Uint16> &value)
{
	_sVClientSettableUsage = value;
}

Boolean UNIX_VolumeView::getSSInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_S_INSTANCE_ID, getSSInstanceID());
	return true;
}

String UNIX_VolumeView::getSSInstanceID() const
{
	return _sSInstanceID;
}

void UNIX_VolumeView::setSSInstanceID(String &value)
{
	_sSInstanceID = value;
}

Boolean UNIX_VolumeView::getSSElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_S_ELEMENT_NAME, getSSElementName());
	return true;
}

String UNIX_VolumeView::getSSElementName() const
{
	return _sSElementName;
}

void UNIX_VolumeView::setSSElementName(String &value)
{
	_sSElementName = value;
}

Boolean UNIX_VolumeView::getSSNoSinglePointOfFailure(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_S_NO_SINGLE_POINT_OF_FAILURE, getSSNoSinglePointOfFailure());
	return true;
}

Boolean UNIX_VolumeView::getSSNoSinglePointOfFailure() const
{
	return _sSNoSinglePointOfFailure;
}

void UNIX_VolumeView::setSSNoSinglePointOfFailure(Boolean &value)
{
	_sSNoSinglePointOfFailure = value;
}

Boolean UNIX_VolumeView::getSSDataRedundancyMin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_S_DATA_REDUNDANCY_MIN, getSSDataRedundancyMin());
	return true;
}

Uint16 UNIX_VolumeView::getSSDataRedundancyMin() const
{
	return _sSDataRedundancyMin;
}

void UNIX_VolumeView::setSSDataRedundancyMin(Uint16 &value)
{
	_sSDataRedundancyMin = value;
}

Boolean UNIX_VolumeView::getSSDataRedundancyMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_S_DATA_REDUNDANCY_MAX, getSSDataRedundancyMax());
	return true;
}

Uint16 UNIX_VolumeView::getSSDataRedundancyMax() const
{
	return _sSDataRedundancyMax;
}

void UNIX_VolumeView::setSSDataRedundancyMax(Uint16 &value)
{
	_sSDataRedundancyMax = value;
}

Boolean UNIX_VolumeView::getSSDataRedundancyGoal(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_S_DATA_REDUNDANCY_GOAL, getSSDataRedundancyGoal());
	return true;
}

Uint16 UNIX_VolumeView::getSSDataRedundancyGoal() const
{
	return _sSDataRedundancyGoal;
}

void UNIX_VolumeView::setSSDataRedundancyGoal(Uint16 &value)
{
	_sSDataRedundancyGoal = value;
}

Boolean UNIX_VolumeView::getSSPackageRedundancyMin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_S_PACKAGE_REDUNDANCY_MIN, getSSPackageRedundancyMin());
	return true;
}

Uint16 UNIX_VolumeView::getSSPackageRedundancyMin() const
{
	return _sSPackageRedundancyMin;
}

void UNIX_VolumeView::setSSPackageRedundancyMin(Uint16 &value)
{
	_sSPackageRedundancyMin = value;
}

Boolean UNIX_VolumeView::getSSPackageRedundancyMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_S_PACKAGE_REDUNDANCY_MAX, getSSPackageRedundancyMax());
	return true;
}

Uint16 UNIX_VolumeView::getSSPackageRedundancyMax() const
{
	return _sSPackageRedundancyMax;
}

void UNIX_VolumeView::setSSPackageRedundancyMax(Uint16 &value)
{
	_sSPackageRedundancyMax = value;
}

Boolean UNIX_VolumeView::getSSPackageRedundancyGoal(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_S_PACKAGE_REDUNDANCY_GOAL, getSSPackageRedundancyGoal());
	return true;
}

Uint16 UNIX_VolumeView::getSSPackageRedundancyGoal() const
{
	return _sSPackageRedundancyGoal;
}

void UNIX_VolumeView::setSSPackageRedundancyGoal(Uint16 &value)
{
	_sSPackageRedundancyGoal = value;
}

Boolean UNIX_VolumeView::getSSChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_S_CHANGEABLE_TYPE, getSSChangeableType());
	return true;
}

Uint16 UNIX_VolumeView::getSSChangeableType() const
{
	return _sSChangeableType;
}

void UNIX_VolumeView::setSSChangeableType(Uint16 &value)
{
	_sSChangeableType = value;
}

Boolean UNIX_VolumeView::getAFSPSpaceConsumed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AFS_P_SPACE_CONSUMED, getAFSPSpaceConsumed());
	return true;
}

Uint64 UNIX_VolumeView::getAFSPSpaceConsumed() const
{
	return _aFSPSpaceConsumed;
}

void UNIX_VolumeView::setAFSPSpaceConsumed(Uint64 &value)
{
	_aFSPSpaceConsumed = value;
}

Boolean UNIX_VolumeView::getSPInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SPINSTANCE_ID, getSPInstanceID());
	return true;
}

String UNIX_VolumeView::getSPInstanceID() const
{
	return _sPInstanceID;
}

void UNIX_VolumeView::setSPInstanceID(String &value)
{
	_sPInstanceID = value;
}

Boolean UNIX_VolumeView::getSPPoolID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_P_POOL_ID, getSPPoolID());
	return true;
}

String UNIX_VolumeView::getSPPoolID() const
{
	return _sPPoolID;
}

void UNIX_VolumeView::setSPPoolID(String &value)
{
	_sPPoolID = value;
}

Boolean UNIX_VolumeView::getSVOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_OTHER_IDENTIFYING_INFO, getSVOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_VolumeView::getSVOtherIdentifyingInfo() const
{
	return _sVOtherIdentifyingInfo;
}

void UNIX_VolumeView::setSVOtherIdentifyingInfo(Array<String> &value)
{
	_sVOtherIdentifyingInfo = value;
}

Boolean UNIX_VolumeView::getSVIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_IDENTIFYING_DESCRIPTIONS, getSVIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_VolumeView::getSVIdentifyingDescriptions() const
{
	return _sVIdentifyingDescriptions;
}

void UNIX_VolumeView::setSVIdentifyingDescriptions(Array<String> &value)
{
	_sVIdentifyingDescriptions = value;
}

Boolean UNIX_VolumeView::getSVElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_ELEMENT_NAME, getSVElementName());
	return true;
}

String UNIX_VolumeView::getSVElementName() const
{
	return _sVElementName;
}

void UNIX_VolumeView::setSVElementName(String &value)
{
	_sVElementName = value;
}

Boolean UNIX_VolumeView::getSVPrimordial(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_PRIMORDIAL, getSVPrimordial());
	return true;
}

Boolean UNIX_VolumeView::getSVPrimordial() const
{
	return _sVPrimordial;
}

void UNIX_VolumeView::setSVPrimordial(Boolean &value)
{
	_sVPrimordial = value;
}

Boolean UNIX_VolumeView::getSVExtentDiscriminator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_EXTENT_DISCRIMINATOR, getSVExtentDiscriminator());
	return true;
}

Array<String> UNIX_VolumeView::getSVExtentDiscriminator() const
{
	return _sVExtentDiscriminator;
}

void UNIX_VolumeView::setSVExtentDiscriminator(Array<String> &value)
{
	_sVExtentDiscriminator = value;
}

Boolean UNIX_VolumeView::getSSExtentStripeLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_S_EXTENT_STRIPE_LENGTH, getSSExtentStripeLength());
	return true;
}

Uint16 UNIX_VolumeView::getSSExtentStripeLength() const
{
	return _sSExtentStripeLength;
}

void UNIX_VolumeView::setSSExtentStripeLength(Uint16 &value)
{
	_sSExtentStripeLength = value;
}

Boolean UNIX_VolumeView::getSSExtentStripeLengthMin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_S_EXTENT_STRIPE_LENGTH_MIN, getSSExtentStripeLengthMin());
	return true;
}

Uint16 UNIX_VolumeView::getSSExtentStripeLengthMin() const
{
	return _sSExtentStripeLengthMin;
}

void UNIX_VolumeView::setSSExtentStripeLengthMin(Uint16 &value)
{
	_sSExtentStripeLengthMin = value;
}

Boolean UNIX_VolumeView::getSSExtentStripeLengthMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_S_EXTENT_STRIPE_LENGTH_MAX, getSSExtentStripeLengthMax());
	return true;
}

Uint16 UNIX_VolumeView::getSSExtentStripeLengthMax() const
{
	return _sSExtentStripeLengthMax;
}

void UNIX_VolumeView::setSSExtentStripeLengthMax(Uint16 &value)
{
	_sSExtentStripeLengthMax = value;
}

Boolean UNIX_VolumeView::getSSParityLayout(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_S_PARITY_LAYOUT, getSSParityLayout());
	return true;
}

Uint16 UNIX_VolumeView::getSSParityLayout() const
{
	return _sSParityLayout;
}

void UNIX_VolumeView::setSSParityLayout(Uint16 &value)
{
	_sSParityLayout = value;
}

Boolean UNIX_VolumeView::getSSUserDataStripeDepth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_S_USER_DATA_STRIPE_DEPTH, getSSUserDataStripeDepth());
	return true;
}

Uint64 UNIX_VolumeView::getSSUserDataStripeDepth() const
{
	return _sSUserDataStripeDepth;
}

void UNIX_VolumeView::setSSUserDataStripeDepth(Uint64 &value)
{
	_sSUserDataStripeDepth = value;
}

Boolean UNIX_VolumeView::getSSUserDataStripeDepthMin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_S_USER_DATA_STRIPE_DEPTH_MIN, getSSUserDataStripeDepthMin());
	return true;
}

Uint64 UNIX_VolumeView::getSSUserDataStripeDepthMin() const
{
	return _sSUserDataStripeDepthMin;
}

void UNIX_VolumeView::setSSUserDataStripeDepthMin(Uint64 &value)
{
	_sSUserDataStripeDepthMin = value;
}

Boolean UNIX_VolumeView::getSSUserDataStripeDepthMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_S_USER_DATA_STRIPE_DEPTH_MAX, getSSUserDataStripeDepthMax());
	return true;
}

Uint64 UNIX_VolumeView::getSSUserDataStripeDepthMax() const
{
	return _sSUserDataStripeDepthMax;
}

void UNIX_VolumeView::setSSUserDataStripeDepthMax(Uint64 &value)
{
	_sSUserDataStripeDepthMax = value;
}

Boolean UNIX_VolumeView::getSSStoragePoolInitialUsage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_S_STORAGE_POOL_INITIAL_USAGE, getSSStoragePoolInitialUsage());
	return true;
}

Uint16 UNIX_VolumeView::getSSStoragePoolInitialUsage() const
{
	return _sSStoragePoolInitialUsage;
}

void UNIX_VolumeView::setSSStoragePoolInitialUsage(Uint16 &value)
{
	_sSStoragePoolInitialUsage = value;
}

Boolean UNIX_VolumeView::getSSStorageExtentInitialUsage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_S_STORAGE_EXTENT_INITIAL_USAGE, getSSStorageExtentInitialUsage());
	return true;
}

Uint16 UNIX_VolumeView::getSSStorageExtentInitialUsage() const
{
	return _sSStorageExtentInitialUsage;
}

void UNIX_VolumeView::setSSStorageExtentInitialUsage(Uint16 &value)
{
	_sSStorageExtentInitialUsage = value;
}

Boolean UNIX_VolumeView::getSVIsComposite(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_IS_COMPOSITE, getSVIsComposite());
	return true;
}

Boolean UNIX_VolumeView::getSVIsComposite() const
{
	return _sVIsComposite;
}

void UNIX_VolumeView::setSVIsComposite(Boolean &value)
{
	_sVIsComposite = value;
}


void UNIX_VolumeView::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("VolumeView");
	_generation = Uint64(0);
	_sVSystemCreationClassName = String ("");
	_sVSystemName = String ("");
	_sVCreationClassName = String ("");
	_sVDeviceID = String ("");
	_sVName = String ("");
	_sVNameFormat = Uint16(0);
	_sVNameNamespace = Uint16(0);
	_sVExtentStatus.clear();
	_sVOperationalStatus.clear();
	_sVBlockSize = Uint64(0);
	_sVNumberOfBlocks = Uint64(0);
	_sVConsumableBlocks = Uint64(0);
	_sVIsBasedOnUnderlyingRedundancy = Boolean(false);
	_sVNoSinglePointOfFailure = Boolean(false);
	_sVDataRedundancy = Uint16(0);
	_sVPackageRedundancy = Uint16(0);
	_sVDeltaReservation = Uint8(0);
	_sVUsage = Uint16(0);
	_sVOtherUsageDescription = String ("");
	_sVClientSettableUsage.clear();
	_sSInstanceID = String ("");
	_sSElementName = String ("");
	_sSNoSinglePointOfFailure = Boolean(false);
	_sSDataRedundancyMin = Uint16(0);
	_sSDataRedundancyMax = Uint16(0);
	_sSDataRedundancyGoal = Uint16(0);
	_sSPackageRedundancyMin = Uint16(0);
	_sSPackageRedundancyMax = Uint16(0);
	_sSPackageRedundancyGoal = Uint16(0);
	_sSChangeableType = Uint16(0);
	_aFSPSpaceConsumed = Uint64(0);
	_sPInstanceID = String ("");
	_sPPoolID = String ("");
	_sVOtherIdentifyingInfo.clear();
	_sVIdentifyingDescriptions.clear();
	_sVElementName = String ("");
	_sVPrimordial = Boolean(false);
	_sVExtentDiscriminator.clear();
	_sSExtentStripeLength = Uint16(0);
	_sSExtentStripeLengthMin = Uint16(0);
	_sSExtentStripeLengthMax = Uint16(0);
	_sSParityLayout = Uint16(0);
	_sSUserDataStripeDepth = Uint64(0);
	_sSUserDataStripeDepthMin = Uint64(0);
	_sSUserDataStripeDepthMax = Uint64(0);
	_sSStoragePoolInitialUsage = Uint16(0);
	_sSStorageExtentInitialUsage = Uint16(0);
	_sVIsComposite = Boolean(false);

}

Boolean UNIX_VolumeView::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "SVSystemCreationClassName"))
			{
				String sVSystemCreationClassNameValue;
				property.getValue().get(sVSystemCreationClassNameValue);
				setSVSystemCreationClassName(sVSystemCreationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "SVSystemName"))
			{
				String sVSystemNameValue;
				property.getValue().get(sVSystemNameValue);
				setSVSystemName(sVSystemNameValue);
			}
			else if (String::equal(property.getName().getString(), "SVCreationClassName"))
			{
				String sVCreationClassNameValue;
				property.getValue().get(sVCreationClassNameValue);
				setSVCreationClassName(sVCreationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "SVDeviceID"))
			{
				String sVDeviceIDValue;
				property.getValue().get(sVDeviceIDValue);
				setSVDeviceID(sVDeviceIDValue);
			}
			else if (String::equal(property.getName().getString(), "SVName"))
			{
				String sVNameValue;
				property.getValue().get(sVNameValue);
				setSVName(sVNameValue);
			}
			else if (String::equal(property.getName().getString(), "SVNameFormat"))
			{
				Uint16 sVNameFormatValue;
				property.getValue().get(sVNameFormatValue);
				setSVNameFormat(sVNameFormatValue);
			}
			else if (String::equal(property.getName().getString(), "SVNameNamespace"))
			{
				Uint16 sVNameNamespaceValue;
				property.getValue().get(sVNameNamespaceValue);
				setSVNameNamespace(sVNameNamespaceValue);
			}
			else if (String::equal(property.getName().getString(), "SVExtentStatus"))
			{
				Array<Uint16> sVExtentStatusValue;
				property.getValue().get(sVExtentStatusValue);
				setSVExtentStatus(sVExtentStatusValue);
			}
			else if (String::equal(property.getName().getString(), "SVOperationalStatus"))
			{
				Array<Uint16> sVOperationalStatusValue;
				property.getValue().get(sVOperationalStatusValue);
				setSVOperationalStatus(sVOperationalStatusValue);
			}
			else if (String::equal(property.getName().getString(), "SVBlockSize"))
			{
				Uint64 sVBlockSizeValue;
				property.getValue().get(sVBlockSizeValue);
				setSVBlockSize(sVBlockSizeValue);
			}
			else if (String::equal(property.getName().getString(), "SVNumberOfBlocks"))
			{
				Uint64 sVNumberOfBlocksValue;
				property.getValue().get(sVNumberOfBlocksValue);
				setSVNumberOfBlocks(sVNumberOfBlocksValue);
			}
			else if (String::equal(property.getName().getString(), "SVConsumableBlocks"))
			{
				Uint64 sVConsumableBlocksValue;
				property.getValue().get(sVConsumableBlocksValue);
				setSVConsumableBlocks(sVConsumableBlocksValue);
			}
			else if (String::equal(property.getName().getString(), "SVIsBasedOnUnderlyingRedundancy"))
			{
				Boolean sVIsBasedOnUnderlyingRedundancyValue;
				property.getValue().get(sVIsBasedOnUnderlyingRedundancyValue);
				setSVIsBasedOnUnderlyingRedundancy(sVIsBasedOnUnderlyingRedundancyValue);
			}
			else if (String::equal(property.getName().getString(), "SVNoSinglePointOfFailure"))
			{
				Boolean sVNoSinglePointOfFailureValue;
				property.getValue().get(sVNoSinglePointOfFailureValue);
				setSVNoSinglePointOfFailure(sVNoSinglePointOfFailureValue);
			}
			else if (String::equal(property.getName().getString(), "SVDataRedundancy"))
			{
				Uint16 sVDataRedundancyValue;
				property.getValue().get(sVDataRedundancyValue);
				setSVDataRedundancy(sVDataRedundancyValue);
			}
			else if (String::equal(property.getName().getString(), "SVPackageRedundancy"))
			{
				Uint16 sVPackageRedundancyValue;
				property.getValue().get(sVPackageRedundancyValue);
				setSVPackageRedundancy(sVPackageRedundancyValue);
			}
			else if (String::equal(property.getName().getString(), "SVDeltaReservation"))
			{
				Uint8 sVDeltaReservationValue;
				property.getValue().get(sVDeltaReservationValue);
				setSVDeltaReservation(sVDeltaReservationValue);
			}
			else if (String::equal(property.getName().getString(), "SVUsage"))
			{
				Uint16 sVUsageValue;
				property.getValue().get(sVUsageValue);
				setSVUsage(sVUsageValue);
			}
			else if (String::equal(property.getName().getString(), "SVOtherUsageDescription"))
			{
				String sVOtherUsageDescriptionValue;
				property.getValue().get(sVOtherUsageDescriptionValue);
				setSVOtherUsageDescription(sVOtherUsageDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "SVClientSettableUsage"))
			{
				Array<Uint16> sVClientSettableUsageValue;
				property.getValue().get(sVClientSettableUsageValue);
				setSVClientSettableUsage(sVClientSettableUsageValue);
			}
			else if (String::equal(property.getName().getString(), "SSInstanceID"))
			{
				String sSInstanceIDValue;
				property.getValue().get(sSInstanceIDValue);
				setSSInstanceID(sSInstanceIDValue);
			}
			else if (String::equal(property.getName().getString(), "SSElementName"))
			{
				String sSElementNameValue;
				property.getValue().get(sSElementNameValue);
				setSSElementName(sSElementNameValue);
			}
			else if (String::equal(property.getName().getString(), "SSNoSinglePointOfFailure"))
			{
				Boolean sSNoSinglePointOfFailureValue;
				property.getValue().get(sSNoSinglePointOfFailureValue);
				setSSNoSinglePointOfFailure(sSNoSinglePointOfFailureValue);
			}
			else if (String::equal(property.getName().getString(), "SSDataRedundancyMin"))
			{
				Uint16 sSDataRedundancyMinValue;
				property.getValue().get(sSDataRedundancyMinValue);
				setSSDataRedundancyMin(sSDataRedundancyMinValue);
			}
			else if (String::equal(property.getName().getString(), "SSDataRedundancyMax"))
			{
				Uint16 sSDataRedundancyMaxValue;
				property.getValue().get(sSDataRedundancyMaxValue);
				setSSDataRedundancyMax(sSDataRedundancyMaxValue);
			}
			else if (String::equal(property.getName().getString(), "SSDataRedundancyGoal"))
			{
				Uint16 sSDataRedundancyGoalValue;
				property.getValue().get(sSDataRedundancyGoalValue);
				setSSDataRedundancyGoal(sSDataRedundancyGoalValue);
			}
			else if (String::equal(property.getName().getString(), "SSPackageRedundancyMin"))
			{
				Uint16 sSPackageRedundancyMinValue;
				property.getValue().get(sSPackageRedundancyMinValue);
				setSSPackageRedundancyMin(sSPackageRedundancyMinValue);
			}
			else if (String::equal(property.getName().getString(), "SSPackageRedundancyMax"))
			{
				Uint16 sSPackageRedundancyMaxValue;
				property.getValue().get(sSPackageRedundancyMaxValue);
				setSSPackageRedundancyMax(sSPackageRedundancyMaxValue);
			}
			else if (String::equal(property.getName().getString(), "SSPackageRedundancyGoal"))
			{
				Uint16 sSPackageRedundancyGoalValue;
				property.getValue().get(sSPackageRedundancyGoalValue);
				setSSPackageRedundancyGoal(sSPackageRedundancyGoalValue);
			}
			else if (String::equal(property.getName().getString(), "SSChangeableType"))
			{
				Uint16 sSChangeableTypeValue;
				property.getValue().get(sSChangeableTypeValue);
				setSSChangeableType(sSChangeableTypeValue);
			}
			else if (String::equal(property.getName().getString(), "AFSPSpaceConsumed"))
			{
				Uint64 aFSPSpaceConsumedValue;
				property.getValue().get(aFSPSpaceConsumedValue);
				setAFSPSpaceConsumed(aFSPSpaceConsumedValue);
			}
			else if (String::equal(property.getName().getString(), "SPInstanceID"))
			{
				String sPInstanceIDValue;
				property.getValue().get(sPInstanceIDValue);
				setSPInstanceID(sPInstanceIDValue);
			}
			else if (String::equal(property.getName().getString(), "SPPoolID"))
			{
				String sPPoolIDValue;
				property.getValue().get(sPPoolIDValue);
				setSPPoolID(sPPoolIDValue);
			}
			else if (String::equal(property.getName().getString(), "SVOtherIdentifyingInfo"))
			{
				Array<String> sVOtherIdentifyingInfoValue;
				property.getValue().get(sVOtherIdentifyingInfoValue);
				setSVOtherIdentifyingInfo(sVOtherIdentifyingInfoValue);
			}
			else if (String::equal(property.getName().getString(), "SVIdentifyingDescriptions"))
			{
				Array<String> sVIdentifyingDescriptionsValue;
				property.getValue().get(sVIdentifyingDescriptionsValue);
				setSVIdentifyingDescriptions(sVIdentifyingDescriptionsValue);
			}
			else if (String::equal(property.getName().getString(), "SVElementName"))
			{
				String sVElementNameValue;
				property.getValue().get(sVElementNameValue);
				setSVElementName(sVElementNameValue);
			}
			else if (String::equal(property.getName().getString(), "SVPrimordial"))
			{
				Boolean sVPrimordialValue;
				property.getValue().get(sVPrimordialValue);
				setSVPrimordial(sVPrimordialValue);
			}
			else if (String::equal(property.getName().getString(), "SVExtentDiscriminator"))
			{
				Array<String> sVExtentDiscriminatorValue;
				property.getValue().get(sVExtentDiscriminatorValue);
				setSVExtentDiscriminator(sVExtentDiscriminatorValue);
			}
			else if (String::equal(property.getName().getString(), "SSExtentStripeLength"))
			{
				Uint16 sSExtentStripeLengthValue;
				property.getValue().get(sSExtentStripeLengthValue);
				setSSExtentStripeLength(sSExtentStripeLengthValue);
			}
			else if (String::equal(property.getName().getString(), "SSExtentStripeLengthMin"))
			{
				Uint16 sSExtentStripeLengthMinValue;
				property.getValue().get(sSExtentStripeLengthMinValue);
				setSSExtentStripeLengthMin(sSExtentStripeLengthMinValue);
			}
			else if (String::equal(property.getName().getString(), "SSExtentStripeLengthMax"))
			{
				Uint16 sSExtentStripeLengthMaxValue;
				property.getValue().get(sSExtentStripeLengthMaxValue);
				setSSExtentStripeLengthMax(sSExtentStripeLengthMaxValue);
			}
			else if (String::equal(property.getName().getString(), "SSParityLayout"))
			{
				Uint16 sSParityLayoutValue;
				property.getValue().get(sSParityLayoutValue);
				setSSParityLayout(sSParityLayoutValue);
			}
			else if (String::equal(property.getName().getString(), "SSUserDataStripeDepth"))
			{
				Uint64 sSUserDataStripeDepthValue;
				property.getValue().get(sSUserDataStripeDepthValue);
				setSSUserDataStripeDepth(sSUserDataStripeDepthValue);
			}
			else if (String::equal(property.getName().getString(), "SSUserDataStripeDepthMin"))
			{
				Uint64 sSUserDataStripeDepthMinValue;
				property.getValue().get(sSUserDataStripeDepthMinValue);
				setSSUserDataStripeDepthMin(sSUserDataStripeDepthMinValue);
			}
			else if (String::equal(property.getName().getString(), "SSUserDataStripeDepthMax"))
			{
				Uint64 sSUserDataStripeDepthMaxValue;
				property.getValue().get(sSUserDataStripeDepthMaxValue);
				setSSUserDataStripeDepthMax(sSUserDataStripeDepthMaxValue);
			}
			else if (String::equal(property.getName().getString(), "SSStoragePoolInitialUsage"))
			{
				Uint16 sSStoragePoolInitialUsageValue;
				property.getValue().get(sSStoragePoolInitialUsageValue);
				setSSStoragePoolInitialUsage(sSStoragePoolInitialUsageValue);
			}
			else if (String::equal(property.getName().getString(), "SSStorageExtentInitialUsage"))
			{
				Uint16 sSStorageExtentInitialUsageValue;
				property.getValue().get(sSStorageExtentInitialUsageValue);
				setSSStorageExtentInitialUsage(sSStorageExtentInitialUsageValue);
			}
			else if (String::equal(property.getName().getString(), "SVIsComposite"))
			{
				Boolean sVIsCompositeValue;
				property.getValue().get(sVIsCompositeValue);
				setSVIsComposite(sVIsCompositeValue);
			}
	}
	return true;
}


Boolean UNIX_VolumeView::initialize()
{
	return false;
}

Boolean UNIX_VolumeView::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("VolumeView");
	_generation = Uint64(0);
	_sVSystemCreationClassName = String ("");
	_sVSystemName = String ("");
	_sVCreationClassName = String ("");
	_sVDeviceID = String ("");
	_sVName = String ("");
	_sVNameFormat = Uint16(0);
	_sVNameNamespace = Uint16(0);
	_sVExtentStatus.clear();
	_sVOperationalStatus.clear();
	_sVBlockSize = Uint64(0);
	_sVNumberOfBlocks = Uint64(0);
	_sVConsumableBlocks = Uint64(0);
	_sVIsBasedOnUnderlyingRedundancy = Boolean(false);
	_sVNoSinglePointOfFailure = Boolean(false);
	_sVDataRedundancy = Uint16(0);
	_sVPackageRedundancy = Uint16(0);
	_sVDeltaReservation = Uint8(0);
	_sVUsage = Uint16(0);
	_sVOtherUsageDescription = String ("");
	_sVClientSettableUsage.clear();
	_sSInstanceID = String ("");
	_sSElementName = String ("");
	_sSNoSinglePointOfFailure = Boolean(false);
	_sSDataRedundancyMin = Uint16(0);
	_sSDataRedundancyMax = Uint16(0);
	_sSDataRedundancyGoal = Uint16(0);
	_sSPackageRedundancyMin = Uint16(0);
	_sSPackageRedundancyMax = Uint16(0);
	_sSPackageRedundancyGoal = Uint16(0);
	_sSChangeableType = Uint16(0);
	_aFSPSpaceConsumed = Uint64(0);
	_sPInstanceID = String ("");
	_sPPoolID = String ("");
	_sVOtherIdentifyingInfo.clear();
	_sVIdentifyingDescriptions.clear();
	_sVElementName = String ("");
	_sVPrimordial = Boolean(false);
	_sVExtentDiscriminator.clear();
	_sSExtentStripeLength = Uint16(0);
	_sSExtentStripeLengthMin = Uint16(0);
	_sSExtentStripeLengthMax = Uint16(0);
	_sSParityLayout = Uint16(0);
	_sSUserDataStripeDepth = Uint64(0);
	_sSUserDataStripeDepthMin = Uint64(0);
	_sSUserDataStripeDepthMax = Uint64(0);
	_sSStoragePoolInitialUsage = Uint16(0);
	_sSStorageExtentInitialUsage = Uint16(0);
	_sVIsComposite = Boolean(false);
	
	return false;
}

Boolean UNIX_VolumeView::finalize()
{
	return false;
}


Boolean UNIX_VolumeView::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String sVSystemCreationClassNameKey;
	String sVSystemNameKey;
	String sVCreationClassNameKey;
	String sVDeviceIDKey;
	String sPInstanceIDKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_S_V_SYSTEM_CREATION_CLASS_NAME)) sVSystemCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_S_V_SYSTEM_NAME)) sVSystemNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_S_V_CREATION_CLASS_NAME)) sVCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_S_V_DEVICE_ID)) sVDeviceIDKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SPINSTANCE_ID)) sPInstanceIDKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getSVSystemCreationClassName(), sVSystemCreationClassNameKey)) && 
			(String::equalNoCase(getSVSystemName(), sVSystemNameKey)) && 
			(String::equalNoCase(getSVCreationClassName(), sVCreationClassNameKey)) && 
			(String::equalNoCase(getSVDeviceID(), sVDeviceIDKey)) && 
			(String::equalNoCase(getSPInstanceID(), sPInstanceIDKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_VolumeView::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VolumeView::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VolumeView::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VolumeView::validateInstance()
{
	return true;
}

