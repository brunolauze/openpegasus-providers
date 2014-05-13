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


/* **** Version *** */
/*
2.35.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::StorageServices
*/


/* **** Description *** */
/*
StorageSetting is roughly equivalent to a Service Level Agreement (SLA) It defines the characteristics, qualities of service and goals when used in a CreateOrModifyElement FromStoragePool or CreateOrModifyStoragePool method in the StorageConfigurationService. It specifies a series of properties with Maximum and Minimum values that define the (inclusive) bounds that the object should maintain. Note that the setting is associated to a StorageVolume or LogicalDisk, using ElementSetting. 
The use of these properties differs depending on whether the StorageSetting instance is being used as a goal for a configuration operation or being used as a Service Level Agreement for a created Volume. In addition the properties fall into two categories: The QOS properties(PackageRedundancy, Data Redundancy, & NoSinglePointOfFailure) and the Detailed RAID properties(ExtentStripeLength, ParityLayout, and UserDataStripeDepth). In a Setting used as a goal, the QOS properties are required as a set; The Detailed RAID properties(if supported as indicated by the scoping StorageCapabilities instance) may be used optionally in any combination. The implementation MUST supply it's own best practice in the case where one or more supported RAID properties are not supplied. In this situation the use of StorageSettingWithHints can be useful to provide direction to the implementation. 
In a Setting used as a service agreement for a Volume, the QOS properties reflect the Service Level Agreement, with goal, min, & max. The actual current service level is exposed by corresponding values in StorageExtent. 
The Detailed RAID properties, by contrast, reflect specific values that reflect the RAID construction of the Volume. Only the primary values are meaningful; Min and Max are set to match. 
Certain StorageSetting instances may be classed as "Fixed", by using the "ChangeableType" property, indicating the setting is preset. Such settings are used when the possible setting variations are low enough to be instantiated in their entirety. The StorageCapabilities "CreateSetting" method MAY NOT be used to return settings that are not changeable. 
Other StorageSetting instances are created using the "CreateSetting" method. If the capabilities specifies ranges, then the setting can be used by a client to narrow the range to particular values within the range. In other words, the capabilities MAY be broad, but the related setting MUST be as capable or less capable, that is more narrowly defined, before it is used to create or modify resources. 
These created StorageSetting instances MUST have their "ChangeableType" property = 1, "Changeable - Transient". 
GeneratedSettings MAY not remain after the restart or reset of the implementation. They may be deleted by implementation at any time. A reasonable minimal time to retain the generated transient settings is five minutes, although there is no minimal retention time.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_SettingData:
				ConfigurationName String
				ChangeableType UInt16
				ComponentSetting String
				SoID String
				SoOrgID String

			UNIX_StorageSetting:
				NoSinglePointOfFailure Boolean
				DataRedundancyMax UInt16
				DataRedundancyMin UInt16
				DataRedundancyGoal UInt16
				PackageRedundancyMax UInt16
				PackageRedundancyMin UInt16
				PackageRedundancyGoal UInt16
				DeltaReservationMax UInt8
				DeltaReservationMin UInt8
				DeltaReservationGoal UInt8
				ExtentStripeLength UInt16
				ExtentStripeLengthMin UInt16
				ExtentStripeLengthMax UInt16
				ParityLayout UInt16
				UserDataStripeDepth UInt64
				UserDataStripeDepthMin UInt64
				UserDataStripeDepthMax UInt64
				IncrementalDeltas Boolean
				PersistentReplica Boolean
				UseReplicationBuffer UInt16
				InitialSynchronization UInt16
				ReplicationPriority UInt16
				SpaceLimit UInt64
				SpaceLimitWarningThreshold UInt16
				LowSpaceWarningThreshold UInt16
				StorageExtentInitialUsage UInt16
				StoragePoolInitialUsage UInt16
				CUImage String
				DataOrganization UInt16
				DiskType UInt16
				EmulatedDevice String
				Encryption UInt16
				FormFactorType UInt16
				PortType UInt16
				SubsystemID String
				ThinProvisionedInitialReserve UInt64
				ThinProvisionedPoolType UInt16
				CompressedElement Boolean
				CompressionRate UInt16
				InterconnectSpeed UInt64
				InterconnectType UInt16
				RPM UInt32


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_SettingData:

			UNIX_StorageSetting:


*/

