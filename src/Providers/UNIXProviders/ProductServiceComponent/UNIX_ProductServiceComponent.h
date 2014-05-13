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


/* **** Aggregation *** */
/*
TRUE
*/


/* **** Composition *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.15.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Core::ProductFRU
*/


/* **** Description *** */
/*
Indicates that the referenced Service is acquired as part of a Product. Examples of Services that may be acquired are outsourced storage and networking services, or support and warranty services. Expanding on the examples, Services represent generic functionality - so, it is possible to model the existence of storage volume management or warranty services as individual instances of subclasses of CIM_Service. These 'Services' may be enabled/disabled, started/stopped, signal an error, etc. (They behave as standard ManagedSystemElements.) Specific requests against the Services - for example, a request for warranty service or increased storage space - are NOT new instances of Service, but may be requested via the methods of the Service subclass, or be instantiated as specific subclasses of ManagedElement.This class is maintained for compatibility with existing implementations, but may be deprecated in favor of ProductElementComponent in the future.
*/


/*
			 *** Properties ***

			CIM_AbstractComponent:
				GroupComponent Reference
				PartComponent Reference

			CIM_Component:

			CIM_ProductElementComponent:

			UNIX_ProductServiceComponent:


*/


/*
			 *** Methods ***

			CIM_AbstractComponent:

			CIM_Component:

			CIM_ProductElementComponent:

			UNIX_ProductServiceComponent:


*/

#ifndef __UNIX_PRODUCTSERVICECOMPONENT_H
#define __UNIX_PRODUCTSERVICECOMPONENT_H


