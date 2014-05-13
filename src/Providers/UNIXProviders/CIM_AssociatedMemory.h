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
CIM::Device::Memory
*/


/* **** Description *** */
/*
LogicalElements may have Memory installed on them or otherwise associated with them - such as CacheMemory. This is made explicit in this association.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			CIM_AssociatedMemory:


*/


/*
			 *** Methods ***

			CIM_Dependency:

			CIM_AssociatedMemory:


*/

#ifndef __CIM_ASSOCIATEDMEMORY_H
#define __CIM_ASSOCIATEDMEMORY_H


#include "CIM_Dependency.h"
#include <CacheMemory/UNIX_CacheMemoryProvider.h>
#include <VolatileStorage/UNIX_VolatileStorageProvider.h>
#include <NonVolatileStorage/UNIX_NonVolatileStorageProvider.h>
#include <SqlSchema/UNIX_SqlSchemaProvider.h>
#include <SqlTable/UNIX_SqlTableProvider.h>
#include <SqlTrigger/UNIX_SqlTriggerProvider.h>
#include <SqlDomain/UNIX_SqlDomainProvider.h>
#include <SqlDomainConstraint/UNIX_SqlDomainConstraintProvider.h>
#include <SqlUserDefinedType/UNIX_SqlUserDefinedTypeProvider.h>
#include <Hdr8021Filter/UNIX_Hdr8021FilterProvider.h>
#include <PreambleFilter/UNIX_PreambleFilterProvider.h>
#include <X509CredentialFilterEntry/UNIX_X509CredentialFilterEntryProvider.h>
#include <PeerIDPayloadFilterEntry/UNIX_PeerIDPayloadFilterEntryProvider.h>
#include <FilterEntry/UNIX_FilterEntryProvider.h>
#include <IPHeadersFilter/UNIX_IPHeadersFilterProvider.h>
#include <IPSOFilterEntry/UNIX_IPSOFilterEntryProvider.h>
#include <AuthenticationRequirement/UNIX_AuthenticationRequirementProvider.h>
#include <DynamicForwardingEntry/UNIX_DynamicForwardingEntryProvider.h>
#include <SqlCharacterSet/UNIX_SqlCharacterSetProvider.h>
#include <MPLSInSegment/UNIX_MPLSInSegmentProvider.h>
#include <MPLSOutSegment/UNIX_MPLSOutSegmentProvider.h>
#include <NextHopRouting/UNIX_NextHopRoutingProvider.h>
#include <IPRoute/UNIX_IPRouteProvider.h>
#include <BGPIPRoute/UNIX_BGPIPRouteProvider.h>
#include <MPLSLSP/UNIX_MPLSLSPProvider.h>
#include <CommonDatabase/UNIX_CommonDatabaseProvider.h>
#include <MPLSTunnel/UNIX_MPLSTunnelProvider.h>
#include <ReplicationEntity/UNIX_ReplicationEntityProvider.h>
#include <PrintQueue/UNIX_PrintQueueProvider.h>
#include <JobQueue/UNIX_JobQueueProvider.h>
#include <ReusablePolicyContainer/UNIX_ReusablePolicyContainerProvider.h>
#include <PolicyRepository/UNIX_PolicyRepositoryProvider.h>
#include <AutonomousSystem/UNIX_AutonomousSystemProvider.h>
#include <RoutingProtocolDomain/UNIX_RoutingProtocolDomainProvider.h>
#include <OSPFArea/UNIX_OSPFAreaProvider.h>
#include <Network/UNIX_NetworkProvider.h>
#include <VLANNetwork/UNIX_VLANNetworkProvider.h>
#include <TierDomain/UNIX_TierDomainProvider.h>
#include <ApplicationSystem/UNIX_ApplicationSystemProvider.h>
#include <DatabaseSystem/UNIX_DatabaseSystemProvider.h>
#include <StorageLibrary/UNIX_StorageLibraryProvider.h>
#include <VirtualComputerSystem/UNIX_VirtualComputerSystemProvider.h>
#include <Cluster/UNIX_ClusterProvider.h>
#include <ComputerSystem/UNIX_ComputerSystemProvider.h>
#include <SCSIArbitraryLogicalUnit/UNIX_SCSIArbitraryLogicalUnitProvider.h>
#include <Button/UNIX_ButtonProvider.h>
#include <PowerSupply/UNIX_PowerSupplyProvider.h>
#include <UninterruptiblePowerSupply/UNIX_UninterruptiblePowerSupplyProvider.h>
#include <Battery/UNIX_BatteryProvider.h>
#include <TapeDrive/UNIX_TapeDriveProvider.h>
#include <CDROMDrive/UNIX_CDROMDriveProvider.h>
#include <WORMDrive/UNIX_WORMDriveProvider.h>
#include <DiskDrive/UNIX_DiskDriveProvider.h>
#include <DVDDrive/UNIX_DVDDriveProvider.h>
#include <DisketteDrive/UNIX_DisketteDriveProvider.h>
#include <MagnetoOpticalDrive/UNIX_MagnetoOpticalDriveProvider.h>
#include <USBDevice/UNIX_USBDeviceProvider.h>
#include <USBHub/UNIX_USBHubProvider.h>
#include <PowerConnectionPoint/UNIX_PowerConnectionPointProvider.h>
#include <LabelReader/UNIX_LabelReaderProvider.h>
#include <LogicalDisk/UNIX_LogicalDiskProvider.h>
#include <Snapshot/UNIX_SnapshotProvider.h>
#include <VTOCDiskPartition/UNIX_VTOCDiskPartitionProvider.h>
#include <GPTDiskPartition/UNIX_GPTDiskPartitionProvider.h>
#include <DiskPartition/UNIX_DiskPartitionProvider.h>
#include <TapePartition/UNIX_TapePartitionProvider.h>
#include <CompositeExtent/UNIX_CompositeExtentProvider.h>
#include <ProtectedSpaceExtent/UNIX_ProtectedSpaceExtentProvider.h>
#include <PhysicalExtent/UNIX_PhysicalExtentProvider.h>
#include <DatabaseSegment/UNIX_DatabaseSegmentProvider.h>
#include <AggregatePExtent/UNIX_AggregatePExtentProvider.h>
#include <VolumeSet/UNIX_VolumeSetProvider.h>
#include <OpaqueManagementData/UNIX_OpaqueManagementDataProvider.h>
#include <AggregatePSExtent/UNIX_AggregatePSExtentProvider.h>
#include <Printer/UNIX_PrinterProvider.h>
#include <CurrentSensor/UNIX_CurrentSensorProvider.h>
#include <TemperatureSensor/UNIX_TemperatureSensorProvider.h>
#include <VoltageSensor/UNIX_VoltageSensorProvider.h>
#include <Tachometer/UNIX_TachometerProvider.h>
#include <MultiStateSensor/UNIX_MultiStateSensorProvider.h>
#include <BinarySensor/UNIX_BinarySensorProvider.h>
#include <DiscreteSensor/UNIX_DiscreteSensorProvider.h>
#include <CableModem/UNIX_CableModemProvider.h>
#include <ADSLModem/UNIX_ADSLModemProvider.h>
#include <VDSLModem/UNIX_VDSLModemProvider.h>
#include <HDSLModem/UNIX_HDSLModemProvider.h>
#include <SDSLModem/UNIX_SDSLModemProvider.h>
#include <Unimodem/UNIX_UnimodemProvider.h>
#include <ISDNModem/UNIX_ISDNModemProvider.h>
#include <Keyboard/UNIX_KeyboardProvider.h>
#include <PointingDevice/UNIX_PointingDeviceProvider.h>
#include <DesktopMonitor/UNIX_DesktopMonitorProvider.h>
#include <FlatPanel/UNIX_FlatPanelProvider.h>
#include <Processor/UNIX_ProcessorProvider.h>
#include <VideoHead/UNIX_VideoHeadProvider.h>
#include <FingerprintReader/UNIX_FingerprintReaderProvider.h>
#include <Door/UNIX_DoorProvider.h>
#include <SmartCard/UNIX_SmartCardProvider.h>
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
#include <Watchdog/UNIX_WatchdogProvider.h>
#include <EthernetAdapter/UNIX_EthernetAdapterProvider.h>
#include <TokenRingAdapter/UNIX_TokenRingAdapterProvider.h>
#include <FibreChannelAdapter/UNIX_FibreChannelAdapterProvider.h>
#include <IndicatorLED/UNIX_IndicatorLEDProvider.h>
#include <ElectricalSwitch/UNIX_ElectricalSwitchProvider.h>
#include <ProtocolController/UNIX_ProtocolControllerProvider.h>
#include <SCSIProtocolController/UNIX_SCSIProtocolControllerProvider.h>
#include <WiFiRadio/UNIX_WiFiRadioProvider.h>
#include <InterLibraryPort/UNIX_InterLibraryPortProvider.h>
#include <LimitedAccessPort/UNIX_LimitedAccessPortProvider.h>
#include <SmartCardReader/UNIX_SmartCardReaderProvider.h>
#include <PCIBridge/UNIX_PCIBridgeProvider.h>
#include <PCIeSwitch/UNIX_PCIeSwitchProvider.h>
#include <PortController/UNIX_PortControllerProvider.h>
#include <IBPortController/UNIX_IBPortControllerProvider.h>
#include <ParallelController/UNIX_ParallelControllerProvider.h>
#include <InfraredController/UNIX_InfraredControllerProvider.h>
#include <ManagementController/UNIX_ManagementControllerProvider.h>
#include <SSAController/UNIX_SSAControllerProvider.h>
#include <AGPVideoController/UNIX_AGPVideoControllerProvider.h>
#include <PCVideoController/UNIX_PCVideoControllerProvider.h>
#include <SerialController/UNIX_SerialControllerProvider.h>
#include <DisplayController/UNIX_DisplayControllerProvider.h>
#include <AGPVideoDisplayController/UNIX_AGPVideoDisplayControllerProvider.h>
#include <USBController/UNIX_USBControllerProvider.h>
#include <IDEController/UNIX_IDEControllerProvider.h>
#include <PCMCIAController/UNIX_PCMCIAControllerProvider.h>
#include <SCSIController/UNIX_SCSIControllerProvider.h>
#include <ESCONController/UNIX_ESCONControllerProvider.h>
#include <DeviceTray/UNIX_DeviceTrayProvider.h>
#include <PassThroughModule/UNIX_PassThroughModuleProvider.h>
#include <AlarmDevice/UNIX_AlarmDeviceProvider.h>
#include <Fan/UNIX_FanProvider.h>
#include <Refrigeration/UNIX_RefrigerationProvider.h>
#include <HeatPipe/UNIX_HeatPipeProvider.h>
#include <TPM/UNIX_TPMProvider.h>
#include <Scanner/UNIX_ScannerProvider.h>
#include <Provider/UNIX_ProviderProvider.h>
#include <IRQ/UNIX_IRQProvider.h>
#include <PortResource/UNIX_PortResourceProvider.h>
#include <MemoryResource/UNIX_MemoryResourceProvider.h>
#include <DMA/UNIX_DMAProvider.h>
#include <NFSShare/UNIX_NFSShareProvider.h>
#include <CIFSShare/UNIX_CIFSShareProvider.h>
#include <MessageLog/UNIX_MessageLogProvider.h>
#include <DiagnosticLog/UNIX_DiagnosticLogProvider.h>
#include <DiagnosticsLog/UNIX_DiagnosticsLogProvider.h>
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
#include <OperatingSystem/UNIX_OperatingSystemProvider.h>
#include <SWRFile/UNIX_SWRFileProvider.h>
#include <SWRPEP/UNIX_SWRPEPProvider.h>
#include <SWRDatabase/UNIX_SWRDatabaseProvider.h>
#include <ProviderLibrary/UNIX_ProviderLibraryProvider.h>
#include <ClusteringSAP/UNIX_ClusteringSAPProvider.h>
#include <CredentialManagementSAP/UNIX_CredentialManagementSAPProvider.h>
#include <USBRedirectionSAP/UNIX_USBRedirectionSAPProvider.h>
#include <IPNetworkConnection/UNIX_IPNetworkConnectionProvider.h>
#include <PolicyTransferServiceAccessPoint/UNIX_PolicyTransferServiceAccessPointProvider.h>
#include <LaunchInContextSAP/UNIX_LaunchInContextSAPProvider.h>
#include <RemotePort/UNIX_RemotePortProvider.h>
#include <MPLSTunnelHop/UNIX_MPLSTunnelHopProvider.h>
#include <SoftwareIdentityResource/UNIX_SoftwareIdentityResourceProvider.h>
#include <KVMRedirectionSAP/UNIX_KVMRedirectionSAPProvider.h>
#include <DHCPProtocolEndpoint/UNIX_DHCPProtocolEndpointProvider.h>
#include <SSHProtocolEndpoint/UNIX_SSHProtocolEndpointProvider.h>
#include <SCSIProtocolEndpoint/UNIX_SCSIProtocolEndpointProvider.h>
#include <iSCSIProtocolEndpoint/UNIX_iSCSIProtocolEndpointProvider.h>
#include <CLPProtocolEndpoint/UNIX_CLPProtocolEndpointProvider.h>
#include <IPXProtocolEndpoint/UNIX_IPXProtocolEndpointProvider.h>
#include <IPsecSAEndpoint/UNIX_IPsecSAEndpointProvider.h>
#include <IKESAEndpoint/UNIX_IKESAEndpointProvider.h>
#include <LANEndpoint/UNIX_LANEndpointProvider.h>
#include <WiFiEndpoint/UNIX_WiFiEndpointProvider.h>
#include <MPLSProtocolEndpoint/UNIX_MPLSProtocolEndpointProvider.h>
#include <WirelessLANEndpoint/UNIX_WirelessLANEndpointProvider.h>
#include <UDPProtocolEndpoint/UNIX_UDPProtocolEndpointProvider.h>
#include <TCPProtocolEndpoint/UNIX_TCPProtocolEndpointProvider.h>
#include <OSPFVirtualInterface/UNIX_OSPFVirtualInterfaceProvider.h>
#include <OSPFProtocolEndpoint/UNIX_OSPFProtocolEndpointProvider.h>
#include <VLANEndpoint/UNIX_VLANEndpointProvider.h>
#include <LinkAggregator8023ad/UNIX_LinkAggregator8023adProvider.h>
#include <ATAProtocolEndpoint/UNIX_ATAProtocolEndpointProvider.h>
#include <IPEncapsulationInterface/UNIX_IPEncapsulationInterfaceProvider.h>
#include <IPSubinterface/UNIX_IPSubinterfaceProvider.h>
#include <SwitchVirtualInterface/UNIX_SwitchVirtualInterfaceProvider.h>
#include <IPLoopback/UNIX_IPLoopbackProvider.h>
#include <BGPProtocolEndpoint/UNIX_BGPProtocolEndpointProvider.h>
#include <SwitchPort/UNIX_SwitchPortProvider.h>
#include <DNSProtocolEndpoint/UNIX_DNSProtocolEndpointProvider.h>
#include <LAGPort8023ad/UNIX_LAGPort8023adProvider.h>
#include <BatchSAP/UNIX_BatchSAPProvider.h>
#include <TextRedirectionSAP/UNIX_TextRedirectionSAPProvider.h>
#include <MediaRedirectionSAP/UNIX_MediaRedirectionSAPProvider.h>
#include <PrintSAP/UNIX_PrintSAPProvider.h>
#include <ServiceAccessURI/UNIX_ServiceAccessURIProvider.h>
#include <ObjectManagerCommunicationMechanism/UNIX_ObjectManagerCommunicationMechanismProvider.h>
#include <CIMXMLCommunicationMechanism/UNIX_CIMXMLCommunicationMechanismProvider.h>
#include <VLAN/UNIX_VLANProvider.h>
#include <BootSAP/UNIX_BootSAPProvider.h>
#include <Process/UNIX_ProcessProvider.h>
#include <ProcessorCore/UNIX_ProcessorCoreProvider.h>
#include <iSCSISession/UNIX_iSCSISessionProvider.h>
#include <iSCSIConnection/UNIX_iSCSIConnectionProvider.h>
#include <HardwareThread/UNIX_HardwareThreadProvider.h>
#include <FileSystem/UNIX_FileSystemProvider.h>
#include <DatabaseStorageArea/UNIX_DatabaseStorageAreaProvider.h>
#include <LocalFileSystem/UNIX_LocalFileSystemProvider.h>
#include <RemoteFileSystem/UNIX_RemoteFileSystemProvider.h>
#include <NFS/UNIX_NFSProvider.h>
#include <Thread/UNIX_ThreadProvider.h>
#include <Account/UNIX_AccountProvider.h>
#include <BGPAttributes/UNIX_BGPAttributesProvider.h>
#include <ResourcePool/UNIX_ResourcePoolProvider.h>
#include <StoragePool/UNIX_StoragePoolProvider.h>
#include <AdministrativeDistance/UNIX_AdministrativeDistanceProvider.h>
#include <SoftwareFeature/UNIX_SoftwareFeatureProvider.h>
#include <VideoBIOSFeature/UNIX_VideoBIOSFeatureProvider.h>
#include <BIOSFeature/UNIX_BIOSFeatureProvider.h>
#include <AGPSoftwareFeature/UNIX_AGPSoftwareFeatureProvider.h>
#include <BGPRouteMap/UNIX_BGPRouteMapProvider.h>
#include <OSPFAreaConfiguration/UNIX_OSPFAreaConfigurationProvider.h>
#include <FIFOPipeFile/UNIX_FIFOPipeFileProvider.h>
#include <Directory/UNIX_DirectoryProvider.h>
#include <DataFile/UNIX_DataFileProvider.h>
#include <SymbolicLink/UNIX_SymbolicLinkProvider.h>
#include <DeviceFile/UNIX_DeviceFileProvider.h>
#include <SpareGroup/UNIX_SpareGroupProvider.h>
#include <ExtraCapacityGroup/UNIX_ExtraCapacityGroupProvider.h>
#include <StorageRedundancyGroup/UNIX_StorageRedundancyGroupProvider.h>
#include <AccessControlInformation/UNIX_AccessControlInformationProvider.h>
#include <PrintFinisher/UNIX_PrintFinisherProvider.h>
#include <PrintMarker/UNIX_PrintMarkerProvider.h>
#include <PrintSupply/UNIX_PrintSupplyProvider.h>
#include <PrintInterlock/UNIX_PrintInterlockProvider.h>
#include <PrintChannel/UNIX_PrintChannelProvider.h>
#include <PrintInputTray/UNIX_PrintInputTrayProvider.h>
#include <PrintOutputTray/UNIX_PrintOutputTrayProvider.h>
#include <PrintInterpreter/UNIX_PrintInterpreterProvider.h>
#include <PrintMediaPath/UNIX_PrintMediaPathProvider.h>
#include <SoftwareIdentity/UNIX_SoftwareIdentityProvider.h>
#include <SoftwareElement/UNIX_SoftwareElementProvider.h>
#include <BIOSElement/UNIX_BIOSElementProvider.h>
#include <VideoBIOSElement/UNIX_VideoBIOSElementProvider.h>
#include <ConcreteJob/UNIX_ConcreteJobProvider.h>
#include <BatchJob/UNIX_BatchJobProvider.h>
#include <PrintJob/UNIX_PrintJobProvider.h>
#include <FilterList/UNIX_FilterListProvider.h>
#include <RoutingPolicy/UNIX_RoutingPolicyProvider.h>
#include <StaticForwardingEntry/UNIX_StaticForwardingEntryProvider.h>
#include <File/UNIX_FileProvider.h>
#include <BGPPathAttributes/UNIX_BGPPathAttributesProvider.h>




class CIM_AssociatedMemory :
	public CIM_Dependency
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


private:

};

#endif /* CIM_ASSOCIATEDMEMORY */
