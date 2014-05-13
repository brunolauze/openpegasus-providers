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
2.23.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::FC
*/


/* **** Description *** */
/*
FibreChannel port control and configuration capabilities.
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

			CIM_EnabledLogicalElementCapabilities:
				ElementNameEditSupported Boolean
				MaxElementNameLen UInt16
				RequestedStatesSupported UInt16
				ElementNameMask String
				StateAwareness UInt16

			CIM_LogicalPortCapabilities:
				RequestedSpeedsSupported UInt64
				AutoSenseSpeedConfigurable Boolean

			CIM_NetworkPortCapabilities:
				SpeedConfigurable Boolean
				PortSpeedsSupported UInt64
				NetworkIDsConfigurable Boolean
				NetworkIDsFormat UInt16
				LinkTechnologiesSupported UInt16

			UNIX_FCPortCapabilities:
				RequestedTypesSupported UInt16
				NPIVSupported Boolean
				MaxNPIVLogins UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Capabilities:
				CreateGoalSettings UInt16

			CIM_EnabledLogicalElementCapabilities:

			CIM_LogicalPortCapabilities:

			CIM_NetworkPortCapabilities:

			UNIX_FCPortCapabilities:


*/

#ifndef __UNIX_FCPORTCAPABILITIES_H
#define __UNIX_FCPORTCAPABILITIES_H


#include "CIM_NetworkPortCapabilities.h"

#include "UNIX_FCPortCapabilitiesDeps.h"


#ifndef PROPERTY_REQUESTED_TYPES_SUPPORTED
#define PROPERTY_REQUESTED_TYPES_SUPPORTED \
					"RequestedTypesSupported"
#endif

#ifndef PROPERTY_N_P_I_V_SUPPORTED
#define PROPERTY_N_P_I_V_SUPPORTED \
					"NPIVSupported"
#endif

#ifndef PROPERTY_MAX_N_P_I_V_LOGINS
#define PROPERTY_MAX_N_P_I_V_LOGINS \
					"MaxNPIVLogins"
#endif



class UNIX_FCPortCapabilities :
	public CIM_NetworkPortCapabilities
{
public:

	UNIX_FCPortCapabilities();
	~UNIX_FCPortCapabilities();

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
	virtual Boolean getElementNameEditSupported(CIMProperty&) const;
	virtual Boolean getElementNameEditSupported() const;
	virtual void setElementNameEditSupported(Boolean&);
	virtual Boolean getMaxElementNameLen(CIMProperty&) const;
	virtual Uint16 getMaxElementNameLen() const;
	virtual void setMaxElementNameLen(Uint16&);
	virtual Boolean getRequestedStatesSupported(CIMProperty&) const;
	virtual Array<Uint16> getRequestedStatesSupported() const;
	virtual void setRequestedStatesSupported(Array<Uint16>&);
	virtual Boolean getElementNameMask(CIMProperty&) const;
	virtual String getElementNameMask() const;
	virtual void setElementNameMask(String&);
	virtual Boolean getStateAwareness(CIMProperty&) const;
	virtual Array<Uint16> getStateAwareness() const;
	virtual void setStateAwareness(Array<Uint16>&);
	virtual Boolean getRequestedSpeedsSupported(CIMProperty&) const;
	virtual Array<Uint64> getRequestedSpeedsSupported() const;
	virtual void setRequestedSpeedsSupported(Array<Uint64>&);
	virtual Boolean getAutoSenseSpeedConfigurable(CIMProperty&) const;
	virtual Boolean getAutoSenseSpeedConfigurable() const;
	virtual void setAutoSenseSpeedConfigurable(Boolean&);
	virtual Boolean getSpeedConfigurable(CIMProperty&) const;
	virtual Boolean getSpeedConfigurable() const;
	virtual void setSpeedConfigurable(Boolean&);
	virtual Boolean getPortSpeedsSupported(CIMProperty&) const;
	virtual Array<Uint64> getPortSpeedsSupported() const;
	virtual void setPortSpeedsSupported(Array<Uint64>&);
	virtual Boolean getNetworkIDsConfigurable(CIMProperty&) const;
	virtual Boolean getNetworkIDsConfigurable() const;
	virtual void setNetworkIDsConfigurable(Boolean&);
	virtual Boolean getNetworkIDsFormat(CIMProperty&) const;
	virtual Uint16 getNetworkIDsFormat() const;
	virtual void setNetworkIDsFormat(Uint16&);
	virtual Boolean getLinkTechnologiesSupported(CIMProperty&) const;
	virtual Array<Uint16> getLinkTechnologiesSupported() const;
	virtual void setLinkTechnologiesSupported(Array<Uint16>&);
	virtual Boolean getRequestedTypesSupported(CIMProperty&) const;
	virtual Array<Uint16> getRequestedTypesSupported() const;
	virtual void setRequestedTypesSupported(Array<Uint16>&);
	virtual Boolean getNPIVSupported(CIMProperty&) const;
	virtual Boolean getNPIVSupported() const;
	virtual void setNPIVSupported(Boolean&);
	virtual Boolean getMaxNPIVLogins(CIMProperty&) const;
	virtual Uint16 getMaxNPIVLogins() const;
	virtual void setMaxNPIVLogins(Uint16&);

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
	Boolean _elementNameEditSupported;
	Uint16 _maxElementNameLen;
	Array<Uint16> _requestedStatesSupported;
	String _elementNameMask;
	Array<Uint16> _stateAwareness;
	Array<Uint64> _requestedSpeedsSupported;
	Boolean _autoSenseSpeedConfigurable;
	Boolean _speedConfigurable;
	Array<Uint64> _portSpeedsSupported;
	Boolean _networkIDsConfigurable;
	Uint16 _networkIDsFormat;
	Array<Uint16> _linkTechnologiesSupported;
	Array<Uint16> _requestedTypesSupported;
	Boolean _nPIVSupported;
	Uint16 _maxNPIVLogins;

#	include "UNIX_FCPortCapabilitiesPrivate.h"


};

#endif /* UNIX_FCPORTCAPABILITIES */