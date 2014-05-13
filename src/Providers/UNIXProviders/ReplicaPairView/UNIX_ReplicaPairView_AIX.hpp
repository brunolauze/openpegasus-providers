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


UNIX_ReplicaPairView::UNIX_ReplicaPairView(void)
{
}

UNIX_ReplicaPairView::~UNIX_ReplicaPairView(void)
{
}

Boolean UNIX_ReplicaPairView::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_ReplicaPairView::getInstanceID() const
{
	return _instanceID;
}

void UNIX_ReplicaPairView::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_ReplicaPairView::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_ReplicaPairView::getCaption() const
{
	return _caption;
}

void UNIX_ReplicaPairView::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_ReplicaPairView::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_ReplicaPairView::getDescription() const
{
	return _description;
}

void UNIX_ReplicaPairView::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_ReplicaPairView::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_ReplicaPairView::getElementName() const
{
	return _elementName;
}

void UNIX_ReplicaPairView::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_ReplicaPairView::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_ReplicaPairView::getGeneration() const
{
	return _generation;
}

void UNIX_ReplicaPairView::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_ReplicaPairView::getSVSourceSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_SOURCE_SYSTEM_CREATION_CLASS_NAME, getSVSourceSystemCreationClassName());
	return true;
}

String UNIX_ReplicaPairView::getSVSourceSystemCreationClassName() const
{
	return _sVSourceSystemCreationClassName;
}

void UNIX_ReplicaPairView::setSVSourceSystemCreationClassName(String &value)
{
	_sVSourceSystemCreationClassName = value;
}

Boolean UNIX_ReplicaPairView::getSVSourceSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_SOURCE_SYSTEM_NAME, getSVSourceSystemName());
	return true;
}

String UNIX_ReplicaPairView::getSVSourceSystemName() const
{
	return _sVSourceSystemName;
}

void UNIX_ReplicaPairView::setSVSourceSystemName(String &value)
{
	_sVSourceSystemName = value;
}

Boolean UNIX_ReplicaPairView::getSVSourceCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_SOURCE_CREATION_CLASS_NAME, getSVSourceCreationClassName());
	return true;
}

String UNIX_ReplicaPairView::getSVSourceCreationClassName() const
{
	return _sVSourceCreationClassName;
}

void UNIX_ReplicaPairView::setSVSourceCreationClassName(String &value)
{
	_sVSourceCreationClassName = value;
}

Boolean UNIX_ReplicaPairView::getSVSourceDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_SOURCE_DEVICE_ID, getSVSourceDeviceID());
	return true;
}

String UNIX_ReplicaPairView::getSVSourceDeviceID() const
{
	return _sVSourceDeviceID;
}

void UNIX_ReplicaPairView::setSVSourceDeviceID(String &value)
{
	_sVSourceDeviceID = value;
}

Boolean UNIX_ReplicaPairView::getSVSourceName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_SOURCE_NAME, getSVSourceName());
	return true;
}

String UNIX_ReplicaPairView::getSVSourceName() const
{
	return _sVSourceName;
}

void UNIX_ReplicaPairView::setSVSourceName(String &value)
{
	_sVSourceName = value;
}

Boolean UNIX_ReplicaPairView::getSVSourceNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_SOURCE_NAME_FORMAT, getSVSourceNameFormat());
	return true;
}

Uint16 UNIX_ReplicaPairView::getSVSourceNameFormat() const
{
	return _sVSourceNameFormat;
}

void UNIX_ReplicaPairView::setSVSourceNameFormat(Uint16 &value)
{
	_sVSourceNameFormat = value;
}

Boolean UNIX_ReplicaPairView::getSVSourceNameNamespace(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_SOURCE_NAME_NAMESPACE, getSVSourceNameNamespace());
	return true;
}

Uint16 UNIX_ReplicaPairView::getSVSourceNameNamespace() const
{
	return _sVSourceNameNamespace;
}

void UNIX_ReplicaPairView::setSVSourceNameNamespace(Uint16 &value)
{
	_sVSourceNameNamespace = value;
}

Boolean UNIX_ReplicaPairView::getSVSourceExtentStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_SOURCE_EXTENT_STATUS, getSVSourceExtentStatus());
	return true;
}

Array<Uint16> UNIX_ReplicaPairView::getSVSourceExtentStatus() const
{
	return _sVSourceExtentStatus;
}

void UNIX_ReplicaPairView::setSVSourceExtentStatus(Array<Uint16> &value)
{
	_sVSourceExtentStatus = value;
}

Boolean UNIX_ReplicaPairView::getSVSourceOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_SOURCE_OPERATIONAL_STATUS, getSVSourceOperationalStatus());
	return true;
}

Array<Uint16> UNIX_ReplicaPairView::getSVSourceOperationalStatus() const
{
	return _sVSourceOperationalStatus;
}

void UNIX_ReplicaPairView::setSVSourceOperationalStatus(Array<Uint16> &value)
{
	_sVSourceOperationalStatus = value;
}

Boolean UNIX_ReplicaPairView::getSVSourceBlockSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_SOURCE_BLOCK_SIZE, getSVSourceBlockSize());
	return true;
}

Uint64 UNIX_ReplicaPairView::getSVSourceBlockSize() const
{
	return _sVSourceBlockSize;
}

void UNIX_ReplicaPairView::setSVSourceBlockSize(Uint64 &value)
{
	_sVSourceBlockSize = value;
}

Boolean UNIX_ReplicaPairView::getSVSourceNumberOfBlocks(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_SOURCE_NUMBER_OF_BLOCKS, getSVSourceNumberOfBlocks());
	return true;
}

Uint64 UNIX_ReplicaPairView::getSVSourceNumberOfBlocks() const
{
	return _sVSourceNumberOfBlocks;
}

void UNIX_ReplicaPairView::setSVSourceNumberOfBlocks(Uint64 &value)
{
	_sVSourceNumberOfBlocks = value;
}

Boolean UNIX_ReplicaPairView::getSVSourceConsumableBlocks(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_SOURCE_CONSUMABLE_BLOCKS, getSVSourceConsumableBlocks());
	return true;
}

Uint64 UNIX_ReplicaPairView::getSVSourceConsumableBlocks() const
{
	return _sVSourceConsumableBlocks;
}

void UNIX_ReplicaPairView::setSVSourceConsumableBlocks(Uint64 &value)
{
	_sVSourceConsumableBlocks = value;
}

