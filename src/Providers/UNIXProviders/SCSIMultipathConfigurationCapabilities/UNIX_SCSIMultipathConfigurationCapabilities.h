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
2.29.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::StorageDevices
*/


/* **** Description *** */
/*
A class derived from CIM_Capabilities that models the capabilities of a multipath driver. Note that 'path' in this context refers to end-to-end device paths (for example, SCSI initiator/target) with no understanding of edge paths between interconnect elements such as switches. Load balancing only applies to symmetric multipath devices or to the ports in SCSITargetPortGroups in active access state. 
A driver may support different algorithms for load balancing. A few common algorithms are listed. Algorithms for specific device models and software vendor specific algorithms are also accommodated. 

An instance of this capabilities class MUST be instantiated whenever SCSIPathConfigurationService is instantiated and they MUST be assocaited one to one using ElementCapabilities. Multiple instances of the service/acapabilities pair MAY exist if multiple multipath drivers are installed. Each LogicalDevice subclass served by the underlying multipath driver is associated to the associated Service instance via ServiceAvailableToELement.
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

			UNIX_SCSIMultipathConfigurationCapabilities:
				SupportedLoadBalanceTypes UInt16
				OtherSupportedLoadBalanceAlgorithmNames String
				OtherSupportedLoadBalanceVendorNames String
				CanSetTPGAccess Boolean
				CanOverridePaths Boolean
				ExposesPathDeviceFiles Boolean
				DeviceNameFilespace String
				OnlySupportsSpecifiedProducts Boolean
				MaximumWeight UInt32
				AutofailbackSupport UInt16
				AutoFailbackEnabled Boolean
				PollingRateMax UInt32
				CurrentPollingRate UInt32
				DefaultLoadBalanceType UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Capabilities:
				CreateGoalSettings UInt16

			UNIX_SCSIMultipathConfigurationCapabilities:


*/

#ifndef __UNIX_SCSIMULTIPATHCONFIGURATIONCAPABILITIES_H
#define __UNIX_SCSIMULTIPATHCONFIGURATIONCAPABILITIES_H


#include "CIM_Capabilities.h"

#include "UNIX_SCSIMultipathConfigurationCapabilitiesDeps.h"


#ifndef PROPERTY_SUPPORTED_LOAD_BALANCE_TYPES
#define PROPERTY_SUPPORTED_LOAD_BALANCE_TYPES \
					"SupportedLoadBalanceTypes"
#endif

#ifndef PROPERTY_OTHER_SUPPORTED_LOAD_BALANCE_ALGORITHM_NAMES
#define PROPERTY_OTHER_SUPPORTED_LOAD_BALANCE_ALGORITHM_NAMES \
					"OtherSupportedLoadBalanceAlgorithmNames"
#endif

#ifndef PROPERTY_OTHER_SUPPORTED_LOAD_BALANCE_VENDOR_NAMES
#define PROPERTY_OTHER_SUPPORTED_LOAD_BALANCE_VENDOR_NAMES \
					"OtherSupportedLoadBalanceVendorNames"
#endif

#ifndef PROPERTY_CAN_SET_T_P_G_ACCESS
#define PROPERTY_CAN_SET_T_P_G_ACCESS \
					"CanSetTPGAccess"
#endif

#ifndef PROPERTY_CAN_OVERRIDE_PATHS
#define PROPERTY_CAN_OVERRIDE_PATHS \
					"CanOverridePaths"
#endif

#ifndef PROPERTY_EXPOSES_PATH_DEVICE_FILES
#define PROPERTY_EXPOSES_PATH_DEVICE_FILES \
					"ExposesPathDeviceFiles"
#endif

#ifndef PROPERTY_DEVICE_NAME_FILESPACE
#define PROPERTY_DEVICE_NAME_FILESPACE \
					"DeviceNameFilespace"
#endif

#ifndef PROPERTY_ONLY_SUPPORTS_SPECIFIED_PRODUCTS
#define PROPERTY_ONLY_SUPPORTS_SPECIFIED_PRODUCTS \
					"OnlySupportsSpecifiedProducts"
#endif

#ifndef PROPERTY_MAXIMUM_WEIGHT
#define PROPERTY_MAXIMUM_WEIGHT \
					"MaximumWeight"
#endif

#ifndef PROPERTY_AUTOFAILBACK_SUPPORT
#define PROPERTY_AUTOFAILBACK_SUPPORT \
					"AutofailbackSupport"
#endif

#ifndef PROPERTY_AUTO_FAILBACK_ENABLED
#define PROPERTY_AUTO_FAILBACK_ENABLED \
					"AutoFailbackEnabled"
#endif

