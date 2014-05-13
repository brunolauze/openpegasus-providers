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
2.10.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::FC
*/


/* **** Description *** */
/*
A Zone is a group of Ports, Endpoints, Nodes, Zones, and NamedAddressCollections that are managed collectively by the same domain. The managing domain is indicated by the HostedCollection association. For Fibre Channel, a Zone indicates a set of members that are participating together in the fabric.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_Collection:

			CIM_SystemSpecificCollection:

			CIM_ConnectivityCollection:
				ConnectivityStatus UInt16

			UNIX_Zone:
				Active Boolean
				ZoneType UInt16
				OtherZoneTypeDescription String
				ZoneSubType UInt16
				OtherZoneSubTypeDescription String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Collection:

			CIM_SystemSpecificCollection:

			CIM_ConnectivityCollection:

			UNIX_Zone:


*/

#ifndef __UNIX_ZONE_H
#define __UNIX_ZONE_H


#include "CIM_ConnectivityCollection.h"

#include "UNIX_ZoneDeps.h"


#ifndef PROPERTY_ACTIVE
#define PROPERTY_ACTIVE \
					"Active"
#endif

#ifndef PROPERTY_ZONE_TYPE
#define PROPERTY_ZONE_TYPE \
					"ZoneType"
#endif

#ifndef PROPERTY_OTHER_ZONE_TYPE_DESCRIPTION
#define PROPERTY_OTHER_ZONE_TYPE_DESCRIPTION \
					"OtherZoneTypeDescription"
#endif

#ifndef PROPERTY_ZONE_SUB_TYPE
#define PROPERTY_ZONE_SUB_TYPE \
					"ZoneSubType"
#endif

#ifndef PROPERTY_OTHER_ZONE_SUB_TYPE_DESCRIPTION
#define PROPERTY_OTHER_ZONE_SUB_TYPE_DESCRIPTION \
					"OtherZoneSubTypeDescription"
#endif



class UNIX_Zone :
	public CIM_ConnectivityCollection
{
public:

	UNIX_Zone();
	~UNIX_Zone();

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
	virtual Boolean getConnectivityStatus(CIMProperty&) const;
	virtual Uint16 getConnectivityStatus() const;
	virtual void setConnectivityStatus(Uint16&);
	virtual Boolean getActive(CIMProperty&) const;
	virtual Boolean getActive() const;
	virtual void setActive(Boolean&);
	virtual Boolean getZoneType(CIMProperty&) const;
	virtual Uint16 getZoneType() const;
	virtual void setZoneType(Uint16&);
	virtual Boolean getOtherZoneTypeDescription(CIMProperty&) const;
	virtual String getOtherZoneTypeDescription() const;
	virtual void setOtherZoneTypeDescription(String&);
	virtual Boolean getZoneSubType(CIMProperty&) const;
	virtual Uint16 getZoneSubType() const;
	virtual void setZoneSubType(Uint16&);
	virtual Boolean getOtherZoneSubTypeDescription(CIMProperty&) const;
	virtual String getOtherZoneSubTypeDescription() const;
	virtual void setOtherZoneSubTypeDescription(String&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	Uint16 _connectivityStatus;
	Boolean _active;
	Uint16 _zoneType;
	String _otherZoneTypeDescription;
	Uint16 _zoneSubType;
	String _otherZoneSubTypeDescription;

#	include "UNIX_ZonePrivate.h"


};

#endif /* UNIX_ZONE */
