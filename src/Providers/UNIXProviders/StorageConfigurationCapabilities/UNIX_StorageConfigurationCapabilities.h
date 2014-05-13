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
2.37.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::StorageServices
*/


/* **** Description *** */
/*
A subclass of Capabilities that defines the Capabilities of a StorageConfigurationService. An instance of StorageConfigurationCapabilities is associated with a StorageConfigurationService using ElementCapabilities. The properties in this class specify the envelope of capabilites for storage configuration in the context of the Service or Pool with which the instance is associated. These properties correspond to the properties of the same base names in StorageSetting and StorageSettingWithHints when either is used as a goal parameter to the StorageConfigurationService methods (CreateOrModifyStoragePool, CreateOrModifyElementFromStoragePool, or CreateOrModifyElementFromElements).
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_Capabilities:

			UNIX_StorageConfigurationCapabilities:
				SupportedAsynchronousActions UInt16
				SupportedSynchronousActions UInt16
				SupportedStorageElementTypes UInt16
				SupportedStoragePoolFeatures UInt16
				SupportedStorageElementFeatures UInt16
				SupportedCopyTypes UInt16
				InitialReplicationState UInt16
				SupportedStorageElementUsage UInt16
				ClientSettableElementUsage UInt16
				SupportedStoragePoolUsage UInt16
				ClientSettablePoolUsage UInt16
				ThinProvisionedClientSettableReserve Boolean
				ThinProvisionedDefaultReserve UInt64
				MaximumElementCreateCount UInt64
				MaximumElementDeleteCount UInt64
				MultipleElementCreateFeatures UInt16
				MultipleElementDeleteFeatures UInt16
				AutomaticPoolSelectionAllowed Boolean


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Capabilities:
				CreateGoalSettings UInt16

			UNIX_StorageConfigurationCapabilities:
				GetElementNameCapabilities UInt32


*/

#ifndef __UNIX_STORAGECONFIGURATIONCAPABILITIES_H
#define __UNIX_STORAGECONFIGURATIONCAPABILITIES_H


#include "CIM_Capabilities.h"
#include <StoragePool/UNIX_StoragePool.h>

#include "UNIX_StorageConfigurationCapabilitiesDeps.h"


#ifndef PROPERTY_SUPPORTED_ASYNCHRONOUS_ACTIONS
#define PROPERTY_SUPPORTED_ASYNCHRONOUS_ACTIONS \
					"SupportedAsynchronousActions"
#endif

#ifndef PROPERTY_SUPPORTED_SYNCHRONOUS_ACTIONS
#define PROPERTY_SUPPORTED_SYNCHRONOUS_ACTIONS \
					"SupportedSynchronousActions"
#endif

#ifndef PROPERTY_SUPPORTED_STORAGE_ELEMENT_TYPES
#define PROPERTY_SUPPORTED_STORAGE_ELEMENT_TYPES \
					"SupportedStorageElementTypes"
#endif

#ifndef PROPERTY_SUPPORTED_STORAGE_POOL_FEATURES
#define PROPERTY_SUPPORTED_STORAGE_POOL_FEATURES \
					"SupportedStoragePoolFeatures"
#endif

#ifndef PROPERTY_SUPPORTED_STORAGE_ELEMENT_FEATURES
#define PROPERTY_SUPPORTED_STORAGE_ELEMENT_FEATURES \
					"SupportedStorageElementFeatures"
#endif

#ifndef PROPERTY_SUPPORTED_COPY_TYPES
#define PROPERTY_SUPPORTED_COPY_TYPES \
					"SupportedCopyTypes"
#endif

#ifndef PROPERTY_INITIAL_REPLICATION_STATE
#define PROPERTY_INITIAL_REPLICATION_STATE \
					"InitialReplicationState"
#endif

#ifndef PROPERTY_SUPPORTED_STORAGE_ELEMENT_USAGE
#define PROPERTY_SUPPORTED_STORAGE_ELEMENT_USAGE \
					"SupportedStorageElementUsage"
#endif

