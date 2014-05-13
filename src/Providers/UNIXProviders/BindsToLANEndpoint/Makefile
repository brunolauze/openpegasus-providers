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


ROOT = ../../../..
DIRS = \
	$(ROOT)/src/Providers/UNIXProviders/BindsTo \
\
	$(ROOT)/src/Providers/UNIXProviders/LANEndpoint \
\
	$(ROOT)/src/Providers/UNIXProviders/ClusteringSAP \
\
	$(ROOT)/src/Providers/UNIXProviders/CredentialManagementSAP \
\
	$(ROOT)/src/Providers/UNIXProviders/USBRedirectionSAP \
\
	$(ROOT)/src/Providers/UNIXProviders/IPNetworkConnection \
\
	$(ROOT)/src/Providers/UNIXProviders/PolicyTransferServiceAccessPoint \
\
	$(ROOT)/src/Providers/UNIXProviders/LaunchInContextSAP \
\
	$(ROOT)/src/Providers/UNIXProviders/RemotePort \
\
	$(ROOT)/src/Providers/UNIXProviders/MPLSTunnelHop \
\
	$(ROOT)/src/Providers/UNIXProviders/SoftwareIdentityResource \
\
	$(ROOT)/src/Providers/UNIXProviders/KVMRedirectionSAP \
\
	$(ROOT)/src/Providers/UNIXProviders/DHCPProtocolEndpoint \
\
	$(ROOT)/src/Providers/UNIXProviders/SSHProtocolEndpoint \
\
	$(ROOT)/src/Providers/UNIXProviders/SCSIProtocolEndpoint \
\
	$(ROOT)/src/Providers/UNIXProviders/iSCSIProtocolEndpoint \
\
	$(ROOT)/src/Providers/UNIXProviders/CLPProtocolEndpoint \
\
	$(ROOT)/src/Providers/UNIXProviders/IPXProtocolEndpoint \
\
	$(ROOT)/src/Providers/UNIXProviders/IPsecSAEndpoint \
\
	$(ROOT)/src/Providers/UNIXProviders/IKESAEndpoint \
\
	$(ROOT)/src/Providers/UNIXProviders/WiFiEndpoint \
\
	$(ROOT)/src/Providers/UNIXProviders/MPLSProtocolEndpoint \
\
	$(ROOT)/src/Providers/UNIXProviders/WirelessLANEndpoint \
\
	$(ROOT)/src/Providers/UNIXProviders/UDPProtocolEndpoint \
\
	$(ROOT)/src/Providers/UNIXProviders/TCPProtocolEndpoint \
\
	$(ROOT)/src/Providers/UNIXProviders/OSPFVirtualInterface \
\
	$(ROOT)/src/Providers/UNIXProviders/OSPFProtocolEndpoint \
\
	$(ROOT)/src/Providers/UNIXProviders/VLANEndpoint \
\
	$(ROOT)/src/Providers/UNIXProviders/LinkAggregator8023ad \
\
	$(ROOT)/src/Providers/UNIXProviders/ATAProtocolEndpoint \
\
	$(ROOT)/src/Providers/UNIXProviders/IPEncapsulationInterface \
\
	$(ROOT)/src/Providers/UNIXProviders/IPSubinterface \
\
	$(ROOT)/src/Providers/UNIXProviders/SwitchVirtualInterface \
\
	$(ROOT)/src/Providers/UNIXProviders/IPLoopback \
\
	$(ROOT)/src/Providers/UNIXProviders/BGPProtocolEndpoint \
\
	$(ROOT)/src/Providers/UNIXProviders/SwitchPort \
\
	$(ROOT)/src/Providers/UNIXProviders/DNSProtocolEndpoint \
\
	$(ROOT)/src/Providers/UNIXProviders/LAGPort8023ad \
\
	$(ROOT)/src/Providers/UNIXProviders/BatchSAP \
\
	$(ROOT)/src/Providers/UNIXProviders/TextRedirectionSAP \
\
	$(ROOT)/src/Providers/UNIXProviders/MediaRedirectionSAP \
\
	$(ROOT)/src/Providers/UNIXProviders/PrintSAP \
\
	$(ROOT)/src/Providers/UNIXProviders/ServiceAccessURI \
\
	$(ROOT)/src/Providers/UNIXProviders/ObjectManagerCommunicationMechanism \
\
	$(ROOT)/src/Providers/UNIXProviders/CIMXMLCommunicationMechanism \
\
	$(ROOT)/src/Providers/UNIXProviders/VLAN \
\
	$(ROOT)/src/Providers/UNIXProviders/BootSAP \




DIR = Providers/UNIXProviders/BindsToLANEndpoint
include $(ROOT)/mak/config.mak
LIBRARY = UNIX_BindsToLANEndpointProvider
EXTRA_INCLUDES += -I/usr/local/include -I./..

