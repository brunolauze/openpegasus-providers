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


/* **** Deprecated *** */
/*
No value
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
This assocation makes explicit the IP routes that are defined in the context of a specific ForwardingService. Every ForwardingService can have its own unique set of IP routing destinations. The association is deprecated since it is incorrect to mandate the existence of a ForwardingService in order to define the existence of a route.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			UNIX_RouteForwardedByService:
				AdminDistance UInt16
				PathMetric UInt16

			UNIX_ForwardedRoutes:


*/


/*
			 *** Methods ***

			CIM_Dependency:

			UNIX_RouteForwardedByService:

			UNIX_ForwardedRoutes:


*/

#ifndef __UNIX_FORWARDEDROUTES_H
#define __UNIX_FORWARDEDROUTES_H


#include <RouteForwardedByService/UNIX_RouteForwardedByService.h>
#include <NATService/UNIX_NATServiceProvider.h>
#include <TransparentBridgingService/UNIX_TransparentBridgingServiceProvider.h>
#include <SourceRoutingService/UNIX_SourceRoutingServiceProvider.h>
#include <SpanningTreeService/UNIX_SpanningTreeServiceProvider.h>
#include <SwitchService/UNIX_SwitchServiceProvider.h>
#include <IPRoute/UNIX_IPRouteProvider.h>

#include "UNIX_ForwardedRoutesDeps.h"




class UNIX_ForwardedRoutes :
	public UNIX_RouteForwardedByService
{
public:

	UNIX_ForwardedRoutes();
	~UNIX_ForwardedRoutes();

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
	virtual Boolean getAdminDistance(CIMProperty&) const;
	virtual Uint16 getAdminDistance() const;
	virtual void setAdminDistance(Uint16&);
	virtual Boolean getPathMetric(CIMProperty&) const;
	virtual Uint16 getPathMetric() const;
	virtual void setPathMetric(Uint16&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _antecedent;
	CIMInstance _dependent;
	Uint16 _adminDistance;
	Uint16 _pathMetric;

UNIX_NATService _antecedentNATService;
UNIX_NATServiceProvider _antecedentNATServiceProvider;
UNIX_TransparentBridgingService _antecedentTransparentBridgingService;
UNIX_TransparentBridgingServiceProvider _antecedentTransparentBridgingServiceProvider;
UNIX_SourceRoutingService _antecedentSourceRoutingService;
UNIX_SourceRoutingServiceProvider _antecedentSourceRoutingServiceProvider;
UNIX_SpanningTreeService _antecedentSpanningTreeService;
UNIX_SpanningTreeServiceProvider _antecedentSpanningTreeServiceProvider;
UNIX_SwitchService _antecedentSwitchService;
UNIX_SwitchServiceProvider _antecedentSwitchServiceProvider;

UNIX_IPRoute _dependentIPRoute;
UNIX_IPRouteProvider _dependentIPRouteProvider;

#	include "UNIX_ForwardedRoutesPrivate.h"


};

#endif /* UNIX_FORWARDEDROUTES */
