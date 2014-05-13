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
The CIM_VolumeView instance is a view that is derived from CIM_StorageVolume, CIM_ElementSettingData, CIM_StorageSetting, CIM_AllocatedFromStoragePool and CIM_StoragePool.
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

			UNIX_VolumeView:
				SVSystemCreationClassName String
				SVSystemName String
				SVCreationClassName String
				SVDeviceID String
				SVName String
				SVNameFormat UInt16
				SVNameNamespace UInt16
				SVExtentStatus UInt16
				SVOperationalStatus UInt16
				SVBlockSize UInt64
				SVNumberOfBlocks UInt64
				SVConsumableBlocks UInt64
				SVIsBasedOnUnderlyingRedundancy Boolean
				SVNoSinglePointOfFailure Boolean
				SVDataRedundancy UInt16
				SVPackageRedundancy UInt16
				SVDeltaReservation UInt8
				SVUsage UInt16
				SVOtherUsageDescription String
				SVClientSettableUsage UInt16
				SSInstanceID String
				SSElementName String
				SSNoSinglePointOfFailure Boolean
				SSDataRedundancyMin UInt16
				SSDataRedundancyMax UInt16
				SSDataRedundancyGoal UInt16
				SSPackageRedundancyMin UInt16
				SSPackageRedundancyMax UInt16
				SSPackageRedundancyGoal UInt16
				SSChangeableType UInt16
				AFSPSpaceConsumed UInt64
				SPInstanceID String
				SPPoolID String
				SVOtherIdentifyingInfo String
				SVIdentifyingDescriptions String
				SVElementName String
				SVPrimordial Boolean
				SVExtentDiscriminator String
				SSExtentStripeLength UInt16
				SSExtentStripeLengthMin UInt16
				SSExtentStripeLengthMax UInt16
				SSParityLayout UInt16
				SSUserDataStripeDepth UInt64
				SSUserDataStripeDepthMin UInt64
				SSUserDataStripeDepthMax UInt64
				SSStoragePoolInitialUsage UInt16
				SSStorageExtentInitialUsage UInt16
				SVIsComposite Boolean


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_View:

			CIM_LogicalDeviceView:

			UNIX_VolumeView:


*/

#ifndef __UNIX_VOLUMEVIEW_H
#define __UNIX_VOLUMEVIEW_H


#include "CIM_LogicalDeviceView.h"

#include "UNIX_VolumeViewDeps.h"


#ifndef PROPERTY_S_V_SYSTEM_CREATION_CLASS_NAME
#define PROPERTY_S_V_SYSTEM_CREATION_CLASS_NAME \
					"SVSystemCreationClassName"
#endif

#ifndef PROPERTY_S_V_SYSTEM_NAME
#define PROPERTY_S_V_SYSTEM_NAME \
					"SVSystemName"
#endif

#ifndef PROPERTY_S_V_CREATION_CLASS_NAME
#define PROPERTY_S_V_CREATION_CLASS_NAME \
					"SVCreationClassName"
#endif

#ifndef PROPERTY_S_V_DEVICE_ID
#define PROPERTY_S_V_DEVICE_ID \
					"SVDeviceID"
#endif

#ifndef PROPERTY_S_V_NAME
#define PROPERTY_S_V_NAME \
					"SVName"
#endif

#ifndef PROPERTY_S_V_NAME_FORMAT
#define PROPERTY_S_V_NAME_FORMAT \
					"SVNameFormat"
#endif

#ifndef PROPERTY_S_V_NAME_NAMESPACE
#define PROPERTY_S_V_NAME_NAMESPACE \
					"SVNameNamespace"
#endif

#ifndef PROPERTY_S_V_EXTENT_STATUS
#define PROPERTY_S_V_EXTENT_STATUS \
					"SVExtentStatus"
#endif

#ifndef PROPERTY_S_V_OPERATIONAL_STATUS
#define PROPERTY_S_V_OPERATIONAL_STATUS \
					"SVOperationalStatus"
#endif

