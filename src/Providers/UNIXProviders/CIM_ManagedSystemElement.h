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
2.28.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Core::CoreElements
*/


/* **** Description *** */
/*
CIM_ManagedSystemElement is the base class for the System Element hierarchy. Any distinguishable component of a System is a candidate for inclusion in this class. Examples of system components include: 
- software components such as application servers, databases, and applications 
- operating system components such as files, processes, and threads 
- device components such as disk drives, controllers, processors, and printers 
- physical components such as chips and cards.
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


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_ManagedSystemElement:


*/

#ifndef __CIM_MANAGEDSYSTEMELEMENT_H
#define __CIM_MANAGEDSYSTEMELEMENT_H


#include "CIM_ManagedElement.h"


#ifndef PROPERTY_INSTALL_DATE
#define PROPERTY_INSTALL_DATE \
					"InstallDate"
#endif

#ifndef PROPERTY_NAME
#define PROPERTY_NAME \
					"Name"
#endif

#ifndef PROPERTY_OPERATIONAL_STATUS
#define PROPERTY_OPERATIONAL_STATUS \
					"OperationalStatus"
#endif

#ifndef PROPERTY_STATUS_DESCRIPTIONS
#define PROPERTY_STATUS_DESCRIPTIONS \
					"StatusDescriptions"
#endif

#ifndef PROPERTY_STATUS
#define PROPERTY_STATUS \
					"Status"
#endif

#ifndef PROPERTY_HEALTH_STATE
#define PROPERTY_HEALTH_STATE \
					"HealthState"
#endif

#ifndef PROPERTY_COMMUNICATION_STATUS
#define PROPERTY_COMMUNICATION_STATUS \
					"CommunicationStatus"
#endif

#ifndef PROPERTY_DETAILED_STATUS
#define PROPERTY_DETAILED_STATUS \
					"DetailedStatus"
#endif

#ifndef PROPERTY_OPERATING_STATUS
#define PROPERTY_OPERATING_STATUS \
					"OperatingStatus"
#endif

#ifndef PROPERTY_PRIMARY_STATUS
#define PROPERTY_PRIMARY_STATUS \
					"PrimaryStatus"
#endif



class CIM_ManagedSystemElement :
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

	virtual Boolean getInstallDate(CIMProperty&) const=0;
	virtual CIMDateTime getInstallDate() const=0;
	virtual void setInstallDate(CIMDateTime&)=0;
	virtual Boolean getName(CIMProperty&) const=0;
	virtual String getName() const=0;
	virtual void setName(String&)=0;
	virtual Boolean getOperationalStatus(CIMProperty&) const=0;
	virtual Array<Uint16> getOperationalStatus() const=0;
	virtual void setOperationalStatus(Array<Uint16>&)=0;
	virtual Boolean getStatusDescriptions(CIMProperty&) const=0;
	virtual Array<String> getStatusDescriptions() const=0;
	virtual void setStatusDescriptions(Array<String>&)=0;
	virtual Boolean getStatus(CIMProperty&) const=0;
	virtual String getStatus() const=0;
	virtual void setStatus(String&)=0;
	virtual Boolean getHealthState(CIMProperty&) const=0;
	virtual Uint16 getHealthState() const=0;
	virtual void setHealthState(Uint16&)=0;
	virtual Boolean getCommunicationStatus(CIMProperty&) const=0;
	virtual Uint16 getCommunicationStatus() const=0;
	virtual void setCommunicationStatus(Uint16&)=0;
	virtual Boolean getDetailedStatus(CIMProperty&) const=0;
	virtual Uint16 getDetailedStatus() const=0;
	virtual void setDetailedStatus(Uint16&)=0;
	virtual Boolean getOperatingStatus(CIMProperty&) const=0;
	virtual Uint16 getOperatingStatus() const=0;
	virtual void setOperatingStatus(Uint16&)=0;
	virtual Boolean getPrimaryStatus(CIMProperty&) const=0;
	virtual Uint16 getPrimaryStatus() const=0;
	virtual void setPrimaryStatus(Uint16&)=0;


private:

};

#endif /* CIM_MANAGEDSYSTEMELEMENT */