#ifndef __UNIX_STORAGESETTING_H
#define __UNIX_STORAGESETTING_H


#include "CIM_SettingData.h"

#include "UNIX_StorageSettingDeps.h"


#ifndef PROPERTY_NO_SINGLE_POINT_OF_FAILURE
#define PROPERTY_NO_SINGLE_POINT_OF_FAILURE \
					"NoSinglePointOfFailure"
#endif

#ifndef PROPERTY_DATA_REDUNDANCY_MAX
#define PROPERTY_DATA_REDUNDANCY_MAX \
					"DataRedundancyMax"
#endif

#ifndef PROPERTY_DATA_REDUNDANCY_MIN
#define PROPERTY_DATA_REDUNDANCY_MIN \
					"DataRedundancyMin"
#endif

#ifndef PROPERTY_DATA_REDUNDANCY_GOAL
#define PROPERTY_DATA_REDUNDANCY_GOAL \
					"DataRedundancyGoal"
#endif

#ifndef PROPERTY_PACKAGE_REDUNDANCY_MAX
#define PROPERTY_PACKAGE_REDUNDANCY_MAX \
					"PackageRedundancyMax"
#endif

#ifndef PROPERTY_PACKAGE_REDUNDANCY_MIN
#define PROPERTY_PACKAGE_REDUNDANCY_MIN \
					"PackageRedundancyMin"
#endif

#ifndef PROPERTY_PACKAGE_REDUNDANCY_GOAL
#define PROPERTY_PACKAGE_REDUNDANCY_GOAL \
					"PackageRedundancyGoal"
#endif

#ifndef PROPERTY_DELTA_RESERVATION_MAX
#define PROPERTY_DELTA_RESERVATION_MAX \
					"DeltaReservationMax"
#endif

#ifndef PROPERTY_DELTA_RESERVATION_MIN
#define PROPERTY_DELTA_RESERVATION_MIN \
					"DeltaReservationMin"
#endif

#ifndef PROPERTY_DELTA_RESERVATION_GOAL
#define PROPERTY_DELTA_RESERVATION_GOAL \
					"DeltaReservationGoal"
#endif

#ifndef PROPERTY_EXTENT_STRIPE_LENGTH
#define PROPERTY_EXTENT_STRIPE_LENGTH \
					"ExtentStripeLength"
#endif

#ifndef PROPERTY_EXTENT_STRIPE_LENGTH_MIN
#define PROPERTY_EXTENT_STRIPE_LENGTH_MIN \
					"ExtentStripeLengthMin"
#endif

#ifndef PROPERTY_EXTENT_STRIPE_LENGTH_MAX
#define PROPERTY_EXTENT_STRIPE_LENGTH_MAX \
					"ExtentStripeLengthMax"
#endif

#ifndef PROPERTY_PARITY_LAYOUT
#define PROPERTY_PARITY_LAYOUT \
					"ParityLayout"
#endif

#ifndef PROPERTY_USER_DATA_STRIPE_DEPTH
#define PROPERTY_USER_DATA_STRIPE_DEPTH \
					"UserDataStripeDepth"
#endif

#ifndef PROPERTY_USER_DATA_STRIPE_DEPTH_MIN
#define PROPERTY_USER_DATA_STRIPE_DEPTH_MIN \
					"UserDataStripeDepthMin"
#endif

#ifndef PROPERTY_USER_DATA_STRIPE_DEPTH_MAX
#define PROPERTY_USER_DATA_STRIPE_DEPTH_MAX \
					"UserDataStripeDepthMax"
#endif

#ifndef PROPERTY_INCREMENTAL_DELTAS
#define PROPERTY_INCREMENTAL_DELTAS \
					"IncrementalDeltas"
#endif

