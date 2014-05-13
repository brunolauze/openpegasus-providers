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
2.28.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::Views
*/


/* **** Description *** */
/*
The CIM_StoragePoolView is a view that is derived from CIM_StoragePool, CIM_StorageCapabilities, CIM_ElementCapabilities, CIM_StorageConfigurationCapabilities, and CIM_AllocatedFromStoragePool.
CIM_ElementView may associate CIM_StoragePoolView to its underlying elements (regardless of whether or not they are instantiated).
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

			UNIX_StoragePoolView:
				SPInstanceID String
				SPElementName String
				SPPoolID String
				SPRemainingManagedSpace UInt64
				SPTotalManagedSpace UInt64
				SPPrimordial Boolean
				SPUsage UInt16
				SPOtherUsageDescription String
				SPClientSettableUsage UInt16
				SCInstanceID String
				SCElementName String
				SCElementType UInt16
				SCNoSinglePointOfFailure Boolean
				SCNoSinglePointOfFailureDefault Boolean
				SCPackageRedundancyDefault UInt16
				SCPackageRedundancyMin UInt16
				SCPackageRedundancyMax UInt16
				SCDataRedundancyDefault UInt16
				SCDataRedundancyMin UInt16
				SCDataRedundancyMax UInt16
				SCExtentStripeLengthDefault UInt16
				SCParityLayoutDefault UInt16
				SCUserDataStripeDepthDefault UInt64
				AFSPSpaceConsumed UInt64
				SCCInstanceID String
				SCCElementName String
				SCCSupportedStoragePoolFeatures UInt16
				SCCSupportedStorageElementTypes UInt16
				SCCSupportedStorageElementFeatures UInt16
				SCCSupportedSynchronousActions UInt16
				SCCSupportedAsynchronousActions UInt16
				SCCSupportedStorageElementUsage UInt16
				SCCClientSettableElementUsage String
				SCCSupportedStoragePoolUsage String
				SCCClientSettablePoolUsage String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_View:

			UNIX_StoragePoolView:


*/

#ifndef __UNIX_STORAGEPOOLVIEW_H
#define __UNIX_STORAGEPOOLVIEW_H


#include "CIM_View.h"

#include "UNIX_StoragePoolViewDeps.h"


#ifndef PROPERTY_SPINSTANCE_ID
#define PROPERTY_SPINSTANCE_ID \
					"SPInstanceID"
#endif

#ifndef PROPERTY_S_P_ELEMENT_NAME
#define PROPERTY_S_P_ELEMENT_NAME \
					"SPElementName"
#endif

#ifndef PROPERTY_S_P_POOL_ID
#define PROPERTY_S_P_POOL_ID \
					"SPPoolID"
#endif

#ifndef PROPERTY_S_P_REMAINING_MANAGED_SPACE
#define PROPERTY_S_P_REMAINING_MANAGED_SPACE \
					"SPRemainingManagedSpace"
#endif

#ifndef PROPERTY_S_P_TOTAL_MANAGED_SPACE
#define PROPERTY_S_P_TOTAL_MANAGED_SPACE \
					"SPTotalManagedSpace"
#endif

#ifndef PROPERTY_S_P_PRIMORDIAL
#define PROPERTY_S_P_PRIMORDIAL \
					"SPPrimordial"
#endif

#ifndef PROPERTY_S_P_USAGE
#define PROPERTY_S_P_USAGE \
					"SPUsage"
#endif

#ifndef PROPERTY_S_P_OTHER_USAGE_DESCRIPTION
#define PROPERTY_S_P_OTHER_USAGE_DESCRIPTION \
					"SPOtherUsageDescription"
#endif

#ifndef PROPERTY_S_P_CLIENT_SETTABLE_USAGE
#define PROPERTY_S_P_CLIENT_SETTABLE_USAGE \
					"SPClientSettableUsage"
#endif

#ifndef PROPERTY_S_C_INSTANCE_ID
#define PROPERTY_S_C_INSTANCE_ID \
					"SCInstanceID"
#endif

#ifndef PROPERTY_S_C_ELEMENT_NAME
#define PROPERTY_S_C_ELEMENT_NAME \
					"SCElementName"
#endif

#ifndef PROPERTY_S_C_ELEMENT_TYPE
#define PROPERTY_S_C_ELEMENT_TYPE \
					"SCElementType"
#endif

#ifndef PROPERTY_S_C_NO_SINGLE_POINT_OF_FAILURE
#define PROPERTY_S_C_NO_SINGLE_POINT_OF_FAILURE \
					"SCNoSinglePointOfFailure"
#endif

#ifndef PROPERTY_S_C_NO_SINGLE_POINT_OF_FAILURE_DEFAULT
#define PROPERTY_S_C_NO_SINGLE_POINT_OF_FAILURE_DEFAULT \
					"SCNoSinglePointOfFailureDefault"
