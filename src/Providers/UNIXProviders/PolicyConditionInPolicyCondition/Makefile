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
	$(ROOT)/src/Providers/UNIXProviders/CompoundPolicyCondition \
\
	$(ROOT)/src/Providers/UNIXProviders/PacketFilterCondition \
\
	$(ROOT)/src/Providers/UNIXProviders/QueryCondition \
\
	$(ROOT)/src/Providers/UNIXProviders/DocumentAuthentication \
\
	$(ROOT)/src/Providers/UNIXProviders/NetworkingIDAuthentication \
\
	$(ROOT)/src/Providers/UNIXProviders/KerberosAuthentication \
\
	$(ROOT)/src/Providers/UNIXProviders/BiometricAuthentication \
\
	$(ROOT)/src/Providers/UNIXProviders/PublicPrivateKeyAuthentication \
\
	$(ROOT)/src/Providers/UNIXProviders/PhysicalCredentialAuthentication \
\
	$(ROOT)/src/Providers/UNIXProviders/SharedSecretAuthentication \
\
	$(ROOT)/src/Providers/UNIXProviders/AccountAuthentication \
\
	$(ROOT)/src/Providers/UNIXProviders/PolicyTimePeriodCondition \
\
	$(ROOT)/src/Providers/UNIXProviders/VendorPolicyCondition \




DIR = Providers/UNIXProviders/PolicyConditionInPolicyCondition
include $(ROOT)/mak/config.mak
LIBRARY = UNIX_PolicyConditionInPolicyConditionProvider
EXTRA_INCLUDES += -I/usr/local/include -I./..

DEFINES +=  -DPROVIDER_LIB_NS="UNIX_PolicyConditionInPolicyConditionLib" -DPROVIDER_LIB_NS_BEGIN="namespace UNIX_PolicyConditionInPolicyConditionLib {"

SOURCES = \
	../CIMHelper.cpp \
	UNIX_PolicyConditionInPolicyCondition.cpp \
	UNIX_PolicyConditionInPolicyConditionProvider.cpp \
	UNIX_PolicyConditionInPolicyConditionMain.cpp

ifeq ($(OS), aix)
	SOURCES += UNIX_PolicyConditionInPolicyCondition_AIX.cpp
endif
ifeq ($(OS), darwin)
	SOURCES += UNIX_PolicyConditionInPolicyCondition_DARWIN.cpp
endif
ifeq ($(OS), freebsd)
	SOURCES += UNIX_PolicyConditionInPolicyCondition_FREEBSD.cpp
endif
ifeq ($(OS), hpux)
	SOURCES += UNIX_PolicyConditionInPolicyCondition_HPUX.cpp
endif
ifeq ($(OS), linux)
	SOURCES += UNIX_PolicyConditionInPolicyCondition_LINUX.cpp
endif
ifeq ($(OS), solaris)
	SOURCES += UNIX_PolicyConditionInPolicyCondition_SOLARIS.cpp
endif
ifeq ($(OS), tru64)
	SOURCES += UNIX_PolicyConditionInPolicyCondition_TRU64.cpp
endif
ifeq ($(OS), vms)
	SOURCES += UNIX_PolicyConditionInPolicyCondition_VMS.cpp
endif
ifeq ($(OS), win32)
	SOURCES += UNIX_PolicyConditionInPolicyCondition_WIN32.cpp
endif
ifeq ($(OS), zos)
	SOURCES += UNIX_PolicyConditionInPolicyCondition_ZOS.cpp
endif
ifeq (, $(filter aix,darwin,freebsd,hpux,linux,solaris,tru64,vms,win32,zos $(OS)))

else
	SOURCES += UNIX_PolicyConditionInPolicyCondition_STUB.cpp
endif

LIBRARIES += \
	UNIX_CompoundPolicyConditionProvider\
	UNIX_PacketFilterConditionProvider\
	UNIX_QueryConditionProvider\
	UNIX_DocumentAuthenticationProvider\
	UNIX_NetworkingIDAuthenticationProvider\
	UNIX_KerberosAuthenticationProvider\
	UNIX_BiometricAuthenticationProvider\
	UNIX_PublicPrivateKeyAuthenticationProvider\
	UNIX_PhysicalCredentialAuthenticationProvider\
	UNIX_SharedSecretAuthenticationProvider\
	UNIX_AccountAuthenticationProvider\
	UNIX_PolicyTimePeriodConditionProvider\
	UNIX_VendorPolicyConditionProvider

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





