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


UNIX_StorageSettingWithHints::UNIX_StorageSettingWithHints(void)
{
}

UNIX_StorageSettingWithHints::~UNIX_StorageSettingWithHints(void)
{
}

Boolean UNIX_StorageSettingWithHints::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_StorageSettingWithHints::getInstanceID() const
{
	return _instanceID;
}

void UNIX_StorageSettingWithHints::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_StorageSettingWithHints::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_StorageSettingWithHints::getCaption() const
{
	return _caption;
}

void UNIX_StorageSettingWithHints::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_StorageSettingWithHints::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_StorageSettingWithHints::getDescription() const
{
	return _description;
}

void UNIX_StorageSettingWithHints::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_StorageSettingWithHints::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_StorageSettingWithHints::getElementName() const
{
	return _elementName;
}

void UNIX_StorageSettingWithHints::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_StorageSettingWithHints::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_StorageSettingWithHints::getGeneration() const
{
	return _generation;
}

void UNIX_StorageSettingWithHints::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_StorageSettingWithHints::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_StorageSettingWithHints::getConfigurationName() const
{
	return _configurationName;
}

void UNIX_StorageSettingWithHints::setConfigurationName(String &value)
{
	_configurationName = value;
}

Boolean UNIX_StorageSettingWithHints::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_StorageSettingWithHints::getChangeableType() const
{
	return _changeableType;
}

void UNIX_StorageSettingWithHints::setChangeableType(Uint16 &value)
{
	_changeableType = value;
}

Boolean UNIX_StorageSettingWithHints::getComponentSetting(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPONENT_SETTING, getComponentSetting());
	return true;
}

Array<String> UNIX_StorageSettingWithHints::getComponentSetting() const
{
	return _componentSetting;
}

void UNIX_StorageSettingWithHints::setComponentSetting(Array<String> &value)
{
	_componentSetting = value;
}

Boolean UNIX_StorageSettingWithHints::getSoID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ID, getSoID());
	return true;
}

String UNIX_StorageSettingWithHints::getSoID() const
{
	return _soID;
}

void UNIX_StorageSettingWithHints::setSoID(String &value)
{
	_soID = value;
}

Boolean UNIX_StorageSettingWithHints::getSoOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ORG_ID, getSoOrgID());
	return true;
}

String UNIX_StorageSettingWithHints::getSoOrgID() const
{
	return _soOrgID;
}

void UNIX_StorageSettingWithHints::setSoOrgID(String &value)
{
	_soOrgID = value;
}

Boolean UNIX_StorageSettingWithHints::getNoSinglePointOfFailure(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NO_SINGLE_POINT_OF_FAILURE, getNoSinglePointOfFailure());
	return true;
}

Boolean UNIX_StorageSettingWithHints::getNoSinglePointOfFailure() const
{
	return _noSinglePointOfFailure;
}

void UNIX_StorageSettingWithHints::setNoSinglePointOfFailure(Boolean &value)
{
	_noSinglePointOfFailure = value;
}

Boolean UNIX_StorageSettingWithHints::getDataRedundancyMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_REDUNDANCY_MAX, getDataRedundancyMax());
	return true;
}

Uint16 UNIX_StorageSettingWithHints::getDataRedundancyMax() const
{
	return _dataRedundancyMax;
}

void UNIX_StorageSettingWithHints::setDataRedundancyMax(Uint16 &value)
{
	_dataRedundancyMax = value;
}

Boolean UNIX_StorageSettingWithHints::getDataRedundancyMin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_REDUNDANCY_MIN, getDataRedundancyMin());
	return true;
}

Uint16 UNIX_StorageSettingWithHints::getDataRedundancyMin() const
{
	return _dataRedundancyMin;
}

void UNIX_StorageSettingWithHints::setDataRedundancyMin(Uint16 &value)
{
	_dataRedundancyMin = value;
}

Boolean UNIX_StorageSettingWithHints::getDataRedundancyGoal(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_REDUNDANCY_GOAL, getDataRedundancyGoal());
	return true;
}

Uint16 UNIX_StorageSettingWithHints::getDataRedundancyGoal() const
{
	return _dataRedundancyGoal;
}

void UNIX_StorageSettingWithHints::setDataRedundancyGoal(Uint16 &value)
{
	_dataRedundancyGoal = value;
}

Boolean UNIX_StorageSettingWithHints::getPackageRedundancyMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKAGE_REDUNDANCY_MAX, getPackageRedundancyMax());
	return true;
}

Uint16 UNIX_StorageSettingWithHints::getPackageRedundancyMax() const
{
	return _packageRedundancyMax;
}

void UNIX_StorageSettingWithHints::setPackageRedundancyMax(Uint16 &value)
{
	_packageRedundancyMax = value;
}

Boolean UNIX_StorageSettingWithHints::getPackageRedundancyMin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKAGE_REDUNDANCY_MIN, getPackageRedundancyMin());
	return true;
}

Uint16 UNIX_StorageSettingWithHints::getPackageRedundancyMin() const
{
	return _packageRedundancyMin;
}

void UNIX_StorageSettingWithHints::setPackageRedundancyMin(Uint16 &value)
{
	_packageRedundancyMin = value;
}

Boolean UNIX_StorageSettingWithHints::getPackageRedundancyGoal(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKAGE_REDUNDANCY_GOAL, getPackageRedundancyGoal());
	return true;
}

Uint16 UNIX_StorageSettingWithHints::getPackageRedundancyGoal() const
{
	return _packageRedundancyGoal;
}

void UNIX_StorageSettingWithHints::setPackageRedundancyGoal(Uint16 &value)
{
	_packageRedundancyGoal = value;
}

Boolean UNIX_StorageSettingWithHints::getDeltaReservationMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELTA_RESERVATION_MAX, getDeltaReservationMax());
	return true;
}

