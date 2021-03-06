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
2.31.1
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::Printing
*/


/* **** Description *** */
/*
This class represents the PrintMarker component of a Printer (print device). It contains properties that describe the PrintMarker technology, capabilities, counters, and status. Note: A PrintMarker shall be associated with exactly one Printer via an instance of the PrinterComponent class. See: Model in section 2 of Printer MIB (RFC 3805).
*/


/* **** MappingStrings *** */
/*
MIB.IETF|Printer-MIB.prtMarkerEntry
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

			CIM_PrinterElement:
				SNMPRowId UInt32

			UNIX_PrintMarker:
				IsDefault Boolean
				MarkTech UInt32
				OtherMarkTechDescription String
				CounterUnit UInt32
				OtherCounterUnit String
				LifeCount UInt32
				PowerOnCount UInt32
				ProcessColorants UInt32
				SpotColorants UInt32
				AvailabilityStatus UInt32
				OtherAvailabilityStatus String
				NonCriticalAlertsPresent Boolean
				CriticalAlertsPresent Boolean
				AddressabilityBasis UInt16
				FeedAddressability UInt32
				XFeedAddressability UInt32


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_ManagedSystemElement:

			CIM_LogicalElement:

			CIM_PrinterElement:

			UNIX_PrintMarker:


*/

#ifndef __UNIX_PRINTMARKER_H
#define __UNIX_PRINTMARKER_H


#include "CIM_PrinterElement.h"

#include "UNIX_PrintMarkerDeps.h"


#ifndef PROPERTY_IS_DEFAULT
#define PROPERTY_IS_DEFAULT \
					"IsDefault"
#endif

#ifndef PROPERTY_MARK_TECH
#define PROPERTY_MARK_TECH \
					"MarkTech"
#endif

#ifndef PROPERTY_OTHER_MARK_TECH_DESCRIPTION
#define PROPERTY_OTHER_MARK_TECH_DESCRIPTION \
					"OtherMarkTechDescription"
#endif

#ifndef PROPERTY_COUNTER_UNIT
#define PROPERTY_COUNTER_UNIT \
					"CounterUnit"
#endif

#ifndef PROPERTY_OTHER_COUNTER_UNIT
#define PROPERTY_OTHER_COUNTER_UNIT \
					"OtherCounterUnit"
#endif

#ifndef PROPERTY_LIFE_COUNT
#define PROPERTY_LIFE_COUNT \
					"LifeCount"
#endif

#ifndef PROPERTY_POWER_ON_COUNT
#define PROPERTY_POWER_ON_COUNT \
					"PowerOnCount"
#endif

#ifndef PROPERTY_PROCESS_COLORANTS
#define PROPERTY_PROCESS_COLORANTS \
					"ProcessColorants"
#endif

#ifndef PROPERTY_SPOT_COLORANTS
#define PROPERTY_SPOT_COLORANTS \
					"SpotColorants"
#endif

#ifndef PROPERTY_AVAILABILITY_STATUS
#define PROPERTY_AVAILABILITY_STATUS \
					"AvailabilityStatus"
#endif

#ifndef PROPERTY_OTHER_AVAILABILITY_STATUS
#define PROPERTY_OTHER_AVAILABILITY_STATUS \
					"OtherAvailabilityStatus"
#endif

#ifndef PROPERTY_NON_CRITICAL_ALERTS_PRESENT
#define PROPERTY_NON_CRITICAL_ALERTS_PRESENT \
					"NonCriticalAlertsPresent"
#endif

#ifndef PROPERTY_CRITICAL_ALERTS_PRESENT
#define PROPERTY_CRITICAL_ALERTS_PRESENT \
					"CriticalAlertsPresent"
#endif

#ifndef PROPERTY_ADDRESSABILITY_BASIS
#define PROPERTY_ADDRESSABILITY_BASIS \
					"AddressabilityBasis"
#endif

#ifndef PROPERTY_FEED_ADDRESSABILITY
#define PROPERTY_FEED_ADDRESSABILITY \
					"FeedAddressability"
#endif

#ifndef PROPERTY_X_FEED_ADDRESSABILITY
#define PROPERTY_X_FEED_ADDRESSABILITY \
					"XFeedAddressability"
#endif



