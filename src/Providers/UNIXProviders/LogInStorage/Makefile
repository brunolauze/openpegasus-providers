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
	$(ROOT)/src/Providers/UNIXProviders/LogicalDisk \
\
	$(ROOT)/src/Providers/UNIXProviders/Snapshot \
\
	$(ROOT)/src/Providers/UNIXProviders/VTOCDiskPartition \
\
	$(ROOT)/src/Providers/UNIXProviders/GPTDiskPartition \
\
	$(ROOT)/src/Providers/UNIXProviders/DiskPartition \
\
	$(ROOT)/src/Providers/UNIXProviders/TapePartition \
\
	$(ROOT)/src/Providers/UNIXProviders/CompositeExtent \
\
	$(ROOT)/src/Providers/UNIXProviders/ProtectedSpaceExtent \
\
	$(ROOT)/src/Providers/UNIXProviders/PhysicalExtent \
\
	$(ROOT)/src/Providers/UNIXProviders/DatabaseSegment \
\
	$(ROOT)/src/Providers/UNIXProviders/AggregatePExtent \
\
	$(ROOT)/src/Providers/UNIXProviders/VolumeSet \
\
	$(ROOT)/src/Providers/UNIXProviders/OpaqueManagementData \
\
	$(ROOT)/src/Providers/UNIXProviders/AggregatePSExtent \
\
	$(ROOT)/src/Providers/UNIXProviders/CacheMemory \
\
	$(ROOT)/src/Providers/UNIXProviders/VolatileStorage \
\
	$(ROOT)/src/Providers/UNIXProviders/NonVolatileStorage \
\
	$(ROOT)/src/Providers/UNIXProviders/MessageLog \




DIR = Providers/UNIXProviders/LogInStorage
include $(ROOT)/mak/config.mak
LIBRARY = UNIX_LogInStorageProvider
EXTRA_INCLUDES += -I/usr/local/include -I./..

DEFINES +=  -DPROVIDER_LIB_NS="UNIX_LogInStorageLib" -DPROVIDER_LIB_NS_BEGIN="namespace UNIX_LogInStorageLib {"

SOURCES = \
	../CIMHelper.cpp \
	UNIX_LogInStorage.cpp \
	UNIX_LogInStorageProvider.cpp \
	UNIX_LogInStorageMain.cpp

ifeq ($(OS), aix)
	SOURCES += UNIX_LogInStorage_AIX.cpp
endif
ifeq ($(OS), darwin)
	SOURCES += UNIX_LogInStorage_DARWIN.cpp
endif
ifeq ($(OS), freebsd)
	SOURCES += UNIX_LogInStorage_FREEBSD.cpp
endif
ifeq ($(OS), hpux)
	SOURCES += UNIX_LogInStorage_HPUX.cpp
endif
ifeq ($(OS), linux)
	SOURCES += UNIX_LogInStorage_LINUX.cpp
endif
ifeq ($(OS), solaris)
	SOURCES += UNIX_LogInStorage_SOLARIS.cpp
endif
ifeq ($(OS), tru64)
	SOURCES += UNIX_LogInStorage_TRU64.cpp
endif
ifeq ($(OS), vms)
	SOURCES += UNIX_LogInStorage_VMS.cpp
endif
ifeq ($(OS), win32)
	SOURCES += UNIX_LogInStorage_WIN32.cpp
endif
ifeq ($(OS), zos)
	SOURCES += UNIX_LogInStorage_ZOS.cpp
endif
ifeq (, $(filter aix,darwin,freebsd,hpux,linux,solaris,tru64,vms,win32,zos $(OS)))

else
	SOURCES += UNIX_LogInStorage_STUB.cpp
endif

LIBRARIES += \
	UNIX_LogicalDiskProvider\
	UNIX_SnapshotProvider\
	UNIX_VTOCDiskPartitionProvider\
	UNIX_GPTDiskPartitionProvider\
	UNIX_DiskPartitionProvider\
	UNIX_TapePartitionProvider\
	UNIX_CompositeExtentProvider\
	UNIX_ProtectedSpaceExtentProvider\
	UNIX_PhysicalExtentProvider\
	UNIX_DatabaseSegmentProvider\
	UNIX_AggregatePExtentProvider\
	UNIX_VolumeSetProvider\
	UNIX_OpaqueManagementDataProvider\
	UNIX_AggregatePSExtentProvider\
	UNIX_CacheMemoryProvider\
	UNIX_VolatileStorageProvider\
	UNIX_NonVolatileStorageProvider\
	UNIX_MessageLogProvider

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





