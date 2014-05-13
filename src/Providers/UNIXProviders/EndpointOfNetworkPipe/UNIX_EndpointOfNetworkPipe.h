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
2.10.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Network::Pipes
*/


/* **** Description *** */
/*
EndpointOfNetworkPipe describes the access points between which a pipe transfers information. Whether an access point is a source or sink is indicated by a property of the association, SourceOrSink.
*/


/* **** MappingStrings *** */
/*
Recommendation.ITU|M3100.Pipe.a-TPInstance
Recommendation.ITU|M3100.Pipe.z-TPInstance
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			UNIX_EndpointOfNetworkPipe:
				SourceOrSink UInt16


*/


/*
			 *** Methods ***

			CIM_Dependency:

			UNIX_EndpointOfNetworkPipe:


*/

#ifndef __UNIX_ENDPOINTOFNETWORKPIPE_H
#define __UNIX_ENDPOINTOFNETWORKPIPE_H


#include "CIM_Dependency.h"
#include <ClusteringSAP/UNIX_ClusteringSAPProvider.h>
#include <CredentialManagementSAP/UNIX_CredentialManagementSAPProvider.h>
#include <USBRedirectionSAP/UNIX_USBRedirectionSAPProvider.h>
#include <IPNetworkConnection/UNIX_IPNetworkConnectionProvider.h>
#include <PolicyTransferServiceAccessPoint/UNIX_PolicyTransferServiceAccessPointProvider.h>
#include <LaunchInContextSAP/UNIX_LaunchInContextSAPProvider.h>
#include <RemotePort/UNIX_RemotePortProvider.h>
#include <MPLSTunnelHop/UNIX_MPLSTunnelHopProvider.h>
#include <SoftwareIdentityResource/UNIX_SoftwareIdentityResourceProvider.h>
#include <KVMRedirectionSAP/UNIX_KVMRedirectionSAPProvider.h>
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
#include <BatchSAP/UNIX_BatchSAPProvider.h>
#include <TextRedirectionSAP/UNIX_TextRedirectionSAPProvider.h>
#include <MediaRedirectionSAP/UNIX_MediaRedirectionSAPProvider.h>
#include <PrintSAP/UNIX_PrintSAPProvider.h>
#include <ServiceAccessURI/UNIX_ServiceAccessURIProvider.h>
#include <ObjectManagerCommunicationMechanism/UNIX_ObjectManagerCommunicationMechanismProvider.h>
#include <CIMXMLCommunicationMechanism/UNIX_CIMXMLCommunicationMechanismProvider.h>
#include <VLAN/UNIX_VLANProvider.h>
#include <BootSAP/UNIX_BootSAPProvider.h>
#include <iSCSISession/UNIX_iSCSISessionProvider.h>
#include <iSCSIConnection/UNIX_iSCSIConnectionProvider.h>

#include "UNIX_EndpointOfNetworkPipeDeps.h"


#ifndef PROPERTY_SOURCE_OR_SINK
#define PROPERTY_SOURCE_OR_SINK \
					"SourceOrSink"
#endif



class UNIX_EndpointOfNetworkPipe :
	public CIM_Dependency
{
public:

	UNIX_EndpointOfNetworkPipe();
	~UNIX_EndpointOfNetworkPipe();

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
	virtual Boolean getSourceOrSink(CIMProperty&) const;
	virtual Uint16 getSourceOrSink() const;
	virtual void setSourceOrSink(Uint16&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _antecedent;
	CIMInstance _dependent;
	Uint16 _sourceOrSink;

UNIX_ClusteringSAP _antecedentClusteringSAP;
UNIX_ClusteringSAPProvider _antecedentClusteringSAPProvider;
UNIX_CredentialManagementSAP _antecedentCredentialManagementSAP;
UNIX_CredentialManagementSAPProvider _antecedentCredentialManagementSAPProvider;
UNIX_USBRedirectionSAP _antecedentUSBRedirectionSAP;
UNIX_USBRedirectionSAPProvider _antecedentUSBRedirectionSAPProvider;
UNIX_IPNetworkConnection _antecedentIPNetworkConnection;
UNIX_IPNetworkConnectionProvider _antecedentIPNetworkConnectionProvider;
UNIX_PolicyTransferServiceAccessPoint _antecedentPolicyTransferServiceAccessPoint;
UNIX_PolicyTransferServiceAccessPointProvider _antecedentPolicyTransferServiceAccessPointProvider;
UNIX_LaunchInContextSAP _antecedentLaunchInContextSAP;
UNIX_LaunchInContextSAPProvider _antecedentLaunchInContextSAPProvider;
UNIX_RemotePort _antecedentRemotePort;
UNIX_RemotePortProvider _antecedentRemotePortProvider;
UNIX_MPLSTunnelHop _antecedentMPLSTunnelHop;
UNIX_MPLSTunnelHopProvider _antecedentMPLSTunnelHopProvider;
UNIX_SoftwareIdentityResource _antecedentSoftwareIdentityResource;
UNIX_SoftwareIdentityResourceProvider _antecedentSoftwareIdentityResourceProvider;
UNIX_KVMRedirectionSAP _antecedentKVMRedirectionSAP;
UNIX_KVMRedirectionSAPProvider _antecedentKVMRedirectionSAPProvider;
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
UNIX_BatchSAP _antecedentBatchSAP;
UNIX_BatchSAPProvider _antecedentBatchSAPProvider;
UNIX_TextRedirectionSAP _antecedentTextRedirectionSAP;
UNIX_TextRedirectionSAPProvider _antecedentTextRedirectionSAPProvider;
UNIX_MediaRedirectionSAP _antecedentMediaRedirectionSAP;
UNIX_MediaRedirectionSAPProvider _antecedentMediaRedirectionSAPProvider;
UNIX_PrintSAP _antecedentPrintSAP;
UNIX_PrintSAPProvider _antecedentPrintSAPProvider;
UNIX_ServiceAccessURI _antecedentServiceAccessURI;
UNIX_ServiceAccessURIProvider _antecedentServiceAccessURIProvider;
UNIX_ObjectManagerCommunicationMechanism _antecedentObjectManagerCommunicationMechanism;
UNIX_ObjectManagerCommunicationMechanismProvider _antecedentObjectManagerCommunicationMechanismProvider;
UNIX_CIMXMLCommunicationMechanism _antecedentCIMXMLCommunicationMechanism;
UNIX_CIMXMLCommunicationMechanismProvider _antecedentCIMXMLCommunicationMechanismProvider;
UNIX_VLAN _antecedentVLAN;
UNIX_VLANProvider _antecedentVLANProvider;
UNIX_BootSAP _antecedentBootSAP;
UNIX_BootSAPProvider _antecedentBootSAPProvider;

UNIX_iSCSISession _dependentiSCSISession;
UNIX_iSCSISessionProvider _dependentiSCSISessionProvider;
UNIX_iSCSIConnection _dependentiSCSIConnection;
UNIX_iSCSIConnectionProvider _dependentiSCSIConnectionProvider;

#	include "UNIX_EndpointOfNetworkPipePrivate.h"


};

#endif /* UNIX_ENDPOINTOFNETWORKPIPE */
