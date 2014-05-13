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
	$(ROOT)/src/Providers/UNIXProviders/StoragePoolView \
\
	$(ROOT)/src/Providers/UNIXProviders/PhysicalComputerSystemView \
\
	$(ROOT)/src/Providers/UNIXProviders/MappingProtocolControllerView \
\
	$(ROOT)/src/Providers/UNIXProviders/VolumeView \
\
	$(ROOT)/src/Providers/UNIXProviders/DiskDriveView \
\
	$(ROOT)/src/Providers/UNIXProviders/ReplicaPairView \




DIR = Providers/UNIXProviders/AllocatedFromStoragePoolViewView
include $(ROOT)/mak/config.mak
LIBRARY = UNIX_AllocatedFromStoragePoolViewViewProvider
EXTRA_INCLUDES += -I/usr/local/include -I./..

DEFINES +=  -DPROVIDER_LIB_NS="UNIX_AllocatedFromStoragePoolViewViewLib" -DPROVIDER_LIB_NS_BEGIN="namespace UNIX_AllocatedFromStoragePoolViewViewLib {"

SOURCES = \
	../CIMHelper.cpp \
	UNIX_AllocatedFromStoragePoolViewView.cpp \
	UNIX_AllocatedFromStoragePoolViewViewProvider.cpp \
	UNIX_AllocatedFromStoragePoolViewViewMain.cpp

ifeq ($(OS), aix)
	SOURCES += UNIX_AllocatedFromStoragePoolViewView_AIX.cpp
endif
ifeq ($(OS), darwin)
	SOURCES += UNIX_AllocatedFromStoragePoolViewView_DARWIN.cpp
endif
ifeq ($(OS), freebsd)
	SOURCES += UNIX_AllocatedFromStoragePoolViewView_FREEBSD.cpp
endif
ifeq ($(OS), hpux)
	SOURCES += UNIX_AllocatedFromStoragePoolViewView_HPUX.cpp
endif
ifeq ($(OS), linux)
	SOURCES += UNIX_AllocatedFromStoragePoolViewView_LINUX.cpp
endif
ifeq ($(OS), solaris)
	SOURCES += UNIX_AllocatedFromStoragePoolViewView_SOLARIS.cpp
endif
ifeq ($(OS), tru64)
	SOURCES += UNIX_AllocatedFromStoragePoolViewView_TRU64.cpp
endif
ifeq ($(OS), vms)
	SOURCES += UNIX_AllocatedFromStoragePoolViewView_VMS.cpp
endif
ifeq ($(OS), win32)
	SOURCES += UNIX_AllocatedFromStoragePoolViewView_WIN32.cpp
endif
ifeq ($(OS), zos)
	SOURCES += UNIX_AllocatedFromStoragePoolViewView_ZOS.cpp
endif
ifeq (, $(filter aix,darwin,freebsd,hpux,linux,solaris,tru64,vms,win32,zos $(OS)))

else
	SOURCES += UNIX_AllocatedFromStoragePoolViewView_STUB.cpp
endif

LIBRARIES += \
	UNIX_StoragePoolViewProvider\
	UNIX_PhysicalComputerSystemViewProvider\
	UNIX_MappingProtocolControllerViewProvider\
	UNIX_VolumeViewProvider\
	UNIX_DiskDriveViewProvider\
	UNIX_ReplicaPairViewProvider

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





