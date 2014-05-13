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
2.29.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::Views
*/


/* **** Description *** */
/*
The CIM_ReplicaView instance is a view that is derived from a source and target CIM_StorageVolume (or CIM_LogicalDisk) and a CIM_StorageSynchronized association between them.
CIM_ElementView may associate CIM_ReplicaPairView to its underlying elements (regardless of whether or not they are instantiated).
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_View:

			CIM_LogicalDeviceView:

			UNIX_ReplicaPairView:
				SVSourceSystemCreationClassName String
				SVSourceSystemName String
				SVSourceCreationClassName String
				SVSourceDeviceID String
				SVSourceName String
				SVSourceNameFormat UInt16
				SVSourceNameNamespace UInt16
				SVSourceExtentStatus UInt16
				SVSourceOperationalStatus UInt16
				SVSourceBlockSize UInt64
				SVSourceNumberOfBlocks UInt64
				SVSourceConsumableBlocks UInt64
				SVSourcePrimordial Boolean
				SVSourceIsBasedOnUnderlyingRedundancy Boolean
				SVSourceNoSinglePointOfFailure Boolean
				SVSourceDataRedundancy UInt16
				SVSourcePackageRedundancy UInt16
				SVSourceDeltaReservation UInt8
				SVSourceExtentDiscriminator String
				SVSourceOtherIdentifyingInfo String
				SVSourceIdentifyingDescriptions String
				SVSourceElementName String
				SVSourceUsage UInt16
				SVSourceOtherUsageDescription String
				SVSourceClientSettableUsage UInt16
				SSWhenSynced DateTime
				SSSyncMaintained Boolean
				SSCopyType UInt16
				SSSyncState UInt16
				SSCopyPriority UInt16
				SSSyncType UInt16
				SSMode UInt16
				SSProgressStatus UInt16
				SVTargetSystemCreationClassName String
				SVTargetSystemName String
				SVTargetCreationClassName String
				SVTargetDeviceID String
				SVTargetName String
				SVTargetNameFormat UInt16
				SVTargetNameNamespace UInt16
				SVTargetExtentStatus UInt16
				SVTargetOperationalStatus UInt16
				SVTargetBlockSize UInt64
				SVTargetNumberOfBlocks UInt64
				SVTargetConsumableBlocks UInt64
				SVTargetPrimordial Boolean
				SVTargetIsBasedOnUnderlyingRedundancy Boolean
				SVTargetNoSinglePointOfFailure Boolean
				SVTargetDataRedundancy UInt16
				SVTargetPackageRedundancy UInt16
				SVTargetDeltaReservation UInt8
				SVTargetExtentDiscriminator String
				SVTargetOtherIdentifyingInfo String
				SVTargetIdentifyingDescriptions String
				SVTargetElementName String
				SVTargetUsage UInt16
				SVTargetOtherUsageDescription String
				SVTargetClientSettableUsage UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_View:

			CIM_LogicalDeviceView:

			UNIX_ReplicaPairView:


*/

#ifndef __UNIX_REPLICAPAIRVIEW_H
#define __UNIX_REPLICAPAIRVIEW_H


#include "CIM_LogicalDeviceView.h"

#include "UNIX_ReplicaPairViewDeps.h"


#ifndef PROPERTY_S_V_SOURCE_SYSTEM_CREATION_CLASS_NAME
#define PROPERTY_S_V_SOURCE_SYSTEM_CREATION_CLASS_NAME \
					"SVSourceSystemCreationClassName"
#endif

#ifndef PROPERTY_S_V_SOURCE_SYSTEM_NAME
#define PROPERTY_S_V_SOURCE_SYSTEM_NAME \
					"SVSourceSystemName"
#endif

#ifndef PROPERTY_S_V_SOURCE_CREATION_CLASS_NAME
#define PROPERTY_S_V_SOURCE_CREATION_CLASS_NAME \
					"SVSourceCreationClassName"
