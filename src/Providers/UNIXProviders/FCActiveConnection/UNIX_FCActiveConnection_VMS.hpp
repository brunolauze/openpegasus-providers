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


UNIX_FCActiveConnection::UNIX_FCActiveConnection(void)
{
}

UNIX_FCActiveConnection::~UNIX_FCActiveConnection(void)
{
}

Boolean UNIX_FCActiveConnection::getAntecedent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ANTECEDENT, getAntecedent());
	return true;
}

CIMInstance UNIX_FCActiveConnection::getAntecedent() const
{
	return _antecedent;
}

void UNIX_FCActiveConnection::setAntecedent(CIMInstance &value)
{
	_antecedent = value;
}

Boolean UNIX_FCActiveConnection::getDependent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPENDENT, getDependent());
	return true;
}

CIMInstance UNIX_FCActiveConnection::getDependent() const
{
	return _dependent;
}

void UNIX_FCActiveConnection::setDependent(CIMInstance &value)
{
	_dependent = value;
}

Boolean UNIX_FCActiveConnection::getTrafficType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRAFFIC_TYPE, getTrafficType());
	return true;
}

Uint16 UNIX_FCActiveConnection::getTrafficType() const
{
	return _trafficType;
}

void UNIX_FCActiveConnection::setTrafficType(Uint16 &value)
{
	_trafficType = value;
}

Boolean UNIX_FCActiveConnection::getOtherTrafficDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TRAFFIC_DESCRIPTION, getOtherTrafficDescription());
	return true;
}

String UNIX_FCActiveConnection::getOtherTrafficDescription() const
{
	return _otherTrafficDescription;
}

void UNIX_FCActiveConnection::setOtherTrafficDescription(String &value)
{
	_otherTrafficDescription = value;
}

Boolean UNIX_FCActiveConnection::getIsUnidirectional(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_UNIDIRECTIONAL, getIsUnidirectional());
	return true;
}

Boolean UNIX_FCActiveConnection::getIsUnidirectional() const
{
	return _isUnidirectional;
}

void UNIX_FCActiveConnection::setIsUnidirectional(Boolean &value)
{
	_isUnidirectional = value;
}

Boolean UNIX_FCActiveConnection::getDiscriminator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DISCRIMINATOR, getDiscriminator());
	return true;
}

Array<Uint16> UNIX_FCActiveConnection::getDiscriminator() const
{
	return _discriminator;
}

void UNIX_FCActiveConnection::setDiscriminator(Array<Uint16> &value)
{
	_discriminator = value;
}


void UNIX_FCActiveConnection::clearInstance()
{

	_antecedent = _antecedentClusteringSAPProvider.constructInstance(
		CIMName("UNIX_ClusteringSAP"),
		CIMNamespaceName("root/cimv2"),
		_antecedentClusteringSAP);
	_dependent = _dependentClusteringSAPProvider.constructInstance(
		CIMName("UNIX_ClusteringSAP"),
		CIMNamespaceName("root/cimv2"),
		_dependentClusteringSAP);
	_trafficType = Uint16(0);
	_otherTrafficDescription = String ("");
	_isUnidirectional = Boolean(false);
	_discriminator.clear();

}

Boolean UNIX_FCActiveConnection::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "TrafficType"))
			{
				Uint16 trafficTypeValue;
				property.getValue().get(trafficTypeValue);
				setTrafficType(trafficTypeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherTrafficDescription"))
			{
				String otherTrafficDescriptionValue;
				property.getValue().get(otherTrafficDescriptionValue);
				setOtherTrafficDescription(otherTrafficDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "IsUnidirectional"))
			{
				Boolean isUnidirectionalValue;
				property.getValue().get(isUnidirectionalValue);
				setIsUnidirectional(isUnidirectionalValue);
			}
			else if (String::equal(property.getName().getString(), "Discriminator"))
			{
				Array<Uint16> discriminatorValue;
				property.getValue().get(discriminatorValue);
				setDiscriminator(discriminatorValue);
			}
	}
	return true;
}


Boolean UNIX_FCActiveConnection::initialize()
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
	_dependentClusteringSAP.initialize();
	_dependentCredentialManagementSAP.initialize();
	_dependentUSBRedirectionSAP.initialize();
	_dependentIPNetworkConnection.initialize();
	_dependentPolicyTransferServiceAccessPoint.initialize();
	_dependentLaunchInContextSAP.initialize();
	_dependentRemotePort.initialize();
	_dependentMPLSTunnelHop.initialize();
	_dependentSoftwareIdentityResource.initialize();
	_dependentKVMRedirectionSAP.initialize();
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
	_dependentBatchSAP.initialize();
	_dependentTextRedirectionSAP.initialize();
	_dependentMediaRedirectionSAP.initialize();
	_dependentPrintSAP.initialize();
	_dependentServiceAccessURI.initialize();
	_dependentObjectManagerCommunicationMechanism.initialize();
	_dependentCIMXMLCommunicationMechanism.initialize();
	_dependentVLAN.initialize();
	_dependentBootSAP.initialize();
	return true;
}
Boolean UNIX_FCActiveConnection::load(int &pIndex)
{

	_antecedent = _antecedentClusteringSAPProvider.constructInstance(
		CIMName("UNIX_ClusteringSAP"),
		CIMNamespaceName("root/cimv2"),
		_antecedentClusteringSAP);
	_dependent = _dependentClusteringSAPProvider.constructInstance(
		CIMName("UNIX_ClusteringSAP"),
		CIMNamespaceName("root/cimv2"),
		_dependentClusteringSAP);
	_trafficType = Uint16(0);
	_otherTrafficDescription = String ("");
	_isUnidirectional = Boolean(false);
	_discriminator.clear();

	return false;
}

Boolean UNIX_FCActiveConnection::finalize()
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
	_dependentClusteringSAP.finalize();
	_dependentCredentialManagementSAP.finalize();
	_dependentUSBRedirectionSAP.finalize();
	_dependentIPNetworkConnection.finalize();
	_dependentPolicyTransferServiceAccessPoint.finalize();
	_dependentLaunchInContextSAP.finalize();
	_dependentRemotePort.finalize();
	_dependentMPLSTunnelHop.finalize();
	_dependentSoftwareIdentityResource.finalize();
	_dependentKVMRedirectionSAP.finalize();
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
	_dependentBatchSAP.finalize();
	_dependentTextRedirectionSAP.finalize();
	_dependentMediaRedirectionSAP.finalize();
	_dependentPrintSAP.finalize();
	_dependentServiceAccessURI.finalize();
	_dependentObjectManagerCommunicationMechanism.finalize();
	_dependentCIMXMLCommunicationMechanism.finalize();
	_dependentVLAN.finalize();
	_dependentBootSAP.finalize();
	return true;
}


Boolean UNIX_FCActiveConnection::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_FCActiveConnection::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FCActiveConnection::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FCActiveConnection::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FCActiveConnection::validateInstance()
{
	return true;
}

