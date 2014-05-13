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


UNIX_EndpointOfNetworkPipe::UNIX_EndpointOfNetworkPipe(void)
{
}

UNIX_EndpointOfNetworkPipe::~UNIX_EndpointOfNetworkPipe(void)
{
}

Boolean UNIX_EndpointOfNetworkPipe::getAntecedent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ANTECEDENT, getAntecedent());
	return true;
}

CIMInstance UNIX_EndpointOfNetworkPipe::getAntecedent() const
{
	return _antecedent;
}

void UNIX_EndpointOfNetworkPipe::setAntecedent(CIMInstance &value)
{
	_antecedent = value;
}

Boolean UNIX_EndpointOfNetworkPipe::getDependent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPENDENT, getDependent());
	return true;
}

CIMInstance UNIX_EndpointOfNetworkPipe::getDependent() const
{
	return _dependent;
}

void UNIX_EndpointOfNetworkPipe::setDependent(CIMInstance &value)
{
	_dependent = value;
}

Boolean UNIX_EndpointOfNetworkPipe::getSourceOrSink(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SOURCE_OR_SINK, getSourceOrSink());
	return true;
}

Uint16 UNIX_EndpointOfNetworkPipe::getSourceOrSink() const
{
	return _sourceOrSink;
}

void UNIX_EndpointOfNetworkPipe::setSourceOrSink(Uint16 &value)
{
	_sourceOrSink = value;
}


void UNIX_EndpointOfNetworkPipe::clearInstance()
{

	_antecedent = _antecedentClusteringSAPProvider.constructInstance(
		CIMName("UNIX_ClusteringSAP"),
		CIMNamespaceName("root/cimv2"),
		_antecedentClusteringSAP);
	_dependent = _dependentiSCSISessionProvider.constructInstance(
		CIMName("UNIX_iSCSISession"),
		CIMNamespaceName("root/cimv2"),
		_dependentiSCSISession);
	_sourceOrSink = Uint16(0);

}

Boolean UNIX_EndpointOfNetworkPipe::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "SourceOrSink"))
			{
				Uint16 sourceOrSinkValue;
				property.getValue().get(sourceOrSinkValue);
				setSourceOrSink(sourceOrSinkValue);
			}
	}
	return true;
}


Boolean UNIX_EndpointOfNetworkPipe::initialize()
{
	_antecedentClusteringSAP.initialize();
	_antecedentCredentialManagementSAP.initialize();
	_antecedentUSBRedirectionSAP.initialize();
	_antecedentIPNetworkConnection.initialize();
	_antecedentPolicyTransferServiceAccessPoint.initialize();
	_antecedentLaunchInContextSAP.initialize();
	_antecedentRemotePort.initialize();
	_antecedentMPLSTunnelHop.initialize();
	_antecedentSoftwareIdentityResource.initialize();
	_antecedentKVMRedirectionSAP.initialize();
	_antecedentDHCPProtocolEndpoint.initialize();
	_antecedentSSHProtocolEndpoint.initialize();
	_antecedentSCSIProtocolEndpoint.initialize();
	_antecedentiSCSIProtocolEndpoint.initialize();
	_antecedentCLPProtocolEndpoint.initialize();
	_antecedentIPXProtocolEndpoint.initialize();
	_antecedentIPsecSAEndpoint.initialize();
	_antecedentIKESAEndpoint.initialize();
	_antecedentLANEndpoint.initialize();
	_antecedentWiFiEndpoint.initialize();
	_antecedentMPLSProtocolEndpoint.initialize();
	_antecedentWirelessLANEndpoint.initialize();
	_antecedentUDPProtocolEndpoint.initialize();
	_antecedentTCPProtocolEndpoint.initialize();
	_antecedentOSPFVirtualInterface.initialize();
	_antecedentOSPFProtocolEndpoint.initialize();
	_antecedentVLANEndpoint.initialize();
	_antecedentLinkAggregator8023ad.initialize();
	_antecedentATAProtocolEndpoint.initialize();
	_antecedentIPEncapsulationInterface.initialize();
	_antecedentIPSubinterface.initialize();
	_antecedentSwitchVirtualInterface.initialize();
	_antecedentIPLoopback.initialize();
	_antecedentBGPProtocolEndpoint.initialize();
	_antecedentSwitchPort.initialize();
	_antecedentDNSProtocolEndpoint.initialize();
	_antecedentLAGPort8023ad.initialize();
	_antecedentBatchSAP.initialize();
	_antecedentTextRedirectionSAP.initialize();
	_antecedentMediaRedirectionSAP.initialize();
	_antecedentPrintSAP.initialize();
	_antecedentServiceAccessURI.initialize();
	_antecedentObjectManagerCommunicationMechanism.initialize();
	_antecedentCIMXMLCommunicationMechanism.initialize();
	_antecedentVLAN.initialize();
	_antecedentBootSAP.initialize();
	_dependentiSCSISession.initialize();
	_dependentiSCSIConnection.initialize();
	return true;
}
Boolean UNIX_EndpointOfNetworkPipe::load(int &pIndex)
{

	_antecedent = _antecedentClusteringSAPProvider.constructInstance(
		CIMName("UNIX_ClusteringSAP"),
		CIMNamespaceName("root/cimv2"),
		_antecedentClusteringSAP);
	_dependent = _dependentiSCSISessionProvider.constructInstance(
		CIMName("UNIX_iSCSISession"),
		CIMNamespaceName("root/cimv2"),
		_dependentiSCSISession);
	_sourceOrSink = Uint16(0);

	return false;
}

