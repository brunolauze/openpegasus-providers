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


UNIX_StorageSetting::UNIX_StorageSetting(void)
{
}

UNIX_StorageSetting::~UNIX_StorageSetting(void)
{
}

Boolean UNIX_StorageSetting::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_StorageSetting::getInstanceID() const
{
	return _instanceID;
}

void UNIX_StorageSetting::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_StorageSetting::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_StorageSetting::getCaption() const
{
	return _caption;
}

void UNIX_StorageSetting::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_StorageSetting::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_StorageSetting::getDescription() const
{
	return _description;
}

void UNIX_StorageSetting::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_StorageSetting::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_StorageSetting::getElementName() const
{
	return _elementName;
}

void UNIX_StorageSetting::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_StorageSetting::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_StorageSetting::getGeneration() const
{
	return _generation;
}

void UNIX_StorageSetting::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_StorageSetting::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_StorageSetting::getConfigurationName() const
{
	return _configurationName;
}

void UNIX_StorageSetting::setConfigurationName(String &value)
{
	_configurationName = value;
}

Boolean UNIX_StorageSetting::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_StorageSetting::getChangeableType() const
{
	return _changeableType;
}

void UNIX_StorageSetting::setChangeableType(Uint16 &value)
{
	_changeableType = value;
}

Boolean UNIX_StorageSetting::getComponentSetting(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPONENT_SETTING, getComponentSetting());
	return true;
}

Array<String> UNIX_StorageSetting::getComponentSetting() const
{
	return _componentSetting;
}

void UNIX_StorageSetting::setComponentSetting(Array<String> &value)
{
	_componentSetting = value;
}

Boolean UNIX_StorageSetting::getSoID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ID, getSoID());
	return true;
}

String UNIX_StorageSetting::getSoID() const
{
	return _soID;
}

void UNIX_StorageSetting::setSoID(String &value)
{
	_soID = value;
}

Boolean UNIX_StorageSetting::getSoOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ORG_ID, getSoOrgID());
	return true;
}

String UNIX_StorageSetting::getSoOrgID() const
{
	return _soOrgID;
}

void UNIX_StorageSetting::setSoOrgID(String &value)
{
	_soOrgID = value;
}

Boolean UNIX_StorageSetting::getNoSinglePointOfFailure(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NO_SINGLE_POINT_OF_FAILURE, getNoSinglePointOfFailure());
	return true;
}

Boolean UNIX_StorageSetting::getNoSinglePointOfFailure() const
{
	return _noSinglePointOfFailure;
}

void UNIX_StorageSetting::setNoSinglePointOfFailure(Boolean &value)
{
	_noSinglePointOfFailure = value;
}

Boolean UNIX_StorageSetting::getDataRedundancyMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_REDUNDANCY_MAX, getDataRedundancyMax());
	return true;
}

Uint16 UNIX_StorageSetting::getDataRedundancyMax() const
{
	return _dataRedundancyMax;
}

void UNIX_StorageSetting::setDataRedundancyMax(Uint16 &value)
{
	_dataRedundancyMax = value;
}

Boolean UNIX_StorageSetting::getDataRedundancyMin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_REDUNDANCY_MIN, getDataRedundancyMin());
	return true;
}

Uint16 UNIX_StorageSetting::getDataRedundancyMin() const
{
	return _dataRedundancyMin;
}

void UNIX_StorageSetting::setDataRedundancyMin(Uint16 &value)
{
	_dataRedundancyMin = value;
}

Boolean UNIX_StorageSetting::getDataRedundancyGoal(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_REDUNDANCY_GOAL, getDataRedundancyGoal());
	return true;
}

Uint16 UNIX_StorageSetting::getDataRedundancyGoal() const
{
	return _dataRedundancyGoal;
}

void UNIX_StorageSetting::setDataRedundancyGoal(Uint16 &value)
{
	_dataRedundancyGoal = value;
}

