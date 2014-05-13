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


UNIX_AdvancedStorageSetting::UNIX_AdvancedStorageSetting(void)
{
}

UNIX_AdvancedStorageSetting::~UNIX_AdvancedStorageSetting(void)
{
}

Boolean UNIX_AdvancedStorageSetting::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_AdvancedStorageSetting::getInstanceID() const
{
	return _instanceID;
}

void UNIX_AdvancedStorageSetting::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_AdvancedStorageSetting::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_AdvancedStorageSetting::getCaption() const
{
	return _caption;
}

void UNIX_AdvancedStorageSetting::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_AdvancedStorageSetting::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_AdvancedStorageSetting::getDescription() const
{
	return _description;
}

void UNIX_AdvancedStorageSetting::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_AdvancedStorageSetting::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_AdvancedStorageSetting::getElementName() const
{
	return _elementName;
}

void UNIX_AdvancedStorageSetting::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_AdvancedStorageSetting::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_AdvancedStorageSetting::getGeneration() const
{
	return _generation;
}

void UNIX_AdvancedStorageSetting::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_AdvancedStorageSetting::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_AdvancedStorageSetting::getConfigurationName() const
{
	return _configurationName;
}

void UNIX_AdvancedStorageSetting::setConfigurationName(String &value)
{
	_configurationName = value;
}

Boolean UNIX_AdvancedStorageSetting::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_AdvancedStorageSetting::getChangeableType() const
{
	return _changeableType;
}

void UNIX_AdvancedStorageSetting::setChangeableType(Uint16 &value)
{
	_changeableType = value;
}

Boolean UNIX_AdvancedStorageSetting::getComponentSetting(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPONENT_SETTING, getComponentSetting());
	return true;
}

Array<String> UNIX_AdvancedStorageSetting::getComponentSetting() const
{
	return _componentSetting;
}

void UNIX_AdvancedStorageSetting::setComponentSetting(Array<String> &value)
{
	_componentSetting = value;
}

Boolean UNIX_AdvancedStorageSetting::getSoID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ID, getSoID());
	return true;
}

String UNIX_AdvancedStorageSetting::getSoID() const
{
	return _soID;
}

void UNIX_AdvancedStorageSetting::setSoID(String &value)
{
	_soID = value;
}

Boolean UNIX_AdvancedStorageSetting::getSoOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ORG_ID, getSoOrgID());
	return true;
}

String UNIX_AdvancedStorageSetting::getSoOrgID() const
{
	return _soOrgID;
}

void UNIX_AdvancedStorageSetting::setSoOrgID(String &value)
{
	_soOrgID = value;
}

Boolean UNIX_AdvancedStorageSetting::getNoSinglePointOfFailure(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NO_SINGLE_POINT_OF_FAILURE, getNoSinglePointOfFailure());
	return true;
}

Boolean UNIX_AdvancedStorageSetting::getNoSinglePointOfFailure() const
{
	return _noSinglePointOfFailure;
}

void UNIX_AdvancedStorageSetting::setNoSinglePointOfFailure(Boolean &value)
{
	_noSinglePointOfFailure = value;
}

Boolean UNIX_AdvancedStorageSetting::getDataRedundancyMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_REDUNDANCY_MAX, getDataRedundancyMax());
	return true;
}

Uint16 UNIX_AdvancedStorageSetting::getDataRedundancyMax() const
{
	return _dataRedundancyMax;
}

void UNIX_AdvancedStorageSetting::setDataRedundancyMax(Uint16 &value)
{
	_dataRedundancyMax = value;
}

Boolean UNIX_AdvancedStorageSetting::getDataRedundancyMin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_REDUNDANCY_MIN, getDataRedundancyMin());
	return true;
}

Uint16 UNIX_AdvancedStorageSetting::getDataRedundancyMin() const
{
	return _dataRedundancyMin;
}

void UNIX_AdvancedStorageSetting::setDataRedundancyMin(Uint16 &value)
{
	_dataRedundancyMin = value;
}

