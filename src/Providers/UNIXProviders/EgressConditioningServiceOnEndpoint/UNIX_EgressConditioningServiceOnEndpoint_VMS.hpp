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


UNIX_EgressConditioningServiceOnEndpoint::UNIX_EgressConditioningServiceOnEndpoint(void)
{
}

UNIX_EgressConditioningServiceOnEndpoint::~UNIX_EgressConditioningServiceOnEndpoint(void)
{
}

Boolean UNIX_EgressConditioningServiceOnEndpoint::getAntecedent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ANTECEDENT, getAntecedent());
	return true;
}

CIMInstance UNIX_EgressConditioningServiceOnEndpoint::getAntecedent() const
{
	return _antecedent;
}

void UNIX_EgressConditioningServiceOnEndpoint::setAntecedent(CIMInstance &value)
{
	_antecedent = value;
}

Boolean UNIX_EgressConditioningServiceOnEndpoint::getDependent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPENDENT, getDependent());
	return true;
}

CIMInstance UNIX_EgressConditioningServiceOnEndpoint::getDependent() const
{
	return _dependent;
}

void UNIX_EgressConditioningServiceOnEndpoint::setDependent(CIMInstance &value)
{
	_dependent = value;
}


void UNIX_EgressConditioningServiceOnEndpoint::clearInstance()
{

	_antecedent = _antecedentDHCPProtocolEndpointProvider.constructInstance(
		CIMName("UNIX_DHCPProtocolEndpoint"),
		CIMNamespaceName("root/cimv2"),
		_antecedentDHCPProtocolEndpoint);
	_dependent = _dependentTokenBucketMeterServiceProvider.constructInstance(
		CIMName("UNIX_TokenBucketMeterService"),
		CIMNamespaceName("root/cimv2"),
		_dependentTokenBucketMeterService);

}

Boolean UNIX_EgressConditioningServiceOnEndpoint::loadInstance(const CIMInstance &instance)
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


Boolean UNIX_EgressConditioningServiceOnEndpoint::initialize()
{
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
	_dependentTokenBucketMeterService.initialize();
	_dependentEWMAMeterService.initialize();
	_dependentAverageRateMeterService.initialize();
	_dependentToSMarkerService.initialize();
	_dependentPriority8021QMarkerService.initialize();
	_dependentDSCPMarkerService.initialize();
	_dependentPreambleMarkerService.initialize();
	_dependentClassifierService.initialize();
	_dependentClassifierElement.initialize();
	_dependentPacketSchedulingService.initialize();
	_dependentNonWorkConservingSchedulingService.initialize();
	_dependentREDDropperService.initialize();
	_dependentHeadTailDropper.initialize();
	_dependentWeightedREDDropperService.initialize();
	_dependentQueuingService.initialize();
	return true;
}
Boolean UNIX_EgressConditioningServiceOnEndpoint::load(int &pIndex)
{

	_antecedent = _antecedentDHCPProtocolEndpointProvider.constructInstance(
		CIMName("UNIX_DHCPProtocolEndpoint"),
		CIMNamespaceName("root/cimv2"),
		_antecedentDHCPProtocolEndpoint);
	_dependent = _dependentTokenBucketMeterServiceProvider.constructInstance(
		CIMName("UNIX_TokenBucketMeterService"),
		CIMNamespaceName("root/cimv2"),
		_dependentTokenBucketMeterService);

	return false;
}

Boolean UNIX_EgressConditioningServiceOnEndpoint::finalize()
{
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
	_dependentTokenBucketMeterService.finalize();
	_dependentEWMAMeterService.finalize();
	_dependentAverageRateMeterService.finalize();
	_dependentToSMarkerService.finalize();
	_dependentPriority8021QMarkerService.finalize();
	_dependentDSCPMarkerService.finalize();
	_dependentPreambleMarkerService.finalize();
	_dependentClassifierService.finalize();
	_dependentClassifierElement.finalize();
	_dependentPacketSchedulingService.finalize();
	_dependentNonWorkConservingSchedulingService.finalize();
	_dependentREDDropperService.finalize();
	_dependentHeadTailDropper.finalize();
	_dependentWeightedREDDropperService.finalize();
	_dependentQueuingService.finalize();
	return true;
}


Boolean UNIX_EgressConditioningServiceOnEndpoint::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_EgressConditioningServiceOnEndpoint::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_EgressConditioningServiceOnEndpoint::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_EgressConditioningServiceOnEndpoint::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_EgressConditioningServiceOnEndpoint::validateInstance()
{
	return true;
}

