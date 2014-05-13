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
	$(ROOT)/src/Providers/UNIXProviders/AFService \
\
	$(ROOT)/src/Providers/UNIXProviders/EFService \
\
	$(ROOT)/src/Providers/UNIXProviders/FlowService \
\
	$(ROOT)/src/Providers/UNIXProviders/Hdr8021PService \
\
	$(ROOT)/src/Providers/UNIXProviders/PrecedenceService \
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




DIR = Providers/UNIXProviders/QoSConditioningSubService
include $(ROOT)/mak/config.mak
LIBRARY = UNIX_QoSConditioningSubServiceProvider
EXTRA_INCLUDES += -I/usr/local/include -I./..

DEFINES +=  -DPROVIDER_LIB_NS="UNIX_QoSConditioningSubServiceLib" -DPROVIDER_LIB_NS_BEGIN="namespace UNIX_QoSConditioningSubServiceLib {"

SOURCES = \
	../CIMHelper.cpp \
	UNIX_QoSConditioningSubService.cpp \
	UNIX_QoSConditioningSubServiceProvider.cpp \
	UNIX_QoSConditioningSubServiceMain.cpp

ifeq ($(OS), aix)
	SOURCES += UNIX_QoSConditioningSubService_AIX.cpp
endif
ifeq ($(OS), darwin)
	SOURCES += UNIX_QoSConditioningSubService_DARWIN.cpp
endif
ifeq ($(OS), freebsd)
	SOURCES += UNIX_QoSConditioningSubService_FREEBSD.cpp
endif
ifeq ($(OS), hpux)
	SOURCES += UNIX_QoSConditioningSubService_HPUX.cpp
endif
ifeq ($(OS), linux)
	SOURCES += UNIX_QoSConditioningSubService_LINUX.cpp
endif
ifeq ($(OS), solaris)
	SOURCES += UNIX_QoSConditioningSubService_SOLARIS.cpp
endif
ifeq ($(OS), tru64)
	SOURCES += UNIX_QoSConditioningSubService_TRU64.cpp
endif
ifeq ($(OS), vms)
	SOURCES += UNIX_QoSConditioningSubService_VMS.cpp
endif
ifeq ($(OS), win32)
	SOURCES += UNIX_QoSConditioningSubService_WIN32.cpp
endif
ifeq ($(OS), zos)
	SOURCES += UNIX_QoSConditioningSubService_ZOS.cpp
endif
ifeq (, $(filter aix,darwin,freebsd,hpux,linux,solaris,tru64,vms,win32,zos $(OS)))

else
	SOURCES += UNIX_QoSConditioningSubService_STUB.cpp
endif

LIBRARIES += \
	UNIX_AFServiceProvider\
	UNIX_EFServiceProvider\
	UNIX_FlowServiceProvider\
	UNIX_Hdr8021PServiceProvider\
	UNIX_PrecedenceServiceProvider\
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





