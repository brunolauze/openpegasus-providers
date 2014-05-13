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


/* **** Association *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.6.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Interop
*/


/* **** Description *** */
/*
SystemInNamespace is an association that allows enumeration of the system(s) represented in a Namespace.
*/


/*
			 *** Properties ***

			UNIX_SystemInNamespace:
				ManagedNamespace Reference
				Identification Reference
				ScopeOfContainedData UInt16
				DescriptionOfContainedData String


*/


/*
			 *** Methods ***

			UNIX_SystemInNamespace:


*/

#ifndef __UNIX_SYSTEMINNAMESPACE_H
#define __UNIX_SYSTEMINNAMESPACE_H


#include "CIM_ClassBase.h"

#include "UNIX_SystemInNamespaceDeps.h"


#ifndef PROPERTY_MANAGED_NAMESPACE
#define PROPERTY_MANAGED_NAMESPACE \
					"ManagedNamespace"
#endif

#ifndef PROPERTY_IDENTIFICATION
#define PROPERTY_IDENTIFICATION \
					"Identification"
#endif

#ifndef PROPERTY_SCOPE_OF_CONTAINED_DATA
#define PROPERTY_SCOPE_OF_CONTAINED_DATA \
					"ScopeOfContainedData"
#endif

#ifndef PROPERTY_DESCRIPTION_OF_CONTAINED_DATA
#define PROPERTY_DESCRIPTION_OF_CONTAINED_DATA \
					"DescriptionOfContainedData"
#endif



class UNIX_SystemInNamespace :
	public CIM_ClassBase
{
public:

	UNIX_SystemInNamespace();
	~UNIX_SystemInNamespace();

	virtual Boolean initialize();
	virtual Boolean load(int&);
	virtual Boolean finalize();
	virtual Boolean find(const Array<CIMKeyBinding>&);
	virtual Boolean validateKey(CIMKeyBinding&) const;
	virtual void setScope(CIMName);
	virtual void setCIMOMHandle(CIMOMHandle&);
	virtual void clearInstance();
	virtual Boolean loadInstance(const CIMInstance&);
	virtual Boolean createInstance(const OperationContext&);
	virtual Boolean modifyInstance(const OperationContext&);
	virtual Boolean deleteInstance(const OperationContext&);
	virtual Boolean validateInstance();

	virtual Boolean getManagedNamespace(CIMProperty&) const;
	virtual CIMInstance getManagedNamespace() const;
	virtual void setManagedNamespace(CIMInstance&);
	virtual Boolean getIdentification(CIMProperty&) const;
	virtual CIMInstance getIdentification() const;
	virtual void setIdentification(CIMInstance&);
	virtual Boolean getScopeOfContainedData(CIMProperty&) const;
	virtual Array<Uint16> getScopeOfContainedData() const;
	virtual void setScopeOfContainedData(Array<Uint16>&);
	virtual Boolean getDescriptionOfContainedData(CIMProperty&) const;
	virtual Array<String> getDescriptionOfContainedData() const;
	virtual void setDescriptionOfContainedData(Array<String>&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _managedNamespace;
	CIMInstance _identification;
	Array<Uint16> _scopeOfContainedData;
	Array<String> _descriptionOfContainedData;

#	include "UNIX_SystemInNamespacePrivate.h"


};

#endif /* UNIX_SYSTEMINNAMESPACE */
