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
2.8.0
*/


/* **** UMLPackagePath *** */
/*
CIM::IPsecPolicy
*/


/* **** Description *** */
/*
IPsecPolicyForEndpoint associates a PolicyGroup with a specific IP endpoint. This association's policies take priority over any PolicyGroup defined generically for the hosting system. The latter is defined using the IPsecPolicyForSystem association.
*/


/* **** MappingStrings *** */
/*
IPSP Policy Model.IETF|IPsecPolicyForEndpoint
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			UNIX_IPsecPolicyForEndpoint:


*/


/*
			 *** Methods ***

			CIM_Dependency:

			UNIX_IPsecPolicyForEndpoint:


*/

#ifndef __UNIX_IPSECPOLICYFORENDPOINT_H
#define __UNIX_IPSECPOLICYFORENDPOINT_H


#include "CIM_Dependency.h"
#include <IPEncapsulationInterface/UNIX_IPEncapsulationInterfaceProvider.h>
#include <IPSubinterface/UNIX_IPSubinterfaceProvider.h>
#include <SwitchVirtualInterface/UNIX_SwitchVirtualInterfaceProvider.h>
#include <IPLoopback/UNIX_IPLoopbackProvider.h>

#include "UNIX_IPsecPolicyForEndpointDeps.h"




class UNIX_IPsecPolicyForEndpoint :
	public CIM_Dependency
{
public:

	UNIX_IPsecPolicyForEndpoint();
	~UNIX_IPsecPolicyForEndpoint();

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

	virtual Boolean getAntecedent(CIMProperty&) const;
	virtual CIMInstance getAntecedent() const;
	virtual void setAntecedent(CIMInstance&);
	virtual Boolean getDependent(CIMProperty&) const;
	virtual CIMInstance getDependent() const;
	virtual void setDependent(CIMInstance&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _antecedent;
	CIMInstance _dependent;

UNIX_IPEncapsulationInterface _antecedentIPEncapsulationInterface;
UNIX_IPEncapsulationInterfaceProvider _antecedentIPEncapsulationInterfaceProvider;
UNIX_IPSubinterface _antecedentIPSubinterface;
UNIX_IPSubinterfaceProvider _antecedentIPSubinterfaceProvider;
UNIX_SwitchVirtualInterface _antecedentSwitchVirtualInterface;
UNIX_SwitchVirtualInterfaceProvider _antecedentSwitchVirtualInterfaceProvider;
UNIX_IPLoopback _antecedentIPLoopback;
UNIX_IPLoopbackProvider _antecedentIPLoopbackProvider;


#	include "UNIX_IPsecPolicyForEndpointPrivate.h"


};

#endif /* UNIX_IPSECPOLICYFORENDPOINT */
