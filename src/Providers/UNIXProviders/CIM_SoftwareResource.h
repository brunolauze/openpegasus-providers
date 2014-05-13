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
2.19.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Application::SWResources
*/


/* **** Description *** */
/*
A Software Resource (SWR) is an abstraction of the utilization of other entities in the environment (communications, memory, files, etc.) within the context of the software entity being managed. SWR have a component-like implementation that is independently manageable from the real entity outside the software. These implementations are often used for storage and transmission. Thus, a Software Resource (SWR) is: 
a) any entity that is used by a system (e.g. an application system) to transfer data over space and time (i.e., no data processing in terms of creation/deletion or modification of data). In contrast to normal (application) services (i.e., the abstraction of data processing in terms of its creation/deletion etc.), the SWR has limits (bounds) that are not to be exceeded. This version does not consider resources like CPU. 
b) the system's view of such a transfer entity. Note that the software resource is ultimately contained by or related to a limited (physical or logical) resource of the encompassing (operating) system such as memory, storage or a communication links. 
Anything transferred by an SWR is called an 'item'. Items may be data, code, connections, packets, etc.. Items are atomic in the model, thus there is no partial items. 
An instance only exists if a running system exists since it is an internal component of the system implemented by its software. Software resources are potentially external entities like files viewed internally and (at least partially) controlled by the software of the system. 
SoftwareResource is contained by System via SystemComponent. At least one system (e.g., one application system or a system in general) contains 0 or more software resources. If more than one system claims to contain the software resource, it is a shared resource. 
SoftwareResource is associated to SWRLimitSetting via ElementSettingData. One software resource can have multiple limit settings. Only one of the settings is the default and one (potentially another one) is operational (current). Settings can be shared by software resources. 
SoftwareResource is associated to SWRStatistics via ElementStatisticalData. In general, one software resource is expected to have three statistics. The statistics type covers each behavior characteristics at most once. I.e., the software resource has at most one allocation statistcs, one input statistics and one output statistics. Nevertheless, the implementation of the software resource may exhibit more statistics SWRStatistics instances that cover more context-specific behavior characteristics.
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

			CIM_SoftwareResource:
				IsAspect UInt16
				AspectInUse UInt16
				ByReference UInt16
				SoftwareResourceType UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_ManagedSystemElement:

			CIM_LogicalElement:

			CIM_EnabledLogicalElement:
				RequestStateChange UInt32

			CIM_SoftwareResource:
				Reinitialize UInt32


*/

#ifndef __CIM_SOFTWARERESOURCE_H
#define __CIM_SOFTWARERESOURCE_H


#include "CIM_EnabledLogicalElement.h"
#include <ConcreteJob/UNIX_ConcreteJob.h>


#ifndef PROPERTY_IS_ASPECT
#define PROPERTY_IS_ASPECT \
					"IsAspect"
#endif

#ifndef PROPERTY_ASPECT_IN_USE
#define PROPERTY_ASPECT_IN_USE \
					"AspectInUse"
#endif

#ifndef PROPERTY_BY_REFERENCE
#define PROPERTY_BY_REFERENCE \
					"ByReference"
#endif

#ifndef PROPERTY_SOFTWARE_RESOURCE_TYPE
#define PROPERTY_SOFTWARE_RESOURCE_TYPE \
					"SoftwareResourceType"
#endif



class CIM_SoftwareResource :
	public CIM_EnabledLogicalElement
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

	virtual Boolean getInstanceID(CIMProperty&) const=0;
	virtual String getInstanceID() const=0;
	virtual void setInstanceID(String&)=0;
	virtual Boolean getIsAspect(CIMProperty&) const=0;
	virtual Uint16 getIsAspect() const=0;
	virtual void setIsAspect(Uint16&)=0;
	virtual Boolean getAspectInUse(CIMProperty&) const=0;
	virtual Uint16 getAspectInUse() const=0;
	virtual void setAspectInUse(Uint16&)=0;
	virtual Boolean getByReference(CIMProperty&) const=0;
	virtual Uint16 getByReference() const=0;
	virtual void setByReference(Uint16&)=0;
	virtual Boolean getSoftwareResourceType(CIMProperty&) const=0;
	virtual Uint16 getSoftwareResourceType() const=0;
	virtual void setSoftwareResourceType(Uint16&)=0;

	virtual Uint32 invokeRequestStateChange(
		Uint16 &inRequestedState,
		CIMInstance &inJob,
		CIMDateTime &inTimeoutPeriod
	)=0;

	virtual Uint32 invokeReinitialize()=0;



private:

};

#endif /* CIM_SOFTWARERESOURCE */
