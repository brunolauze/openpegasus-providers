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
2.34.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::StorageServices
*/


/* **** Description *** */
/*
Contains various options for use by the Replication Services methods to offer clients additional control in copy operations.
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

			UNIX_ReplicationSettingData:
				Pairing UInt16
				UnequalGroupsAction UInt16
				DesiredCopyMethodology UInt16
				TargetElementSupplier UInt16
				ThinProvisioningPolicy UInt16
				ConsistentPointInTime Boolean
				DeltaUpdateInterval DateTime
				Multihop UInt16
				OnGroupOrListError UInt16
				CopyPriority UInt16
				CopyRecoveryMode UInt16
				DeltaUpdateBlocks UInt64
				FailedCopyStopsHostIO Boolean
				UnequalListsAction UInt16
				ReadOnly UInt16
				StorageCompressionPolicy UInt16
				AutoDelete Boolean
				RRCHardwareCompressionEnabled Boolean
				RRCSoftwareCompressionEnabled Boolean
				TargetElementGoal UInt16
				TargetElementResourcePool UInt16
				TimeBeforeRemoval DateTime


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_SettingData:

			UNIX_ReplicationSettingData:


*/

#ifndef __UNIX_REPLICATIONSETTINGDATA_H
#define __UNIX_REPLICATIONSETTINGDATA_H


#include "CIM_SettingData.h"

#include "UNIX_ReplicationSettingDataDeps.h"


#ifndef PROPERTY_PAIRING
#define PROPERTY_PAIRING \
					"Pairing"
#endif

#ifndef PROPERTY_UNEQUAL_GROUPS_ACTION
#define PROPERTY_UNEQUAL_GROUPS_ACTION \
					"UnequalGroupsAction"
#endif

#ifndef PROPERTY_DESIRED_COPY_METHODOLOGY
#define PROPERTY_DESIRED_COPY_METHODOLOGY \
					"DesiredCopyMethodology"
#endif

#ifndef PROPERTY_TARGET_ELEMENT_SUPPLIER
#define PROPERTY_TARGET_ELEMENT_SUPPLIER \
					"TargetElementSupplier"
#endif

#ifndef PROPERTY_THIN_PROVISIONING_POLICY
#define PROPERTY_THIN_PROVISIONING_POLICY \
					"ThinProvisioningPolicy"
#endif

#ifndef PROPERTY_CONSISTENT_POINT_IN_TIME
#define PROPERTY_CONSISTENT_POINT_IN_TIME \
					"ConsistentPointInTime"
#endif

#ifndef PROPERTY_DELTA_UPDATE_INTERVAL
#define PROPERTY_DELTA_UPDATE_INTERVAL \
					"DeltaUpdateInterval"
#endif

#ifndef PROPERTY_MULTIHOP
#define PROPERTY_MULTIHOP \
					"Multihop"
#endif

#ifndef PROPERTY_ON_GROUP_OR_LIST_ERROR
#define PROPERTY_ON_GROUP_OR_LIST_ERROR \
					"OnGroupOrListError"
#endif

#ifndef PROPERTY_COPY_PRIORITY
#define PROPERTY_COPY_PRIORITY \
					"CopyPriority"
#endif

#ifndef PROPERTY_COPY_RECOVERY_MODE
#define PROPERTY_COPY_RECOVERY_MODE \
					"CopyRecoveryMode"
#endif

#ifndef PROPERTY_DELTA_UPDATE_BLOCKS
#define PROPERTY_DELTA_UPDATE_BLOCKS \
					"DeltaUpdateBlocks"
#endif

#ifndef PROPERTY_FAILED_COPY_STOPS_HOST_IO
#define PROPERTY_FAILED_COPY_STOPS_HOST_IO \
					"FailedCopyStopsHostIO"
#endif

#ifndef PROPERTY_UNEQUAL_LISTS_ACTION
#define PROPERTY_UNEQUAL_LISTS_ACTION \
					"UnequalListsAction"
#endif

#ifndef PROPERTY_READ_ONLY
#define PROPERTY_READ_ONLY \
					"ReadOnly"
#endif

#ifndef PROPERTY_STORAGE_COMPRESSION_POLICY
#define PROPERTY_STORAGE_COMPRESSION_POLICY \
					"StorageCompressionPolicy"
#endif

#ifndef PROPERTY_AUTO_DELETE
#define PROPERTY_AUTO_DELETE \
					"AutoDelete"
#endif

#ifndef PROPERTY_R_R_C_HARDWARE_COMPRESSION_ENABLED
#define PROPERTY_R_R_C_HARDWARE_COMPRESSION_ENABLED \
					"RRCHardwareCompressionEnabled"
#endif

#ifndef PROPERTY_R_R_CSOFTWARE_COMPRESSION_ENABLED
#define PROPERTY_R_R_CSOFTWARE_COMPRESSION_ENABLED \
					"RRCSoftwareCompressionEnabled"
#endif

#ifndef PROPERTY_TARGET_ELEMENT_GOAL
#define PROPERTY_TARGET_ELEMENT_GOAL \
					"TargetElementGoal"
#endif

#ifndef PROPERTY_TARGET_ELEMENT_RESOURCE_POOL
#define PROPERTY_TARGET_ELEMENT_RESOURCE_POOL \
					"TargetElementResourcePool"
#endif

#ifndef PROPERTY_TIME_BEFORE_REMOVAL
#define PROPERTY_TIME_BEFORE_REMOVAL \
					"TimeBeforeRemoval"
#endif