Boolean UNIX_AdvancedStorageSetting::getDataRedundancyGoal(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_REDUNDANCY_GOAL, getDataRedundancyGoal());
	return true;
}

Uint16 UNIX_AdvancedStorageSetting::getDataRedundancyGoal() const
{
	return _dataRedundancyGoal;
}

void UNIX_AdvancedStorageSetting::setDataRedundancyGoal(Uint16 &value)
{
	_dataRedundancyGoal = value;
}

Boolean UNIX_AdvancedStorageSetting::getPackageRedundancyMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKAGE_REDUNDANCY_MAX, getPackageRedundancyMax());
	return true;
}

Uint16 UNIX_AdvancedStorageSetting::getPackageRedundancyMax() const
{
	return _packageRedundancyMax;
}

void UNIX_AdvancedStorageSetting::setPackageRedundancyMax(Uint16 &value)
{
	_packageRedundancyMax = value;
}

Boolean UNIX_AdvancedStorageSetting::getPackageRedundancyMin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKAGE_REDUNDANCY_MIN, getPackageRedundancyMin());
	return true;
}

Uint16 UNIX_AdvancedStorageSetting::getPackageRedundancyMin() const
{
	return _packageRedundancyMin;
}

void UNIX_AdvancedStorageSetting::setPackageRedundancyMin(Uint16 &value)
{
	_packageRedundancyMin = value;
}

Boolean UNIX_AdvancedStorageSetting::getPackageRedundancyGoal(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKAGE_REDUNDANCY_GOAL, getPackageRedundancyGoal());
	return true;
}

Uint16 UNIX_AdvancedStorageSetting::getPackageRedundancyGoal() const
{
	return _packageRedundancyGoal;
}

void UNIX_AdvancedStorageSetting::setPackageRedundancyGoal(Uint16 &value)
{
	_packageRedundancyGoal = value;
}

Boolean UNIX_AdvancedStorageSetting::getDeltaReservationMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELTA_RESERVATION_MAX, getDeltaReservationMax());
	return true;
}

Uint8 UNIX_AdvancedStorageSetting::getDeltaReservationMax() const
{
	return _deltaReservationMax;
}

void UNIX_AdvancedStorageSetting::setDeltaReservationMax(Uint8 &value)
{
	_deltaReservationMax = value;
}

Boolean UNIX_AdvancedStorageSetting::getDeltaReservationMin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELTA_RESERVATION_MIN, getDeltaReservationMin());
	return true;
}

Uint8 UNIX_AdvancedStorageSetting::getDeltaReservationMin() const
{
	return _deltaReservationMin;
}

void UNIX_AdvancedStorageSetting::setDeltaReservationMin(Uint8 &value)
{
	_deltaReservationMin = value;
}

Boolean UNIX_AdvancedStorageSetting::getDeltaReservationGoal(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELTA_RESERVATION_GOAL, getDeltaReservationGoal());
	return true;
}

Uint8 UNIX_AdvancedStorageSetting::getDeltaReservationGoal() const
{
	return _deltaReservationGoal;
}

void UNIX_AdvancedStorageSetting::setDeltaReservationGoal(Uint8 &value)
{
	_deltaReservationGoal = value;
}

Boolean UNIX_AdvancedStorageSetting::getExtentStripeLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENT_STRIPE_LENGTH, getExtentStripeLength());
	return true;
}

Uint16 UNIX_AdvancedStorageSetting::getExtentStripeLength() const
{
	return _extentStripeLength;
}

void UNIX_AdvancedStorageSetting::setExtentStripeLength(Uint16 &value)
{
	_extentStripeLength = value;
}

Boolean UNIX_AdvancedStorageSetting::getExtentStripeLengthMin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENT_STRIPE_LENGTH_MIN, getExtentStripeLengthMin());
	return true;
}

Uint16 UNIX_AdvancedStorageSetting::getExtentStripeLengthMin() const
{
	return _extentStripeLengthMin;
}

void UNIX_AdvancedStorageSetting::setExtentStripeLengthMin(Uint16 &value)
{
	_extentStripeLengthMin = value;
}

