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
This class represents a PrintSupply for a PrintMarker or PrintFinisher component of a Printer (print device). It contains a property that specifies if this instance represents a PrintSupply represents a container (for a supply that is consumed) or a receptacle (for waste that is produced). It also contains properties that describe the PrintSupply type, capacity, and remaining capacity. For PrintMarker colorants, it also contains properties that describe colorant role (spot or process), name, and tonality. Note: A PrintSupply shall be associated with exactly one Printer via an instance of the ConcreteComponent class. A PrintSupply shall be associated with exactly one PrintMarker or PrintFinisher via an instance of AssociatedPrintSupply class. See: Model in section 2 of Printer MIB (RFC 3805) and section 3 of Finisher MIB (RFC 3806).
*/


/* **** MappingStrings *** */
/*
MIB.IETF|Printer-MIB.prtMarkerSuppliesEntry
MIB.IETF|Printer-MIB.prtMarkerColorantEntry
MIB.IETF|Finisher-MIB.finSupplyEntry
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

			UNIX_PrintSupply:
				LocalizedDescription String
				Classification UInt32
				OtherClassification String
				Type UInt32
				OtherTypeDescription String
				SupplyUnit UInt32
				OtherSupplyUnit String
				MaxCapacityBasis UInt16
				MaxCapacity UInt32
				RemainingCapacityBasis UInt16
				RemainingCapacity UInt32
				ColorantRole UInt32
				OtherColorantRole String
				ColorantName UInt16
				OtherColorantName String
				ColorantTonality UInt32


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_ManagedSystemElement:

			CIM_LogicalElement:

			CIM_PrinterElement:

			UNIX_PrintSupply:


*/

#ifndef __UNIX_PRINTSUPPLY_H
#define __UNIX_PRINTSUPPLY_H


#include "CIM_PrinterElement.h"

#include "UNIX_PrintSupplyDeps.h"


#ifndef PROPERTY_LOCALIZED_DESCRIPTION
#define PROPERTY_LOCALIZED_DESCRIPTION \
					"LocalizedDescription"
#endif

#ifndef PROPERTY_CLASSIFICATION
#define PROPERTY_CLASSIFICATION \
					"Classification"
#endif

#ifndef PROPERTY_OTHER_CLASSIFICATION
#define PROPERTY_OTHER_CLASSIFICATION \
					"OtherClassification"
#endif

#ifndef PROPERTY_TYPE
#define PROPERTY_TYPE \
					"Type"
#endif

#ifndef PROPERTY_OTHER_TYPE_DESCRIPTION
#define PROPERTY_OTHER_TYPE_DESCRIPTION \
					"OtherTypeDescription"
#endif

#ifndef PROPERTY_SUPPLY_UNIT
#define PROPERTY_SUPPLY_UNIT \
					"SupplyUnit"
#endif

#ifndef PROPERTY_OTHER_SUPPLY_UNIT
#define PROPERTY_OTHER_SUPPLY_UNIT \
					"OtherSupplyUnit"
#endif

#ifndef PROPERTY_MAX_CAPACITY_BASIS
#define PROPERTY_MAX_CAPACITY_BASIS \
					"MaxCapacityBasis"
#endif

#ifndef PROPERTY_MAX_CAPACITY
#define PROPERTY_MAX_CAPACITY \
					"MaxCapacity"
#endif

#ifndef PROPERTY_REMAINING_CAPACITY_BASIS
#define PROPERTY_REMAINING_CAPACITY_BASIS \
					"RemainingCapacityBasis"
#endif

#ifndef PROPERTY_REMAINING_CAPACITY
#define PROPERTY_REMAINING_CAPACITY \
					"RemainingCapacity"
#endif

#ifndef PROPERTY_COLORANT_ROLE
#define PROPERTY_COLORANT_ROLE \
					"ColorantRole"
#endif

#ifndef PROPERTY_OTHER_COLORANT_ROLE
#define PROPERTY_OTHER_COLORANT_ROLE \
					"OtherColorantRole"
