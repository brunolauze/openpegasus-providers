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
CIM::Device::StorageServices
*/


/* **** Description *** */
/*
A subclass of StorageCapabilities that defines the Capabilities of a storage tier.
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

			UNIX_StorageCapabilities:
				ElementType UInt16
				NoSinglePointOfFailure Boolean
				NoSinglePointOfFailureDefault Boolean
				DataRedundancyMax UInt16
				DataRedundancyMin UInt16
				DataRedundancyDefault UInt16
				PackageRedundancyMax UInt16
				PackageRedundancyMin UInt16
				PackageRedundancyDefault UInt16
				DeltaReservationMax UInt16
				DeltaReservationMin UInt16
				DeltaReservationDefault UInt16
				ExtentStripeLengthDefault UInt16
				ParityLayoutDefault UInt16
				UserDataStripeDepthDefault UInt64
				AvailableDiskType UInt16
				AvailableFormFactorType UInt16
				Encryption UInt16
				SupportedDataOrganizations UInt16
				AvailableInterconnectSpeed UInt64
				AvailableInterconnectType UInt16
				AvailableRPM UInt32
				SupportedCompressionRates UInt16

			UNIX_StorageTierCapabilities:
				StorageTierCharacteristics UInt16
				RelativePerformanceOrderMin UInt16
				RelativePerformanceOrderMax UInt16
				RelativePerformanceOrderDefault UInt16
				SupportedStorageTierMethodologies UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Capabilities:
				CreateGoalSettings UInt16

			UNIX_StorageCapabilities:
				CreateSetting UInt32
				GetSupportedStripeLengths UInt32
				GetSupportedStripeLengthRange UInt32
				GetSupportedParityLayouts UInt32
				GetSupportedStripeDepths UInt32
				GetSupportedStripeDepthRange UInt32

			UNIX_StorageTierCapabilities:


*/

#ifndef __UNIX_STORAGETIERCAPABILITIES_H
#define __UNIX_STORAGETIERCAPABILITIES_H


#include <StorageCapabilities/UNIX_StorageCapabilities.h>
#include <StorageSetting/UNIX_StorageSetting.h>

#include "UNIX_StorageTierCapabilitiesDeps.h"


#ifndef PROPERTY_STORAGE_TIER_CHARACTERISTICS
#define PROPERTY_STORAGE_TIER_CHARACTERISTICS \
					"StorageTierCharacteristics"
#endif

#ifndef PROPERTY_RELATIVE_PERFORMANCE_ORDER_MIN
#define PROPERTY_RELATIVE_PERFORMANCE_ORDER_MIN \
					"RelativePerformanceOrderMin"
#endif

#ifndef PROPERTY_RELATIVE_PERFORMANCE_ORDER_MAX
#define PROPERTY_RELATIVE_PERFORMANCE_ORDER_MAX \
					"RelativePerformanceOrderMax"
#endif

#ifndef PROPERTY_RELATIVE_PERFORMANCE_ORDER_DEFAULT
#define PROPERTY_RELATIVE_PERFORMANCE_ORDER_DEFAULT \
					"RelativePerformanceOrderDefault"
#endif

#ifndef PROPERTY_SUPPORTED_STORAGE_TIER_METHODOLOGIES
#define PROPERTY_SUPPORTED_STORAGE_TIER_METHODOLOGIES \
					"SupportedStorageTierMethodologies"
#endif



