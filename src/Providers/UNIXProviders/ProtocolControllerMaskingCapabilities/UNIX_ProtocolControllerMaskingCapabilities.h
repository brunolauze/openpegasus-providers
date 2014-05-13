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
2.35.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::ProtocolController
*/


/* **** Description *** */
/*
A subclass of Capabilities that defines the Masking-related capabilities of a ProtocolController.
*/


/* **** ModelCorrespondence *** */
/*
CIM_StorageHardwareID.IDType
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

			UNIX_ProtocolControllerMaskingCapabilities:
				ValidHardwareIdTypes UInt16
				OtherValidHardwareIDTypes String
				PortsPerView UInt16
				ClientSelectableDeviceNumbers Boolean
				AttachDeviceSupported Boolean
				OneHardwareIDPerView Boolean
				UniqueUnitNumbersPerPort Boolean
				PrivilegeDeniedSupported Boolean
				ProtocolControllerRequiresAuthorizedIdentity Boolean
				ProtocolControllerSupportsCollections Boolean
				ExposePathsSupported Boolean
				CreateProtocolControllerSupported Boolean
				MaximumMapCount UInt16
				SPCAllowsNoLUs Boolean
				SPCAllowsNoTargets Boolean
				SPCAllowsNoInitiators Boolean
				SPCSupportsDefaultViews Boolean
				ExposePathsWithNameAndHostTypeSupported Boolean


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Capabilities:
				CreateGoalSettings UInt16

			UNIX_ProtocolControllerMaskingCapabilities:
				GetElementNameCapabilities UInt32


*/

#ifndef __UNIX_PROTOCOLCONTROLLERMASKINGCAPABILITIES_H
#define __UNIX_PROTOCOLCONTROLLERMASKINGCAPABILITIES_H


#include "CIM_Capabilities.h"

#include "UNIX_ProtocolControllerMaskingCapabilitiesDeps.h"


#ifndef PROPERTY_VALID_HARDWARE_ID_TYPES
#define PROPERTY_VALID_HARDWARE_ID_TYPES \
					"ValidHardwareIdTypes"
#endif

#ifndef PROPERTY_OTHER_VALID_HARDWARE_ID_TYPES
#define PROPERTY_OTHER_VALID_HARDWARE_ID_TYPES \
					"OtherValidHardwareIDTypes"
#endif

#ifndef PROPERTY_PORTS_PER_VIEW
#define PROPERTY_PORTS_PER_VIEW \
					"PortsPerView"
#endif

#ifndef PROPERTY_CLIENT_SELECTABLE_DEVICE_NUMBERS
#define PROPERTY_CLIENT_SELECTABLE_DEVICE_NUMBERS \
					"ClientSelectableDeviceNumbers"
#endif

#ifndef PROPERTY_ATTACH_DEVICE_SUPPORTED
#define PROPERTY_ATTACH_DEVICE_SUPPORTED \
					"AttachDeviceSupported"
#endif

#ifndef PROPERTY_ONE_HARDWARE_ID_PER_VIEW
#define PROPERTY_ONE_HARDWARE_ID_PER_VIEW \
					"OneHardwareIDPerView"
#endif

#ifndef PROPERTY_UNIQUE_UNIT_NUMBERS_PER_PORT
#define PROPERTY_UNIQUE_UNIT_NUMBERS_PER_PORT \
					"UniqueUnitNumbersPerPort"
#endif

#ifndef PROPERTY_PRIVILEGE_DENIED_SUPPORTED
#define PROPERTY_PRIVILEGE_DENIED_SUPPORTED \
					"PrivilegeDeniedSupported"
#endif

#ifndef PROPERTY_PROTOCOL_CONTROLLER_REQUIRES_AUTHORIZED_IDENTITY
#define PROPERTY_PROTOCOL_CONTROLLER_REQUIRES_AUTHORIZED_IDENTITY \
					"ProtocolControllerRequiresAuthorizedIdentity"
#endif

#ifndef PROPERTY_PROTOCOL_CONTROLLER_SUPPORTS_COLLECTIONS
#define PROPERTY_PROTOCOL_CONTROLLER_SUPPORTS_COLLECTIONS \
					"ProtocolControllerSupportsCollections"
#endif

#ifndef PROPERTY_EXPOSE_PATHS_SUPPORTED
#define PROPERTY_EXPOSE_PATHS_SUPPORTED \
					"ExposePathsSupported"
#endif

#ifndef PROPERTY_CREATE_PROTOCOL_CONTROLLER_SUPPORTED
#define PROPERTY_CREATE_PROTOCOL_CONTROLLER_SUPPORTED \
					"CreateProtocolControllerSupported"
#endif

#ifndef PROPERTY_MAXIMUM_MAP_COUNT
#define PROPERTY_MAXIMUM_MAP_COUNT \
					"MaximumMapCount"
#endif

#ifndef PROPERTY_S_P_C_ALLOWS_NO_L_US
#define PROPERTY_S_P_C_ALLOWS_NO_L_US \
					"SPCAllowsNoLUs"
#endif

#ifndef PROPERTY_S_P_C_ALLOWS_NO_TARGETS
#define PROPERTY_S_P_C_ALLOWS_NO_TARGETS \
					"SPCAllowsNoTargets"
#endif

#ifndef PROPERTY_S_P_C_ALLOWS_NO_INITIATORS
#define PROPERTY_S_P_C_ALLOWS_NO_INITIATORS \
					"SPCAllowsNoInitiators"
#endif

#ifndef PROPERTY_S_P_CSUPPORTS_DEFAULT_VIEWS
#define PROPERTY_S_P_CSUPPORTS_DEFAULT_VIEWS \
					"SPCSupportsDefaultViews"
#endif