#endif

#ifndef PROPERTY_S_V_SOURCE_DEVICE_ID
#define PROPERTY_S_V_SOURCE_DEVICE_ID \
					"SVSourceDeviceID"
#endif

#ifndef PROPERTY_S_V_SOURCE_NAME
#define PROPERTY_S_V_SOURCE_NAME \
					"SVSourceName"
#endif

#ifndef PROPERTY_S_V_SOURCE_NAME_FORMAT
#define PROPERTY_S_V_SOURCE_NAME_FORMAT \
					"SVSourceNameFormat"
#endif

#ifndef PROPERTY_S_V_SOURCE_NAME_NAMESPACE
#define PROPERTY_S_V_SOURCE_NAME_NAMESPACE \
					"SVSourceNameNamespace"
#endif

#ifndef PROPERTY_S_V_SOURCE_EXTENT_STATUS
#define PROPERTY_S_V_SOURCE_EXTENT_STATUS \
					"SVSourceExtentStatus"
#endif

#ifndef PROPERTY_S_V_SOURCE_OPERATIONAL_STATUS
#define PROPERTY_S_V_SOURCE_OPERATIONAL_STATUS \
					"SVSourceOperationalStatus"
#endif

#ifndef PROPERTY_S_V_SOURCE_BLOCK_SIZE
#define PROPERTY_S_V_SOURCE_BLOCK_SIZE \
					"SVSourceBlockSize"
#endif

#ifndef PROPERTY_S_V_SOURCE_NUMBER_OF_BLOCKS
#define PROPERTY_S_V_SOURCE_NUMBER_OF_BLOCKS \
					"SVSourceNumberOfBlocks"
#endif

#ifndef PROPERTY_S_V_SOURCE_CONSUMABLE_BLOCKS
#define PROPERTY_S_V_SOURCE_CONSUMABLE_BLOCKS \
					"SVSourceConsumableBlocks"
#endif

#ifndef PROPERTY_S_V_SOURCE_PRIMORDIAL
#define PROPERTY_S_V_SOURCE_PRIMORDIAL \
					"SVSourcePrimordial"
#endif

#ifndef PROPERTY_S_V_SOURCE_IS_BASED_ON_UNDERLYING_REDUNDANCY
#define PROPERTY_S_V_SOURCE_IS_BASED_ON_UNDERLYING_REDUNDANCY \
					"SVSourceIsBasedOnUnderlyingRedundancy"
#endif

#ifndef PROPERTY_S_V_SOURCE_NO_SINGLE_POINT_OF_FAILURE
#define PROPERTY_S_V_SOURCE_NO_SINGLE_POINT_OF_FAILURE \
					"SVSourceNoSinglePointOfFailure"
#endif

#ifndef PROPERTY_S_V_SOURCE_DATA_REDUNDANCY
#define PROPERTY_S_V_SOURCE_DATA_REDUNDANCY \
					"SVSourceDataRedundancy"
#endif

#ifndef PROPERTY_S_V_SOURCE_PACKAGE_REDUNDANCY
#define PROPERTY_S_V_SOURCE_PACKAGE_REDUNDANCY \
					"SVSourcePackageRedundancy"
#endif

#ifndef PROPERTY_S_V_SOURCE_DELTA_RESERVATION
#define PROPERTY_S_V_SOURCE_DELTA_RESERVATION \
					"SVSourceDeltaReservation"
#endif

#ifndef PROPERTY_S_V_SOURCE_EXTENT_DISCRIMINATOR
#define PROPERTY_S_V_SOURCE_EXTENT_DISCRIMINATOR \
					"SVSourceExtentDiscriminator"
#endif

#ifndef PROPERTY_S_V_SOURCE_OTHER_IDENTIFYING_INFO
#define PROPERTY_S_V_SOURCE_OTHER_IDENTIFYING_INFO \
					"SVSourceOtherIdentifyingInfo"
