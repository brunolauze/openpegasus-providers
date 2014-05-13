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


/* **** Abstract *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.22.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Core::CoreElements
*/


/* **** Description *** */
/*
This class extends LogicalElement to abstract the concept of an element that is enabled and disabled, such as a LogicalDevice or a ServiceAccessPoint.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_ManagedSystemElement:
				InstallDate DateTime
				Name String
				OperationalStatus UInt16
				StatusDescriptions String
				Status String
				HealthState UInt16
				CommunicationStatus UInt16
				DetailedStatus UInt16
				OperatingStatus UInt16
				PrimaryStatus UInt16

			CIM_LogicalElement:

			CIM_EnabledLogicalElement:
				EnabledState UInt16
				OtherEnabledState String
				RequestedState UInt16
				EnabledDefault UInt16
				TimeOfLastStateChange DateTime
				AvailableRequestedStates UInt16
				TransitioningToState UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_ManagedSystemElement:

			CIM_LogicalElement:

			CIM_EnabledLogicalElement:
				RequestStateChange UInt32


*/

#ifndef __CIM_ENABLEDLOGICALELEMENT_H
#define __CIM_ENABLEDLOGICALELEMENT_H


#include "CIM_LogicalElement.h"
#include <ConcreteJob/UNIX_ConcreteJob.h>


#ifndef PROPERTY_ENABLED_STATE
#define PROPERTY_ENABLED_STATE \
					"EnabledState"
#endif

#ifndef PROPERTY_OTHER_ENABLED_STATE
#define PROPERTY_OTHER_ENABLED_STATE \
					"OtherEnabledState"
#endif

#ifndef PROPERTY_REQUESTED_STATE
#define PROPERTY_REQUESTED_STATE \
					"RequestedState"
#endif

#ifndef PROPERTY_ENABLED_DEFAULT
#define PROPERTY_ENABLED_DEFAULT \
					"EnabledDefault"
#endif

#ifndef PROPERTY_TIME_OF_LAST_STATE_CHANGE
#define PROPERTY_TIME_OF_LAST_STATE_CHANGE \
					"TimeOfLastStateChange"
#endif

#ifndef PROPERTY_AVAILABLE_REQUESTED_STATES
#define PROPERTY_AVAILABLE_REQUESTED_STATES \
					"AvailableRequestedStates"
#endif

#ifndef PROPERTY_TRANSITIONING_TO_STATE
#define PROPERTY_TRANSITIONING_TO_STATE \
					"TransitioningToState"
#endif



class CIM_EnabledLogicalElement :
	public CIM_LogicalElement
{
public:

	virtual Boolean initialize()=0;
	virtual Boolean load(int&)=0;
	virtual Boolean loadByName(const String)=0;
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

	virtual Boolean getEnabledState(CIMProperty&) const=0;
	virtual Uint16 getEnabledState() const=0;
	virtual void setEnabledState(Uint16&)=0;
	virtual Boolean getOtherEnabledState(CIMProperty&) const=0;
	virtual String getOtherEnabledState() const=0;
	virtual void setOtherEnabledState(String&)=0;
	virtual Boolean getRequestedState(CIMProperty&) const=0;
	virtual Uint16 getRequestedState() const=0;
	virtual void setRequestedState(Uint16&)=0;
	virtual Boolean getEnabledDefault(CIMProperty&) const=0;
	virtual Uint16 getEnabledDefault() const=0;
	virtual void setEnabledDefault(Uint16&)=0;
	virtual Boolean getTimeOfLastStateChange(CIMProperty&) const=0;
	virtual CIMDateTime getTimeOfLastStateChange() const=0;
	virtual void setTimeOfLastStateChange(CIMDateTime&)=0;
	virtual Boolean getAvailableRequestedStates(CIMProperty&) const=0;
	virtual Array<Uint16> getAvailableRequestedStates() const=0;
	virtual void setAvailableRequestedStates(Array<Uint16>&)=0;
	virtual Boolean getTransitioningToState(CIMProperty&) const=0;
	virtual Uint16 getTransitioningToState() const=0;
	virtual void setTransitioningToState(Uint16&)=0;

	virtual Uint32 invokeRequestStateChange(
		Uint16 &inRequestedState,
		CIMInstance &inJob,
		CIMDateTime &inTimeoutPeriod
	)=0;



private:

};

#endif /* CIM_ENABLEDLOGICALELEMENT */