#include "CIM_ProductElementComponent.h"
#include <Product/UNIX_ProductProvider.h>
#include <FibreProtocolService/UNIX_FibreProtocolServiceProvider.h>
#include <WakeUpService/UNIX_WakeUpServiceProvider.h>
#include <VirtualSystemSnapshotService/UNIX_VirtualSystemSnapshotServiceProvider.h>
#include <ResourcePoolConfigurationService/UNIX_ResourcePoolConfigurationServiceProvider.h>
#include <FileSystemConfigurationService/UNIX_FileSystemConfigurationServiceProvider.h>
#include <HelpService/UNIX_HelpServiceProvider.h>
#include <StorageRelocationService/UNIX_StorageRelocationServiceProvider.h>
#include <MPLSService/UNIX_MPLSServiceProvider.h>
#include <PolicyActivationService/UNIX_PolicyActivationServiceProvider.h>
#include <SCSIPathConfigurationService/UNIX_SCSIPathConfigurationServiceProvider.h>
#include <BIOSService/UNIX_BIOSServiceProvider.h>
#include <PowerManagementService/UNIX_PowerManagementServiceProvider.h>
#include <NetworkPortConfigurationService/UNIX_NetworkPortConfigurationServiceProvider.h>
#include <WiFiPortConfigurationService/UNIX_WiFiPortConfigurationServiceProvider.h>
#include <VRFConfigurationService/UNIX_VRFConfigurationServiceProvider.h>
#include <ReplicationService/UNIX_ReplicationServiceProvider.h>
#include <AccountManagementService/UNIX_AccountManagementServiceProvider.h>
#include <VerificationService/UNIX_VerificationServiceProvider.h>
#include <CertificateAuthority/UNIX_CertificateAuthorityProvider.h>
#include <Notary/UNIX_NotaryProvider.h>
#include <KeyBasedCredentialManagementService/UNIX_KeyBasedCredentialManagementServiceProvider.h>
#include <CertificateManagementService/UNIX_CertificateManagementServiceProvider.h>
#include <KerberosKeyDistributionCenter/UNIX_KerberosKeyDistributionCenterProvider.h>
#include <PublicKeyManagementService/UNIX_PublicKeyManagementServiceProvider.h>
#include <SharedSecretService/UNIX_SharedSecretServiceProvider.h>
#include <IdentityManagementService/UNIX_IdentityManagementServiceProvider.h>
#include <StorageHardwareIDManagementService/UNIX_StorageHardwareIDManagementServiceProvider.h>
#include <AuthorizationService/UNIX_AuthorizationServiceProvider.h>
#include <PrivilegeManagementService/UNIX_PrivilegeManagementServiceProvider.h>
#include <RoleBasedAuthorizationService/UNIX_RoleBasedAuthorizationServiceProvider.h>
#include <AccessControlService/UNIX_AccessControlServiceProvider.h>
#include <WBEMServer/UNIX_WBEMServerProvider.h>
#include <LaunchInContextService/UNIX_LaunchInContextServiceProvider.h>
#include <VirtualSystemManagementService/UNIX_VirtualSystemManagementServiceProvider.h>
#include <MetricService/UNIX_MetricServiceProvider.h>
#include <StorageNameBindingService/UNIX_StorageNameBindingServiceProvider.h>
#include <ZoneService/UNIX_ZoneServiceProvider.h>
#include <ControllerConfigurationService/UNIX_ControllerConfigurationServiceProvider.h>
#include <GroupMaskingMappingService/UNIX_GroupMaskingMappingServiceProvider.h>
#include <DatabaseService/UNIX_DatabaseServiceProvider.h>
#include <DiskPartitionConfigurationService/UNIX_DiskPartitionConfigurationServiceProvider.h>
#include <ConfigurationReportingService/UNIX_ConfigurationReportingServiceProvider.h>
#include <PowerTopologyService/UNIX_PowerTopologyServiceProvider.h>
#include <NetworkPolicyService/UNIX_NetworkPolicyServiceProvider.h>
#include <BasicExecutionService/UNIX_BasicExecutionServiceProvider.h>
#include <SpareConfigurationService/UNIX_SpareConfigurationServiceProvider.h>
#include <StorageElementCompositionService/UNIX_StorageElementCompositionServiceProvider.h>
#include <OpaqueManagementDataService/UNIX_OpaqueManagementDataServiceProvider.h>
#include <FingerprintMatchingService/UNIX_FingerprintMatchingServiceProvider.h>
#include <ProtocolService/UNIX_ProtocolServiceProvider.h>
#include <WBEMProtocolService/UNIX_WBEMProtocolServiceProvider.h>
#include <TierService/UNIX_TierServiceProvider.h>
#include <TierPolicyService/UNIX_TierPolicyServiceProvider.h>
#include <IndicationService/UNIX_IndicationServiceProvider.h>
#include <FileImportService/UNIX_FileImportServiceProvider.h>
#include <VTLStatisticalDataService/UNIX_VTLStatisticalDataServiceProvider.h>
#include <DropThresholdCalculationService/UNIX_DropThresholdCalculationServiceProvider.h>
#include <TokenBucketMeterService/UNIX_TokenBucketMeterServiceProvider.h>
#include <EWMAMeterService/UNIX_EWMAMeterServiceProvider.h>
#include <AverageRateMeterService/UNIX_AverageRateMeterServiceProvider.h>
#include <ToSMarkerService/UNIX_ToSMarkerServiceProvider.h>
#include <Priority8021QMarkerService/UNIX_Priority8021QMarkerServiceProvider.h>
#include <DSCPMarkerService/UNIX_DSCPMarkerServiceProvider.h>
#include <PreambleMarkerService/UNIX_PreambleMarkerServiceProvider.h>
#include <ClassifierService/UNIX_ClassifierServiceProvider.h>
#include <ClassifierElement/UNIX_ClassifierElementProvider.h>
#include <PacketSchedulingService/UNIX_PacketSchedulingServiceProvider.h>
#include <NonWorkConservingSchedulingService/UNIX_NonWorkConservingSchedulingServiceProvider.h>
#include <REDDropperService/UNIX_REDDropperServiceProvider.h>
#include <HeadTailDropper/UNIX_HeadTailDropperProvider.h>
#include <WeightedREDDropperService/UNIX_WeightedREDDropperServiceProvider.h>
#include <QueuingService/UNIX_QueuingServiceProvider.h>
#include <BootService/UNIX_BootServiceProvider.h>
#include <AFService/UNIX_AFServiceProvider.h>
#include <EFService/UNIX_EFServiceProvider.h>
#include <FlowService/UNIX_FlowServiceProvider.h>
#include <Hdr8021PService/UNIX_Hdr8021PServiceProvider.h>
#include <PrecedenceService/UNIX_PrecedenceServiceProvider.h>
#include <PrintService/UNIX_PrintServiceProvider.h>
#include <TimeService/UNIX_TimeServiceProvider.h>
#include <SoftwareInstallationService/UNIX_SoftwareInstallationServiceProvider.h>
#include <VLANService/UNIX_VLANServiceProvider.h>
#include <Specific802dot1QVLANService/UNIX_Specific802dot1QVLANServiceProvider.h>
#include <PowerUtilizationManagementService/UNIX_PowerUtilizationManagementServiceProvider.h>
#include <ClusteringService/UNIX_ClusteringServiceProvider.h>
#include <SharedDeviceManagementService/UNIX_SharedDeviceManagementServiceProvider.h>
#include <BatchService/UNIX_BatchServiceProvider.h>
#include <iSCSIConfigurationService/UNIX_iSCSIConfigurationServiceProvider.h>
#include <OOBAlertService/UNIX_OOBAlertServiceProvider.h>
#include <StorageConfigurationService/UNIX_StorageConfigurationServiceProvider.h>
#include <IPConfigurationService/UNIX_IPConfigurationServiceProvider.h>
#include <VirtualSystemMigrationService/UNIX_VirtualSystemMigrationServiceProvider.h>
#include <MPLSCrossConnect/UNIX_MPLSCrossConnectProvider.h>
#include <PlatformWatchdogService/UNIX_PlatformWatchdogServiceProvider.h>
#include <FCHBADiagnosticTest/UNIX_FCHBADiagnosticTestProvider.h>
#include <RAIDDiagnosticTest/UNIX_RAIDDiagnosticTestProvider.h>
#include <CPUDiagnosticTest/UNIX_CPUDiagnosticTestProvider.h>
#include <EthernetNICDiagnosticTest/UNIX_EthernetNICDiagnosticTestProvider.h>
#include <OpticalDriveDiagnosticTest/UNIX_OpticalDriveDiagnosticTestProvider.h>
#include <OpticalDriveDiagnosticSettingData/UNIX_OpticalDriveDiagnosticSettingDataProvider.h>
#include <DiskDriveDiagnosticTest/UNIX_DiskDriveDiagnosticTestProvider.h>
#include <IBSubnetManager/UNIX_IBSubnetManagerProvider.h>
#include <ObjectManager/UNIX_ObjectManagerProvider.h>
#include <ObjectManagerAdapter/UNIX_ObjectManagerAdapterProvider.h>
#include <ProviderObjectManagerAdapter/UNIX_ProviderObjectManagerAdapterProvider.h>
#include <ProtocolAdapter/UNIX_ProtocolAdapterProvider.h>
#include <FileSystemStatisticsService/UNIX_FileSystemStatisticsServiceProvider.h>
#include <BlockStatisticsService/UNIX_BlockStatisticsServiceProvider.h>
#include <USBRedirectionService/UNIX_USBRedirectionServiceProvider.h>
#include <TextRedirectionService/UNIX_TextRedirectionServiceProvider.h>
#include <BGPService/UNIX_BGPServiceProvider.h>
#include <OSPFService/UNIX_OSPFServiceProvider.h>
#include <NATService/UNIX_NATServiceProvider.h>
#include <TransparentBridgingService/UNIX_TransparentBridgingServiceProvider.h>
#include <SourceRoutingService/UNIX_SourceRoutingServiceProvider.h>
#include <SpanningTreeService/UNIX_SpanningTreeServiceProvider.h>
#include <SwitchService/UNIX_SwitchServiceProvider.h>
#include <FileExportService/UNIX_FileExportServiceProvider.h>

