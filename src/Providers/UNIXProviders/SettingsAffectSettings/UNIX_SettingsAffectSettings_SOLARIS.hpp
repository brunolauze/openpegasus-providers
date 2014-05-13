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


UNIX_SettingsAffectSettings::UNIX_SettingsAffectSettings(void)
{
}

UNIX_SettingsAffectSettings::~UNIX_SettingsAffectSettings(void)
{
}

Boolean UNIX_SettingsAffectSettings::getAntecedent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ANTECEDENT, getAntecedent());
	return true;
}

CIMInstance UNIX_SettingsAffectSettings::getAntecedent() const
{
	return _antecedent;
}

void UNIX_SettingsAffectSettings::setAntecedent(CIMInstance &value)
{
	_antecedent = value;
}

Boolean UNIX_SettingsAffectSettings::getDependent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPENDENT, getDependent());
	return true;
}

CIMInstance UNIX_SettingsAffectSettings::getDependent() const
{
	return _dependent;
}

void UNIX_SettingsAffectSettings::setDependent(CIMInstance &value)
{
	_dependent = value;
}

Boolean UNIX_SettingsAffectSettings::getAffect(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AFFECT, getAffect());
	return true;
}

Uint16 UNIX_SettingsAffectSettings::getAffect() const
{
	return _affect;
}

void UNIX_SettingsAffectSettings::setAffect(Uint16 &value)
{
	_affect = value;
}


void UNIX_SettingsAffectSettings::clearInstance()
{

	_antecedent = _antecedentFirewallRuleSettingDataProvider.constructInstance(
		CIMName("UNIX_FirewallRuleSettingData"),
		CIMNamespaceName("root/cimv2"),
		_antecedentFirewallRuleSettingData);
	_dependent = _dependentFirewallRuleSettingDataProvider.constructInstance(
		CIMName("UNIX_FirewallRuleSettingData"),
		CIMNamespaceName("root/cimv2"),
		_dependentFirewallRuleSettingData);
	_affect = Uint16(0);

}

Boolean UNIX_SettingsAffectSettings::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "Affect"))
			{
				Uint16 affectValue;
				property.getValue().get(affectValue);
				setAffect(affectValue);
			}
	}
	return true;
}