#ifndef PROPERTY_CLIENT_SETTABLE_ELEMENT_USAGE
#define PROPERTY_CLIENT_SETTABLE_ELEMENT_USAGE \
					"ClientSettableElementUsage"
#endif

#ifndef PROPERTY_SUPPORTED_STORAGE_POOL_USAGE
#define PROPERTY_SUPPORTED_STORAGE_POOL_USAGE \
					"SupportedStoragePoolUsage"
#endif

#ifndef PROPERTY_CLIENT_SETTABLE_POOL_USAGE
#define PROPERTY_CLIENT_SETTABLE_POOL_USAGE \
					"ClientSettablePoolUsage"
#endif

#ifndef PROPERTY_THIN_PROVISIONED_CLIENT_SETTABLE_RESERVE
#define PROPERTY_THIN_PROVISIONED_CLIENT_SETTABLE_RESERVE \
					"ThinProvisionedClientSettableReserve"
#endif

#ifndef PROPERTY_THIN_PROVISIONED_DEFAULT_RESERVE
#define PROPERTY_THIN_PROVISIONED_DEFAULT_RESERVE \
					"ThinProvisionedDefaultReserve"
#endif

#ifndef PROPERTY_MAXIMUM_ELEMENT_CREATE_COUNT
#define PROPERTY_MAXIMUM_ELEMENT_CREATE_COUNT \
					"MaximumElementCreateCount"
#endif

#ifndef PROPERTY_MAXIMUM_ELEMENT_DELETE_COUNT
#define PROPERTY_MAXIMUM_ELEMENT_DELETE_COUNT \
					"MaximumElementDeleteCount"
#endif

#ifndef PROPERTY_MULTIPLE_ELEMENT_CREATE_FEATURES
#define PROPERTY_MULTIPLE_ELEMENT_CREATE_FEATURES \
					"MultipleElementCreateFeatures"
#endif

#ifndef PROPERTY_MULTIPLE_ELEMENT_DELETE_FEATURES
#define PROPERTY_MULTIPLE_ELEMENT_DELETE_FEATURES \
					"MultipleElementDeleteFeatures"
#endif

#ifndef PROPERTY_AUTOMATIC_POOL_SELECTION_ALLOWED
#define PROPERTY_AUTOMATIC_POOL_SELECTION_ALLOWED \
					"AutomaticPoolSelectionAllowed"
#endif