Boolean UNIX_StorageSetting::getPackageRedundancyMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKAGE_REDUNDANCY_MAX, getPackageRedundancyMax());
	return true;
}

Uint16 UNIX_StorageSetting::getPackageRedundancyMax() const
{
	return _packageRedundancyMax;
}

void UNIX_StorageSetting::setPackageRedundancyMax(Uint16 &value)
{
	_packageRedundancyMax = value;
}

Boolean UNIX_StorageSetting::getPackageRedundancyMin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKAGE_REDUNDANCY_MIN, getPackageRedundancyMin());
	return true;
}

Uint16 UNIX_StorageSetting::getPackageRedundancyMin() const
{
	return _packageRedundancyMin;
}

void UNIX_StorageSetting::setPackageRedundancyMin(Uint16 &value)
{
	_packageRedundancyMin = value;
}

Boolean UNIX_StorageSetting::getPackageRedundancyGoal(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKAGE_REDUNDANCY_GOAL, getPackageRedundancyGoal());
	return true;
}

Uint16 UNIX_StorageSetting::getPackageRedundancyGoal() const
{
	return _packageRedundancyGoal;
}

void UNIX_StorageSetting::setPackageRedundancyGoal(Uint16 &value)
{
	_packageRedundancyGoal = value;
}

Boolean UNIX_StorageSetting::getDeltaReservationMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELTA_RESERVATION_MAX, getDeltaReservationMax());
	return true;
}

Uint8 UNIX_StorageSetting::getDeltaReservationMax() const
{
	return _deltaReservationMax;
}

void UNIX_StorageSetting::setDeltaReservationMax(Uint8 &value)
{
	_deltaReservationMax = value;
}

Boolean UNIX_StorageSetting::getDeltaReservationMin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELTA_RESERVATION_MIN, getDeltaReservationMin());
	return true;
}

Uint8 UNIX_StorageSetting::getDeltaReservationMin() const
{
	return _deltaReservationMin;
}

void UNIX_StorageSetting::setDeltaReservationMin(Uint8 &value)
{
	_deltaReservationMin = value;
}

Boolean UNIX_StorageSetting::getDeltaReservationGoal(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELTA_RESERVATION_GOAL, getDeltaReservationGoal());
	return true;
}

Uint8 UNIX_StorageSetting::getDeltaReservationGoal() const
{
	return _deltaReservationGoal;
}

void UNIX_StorageSetting::setDeltaReservationGoal(Uint8 &value)
{
	_deltaReservationGoal = value;
}

Boolean UNIX_StorageSetting::getExtentStripeLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENT_STRIPE_LENGTH, getExtentStripeLength());
	return true;
}

Uint16 UNIX_StorageSetting::getExtentStripeLength() const
{
	return _extentStripeLength;
}

void UNIX_StorageSetting::setExtentStripeLength(Uint16 &value)
{
	_extentStripeLength = value;
}

Boolean UNIX_StorageSetting::getExtentStripeLengthMin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENT_STRIPE_LENGTH_MIN, getExtentStripeLengthMin());
	return true;
}

Uint16 UNIX_StorageSetting::getExtentStripeLengthMin() const
{
	return _extentStripeLengthMin;
}

void UNIX_StorageSetting::setExtentStripeLengthMin(Uint16 &value)
{
	_extentStripeLengthMin = value;
}

Boolean UNIX_StorageSetting::getExtentStripeLengthMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENT_STRIPE_LENGTH_MAX, getExtentStripeLengthMax());
	return true;
}

Uint16 UNIX_StorageSetting::getExtentStripeLengthMax() const
{
	return _extentStripeLengthMax;
}

void UNIX_StorageSetting::setExtentStripeLengthMax(Uint16 &value)
{
	_extentStripeLengthMax = value;
}

Boolean UNIX_StorageSetting::getParityLayout(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PARITY_LAYOUT, getParityLayout());
	return true;
}

