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
2.40.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Core::CoreElements
*/


/* **** Description *** */
/*
CIM_System represents an entity made up of component parts (defined by the SystemComponent relationship), that operates as a 'functional whole'. Systems are top-level objects in the CIM hierarchy, requiring no scoping or weak relationships in order to exist and have context. It should be reasonable to uniquely name and manage a System at an enterprise level. For example, a ComputerSystem is a kind of System that can be uniquely named and independently managed in an enterprise. However, these qualities are not true for the power supply (or the power supply sub-'system') within the computer. 

Although a System can be viewed as a Collection, this view is not the correct model. A Collection is simply a 'bag' that 'holds' its members. A System is a higher-level abstraction, built out of its individual components. It is more than the sum of its parts. Note that System is a subclass of EnabledLogicalElement which allows the entire abstraction to be functionally enabled or disabled at a higher level than enabling or disabling its component parts.
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

			CIM_AllocatedLogicalElement:
				AllocationState String

			CIM_System:
				CreationClassName String
				NameFormat String
				PrimaryOwnerName String
				PrimaryOwnerContact String
				Roles String
				OtherIdentifyingInfo String
				IdentifyingDescriptions String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_ManagedSystemElement:

			CIM_LogicalElement:

			CIM_EnabledLogicalElement:
				RequestStateChange UInt32

			CIM_AllocatedLogicalElement:

			CIM_System:


*/

#ifndef __CIM_SYSTEM_H
#define __CIM_SYSTEM_H


#include "CIM_AllocatedLogicalElement.h"
#include <ConcreteJob/UNIX_ConcreteJob.h>


#ifndef PROPERTY_CREATION_CLASS_NAME
#define PROPERTY_CREATION_CLASS_NAME \
					"CreationClassName"
#endif

#ifndef PROPERTY_NAME_FORMAT
#define PROPERTY_NAME_FORMAT \
					"NameFormat"
#endif

#ifndef PROPERTY_PRIMARY_OWNER_NAME
#define PROPERTY_PRIMARY_OWNER_NAME \
					"PrimaryOwnerName"
#endif

#ifndef PROPERTY_PRIMARY_OWNER_CONTACT
#define PROPERTY_PRIMARY_OWNER_CONTACT \
					"PrimaryOwnerContact"
#endif

#ifndef PROPERTY_ROLES
#define PROPERTY_ROLES \
					"Roles"
#endif

#ifndef PROPERTY_OTHER_IDENTIFYING_INFO
#define PROPERTY_OTHER_IDENTIFYING_INFO \
					"OtherIdentifyingInfo"
#endif

#ifndef PROPERTY_IDENTIFYING_DESCRIPTIONS
#define PROPERTY_IDENTIFYING_DESCRIPTIONS \
					"IdentifyingDescriptions"
#endif



class CIM_System :
	public CIM_AllocatedLogicalElement
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

	virtual Boolean getCreationClassName(CIMProperty&) const=0;
	virtual String getCreationClassName() const=0;
	virtual void setCreationClassName(String&)=0;
	virtual Boolean getName(CIMProperty&) const=0;
	virtual String getName() const=0;
	virtual void setName(String&)=0;
	virtual Boolean getNameFormat(CIMProperty&) const=0;
	virtual String getNameFormat() const=0;
	virtual void setNameFormat(String&)=0;
	virtual Boolean getPrimaryOwnerName(CIMProperty&) const=0;
	virtual String getPrimaryOwnerName() const=0;
	virtual void setPrimaryOwnerName(String&)=0;
	virtual Boolean getPrimaryOwnerContact(CIMProperty&) const=0;
	virtual String getPrimaryOwnerContact() const=0;
	virtual void setPrimaryOwnerContact(String&)=0;
	virtual Boolean getRoles(CIMProperty&) const=0;
	virtual Array<String> getRoles() const=0;
	virtual void setRoles(Array<String>&)=0;
	virtual Boolean getOtherIdentifyingInfo(CIMProperty&) const=0;
	virtual Array<String> getOtherIdentifyingInfo() const=0;
	virtual void setOtherIdentifyingInfo(Array<String>&)=0;
	virtual Boolean getIdentifyingDescriptions(CIMProperty&) const=0;
	virtual Array<String> getIdentifyingDescriptions() const=0;
	virtual void setIdentifyingDescriptions(Array<String>&)=0;

	virtual Uint32 invokeRequestStateChange(
		Uint16 &inRequestedState,
		CIMInstance &inJob,
		CIMDateTime &inTimeoutPeriod
	)=0;



private:

};

#endif /* CIM_SYSTEM */
