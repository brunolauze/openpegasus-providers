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
A subclass of Capabilities that defines the Capabilities of a TierService to manage storage tiers. An instance of TierServiceCapabilities is associated with a TierService using ElementCapabilities.
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


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Capabilities:
				CreateGoalSettings UInt16

			UNIX_TierServiceCapabilities:


*/

#ifndef __UNIX_TIERSERVICECAPABILITIES_H
#define __UNIX_TIERSERVICECAPABILITIES_H


#include "CIM_Capabilities.h"

#include "UNIX_TierServiceCapabilitiesDeps.h"


#ifndef PROPERTY_SUPPORTED_FEATURES
#define PROPERTY_SUPPORTED_FEATURES \
					"SupportedFeatures"
#endif

#ifndef PROPERTY_SUPPORTED_STORAGE_OBJECTS
#define PROPERTY_SUPPORTED_STORAGE_OBJECTS \
					"SupportedStorageObjects"
#endif

#ifndef PROPERTY_SUPPORTED_STORAGE_ELEMENTS
#define PROPERTY_SUPPORTED_STORAGE_ELEMENTS \
					"SupportedStorageElements"
#endif

#ifndef PROPERTY_SUPPORTED_ASYNCHRONOUS_ACTIONS
#define PROPERTY_SUPPORTED_ASYNCHRONOUS_ACTIONS \
					"SupportedAsynchronousActions"
#endif

#ifndef PROPERTY_SUPPORTED_SYNCHRONOUS_ACTIONS
#define PROPERTY_SUPPORTED_SYNCHRONOUS_ACTIONS \
					"SupportedSynchronousActions"
#endif

#ifndef PROPERTY_SUPPORTED_TIER_FEATURES
#define PROPERTY_SUPPORTED_TIER_FEATURES \
					"SupportedTierFeatures"
#endif

#ifndef PROPERTY_SUPPORTED_COMPRESSION
#define PROPERTY_SUPPORTED_COMPRESSION \
					"SupportedCompression"
#endif

#ifndef PROPERTY_SUPPORTED_DATA_MOVEMENT
#define PROPERTY_SUPPORTED_DATA_MOVEMENT \
					"SupportedDataMovement"
#endif

#ifndef PROPERTY_SUPPORTED_MANUAL_MOVEMENT_PROVISIONING
#define PROPERTY_SUPPORTED_MANUAL_MOVEMENT_PROVISIONING \
					"SupportedManualMovementProvisioning"
#endif



class UNIX_TierServiceCapabilities :
	public CIM_Capabilities
{
public:

	UNIX_TierServiceCapabilities();
	~UNIX_TierServiceCapabilities();

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

#	include "UNIX_TierServiceCapabilitiesPrivate.h"


};

#endif /* UNIX_TIERSERVICECAPABILITIES */