Uint8 UNIX_StorageSettingWithHints::getDeltaReservationMax() const
{
	return _deltaReservationMax;
}

void UNIX_StorageSettingWithHints::setDeltaReservationMax(Uint8 &value)
{
	_deltaReservationMax = value;
}

Boolean UNIX_StorageSettingWithHints::getDeltaReservationMin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELTA_RESERVATION_MIN, getDeltaReservationMin());
	return true;
}

Uint8 UNIX_StorageSettingWithHints::getDeltaReservationMin() const
{
	return _deltaReservationMin;
}

void UNIX_StorageSettingWithHints::setDeltaReservationMin(Uint8 &value)
{
	_deltaReservationMin = value;
}

Boolean UNIX_StorageSettingWithHints::getDeltaReservationGoal(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELTA_RESERVATION_GOAL, getDeltaReservationGoal());
	return true;
}

Uint8 UNIX_StorageSettingWithHints::getDeltaReservationGoal() const
{
	return _deltaReservationGoal;
}

void UNIX_StorageSettingWithHints::setDeltaReservationGoal(Uint8 &value)
{
	_deltaReservationGoal = value;
}

Boolean UNIX_StorageSettingWithHints::getExtentStripeLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENT_STRIPE_LENGTH, getExtentStripeLength());
	return true;
}

Uint16 UNIX_StorageSettingWithHints::getExtentStripeLength() const
{
	return _extentStripeLength;
}

void UNIX_StorageSettingWithHints::setExtentStripeLength(Uint16 &value)
{
	_extentStripeLength = value;
}

Boolean UNIX_StorageSettingWithHints::getExtentStripeLengthMin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENT_STRIPE_LENGTH_MIN, getExtentStripeLengthMin());
	return true;
}

Uint16 UNIX_StorageSettingWithHints::getExtentStripeLengthMin() const
{
	return _extentStripeLengthMin;
}

void UNIX_StorageSettingWithHints::setExtentStripeLengthMin(Uint16 &value)
{
	_extentStripeLengthMin = value;
}

Boolean UNIX_StorageSettingWithHints::getExtentStripeLengthMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENT_STRIPE_LENGTH_MAX, getExtentStripeLengthMax());
	return true;
}

Uint16 UNIX_StorageSettingWithHints::getExtentStripeLengthMax() const
{
	return _extentStripeLengthMax;
}

void UNIX_StorageSettingWithHints::setExtentStripeLengthMax(Uint16 &value)
{
	_extentStripeLengthMax = value;
}

Boolean UNIX_StorageSettingWithHints::getParityLayout(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PARITY_LAYOUT, getParityLayout());
	return true;
}

Uint16 UNIX_StorageSettingWithHints::getParityLayout() const
{
	return _parityLayout;
}

void UNIX_StorageSettingWithHints::setParityLayout(Uint16 &value)
{
	_parityLayout = value;
}

Boolean UNIX_StorageSettingWithHints::getUserDataStripeDepth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_DATA_STRIPE_DEPTH, getUserDataStripeDepth());
	return true;
}

Uint64 UNIX_StorageSettingWithHints::getUserDataStripeDepth() const
{
	return _userDataStripeDepth;
}

void UNIX_StorageSettingWithHints::setUserDataStripeDepth(Uint64 &value)
{
	_userDataStripeDepth = value;
}

Boolean UNIX_StorageSettingWithHints::getUserDataStripeDepthMin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_DATA_STRIPE_DEPTH_MIN, getUserDataStripeDepthMin());
	return true;
}

Uint64 UNIX_StorageSettingWithHints::getUserDataStripeDepthMin() const
{
	return _userDataStripeDepthMin;
}

void UNIX_StorageSettingWithHints::setUserDataStripeDepthMin(Uint64 &value)
{
	_userDataStripeDepthMin = value;
}

Boolean UNIX_StorageSettingWithHints::getUserDataStripeDepthMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_DATA_STRIPE_DEPTH_MAX, getUserDataStripeDepthMax());
	return true;
}

Uint64 UNIX_StorageSettingWithHints::getUserDataStripeDepthMax() const
{
	return _userDataStripeDepthMax;
}

void UNIX_StorageSettingWithHints::setUserDataStripeDepthMax(Uint64 &value)
{
	_userDataStripeDepthMax = value;
}

Boolean UNIX_StorageSettingWithHints::getIncrementalDeltas(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCREMENTAL_DELTAS, getIncrementalDeltas());
	return true;
}

Boolean UNIX_StorageSettingWithHints::getIncrementalDeltas() const
{
	return _incrementalDeltas;
}

void UNIX_StorageSettingWithHints::setIncrementalDeltas(Boolean &value)
{
	_incrementalDeltas = value;
}

Boolean UNIX_StorageSettingWithHints::getPersistentReplica(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERSISTENT_REPLICA, getPersistentReplica());
	return true;
}

Boolean UNIX_StorageSettingWithHints::getPersistentReplica() const
{
	return _persistentReplica;
}

void UNIX_StorageSettingWithHints::setPersistentReplica(Boolean &value)
{
	_persistentReplica = value;
}

Boolean UNIX_StorageSettingWithHints::getUseReplicationBuffer(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USE_REPLICATION_BUFFER, getUseReplicationBuffer());
	return true;
}

Uint16 UNIX_StorageSettingWithHints::getUseReplicationBuffer() const
{
	return _useReplicationBuffer;
}

void UNIX_StorageSettingWithHints::setUseReplicationBuffer(Uint16 &value)
{
	_useReplicationBuffer = value;
}

Boolean UNIX_StorageSettingWithHints::getInitialSynchronization(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INITIAL_SYNCHRONIZATION, getInitialSynchronization());
	return true;
}