Boolean UNIX_AdvancedStorageSetting::getExtentStripeLengthMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENT_STRIPE_LENGTH_MAX, getExtentStripeLengthMax());
	return true;
}

Uint16 UNIX_AdvancedStorageSetting::getExtentStripeLengthMax() const
{
	return _extentStripeLengthMax;
}

void UNIX_AdvancedStorageSetting::setExtentStripeLengthMax(Uint16 &value)
{
	_extentStripeLengthMax = value;
}

Boolean UNIX_AdvancedStorageSetting::getParityLayout(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PARITY_LAYOUT, getParityLayout());
	return true;
}

Uint16 UNIX_AdvancedStorageSetting::getParityLayout() const
{
	return _parityLayout;
}

void UNIX_AdvancedStorageSetting::setParityLayout(Uint16 &value)
{
	_parityLayout = value;
}

Boolean UNIX_AdvancedStorageSetting::getUserDataStripeDepth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_DATA_STRIPE_DEPTH, getUserDataStripeDepth());
	return true;
}

Uint64 UNIX_AdvancedStorageSetting::getUserDataStripeDepth() const
{
	return _userDataStripeDepth;
}

void UNIX_AdvancedStorageSetting::setUserDataStripeDepth(Uint64 &value)
{
	_userDataStripeDepth = value;
}

Boolean UNIX_AdvancedStorageSetting::getUserDataStripeDepthMin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_DATA_STRIPE_DEPTH_MIN, getUserDataStripeDepthMin());
	return true;
}

Uint64 UNIX_AdvancedStorageSetting::getUserDataStripeDepthMin() const
{
	return _userDataStripeDepthMin;
}

void UNIX_AdvancedStorageSetting::setUserDataStripeDepthMin(Uint64 &value)
{
	_userDataStripeDepthMin = value;
}

Boolean UNIX_AdvancedStorageSetting::getUserDataStripeDepthMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_DATA_STRIPE_DEPTH_MAX, getUserDataStripeDepthMax());
	return true;
}

Uint64 UNIX_AdvancedStorageSetting::getUserDataStripeDepthMax() const
{
	return _userDataStripeDepthMax;
}

void UNIX_AdvancedStorageSetting::setUserDataStripeDepthMax(Uint64 &value)
{
	_userDataStripeDepthMax = value;
}

Boolean UNIX_AdvancedStorageSetting::getIncrementalDeltas(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCREMENTAL_DELTAS, getIncrementalDeltas());
	return true;
}

Boolean UNIX_AdvancedStorageSetting::getIncrementalDeltas() const
{
	return _incrementalDeltas;
}

void UNIX_AdvancedStorageSetting::setIncrementalDeltas(Boolean &value)
{
	_incrementalDeltas = value;
}

Boolean UNIX_AdvancedStorageSetting::getPersistentReplica(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERSISTENT_REPLICA, getPersistentReplica());
	return true;
}

Boolean UNIX_AdvancedStorageSetting::getPersistentReplica() const
{
	return _persistentReplica;
}

void UNIX_AdvancedStorageSetting::setPersistentReplica(Boolean &value)
{
	_persistentReplica = value;
}

Boolean UNIX_AdvancedStorageSetting::getUseReplicationBuffer(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USE_REPLICATION_BUFFER, getUseReplicationBuffer());
	return true;
}

Uint16 UNIX_AdvancedStorageSetting::getUseReplicationBuffer() const
{
	return _useReplicationBuffer;
}

void UNIX_AdvancedStorageSetting::setUseReplicationBuffer(Uint16 &value)
{
	_useReplicationBuffer = value;
}

Boolean UNIX_AdvancedStorageSetting::getInitialSynchronization(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INITIAL_SYNCHRONIZATION, getInitialSynchronization());
	return true;
}

Uint16 UNIX_AdvancedStorageSetting::getInitialSynchronization() const
{
	return _initialSynchronization;
}

void UNIX_AdvancedStorageSetting::setInitialSynchronization(Uint16 &value)
{
	_initialSynchronization = value;
}