class UNIX_PrintMarker :
	public CIM_PrinterElement
{
public:

	UNIX_PrintMarker();
	~UNIX_PrintMarker();

	virtual Boolean initialize();
	virtual Boolean load(int&);
	virtual Boolean loadByName(const String);
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
	virtual Boolean getInstallDate(CIMProperty&) const;
	virtual CIMDateTime getInstallDate() const;
	virtual void setInstallDate(CIMDateTime&);
	virtual Boolean getName(CIMProperty&) const;
	virtual String getName() const;
	virtual void setName(String&);
	virtual Boolean getOperationalStatus(CIMProperty&) const;
	virtual Array<Uint16> getOperationalStatus() const;
	virtual void setOperationalStatus(Array<Uint16>&);
	virtual Boolean getStatusDescriptions(CIMProperty&) const;
	virtual Array<String> getStatusDescriptions() const;
	virtual void setStatusDescriptions(Array<String>&);
	virtual Boolean getStatus(CIMProperty&) const;
	virtual String getStatus() const;
	virtual void setStatus(String&);
	virtual Boolean getHealthState(CIMProperty&) const;
	virtual Uint16 getHealthState() const;
	virtual void setHealthState(Uint16&);
	virtual Boolean getCommunicationStatus(CIMProperty&) const;
	virtual Uint16 getCommunicationStatus() const;
	virtual void setCommunicationStatus(Uint16&);
	virtual Boolean getDetailedStatus(CIMProperty&) const;
	virtual Uint16 getDetailedStatus() const;
	virtual void setDetailedStatus(Uint16&);
	virtual Boolean getOperatingStatus(CIMProperty&) const;
	virtual Uint16 getOperatingStatus() const;
	virtual void setOperatingStatus(Uint16&);
	virtual Boolean getPrimaryStatus(CIMProperty&) const;
	virtual Uint16 getPrimaryStatus() const;
	virtual void setPrimaryStatus(Uint16&);
	virtual Boolean getSNMPRowId(CIMProperty&) const;
	virtual Uint32 getSNMPRowId() const;
	virtual void setSNMPRowId(Uint32&);
	virtual Boolean getIsDefault(CIMProperty&) const;
	virtual Boolean getIsDefault() const;
	virtual void setIsDefault(Boolean&);
	virtual Boolean getMarkTech(CIMProperty&) const;
	virtual Uint32 getMarkTech() const;
	virtual void setMarkTech(Uint32&);
	virtual Boolean getOtherMarkTechDescription(CIMProperty&) const;
	virtual String getOtherMarkTechDescription() const;
	virtual void setOtherMarkTechDescription(String&);
	virtual Boolean getCounterUnit(CIMProperty&) const;
	virtual Uint32 getCounterUnit() const;
	virtual void setCounterUnit(Uint32&);
	virtual Boolean getOtherCounterUnit(CIMProperty&) const;
	virtual String getOtherCounterUnit() const;
	virtual void setOtherCounterUnit(String&);
	virtual Boolean getLifeCount(CIMProperty&) const;
	virtual Uint32 getLifeCount() const;
	virtual void setLifeCount(Uint32&);
	virtual Boolean getPowerOnCount(CIMProperty&) const;
	virtual Uint32 getPowerOnCount() const;
	virtual void setPowerOnCount(Uint32&);
	virtual Boolean getProcessColorants(CIMProperty&) const;
	virtual Uint32 getProcessColorants() const;
	virtual void setProcessColorants(Uint32&);
	virtual Boolean getSpotColorants(CIMProperty&) const;
	virtual Uint32 getSpotColorants() const;
	virtual void setSpotColorants(Uint32&);
	virtual Boolean getAvailabilityStatus(CIMProperty&) const;
	virtual Uint32 getAvailabilityStatus() const;
	virtual void setAvailabilityStatus(Uint32&);
	virtual Boolean getOtherAvailabilityStatus(CIMProperty&) const;
	virtual String getOtherAvailabilityStatus() const;
	virtual void setOtherAvailabilityStatus(String&);
	virtual Boolean getNonCriticalAlertsPresent(CIMProperty&) const;
	virtual Boolean getNonCriticalAlertsPresent() const;
	virtual void setNonCriticalAlertsPresent(Boolean&);
	virtual Boolean getCriticalAlertsPresent(CIMProperty&) const;
	virtual Boolean getCriticalAlertsPresent() const;
	virtual void setCriticalAlertsPresent(Boolean&);
	virtual Boolean getAddressabilityBasis(CIMProperty&) const;
	virtual Uint16 getAddressabilityBasis() const;
	virtual void setAddressabilityBasis(Uint16&);
	virtual Boolean getFeedAddressability(CIMProperty&) const;
	virtual Uint32 getFeedAddressability() const;
	virtual void setFeedAddressability(Uint32&);
	virtual Boolean getXFeedAddressability(CIMProperty&) const;
	virtual Uint32 getXFeedAddressability() const;
	virtual void setXFeedAddressability(Uint32&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	CIMDateTime _installDate;
	String _name;
	Array<Uint16> _operationalStatus;
	Array<String> _statusDescriptions;
	String _status;
	Uint16 _healthState;
	Uint16 _communicationStatus;
	Uint16 _detailedStatus;
	Uint16 _operatingStatus;
	Uint16 _primaryStatus;
	Uint32 _sNMPRowId;
	Boolean _isDefault;
	Uint32 _markTech;
	String _otherMarkTechDescription;
	Uint32 _counterUnit;
	String _otherCounterUnit;
	Uint32 _lifeCount;
	Uint32 _powerOnCount;
	Uint32 _processColorants;
	Uint32 _spotColorants;
	Uint32 _availabilityStatus;
	String _otherAvailabilityStatus;
	Boolean _nonCriticalAlertsPresent;
	Boolean _criticalAlertsPresent;
	Uint16 _addressabilityBasis;
	Uint32 _feedAddressability;
	Uint32 _xFeedAddressability;

#	include "UNIX_PrintMarkerPrivate.h"


};

#endif /* UNIX_PRINTMARKER */
