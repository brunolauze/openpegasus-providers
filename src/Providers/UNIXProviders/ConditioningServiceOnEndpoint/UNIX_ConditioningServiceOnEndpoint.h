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
CIM_IngressConditioningServiceOnEndpoint
CIM_EgressConditioningServiceOnEndpoint
*/


/* **** Version *** */
/*
2.7.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Network::QoS
*/


/* **** Description *** */
/*
The QoS Model describes the traffic conditioning functions in place for a network device. In order to 'be conditioned', a packet is received at a ProtocolEndpoint. After 'conditioning', a packet is dropped or leaves the device via a ProtocolEndpoint. This dependency on ProtocolEndpoints is defined by the ConditioningServiceOn Endpoint association. A property of the association, ServiceType, indicates whether the ConditioningService handles incoming ("Ingress") or out-going ("Egress") packets. This association is deprecated since different cardinalities are needed on the ingress and egress classes. This cannot be done using a single association.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			UNIX_ConditioningServiceOnEndpoint:
				ServiceType UInt16


*/


/*
			 *** Methods ***

			CIM_Dependency:

			UNIX_ConditioningServiceOnEndpoint:


*/

#ifndef __UNIX_CONDITIONINGSERVICEONENDPOINT_H
#define __UNIX_CONDITIONINGSERVICEONENDPOINT_H


#include "CIM_Dependency.h"
#include <DHCPProtocolEndpoint/UNIX_DHCPProtocolEndpointProvider.h>
#include <SSHProtocolEndpoint/UNIX_SSHProtocolEndpointProvider.h>
#include <SCSIProtocolEndpoint/UNIX_SCSIProtocolEndpointProvider.h>
#include <iSCSIProtocolEndpoint/UNIX_iSCSIProtocolEndpointProvider.h>
#include <CLPProtocolEndpoint/UNIX_CLPProtocolEndpointProvider.h>
#include <IPXProtocolEndpoint/UNIX_IPXProtocolEndpointProvider.h>
#include <IPsecSAEndpoint/UNIX_IPsecSAEndpointProvider.h>
#include <IKESAEndpoint/UNIX_IKESAEndpointProvider.h>
#include <LANEndpoint/UNIX_LANEndpointProvider.h>
#include <WiFiEndpoint/UNIX_WiFiEndpointProvider.h>
#include <MPLSProtocolEndpoint/UNIX_MPLSProtocolEndpointProvider.h>
#include <WirelessLANEndpoint/UNIX_WirelessLANEndpointProvider.h>
#include <UDPProtocolEndpoint/UNIX_UDPProtocolEndpointProvider.h>
#include <TCPProtocolEndpoint/UNIX_TCPProtocolEndpointProvider.h>
#include <OSPFVirtualInterface/UNIX_OSPFVirtualInterfaceProvider.h>
#include <OSPFProtocolEndpoint/UNIX_OSPFProtocolEndpointProvider.h>
#include <VLANEndpoint/UNIX_VLANEndpointProvider.h>
#include <LinkAggregator8023ad/UNIX_LinkAggregator8023adProvider.h>
#include <ATAProtocolEndpoint/UNIX_ATAProtocolEndpointProvider.h>
#include <IPEncapsulationInterface/UNIX_IPEncapsulationInterfaceProvider.h>
#include <IPSubinterface/UNIX_IPSubinterfaceProvider.h>
#include <SwitchVirtualInterface/UNIX_SwitchVirtualInterfaceProvider.h>
#include <IPLoopback/UNIX_IPLoopbackProvider.h>
#include <BGPProtocolEndpoint/UNIX_BGPProtocolEndpointProvider.h>
#include <SwitchPort/UNIX_SwitchPortProvider.h>
#include <DNSProtocolEndpoint/UNIX_DNSProtocolEndpointProvider.h>
#include <LAGPort8023ad/UNIX_LAGPort8023adProvider.h>
#include <TokenBucketMeterService/UNIX_TokenBucketMeterServiceProvider.h>
#include <EWMAMeterService/UNIX_EWMAMeterServiceProvider.h>
#include <AverageRateMeterService/UNIX_AverageRateMeterServiceProvider.h>
#include <ToSMarkerService/UNIX_ToSMarkerServiceProvider.h>
#include <Priority8021QMarkerService/UNIX_Priority8021QMarkerServiceProvider.h>
#include <DSCPMarkerService/UNIX_DSCPMarkerServiceProvider.h>
#include <PreambleMarkerService/UNIX_PreambleMarkerServiceProvider.h>
#include <ClassifierService/UNIX_ClassifierServiceProvider.h>
#include <ClassifierElement/UNIX_ClassifierElementProvider.h>
#include <PacketSchedulingService/UNIX_PacketSchedulingServiceProvider.h>
#include <NonWorkConservingSchedulingService/UNIX_NonWorkConservingSchedulingServiceProvider.h>
#include <REDDropperService/UNIX_REDDropperServiceProvider.h>
#include <HeadTailDropper/UNIX_HeadTailDropperProvider.h>
#include <WeightedREDDropperService/UNIX_WeightedREDDropperServiceProvider.h>
#include <QueuingService/UNIX_QueuingServiceProvider.h>