#ifndef PROPERTY_PERSISTENT_REPLICA
#define PROPERTY_PERSISTENT_REPLICA \
					"PersistentReplica"
#endif

#ifndef PROPERTY_USE_REPLICATION_BUFFER
#define PROPERTY_USE_REPLICATION_BUFFER \
					"UseReplicationBuffer"
#endif

#ifndef PROPERTY_INITIAL_SYNCHRONIZATION
#define PROPERTY_INITIAL_SYNCHRONIZATION \
					"InitialSynchronization"
#endif

#ifndef PROPERTY_REPLICATION_PRIORITY
#define PROPERTY_REPLICATION_PRIORITY \
					"ReplicationPriority"
#endif

#ifndef PROPERTY_SPACE_LIMIT
#define PROPERTY_SPACE_LIMIT \
					"SpaceLimit"
#endif

#ifndef PROPERTY_SPACE_LIMIT_WARNING_THRESHOLD
#define PROPERTY_SPACE_LIMIT_WARNING_THRESHOLD \
					"SpaceLimitWarningThreshold"
#endif

#ifndef PROPERTY_LOW_SPACE_WARNING_THRESHOLD
#define PROPERTY_LOW_SPACE_WARNING_THRESHOLD \
					"LowSpaceWarningThreshold"
#endif

#ifndef PROPERTY_STORAGE_EXTENT_INITIAL_USAGE
#define PROPERTY_STORAGE_EXTENT_INITIAL_USAGE \
					"StorageExtentInitialUsage"
#endif

#ifndef PROPERTY_STORAGE_POOL_INITIAL_USAGE
#define PROPERTY_STORAGE_POOL_INITIAL_USAGE \
					"StoragePoolInitialUsage"
#endif

#ifndef PROPERTY_C_U_IMAGE
#define PROPERTY_C_U_IMAGE \
					"CUImage"
#endif

#ifndef PROPERTY_DATA_ORGANIZATION
#define PROPERTY_DATA_ORGANIZATION \
					"DataOrganization"
#endif

#ifndef PROPERTY_DISK_TYPE
#define PROPERTY_DISK_TYPE \
					"DiskType"
#endif

#ifndef PROPERTY_EMULATED_DEVICE
#define PROPERTY_EMULATED_DEVICE \
					"EmulatedDevice"
#endif

#ifndef PROPERTY_ENCRYPTION
#define PROPERTY_ENCRYPTION \
					"Encryption"
#endif

#ifndef PROPERTY_FORM_FACTOR_TYPE
#define PROPERTY_FORM_FACTOR_TYPE \
					"FormFactorType"
#endif

#ifndef PROPERTY_PORT_TYPE
#define PROPERTY_PORT_TYPE \
					"PortType"
#endif

#ifndef PROPERTY_SUBSYSTEM_ID
#define PROPERTY_SUBSYSTEM_ID \
					"SubsystemID"
#endif

#ifndef PROPERTY_THIN_PROVISIONED_INITIAL_RESERVE
#define PROPERTY_THIN_PROVISIONED_INITIAL_RESERVE \
					"ThinProvisionedInitialReserve"
#endif

#ifndef PROPERTY_THIN_PROVISIONED_POOL_TYPE
#define PROPERTY_THIN_PROVISIONED_POOL_TYPE \
					"ThinProvisionedPoolType"
#endif

#ifndef PROPERTY_COMPRESSED_ELEMENT
#define PROPERTY_COMPRESSED_ELEMENT \
					"CompressedElement"
#endif

#ifndef PROPERTY_COMPRESSION_RATE
#define PROPERTY_COMPRESSION_RATE \
					"CompressionRate"
#endif

#ifndef PROPERTY_INTERCONNECT_SPEED
#define PROPERTY_INTERCONNECT_SPEED \
					"InterconnectSpeed"
#endif

#ifndef PROPERTY_INTERCONNECT_TYPE
#define PROPERTY_INTERCONNECT_TYPE \
					"InterconnectType"
#endif

#ifndef PROPERTY_R_P_M
#define PROPERTY_R_P_M \
					"RPM"
