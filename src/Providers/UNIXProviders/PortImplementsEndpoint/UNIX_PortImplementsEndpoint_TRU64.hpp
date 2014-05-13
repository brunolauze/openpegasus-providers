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


using PROVIDER_LIB_NS::CIMHelper;


UNIX_PortImplementsEndpoint::UNIX_PortImplementsEndpoint(void)
{
}

UNIX_PortImplementsEndpoint::~UNIX_PortImplementsEndpoint(void)
{
}

Boolean UNIX_PortImplementsEndpoint::getAntecedent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ANTECEDENT, getAntecedent());
	return true;
}

CIMInstance UNIX_PortImplementsEndpoint::getAntecedent() const
{
	return _antecedent;
}

void UNIX_PortImplementsEndpoint::setAntecedent(CIMInstance &value)
{
	_antecedent = value;
}

Boolean UNIX_PortImplementsEndpoint::getDependent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPENDENT, getDependent());
	return true;
}

CIMInstance UNIX_PortImplementsEndpoint::getDependent() const
{
	return _dependent;
}

void UNIX_PortImplementsEndpoint::setDependent(CIMInstance &value)
{
	_dependent = value;
}


void UNIX_PortImplementsEndpoint::clearInstance()
{

	_antecedent = _antecedentNetworkPortProvider.constructInstance(
		CIMName("UNIX_NetworkPort"),
		CIMNamespaceName("root/cimv2"),
		_antecedentNetworkPort);
	_dependent = _dependentDHCPProtocolEndpointProvider.constructInstance(
		CIMName("UNIX_DHCPProtocolEndpoint"),
		CIMNamespaceName("root/cimv2"),
		_dependentDHCPProtocolEndpoint);

}

Boolean UNIX_PortImplementsEndpoint::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "Antecedent"))
			{
				CIMInstance antecedentValue;
				property.getValue().get(antecedentValue);
				setAntecedent(antecedentValue);
			}
			else if (String::equal(property.getName().getString(), "Dependent"))
			{
				CIMInstance dependentValue;
				property.getValue().get(dependentValue);
				setDependent(dependentValue);
			}
	}
	return true;
}


Boolean UNIX_PortImplementsEndpoint::initialize()
{
	_antecedentNetworkPort.initialize();
	_antecedentWiFiPort.initialize();
	_antecedentEthernetPort.initialize();
	_antecedentLLDPEthernetPort.initialize();
	_antecedentDataCenterEthernetPort.initialize();
	_antecedentSASPort.initialize();
	_antecedentIBPort.initialize();
	_antecedentFCPort.initialize();
	_antecedentWirelessPort.initialize();
	_antecedentTokenRingPort.initialize();
	_antecedentDAPort.initialize();
	_antecedentSerialPort.initialize();
	_antecedentATAPort.initialize();
	_antecedentUSBPort.initialize();
	_antecedentPCIPort.initialize();
	_antecedentSPIPort.initialize();
	_antecedentParallelPort.initialize();
	_antecedentFibrePort.initialize();
	_dependentDHCPProtocolEndpoint.initialize();
	_dependentSSHProtocolEndpoint.initialize();
	_dependentSCSIProtocolEndpoint.initialize();
	_dependentiSCSIProtocolEndpoint.initialize();
	_dependentCLPProtocolEndpoint.initialize();
	_dependentIPXProtocolEndpoint.initialize();
	_dependentIPsecSAEndpoint.initialize();
	_dependentIKESAEndpoint.initialize();
	_dependentLANEndpoint.initialize();
	_dependentWiFiEndpoint.initialize();
	_dependentMPLSProtocolEndpoint.initialize();
	_dependentWirelessLANEndpoint.initialize();
	_dependentUDPProtocolEndpoint.initialize();
	_dependentTCPProtocolEndpoint.initialize();
	_dependentOSPFVirtualInterface.initialize();
	_dependentOSPFProtocolEndpoint.initialize();
	_dependentVLANEndpoint.initialize();
	_dependentLinkAggregator8023ad.initialize();
	_dependentATAProtocolEndpoint.initialize();
	_dependentIPEncapsulationInterface.initialize();
	_dependentIPSubinterface.initialize();
	_dependentSwitchVirtualInterface.initialize();
	_dependentIPLoopback.initialize();
	_dependentBGPProtocolEndpoint.initialize();
	_dependentSwitchPort.initialize();
	_dependentDNSProtocolEndpoint.initialize();
	_dependentLAGPort8023ad.initialize();
	return true;
}
Boolean UNIX_PortImplementsEndpoint::load(int &pIndex)
{

	_antecedent = _antecedentNetworkPortProvider.constructInstance(
		CIMName("UNIX_NetworkPort"),
		CIMNamespaceName("root/cimv2"),
		_antecedentNetworkPort);
	_dependent = _dependentDHCPProtocolEndpointProvider.constructInstance(
		CIMName("UNIX_DHCPProtocolEndpoint"),
		CIMNamespaceName("root/cimv2"),
		_dependentDHCPProtocolEndpoint);

	return false;
}

