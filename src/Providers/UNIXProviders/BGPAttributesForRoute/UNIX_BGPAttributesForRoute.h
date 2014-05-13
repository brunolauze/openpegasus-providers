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


/* **** Association *** */
/*
TRUE
*/


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
This defines the attributes that are transmitted between BGP peers on a per-route basis.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			UNIX_BGPAttributesForRoute:
				PathAttrPeer String
				PathAttrIPAddrPrefixLen UInt8
				PathAttrIPAddrPrefix String


*/


/*
			 *** Methods ***

			CIM_Dependency:

			UNIX_BGPAttributesForRoute:


*/

#ifndef __UNIX_BGPATTRIBUTESFORROUTE_H
#define __UNIX_BGPATTRIBUTESFORROUTE_H


#include "CIM_Dependency.h"
#include <BGPPathAttributes/UNIX_BGPPathAttributesProvider.h>
#include <BGPIPRoute/UNIX_BGPIPRouteProvider.h>

#include "UNIX_BGPAttributesForRouteDeps.h"


#ifndef PROPERTY_PATH_ATTR_PEER
#define PROPERTY_PATH_ATTR_PEER \
					"PathAttrPeer"
#endif

#ifndef PROPERTY_PATH_ATTR_IP_ADDR_PREFIX_LEN
#define PROPERTY_PATH_ATTR_IP_ADDR_PREFIX_LEN \
					"PathAttrIPAddrPrefixLen"
#endif

#ifndef PROPERTY_PATH_ATTR_IP_ADDR_PREFIX
#define PROPERTY_PATH_ATTR_IP_ADDR_PREFIX \
					"PathAttrIPAddrPrefix"
#endif



class UNIX_BGPAttributesForRoute :
	public CIM_Dependency
{
public:

	UNIX_BGPAttributesForRoute();
	~UNIX_BGPAttributesForRoute();

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

	virtual Boolean getAntecedent(CIMProperty&) const;
	virtual CIMInstance getAntecedent() const;
	virtual void setAntecedent(CIMInstance&);
	virtual Boolean getDependent(CIMProperty&) const;
	virtual CIMInstance getDependent() const;
	virtual void setDependent(CIMInstance&);
	virtual Boolean getPathAttrPeer(CIMProperty&) const;
	virtual String getPathAttrPeer() const;
	virtual void setPathAttrPeer(String&);
	virtual Boolean getPathAttrIPAddrPrefixLen(CIMProperty&) const;
	virtual Uint8 getPathAttrIPAddrPrefixLen() const;
	virtual void setPathAttrIPAddrPrefixLen(Uint8&);
	virtual Boolean getPathAttrIPAddrPrefix(CIMProperty&) const;
	virtual String getPathAttrIPAddrPrefix() const;
	virtual void setPathAttrIPAddrPrefix(String&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _antecedent;
	CIMInstance _dependent;
	String _pathAttrPeer;
	Uint8 _pathAttrIPAddrPrefixLen;
	String _pathAttrIPAddrPrefix;

UNIX_BGPPathAttributes _antecedentBGPPathAttributes;
UNIX_BGPPathAttributesProvider _antecedentBGPPathAttributesProvider;

UNIX_BGPIPRoute _dependentBGPIPRoute;
UNIX_BGPIPRouteProvider _dependentBGPIPRouteProvider;

#	include "UNIX_BGPAttributesForRoutePrivate.h"


};

#endif /* UNIX_BGPATTRIBUTESFORROUTE */
