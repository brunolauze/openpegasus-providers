//%LICENSE////////////////////////////////////////////////////////////////
//
// Licensed to The Open Group (TOG) under one or more contributor license
// agreements.  Refer to the OpenPegasusNOTICE.txt file distributed with
// this work for additional information regarding copyright ownership.
// Each contributor licenses this file to you under the OpenPegasus Open
// Source License; you may not use this file except in compliance with the
// License.
//
// Permission is hereby granted, free of charge, to any person obtaining a
// copy of this software and associated documentation files (the "Software"),
// to deal in the Software without restriction, including without limitation
// the rights to use, copy, modify, merge, publish, distribute, sublicense,
// and/or sell copies of the Software, and to permit persons to whom the
// Software is furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included
// in all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
// OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
// MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
// IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
// CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
// TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
// SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//
//////////////////////////////////////////////////////////////////////////
//
//%/////////////////////////////////////////////////////////////////////////

#include "UNIX_PolicyActivationService.h"

#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PolicyActivationService_HPUX.hxx"
#	include "UNIX_PolicyActivationService_HPUX.hpp"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PolicyActivationService_LINUX.hxx"
#	include "UNIX_PolicyActivationService_LINUX.hpp"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PolicyActivationService_DARWIN.hxx"
#	include "UNIX_PolicyActivationService_DARWIN.hpp"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PolicyActivationService_AIX.hxx"
#	include "UNIX_PolicyActivationService_AIX.hpp"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PolicyActivationService_FREEBSD.hxx"
#	include "UNIX_PolicyActivationService_FREEBSD.hpp"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PolicyActivationService_SOLARIS.hxx"
#	include "UNIX_PolicyActivationService_SOLARIS.hpp"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PolicyActivationService_ZOS.hxx"
#	include "UNIX_PolicyActivationService_ZOS.hpp"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PolicyActivationService_VMS.hxx"
#	include "UNIX_PolicyActivationService_VMS.hpp"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PolicyActivationService_TRU64.hxx"
#	include "UNIX_PolicyActivationService_TRU64.hpp"
#else
#	include "UNIX_PolicyActivationService_STUB.hxx"
#	include "UNIX_PolicyActivationService_STUB.hpp"
#endif


Boolean UNIX_PolicyActivationService::validateKey(CIMKeyBinding &kb) const
{

	/* Keys  */
	//SystemCreationClassName
	//SystemName
	//CreationClassName
	//Name

	CIMName name = kb.getName();
	if (name.equal(PROPERTY_SYSTEM_CREATION_CLASS_NAME) ||
			name.equal(PROPERTY_SYSTEM_NAME) ||
			name.equal(PROPERTY_CREATION_CLASS_NAME) ||
			name.equal(PROPERTY_NAME)
		)
			return true;

	return false;
}

void UNIX_PolicyActivationService::setScope(CIMName scope)
{
	currentScope = CIMName(scope.getString());
}

void UNIX_PolicyActivationService::setCIMOMHandle(CIMOMHandle &ch)
{
	_cimomHandle = ch;
}