Boolean UNIX_ReplicaPairView::getSVSourcePrimordial(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_SOURCE_PRIMORDIAL, getSVSourcePrimordial());
	return true;
}

Boolean UNIX_ReplicaPairView::getSVSourcePrimordial() const
{
	return _sVSourcePrimordial;
}

void UNIX_ReplicaPairView::setSVSourcePrimordial(Boolean &value)
{
	_sVSourcePrimordial = value;
}

Boolean UNIX_ReplicaPairView::getSVSourceIsBasedOnUnderlyingRedundancy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_SOURCE_IS_BASED_ON_UNDERLYING_REDUNDANCY, getSVSourceIsBasedOnUnderlyingRedundancy());
	return true;
}

Boolean UNIX_ReplicaPairView::getSVSourceIsBasedOnUnderlyingRedundancy() const
{
	return _sVSourceIsBasedOnUnderlyingRedundancy;
}

void UNIX_ReplicaPairView::setSVSourceIsBasedOnUnderlyingRedundancy(Boolean &value)
{
	_sVSourceIsBasedOnUnderlyingRedundancy = value;
}

Boolean UNIX_ReplicaPairView::getSVSourceNoSinglePointOfFailure(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_SOURCE_NO_SINGLE_POINT_OF_FAILURE, getSVSourceNoSinglePointOfFailure());
	return true;
}

Boolean UNIX_ReplicaPairView::getSVSourceNoSinglePointOfFailure() const
{
	return _sVSourceNoSinglePointOfFailure;
}

void UNIX_ReplicaPairView::setSVSourceNoSinglePointOfFailure(Boolean &value)
{
	_sVSourceNoSinglePointOfFailure = value;
}

Boolean UNIX_ReplicaPairView::getSVSourceDataRedundancy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_SOURCE_DATA_REDUNDANCY, getSVSourceDataRedundancy());
	return true;
}

Uint16 UNIX_ReplicaPairView::getSVSourceDataRedundancy() const
{
	return _sVSourceDataRedundancy;
}

void UNIX_ReplicaPairView::setSVSourceDataRedundancy(Uint16 &value)
{
	_sVSourceDataRedundancy = value;
}

Boolean UNIX_ReplicaPairView::getSVSourcePackageRedundancy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_SOURCE_PACKAGE_REDUNDANCY, getSVSourcePackageRedundancy());
	return true;
}

Uint16 UNIX_ReplicaPairView::getSVSourcePackageRedundancy() const
{
	return _sVSourcePackageRedundancy;
}

void UNIX_ReplicaPairView::setSVSourcePackageRedundancy(Uint16 &value)
{
	_sVSourcePackageRedundancy = value;
}

Boolean UNIX_ReplicaPairView::getSVSourceDeltaReservation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_SOURCE_DELTA_RESERVATION, getSVSourceDeltaReservation());
	return true;
}

Uint8 UNIX_ReplicaPairView::getSVSourceDeltaReservation() const
{
	return _sVSourceDeltaReservation;
}

void UNIX_ReplicaPairView::setSVSourceDeltaReservation(Uint8 &value)
{
	_sVSourceDeltaReservation = value;
}

Boolean UNIX_ReplicaPairView::getSVSourceExtentDiscriminator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_SOURCE_EXTENT_DISCRIMINATOR, getSVSourceExtentDiscriminator());
	return true;
}

Array<String> UNIX_ReplicaPairView::getSVSourceExtentDiscriminator() const
{
	return _sVSourceExtentDiscriminator;
}

void UNIX_ReplicaPairView::setSVSourceExtentDiscriminator(Array<String> &value)
{
	_sVSourceExtentDiscriminator = value;
}

Boolean UNIX_ReplicaPairView::getSVSourceOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_SOURCE_OTHER_IDENTIFYING_INFO, getSVSourceOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_ReplicaPairView::getSVSourceOtherIdentifyingInfo() const
{
	return _sVSourceOtherIdentifyingInfo;
}

void UNIX_ReplicaPairView::setSVSourceOtherIdentifyingInfo(Array<String> &value)
{
	_sVSourceOtherIdentifyingInfo = value;
}

Boolean UNIX_ReplicaPairView::getSVSourceIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_SOURCE_IDENTIFYING_DESCRIPTIONS, getSVSourceIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_ReplicaPairView::getSVSourceIdentifyingDescriptions() const
{
	return _sVSourceIdentifyingDescriptions;
}

void UNIX_ReplicaPairView::setSVSourceIdentifyingDescriptions(Array<String> &value)
{
	_sVSourceIdentifyingDescriptions = value;
}

Boolean UNIX_ReplicaPairView::getSVSourceElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_SOURCE_ELEMENT_NAME, getSVSourceElementName());
	return true;
}

String UNIX_ReplicaPairView::getSVSourceElementName() const
{
	return _sVSourceElementName;
}

void UNIX_ReplicaPairView::setSVSourceElementName(String &value)
{
	_sVSourceElementName = value;
}

Boolean UNIX_ReplicaPairView::getSVSourceUsage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_SOURCE_USAGE, getSVSourceUsage());
	return true;
}

Uint16 UNIX_ReplicaPairView::getSVSourceUsage() const
{
	return _sVSourceUsage;
}

void UNIX_ReplicaPairView::setSVSourceUsage(Uint16 &value)
{
	_sVSourceUsage = value;
}

Boolean UNIX_ReplicaPairView::getSVSourceOtherUsageDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_SOURCE_OTHER_USAGE_DESCRIPTION, getSVSourceOtherUsageDescription());
	return true;
}

String UNIX_ReplicaPairView::getSVSourceOtherUsageDescription() const
{
	return _sVSourceOtherUsageDescription;
}

void UNIX_ReplicaPairView::setSVSourceOtherUsageDescription(String &value)
{
	_sVSourceOtherUsageDescription = value;
}

Boolean UNIX_ReplicaPairView::getSVSourceClientSettableUsage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_SOURCE_CLIENT_SETTABLE_USAGE, getSVSourceClientSettableUsage());
	return true;
}

Array<Uint16> UNIX_ReplicaPairView::getSVSourceClientSettableUsage() const
{
	return _sVSourceClientSettableUsage;
}

void UNIX_ReplicaPairView::setSVSourceClientSettableUsage(Array<Uint16> &value)
{
	_sVSourceClientSettableUsage = value;
}

Boolean UNIX_ReplicaPairView::getSSWhenSynced(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_S_WHEN_SYNCED, getSSWhenSynced());
	return true;
}