class UNIX_ReplicationSettingData :
	public CIM_SettingData
{
public:

	UNIX_ReplicationSettingData();
	~UNIX_ReplicationSettingData();

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
	virtual Boolean getPairing(CIMProperty&) const;
	virtual Uint16 getPairing() const;
	virtual void setPairing(Uint16&);
	virtual Boolean getUnequalGroupsAction(CIMProperty&) const;
	virtual Uint16 getUnequalGroupsAction() const;
	virtual void setUnequalGroupsAction(Uint16&);
	virtual Boolean getDesiredCopyMethodology(CIMProperty&) const;
	virtual Uint16 getDesiredCopyMethodology() const;
	virtual void setDesiredCopyMethodology(Uint16&);
	virtual Boolean getTargetElementSupplier(CIMProperty&) const;
	virtual Uint16 getTargetElementSupplier() const;
	virtual void setTargetElementSupplier(Uint16&);
	virtual Boolean getThinProvisioningPolicy(CIMProperty&) const;
	virtual Uint16 getThinProvisioningPolicy() const;
	virtual void setThinProvisioningPolicy(Uint16&);
	virtual Boolean getConsistentPointInTime(CIMProperty&) const;
	virtual Boolean getConsistentPointInTime() const;
	virtual void setConsistentPointInTime(Boolean&);
	virtual Boolean getDeltaUpdateInterval(CIMProperty&) const;
	virtual CIMDateTime getDeltaUpdateInterval() const;
	virtual void setDeltaUpdateInterval(CIMDateTime&);
	virtual Boolean getMultihop(CIMProperty&) const;
	virtual Uint16 getMultihop() const;
	virtual void setMultihop(Uint16&);
	virtual Boolean getOnGroupOrListError(CIMProperty&) const;
	virtual Uint16 getOnGroupOrListError() const;
	virtual void setOnGroupOrListError(Uint16&);
	virtual Boolean getCopyPriority(CIMProperty&) const;
	virtual Uint16 getCopyPriority() const;
	virtual void setCopyPriority(Uint16&);
	virtual Boolean getCopyRecoveryMode(CIMProperty&) const;
	virtual Uint16 getCopyRecoveryMode() const;
	virtual void setCopyRecoveryMode(Uint16&);
	virtual Boolean getDeltaUpdateBlocks(CIMProperty&) const;
	virtual Uint64 getDeltaUpdateBlocks() const;
	virtual void setDeltaUpdateBlocks(Uint64&);
	virtual Boolean getFailedCopyStopsHostIO(CIMProperty&) const;
	virtual Boolean getFailedCopyStopsHostIO() const;
	virtual void setFailedCopyStopsHostIO(Boolean&);
	virtual Boolean getUnequalListsAction(CIMProperty&) const;
	virtual Uint16 getUnequalListsAction() const;
	virtual void setUnequalListsAction(Uint16&);
	virtual Boolean getReadOnly(CIMProperty&) const;
	virtual Uint16 getReadOnly() const;
	virtual void setReadOnly(Uint16&);
	virtual Boolean getStorageCompressionPolicy(CIMProperty&) const;
	virtual Uint16 getStorageCompressionPolicy() const;
	virtual void setStorageCompressionPolicy(Uint16&);
	virtual Boolean getAutoDelete(CIMProperty&) const;
	virtual Boolean getAutoDelete() const;
	virtual void setAutoDelete(Boolean&);
	virtual Boolean getRRCHardwareCompressionEnabled(CIMProperty&) const;
	virtual Boolean getRRCHardwareCompressionEnabled() const;
	virtual void setRRCHardwareCompressionEnabled(Boolean&);
	virtual Boolean getRRCSoftwareCompressionEnabled(CIMProperty&) const;
	virtual Boolean getRRCSoftwareCompressionEnabled() const;
	virtual void setRRCSoftwareCompressionEnabled(Boolean&);
	virtual Boolean getTargetElementGoal(CIMProperty&) const;
	virtual Uint16 getTargetElementGoal() const;
	virtual void setTargetElementGoal(Uint16&);
	virtual Boolean getTargetElementResourcePool(CIMProperty&) const;
	virtual Uint16 getTargetElementResourcePool() const;
	virtual void setTargetElementResourcePool(Uint16&);
	virtual Boolean getTimeBeforeRemoval(CIMProperty&) const;
	virtual CIMDateTime getTimeBeforeRemoval() const;
	virtual void setTimeBeforeRemoval(CIMDateTime&);


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
	Uint16 _pairing;
	Uint16 _unequalGroupsAction;
	Uint16 _desiredCopyMethodology;
	Uint16 _targetElementSupplier;
	Uint16 _thinProvisioningPolicy;
	Boolean _consistentPointInTime;
	CIMDateTime _deltaUpdateInterval;
	Uint16 _multihop;
	Uint16 _onGroupOrListError;
	Uint16 _copyPriority;
	Uint16 _copyRecoveryMode;
	Uint64 _deltaUpdateBlocks;
	Boolean _failedCopyStopsHostIO;
	Uint16 _unequalListsAction;
	Uint16 _readOnly;
	Uint16 _storageCompressionPolicy;
	Boolean _autoDelete;
	Boolean _rRCHardwareCompressionEnabled;
	Boolean _rRCSoftwareCompressionEnabled;
	Uint16 _targetElementGoal;
	Uint16 _targetElementResourcePool;
	CIMDateTime _timeBeforeRemoval;

#	include "UNIX_ReplicationSettingDataPrivate.h"


};

#endif /* UNIX_REPLICATIONSETTINGDATA */