#endif

#ifndef PROPERTY_S_C_PACKAGE_REDUNDANCY_DEFAULT
#define PROPERTY_S_C_PACKAGE_REDUNDANCY_DEFAULT \
					"SCPackageRedundancyDefault"
#endif

#ifndef PROPERTY_S_C_PACKAGE_REDUNDANCY_MIN
#define PROPERTY_S_C_PACKAGE_REDUNDANCY_MIN \
					"SCPackageRedundancyMin"
#endif

#ifndef PROPERTY_S_C_PACKAGE_REDUNDANCY_MAX
#define PROPERTY_S_C_PACKAGE_REDUNDANCY_MAX \
					"SCPackageRedundancyMax"
#endif

#ifndef PROPERTY_S_C_DATA_REDUNDANCY_DEFAULT
#define PROPERTY_S_C_DATA_REDUNDANCY_DEFAULT \
					"SCDataRedundancyDefault"
#endif

#ifndef PROPERTY_S_C_DATA_REDUNDANCY_MIN
#define PROPERTY_S_C_DATA_REDUNDANCY_MIN \
					"SCDataRedundancyMin"
#endif

#ifndef PROPERTY_S_C_DATA_REDUNDANCY_MAX
#define PROPERTY_S_C_DATA_REDUNDANCY_MAX \
					"SCDataRedundancyMax"
#endif

#ifndef PROPERTY_S_C_EXTENT_STRIPE_LENGTH_DEFAULT
#define PROPERTY_S_C_EXTENT_STRIPE_LENGTH_DEFAULT \
					"SCExtentStripeLengthDefault"
#endif

#ifndef PROPERTY_S_C_PARITY_LAYOUT_DEFAULT
#define PROPERTY_S_C_PARITY_LAYOUT_DEFAULT \
					"SCParityLayoutDefault"
#endif

#ifndef PROPERTY_S_C_USER_DATA_STRIPE_DEPTH_DEFAULT
#define PROPERTY_S_C_USER_DATA_STRIPE_DEPTH_DEFAULT \
					"SCUserDataStripeDepthDefault"
#endif

#ifndef PROPERTY_AFS_P_SPACE_CONSUMED
#define PROPERTY_AFS_P_SPACE_CONSUMED \
					"AFSPSpaceConsumed"
#endif

#ifndef PROPERTY_S_C_C_INSTANCE_ID
#define PROPERTY_S_C_C_INSTANCE_ID \
					"SCCInstanceID"
#endif

#ifndef PROPERTY_S_C_C_ELEMENT_NAME
#define PROPERTY_S_C_C_ELEMENT_NAME \
					"SCCElementName"
#endif

#ifndef PROPERTY_S_C_CSUPPORTED_STORAGE_POOL_FEATURES
#define PROPERTY_S_C_CSUPPORTED_STORAGE_POOL_FEATURES \
					"SCCSupportedStoragePoolFeatures"
#endif

#ifndef PROPERTY_S_C_CSUPPORTED_STORAGE_ELEMENT_TYPES
#define PROPERTY_S_C_CSUPPORTED_STORAGE_ELEMENT_TYPES \
					"SCCSupportedStorageElementTypes"
#endif

#ifndef PROPERTY_S_C_CSUPPORTED_STORAGE_ELEMENT_FEATURES
#define PROPERTY_S_C_CSUPPORTED_STORAGE_ELEMENT_FEATURES \
					"SCCSupportedStorageElementFeatures"
#endif

#ifndef PROPERTY_S_C_CSUPPORTED_SYNCHRONOUS_ACTIONS
#define PROPERTY_S_C_CSUPPORTED_SYNCHRONOUS_ACTIONS \
					"SCCSupportedSynchronousActions"
#endif

#ifndef PROPERTY_S_C_CSUPPORTED_ASYNCHRONOUS_ACTIONS
#define PROPERTY_S_C_CSUPPORTED_ASYNCHRONOUS_ACTIONS \
					"SCCSupportedAsynchronousActions"
#endif

#ifndef PROPERTY_S_C_CSUPPORTED_STORAGE_ELEMENT_USAGE
#define PROPERTY_S_C_CSUPPORTED_STORAGE_ELEMENT_USAGE \
					"SCCSupportedStorageElementUsage"
#endif

#ifndef PROPERTY_S_C_C_CLIENT_SETTABLE_ELEMENT_USAGE
#define PROPERTY_S_C_C_CLIENT_SETTABLE_ELEMENT_USAGE \
					"SCCClientSettableElementUsage"
#endif

#ifndef PROPERTY_S_C_CSUPPORTED_STORAGE_POOL_USAGE
#define PROPERTY_S_C_CSUPPORTED_STORAGE_POOL_USAGE \
					"SCCSupportedStoragePoolUsage"