Boolean UNIX_SettingsAffectSettings::initialize()
{
	_antecedentFirewallRuleSettingData.initialize();
	_antecedentLoadBalancingRuleSettingData.initialize();
	_antecedentQoSPolicyRuleSettingData.initialize();
	_antecedentVLANEndpointSettingData.initialize();
	_antecedentCLPSettingData.initialize();
	_antecedentStorageClientSettingData.initialize();
	_antecedentCPUDiagnosticSettingData.initialize();
	_antecedentRAIDDiagnosticSettingData.initialize();
	_antecedentDiskDriveDiagnosticSettingData.initialize();
	_antecedentFCHBADiagnosticSettingData.initialize();
	_antecedentEthernetNICDiagnosticSettingData.initialize();
	_antecedentSAEndpointRefreshSettings.initialize();
	_antecedentWiFiEndpointSettings.initialize();
	_antecedentLogicalPortSettings.initialize();
	_antecedentNetworkPortSettings.initialize();
	_antecedentFCPortSettings.initialize();
	_antecedentReplicationSettingData.initialize();
	_antecedentAccessControlServiceSettingData.initialize();
	_antecedentTimeZoneSettingData.initialize();
	_antecedentVirtualSystemSettingData.initialize();
	_antecedentVirtualEthernetSwitchSettingData.initialize();
	_antecedentFCIPSettings.initialize();
	_antecedentIndicationServiceSettingData.initialize();
	_antecedentBootSourceSetting.initialize();
	_antecedentCommonDatabaseSettingData.initialize();
	_antecedentBootSettingData.initialize();
	_antecedentExportedFileShareSetting.initialize();
	_antecedentPrintServiceSettings.initialize();
	_antecedentStatisticalSetting.initialize();
	_antecedentCIFSSettingData.initialize();
	_antecedentIPVersionSettingData.initialize();
	_antecedentIPSettings.initialize();
	_antecedentStorageAllocationSettingData.initialize();
	_antecedentProcessorAllocationSettingData.initialize();
	_antecedentEthernetPortAllocationSettingData.initialize();
	_antecedentPowerAllocationSettingData.initialize();
	_antecedentTCPSettings.initialize();
	_antecedentFileSystemSetting.initialize();
	_antecedentJobSettingData.initialize();
	_antecedentDHCPSettingData.initialize();
	_antecedentStaticIPAssignmentSettingData.initialize();
	_antecedentExtendedStaticIPAssignmentSettingData.initialize();
	_antecedentDNSGeneralSettingData.initialize();
	_antecedentDNSSettingData.initialize();
	_antecedentFCSwitchSettings.initialize();
	_antecedentConfigurationData.initialize();
	_antecedentWiFiNetworkDetectionSettings.initialize();
	_antecedentVirtualSystemMigrationSettingData.initialize();
	_antecedentSCSIMultipathSettings.initialize();
	_antecedentNATStaticSettings.initialize();
	_antecedentNATListBasedSettings.initialize();
	_antecedentFileSystemSettingData.initialize();
	_antecedentDatabaseSegmentSettingData.initialize();
	_antecedentAHTransform.initialize();
	_antecedentESPTransform.initialize();
	_antecedentIPCOMPTransform.initialize();
	_antecedentIPsecProposal.initialize();
	_antecedentIKEProposal.initialize();
	_antecedentTimeoutsForNATTranslation.initialize();
	_antecedentDatabaseParameter.initialize();
	_antecedentBootConfigSetting.initialize();
	_antecedentiSCSISessionSettings.initialize();
	_antecedentSWRLimitSetting.initialize();
	_antecedentMPLSQosPRTrfcProf.initialize();
	_antecedentMPLSCRLSPTrfcProf.initialize();
	_antecedentSSHSettingData.initialize();
	_antecedentOSStorageNameBinding.initialize();
	_antecedentStorageBridgeNameBinding.initialize();
	_antecedentSynchronizationAspect.initialize();
	_antecedentAccountSettingData.initialize();
	_antecedentLAGPortPartnerSettings.initialize();
	_antecedentStorageSetting.initialize();
	_antecedentAdvancedStorageSetting.initialize();
	_antecedentStorageSettingWithHints.initialize();
	_antecedentNetworkPolicyActionSettingData.initialize();
	_antecedentLoadBalancingActionSettingData.initialize();
	_antecedentVideoHeadResolution.initialize();
	_antecedentImportedFileShareSetting.initialize();
	_antecedentiSCSIConnectionSettings.initialize();
	_antecedentTierSettingData.initialize();
	_antecedentTierPolicySettingData.initialize();
	_antecedentIEEE8021xSettings.initialize();
	_antecedentZoneMembershipSettingData.initialize();
	_antecedentGARPMembershipSettingData.initialize();
	_antecedentVLANMembershipSettingData.initialize();
	_antecedentEnabledLogicalElementSettingData.initialize();
	_antecedentVLANSystemSettingData.initialize();
	_antecedentRedundancySetSettingData.initialize();
	_dependentFirewallRuleSettingData.initialize();
	_dependentLoadBalancingRuleSettingData.initialize();
	_dependentQoSPolicyRuleSettingData.initialize();
	_dependentVLANEndpointSettingData.initialize();
	_dependentCLPSettingData.initialize();
	_dependentStorageClientSettingData.initialize();
	_dependentCPUDiagnosticSettingData.initialize();
	_dependentRAIDDiagnosticSettingData.initialize();
	_dependentDiskDriveDiagnosticSettingData.initialize();
	_dependentFCHBADiagnosticSettingData.initialize();
	_dependentEthernetNICDiagnosticSettingData.initialize();
	_dependentSAEndpointRefreshSettings.initialize();
	_dependentWiFiEndpointSettings.initialize();
	_dependentLogicalPortSettings.initialize();
	_dependentNetworkPortSettings.initialize();
	_dependentFCPortSettings.initialize();
	_dependentReplicationSettingData.initialize();
	_dependentAccessControlServiceSettingData.initialize();
	_dependentTimeZoneSettingData.initialize();
	_dependentVirtualSystemSettingData.initialize();
	_dependentVirtualEthernetSwitchSettingData.initialize();
	_dependentFCIPSettings.initialize();
	_dependentIndicationServiceSettingData.initialize();
	_dependentBootSourceSetting.initialize();
	_dependentCommonDatabaseSettingData.initialize();
	_dependentBootSettingData.initialize();
	_dependentExportedFileShareSetting.initialize();
	_dependentPrintServiceSettings.initialize();
	_dependentStatisticalSetting.initialize();
	_dependentCIFSSettingData.initialize();
	_dependentIPVersionSettingData.initialize();
	_dependentIPSettings.initialize();
	_dependentStorageAllocationSettingData.initialize();
	_dependentProcessorAllocationSettingData.initialize();
	_dependentEthernetPortAllocationSettingData.initialize();
	_dependentPowerAllocationSettingData.initialize();
	_dependentTCPSettings.initialize();
	_dependentFileSystemSetting.initialize();
	_dependentJobSettingData.initialize();
	_dependentDHCPSettingData.initialize();
	_dependentStaticIPAssignmentSettingData.initialize();
	_dependentExtendedStaticIPAssignmentSettingData.initialize();
	_dependentDNSGeneralSettingData.initialize();
	_dependentDNSSettingData.initialize();
	_dependentFCSwitchSettings.initialize();
	_dependentConfigurationData.initialize();
	_dependentWiFiNetworkDetectionSettings.initialize();
	_dependentVirtualSystemMigrationSettingData.initialize();
	_dependentSCSIMultipathSettings.initialize();
	_dependentNATStaticSettings.initialize();
	_dependentNATListBasedSettings.initialize();
	_dependentFileSystemSettingData.initialize();
	_dependentDatabaseSegmentSettingData.initialize();
	_dependentAHTransform.initialize();
	_dependentESPTransform.initialize();
	_dependentIPCOMPTransform.initialize();
	_dependentIPsecProposal.initialize();
	_dependentIKEProposal.initialize();
	_dependentTimeoutsForNATTranslation.initialize();
	_dependentDatabaseParameter.initialize();
	_dependentBootConfigSetting.initialize();
	_dependentiSCSISessionSettings.initialize();
	_dependentSWRLimitSetting.initialize();
	_dependentMPLSQosPRTrfcProf.initialize();
	_dependentMPLSCRLSPTrfcProf.initialize();
	_dependentSSHSettingData.initialize();
	_dependentOSStorageNameBinding.initialize();
	_dependentStorageBridgeNameBinding.initialize();
	_dependentSynchronizationAspect.initialize();
	_dependentAccountSettingData.initialize();
	_dependentLAGPortPartnerSettings.initialize();
	_dependentStorageSetting.initialize();
	_dependentAdvancedStorageSetting.initialize();
	_dependentStorageSettingWithHints.initialize();
	_dependentNetworkPolicyActionSettingData.initialize();
	_dependentLoadBalancingActionSettingData.initialize();
	_dependentVideoHeadResolution.initialize();
	_dependentImportedFileShareSetting.initialize();
	_dependentiSCSIConnectionSettings.initialize();
	_dependentTierSettingData.initialize();
	_dependentTierPolicySettingData.initialize();
	_dependentIEEE8021xSettings.initialize();
	_dependentZoneMembershipSettingData.initialize();
	_dependentGARPMembershipSettingData.initialize();
	_dependentVLANMembershipSettingData.initialize();
	_dependentEnabledLogicalElementSettingData.initialize();
	_dependentVLANSystemSettingData.initialize();
	_dependentRedundancySetSettingData.initialize();
	return true;
}
Boolean UNIX_SettingsAffectSettings::load(int &pIndex)
{

	_antecedent = _antecedentFirewallRuleSettingDataProvider.constructInstance(
		CIMName("UNIX_FirewallRuleSettingData"),
		CIMNamespaceName("root/cimv2"),
		_antecedentFirewallRuleSettingData);
	_dependent = _dependentFirewallRuleSettingDataProvider.constructInstance(
		CIMName("UNIX_FirewallRuleSettingData"),
		CIMNamespaceName("root/cimv2"),
		_dependentFirewallRuleSettingData);
	_affect = Uint16(0);

	return false;
}

