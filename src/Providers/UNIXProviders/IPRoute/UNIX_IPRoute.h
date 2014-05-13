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
CIM_NextHopIPRoute
*/


/* **** Abstract *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.7.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Network::Routes
*/


/* **** Description *** */
/*
An IPRoute relates a destination address to the address or interface through which the remote address may be reached. The destination address may be a specific IP endpoint or a subnet, dependent on the mask. An instance of this class represents either static or dynamic routing. Static routes are distinguished by setting the IsStatic boolean property to TRUE. 

Since many routes between endpoints can be defined (using different route calculation algorithms), the CIM_IPRoute class is defined as Abstract. This forces subclassing (for example, see CIM_BGPIPRoute) and allows the instances of its subclasses to be distinguished based on their CreationClassName key property. 

IPRoute is deprecated in lieu of the more general, concrete NextHopIPRoute class. NextHopIPRoute allows the definition of BOTH a next hop address and an interface for transmission of the traffic. Also, it does not mandate the instantiation of a ForwardingService class.
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

			UNIX_NextHopRouting:
				DestinationAddress String
				DestinationMask String
				NextHop String
				IsStatic Boolean

			UNIX_IPRoute:
				SystemCreationClassName String
				SystemName String
				ServiceCreationClassName String
				ServiceName String
				CreationClassName String
				IPDestinationAddress String
				IPDestinationMask String
				AddressType UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_ManagedSystemElement:

			CIM_LogicalElement:

			UNIX_NextHopRouting:

			UNIX_IPRoute:


*/

#ifndef __UNIX_IPROUTE_H
#define __UNIX_IPROUTE_H


#include <NextHopRouting/UNIX_NextHopRouting.h>

#include "UNIX_IPRouteDeps.h"


#ifndef PROPERTY_SYSTEM_CREATION_CLASS_NAME
#define PROPERTY_SYSTEM_CREATION_CLASS_NAME \
					"SystemCreationClassName"
#endif

#ifndef PROPERTY_SYSTEM_NAME
#define PROPERTY_SYSTEM_NAME \
					"SystemName"
#endif

#ifndef PROPERTY_SERVICE_CREATION_CLASS_NAME
#define PROPERTY_SERVICE_CREATION_CLASS_NAME \
					"ServiceCreationClassName"
#endif

#ifndef PROPERTY_SERVICE_NAME
#define PROPERTY_SERVICE_NAME \
					"ServiceName"
#endif

#ifndef PROPERTY_CREATION_CLASS_NAME
#define PROPERTY_CREATION_CLASS_NAME \
					"CreationClassName"
#endif

#ifndef PROPERTY_IP_DESTINATION_ADDRESS
#define PROPERTY_IP_DESTINATION_ADDRESS \
					"IPDestinationAddress"
#endif

#ifndef PROPERTY_IP_DESTINATION_MASK
#define PROPERTY_IP_DESTINATION_MASK \
					"IPDestinationMask"
#endif

#ifndef PROPERTY_ADDRESS_TYPE
#define PROPERTY_ADDRESS_TYPE \
					"AddressType"
#endif



class UNIX_IPRoute :
	public UNIX_NextHopRouting
{
public:

	UNIX_IPRoute();
	~UNIX_IPRoute();

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
	virtual Boolean getDestinationAddress(CIMProperty&) const;
	virtual String getDestinationAddress() const;
	virtual void setDestinationAddress(String&);
	virtual Boolean getDestinationMask(CIMProperty&) const;
	virtual String getDestinationMask() const;
	virtual void setDestinationMask(String&);
	virtual Boolean getNextHop(CIMProperty&) const;
	virtual String getNextHop() const;
	virtual void setNextHop(String&);
	virtual Boolean getIsStatic(CIMProperty&) const;
	virtual Boolean getIsStatic() const;
	virtual void setIsStatic(Boolean&);
	virtual Boolean getSystemCreationClassName(CIMProperty&) const;
	virtual String getSystemCreationClassName() const;
	virtual void setSystemCreationClassName(String&);
	virtual Boolean getSystemName(CIMProperty&) const;
	virtual String getSystemName() const;
	virtual void setSystemName(String&);
	virtual Boolean getServiceCreationClassName(CIMProperty&) const;
	virtual String getServiceCreationClassName() const;
	virtual void setServiceCreationClassName(String&);
	virtual Boolean getServiceName(CIMProperty&) const;
	virtual String getServiceName() const;
	virtual void setServiceName(String&);
	virtual Boolean getCreationClassName(CIMProperty&) const;
	virtual String getCreationClassName() const;
	virtual void setCreationClassName(String&);
	virtual Boolean getIPDestinationAddress(CIMProperty&) const;
	virtual String getIPDestinationAddress() const;
	virtual void setIPDestinationAddress(String&);
	virtual Boolean getIPDestinationMask(CIMProperty&) const;
	virtual String getIPDestinationMask() const;
	virtual void setIPDestinationMask(String&);
	virtual Boolean getAddressType(CIMProperty&) const;
	virtual Uint16 getAddressType() const;
	virtual void setAddressType(Uint16&);


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
	String _destinationAddress;
	String _destinationMask;
	String _nextHop;
	Boolean _isStatic;
	String _systemCreationClassName;
	String _systemName;
	String _serviceCreationClassName;
	String _serviceName;
	String _creationClassName;
	String _iPDestinationAddress;
	String _iPDestinationMask;
	Uint16 _addressType;

#	include "UNIX_IPRoutePrivate.h"


};

#endif /* UNIX_IPROUTE */