Uint16 UNIX_StorageSettingWithHints::getInitialSynchronization() const
{
	return _initialSynchronization;
}

void UNIX_StorageSettingWithHints::setInitialSynchronization(Uint16 &value)
{
	_initialSynchronization = value;
}

Boolean UNIX_StorageSettingWithHints::getReplicationPriority(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REPLICATION_PRIORITY, getReplicationPriority());
	return true;
}

Uint16 UNIX_StorageSettingWithHints::getReplicationPriority() const
{
	return _replicationPriority;
}

void UNIX_StorageSettingWithHints::setReplicationPriority(Uint16 &value)
{
	_replicationPriority = value;
}

Boolean UNIX_StorageSettingWithHints::getSpaceLimit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SPACE_LIMIT, getSpaceLimit());
	return true;
}

Uint64 UNIX_StorageSettingWithHints::getSpaceLimit() const
{
	return _spaceLimit;
}

void UNIX_StorageSettingWithHints::setSpaceLimit(Uint64 &value)
{
	_spaceLimit = value;
}

Boolean UNIX_StorageSettingWithHints::getSpaceLimitWarningThreshold(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SPACE_LIMIT_WARNING_THRESHOLD, getSpaceLimitWarningThreshold());
	return true;
}

Uint16 UNIX_StorageSettingWithHints::getSpaceLimitWarningThreshold() const
{
	return _spaceLimitWarningThreshold;
}

void UNIX_StorageSettingWithHints::setSpaceLimitWarningThreshold(Uint16 &value)
{
	_spaceLimitWarningThreshold = value;
}

Boolean UNIX_StorageSettingWithHints::getLowSpaceWarningThreshold(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOW_SPACE_WARNING_THRESHOLD, getLowSpaceWarningThreshold());
	return true;
}

Uint16 UNIX_StorageSettingWithHints::getLowSpaceWarningThreshold() const
{
	return _lowSpaceWarningThreshold;
}

void UNIX_StorageSettingWithHints::setLowSpaceWarningThreshold(Uint16 &value)
{
	_lowSpaceWarningThreshold = value;
}

Boolean UNIX_StorageSettingWithHints::getStorageExtentInitialUsage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STORAGE_EXTENT_INITIAL_USAGE, getStorageExtentInitialUsage());
	return true;
}

Uint16 UNIX_StorageSettingWithHints::getStorageExtentInitialUsage() const
{
	return _storageExtentInitialUsage;
}

void UNIX_StorageSettingWithHints::setStorageExtentInitialUsage(Uint16 &value)
{
	_storageExtentInitialUsage = value;
}

Boolean UNIX_StorageSettingWithHints::getStoragePoolInitialUsage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STORAGE_POOL_INITIAL_USAGE, getStoragePoolInitialUsage());
	return true;
}

Uint16 UNIX_StorageSettingWithHints::getStoragePoolInitialUsage() const
{
	return _storagePoolInitialUsage;
}

void UNIX_StorageSettingWithHints::setStoragePoolInitialUsage(Uint16 &value)
{
	_storagePoolInitialUsage = value;
}

Boolean UNIX_StorageSettingWithHints::getCUImage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_C_U_IMAGE, getCUImage());
	return true;
}

String UNIX_StorageSettingWithHints::getCUImage() const
{
	return _cUImage;
}

void UNIX_StorageSettingWithHints::setCUImage(String &value)
{
	_cUImage = value;
}

Boolean UNIX_StorageSettingWithHints::getDataOrganization(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_ORGANIZATION, getDataOrganization());
	return true;
}

Uint16 UNIX_StorageSettingWithHints::getDataOrganization() const
{
	return _dataOrganization;
}

void UNIX_StorageSettingWithHints::setDataOrganization(Uint16 &value)
{
	_dataOrganization = value;
}

Boolean UNIX_StorageSettingWithHints::getDiskType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DISK_TYPE, getDiskType());
	return true;
}

Uint16 UNIX_StorageSettingWithHints::getDiskType() const
{
	return _diskType;
}

void UNIX_StorageSettingWithHints::setDiskType(Uint16 &value)
{
	_diskType = value;
}

Boolean UNIX_StorageSettingWithHints::getEmulatedDevice(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EMULATED_DEVICE, getEmulatedDevice());
	return true;
}

String UNIX_StorageSettingWithHints::getEmulatedDevice() const
{
	return _emulatedDevice;
}

void UNIX_StorageSettingWithHints::setEmulatedDevice(String &value)
{
	_emulatedDevice = value;
}

Boolean UNIX_StorageSettingWithHints::getEncryption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENCRYPTION, getEncryption());
	return true;
}

Uint16 UNIX_StorageSettingWithHints::getEncryption() const
{
	return _encryption;
}

void UNIX_StorageSettingWithHints::setEncryption(Uint16 &value)
{
	_encryption = value;
}

Boolean UNIX_StorageSettingWithHints::getFormFactorType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FORM_FACTOR_TYPE, getFormFactorType());
	return true;
}

Uint16 UNIX_StorageSettingWithHints::getFormFactorType() const
{
	return _formFactorType;
}

void UNIX_StorageSettingWithHints::setFormFactorType(Uint16 &value)
{
	_formFactorType = value;
}

Boolean UNIX_StorageSettingWithHints::getPortType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_TYPE, getPortType());
	return true;
}

Uint16 UNIX_StorageSettingWithHints::getPortType() const
{
	return _portType;
}

void UNIX_StorageSettingWithHints::setPortType(Uint16 &value)
{
	_portType = value;
}

Boolean UNIX_StorageSettingWithHints::getSubsystemID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUBSYSTEM_ID, getSubsystemID());
	return true;
}

String UNIX_StorageSettingWithHints::getSubsystemID() const
{
	return _subsystemID;
}

void UNIX_StorageSettingWithHints::setSubsystemID(String &value)
{
	_subsystemID = value;
}