#endif

#ifndef PROPERTY_S_V_SOURCE_IDENTIFYING_DESCRIPTIONS
#define PROPERTY_S_V_SOURCE_IDENTIFYING_DESCRIPTIONS \
					"SVSourceIdentifyingDescriptions"
#endif

#ifndef PROPERTY_S_V_SOURCE_ELEMENT_NAME
#define PROPERTY_S_V_SOURCE_ELEMENT_NAME \
					"SVSourceElementName"
#endif

#ifndef PROPERTY_S_V_SOURCE_USAGE
#define PROPERTY_S_V_SOURCE_USAGE \
					"SVSourceUsage"
#endif

#ifndef PROPERTY_S_V_SOURCE_OTHER_USAGE_DESCRIPTION
#define PROPERTY_S_V_SOURCE_OTHER_USAGE_DESCRIPTION \
					"SVSourceOtherUsageDescription"
#endif

#ifndef PROPERTY_S_V_SOURCE_CLIENT_SETTABLE_USAGE
#define PROPERTY_S_V_SOURCE_CLIENT_SETTABLE_USAGE \
					"SVSourceClientSettableUsage"
#endif

#ifndef PROPERTY_S_S_WHEN_SYNCED
#define PROPERTY_S_S_WHEN_SYNCED \
					"SSWhenSynced"
#endif

#ifndef PROPERTY_S_S_SYNC_MAINTAINED
#define PROPERTY_S_S_SYNC_MAINTAINED \
					"SSSyncMaintained"
#endif

#ifndef PROPERTY_S_S_COPY_TYPE
#define PROPERTY_S_S_COPY_TYPE \
					"SSCopyType"
#endif

#ifndef PROPERTY_S_S_SYNC_STATE
#define PROPERTY_S_S_SYNC_STATE \
					"SSSyncState"
#endif

#ifndef PROPERTY_S_S_COPY_PRIORITY
#define PROPERTY_S_S_COPY_PRIORITY \
					"SSCopyPriority"
#endif

#ifndef PROPERTY_S_S_SYNC_TYPE
#define PROPERTY_S_S_SYNC_TYPE \
					"SSSyncType"
#endif

#ifndef PROPERTY_S_S_MODE
#define PROPERTY_S_S_MODE \
					"SSMode"
#endif

#ifndef PROPERTY_S_S_PROGRESS_STATUS
#define PROPERTY_S_S_PROGRESS_STATUS \
					"SSProgressStatus"
#endif

#ifndef PROPERTY_S_V_TARGET_SYSTEM_CREATION_CLASS_NAME
#define PROPERTY_S_V_TARGET_SYSTEM_CREATION_CLASS_NAME \
					"SVTargetSystemCreationClassName"
#endif

#ifndef PROPERTY_S_V_TARGET_SYSTEM_NAME
#define PROPERTY_S_V_TARGET_SYSTEM_NAME \
					"SVTargetSystemName"
#endif

#ifndef PROPERTY_S_V_TARGET_CREATION_CLASS_NAME
#define PROPERTY_S_V_TARGET_CREATION_CLASS_NAME \
					"SVTargetCreationClassName"
#endif

#ifndef PROPERTY_S_V_TARGET_DEVICE_ID
#define PROPERTY_S_V_TARGET_DEVICE_ID \
					"SVTargetDeviceID"
#endif

#ifndef PROPERTY_S_V_TARGET_NAME
#define PROPERTY_S_V_TARGET_NAME \
					"SVTargetName"
#endif

#ifndef PROPERTY_S_V_TARGET_NAME_FORMAT
#define PROPERTY_S_V_TARGET_NAME_FORMAT \
					"SVTargetNameFormat"
#endif

#ifndef PROPERTY_S_V_TARGET_NAME_NAMESPACE
#define PROPERTY_S_V_TARGET_NAME_NAMESPACE \
					"SVTargetNameNamespace"
#endif

