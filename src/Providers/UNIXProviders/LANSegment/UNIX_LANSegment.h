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


/* **** Deprecated *** */
/*
CIM_LANConnectivitySegment
*/


/* **** Version *** */
/*
2.7.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Network::Collections
*/


/* **** Description *** */
/*
A collection of LAN Endpoints of a particular type that are able to intercommunicate directly without the assistance of bridging or routing services. 

Since this class' superclass (LogicalNetwork) has been deprecated (in order to define more consistent 'collection' semantics), this class is also deprecated.
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

			CIM_LogicalNetwork:
				SystemCreationClassName String
				SystemName String
				CreationClassName String
				Name String
				NetworkType UInt16
				OtherTypeDescription String

			UNIX_LANSegment:
				LANID String
				LANType UInt16
				OtherLANType String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Collection:

			CIM_CollectionOfMSEs:

			CIM_LogicalNetwork:

			UNIX_LANSegment:


*/

#ifndef __UNIX_LANSEGMENT_H
#define __UNIX_LANSEGMENT_H


#include "CIM_LogicalNetwork.h"

#include "UNIX_LANSegmentDeps.h"


#ifndef PROPERTY_L_A_N_ID
#define PROPERTY_L_A_N_ID \
					"LANID"
#endif

#ifndef PROPERTY_L_A_N_TYPE
#define PROPERTY_L_A_N_TYPE \
					"LANType"
#endif

#ifndef PROPERTY_OTHER_L_A_N_TYPE
#define PROPERTY_OTHER_L_A_N_TYPE \
					"OtherLANType"
#endif



class UNIX_LANSegment :
	public CIM_LogicalNetwork
{
public:

	UNIX_LANSegment();
	~UNIX_LANSegment();

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
	virtual Boolean getNetworkType(CIMProperty&) const;
	virtual Uint16 getNetworkType() const;
	virtual void setNetworkType(Uint16&);
	virtual Boolean getOtherTypeDescription(CIMProperty&) const;
	virtual String getOtherTypeDescription() const;
	virtual void setOtherTypeDescription(String&);
	virtual Boolean getLANID(CIMProperty&) const;
	virtual String getLANID() const;
	virtual void setLANID(String&);
	virtual Boolean getLANType(CIMProperty&) const;
	virtual Uint16 getLANType() const;
	virtual void setLANType(Uint16&);
	virtual Boolean getOtherLANType(CIMProperty&) const;
	virtual String getOtherLANType() const;
	virtual void setOtherLANType(String&);


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
	Uint16 _networkType;
	String _otherTypeDescription;
	String _lANID;
	Uint16 _lANType;
	String _otherLANType;

#	include "UNIX_LANSegmentPrivate.h"


};

#endif /* UNIX_LANSEGMENT */