CIMDateTime UNIX_ReplicaPairView::getSSWhenSynced() const
{
	return _sSWhenSynced;
}

void UNIX_ReplicaPairView::setSSWhenSynced(CIMDateTime &value)
{
	_sSWhenSynced = value;
}

Boolean UNIX_ReplicaPairView::getSSSyncMaintained(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_S_SYNC_MAINTAINED, getSSSyncMaintained());
	return true;
}

Boolean UNIX_ReplicaPairView::getSSSyncMaintained() const
{
	return _sSSyncMaintained;
}

void UNIX_ReplicaPairView::setSSSyncMaintained(Boolean &value)
{
	_sSSyncMaintained = value;
}

Boolean UNIX_ReplicaPairView::getSSCopyType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_S_COPY_TYPE, getSSCopyType());
	return true;
}

Uint16 UNIX_ReplicaPairView::getSSCopyType() const
{
	return _sSCopyType;
}

void UNIX_ReplicaPairView::setSSCopyType(Uint16 &value)
{
	_sSCopyType = value;
}

Boolean UNIX_ReplicaPairView::getSSSyncState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_S_SYNC_STATE, getSSSyncState());
	return true;
}

Uint16 UNIX_ReplicaPairView::getSSSyncState() const
{
	return _sSSyncState;
}

void UNIX_ReplicaPairView::setSSSyncState(Uint16 &value)
{
	_sSSyncState = value;
}

Boolean UNIX_ReplicaPairView::getSSCopyPriority(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_S_COPY_PRIORITY, getSSCopyPriority());
	return true;
}

Uint16 UNIX_ReplicaPairView::getSSCopyPriority() const
{
	return _sSCopyPriority;
}

void UNIX_ReplicaPairView::setSSCopyPriority(Uint16 &value)
{
	_sSCopyPriority = value;
}

Boolean UNIX_ReplicaPairView::getSSSyncType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_S_SYNC_TYPE, getSSSyncType());
	return true;
}

Uint16 UNIX_ReplicaPairView::getSSSyncType() const
{
	return _sSSyncType;
}

void UNIX_ReplicaPairView::setSSSyncType(Uint16 &value)
{
	_sSSyncType = value;
}

Boolean UNIX_ReplicaPairView::getSSMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_S_MODE, getSSMode());
	return true;
}

Uint16 UNIX_ReplicaPairView::getSSMode() const
{
	return _sSMode;
}

void UNIX_ReplicaPairView::setSSMode(Uint16 &value)
{
	_sSMode = value;
}

Boolean UNIX_ReplicaPairView::getSSProgressStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_S_PROGRESS_STATUS, getSSProgressStatus());
	return true;
}

Uint16 UNIX_ReplicaPairView::getSSProgressStatus() const
{
	return _sSProgressStatus;
}

void UNIX_ReplicaPairView::setSSProgressStatus(Uint16 &value)
{
	_sSProgressStatus = value;
}

Boolean UNIX_ReplicaPairView::getSVTargetSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_TARGET_SYSTEM_CREATION_CLASS_NAME, getSVTargetSystemCreationClassName());
	return true;
}

String UNIX_ReplicaPairView::getSVTargetSystemCreationClassName() const
{
	return _sVTargetSystemCreationClassName;
}

void UNIX_ReplicaPairView::setSVTargetSystemCreationClassName(String &value)
{
	_sVTargetSystemCreationClassName = value;
}

Boolean UNIX_ReplicaPairView::getSVTargetSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_TARGET_SYSTEM_NAME, getSVTargetSystemName());
	return true;
}

String UNIX_ReplicaPairView::getSVTargetSystemName() const
{
	return _sVTargetSystemName;
}

void UNIX_ReplicaPairView::setSVTargetSystemName(String &value)
{
	_sVTargetSystemName = value;
}

Boolean UNIX_ReplicaPairView::getSVTargetCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_TARGET_CREATION_CLASS_NAME, getSVTargetCreationClassName());
	return true;
}

String UNIX_ReplicaPairView::getSVTargetCreationClassName() const
{
	return _sVTargetCreationClassName;
}

void UNIX_ReplicaPairView::setSVTargetCreationClassName(String &value)
{
	_sVTargetCreationClassName = value;
}

Boolean UNIX_ReplicaPairView::getSVTargetDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_TARGET_DEVICE_ID, getSVTargetDeviceID());
	return true;
}

String UNIX_ReplicaPairView::getSVTargetDeviceID() const
{
	return _sVTargetDeviceID;
}

void UNIX_ReplicaPairView::setSVTargetDeviceID(String &value)
{
	_sVTargetDeviceID = value;
}

Boolean UNIX_ReplicaPairView::getSVTargetName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_TARGET_NAME, getSVTargetName());
	return true;
}

String UNIX_ReplicaPairView::getSVTargetName() const
{
	return _sVTargetName;
}

void UNIX_ReplicaPairView::setSVTargetName(String &value)
{
	_sVTargetName = value;
}

Boolean UNIX_ReplicaPairView::getSVTargetNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_TARGET_NAME_FORMAT, getSVTargetNameFormat());
	return true;
}

Uint16 UNIX_ReplicaPairView::getSVTargetNameFormat() const
{
	return _sVTargetNameFormat;
}

void UNIX_ReplicaPairView::setSVTargetNameFormat(Uint16 &value)
{
	_sVTargetNameFormat = value;
}

Boolean UNIX_ReplicaPairView::getSVTargetNameNamespace(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_TARGET_NAME_NAMESPACE, getSVTargetNameNamespace());
	return true;
}

Uint16 UNIX_ReplicaPairView::getSVTargetNameNamespace() const
{
	return _sVTargetNameNamespace;
}

void UNIX_ReplicaPairView::setSVTargetNameNamespace(Uint16 &value)
{
	_sVTargetNameNamespace = value;
}

Boolean UNIX_ReplicaPairView::getSVTargetExtentStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_TARGET_EXTENT_STATUS, getSVTargetExtentStatus());
	return true;
}

Array<Uint16> UNIX_ReplicaPairView::getSVTargetExtentStatus() const
{
	return _sVTargetExtentStatus;
}

void UNIX_ReplicaPairView::setSVTargetExtentStatus(Array<Uint16> &value)
{
	_sVTargetExtentStatus = value;
}

Boolean UNIX_ReplicaPairView::getSVTargetOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_TARGET_OPERATIONAL_STATUS, getSVTargetOperationalStatus());
	return true;
}

