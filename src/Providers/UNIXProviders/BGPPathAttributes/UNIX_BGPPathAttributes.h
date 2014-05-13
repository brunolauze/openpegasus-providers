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
This class defines the per-path information used to process specific BGP attribute information, as defined in the bgp4PathAttrTable of RFC 1657.
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

			UNIX_BGPPathAttributes:
				ASNumbers String
				PathAttrNextHop String
				PathAttrASPathSegment UInt8
				PathAttrOrigin UInt16
				PathAttrMultiExitDisc SInt32
				PathAttrLocalPref SInt32
				PathAttrAtomicAggregate UInt32
				PathAttrAggregatorAS UInt16
				PathAttrAggregatorAddr String
				PathAttrCalcLocalPref SInt16
				PathAttrBest UInt16
				PathAttrUnknown String
				PathAttrUnknownNumber UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_ManagedSystemElement:

			CIM_LogicalElement:

			UNIX_BGPPathAttributes:


*/

#ifndef __UNIX_BGPPATHATTRIBUTES_H
#define __UNIX_BGPPATHATTRIBUTES_H


#include "CIM_LogicalElement.h"

#include "UNIX_BGPPathAttributesDeps.h"


#ifndef PROPERTY_A_S_NUMBERS
#define PROPERTY_A_S_NUMBERS \
					"ASNumbers"
#endif

#ifndef PROPERTY_PATH_ATTR_NEXT_HOP
#define PROPERTY_PATH_ATTR_NEXT_HOP \
					"PathAttrNextHop"
#endif

#ifndef PROPERTY_PATH_ATTR_A_S_PATH_SEGMENT
#define PROPERTY_PATH_ATTR_A_S_PATH_SEGMENT \
					"PathAttrASPathSegment"
#endif

#ifndef PROPERTY_PATH_ATTR_ORIGIN
#define PROPERTY_PATH_ATTR_ORIGIN \
					"PathAttrOrigin"
#endif

#ifndef PROPERTY_PATH_ATTR_MULTI_EXIT_DISC
#define PROPERTY_PATH_ATTR_MULTI_EXIT_DISC \
					"PathAttrMultiExitDisc"
#endif

#ifndef PROPERTY_PATH_ATTR_LOCAL_PREF
#define PROPERTY_PATH_ATTR_LOCAL_PREF \
					"PathAttrLocalPref"
#endif

#ifndef PROPERTY_PATH_ATTR_ATOMIC_AGGREGATE
#define PROPERTY_PATH_ATTR_ATOMIC_AGGREGATE \
					"PathAttrAtomicAggregate"
#endif

#ifndef PROPERTY_PATH_ATTR_AGGREGATOR_A_S
#define PROPERTY_PATH_ATTR_AGGREGATOR_A_S \
					"PathAttrAggregatorAS"
#endif

#ifndef PROPERTY_PATH_ATTR_AGGREGATOR_ADDR
#define PROPERTY_PATH_ATTR_AGGREGATOR_ADDR \
					"PathAttrAggregatorAddr"
#endif

#ifndef PROPERTY_PATH_ATTR_CALC_LOCAL_PREF
#define PROPERTY_PATH_ATTR_CALC_LOCAL_PREF \
					"PathAttrCalcLocalPref"
#endif

#ifndef PROPERTY_PATH_ATTR_BEST
#define PROPERTY_PATH_ATTR_BEST \
					"PathAttrBest"
#endif

#ifndef PROPERTY_PATH_ATTR_UNKNOWN
#define PROPERTY_PATH_ATTR_UNKNOWN \
					"PathAttrUnknown"
#endif

#ifndef PROPERTY_PATH_ATTR_UNKNOWN_NUMBER
#define PROPERTY_PATH_ATTR_UNKNOWN_NUMBER \
					"PathAttrUnknownNumber"
#endif



class UNIX_BGPPathAttributes :
	public CIM_LogicalElement
{
public:

	UNIX_BGPPathAttributes();
	~UNIX_BGPPathAttributes();

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
	virtual Boolean getASNumbers(CIMProperty&) const;
	virtual String getASNumbers() const;
	virtual void setASNumbers(String&);
	virtual Boolean getPathAttrNextHop(CIMProperty&) const;
	virtual String getPathAttrNextHop() const;
	virtual void setPathAttrNextHop(String&);
	virtual Boolean getPathAttrASPathSegment(CIMProperty&) const;
	virtual Array<Uint8> getPathAttrASPathSegment() const;
	virtual void setPathAttrASPathSegment(Array<Uint8>&);
	virtual Boolean getPathAttrOrigin(CIMProperty&) const;
	virtual Uint16 getPathAttrOrigin() const;
	virtual void setPathAttrOrigin(Uint16&);
	virtual Boolean getPathAttrMultiExitDisc(CIMProperty&) const;
	virtual Sint32 getPathAttrMultiExitDisc() const;
	virtual void setPathAttrMultiExitDisc(Sint32&);
	virtual Boolean getPathAttrLocalPref(CIMProperty&) const;
	virtual Sint32 getPathAttrLocalPref() const;
	virtual void setPathAttrLocalPref(Sint32&);
	virtual Boolean getPathAttrAtomicAggregate(CIMProperty&) const;
	virtual Uint32 getPathAttrAtomicAggregate() const;
	virtual void setPathAttrAtomicAggregate(Uint32&);
	virtual Boolean getPathAttrAggregatorAS(CIMProperty&) const;
	virtual Uint16 getPathAttrAggregatorAS() const;
	virtual void setPathAttrAggregatorAS(Uint16&);
	virtual Boolean getPathAttrAggregatorAddr(CIMProperty&) const;
	virtual String getPathAttrAggregatorAddr() const;
	virtual void setPathAttrAggregatorAddr(String&);
	virtual Boolean getPathAttrCalcLocalPref(CIMProperty&) const;
	virtual Sint16 getPathAttrCalcLocalPref() const;
	virtual void setPathAttrCalcLocalPref(Sint16&);
	virtual Boolean getPathAttrBest(CIMProperty&) const;
	virtual Uint16 getPathAttrBest() const;
	virtual void setPathAttrBest(Uint16&);
	virtual Boolean getPathAttrUnknown(CIMProperty&) const;
	virtual Array<String> getPathAttrUnknown() const;
	virtual void setPathAttrUnknown(Array<String>&);
	virtual Boolean getPathAttrUnknownNumber(CIMProperty&) const;
	virtual Uint16 getPathAttrUnknownNumber() const;
	virtual void setPathAttrUnknownNumber(Uint16&);


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
	String _aSNumbers;
	String _pathAttrNextHop;
	Array<Uint8> _pathAttrASPathSegment;
	Uint16 _pathAttrOrigin;
	Sint32 _pathAttrMultiExitDisc;
	Sint32 _pathAttrLocalPref;
	Uint32 _pathAttrAtomicAggregate;
	Uint16 _pathAttrAggregatorAS;
	String _pathAttrAggregatorAddr;
	Sint16 _pathAttrCalcLocalPref;
	Uint16 _pathAttrBest;
	Array<String> _pathAttrUnknown;
	Uint16 _pathAttrUnknownNumber;

#	include "UNIX_BGPPathAttributesPrivate.h"


};

#endif /* UNIX_BGPPATHATTRIBUTES */
