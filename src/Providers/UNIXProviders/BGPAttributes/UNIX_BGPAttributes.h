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
CIM::Network::BGP
*/


/* **** Description *** */
/*
This class defines the BGP Attributes, that can be used to affect routing decisions. BGPAttributes are specific to a given AutonomousSystem that contains it. Hence, the keys of the AutonomousSystem are propagated to this class.
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

			UNIX_BGPAttributes:
				SystemCreationClassName String
				SystemName String
				Version String
				LocalPreference UInt16
				ASPath String
				AsSet String
				NextHop String
				NextHopSelf String
				MED UInt32
				BGPCommunityValue UInt32
				AtomicAggregate Boolean
				Aggregator String
				Origin UInt16
				OriginatorID String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_ManagedSystemElement:

			CIM_LogicalElement:

			UNIX_BGPAttributes:


*/

#ifndef __UNIX_BGPATTRIBUTES_H
#define __UNIX_BGPATTRIBUTES_H


#include "CIM_LogicalElement.h"

#include "UNIX_BGPAttributesDeps.h"


#ifndef PROPERTY_SYSTEM_CREATION_CLASS_NAME
#define PROPERTY_SYSTEM_CREATION_CLASS_NAME \
					"SystemCreationClassName"
#endif

#ifndef PROPERTY_SYSTEM_NAME
#define PROPERTY_SYSTEM_NAME \
					"SystemName"
#endif

#ifndef PROPERTY_VERSION
#define PROPERTY_VERSION \
					"Version"
#endif

#ifndef PROPERTY_LOCAL_PREFERENCE
#define PROPERTY_LOCAL_PREFERENCE \
					"LocalPreference"
#endif

#ifndef PROPERTY_A_S_PATH
#define PROPERTY_A_S_PATH \
					"ASPath"
#endif

#ifndef PROPERTY_AS_SET
#define PROPERTY_AS_SET \
					"AsSet"
#endif

#ifndef PROPERTY_NEXT_HOP
#define PROPERTY_NEXT_HOP \
					"NextHop"
#endif

#ifndef PROPERTY_NEXT_HOP_SELF
#define PROPERTY_NEXT_HOP_SELF \
					"NextHopSelf"
#endif

#ifndef PROPERTY_M_E_D
#define PROPERTY_M_E_D \
					"MED"
#endif

#ifndef PROPERTY_BGP_COMMUNITY_VALUE
#define PROPERTY_BGP_COMMUNITY_VALUE \
					"BGPCommunityValue"
#endif

#ifndef PROPERTY_ATOMIC_AGGREGATE
#define PROPERTY_ATOMIC_AGGREGATE \
					"AtomicAggregate"
#endif

#ifndef PROPERTY_AGGREGATOR
#define PROPERTY_AGGREGATOR \
					"Aggregator"
#endif

#ifndef PROPERTY_ORIGIN
#define PROPERTY_ORIGIN \
					"Origin"
#endif

#ifndef PROPERTY_ORIGINATOR_ID
#define PROPERTY_ORIGINATOR_ID \
					"OriginatorID"
#endif



class UNIX_BGPAttributes :
	public CIM_LogicalElement
{
public:

	UNIX_BGPAttributes();
	~UNIX_BGPAttributes();

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
	virtual Boolean getVersion(CIMProperty&) const;
	virtual String getVersion() const;
	virtual void setVersion(String&);
	virtual Boolean getLocalPreference(CIMProperty&) const;
	virtual Uint16 getLocalPreference() const;
	virtual void setLocalPreference(Uint16&);
	virtual Boolean getASPath(CIMProperty&) const;
	virtual String getASPath() const;
	virtual void setASPath(String&);
	virtual Boolean getAsSet(CIMProperty&) const;
	virtual String getAsSet() const;
	virtual void setAsSet(String&);
	virtual Boolean getNextHop(CIMProperty&) const;
	virtual String getNextHop() const;
	virtual void setNextHop(String&);
	virtual Boolean getNextHopSelf(CIMProperty&) const;
	virtual String getNextHopSelf() const;
	virtual void setNextHopSelf(String&);
	virtual Boolean getMED(CIMProperty&) const;
	virtual Uint32 getMED() const;
	virtual void setMED(Uint32&);
	virtual Boolean getBGPCommunityValue(CIMProperty&) const;
	virtual Uint32 getBGPCommunityValue() const;
	virtual void setBGPCommunityValue(Uint32&);
	virtual Boolean getAtomicAggregate(CIMProperty&) const;
	virtual Boolean getAtomicAggregate() const;
	virtual void setAtomicAggregate(Boolean&);
	virtual Boolean getAggregator(CIMProperty&) const;
	virtual String getAggregator() const;
	virtual void setAggregator(String&);
	virtual Boolean getOrigin(CIMProperty&) const;
	virtual Uint16 getOrigin() const;
	virtual void setOrigin(Uint16&);
	virtual Boolean getOriginatorID(CIMProperty&) const;
	virtual String getOriginatorID() const;
	virtual void setOriginatorID(String&);


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
	String _version;
	Uint16 _localPreference;
	String _aSPath;
	String _asSet;
	String _nextHop;
	String _nextHopSelf;
	Uint32 _mED;
	Uint32 _bGPCommunityValue;
	Boolean _atomicAggregate;
	String _aggregator;
	Uint16 _origin;
	String _originatorID;

#	include "UNIX_BGPAttributesPrivate.h"


};

#endif /* UNIX_BGPATTRIBUTES */