Uint16 UNIX_StorageSetting::getParityLayout() const
{
	return _parityLayout;
}

void UNIX_StorageSetting::setParityLayout(Uint16 &value)
{
	_parityLayout = value;
}

Boolean UNIX_StorageSetting::getUserDataStripeDepth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_DATA_STRIPE_DEPTH, getUserDataStripeDepth());
	return true;
}

Uint64 UNIX_StorageSetting::getUserDataStripeDepth() const
{
	return _userDataStripeDepth;
}

void UNIX_StorageSetting::setUserDataStripeDepth(Uint64 &value)
{
	_userDataStripeDepth = value;
}

Boolean UNIX_StorageSetting::getUserDataStripeDepthMin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_DATA_STRIPE_DEPTH_MIN, getUserDataStripeDepthMin());
	return true;
}

Uint64 UNIX_StorageSetting::getUserDataStripeDepthMin() const
{
	return _userDataStripeDepthMin;
}

void UNIX_StorageSetting::setUserDataStripeDepthMin(Uint64 &value)
{
	_userDataStripeDepthMin = value;
}

Boolean UNIX_StorageSetting::getUserDataStripeDepthMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_DATA_STRIPE_DEPTH_MAX, getUserDataStripeDepthMax());
	return true;
}

Uint64 UNIX_StorageSetting::getUserDataStripeDepthMax() const
{
	return _userDataStripeDepthMax;
}

void UNIX_StorageSetting::setUserDataStripeDepthMax(Uint64 &value)
{
	_userDataStripeDepthMax = value;
}

Boolean UNIX_StorageSetting::getIncrementalDeltas(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCREMENTAL_DELTAS, getIncrementalDeltas());
	return true;
}

Boolean UNIX_StorageSetting::getIncrementalDeltas() const
{
	return _incrementalDeltas;
}

void UNIX_StorageSetting::setIncrementalDeltas(Boolean &value)
{
	_incrementalDeltas = value;
}

Boolean UNIX_StorageSetting::getPersistentReplica(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERSISTENT_REPLICA, getPersistentReplica());
	return true;
}

Boolean UNIX_StorageSetting::getPersistentReplica() const
{
	return _persistentReplica;
}

void UNIX_StorageSetting::setPersistentReplica(Boolean &value)
{
	_persistentReplica = value;
}

Boolean UNIX_StorageSetting::getUseReplicationBuffer(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USE_REPLICATION_BUFFER, getUseReplicationBuffer());
	return true;
}

Uint16 UNIX_StorageSetting::getUseReplicationBuffer() const
{
	return _useReplicationBuffer;
}

void UNIX_StorageSetting::setUseReplicationBuffer(Uint16 &value)
{
	_useReplicationBuffer = value;
}

Boolean UNIX_StorageSetting::getInitialSynchronization(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INITIAL_SYNCHRONIZATION, getInitialSynchronization());
	return true;
}

Uint16 UNIX_StorageSetting::getInitialSynchronization() const
{
	return _initialSynchronization;
}

void UNIX_StorageSetting::setInitialSynchronization(Uint16 &value)
{
	_initialSynchronization = value;
}

Boolean UNIX_StorageSetting::getReplicationPriority(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REPLICATION_PRIORITY, getReplicationPriority());
	return true;
}

Uint16 UNIX_StorageSetting::getReplicationPriority() const
{
	return _replicationPriority;
}

void UNIX_StorageSetting::setReplicationPriority(Uint16 &value)
{
	_replicationPriority = value;
}

Boolean UNIX_StorageSetting::getSpaceLimit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SPACE_LIMIT, getSpaceLimit());
	return true;
}

Uint64 UNIX_StorageSetting::getSpaceLimit() const
{
	return _spaceLimit;
}

void UNIX_StorageSetting::setSpaceLimit(Uint64 &value)
{
	_spaceLimit = value;
}

