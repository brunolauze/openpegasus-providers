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
	$(ROOT)/src/Providers/UNIXProviders/LANEndpoint \
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
	$(ROOT)/src/Providers/UNIXProviders/TokenBucketMeterService \
\
	$(ROOT)/src/Providers/UNIXProviders/EWMAMeterService \
\
	$(ROOT)/src/Providers/UNIXProviders/AverageRateMeterService \
\
	$(ROOT)/src/Providers/UNIXProviders/ToSMarkerService \
\
	$(ROOT)/src/Providers/UNIXProviders/Priority8021QMarkerService \
\
	$(ROOT)/src/Providers/UNIXProviders/DSCPMarkerService \
\
	$(ROOT)/src/Providers/UNIXProviders/PreambleMarkerService \
\
	$(ROOT)/src/Providers/UNIXProviders/ClassifierService \
\
	$(ROOT)/src/Providers/UNIXProviders/ClassifierElement \
\
	$(ROOT)/src/Providers/UNIXProviders/PacketSchedulingService \
\
	$(ROOT)/src/Providers/UNIXProviders/NonWorkConservingSchedulingService \
\
	$(ROOT)/src/Providers/UNIXProviders/REDDropperService \
\
	$(ROOT)/src/Providers/UNIXProviders/HeadTailDropper \
\
	$(ROOT)/src/Providers/UNIXProviders/WeightedREDDropperService \
\
	$(ROOT)/src/Providers/UNIXProviders/QueuingService \




DIR = Providers/UNIXProviders/IngressConditioningServiceOnEndpoint
include $(ROOT)/mak/config.mak
LIBRARY = UNIX_IngressConditioningServiceOnEndpointProvider
EXTRA_INCLUDES += -I/usr/local/include -I./..

DEFINES +=  -DPROVIDER_LIB_NS="UNIX_IngressConditioningServiceOnEndpointLib" -DPROVIDER_LIB_NS_BEGIN="namespace UNIX_IngressConditioningServiceOnEndpointLib {"

SOURCES = \
	../CIMHelper.cpp \
	UNIX_IngressConditioningServiceOnEndpoint.cpp \
	UNIX_IngressConditioningServiceOnEndpointProvider.cpp \
	UNIX_IngressConditioningServiceOnEndpointMain.cpp

ifeq ($(OS), aix)
	SOURCES += UNIX_IngressConditioningServiceOnEndpoint_AIX.cpp
endif
ifeq ($(OS), darwin)
	SOURCES += UNIX_IngressConditioningServiceOnEndpoint_DARWIN.cpp
endif
ifeq ($(OS), freebsd)
	SOURCES += UNIX_IngressConditioningServiceOnEndpoint_FREEBSD.cpp
endif
ifeq ($(OS), hpux)
	SOURCES += UNIX_IngressConditioningServiceOnEndpoint_HPUX.cpp
endif
ifeq ($(OS), linux)
	SOURCES += UNIX_IngressConditioningServiceOnEndpoint_LINUX.cpp
endif
ifeq ($(OS), solaris)
	SOURCES += UNIX_IngressConditioningServiceOnEndpoint_SOLARIS.cpp
endif
ifeq ($(OS), tru64)
	SOURCES += UNIX_IngressConditioningServiceOnEndpoint_TRU64.cpp
endif
ifeq ($(OS), vms)
	SOURCES += UNIX_IngressConditioningServiceOnEndpoint_VMS.cpp
endif
ifeq ($(OS), win32)
	SOURCES += UNIX_IngressConditioningServiceOnEndpoint_WIN32.cpp
endif
ifeq ($(OS), zos)
	SOURCES += UNIX_IngressConditioningServiceOnEndpoint_ZOS.cpp
endif
ifeq (, $(filter aix,darwin,freebsd,hpux,linux,solaris,tru64,vms,win32,zos $(OS)))

else
	SOURCES += UNIX_IngressConditioningServiceOnEndpoint_STUB.cpp
endif

LIBRARIES += \
	UNIX_DHCPProtocolEndpointProvider\
	UNIX_SSHProtocolEndpointProvider\
	UNIX_SCSIProtocolEndpointProvider\
	UNIX_iSCSIProtocolEndpointProvider\
	UNIX_CLPProtocolEndpointProvider\
	UNIX_IPXProtocolEndpointProvider\
	UNIX_IPsecSAEndpointProvider\
	UNIX_IKESAEndpointProvider\
	UNIX_LANEndpointProvider\
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
	UNIX_TokenBucketMeterServiceProvider\
	UNIX_EWMAMeterServiceProvider\
	UNIX_AverageRateMeterServiceProvider\
	UNIX_ToSMarkerServiceProvider\
	UNIX_Priority8021QMarkerServiceProvider\
	UNIX_DSCPMarkerServiceProvider\
	UNIX_PreambleMarkerServiceProvider\
	UNIX_ClassifierServiceProvider\
	UNIX_ClassifierElementProvider\
	UNIX_PacketSchedulingServiceProvider\
	UNIX_NonWorkConservingSchedulingServiceProvider\
	UNIX_REDDropperServiceProvider\
	UNIX_HeadTailDropperProvider\
	UNIX_WeightedREDDropperServiceProvider\
	UNIX_QueuingServiceProvider

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