#ifndef PROPERTY_S_V_BLOCK_SIZE
#define PROPERTY_S_V_BLOCK_SIZE \
					"SVBlockSize"
#endif

#ifndef PROPERTY_S_V_NUMBER_OF_BLOCKS
#define PROPERTY_S_V_NUMBER_OF_BLOCKS \
					"SVNumberOfBlocks"
#endif

#ifndef PROPERTY_S_V_CONSUMABLE_BLOCKS
#define PROPERTY_S_V_CONSUMABLE_BLOCKS \
					"SVConsumableBlocks"
#endif

#ifndef PROPERTY_S_V_IS_BASED_ON_UNDERLYING_REDUNDANCY
#define PROPERTY_S_V_IS_BASED_ON_UNDERLYING_REDUNDANCY \
					"SVIsBasedOnUnderlyingRedundancy"
#endif

#ifndef PROPERTY_S_V_NO_SINGLE_POINT_OF_FAILURE
#define PROPERTY_S_V_NO_SINGLE_POINT_OF_FAILURE \
					"SVNoSinglePointOfFailure"
#endif

#ifndef PROPERTY_S_V_DATA_REDUNDANCY
#define PROPERTY_S_V_DATA_REDUNDANCY \
					"SVDataRedundancy"
#endif

#ifndef PROPERTY_S_V_PACKAGE_REDUNDANCY
#define PROPERTY_S_V_PACKAGE_REDUNDANCY \
					"SVPackageRedundancy"
#endif

#ifndef PROPERTY_S_V_DELTA_RESERVATION
#define PROPERTY_S_V_DELTA_RESERVATION \
					"SVDeltaReservation"
#endif

#ifndef PROPERTY_S_V_USAGE
#define PROPERTY_S_V_USAGE \
					"SVUsage"
#endif

#ifndef PROPERTY_S_V_OTHER_USAGE_DESCRIPTION
#define PROPERTY_S_V_OTHER_USAGE_DESCRIPTION \
					"SVOtherUsageDescription"
#endif

#ifndef PROPERTY_S_V_CLIENT_SETTABLE_USAGE
#define PROPERTY_S_V_CLIENT_SETTABLE_USAGE \
					"SVClientSettableUsage"
#endif

#ifndef PROPERTY_S_S_INSTANCE_ID
#define PROPERTY_S_S_INSTANCE_ID \
					"SSInstanceID"
#endif

#ifndef PROPERTY_S_S_ELEMENT_NAME
#define PROPERTY_S_S_ELEMENT_NAME \
					"SSElementName"
#endif

#ifndef PROPERTY_S_S_NO_SINGLE_POINT_OF_FAILURE
#define PROPERTY_S_S_NO_SINGLE_POINT_OF_FAILURE \
					"SSNoSinglePointOfFailure"
#endif

#ifndef PROPERTY_S_S_DATA_REDUNDANCY_MIN
#define PROPERTY_S_S_DATA_REDUNDANCY_MIN \
					"SSDataRedundancyMin"
#endif

#ifndef PROPERTY_S_S_DATA_REDUNDANCY_MAX
#define PROPERTY_S_S_DATA_REDUNDANCY_MAX \
					"SSDataRedundancyMax"
#endif

#ifndef PROPERTY_S_S_DATA_REDUNDANCY_GOAL
#define PROPERTY_S_S_DATA_REDUNDANCY_GOAL \
					"SSDataRedundancyGoal"
#endif

#ifndef PROPERTY_S_S_PACKAGE_REDUNDANCY_MIN
#define PROPERTY_S_S_PACKAGE_REDUNDANCY_MIN \
					"SSPackageRedundancyMin"
#endif

#ifndef PROPERTY_S_S_PACKAGE_REDUNDANCY_MAX
#define PROPERTY_S_S_PACKAGE_REDUNDANCY_MAX \
					"SSPackageRedundancyMax"
#endif

