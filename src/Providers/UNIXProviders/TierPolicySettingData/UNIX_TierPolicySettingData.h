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
Contains various options for use by the TierPolicyService methods to offer clients additional controls to manipulate a policy associated with storage tiering.
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

			UNIX_TierSettingData:
				RelativePerformanceOrderGoal UInt16
				RelativePerformanceOrderMin UInt16
				RelativePerformanceOrderMax UInt16
				StorageObjectType UInt16
				StorageTierCharacteristics UInt16
				Technology UInt16
				InitialState UInt16
				Dynamic Boolean
				DeleteOnEmptyStorageTier Boolean
				Percentage UInt16
				CompressionIdleInterval DateTime
				CompressionRate UInt16

			UNIX_TierPolicySettingData:
				ProvisioningType UInt16
				RulePriority UInt32
				DataMovementRate UInt16
				AutomaticStoragePoolAllocationEnabled Boolean
				RemoteTieringCoordinationEnabled Boolean


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_SettingData:

			UNIX_TierSettingData:

			UNIX_TierPolicySettingData:


*/

#ifndef __UNIX_TIERPOLICYSETTINGDATA_H
#define __UNIX_TIERPOLICYSETTINGDATA_H


#include <TierSettingData/UNIX_TierSettingData.h>

#include "UNIX_TierPolicySettingDataDeps.h"


#ifndef PROPERTY_PROVISIONING_TYPE
#define PROPERTY_PROVISIONING_TYPE \
					"ProvisioningType"
#endif

#ifndef PROPERTY_RULE_PRIORITY
#define PROPERTY_RULE_PRIORITY \
					"RulePriority"
#endif

#ifndef PROPERTY_DATA_MOVEMENT_RATE
#define PROPERTY_DATA_MOVEMENT_RATE \
					"DataMovementRate"
#endif

#ifndef PROPERTY_AUTOMATIC_STORAGE_POOL_ALLOCATION_ENABLED
#define PROPERTY_AUTOMATIC_STORAGE_POOL_ALLOCATION_ENABLED \
					"AutomaticStoragePoolAllocationEnabled"
#endif

#ifndef PROPERTY_REMOTE_TIERING_COORDINATION_ENABLED
#define PROPERTY_REMOTE_TIERING_COORDINATION_ENABLED \
					"RemoteTieringCoordinationEnabled"
#endif



class UNIX_TierPolicySettingData :
	public UNIX_TierSettingData
{
public:

	UNIX_TierPolicySettingData();
	~UNIX_TierPolicySettingData();

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
	virtual Boolean getRelativePerformanceOrderGoal(CIMProperty&) const;
	virtual Uint16 getRelativePerformanceOrderGoal() const;
	virtual void setRelativePerformanceOrderGoal(Uint16&);
	virtual Boolean getRelativePerformanceOrderMin(CIMProperty&) const;
	virtual Uint16 getRelativePerformanceOrderMin() const;
	virtual void setRelativePerformanceOrderMin(Uint16&);
	virtual Boolean getRelativePerformanceOrderMax(CIMProperty&) const;
	virtual Uint16 getRelativePerformanceOrderMax() const;
	virtual void setRelativePerformanceOrderMax(Uint16&);
	virtual Boolean getStorageObjectType(CIMProperty&) const;
	virtual Uint16 getStorageObjectType() const;
	virtual void setStorageObjectType(Uint16&);
	virtual Boolean getStorageTierCharacteristics(CIMProperty&) const;
	virtual Array<Uint16> getStorageTierCharacteristics() const;
	virtual void setStorageTierCharacteristics(Array<Uint16>&);
	virtual Boolean getTechnology(CIMProperty&) const;
	virtual Uint16 getTechnology() const;
	virtual void setTechnology(Uint16&);
	virtual Boolean getInitialState(CIMProperty&) const;
	virtual Uint16 getInitialState() const;
	virtual void setInitialState(Uint16&);
	virtual Boolean getDynamic(CIMProperty&) const;
	virtual Boolean getDynamic() const;
	virtual void setDynamic(Boolean&);
	virtual Boolean getDeleteOnEmptyStorageTier(CIMProperty&) const;
	virtual Boolean getDeleteOnEmptyStorageTier() const;
	virtual void setDeleteOnEmptyStorageTier(Boolean&);
	virtual Boolean getPercentage(CIMProperty&) const;
	virtual Uint16 getPercentage() const;
	virtual void setPercentage(Uint16&);
	virtual Boolean getCompressionIdleInterval(CIMProperty&) const;
	virtual CIMDateTime getCompressionIdleInterval() const;
	virtual void setCompressionIdleInterval(CIMDateTime&);
	virtual Boolean getCompressionRate(CIMProperty&) const;
	virtual Uint16 getCompressionRate() const;
	virtual void setCompressionRate(Uint16&);
	virtual Boolean getProvisioningType(CIMProperty&) const;
	virtual Uint16 getProvisioningType() const;
	virtual void setProvisioningType(Uint16&);
	virtual Boolean getRulePriority(CIMProperty&) const;
	virtual Uint32 getRulePriority() const;
	virtual void setRulePriority(Uint32&);
	virtual Boolean getDataMovementRate(CIMProperty&) const;
	virtual Uint16 getDataMovementRate() const;
	virtual void setDataMovementRate(Uint16&);
	virtual Boolean getAutomaticStoragePoolAllocationEnabled(CIMProperty&) const;
	virtual Boolean getAutomaticStoragePoolAllocationEnabled() const;
	virtual void setAutomaticStoragePoolAllocationEnabled(Boolean&);
	virtual Boolean getRemoteTieringCoordinationEnabled(CIMProperty&) const;
	virtual Boolean getRemoteTieringCoordinationEnabled() const;
	virtual void setRemoteTieringCoordinationEnabled(Boolean&);


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
	Uint16 _relativePerformanceOrderGoal;
	Uint16 _relativePerformanceOrderMin;
	Uint16 _relativePerformanceOrderMax;
	Uint16 _storageObjectType;
	Array<Uint16> _storageTierCharacteristics;
	Uint16 _technology;
	Uint16 _initialState;
	Boolean _dynamic;
	Boolean _deleteOnEmptyStorageTier;
	Uint16 _percentage;
	CIMDateTime _compressionIdleInterval;
	Uint16 _compressionRate;
	Uint16 _provisioningType;
	Uint32 _rulePriority;
	Uint16 _dataMovementRate;
	Boolean _automaticStoragePoolAllocationEnabled;
	Boolean _remoteTieringCoordinationEnabled;

#	include "UNIX_TierPolicySettingDataPrivate.h"


};

#endif /* UNIX_TIERPOLICYSETTINGDATA */