#include "UNIX_ProductServiceComponentDeps.h"




class UNIX_ProductServiceComponent :
	public CIM_ProductElementComponent
{
public:

	UNIX_ProductServiceComponent();
	~UNIX_ProductServiceComponent();

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

	virtual Boolean getGroupComponent(CIMProperty&) const;
	virtual CIMInstance getGroupComponent() const;
	virtual void setGroupComponent(CIMInstance&);
	virtual Boolean getPartComponent(CIMProperty&) const;
	virtual CIMInstance getPartComponent() const;
	virtual void setPartComponent(CIMInstance&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _groupComponent;
	CIMInstance _partComponent;

	int groupIndex;
	int partIndex;
	UNIX_Product group_UNIX_Product_Component;
	int group_UNIX_Product_Index;
	bool endOf_UNIX_Product_Group;

	UNIX_FibreProtocolService part_UNIX_FibreProtocolService_Component;
	int part_UNIX_FibreProtocolService_Index;
	bool endOf_UNIX_FibreProtocolService_Part;
	UNIX_WakeUpService part_UNIX_WakeUpService_Component;
	int part_UNIX_WakeUpService_Index;
	bool endOf_UNIX_WakeUpService_Part;
	UNIX_VirtualSystemSnapshotService part_UNIX_VirtualSystemSnapshotService_Component;
	int part_UNIX_VirtualSystemSnapshotService_Index;
	bool endOf_UNIX_VirtualSystemSnapshotService_Part;
	UNIX_ResourcePoolConfigurationService part_UNIX_ResourcePoolConfigurationService_Component;
	int part_UNIX_ResourcePoolConfigurationService_Index;
	bool endOf_UNIX_ResourcePoolConfigurationService_Part;
	UNIX_FileSystemConfigurationService part_UNIX_FileSystemConfigurationService_Component;
	int part_UNIX_FileSystemConfigurationService_Index;
	bool endOf_UNIX_FileSystemConfigurationService_Part;
	UNIX_HelpService part_UNIX_HelpService_Component;
	int part_UNIX_HelpService_Index;
	bool endOf_UNIX_HelpService_Part;
	UNIX_StorageRelocationService part_UNIX_StorageRelocationService_Component;
	int part_UNIX_StorageRelocationService_Index;
	bool endOf_UNIX_StorageRelocationService_Part;
	UNIX_MPLSService part_UNIX_MPLSService_Component;
	int part_UNIX_MPLSService_Index;
	bool endOf_UNIX_MPLSService_Part;
	UNIX_PolicyActivationService part_UNIX_PolicyActivationService_Component;
	int part_UNIX_PolicyActivationService_Index;
	bool endOf_UNIX_PolicyActivationService_Part;
	UNIX_SCSIPathConfigurationService part_UNIX_SCSIPathConfigurationService_Component;
	int part_UNIX_SCSIPathConfigurationService_Index;
	bool endOf_UNIX_SCSIPathConfigurationService_Part;
	UNIX_BIOSService part_UNIX_BIOSService_Component;
	int part_UNIX_BIOSService_Index;
	bool endOf_UNIX_BIOSService_Part;
	UNIX_PowerManagementService part_UNIX_PowerManagementService_Component;
	int part_UNIX_PowerManagementService_Index;
	bool endOf_UNIX_PowerManagementService_Part;
	UNIX_NetworkPortConfigurationService part_UNIX_NetworkPortConfigurationService_Component;
	int part_UNIX_NetworkPortConfigurationService_Index;
	bool endOf_UNIX_NetworkPortConfigurationService_Part;
	UNIX_WiFiPortConfigurationService part_UNIX_WiFiPortConfigurationService_Component;
	int part_UNIX_WiFiPortConfigurationService_Index;
	bool endOf_UNIX_WiFiPortConfigurationService_Part;
	UNIX_VRFConfigurationService part_UNIX_VRFConfigurationService_Component;
	int part_UNIX_VRFConfigurationService_Index;
	bool endOf_UNIX_VRFConfigurationService_Part;
	UNIX_ReplicationService part_UNIX_ReplicationService_Component;
	int part_UNIX_ReplicationService_Index;
	bool endOf_UNIX_ReplicationService_Part;
	UNIX_AccountManagementService part_UNIX_AccountManagementService_Component;
	int part_UNIX_AccountManagementService_Index;
	bool endOf_UNIX_AccountManagementService_Part;
	UNIX_VerificationService part_UNIX_VerificationService_Component;
	int part_UNIX_VerificationService_Index;
	bool endOf_UNIX_VerificationService_Part;
	UNIX_CertificateAuthority part_UNIX_CertificateAuthority_Component;
	int part_UNIX_CertificateAuthority_Index;
	bool endOf_UNIX_CertificateAuthority_Part;
	UNIX_Notary part_UNIX_Notary_Component;
	int part_UNIX_Notary_Index;
	bool endOf_UNIX_Notary_Part;
	UNIX_KeyBasedCredentialManagementService part_UNIX_KeyBasedCredentialManagementService_Component;
	int part_UNIX_KeyBasedCredentialManagementService_Index;
	bool endOf_UNIX_KeyBasedCredentialManagementService_Part;
	UNIX_CertificateManagementService part_UNIX_CertificateManagementService_Component;
	int part_UNIX_CertificateManagementService_Index;
	bool endOf_UNIX_CertificateManagementService_Part;
	UNIX_KerberosKeyDistributionCenter part_UNIX_KerberosKeyDistributionCenter_Component;
	int part_UNIX_KerberosKeyDistributionCenter_Index;
	bool endOf_UNIX_KerberosKeyDistributionCenter_Part;
	UNIX_PublicKeyManagementService part_UNIX_PublicKeyManagementService_Component;
	int part_UNIX_PublicKeyManagementService_Index;
	bool endOf_UNIX_PublicKeyManagementService_Part;
	UNIX_SharedSecretService part_UNIX_SharedSecretService_Component;
	int part_UNIX_SharedSecretService_Index;
	bool endOf_UNIX_SharedSecretService_Part;
	UNIX_IdentityManagementService part_UNIX_IdentityManagementService_Component;
	int part_UNIX_IdentityManagementService_Index;
	bool endOf_UNIX_IdentityManagementService_Part;
	UNIX_StorageHardwareIDManagementService part_UNIX_StorageHardwareIDManagementService_Component;
	int part_UNIX_StorageHardwareIDManagementService_Index;
	bool endOf_UNIX_StorageHardwareIDManagementService_Part;
	UNIX_AuthorizationService part_UNIX_AuthorizationService_Component;
	int part_UNIX_AuthorizationService_Index;
	bool endOf_UNIX_AuthorizationService_Part;
	UNIX_PrivilegeManagementService part_UNIX_PrivilegeManagementService_Component;
	int part_UNIX_PrivilegeManagementService_Index;
	bool endOf_UNIX_PrivilegeManagementService_Part;
	UNIX_RoleBasedAuthorizationService part_UNIX_RoleBasedAuthorizationService_Component;
	int part_UNIX_RoleBasedAuthorizationService_Index;
	bool endOf_UNIX_RoleBasedAuthorizationService_Part;
	UNIX_AccessControlService part_UNIX_AccessControlService_Component;
	int part_UNIX_AccessControlService_Index;
	bool endOf_UNIX_AccessControlService_Part;
	UNIX_WBEMServer part_UNIX_WBEMServer_Component;
	int part_UNIX_WBEMServer_Index;
	bool endOf_UNIX_WBEMServer_Part;
	UNIX_LaunchInContextService part_UNIX_LaunchInContextService_Component;
	int part_UNIX_LaunchInContextService_Index;
	bool endOf_UNIX_LaunchInContextService_Part;
	UNIX_VirtualSystemManagementService part_UNIX_VirtualSystemManagementService_Component;
	int part_UNIX_VirtualSystemManagementService_Index;
	bool endOf_UNIX_VirtualSystemManagementService_Part;
	UNIX_MetricService part_UNIX_MetricService_Component;
	int part_UNIX_MetricService_Index;
	bool endOf_UNIX_MetricService_Part;
	UNIX_StorageNameBindingService part_UNIX_StorageNameBindingService_Component;
	int part_UNIX_StorageNameBindingService_Index;
	bool endOf_UNIX_StorageNameBindingService_Part;
	UNIX_ZoneService part_UNIX_ZoneService_Component;
	int part_UNIX_ZoneService_Index;
	bool endOf_UNIX_ZoneService_Part;
	UNIX_ControllerConfigurationService part_UNIX_ControllerConfigurationService_Component;
	int part_UNIX_ControllerConfigurationService_Index;
	bool endOf_UNIX_ControllerConfigurationService_Part;
	UNIX_GroupMaskingMappingService part_UNIX_GroupMaskingMappingService_Component;
	int part_UNIX_GroupMaskingMappingService_Index;
	bool endOf_UNIX_GroupMaskingMappingService_Part;
	UNIX_DatabaseService part_UNIX_DatabaseService_Component;
	int part_UNIX_DatabaseService_Index;
	bool endOf_UNIX_DatabaseService_Part;
	UNIX_DiskPartitionConfigurationService part_UNIX_DiskPartitionConfigurationService_Component;
	int part_UNIX_DiskPartitionConfigurationService_Index;
	bool endOf_UNIX_DiskPartitionConfigurationService_Part;
	UNIX_ConfigurationReportingService part_UNIX_ConfigurationReportingService_Component;
	int part_UNIX_ConfigurationReportingService_Index;
	bool endOf_UNIX_ConfigurationReportingService_Part;
	UNIX_PowerTopologyService part_UNIX_PowerTopologyService_Component;
	int part_UNIX_PowerTopologyService_Index;
	bool endOf_UNIX_PowerTopologyService_Part;
	UNIX_NetworkPolicyService part_UNIX_NetworkPolicyService_Component;
	int part_UNIX_NetworkPolicyService_Index;
	bool endOf_UNIX_NetworkPolicyService_Part;
	UNIX_BasicExecutionService part_UNIX_BasicExecutionService_Component;
	int part_UNIX_BasicExecutionService_Index;
	bool endOf_UNIX_BasicExecutionService_Part;
	UNIX_SpareConfigurationService part_UNIX_SpareConfigurationService_Component;
	int part_UNIX_SpareConfigurationService_Index;
	bool endOf_UNIX_SpareConfigurationService_Part;
	UNIX_StorageElementCompositionService part_UNIX_StorageElementCompositionService_Component;
	int part_UNIX_StorageElementCompositionService_Index;
	bool endOf_UNIX_StorageElementCompositionService_Part;
	UNIX_OpaqueManagementDataService part_UNIX_OpaqueManagementDataService_Component;
	int part_UNIX_OpaqueManagementDataService_Index;
	bool endOf_UNIX_OpaqueManagementDataService_Part;
	UNIX_FingerprintMatchingService part_UNIX_FingerprintMatchingService_Component;
	int part_UNIX_FingerprintMatchingService_Index;
	bool endOf_UNIX_FingerprintMatchingService_Part;
	UNIX_ProtocolService part_UNIX_ProtocolService_Component;
	int part_UNIX_ProtocolService_Index;
	bool endOf_UNIX_ProtocolService_Part;
	UNIX_WBEMProtocolService part_UNIX_WBEMProtocolService_Component;
	int part_UNIX_WBEMProtocolService_Index;
	bool endOf_UNIX_WBEMProtocolService_Part;
	UNIX_TierService part_UNIX_TierService_Component;
	int part_UNIX_TierService_Index;
	bool endOf_UNIX_TierService_Part;
	UNIX_TierPolicyService part_UNIX_TierPolicyService_Component;
	int part_UNIX_TierPolicyService_Index;
	bool endOf_UNIX_TierPolicyService_Part;
	UNIX_IndicationService part_UNIX_IndicationService_Component;
	int part_UNIX_IndicationService_Index;
	bool endOf_UNIX_IndicationService_Part;
	UNIX_FileImportService part_UNIX_FileImportService_Component;
	int part_UNIX_FileImportService_Index;
	bool endOf_UNIX_FileImportService_Part;
	UNIX_VTLStatisticalDataService part_UNIX_VTLStatisticalDataService_Component;
	int part_UNIX_VTLStatisticalDataService_Index;
	bool endOf_UNIX_VTLStatisticalDataService_Part;
	UNIX_DropThresholdCalculationService part_UNIX_DropThresholdCalculationService_Component;
	int part_UNIX_DropThresholdCalculationService_Index;
	bool endOf_UNIX_DropThresholdCalculationService_Part;
	UNIX_TokenBucketMeterService part_UNIX_TokenBucketMeterService_Component;
	int part_UNIX_TokenBucketMeterService_Index;
	bool endOf_UNIX_TokenBucketMeterService_Part;
	UNIX_EWMAMeterService part_UNIX_EWMAMeterService_Component;
	int part_UNIX_EWMAMeterService_Index;
	bool endOf_UNIX_EWMAMeterService_Part;
	UNIX_AverageRateMeterService part_UNIX_AverageRateMeterService_Component;
	int part_UNIX_AverageRateMeterService_Index;
	bool endOf_UNIX_AverageRateMeterService_Part;
	UNIX_ToSMarkerService part_UNIX_ToSMarkerService_Component;
	int part_UNIX_ToSMarkerService_Index;
	bool endOf_UNIX_ToSMarkerService_Part;
	UNIX_Priority8021QMarkerService part_UNIX_Priority8021QMarkerService_Component;
	int part_UNIX_Priority8021QMarkerService_Index;
	bool endOf_UNIX_Priority8021QMarkerService_Part;
	UNIX_DSCPMarkerService part_UNIX_DSCPMarkerService_Component;
	int part_UNIX_DSCPMarkerService_Index;
	bool endOf_UNIX_DSCPMarkerService_Part;
	UNIX_PreambleMarkerService part_UNIX_PreambleMarkerService_Component;
	int part_UNIX_PreambleMarkerService_Index;
	bool endOf_UNIX_PreambleMarkerService_Part;
	UNIX_ClassifierService part_UNIX_ClassifierService_Component;
	int part_UNIX_ClassifierService_Index;
	bool endOf_UNIX_ClassifierService_Part;
	UNIX_ClassifierElement part_UNIX_ClassifierElement_Component;
	int part_UNIX_ClassifierElement_Index;
	bool endOf_UNIX_ClassifierElement_Part;
	UNIX_PacketSchedulingService part_UNIX_PacketSchedulingService_Component;
	int part_UNIX_PacketSchedulingService_Index;
	bool endOf_UNIX_PacketSchedulingService_Part;
	UNIX_NonWorkConservingSchedulingService part_UNIX_NonWorkConservingSchedulingService_Component;
	int part_UNIX_NonWorkConservingSchedulingService_Index;
	bool endOf_UNIX_NonWorkConservingSchedulingService_Part;
	UNIX_REDDropperService part_UNIX_REDDropperService_Component;
	int part_UNIX_REDDropperService_Index;
	bool endOf_UNIX_REDDropperService_Part;
	UNIX_HeadTailDropper part_UNIX_HeadTailDropper_Component;
	int part_UNIX_HeadTailDropper_Index;
	bool endOf_UNIX_HeadTailDropper_Part;
	UNIX_WeightedREDDropperService part_UNIX_WeightedREDDropperService_Component;
	int part_UNIX_WeightedREDDropperService_Index;
	bool endOf_UNIX_WeightedREDDropperService_Part;
	UNIX_QueuingService part_UNIX_QueuingService_Component;
	int part_UNIX_QueuingService_Index;
	bool endOf_UNIX_QueuingService_Part;
	UNIX_BootService part_UNIX_BootService_Component;
	int part_UNIX_BootService_Index;
	bool endOf_UNIX_BootService_Part;
	UNIX_AFService part_UNIX_AFService_Component;
	int part_UNIX_AFService_Index;
	bool endOf_UNIX_AFService_Part;
	UNIX_EFService part_UNIX_EFService_Component;
	int part_UNIX_EFService_Index;
	bool endOf_UNIX_EFService_Part;
	UNIX_FlowService part_UNIX_FlowService_Component;
	int part_UNIX_FlowService_Index;
	bool endOf_UNIX_FlowService_Part;
	UNIX_Hdr8021PService part_UNIX_Hdr8021PService_Component;
	int part_UNIX_Hdr8021PService_Index;
	bool endOf_UNIX_Hdr8021PService_Part;
	UNIX_PrecedenceService part_UNIX_PrecedenceService_Component;
	int part_UNIX_PrecedenceService_Index;
	bool endOf_UNIX_PrecedenceService_Part;
	UNIX_PrintService part_UNIX_PrintService_Component;
	int part_UNIX_PrintService_Index;
	bool endOf_UNIX_PrintService_Part;
	UNIX_TimeService part_UNIX_TimeService_Component;
	int part_UNIX_TimeService_Index;
	bool endOf_UNIX_TimeService_Part;
	UNIX_SoftwareInstallationService part_UNIX_SoftwareInstallationService_Component;
	int part_UNIX_SoftwareInstallationService_Index;
	bool endOf_UNIX_SoftwareInstallationService_Part;
	UNIX_VLANService part_UNIX_VLANService_Component;
	int part_UNIX_VLANService_Index;
	bool endOf_UNIX_VLANService_Part;
	UNIX_Specific802dot1QVLANService part_UNIX_Specific802dot1QVLANService_Component;
	int part_UNIX_Specific802dot1QVLANService_Index;
	bool endOf_UNIX_Specific802dot1QVLANService_Part;
	UNIX_PowerUtilizationManagementService part_UNIX_PowerUtilizationManagementService_Component;
	int part_UNIX_PowerUtilizationManagementService_Index;
	bool endOf_UNIX_PowerUtilizationManagementService_Part;
	UNIX_ClusteringService part_UNIX_ClusteringService_Component;
	int part_UNIX_ClusteringService_Index;
	bool endOf_UNIX_ClusteringService_Part;
	UNIX_SharedDeviceManagementService part_UNIX_SharedDeviceManagementService_Component;
	int part_UNIX_SharedDeviceManagementService_Index;
	bool endOf_UNIX_SharedDeviceManagementService_Part;
	UNIX_BatchService part_UNIX_BatchService_Component;
	int part_UNIX_BatchService_Index;
	bool endOf_UNIX_BatchService_Part;
	UNIX_iSCSIConfigurationService part_UNIX_iSCSIConfigurationService_Component;
	int part_UNIX_iSCSIConfigurationService_Index;
	bool endOf_UNIX_iSCSIConfigurationService_Part;
	UNIX_OOBAlertService part_UNIX_OOBAlertService_Component;
	int part_UNIX_OOBAlertService_Index;
	bool endOf_UNIX_OOBAlertService_Part;
	UNIX_StorageConfigurationService part_UNIX_StorageConfigurationService_Component;
	int part_UNIX_StorageConfigurationService_Index;
	bool endOf_UNIX_StorageConfigurationService_Part;
	UNIX_IPConfigurationService part_UNIX_IPConfigurationService_Component;
	int part_UNIX_IPConfigurationService_Index;
	bool endOf_UNIX_IPConfigurationService_Part;
	UNIX_VirtualSystemMigrationService part_UNIX_VirtualSystemMigrationService_Component;
	int part_UNIX_VirtualSystemMigrationService_Index;
	bool endOf_UNIX_VirtualSystemMigrationService_Part;
	UNIX_MPLSCrossConnect part_UNIX_MPLSCrossConnect_Component;
	int part_UNIX_MPLSCrossConnect_Index;
	bool endOf_UNIX_MPLSCrossConnect_Part;
	UNIX_PlatformWatchdogService part_UNIX_PlatformWatchdogService_Component;
	int part_UNIX_PlatformWatchdogService_Index;
	bool endOf_UNIX_PlatformWatchdogService_Part;
	UNIX_FCHBADiagnosticTest part_UNIX_FCHBADiagnosticTest_Component;
	int part_UNIX_FCHBADiagnosticTest_Index;
	bool endOf_UNIX_FCHBADiagnosticTest_Part;
	UNIX_RAIDDiagnosticTest part_UNIX_RAIDDiagnosticTest_Component;
	int part_UNIX_RAIDDiagnosticTest_Index;
	bool endOf_UNIX_RAIDDiagnosticTest_Part;
	UNIX_CPUDiagnosticTest part_UNIX_CPUDiagnosticTest_Component;
	int part_UNIX_CPUDiagnosticTest_Index;
	bool endOf_UNIX_CPUDiagnosticTest_Part;
	UNIX_EthernetNICDiagnosticTest part_UNIX_EthernetNICDiagnosticTest_Component;
	int part_UNIX_EthernetNICDiagnosticTest_Index;
	bool endOf_UNIX_EthernetNICDiagnosticTest_Part;
	UNIX_OpticalDriveDiagnosticTest part_UNIX_OpticalDriveDiagnosticTest_Component;
	int part_UNIX_OpticalDriveDiagnosticTest_Index;
	bool endOf_UNIX_OpticalDriveDiagnosticTest_Part;
	UNIX_OpticalDriveDiagnosticSettingData part_UNIX_OpticalDriveDiagnosticSettingData_Component;
	int part_UNIX_OpticalDriveDiagnosticSettingData_Index;
	bool endOf_UNIX_OpticalDriveDiagnosticSettingData_Part;
	UNIX_DiskDriveDiagnosticTest part_UNIX_DiskDriveDiagnosticTest_Component;
	int part_UNIX_DiskDriveDiagnosticTest_Index;
	bool endOf_UNIX_DiskDriveDiagnosticTest_Part;
	UNIX_IBSubnetManager part_UNIX_IBSubnetManager_Component;
	int part_UNIX_IBSubnetManager_Index;
	bool endOf_UNIX_IBSubnetManager_Part;
	UNIX_ObjectManager part_UNIX_ObjectManager_Component;
	int part_UNIX_ObjectManager_Index;
	bool endOf_UNIX_ObjectManager_Part;
	UNIX_ObjectManagerAdapter part_UNIX_ObjectManagerAdapter_Component;
	int part_UNIX_ObjectManagerAdapter_Index;
	bool endOf_UNIX_ObjectManagerAdapter_Part;
	UNIX_ProviderObjectManagerAdapter part_UNIX_ProviderObjectManagerAdapter_Component;
	int part_UNIX_ProviderObjectManagerAdapter_Index;
	bool endOf_UNIX_ProviderObjectManagerAdapter_Part;
	UNIX_ProtocolAdapter part_UNIX_ProtocolAdapter_Component;
	int part_UNIX_ProtocolAdapter_Index;
	bool endOf_UNIX_ProtocolAdapter_Part;
	UNIX_FileSystemStatisticsService part_UNIX_FileSystemStatisticsService_Component;
	int part_UNIX_FileSystemStatisticsService_Index;
	bool endOf_UNIX_FileSystemStatisticsService_Part;
	UNIX_BlockStatisticsService part_UNIX_BlockStatisticsService_Component;
	int part_UNIX_BlockStatisticsService_Index;
	bool endOf_UNIX_BlockStatisticsService_Part;
	UNIX_USBRedirectionService part_UNIX_USBRedirectionService_Component;
	int part_UNIX_USBRedirectionService_Index;
	bool endOf_UNIX_USBRedirectionService_Part;
	UNIX_TextRedirectionService part_UNIX_TextRedirectionService_Component;
	int part_UNIX_TextRedirectionService_Index;
	bool endOf_UNIX_TextRedirectionService_Part;
	UNIX_BGPService part_UNIX_BGPService_Component;
	int part_UNIX_BGPService_Index;
	bool endOf_UNIX_BGPService_Part;
	UNIX_OSPFService part_UNIX_OSPFService_Component;
	int part_UNIX_OSPFService_Index;
	bool endOf_UNIX_OSPFService_Part;
	UNIX_NATService part_UNIX_NATService_Component;
	int part_UNIX_NATService_Index;
	bool endOf_UNIX_NATService_Part;
	UNIX_TransparentBridgingService part_UNIX_TransparentBridgingService_Component;
	int part_UNIX_TransparentBridgingService_Index;
	bool endOf_UNIX_TransparentBridgingService_Part;
	UNIX_SourceRoutingService part_UNIX_SourceRoutingService_Component;
	int part_UNIX_SourceRoutingService_Index;
	bool endOf_UNIX_SourceRoutingService_Part;
	UNIX_SpanningTreeService part_UNIX_SpanningTreeService_Component;
	int part_UNIX_SpanningTreeService_Index;
	bool endOf_UNIX_SpanningTreeService_Part;
	UNIX_SwitchService part_UNIX_SwitchService_Component;
	int part_UNIX_SwitchService_Index;
	bool endOf_UNIX_SwitchService_Part;
	UNIX_FileExportService part_UNIX_FileExportService_Component;
	int part_UNIX_FileExportService_Index;
	bool endOf_UNIX_FileExportService_Part;

#	include "UNIX_ProductServiceComponentPrivate.h"


};

#endif /* UNIX_PRODUCTSERVICECOMPONENT */
