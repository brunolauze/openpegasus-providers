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
A ZoneSet is a group of zones that are managed collectively by the same domain. The managing domain is indicated by the HostedCollection association. For example, for Fibre Channel, this property would indicate a set of zones that are part of a fabric. The zones are under enforcement by the fabric, only if the Zoneset is set to active.
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

			UNIX_ZoneSet:
				Active Boolean


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Collection:

			CIM_SystemSpecificCollection:

			CIM_ConnectivityCollection:

			UNIX_ZoneSet:


*/

#ifndef __UNIX_ZONESET_H
#define __UNIX_ZONESET_H


#include "CIM_ConnectivityCollection.h"

#include "UNIX_ZoneSetDeps.h"


#ifndef PROPERTY_ACTIVE
#define PROPERTY_ACTIVE \
					"Active"
#endif



class UNIX_ZoneSet :
	public CIM_ConnectivityCollection
{
public:

	UNIX_ZoneSet();
	~UNIX_ZoneSet();

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

#	include "UNIX_ZoneSetPrivate.h"


};

#endif /* UNIX_ZONESET */