class UNIX_StorageTierCapabilities :
	public UNIX_StorageCapabilities
{
public:

	UNIX_StorageTierCapabilities();
	~UNIX_StorageTierCapabilities();

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
	virtual Boolean getElementType(CIMProperty&) const;
	virtual Uint16 getElementType() const;
	virtual void setElementType(Uint16&);
	virtual Boolean getNoSinglePointOfFailure(CIMProperty&) const;
	virtual Boolean getNoSinglePointOfFailure() const;
	virtual void setNoSinglePointOfFailure(Boolean&);
	virtual Boolean getNoSinglePointOfFailureDefault(CIMProperty&) const;
	virtual Boolean getNoSinglePointOfFailureDefault() const;
	virtual void setNoSinglePointOfFailureDefault(Boolean&);
	virtual Boolean getDataRedundancyMax(CIMProperty&) const;
	virtual Uint16 getDataRedundancyMax() const;
	virtual void setDataRedundancyMax(Uint16&);
	virtual Boolean getDataRedundancyMin(CIMProperty&) const;
	virtual Uint16 getDataRedundancyMin() const;
	virtual void setDataRedundancyMin(Uint16&);
	virtual Boolean getDataRedundancyDefault(CIMProperty&) const;
	virtual Uint16 getDataRedundancyDefault() const;
	virtual void setDataRedundancyDefault(Uint16&);
	virtual Boolean getPackageRedundancyMax(CIMProperty&) const;
	virtual Uint16 getPackageRedundancyMax() const;
	virtual void setPackageRedundancyMax(Uint16&);
	virtual Boolean getPackageRedundancyMin(CIMProperty&) const;
	virtual Uint16 getPackageRedundancyMin() const;
	virtual void setPackageRedundancyMin(Uint16&);
	virtual Boolean getPackageRedundancyDefault(CIMProperty&) const;
	virtual Uint16 getPackageRedundancyDefault() const;
	virtual void setPackageRedundancyDefault(Uint16&);
	virtual Boolean getDeltaReservationMax(CIMProperty&) const;
	virtual Uint16 getDeltaReservationMax() const;
	virtual void setDeltaReservationMax(Uint16&);
	virtual Boolean getDeltaReservationMin(CIMProperty&) const;
	virtual Uint16 getDeltaReservationMin() const;
	virtual void setDeltaReservationMin(Uint16&);
	virtual Boolean getDeltaReservationDefault(CIMProperty&) const;
	virtual Uint16 getDeltaReservationDefault() const;
	virtual void setDeltaReservationDefault(Uint16&);
	virtual Boolean getExtentStripeLengthDefault(CIMProperty&) const;
	virtual Uint16 getExtentStripeLengthDefault() const;
	virtual void setExtentStripeLengthDefault(Uint16&);
	virtual Boolean getParityLayoutDefault(CIMProperty&) const;
	virtual Uint16 getParityLayoutDefault() const;
	virtual void setParityLayoutDefault(Uint16&);
	virtual Boolean getUserDataStripeDepthDefault(CIMProperty&) const;
	virtual Uint64 getUserDataStripeDepthDefault() const;
	virtual void setUserDataStripeDepthDefault(Uint64&);
	virtual Boolean getAvailableDiskType(CIMProperty&) const;
	virtual Array<Uint16> getAvailableDiskType() const;
	virtual void setAvailableDiskType(Array<Uint16>&);
	virtual Boolean getAvailableFormFactorType(CIMProperty&) const;
	virtual Array<Uint16> getAvailableFormFactorType() const;
	virtual void setAvailableFormFactorType(Array<Uint16>&);
	virtual Boolean getEncryption(CIMProperty&) const;
	virtual Uint16 getEncryption() const;
	virtual void setEncryption(Uint16&);
	virtual Boolean getSupportedDataOrganizations(CIMProperty&) const;
	virtual Array<Uint16> getSupportedDataOrganizations() const;
	virtual void setSupportedDataOrganizations(Array<Uint16>&);
	virtual Boolean getAvailableInterconnectSpeed(CIMProperty&) const;
	virtual Array<Uint64> getAvailableInterconnectSpeed() const;
	virtual void setAvailableInterconnectSpeed(Array<Uint64>&);
	virtual Boolean getAvailableInterconnectType(CIMProperty&) const;
	virtual Array<Uint16> getAvailableInterconnectType() const;
	virtual void setAvailableInterconnectType(Array<Uint16>&);
	virtual Boolean getAvailableRPM(CIMProperty&) const;
	virtual Array<Uint32> getAvailableRPM() const;
	virtual void setAvailableRPM(Array<Uint32>&);
	virtual Boolean getSupportedCompressionRates(CIMProperty&) const;
	virtual Array<Uint16> getSupportedCompressionRates() const;
	virtual void setSupportedCompressionRates(Array<Uint16>&);
	virtual Boolean getStorageTierCharacteristics(CIMProperty&) const;
	virtual Array<Uint16> getStorageTierCharacteristics() const;
	virtual void setStorageTierCharacteristics(Array<Uint16>&);
	virtual Boolean getRelativePerformanceOrderMin(CIMProperty&) const;
	virtual Uint16 getRelativePerformanceOrderMin() const;
	virtual void setRelativePerformanceOrderMin(Uint16&);
	virtual Boolean getRelativePerformanceOrderMax(CIMProperty&) const;
	virtual Uint16 getRelativePerformanceOrderMax() const;
	virtual void setRelativePerformanceOrderMax(Uint16&);
	virtual Boolean getRelativePerformanceOrderDefault(CIMProperty&) const;
	virtual Uint16 getRelativePerformanceOrderDefault() const;
	virtual void setRelativePerformanceOrderDefault(Uint16&);
	virtual Boolean getSupportedStorageTierMethodologies(CIMProperty&) const;
	virtual Array<Uint16> getSupportedStorageTierMethodologies() const;
	virtual void setSupportedStorageTierMethodologies(Array<Uint16>&);

	virtual Uint16 invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	);

	virtual Uint32 invokeCreateSetting(
		Uint16 &inSettingType,
		CIMInstance &inNewSetting
	);

	virtual Uint32 invokeGetSupportedStripeLengths(
		Array<Uint16> &inStripeLengths
	);

	virtual Uint32 invokeGetSupportedStripeLengthRange(
		Uint16 &inMinimumStripeLength,
		Uint16 &inMaximumStripeLength,
		Uint32 &inStripeLengthDivisor
	);

	virtual Uint32 invokeGetSupportedParityLayouts(
		Array<Uint16> &inParityLayout
	);

	virtual Uint32 invokeGetSupportedStripeDepths(
		Array<Uint64> &inStripeDepths
	);

	virtual Uint32 invokeGetSupportedStripeDepthRange(
		Uint64 &inMinimumStripeDepth,
		Uint64 &inMaximumStripeDepth,
		Uint64 &inStripeDepthDivisor
	);



