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


/* **** Experimental *** */
/*
TRUE
*/


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
This subclass of StorageSetting allows a client to specify advanced settings that can be applied to creating and manipulating elements.
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

			UNIX_AdvancedStorageSetting:
				InitialStorageTierMethodology UInt16
				InitialStorageTieringSelection UInt16
				RelativePerformanceOrderLimit UInt16
				InitialRelativePerformanceOrderSet UInt16
				StorageTieringFrozen Boolean


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_SettingData:

			UNIX_StorageSetting:

			UNIX_AdvancedStorageSetting:


*/

#ifndef __UNIX_ADVANCEDSTORAGESETTING_H
#define __UNIX_ADVANCEDSTORAGESETTING_H


#include <StorageSetting/UNIX_StorageSetting.h>

#include "UNIX_AdvancedStorageSettingDeps.h"


#ifndef PROPERTY_INITIAL_STORAGE_TIER_METHODOLOGY
#define PROPERTY_INITIAL_STORAGE_TIER_METHODOLOGY \
					"InitialStorageTierMethodology"
#endif

#ifndef PROPERTY_INITIAL_STORAGE_TIERING_SELECTION
#define PROPERTY_INITIAL_STORAGE_TIERING_SELECTION \
					"InitialStorageTieringSelection"
#endif

#ifndef PROPERTY_RELATIVE_PERFORMANCE_ORDER_LIMIT
#define PROPERTY_RELATIVE_PERFORMANCE_ORDER_LIMIT \
					"RelativePerformanceOrderLimit"
#endif

#ifndef PROPERTY_INITIAL_RELATIVE_PERFORMANCE_ORDER_SET
#define PROPERTY_INITIAL_RELATIVE_PERFORMANCE_ORDER_SET \
					"InitialRelativePerformanceOrderSet"
#endif

#ifndef PROPERTY_STORAGE_TIERING_FROZEN
#define PROPERTY_STORAGE_TIERING_FROZEN \
					"StorageTieringFrozen"
#endif



class UNIX_AdvancedStorageSetting :
	public UNIX_StorageSetting
{
public:

	UNIX_AdvancedStorageSetting();
	~UNIX_AdvancedStorageSetting();

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
	virtual Boolean getInitialStorageTierMethodology(CIMProperty&) const;
	virtual Uint16 getInitialStorageTierMethodology() const;
	virtual void setInitialStorageTierMethodology(Uint16&);
	virtual Boolean getInitialStorageTieringSelection(CIMProperty&) const;
	virtual Uint16 getInitialStorageTieringSelection() const;
	virtual void setInitialStorageTieringSelection(Uint16&);
	virtual Boolean getRelativePerformanceOrderLimit(CIMProperty&) const;
	virtual Uint16 getRelativePerformanceOrderLimit() const;
	virtual void setRelativePerformanceOrderLimit(Uint16&);
	virtual Boolean getInitialRelativePerformanceOrderSet(CIMProperty&) const;
	virtual Array<Uint16> getInitialRelativePerformanceOrderSet() const;
	virtual void setInitialRelativePerformanceOrderSet(Array<Uint16>&);
	virtual Boolean getStorageTieringFrozen(CIMProperty&) const;
	virtual Boolean getStorageTieringFrozen() const;
	virtual void setStorageTieringFrozen(Boolean&);


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
	Uint16 _initialStorageTierMethodology;
	Uint16 _initialStorageTieringSelection;
	Uint16 _relativePerformanceOrderLimit;
	Array<Uint16> _initialRelativePerformanceOrderSet;
	Boolean _storageTieringFrozen;

#	include "UNIX_AdvancedStorageSettingPrivate.h"


};

#endif /* UNIX_ADVANCEDSTORAGESETTING */
