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
2.8.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Application::DeploymentModel
*/


/* **** Description *** */
/*
An association between a ServiceAccessPoint and how it is implemented in software. The cardinality of this association is many-to-many. A SAP may be provided by more than one SoftwareFeature. When multiple SoftwareFeatures are associated with a single SAP, it is assumed that these elements operate in conjunction to provide the AccessPoint. Note that any SoftwareFeature may provide more than one ServiceAccessPoint. 
If different implementations of a SAP exist, each of these implementations would result in individual instantiations of the ServiceAccessPoint object. These individual instantiations would then have their own associations to the unique implementations.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			UNIX_SoftwareFeatureSAPImplementation:


*/


/*
			 *** Methods ***

			CIM_Dependency:

			UNIX_SoftwareFeatureSAPImplementation:


*/

#ifndef __UNIX_SOFTWAREFEATURESAPIMPLEMENTATION_H
#define __UNIX_SOFTWAREFEATURESAPIMPLEMENTATION_H


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

#include "UNIX_SoftwareFeatureSAPImplementationDeps.h"




class UNIX_SoftwareFeatureSAPImplementation :
	public CIM_Dependency
{
public:

	UNIX_SoftwareFeatureSAPImplementation();
	~UNIX_SoftwareFeatureSAPImplementation();

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


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _antecedent;
	CIMInstance _dependent;


UNIX_ClusteringSAP _dependentClusteringSAP;
UNIX_ClusteringSAPProvider _dependentClusteringSAPProvider;
UNIX_CredentialManagementSAP _dependentCredentialManagementSAP;
UNIX_CredentialManagementSAPProvider _dependentCredentialManagementSAPProvider;
UNIX_USBRedirectionSAP _dependentUSBRedirectionSAP;
UNIX_USBRedirectionSAPProvider _dependentUSBRedirectionSAPProvider;
UNIX_IPNetworkConnection _dependentIPNetworkConnection;
UNIX_IPNetworkConnectionProvider _dependentIPNetworkConnectionProvider;
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
UNIX_KVMRedirectionSAP _dependentKVMRedirectionSAP;
UNIX_KVMRedirectionSAPProvider _dependentKVMRedirectionSAPProvider;
UNIX_DHCPProtocolEndpoint _dependentDHCPProtocolEndpoint;
UNIX_DHCPProtocolEndpointProvider _dependentDHCPProtocolEndpointProvider;
UNIX_SSHProtocolEndpoint _dependentSSHProtocolEndpoint;
UNIX_SSHProtocolEndpointProvider _dependentSSHProtocolEndpointProvider;
UNIX_SCSIProtocolEndpoint _dependentSCSIProtocolEndpoint;
UNIX_SCSIProtocolEndpointProvider _dependentSCSIProtocolEndpointProvider;
UNIX_iSCSIProtocolEndpoint _dependentiSCSIProtocolEndpoint;
UNIX_iSCSIProtocolEndpointProvider _dependentiSCSIProtocolEndpointProvider;
UNIX_CLPProtocolEndpoint _dependentCLPProtocolEndpoint;
UNIX_CLPProtocolEndpointProvider _dependentCLPProtocolEndpointProvider;
UNIX_IPXProtocolEndpoint _dependentIPXProtocolEndpoint;
UNIX_IPXProtocolEndpointProvider _dependentIPXProtocolEndpointProvider;
UNIX_IPsecSAEndpoint _dependentIPsecSAEndpoint;
UNIX_IPsecSAEndpointProvider _dependentIPsecSAEndpointProvider;
UNIX_IKESAEndpoint _dependentIKESAEndpoint;
UNIX_IKESAEndpointProvider _dependentIKESAEndpointProvider;
UNIX_LANEndpoint _dependentLANEndpoint;
UNIX_LANEndpointProvider _dependentLANEndpointProvider;
UNIX_WiFiEndpoint _dependentWiFiEndpoint;
UNIX_WiFiEndpointProvider _dependentWiFiEndpointProvider;
UNIX_MPLSProtocolEndpoint _dependentMPLSProtocolEndpoint;
UNIX_MPLSProtocolEndpointProvider _dependentMPLSProtocolEndpointProvider;
UNIX_WirelessLANEndpoint _dependentWirelessLANEndpoint;
UNIX_WirelessLANEndpointProvider _dependentWirelessLANEndpointProvider;
UNIX_UDPProtocolEndpoint _dependentUDPProtocolEndpoint;
UNIX_UDPProtocolEndpointProvider _dependentUDPProtocolEndpointProvider;
UNIX_TCPProtocolEndpoint _dependentTCPProtocolEndpoint;
UNIX_TCPProtocolEndpointProvider _dependentTCPProtocolEndpointProvider;
UNIX_OSPFVirtualInterface _dependentOSPFVirtualInterface;
UNIX_OSPFVirtualInterfaceProvider _dependentOSPFVirtualInterfaceProvider;
UNIX_OSPFProtocolEndpoint _dependentOSPFProtocolEndpoint;
UNIX_OSPFProtocolEndpointProvider _dependentOSPFProtocolEndpointProvider;
UNIX_VLANEndpoint _dependentVLANEndpoint;
UNIX_VLANEndpointProvider _dependentVLANEndpointProvider;
UNIX_LinkAggregator8023ad _dependentLinkAggregator8023ad;
UNIX_LinkAggregator8023adProvider _dependentLinkAggregator8023adProvider;
UNIX_ATAProtocolEndpoint _dependentATAProtocolEndpoint;
UNIX_ATAProtocolEndpointProvider _dependentATAProtocolEndpointProvider;
UNIX_IPEncapsulationInterface _dependentIPEncapsulationInterface;
UNIX_IPEncapsulationInterfaceProvider _dependentIPEncapsulationInterfaceProvider;
UNIX_IPSubinterface _dependentIPSubinterface;
UNIX_IPSubinterfaceProvider _dependentIPSubinterfaceProvider;
UNIX_SwitchVirtualInterface _dependentSwitchVirtualInterface;
UNIX_SwitchVirtualInterfaceProvider _dependentSwitchVirtualInterfaceProvider;
UNIX_IPLoopback _dependentIPLoopback;
UNIX_IPLoopbackProvider _dependentIPLoopbackProvider;
UNIX_BGPProtocolEndpoint _dependentBGPProtocolEndpoint;
UNIX_BGPProtocolEndpointProvider _dependentBGPProtocolEndpointProvider;
UNIX_SwitchPort _dependentSwitchPort;
UNIX_SwitchPortProvider _dependentSwitchPortProvider;
UNIX_DNSProtocolEndpoint _dependentDNSProtocolEndpoint;
UNIX_DNSProtocolEndpointProvider _dependentDNSProtocolEndpointProvider;
UNIX_LAGPort8023ad _dependentLAGPort8023ad;
UNIX_LAGPort8023adProvider _dependentLAGPort8023adProvider;
UNIX_BatchSAP _dependentBatchSAP;
UNIX_BatchSAPProvider _dependentBatchSAPProvider;
UNIX_TextRedirectionSAP _dependentTextRedirectionSAP;
UNIX_TextRedirectionSAPProvider _dependentTextRedirectionSAPProvider;
UNIX_MediaRedirectionSAP _dependentMediaRedirectionSAP;
UNIX_MediaRedirectionSAPProvider _dependentMediaRedirectionSAPProvider;
UNIX_PrintSAP _dependentPrintSAP;
UNIX_PrintSAPProvider _dependentPrintSAPProvider;
UNIX_ServiceAccessURI _dependentServiceAccessURI;
UNIX_ServiceAccessURIProvider _dependentServiceAccessURIProvider;
UNIX_ObjectManagerCommunicationMechanism _dependentObjectManagerCommunicationMechanism;
UNIX_ObjectManagerCommunicationMechanismProvider _dependentObjectManagerCommunicationMechanismProvider;
UNIX_CIMXMLCommunicationMechanism _dependentCIMXMLCommunicationMechanism;
UNIX_CIMXMLCommunicationMechanismProvider _dependentCIMXMLCommunicationMechanismProvider;
UNIX_VLAN _dependentVLAN;
UNIX_VLANProvider _dependentVLANProvider;
UNIX_BootSAP _dependentBootSAP;
UNIX_BootSAPProvider _dependentBootSAPProvider;

#	include "UNIX_SoftwareFeatureSAPImplementationPrivate.h"


};

#endif /* UNIX_SOFTWAREFEATURESAPIMPLEMENTATION */