Boolean UNIX_StorageSettingWithHints::getThinProvisionedInitialReserve(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_THIN_PROVISIONED_INITIAL_RESERVE, getThinProvisionedInitialReserve());
	return true;
}

Uint64 UNIX_StorageSettingWithHints::getThinProvisionedInitialReserve() const
{
	return _thinProvisionedInitialReserve;
}

void UNIX_StorageSettingWithHints::setThinProvisionedInitialReserve(Uint64 &value)
{
	_thinProvisionedInitialReserve = value;
}

Boolean UNIX_StorageSettingWithHints::getThinProvisionedPoolType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_THIN_PROVISIONED_POOL_TYPE, getThinProvisionedPoolType());
	return true;
}

Uint16 UNIX_StorageSettingWithHints::getThinProvisionedPoolType() const
{
	return _thinProvisionedPoolType;
}

void UNIX_StorageSettingWithHints::setThinProvisionedPoolType(Uint16 &value)
{
	_thinProvisionedPoolType = value;
}

Boolean UNIX_StorageSettingWithHints::getCompressedElement(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPRESSED_ELEMENT, getCompressedElement());
	return true;
}

Boolean UNIX_StorageSettingWithHints::getCompressedElement() const
{
	return _compressedElement;
}

void UNIX_StorageSettingWithHints::setCompressedElement(Boolean &value)
{
	_compressedElement = value;
}

Boolean UNIX_StorageSettingWithHints::getCompressionRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPRESSION_RATE, getCompressionRate());
	return true;
}

Uint16 UNIX_StorageSettingWithHints::getCompressionRate() const
{
	return _compressionRate;
}

void UNIX_StorageSettingWithHints::setCompressionRate(Uint16 &value)
{
	_compressionRate = value;
}

Boolean UNIX_StorageSettingWithHints::getInterconnectSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INTERCONNECT_SPEED, getInterconnectSpeed());
	return true;
}

Uint64 UNIX_StorageSettingWithHints::getInterconnectSpeed() const
{
	return _interconnectSpeed;
}

void UNIX_StorageSettingWithHints::setInterconnectSpeed(Uint64 &value)
{
	_interconnectSpeed = value;
}

Boolean UNIX_StorageSettingWithHints::getInterconnectType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INTERCONNECT_TYPE, getInterconnectType());
	return true;
}

Uint16 UNIX_StorageSettingWithHints::getInterconnectType() const
{
	return _interconnectType;
}

void UNIX_StorageSettingWithHints::setInterconnectType(Uint16 &value)
{
	_interconnectType = value;
}

Boolean UNIX_StorageSettingWithHints::getRPM(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_R_P_M, getRPM());
	return true;
}

Uint32 UNIX_StorageSettingWithHints::getRPM() const
{
	return _rPM;
}

void UNIX_StorageSettingWithHints::setRPM(Uint32 &value)
{
	_rPM = value;
}

Boolean UNIX_StorageSettingWithHints::getInitialStorageTierMethodology(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INITIAL_STORAGE_TIER_METHODOLOGY, getInitialStorageTierMethodology());
	return true;
}

Uint16 UNIX_StorageSettingWithHints::getInitialStorageTierMethodology() const
{
	return _initialStorageTierMethodology;
}

void UNIX_StorageSettingWithHints::setInitialStorageTierMethodology(Uint16 &value)
{
	_initialStorageTierMethodology = value;
}

Boolean UNIX_StorageSettingWithHints::getInitialStorageTieringSelection(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INITIAL_STORAGE_TIERING_SELECTION, getInitialStorageTieringSelection());
	return true;
}

Uint16 UNIX_StorageSettingWithHints::getInitialStorageTieringSelection() const
{
	return _initialStorageTieringSelection;
}

void UNIX_StorageSettingWithHints::setInitialStorageTieringSelection(Uint16 &value)
{
	_initialStorageTieringSelection = value;
}

Boolean UNIX_StorageSettingWithHints::getRelativePerformanceOrderLimit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RELATIVE_PERFORMANCE_ORDER_LIMIT, getRelativePerformanceOrderLimit());
	return true;
}

Uint16 UNIX_StorageSettingWithHints::getRelativePerformanceOrderLimit() const
{
	return _relativePerformanceOrderLimit;
}

void UNIX_StorageSettingWithHints::setRelativePerformanceOrderLimit(Uint16 &value)
{
	_relativePerformanceOrderLimit = value;
}

Boolean UNIX_StorageSettingWithHints::getInitialRelativePerformanceOrderSet(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INITIAL_RELATIVE_PERFORMANCE_ORDER_SET, getInitialRelativePerformanceOrderSet());
	return true;
}

Array<Uint16> UNIX_StorageSettingWithHints::getInitialRelativePerformanceOrderSet() const
{
	return _initialRelativePerformanceOrderSet;
}

void UNIX_StorageSettingWithHints::setInitialRelativePerformanceOrderSet(Array<Uint16> &value)
{
	_initialRelativePerformanceOrderSet = value;
}

Boolean UNIX_StorageSettingWithHints::getStorageTieringFrozen(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STORAGE_TIERING_FROZEN, getStorageTieringFrozen());
	return true;
}

Boolean UNIX_StorageSettingWithHints::getStorageTieringFrozen() const
{
	return _storageTieringFrozen;
}

void UNIX_StorageSettingWithHints::setStorageTieringFrozen(Boolean &value)
{
	_storageTieringFrozen = value;
}

Boolean UNIX_StorageSettingWithHints::getDataAvailabilityHint(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_AVAILABILITY_HINT, getDataAvailabilityHint());
	return true;
}

Uint16 UNIX_StorageSettingWithHints::getDataAvailabilityHint() const
{
	return _dataAvailabilityHint;
}

