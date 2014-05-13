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
	$(ROOT)/src/Providers/UNIXProviders/PhysicalLink \
\
	$(ROOT)/src/Providers/UNIXProviders/PhysicalMedia \
\
	$(ROOT)/src/Providers/UNIXProviders/PhysicalTape \
\
	$(ROOT)/src/Providers/UNIXProviders/Chip \
\
	$(ROOT)/src/Providers/UNIXProviders/PhysicalMemory \
\
	$(ROOT)/src/Providers/UNIXProviders/PhysicalConnector \
\
	$(ROOT)/src/Providers/UNIXProviders/Slot \
\
	$(ROOT)/src/Providers/UNIXProviders/Card \
\
	$(ROOT)/src/Providers/UNIXProviders/SystemBusCard \
\
	$(ROOT)/src/Providers/UNIXProviders/Chassis \
\
	$(ROOT)/src/Providers/UNIXProviders/Rack \
\
	$(ROOT)/src/Providers/UNIXProviders/PackageLocation \
\
	$(ROOT)/src/Providers/UNIXProviders/StorageMediaLocation \
\
	$(ROOT)/src/Providers/UNIXProviders/Magazine \
\
	$(ROOT)/src/Providers/UNIXProviders/ComponentBay \




DIR = Providers/UNIXProviders/ElementsLinked
include $(ROOT)/mak/config.mak
LIBRARY = UNIX_ElementsLinkedProvider
EXTRA_INCLUDES += -I/usr/local/include -I./..

DEFINES +=  -DPROVIDER_LIB_NS="UNIX_ElementsLinkedLib" -DPROVIDER_LIB_NS_BEGIN="namespace UNIX_ElementsLinkedLib {"

SOURCES = \
	../CIMHelper.cpp \
	UNIX_ElementsLinked.cpp \
	UNIX_ElementsLinkedProvider.cpp \
	UNIX_ElementsLinkedMain.cpp

ifeq ($(OS), aix)
	SOURCES += UNIX_ElementsLinked_AIX.cpp
endif
ifeq ($(OS), darwin)
	SOURCES += UNIX_ElementsLinked_DARWIN.cpp
endif
ifeq ($(OS), freebsd)
	SOURCES += UNIX_ElementsLinked_FREEBSD.cpp
endif
ifeq ($(OS), hpux)
	SOURCES += UNIX_ElementsLinked_HPUX.cpp
endif
ifeq ($(OS), linux)
	SOURCES += UNIX_ElementsLinked_LINUX.cpp
endif
ifeq ($(OS), solaris)
	SOURCES += UNIX_ElementsLinked_SOLARIS.cpp
endif
ifeq ($(OS), tru64)
	SOURCES += UNIX_ElementsLinked_TRU64.cpp
endif
ifeq ($(OS), vms)
	SOURCES += UNIX_ElementsLinked_VMS.cpp
endif
ifeq ($(OS), win32)
	SOURCES += UNIX_ElementsLinked_WIN32.cpp
endif
ifeq ($(OS), zos)
	SOURCES += UNIX_ElementsLinked_ZOS.cpp
endif
ifeq (, $(filter aix,darwin,freebsd,hpux,linux,solaris,tru64,vms,win32,zos $(OS)))

else
	SOURCES += UNIX_ElementsLinked_STUB.cpp
endif

LIBRARIES += \
	UNIX_PhysicalLinkProvider\
	UNIX_PhysicalMediaProvider\
	UNIX_PhysicalTapeProvider\
	UNIX_ChipProvider\
	UNIX_PhysicalMemoryProvider\
	UNIX_PhysicalConnectorProvider\
	UNIX_SlotProvider\
	UNIX_CardProvider\
	UNIX_SystemBusCardProvider\
	UNIX_ChassisProvider\
	UNIX_RackProvider\
	UNIX_PackageLocationProvider\
	UNIX_StorageMediaLocationProvider\
	UNIX_MagazineProvider\
	UNIX_ComponentBayProvider

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