private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	Uint16 _elementType;
	Boolean _noSinglePointOfFailure;
	Boolean _noSinglePointOfFailureDefault;
	Uint16 _dataRedundancyMax;
	Uint16 _dataRedundancyMin;
	Uint16 _dataRedundancyDefault;
	Uint16 _packageRedundancyMax;
	Uint16 _packageRedundancyMin;
	Uint16 _packageRedundancyDefault;
	Uint16 _deltaReservationMax;
	Uint16 _deltaReservationMin;
	Uint16 _deltaReservationDefault;
	Uint16 _extentStripeLengthDefault;
	Uint16 _parityLayoutDefault;
	Uint64 _userDataStripeDepthDefault;
	Array<Uint16> _availableDiskType;
	Array<Uint16> _availableFormFactorType;
	Uint16 _encryption;
	Array<Uint16> _supportedDataOrganizations;
	Array<Uint64> _availableInterconnectSpeed;
	Array<Uint16> _availableInterconnectType;
	Array<Uint32> _availableRPM;
	Array<Uint16> _supportedCompressionRates;
	Array<Uint16> _storageTierCharacteristics;
	Uint16 _relativePerformanceOrderMin;
	Uint16 _relativePerformanceOrderMax;
	Uint16 _relativePerformanceOrderDefault;
	Array<Uint16> _supportedStorageTierMethodologies;

#	include "UNIX_StorageTierCapabilitiesPrivate.h"


};

#endif /* UNIX_STORAGETIERCAPABILITIES */