Boolean UNIX_AdvancedStorageSetting::getReplicationPriority(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REPLICATION_PRIORITY, getReplicationPriority());
	return true;
}

Uint16 UNIX_AdvancedStorageSetting::getReplicationPriority() const
{
	return _replicationPriority;
}

void UNIX_AdvancedStorageSetting::setReplicationPriority(Uint16 &value)
{
	_replicationPriority = value;
}

Boolean UNIX_AdvancedStorageSetting::getSpaceLimit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SPACE_LIMIT, getSpaceLimit());
	return true;
}

Uint64 UNIX_AdvancedStorageSetting::getSpaceLimit() const
{
	return _spaceLimit;
}

void UNIX_AdvancedStorageSetting::setSpaceLimit(Uint64 &value)
{
	_spaceLimit = value;
}

Boolean UNIX_AdvancedStorageSetting::getSpaceLimitWarningThreshold(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SPACE_LIMIT_WARNING_THRESHOLD, getSpaceLimitWarningThreshold());
	return true;
}

Uint16 UNIX_AdvancedStorageSetting::getSpaceLimitWarningThreshold() const
{
	return _spaceLimitWarningThreshold;
}

void UNIX_AdvancedStorageSetting::setSpaceLimitWarningThreshold(Uint16 &value)
{
	_spaceLimitWarningThreshold = value;
}

Boolean UNIX_AdvancedStorageSetting::getLowSpaceWarningThreshold(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOW_SPACE_WARNING_THRESHOLD, getLowSpaceWarningThreshold());
	return true;
}

Uint16 UNIX_AdvancedStorageSetting::getLowSpaceWarningThreshold() const
{
	return _lowSpaceWarningThreshold;
}

void UNIX_AdvancedStorageSetting::setLowSpaceWarningThreshold(Uint16 &value)
{
	_lowSpaceWarningThreshold = value;
}

Boolean UNIX_AdvancedStorageSetting::getStorageExtentInitialUsage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STORAGE_EXTENT_INITIAL_USAGE, getStorageExtentInitialUsage());
	return true;
}

Uint16 UNIX_AdvancedStorageSetting::getStorageExtentInitialUsage() const
{
	return _storageExtentInitialUsage;
}

void UNIX_AdvancedStorageSetting::setStorageExtentInitialUsage(Uint16 &value)
{
	_storageExtentInitialUsage = value;
}

Boolean UNIX_AdvancedStorageSetting::getStoragePoolInitialUsage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STORAGE_POOL_INITIAL_USAGE, getStoragePoolInitialUsage());
	return true;
}

Uint16 UNIX_AdvancedStorageSetting::getStoragePoolInitialUsage() const
{
	return _storagePoolInitialUsage;
}

void UNIX_AdvancedStorageSetting::setStoragePoolInitialUsage(Uint16 &value)
{
	_storagePoolInitialUsage = value;
}

Boolean UNIX_AdvancedStorageSetting::getCUImage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_C_U_IMAGE, getCUImage());
	return true;
}

String UNIX_AdvancedStorageSetting::getCUImage() const
{
	return _cUImage;
}

void UNIX_AdvancedStorageSetting::setCUImage(String &value)
{
	_cUImage = value;
}

Boolean UNIX_AdvancedStorageSetting::getDataOrganization(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_ORGANIZATION, getDataOrganization());
	return true;
}

Uint16 UNIX_AdvancedStorageSetting::getDataOrganization() const
{
	return _dataOrganization;
}

void UNIX_AdvancedStorageSetting::setDataOrganization(Uint16 &value)
{
	_dataOrganization = value;
}

Boolean UNIX_AdvancedStorageSetting::getDiskType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DISK_TYPE, getDiskType());
	return true;
}

Uint16 UNIX_AdvancedStorageSetting::getDiskType() const
{
	return _diskType;
}

void UNIX_AdvancedStorageSetting::setDiskType(Uint16 &value)
{
	_diskType = value;
}