void UNIX_StorageSettingWithHints::setDataAvailabilityHint(Uint16 &value)
{
	_dataAvailabilityHint = value;
}

Boolean UNIX_StorageSettingWithHints::getAccessRandomnessHint(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCESS_RANDOMNESS_HINT, getAccessRandomnessHint());
	return true;
}

Uint16 UNIX_StorageSettingWithHints::getAccessRandomnessHint() const
{
	return _accessRandomnessHint;
}

void UNIX_StorageSettingWithHints::setAccessRandomnessHint(Uint16 &value)
{
	_accessRandomnessHint = value;
}

Boolean UNIX_StorageSettingWithHints::getAccessDirectionHint(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCESS_DIRECTION_HINT, getAccessDirectionHint());
	return true;
}

Uint16 UNIX_StorageSettingWithHints::getAccessDirectionHint() const
{
	return _accessDirectionHint;
}

void UNIX_StorageSettingWithHints::setAccessDirectionHint(Uint16 &value)
{
	_accessDirectionHint = value;
}

Boolean UNIX_StorageSettingWithHints::getAccessSizeHint(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCESS_SIZE_HINT, getAccessSizeHint());
	return true;
}

Array<Uint16> UNIX_StorageSettingWithHints::getAccessSizeHint() const
{
	return _accessSizeHint;
}

void UNIX_StorageSettingWithHints::setAccessSizeHint(Array<Uint16> &value)
{
	_accessSizeHint = value;
}

Boolean UNIX_StorageSettingWithHints::getAccessLatencyHint(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCESS_LATENCY_HINT, getAccessLatencyHint());
	return true;
}

Uint16 UNIX_StorageSettingWithHints::getAccessLatencyHint() const
{
	return _accessLatencyHint;
}

void UNIX_StorageSettingWithHints::setAccessLatencyHint(Uint16 &value)
{
	_accessLatencyHint = value;
}

Boolean UNIX_StorageSettingWithHints::getAccessBandwidthWeight(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCESS_BANDWIDTH_WEIGHT, getAccessBandwidthWeight());
	return true;
}

Uint16 UNIX_StorageSettingWithHints::getAccessBandwidthWeight() const
{
	return _accessBandwidthWeight;
}

void UNIX_StorageSettingWithHints::setAccessBandwidthWeight(Uint16 &value)
{
	_accessBandwidthWeight = value;
}

Boolean UNIX_StorageSettingWithHints::getStorageCostHint(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STORAGE_COST_HINT, getStorageCostHint());
	return true;
}

Uint16 UNIX_StorageSettingWithHints::getStorageCostHint() const
{
	return _storageCostHint;
}

void UNIX_StorageSettingWithHints::setStorageCostHint(Uint16 &value)
{
	_storageCostHint = value;
}

Boolean UNIX_StorageSettingWithHints::getStorageEfficiencyHint(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STORAGE_EFFICIENCY_HINT, getStorageEfficiencyHint());
	return true;
}

Uint16 UNIX_StorageSettingWithHints::getStorageEfficiencyHint() const
{
	return _storageEfficiencyHint;
}

void UNIX_StorageSettingWithHints::setStorageEfficiencyHint(Uint16 &value)
{
	_storageEfficiencyHint = value;
}


void UNIX_StorageSettingWithHints::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("StorageSettingWithHints");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_noSinglePointOfFailure = Boolean(false);
	_dataRedundancyMax = Uint16(0);
	_dataRedundancyMin = Uint16(0);
	_dataRedundancyGoal = Uint16(0);
	_packageRedundancyMax = Uint16(0);
	_packageRedundancyMin = Uint16(0);
	_packageRedundancyGoal = Uint16(0);
	_deltaReservationMax = Uint8(0);
	_deltaReservationMin = Uint8(0);
	_deltaReservationGoal = Uint8(0);
	_extentStripeLength = Uint16(0);
	_extentStripeLengthMin = Uint16(0);
	_extentStripeLengthMax = Uint16(0);
	_parityLayout = Uint16(0);
	_userDataStripeDepth = Uint64(0);
	_userDataStripeDepthMin = Uint64(0);
	_userDataStripeDepthMax = Uint64(0);
	_incrementalDeltas = Boolean(false);
	_persistentReplica = Boolean(false);
	_useReplicationBuffer = Uint16(0);
	_initialSynchronization = Uint16(0);
	_replicationPriority = Uint16(0);
	_spaceLimit = Uint64(0);
	_spaceLimitWarningThreshold = Uint16(0);
	_lowSpaceWarningThreshold = Uint16(0);
	_storageExtentInitialUsage = Uint16(0);
	_storagePoolInitialUsage = Uint16(0);
	_cUImage = String ("");
	_dataOrganization = Uint16(0);
	_diskType = Uint16(0);
	_emulatedDevice = String ("");
	_encryption = Uint16(0);
	_formFactorType = Uint16(0);
	_portType = Uint16(0);
	_subsystemID = String ("");
	_thinProvisionedInitialReserve = Uint64(0);
	_thinProvisionedPoolType = Uint16(0);
	_compressedElement = Boolean(false);
	_compressionRate = Uint16(0);
	_interconnectSpeed = Uint64(0);
	_interconnectType = Uint16(0);
	_rPM = Uint32(0);
	_initialStorageTierMethodology = Uint16(0);
	_initialStorageTieringSelection = Uint16(0);
	_relativePerformanceOrderLimit = Uint16(0);
	_initialRelativePerformanceOrderSet.clear();
	_storageTieringFrozen = Boolean(false);
	_dataAvailabilityHint = Uint16(0);
	_accessRandomnessHint = Uint16(0);
	_accessDirectionHint = Uint16(0);
	_accessSizeHint.clear();
	_accessLatencyHint = Uint16(0);
	_accessBandwidthWeight = Uint16(0);
	_storageCostHint = Uint16(0);
	_storageEfficiencyHint = Uint16(0);

}

