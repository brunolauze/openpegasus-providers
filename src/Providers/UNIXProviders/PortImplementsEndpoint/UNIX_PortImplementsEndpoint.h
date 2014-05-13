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
CIM::Device::Ports
*/


/* **** Description *** */
/*
PortImplementsEndpoint associates a LogicalPort with one or more ProtocolEndpoints that are implemented on it. This class specializes the DeviceSAPImplementation association. It indicates that the referenced Endpoint is dependent on the operations of the Port Device.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			UNIX_DeviceSAPImplementation:

			UNIX_PortImplementsEndpoint:


*/


/*
			 *** Methods ***

			CIM_Dependency:

			UNIX_DeviceSAPImplementation:

			UNIX_PortImplementsEndpoint:


*/

#ifndef __UNIX_PORTIMPLEMENTSENDPOINT_H
#define __UNIX_PORTIMPLEMENTSENDPOINT_H


#include <DeviceSAPImplementation/UNIX_DeviceSAPImplementation.h>
#include <NetworkPort/UNIX_NetworkPortProvider.h>
#include <WiFiPort/UNIX_WiFiPortProvider.h>
#include <EthernetPort/UNIX_EthernetPortProvider.h>
#include <LLDPEthernetPort/UNIX_LLDPEthernetPortProvider.h>
#include <DataCenterEthernetPort/UNIX_DataCenterEthernetPortProvider.h>
#include <SASPort/UNIX_SASPortProvider.h>
#include <IBPort/UNIX_IBPortProvider.h>
#include <FCPort/UNIX_FCPortProvider.h>
#include <WirelessPort/UNIX_WirelessPortProvider.h>
#include <TokenRingPort/UNIX_TokenRingPortProvider.h>
#include <DAPort/UNIX_DAPortProvider.h>
#include <SerialPort/UNIX_SerialPortProvider.h>
#include <ATAPort/UNIX_ATAPortProvider.h>
#include <USBPort/UNIX_USBPortProvider.h>
#include <PCIPort/UNIX_PCIPortProvider.h>
#include <SPIPort/UNIX_SPIPortProvider.h>
#include <ParallelPort/UNIX_ParallelPortProvider.h>
#include <FibrePort/UNIX_FibrePortProvider.h>
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

#include "UNIX_PortImplementsEndpointDeps.h"




class UNIX_PortImplementsEndpoint :
	public UNIX_DeviceSAPImplementation
{
public:

	UNIX_PortImplementsEndpoint();
	~UNIX_PortImplementsEndpoint();

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

UNIX_NetworkPort _antecedentNetworkPort;
UNIX_NetworkPortProvider _antecedentNetworkPortProvider;
UNIX_WiFiPort _antecedentWiFiPort;
UNIX_WiFiPortProvider _antecedentWiFiPortProvider;
UNIX_EthernetPort _antecedentEthernetPort;
UNIX_EthernetPortProvider _antecedentEthernetPortProvider;
UNIX_LLDPEthernetPort _antecedentLLDPEthernetPort;
UNIX_LLDPEthernetPortProvider _antecedentLLDPEthernetPortProvider;
UNIX_DataCenterEthernetPort _antecedentDataCenterEthernetPort;
UNIX_DataCenterEthernetPortProvider _antecedentDataCenterEthernetPortProvider;
UNIX_SASPort _antecedentSASPort;
UNIX_SASPortProvider _antecedentSASPortProvider;
UNIX_IBPort _antecedentIBPort;
UNIX_IBPortProvider _antecedentIBPortProvider;
UNIX_FCPort _antecedentFCPort;
UNIX_FCPortProvider _antecedentFCPortProvider;
UNIX_WirelessPort _antecedentWirelessPort;
UNIX_WirelessPortProvider _antecedentWirelessPortProvider;
UNIX_TokenRingPort _antecedentTokenRingPort;
UNIX_TokenRingPortProvider _antecedentTokenRingPortProvider;
UNIX_DAPort _antecedentDAPort;
UNIX_DAPortProvider _antecedentDAPortProvider;
UNIX_SerialPort _antecedentSerialPort;
UNIX_SerialPortProvider _antecedentSerialPortProvider;
UNIX_ATAPort _antecedentATAPort;
UNIX_ATAPortProvider _antecedentATAPortProvider;
UNIX_USBPort _antecedentUSBPort;
UNIX_USBPortProvider _antecedentUSBPortProvider;
UNIX_PCIPort _antecedentPCIPort;
UNIX_PCIPortProvider _antecedentPCIPortProvider;
UNIX_SPIPort _antecedentSPIPort;
UNIX_SPIPortProvider _antecedentSPIPortProvider;
UNIX_ParallelPort _antecedentParallelPort;
UNIX_ParallelPortProvider _antecedentParallelPortProvider;
UNIX_FibrePort _antecedentFibrePort;
UNIX_FibrePortProvider _antecedentFibrePortProvider;

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

#	include "UNIX_PortImplementsEndpointPrivate.h"


};

#endif /* UNIX_PORTIMPLEMENTSENDPOINT */