DEFINES +=  -DPROVIDER_LIB_NS="UNIX_BindsToLANEndpointLib" -DPROVIDER_LIB_NS_BEGIN="namespace UNIX_BindsToLANEndpointLib {"

SOURCES = \
	../CIMHelper.cpp \
	UNIX_BindsToLANEndpoint.cpp \
	UNIX_BindsToLANEndpointProvider.cpp \
	UNIX_BindsToLANEndpointMain.cpp

ifeq ($(OS), aix)
	SOURCES += UNIX_BindsToLANEndpoint_AIX.cpp
endif
ifeq ($(OS), darwin)
	SOURCES += UNIX_BindsToLANEndpoint_DARWIN.cpp
endif
ifeq ($(OS), freebsd)
	SOURCES += UNIX_BindsToLANEndpoint_FREEBSD.cpp
endif
ifeq ($(OS), hpux)
	SOURCES += UNIX_BindsToLANEndpoint_HPUX.cpp
endif
ifeq ($(OS), linux)
	SOURCES += UNIX_BindsToLANEndpoint_LINUX.cpp
endif
ifeq ($(OS), solaris)
	SOURCES += UNIX_BindsToLANEndpoint_SOLARIS.cpp
endif
ifeq ($(OS), tru64)
	SOURCES += UNIX_BindsToLANEndpoint_TRU64.cpp
endif
ifeq ($(OS), vms)
	SOURCES += UNIX_BindsToLANEndpoint_VMS.cpp
endif
ifeq ($(OS), win32)
	SOURCES += UNIX_BindsToLANEndpoint_WIN32.cpp
endif
ifeq ($(OS), zos)
	SOURCES += UNIX_BindsToLANEndpoint_ZOS.cpp
endif
ifeq (, $(filter aix,darwin,freebsd,hpux,linux,solaris,tru64,vms,win32,zos $(OS)))

else
	SOURCES += UNIX_BindsToLANEndpoint_STUB.cpp
endif

LIBRARIES += \
	UNIX_BindsToProvider\
	UNIX_LANEndpointProvider\
	UNIX_ClusteringSAPProvider\
	UNIX_CredentialManagementSAPProvider\
	UNIX_USBRedirectionSAPProvider\
	UNIX_IPNetworkConnectionProvider\
	UNIX_PolicyTransferServiceAccessPointProvider\
	UNIX_LaunchInContextSAPProvider\
	UNIX_RemotePortProvider\
	UNIX_MPLSTunnelHopProvider\
	UNIX_SoftwareIdentityResourceProvider\
	UNIX_KVMRedirectionSAPProvider\
	UNIX_DHCPProtocolEndpointProvider\
	UNIX_SSHProtocolEndpointProvider\
	UNIX_SCSIProtocolEndpointProvider\
	UNIX_iSCSIProtocolEndpointProvider\
	UNIX_CLPProtocolEndpointProvider\
	UNIX_IPXProtocolEndpointProvider\
	UNIX_IPsecSAEndpointProvider\
	UNIX_IKESAEndpointProvider\
	UNIX_WiFiEndpointProvider\
	UNIX_MPLSProtocolEndpointProvider\
	UNIX_WirelessLANEndpointProvider\
	UNIX_UDPProtocolEndpointProvider\
	UNIX_TCPProtocolEndpointProvider\
	UNIX_OSPFVirtualInterfaceProvider\
	UNIX_OSPFProtocolEndpointProvider\
	UNIX_VLANEndpointProvider\
	UNIX_LinkAggregator8023adProvider\
	UNIX_ATAProtocolEndpointProvider\
	UNIX_IPEncapsulationInterfaceProvider\
	UNIX_IPSubinterfaceProvider\
	UNIX_SwitchVirtualInterfaceProvider\
	UNIX_IPLoopbackProvider\
	UNIX_BGPProtocolEndpointProvider\
	UNIX_SwitchPortProvider\
	UNIX_DNSProtocolEndpointProvider\
	UNIX_LAGPort8023adProvider\
	UNIX_BatchSAPProvider\
	UNIX_TextRedirectionSAPProvider\
	UNIX_MediaRedirectionSAPProvider\
	UNIX_PrintSAPProvider\
	UNIX_ServiceAccessURIProvider\
	UNIX_ObjectManagerCommunicationMechanismProvider\
	UNIX_CIMXMLCommunicationMechanismProvider\
	UNIX_VLANProvider\
	UNIX_BootSAPProvider

EXTRA_LIBRARIES = \
	-lpegprovider \
	-lpegclient \
	-lpegcommon \
	-lpegquerycommon \
	-lpegqueryexpression \
	-lpegcql \
	-lpegwql \
	-lpthread \
	-lutil \
	-lkvm

include $(ROOT)/mak/dynamic-library.mak