Array<Uint16> UNIX_ReplicaPairView::getSVTargetOperationalStatus() const
{
	return _sVTargetOperationalStatus;
}

void UNIX_ReplicaPairView::setSVTargetOperationalStatus(Array<Uint16> &value)
{
	_sVTargetOperationalStatus = value;
}

Boolean UNIX_ReplicaPairView::getSVTargetBlockSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_TARGET_BLOCK_SIZE, getSVTargetBlockSize());
	return true;
}

Uint64 UNIX_ReplicaPairView::getSVTargetBlockSize() const
{
	return _sVTargetBlockSize;
}

void UNIX_ReplicaPairView::setSVTargetBlockSize(Uint64 &value)
{
	_sVTargetBlockSize = value;
}

Boolean UNIX_ReplicaPairView::getSVTargetNumberOfBlocks(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_TARGET_NUMBER_OF_BLOCKS, getSVTargetNumberOfBlocks());
	return true;
}

Uint64 UNIX_ReplicaPairView::getSVTargetNumberOfBlocks() const
{
	return _sVTargetNumberOfBlocks;
}

void UNIX_ReplicaPairView::setSVTargetNumberOfBlocks(Uint64 &value)
{
	_sVTargetNumberOfBlocks = value;
}

Boolean UNIX_ReplicaPairView::getSVTargetConsumableBlocks(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_TARGET_CONSUMABLE_BLOCKS, getSVTargetConsumableBlocks());
	return true;
}

Uint64 UNIX_ReplicaPairView::getSVTargetConsumableBlocks() const
{
	return _sVTargetConsumableBlocks;
}

void UNIX_ReplicaPairView::setSVTargetConsumableBlocks(Uint64 &value)
{
	_sVTargetConsumableBlocks = value;
}

Boolean UNIX_ReplicaPairView::getSVTargetPrimordial(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_TARGET_PRIMORDIAL, getSVTargetPrimordial());
	return true;
}

Boolean UNIX_ReplicaPairView::getSVTargetPrimordial() const
{
	return _sVTargetPrimordial;
}

void UNIX_ReplicaPairView::setSVTargetPrimordial(Boolean &value)
{
	_sVTargetPrimordial = value;
}

Boolean UNIX_ReplicaPairView::getSVTargetIsBasedOnUnderlyingRedundancy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_TARGET_IS_BASED_ON_UNDERLYING_REDUNDANCY, getSVTargetIsBasedOnUnderlyingRedundancy());
	return true;
}

Boolean UNIX_ReplicaPairView::getSVTargetIsBasedOnUnderlyingRedundancy() const
{
	return _sVTargetIsBasedOnUnderlyingRedundancy;
}

void UNIX_ReplicaPairView::setSVTargetIsBasedOnUnderlyingRedundancy(Boolean &value)
{
	_sVTargetIsBasedOnUnderlyingRedundancy = value;
}

Boolean UNIX_ReplicaPairView::getSVTargetNoSinglePointOfFailure(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_TARGET_NO_SINGLE_POINT_OF_FAILURE, getSVTargetNoSinglePointOfFailure());
	return true;
}

Boolean UNIX_ReplicaPairView::getSVTargetNoSinglePointOfFailure() const
{
	return _sVTargetNoSinglePointOfFailure;
}

void UNIX_ReplicaPairView::setSVTargetNoSinglePointOfFailure(Boolean &value)
{
	_sVTargetNoSinglePointOfFailure = value;
}

Boolean UNIX_ReplicaPairView::getSVTargetDataRedundancy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_TARGET_DATA_REDUNDANCY, getSVTargetDataRedundancy());
	return true;
}

Uint16 UNIX_ReplicaPairView::getSVTargetDataRedundancy() const
{
	return _sVTargetDataRedundancy;
}

void UNIX_ReplicaPairView::setSVTargetDataRedundancy(Uint16 &value)
{
	_sVTargetDataRedundancy = value;
}

Boolean UNIX_ReplicaPairView::getSVTargetPackageRedundancy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_TARGET_PACKAGE_REDUNDANCY, getSVTargetPackageRedundancy());
	return true;
}

Uint16 UNIX_ReplicaPairView::getSVTargetPackageRedundancy() const
{
	return _sVTargetPackageRedundancy;
}

void UNIX_ReplicaPairView::setSVTargetPackageRedundancy(Uint16 &value)
{
	_sVTargetPackageRedundancy = value;
}

Boolean UNIX_ReplicaPairView::getSVTargetDeltaReservation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_TARGET_DELTA_RESERVATION, getSVTargetDeltaReservation());
	return true;
}

Uint8 UNIX_ReplicaPairView::getSVTargetDeltaReservation() const
{
	return _sVTargetDeltaReservation;
}

void UNIX_ReplicaPairView::setSVTargetDeltaReservation(Uint8 &value)
{
	_sVTargetDeltaReservation = value;
}

Boolean UNIX_ReplicaPairView::getSVTargetExtentDiscriminator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_TARGET_EXTENT_DISCRIMINATOR, getSVTargetExtentDiscriminator());
	return true;
}

Array<String> UNIX_ReplicaPairView::getSVTargetExtentDiscriminator() const
{
	return _sVTargetExtentDiscriminator;
}

void UNIX_ReplicaPairView::setSVTargetExtentDiscriminator(Array<String> &value)
{
	_sVTargetExtentDiscriminator = value;
}

Boolean UNIX_ReplicaPairView::getSVTargetOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_TARGET_OTHER_IDENTIFYING_INFO, getSVTargetOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_ReplicaPairView::getSVTargetOtherIdentifyingInfo() const
{
	return _sVTargetOtherIdentifyingInfo;
}

void UNIX_ReplicaPairView::setSVTargetOtherIdentifyingInfo(Array<String> &value)
{
	_sVTargetOtherIdentifyingInfo = value;
}

Boolean UNIX_ReplicaPairView::getSVTargetIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_TARGET_IDENTIFYING_DESCRIPTIONS, getSVTargetIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_ReplicaPairView::getSVTargetIdentifyingDescriptions() const
{
	return _sVTargetIdentifyingDescriptions;
}

void UNIX_ReplicaPairView::setSVTargetIdentifyingDescriptions(Array<String> &value)
{
	_sVTargetIdentifyingDescriptions = value;
}

Boolean UNIX_ReplicaPairView::getSVTargetElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_TARGET_ELEMENT_NAME, getSVTargetElementName());
	return true;
}

