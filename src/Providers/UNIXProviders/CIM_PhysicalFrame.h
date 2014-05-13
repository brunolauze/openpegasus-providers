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
2.7.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Physical::Package
*/


/* **** Description *** */
/*
PhysicalFrame is a superclass of Rack, Chassis and other frame enclosures, as they are defined in extension classes. Properties like visible or audible alarm, and data related to security breaches are in this superclass.
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

			CIM_PhysicalElement:
				Tag String
				CreationClassName String
				Manufacturer String
				Model String
				SKU String
				SerialNumber String
				Version String
				PartNumber String
				OtherIdentifyingInfo String
				PoweredOn Boolean
				ManufactureDate DateTime
				VendorEquipmentType String
				UserTracking String
				CanBeFRUed Boolean

			CIM_PhysicalPackage:
				RemovalConditions UInt16
				Removable Boolean
				Replaceable Boolean
				HotSwappable Boolean
				Height Real32
				Depth Real32
				Width Real32
				Weight Real32
				PackageType UInt16
				OtherPackageType String
				VendorCompatibilityStrings String

			CIM_PhysicalFrame:
				CableManagementStrategy String
				ServicePhilosophy UInt16
				ServiceDescriptions String
				LockPresent Boolean
				AudibleAlarm Boolean
				VisibleAlarm Boolean
				SecurityBreach UInt16
				BreachDescription String
				IsLocked Boolean


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_ManagedSystemElement:

			CIM_PhysicalElement:

			CIM_PhysicalPackage:
				IsCompatible UInt32

			CIM_PhysicalFrame:


*/

#ifndef __CIM_PHYSICALFRAME_H
#define __CIM_PHYSICALFRAME_H


#include "CIM_PhysicalPackage.h"


#ifndef PROPERTY_CABLE_MANAGEMENT_STRATEGY
#define PROPERTY_CABLE_MANAGEMENT_STRATEGY \
					"CableManagementStrategy"
#endif

#ifndef PROPERTY_SERVICE_PHILOSOPHY
#define PROPERTY_SERVICE_PHILOSOPHY \
					"ServicePhilosophy"
#endif

#ifndef PROPERTY_SERVICE_DESCRIPTIONS
#define PROPERTY_SERVICE_DESCRIPTIONS \
					"ServiceDescriptions"
#endif

#ifndef PROPERTY_LOCK_PRESENT
#define PROPERTY_LOCK_PRESENT \
					"LockPresent"
#endif

#ifndef PROPERTY_AUDIBLE_ALARM
#define PROPERTY_AUDIBLE_ALARM \
					"AudibleAlarm"
#endif

#ifndef PROPERTY_VISIBLE_ALARM
#define PROPERTY_VISIBLE_ALARM \
					"VisibleAlarm"
#endif

#ifndef PROPERTY_SECURITY_BREACH
#define PROPERTY_SECURITY_BREACH \
					"SecurityBreach"
#endif

#ifndef PROPERTY_BREACH_DESCRIPTION
#define PROPERTY_BREACH_DESCRIPTION \
					"BreachDescription"
#endif

#ifndef PROPERTY_IS_LOCKED
#define PROPERTY_IS_LOCKED \
					"IsLocked"
#endif



class CIM_PhysicalFrame :
	public CIM_PhysicalPackage
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

	virtual Boolean getCableManagementStrategy(CIMProperty&) const=0;
	virtual String getCableManagementStrategy() const=0;
	virtual void setCableManagementStrategy(String&)=0;
	virtual Boolean getServicePhilosophy(CIMProperty&) const=0;
	virtual Array<Uint16> getServicePhilosophy() const=0;
	virtual void setServicePhilosophy(Array<Uint16>&)=0;
	virtual Boolean getServiceDescriptions(CIMProperty&) const=0;
	virtual Array<String> getServiceDescriptions() const=0;
	virtual void setServiceDescriptions(Array<String>&)=0;
	virtual Boolean getLockPresent(CIMProperty&) const=0;
	virtual Boolean getLockPresent() const=0;
	virtual void setLockPresent(Boolean&)=0;
	virtual Boolean getAudibleAlarm(CIMProperty&) const=0;
	virtual Boolean getAudibleAlarm() const=0;
	virtual void setAudibleAlarm(Boolean&)=0;
	virtual Boolean getVisibleAlarm(CIMProperty&) const=0;
	virtual Boolean getVisibleAlarm() const=0;
	virtual void setVisibleAlarm(Boolean&)=0;
	virtual Boolean getSecurityBreach(CIMProperty&) const=0;
	virtual Uint16 getSecurityBreach() const=0;
	virtual void setSecurityBreach(Uint16&)=0;
	virtual Boolean getBreachDescription(CIMProperty&) const=0;
	virtual String getBreachDescription() const=0;
	virtual void setBreachDescription(String&)=0;
	virtual Boolean getIsLocked(CIMProperty&) const=0;
	virtual Boolean getIsLocked() const=0;
	virtual void setIsLocked(Boolean&)=0;

	virtual Uint32 invokeIsCompatible(
		CIMInstance &inElementToCheck
	)=0;



private:

};

#endif /* CIM_PHYSICALFRAME */