#ifndef PROPERTY_S_S_PACKAGE_REDUNDANCY_GOAL
#define PROPERTY_S_S_PACKAGE_REDUNDANCY_GOAL \
					"SSPackageRedundancyGoal"
#endif

#ifndef PROPERTY_S_S_CHANGEABLE_TYPE
#define PROPERTY_S_S_CHANGEABLE_TYPE \
					"SSChangeableType"
#endif

#ifndef PROPERTY_AFS_P_SPACE_CONSUMED
#define PROPERTY_AFS_P_SPACE_CONSUMED \
					"AFSPSpaceConsumed"
#endif

#ifndef PROPERTY_SPINSTANCE_ID
#define PROPERTY_SPINSTANCE_ID \
					"SPInstanceID"
#endif

#ifndef PROPERTY_S_P_POOL_ID
#define PROPERTY_S_P_POOL_ID \
					"SPPoolID"
#endif

#ifndef PROPERTY_S_V_OTHER_IDENTIFYING_INFO
#define PROPERTY_S_V_OTHER_IDENTIFYING_INFO \
					"SVOtherIdentifyingInfo"
#endif

#ifndef PROPERTY_S_V_IDENTIFYING_DESCRIPTIONS
#define PROPERTY_S_V_IDENTIFYING_DESCRIPTIONS \
					"SVIdentifyingDescriptions"
#endif

#ifndef PROPERTY_S_V_ELEMENT_NAME
#define PROPERTY_S_V_ELEMENT_NAME \
					"SVElementName"
#endif

#ifndef PROPERTY_S_V_PRIMORDIAL
#define PROPERTY_S_V_PRIMORDIAL \
					"SVPrimordial"
#endif

#ifndef PROPERTY_S_V_EXTENT_DISCRIMINATOR
#define PROPERTY_S_V_EXTENT_DISCRIMINATOR \
					"SVExtentDiscriminator"
#endif

#ifndef PROPERTY_S_S_EXTENT_STRIPE_LENGTH
#define PROPERTY_S_S_EXTENT_STRIPE_LENGTH \
					"SSExtentStripeLength"
#endif

#ifndef PROPERTY_S_S_EXTENT_STRIPE_LENGTH_MIN
#define PROPERTY_S_S_EXTENT_STRIPE_LENGTH_MIN \
					"SSExtentStripeLengthMin"
#endif

#ifndef PROPERTY_S_S_EXTENT_STRIPE_LENGTH_MAX
#define PROPERTY_S_S_EXTENT_STRIPE_LENGTH_MAX \
					"SSExtentStripeLengthMax"
#endif

#ifndef PROPERTY_S_S_PARITY_LAYOUT
#define PROPERTY_S_S_PARITY_LAYOUT \
					"SSParityLayout"
#endif

#ifndef PROPERTY_S_S_USER_DATA_STRIPE_DEPTH
#define PROPERTY_S_S_USER_DATA_STRIPE_DEPTH \
					"SSUserDataStripeDepth"
#endif

#ifndef PROPERTY_S_S_USER_DATA_STRIPE_DEPTH_MIN
#define PROPERTY_S_S_USER_DATA_STRIPE_DEPTH_MIN \
					"SSUserDataStripeDepthMin"
#endif

#ifndef PROPERTY_S_S_USER_DATA_STRIPE_DEPTH_MAX
#define PROPERTY_S_S_USER_DATA_STRIPE_DEPTH_MAX \
					"SSUserDataStripeDepthMax"
#endif

#ifndef PROPERTY_S_S_STORAGE_POOL_INITIAL_USAGE
#define PROPERTY_S_S_STORAGE_POOL_INITIAL_USAGE \
					"SSStoragePoolInitialUsage"
#endif

#ifndef PROPERTY_S_S_STORAGE_EXTENT_INITIAL_USAGE
#define PROPERTY_S_S_STORAGE_EXTENT_INITIAL_USAGE \
					"SSStorageExtentInitialUsage"
#endif

#ifndef PROPERTY_S_V_IS_COMPOSITE
#define PROPERTY_S_V_IS_COMPOSITE \
					"SVIsComposite"
