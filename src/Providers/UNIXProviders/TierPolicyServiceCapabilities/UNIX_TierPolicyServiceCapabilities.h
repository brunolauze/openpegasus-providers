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
A subclass of TierServiceCapabilities that defines the Capabilities of a TierPolicyService. An instance of TierServicePolicyCapabilities is associated with a TierPolicyService using ElementCapabilities.
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

			UNIX_TierServiceCapabilities:
				SupportedFeatures UInt16
				SupportedStorageObjects UInt16
				SupportedStorageElements UInt16
				SupportedAsynchronousActions UInt16
				SupportedSynchronousActions UInt16
				SupportedTierFeatures UInt16
				SupportedCompression UInt16
				SupportedDataMovement UInt16
				SupportedManualMovementProvisioning UInt16

			UNIX_TierPolicyServiceCapabilities:
				SupportsTieringPolicies Boolean
				SupportedPolicyFeatures UInt16
				PolicyAppliesToElements UInt16
				SupportedProvisioningTypes UInt16
				SupportedDataMovementRates UInt16
				SupportedRemoteTieringCoordination UInt16
				SupportsAutomaticStoragePoolAllocation Boolean


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Capabilities:
				CreateGoalSettings UInt16

			UNIX_TierServiceCapabilities:

			UNIX_TierPolicyServiceCapabilities:


*/

#ifndef __UNIX_TIERPOLICYSERVICECAPABILITIES_H
#define __UNIX_TIERPOLICYSERVICECAPABILITIES_H


#include <TierServiceCapabilities/UNIX_TierServiceCapabilities.h>

#include "UNIX_TierPolicyServiceCapabilitiesDeps.h"


#ifndef PROPERTY_SUPPORTS_TIERING_POLICIES
#define PROPERTY_SUPPORTS_TIERING_POLICIES \
					"SupportsTieringPolicies"
#endif

#ifndef PROPERTY_SUPPORTED_POLICY_FEATURES
#define PROPERTY_SUPPORTED_POLICY_FEATURES \
					"SupportedPolicyFeatures"
#endif

#ifndef PROPERTY_POLICY_APPLIES_TO_ELEMENTS
#define PROPERTY_POLICY_APPLIES_TO_ELEMENTS \
					"PolicyAppliesToElements"
#endif

#ifndef PROPERTY_SUPPORTED_PROVISIONING_TYPES
#define PROPERTY_SUPPORTED_PROVISIONING_TYPES \
					"SupportedProvisioningTypes"
#endif

#ifndef PROPERTY_SUPPORTED_DATA_MOVEMENT_RATES
#define PROPERTY_SUPPORTED_DATA_MOVEMENT_RATES \
					"SupportedDataMovementRates"
#endif

#ifndef PROPERTY_SUPPORTED_REMOTE_TIERING_COORDINATION
#define PROPERTY_SUPPORTED_REMOTE_TIERING_COORDINATION \
					"SupportedRemoteTieringCoordination"
#endif

#ifndef PROPERTY_SUPPORTS_AUTOMATIC_STORAGE_POOL_ALLOCATION
#define PROPERTY_SUPPORTS_AUTOMATIC_STORAGE_POOL_ALLOCATION \
					"SupportsAutomaticStoragePoolAllocation"
#endif



