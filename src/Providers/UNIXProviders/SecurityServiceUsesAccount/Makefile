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
	$(ROOT)/src/Providers/UNIXProviders/Account \
\
	$(ROOT)/src/Providers/UNIXProviders/AccountManagementService \
\
	$(ROOT)/src/Providers/UNIXProviders/VerificationService \
\
	$(ROOT)/src/Providers/UNIXProviders/CertificateAuthority \
\
	$(ROOT)/src/Providers/UNIXProviders/Notary \
\
	$(ROOT)/src/Providers/UNIXProviders/KeyBasedCredentialManagementService \
\
	$(ROOT)/src/Providers/UNIXProviders/CertificateManagementService \
\
	$(ROOT)/src/Providers/UNIXProviders/KerberosKeyDistributionCenter \
\
	$(ROOT)/src/Providers/UNIXProviders/PublicKeyManagementService \
\
	$(ROOT)/src/Providers/UNIXProviders/SharedSecretService \
\
	$(ROOT)/src/Providers/UNIXProviders/IdentityManagementService \
\
	$(ROOT)/src/Providers/UNIXProviders/StorageHardwareIDManagementService \
\
	$(ROOT)/src/Providers/UNIXProviders/AuthorizationService \
\
	$(ROOT)/src/Providers/UNIXProviders/PrivilegeManagementService \
\
	$(ROOT)/src/Providers/UNIXProviders/RoleBasedAuthorizationService \
\
	$(ROOT)/src/Providers/UNIXProviders/AccessControlService \




DIR = Providers/UNIXProviders/SecurityServiceUsesAccount
include $(ROOT)/mak/config.mak
LIBRARY = UNIX_SecurityServiceUsesAccountProvider
EXTRA_INCLUDES += -I/usr/local/include -I./..

DEFINES +=  -DPROVIDER_LIB_NS="UNIX_SecurityServiceUsesAccountLib" -DPROVIDER_LIB_NS_BEGIN="namespace UNIX_SecurityServiceUsesAccountLib {"

SOURCES = \
	../CIMHelper.cpp \
	UNIX_SecurityServiceUsesAccount.cpp \
	UNIX_SecurityServiceUsesAccountProvider.cpp \
	UNIX_SecurityServiceUsesAccountMain.cpp

ifeq ($(OS), aix)
	SOURCES += UNIX_SecurityServiceUsesAccount_AIX.cpp
endif
ifeq ($(OS), darwin)
	SOURCES += UNIX_SecurityServiceUsesAccount_DARWIN.cpp
endif
ifeq ($(OS), freebsd)
	SOURCES += UNIX_SecurityServiceUsesAccount_FREEBSD.cpp
endif
ifeq ($(OS), hpux)
	SOURCES += UNIX_SecurityServiceUsesAccount_HPUX.cpp
endif
ifeq ($(OS), linux)
	SOURCES += UNIX_SecurityServiceUsesAccount_LINUX.cpp
endif
ifeq ($(OS), solaris)
	SOURCES += UNIX_SecurityServiceUsesAccount_SOLARIS.cpp
endif
ifeq ($(OS), tru64)
	SOURCES += UNIX_SecurityServiceUsesAccount_TRU64.cpp
endif
ifeq ($(OS), vms)
	SOURCES += UNIX_SecurityServiceUsesAccount_VMS.cpp
endif
ifeq ($(OS), win32)
	SOURCES += UNIX_SecurityServiceUsesAccount_WIN32.cpp
endif
ifeq ($(OS), zos)
	SOURCES += UNIX_SecurityServiceUsesAccount_ZOS.cpp
endif
ifeq (, $(filter aix,darwin,freebsd,hpux,linux,solaris,tru64,vms,win32,zos $(OS)))

else
	SOURCES += UNIX_SecurityServiceUsesAccount_STUB.cpp
endif

LIBRARIES += \
	UNIX_AccountProvider\
	UNIX_AccountManagementServiceProvider\
	UNIX_VerificationServiceProvider\
	UNIX_CertificateAuthorityProvider\
	UNIX_NotaryProvider\
	UNIX_KeyBasedCredentialManagementServiceProvider\
	UNIX_CertificateManagementServiceProvider\
	UNIX_KerberosKeyDistributionCenterProvider\
	UNIX_PublicKeyManagementServiceProvider\
	UNIX_SharedSecretServiceProvider\
	UNIX_IdentityManagementServiceProvider\
	UNIX_StorageHardwareIDManagementServiceProvider\
	UNIX_AuthorizationServiceProvider\
	UNIX_PrivilegeManagementServiceProvider\
	UNIX_RoleBasedAuthorizationServiceProvider\
	UNIX_AccessControlServiceProvider

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