#ifndef PROPERTY_S_V_TARGET_EXTENT_STATUS
#define PROPERTY_S_V_TARGET_EXTENT_STATUS \
					"SVTargetExtentStatus"
#endif

#ifndef PROPERTY_S_V_TARGET_OPERATIONAL_STATUS
#define PROPERTY_S_V_TARGET_OPERATIONAL_STATUS \
					"SVTargetOperationalStatus"
#endif

#ifndef PROPERTY_S_V_TARGET_BLOCK_SIZE
#define PROPERTY_S_V_TARGET_BLOCK_SIZE \
					"SVTargetBlockSize"
#endif

#ifndef PROPERTY_S_V_TARGET_NUMBER_OF_BLOCKS
#define PROPERTY_S_V_TARGET_NUMBER_OF_BLOCKS \
					"SVTargetNumberOfBlocks"
#endif

#ifndef PROPERTY_S_V_TARGET_CONSUMABLE_BLOCKS
#define PROPERTY_S_V_TARGET_CONSUMABLE_BLOCKS \
					"SVTargetConsumableBlocks"
#endif

#ifndef PROPERTY_S_V_TARGET_PRIMORDIAL
#define PROPERTY_S_V_TARGET_PRIMORDIAL \
					"SVTargetPrimordial"
#endif

#ifndef PROPERTY_S_V_TARGET_IS_BASED_ON_UNDERLYING_REDUNDANCY
#define PROPERTY_S_V_TARGET_IS_BASED_ON_UNDERLYING_REDUNDANCY \
					"SVTargetIsBasedOnUnderlyingRedundancy"
#endif

#ifndef PROPERTY_S_V_TARGET_NO_SINGLE_POINT_OF_FAILURE
#define PROPERTY_S_V_TARGET_NO_SINGLE_POINT_OF_FAILURE \
					"SVTargetNoSinglePointOfFailure"
#endif

#ifndef PROPERTY_S_V_TARGET_DATA_REDUNDANCY
#define PROPERTY_S_V_TARGET_DATA_REDUNDANCY \
					"SVTargetDataRedundancy"
#endif

#ifndef PROPERTY_S_V_TARGET_PACKAGE_REDUNDANCY
#define PROPERTY_S_V_TARGET_PACKAGE_REDUNDANCY \
					"SVTargetPackageRedundancy"
#endif

#ifndef PROPERTY_S_V_TARGET_DELTA_RESERVATION
#define PROPERTY_S_V_TARGET_DELTA_RESERVATION \
					"SVTargetDeltaReservation"
#endif

#ifndef PROPERTY_S_V_TARGET_EXTENT_DISCRIMINATOR
#define PROPERTY_S_V_TARGET_EXTENT_DISCRIMINATOR \
					"SVTargetExtentDiscriminator"
#endif

#ifndef PROPERTY_S_V_TARGET_OTHER_IDENTIFYING_INFO
#define PROPERTY_S_V_TARGET_OTHER_IDENTIFYING_INFO \
					"SVTargetOtherIdentifyingInfo"
#endif

#ifndef PROPERTY_S_V_TARGET_IDENTIFYING_DESCRIPTIONS
#define PROPERTY_S_V_TARGET_IDENTIFYING_DESCRIPTIONS \
					"SVTargetIdentifyingDescriptions"
#endif

#ifndef PROPERTY_S_V_TARGET_ELEMENT_NAME
#define PROPERTY_S_V_TARGET_ELEMENT_NAME \
					"SVTargetElementName"
#endif

#ifndef PROPERTY_S_V_TARGET_USAGE
#define PROPERTY_S_V_TARGET_USAGE \
					"SVTargetUsage"
#endif

#ifndef PROPERTY_S_V_TARGET_OTHER_USAGE_DESCRIPTION
#define PROPERTY_S_V_TARGET_OTHER_USAGE_DESCRIPTION \
					"SVTargetOtherUsageDescription"