Boolean UNIX_StorageSettingWithHints::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "NoSinglePointOfFailure"))
			{
				Boolean noSinglePointOfFailureValue;
				property.getValue().get(noSinglePointOfFailureValue);
				setNoSinglePointOfFailure(noSinglePointOfFailureValue);
			}
			else if (String::equal(property.getName().getString(), "DataRedundancyMax"))
			{
				Uint16 dataRedundancyMaxValue;
				property.getValue().get(dataRedundancyMaxValue);
				setDataRedundancyMax(dataRedundancyMaxValue);
			}
			else if (String::equal(property.getName().getString(), "DataRedundancyMin"))
			{
				Uint16 dataRedundancyMinValue;
				property.getValue().get(dataRedundancyMinValue);
				setDataRedundancyMin(dataRedundancyMinValue);
			}
			else if (String::equal(property.getName().getString(), "DataRedundancyGoal"))
			{
				Uint16 dataRedundancyGoalValue;
				property.getValue().get(dataRedundancyGoalValue);
				setDataRedundancyGoal(dataRedundancyGoalValue);
			}
			else if (String::equal(property.getName().getString(), "PackageRedundancyMax"))
			{
				Uint16 packageRedundancyMaxValue;
				property.getValue().get(packageRedundancyMaxValue);
				setPackageRedundancyMax(packageRedundancyMaxValue);
			}
			else if (String::equal(property.getName().getString(), "PackageRedundancyMin"))
			{
				Uint16 packageRedundancyMinValue;
				property.getValue().get(packageRedundancyMinValue);
				setPackageRedundancyMin(packageRedundancyMinValue);
			}
			else if (String::equal(property.getName().getString(), "PackageRedundancyGoal"))
			{
				Uint16 packageRedundancyGoalValue;
				property.getValue().get(packageRedundancyGoalValue);
				setPackageRedundancyGoal(packageRedundancyGoalValue);
			}
			else if (String::equal(property.getName().getString(), "DeltaReservationMax"))
			{
				Uint8 deltaReservationMaxValue;
				property.getValue().get(deltaReservationMaxValue);
				setDeltaReservationMax(deltaReservationMaxValue);
			}
			else if (String::equal(property.getName().getString(), "DeltaReservationMin"))
			{
				Uint8 deltaReservationMinValue;
				property.getValue().get(deltaReservationMinValue);
				setDeltaReservationMin(deltaReservationMinValue);
			}
			else if (String::equal(property.getName().getString(), "DeltaReservationGoal"))
			{
				Uint8 deltaReservationGoalValue;
				property.getValue().get(deltaReservationGoalValue);
				setDeltaReservationGoal(deltaReservationGoalValue);
			}
			else if (String::equal(property.getName().getString(), "ExtentStripeLength"))
			{
				Uint16 extentStripeLengthValue;
				property.getValue().get(extentStripeLengthValue);
				setExtentStripeLength(extentStripeLengthValue);
			}
			else if (String::equal(property.getName().getString(), "ExtentStripeLengthMin"))
			{
				Uint16 extentStripeLengthMinValue;
				property.getValue().get(extentStripeLengthMinValue);
				setExtentStripeLengthMin(extentStripeLengthMinValue);
			}
			else if (String::equal(property.getName().getString(), "ExtentStripeLengthMax"))
			{
				Uint16 extentStripeLengthMaxValue;
				property.getValue().get(extentStripeLengthMaxValue);
				setExtentStripeLengthMax(extentStripeLengthMaxValue);
			}
			else if (String::equal(property.getName().getString(), "ParityLayout"))
			{
				Uint16 parityLayoutValue;
				property.getValue().get(parityLayoutValue);
				setParityLayout(parityLayoutValue);
			}
			else if (String::equal(property.getName().getString(), "UserDataStripeDepth"))
			{
				Uint64 userDataStripeDepthValue;
				property.getValue().get(userDataStripeDepthValue);
				setUserDataStripeDepth(userDataStripeDepthValue);
			}
			else if (String::equal(property.getName().getString(), "UserDataStripeDepthMin"))
			{
				Uint64 userDataStripeDepthMinValue;
				property.getValue().get(userDataStripeDepthMinValue);
				setUserDataStripeDepthMin(userDataStripeDepthMinValue);
			}
			else if (String::equal(property.getName().getString(), "UserDataStripeDepthMax"))
			{
				Uint64 userDataStripeDepthMaxValue;
				property.getValue().get(userDataStripeDepthMaxValue);
				setUserDataStripeDepthMax(userDataStripeDepthMaxValue);
			}
			else if (String::equal(property.getName().getString(), "IncrementalDeltas"))
			{
				Boolean incrementalDeltasValue;
				property.getValue().get(incrementalDeltasValue);
				setIncrementalDeltas(incrementalDeltasValue);
			}
			else if (String::equal(property.getName().getString(), "PersistentReplica"))
			{
				Boolean persistentReplicaValue;
				property.getValue().get(persistentReplicaValue);
				setPersistentReplica(persistentReplicaValue);
			}
			else if (String::equal(property.getName().getString(), "UseReplicationBuffer"))
			{
				Uint16 useReplicationBufferValue;
				property.getValue().get(useReplicationBufferValue);
				setUseReplicationBuffer(useReplicationBufferValue);
			}
			else if (String::equal(property.getName().getString(), "InitialSynchronization"))
			{
				Uint16 initialSynchronizationValue;
				property.getValue().get(initialSynchronizationValue);
				setInitialSynchronization(initialSynchronizationValue);
			}
			else if (String::equal(property.getName().getString(), "ReplicationPriority"))
			{
				Uint16 replicationPriorityValue;
				property.getValue().get(replicationPriorityValue);
				setReplicationPriority(replicationPriorityValue);
			}
			else if (String::equal(property.getName().getString(), "SpaceLimit"))
			{
				Uint64 spaceLimitValue;
				property.getValue().get(spaceLimitValue);
				setSpaceLimit(spaceLimitValue);
			}
			else if (String::equal(property.getName().getString(), "SpaceLimitWarningThreshold"))
			{
				Uint16 spaceLimitWarningThresholdValue;
				property.getValue().get(spaceLimitWarningThresholdValue);
				setSpaceLimitWarningThreshold(spaceLimitWarningThresholdValue);
			}
			else if (String::equal(property.getName().getString(), "LowSpaceWarningThreshold"))
			{
				Uint16 lowSpaceWarningThresholdValue;
				property.getValue().get(lowSpaceWarningThresholdValue);
				setLowSpaceWarningThreshold(lowSpaceWarningThresholdValue);
			}
			else if (String::equal(property.getName().getString(), "StorageExtentInitialUsage"))
			{
				Uint16 storageExtentInitialUsageValue;
				property.getValue().get(storageExtentInitialUsageValue);
				setStorageExtentInitialUsage(storageExtentInitialUsageValue);
			}
			else if (String::equal(property.getName().getString(), "StoragePoolInitialUsage"))
			{
				Uint16 storagePoolInitialUsageValue;
				property.getValue().get(storagePoolInitialUsageValue);
				setStoragePoolInitialUsage(storagePoolInitialUsageValue);
			}
			else if (String::equal(property.getName().getString(), "CUImage"))
			{
				String cUImageValue;
				property.getValue().get(cUImageValue);
				setCUImage(cUImageValue);
			}
			else if (String::equal(property.getName().getString(), "DataOrganization"))
			{
				Uint16 dataOrganizationValue;
				property.getValue().get(dataOrganizationValue);
				setDataOrganization(dataOrganizationValue);
			}
			else if (String::equal(property.getName().getString(), "DiskType"))
			{
				Uint16 diskTypeValue;
				property.getValue().get(diskTypeValue);
				setDiskType(diskTypeValue);
			}
			else if (String::equal(property.getName().getString(), "EmulatedDevice"))
			{
				String emulatedDeviceValue;
				property.getValue().get(emulatedDeviceValue);
				setEmulatedDevice(emulatedDeviceValue);
			}
			else if (String::equal(property.getName().getString(), "Encryption"))
			{
				Uint16 encryptionValue;
				property.getValue().get(encryptionValue);
				setEncryption(encryptionValue);
			}
			else if (String::equal(property.getName().getString(), "FormFactorType"))
			{
				Uint16 formFactorTypeValue;
				property.getValue().get(formFactorTypeValue);
				setFormFactorType(formFactorTypeValue);
			}
			else if (String::equal(property.getName().getString(), "PortType"))
			{
				Uint16 portTypeValue;
				property.getValue().get(portTypeValue);
				setPortType(portTypeValue);
			}
			else if (String::equal(property.getName().getString(), "SubsystemID"))
			{
				String subsystemIDValue;
				property.getValue().get(subsystemIDValue);
				setSubsystemID(subsystemIDValue);
			}
			else if (String::equal(property.getName().getString(), "ThinProvisionedInitialReserve"))
			{
				Uint64 thinProvisionedInitialReserveValue;
				property.getValue().get(thinProvisionedInitialReserveValue);
				setThinProvisionedInitialReserve(thinProvisionedInitialReserveValue);
			}
			else if (String::equal(property.getName().getString(), "ThinProvisionedPoolType"))
			{
				Uint16 thinProvisionedPoolTypeValue;
				property.getValue().get(thinProvisionedPoolTypeValue);
				setThinProvisionedPoolType(thinProvisionedPoolTypeValue);
			}
			else if (String::equal(property.getName().getString(), "CompressedElement"))
			{
				Boolean compressedElementValue;
				property.getValue().get(compressedElementValue);
				setCompressedElement(compressedElementValue);
			}
			else if (String::equal(property.getName().getString(), "CompressionRate"))
			{
				Uint16 compressionRateValue;
				property.getValue().get(compressionRateValue);
				setCompressionRate(compressionRateValue);
			}
			else if (String::equal(property.getName().getString(), "InterconnectSpeed"))
			{
				Uint64 interconnectSpeedValue;
				property.getValue().get(interconnectSpeedValue);
				setInterconnectSpeed(interconnectSpeedValue);
			}
			else if (String::equal(property.getName().getString(), "InterconnectType"))
			{
				Uint16 interconnectTypeValue;
				property.getValue().get(interconnectTypeValue);
				setInterconnectType(interconnectTypeValue);
			}
			else if (String::equal(property.getName().getString(), "RPM"))
			{
				Uint32 rPMValue;
				property.getValue().get(rPMValue);
				setRPM(rPMValue);
			}
			else if (String::equal(property.getName().getString(), "InitialStorageTierMethodology"))
			{
				Uint16 initialStorageTierMethodologyValue;
				property.getValue().get(initialStorageTierMethodologyValue);
				setInitialStorageTierMethodology(initialStorageTierMethodologyValue);
			}
			else if (String::equal(property.getName().getString(), "InitialStorageTieringSelection"))
			{
				Uint16 initialStorageTieringSelectionValue;
				property.getValue().get(initialStorageTieringSelectionValue);
				setInitialStorageTieringSelection(initialStorageTieringSelectionValue);
			}
			else if (String::equal(property.getName().getString(), "RelativePerformanceOrderLimit"))
			{
				Uint16 relativePerformanceOrderLimitValue;
				property.getValue().get(relativePerformanceOrderLimitValue);
				setRelativePerformanceOrderLimit(relativePerformanceOrderLimitValue);
			}
			else if (String::equal(property.getName().getString(), "InitialRelativePerformanceOrderSet"))
			{
				Array<Uint16> initialRelativePerformanceOrderSetValue;
				property.getValue().get(initialRelativePerformanceOrderSetValue);
				setInitialRelativePerformanceOrderSet(initialRelativePerformanceOrderSetValue);
			}
			else if (String::equal(property.getName().getString(), "StorageTieringFrozen"))
			{
				Boolean storageTieringFrozenValue;
				property.getValue().get(storageTieringFrozenValue);
				setStorageTieringFrozen(storageTieringFrozenValue);
			}
			else if (String::equal(property.getName().getString(), "DataAvailabilityHint"))
			{
				Uint16 dataAvailabilityHintValue;
				property.getValue().get(dataAvailabilityHintValue);
				setDataAvailabilityHint(dataAvailabilityHintValue);
			}
			else if (String::equal(property.getName().getString(), "AccessRandomnessHint"))
			{
				Uint16 accessRandomnessHintValue;
				property.getValue().get(accessRandomnessHintValue);
				setAccessRandomnessHint(accessRandomnessHintValue);
			}
			else if (String::equal(property.getName().getString(), "AccessDirectionHint"))
			{
				Uint16 accessDirectionHintValue;
				property.getValue().get(accessDirectionHintValue);
				setAccessDirectionHint(accessDirectionHintValue);
			}
			else if (String::equal(property.getName().getString(), "AccessSizeHint"))
			{
				Array<Uint16> accessSizeHintValue;
				property.getValue().get(accessSizeHintValue);
				setAccessSizeHint(accessSizeHintValue);
			}
			else if (String::equal(property.getName().getString(), "AccessLatencyHint"))
			{
				Uint16 accessLatencyHintValue;
				property.getValue().get(accessLatencyHintValue);
				setAccessLatencyHint(accessLatencyHintValue);
			}
			else if (String::equal(property.getName().getString(), "AccessBandwidthWeight"))
			{
				Uint16 accessBandwidthWeightValue;
				property.getValue().get(accessBandwidthWeightValue);
				setAccessBandwidthWeight(accessBandwidthWeightValue);
			}
			else if (String::equal(property.getName().getString(), "StorageCostHint"))
			{
				Uint16 storageCostHintValue;
				property.getValue().get(storageCostHintValue);
				setStorageCostHint(storageCostHintValue);
			}
			else if (String::equal(property.getName().getString(), "StorageEfficiencyHint"))
			{
				Uint16 storageEfficiencyHintValue;
				property.getValue().get(storageEfficiencyHintValue);
				setStorageEfficiencyHint(storageEfficiencyHintValue);
			}
	}
	return true;
}


