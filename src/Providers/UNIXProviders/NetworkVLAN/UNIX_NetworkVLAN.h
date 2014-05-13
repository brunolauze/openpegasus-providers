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
2.26.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Network::VLAN
*/


/* **** Description *** */
/*
An instance of NetworkVLAN represents a collection of VLANSwitchEndpoints and/or VLANEndstationEndpoints which are members of the VLAN. There SHOULD be an instance of NetworkVLAN for every VLAN available in a switch. For example, in a switch with port-based VLANs, if there are 16 VLANs to which ports can be assigned (VLAN 1 through VLAN 16), there SHOULD be an instance of NetworkVLAN for each of VLAN 1 through VLAN 16.
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

			UNIX_NetworkVLAN:
				VLANId UInt16
				SAIdentifier UInt32
				TransmissionSize SInt32
				TypeOfMedia UInt16
				OtherTypeDescription String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Collection:

			CIM_SystemSpecificCollection:

			CIM_ConnectivityCollection:

			UNIX_NetworkVLAN:


*/

#ifndef __UNIX_NETWORKVLAN_H
#define __UNIX_NETWORKVLAN_H


#include "CIM_ConnectivityCollection.h"

#include "UNIX_NetworkVLANDeps.h"


#ifndef PROPERTY_VLAN_ID
#define PROPERTY_VLAN_ID \
					"VLANId"
#endif

#ifndef PROPERTY_S_A_IDENTIFIER
#define PROPERTY_S_A_IDENTIFIER \
					"SAIdentifier"
#endif

#ifndef PROPERTY_TRANSMISSION_SIZE
#define PROPERTY_TRANSMISSION_SIZE \
					"TransmissionSize"
#endif

#ifndef PROPERTY_TYPE_OF_MEDIA
#define PROPERTY_TYPE_OF_MEDIA \
					"TypeOfMedia"
#endif

#ifndef PROPERTY_OTHER_TYPE_DESCRIPTION
#define PROPERTY_OTHER_TYPE_DESCRIPTION \
					"OtherTypeDescription"
#endif



class UNIX_NetworkVLAN :
	public CIM_ConnectivityCollection
{
public:

	UNIX_NetworkVLAN();
	~UNIX_NetworkVLAN();

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
	virtual Boolean getVLANId(CIMProperty&) const;
	virtual Uint16 getVLANId() const;
	virtual void setVLANId(Uint16&);
	virtual Boolean getSAIdentifier(CIMProperty&) const;
	virtual Uint32 getSAIdentifier() const;
	virtual void setSAIdentifier(Uint32&);
	virtual Boolean getTransmissionSize(CIMProperty&) const;
	virtual Sint32 getTransmissionSize() const;
	virtual void setTransmissionSize(Sint32&);
	virtual Boolean getTypeOfMedia(CIMProperty&) const;
	virtual Uint16 getTypeOfMedia() const;
	virtual void setTypeOfMedia(Uint16&);
	virtual Boolean getOtherTypeDescription(CIMProperty&) const;
	virtual String getOtherTypeDescription() const;
	virtual void setOtherTypeDescription(String&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	Uint16 _connectivityStatus;
	Uint16 _vLANId;
	Uint32 _sAIdentifier;
	Sint32 _transmissionSize;
	Uint16 _typeOfMedia;
	String _otherTypeDescription;

#	include "UNIX_NetworkVLANPrivate.h"


};

#endif /* UNIX_NETWORKVLAN */