Boolean UNIX_EndpointOfNetworkPipe::finalize()
{
	_antecedentClusteringSAP.finalize();
	_antecedentCredentialManagementSAP.finalize();
	_antecedentUSBRedirectionSAP.finalize();
	_antecedentIPNetworkConnection.finalize();
	_antecedentPolicyTransferServiceAccessPoint.finalize();
	_antecedentLaunchInContextSAP.finalize();
	_antecedentRemotePort.finalize();
	_antecedentMPLSTunnelHop.finalize();
	_antecedentSoftwareIdentityResource.finalize();
	_antecedentKVMRedirectionSAP.finalize();
	_antecedentDHCPProtocolEndpoint.finalize();
	_antecedentSSHProtocolEndpoint.finalize();
	_antecedentSCSIProtocolEndpoint.finalize();
	_antecedentiSCSIProtocolEndpoint.finalize();
	_antecedentCLPProtocolEndpoint.finalize();
	_antecedentIPXProtocolEndpoint.finalize();
	_antecedentIPsecSAEndpoint.finalize();
	_antecedentIKESAEndpoint.finalize();
	_antecedentLANEndpoint.finalize();
	_antecedentWiFiEndpoint.finalize();
	_antecedentMPLSProtocolEndpoint.finalize();
	_antecedentWirelessLANEndpoint.finalize();
	_antecedentUDPProtocolEndpoint.finalize();
	_antecedentTCPProtocolEndpoint.finalize();
	_antecedentOSPFVirtualInterface.finalize();
	_antecedentOSPFProtocolEndpoint.finalize();
	_antecedentVLANEndpoint.finalize();
	_antecedentLinkAggregator8023ad.finalize();
	_antecedentATAProtocolEndpoint.finalize();
	_antecedentIPEncapsulationInterface.finalize();
	_antecedentIPSubinterface.finalize();
	_antecedentSwitchVirtualInterface.finalize();
	_antecedentIPLoopback.finalize();
	_antecedentBGPProtocolEndpoint.finalize();
	_antecedentSwitchPort.finalize();
	_antecedentDNSProtocolEndpoint.finalize();
	_antecedentLAGPort8023ad.finalize();
	_antecedentBatchSAP.finalize();
	_antecedentTextRedirectionSAP.finalize();
	_antecedentMediaRedirectionSAP.finalize();
	_antecedentPrintSAP.finalize();
	_antecedentServiceAccessURI.finalize();
	_antecedentObjectManagerCommunicationMechanism.finalize();
	_antecedentCIMXMLCommunicationMechanism.finalize();
	_antecedentVLAN.finalize();
	_antecedentBootSAP.finalize();
	_dependentiSCSISession.finalize();
	_dependentiSCSIConnection.finalize();
	return true;
}


Boolean UNIX_EndpointOfNetworkPipe::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_EndpointOfNetworkPipe::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_EndpointOfNetworkPipe::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_EndpointOfNetworkPipe::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_EndpointOfNetworkPipe::validateInstance()
{
	return true;
}

