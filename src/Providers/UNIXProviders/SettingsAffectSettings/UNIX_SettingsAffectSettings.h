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


/* **** Experimental *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.14.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Core::Settings
*/


/* **** Description *** */
/*
CIM_SettingsAffectSettings is used to define a relationship between two CIM_SettingData instances where the utilization of one CIM_SettingData has a causal relationship to the applicability or utilization of another CIM_SettingData instance. This class may be used to indicate that applying the Antecedent SettingData to one ManagedElement will result in another ManagedElement having the configuration specified by the Dependent SettingData. It may also be used with the SettingsDefineCapabilities association to indicate that applying the Antecedent SettingData to one ManagedElement will change the capabilities of another to those of the Dependent SettingData.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			UNIX_SettingsAffectSettings:
				Affect UInt16


*/


/*
			 *** Methods ***

			CIM_Dependency:

			UNIX_SettingsAffectSettings:


*/

#ifndef __UNIX_SETTINGSAFFECTSETTINGS_H
#define __UNIX_SETTINGSAFFECTSETTINGS_H


#include "CIM_Dependency.h"
#include <FirewallRuleSettingData/UNIX_FirewallRuleSettingDataProvider.h>
#include <LoadBalancingRuleSettingData/UNIX_LoadBalancingRuleSettingDataProvider.h>
#include <QoSPolicyRuleSettingData/UNIX_QoSPolicyRuleSettingDataProvider.h>
#include <VLANEndpointSettingData/UNIX_VLANEndpointSettingDataProvider.h>
#include <CLPSettingData/UNIX_CLPSettingDataProvider.h>
#include <StorageClientSettingData/UNIX_StorageClientSettingDataProvider.h>
#include <CPUDiagnosticSettingData/UNIX_CPUDiagnosticSettingDataProvider.h>
#include <RAIDDiagnosticSettingData/UNIX_RAIDDiagnosticSettingDataProvider.h>
#include <DiskDriveDiagnosticSettingData/UNIX_DiskDriveDiagnosticSettingDataProvider.h>
#include <FCHBADiagnosticSettingData/UNIX_FCHBADiagnosticSettingDataProvider.h>
#include <EthernetNICDiagnosticSettingData/UNIX_EthernetNICDiagnosticSettingDataProvider.h>
#include <SAEndpointRefreshSettings/UNIX_SAEndpointRefreshSettingsProvider.h>
#include <WiFiEndpointSettings/UNIX_WiFiEndpointSettingsProvider.h>
#include <LogicalPortSettings/UNIX_LogicalPortSettingsProvider.h>
#include <NetworkPortSettings/UNIX_NetworkPortSettingsProvider.h>
#include <FCPortSettings/UNIX_FCPortSettingsProvider.h>
#include <ReplicationSettingData/UNIX_ReplicationSettingDataProvider.h>
#include <AccessControlServiceSettingData/UNIX_AccessControlServiceSettingDataProvider.h>
#include <TimeZoneSettingData/UNIX_TimeZoneSettingDataProvider.h>
#include <VirtualSystemSettingData/UNIX_VirtualSystemSettingDataProvider.h>
#include <VirtualEthernetSwitchSettingData/UNIX_VirtualEthernetSwitchSettingDataProvider.h>
#include <FCIPSettings/UNIX_FCIPSettingsProvider.h>
#include <IndicationServiceSettingData/UNIX_IndicationServiceSettingDataProvider.h>
#include <BootSourceSetting/UNIX_BootSourceSettingProvider.h>
#include <CommonDatabaseSettingData/UNIX_CommonDatabaseSettingDataProvider.h>
#include <BootSettingData/UNIX_BootSettingDataProvider.h>
#include <ExportedFileShareSetting/UNIX_ExportedFileShareSettingProvider.h>
#include <PrintServiceSettings/UNIX_PrintServiceSettingsProvider.h>
#include <StatisticalSetting/UNIX_StatisticalSettingProvider.h>
#include <CIFSSettingData/UNIX_CIFSSettingDataProvider.h>
#include <IPVersionSettingData/UNIX_IPVersionSettingDataProvider.h>
#include <IPSettings/UNIX_IPSettingsProvider.h>
#include <StorageAllocationSettingData/UNIX_StorageAllocationSettingDataProvider.h>
#include <ProcessorAllocationSettingData/UNIX_ProcessorAllocationSettingDataProvider.h>
#include <EthernetPortAllocationSettingData/UNIX_EthernetPortAllocationSettingDataProvider.h>
#include <PowerAllocationSettingData/UNIX_PowerAllocationSettingDataProvider.h>
#include <TCPSettings/UNIX_TCPSettingsProvider.h>
#include <FileSystemSetting/UNIX_FileSystemSettingProvider.h>
#include <JobSettingData/UNIX_JobSettingDataProvider.h>
#include <DHCPSettingData/UNIX_DHCPSettingDataProvider.h>
#include <StaticIPAssignmentSettingData/UNIX_StaticIPAssignmentSettingDataProvider.h>
#include <ExtendedStaticIPAssignmentSettingData/UNIX_ExtendedStaticIPAssignmentSettingDataProvider.h>
#include <DNSGeneralSettingData/UNIX_DNSGeneralSettingDataProvider.h>
#include <DNSSettingData/UNIX_DNSSettingDataProvider.h>
#include <FCSwitchSettings/UNIX_FCSwitchSettingsProvider.h>
#include <ConfigurationData/UNIX_ConfigurationDataProvider.h>
#include <WiFiNetworkDetectionSettings/UNIX_WiFiNetworkDetectionSettingsProvider.h>
#include <VirtualSystemMigrationSettingData/UNIX_VirtualSystemMigrationSettingDataProvider.h>
#include <SCSIMultipathSettings/UNIX_SCSIMultipathSettingsProvider.h>
#include <NATStaticSettings/UNIX_NATStaticSettingsProvider.h>
#include <NATListBasedSettings/UNIX_NATListBasedSettingsProvider.h>
#include <FileSystemSettingData/UNIX_FileSystemSettingDataProvider.h>
#include <DatabaseSegmentSettingData/UNIX_DatabaseSegmentSettingDataProvider.h>
#include <AHTransform/UNIX_AHTransformProvider.h>
#include <ESPTransform/UNIX_ESPTransformProvider.h>
#include <IPCOMPTransform/UNIX_IPCOMPTransformProvider.h>
#include <IPsecProposal/UNIX_IPsecProposalProvider.h>
#include <IKEProposal/UNIX_IKEProposalProvider.h>
#include <TimeoutsForNATTranslation/UNIX_TimeoutsForNATTranslationProvider.h>
#include <DatabaseParameter/UNIX_DatabaseParameterProvider.h>
#include <BootConfigSetting/UNIX_BootConfigSettingProvider.h>
#include <iSCSISessionSettings/UNIX_iSCSISessionSettingsProvider.h>
#include <SWRLimitSetting/UNIX_SWRLimitSettingProvider.h>
#include <MPLSQosPRTrfcProf/UNIX_MPLSQosPRTrfcProfProvider.h>
#include <MPLSCRLSPTrfcProf/UNIX_MPLSCRLSPTrfcProfProvider.h>
#include <SSHSettingData/UNIX_SSHSettingDataProvider.h>
#include <OSStorageNameBinding/UNIX_OSStorageNameBindingProvider.h>
#include <StorageBridgeNameBinding/UNIX_StorageBridgeNameBindingProvider.h>
#include <SynchronizationAspect/UNIX_SynchronizationAspectProvider.h>
#include <AccountSettingData/UNIX_AccountSettingDataProvider.h>
#include <LAGPortPartnerSettings/UNIX_LAGPortPartnerSettingsProvider.h>
#include <StorageSetting/UNIX_StorageSettingProvider.h>
#include <AdvancedStorageSetting/UNIX_AdvancedStorageSettingProvider.h>
#include <StorageSettingWithHints/UNIX_StorageSettingWithHintsProvider.h>
#include <NetworkPolicyActionSettingData/UNIX_NetworkPolicyActionSettingDataProvider.h>
#include <LoadBalancingActionSettingData/UNIX_LoadBalancingActionSettingDataProvider.h>
#include <VideoHeadResolution/UNIX_VideoHeadResolutionProvider.h>
#include <ImportedFileShareSetting/UNIX_ImportedFileShareSettingProvider.h>
#include <iSCSIConnectionSettings/UNIX_iSCSIConnectionSettingsProvider.h>
#include <TierSettingData/UNIX_TierSettingDataProvider.h>
#include <TierPolicySettingData/UNIX_TierPolicySettingDataProvider.h>
#include <IEEE8021xSettings/UNIX_IEEE8021xSettingsProvider.h>
#include <ZoneMembershipSettingData/UNIX_ZoneMembershipSettingDataProvider.h>
#include <GARPMembershipSettingData/UNIX_GARPMembershipSettingDataProvider.h>
#include <VLANMembershipSettingData/UNIX_VLANMembershipSettingDataProvider.h>
#include <EnabledLogicalElementSettingData/UNIX_EnabledLogicalElementSettingDataProvider.h>
#include <VLANSystemSettingData/UNIX_VLANSystemSettingDataProvider.h>
#include <RedundancySetSettingData/UNIX_RedundancySetSettingDataProvider.h>

