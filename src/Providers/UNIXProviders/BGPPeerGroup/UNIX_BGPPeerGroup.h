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
A BGP Peer Group is a set of BGP neighbors that share the same update policies. This enables an administrator to assign policies to the peer group, instead of individually. This enables the routers in the Peer Group to optimize UPDATE messages. Consequently, Peer Groups have a set of restrictions that must be followed in order to work correctly with external BGP peers. Otherwise, loss of routing information could occur. 

A BGPPeerGroup is weak to the AutonomousSystem that contains it. Therefore, the keys from System must be propagated to it.
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

			CIM_CollectionOfMSEs:
				CollectionID String

			UNIX_BGPPeerGroup:
				SystemCreationClassName String
				SystemName String
				CreationClassName String
				Name String
				ConnectRetryInterval UInt32
				HoldTimeConfigured UInt16
				KeepAliveConfigured UInt16
				MinASOriginationInterval UInt16
				MinRouteAdvertisementInterval UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Collection:

			CIM_CollectionOfMSEs:

			UNIX_BGPPeerGroup:


*/

#ifndef __UNIX_BGPPEERGROUP_H
#define __UNIX_BGPPEERGROUP_H


#include "CIM_CollectionOfMSEs.h"

#include "UNIX_BGPPeerGroupDeps.h"


#ifndef PROPERTY_SYSTEM_CREATION_CLASS_NAME
#define PROPERTY_SYSTEM_CREATION_CLASS_NAME \
					"SystemCreationClassName"
#endif

#ifndef PROPERTY_SYSTEM_NAME
#define PROPERTY_SYSTEM_NAME \
					"SystemName"
#endif

#ifndef PROPERTY_CREATION_CLASS_NAME
#define PROPERTY_CREATION_CLASS_NAME \
					"CreationClassName"
#endif

#ifndef PROPERTY_NAME
#define PROPERTY_NAME \
					"Name"
#endif

#ifndef PROPERTY_CONNECT_RETRY_INTERVAL
#define PROPERTY_CONNECT_RETRY_INTERVAL \
					"ConnectRetryInterval"
#endif

#ifndef PROPERTY_HOLD_TIME_CONFIGURED
#define PROPERTY_HOLD_TIME_CONFIGURED \
					"HoldTimeConfigured"
#endif

#ifndef PROPERTY_KEEP_ALIVE_CONFIGURED
#define PROPERTY_KEEP_ALIVE_CONFIGURED \
					"KeepAliveConfigured"
#endif

#ifndef PROPERTY_MIN_A_S_ORIGINATION_INTERVAL
#define PROPERTY_MIN_A_S_ORIGINATION_INTERVAL \
					"MinASOriginationInterval"
#endif

#ifndef PROPERTY_MIN_ROUTE_ADVERTISEMENT_INTERVAL
#define PROPERTY_MIN_ROUTE_ADVERTISEMENT_INTERVAL \
					"MinRouteAdvertisementInterval"
#endif



class UNIX_BGPPeerGroup :
	public CIM_CollectionOfMSEs
{
public:

	UNIX_BGPPeerGroup();
	~UNIX_BGPPeerGroup();

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
	virtual Boolean getCollectionID(CIMProperty&) const;
	virtual String getCollectionID() const;
	virtual void setCollectionID(String&);
	virtual Boolean getSystemCreationClassName(CIMProperty&) const;
	virtual String getSystemCreationClassName() const;
	virtual void setSystemCreationClassName(String&);
	virtual Boolean getSystemName(CIMProperty&) const;
	virtual String getSystemName() const;
	virtual void setSystemName(String&);
	virtual Boolean getCreationClassName(CIMProperty&) const;
	virtual String getCreationClassName() const;
	virtual void setCreationClassName(String&);
	virtual Boolean getName(CIMProperty&) const;
	virtual String getName() const;
	virtual void setName(String&);
	virtual Boolean getConnectRetryInterval(CIMProperty&) const;
	virtual Uint32 getConnectRetryInterval() const;
	virtual void setConnectRetryInterval(Uint32&);
	virtual Boolean getHoldTimeConfigured(CIMProperty&) const;
	virtual Uint16 getHoldTimeConfigured() const;
	virtual void setHoldTimeConfigured(Uint16&);
	virtual Boolean getKeepAliveConfigured(CIMProperty&) const;
	virtual Uint16 getKeepAliveConfigured() const;
	virtual void setKeepAliveConfigured(Uint16&);
	virtual Boolean getMinASOriginationInterval(CIMProperty&) const;
	virtual Uint16 getMinASOriginationInterval() const;
	virtual void setMinASOriginationInterval(Uint16&);
	virtual Boolean getMinRouteAdvertisementInterval(CIMProperty&) const;
	virtual Uint16 getMinRouteAdvertisementInterval() const;
	virtual void setMinRouteAdvertisementInterval(Uint16&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	String _collectionID;
	String _systemCreationClassName;
	String _systemName;
	String _creationClassName;
	String _name;
	Uint32 _connectRetryInterval;
	Uint16 _holdTimeConfigured;
	Uint16 _keepAliveConfigured;
	Uint16 _minASOriginationInterval;
	Uint16 _minRouteAdvertisementInterval;

#	include "UNIX_BGPPeerGroupPrivate.h"


};

#endif /* UNIX_BGPPEERGROUP */