#include "UNIX_ConditioningServiceOnEndpointDeps.h"


#ifndef PROPERTY_SERVICE_TYPE
#define PROPERTY_SERVICE_TYPE \
					"ServiceType"
#endif



class UNIX_ConditioningServiceOnEndpoint :
	public CIM_Dependency
{
public:

	UNIX_ConditioningServiceOnEndpoint();
	~UNIX_ConditioningServiceOnEndpoint();

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
	virtual Boolean getServiceType(CIMProperty&) const;
	virtual Uint16 getServiceType() const;
	virtual void setServiceType(Uint16&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _antecedent;
	CIMInstance _dependent;
	Uint16 _serviceType;

UNIX_DHCPProtocolEndpoint _antecedentDHCPProtocolEndpoint;
UNIX_DHCPProtocolEndpointProvider _antecedentDHCPProtocolEndpointProvider;
UNIX_SSHProtocolEndpoint _antecedentSSHProtocolEndpoint;
UNIX_SSHProtocolEndpointProvider _antecedentSSHProtocolEndpointProvider;
UNIX_SCSIProtocolEndpoint _antecedentSCSIProtocolEndpoint;
UNIX_SCSIProtocolEndpointProvider _antecedentSCSIProtocolEndpointProvider;
UNIX_iSCSIProtocolEndpoint _antecedentiSCSIProtocolEndpoint;
UNIX_iSCSIProtocolEndpointProvider _antecedentiSCSIProtocolEndpointProvider;
UNIX_CLPProtocolEndpoint _antecedentCLPProtocolEndpoint;
UNIX_CLPProtocolEndpointProvider _antecedentCLPProtocolEndpointProvider;
UNIX_IPXProtocolEndpoint _antecedentIPXProtocolEndpoint;
UNIX_IPXProtocolEndpointProvider _antecedentIPXProtocolEndpointProvider;
UNIX_IPsecSAEndpoint _antecedentIPsecSAEndpoint;
UNIX_IPsecSAEndpointProvider _antecedentIPsecSAEndpointProvider;
UNIX_IKESAEndpoint _antecedentIKESAEndpoint;
UNIX_IKESAEndpointProvider _antecedentIKESAEndpointProvider;
UNIX_LANEndpoint _antecedentLANEndpoint;
UNIX_LANEndpointProvider _antecedentLANEndpointProvider;
UNIX_WiFiEndpoint _antecedentWiFiEndpoint;
UNIX_WiFiEndpointProvider _antecedentWiFiEndpointProvider;
UNIX_MPLSProtocolEndpoint _antecedentMPLSProtocolEndpoint;
UNIX_MPLSProtocolEndpointProvider _antecedentMPLSProtocolEndpointProvider;
UNIX_WirelessLANEndpoint _antecedentWirelessLANEndpoint;
UNIX_WirelessLANEndpointProvider _antecedentWirelessLANEndpointProvider;
UNIX_UDPProtocolEndpoint _antecedentUDPProtocolEndpoint;
UNIX_UDPProtocolEndpointProvider _antecedentUDPProtocolEndpointProvider;
UNIX_TCPProtocolEndpoint _antecedentTCPProtocolEndpoint;
UNIX_TCPProtocolEndpointProvider _antecedentTCPProtocolEndpointProvider;
UNIX_OSPFVirtualInterface _antecedentOSPFVirtualInterface;
UNIX_OSPFVirtualInterfaceProvider _antecedentOSPFVirtualInterfaceProvider;
UNIX_OSPFProtocolEndpoint _antecedentOSPFProtocolEndpoint;
UNIX_OSPFProtocolEndpointProvider _antecedentOSPFProtocolEndpointProvider;
UNIX_VLANEndpoint _antecedentVLANEndpoint;
UNIX_VLANEndpointProvider _antecedentVLANEndpointProvider;
UNIX_LinkAggregator8023ad _antecedentLinkAggregator8023ad;
UNIX_LinkAggregator8023adProvider _antecedentLinkAggregator8023adProvider;
UNIX_ATAProtocolEndpoint _antecedentATAProtocolEndpoint;
UNIX_ATAProtocolEndpointProvider _antecedentATAProtocolEndpointProvider;
UNIX_IPEncapsulationInterface _antecedentIPEncapsulationInterface;
UNIX_IPEncapsulationInterfaceProvider _antecedentIPEncapsulationInterfaceProvider;
UNIX_IPSubinterface _antecedentIPSubinterface;
UNIX_IPSubinterfaceProvider _antecedentIPSubinterfaceProvider;
UNIX_SwitchVirtualInterface _antecedentSwitchVirtualInterface;
UNIX_SwitchVirtualInterfaceProvider _antecedentSwitchVirtualInterfaceProvider;
UNIX_IPLoopback _antecedentIPLoopback;
UNIX_IPLoopbackProvider _antecedentIPLoopbackProvider;
UNIX_BGPProtocolEndpoint _antecedentBGPProtocolEndpoint;
UNIX_BGPProtocolEndpointProvider _antecedentBGPProtocolEndpointProvider;
UNIX_SwitchPort _antecedentSwitchPort;
UNIX_SwitchPortProvider _antecedentSwitchPortProvider;
UNIX_DNSProtocolEndpoint _antecedentDNSProtocolEndpoint;
UNIX_DNSProtocolEndpointProvider _antecedentDNSProtocolEndpointProvider;
UNIX_LAGPort8023ad _antecedentLAGPort8023ad;
UNIX_LAGPort8023adProvider _antecedentLAGPort8023adProvider;

UNIX_TokenBucketMeterService _dependentTokenBucketMeterService;
UNIX_TokenBucketMeterServiceProvider _dependentTokenBucketMeterServiceProvider;
UNIX_EWMAMeterService _dependentEWMAMeterService;
UNIX_EWMAMeterServiceProvider _dependentEWMAMeterServiceProvider;
UNIX_AverageRateMeterService _dependentAverageRateMeterService;
UNIX_AverageRateMeterServiceProvider _dependentAverageRateMeterServiceProvider;
UNIX_ToSMarkerService _dependentToSMarkerService;
UNIX_ToSMarkerServiceProvider _dependentToSMarkerServiceProvider;
UNIX_Priority8021QMarkerService _dependentPriority8021QMarkerService;
UNIX_Priority8021QMarkerServiceProvider _dependentPriority8021QMarkerServiceProvider;
UNIX_DSCPMarkerService _dependentDSCPMarkerService;
UNIX_DSCPMarkerServiceProvider _dependentDSCPMarkerServiceProvider;
UNIX_PreambleMarkerService _dependentPreambleMarkerService;
UNIX_PreambleMarkerServiceProvider _dependentPreambleMarkerServiceProvider;
UNIX_ClassifierService _dependentClassifierService;
UNIX_ClassifierServiceProvider _dependentClassifierServiceProvider;
UNIX_ClassifierElement _dependentClassifierElement;
UNIX_ClassifierElementProvider _dependentClassifierElementProvider;
UNIX_PacketSchedulingService _dependentPacketSchedulingService;
UNIX_PacketSchedulingServiceProvider _dependentPacketSchedulingServiceProvider;
UNIX_NonWorkConservingSchedulingService _dependentNonWorkConservingSchedulingService;
UNIX_NonWorkConservingSchedulingServiceProvider _dependentNonWorkConservingSchedulingServiceProvider;
UNIX_REDDropperService _dependentREDDropperService;
UNIX_REDDropperServiceProvider _dependentREDDropperServiceProvider;
UNIX_HeadTailDropper _dependentHeadTailDropper;
UNIX_HeadTailDropperProvider _dependentHeadTailDropperProvider;
UNIX_WeightedREDDropperService _dependentWeightedREDDropperService;
UNIX_WeightedREDDropperServiceProvider _dependentWeightedREDDropperServiceProvider;
UNIX_QueuingService _dependentQueuingService;
UNIX_QueuingServiceProvider _dependentQueuingServiceProvider;

#	include "UNIX_ConditioningServiceOnEndpointPrivate.h"


};

#endif /* UNIX_CONDITIONINGSERVICEONENDPOINT */