class UNIX_StorageConfigurationCapabilities :
	public CIM_Capabilities
{
public:

	UNIX_StorageConfigurationCapabilities();
	~UNIX_StorageConfigurationCapabilities();

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
	virtual Boolean getSupportedAsynchronousActions(CIMProperty&) const;
	virtual Array<Uint16> getSupportedAsynchronousActions() const;
	virtual void setSupportedAsynchronousActions(Array<Uint16>&);
	virtual Boolean getSupportedSynchronousActions(CIMProperty&) const;
	virtual Array<Uint16> getSupportedSynchronousActions() const;
	virtual void setSupportedSynchronousActions(Array<Uint16>&);
	virtual Boolean getSupportedStorageElementTypes(CIMProperty&) const;
	virtual Array<Uint16> getSupportedStorageElementTypes() const;
	virtual void setSupportedStorageElementTypes(Array<Uint16>&);
	virtual Boolean getSupportedStoragePoolFeatures(CIMProperty&) const;
	virtual Array<Uint16> getSupportedStoragePoolFeatures() const;
	virtual void setSupportedStoragePoolFeatures(Array<Uint16>&);
	virtual Boolean getSupportedStorageElementFeatures(CIMProperty&) const;
	virtual Array<Uint16> getSupportedStorageElementFeatures() const;
	virtual void setSupportedStorageElementFeatures(Array<Uint16>&);
	virtual Boolean getSupportedCopyTypes(CIMProperty&) const;
	virtual Array<Uint16> getSupportedCopyTypes() const;
	virtual void setSupportedCopyTypes(Array<Uint16>&);
	virtual Boolean getInitialReplicationState(CIMProperty&) const;
	virtual Uint16 getInitialReplicationState() const;
	virtual void setInitialReplicationState(Uint16&);
	virtual Boolean getSupportedStorageElementUsage(CIMProperty&) const;
	virtual Array<Uint16> getSupportedStorageElementUsage() const;
	virtual void setSupportedStorageElementUsage(Array<Uint16>&);
	virtual Boolean getClientSettableElementUsage(CIMProperty&) const;
	virtual Array<Uint16> getClientSettableElementUsage() const;
	virtual void setClientSettableElementUsage(Array<Uint16>&);
	virtual Boolean getSupportedStoragePoolUsage(CIMProperty&) const;
	virtual Array<Uint16> getSupportedStoragePoolUsage() const;
	virtual void setSupportedStoragePoolUsage(Array<Uint16>&);
	virtual Boolean getClientSettablePoolUsage(CIMProperty&) const;
	virtual Array<Uint16> getClientSettablePoolUsage() const;
	virtual void setClientSettablePoolUsage(Array<Uint16>&);
	virtual Boolean getThinProvisionedClientSettableReserve(CIMProperty&) const;
	virtual Boolean getThinProvisionedClientSettableReserve() const;
	virtual void setThinProvisionedClientSettableReserve(Boolean&);
	virtual Boolean getThinProvisionedDefaultReserve(CIMProperty&) const;
	virtual Uint64 getThinProvisionedDefaultReserve() const;
	virtual void setThinProvisionedDefaultReserve(Uint64&);
	virtual Boolean getMaximumElementCreateCount(CIMProperty&) const;
	virtual Uint64 getMaximumElementCreateCount() const;
	virtual void setMaximumElementCreateCount(Uint64&);
	virtual Boolean getMaximumElementDeleteCount(CIMProperty&) const;
	virtual Uint64 getMaximumElementDeleteCount() const;
	virtual void setMaximumElementDeleteCount(Uint64&);
	virtual Boolean getMultipleElementCreateFeatures(CIMProperty&) const;
	virtual Array<Uint16> getMultipleElementCreateFeatures() const;
	virtual void setMultipleElementCreateFeatures(Array<Uint16>&);
	virtual Boolean getMultipleElementDeleteFeatures(CIMProperty&) const;
	virtual Array<Uint16> getMultipleElementDeleteFeatures() const;
	virtual void setMultipleElementDeleteFeatures(Array<Uint16>&);
	virtual Boolean getAutomaticPoolSelectionAllowed(CIMProperty&) const;
	virtual Boolean getAutomaticPoolSelectionAllowed() const;
	virtual void setAutomaticPoolSelectionAllowed(Boolean&);

	virtual Uint16 invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	);

	virtual Uint32 invokeGetElementNameCapabilities(
		Uint16 &inElementType,
		CIMInstance &inGoal,
		CIMInstance &inInPool,
		Array<Uint16> &inSupportedFeatures,
		Uint16 &inMaxElementNameLen,
		String &inElementNameMask
	);



private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	Array<Uint16> _supportedAsynchronousActions;
	Array<Uint16> _supportedSynchronousActions;
	Array<Uint16> _supportedStorageElementTypes;
	Array<Uint16> _supportedStoragePoolFeatures;
	Array<Uint16> _supportedStorageElementFeatures;
	Array<Uint16> _supportedCopyTypes;
	Uint16 _initialReplicationState;
	Array<Uint16> _supportedStorageElementUsage;
	Array<Uint16> _clientSettableElementUsage;
	Array<Uint16> _supportedStoragePoolUsage;
	Array<Uint16> _clientSettablePoolUsage;
	Boolean _thinProvisionedClientSettableReserve;
	Uint64 _thinProvisionedDefaultReserve;
	Uint64 _maximumElementCreateCount;
	Uint64 _maximumElementDeleteCount;
	Array<Uint16> _multipleElementCreateFeatures;
	Array<Uint16> _multipleElementDeleteFeatures;
	Boolean _automaticPoolSelectionAllowed;

#	include "UNIX_StorageConfigurationCapabilitiesPrivate.h"


};

#endif /* UNIX_STORAGECONFIGURATIONCAPABILITIES */
