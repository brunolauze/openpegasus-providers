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
	$(ROOT)/src/Providers/UNIXProviders/ReusablePolicyContainer \
\
	$(ROOT)/src/Providers/UNIXProviders/PolicyRepository \
\
	$(ROOT)/src/Providers/UNIXProviders/AutonomousSystem \
\
	$(ROOT)/src/Providers/UNIXProviders/RoutingProtocolDomain \
\
	$(ROOT)/src/Providers/UNIXProviders/OSPFArea \
\
	$(ROOT)/src/Providers/UNIXProviders/Network \
\
	$(ROOT)/src/Providers/UNIXProviders/VLANNetwork \
\
	$(ROOT)/src/Providers/UNIXProviders/TierDomain \
\
	$(ROOT)/src/Providers/UNIXProviders/AdministrativeDistance \




DIR = Providers/UNIXProviders/HostedAdminDistance
include $(ROOT)/mak/config.mak
LIBRARY = UNIX_HostedAdminDistanceProvider
EXTRA_INCLUDES += -I/usr/local/include -I./..

DEFINES +=  -DPROVIDER_LIB_NS="UNIX_HostedAdminDistanceLib" -DPROVIDER_LIB_NS_BEGIN="namespace UNIX_HostedAdminDistanceLib {"

SOURCES = \
	../CIMHelper.cpp \
	UNIX_HostedAdminDistance.cpp \
	UNIX_HostedAdminDistanceProvider.cpp \
	UNIX_HostedAdminDistanceMain.cpp

ifeq ($(OS), aix)
	SOURCES += UNIX_HostedAdminDistance_AIX.cpp
endif
ifeq ($(OS), darwin)
	SOURCES += UNIX_HostedAdminDistance_DARWIN.cpp
endif
ifeq ($(OS), freebsd)
	SOURCES += UNIX_HostedAdminDistance_FREEBSD.cpp
endif
ifeq ($(OS), hpux)
	SOURCES += UNIX_HostedAdminDistance_HPUX.cpp
endif
ifeq ($(OS), linux)
	SOURCES += UNIX_HostedAdminDistance_LINUX.cpp
endif
ifeq ($(OS), solaris)
	SOURCES += UNIX_HostedAdminDistance_SOLARIS.cpp
endif
ifeq ($(OS), tru64)
	SOURCES += UNIX_HostedAdminDistance_TRU64.cpp
endif
ifeq ($(OS), vms)
	SOURCES += UNIX_HostedAdminDistance_VMS.cpp
endif
ifeq ($(OS), win32)
	SOURCES += UNIX_HostedAdminDistance_WIN32.cpp
endif
ifeq ($(OS), zos)
	SOURCES += UNIX_HostedAdminDistance_ZOS.cpp
endif
ifeq (, $(filter aix,darwin,freebsd,hpux,linux,solaris,tru64,vms,win32,zos $(OS)))

else
	SOURCES += UNIX_HostedAdminDistance_STUB.cpp
endif

LIBRARIES += \
	UNIX_ReusablePolicyContainerProvider\
	UNIX_PolicyRepositoryProvider\
	UNIX_AutonomousSystemProvider\
	UNIX_RoutingProtocolDomainProvider\
	UNIX_OSPFAreaProvider\
	UNIX_NetworkProvider\
	UNIX_VLANNetworkProvider\
	UNIX_TierDomainProvider\
	UNIX_AdministrativeDistanceProvider

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