Boolean UNIX_PortImplementsEndpoint::finalize()
{
	_antecedentNetworkPort.finalize();
	_antecedentWiFiPort.finalize();
	_antecedentEthernetPort.finalize();
	_antecedentLLDPEthernetPort.finalize();
	_antecedentDataCenterEthernetPort.finalize();
	_antecedentSASPort.finalize();
	_antecedentIBPort.finalize();
	_antecedentFCPort.finalize();
	_antecedentWirelessPort.finalize();
	_antecedentTokenRingPort.finalize();
	_antecedentDAPort.finalize();
	_antecedentSerialPort.finalize();
	_antecedentATAPort.finalize();
	_antecedentUSBPort.finalize();
	_antecedentPCIPort.finalize();
	_antecedentSPIPort.finalize();
	_antecedentParallelPort.finalize();
	_antecedentFibrePort.finalize();
	_dependentDHCPProtocolEndpoint.finalize();
	_dependentSSHProtocolEndpoint.finalize();
	_dependentSCSIProtocolEndpoint.finalize();
	_dependentiSCSIProtocolEndpoint.finalize();
	_dependentCLPProtocolEndpoint.finalize();
	_dependentIPXProtocolEndpoint.finalize();
	_dependentIPsecSAEndpoint.finalize();
	_dependentIKESAEndpoint.finalize();
	_dependentLANEndpoint.finalize();
	_dependentWiFiEndpoint.finalize();
	_dependentMPLSProtocolEndpoint.finalize();
	_dependentWirelessLANEndpoint.finalize();
	_dependentUDPProtocolEndpoint.finalize();
	_dependentTCPProtocolEndpoint.finalize();
	_dependentOSPFVirtualInterface.finalize();
	_dependentOSPFProtocolEndpoint.finalize();
	_dependentVLANEndpoint.finalize();
	_dependentLinkAggregator8023ad.finalize();
	_dependentATAProtocolEndpoint.finalize();
	_dependentIPEncapsulationInterface.finalize();
	_dependentIPSubinterface.finalize();
	_dependentSwitchVirtualInterface.finalize();
	_dependentIPLoopback.finalize();
	_dependentBGPProtocolEndpoint.finalize();
	_dependentSwitchPort.finalize();
	_dependentDNSProtocolEndpoint.finalize();
	_dependentLAGPort8023ad.finalize();
	return true;
}


Boolean UNIX_PortImplementsEndpoint::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String antecedentKey;
	String dependentKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_ANTECEDENT)) antecedentKey = kb.getValue();
		else if (keyName.equal(PROPERTY_DEPENDENT)) dependentKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getAntecedent().getPath().toString(), antecedentKey)) && 
			(String::equalNoCase(getDependent().getPath().toString(), dependentKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_PortImplementsEndpoint::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PortImplementsEndpoint::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PortImplementsEndpoint::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PortImplementsEndpoint::validateInstance()
{
	return true;
}