String UNIX_ReplicaPairView::getSVTargetElementName() const
{
	return _sVTargetElementName;
}

void UNIX_ReplicaPairView::setSVTargetElementName(String &value)
{
	_sVTargetElementName = value;
}

Boolean UNIX_ReplicaPairView::getSVTargetUsage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_TARGET_USAGE, getSVTargetUsage());
	return true;
}

Uint16 UNIX_ReplicaPairView::getSVTargetUsage() const
{
	return _sVTargetUsage;
}

void UNIX_ReplicaPairView::setSVTargetUsage(Uint16 &value)
{
	_sVTargetUsage = value;
}

Boolean UNIX_ReplicaPairView::getSVTargetOtherUsageDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_TARGET_OTHER_USAGE_DESCRIPTION, getSVTargetOtherUsageDescription());
	return true;
}

String UNIX_ReplicaPairView::getSVTargetOtherUsageDescription() const
{
	return _sVTargetOtherUsageDescription;
}

void UNIX_ReplicaPairView::setSVTargetOtherUsageDescription(String &value)
{
	_sVTargetOtherUsageDescription = value;
}

Boolean UNIX_ReplicaPairView::getSVTargetClientSettableUsage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_V_TARGET_CLIENT_SETTABLE_USAGE, getSVTargetClientSettableUsage());
	return true;
}

Array<Uint16> UNIX_ReplicaPairView::getSVTargetClientSettableUsage() const
{
	return _sVTargetClientSettableUsage;
}

void UNIX_ReplicaPairView::setSVTargetClientSettableUsage(Array<Uint16> &value)
{
	_sVTargetClientSettableUsage = value;
}


void UNIX_ReplicaPairView::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("ReplicaPairView");
	_generation = Uint64(0);
	_sVSourceSystemCreationClassName = String ("");
	_sVSourceSystemName = String ("");
	_sVSourceCreationClassName = String ("");
	_sVSourceDeviceID = String ("");
	_sVSourceName = String ("");
	_sVSourceNameFormat = Uint16(0);
	_sVSourceNameNamespace = Uint16(0);
	_sVSourceExtentStatus.clear();
	_sVSourceOperationalStatus.clear();
	_sVSourceBlockSize = Uint64(0);
	_sVSourceNumberOfBlocks = Uint64(0);
	_sVSourceConsumableBlocks = Uint64(0);
	_sVSourcePrimordial = Boolean(false);
	_sVSourceIsBasedOnUnderlyingRedundancy = Boolean(false);
	_sVSourceNoSinglePointOfFailure = Boolean(false);
	_sVSourceDataRedundancy = Uint16(0);
	_sVSourcePackageRedundancy = Uint16(0);
	_sVSourceDeltaReservation = Uint8(0);
	_sVSourceExtentDiscriminator.clear();
	_sVSourceOtherIdentifyingInfo.clear();
	_sVSourceIdentifyingDescriptions.clear();
	_sVSourceElementName = String ("");
	_sVSourceUsage = Uint16(0);
	_sVSourceOtherUsageDescription = String ("");
	_sVSourceClientSettableUsage.clear();
	_sSWhenSynced = CIMHelper::getCurrentTime();
	_sSSyncMaintained = Boolean(false);
	_sSCopyType = Uint16(0);
	_sSSyncState = Uint16(0);
	_sSCopyPriority = Uint16(0);
	_sSSyncType = Uint16(0);
	_sSMode = Uint16(0);
	_sSProgressStatus = Uint16(0);
	_sVTargetSystemCreationClassName = String ("");
	_sVTargetSystemName = String ("");
	_sVTargetCreationClassName = String ("");
	_sVTargetDeviceID = String ("");
	_sVTargetName = String ("");
	_sVTargetNameFormat = Uint16(0);
	_sVTargetNameNamespace = Uint16(0);
	_sVTargetExtentStatus.clear();
	_sVTargetOperationalStatus.clear();
	_sVTargetBlockSize = Uint64(0);
	_sVTargetNumberOfBlocks = Uint64(0);
	_sVTargetConsumableBlocks = Uint64(0);
	_sVTargetPrimordial = Boolean(false);
	_sVTargetIsBasedOnUnderlyingRedundancy = Boolean(false);
	_sVTargetNoSinglePointOfFailure = Boolean(false);
	_sVTargetDataRedundancy = Uint16(0);
	_sVTargetPackageRedundancy = Uint16(0);
	_sVTargetDeltaReservation = Uint8(0);
	_sVTargetExtentDiscriminator.clear();
	_sVTargetOtherIdentifyingInfo.clear();
	_sVTargetIdentifyingDescriptions.clear();
	_sVTargetElementName = String ("");
	_sVTargetUsage = Uint16(0);
	_sVTargetOtherUsageDescription = String ("");
	_sVTargetClientSettableUsage.clear();

}

