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


/* **** Deprecated *** */
/*
CIM_PortActiveConnection
*/


/* **** Version *** */
/*
2.10.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::NetworkAdapter
*/


/* **** Description *** */
/*
Note: The use of the CIM_AdapterActiveConnection class has been deprecated, because NetworkAdapter is deprecated. Instead use the CIM_PortActiveConnection class. 
Deprecated description: The AdapterActiveConnection relationship indicates that a NetworkAdapter is using the referenced PhysicalConnector to output to the network. This relationship is important when the Adapter can choose to output from one of several Connectors. The Connectors can be associated with the NetworkAdapter in a Realizes relationship but this is not required. This association provides additional information (such as, 'in use for communication') different from Realizes.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			UNIX_AdapterActiveConnection:


*/


/*
			 *** Methods ***

			CIM_Dependency:

			UNIX_AdapterActiveConnection:


*/

#ifndef __UNIX_ADAPTERACTIVECONNECTION_H
#define __UNIX_ADAPTERACTIVECONNECTION_H


#include "CIM_Dependency.h"
#include <PhysicalConnector/UNIX_PhysicalConnectorProvider.h>
#include <EthernetAdapter/UNIX_EthernetAdapterProvider.h>
#include <TokenRingAdapter/UNIX_TokenRingAdapterProvider.h>
#include <FibreChannelAdapter/UNIX_FibreChannelAdapterProvider.h>

#include "UNIX_AdapterActiveConnectionDeps.h"




class UNIX_AdapterActiveConnection :
	public CIM_Dependency
{
public:

	UNIX_AdapterActiveConnection();
	~UNIX_AdapterActiveConnection();

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

UNIX_PhysicalConnector _antecedentPhysicalConnector;
UNIX_PhysicalConnectorProvider _antecedentPhysicalConnectorProvider;

UNIX_EthernetAdapter _dependentEthernetAdapter;
UNIX_EthernetAdapterProvider _dependentEthernetAdapterProvider;
UNIX_TokenRingAdapter _dependentTokenRingAdapter;
UNIX_TokenRingAdapterProvider _dependentTokenRingAdapterProvider;
UNIX_FibreChannelAdapter _dependentFibreChannelAdapter;
UNIX_FibreChannelAdapterProvider _dependentFibreChannelAdapterProvider;

#	include "UNIX_AdapterActiveConnectionPrivate.h"


};

#endif /* UNIX_ADAPTERACTIVECONNECTION */
