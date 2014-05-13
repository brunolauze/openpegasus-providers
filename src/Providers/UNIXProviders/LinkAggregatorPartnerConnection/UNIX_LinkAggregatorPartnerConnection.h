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
LinkAggregatorPartnerConnection contains the configuration information for an instance of a Link Aggregator's partner. The partner is defined as a RemoteServiceAccessPoint and it represents the actor's view of the connection. This sub-class of ActiveConnection represents a connection which is configured to communicate or it is actively communicating. If there is no known partner, then this association will not be defined for an instance of LinkAggregator8023ad.
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

			UNIX_LinkAggregatorPartnerConnection:
				PartnerSystemID String
				PartnerSystemPriority UInt16
				PartnerOperKey UInt16


*/


/*
			 *** Methods ***

			CIM_Dependency:

			CIM_SAPSAPDependency:

			CIM_ActiveConnection:

			UNIX_LinkAggregatorPartnerConnection:


*/

#ifndef __UNIX_LINKAGGREGATORPARTNERCONNECTION_H
#define __UNIX_LINKAGGREGATORPARTNERCONNECTION_H


#include "CIM_ActiveConnection.h"
#include <LinkAggregator8023ad/UNIX_LinkAggregator8023adProvider.h>
#include <PolicyTransferServiceAccessPoint/UNIX_PolicyTransferServiceAccessPointProvider.h>
#include <LaunchInContextSAP/UNIX_LaunchInContextSAPProvider.h>
#include <RemotePort/UNIX_RemotePortProvider.h>
#include <MPLSTunnelHop/UNIX_MPLSTunnelHopProvider.h>
#include <SoftwareIdentityResource/UNIX_SoftwareIdentityResourceProvider.h>

#include "UNIX_LinkAggregatorPartnerConnectionDeps.h"


#ifndef PROPERTY_PARTNER_SYSTEM_ID
#define PROPERTY_PARTNER_SYSTEM_ID \
					"PartnerSystemID"
#endif

#ifndef PROPERTY_PARTNER_SYSTEM_PRIORITY
#define PROPERTY_PARTNER_SYSTEM_PRIORITY \
					"PartnerSystemPriority"
#endif

#ifndef PROPERTY_PARTNER_OPER_KEY
#define PROPERTY_PARTNER_OPER_KEY \
					"PartnerOperKey"
#endif



class UNIX_LinkAggregatorPartnerConnection :
	public CIM_ActiveConnection
{
public:

	UNIX_LinkAggregatorPartnerConnection();
	~UNIX_LinkAggregatorPartnerConnection();

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
	virtual Boolean getPartnerSystemID(CIMProperty&) const;
	virtual String getPartnerSystemID() const;
	virtual void setPartnerSystemID(String&);
	virtual Boolean getPartnerSystemPriority(CIMProperty&) const;
	virtual Uint16 getPartnerSystemPriority() const;
	virtual void setPartnerSystemPriority(Uint16&);
	virtual Boolean getPartnerOperKey(CIMProperty&) const;
	virtual Uint16 getPartnerOperKey() const;
	virtual void setPartnerOperKey(Uint16&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _antecedent;
	CIMInstance _dependent;
	Uint16 _trafficType;
	String _otherTrafficDescription;
	Boolean _isUnidirectional;
	String _partnerSystemID;
	Uint16 _partnerSystemPriority;
	Uint16 _partnerOperKey;

UNIX_LinkAggregator8023ad _antecedentLinkAggregator8023ad;
UNIX_LinkAggregator8023adProvider _antecedentLinkAggregator8023adProvider;

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

#	include "UNIX_LinkAggregatorPartnerConnectionPrivate.h"


};

#endif /* UNIX_LINKAGGREGATORPARTNERCONNECTION */
