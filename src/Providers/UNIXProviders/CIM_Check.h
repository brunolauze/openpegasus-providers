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
2.23.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Application::CheckAction
*/


/* **** Description *** */
/*
A CIM_Check is a condition or characteristic that is expected to be true in an environment defined or scoped by an instance of a CIM_ComputerSystem. The Checks associated with a particular SoftwareElement are organized into one of two groups using the Phase property of the CIM_SoftwareElementChecks association. Conditions that are expected to be true when a SoftwareElement is in a particular state and environment are known as 'in-state' conditions. Conditions that need to be satisfied in order to transition the SoftwareElement to its next state are known as 'next-state' conditions. 
A CIM_ComputerSystem object represents the environment in which CIM_SoftwareElements are already deployed/installed or into which the elements will be deployed/installed. For the case in which an element is already installed, the CIM_InstalledSoftwareElement association identifies the CIM_ComputerSystem object that represents the "environment". When a SoftwareElement is being deployed for installation on a ComputerSystem, that system is the target of the Check and is identified using the TargetSystem reference of the InvokeOnSystem method.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_Check:
				Name String
				Version String
				SoftwareElementState UInt16
				SoftwareElementID String
				TargetOperatingSystem UInt16
				CheckID String
				CheckMode Boolean


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Check:
				Invoke UInt32
				InvokeOnSystem UInt32


*/

#ifndef __CIM_CHECK_H
#define __CIM_CHECK_H


#include "CIM_ManagedElement.h"
#include <ComputerSystem/UNIX_ComputerSystem.h>


#ifndef PROPERTY_NAME
#define PROPERTY_NAME \
					"Name"
#endif

#ifndef PROPERTY_VERSION
#define PROPERTY_VERSION \
					"Version"
#endif

#ifndef PROPERTY_SOFTWARE_ELEMENT_STATE
#define PROPERTY_SOFTWARE_ELEMENT_STATE \
					"SoftwareElementState"
#endif

#ifndef PROPERTY_SOFTWARE_ELEMENT_ID
#define PROPERTY_SOFTWARE_ELEMENT_ID \
					"SoftwareElementID"
#endif

#ifndef PROPERTY_TARGET_OPERATING_SYSTEM
#define PROPERTY_TARGET_OPERATING_SYSTEM \
					"TargetOperatingSystem"
#endif

#ifndef PROPERTY_CHECK_ID
#define PROPERTY_CHECK_ID \
					"CheckID"
#endif

#ifndef PROPERTY_CHECK_MODE
#define PROPERTY_CHECK_MODE \
					"CheckMode"
#endif



class CIM_Check :
	public CIM_ManagedElement
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

	virtual Boolean getName(CIMProperty&) const=0;
	virtual String getName() const=0;
	virtual void setName(String&)=0;
	virtual Boolean getVersion(CIMProperty&) const=0;
	virtual String getVersion() const=0;
	virtual void setVersion(String&)=0;
	virtual Boolean getSoftwareElementState(CIMProperty&) const=0;
	virtual Uint16 getSoftwareElementState() const=0;
	virtual void setSoftwareElementState(Uint16&)=0;
	virtual Boolean getSoftwareElementID(CIMProperty&) const=0;
	virtual String getSoftwareElementID() const=0;
	virtual void setSoftwareElementID(String&)=0;
	virtual Boolean getTargetOperatingSystem(CIMProperty&) const=0;
	virtual Uint16 getTargetOperatingSystem() const=0;
	virtual void setTargetOperatingSystem(Uint16&)=0;
	virtual Boolean getCheckID(CIMProperty&) const=0;
	virtual String getCheckID() const=0;
	virtual void setCheckID(String&)=0;
	virtual Boolean getCheckMode(CIMProperty&) const=0;
	virtual Boolean getCheckMode() const=0;
	virtual void setCheckMode(Boolean&)=0;

	virtual Uint32 invokeInvoke()=0;

	virtual Uint32 invokeInvokeOnSystem(
		CIMInstance &inTargetSystem
	)=0;



private:

};

#endif /* CIM_CHECK */
