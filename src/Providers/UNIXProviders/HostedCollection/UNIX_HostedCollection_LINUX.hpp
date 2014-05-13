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


UNIX_HostedCollection::UNIX_HostedCollection(void)
{
}

UNIX_HostedCollection::~UNIX_HostedCollection(void)
{
}

Boolean UNIX_HostedCollection::getAntecedent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ANTECEDENT, getAntecedent());
	return true;
}

CIMInstance UNIX_HostedCollection::getAntecedent() const
{
	return _antecedent;
}

void UNIX_HostedCollection::setAntecedent(CIMInstance &value)
{
	_antecedent = value;
}

Boolean UNIX_HostedCollection::getDependent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPENDENT, getDependent());
	return true;
}

CIMInstance UNIX_HostedCollection::getDependent() const
{
	return _dependent;
}

void UNIX_HostedCollection::setDependent(CIMInstance &value)
{
	_dependent = value;
}


void UNIX_HostedCollection::clearInstance()
{

	_antecedent = _antecedentComputerSystemProvider.constructInstance(
		CIMName("UNIX_ComputerSystem"),
		CIMNamespaceName("root/cimv2"),
		_antecedentComputerSystem);
	_dependent = _dependentStatisticsCollectionProvider.constructInstance(
		CIMName("UNIX_StatisticsCollection"),
		CIMNamespaceName("root/cimv2"),
		_dependentStatisticsCollection);

}

Boolean UNIX_HostedCollection::loadInstance(const CIMInstance &instance)
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


Boolean UNIX_HostedCollection::initialize()
{
	_antecedentComputerSystem.initialize();
	_dependentStatisticsCollection.initialize();
	_dependentQueryStatisticsCollection.initialize();
	_dependentTargetPortGroup.initialize();
	_dependentZone.initialize();
	_dependentZoneSet.initialize();
	_dependentLANConnectivitySegment.initialize();
	_dependentIPXConnectivityNetwork.initialize();
	_dependentOSPFLink.initialize();
	_dependentNetworkVLAN.initialize();
	_dependentIPConnectivitySubnet.initialize();
	_dependentDeviceConnectivityCollection.initialize();
	_dependentRemoteReplicationCollection.initialize();
	_dependentStorageTier.initialize();
	_dependentFileSystemStatisticsManifestCollection.initialize();
	_dependentLogicalPortGroup.initialize();
	_dependentPCIPortGroup.initialize();
	_dependentSCSITargetPortGroup.initialize();
	_dependentVirtualRoutingAndForwardingTable.initialize();
	_dependentStorageResourceLoadGroup.initialize();
	_dependentInitiatorMaskingGroup.initialize();
	_dependentTargetMaskingGroup.initialize();
	_dependentDeviceMaskingGroup.initialize();
	_dependentFailoverStorageExtentsCollection.initialize();
	_dependentPolicyRoleCollection.initialize();
	_dependentBlockStatisticsManifestCollection.initialize();
	_dependentRedundancySet.initialize();
	_dependentStorageRedundancySet.initialize();
	_dependentRangeOfIPAddresses.initialize();
	_dependentNamedAddressCollection.initialize();
	_dependentReplicationGroup.initialize();
	return true;
}
Boolean UNIX_HostedCollection::load(int &pIndex)
{

	_antecedent = _antecedentComputerSystemProvider.constructInstance(
		CIMName("UNIX_ComputerSystem"),
		CIMNamespaceName("root/cimv2"),
		_antecedentComputerSystem);
	_dependent = _dependentStatisticsCollectionProvider.constructInstance(
		CIMName("UNIX_StatisticsCollection"),
		CIMNamespaceName("root/cimv2"),
		_dependentStatisticsCollection);

	return false;
}

Boolean UNIX_HostedCollection::finalize()
{
	_antecedentComputerSystem.finalize();
	_dependentStatisticsCollection.finalize();
	_dependentQueryStatisticsCollection.finalize();
	_dependentTargetPortGroup.finalize();
	_dependentZone.finalize();
	_dependentZoneSet.finalize();
	_dependentLANConnectivitySegment.finalize();
	_dependentIPXConnectivityNetwork.finalize();
	_dependentOSPFLink.finalize();
	_dependentNetworkVLAN.finalize();
	_dependentIPConnectivitySubnet.finalize();
	_dependentDeviceConnectivityCollection.finalize();
	_dependentRemoteReplicationCollection.finalize();
	_dependentStorageTier.finalize();
	_dependentFileSystemStatisticsManifestCollection.finalize();
	_dependentLogicalPortGroup.finalize();
	_dependentPCIPortGroup.finalize();
	_dependentSCSITargetPortGroup.finalize();
	_dependentVirtualRoutingAndForwardingTable.finalize();
	_dependentStorageResourceLoadGroup.finalize();
	_dependentInitiatorMaskingGroup.finalize();
	_dependentTargetMaskingGroup.finalize();
	_dependentDeviceMaskingGroup.finalize();
	_dependentFailoverStorageExtentsCollection.finalize();
	_dependentPolicyRoleCollection.finalize();
	_dependentBlockStatisticsManifestCollection.finalize();
	_dependentRedundancySet.finalize();
	_dependentStorageRedundancySet.finalize();
	_dependentRangeOfIPAddresses.finalize();
	_dependentNamedAddressCollection.finalize();
	_dependentReplicationGroup.finalize();
	return true;
}


Boolean UNIX_HostedCollection::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_HostedCollection::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_HostedCollection::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_HostedCollection::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_HostedCollection::validateInstance()
{
	return true;
}

