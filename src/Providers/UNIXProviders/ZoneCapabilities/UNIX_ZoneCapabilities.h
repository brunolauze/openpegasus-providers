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
2.23.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::FC
*/


/* **** Description *** */
/*
ZoneCapabilities exposes the capabilities for zoning of an AdminDomain.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_Capabilities:

			UNIX_ZoneCapabilities:
				ZoneNameMaxLen UInt32
				ZoneNameFormat UInt16
				MaxNumZoneSets UInt32
				MaxNumZone UInt32
				MaxNumZoneMembers UInt32
				MaxNumZonesPerZoneSet UInt32
				MaxNumZoneAliases UInt32
				SupportedConnectivityMemberTypes UInt16
				OtherSupportedConnectivityMemberTypes String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Capabilities:
				CreateGoalSettings UInt16

			UNIX_ZoneCapabilities:


*/

#ifndef __UNIX_ZONECAPABILITIES_H
#define __UNIX_ZONECAPABILITIES_H


#include "CIM_Capabilities.h"

#include "UNIX_ZoneCapabilitiesDeps.h"


#ifndef PROPERTY_ZONE_NAME_MAX_LEN
#define PROPERTY_ZONE_NAME_MAX_LEN \
					"ZoneNameMaxLen"
#endif

#ifndef PROPERTY_ZONE_NAME_FORMAT
#define PROPERTY_ZONE_NAME_FORMAT \
					"ZoneNameFormat"
#endif

#ifndef PROPERTY_MAX_NUM_ZONE_SETS
#define PROPERTY_MAX_NUM_ZONE_SETS \
					"MaxNumZoneSets"
#endif

#ifndef PROPERTY_MAX_NUM_ZONE
#define PROPERTY_MAX_NUM_ZONE \
					"MaxNumZone"
#endif

#ifndef PROPERTY_MAX_NUM_ZONE_MEMBERS
#define PROPERTY_MAX_NUM_ZONE_MEMBERS \
					"MaxNumZoneMembers"
#endif

#ifndef PROPERTY_MAX_NUM_ZONES_PER_ZONE_SET
#define PROPERTY_MAX_NUM_ZONES_PER_ZONE_SET \
					"MaxNumZonesPerZoneSet"
#endif

#ifndef PROPERTY_MAX_NUM_ZONE_ALIASES
#define PROPERTY_MAX_NUM_ZONE_ALIASES \
					"MaxNumZoneAliases"
#endif

#ifndef PROPERTY_SUPPORTED_CONNECTIVITY_MEMBER_TYPES
#define PROPERTY_SUPPORTED_CONNECTIVITY_MEMBER_TYPES \
					"SupportedConnectivityMemberTypes"
#endif

#ifndef PROPERTY_OTHER_SUPPORTED_CONNECTIVITY_MEMBER_TYPES
#define PROPERTY_OTHER_SUPPORTED_CONNECTIVITY_MEMBER_TYPES \
					"OtherSupportedConnectivityMemberTypes"
#endif



class UNIX_ZoneCapabilities :
	public CIM_Capabilities
{
public:

	UNIX_ZoneCapabilities();
	~UNIX_ZoneCapabilities();

	virtual Boolean initialize();
	virtual Boolean load(int&);
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
	virtual Boolean getZoneNameMaxLen(CIMProperty&) const;
	virtual Uint32 getZoneNameMaxLen() const;
	virtual void setZoneNameMaxLen(Uint32&);
	virtual Boolean getZoneNameFormat(CIMProperty&) const;
	virtual Uint16 getZoneNameFormat() const;
	virtual void setZoneNameFormat(Uint16&);
	virtual Boolean getMaxNumZoneSets(CIMProperty&) const;
	virtual Uint32 getMaxNumZoneSets() const;
	virtual void setMaxNumZoneSets(Uint32&);
	virtual Boolean getMaxNumZone(CIMProperty&) const;
	virtual Uint32 getMaxNumZone() const;
	virtual void setMaxNumZone(Uint32&);
	virtual Boolean getMaxNumZoneMembers(CIMProperty&) const;
	virtual Uint32 getMaxNumZoneMembers() const;
	virtual void setMaxNumZoneMembers(Uint32&);
	virtual Boolean getMaxNumZonesPerZoneSet(CIMProperty&) const;
	virtual Uint32 getMaxNumZonesPerZoneSet() const;
	virtual void setMaxNumZonesPerZoneSet(Uint32&);
	virtual Boolean getMaxNumZoneAliases(CIMProperty&) const;
	virtual Uint32 getMaxNumZoneAliases() const;
	virtual void setMaxNumZoneAliases(Uint32&);
	virtual Boolean getSupportedConnectivityMemberTypes(CIMProperty&) const;
	virtual Array<Uint16> getSupportedConnectivityMemberTypes() const;
	virtual void setSupportedConnectivityMemberTypes(Array<Uint16>&);
	virtual Boolean getOtherSupportedConnectivityMemberTypes(CIMProperty&) const;
	virtual Array<String> getOtherSupportedConnectivityMemberTypes() const;
	virtual void setOtherSupportedConnectivityMemberTypes(Array<String>&);

	virtual Uint16 invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	);



private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	Uint32 _zoneNameMaxLen;
	Uint16 _zoneNameFormat;
	Uint32 _maxNumZoneSets;
	Uint32 _maxNumZone;
	Uint32 _maxNumZoneMembers;
	Uint32 _maxNumZonesPerZoneSet;
	Uint32 _maxNumZoneAliases;
	Array<Uint16> _supportedConnectivityMemberTypes;
	Array<String> _otherSupportedConnectivityMemberTypes;

#	include "UNIX_ZoneCapabilitiesPrivate.h"


};

#endif /* UNIX_ZONECAPABILITIES */
