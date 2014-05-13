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
DIRS = 



DIR = Providers/UNIXProviders/RemoteReplicationCollection
include $(ROOT)/mak/config.mak
LIBRARY = UNIX_RemoteReplicationCollectionProvider
EXTRA_INCLUDES += -I/usr/local/include -I./..

DEFINES +=  -DPROVIDER_LIB_NS="UNIX_RemoteReplicationCollectionLib" -DPROVIDER_LIB_NS_BEGIN="namespace UNIX_RemoteReplicationCollectionLib {"

SOURCES = \
	../CIMHelper.cpp \
	UNIX_RemoteReplicationCollection.cpp \
	UNIX_RemoteReplicationCollectionProvider.cpp \
	UNIX_RemoteReplicationCollectionMain.cpp

ifeq ($(OS), aix)
	SOURCES += UNIX_RemoteReplicationCollection_AIX.cpp
endif
ifeq ($(OS), darwin)
	SOURCES += UNIX_RemoteReplicationCollection_DARWIN.cpp
endif
ifeq ($(OS), freebsd)
	SOURCES += UNIX_RemoteReplicationCollection_FREEBSD.cpp
endif
ifeq ($(OS), hpux)
	SOURCES += UNIX_RemoteReplicationCollection_HPUX.cpp
endif
ifeq ($(OS), linux)
	SOURCES += UNIX_RemoteReplicationCollection_LINUX.cpp
endif
ifeq ($(OS), solaris)
	SOURCES += UNIX_RemoteReplicationCollection_SOLARIS.cpp
endif
ifeq ($(OS), tru64)
	SOURCES += UNIX_RemoteReplicationCollection_TRU64.cpp
endif
ifeq ($(OS), vms)
	SOURCES += UNIX_RemoteReplicationCollection_VMS.cpp
endif
ifeq ($(OS), win32)
	SOURCES += UNIX_RemoteReplicationCollection_WIN32.cpp
endif
ifeq ($(OS), zos)
	SOURCES += UNIX_RemoteReplicationCollection_ZOS.cpp
endif
ifeq (, $(filter aix,darwin,freebsd,hpux,linux,solaris,tru64,vms,win32,zos $(OS)))

else
	SOURCES += UNIX_RemoteReplicationCollection_STUB.cpp
endif

LIBRARIES += 

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