#endif

#ifndef PROPERTY_COLORANT_NAME
#define PROPERTY_COLORANT_NAME \
					"ColorantName"
#endif

#ifndef PROPERTY_OTHER_COLORANT_NAME
#define PROPERTY_OTHER_COLORANT_NAME \
					"OtherColorantName"
#endif

#ifndef PROPERTY_COLORANT_TONALITY
#define PROPERTY_COLORANT_TONALITY \
					"ColorantTonality"
#endif



class UNIX_PrintSupply :
	public CIM_PrinterElement
{
public:

	UNIX_PrintSupply();
	~UNIX_PrintSupply();

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
	virtual Boolean getLocalizedDescription(CIMProperty&) const;
	virtual String getLocalizedDescription() const;
	virtual void setLocalizedDescription(String&);
	virtual Boolean getClassification(CIMProperty&) const;
	virtual Uint32 getClassification() const;
	virtual void setClassification(Uint32&);
	virtual Boolean getOtherClassification(CIMProperty&) const;
	virtual String getOtherClassification() const;
	virtual void setOtherClassification(String&);
	virtual Boolean getType(CIMProperty&) const;
	virtual Uint32 getType() const;
	virtual void setType(Uint32&);
	virtual Boolean getOtherTypeDescription(CIMProperty&) const;
	virtual String getOtherTypeDescription() const;
	virtual void setOtherTypeDescription(String&);
	virtual Boolean getSupplyUnit(CIMProperty&) const;
	virtual Uint32 getSupplyUnit() const;
	virtual void setSupplyUnit(Uint32&);
	virtual Boolean getOtherSupplyUnit(CIMProperty&) const;
	virtual String getOtherSupplyUnit() const;
	virtual void setOtherSupplyUnit(String&);
	virtual Boolean getMaxCapacityBasis(CIMProperty&) const;
	virtual Uint16 getMaxCapacityBasis() const;
	virtual void setMaxCapacityBasis(Uint16&);
	virtual Boolean getMaxCapacity(CIMProperty&) const;
	virtual Uint32 getMaxCapacity() const;
	virtual void setMaxCapacity(Uint32&);
	virtual Boolean getRemainingCapacityBasis(CIMProperty&) const;
	virtual Uint16 getRemainingCapacityBasis() const;
	virtual void setRemainingCapacityBasis(Uint16&);
	virtual Boolean getRemainingCapacity(CIMProperty&) const;
	virtual Uint32 getRemainingCapacity() const;
	virtual void setRemainingCapacity(Uint32&);
	virtual Boolean getColorantRole(CIMProperty&) const;
	virtual Uint32 getColorantRole() const;
	virtual void setColorantRole(Uint32&);
	virtual Boolean getOtherColorantRole(CIMProperty&) const;
	virtual String getOtherColorantRole() const;
	virtual void setOtherColorantRole(String&);
	virtual Boolean getColorantName(CIMProperty&) const;
	virtual Uint16 getColorantName() const;
	virtual void setColorantName(Uint16&);
	virtual Boolean getOtherColorantName(CIMProperty&) const;
	virtual String getOtherColorantName() const;
	virtual void setOtherColorantName(String&);
	virtual Boolean getColorantTonality(CIMProperty&) const;
	virtual Uint32 getColorantTonality() const;
	virtual void setColorantTonality(Uint32&);


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
	String _localizedDescription;
	Uint32 _classification;
	String _otherClassification;
	Uint32 _type;
	String _otherTypeDescription;
	Uint32 _supplyUnit;
	String _otherSupplyUnit;
	Uint16 _maxCapacityBasis;
	Uint32 _maxCapacity;
	Uint16 _remainingCapacityBasis;
	Uint32 _remainingCapacity;
	Uint32 _colorantRole;
	String _otherColorantRole;
	Uint16 _colorantName;
	String _otherColorantName;
	Uint32 _colorantTonality;

#	include "UNIX_PrintSupplyPrivate.h"


};

#endif /* UNIX_PRINTSUPPLY */