#endif



class UNIX_VolumeView :
	public CIM_LogicalDeviceView
{
public:

	UNIX_VolumeView();
	~UNIX_VolumeView();

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
	virtual Boolean getSVSystemCreationClassName(CIMProperty&) const;
	virtual String getSVSystemCreationClassName() const;
	virtual void setSVSystemCreationClassName(String&);
	virtual Boolean getSVSystemName(CIMProperty&) const;
	virtual String getSVSystemName() const;
	virtual void setSVSystemName(String&);
	virtual Boolean getSVCreationClassName(CIMProperty&) const;
	virtual String getSVCreationClassName() const;
	virtual void setSVCreationClassName(String&);
	virtual Boolean getSVDeviceID(CIMProperty&) const;
	virtual String getSVDeviceID() const;
	virtual void setSVDeviceID(String&);
	virtual Boolean getSVName(CIMProperty&) const;
	virtual String getSVName() const;
	virtual void setSVName(String&);
	virtual Boolean getSVNameFormat(CIMProperty&) const;
	virtual Uint16 getSVNameFormat() const;
	virtual void setSVNameFormat(Uint16&);
	virtual Boolean getSVNameNamespace(CIMProperty&) const;
	virtual Uint16 getSVNameNamespace() const;
	virtual void setSVNameNamespace(Uint16&);
	virtual Boolean getSVExtentStatus(CIMProperty&) const;
	virtual Array<Uint16> getSVExtentStatus() const;
	virtual void setSVExtentStatus(Array<Uint16>&);
	virtual Boolean getSVOperationalStatus(CIMProperty&) const;
	virtual Array<Uint16> getSVOperationalStatus() const;
	virtual void setSVOperationalStatus(Array<Uint16>&);
	virtual Boolean getSVBlockSize(CIMProperty&) const;
	virtual Uint64 getSVBlockSize() const;
	virtual void setSVBlockSize(Uint64&);
	virtual Boolean getSVNumberOfBlocks(CIMProperty&) const;
	virtual Uint64 getSVNumberOfBlocks() const;
	virtual void setSVNumberOfBlocks(Uint64&);
	virtual Boolean getSVConsumableBlocks(CIMProperty&) const;
	virtual Uint64 getSVConsumableBlocks() const;
	virtual void setSVConsumableBlocks(Uint64&);
	virtual Boolean getSVIsBasedOnUnderlyingRedundancy(CIMProperty&) const;
	virtual Boolean getSVIsBasedOnUnderlyingRedundancy() const;
	virtual void setSVIsBasedOnUnderlyingRedundancy(Boolean&);
	virtual Boolean getSVNoSinglePointOfFailure(CIMProperty&) const;
	virtual Boolean getSVNoSinglePointOfFailure() const;
	virtual void setSVNoSinglePointOfFailure(Boolean&);
	virtual Boolean getSVDataRedundancy(CIMProperty&) const;
	virtual Uint16 getSVDataRedundancy() const;
	virtual void setSVDataRedundancy(Uint16&);
	virtual Boolean getSVPackageRedundancy(CIMProperty&) const;
	virtual Uint16 getSVPackageRedundancy() const;
	virtual void setSVPackageRedundancy(Uint16&);
	virtual Boolean getSVDeltaReservation(CIMProperty&) const;
	virtual Uint8 getSVDeltaReservation() const;
	virtual void setSVDeltaReservation(Uint8&);
	virtual Boolean getSVUsage(CIMProperty&) const;
	virtual Uint16 getSVUsage() const;
	virtual void setSVUsage(Uint16&);
	virtual Boolean getSVOtherUsageDescription(CIMProperty&) const;
	virtual String getSVOtherUsageDescription() const;
	virtual void setSVOtherUsageDescription(String&);
	virtual Boolean getSVClientSettableUsage(CIMProperty&) const;
	virtual Array<Uint16> getSVClientSettableUsage() const;
	virtual void setSVClientSettableUsage(Array<Uint16>&);
	virtual Boolean getSSInstanceID(CIMProperty&) const;
	virtual String getSSInstanceID() const;
	virtual void setSSInstanceID(String&);
	virtual Boolean getSSElementName(CIMProperty&) const;
	virtual String getSSElementName() const;
	virtual void setSSElementName(String&);
	virtual Boolean getSSNoSinglePointOfFailure(CIMProperty&) const;
	virtual Boolean getSSNoSinglePointOfFailure() const;
	virtual void setSSNoSinglePointOfFailure(Boolean&);
	virtual Boolean getSSDataRedundancyMin(CIMProperty&) const;
	virtual Uint16 getSSDataRedundancyMin() const;
	virtual void setSSDataRedundancyMin(Uint16&);
	virtual Boolean getSSDataRedundancyMax(CIMProperty&) const;
	virtual Uint16 getSSDataRedundancyMax() const;
	virtual void setSSDataRedundancyMax(Uint16&);
	virtual Boolean getSSDataRedundancyGoal(CIMProperty&) const;
	virtual Uint16 getSSDataRedundancyGoal() const;
	virtual void setSSDataRedundancyGoal(Uint16&);
	virtual Boolean getSSPackageRedundancyMin(CIMProperty&) const;
	virtual Uint16 getSSPackageRedundancyMin() const;
	virtual void setSSPackageRedundancyMin(Uint16&);
	virtual Boolean getSSPackageRedundancyMax(CIMProperty&) const;
	virtual Uint16 getSSPackageRedundancyMax() const;
	virtual void setSSPackageRedundancyMax(Uint16&);
	virtual Boolean getSSPackageRedundancyGoal(CIMProperty&) const;
	virtual Uint16 getSSPackageRedundancyGoal() const;
	virtual void setSSPackageRedundancyGoal(Uint16&);
	virtual Boolean getSSChangeableType(CIMProperty&) const;
	virtual Uint16 getSSChangeableType() const;
	virtual void setSSChangeableType(Uint16&);
	virtual Boolean getAFSPSpaceConsumed(CIMProperty&) const;
	virtual Uint64 getAFSPSpaceConsumed() const;
	virtual void setAFSPSpaceConsumed(Uint64&);
	virtual Boolean getSPInstanceID(CIMProperty&) const;
	virtual String getSPInstanceID() const;
	virtual void setSPInstanceID(String&);
	virtual Boolean getSPPoolID(CIMProperty&) const;
	virtual String getSPPoolID() const;
	virtual void setSPPoolID(String&);
	virtual Boolean getSVOtherIdentifyingInfo(CIMProperty&) const;
	virtual Array<String> getSVOtherIdentifyingInfo() const;
	virtual void setSVOtherIdentifyingInfo(Array<String>&);
	virtual Boolean getSVIdentifyingDescriptions(CIMProperty&) const;
	virtual Array<String> getSVIdentifyingDescriptions() const;
	virtual void setSVIdentifyingDescriptions(Array<String>&);
	virtual Boolean getSVElementName(CIMProperty&) const;
	virtual String getSVElementName() const;
	virtual void setSVElementName(String&);
	virtual Boolean getSVPrimordial(CIMProperty&) const;
	virtual Boolean getSVPrimordial() const;
	virtual void setSVPrimordial(Boolean&);
	virtual Boolean getSVExtentDiscriminator(CIMProperty&) const;
	virtual Array<String> getSVExtentDiscriminator() const;
	virtual void setSVExtentDiscriminator(Array<String>&);
	virtual Boolean getSSExtentStripeLength(CIMProperty&) const;
	virtual Uint16 getSSExtentStripeLength() const;
	virtual void setSSExtentStripeLength(Uint16&);
	virtual Boolean getSSExtentStripeLengthMin(CIMProperty&) const;
	virtual Uint16 getSSExtentStripeLengthMin() const;
	virtual void setSSExtentStripeLengthMin(Uint16&);
	virtual Boolean getSSExtentStripeLengthMax(CIMProperty&) const;
	virtual Uint16 getSSExtentStripeLengthMax() const;
	virtual void setSSExtentStripeLengthMax(Uint16&);
	virtual Boolean getSSParityLayout(CIMProperty&) const;
	virtual Uint16 getSSParityLayout() const;
	virtual void setSSParityLayout(Uint16&);
	virtual Boolean getSSUserDataStripeDepth(CIMProperty&) const;
	virtual Uint64 getSSUserDataStripeDepth() const;
	virtual void setSSUserDataStripeDepth(Uint64&);
	virtual Boolean getSSUserDataStripeDepthMin(CIMProperty&) const;
	virtual Uint64 getSSUserDataStripeDepthMin() const;
	virtual void setSSUserDataStripeDepthMin(Uint64&);
	virtual Boolean getSSUserDataStripeDepthMax(CIMProperty&) const;
	virtual Uint64 getSSUserDataStripeDepthMax() const;
	virtual void setSSUserDataStripeDepthMax(Uint64&);
	virtual Boolean getSSStoragePoolInitialUsage(CIMProperty&) const;
	virtual Uint16 getSSStoragePoolInitialUsage() const;
	virtual void setSSStoragePoolInitialUsage(Uint16&);
	virtual Boolean getSSStorageExtentInitialUsage(CIMProperty&) const;
	virtual Uint16 getSSStorageExtentInitialUsage() const;
	virtual void setSSStorageExtentInitialUsage(Uint16&);
	virtual Boolean getSVIsComposite(CIMProperty&) const;
	virtual Boolean getSVIsComposite() const;
	virtual void setSVIsComposite(Boolean&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	String _sVSystemCreationClassName;
	String _sVSystemName;
	String _sVCreationClassName;
	String _sVDeviceID;
	String _sVName;
	Uint16 _sVNameFormat;
	Uint16 _sVNameNamespace;
	Array<Uint16> _sVExtentStatus;
	Array<Uint16> _sVOperationalStatus;
	Uint64 _sVBlockSize;
	Uint64 _sVNumberOfBlocks;
	Uint64 _sVConsumableBlocks;
	Boolean _sVIsBasedOnUnderlyingRedundancy;
	Boolean _sVNoSinglePointOfFailure;
	Uint16 _sVDataRedundancy;
	Uint16 _sVPackageRedundancy;
	Uint8 _sVDeltaReservation;
	Uint16 _sVUsage;
	String _sVOtherUsageDescription;
	Array<Uint16> _sVClientSettableUsage;
	String _sSInstanceID;
	String _sSElementName;
	Boolean _sSNoSinglePointOfFailure;
	Uint16 _sSDataRedundancyMin;
	Uint16 _sSDataRedundancyMax;
	Uint16 _sSDataRedundancyGoal;
	Uint16 _sSPackageRedundancyMin;
	Uint16 _sSPackageRedundancyMax;
	Uint16 _sSPackageRedundancyGoal;
	Uint16 _sSChangeableType;
	Uint64 _aFSPSpaceConsumed;
	String _sPInstanceID;
	String _sPPoolID;
	Array<String> _sVOtherIdentifyingInfo;
	Array<String> _sVIdentifyingDescriptions;
	String _sVElementName;
	Boolean _sVPrimordial;
	Array<String> _sVExtentDiscriminator;
	Uint16 _sSExtentStripeLength;
	Uint16 _sSExtentStripeLengthMin;
	Uint16 _sSExtentStripeLengthMax;
	Uint16 _sSParityLayout;
	Uint64 _sSUserDataStripeDepth;
	Uint64 _sSUserDataStripeDepthMin;
	Uint64 _sSUserDataStripeDepthMax;
	Uint16 _sSStoragePoolInitialUsage;
	Uint16 _sSStorageExtentInitialUsage;
	Boolean _sVIsComposite;

#	include "UNIX_VolumeViewPrivate.h"


};

#endif /* UNIX_VOLUMEVIEW */