Boolean UNIX_SettingsAffectSettings::finalize()
{
	_antecedentFirewallRuleSettingData.finalize();
	_antecedentLoadBalancingRuleSettingData.finalize();
	_antecedentQoSPolicyRuleSettingData.finalize();
	_antecedentVLANEndpointSettingData.finalize();
	_antecedentCLPSettingData.finalize();
	_antecedentStorageClientSettingData.finalize();
	_antecedentCPUDiagnosticSettingData.finalize();
	_antecedentRAIDDiagnosticSettingData.finalize();
	_antecedentDiskDriveDiagnosticSettingData.finalize();
	_antecedentFCHBADiagnosticSettingData.finalize();
	_antecedentEthernetNICDiagnosticSettingData.finalize();
	_antecedentSAEndpointRefreshSettings.finalize();
	_antecedentWiFiEndpointSettings.finalize();
	_antecedentLogicalPortSettings.finalize();
	_antecedentNetworkPortSettings.finalize();
	_antecedentFCPortSettings.finalize();
	_antecedentReplicationSettingData.finalize();
	_antecedentAccessControlServiceSettingData.finalize();
	_antecedentTimeZoneSettingData.finalize();
	_antecedentVirtualSystemSettingData.finalize();
	_antecedentVirtualEthernetSwitchSettingData.finalize();
	_antecedentFCIPSettings.finalize();
	_antecedentIndicationServiceSettingData.finalize();
	_antecedentBootSourceSetting.finalize();
	_antecedentCommonDatabaseSettingData.finalize();
	_antecedentBootSettingData.finalize();
	_antecedentExportedFileShareSetting.finalize();
	_antecedentPrintServiceSettings.finalize();
	_antecedentStatisticalSetting.finalize();
	_antecedentCIFSSettingData.finalize();
	_antecedentIPVersionSettingData.finalize();
	_antecedentIPSettings.finalize();
	_antecedentStorageAllocationSettingData.finalize();
	_antecedentProcessorAllocationSettingData.finalize();
	_antecedentEthernetPortAllocationSettingData.finalize();
	_antecedentPowerAllocationSettingData.finalize();
	_antecedentTCPSettings.finalize();
	_antecedentFileSystemSetting.finalize();
	_antecedentJobSettingData.finalize();
	_antecedentDHCPSettingData.finalize();
	_antecedentStaticIPAssignmentSettingData.finalize();
	_antecedentExtendedStaticIPAssignmentSettingData.finalize();
	_antecedentDNSGeneralSettingData.finalize();
	_antecedentDNSSettingData.finalize();
	_antecedentFCSwitchSettings.finalize();
	_antecedentConfigurationData.finalize();
	_antecedentWiFiNetworkDetectionSettings.finalize();
	_antecedentVirtualSystemMigrationSettingData.finalize();
	_antecedentSCSIMultipathSettings.finalize();
	_antecedentNATStaticSettings.finalize();
	_antecedentNATListBasedSettings.finalize();
	_antecedentFileSystemSettingData.finalize();
	_antecedentDatabaseSegmentSettingData.finalize();
	_antecedentAHTransform.finalize();
	_antecedentESPTransform.finalize();
	_antecedentIPCOMPTransform.finalize();
	_antecedentIPsecProposal.finalize();
	_antecedentIKEProposal.finalize();
	_antecedentTimeoutsForNATTranslation.finalize();
	_antecedentDatabaseParameter.finalize();
	_antecedentBootConfigSetting.finalize();
	_antecedentiSCSISessionSettings.finalize();
	_antecedentSWRLimitSetting.finalize();
	_antecedentMPLSQosPRTrfcProf.finalize();
	_antecedentMPLSCRLSPTrfcProf.finalize();
	_antecedentSSHSettingData.finalize();
	_antecedentOSStorageNameBinding.finalize();
	_antecedentStorageBridgeNameBinding.finalize();
	_antecedentSynchronizationAspect.finalize();
	_antecedentAccountSettingData.finalize();
	_antecedentLAGPortPartnerSettings.finalize();
	_antecedentStorageSetting.finalize();
	_antecedentAdvancedStorageSetting.finalize();
	_antecedentStorageSettingWithHints.finalize();
	_antecedentNetworkPolicyActionSettingData.finalize();
	_antecedentLoadBalancingActionSettingData.finalize();
	_antecedentVideoHeadResolution.finalize();
	_antecedentImportedFileShareSetting.finalize();
	_antecedentiSCSIConnectionSettings.finalize();
	_antecedentTierSettingData.finalize();
	_antecedentTierPolicySettingData.finalize();
	_antecedentIEEE8021xSettings.finalize();
	_antecedentZoneMembershipSettingData.finalize();
	_antecedentGARPMembershipSettingData.finalize();
	_antecedentVLANMembershipSettingData.finalize();
	_antecedentEnabledLogicalElementSettingData.finalize();
	_antecedentVLANSystemSettingData.finalize();
	_antecedentRedundancySetSettingData.finalize();
	_dependentFirewallRuleSettingData.finalize();
	_dependentLoadBalancingRuleSettingData.finalize();
	_dependentQoSPolicyRuleSettingData.finalize();
	_dependentVLANEndpointSettingData.finalize();
	_dependentCLPSettingData.finalize();
	_dependentStorageClientSettingData.finalize();
	_dependentCPUDiagnosticSettingData.finalize();
	_dependentRAIDDiagnosticSettingData.finalize();
	_dependentDiskDriveDiagnosticSettingData.finalize();
	_dependentFCHBADiagnosticSettingData.finalize();
	_dependentEthernetNICDiagnosticSettingData.finalize();
	_dependentSAEndpointRefreshSettings.finalize();
	_dependentWiFiEndpointSettings.finalize();
	_dependentLogicalPortSettings.finalize();
	_dependentNetworkPortSettings.finalize();
	_dependentFCPortSettings.finalize();
	_dependentReplicationSettingData.finalize();
	_dependentAccessControlServiceSettingData.finalize();
	_dependentTimeZoneSettingData.finalize();
	_dependentVirtualSystemSettingData.finalize();
	_dependentVirtualEthernetSwitchSettingData.finalize();
	_dependentFCIPSettings.finalize();
	_dependentIndicationServiceSettingData.finalize();
	_dependentBootSourceSetting.finalize();
	_dependentCommonDatabaseSettingData.finalize();
	_dependentBootSettingData.finalize();
	_dependentExportedFileShareSetting.finalize();
	_dependentPrintServiceSettings.finalize();
	_dependentStatisticalSetting.finalize();
	_dependentCIFSSettingData.finalize();
	_dependentIPVersionSettingData.finalize();
	_dependentIPSettings.finalize();
	_dependentStorageAllocationSettingData.finalize();
	_dependentProcessorAllocationSettingData.finalize();
	_dependentEthernetPortAllocationSettingData.finalize();
	_dependentPowerAllocationSettingData.finalize();
	_dependentTCPSettings.finalize();
	_dependentFileSystemSetting.finalize();
	_dependentJobSettingData.finalize();
	_dependentDHCPSettingData.finalize();
	_dependentStaticIPAssignmentSettingData.finalize();
	_dependentExtendedStaticIPAssignmentSettingData.finalize();
	_dependentDNSGeneralSettingData.finalize();
	_dependentDNSSettingData.finalize();
	_dependentFCSwitchSettings.finalize();
	_dependentConfigurationData.finalize();
	_dependentWiFiNetworkDetectionSettings.finalize();
	_dependentVirtualSystemMigrationSettingData.finalize();
	_dependentSCSIMultipathSettings.finalize();
	_dependentNATStaticSettings.finalize();
	_dependentNATListBasedSettings.finalize();
	_dependentFileSystemSettingData.finalize();
	_dependentDatabaseSegmentSettingData.finalize();
	_dependentAHTransform.finalize();
	_dependentESPTransform.finalize();
	_dependentIPCOMPTransform.finalize();
	_dependentIPsecProposal.finalize();
	_dependentIKEProposal.finalize();
	_dependentTimeoutsForNATTranslation.finalize();
	_dependentDatabaseParameter.finalize();
	_dependentBootConfigSetting.finalize();
	_dependentiSCSISessionSettings.finalize();
	_dependentSWRLimitSetting.finalize();
	_dependentMPLSQosPRTrfcProf.finalize();
	_dependentMPLSCRLSPTrfcProf.finalize();
	_dependentSSHSettingData.finalize();
	_dependentOSStorageNameBinding.finalize();
	_dependentStorageBridgeNameBinding.finalize();
	_dependentSynchronizationAspect.finalize();
	_dependentAccountSettingData.finalize();
	_dependentLAGPortPartnerSettings.finalize();
	_dependentStorageSetting.finalize();
	_dependentAdvancedStorageSetting.finalize();
	_dependentStorageSettingWithHints.finalize();
	_dependentNetworkPolicyActionSettingData.finalize();
	_dependentLoadBalancingActionSettingData.finalize();
	_dependentVideoHeadResolution.finalize();
	_dependentImportedFileShareSetting.finalize();
	_dependentiSCSIConnectionSettings.finalize();
	_dependentTierSettingData.finalize();
	_dependentTierPolicySettingData.finalize();
	_dependentIEEE8021xSettings.finalize();
	_dependentZoneMembershipSettingData.finalize();
	_dependentGARPMembershipSettingData.finalize();
	_dependentVLANMembershipSettingData.finalize();
	_dependentEnabledLogicalElementSettingData.finalize();
	_dependentVLANSystemSettingData.finalize();
	_dependentRedundancySetSettingData.finalize();
	return true;
}


Boolean UNIX_SettingsAffectSettings::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_SettingsAffectSettings::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SettingsAffectSettings::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SettingsAffectSettings::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SettingsAffectSettings::validateInstance()
{
	return true;
}

