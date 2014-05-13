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


/* **** Experimental *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.8.1000
*/


/* **** UMLPackagePath *** */
/*
CIM::Network::8023LAG
*/


/* **** Description *** */
/*
LAGPortPartnerConnection contains the configuration information for an instance of a LAGPort8023ad's partner. The partner is defined as a RemoteServiceAccessPoint and it represents the actor's view of the connection. If there is no known partner, then this association will not be defined for an instance of LAGPort8023ad.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			CIM_SAPSAPDependency:

			CIM_ActiveConnection:
				TrafficType UInt16
				OtherTrafficDescription String
				IsUnidirectional Boolean

			UNIX_LAGPortPartnerConnection:
				PortPartnerOperSystemID String
				PortPartnerOperSystemPriority UInt16
				PortPartnerOperKey UInt16
				PortPartnerOperPort UInt16
				PortPartnerOperPortPriority UInt16
				PortPartnerAdminState UInt16
				PortPartnerOperState UInt16


*/


/*
			 *** Methods ***

			CIM_Dependency:

			CIM_SAPSAPDependency:

			CIM_ActiveConnection:

			UNIX_LAGPortPartnerConnection:


*/

#ifndef __UNIX_LAGPORTPARTNERCONNECTION_H
#define __UNIX_LAGPORTPARTNERCONNECTION_H


#include "CIM_ActiveConnection.h"
#include <LAGPort8023ad/UNIX_LAGPort8023adProvider.h>
#include <PolicyTransferServiceAccessPoint/UNIX_PolicyTransferServiceAccessPointProvider.h>
#include <LaunchInContextSAP/UNIX_LaunchInContextSAPProvider.h>
#include <RemotePort/UNIX_RemotePortProvider.h>
#include <MPLSTunnelHop/UNIX_MPLSTunnelHopProvider.h>
#include <SoftwareIdentityResource/UNIX_SoftwareIdentityResourceProvider.h>

#include "UNIX_LAGPortPartnerConnectionDeps.h"


#ifndef PROPERTY_PORT_PARTNER_OPER_SYSTEM_ID
#define PROPERTY_PORT_PARTNER_OPER_SYSTEM_ID \
					"PortPartnerOperSystemID"
#endif

#ifndef PROPERTY_PORT_PARTNER_OPER_SYSTEM_PRIORITY
#define PROPERTY_PORT_PARTNER_OPER_SYSTEM_PRIORITY \
					"PortPartnerOperSystemPriority"
#endif

#ifndef PROPERTY_PORT_PARTNER_OPER_KEY
#define PROPERTY_PORT_PARTNER_OPER_KEY \
					"PortPartnerOperKey"
#endif

#ifndef PROPERTY_PORT_PARTNER_OPER_PORT
#define PROPERTY_PORT_PARTNER_OPER_PORT \
					"PortPartnerOperPort"
#endif

#ifndef PROPERTY_PORT_PARTNER_OPER_PORT_PRIORITY
#define PROPERTY_PORT_PARTNER_OPER_PORT_PRIORITY \
					"PortPartnerOperPortPriority"
#endif

#ifndef PROPERTY_PORT_PARTNER_ADMIN_STATE
#define PROPERTY_PORT_PARTNER_ADMIN_STATE \
					"PortPartnerAdminState"
#endif

#ifndef PROPERTY_PORT_PARTNER_OPER_STATE
#define PROPERTY_PORT_PARTNER_OPER_STATE \
					"PortPartnerOperState"
#endif



class UNIX_LAGPortPartnerConnection :
	public CIM_ActiveConnection
{
public:

	UNIX_LAGPortPartnerConnection();
	~UNIX_LAGPortPartnerConnection();

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
	virtual Boolean getTrafficType(CIMProperty&) const;
	virtual Uint16 getTrafficType() const;
	virtual void setTrafficType(Uint16&);
	virtual Boolean getOtherTrafficDescription(CIMProperty&) const;
	virtual String getOtherTrafficDescription() const;
	virtual void setOtherTrafficDescription(String&);
	virtual Boolean getIsUnidirectional(CIMProperty&) const;
	virtual Boolean getIsUnidirectional() const;
	virtual void setIsUnidirectional(Boolean&);
	virtual Boolean getPortPartnerOperSystemID(CIMProperty&) const;
	virtual String getPortPartnerOperSystemID() const;
	virtual void setPortPartnerOperSystemID(String&);
	virtual Boolean getPortPartnerOperSystemPriority(CIMProperty&) const;
	virtual Uint16 getPortPartnerOperSystemPriority() const;
	virtual void setPortPartnerOperSystemPriority(Uint16&);
	virtual Boolean getPortPartnerOperKey(CIMProperty&) const;
	virtual Uint16 getPortPartnerOperKey() const;
	virtual void setPortPartnerOperKey(Uint16&);
	virtual Boolean getPortPartnerOperPort(CIMProperty&) const;
	virtual Uint16 getPortPartnerOperPort() const;
	virtual void setPortPartnerOperPort(Uint16&);
	virtual Boolean getPortPartnerOperPortPriority(CIMProperty&) const;
	virtual Uint16 getPortPartnerOperPortPriority() const;
	virtual void setPortPartnerOperPortPriority(Uint16&);
	virtual Boolean getPortPartnerAdminState(CIMProperty&) const;
	virtual Uint16 getPortPartnerAdminState() const;
	virtual void setPortPartnerAdminState(Uint16&);
	virtual Boolean getPortPartnerOperState(CIMProperty&) const;
	virtual Uint16 getPortPartnerOperState() const;
	virtual void setPortPartnerOperState(Uint16&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _antecedent;
	CIMInstance _dependent;
	Uint16 _trafficType;
	String _otherTrafficDescription;
	Boolean _isUnidirectional;
	String _portPartnerOperSystemID;
	Uint16 _portPartnerOperSystemPriority;
	Uint16 _portPartnerOperKey;
	Uint16 _portPartnerOperPort;
	Uint16 _portPartnerOperPortPriority;
	Uint16 _portPartnerAdminState;
	Uint16 _portPartnerOperState;

UNIX_LAGPort8023ad _antecedentLAGPort8023ad;
UNIX_LAGPort8023adProvider _antecedentLAGPort8023adProvider;

UNIX_PolicyTransferServiceAccessPoint _dependentPolicyTransferServiceAccessPoint;
UNIX_PolicyTransferServiceAccessPointProvider _dependentPolicyTransferServiceAccessPointProvider;
UNIX_LaunchInContextSAP _dependentLaunchInContextSAP;
UNIX_LaunchInContextSAPProvider _dependentLaunchInContextSAPProvider;
UNIX_RemotePort _dependentRemotePort;
UNIX_RemotePortProvider _dependentRemotePortProvider;
UNIX_MPLSTunnelHop _dependentMPLSTunnelHop;
UNIX_MPLSTunnelHopProvider _dependentMPLSTunnelHopProvider;
UNIX_SoftwareIdentityResource _dependentSoftwareIdentityResource;
UNIX_SoftwareIdentityResourceProvider _dependentSoftwareIdentityResourceProvider;

#	include "UNIX_LAGPortPartnerConnectionPrivate.h"


};

#endif /* UNIX_LAGPORTPARTNERCONNECTION */