#endif

#ifndef PROPERTY_S_V_TARGET_CLIENT_SETTABLE_USAGE
#define PROPERTY_S_V_TARGET_CLIENT_SETTABLE_USAGE \
					"SVTargetClientSettableUsage"
#endif



class UNIX_ReplicaPairView :
	public CIM_LogicalDeviceView
{
public:

	UNIX_ReplicaPairView();
	~UNIX_ReplicaPairView();

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
	virtual Boolean getSVSourceSystemCreationClassName(CIMProperty&) const;
	virtual String getSVSourceSystemCreationClassName() const;
	virtual void setSVSourceSystemCreationClassName(String&);
	virtual Boolean getSVSourceSystemName(CIMProperty&) const;
	virtual String getSVSourceSystemName() const;
	virtual void setSVSourceSystemName(String&);
	virtual Boolean getSVSourceCreationClassName(CIMProperty&) const;
	virtual String getSVSourceCreationClassName() const;
	virtual void setSVSourceCreationClassName(String&);
	virtual Boolean getSVSourceDeviceID(CIMProperty&) const;
	virtual String getSVSourceDeviceID() const;
	virtual void setSVSourceDeviceID(String&);
	virtual Boolean getSVSourceName(CIMProperty&) const;
	virtual String getSVSourceName() const;
	virtual void setSVSourceName(String&);
	virtual Boolean getSVSourceNameFormat(CIMProperty&) const;
	virtual Uint16 getSVSourceNameFormat() const;
	virtual void setSVSourceNameFormat(Uint16&);
	virtual Boolean getSVSourceNameNamespace(CIMProperty&) const;
	virtual Uint16 getSVSourceNameNamespace() const;
	virtual void setSVSourceNameNamespace(Uint16&);
	virtual Boolean getSVSourceExtentStatus(CIMProperty&) const;
	virtual Array<Uint16> getSVSourceExtentStatus() const;
	virtual void setSVSourceExtentStatus(Array<Uint16>&);
	virtual Boolean getSVSourceOperationalStatus(CIMProperty&) const;
	virtual Array<Uint16> getSVSourceOperationalStatus() const;
	virtual void setSVSourceOperationalStatus(Array<Uint16>&);
	virtual Boolean getSVSourceBlockSize(CIMProperty&) const;
	virtual Uint64 getSVSourceBlockSize() const;
	virtual void setSVSourceBlockSize(Uint64&);
	virtual Boolean getSVSourceNumberOfBlocks(CIMProperty&) const;
	virtual Uint64 getSVSourceNumberOfBlocks() const;
	virtual void setSVSourceNumberOfBlocks(Uint64&);
	virtual Boolean getSVSourceConsumableBlocks(CIMProperty&) const;
	virtual Uint64 getSVSourceConsumableBlocks() const;
	virtual void setSVSourceConsumableBlocks(Uint64&);
	virtual Boolean getSVSourcePrimordial(CIMProperty&) const;
	virtual Boolean getSVSourcePrimordial() const;
	virtual void setSVSourcePrimordial(Boolean&);
	virtual Boolean getSVSourceIsBasedOnUnderlyingRedundancy(CIMProperty&) const;
	virtual Boolean getSVSourceIsBasedOnUnderlyingRedundancy() const;
	virtual void setSVSourceIsBasedOnUnderlyingRedundancy(Boolean&);
	virtual Boolean getSVSourceNoSinglePointOfFailure(CIMProperty&) const;
	virtual Boolean getSVSourceNoSinglePointOfFailure() const;
	virtual void setSVSourceNoSinglePointOfFailure(Boolean&);
	virtual Boolean getSVSourceDataRedundancy(CIMProperty&) const;
	virtual Uint16 getSVSourceDataRedundancy() const;
	virtual void setSVSourceDataRedundancy(Uint16&);
	virtual Boolean getSVSourcePackageRedundancy(CIMProperty&) const;
	virtual Uint16 getSVSourcePackageRedundancy() const;
	virtual void setSVSourcePackageRedundancy(Uint16&);
	virtual Boolean getSVSourceDeltaReservation(CIMProperty&) const;
	virtual Uint8 getSVSourceDeltaReservation() const;
	virtual void setSVSourceDeltaReservation(Uint8&);
	virtual Boolean getSVSourceExtentDiscriminator(CIMProperty&) const;
	virtual Array<String> getSVSourceExtentDiscriminator() const;
	virtual void setSVSourceExtentDiscriminator(Array<String>&);
	virtual Boolean getSVSourceOtherIdentifyingInfo(CIMProperty&) const;
	virtual Array<String> getSVSourceOtherIdentifyingInfo() const;
	virtual void setSVSourceOtherIdentifyingInfo(Array<String>&);
	virtual Boolean getSVSourceIdentifyingDescriptions(CIMProperty&) const;
	virtual Array<String> getSVSourceIdentifyingDescriptions() const;
	virtual void setSVSourceIdentifyingDescriptions(Array<String>&);
	virtual Boolean getSVSourceElementName(CIMProperty&) const;
	virtual String getSVSourceElementName() const;
	virtual void setSVSourceElementName(String&);
	virtual Boolean getSVSourceUsage(CIMProperty&) const;
	virtual Uint16 getSVSourceUsage() const;
	virtual void setSVSourceUsage(Uint16&);
	virtual Boolean getSVSourceOtherUsageDescription(CIMProperty&) const;
	virtual String getSVSourceOtherUsageDescription() const;
	virtual void setSVSourceOtherUsageDescription(String&);
	virtual Boolean getSVSourceClientSettableUsage(CIMProperty&) const;
	virtual Array<Uint16> getSVSourceClientSettableUsage() const;
	virtual void setSVSourceClientSettableUsage(Array<Uint16>&);
	virtual Boolean getSSWhenSynced(CIMProperty&) const;
	virtual CIMDateTime getSSWhenSynced() const;
	virtual void setSSWhenSynced(CIMDateTime&);
	virtual Boolean getSSSyncMaintained(CIMProperty&) const;
	virtual Boolean getSSSyncMaintained() const;
	virtual void setSSSyncMaintained(Boolean&);
	virtual Boolean getSSCopyType(CIMProperty&) const;
	virtual Uint16 getSSCopyType() const;
	virtual void setSSCopyType(Uint16&);
	virtual Boolean getSSSyncState(CIMProperty&) const;
	virtual Uint16 getSSSyncState() const;
	virtual void setSSSyncState(Uint16&);
	virtual Boolean getSSCopyPriority(CIMProperty&) const;
	virtual Uint16 getSSCopyPriority() const;
	virtual void setSSCopyPriority(Uint16&);
	virtual Boolean getSSSyncType(CIMProperty&) const;
	virtual Uint16 getSSSyncType() const;
	virtual void setSSSyncType(Uint16&);
	virtual Boolean getSSMode(CIMProperty&) const;
	virtual Uint16 getSSMode() const;
	virtual void setSSMode(Uint16&);
	virtual Boolean getSSProgressStatus(CIMProperty&) const;
	virtual Uint16 getSSProgressStatus() const;
	virtual void setSSProgressStatus(Uint16&);
	virtual Boolean getSVTargetSystemCreationClassName(CIMProperty&) const;
	virtual String getSVTargetSystemCreationClassName() const;
	virtual void setSVTargetSystemCreationClassName(String&);
	virtual Boolean getSVTargetSystemName(CIMProperty&) const;
	virtual String getSVTargetSystemName() const;
	virtual void setSVTargetSystemName(String&);
	virtual Boolean getSVTargetCreationClassName(CIMProperty&) const;
	virtual String getSVTargetCreationClassName() const;
	virtual void setSVTargetCreationClassName(String&);
	virtual Boolean getSVTargetDeviceID(CIMProperty&) const;
	virtual String getSVTargetDeviceID() const;
	virtual void setSVTargetDeviceID(String&);
	virtual Boolean getSVTargetName(CIMProperty&) const;
	virtual String getSVTargetName() const;
	virtual void setSVTargetName(String&);
	virtual Boolean getSVTargetNameFormat(CIMProperty&) const;
	virtual Uint16 getSVTargetNameFormat() const;
	virtual void setSVTargetNameFormat(Uint16&);
	virtual Boolean getSVTargetNameNamespace(CIMProperty&) const;
	virtual Uint16 getSVTargetNameNamespace() const;
	virtual void setSVTargetNameNamespace(Uint16&);
	virtual Boolean getSVTargetExtentStatus(CIMProperty&) const;
	virtual Array<Uint16> getSVTargetExtentStatus() const;
	virtual void setSVTargetExtentStatus(Array<Uint16>&);
	virtual Boolean getSVTargetOperationalStatus(CIMProperty&) const;
	virtual Array<Uint16> getSVTargetOperationalStatus() const;
	virtual void setSVTargetOperationalStatus(Array<Uint16>&);
	virtual Boolean getSVTargetBlockSize(CIMProperty&) const;
	virtual Uint64 getSVTargetBlockSize() const;
	virtual void setSVTargetBlockSize(Uint64&);
	virtual Boolean getSVTargetNumberOfBlocks(CIMProperty&) const;
	virtual Uint64 getSVTargetNumberOfBlocks() const;
	virtual void setSVTargetNumberOfBlocks(Uint64&);
	virtual Boolean getSVTargetConsumableBlocks(CIMProperty&) const;
	virtual Uint64 getSVTargetConsumableBlocks() const;
	virtual void setSVTargetConsumableBlocks(Uint64&);
	virtual Boolean getSVTargetPrimordial(CIMProperty&) const;
	virtual Boolean getSVTargetPrimordial() const;
	virtual void setSVTargetPrimordial(Boolean&);
	virtual Boolean getSVTargetIsBasedOnUnderlyingRedundancy(CIMProperty&) const;
	virtual Boolean getSVTargetIsBasedOnUnderlyingRedundancy() const;
	virtual void setSVTargetIsBasedOnUnderlyingRedundancy(Boolean&);
	virtual Boolean getSVTargetNoSinglePointOfFailure(CIMProperty&) const;
	virtual Boolean getSVTargetNoSinglePointOfFailure() const;
	virtual void setSVTargetNoSinglePointOfFailure(Boolean&);
	virtual Boolean getSVTargetDataRedundancy(CIMProperty&) const;
	virtual Uint16 getSVTargetDataRedundancy() const;
	virtual void setSVTargetDataRedundancy(Uint16&);
	virtual Boolean getSVTargetPackageRedundancy(CIMProperty&) const;
	virtual Uint16 getSVTargetPackageRedundancy() const;
	virtual void setSVTargetPackageRedundancy(Uint16&);
	virtual Boolean getSVTargetDeltaReservation(CIMProperty&) const;
	virtual Uint8 getSVTargetDeltaReservation() const;
	virtual void setSVTargetDeltaReservation(Uint8&);
	virtual Boolean getSVTargetExtentDiscriminator(CIMProperty&) const;
	virtual Array<String> getSVTargetExtentDiscriminator() const;
	virtual void setSVTargetExtentDiscriminator(Array<String>&);
	virtual Boolean getSVTargetOtherIdentifyingInfo(CIMProperty&) const;
	virtual Array<String> getSVTargetOtherIdentifyingInfo() const;
	virtual void setSVTargetOtherIdentifyingInfo(Array<String>&);
	virtual Boolean getSVTargetIdentifyingDescriptions(CIMProperty&) const;
	virtual Array<String> getSVTargetIdentifyingDescriptions() const;
	virtual void setSVTargetIdentifyingDescriptions(Array<String>&);
	virtual Boolean getSVTargetElementName(CIMProperty&) const;
	virtual String getSVTargetElementName() const;
	virtual void setSVTargetElementName(String&);
	virtual Boolean getSVTargetUsage(CIMProperty&) const;
	virtual Uint16 getSVTargetUsage() const;
	virtual void setSVTargetUsage(Uint16&);
	virtual Boolean getSVTargetOtherUsageDescription(CIMProperty&) const;
	virtual String getSVTargetOtherUsageDescription() const;
	virtual void setSVTargetOtherUsageDescription(String&);
	virtual Boolean getSVTargetClientSettableUsage(CIMProperty&) const;
	virtual Array<Uint16> getSVTargetClientSettableUsage() const;
	virtual void setSVTargetClientSettableUsage(Array<Uint16>&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	String _sVSourceSystemCreationClassName;
	String _sVSourceSystemName;
	String _sVSourceCreationClassName;
	String _sVSourceDeviceID;
	String _sVSourceName;
	Uint16 _sVSourceNameFormat;
	Uint16 _sVSourceNameNamespace;
	Array<Uint16> _sVSourceExtentStatus;
	Array<Uint16> _sVSourceOperationalStatus;
	Uint64 _sVSourceBlockSize;
	Uint64 _sVSourceNumberOfBlocks;
	Uint64 _sVSourceConsumableBlocks;
	Boolean _sVSourcePrimordial;
	Boolean _sVSourceIsBasedOnUnderlyingRedundancy;
	Boolean _sVSourceNoSinglePointOfFailure;
	Uint16 _sVSourceDataRedundancy;
	Uint16 _sVSourcePackageRedundancy;
	Uint8 _sVSourceDeltaReservation;
	Array<String> _sVSourceExtentDiscriminator;
	Array<String> _sVSourceOtherIdentifyingInfo;
	Array<String> _sVSourceIdentifyingDescriptions;
	String _sVSourceElementName;
	Uint16 _sVSourceUsage;
	String _sVSourceOtherUsageDescription;
	Array<Uint16> _sVSourceClientSettableUsage;
	CIMDateTime _sSWhenSynced;
	Boolean _sSSyncMaintained;
	Uint16 _sSCopyType;
	Uint16 _sSSyncState;
	Uint16 _sSCopyPriority;
	Uint16 _sSSyncType;
	Uint16 _sSMode;
	Uint16 _sSProgressStatus;
	String _sVTargetSystemCreationClassName;
	String _sVTargetSystemName;
	String _sVTargetCreationClassName;
	String _sVTargetDeviceID;
	String _sVTargetName;
	Uint16 _sVTargetNameFormat;
	Uint16 _sVTargetNameNamespace;
	Array<Uint16> _sVTargetExtentStatus;
	Array<Uint16> _sVTargetOperationalStatus;
	Uint64 _sVTargetBlockSize;
	Uint64 _sVTargetNumberOfBlocks;
	Uint64 _sVTargetConsumableBlocks;
	Boolean _sVTargetPrimordial;
	Boolean _sVTargetIsBasedOnUnderlyingRedundancy;
	Boolean _sVTargetNoSinglePointOfFailure;
	Uint16 _sVTargetDataRedundancy;
	Uint16 _sVTargetPackageRedundancy;
	Uint8 _sVTargetDeltaReservation;
	Array<String> _sVTargetExtentDiscriminator;
	Array<String> _sVTargetOtherIdentifyingInfo;
	Array<String> _sVTargetIdentifyingDescriptions;
	String _sVTargetElementName;
	Uint16 _sVTargetUsage;
	String _sVTargetOtherUsageDescription;
	Array<Uint16> _sVTargetClientSettableUsage;

#	include "UNIX_ReplicaPairViewPrivate.h"


};

#endif /* UNIX_REPLICAPAIRVIEW */