Boolean UNIX_StorageSettingWithHints::initialize()
{
	return false;
}

Boolean UNIX_StorageSettingWithHints::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("StorageSettingWithHints");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_noSinglePointOfFailure = Boolean(false);
	_dataRedundancyMax = Uint16(0);
	_dataRedundancyMin = Uint16(0);
	_dataRedundancyGoal = Uint16(0);
	_packageRedundancyMax = Uint16(0);
	_packageRedundancyMin = Uint16(0);
	_packageRedundancyGoal = Uint16(0);
	_deltaReservationMax = Uint8(0);
	_deltaReservationMin = Uint8(0);
	_deltaReservationGoal = Uint8(0);
	_extentStripeLength = Uint16(0);
	_extentStripeLengthMin = Uint16(0);
	_extentStripeLengthMax = Uint16(0);
	_parityLayout = Uint16(0);
	_userDataStripeDepth = Uint64(0);
	_userDataStripeDepthMin = Uint64(0);
	_userDataStripeDepthMax = Uint64(0);
	_incrementalDeltas = Boolean(false);
	_persistentReplica = Boolean(false);
	_useReplicationBuffer = Uint16(0);
	_initialSynchronization = Uint16(0);
	_replicationPriority = Uint16(0);
	_spaceLimit = Uint64(0);
	_spaceLimitWarningThreshold = Uint16(0);
	_lowSpaceWarningThreshold = Uint16(0);
	_storageExtentInitialUsage = Uint16(0);
	_storagePoolInitialUsage = Uint16(0);
	_cUImage = String ("");
	_dataOrganization = Uint16(0);
	_diskType = Uint16(0);
	_emulatedDevice = String ("");
	_encryption = Uint16(0);
	_formFactorType = Uint16(0);
	_portType = Uint16(0);
	_subsystemID = String ("");
	_thinProvisionedInitialReserve = Uint64(0);
	_thinProvisionedPoolType = Uint16(0);
	_compressedElement = Boolean(false);
	_compressionRate = Uint16(0);
	_interconnectSpeed = Uint64(0);
	_interconnectType = Uint16(0);
	_rPM = Uint32(0);
	_initialStorageTierMethodology = Uint16(0);
	_initialStorageTieringSelection = Uint16(0);
	_relativePerformanceOrderLimit = Uint16(0);
	_initialRelativePerformanceOrderSet.clear();
	_storageTieringFrozen = Boolean(false);
	_dataAvailabilityHint = Uint16(0);
	_accessRandomnessHint = Uint16(0);
	_accessDirectionHint = Uint16(0);
	_accessSizeHint.clear();
	_accessLatencyHint = Uint16(0);
	_accessBandwidthWeight = Uint16(0);
	_storageCostHint = Uint16(0);
	_storageEfficiencyHint = Uint16(0);
	
	return false;
}

Boolean UNIX_StorageSettingWithHints::finalize()
{
	return false;
}


Boolean UNIX_StorageSettingWithHints::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_StorageSettingWithHints::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StorageSettingWithHints::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StorageSettingWithHints::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StorageSettingWithHints::validateInstance()
{
	return true;
}

