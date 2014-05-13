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
CIM::Device::ProtocolController
*/


/* **** Description *** */
/*
This association is used to define a relationship between a ProtocolController and a LogicalPort. This subclass is provided so that an enumeration of related controllers and ports can be performed without retrieving any other controllers or connected units.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			CIM_AbstractProtocolControllerForDevice:
				DeviceNumber String
				AccessPriority UInt16
				AccessState UInt16

			CIM_ProtocolControllerForDevice:

			UNIX_ProtocolControllerForPort:


*/


/*
			 *** Methods ***

			CIM_Dependency:

			CIM_AbstractProtocolControllerForDevice:

			CIM_ProtocolControllerForDevice:

			UNIX_ProtocolControllerForPort:


*/

#ifndef __UNIX_PROTOCOLCONTROLLERFORPORT_H
#define __UNIX_PROTOCOLCONTROLLERFORPORT_H


#include "CIM_ProtocolControllerForDevice.h"
#include <ProtocolController/UNIX_ProtocolControllerProvider.h>
#include <NetworkPort/UNIX_NetworkPortProvider.h>
#include <WiFiPort/UNIX_WiFiPortProvider.h>
#include <EthernetPort/UNIX_EthernetPortProvider.h>
#include <LLDPEthernetPort/UNIX_LLDPEthernetPortProvider.h>
#include <DataCenterEthernetPort/UNIX_DataCenterEthernetPortProvider.h>
#include <SASPort/UNIX_SASPortProvider.h>
#include <IBPort/UNIX_IBPortProvider.h>
#include <FCPort/UNIX_FCPortProvider.h>
#include <WirelessPort/UNIX_WirelessPortProvider.h>
#include <TokenRingPort/UNIX_TokenRingPortProvider.h>
#include <DAPort/UNIX_DAPortProvider.h>
#include <SerialPort/UNIX_SerialPortProvider.h>
#include <ATAPort/UNIX_ATAPortProvider.h>
#include <USBPort/UNIX_USBPortProvider.h>
#include <PCIPort/UNIX_PCIPortProvider.h>
#include <SPIPort/UNIX_SPIPortProvider.h>
#include <ParallelPort/UNIX_ParallelPortProvider.h>
#include <FibrePort/UNIX_FibrePortProvider.h>

#include "UNIX_ProtocolControllerForPortDeps.h"




class UNIX_ProtocolControllerForPort :
	public CIM_ProtocolControllerForDevice
{
public:

	UNIX_ProtocolControllerForPort();
	~UNIX_ProtocolControllerForPort();

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
	virtual Boolean getDeviceNumber(CIMProperty&) const;
	virtual String getDeviceNumber() const;
	virtual void setDeviceNumber(String&);
	virtual Boolean getAccessPriority(CIMProperty&) const;
	virtual Uint16 getAccessPriority() const;
	virtual void setAccessPriority(Uint16&);
	virtual Boolean getAccessState(CIMProperty&) const;
	virtual Uint16 getAccessState() const;
	virtual void setAccessState(Uint16&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _antecedent;
	CIMInstance _dependent;
	String _deviceNumber;
	Uint16 _accessPriority;
	Uint16 _accessState;

UNIX_ProtocolController _antecedentProtocolController;
UNIX_ProtocolControllerProvider _antecedentProtocolControllerProvider;

UNIX_NetworkPort _dependentNetworkPort;
UNIX_NetworkPortProvider _dependentNetworkPortProvider;
UNIX_WiFiPort _dependentWiFiPort;
UNIX_WiFiPortProvider _dependentWiFiPortProvider;
UNIX_EthernetPort _dependentEthernetPort;
UNIX_EthernetPortProvider _dependentEthernetPortProvider;
UNIX_LLDPEthernetPort _dependentLLDPEthernetPort;
UNIX_LLDPEthernetPortProvider _dependentLLDPEthernetPortProvider;
UNIX_DataCenterEthernetPort _dependentDataCenterEthernetPort;
UNIX_DataCenterEthernetPortProvider _dependentDataCenterEthernetPortProvider;
UNIX_SASPort _dependentSASPort;
UNIX_SASPortProvider _dependentSASPortProvider;
UNIX_IBPort _dependentIBPort;
UNIX_IBPortProvider _dependentIBPortProvider;
UNIX_FCPort _dependentFCPort;
UNIX_FCPortProvider _dependentFCPortProvider;
UNIX_WirelessPort _dependentWirelessPort;
UNIX_WirelessPortProvider _dependentWirelessPortProvider;
UNIX_TokenRingPort _dependentTokenRingPort;
UNIX_TokenRingPortProvider _dependentTokenRingPortProvider;
UNIX_DAPort _dependentDAPort;
UNIX_DAPortProvider _dependentDAPortProvider;
UNIX_SerialPort _dependentSerialPort;
UNIX_SerialPortProvider _dependentSerialPortProvider;
UNIX_ATAPort _dependentATAPort;
UNIX_ATAPortProvider _dependentATAPortProvider;
UNIX_USBPort _dependentUSBPort;
UNIX_USBPortProvider _dependentUSBPortProvider;
UNIX_PCIPort _dependentPCIPort;
UNIX_PCIPortProvider _dependentPCIPortProvider;
UNIX_SPIPort _dependentSPIPort;
UNIX_SPIPortProvider _dependentSPIPortProvider;
UNIX_ParallelPort _dependentParallelPort;
UNIX_ParallelPortProvider _dependentParallelPortProvider;
UNIX_FibrePort _dependentFibrePort;
UNIX_FibrePortProvider _dependentFibrePortProvider;

#	include "UNIX_ProtocolControllerForPortPrivate.h"


};

#endif /* UNIX_PROTOCOLCONTROLLERFORPORT */
