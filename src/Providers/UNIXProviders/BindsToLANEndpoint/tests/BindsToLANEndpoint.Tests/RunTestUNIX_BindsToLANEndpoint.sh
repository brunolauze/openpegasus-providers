#!/bin/sh

#//%LICENSE////////////////////////////////////////////////////////////////
#//
#// Licensed to The Open Group (TOG) under one or more contributor license
#// agreements.  Refer to the OpenPegasusNOTICE.txt file distributed with
#// this work for additional information regarding copyright ownership.
#// Each contributor licenses this file to you under the OpenPegasus Open
#// Source License; you may not use this file except in compliance with the
#// License.
#//
#// Permission is hereby granted, free of charge, to any person obtaining a
#// copy of this software and associated documentation files (the "Software"),
#// to deal in the Software without restriction, including without limitation
#// the rights to use, copy, modify, merge, publish, distribute, sublicense,
#// and/or sell copies of the Software, and to permit persons to whom the
#// Software is furnished to do so, subject to the following conditions:
#//
#// The above copyright notice and this permission notice shall be included
#// in all copies or substantial portions of the Software.
#//
#// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
#// OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
#// MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
#// IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
#// CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
#// TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
#// SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
#//
#//////////////////////////////////////////////////////////////////////////
#//
#//%/////////////////////////////////////////////////////////////////////////

cd bin/Debug && LD_LIBRARY_PATH=../../../../../BindsToLANEndpoint/bin/Debug:../../../../../BindsTo/bin/Debug:../../../../../LANEndpoint/bin/Debug:../../../../../ClusteringSAP/bin/Debug:../../../../../CredentialManagementSAP/bin/Debug:../../../../../USBRedirectionSAP/bin/Debug:../../../../../IPNetworkConnection/bin/Debug:../../../../../PolicyTransferServiceAccessPoint/bin/Debug:../../../../../LaunchInContextSAP/bin/Debug:../../../../../RemotePort/bin/Debug:../../../../../MPLSTunnelHop/bin/Debug:../../../../../SoftwareIdentityResource/bin/Debug:../../../../../KVMRedirectionSAP/bin/Debug:../../../../../DHCPProtocolEndpoint/bin/Debug:../../../../../SSHProtocolEndpoint/bin/Debug:../../../../../SCSIProtocolEndpoint/bin/Debug:../../../../../iSCSIProtocolEndpoint/bin/Debug:../../../../../CLPProtocolEndpoint/bin/Debug:../../../../../IPXProtocolEndpoint/bin/Debug:../../../../../IPsecSAEndpoint/bin/Debug:../../../../../IKESAEndpoint/bin/Debug:../../../../../WiFiEndpoint/bin/Debug:../../../../../MPLSProtocolEndpoint/bin/Debug:../../../../../WirelessLANEndpoint/bin/Debug:../../../../../UDPProtocolEndpoint/bin/Debug:../../../../../TCPProtocolEndpoint/bin/Debug:../../../../../OSPFVirtualInterface/bin/Debug:../../../../../OSPFProtocolEndpoint/bin/Debug:../../../../../VLANEndpoint/bin/Debug:../../../../../LinkAggregator8023ad/bin/Debug:../../../../../ATAProtocolEndpoint/bin/Debug:../../../../../IPEncapsulationInterface/bin/Debug:../../../../../IPSubinterface/bin/Debug:../../../../../SwitchVirtualInterface/bin/Debug:../../../../../IPLoopback/bin/Debug:../../../../../BGPProtocolEndpoint/bin/Debug:../../../../../SwitchPort/bin/Debug:../../../../../DNSProtocolEndpoint/bin/Debug:../../../../../LAGPort8023ad/bin/Debug:../../../../../BatchSAP/bin/Debug:../../../../../TextRedirectionSAP/bin/Debug:../../../../../MediaRedirectionSAP/bin/Debug:../../../../../PrintSAP/bin/Debug:../../../../../ServiceAccessURI/bin/Debug:../../../../../ObjectManagerCommunicationMechanism/bin/Debug:../../../../../CIMXMLCommunicationMechanism/bin/Debug:../../../../../VLAN/bin/Debug:../../../../../BootSAP/bin/Debug:/usr/local/lib/pegasus/lib:/usr/local/lib:/usr/lib:/lib ./TestUNIX_BindsToLANEndpoint