Boolean UNIX_AdvancedStorageSetting::getEmulatedDevice(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EMULATED_DEVICE, getEmulatedDevice());
	return true;
}

String UNIX_AdvancedStorageSetting::getEmulatedDevice() const
{
	return _emulatedDevice;
}

void UNIX_AdvancedStorageSetting::setEmulatedDevice(String &value)
{
	_emulatedDevice = value;
}

Boolean UNIX_AdvancedStorageSetting::getEncryption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENCRYPTION, getEncryption());
	return true;
}

Uint16 UNIX_AdvancedStorageSetting::getEncryption() const
{
	return _encryption;
}

void UNIX_AdvancedStorageSetting::setEncryption(Uint16 &value)
{
	_encryption = value;
}

Boolean UNIX_AdvancedStorageSetting::getFormFactorType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FORM_FACTOR_TYPE, getFormFactorType());
	return true;
}

Uint16 UNIX_AdvancedStorageSetting::getFormFactorType() const
{
	return _formFactorType;
}

void UNIX_AdvancedStorageSetting::setFormFactorType(Uint16 &value)
{
	_formFactorType = value;
}

Boolean UNIX_AdvancedStorageSetting::getPortType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_TYPE, getPortType());
	return true;
}

Uint16 UNIX_AdvancedStorageSetting::getPortType() const
{
	return _portType;
}

void UNIX_AdvancedStorageSetting::setPortType(Uint16 &value)
{
	_portType = value;
}

Boolean UNIX_AdvancedStorageSetting::getSubsystemID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUBSYSTEM_ID, getSubsystemID());
	return true;
}

String UNIX_AdvancedStorageSetting::getSubsystemID() const
{
	return _subsystemID;
}

void UNIX_AdvancedStorageSetting::setSubsystemID(String &value)
{
	_subsystemID = value;
}

Boolean UNIX_AdvancedStorageSetting::getThinProvisionedInitialReserve(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_THIN_PROVISIONED_INITIAL_RESERVE, getThinProvisionedInitialReserve());
	return true;
}

Uint64 UNIX_AdvancedStorageSetting::getThinProvisionedInitialReserve() const
{
	return _thinProvisionedInitialReserve;
}

void UNIX_AdvancedStorageSetting::setThinProvisionedInitialReserve(Uint64 &value)
{
	_thinProvisionedInitialReserve = value;
}

Boolean UNIX_AdvancedStorageSetting::getThinProvisionedPoolType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_THIN_PROVISIONED_POOL_TYPE, getThinProvisionedPoolType());
	return true;
}

Uint16 UNIX_AdvancedStorageSetting::getThinProvisionedPoolType() const
{
	return _thinProvisionedPoolType;
}

void UNIX_AdvancedStorageSetting::setThinProvisionedPoolType(Uint16 &value)
{
	_thinProvisionedPoolType = value;
}

Boolean UNIX_AdvancedStorageSetting::getCompressedElement(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPRESSED_ELEMENT, getCompressedElement());
	return true;
}

Boolean UNIX_AdvancedStorageSetting::getCompressedElement() const
{
	return _compressedElement;
}

void UNIX_AdvancedStorageSetting::setCompressedElement(Boolean &value)
{
	_compressedElement = value;
}

Boolean UNIX_AdvancedStorageSetting::getCompressionRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPRESSION_RATE, getCompressionRate());
	return true;
}

Uint16 UNIX_AdvancedStorageSetting::getCompressionRate() const
{
	return _compressionRate;
}

void UNIX_AdvancedStorageSetting::setCompressionRate(Uint16 &value)
{
	_compressionRate = value;
}

Boolean UNIX_AdvancedStorageSetting::getInterconnectSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INTERCONNECT_SPEED, getInterconnectSpeed());
	return true;
}

Uint64 UNIX_AdvancedStorageSetting::getInterconnectSpeed() const
{
	return _interconnectSpeed;
}

void UNIX_AdvancedStorageSetting::setInterconnectSpeed(Uint64 &value)
{
	_interconnectSpeed = value;
}