#include "UNIX_SettingsAffectSettingsDeps.h"


#ifndef PROPERTY_AFFECT
#define PROPERTY_AFFECT \
					"Affect"
#endif



class UNIX_SettingsAffectSettings :
	public CIM_Dependency
{
public:

	UNIX_SettingsAffectSettings();
	~UNIX_SettingsAffectSettings();

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
	virtual Boolean getAffect(CIMProperty&) const;
	virtual Uint16 getAffect() const;
	virtual void setAffect(Uint16&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _antecedent;
	CIMInstance _dependent;
	Uint16 _affect;

UNIX_FirewallRuleSettingData _antecedentFirewallRuleSettingData;
UNIX_FirewallRuleSettingDataProvider _antecedentFirewallRuleSettingDataProvider;
UNIX_LoadBalancingRuleSettingData _antecedentLoadBalancingRuleSettingData;
UNIX_LoadBalancingRuleSettingDataProvider _antecedentLoadBalancingRuleSettingDataProvider;
UNIX_QoSPolicyRuleSettingData _antecedentQoSPolicyRuleSettingData;
UNIX_QoSPolicyRuleSettingDataProvider _antecedentQoSPolicyRuleSettingDataProvider;
UNIX_VLANEndpointSettingData _antecedentVLANEndpointSettingData;
UNIX_VLANEndpointSettingDataProvider _antecedentVLANEndpointSettingDataProvider;
UNIX_CLPSettingData _antecedentCLPSettingData;
UNIX_CLPSettingDataProvider _antecedentCLPSettingDataProvider;
UNIX_StorageClientSettingData _antecedentStorageClientSettingData;
UNIX_StorageClientSettingDataProvider _antecedentStorageClientSettingDataProvider;
UNIX_CPUDiagnosticSettingData _antecedentCPUDiagnosticSettingData;
UNIX_CPUDiagnosticSettingDataProvider _antecedentCPUDiagnosticSettingDataProvider;
UNIX_RAIDDiagnosticSettingData _antecedentRAIDDiagnosticSettingData;
UNIX_RAIDDiagnosticSettingDataProvider _antecedentRAIDDiagnosticSettingDataProvider;
UNIX_DiskDriveDiagnosticSettingData _antecedentDiskDriveDiagnosticSettingData;
UNIX_DiskDriveDiagnosticSettingDataProvider _antecedentDiskDriveDiagnosticSettingDataProvider;
UNIX_FCHBADiagnosticSettingData _antecedentFCHBADiagnosticSettingData;
UNIX_FCHBADiagnosticSettingDataProvider _antecedentFCHBADiagnosticSettingDataProvider;
UNIX_EthernetNICDiagnosticSettingData _antecedentEthernetNICDiagnosticSettingData;
UNIX_EthernetNICDiagnosticSettingDataProvider _antecedentEthernetNICDiagnosticSettingDataProvider;
UNIX_SAEndpointRefreshSettings _antecedentSAEndpointRefreshSettings;
UNIX_SAEndpointRefreshSettingsProvider _antecedentSAEndpointRefreshSettingsProvider;
UNIX_WiFiEndpointSettings _antecedentWiFiEndpointSettings;
UNIX_WiFiEndpointSettingsProvider _antecedentWiFiEndpointSettingsProvider;
UNIX_LogicalPortSettings _antecedentLogicalPortSettings;
UNIX_LogicalPortSettingsProvider _antecedentLogicalPortSettingsProvider;
UNIX_NetworkPortSettings _antecedentNetworkPortSettings;
UNIX_NetworkPortSettingsProvider _antecedentNetworkPortSettingsProvider;
UNIX_FCPortSettings _antecedentFCPortSettings;
UNIX_FCPortSettingsProvider _antecedentFCPortSettingsProvider;
UNIX_ReplicationSettingData _antecedentReplicationSettingData;
UNIX_ReplicationSettingDataProvider _antecedentReplicationSettingDataProvider;
UNIX_AccessControlServiceSettingData _antecedentAccessControlServiceSettingData;
UNIX_AccessControlServiceSettingDataProvider _antecedentAccessControlServiceSettingDataProvider;
UNIX_TimeZoneSettingData _antecedentTimeZoneSettingData;
UNIX_TimeZoneSettingDataProvider _antecedentTimeZoneSettingDataProvider;
UNIX_VirtualSystemSettingData _antecedentVirtualSystemSettingData;
UNIX_VirtualSystemSettingDataProvider _antecedentVirtualSystemSettingDataProvider;
UNIX_VirtualEthernetSwitchSettingData _antecedentVirtualEthernetSwitchSettingData;
UNIX_VirtualEthernetSwitchSettingDataProvider _antecedentVirtualEthernetSwitchSettingDataProvider;
UNIX_FCIPSettings _antecedentFCIPSettings;
UNIX_FCIPSettingsProvider _antecedentFCIPSettingsProvider;
UNIX_IndicationServiceSettingData _antecedentIndicationServiceSettingData;
UNIX_IndicationServiceSettingDataProvider _antecedentIndicationServiceSettingDataProvider;
UNIX_BootSourceSetting _antecedentBootSourceSetting;
UNIX_BootSourceSettingProvider _antecedentBootSourceSettingProvider;
UNIX_CommonDatabaseSettingData _antecedentCommonDatabaseSettingData;
UNIX_CommonDatabaseSettingDataProvider _antecedentCommonDatabaseSettingDataProvider;
UNIX_BootSettingData _antecedentBootSettingData;
UNIX_BootSettingDataProvider _antecedentBootSettingDataProvider;
UNIX_ExportedFileShareSetting _antecedentExportedFileShareSetting;
UNIX_ExportedFileShareSettingProvider _antecedentExportedFileShareSettingProvider;
UNIX_PrintServiceSettings _antecedentPrintServiceSettings;
UNIX_PrintServiceSettingsProvider _antecedentPrintServiceSettingsProvider;
UNIX_StatisticalSetting _antecedentStatisticalSetting;
UNIX_StatisticalSettingProvider _antecedentStatisticalSettingProvider;
UNIX_CIFSSettingData _antecedentCIFSSettingData;
UNIX_CIFSSettingDataProvider _antecedentCIFSSettingDataProvider;
UNIX_IPVersionSettingData _antecedentIPVersionSettingData;
UNIX_IPVersionSettingDataProvider _antecedentIPVersionSettingDataProvider;
UNIX_IPSettings _antecedentIPSettings;
UNIX_IPSettingsProvider _antecedentIPSettingsProvider;
UNIX_StorageAllocationSettingData _antecedentStorageAllocationSettingData;
UNIX_StorageAllocationSettingDataProvider _antecedentStorageAllocationSettingDataProvider;
UNIX_ProcessorAllocationSettingData _antecedentProcessorAllocationSettingData;
UNIX_ProcessorAllocationSettingDataProvider _antecedentProcessorAllocationSettingDataProvider;
UNIX_EthernetPortAllocationSettingData _antecedentEthernetPortAllocationSettingData;
UNIX_EthernetPortAllocationSettingDataProvider _antecedentEthernetPortAllocationSettingDataProvider;
UNIX_PowerAllocationSettingData _antecedentPowerAllocationSettingData;
UNIX_PowerAllocationSettingDataProvider _antecedentPowerAllocationSettingDataProvider;
UNIX_TCPSettings _antecedentTCPSettings;
UNIX_TCPSettingsProvider _antecedentTCPSettingsProvider;
UNIX_FileSystemSetting _antecedentFileSystemSetting;
UNIX_FileSystemSettingProvider _antecedentFileSystemSettingProvider;
UNIX_JobSettingData _antecedentJobSettingData;
UNIX_JobSettingDataProvider _antecedentJobSettingDataProvider;
UNIX_DHCPSettingData _antecedentDHCPSettingData;
UNIX_DHCPSettingDataProvider _antecedentDHCPSettingDataProvider;
UNIX_StaticIPAssignmentSettingData _antecedentStaticIPAssignmentSettingData;
UNIX_StaticIPAssignmentSettingDataProvider _antecedentStaticIPAssignmentSettingDataProvider;
UNIX_ExtendedStaticIPAssignmentSettingData _antecedentExtendedStaticIPAssignmentSettingData;
UNIX_ExtendedStaticIPAssignmentSettingDataProvider _antecedentExtendedStaticIPAssignmentSettingDataProvider;
UNIX_DNSGeneralSettingData _antecedentDNSGeneralSettingData;
UNIX_DNSGeneralSettingDataProvider _antecedentDNSGeneralSettingDataProvider;
UNIX_DNSSettingData _antecedentDNSSettingData;
UNIX_DNSSettingDataProvider _antecedentDNSSettingDataProvider;
UNIX_FCSwitchSettings _antecedentFCSwitchSettings;
UNIX_FCSwitchSettingsProvider _antecedentFCSwitchSettingsProvider;
UNIX_ConfigurationData _antecedentConfigurationData;
UNIX_ConfigurationDataProvider _antecedentConfigurationDataProvider;
UNIX_WiFiNetworkDetectionSettings _antecedentWiFiNetworkDetectionSettings;
UNIX_WiFiNetworkDetectionSettingsProvider _antecedentWiFiNetworkDetectionSettingsProvider;
UNIX_VirtualSystemMigrationSettingData _antecedentVirtualSystemMigrationSettingData;
UNIX_VirtualSystemMigrationSettingDataProvider _antecedentVirtualSystemMigrationSettingDataProvider;
UNIX_SCSIMultipathSettings _antecedentSCSIMultipathSettings;
UNIX_SCSIMultipathSettingsProvider _antecedentSCSIMultipathSettingsProvider;
UNIX_NATStaticSettings _antecedentNATStaticSettings;
UNIX_NATStaticSettingsProvider _antecedentNATStaticSettingsProvider;
UNIX_NATListBasedSettings _antecedentNATListBasedSettings;
UNIX_NATListBasedSettingsProvider _antecedentNATListBasedSettingsProvider;
UNIX_FileSystemSettingData _antecedentFileSystemSettingData;
UNIX_FileSystemSettingDataProvider _antecedentFileSystemSettingDataProvider;
UNIX_DatabaseSegmentSettingData _antecedentDatabaseSegmentSettingData;
UNIX_DatabaseSegmentSettingDataProvider _antecedentDatabaseSegmentSettingDataProvider;
UNIX_AHTransform _antecedentAHTransform;
UNIX_AHTransformProvider _antecedentAHTransformProvider;
UNIX_ESPTransform _antecedentESPTransform;
UNIX_ESPTransformProvider _antecedentESPTransformProvider;
UNIX_IPCOMPTransform _antecedentIPCOMPTransform;
UNIX_IPCOMPTransformProvider _antecedentIPCOMPTransformProvider;
UNIX_IPsecProposal _antecedentIPsecProposal;
UNIX_IPsecProposalProvider _antecedentIPsecProposalProvider;
UNIX_IKEProposal _antecedentIKEProposal;
UNIX_IKEProposalProvider _antecedentIKEProposalProvider;
UNIX_TimeoutsForNATTranslation _antecedentTimeoutsForNATTranslation;
UNIX_TimeoutsForNATTranslationProvider _antecedentTimeoutsForNATTranslationProvider;
UNIX_DatabaseParameter _antecedentDatabaseParameter;
UNIX_DatabaseParameterProvider _antecedentDatabaseParameterProvider;
UNIX_BootConfigSetting _antecedentBootConfigSetting;
UNIX_BootConfigSettingProvider _antecedentBootConfigSettingProvider;
UNIX_iSCSISessionSettings _antecedentiSCSISessionSettings;
UNIX_iSCSISessionSettingsProvider _antecedentiSCSISessionSettingsProvider;
UNIX_SWRLimitSetting _antecedentSWRLimitSetting;
UNIX_SWRLimitSettingProvider _antecedentSWRLimitSettingProvider;
UNIX_MPLSQosPRTrfcProf _antecedentMPLSQosPRTrfcProf;
UNIX_MPLSQosPRTrfcProfProvider _antecedentMPLSQosPRTrfcProfProvider;
UNIX_MPLSCRLSPTrfcProf _antecedentMPLSCRLSPTrfcProf;
UNIX_MPLSCRLSPTrfcProfProvider _antecedentMPLSCRLSPTrfcProfProvider;
UNIX_SSHSettingData _antecedentSSHSettingData;
UNIX_SSHSettingDataProvider _antecedentSSHSettingDataProvider;
UNIX_OSStorageNameBinding _antecedentOSStorageNameBinding;
UNIX_OSStorageNameBindingProvider _antecedentOSStorageNameBindingProvider;
UNIX_StorageBridgeNameBinding _antecedentStorageBridgeNameBinding;
UNIX_StorageBridgeNameBindingProvider _antecedentStorageBridgeNameBindingProvider;
UNIX_SynchronizationAspect _antecedentSynchronizationAspect;
UNIX_SynchronizationAspectProvider _antecedentSynchronizationAspectProvider;
UNIX_AccountSettingData _antecedentAccountSettingData;
UNIX_AccountSettingDataProvider _antecedentAccountSettingDataProvider;
UNIX_LAGPortPartnerSettings _antecedentLAGPortPartnerSettings;
UNIX_LAGPortPartnerSettingsProvider _antecedentLAGPortPartnerSettingsProvider;
UNIX_StorageSetting _antecedentStorageSetting;
UNIX_StorageSettingProvider _antecedentStorageSettingProvider;
UNIX_AdvancedStorageSetting _antecedentAdvancedStorageSetting;
UNIX_AdvancedStorageSettingProvider _antecedentAdvancedStorageSettingProvider;
UNIX_StorageSettingWithHints _antecedentStorageSettingWithHints;
UNIX_StorageSettingWithHintsProvider _antecedentStorageSettingWithHintsProvider;
UNIX_NetworkPolicyActionSettingData _antecedentNetworkPolicyActionSettingData;
UNIX_NetworkPolicyActionSettingDataProvider _antecedentNetworkPolicyActionSettingDataProvider;
UNIX_LoadBalancingActionSettingData _antecedentLoadBalancingActionSettingData;
UNIX_LoadBalancingActionSettingDataProvider _antecedentLoadBalancingActionSettingDataProvider;
UNIX_VideoHeadResolution _antecedentVideoHeadResolution;
UNIX_VideoHeadResolutionProvider _antecedentVideoHeadResolutionProvider;
UNIX_ImportedFileShareSetting _antecedentImportedFileShareSetting;
UNIX_ImportedFileShareSettingProvider _antecedentImportedFileShareSettingProvider;
UNIX_iSCSIConnectionSettings _antecedentiSCSIConnectionSettings;
UNIX_iSCSIConnectionSettingsProvider _antecedentiSCSIConnectionSettingsProvider;
UNIX_TierSettingData _antecedentTierSettingData;
UNIX_TierSettingDataProvider _antecedentTierSettingDataProvider;
UNIX_TierPolicySettingData _antecedentTierPolicySettingData;
UNIX_TierPolicySettingDataProvider _antecedentTierPolicySettingDataProvider;
UNIX_IEEE8021xSettings _antecedentIEEE8021xSettings;
UNIX_IEEE8021xSettingsProvider _antecedentIEEE8021xSettingsProvider;
UNIX_ZoneMembershipSettingData _antecedentZoneMembershipSettingData;
UNIX_ZoneMembershipSettingDataProvider _antecedentZoneMembershipSettingDataProvider;
UNIX_GARPMembershipSettingData _antecedentGARPMembershipSettingData;
UNIX_GARPMembershipSettingDataProvider _antecedentGARPMembershipSettingDataProvider;
UNIX_VLANMembershipSettingData _antecedentVLANMembershipSettingData;
UNIX_VLANMembershipSettingDataProvider _antecedentVLANMembershipSettingDataProvider;
UNIX_EnabledLogicalElementSettingData _antecedentEnabledLogicalElementSettingData;
UNIX_EnabledLogicalElementSettingDataProvider _antecedentEnabledLogicalElementSettingDataProvider;
UNIX_VLANSystemSettingData _antecedentVLANSystemSettingData;
UNIX_VLANSystemSettingDataProvider _antecedentVLANSystemSettingDataProvider;
UNIX_RedundancySetSettingData _antecedentRedundancySetSettingData;
UNIX_RedundancySetSettingDataProvider _antecedentRedundancySetSettingDataProvider;

UNIX_FirewallRuleSettingData _dependentFirewallRuleSettingData;
UNIX_FirewallRuleSettingDataProvider _dependentFirewallRuleSettingDataProvider;
UNIX_LoadBalancingRuleSettingData _dependentLoadBalancingRuleSettingData;
UNIX_LoadBalancingRuleSettingDataProvider _dependentLoadBalancingRuleSettingDataProvider;
UNIX_QoSPolicyRuleSettingData _dependentQoSPolicyRuleSettingData;
UNIX_QoSPolicyRuleSettingDataProvider _dependentQoSPolicyRuleSettingDataProvider;
UNIX_VLANEndpointSettingData _dependentVLANEndpointSettingData;
UNIX_VLANEndpointSettingDataProvider _dependentVLANEndpointSettingDataProvider;
UNIX_CLPSettingData _dependentCLPSettingData;
UNIX_CLPSettingDataProvider _dependentCLPSettingDataProvider;
UNIX_StorageClientSettingData _dependentStorageClientSettingData;
UNIX_StorageClientSettingDataProvider _dependentStorageClientSettingDataProvider;
UNIX_CPUDiagnosticSettingData _dependentCPUDiagnosticSettingData;
UNIX_CPUDiagnosticSettingDataProvider _dependentCPUDiagnosticSettingDataProvider;
UNIX_RAIDDiagnosticSettingData _dependentRAIDDiagnosticSettingData;
UNIX_RAIDDiagnosticSettingDataProvider _dependentRAIDDiagnosticSettingDataProvider;
UNIX_DiskDriveDiagnosticSettingData _dependentDiskDriveDiagnosticSettingData;
UNIX_DiskDriveDiagnosticSettingDataProvider _dependentDiskDriveDiagnosticSettingDataProvider;
UNIX_FCHBADiagnosticSettingData _dependentFCHBADiagnosticSettingData;
UNIX_FCHBADiagnosticSettingDataProvider _dependentFCHBADiagnosticSettingDataProvider;
UNIX_EthernetNICDiagnosticSettingData _dependentEthernetNICDiagnosticSettingData;
UNIX_EthernetNICDiagnosticSettingDataProvider _dependentEthernetNICDiagnosticSettingDataProvider;
UNIX_SAEndpointRefreshSettings _dependentSAEndpointRefreshSettings;
UNIX_SAEndpointRefreshSettingsProvider _dependentSAEndpointRefreshSettingsProvider;
UNIX_WiFiEndpointSettings _dependentWiFiEndpointSettings;
UNIX_WiFiEndpointSettingsProvider _dependentWiFiEndpointSettingsProvider;
UNIX_LogicalPortSettings _dependentLogicalPortSettings;
UNIX_LogicalPortSettingsProvider _dependentLogicalPortSettingsProvider;
UNIX_NetworkPortSettings _dependentNetworkPortSettings;
UNIX_NetworkPortSettingsProvider _dependentNetworkPortSettingsProvider;
UNIX_FCPortSettings _dependentFCPortSettings;
UNIX_FCPortSettingsProvider _dependentFCPortSettingsProvider;
UNIX_ReplicationSettingData _dependentReplicationSettingData;
UNIX_ReplicationSettingDataProvider _dependentReplicationSettingDataProvider;
UNIX_AccessControlServiceSettingData _dependentAccessControlServiceSettingData;
UNIX_AccessControlServiceSettingDataProvider _dependentAccessControlServiceSettingDataProvider;
UNIX_TimeZoneSettingData _dependentTimeZoneSettingData;
UNIX_TimeZoneSettingDataProvider _dependentTimeZoneSettingDataProvider;
UNIX_VirtualSystemSettingData _dependentVirtualSystemSettingData;
UNIX_VirtualSystemSettingDataProvider _dependentVirtualSystemSettingDataProvider;
UNIX_VirtualEthernetSwitchSettingData _dependentVirtualEthernetSwitchSettingData;
UNIX_VirtualEthernetSwitchSettingDataProvider _dependentVirtualEthernetSwitchSettingDataProvider;
UNIX_FCIPSettings _dependentFCIPSettings;
UNIX_FCIPSettingsProvider _dependentFCIPSettingsProvider;
UNIX_IndicationServiceSettingData _dependentIndicationServiceSettingData;
UNIX_IndicationServiceSettingDataProvider _dependentIndicationServiceSettingDataProvider;
UNIX_BootSourceSetting _dependentBootSourceSetting;
UNIX_BootSourceSettingProvider _dependentBootSourceSettingProvider;
UNIX_CommonDatabaseSettingData _dependentCommonDatabaseSettingData;
UNIX_CommonDatabaseSettingDataProvider _dependentCommonDatabaseSettingDataProvider;
UNIX_BootSettingData _dependentBootSettingData;
UNIX_BootSettingDataProvider _dependentBootSettingDataProvider;
UNIX_ExportedFileShareSetting _dependentExportedFileShareSetting;
UNIX_ExportedFileShareSettingProvider _dependentExportedFileShareSettingProvider;
UNIX_PrintServiceSettings _dependentPrintServiceSettings;
UNIX_PrintServiceSettingsProvider _dependentPrintServiceSettingsProvider;
UNIX_StatisticalSetting _dependentStatisticalSetting;
UNIX_StatisticalSettingProvider _dependentStatisticalSettingProvider;
UNIX_CIFSSettingData _dependentCIFSSettingData;
UNIX_CIFSSettingDataProvider _dependentCIFSSettingDataProvider;
UNIX_IPVersionSettingData _dependentIPVersionSettingData;
UNIX_IPVersionSettingDataProvider _dependentIPVersionSettingDataProvider;
UNIX_IPSettings _dependentIPSettings;
UNIX_IPSettingsProvider _dependentIPSettingsProvider;
UNIX_StorageAllocationSettingData _dependentStorageAllocationSettingData;
UNIX_StorageAllocationSettingDataProvider _dependentStorageAllocationSettingDataProvider;
UNIX_ProcessorAllocationSettingData _dependentProcessorAllocationSettingData;
UNIX_ProcessorAllocationSettingDataProvider _dependentProcessorAllocationSettingDataProvider;
UNIX_EthernetPortAllocationSettingData _dependentEthernetPortAllocationSettingData;
UNIX_EthernetPortAllocationSettingDataProvider _dependentEthernetPortAllocationSettingDataProvider;
UNIX_PowerAllocationSettingData _dependentPowerAllocationSettingData;
UNIX_PowerAllocationSettingDataProvider _dependentPowerAllocationSettingDataProvider;
UNIX_TCPSettings _dependentTCPSettings;
UNIX_TCPSettingsProvider _dependentTCPSettingsProvider;
UNIX_FileSystemSetting _dependentFileSystemSetting;
UNIX_FileSystemSettingProvider _dependentFileSystemSettingProvider;
UNIX_JobSettingData _dependentJobSettingData;
UNIX_JobSettingDataProvider _dependentJobSettingDataProvider;
UNIX_DHCPSettingData _dependentDHCPSettingData;
UNIX_DHCPSettingDataProvider _dependentDHCPSettingDataProvider;
UNIX_StaticIPAssignmentSettingData _dependentStaticIPAssignmentSettingData;
UNIX_StaticIPAssignmentSettingDataProvider _dependentStaticIPAssignmentSettingDataProvider;
UNIX_ExtendedStaticIPAssignmentSettingData _dependentExtendedStaticIPAssignmentSettingData;
UNIX_ExtendedStaticIPAssignmentSettingDataProvider _dependentExtendedStaticIPAssignmentSettingDataProvider;
UNIX_DNSGeneralSettingData _dependentDNSGeneralSettingData;
UNIX_DNSGeneralSettingDataProvider _dependentDNSGeneralSettingDataProvider;
UNIX_DNSSettingData _dependentDNSSettingData;
UNIX_DNSSettingDataProvider _dependentDNSSettingDataProvider;
UNIX_FCSwitchSettings _dependentFCSwitchSettings;
UNIX_FCSwitchSettingsProvider _dependentFCSwitchSettingsProvider;
UNIX_ConfigurationData _dependentConfigurationData;
UNIX_ConfigurationDataProvider _dependentConfigurationDataProvider;
UNIX_WiFiNetworkDetectionSettings _dependentWiFiNetworkDetectionSettings;
UNIX_WiFiNetworkDetectionSettingsProvider _dependentWiFiNetworkDetectionSettingsProvider;
UNIX_VirtualSystemMigrationSettingData _dependentVirtualSystemMigrationSettingData;
UNIX_VirtualSystemMigrationSettingDataProvider _dependentVirtualSystemMigrationSettingDataProvider;
UNIX_SCSIMultipathSettings _dependentSCSIMultipathSettings;
UNIX_SCSIMultipathSettingsProvider _dependentSCSIMultipathSettingsProvider;
UNIX_NATStaticSettings _dependentNATStaticSettings;
UNIX_NATStaticSettingsProvider _dependentNATStaticSettingsProvider;
UNIX_NATListBasedSettings _dependentNATListBasedSettings;
UNIX_NATListBasedSettingsProvider _dependentNATListBasedSettingsProvider;
UNIX_FileSystemSettingData _dependentFileSystemSettingData;
UNIX_FileSystemSettingDataProvider _dependentFileSystemSettingDataProvider;
UNIX_DatabaseSegmentSettingData _dependentDatabaseSegmentSettingData;
UNIX_DatabaseSegmentSettingDataProvider _dependentDatabaseSegmentSettingDataProvider;
UNIX_AHTransform _dependentAHTransform;
UNIX_AHTransformProvider _dependentAHTransformProvider;
UNIX_ESPTransform _dependentESPTransform;
UNIX_ESPTransformProvider _dependentESPTransformProvider;
UNIX_IPCOMPTransform _dependentIPCOMPTransform;
UNIX_IPCOMPTransformProvider _dependentIPCOMPTransformProvider;
UNIX_IPsecProposal _dependentIPsecProposal;
UNIX_IPsecProposalProvider _dependentIPsecProposalProvider;
UNIX_IKEProposal _dependentIKEProposal;
UNIX_IKEProposalProvider _dependentIKEProposalProvider;
UNIX_TimeoutsForNATTranslation _dependentTimeoutsForNATTranslation;
UNIX_TimeoutsForNATTranslationProvider _dependentTimeoutsForNATTranslationProvider;
UNIX_DatabaseParameter _dependentDatabaseParameter;
UNIX_DatabaseParameterProvider _dependentDatabaseParameterProvider;
UNIX_BootConfigSetting _dependentBootConfigSetting;
UNIX_BootConfigSettingProvider _dependentBootConfigSettingProvider;
UNIX_iSCSISessionSettings _dependentiSCSISessionSettings;
UNIX_iSCSISessionSettingsProvider _dependentiSCSISessionSettingsProvider;
UNIX_SWRLimitSetting _dependentSWRLimitSetting;
UNIX_SWRLimitSettingProvider _dependentSWRLimitSettingProvider;
UNIX_MPLSQosPRTrfcProf _dependentMPLSQosPRTrfcProf;
UNIX_MPLSQosPRTrfcProfProvider _dependentMPLSQosPRTrfcProfProvider;
UNIX_MPLSCRLSPTrfcProf _dependentMPLSCRLSPTrfcProf;
UNIX_MPLSCRLSPTrfcProfProvider _dependentMPLSCRLSPTrfcProfProvider;
UNIX_SSHSettingData _dependentSSHSettingData;
UNIX_SSHSettingDataProvider _dependentSSHSettingDataProvider;
UNIX_OSStorageNameBinding _dependentOSStorageNameBinding;
UNIX_OSStorageNameBindingProvider _dependentOSStorageNameBindingProvider;
UNIX_StorageBridgeNameBinding _dependentStorageBridgeNameBinding;
UNIX_StorageBridgeNameBindingProvider _dependentStorageBridgeNameBindingProvider;
UNIX_SynchronizationAspect _dependentSynchronizationAspect;
UNIX_SynchronizationAspectProvider _dependentSynchronizationAspectProvider;
UNIX_AccountSettingData _dependentAccountSettingData;
UNIX_AccountSettingDataProvider _dependentAccountSettingDataProvider;
UNIX_LAGPortPartnerSettings _dependentLAGPortPartnerSettings;
UNIX_LAGPortPartnerSettingsProvider _dependentLAGPortPartnerSettingsProvider;
UNIX_StorageSetting _dependentStorageSetting;
UNIX_StorageSettingProvider _dependentStorageSettingProvider;
UNIX_AdvancedStorageSetting _dependentAdvancedStorageSetting;
UNIX_AdvancedStorageSettingProvider _dependentAdvancedStorageSettingProvider;
UNIX_StorageSettingWithHints _dependentStorageSettingWithHints;
UNIX_StorageSettingWithHintsProvider _dependentStorageSettingWithHintsProvider;
UNIX_NetworkPolicyActionSettingData _dependentNetworkPolicyActionSettingData;
UNIX_NetworkPolicyActionSettingDataProvider _dependentNetworkPolicyActionSettingDataProvider;
UNIX_LoadBalancingActionSettingData _dependentLoadBalancingActionSettingData;
UNIX_LoadBalancingActionSettingDataProvider _dependentLoadBalancingActionSettingDataProvider;
UNIX_VideoHeadResolution _dependentVideoHeadResolution;
UNIX_VideoHeadResolutionProvider _dependentVideoHeadResolutionProvider;
UNIX_ImportedFileShareSetting _dependentImportedFileShareSetting;
UNIX_ImportedFileShareSettingProvider _dependentImportedFileShareSettingProvider;
UNIX_iSCSIConnectionSettings _dependentiSCSIConnectionSettings;
UNIX_iSCSIConnectionSettingsProvider _dependentiSCSIConnectionSettingsProvider;
UNIX_TierSettingData _dependentTierSettingData;
UNIX_TierSettingDataProvider _dependentTierSettingDataProvider;
UNIX_TierPolicySettingData _dependentTierPolicySettingData;
UNIX_TierPolicySettingDataProvider _dependentTierPolicySettingDataProvider;
UNIX_IEEE8021xSettings _dependentIEEE8021xSettings;
UNIX_IEEE8021xSettingsProvider _dependentIEEE8021xSettingsProvider;
UNIX_ZoneMembershipSettingData _dependentZoneMembershipSettingData;
UNIX_ZoneMembershipSettingDataProvider _dependentZoneMembershipSettingDataProvider;
UNIX_GARPMembershipSettingData _dependentGARPMembershipSettingData;
UNIX_GARPMembershipSettingDataProvider _dependentGARPMembershipSettingDataProvider;
UNIX_VLANMembershipSettingData _dependentVLANMembershipSettingData;
UNIX_VLANMembershipSettingDataProvider _dependentVLANMembershipSettingDataProvider;
UNIX_EnabledLogicalElementSettingData _dependentEnabledLogicalElementSettingData;
UNIX_EnabledLogicalElementSettingDataProvider _dependentEnabledLogicalElementSettingDataProvider;
UNIX_VLANSystemSettingData _dependentVLANSystemSettingData;
UNIX_VLANSystemSettingDataProvider _dependentVLANSystemSettingDataProvider;
UNIX_RedundancySetSettingData _dependentRedundancySetSettingData;
UNIX_RedundancySetSettingDataProvider _dependentRedundancySetSettingDataProvider;

#	include "UNIX_SettingsAffectSettingsPrivate.h"


};

#endif /* UNIX_SETTINGSAFFECTSETTINGS */