Boolean UNIX_StorageSetting::getSpaceLimitWarningThreshold(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SPACE_LIMIT_WARNING_THRESHOLD, getSpaceLimitWarningThreshold());
	return true;
}

Uint16 UNIX_StorageSetting::getSpaceLimitWarningThreshold() const
{
	return _spaceLimitWarningThreshold;
}

void UNIX_StorageSetting::setSpaceLimitWarningThreshold(Uint16 &value)
{
	_spaceLimitWarningThreshold = value;
}

Boolean UNIX_StorageSetting::getLowSpaceWarningThreshold(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOW_SPACE_WARNING_THRESHOLD, getLowSpaceWarningThreshold());
	return true;
}

Uint16 UNIX_StorageSetting::getLowSpaceWarningThreshold() const
{
	return _lowSpaceWarningThreshold;
}

void UNIX_StorageSetting::setLowSpaceWarningThreshold(Uint16 &value)
{
	_lowSpaceWarningThreshold = value;
}

Boolean UNIX_StorageSetting::getStorageExtentInitialUsage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STORAGE_EXTENT_INITIAL_USAGE, getStorageExtentInitialUsage());
	return true;
}

Uint16 UNIX_StorageSetting::getStorageExtentInitialUsage() const
{
	return _storageExtentInitialUsage;
}

void UNIX_StorageSetting::setStorageExtentInitialUsage(Uint16 &value)
{
	_storageExtentInitialUsage = value;
}

Boolean UNIX_StorageSetting::getStoragePoolInitialUsage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STORAGE_POOL_INITIAL_USAGE, getStoragePoolInitialUsage());
	return true;
}

Uint16 UNIX_StorageSetting::getStoragePoolInitialUsage() const
{
	return _storagePoolInitialUsage;
}

void UNIX_StorageSetting::setStoragePoolInitialUsage(Uint16 &value)
{
	_storagePoolInitialUsage = value;
}

Boolean UNIX_StorageSetting::getCUImage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_C_U_IMAGE, getCUImage());
	return true;
}

String UNIX_StorageSetting::getCUImage() const
{
	return _cUImage;
}

void UNIX_StorageSetting::setCUImage(String &value)
{
	_cUImage = value;
}

Boolean UNIX_StorageSetting::getDataOrganization(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_ORGANIZATION, getDataOrganization());
	return true;
}

Uint16 UNIX_StorageSetting::getDataOrganization() const
{
	return _dataOrganization;
}

void UNIX_StorageSetting::setDataOrganization(Uint16 &value)
{
	_dataOrganization = value;
}

Boolean UNIX_StorageSetting::getDiskType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DISK_TYPE, getDiskType());
	return true;
}

Uint16 UNIX_StorageSetting::getDiskType() const
{
	return _diskType;
}

void UNIX_StorageSetting::setDiskType(Uint16 &value)
{
	_diskType = value;
}

Boolean UNIX_StorageSetting::getEmulatedDevice(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EMULATED_DEVICE, getEmulatedDevice());
	return true;
}

String UNIX_StorageSetting::getEmulatedDevice() const
{
	return _emulatedDevice;
}

void UNIX_StorageSetting::setEmulatedDevice(String &value)
{
	_emulatedDevice = value;
}

Boolean UNIX_StorageSetting::getEncryption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENCRYPTION, getEncryption());
	return true;
}

Uint16 UNIX_StorageSetting::getEncryption() const
{
	return _encryption;
}

void UNIX_StorageSetting::setEncryption(Uint16 &value)
{
	_encryption = value;
}

Boolean UNIX_StorageSetting::getFormFactorType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FORM_FACTOR_TYPE, getFormFactorType());
	return true;
}

Uint16 UNIX_StorageSetting::getFormFactorType() const
{
	return _formFactorType;
}

void UNIX_StorageSetting::setFormFactorType(Uint16 &value)
{
	_formFactorType = value;
}

