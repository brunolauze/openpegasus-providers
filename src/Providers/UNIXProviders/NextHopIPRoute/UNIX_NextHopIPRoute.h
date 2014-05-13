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
2.40.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Network::Routes
*/


/* **** Description *** */
/*
NextHopIPRoute specifies routing in an IP network.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			UNIX_NextHopRoute:
				DestinationAddress String
				AdminDistance UInt16
				RouteMetric UInt16
				IsStatic Boolean
				TypeOfRoute UInt16
				NextHopAddress String
				NextHopInterface String

			UNIX_NextHopIPRoute:
				RouteDerivation UInt16
				OtherDerivation String
				DestinationMask String
				PrefixLength UInt8
				AddressType UInt16
				NextHopMask String
				NextHopAddressType UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			UNIX_NextHopRoute:

			UNIX_NextHopIPRoute:


*/

#ifndef __UNIX_NEXTHOPIPROUTE_H
#define __UNIX_NEXTHOPIPROUTE_H


#include <NextHopRoute/UNIX_NextHopRoute.h>

#include "UNIX_NextHopIPRouteDeps.h"


#ifndef PROPERTY_ROUTE_DERIVATION
#define PROPERTY_ROUTE_DERIVATION \
					"RouteDerivation"
#endif

#ifndef PROPERTY_OTHER_DERIVATION
#define PROPERTY_OTHER_DERIVATION \
					"OtherDerivation"
#endif

#ifndef PROPERTY_DESTINATION_MASK
#define PROPERTY_DESTINATION_MASK \
					"DestinationMask"
#endif

#ifndef PROPERTY_PREFIX_LENGTH
#define PROPERTY_PREFIX_LENGTH \
					"PrefixLength"
#endif

#ifndef PROPERTY_ADDRESS_TYPE
#define PROPERTY_ADDRESS_TYPE \
					"AddressType"
#endif

#ifndef PROPERTY_NEXT_HOP_MASK
#define PROPERTY_NEXT_HOP_MASK \
					"NextHopMask"
#endif

#ifndef PROPERTY_NEXT_HOP_ADDRESS_TYPE
#define PROPERTY_NEXT_HOP_ADDRESS_TYPE \
					"NextHopAddressType"
#endif



class UNIX_NextHopIPRoute :
	public UNIX_NextHopRoute
{
public:

	UNIX_NextHopIPRoute();
	~UNIX_NextHopIPRoute();

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
	virtual Boolean getDestinationAddress(CIMProperty&) const;
	virtual String getDestinationAddress() const;
	virtual void setDestinationAddress(String&);
	virtual Boolean getAdminDistance(CIMProperty&) const;
	virtual Uint16 getAdminDistance() const;
	virtual void setAdminDistance(Uint16&);
	virtual Boolean getRouteMetric(CIMProperty&) const;
	virtual Uint16 getRouteMetric() const;
	virtual void setRouteMetric(Uint16&);
	virtual Boolean getIsStatic(CIMProperty&) const;
	virtual Boolean getIsStatic() const;
	virtual void setIsStatic(Boolean&);
	virtual Boolean getTypeOfRoute(CIMProperty&) const;
	virtual Uint16 getTypeOfRoute() const;
	virtual void setTypeOfRoute(Uint16&);
	virtual Boolean getNextHopAddress(CIMProperty&) const;
	virtual String getNextHopAddress() const;
	virtual void setNextHopAddress(String&);
	virtual Boolean getNextHopInterface(CIMProperty&) const;
	virtual String getNextHopInterface() const;
	virtual void setNextHopInterface(String&);
	virtual Boolean getRouteDerivation(CIMProperty&) const;
	virtual Uint16 getRouteDerivation() const;
	virtual void setRouteDerivation(Uint16&);
	virtual Boolean getOtherDerivation(CIMProperty&) const;
	virtual String getOtherDerivation() const;
	virtual void setOtherDerivation(String&);
	virtual Boolean getDestinationMask(CIMProperty&) const;
	virtual String getDestinationMask() const;
	virtual void setDestinationMask(String&);
	virtual Boolean getPrefixLength(CIMProperty&) const;
	virtual Uint8 getPrefixLength() const;
	virtual void setPrefixLength(Uint8&);
	virtual Boolean getAddressType(CIMProperty&) const;
	virtual Uint16 getAddressType() const;
	virtual void setAddressType(Uint16&);
	virtual Boolean getNextHopMask(CIMProperty&) const;
	virtual String getNextHopMask() const;
	virtual void setNextHopMask(String&);
	virtual Boolean getNextHopAddressType(CIMProperty&) const;
	virtual Uint16 getNextHopAddressType() const;
	virtual void setNextHopAddressType(Uint16&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	String _destinationAddress;
	Uint16 _adminDistance;
	Uint16 _routeMetric;
	Boolean _isStatic;
	Uint16 _typeOfRoute;
	String _nextHopAddress;
	String _nextHopInterface;
	Uint16 _routeDerivation;
	String _otherDerivation;
	String _destinationMask;
	Uint8 _prefixLength;
	Uint16 _addressType;
	String _nextHopMask;
	Uint16 _nextHopAddressType;

#	include "UNIX_NextHopIPRoutePrivate.h"


};

#endif /* UNIX_NEXTHOPIPROUTE */
