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
2.16.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Core::Service
*/


/* **** Description *** */
/*
CIM_ServiceServiceDependency is an association between a Service and another Service, which indicates that the latter cooperates with the former, is required to be present, required to have completed, or must be absent for the former Service to provide its functionality. For example, Boot Services might be dependent upon underlying system initialization Services. In the case of the initialization Services, the Boot Service might be dependent on the completion of the init Services. 
When examining the ServiceServiceDependency class definition, note that its superclass ProvidesServiceToElement is deprecated. Unfortunately, ProvidesServiceToElement cannot be removed from the object hierarchy without a major Schema release. When or if a major release occurs, the ProvidesServiceToElement superclass will be removed, and ServiceServiceDependency will subclass from CIM_Dependency directly.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			CIM_ProvidesServiceToElement:

			CIM_ServiceServiceDependency:
				TypeOfDependency UInt16
				RestartService Boolean


*/


/*
			 *** Methods ***

			CIM_Dependency:

			CIM_ProvidesServiceToElement:

			CIM_ServiceServiceDependency:


*/

#ifndef __CIM_SERVICESERVICEDEPENDENCY_H
#define __CIM_SERVICESERVICEDEPENDENCY_H


#include "CIM_ProvidesServiceToElement.h"
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


#ifndef PROPERTY_TYPE_OF_DEPENDENCY
#define PROPERTY_TYPE_OF_DEPENDENCY \
					"TypeOfDependency"
#endif

#ifndef PROPERTY_RESTART_SERVICE
#define PROPERTY_RESTART_SERVICE \
					"RestartService"
#endif



class CIM_ServiceServiceDependency :
	public CIM_ProvidesServiceToElement
{
public:

	virtual Boolean initialize()=0;
	virtual Boolean load(int&)=0;
	virtual Boolean finalize()=0;
	virtual Boolean find(const Array<CIMKeyBinding>&)=0;
	virtual Boolean validateKey(CIMKeyBinding&) const=0;
	virtual void setScope(CIMName)=0;
	virtual void setCIMOMHandle(CIMOMHandle&)=0;
	virtual void clearInstance()=0;
	virtual Boolean loadInstance(const CIMInstance&)=0;
	virtual Boolean createInstance(const OperationContext&)=0;
	virtual Boolean modifyInstance(const OperationContext&)=0;
	virtual Boolean deleteInstance(const OperationContext&)=0;
	virtual Boolean validateInstance()=0;

	virtual Boolean getAntecedent(CIMProperty&) const=0;
	virtual CIMInstance getAntecedent() const=0;
	virtual void setAntecedent(CIMInstance&)=0;
	virtual Boolean getDependent(CIMProperty&) const=0;
	virtual CIMInstance getDependent() const=0;
	virtual void setDependent(CIMInstance&)=0;
	virtual Boolean getTypeOfDependency(CIMProperty&) const=0;
	virtual Uint16 getTypeOfDependency() const=0;
	virtual void setTypeOfDependency(Uint16&)=0;
	virtual Boolean getRestartService(CIMProperty&) const=0;
	virtual Boolean getRestartService() const=0;
	virtual void setRestartService(Boolean&)=0;


private:

};

#endif /* CIM_SERVICESERVICEDEPENDENCY */