Boolean UNIX_StorageSetting::getPortType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_TYPE, getPortType());
	return true;
}

Uint16 UNIX_StorageSetting::getPortType() const
{
	return _portType;
}

void UNIX_StorageSetting::setPortType(Uint16 &value)
{
	_portType = value;
}

Boolean UNIX_StorageSetting::getSubsystemID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUBSYSTEM_ID, getSubsystemID());
	return true;
}

String UNIX_StorageSetting::getSubsystemID() const
{
	return _subsystemID;
}

void UNIX_StorageSetting::setSubsystemID(String &value)
{
	_subsystemID = value;
}

Boolean UNIX_StorageSetting::getThinProvisionedInitialReserve(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_THIN_PROVISIONED_INITIAL_RESERVE, getThinProvisionedInitialReserve());
	return true;
}

Uint64 UNIX_StorageSetting::getThinProvisionedInitialReserve() const
{
	return _thinProvisionedInitialReserve;
}

void UNIX_StorageSetting::setThinProvisionedInitialReserve(Uint64 &value)
{
	_thinProvisionedInitialReserve = value;
}

Boolean UNIX_StorageSetting::getThinProvisionedPoolType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_THIN_PROVISIONED_POOL_TYPE, getThinProvisionedPoolType());
	return true;
}

Uint16 UNIX_StorageSetting::getThinProvisionedPoolType() const
{
	return _thinProvisionedPoolType;
}

void UNIX_StorageSetting::setThinProvisionedPoolType(Uint16 &value)
{
	_thinProvisionedPoolType = value;
}

Boolean UNIX_StorageSetting::getCompressedElement(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPRESSED_ELEMENT, getCompressedElement());
	return true;
}

Boolean UNIX_StorageSetting::getCompressedElement() const
{
	return _compressedElement;
}

void UNIX_StorageSetting::setCompressedElement(Boolean &value)
{
	_compressedElement = value;
}

Boolean UNIX_StorageSetting::getCompressionRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPRESSION_RATE, getCompressionRate());
	return true;
}

Uint16 UNIX_StorageSetting::getCompressionRate() const
{
	return _compressionRate;
}

void UNIX_StorageSetting::setCompressionRate(Uint16 &value)
{
	_compressionRate = value;
}

Boolean UNIX_StorageSetting::getInterconnectSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INTERCONNECT_SPEED, getInterconnectSpeed());
	return true;
}

Uint64 UNIX_StorageSetting::getInterconnectSpeed() const
{
	return _interconnectSpeed;
}

void UNIX_StorageSetting::setInterconnectSpeed(Uint64 &value)
{
	_interconnectSpeed = value;
}

Boolean UNIX_StorageSetting::getInterconnectType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INTERCONNECT_TYPE, getInterconnectType());
	return true;
}

Uint16 UNIX_StorageSetting::getInterconnectType() const
{
	return _interconnectType;
}

void UNIX_StorageSetting::setInterconnectType(Uint16 &value)
{
	_interconnectType = value;
}

Boolean UNIX_StorageSetting::getRPM(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_R_P_M, getRPM());
	return true;
}

Uint32 UNIX_StorageSetting::getRPM() const
{
	return _rPM;
}

void UNIX_StorageSetting::setRPM(Uint32 &value)
{
	_rPM = value;
}


void UNIX_StorageSetting::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("StorageSetting");
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

}

Boolean UNIX_StorageSetting::loadInstance(const CIMInstance &instance)
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
	}
	return true;
}


Boolean UNIX_StorageSetting::initialize()
{
	return false;
}

Boolean UNIX_StorageSetting::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("StorageSetting");
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
	
	return false;
}

Boolean UNIX_StorageSetting::finalize()
{
	return false;
}


Boolean UNIX_StorageSetting::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_StorageSetting::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StorageSetting::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StorageSetting::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StorageSetting::validateInstance()
{
	return true;
}

