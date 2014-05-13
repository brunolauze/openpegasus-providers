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
CIM_OOBAlertServiceOnNetworkPort
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
Note: The use of CIM_OOBAlertServiceOnNetworkAdapter has been deprecated because NetworkAdapter has been deprecated. Instead use the CIM_OOBAlertServiceOnNetworkPort class. 
Deprecated description: OOBAlertServiceOnNetworkAdapter defines where the out-of-band alerting Service is implemented.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			CIM_DeviceServiceImplementation:

			UNIX_OOBAlertServiceOnNetworkAdapter:


*/


/*
			 *** Methods ***

			CIM_Dependency:

			CIM_DeviceServiceImplementation:

			UNIX_OOBAlertServiceOnNetworkAdapter:


*/

#ifndef __UNIX_OOBALERTSERVICEONNETWORKADAPTER_H
#define __UNIX_OOBALERTSERVICEONNETWORKADAPTER_H


#include "CIM_DeviceServiceImplementation.h"
#include <EthernetAdapter/UNIX_EthernetAdapterProvider.h>
#include <TokenRingAdapter/UNIX_TokenRingAdapterProvider.h>
#include <FibreChannelAdapter/UNIX_FibreChannelAdapterProvider.h>
#include <OOBAlertService/UNIX_OOBAlertServiceProvider.h>

#include "UNIX_OOBAlertServiceOnNetworkAdapterDeps.h"




class UNIX_OOBAlertServiceOnNetworkAdapter :
	public CIM_DeviceServiceImplementation
{
public:

	UNIX_OOBAlertServiceOnNetworkAdapter();
	~UNIX_OOBAlertServiceOnNetworkAdapter();

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

UNIX_EthernetAdapter _antecedentEthernetAdapter;
UNIX_EthernetAdapterProvider _antecedentEthernetAdapterProvider;
UNIX_TokenRingAdapter _antecedentTokenRingAdapter;
UNIX_TokenRingAdapterProvider _antecedentTokenRingAdapterProvider;
UNIX_FibreChannelAdapter _antecedentFibreChannelAdapter;
UNIX_FibreChannelAdapterProvider _antecedentFibreChannelAdapterProvider;

UNIX_OOBAlertService _dependentOOBAlertService;
UNIX_OOBAlertServiceProvider _dependentOOBAlertServiceProvider;

#	include "UNIX_OOBAlertServiceOnNetworkAdapterPrivate.h"


};

#endif /* UNIX_OOBALERTSERVICEONNETWORKADAPTER */