#endif

#ifndef PROPERTY_S_C_C_CLIENT_SETTABLE_POOL_USAGE
#define PROPERTY_S_C_C_CLIENT_SETTABLE_POOL_USAGE \
					"SCCClientSettablePoolUsage"
#endif



class UNIX_StoragePoolView :
	public CIM_View
{
public:

	UNIX_StoragePoolView();
	~UNIX_StoragePoolView();

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
	virtual Boolean getSPInstanceID(CIMProperty&) const;
	virtual String getSPInstanceID() const;
	virtual void setSPInstanceID(String&);
	virtual Boolean getSPElementName(CIMProperty&) const;
	virtual String getSPElementName() const;
	virtual void setSPElementName(String&);
	virtual Boolean getSPPoolID(CIMProperty&) const;
	virtual String getSPPoolID() const;
	virtual void setSPPoolID(String&);
	virtual Boolean getSPRemainingManagedSpace(CIMProperty&) const;
	virtual Uint64 getSPRemainingManagedSpace() const;
	virtual void setSPRemainingManagedSpace(Uint64&);
	virtual Boolean getSPTotalManagedSpace(CIMProperty&) const;
	virtual Uint64 getSPTotalManagedSpace() const;
	virtual void setSPTotalManagedSpace(Uint64&);
	virtual Boolean getSPPrimordial(CIMProperty&) const;
	virtual Boolean getSPPrimordial() const;
	virtual void setSPPrimordial(Boolean&);
	virtual Boolean getSPUsage(CIMProperty&) const;
	virtual Uint16 getSPUsage() const;
	virtual void setSPUsage(Uint16&);
	virtual Boolean getSPOtherUsageDescription(CIMProperty&) const;
	virtual String getSPOtherUsageDescription() const;
	virtual void setSPOtherUsageDescription(String&);
	virtual Boolean getSPClientSettableUsage(CIMProperty&) const;
	virtual Array<Uint16> getSPClientSettableUsage() const;
	virtual void setSPClientSettableUsage(Array<Uint16>&);
	virtual Boolean getSCInstanceID(CIMProperty&) const;
	virtual String getSCInstanceID() const;
	virtual void setSCInstanceID(String&);
	virtual Boolean getSCElementName(CIMProperty&) const;
	virtual String getSCElementName() const;
	virtual void setSCElementName(String&);
	virtual Boolean getSCElementType(CIMProperty&) const;
	virtual Uint16 getSCElementType() const;
	virtual void setSCElementType(Uint16&);
	virtual Boolean getSCNoSinglePointOfFailure(CIMProperty&) const;
	virtual Boolean getSCNoSinglePointOfFailure() const;
	virtual void setSCNoSinglePointOfFailure(Boolean&);
	virtual Boolean getSCNoSinglePointOfFailureDefault(CIMProperty&) const;
	virtual Boolean getSCNoSinglePointOfFailureDefault() const;
	virtual void setSCNoSinglePointOfFailureDefault(Boolean&);
	virtual Boolean getSCPackageRedundancyDefault(CIMProperty&) const;
	virtual Uint16 getSCPackageRedundancyDefault() const;
	virtual void setSCPackageRedundancyDefault(Uint16&);
	virtual Boolean getSCPackageRedundancyMin(CIMProperty&) const;
	virtual Uint16 getSCPackageRedundancyMin() const;
	virtual void setSCPackageRedundancyMin(Uint16&);
	virtual Boolean getSCPackageRedundancyMax(CIMProperty&) const;
	virtual Uint16 getSCPackageRedundancyMax() const;
	virtual void setSCPackageRedundancyMax(Uint16&);
	virtual Boolean getSCDataRedundancyDefault(CIMProperty&) const;
	virtual Uint16 getSCDataRedundancyDefault() const;
	virtual void setSCDataRedundancyDefault(Uint16&);
	virtual Boolean getSCDataRedundancyMin(CIMProperty&) const;
	virtual Uint16 getSCDataRedundancyMin() const;
	virtual void setSCDataRedundancyMin(Uint16&);
	virtual Boolean getSCDataRedundancyMax(CIMProperty&) const;
	virtual Uint16 getSCDataRedundancyMax() const;
	virtual void setSCDataRedundancyMax(Uint16&);
	virtual Boolean getSCExtentStripeLengthDefault(CIMProperty&) const;
	virtual Uint16 getSCExtentStripeLengthDefault() const;
	virtual void setSCExtentStripeLengthDefault(Uint16&);
	virtual Boolean getSCParityLayoutDefault(CIMProperty&) const;
	virtual Uint16 getSCParityLayoutDefault() const;
	virtual void setSCParityLayoutDefault(Uint16&);
	virtual Boolean getSCUserDataStripeDepthDefault(CIMProperty&) const;
	virtual Uint64 getSCUserDataStripeDepthDefault() const;
	virtual void setSCUserDataStripeDepthDefault(Uint64&);
	virtual Boolean getAFSPSpaceConsumed(CIMProperty&) const;
	virtual Uint64 getAFSPSpaceConsumed() const;
	virtual void setAFSPSpaceConsumed(Uint64&);
	virtual Boolean getSCCInstanceID(CIMProperty&) const;
	virtual String getSCCInstanceID() const;
	virtual void setSCCInstanceID(String&);
	virtual Boolean getSCCElementName(CIMProperty&) const;
	virtual String getSCCElementName() const;
	virtual void setSCCElementName(String&);
	virtual Boolean getSCCSupportedStoragePoolFeatures(CIMProperty&) const;
	virtual Array<Uint16> getSCCSupportedStoragePoolFeatures() const;
	virtual void setSCCSupportedStoragePoolFeatures(Array<Uint16>&);
	virtual Boolean getSCCSupportedStorageElementTypes(CIMProperty&) const;
	virtual Array<Uint16> getSCCSupportedStorageElementTypes() const;
	virtual void setSCCSupportedStorageElementTypes(Array<Uint16>&);
	virtual Boolean getSCCSupportedStorageElementFeatures(CIMProperty&) const;
	virtual Array<Uint16> getSCCSupportedStorageElementFeatures() const;
	virtual void setSCCSupportedStorageElementFeatures(Array<Uint16>&);
	virtual Boolean getSCCSupportedSynchronousActions(CIMProperty&) const;
	virtual Array<Uint16> getSCCSupportedSynchronousActions() const;
	virtual void setSCCSupportedSynchronousActions(Array<Uint16>&);
	virtual Boolean getSCCSupportedAsynchronousActions(CIMProperty&) const;
	virtual Array<Uint16> getSCCSupportedAsynchronousActions() const;
	virtual void setSCCSupportedAsynchronousActions(Array<Uint16>&);
	virtual Boolean getSCCSupportedStorageElementUsage(CIMProperty&) const;
	virtual Array<Uint16> getSCCSupportedStorageElementUsage() const;
	virtual void setSCCSupportedStorageElementUsage(Array<Uint16>&);
	virtual Boolean getSCCClientSettableElementUsage(CIMProperty&) const;
	virtual Array<String> getSCCClientSettableElementUsage() const;
	virtual void setSCCClientSettableElementUsage(Array<String>&);
	virtual Boolean getSCCSupportedStoragePoolUsage(CIMProperty&) const;
	virtual Array<String> getSCCSupportedStoragePoolUsage() const;
	virtual void setSCCSupportedStoragePoolUsage(Array<String>&);
	virtual Boolean getSCCClientSettablePoolUsage(CIMProperty&) const;
	virtual Array<String> getSCCClientSettablePoolUsage() const;
	virtual void setSCCClientSettablePoolUsage(Array<String>&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	String _sPInstanceID;
	String _sPElementName;
	String _sPPoolID;
	Uint64 _sPRemainingManagedSpace;
	Uint64 _sPTotalManagedSpace;
	Boolean _sPPrimordial;
	Uint16 _sPUsage;
	String _sPOtherUsageDescription;
	Array<Uint16> _sPClientSettableUsage;
	String _sCInstanceID;
	String _sCElementName;
	Uint16 _sCElementType;
	Boolean _sCNoSinglePointOfFailure;
	Boolean _sCNoSinglePointOfFailureDefault;
	Uint16 _sCPackageRedundancyDefault;
	Uint16 _sCPackageRedundancyMin;
	Uint16 _sCPackageRedundancyMax;
	Uint16 _sCDataRedundancyDefault;
	Uint16 _sCDataRedundancyMin;
	Uint16 _sCDataRedundancyMax;
	Uint16 _sCExtentStripeLengthDefault;
	Uint16 _sCParityLayoutDefault;
	Uint64 _sCUserDataStripeDepthDefault;
	Uint64 _aFSPSpaceConsumed;
	String _sCCInstanceID;
	String _sCCElementName;
	Array<Uint16> _sCCSupportedStoragePoolFeatures;
	Array<Uint16> _sCCSupportedStorageElementTypes;
	Array<Uint16> _sCCSupportedStorageElementFeatures;
	Array<Uint16> _sCCSupportedSynchronousActions;
	Array<Uint16> _sCCSupportedAsynchronousActions;
	Array<Uint16> _sCCSupportedStorageElementUsage;
	Array<String> _sCCClientSettableElementUsage;
	Array<String> _sCCSupportedStoragePoolUsage;
	Array<String> _sCCClientSettablePoolUsage;

#	include "UNIX_StoragePoolViewPrivate.h"


};

#endif /* UNIX_STORAGEPOOLVIEW */