#endif



class UNIX_StorageSetting :
	public CIM_SettingData
{
public:

	UNIX_StorageSetting();
	~UNIX_StorageSetting();

	virtual Boolean initialize();
	virtual Boolean load(int&);
	virtual Boolean finalize();
	virtual Boolean find(const Array<CIMKeyBinding>&);
	virtual Boolean validateKey(CIMKeyBinding&) const;
	virtual void setScope(CIMName);
	virtual void setCIMOMHandle(CIMOMHandle&);
	virtual void clearInstance();
	virtual Boolean loadInstance(const CIMInstance&);
	virtual Boolean createInstance(const OperationContext&);
	virtual Boolean modifyInstance(const OperationContext&);
	virtual Boolean deleteInstance(const OperationContext&);
	virtual Boolean validateInstance();

	virtual Boolean getInstanceID(CIMProperty&) const;
	virtual String getInstanceID() const;
	virtual void setInstanceID(String&);
	virtual Boolean getCaption(CIMProperty&) const;
	virtual String getCaption() const;
	virtual void setCaption(String&);
	virtual Boolean getDescription(CIMProperty&) const;
	virtual String getDescription() const;
	virtual void setDescription(String&);
	virtual Boolean getElementName(CIMProperty&) const;
	virtual String getElementName() const;
	virtual void setElementName(String&);
	virtual Boolean getGeneration(CIMProperty&) const;
	virtual Uint64 getGeneration() const;
	virtual void setGeneration(Uint64&);
	virtual Boolean getConfigurationName(CIMProperty&) const;
	virtual String getConfigurationName() const;
	virtual void setConfigurationName(String&);
	virtual Boolean getChangeableType(CIMProperty&) const;
	virtual Uint16 getChangeableType() const;
	virtual void setChangeableType(Uint16&);
	virtual Boolean getComponentSetting(CIMProperty&) const;
	virtual Array<String> getComponentSetting() const;
	virtual void setComponentSetting(Array<String>&);
	virtual Boolean getSoID(CIMProperty&) const;
	virtual String getSoID() const;
	virtual void setSoID(String&);
	virtual Boolean getSoOrgID(CIMProperty&) const;
	virtual String getSoOrgID() const;
	virtual void setSoOrgID(String&);
	virtual Boolean getNoSinglePointOfFailure(CIMProperty&) const;
	virtual Boolean getNoSinglePointOfFailure() const;
	virtual void setNoSinglePointOfFailure(Boolean&);
	virtual Boolean getDataRedundancyMax(CIMProperty&) const;
	virtual Uint16 getDataRedundancyMax() const;
	virtual void setDataRedundancyMax(Uint16&);
	virtual Boolean getDataRedundancyMin(CIMProperty&) const;
	virtual Uint16 getDataRedundancyMin() const;
	virtual void setDataRedundancyMin(Uint16&);
	virtual Boolean getDataRedundancyGoal(CIMProperty&) const;
	virtual Uint16 getDataRedundancyGoal() const;
	virtual void setDataRedundancyGoal(Uint16&);
	virtual Boolean getPackageRedundancyMax(CIMProperty&) const;
	virtual Uint16 getPackageRedundancyMax() const;
	virtual void setPackageRedundancyMax(Uint16&);
	virtual Boolean getPackageRedundancyMin(CIMProperty&) const;
	virtual Uint16 getPackageRedundancyMin() const;
	virtual void setPackageRedundancyMin(Uint16&);
	virtual Boolean getPackageRedundancyGoal(CIMProperty&) const;
	virtual Uint16 getPackageRedundancyGoal() const;
	virtual void setPackageRedundancyGoal(Uint16&);
	virtual Boolean getDeltaReservationMax(CIMProperty&) const;
	virtual Uint8 getDeltaReservationMax() const;
	virtual void setDeltaReservationMax(Uint8&);
	virtual Boolean getDeltaReservationMin(CIMProperty&) const;
	virtual Uint8 getDeltaReservationMin() const;
	virtual void setDeltaReservationMin(Uint8&);
	virtual Boolean getDeltaReservationGoal(CIMProperty&) const;
	virtual Uint8 getDeltaReservationGoal() const;
	virtual void setDeltaReservationGoal(Uint8&);
	virtual Boolean getExtentStripeLength(CIMProperty&) const;
	virtual Uint16 getExtentStripeLength() const;
	virtual void setExtentStripeLength(Uint16&);
	virtual Boolean getExtentStripeLengthMin(CIMProperty&) const;
	virtual Uint16 getExtentStripeLengthMin() const;
	virtual void setExtentStripeLengthMin(Uint16&);
	virtual Boolean getExtentStripeLengthMax(CIMProperty&) const;
	virtual Uint16 getExtentStripeLengthMax() const;
	virtual void setExtentStripeLengthMax(Uint16&);
	virtual Boolean getParityLayout(CIMProperty&) const;
	virtual Uint16 getParityLayout() const;
	virtual void setParityLayout(Uint16&);
	virtual Boolean getUserDataStripeDepth(CIMProperty&) const;
	virtual Uint64 getUserDataStripeDepth() const;
	virtual void setUserDataStripeDepth(Uint64&);
	virtual Boolean getUserDataStripeDepthMin(CIMProperty&) const;
	virtual Uint64 getUserDataStripeDepthMin() const;
	virtual void setUserDataStripeDepthMin(Uint64&);
	virtual Boolean getUserDataStripeDepthMax(CIMProperty&) const;
	virtual Uint64 getUserDataStripeDepthMax() const;
	virtual void setUserDataStripeDepthMax(Uint64&);
	virtual Boolean getIncrementalDeltas(CIMProperty&) const;
	virtual Boolean getIncrementalDeltas() const;
	virtual void setIncrementalDeltas(Boolean&);
	virtual Boolean getPersistentReplica(CIMProperty&) const;
	virtual Boolean getPersistentReplica() const;
	virtual void setPersistentReplica(Boolean&);
	virtual Boolean getUseReplicationBuffer(CIMProperty&) const;
	virtual Uint16 getUseReplicationBuffer() const;
	virtual void setUseReplicationBuffer(Uint16&);
	virtual Boolean getInitialSynchronization(CIMProperty&) const;
	virtual Uint16 getInitialSynchronization() const;
	virtual void setInitialSynchronization(Uint16&);
	virtual Boolean getReplicationPriority(CIMProperty&) const;
	virtual Uint16 getReplicationPriority() const;
	virtual void setReplicationPriority(Uint16&);
	virtual Boolean getSpaceLimit(CIMProperty&) const;
	virtual Uint64 getSpaceLimit() const;
	virtual void setSpaceLimit(Uint64&);
	virtual Boolean getSpaceLimitWarningThreshold(CIMProperty&) const;
	virtual Uint16 getSpaceLimitWarningThreshold() const;
	virtual void setSpaceLimitWarningThreshold(Uint16&);
	virtual Boolean getLowSpaceWarningThreshold(CIMProperty&) const;
	virtual Uint16 getLowSpaceWarningThreshold() const;
	virtual void setLowSpaceWarningThreshold(Uint16&);
	virtual Boolean getStorageExtentInitialUsage(CIMProperty&) const;
	virtual Uint16 getStorageExtentInitialUsage() const;
	virtual void setStorageExtentInitialUsage(Uint16&);
	virtual Boolean getStoragePoolInitialUsage(CIMProperty&) const;
	virtual Uint16 getStoragePoolInitialUsage() const;
	virtual void setStoragePoolInitialUsage(Uint16&);
	virtual Boolean getCUImage(CIMProperty&) const;
	virtual String getCUImage() const;
	virtual void setCUImage(String&);
	virtual Boolean getDataOrganization(CIMProperty&) const;
	virtual Uint16 getDataOrganization() const;
	virtual void setDataOrganization(Uint16&);
	virtual Boolean getDiskType(CIMProperty&) const;
	virtual Uint16 getDiskType() const;
	virtual void setDiskType(Uint16&);
	virtual Boolean getEmulatedDevice(CIMProperty&) const;
	virtual String getEmulatedDevice() const;
	virtual void setEmulatedDevice(String&);
	virtual Boolean getEncryption(CIMProperty&) const;
	virtual Uint16 getEncryption() const;
	virtual void setEncryption(Uint16&);
	virtual Boolean getFormFactorType(CIMProperty&) const;
	virtual Uint16 getFormFactorType() const;
	virtual void setFormFactorType(Uint16&);
	virtual Boolean getPortType(CIMProperty&) const;
	virtual Uint16 getPortType() const;
	virtual void setPortType(Uint16&);
	virtual Boolean getSubsystemID(CIMProperty&) const;
	virtual String getSubsystemID() const;
	virtual void setSubsystemID(String&);
	virtual Boolean getThinProvisionedInitialReserve(CIMProperty&) const;
	virtual Uint64 getThinProvisionedInitialReserve() const;
	virtual void setThinProvisionedInitialReserve(Uint64&);
	virtual Boolean getThinProvisionedPoolType(CIMProperty&) const;
	virtual Uint16 getThinProvisionedPoolType() const;
	virtual void setThinProvisionedPoolType(Uint16&);
	virtual Boolean getCompressedElement(CIMProperty&) const;
	virtual Boolean getCompressedElement() const;
	virtual void setCompressedElement(Boolean&);
	virtual Boolean getCompressionRate(CIMProperty&) const;
	virtual Uint16 getCompressionRate() const;
	virtual void setCompressionRate(Uint16&);
	virtual Boolean getInterconnectSpeed(CIMProperty&) const;
	virtual Uint64 getInterconnectSpeed() const;
	virtual void setInterconnectSpeed(Uint64&);
	virtual Boolean getInterconnectType(CIMProperty&) const;
	virtual Uint16 getInterconnectType() const;
	virtual void setInterconnectType(Uint16&);
	virtual Boolean getRPM(CIMProperty&) const;
	virtual Uint32 getRPM() const;
	virtual void setRPM(Uint32&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	String _configurationName;
	Uint16 _changeableType;
	Array<String> _componentSetting;
	String _soID;
	String _soOrgID;
	Boolean _noSinglePointOfFailure;
	Uint16 _dataRedundancyMax;
	Uint16 _dataRedundancyMin;
	Uint16 _dataRedundancyGoal;
	Uint16 _packageRedundancyMax;
	Uint16 _packageRedundancyMin;
	Uint16 _packageRedundancyGoal;
	Uint8 _deltaReservationMax;
	Uint8 _deltaReservationMin;
	Uint8 _deltaReservationGoal;
	Uint16 _extentStripeLength;
	Uint16 _extentStripeLengthMin;
	Uint16 _extentStripeLengthMax;
	Uint16 _parityLayout;
	Uint64 _userDataStripeDepth;
	Uint64 _userDataStripeDepthMin;
	Uint64 _userDataStripeDepthMax;
	Boolean _incrementalDeltas;
	Boolean _persistentReplica;
	Uint16 _useReplicationBuffer;
	Uint16 _initialSynchronization;
	Uint16 _replicationPriority;
	Uint64 _spaceLimit;
	Uint16 _spaceLimitWarningThreshold;
	Uint16 _lowSpaceWarningThreshold;
	Uint16 _storageExtentInitialUsage;
	Uint16 _storagePoolInitialUsage;
	String _cUImage;
	Uint16 _dataOrganization;
	Uint16 _diskType;
	String _emulatedDevice;
	Uint16 _encryption;
	Uint16 _formFactorType;
	Uint16 _portType;
	String _subsystemID;
	Uint64 _thinProvisionedInitialReserve;
	Uint16 _thinProvisionedPoolType;
	Boolean _compressedElement;
	Uint16 _compressionRate;
	Uint64 _interconnectSpeed;
	Uint16 _interconnectType;
	Uint32 _rPM;

#	include "UNIX_StorageSettingPrivate.h"


};

#endif /* UNIX_STORAGESETTING */
