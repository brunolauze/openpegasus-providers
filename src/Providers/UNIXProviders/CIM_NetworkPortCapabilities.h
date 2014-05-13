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
2.22.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::Ports
*/


/* **** Description *** */
/*
NetworkPortCapabilities describes the capabilities supported for properties that are configurable in NetworkPort.
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


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Capabilities:
				CreateGoalSettings UInt16

			CIM_EnabledLogicalElementCapabilities:

			CIM_LogicalPortCapabilities:

			CIM_NetworkPortCapabilities:


*/

#ifndef __CIM_NETWORKPORTCAPABILITIES_H
#define __CIM_NETWORKPORTCAPABILITIES_H


#include "CIM_LogicalPortCapabilities.h"


#ifndef PROPERTY_SPEED_CONFIGURABLE
#define PROPERTY_SPEED_CONFIGURABLE \
					"SpeedConfigurable"
#endif

#ifndef PROPERTY_PORT_SPEEDS_SUPPORTED
#define PROPERTY_PORT_SPEEDS_SUPPORTED \
					"PortSpeedsSupported"
#endif

#ifndef PROPERTY_NETWORK_IDS_CONFIGURABLE
#define PROPERTY_NETWORK_IDS_CONFIGURABLE \
					"NetworkIDsConfigurable"
#endif

#ifndef PROPERTY_NETWORK_IDS_FORMAT
#define PROPERTY_NETWORK_IDS_FORMAT \
					"NetworkIDsFormat"
#endif

#ifndef PROPERTY_LINK_TECHNOLOGIES_SUPPORTED
#define PROPERTY_LINK_TECHNOLOGIES_SUPPORTED \
					"LinkTechnologiesSupported"
#endif



class CIM_NetworkPortCapabilities :
	public CIM_LogicalPortCapabilities
{
public:

	virtual Boolean initialize()=0;
	virtual Boolean load(int&)=0;
	virtual Boolean finalize()=0;
	virtual Boolean find(const Array<CIMKeyBinding>&)=0;
	virtual Boolean validateKey(CIMKeyBinding&) const=0;
	virtual void setScope(CIMName)=0;
	virtual void setCIMOMHandle(CIMOMHandle&)=0;
	virtual void clearInstance()=0;
	virtual Boolean loadInstance(const CIMInstance&)=0;
	virtual Boolean createInstance(const OperationContext&)=0;
	virtual Boolean modifyInstance(const OperationContext&)=0;
	virtual Boolean deleteInstance(const OperationContext&)=0;
	virtual Boolean validateInstance()=0;

	virtual Boolean getSpeedConfigurable(CIMProperty&) const=0;
	virtual Boolean getSpeedConfigurable() const=0;
	virtual void setSpeedConfigurable(Boolean&)=0;
	virtual Boolean getPortSpeedsSupported(CIMProperty&) const=0;
	virtual Array<Uint64> getPortSpeedsSupported() const=0;
	virtual void setPortSpeedsSupported(Array<Uint64>&)=0;
	virtual Boolean getNetworkIDsConfigurable(CIMProperty&) const=0;
	virtual Boolean getNetworkIDsConfigurable() const=0;
	virtual void setNetworkIDsConfigurable(Boolean&)=0;
	virtual Boolean getNetworkIDsFormat(CIMProperty&) const=0;
	virtual Uint16 getNetworkIDsFormat() const=0;
	virtual void setNetworkIDsFormat(Uint16&)=0;
	virtual Boolean getLinkTechnologiesSupported(CIMProperty&) const=0;
	virtual Array<Uint16> getLinkTechnologiesSupported() const=0;
	virtual void setLinkTechnologiesSupported(Array<Uint16>&)=0;

	virtual Uint16 invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)=0;



private:

};

#endif /* CIM_NETWORKPORTCAPABILITIES */
