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
2.10.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::Modems
*/


/* **** Description *** */
/*
WakeUpServiceOnModem defines where the WakeUpService is implemented. The Service can either employ a Modem or NetworkAdapter to receive a wakeup signal.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			CIM_DeviceServiceImplementation:

			UNIX_WakeUpServiceOnModem:


*/


/*
			 *** Methods ***

			CIM_Dependency:

			CIM_DeviceServiceImplementation:

			UNIX_WakeUpServiceOnModem:


*/

#ifndef __UNIX_WAKEUPSERVICEONMODEM_H
#define __UNIX_WAKEUPSERVICEONMODEM_H


#include "CIM_DeviceServiceImplementation.h"
#include <CableModem/UNIX_CableModemProvider.h>
#include <ADSLModem/UNIX_ADSLModemProvider.h>
#include <VDSLModem/UNIX_VDSLModemProvider.h>
#include <HDSLModem/UNIX_HDSLModemProvider.h>
#include <SDSLModem/UNIX_SDSLModemProvider.h>
#include <Unimodem/UNIX_UnimodemProvider.h>
#include <ISDNModem/UNIX_ISDNModemProvider.h>
#include <WakeUpService/UNIX_WakeUpServiceProvider.h>

#include "UNIX_WakeUpServiceOnModemDeps.h"




class UNIX_WakeUpServiceOnModem :
	public CIM_DeviceServiceImplementation
{
public:

	UNIX_WakeUpServiceOnModem();
	~UNIX_WakeUpServiceOnModem();

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

UNIX_CableModem _antecedentCableModem;
UNIX_CableModemProvider _antecedentCableModemProvider;
UNIX_ADSLModem _antecedentADSLModem;
UNIX_ADSLModemProvider _antecedentADSLModemProvider;
UNIX_VDSLModem _antecedentVDSLModem;
UNIX_VDSLModemProvider _antecedentVDSLModemProvider;
UNIX_HDSLModem _antecedentHDSLModem;
UNIX_HDSLModemProvider _antecedentHDSLModemProvider;
UNIX_SDSLModem _antecedentSDSLModem;
UNIX_SDSLModemProvider _antecedentSDSLModemProvider;
UNIX_Unimodem _antecedentUnimodem;
UNIX_UnimodemProvider _antecedentUnimodemProvider;
UNIX_ISDNModem _antecedentISDNModem;
UNIX_ISDNModemProvider _antecedentISDNModemProvider;

UNIX_WakeUpService _dependentWakeUpService;
UNIX_WakeUpServiceProvider _dependentWakeUpServiceProvider;

#	include "UNIX_WakeUpServiceOnModemPrivate.h"


};

#endif /* UNIX_WAKEUPSERVICEONMODEM */
