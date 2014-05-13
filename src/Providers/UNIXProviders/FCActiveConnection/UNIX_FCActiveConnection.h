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
2.23.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::FC
*/


/* **** Description *** */
/*
This association specializes ActiveConnection to represent the connections between two Fibre Channel ProtocolEndpoints. The ActiveConnection can be an ISL, a Host to Switch Link, a Switch to Device Link, or a connection created
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

			UNIX_FCActiveConnection:
				Discriminator UInt16


*/


/*
			 *** Methods ***

			CIM_Dependency:

			CIM_SAPSAPDependency:

			CIM_ActiveConnection:

			UNIX_FCActiveConnection:


*/

#ifndef __UNIX_FCACTIVECONNECTION_H
#define __UNIX_FCACTIVECONNECTION_H


#include "CIM_ActiveConnection.h"
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

#include "UNIX_FCActiveConnectionDeps.h"


#ifndef PROPERTY_DISCRIMINATOR
#define PROPERTY_DISCRIMINATOR \
					"Discriminator"
#endif



class UNIX_FCActiveConnection :
	public CIM_ActiveConnection
{
public:

	UNIX_FCActiveConnection();
	~UNIX_FCActiveConnection();

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
	virtual Boolean getDiscriminator(CIMProperty&) const;
	virtual Array<Uint16> getDiscriminator() const;
	virtual void setDiscriminator(Array<Uint16>&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _antecedent;
	CIMInstance _dependent;
	Uint16 _trafficType;
	String _otherTrafficDescription;
	Boolean _isUnidirectional;
	Array<Uint16> _discriminator;

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

#	include "UNIX_FCActiveConnectionPrivate.h"


};

#endif /* UNIX_FCACTIVECONNECTION */