#ifndef PROPERTY_POLLING_RATE_MAX
#define PROPERTY_POLLING_RATE_MAX \
					"PollingRateMax"
#endif

#ifndef PROPERTY_CURRENT_POLLING_RATE
#define PROPERTY_CURRENT_POLLING_RATE \
					"CurrentPollingRate"
#endif

#ifndef PROPERTY_DEFAULT_LOAD_BALANCE_TYPE
#define PROPERTY_DEFAULT_LOAD_BALANCE_TYPE \
					"DefaultLoadBalanceType"
#endif



class UNIX_SCSIMultipathConfigurationCapabilities :
	public CIM_Capabilities
{
public:

	UNIX_SCSIMultipathConfigurationCapabilities();
	~UNIX_SCSIMultipathConfigurationCapabilities();

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
	virtual Boolean getSupportedLoadBalanceTypes(CIMProperty&) const;
	virtual Array<Uint16> getSupportedLoadBalanceTypes() const;
	virtual void setSupportedLoadBalanceTypes(Array<Uint16>&);
	virtual Boolean getOtherSupportedLoadBalanceAlgorithmNames(CIMProperty&) const;
	virtual Array<String> getOtherSupportedLoadBalanceAlgorithmNames() const;
	virtual void setOtherSupportedLoadBalanceAlgorithmNames(Array<String>&);
	virtual Boolean getOtherSupportedLoadBalanceVendorNames(CIMProperty&) const;
	virtual Array<String> getOtherSupportedLoadBalanceVendorNames() const;
	virtual void setOtherSupportedLoadBalanceVendorNames(Array<String>&);
	virtual Boolean getCanSetTPGAccess(CIMProperty&) const;
	virtual Boolean getCanSetTPGAccess() const;
	virtual void setCanSetTPGAccess(Boolean&);
	virtual Boolean getCanOverridePaths(CIMProperty&) const;
	virtual Boolean getCanOverridePaths() const;
	virtual void setCanOverridePaths(Boolean&);
	virtual Boolean getExposesPathDeviceFiles(CIMProperty&) const;
	virtual Boolean getExposesPathDeviceFiles() const;
	virtual void setExposesPathDeviceFiles(Boolean&);
	virtual Boolean getDeviceNameFilespace(CIMProperty&) const;
	virtual String getDeviceNameFilespace() const;
	virtual void setDeviceNameFilespace(String&);
	virtual Boolean getOnlySupportsSpecifiedProducts(CIMProperty&) const;
	virtual Boolean getOnlySupportsSpecifiedProducts() const;
	virtual void setOnlySupportsSpecifiedProducts(Boolean&);
	virtual Boolean getMaximumWeight(CIMProperty&) const;
	virtual Uint32 getMaximumWeight() const;
	virtual void setMaximumWeight(Uint32&);
	virtual Boolean getAutofailbackSupport(CIMProperty&) const;
	virtual Uint16 getAutofailbackSupport() const;
	virtual void setAutofailbackSupport(Uint16&);
	virtual Boolean getAutoFailbackEnabled(CIMProperty&) const;
	virtual Boolean getAutoFailbackEnabled() const;
	virtual void setAutoFailbackEnabled(Boolean&);
	virtual Boolean getPollingRateMax(CIMProperty&) const;
	virtual Uint32 getPollingRateMax() const;
	virtual void setPollingRateMax(Uint32&);
	virtual Boolean getCurrentPollingRate(CIMProperty&) const;
	virtual Uint32 getCurrentPollingRate() const;
	virtual void setCurrentPollingRate(Uint32&);
	virtual Boolean getDefaultLoadBalanceType(CIMProperty&) const;
	virtual Uint16 getDefaultLoadBalanceType() const;
	virtual void setDefaultLoadBalanceType(Uint16&);

	virtual Uint16 invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	);



private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	Array<Uint16> _supportedLoadBalanceTypes;
	Array<String> _otherSupportedLoadBalanceAlgorithmNames;
	Array<String> _otherSupportedLoadBalanceVendorNames;
	Boolean _canSetTPGAccess;
	Boolean _canOverridePaths;
	Boolean _exposesPathDeviceFiles;
	String _deviceNameFilespace;
	Boolean _onlySupportsSpecifiedProducts;
	Uint32 _maximumWeight;
	Uint16 _autofailbackSupport;
	Boolean _autoFailbackEnabled;
	Uint32 _pollingRateMax;
	Uint32 _currentPollingRate;
	Uint16 _defaultLoadBalanceType;

#	include "UNIX_SCSIMultipathConfigurationCapabilitiesPrivate.h"


};

#endif /* UNIX_SCSIMULTIPATHCONFIGURATIONCAPABILITIES */
