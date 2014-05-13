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
2.22.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Event
*/


/* **** Description *** */
/*
CIM_ListenerDestinationWSManagement describes the destination for CIM indications to be delivered via WS-Management.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_ListenerDestination:
				SystemCreationClassName String
				SystemName String
				CreationClassName String
				Name String
				PersistenceType UInt16
				OtherPersistenceType String
				Destination String
				OtherProtocol String
				Protocol UInt16

			UNIX_ListenerDestinationWSManagement:
				DestinationEndTo String
				Locale String
				ContentEncoding String
				DeliveryMode UInt16
				Heartbeat UInt64
				SendBookmark Boolean
				MaxTime UInt64
				DeliveryAuth String
				PolyMorphismMode UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_ListenerDestination:

			UNIX_ListenerDestinationWSManagement:


*/

#ifndef __UNIX_LISTENERDESTINATIONWSMANAGEMENT_H
#define __UNIX_LISTENERDESTINATIONWSMANAGEMENT_H


#include "CIM_ListenerDestination.h"

#include "UNIX_ListenerDestinationWSManagementDeps.h"


#ifndef PROPERTY_DESTINATION_END_TO
#define PROPERTY_DESTINATION_END_TO \
					"DestinationEndTo"
#endif

#ifndef PROPERTY_LOCALE
#define PROPERTY_LOCALE \
					"Locale"
#endif

#ifndef PROPERTY_CONTENT_ENCODING
#define PROPERTY_CONTENT_ENCODING \
					"ContentEncoding"
#endif

#ifndef PROPERTY_DELIVERY_MODE
#define PROPERTY_DELIVERY_MODE \
					"DeliveryMode"
#endif

#ifndef PROPERTY_HEARTBEAT
#define PROPERTY_HEARTBEAT \
					"Heartbeat"
#endif

#ifndef PROPERTY_SEND_BOOKMARK
#define PROPERTY_SEND_BOOKMARK \
					"SendBookmark"
#endif

#ifndef PROPERTY_MAX_TIME
#define PROPERTY_MAX_TIME \
					"MaxTime"
#endif

#ifndef PROPERTY_DELIVERY_AUTH
#define PROPERTY_DELIVERY_AUTH \
					"DeliveryAuth"
#endif

#ifndef PROPERTY_POLY_MORPHISM_MODE
#define PROPERTY_POLY_MORPHISM_MODE \
					"PolyMorphismMode"
#endif



class UNIX_ListenerDestinationWSManagement :
	public CIM_ListenerDestination
{
public:

	UNIX_ListenerDestinationWSManagement();
	~UNIX_ListenerDestinationWSManagement();

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
	virtual Boolean getPersistenceType(CIMProperty&) const;
	virtual Uint16 getPersistenceType() const;
	virtual void setPersistenceType(Uint16&);
	virtual Boolean getOtherPersistenceType(CIMProperty&) const;
	virtual String getOtherPersistenceType() const;
	virtual void setOtherPersistenceType(String&);
	virtual Boolean getDestination(CIMProperty&) const;
	virtual String getDestination() const;
	virtual void setDestination(String&);
	virtual Boolean getOtherProtocol(CIMProperty&) const;
	virtual String getOtherProtocol() const;
	virtual void setOtherProtocol(String&);
	virtual Boolean getProtocol(CIMProperty&) const;
	virtual Uint16 getProtocol() const;
	virtual void setProtocol(Uint16&);
	virtual Boolean getDestinationEndTo(CIMProperty&) const;
	virtual String getDestinationEndTo() const;
	virtual void setDestinationEndTo(String&);
	virtual Boolean getLocale(CIMProperty&) const;
	virtual String getLocale() const;
	virtual void setLocale(String&);
	virtual Boolean getContentEncoding(CIMProperty&) const;
	virtual String getContentEncoding() const;
	virtual void setContentEncoding(String&);
	virtual Boolean getDeliveryMode(CIMProperty&) const;
	virtual Uint16 getDeliveryMode() const;
	virtual void setDeliveryMode(Uint16&);
	virtual Boolean getHeartbeat(CIMProperty&) const;
	virtual Uint64 getHeartbeat() const;
	virtual void setHeartbeat(Uint64&);
	virtual Boolean getSendBookmark(CIMProperty&) const;
	virtual Boolean getSendBookmark() const;
	virtual void setSendBookmark(Boolean&);
	virtual Boolean getMaxTime(CIMProperty&) const;
	virtual Uint64 getMaxTime() const;
	virtual void setMaxTime(Uint64&);
	virtual Boolean getDeliveryAuth(CIMProperty&) const;
	virtual String getDeliveryAuth() const;
	virtual void setDeliveryAuth(String&);
	virtual Boolean getPolyMorphismMode(CIMProperty&) const;
	virtual Uint16 getPolyMorphismMode() const;
	virtual void setPolyMorphismMode(Uint16&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	String _systemCreationClassName;
	String _systemName;
	String _creationClassName;
	String _name;
	Uint16 _persistenceType;
	String _otherPersistenceType;
	String _destination;
	String _otherProtocol;
	Uint16 _protocol;
	String _destinationEndTo;
	String _locale;
	String _contentEncoding;
	Uint16 _deliveryMode;
	Uint64 _heartbeat;
	Boolean _sendBookmark;
	Uint64 _maxTime;
	String _deliveryAuth;
	Uint16 _polyMorphismMode;

#	include "UNIX_ListenerDestinationWSManagementPrivate.h"


};

#endif /* UNIX_LISTENERDESTINATIONWSMANAGEMENT */