#ifndef PROPERTY_EXPOSE_PATHS_WITH_NAME_AND_HOST_TYPE_SUPPORTED
#define PROPERTY_EXPOSE_PATHS_WITH_NAME_AND_HOST_TYPE_SUPPORTED \
					"ExposePathsWithNameAndHostTypeSupported"
#endif



class UNIX_ProtocolControllerMaskingCapabilities :
	public CIM_Capabilities
{
public:

	UNIX_ProtocolControllerMaskingCapabilities();
	~UNIX_ProtocolControllerMaskingCapabilities();

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
	virtual Boolean getValidHardwareIdTypes(CIMProperty&) const;
	virtual Array<Uint16> getValidHardwareIdTypes() const;
	virtual void setValidHardwareIdTypes(Array<Uint16>&);
	virtual Boolean getOtherValidHardwareIDTypes(CIMProperty&) const;
	virtual Array<String> getOtherValidHardwareIDTypes() const;
	virtual void setOtherValidHardwareIDTypes(Array<String>&);
	virtual Boolean getPortsPerView(CIMProperty&) const;
	virtual Uint16 getPortsPerView() const;
	virtual void setPortsPerView(Uint16&);
	virtual Boolean getClientSelectableDeviceNumbers(CIMProperty&) const;
	virtual Boolean getClientSelectableDeviceNumbers() const;
	virtual void setClientSelectableDeviceNumbers(Boolean&);
	virtual Boolean getAttachDeviceSupported(CIMProperty&) const;
	virtual Boolean getAttachDeviceSupported() const;
	virtual void setAttachDeviceSupported(Boolean&);
	virtual Boolean getOneHardwareIDPerView(CIMProperty&) const;
	virtual Boolean getOneHardwareIDPerView() const;
	virtual void setOneHardwareIDPerView(Boolean&);
	virtual Boolean getUniqueUnitNumbersPerPort(CIMProperty&) const;
	virtual Boolean getUniqueUnitNumbersPerPort() const;
	virtual void setUniqueUnitNumbersPerPort(Boolean&);
	virtual Boolean getPrivilegeDeniedSupported(CIMProperty&) const;
	virtual Boolean getPrivilegeDeniedSupported() const;
	virtual void setPrivilegeDeniedSupported(Boolean&);
	virtual Boolean getProtocolControllerRequiresAuthorizedIdentity(CIMProperty&) const;
	virtual Boolean getProtocolControllerRequiresAuthorizedIdentity() const;
	virtual void setProtocolControllerRequiresAuthorizedIdentity(Boolean&);
	virtual Boolean getProtocolControllerSupportsCollections(CIMProperty&) const;
	virtual Boolean getProtocolControllerSupportsCollections() const;
	virtual void setProtocolControllerSupportsCollections(Boolean&);
	virtual Boolean getExposePathsSupported(CIMProperty&) const;
	virtual Boolean getExposePathsSupported() const;
	virtual void setExposePathsSupported(Boolean&);
	virtual Boolean getCreateProtocolControllerSupported(CIMProperty&) const;
	virtual Boolean getCreateProtocolControllerSupported() const;
	virtual void setCreateProtocolControllerSupported(Boolean&);
	virtual Boolean getMaximumMapCount(CIMProperty&) const;
	virtual Uint16 getMaximumMapCount() const;
	virtual void setMaximumMapCount(Uint16&);
	virtual Boolean getSPCAllowsNoLUs(CIMProperty&) const;
	virtual Boolean getSPCAllowsNoLUs() const;
	virtual void setSPCAllowsNoLUs(Boolean&);
	virtual Boolean getSPCAllowsNoTargets(CIMProperty&) const;
	virtual Boolean getSPCAllowsNoTargets() const;
	virtual void setSPCAllowsNoTargets(Boolean&);
	virtual Boolean getSPCAllowsNoInitiators(CIMProperty&) const;
	virtual Boolean getSPCAllowsNoInitiators() const;
	virtual void setSPCAllowsNoInitiators(Boolean&);
	virtual Boolean getSPCSupportsDefaultViews(CIMProperty&) const;
	virtual Boolean getSPCSupportsDefaultViews() const;
	virtual void setSPCSupportsDefaultViews(Boolean&);
	virtual Boolean getExposePathsWithNameAndHostTypeSupported(CIMProperty&) const;
	virtual Boolean getExposePathsWithNameAndHostTypeSupported() const;
	virtual void setExposePathsWithNameAndHostTypeSupported(Boolean&);

	virtual Uint16 invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	);

	virtual Uint32 invokeGetElementNameCapabilities(
		Uint16 &inElementType,
		CIMInstance &inGoal,
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
	Array<Uint16> _validHardwareIdTypes;
	Array<String> _otherValidHardwareIDTypes;
	Uint16 _portsPerView;
	Boolean _clientSelectableDeviceNumbers;
	Boolean _attachDeviceSupported;
	Boolean _oneHardwareIDPerView;
	Boolean _uniqueUnitNumbersPerPort;
	Boolean _privilegeDeniedSupported;
	Boolean _protocolControllerRequiresAuthorizedIdentity;
	Boolean _protocolControllerSupportsCollections;
	Boolean _exposePathsSupported;
	Boolean _createProtocolControllerSupported;
	Uint16 _maximumMapCount;
	Boolean _sPCAllowsNoLUs;
	Boolean _sPCAllowsNoTargets;
	Boolean _sPCAllowsNoInitiators;
	Boolean _sPCSupportsDefaultViews;
	Boolean _exposePathsWithNameAndHostTypeSupported;

#	include "UNIX_ProtocolControllerMaskingCapabilitiesPrivate.h"


};

#endif /* UNIX_PROTOCOLCONTROLLERMASKINGCAPABILITIES */
