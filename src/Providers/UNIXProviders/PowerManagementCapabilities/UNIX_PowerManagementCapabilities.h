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
CIM::Core::PowerMgmt
*/


/* **** Description *** */
/*
A class derived from Capabilities that describes the power management aspects of an element (typically a system or device). The element's power management capabilities are decoupled from a PowerManagementService, since a single service could apply to multiple elements, each with specific capabilities.
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

			UNIX_PowerManagementCapabilities:
				PowerCapabilities UInt16
				OtherPowerCapabilitiesDescriptions String
				PowerStatesSupported UInt16
				PowerChangeCapabilities UInt16
				OtherPowerChangeCapabilities String
				RequestedPowerStatesSupported UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Capabilities:
				CreateGoalSettings UInt16

			UNIX_PowerManagementCapabilities:


*/

#ifndef __UNIX_POWERMANAGEMENTCAPABILITIES_H
#define __UNIX_POWERMANAGEMENTCAPABILITIES_H


#include "CIM_Capabilities.h"

#include "UNIX_PowerManagementCapabilitiesDeps.h"


#ifndef PROPERTY_POWER_CAPABILITIES
#define PROPERTY_POWER_CAPABILITIES \
					"PowerCapabilities"
#endif

#ifndef PROPERTY_OTHER_POWER_CAPABILITIES_DESCRIPTIONS
#define PROPERTY_OTHER_POWER_CAPABILITIES_DESCRIPTIONS \
					"OtherPowerCapabilitiesDescriptions"
#endif

#ifndef PROPERTY_POWER_STATES_SUPPORTED
#define PROPERTY_POWER_STATES_SUPPORTED \
					"PowerStatesSupported"
#endif

#ifndef PROPERTY_POWER_CHANGE_CAPABILITIES
#define PROPERTY_POWER_CHANGE_CAPABILITIES \
					"PowerChangeCapabilities"
#endif

#ifndef PROPERTY_OTHER_POWER_CHANGE_CAPABILITIES
#define PROPERTY_OTHER_POWER_CHANGE_CAPABILITIES \
					"OtherPowerChangeCapabilities"
#endif

#ifndef PROPERTY_REQUESTED_POWER_STATES_SUPPORTED
#define PROPERTY_REQUESTED_POWER_STATES_SUPPORTED \
					"RequestedPowerStatesSupported"
#endif



class UNIX_PowerManagementCapabilities :
	public CIM_Capabilities
{
public:

	UNIX_PowerManagementCapabilities();
	~UNIX_PowerManagementCapabilities();

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
	virtual Boolean getPowerCapabilities(CIMProperty&) const;
	virtual Array<Uint16> getPowerCapabilities() const;
	virtual void setPowerCapabilities(Array<Uint16>&);
	virtual Boolean getOtherPowerCapabilitiesDescriptions(CIMProperty&) const;
	virtual Array<String> getOtherPowerCapabilitiesDescriptions() const;
	virtual void setOtherPowerCapabilitiesDescriptions(Array<String>&);
	virtual Boolean getPowerStatesSupported(CIMProperty&) const;
	virtual Array<Uint16> getPowerStatesSupported() const;
	virtual void setPowerStatesSupported(Array<Uint16>&);
	virtual Boolean getPowerChangeCapabilities(CIMProperty&) const;
	virtual Array<Uint16> getPowerChangeCapabilities() const;
	virtual void setPowerChangeCapabilities(Array<Uint16>&);
	virtual Boolean getOtherPowerChangeCapabilities(CIMProperty&) const;
	virtual String getOtherPowerChangeCapabilities() const;
	virtual void setOtherPowerChangeCapabilities(String&);
	virtual Boolean getRequestedPowerStatesSupported(CIMProperty&) const;
	virtual Array<Uint16> getRequestedPowerStatesSupported() const;
	virtual void setRequestedPowerStatesSupported(Array<Uint16>&);

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
	Array<Uint16> _powerCapabilities;
	Array<String> _otherPowerCapabilitiesDescriptions;
	Array<Uint16> _powerStatesSupported;
	Array<Uint16> _powerChangeCapabilities;
	String _otherPowerChangeCapabilities;
	Array<Uint16> _requestedPowerStatesSupported;

#	include "UNIX_PowerManagementCapabilitiesPrivate.h"


};

#endif /* UNIX_POWERMANAGEMENTCAPABILITIES */