Boolean UNIX_ReplicaPairView::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "SVSourceSystemCreationClassName"))
			{
				String sVSourceSystemCreationClassNameValue;
				property.getValue().get(sVSourceSystemCreationClassNameValue);
				setSVSourceSystemCreationClassName(sVSourceSystemCreationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "SVSourceSystemName"))
			{
				String sVSourceSystemNameValue;
				property.getValue().get(sVSourceSystemNameValue);
				setSVSourceSystemName(sVSourceSystemNameValue);
			}
			else if (String::equal(property.getName().getString(), "SVSourceCreationClassName"))
			{
				String sVSourceCreationClassNameValue;
				property.getValue().get(sVSourceCreationClassNameValue);
				setSVSourceCreationClassName(sVSourceCreationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "SVSourceDeviceID"))
			{
				String sVSourceDeviceIDValue;
				property.getValue().get(sVSourceDeviceIDValue);
				setSVSourceDeviceID(sVSourceDeviceIDValue);
			}
			else if (String::equal(property.getName().getString(), "SVSourceName"))
			{
				String sVSourceNameValue;
				property.getValue().get(sVSourceNameValue);
				setSVSourceName(sVSourceNameValue);
			}
			else if (String::equal(property.getName().getString(), "SVSourceNameFormat"))
			{
				Uint16 sVSourceNameFormatValue;
				property.getValue().get(sVSourceNameFormatValue);
				setSVSourceNameFormat(sVSourceNameFormatValue);
			}
			else if (String::equal(property.getName().getString(), "SVSourceNameNamespace"))
			{
				Uint16 sVSourceNameNamespaceValue;
				property.getValue().get(sVSourceNameNamespaceValue);
				setSVSourceNameNamespace(sVSourceNameNamespaceValue);
			}
			else if (String::equal(property.getName().getString(), "SVSourceExtentStatus"))
			{
				Array<Uint16> sVSourceExtentStatusValue;
				property.getValue().get(sVSourceExtentStatusValue);
				setSVSourceExtentStatus(sVSourceExtentStatusValue);
			}
			else if (String::equal(property.getName().getString(), "SVSourceOperationalStatus"))
			{
				Array<Uint16> sVSourceOperationalStatusValue;
				property.getValue().get(sVSourceOperationalStatusValue);
				setSVSourceOperationalStatus(sVSourceOperationalStatusValue);
			}
			else if (String::equal(property.getName().getString(), "SVSourceBlockSize"))
			{
				Uint64 sVSourceBlockSizeValue;
				property.getValue().get(sVSourceBlockSizeValue);
				setSVSourceBlockSize(sVSourceBlockSizeValue);
			}
			else if (String::equal(property.getName().getString(), "SVSourceNumberOfBlocks"))
			{
				Uint64 sVSourceNumberOfBlocksValue;
				property.getValue().get(sVSourceNumberOfBlocksValue);
				setSVSourceNumberOfBlocks(sVSourceNumberOfBlocksValue);
			}
			else if (String::equal(property.getName().getString(), "SVSourceConsumableBlocks"))
			{
				Uint64 sVSourceConsumableBlocksValue;
				property.getValue().get(sVSourceConsumableBlocksValue);
				setSVSourceConsumableBlocks(sVSourceConsumableBlocksValue);
			}
			else if (String::equal(property.getName().getString(), "SVSourcePrimordial"))
			{
				Boolean sVSourcePrimordialValue;
				property.getValue().get(sVSourcePrimordialValue);
				setSVSourcePrimordial(sVSourcePrimordialValue);
			}
			else if (String::equal(property.getName().getString(), "SVSourceIsBasedOnUnderlyingRedundancy"))
			{
				Boolean sVSourceIsBasedOnUnderlyingRedundancyValue;
				property.getValue().get(sVSourceIsBasedOnUnderlyingRedundancyValue);
				setSVSourceIsBasedOnUnderlyingRedundancy(sVSourceIsBasedOnUnderlyingRedundancyValue);
			}
			else if (String::equal(property.getName().getString(), "SVSourceNoSinglePointOfFailure"))
			{
				Boolean sVSourceNoSinglePointOfFailureValue;
				property.getValue().get(sVSourceNoSinglePointOfFailureValue);
				setSVSourceNoSinglePointOfFailure(sVSourceNoSinglePointOfFailureValue);
			}
			else if (String::equal(property.getName().getString(), "SVSourceDataRedundancy"))
			{
				Uint16 sVSourceDataRedundancyValue;
				property.getValue().get(sVSourceDataRedundancyValue);
				setSVSourceDataRedundancy(sVSourceDataRedundancyValue);
			}
			else if (String::equal(property.getName().getString(), "SVSourcePackageRedundancy"))
			{
				Uint16 sVSourcePackageRedundancyValue;
				property.getValue().get(sVSourcePackageRedundancyValue);
				setSVSourcePackageRedundancy(sVSourcePackageRedundancyValue);
			}
			else if (String::equal(property.getName().getString(), "SVSourceDeltaReservation"))
			{
				Uint8 sVSourceDeltaReservationValue;
				property.getValue().get(sVSourceDeltaReservationValue);
				setSVSourceDeltaReservation(sVSourceDeltaReservationValue);
			}
			else if (String::equal(property.getName().getString(), "SVSourceExtentDiscriminator"))
			{
				Array<String> sVSourceExtentDiscriminatorValue;
				property.getValue().get(sVSourceExtentDiscriminatorValue);
				setSVSourceExtentDiscriminator(sVSourceExtentDiscriminatorValue);
			}
			else if (String::equal(property.getName().getString(), "SVSourceOtherIdentifyingInfo"))
			{
				Array<String> sVSourceOtherIdentifyingInfoValue;
				property.getValue().get(sVSourceOtherIdentifyingInfoValue);
				setSVSourceOtherIdentifyingInfo(sVSourceOtherIdentifyingInfoValue);
			}
			else if (String::equal(property.getName().getString(), "SVSourceIdentifyingDescriptions"))
			{
				Array<String> sVSourceIdentifyingDescriptionsValue;
				property.getValue().get(sVSourceIdentifyingDescriptionsValue);
				setSVSourceIdentifyingDescriptions(sVSourceIdentifyingDescriptionsValue);
			}
			else if (String::equal(property.getName().getString(), "SVSourceElementName"))
			{
				String sVSourceElementNameValue;
				property.getValue().get(sVSourceElementNameValue);
				setSVSourceElementName(sVSourceElementNameValue);
			}
			else if (String::equal(property.getName().getString(), "SVSourceUsage"))
			{
				Uint16 sVSourceUsageValue;
				property.getValue().get(sVSourceUsageValue);
				setSVSourceUsage(sVSourceUsageValue);
			}
			else if (String::equal(property.getName().getString(), "SVSourceOtherUsageDescription"))
			{
				String sVSourceOtherUsageDescriptionValue;
				property.getValue().get(sVSourceOtherUsageDescriptionValue);
				setSVSourceOtherUsageDescription(sVSourceOtherUsageDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "SVSourceClientSettableUsage"))
			{
				Array<Uint16> sVSourceClientSettableUsageValue;
				property.getValue().get(sVSourceClientSettableUsageValue);
				setSVSourceClientSettableUsage(sVSourceClientSettableUsageValue);
			}
			else if (String::equal(property.getName().getString(), "SSWhenSynced"))
			{
				CIMDateTime sSWhenSyncedValue;
				property.getValue().get(sSWhenSyncedValue);
				setSSWhenSynced(sSWhenSyncedValue);
			}
			else if (String::equal(property.getName().getString(), "SSSyncMaintained"))
			{
				Boolean sSSyncMaintainedValue;
				property.getValue().get(sSSyncMaintainedValue);
				setSSSyncMaintained(sSSyncMaintainedValue);
			}
			else if (String::equal(property.getName().getString(), "SSCopyType"))
			{
				Uint16 sSCopyTypeValue;
				property.getValue().get(sSCopyTypeValue);
				setSSCopyType(sSCopyTypeValue);
			}
			else if (String::equal(property.getName().getString(), "SSSyncState"))
			{
				Uint16 sSSyncStateValue;
				property.getValue().get(sSSyncStateValue);
				setSSSyncState(sSSyncStateValue);
			}
			else if (String::equal(property.getName().getString(), "SSCopyPriority"))
			{
				Uint16 sSCopyPriorityValue;
				property.getValue().get(sSCopyPriorityValue);
				setSSCopyPriority(sSCopyPriorityValue);
			}
			else if (String::equal(property.getName().getString(), "SSSyncType"))
			{
				Uint16 sSSyncTypeValue;
				property.getValue().get(sSSyncTypeValue);
				setSSSyncType(sSSyncTypeValue);
			}
			else if (String::equal(property.getName().getString(), "SSMode"))
			{
				Uint16 sSModeValue;
				property.getValue().get(sSModeValue);
				setSSMode(sSModeValue);
			}
			else if (String::equal(property.getName().getString(), "SSProgressStatus"))
			{
				Uint16 sSProgressStatusValue;
				property.getValue().get(sSProgressStatusValue);
				setSSProgressStatus(sSProgressStatusValue);
			}
			else if (String::equal(property.getName().getString(), "SVTargetSystemCreationClassName"))
			{
				String sVTargetSystemCreationClassNameValue;
				property.getValue().get(sVTargetSystemCreationClassNameValue);
				setSVTargetSystemCreationClassName(sVTargetSystemCreationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "SVTargetSystemName"))
			{
				String sVTargetSystemNameValue;
				property.getValue().get(sVTargetSystemNameValue);
				setSVTargetSystemName(sVTargetSystemNameValue);
			}
			else if (String::equal(property.getName().getString(), "SVTargetCreationClassName"))
			{
				String sVTargetCreationClassNameValue;
				property.getValue().get(sVTargetCreationClassNameValue);
				setSVTargetCreationClassName(sVTargetCreationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "SVTargetDeviceID"))
			{
				String sVTargetDeviceIDValue;
				property.getValue().get(sVTargetDeviceIDValue);
				setSVTargetDeviceID(sVTargetDeviceIDValue);
			}
			else if (String::equal(property.getName().getString(), "SVTargetName"))
			{
				String sVTargetNameValue;
				property.getValue().get(sVTargetNameValue);
				setSVTargetName(sVTargetNameValue);
			}
			else if (String::equal(property.getName().getString(), "SVTargetNameFormat"))
			{
				Uint16 sVTargetNameFormatValue;
				property.getValue().get(sVTargetNameFormatValue);
				setSVTargetNameFormat(sVTargetNameFormatValue);
			}
			else if (String::equal(property.getName().getString(), "SVTargetNameNamespace"))
			{
				Uint16 sVTargetNameNamespaceValue;
				property.getValue().get(sVTargetNameNamespaceValue);
				setSVTargetNameNamespace(sVTargetNameNamespaceValue);
			}
			else if (String::equal(property.getName().getString(), "SVTargetExtentStatus"))
			{
				Array<Uint16> sVTargetExtentStatusValue;
				property.getValue().get(sVTargetExtentStatusValue);
				setSVTargetExtentStatus(sVTargetExtentStatusValue);
			}
			else if (String::equal(property.getName().getString(), "SVTargetOperationalStatus"))
			{
				Array<Uint16> sVTargetOperationalStatusValue;
				property.getValue().get(sVTargetOperationalStatusValue);
				setSVTargetOperationalStatus(sVTargetOperationalStatusValue);
			}
			else if (String::equal(property.getName().getString(), "SVTargetBlockSize"))
			{
				Uint64 sVTargetBlockSizeValue;
				property.getValue().get(sVTargetBlockSizeValue);
				setSVTargetBlockSize(sVTargetBlockSizeValue);
			}
			else if (String::equal(property.getName().getString(), "SVTargetNumberOfBlocks"))
			{
				Uint64 sVTargetNumberOfBlocksValue;
				property.getValue().get(sVTargetNumberOfBlocksValue);
				setSVTargetNumberOfBlocks(sVTargetNumberOfBlocksValue);
			}
			else if (String::equal(property.getName().getString(), "SVTargetConsumableBlocks"))
			{
				Uint64 sVTargetConsumableBlocksValue;
				property.getValue().get(sVTargetConsumableBlocksValue);
				setSVTargetConsumableBlocks(sVTargetConsumableBlocksValue);
			}
			else if (String::equal(property.getName().getString(), "SVTargetPrimordial"))
			{
				Boolean sVTargetPrimordialValue;
				property.getValue().get(sVTargetPrimordialValue);
				setSVTargetPrimordial(sVTargetPrimordialValue);
			}
			else if (String::equal(property.getName().getString(), "SVTargetIsBasedOnUnderlyingRedundancy"))
			{
				Boolean sVTargetIsBasedOnUnderlyingRedundancyValue;
				property.getValue().get(sVTargetIsBasedOnUnderlyingRedundancyValue);
				setSVTargetIsBasedOnUnderlyingRedundancy(sVTargetIsBasedOnUnderlyingRedundancyValue);
			}
			else if (String::equal(property.getName().getString(), "SVTargetNoSinglePointOfFailure"))
			{
				Boolean sVTargetNoSinglePointOfFailureValue;
				property.getValue().get(sVTargetNoSinglePointOfFailureValue);
				setSVTargetNoSinglePointOfFailure(sVTargetNoSinglePointOfFailureValue);
			}
			else if (String::equal(property.getName().getString(), "SVTargetDataRedundancy"))
			{
				Uint16 sVTargetDataRedundancyValue;
				property.getValue().get(sVTargetDataRedundancyValue);
				setSVTargetDataRedundancy(sVTargetDataRedundancyValue);
			}
			else if (String::equal(property.getName().getString(), "SVTargetPackageRedundancy"))
			{
				Uint16 sVTargetPackageRedundancyValue;
				property.getValue().get(sVTargetPackageRedundancyValue);
				setSVTargetPackageRedundancy(sVTargetPackageRedundancyValue);
			}
			else if (String::equal(property.getName().getString(), "SVTargetDeltaReservation"))
			{
				Uint8 sVTargetDeltaReservationValue;
				property.getValue().get(sVTargetDeltaReservationValue);
				setSVTargetDeltaReservation(sVTargetDeltaReservationValue);
			}
			else if (String::equal(property.getName().getString(), "SVTargetExtentDiscriminator"))
			{
				Array<String> sVTargetExtentDiscriminatorValue;
				property.getValue().get(sVTargetExtentDiscriminatorValue);
				setSVTargetExtentDiscriminator(sVTargetExtentDiscriminatorValue);
			}
			else if (String::equal(property.getName().getString(), "SVTargetOtherIdentifyingInfo"))
			{
				Array<String> sVTargetOtherIdentifyingInfoValue;
				property.getValue().get(sVTargetOtherIdentifyingInfoValue);
				setSVTargetOtherIdentifyingInfo(sVTargetOtherIdentifyingInfoValue);
			}
			else if (String::equal(property.getName().getString(), "SVTargetIdentifyingDescriptions"))
			{
				Array<String> sVTargetIdentifyingDescriptionsValue;
				property.getValue().get(sVTargetIdentifyingDescriptionsValue);
				setSVTargetIdentifyingDescriptions(sVTargetIdentifyingDescriptionsValue);
			}
			else if (String::equal(property.getName().getString(), "SVTargetElementName"))
			{
				String sVTargetElementNameValue;
				property.getValue().get(sVTargetElementNameValue);
				setSVTargetElementName(sVTargetElementNameValue);
			}
			else if (String::equal(property.getName().getString(), "SVTargetUsage"))
			{
				Uint16 sVTargetUsageValue;
				property.getValue().get(sVTargetUsageValue);
				setSVTargetUsage(sVTargetUsageValue);
			}
			else if (String::equal(property.getName().getString(), "SVTargetOtherUsageDescription"))
			{
				String sVTargetOtherUsageDescriptionValue;
				property.getValue().get(sVTargetOtherUsageDescriptionValue);
				setSVTargetOtherUsageDescription(sVTargetOtherUsageDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "SVTargetClientSettableUsage"))
			{
				Array<Uint16> sVTargetClientSettableUsageValue;
				property.getValue().get(sVTargetClientSettableUsageValue);
				setSVTargetClientSettableUsage(sVTargetClientSettableUsageValue);
			}
	}
	return true;
}