Boolean UNIX_AdvancedStorageSetting::getInterconnectType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INTERCONNECT_TYPE, getInterconnectType());
	return true;
}

Uint16 UNIX_AdvancedStorageSetting::getInterconnectType() const
{
	return _interconnectType;
}

void UNIX_AdvancedStorageSetting::setInterconnectType(Uint16 &value)
{
	_interconnectType = value;
}

Boolean UNIX_AdvancedStorageSetting::getRPM(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_R_P_M, getRPM());
	return true;
}

Uint32 UNIX_AdvancedStorageSetting::getRPM() const
{
	return _rPM;
}

void UNIX_AdvancedStorageSetting::setRPM(Uint32 &value)
{
	_rPM = value;
}

Boolean UNIX_AdvancedStorageSetting::getInitialStorageTierMethodology(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INITIAL_STORAGE_TIER_METHODOLOGY, getInitialStorageTierMethodology());
	return true;
}

Uint16 UNIX_AdvancedStorageSetting::getInitialStorageTierMethodology() const
{
	return _initialStorageTierMethodology;
}

void UNIX_AdvancedStorageSetting::setInitialStorageTierMethodology(Uint16 &value)
{
	_initialStorageTierMethodology = value;
}

Boolean UNIX_AdvancedStorageSetting::getInitialStorageTieringSelection(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INITIAL_STORAGE_TIERING_SELECTION, getInitialStorageTieringSelection());
	return true;
}

Uint16 UNIX_AdvancedStorageSetting::getInitialStorageTieringSelection() const
{
	return _initialStorageTieringSelection;
}

void UNIX_AdvancedStorageSetting::setInitialStorageTieringSelection(Uint16 &value)
{
	_initialStorageTieringSelection = value;
}

Boolean UNIX_AdvancedStorageSetting::getRelativePerformanceOrderLimit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RELATIVE_PERFORMANCE_ORDER_LIMIT, getRelativePerformanceOrderLimit());
	return true;
}

Uint16 UNIX_AdvancedStorageSetting::getRelativePerformanceOrderLimit() const
{
	return _relativePerformanceOrderLimit;
}

void UNIX_AdvancedStorageSetting::setRelativePerformanceOrderLimit(Uint16 &value)
{
	_relativePerformanceOrderLimit = value;
}

Boolean UNIX_AdvancedStorageSetting::getInitialRelativePerformanceOrderSet(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INITIAL_RELATIVE_PERFORMANCE_ORDER_SET, getInitialRelativePerformanceOrderSet());
	return true;
}

Array<Uint16> UNIX_AdvancedStorageSetting::getInitialRelativePerformanceOrderSet() const
{
	return _initialRelativePerformanceOrderSet;
}

void UNIX_AdvancedStorageSetting::setInitialRelativePerformanceOrderSet(Array<Uint16> &value)
{
	_initialRelativePerformanceOrderSet = value;
}

Boolean UNIX_AdvancedStorageSetting::getStorageTieringFrozen(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STORAGE_TIERING_FROZEN, getStorageTieringFrozen());
	return true;
}

Boolean UNIX_AdvancedStorageSetting::getStorageTieringFrozen() const
{
	return _storageTieringFrozen;
}

void UNIX_AdvancedStorageSetting::setStorageTieringFrozen(Boolean &value)
{
	_storageTieringFrozen = value;
}


void UNIX_AdvancedStorageSetting::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("AdvancedStorageSetting");
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

}

Boolean UNIX_AdvancedStorageSetting::loadInstance(const CIMInstance &instance)
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
	}
	return true;
}


Boolean UNIX_AdvancedStorageSetting::initialize()
{
	return false;
}

Boolean UNIX_AdvancedStorageSetting::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("AdvancedStorageSetting");
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
	
	return false;
}

Boolean UNIX_AdvancedStorageSetting::finalize()
{
	return false;
}


Boolean UNIX_AdvancedStorageSetting::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_AdvancedStorageSetting::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AdvancedStorageSetting::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AdvancedStorageSetting::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AdvancedStorageSetting::validateInstance()
{
	return true;
}