class UNIX_TierPolicyServiceCapabilities :
	public UNIX_TierServiceCapabilities
{
public:

	UNIX_TierPolicyServiceCapabilities();
	~UNIX_TierPolicyServiceCapabilities();

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
	virtual Boolean getSupportedFeatures(CIMProperty&) const;
	virtual Array<Uint16> getSupportedFeatures() const;
	virtual void setSupportedFeatures(Array<Uint16>&);
	virtual Boolean getSupportedStorageObjects(CIMProperty&) const;
	virtual Array<Uint16> getSupportedStorageObjects() const;
	virtual void setSupportedStorageObjects(Array<Uint16>&);
	virtual Boolean getSupportedStorageElements(CIMProperty&) const;
	virtual Array<Uint16> getSupportedStorageElements() const;
	virtual void setSupportedStorageElements(Array<Uint16>&);
	virtual Boolean getSupportedAsynchronousActions(CIMProperty&) const;
	virtual Array<Uint16> getSupportedAsynchronousActions() const;
	virtual void setSupportedAsynchronousActions(Array<Uint16>&);
	virtual Boolean getSupportedSynchronousActions(CIMProperty&) const;
	virtual Array<Uint16> getSupportedSynchronousActions() const;
	virtual void setSupportedSynchronousActions(Array<Uint16>&);
	virtual Boolean getSupportedTierFeatures(CIMProperty&) const;
	virtual Array<Uint16> getSupportedTierFeatures() const;
	virtual void setSupportedTierFeatures(Array<Uint16>&);
	virtual Boolean getSupportedCompression(CIMProperty&) const;
	virtual Array<Uint16> getSupportedCompression() const;
	virtual void setSupportedCompression(Array<Uint16>&);
	virtual Boolean getSupportedDataMovement(CIMProperty&) const;
	virtual Array<Uint16> getSupportedDataMovement() const;
	virtual void setSupportedDataMovement(Array<Uint16>&);
	virtual Boolean getSupportedManualMovementProvisioning(CIMProperty&) const;
	virtual Array<Uint16> getSupportedManualMovementProvisioning() const;
	virtual void setSupportedManualMovementProvisioning(Array<Uint16>&);
	virtual Boolean getSupportsTieringPolicies(CIMProperty&) const;
	virtual Boolean getSupportsTieringPolicies() const;
	virtual void setSupportsTieringPolicies(Boolean&);
	virtual Boolean getSupportedPolicyFeatures(CIMProperty&) const;
	virtual Array<Uint16> getSupportedPolicyFeatures() const;
	virtual void setSupportedPolicyFeatures(Array<Uint16>&);
	virtual Boolean getPolicyAppliesToElements(CIMProperty&) const;
	virtual Array<Uint16> getPolicyAppliesToElements() const;
	virtual void setPolicyAppliesToElements(Array<Uint16>&);
	virtual Boolean getSupportedProvisioningTypes(CIMProperty&) const;
	virtual Array<Uint16> getSupportedProvisioningTypes() const;
	virtual void setSupportedProvisioningTypes(Array<Uint16>&);
	virtual Boolean getSupportedDataMovementRates(CIMProperty&) const;
	virtual Array<Uint16> getSupportedDataMovementRates() const;
	virtual void setSupportedDataMovementRates(Array<Uint16>&);
	virtual Boolean getSupportedRemoteTieringCoordination(CIMProperty&) const;
	virtual Array<Uint16> getSupportedRemoteTieringCoordination() const;
	virtual void setSupportedRemoteTieringCoordination(Array<Uint16>&);
	virtual Boolean getSupportsAutomaticStoragePoolAllocation(CIMProperty&) const;
	virtual Boolean getSupportsAutomaticStoragePoolAllocation() const;
	virtual void setSupportsAutomaticStoragePoolAllocation(Boolean&);

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
	Array<Uint16> _supportedFeatures;
	Array<Uint16> _supportedStorageObjects;
	Array<Uint16> _supportedStorageElements;
	Array<Uint16> _supportedAsynchronousActions;
	Array<Uint16> _supportedSynchronousActions;
	Array<Uint16> _supportedTierFeatures;
	Array<Uint16> _supportedCompression;
	Array<Uint16> _supportedDataMovement;
	Array<Uint16> _supportedManualMovementProvisioning;
	Boolean _supportsTieringPolicies;
	Array<Uint16> _supportedPolicyFeatures;
	Array<Uint16> _policyAppliesToElements;
	Array<Uint16> _supportedProvisioningTypes;
	Array<Uint16> _supportedDataMovementRates;
	Array<Uint16> _supportedRemoteTieringCoordination;
	Boolean _supportsAutomaticStoragePoolAllocation;

#	include "UNIX_TierPolicyServiceCapabilitiesPrivate.h"


};

#endif /* UNIX_TIERPOLICYSERVICECAPABILITIES */