Boolean UNIX_ReplicaPairView::initialize()
{
	return false;
}

Boolean UNIX_ReplicaPairView::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("ReplicaPairView");
	_generation = Uint64(0);
	_sVSourceSystemCreationClassName = String ("");
	_sVSourceSystemName = String ("");
	_sVSourceCreationClassName = String ("");
	_sVSourceDeviceID = String ("");
	_sVSourceName = String ("");
	_sVSourceNameFormat = Uint16(0);
	_sVSourceNameNamespace = Uint16(0);
	_sVSourceExtentStatus.clear();
	_sVSourceOperationalStatus.clear();
	_sVSourceBlockSize = Uint64(0);
	_sVSourceNumberOfBlocks = Uint64(0);
	_sVSourceConsumableBlocks = Uint64(0);
	_sVSourcePrimordial = Boolean(false);
	_sVSourceIsBasedOnUnderlyingRedundancy = Boolean(false);
	_sVSourceNoSinglePointOfFailure = Boolean(false);
	_sVSourceDataRedundancy = Uint16(0);
	_sVSourcePackageRedundancy = Uint16(0);
	_sVSourceDeltaReservation = Uint8(0);
	_sVSourceExtentDiscriminator.clear();
	_sVSourceOtherIdentifyingInfo.clear();
	_sVSourceIdentifyingDescriptions.clear();
	_sVSourceElementName = String ("");
	_sVSourceUsage = Uint16(0);
	_sVSourceOtherUsageDescription = String ("");
	_sVSourceClientSettableUsage.clear();
	_sSWhenSynced = CIMHelper::getCurrentTime();
	_sSSyncMaintained = Boolean(false);
	_sSCopyType = Uint16(0);
	_sSSyncState = Uint16(0);
	_sSCopyPriority = Uint16(0);
	_sSSyncType = Uint16(0);
	_sSMode = Uint16(0);
	_sSProgressStatus = Uint16(0);
	_sVTargetSystemCreationClassName = String ("");
	_sVTargetSystemName = String ("");
	_sVTargetCreationClassName = String ("");
	_sVTargetDeviceID = String ("");
	_sVTargetName = String ("");
	_sVTargetNameFormat = Uint16(0);
	_sVTargetNameNamespace = Uint16(0);
	_sVTargetExtentStatus.clear();
	_sVTargetOperationalStatus.clear();
	_sVTargetBlockSize = Uint64(0);
	_sVTargetNumberOfBlocks = Uint64(0);
	_sVTargetConsumableBlocks = Uint64(0);
	_sVTargetPrimordial = Boolean(false);
	_sVTargetIsBasedOnUnderlyingRedundancy = Boolean(false);
	_sVTargetNoSinglePointOfFailure = Boolean(false);
	_sVTargetDataRedundancy = Uint16(0);
	_sVTargetPackageRedundancy = Uint16(0);
	_sVTargetDeltaReservation = Uint8(0);
	_sVTargetExtentDiscriminator.clear();
	_sVTargetOtherIdentifyingInfo.clear();
	_sVTargetIdentifyingDescriptions.clear();
	_sVTargetElementName = String ("");
	_sVTargetUsage = Uint16(0);
	_sVTargetOtherUsageDescription = String ("");
	_sVTargetClientSettableUsage.clear();
	
	return false;
}

Boolean UNIX_ReplicaPairView::finalize()
{
	return false;
}


Boolean UNIX_ReplicaPairView::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String sVTargetSystemCreationClassNameKey;
	String sVTargetSystemNameKey;
	String sVTargetCreationClassNameKey;
	String sVTargetDeviceIDKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_S_V_TARGET_SYSTEM_CREATION_CLASS_NAME)) sVTargetSystemCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_S_V_TARGET_SYSTEM_NAME)) sVTargetSystemNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_S_V_TARGET_CREATION_CLASS_NAME)) sVTargetCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_S_V_TARGET_DEVICE_ID)) sVTargetDeviceIDKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getSVTargetSystemCreationClassName(), sVTargetSystemCreationClassNameKey)) && 
			(String::equalNoCase(getSVTargetSystemName(), sVTargetSystemNameKey)) && 
			(String::equalNoCase(getSVTargetCreationClassName(), sVTargetCreationClassNameKey)) && 
			(String::equalNoCase(getSVTargetDeviceID(), sVTargetDeviceIDKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_ReplicaPairView::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ReplicaPairView::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ReplicaPairView::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ReplicaPairView::validateInstance()
{
	return true;
}

