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
This class represents the PrintInputTray component of a Printer (print device). It contains properties that describe a device capable of providing media for input to the printing process. Note: A PrintInputTray shall be associated with exactly one Printer via an instance of the PrinterComponent class. See: Model in section 2 of Printer MIB (RFC 3805).
*/


/* **** MappingStrings *** */
/*
MIB.IETF|Printer-MIB.prtInputEntry
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

			UNIX_PrintInputTray:
				IsDefault Boolean
				LocalizedDescription String
				Type UInt32
				OtherTypeDescription String
				CapacityUnit UInt32
				OtherCapacityUnit String
				MaxCapacityBasis UInt16
				MaxCapacity UInt32
				CurrentLevelBasis UInt16
				CurrentLevel UInt32
				AvailabilityStatus UInt32
				OtherAvailabilityStatus String
				NonCriticalAlertsPresent Boolean
				CriticalAlertsPresent Boolean
				MediaSizeName String
				MediaName String
				MediaWeightBasis UInt16
				MediaWeight UInt32
				MediaType String
				MediaColor String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_ManagedSystemElement:

			CIM_LogicalElement:

			CIM_PrinterElement:

			UNIX_PrintInputTray:


*/

#ifndef __UNIX_PRINTINPUTTRAY_H
#define __UNIX_PRINTINPUTTRAY_H


#include "CIM_PrinterElement.h"

#include "UNIX_PrintInputTrayDeps.h"


#ifndef PROPERTY_IS_DEFAULT
#define PROPERTY_IS_DEFAULT \
					"IsDefault"
#endif

#ifndef PROPERTY_LOCALIZED_DESCRIPTION
#define PROPERTY_LOCALIZED_DESCRIPTION \
					"LocalizedDescription"
#endif

#ifndef PROPERTY_TYPE
#define PROPERTY_TYPE \
					"Type"
#endif

#ifndef PROPERTY_OTHER_TYPE_DESCRIPTION
#define PROPERTY_OTHER_TYPE_DESCRIPTION \
					"OtherTypeDescription"
#endif

#ifndef PROPERTY_CAPACITY_UNIT
#define PROPERTY_CAPACITY_UNIT \
					"CapacityUnit"
#endif

#ifndef PROPERTY_OTHER_CAPACITY_UNIT
#define PROPERTY_OTHER_CAPACITY_UNIT \
					"OtherCapacityUnit"
#endif

#ifndef PROPERTY_MAX_CAPACITY_BASIS
#define PROPERTY_MAX_CAPACITY_BASIS \
					"MaxCapacityBasis"
#endif

#ifndef PROPERTY_MAX_CAPACITY
#define PROPERTY_MAX_CAPACITY \
					"MaxCapacity"
#endif

#ifndef PROPERTY_CURRENT_LEVEL_BASIS
#define PROPERTY_CURRENT_LEVEL_BASIS \
					"CurrentLevelBasis"
#endif

#ifndef PROPERTY_CURRENT_LEVEL
#define PROPERTY_CURRENT_LEVEL \
					"CurrentLevel"
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

#ifndef PROPERTY_MEDIA_SIZE_NAME
#define PROPERTY_MEDIA_SIZE_NAME \
					"MediaSizeName"
#endif

#ifndef PROPERTY_MEDIA_NAME
#define PROPERTY_MEDIA_NAME \
					"MediaName"
#endif

#ifndef PROPERTY_MEDIA_WEIGHT_BASIS
#define PROPERTY_MEDIA_WEIGHT_BASIS \
					"MediaWeightBasis"
#endif

#ifndef PROPERTY_MEDIA_WEIGHT
#define PROPERTY_MEDIA_WEIGHT \
					"MediaWeight"
#endif

#ifndef PROPERTY_MEDIA_TYPE
#define PROPERTY_MEDIA_TYPE \
					"MediaType"
#endif

#ifndef PROPERTY_MEDIA_COLOR
#define PROPERTY_MEDIA_COLOR \
					"MediaColor"
#endif



class UNIX_PrintInputTray :
	public CIM_PrinterElement
{
public:

	UNIX_PrintInputTray();
	~UNIX_PrintInputTray();

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
	virtual Boolean getLocalizedDescription(CIMProperty&) const;
	virtual String getLocalizedDescription() const;
	virtual void setLocalizedDescription(String&);
	virtual Boolean getType(CIMProperty&) const;
	virtual Uint32 getType() const;
	virtual void setType(Uint32&);
	virtual Boolean getOtherTypeDescription(CIMProperty&) const;
	virtual String getOtherTypeDescription() const;
	virtual void setOtherTypeDescription(String&);
	virtual Boolean getCapacityUnit(CIMProperty&) const;
	virtual Uint32 getCapacityUnit() const;
	virtual void setCapacityUnit(Uint32&);
	virtual Boolean getOtherCapacityUnit(CIMProperty&) const;
	virtual String getOtherCapacityUnit() const;
	virtual void setOtherCapacityUnit(String&);
	virtual Boolean getMaxCapacityBasis(CIMProperty&) const;
	virtual Uint16 getMaxCapacityBasis() const;
	virtual void setMaxCapacityBasis(Uint16&);
	virtual Boolean getMaxCapacity(CIMProperty&) const;
	virtual Uint32 getMaxCapacity() const;
	virtual void setMaxCapacity(Uint32&);
	virtual Boolean getCurrentLevelBasis(CIMProperty&) const;
	virtual Uint16 getCurrentLevelBasis() const;
	virtual void setCurrentLevelBasis(Uint16&);
	virtual Boolean getCurrentLevel(CIMProperty&) const;
	virtual Uint32 getCurrentLevel() const;
	virtual void setCurrentLevel(Uint32&);
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
	virtual Boolean getMediaSizeName(CIMProperty&) const;
	virtual String getMediaSizeName() const;
	virtual void setMediaSizeName(String&);
	virtual Boolean getMediaName(CIMProperty&) const;
	virtual String getMediaName() const;
	virtual void setMediaName(String&);
	virtual Boolean getMediaWeightBasis(CIMProperty&) const;
	virtual Uint16 getMediaWeightBasis() const;
	virtual void setMediaWeightBasis(Uint16&);
	virtual Boolean getMediaWeight(CIMProperty&) const;
	virtual Uint32 getMediaWeight() const;
	virtual void setMediaWeight(Uint32&);
	virtual Boolean getMediaType(CIMProperty&) const;
	virtual String getMediaType() const;
	virtual void setMediaType(String&);
	virtual Boolean getMediaColor(CIMProperty&) const;
	virtual String getMediaColor() const;
	virtual void setMediaColor(String&);


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
	String _localizedDescription;
	Uint32 _type;
	String _otherTypeDescription;
	Uint32 _capacityUnit;
	String _otherCapacityUnit;
	Uint16 _maxCapacityBasis;
	Uint32 _maxCapacity;
	Uint16 _currentLevelBasis;
	Uint32 _currentLevel;
	Uint32 _availabilityStatus;
	String _otherAvailabilityStatus;
	Boolean _nonCriticalAlertsPresent;
	Boolean _criticalAlertsPresent;
	String _mediaSizeName;
	String _mediaName;
	Uint16 _mediaWeightBasis;
	Uint32 _mediaWeight;
	String _mediaType;
	String _mediaColor;

#	include "UNIX_PrintInputTrayPrivate.h"


};

#endif /* UNIX_PRINTINPUTTRAY */
