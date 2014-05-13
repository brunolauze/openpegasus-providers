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
CIM::Network::Filtering
*/


/* **** Description *** */
/*
A FilterEntry is used by network devices to identify traffic and either forward it (with possibly further processing) to its destination, or to deny its forwarding. It is one of the building block of FilterLists. 

This class is oriented towards packet filtering. Other subclasses of FilterEntryBase can be defined to do other types of filtering. 

A FilterEntry is weak to the network device (i.e., the ComputerSystem) that contains it. Hence, the ComputerSystem keys are propagated to this class.
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

			CIM_FilterEntryBase:
				SystemCreationClassName String
				SystemName String
				CreationClassName String
				IsNegated Boolean

			UNIX_FilterEntry:
				TrafficType UInt16
				OtherTrafficType String
				MatchConditionType UInt16
				OtherMatchConditionType String
				MatchConditionValue String
				Action UInt16
				DefaultFilter Boolean
				TrafficClass String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_ManagedSystemElement:

			CIM_LogicalElement:

			CIM_FilterEntryBase:

			UNIX_FilterEntry:


*/

#ifndef __UNIX_FILTERENTRY_H
#define __UNIX_FILTERENTRY_H


#include "CIM_FilterEntryBase.h"

#include "UNIX_FilterEntryDeps.h"


#ifndef PROPERTY_TRAFFIC_TYPE
#define PROPERTY_TRAFFIC_TYPE \
					"TrafficType"
#endif

#ifndef PROPERTY_OTHER_TRAFFIC_TYPE
#define PROPERTY_OTHER_TRAFFIC_TYPE \
					"OtherTrafficType"
#endif

#ifndef PROPERTY_MATCH_CONDITION_TYPE
#define PROPERTY_MATCH_CONDITION_TYPE \
					"MatchConditionType"
#endif

#ifndef PROPERTY_OTHER_MATCH_CONDITION_TYPE
#define PROPERTY_OTHER_MATCH_CONDITION_TYPE \
					"OtherMatchConditionType"
#endif

#ifndef PROPERTY_MATCH_CONDITION_VALUE
#define PROPERTY_MATCH_CONDITION_VALUE \
					"MatchConditionValue"
#endif

#ifndef PROPERTY_ACTION
#define PROPERTY_ACTION \
					"Action"
#endif

#ifndef PROPERTY_DEFAULT_FILTER
#define PROPERTY_DEFAULT_FILTER \
					"DefaultFilter"
#endif

#ifndef PROPERTY_TRAFFIC_CLASS
#define PROPERTY_TRAFFIC_CLASS \
					"TrafficClass"
#endif



class UNIX_FilterEntry :
	public CIM_FilterEntryBase
{
public:

	UNIX_FilterEntry();
	~UNIX_FilterEntry();

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
	virtual Boolean getSystemCreationClassName(CIMProperty&) const;
	virtual String getSystemCreationClassName() const;
	virtual void setSystemCreationClassName(String&);
	virtual Boolean getSystemName(CIMProperty&) const;
	virtual String getSystemName() const;
	virtual void setSystemName(String&);
	virtual Boolean getCreationClassName(CIMProperty&) const;
	virtual String getCreationClassName() const;
	virtual void setCreationClassName(String&);
	virtual Boolean getIsNegated(CIMProperty&) const;
	virtual Boolean getIsNegated() const;
	virtual void setIsNegated(Boolean&);
	virtual Boolean getTrafficType(CIMProperty&) const;
	virtual Uint16 getTrafficType() const;
	virtual void setTrafficType(Uint16&);
	virtual Boolean getOtherTrafficType(CIMProperty&) const;
	virtual String getOtherTrafficType() const;
	virtual void setOtherTrafficType(String&);
	virtual Boolean getMatchConditionType(CIMProperty&) const;
	virtual Uint16 getMatchConditionType() const;
	virtual void setMatchConditionType(Uint16&);
	virtual Boolean getOtherMatchConditionType(CIMProperty&) const;
	virtual String getOtherMatchConditionType() const;
	virtual void setOtherMatchConditionType(String&);
	virtual Boolean getMatchConditionValue(CIMProperty&) const;
	virtual String getMatchConditionValue() const;
	virtual void setMatchConditionValue(String&);
	virtual Boolean getAction(CIMProperty&) const;
	virtual Uint16 getAction() const;
	virtual void setAction(Uint16&);
	virtual Boolean getDefaultFilter(CIMProperty&) const;
	virtual Boolean getDefaultFilter() const;
	virtual void setDefaultFilter(Boolean&);
	virtual Boolean getTrafficClass(CIMProperty&) const;
	virtual String getTrafficClass() const;
	virtual void setTrafficClass(String&);


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
	String _systemCreationClassName;
	String _systemName;
	String _creationClassName;
	Boolean _isNegated;
	Uint16 _trafficType;
	String _otherTrafficType;
	Uint16 _matchConditionType;
	String _otherMatchConditionType;
	String _matchConditionValue;
	Uint16 _action;
	Boolean _defaultFilter;
	String _trafficClass;

#	include "UNIX_FilterEntryPrivate.h"


};

#endif /* UNIX_FILTERENTRY */
