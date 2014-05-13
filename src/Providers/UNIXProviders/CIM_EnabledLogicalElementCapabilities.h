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
CIM::Core::Capabilities
*/


/* **** Description *** */
/*
EnabledLogicalElementCapabilities describes the capabilities supported for changing the state of the assciated EnabledLogicalElement.
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


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Capabilities:
				CreateGoalSettings UInt16

			CIM_EnabledLogicalElementCapabilities:


*/

#ifndef __CIM_ENABLEDLOGICALELEMENTCAPABILITIES_H
#define __CIM_ENABLEDLOGICALELEMENTCAPABILITIES_H


#include "CIM_Capabilities.h"


#ifndef PROPERTY_ELEMENT_NAME_EDIT_SUPPORTED
#define PROPERTY_ELEMENT_NAME_EDIT_SUPPORTED \
					"ElementNameEditSupported"
#endif

#ifndef PROPERTY_MAX_ELEMENT_NAME_LEN
#define PROPERTY_MAX_ELEMENT_NAME_LEN \
					"MaxElementNameLen"
#endif

#ifndef PROPERTY_REQUESTED_STATES_SUPPORTED
#define PROPERTY_REQUESTED_STATES_SUPPORTED \
					"RequestedStatesSupported"
#endif

#ifndef PROPERTY_ELEMENT_NAME_MASK
#define PROPERTY_ELEMENT_NAME_MASK \
					"ElementNameMask"
#endif

#ifndef PROPERTY_STATE_AWARENESS
#define PROPERTY_STATE_AWARENESS \
					"StateAwareness"
#endif



class CIM_EnabledLogicalElementCapabilities :
	public CIM_Capabilities
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

	virtual Boolean getElementNameEditSupported(CIMProperty&) const=0;
	virtual Boolean getElementNameEditSupported() const=0;
	virtual void setElementNameEditSupported(Boolean&)=0;
	virtual Boolean getMaxElementNameLen(CIMProperty&) const=0;
	virtual Uint16 getMaxElementNameLen() const=0;
	virtual void setMaxElementNameLen(Uint16&)=0;
	virtual Boolean getRequestedStatesSupported(CIMProperty&) const=0;
	virtual Array<Uint16> getRequestedStatesSupported() const=0;
	virtual void setRequestedStatesSupported(Array<Uint16>&)=0;
	virtual Boolean getElementNameMask(CIMProperty&) const=0;
	virtual String getElementNameMask() const=0;
	virtual void setElementNameMask(String&)=0;
	virtual Boolean getStateAwareness(CIMProperty&) const=0;
	virtual Array<Uint16> getStateAwareness() const=0;
	virtual void setStateAwareness(Array<Uint16>&)=0;

	virtual Uint16 invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)=0;



private:

};

#endif /* CIM_ENABLEDLOGICALELEMENTCAPABILITIES */
