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
2.28.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::Memory
*/


/* **** Description *** */
/*
Indicates that the Memory provides Cache to the Dependent Logical Element.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			CIM_AssociatedMemory:

			UNIX_AssociatedCacheMemory:
				Level UInt16
				OtherLevelDescription String
				WritePolicy UInt16
				OtherWritePolicyDescription String
				CacheType UInt16
				OtherCacheTypeDescription String
				LineSize UInt32
				ReplacementPolicy UInt16
				OtherReplacementPolicyDescription String
				ReadPolicy UInt16
				OtherReadPolicyDescription String
				FlushTimer UInt32
				Associativity UInt16
				OtherAssociativityDescription String


*/


/*
			 *** Methods ***

			CIM_Dependency:

			CIM_AssociatedMemory:

			UNIX_AssociatedCacheMemory:


*/

#ifndef __UNIX_ASSOCIATEDCACHEMEMORY_H
#define __UNIX_ASSOCIATEDCACHEMEMORY_H


#include "CIM_AssociatedMemory.h"
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

#include "UNIX_AssociatedCacheMemoryDeps.h"


#ifndef PROPERTY_LEVEL
#define PROPERTY_LEVEL \
					"Level"
#endif

#ifndef PROPERTY_OTHER_LEVEL_DESCRIPTION
#define PROPERTY_OTHER_LEVEL_DESCRIPTION \
					"OtherLevelDescription"
#endif

#ifndef PROPERTY_WRITE_POLICY
#define PROPERTY_WRITE_POLICY \
					"WritePolicy"
#endif

#ifndef PROPERTY_OTHER_WRITE_POLICY_DESCRIPTION
#define PROPERTY_OTHER_WRITE_POLICY_DESCRIPTION \
					"OtherWritePolicyDescription"
#endif

#ifndef PROPERTY_CACHE_TYPE
#define PROPERTY_CACHE_TYPE \
					"CacheType"
#endif

#ifndef PROPERTY_OTHER_CACHE_TYPE_DESCRIPTION
#define PROPERTY_OTHER_CACHE_TYPE_DESCRIPTION \
					"OtherCacheTypeDescription"
#endif

#ifndef PROPERTY_LINE_SIZE
#define PROPERTY_LINE_SIZE \
					"LineSize"
#endif

#ifndef PROPERTY_REPLACEMENT_POLICY
#define PROPERTY_REPLACEMENT_POLICY \
					"ReplacementPolicy"
#endif

#ifndef PROPERTY_OTHER_REPLACEMENT_POLICY_DESCRIPTION
#define PROPERTY_OTHER_REPLACEMENT_POLICY_DESCRIPTION \
					"OtherReplacementPolicyDescription"
#endif

#ifndef PROPERTY_READ_POLICY
#define PROPERTY_READ_POLICY \
					"ReadPolicy"
#endif

#ifndef PROPERTY_OTHER_READ_POLICY_DESCRIPTION
#define PROPERTY_OTHER_READ_POLICY_DESCRIPTION \
					"OtherReadPolicyDescription"
#endif

#ifndef PROPERTY_FLUSH_TIMER
#define PROPERTY_FLUSH_TIMER \
					"FlushTimer"
#endif

#ifndef PROPERTY_ASSOCIATIVITY
#define PROPERTY_ASSOCIATIVITY \
					"Associativity"
#endif

#ifndef PROPERTY_OTHER_ASSOCIATIVITY_DESCRIPTION
#define PROPERTY_OTHER_ASSOCIATIVITY_DESCRIPTION \
					"OtherAssociativityDescription"
#endif



class UNIX_AssociatedCacheMemory :
	public CIM_AssociatedMemory
{
public:

	UNIX_AssociatedCacheMemory();
	~UNIX_AssociatedCacheMemory();

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
	virtual Boolean getLevel(CIMProperty&) const;
	virtual Uint16 getLevel() const;
	virtual void setLevel(Uint16&);
	virtual Boolean getOtherLevelDescription(CIMProperty&) const;
	virtual String getOtherLevelDescription() const;
	virtual void setOtherLevelDescription(String&);
	virtual Boolean getWritePolicy(CIMProperty&) const;
	virtual Uint16 getWritePolicy() const;
	virtual void setWritePolicy(Uint16&);
	virtual Boolean getOtherWritePolicyDescription(CIMProperty&) const;
	virtual String getOtherWritePolicyDescription() const;
	virtual void setOtherWritePolicyDescription(String&);
	virtual Boolean getCacheType(CIMProperty&) const;
	virtual Uint16 getCacheType() const;
	virtual void setCacheType(Uint16&);
	virtual Boolean getOtherCacheTypeDescription(CIMProperty&) const;
	virtual String getOtherCacheTypeDescription() const;
	virtual void setOtherCacheTypeDescription(String&);
	virtual Boolean getLineSize(CIMProperty&) const;
	virtual Uint32 getLineSize() const;
	virtual void setLineSize(Uint32&);
	virtual Boolean getReplacementPolicy(CIMProperty&) const;
	virtual Uint16 getReplacementPolicy() const;
	virtual void setReplacementPolicy(Uint16&);
	virtual Boolean getOtherReplacementPolicyDescription(CIMProperty&) const;
	virtual String getOtherReplacementPolicyDescription() const;
	virtual void setOtherReplacementPolicyDescription(String&);
	virtual Boolean getReadPolicy(CIMProperty&) const;
	virtual Uint16 getReadPolicy() const;
	virtual void setReadPolicy(Uint16&);
	virtual Boolean getOtherReadPolicyDescription(CIMProperty&) const;
	virtual String getOtherReadPolicyDescription() const;
	virtual void setOtherReadPolicyDescription(String&);
	virtual Boolean getFlushTimer(CIMProperty&) const;
	virtual Uint32 getFlushTimer() const;
	virtual void setFlushTimer(Uint32&);
	virtual Boolean getAssociativity(CIMProperty&) const;
	virtual Uint16 getAssociativity() const;
	virtual void setAssociativity(Uint16&);
	virtual Boolean getOtherAssociativityDescription(CIMProperty&) const;
	virtual String getOtherAssociativityDescription() const;
	virtual void setOtherAssociativityDescription(String&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _antecedent;
	CIMInstance _dependent;
	Uint16 _level;
	String _otherLevelDescription;
	Uint16 _writePolicy;
	String _otherWritePolicyDescription;
	Uint16 _cacheType;
	String _otherCacheTypeDescription;
	Uint32 _lineSize;
	Uint16 _replacementPolicy;
	String _otherReplacementPolicyDescription;
	Uint16 _readPolicy;
	String _otherReadPolicyDescription;
	Uint32 _flushTimer;
	Uint16 _associativity;
	String _otherAssociativityDescription;

UNIX_CacheMemory _antecedentCacheMemory;
UNIX_CacheMemoryProvider _antecedentCacheMemoryProvider;
UNIX_VolatileStorage _antecedentVolatileStorage;
UNIX_VolatileStorageProvider _antecedentVolatileStorageProvider;
UNIX_NonVolatileStorage _antecedentNonVolatileStorage;
UNIX_NonVolatileStorageProvider _antecedentNonVolatileStorageProvider;

UNIX_SqlSchema _dependentSqlSchema;
UNIX_SqlSchemaProvider _dependentSqlSchemaProvider;
UNIX_SqlTable _dependentSqlTable;
UNIX_SqlTableProvider _dependentSqlTableProvider;
UNIX_SqlTrigger _dependentSqlTrigger;
UNIX_SqlTriggerProvider _dependentSqlTriggerProvider;
UNIX_SqlDomain _dependentSqlDomain;
UNIX_SqlDomainProvider _dependentSqlDomainProvider;
UNIX_SqlDomainConstraint _dependentSqlDomainConstraint;
UNIX_SqlDomainConstraintProvider _dependentSqlDomainConstraintProvider;
UNIX_SqlUserDefinedType _dependentSqlUserDefinedType;
UNIX_SqlUserDefinedTypeProvider _dependentSqlUserDefinedTypeProvider;
UNIX_Hdr8021Filter _dependentHdr8021Filter;
UNIX_Hdr8021FilterProvider _dependentHdr8021FilterProvider;
UNIX_PreambleFilter _dependentPreambleFilter;
UNIX_PreambleFilterProvider _dependentPreambleFilterProvider;
UNIX_X509CredentialFilterEntry _dependentX509CredentialFilterEntry;
UNIX_X509CredentialFilterEntryProvider _dependentX509CredentialFilterEntryProvider;
UNIX_PeerIDPayloadFilterEntry _dependentPeerIDPayloadFilterEntry;
UNIX_PeerIDPayloadFilterEntryProvider _dependentPeerIDPayloadFilterEntryProvider;
UNIX_FilterEntry _dependentFilterEntry;
UNIX_FilterEntryProvider _dependentFilterEntryProvider;
UNIX_IPHeadersFilter _dependentIPHeadersFilter;
UNIX_IPHeadersFilterProvider _dependentIPHeadersFilterProvider;
UNIX_IPSOFilterEntry _dependentIPSOFilterEntry;
UNIX_IPSOFilterEntryProvider _dependentIPSOFilterEntryProvider;
UNIX_AuthenticationRequirement _dependentAuthenticationRequirement;
UNIX_AuthenticationRequirementProvider _dependentAuthenticationRequirementProvider;
UNIX_DynamicForwardingEntry _dependentDynamicForwardingEntry;
UNIX_DynamicForwardingEntryProvider _dependentDynamicForwardingEntryProvider;
UNIX_SqlCharacterSet _dependentSqlCharacterSet;
UNIX_SqlCharacterSetProvider _dependentSqlCharacterSetProvider;
UNIX_MPLSInSegment _dependentMPLSInSegment;
UNIX_MPLSInSegmentProvider _dependentMPLSInSegmentProvider;
UNIX_MPLSOutSegment _dependentMPLSOutSegment;
UNIX_MPLSOutSegmentProvider _dependentMPLSOutSegmentProvider;
UNIX_NextHopRouting _dependentNextHopRouting;
UNIX_NextHopRoutingProvider _dependentNextHopRoutingProvider;
UNIX_IPRoute _dependentIPRoute;
UNIX_IPRouteProvider _dependentIPRouteProvider;
UNIX_BGPIPRoute _dependentBGPIPRoute;
UNIX_BGPIPRouteProvider _dependentBGPIPRouteProvider;
UNIX_MPLSLSP _dependentMPLSLSP;
UNIX_MPLSLSPProvider _dependentMPLSLSPProvider;
UNIX_CommonDatabase _dependentCommonDatabase;
UNIX_CommonDatabaseProvider _dependentCommonDatabaseProvider;
UNIX_MPLSTunnel _dependentMPLSTunnel;
UNIX_MPLSTunnelProvider _dependentMPLSTunnelProvider;
UNIX_ReplicationEntity _dependentReplicationEntity;
UNIX_ReplicationEntityProvider _dependentReplicationEntityProvider;
UNIX_PrintQueue _dependentPrintQueue;
UNIX_PrintQueueProvider _dependentPrintQueueProvider;
UNIX_JobQueue _dependentJobQueue;
UNIX_JobQueueProvider _dependentJobQueueProvider;
UNIX_ReusablePolicyContainer _dependentReusablePolicyContainer;
UNIX_ReusablePolicyContainerProvider _dependentReusablePolicyContainerProvider;
UNIX_PolicyRepository _dependentPolicyRepository;
UNIX_PolicyRepositoryProvider _dependentPolicyRepositoryProvider;
UNIX_AutonomousSystem _dependentAutonomousSystem;
UNIX_AutonomousSystemProvider _dependentAutonomousSystemProvider;
UNIX_RoutingProtocolDomain _dependentRoutingProtocolDomain;
UNIX_RoutingProtocolDomainProvider _dependentRoutingProtocolDomainProvider;
UNIX_OSPFArea _dependentOSPFArea;
UNIX_OSPFAreaProvider _dependentOSPFAreaProvider;
UNIX_Network _dependentNetwork;
UNIX_NetworkProvider _dependentNetworkProvider;
UNIX_VLANNetwork _dependentVLANNetwork;
UNIX_VLANNetworkProvider _dependentVLANNetworkProvider;
UNIX_TierDomain _dependentTierDomain;
UNIX_TierDomainProvider _dependentTierDomainProvider;
UNIX_ApplicationSystem _dependentApplicationSystem;
UNIX_ApplicationSystemProvider _dependentApplicationSystemProvider;
UNIX_DatabaseSystem _dependentDatabaseSystem;
UNIX_DatabaseSystemProvider _dependentDatabaseSystemProvider;
UNIX_StorageLibrary _dependentStorageLibrary;
UNIX_StorageLibraryProvider _dependentStorageLibraryProvider;
UNIX_VirtualComputerSystem _dependentVirtualComputerSystem;
UNIX_VirtualComputerSystemProvider _dependentVirtualComputerSystemProvider;
UNIX_Cluster _dependentCluster;
UNIX_ClusterProvider _dependentClusterProvider;
UNIX_ComputerSystem _dependentComputerSystem;
UNIX_ComputerSystemProvider _dependentComputerSystemProvider;
UNIX_SCSIArbitraryLogicalUnit _dependentSCSIArbitraryLogicalUnit;
UNIX_SCSIArbitraryLogicalUnitProvider _dependentSCSIArbitraryLogicalUnitProvider;
UNIX_Button _dependentButton;
UNIX_ButtonProvider _dependentButtonProvider;
UNIX_PowerSupply _dependentPowerSupply;
UNIX_PowerSupplyProvider _dependentPowerSupplyProvider;
UNIX_UninterruptiblePowerSupply _dependentUninterruptiblePowerSupply;
UNIX_UninterruptiblePowerSupplyProvider _dependentUninterruptiblePowerSupplyProvider;
UNIX_Battery _dependentBattery;
UNIX_BatteryProvider _dependentBatteryProvider;
UNIX_TapeDrive _dependentTapeDrive;
UNIX_TapeDriveProvider _dependentTapeDriveProvider;
UNIX_CDROMDrive _dependentCDROMDrive;
UNIX_CDROMDriveProvider _dependentCDROMDriveProvider;
UNIX_WORMDrive _dependentWORMDrive;
UNIX_WORMDriveProvider _dependentWORMDriveProvider;
UNIX_DiskDrive _dependentDiskDrive;
UNIX_DiskDriveProvider _dependentDiskDriveProvider;
UNIX_DVDDrive _dependentDVDDrive;
UNIX_DVDDriveProvider _dependentDVDDriveProvider;
UNIX_DisketteDrive _dependentDisketteDrive;
UNIX_DisketteDriveProvider _dependentDisketteDriveProvider;
UNIX_MagnetoOpticalDrive _dependentMagnetoOpticalDrive;
UNIX_MagnetoOpticalDriveProvider _dependentMagnetoOpticalDriveProvider;
UNIX_USBDevice _dependentUSBDevice;
UNIX_USBDeviceProvider _dependentUSBDeviceProvider;
UNIX_USBHub _dependentUSBHub;
UNIX_USBHubProvider _dependentUSBHubProvider;
UNIX_PowerConnectionPoint _dependentPowerConnectionPoint;
UNIX_PowerConnectionPointProvider _dependentPowerConnectionPointProvider;
UNIX_LabelReader _dependentLabelReader;
UNIX_LabelReaderProvider _dependentLabelReaderProvider;
UNIX_LogicalDisk _dependentLogicalDisk;
UNIX_LogicalDiskProvider _dependentLogicalDiskProvider;
UNIX_Snapshot _dependentSnapshot;
UNIX_SnapshotProvider _dependentSnapshotProvider;
UNIX_VTOCDiskPartition _dependentVTOCDiskPartition;
UNIX_VTOCDiskPartitionProvider _dependentVTOCDiskPartitionProvider;
UNIX_GPTDiskPartition _dependentGPTDiskPartition;
UNIX_GPTDiskPartitionProvider _dependentGPTDiskPartitionProvider;
UNIX_DiskPartition _dependentDiskPartition;
UNIX_DiskPartitionProvider _dependentDiskPartitionProvider;
UNIX_TapePartition _dependentTapePartition;
UNIX_TapePartitionProvider _dependentTapePartitionProvider;
UNIX_CompositeExtent _dependentCompositeExtent;
UNIX_CompositeExtentProvider _dependentCompositeExtentProvider;
UNIX_ProtectedSpaceExtent _dependentProtectedSpaceExtent;
UNIX_ProtectedSpaceExtentProvider _dependentProtectedSpaceExtentProvider;
UNIX_PhysicalExtent _dependentPhysicalExtent;
UNIX_PhysicalExtentProvider _dependentPhysicalExtentProvider;
UNIX_DatabaseSegment _dependentDatabaseSegment;
UNIX_DatabaseSegmentProvider _dependentDatabaseSegmentProvider;
UNIX_AggregatePExtent _dependentAggregatePExtent;
UNIX_AggregatePExtentProvider _dependentAggregatePExtentProvider;
UNIX_VolumeSet _dependentVolumeSet;
UNIX_VolumeSetProvider _dependentVolumeSetProvider;
UNIX_OpaqueManagementData _dependentOpaqueManagementData;
UNIX_OpaqueManagementDataProvider _dependentOpaqueManagementDataProvider;
UNIX_AggregatePSExtent _dependentAggregatePSExtent;
UNIX_AggregatePSExtentProvider _dependentAggregatePSExtentProvider;
UNIX_CacheMemory _dependentCacheMemory;
UNIX_CacheMemoryProvider _dependentCacheMemoryProvider;
UNIX_VolatileStorage _dependentVolatileStorage;
UNIX_VolatileStorageProvider _dependentVolatileStorageProvider;
UNIX_NonVolatileStorage _dependentNonVolatileStorage;
UNIX_NonVolatileStorageProvider _dependentNonVolatileStorageProvider;
UNIX_Printer _dependentPrinter;
UNIX_PrinterProvider _dependentPrinterProvider;
UNIX_CurrentSensor _dependentCurrentSensor;
UNIX_CurrentSensorProvider _dependentCurrentSensorProvider;
UNIX_TemperatureSensor _dependentTemperatureSensor;
UNIX_TemperatureSensorProvider _dependentTemperatureSensorProvider;
UNIX_VoltageSensor _dependentVoltageSensor;
UNIX_VoltageSensorProvider _dependentVoltageSensorProvider;
UNIX_Tachometer _dependentTachometer;
UNIX_TachometerProvider _dependentTachometerProvider;
UNIX_MultiStateSensor _dependentMultiStateSensor;
UNIX_MultiStateSensorProvider _dependentMultiStateSensorProvider;
UNIX_BinarySensor _dependentBinarySensor;
UNIX_BinarySensorProvider _dependentBinarySensorProvider;
UNIX_DiscreteSensor _dependentDiscreteSensor;
UNIX_DiscreteSensorProvider _dependentDiscreteSensorProvider;
UNIX_CableModem _dependentCableModem;
UNIX_CableModemProvider _dependentCableModemProvider;
UNIX_ADSLModem _dependentADSLModem;
UNIX_ADSLModemProvider _dependentADSLModemProvider;
UNIX_VDSLModem _dependentVDSLModem;
UNIX_VDSLModemProvider _dependentVDSLModemProvider;
UNIX_HDSLModem _dependentHDSLModem;
UNIX_HDSLModemProvider _dependentHDSLModemProvider;
UNIX_SDSLModem _dependentSDSLModem;
UNIX_SDSLModemProvider _dependentSDSLModemProvider;
UNIX_Unimodem _dependentUnimodem;
UNIX_UnimodemProvider _dependentUnimodemProvider;
UNIX_ISDNModem _dependentISDNModem;
UNIX_ISDNModemProvider _dependentISDNModemProvider;
UNIX_Keyboard _dependentKeyboard;
UNIX_KeyboardProvider _dependentKeyboardProvider;
UNIX_PointingDevice _dependentPointingDevice;
UNIX_PointingDeviceProvider _dependentPointingDeviceProvider;
UNIX_DesktopMonitor _dependentDesktopMonitor;
UNIX_DesktopMonitorProvider _dependentDesktopMonitorProvider;
UNIX_FlatPanel _dependentFlatPanel;
UNIX_FlatPanelProvider _dependentFlatPanelProvider;
UNIX_Processor _dependentProcessor;
UNIX_ProcessorProvider _dependentProcessorProvider;
UNIX_VideoHead _dependentVideoHead;
UNIX_VideoHeadProvider _dependentVideoHeadProvider;
UNIX_FingerprintReader _dependentFingerprintReader;
UNIX_FingerprintReaderProvider _dependentFingerprintReaderProvider;
UNIX_Door _dependentDoor;
UNIX_DoorProvider _dependentDoorProvider;
UNIX_SmartCard _dependentSmartCard;
UNIX_SmartCardProvider _dependentSmartCardProvider;
UNIX_NetworkPort _dependentNetworkPort;
UNIX_NetworkPortProvider _dependentNetworkPortProvider;
UNIX_WiFiPort _dependentWiFiPort;
UNIX_WiFiPortProvider _dependentWiFiPortProvider;
UNIX_EthernetPort _dependentEthernetPort;
UNIX_EthernetPortProvider _dependentEthernetPortProvider;
UNIX_LLDPEthernetPort _dependentLLDPEthernetPort;
UNIX_LLDPEthernetPortProvider _dependentLLDPEthernetPortProvider;
UNIX_DataCenterEthernetPort _dependentDataCenterEthernetPort;
UNIX_DataCenterEthernetPortProvider _dependentDataCenterEthernetPortProvider;
UNIX_SASPort _dependentSASPort;
UNIX_SASPortProvider _dependentSASPortProvider;
UNIX_IBPort _dependentIBPort;
UNIX_IBPortProvider _dependentIBPortProvider;
UNIX_FCPort _dependentFCPort;
UNIX_FCPortProvider _dependentFCPortProvider;
UNIX_WirelessPort _dependentWirelessPort;
UNIX_WirelessPortProvider _dependentWirelessPortProvider;
UNIX_TokenRingPort _dependentTokenRingPort;
UNIX_TokenRingPortProvider _dependentTokenRingPortProvider;
UNIX_DAPort _dependentDAPort;
UNIX_DAPortProvider _dependentDAPortProvider;
UNIX_SerialPort _dependentSerialPort;
UNIX_SerialPortProvider _dependentSerialPortProvider;
UNIX_ATAPort _dependentATAPort;
UNIX_ATAPortProvider _dependentATAPortProvider;
UNIX_USBPort _dependentUSBPort;
UNIX_USBPortProvider _dependentUSBPortProvider;
UNIX_PCIPort _dependentPCIPort;
UNIX_PCIPortProvider _dependentPCIPortProvider;
UNIX_SPIPort _dependentSPIPort;
UNIX_SPIPortProvider _dependentSPIPortProvider;
UNIX_ParallelPort _dependentParallelPort;
UNIX_ParallelPortProvider _dependentParallelPortProvider;
UNIX_FibrePort _dependentFibrePort;
UNIX_FibrePortProvider _dependentFibrePortProvider;
UNIX_Watchdog _dependentWatchdog;
UNIX_WatchdogProvider _dependentWatchdogProvider;
UNIX_EthernetAdapter _dependentEthernetAdapter;
UNIX_EthernetAdapterProvider _dependentEthernetAdapterProvider;
UNIX_TokenRingAdapter _dependentTokenRingAdapter;
UNIX_TokenRingAdapterProvider _dependentTokenRingAdapterProvider;
UNIX_FibreChannelAdapter _dependentFibreChannelAdapter;
UNIX_FibreChannelAdapterProvider _dependentFibreChannelAdapterProvider;
UNIX_IndicatorLED _dependentIndicatorLED;
UNIX_IndicatorLEDProvider _dependentIndicatorLEDProvider;
UNIX_ElectricalSwitch _dependentElectricalSwitch;
UNIX_ElectricalSwitchProvider _dependentElectricalSwitchProvider;
UNIX_ProtocolController _dependentProtocolController;
UNIX_ProtocolControllerProvider _dependentProtocolControllerProvider;
UNIX_SCSIProtocolController _dependentSCSIProtocolController;
UNIX_SCSIProtocolControllerProvider _dependentSCSIProtocolControllerProvider;
UNIX_WiFiRadio _dependentWiFiRadio;
UNIX_WiFiRadioProvider _dependentWiFiRadioProvider;
UNIX_InterLibraryPort _dependentInterLibraryPort;
UNIX_InterLibraryPortProvider _dependentInterLibraryPortProvider;
UNIX_LimitedAccessPort _dependentLimitedAccessPort;
UNIX_LimitedAccessPortProvider _dependentLimitedAccessPortProvider;
UNIX_SmartCardReader _dependentSmartCardReader;
UNIX_SmartCardReaderProvider _dependentSmartCardReaderProvider;
UNIX_PCIBridge _dependentPCIBridge;
UNIX_PCIBridgeProvider _dependentPCIBridgeProvider;
UNIX_PCIeSwitch _dependentPCIeSwitch;
UNIX_PCIeSwitchProvider _dependentPCIeSwitchProvider;
UNIX_PortController _dependentPortController;
UNIX_PortControllerProvider _dependentPortControllerProvider;
UNIX_IBPortController _dependentIBPortController;
UNIX_IBPortControllerProvider _dependentIBPortControllerProvider;
UNIX_ParallelController _dependentParallelController;
UNIX_ParallelControllerProvider _dependentParallelControllerProvider;
UNIX_InfraredController _dependentInfraredController;
UNIX_InfraredControllerProvider _dependentInfraredControllerProvider;
UNIX_ManagementController _dependentManagementController;
UNIX_ManagementControllerProvider _dependentManagementControllerProvider;
UNIX_SSAController _dependentSSAController;
UNIX_SSAControllerProvider _dependentSSAControllerProvider;
UNIX_AGPVideoController _dependentAGPVideoController;
UNIX_AGPVideoControllerProvider _dependentAGPVideoControllerProvider;
UNIX_PCVideoController _dependentPCVideoController;
UNIX_PCVideoControllerProvider _dependentPCVideoControllerProvider;
UNIX_SerialController _dependentSerialController;
UNIX_SerialControllerProvider _dependentSerialControllerProvider;
UNIX_DisplayController _dependentDisplayController;
UNIX_DisplayControllerProvider _dependentDisplayControllerProvider;
UNIX_AGPVideoDisplayController _dependentAGPVideoDisplayController;
UNIX_AGPVideoDisplayControllerProvider _dependentAGPVideoDisplayControllerProvider;
UNIX_USBController _dependentUSBController;
UNIX_USBControllerProvider _dependentUSBControllerProvider;
UNIX_IDEController _dependentIDEController;
UNIX_IDEControllerProvider _dependentIDEControllerProvider;
UNIX_PCMCIAController _dependentPCMCIAController;
UNIX_PCMCIAControllerProvider _dependentPCMCIAControllerProvider;
UNIX_SCSIController _dependentSCSIController;
UNIX_SCSIControllerProvider _dependentSCSIControllerProvider;
UNIX_ESCONController _dependentESCONController;
UNIX_ESCONControllerProvider _dependentESCONControllerProvider;
UNIX_DeviceTray _dependentDeviceTray;
UNIX_DeviceTrayProvider _dependentDeviceTrayProvider;
UNIX_PassThroughModule _dependentPassThroughModule;
UNIX_PassThroughModuleProvider _dependentPassThroughModuleProvider;
UNIX_AlarmDevice _dependentAlarmDevice;
UNIX_AlarmDeviceProvider _dependentAlarmDeviceProvider;
UNIX_Fan _dependentFan;
UNIX_FanProvider _dependentFanProvider;
UNIX_Refrigeration _dependentRefrigeration;
UNIX_RefrigerationProvider _dependentRefrigerationProvider;
UNIX_HeatPipe _dependentHeatPipe;
UNIX_HeatPipeProvider _dependentHeatPipeProvider;
UNIX_TPM _dependentTPM;
UNIX_TPMProvider _dependentTPMProvider;
UNIX_Scanner _dependentScanner;
UNIX_ScannerProvider _dependentScannerProvider;
UNIX_Provider _dependentProvider;
UNIX_ProviderProvider _dependentProviderProvider;
UNIX_IRQ _dependentIRQ;
UNIX_IRQProvider _dependentIRQProvider;
UNIX_PortResource _dependentPortResource;
UNIX_PortResourceProvider _dependentPortResourceProvider;
UNIX_MemoryResource _dependentMemoryResource;
UNIX_MemoryResourceProvider _dependentMemoryResourceProvider;
UNIX_DMA _dependentDMA;
UNIX_DMAProvider _dependentDMAProvider;
UNIX_NFSShare _dependentNFSShare;
UNIX_NFSShareProvider _dependentNFSShareProvider;
UNIX_CIFSShare _dependentCIFSShare;
UNIX_CIFSShareProvider _dependentCIFSShareProvider;
UNIX_MessageLog _dependentMessageLog;
UNIX_MessageLogProvider _dependentMessageLogProvider;
UNIX_DiagnosticLog _dependentDiagnosticLog;
UNIX_DiagnosticLogProvider _dependentDiagnosticLogProvider;
UNIX_DiagnosticsLog _dependentDiagnosticsLog;
UNIX_DiagnosticsLogProvider _dependentDiagnosticsLogProvider;
UNIX_FibreProtocolService _dependentFibreProtocolService;
UNIX_FibreProtocolServiceProvider _dependentFibreProtocolServiceProvider;
UNIX_WakeUpService _dependentWakeUpService;
UNIX_WakeUpServiceProvider _dependentWakeUpServiceProvider;
UNIX_VirtualSystemSnapshotService _dependentVirtualSystemSnapshotService;
UNIX_VirtualSystemSnapshotServiceProvider _dependentVirtualSystemSnapshotServiceProvider;
UNIX_ResourcePoolConfigurationService _dependentResourcePoolConfigurationService;
UNIX_ResourcePoolConfigurationServiceProvider _dependentResourcePoolConfigurationServiceProvider;
UNIX_FileSystemConfigurationService _dependentFileSystemConfigurationService;
UNIX_FileSystemConfigurationServiceProvider _dependentFileSystemConfigurationServiceProvider;
UNIX_HelpService _dependentHelpService;
UNIX_HelpServiceProvider _dependentHelpServiceProvider;
UNIX_StorageRelocationService _dependentStorageRelocationService;
UNIX_StorageRelocationServiceProvider _dependentStorageRelocationServiceProvider;
UNIX_MPLSService _dependentMPLSService;
UNIX_MPLSServiceProvider _dependentMPLSServiceProvider;
UNIX_PolicyActivationService _dependentPolicyActivationService;
UNIX_PolicyActivationServiceProvider _dependentPolicyActivationServiceProvider;
UNIX_SCSIPathConfigurationService _dependentSCSIPathConfigurationService;
UNIX_SCSIPathConfigurationServiceProvider _dependentSCSIPathConfigurationServiceProvider;
UNIX_BIOSService _dependentBIOSService;
UNIX_BIOSServiceProvider _dependentBIOSServiceProvider;
UNIX_PowerManagementService _dependentPowerManagementService;
UNIX_PowerManagementServiceProvider _dependentPowerManagementServiceProvider;
UNIX_NetworkPortConfigurationService _dependentNetworkPortConfigurationService;
UNIX_NetworkPortConfigurationServiceProvider _dependentNetworkPortConfigurationServiceProvider;
UNIX_WiFiPortConfigurationService _dependentWiFiPortConfigurationService;
UNIX_WiFiPortConfigurationServiceProvider _dependentWiFiPortConfigurationServiceProvider;
UNIX_VRFConfigurationService _dependentVRFConfigurationService;
UNIX_VRFConfigurationServiceProvider _dependentVRFConfigurationServiceProvider;
UNIX_ReplicationService _dependentReplicationService;
UNIX_ReplicationServiceProvider _dependentReplicationServiceProvider;
UNIX_AccountManagementService _dependentAccountManagementService;
UNIX_AccountManagementServiceProvider _dependentAccountManagementServiceProvider;
UNIX_VerificationService _dependentVerificationService;
UNIX_VerificationServiceProvider _dependentVerificationServiceProvider;
UNIX_CertificateAuthority _dependentCertificateAuthority;
UNIX_CertificateAuthorityProvider _dependentCertificateAuthorityProvider;
UNIX_Notary _dependentNotary;
UNIX_NotaryProvider _dependentNotaryProvider;
UNIX_KeyBasedCredentialManagementService _dependentKeyBasedCredentialManagementService;
UNIX_KeyBasedCredentialManagementServiceProvider _dependentKeyBasedCredentialManagementServiceProvider;
UNIX_CertificateManagementService _dependentCertificateManagementService;
UNIX_CertificateManagementServiceProvider _dependentCertificateManagementServiceProvider;
UNIX_KerberosKeyDistributionCenter _dependentKerberosKeyDistributionCenter;
UNIX_KerberosKeyDistributionCenterProvider _dependentKerberosKeyDistributionCenterProvider;
UNIX_PublicKeyManagementService _dependentPublicKeyManagementService;
UNIX_PublicKeyManagementServiceProvider _dependentPublicKeyManagementServiceProvider;
UNIX_SharedSecretService _dependentSharedSecretService;
UNIX_SharedSecretServiceProvider _dependentSharedSecretServiceProvider;
UNIX_IdentityManagementService _dependentIdentityManagementService;
UNIX_IdentityManagementServiceProvider _dependentIdentityManagementServiceProvider;
UNIX_StorageHardwareIDManagementService _dependentStorageHardwareIDManagementService;
UNIX_StorageHardwareIDManagementServiceProvider _dependentStorageHardwareIDManagementServiceProvider;
UNIX_AuthorizationService _dependentAuthorizationService;
UNIX_AuthorizationServiceProvider _dependentAuthorizationServiceProvider;
UNIX_PrivilegeManagementService _dependentPrivilegeManagementService;
UNIX_PrivilegeManagementServiceProvider _dependentPrivilegeManagementServiceProvider;
UNIX_RoleBasedAuthorizationService _dependentRoleBasedAuthorizationService;
UNIX_RoleBasedAuthorizationServiceProvider _dependentRoleBasedAuthorizationServiceProvider;
UNIX_AccessControlService _dependentAccessControlService;
UNIX_AccessControlServiceProvider _dependentAccessControlServiceProvider;
UNIX_WBEMServer _dependentWBEMServer;
UNIX_WBEMServerProvider _dependentWBEMServerProvider;
UNIX_LaunchInContextService _dependentLaunchInContextService;
UNIX_LaunchInContextServiceProvider _dependentLaunchInContextServiceProvider;
UNIX_VirtualSystemManagementService _dependentVirtualSystemManagementService;
UNIX_VirtualSystemManagementServiceProvider _dependentVirtualSystemManagementServiceProvider;
UNIX_MetricService _dependentMetricService;
UNIX_MetricServiceProvider _dependentMetricServiceProvider;
UNIX_StorageNameBindingService _dependentStorageNameBindingService;
UNIX_StorageNameBindingServiceProvider _dependentStorageNameBindingServiceProvider;
UNIX_ZoneService _dependentZoneService;
UNIX_ZoneServiceProvider _dependentZoneServiceProvider;
UNIX_ControllerConfigurationService _dependentControllerConfigurationService;
UNIX_ControllerConfigurationServiceProvider _dependentControllerConfigurationServiceProvider;
UNIX_GroupMaskingMappingService _dependentGroupMaskingMappingService;
UNIX_GroupMaskingMappingServiceProvider _dependentGroupMaskingMappingServiceProvider;
UNIX_DatabaseService _dependentDatabaseService;
UNIX_DatabaseServiceProvider _dependentDatabaseServiceProvider;
UNIX_DiskPartitionConfigurationService _dependentDiskPartitionConfigurationService;
UNIX_DiskPartitionConfigurationServiceProvider _dependentDiskPartitionConfigurationServiceProvider;
UNIX_ConfigurationReportingService _dependentConfigurationReportingService;
UNIX_ConfigurationReportingServiceProvider _dependentConfigurationReportingServiceProvider;
UNIX_PowerTopologyService _dependentPowerTopologyService;
UNIX_PowerTopologyServiceProvider _dependentPowerTopologyServiceProvider;
UNIX_NetworkPolicyService _dependentNetworkPolicyService;
UNIX_NetworkPolicyServiceProvider _dependentNetworkPolicyServiceProvider;
UNIX_BasicExecutionService _dependentBasicExecutionService;
UNIX_BasicExecutionServiceProvider _dependentBasicExecutionServiceProvider;
UNIX_SpareConfigurationService _dependentSpareConfigurationService;
UNIX_SpareConfigurationServiceProvider _dependentSpareConfigurationServiceProvider;
UNIX_StorageElementCompositionService _dependentStorageElementCompositionService;
UNIX_StorageElementCompositionServiceProvider _dependentStorageElementCompositionServiceProvider;
UNIX_OpaqueManagementDataService _dependentOpaqueManagementDataService;
UNIX_OpaqueManagementDataServiceProvider _dependentOpaqueManagementDataServiceProvider;
UNIX_FingerprintMatchingService _dependentFingerprintMatchingService;
UNIX_FingerprintMatchingServiceProvider _dependentFingerprintMatchingServiceProvider;
UNIX_ProtocolService _dependentProtocolService;
UNIX_ProtocolServiceProvider _dependentProtocolServiceProvider;
UNIX_WBEMProtocolService _dependentWBEMProtocolService;
UNIX_WBEMProtocolServiceProvider _dependentWBEMProtocolServiceProvider;
UNIX_TierService _dependentTierService;
UNIX_TierServiceProvider _dependentTierServiceProvider;
UNIX_TierPolicyService _dependentTierPolicyService;
UNIX_TierPolicyServiceProvider _dependentTierPolicyServiceProvider;
UNIX_IndicationService _dependentIndicationService;
UNIX_IndicationServiceProvider _dependentIndicationServiceProvider;
UNIX_FileImportService _dependentFileImportService;
UNIX_FileImportServiceProvider _dependentFileImportServiceProvider;
UNIX_VTLStatisticalDataService _dependentVTLStatisticalDataService;
UNIX_VTLStatisticalDataServiceProvider _dependentVTLStatisticalDataServiceProvider;
UNIX_DropThresholdCalculationService _dependentDropThresholdCalculationService;
UNIX_DropThresholdCalculationServiceProvider _dependentDropThresholdCalculationServiceProvider;
UNIX_TokenBucketMeterService _dependentTokenBucketMeterService;
UNIX_TokenBucketMeterServiceProvider _dependentTokenBucketMeterServiceProvider;
UNIX_EWMAMeterService _dependentEWMAMeterService;
UNIX_EWMAMeterServiceProvider _dependentEWMAMeterServiceProvider;
UNIX_AverageRateMeterService _dependentAverageRateMeterService;
UNIX_AverageRateMeterServiceProvider _dependentAverageRateMeterServiceProvider;
UNIX_ToSMarkerService _dependentToSMarkerService;
UNIX_ToSMarkerServiceProvider _dependentToSMarkerServiceProvider;
UNIX_Priority8021QMarkerService _dependentPriority8021QMarkerService;
UNIX_Priority8021QMarkerServiceProvider _dependentPriority8021QMarkerServiceProvider;
UNIX_DSCPMarkerService _dependentDSCPMarkerService;
UNIX_DSCPMarkerServiceProvider _dependentDSCPMarkerServiceProvider;
UNIX_PreambleMarkerService _dependentPreambleMarkerService;
UNIX_PreambleMarkerServiceProvider _dependentPreambleMarkerServiceProvider;
UNIX_ClassifierService _dependentClassifierService;
UNIX_ClassifierServiceProvider _dependentClassifierServiceProvider;
UNIX_ClassifierElement _dependentClassifierElement;
UNIX_ClassifierElementProvider _dependentClassifierElementProvider;
UNIX_PacketSchedulingService _dependentPacketSchedulingService;
UNIX_PacketSchedulingServiceProvider _dependentPacketSchedulingServiceProvider;
UNIX_NonWorkConservingSchedulingService _dependentNonWorkConservingSchedulingService;
UNIX_NonWorkConservingSchedulingServiceProvider _dependentNonWorkConservingSchedulingServiceProvider;
UNIX_REDDropperService _dependentREDDropperService;
UNIX_REDDropperServiceProvider _dependentREDDropperServiceProvider;
UNIX_HeadTailDropper _dependentHeadTailDropper;
UNIX_HeadTailDropperProvider _dependentHeadTailDropperProvider;
UNIX_WeightedREDDropperService _dependentWeightedREDDropperService;
UNIX_WeightedREDDropperServiceProvider _dependentWeightedREDDropperServiceProvider;
UNIX_QueuingService _dependentQueuingService;
UNIX_QueuingServiceProvider _dependentQueuingServiceProvider;
UNIX_BootService _dependentBootService;
UNIX_BootServiceProvider _dependentBootServiceProvider;
UNIX_AFService _dependentAFService;
UNIX_AFServiceProvider _dependentAFServiceProvider;
UNIX_EFService _dependentEFService;
UNIX_EFServiceProvider _dependentEFServiceProvider;
UNIX_FlowService _dependentFlowService;
UNIX_FlowServiceProvider _dependentFlowServiceProvider;
UNIX_Hdr8021PService _dependentHdr8021PService;
UNIX_Hdr8021PServiceProvider _dependentHdr8021PServiceProvider;
UNIX_PrecedenceService _dependentPrecedenceService;
UNIX_PrecedenceServiceProvider _dependentPrecedenceServiceProvider;
UNIX_PrintService _dependentPrintService;
UNIX_PrintServiceProvider _dependentPrintServiceProvider;
UNIX_TimeService _dependentTimeService;
UNIX_TimeServiceProvider _dependentTimeServiceProvider;
UNIX_SoftwareInstallationService _dependentSoftwareInstallationService;
UNIX_SoftwareInstallationServiceProvider _dependentSoftwareInstallationServiceProvider;
UNIX_VLANService _dependentVLANService;
UNIX_VLANServiceProvider _dependentVLANServiceProvider;
UNIX_Specific802dot1QVLANService _dependentSpecific802dot1QVLANService;
UNIX_Specific802dot1QVLANServiceProvider _dependentSpecific802dot1QVLANServiceProvider;
UNIX_PowerUtilizationManagementService _dependentPowerUtilizationManagementService;
UNIX_PowerUtilizationManagementServiceProvider _dependentPowerUtilizationManagementServiceProvider;
UNIX_ClusteringService _dependentClusteringService;
UNIX_ClusteringServiceProvider _dependentClusteringServiceProvider;
UNIX_SharedDeviceManagementService _dependentSharedDeviceManagementService;
UNIX_SharedDeviceManagementServiceProvider _dependentSharedDeviceManagementServiceProvider;
UNIX_BatchService _dependentBatchService;
UNIX_BatchServiceProvider _dependentBatchServiceProvider;
UNIX_iSCSIConfigurationService _dependentiSCSIConfigurationService;
UNIX_iSCSIConfigurationServiceProvider _dependentiSCSIConfigurationServiceProvider;
UNIX_OOBAlertService _dependentOOBAlertService;
UNIX_OOBAlertServiceProvider _dependentOOBAlertServiceProvider;
UNIX_StorageConfigurationService _dependentStorageConfigurationService;
UNIX_StorageConfigurationServiceProvider _dependentStorageConfigurationServiceProvider;
UNIX_IPConfigurationService _dependentIPConfigurationService;
UNIX_IPConfigurationServiceProvider _dependentIPConfigurationServiceProvider;
UNIX_VirtualSystemMigrationService _dependentVirtualSystemMigrationService;
UNIX_VirtualSystemMigrationServiceProvider _dependentVirtualSystemMigrationServiceProvider;
UNIX_MPLSCrossConnect _dependentMPLSCrossConnect;
UNIX_MPLSCrossConnectProvider _dependentMPLSCrossConnectProvider;
UNIX_PlatformWatchdogService _dependentPlatformWatchdogService;
UNIX_PlatformWatchdogServiceProvider _dependentPlatformWatchdogServiceProvider;
UNIX_FCHBADiagnosticTest _dependentFCHBADiagnosticTest;
UNIX_FCHBADiagnosticTestProvider _dependentFCHBADiagnosticTestProvider;
UNIX_RAIDDiagnosticTest _dependentRAIDDiagnosticTest;
UNIX_RAIDDiagnosticTestProvider _dependentRAIDDiagnosticTestProvider;
UNIX_CPUDiagnosticTest _dependentCPUDiagnosticTest;
UNIX_CPUDiagnosticTestProvider _dependentCPUDiagnosticTestProvider;
UNIX_EthernetNICDiagnosticTest _dependentEthernetNICDiagnosticTest;
UNIX_EthernetNICDiagnosticTestProvider _dependentEthernetNICDiagnosticTestProvider;
UNIX_OpticalDriveDiagnosticTest _dependentOpticalDriveDiagnosticTest;
UNIX_OpticalDriveDiagnosticTestProvider _dependentOpticalDriveDiagnosticTestProvider;
UNIX_OpticalDriveDiagnosticSettingData _dependentOpticalDriveDiagnosticSettingData;
UNIX_OpticalDriveDiagnosticSettingDataProvider _dependentOpticalDriveDiagnosticSettingDataProvider;
UNIX_DiskDriveDiagnosticTest _dependentDiskDriveDiagnosticTest;
UNIX_DiskDriveDiagnosticTestProvider _dependentDiskDriveDiagnosticTestProvider;
UNIX_IBSubnetManager _dependentIBSubnetManager;
UNIX_IBSubnetManagerProvider _dependentIBSubnetManagerProvider;
UNIX_ObjectManager _dependentObjectManager;
UNIX_ObjectManagerProvider _dependentObjectManagerProvider;
UNIX_ObjectManagerAdapter _dependentObjectManagerAdapter;
UNIX_ObjectManagerAdapterProvider _dependentObjectManagerAdapterProvider;
UNIX_ProviderObjectManagerAdapter _dependentProviderObjectManagerAdapter;
UNIX_ProviderObjectManagerAdapterProvider _dependentProviderObjectManagerAdapterProvider;
UNIX_ProtocolAdapter _dependentProtocolAdapter;
UNIX_ProtocolAdapterProvider _dependentProtocolAdapterProvider;
UNIX_FileSystemStatisticsService _dependentFileSystemStatisticsService;
UNIX_FileSystemStatisticsServiceProvider _dependentFileSystemStatisticsServiceProvider;
UNIX_BlockStatisticsService _dependentBlockStatisticsService;
UNIX_BlockStatisticsServiceProvider _dependentBlockStatisticsServiceProvider;
UNIX_USBRedirectionService _dependentUSBRedirectionService;
UNIX_USBRedirectionServiceProvider _dependentUSBRedirectionServiceProvider;
UNIX_TextRedirectionService _dependentTextRedirectionService;
UNIX_TextRedirectionServiceProvider _dependentTextRedirectionServiceProvider;
UNIX_BGPService _dependentBGPService;
UNIX_BGPServiceProvider _dependentBGPServiceProvider;
UNIX_OSPFService _dependentOSPFService;
UNIX_OSPFServiceProvider _dependentOSPFServiceProvider;
UNIX_NATService _dependentNATService;
UNIX_NATServiceProvider _dependentNATServiceProvider;
UNIX_TransparentBridgingService _dependentTransparentBridgingService;
UNIX_TransparentBridgingServiceProvider _dependentTransparentBridgingServiceProvider;
UNIX_SourceRoutingService _dependentSourceRoutingService;
UNIX_SourceRoutingServiceProvider _dependentSourceRoutingServiceProvider;
UNIX_SpanningTreeService _dependentSpanningTreeService;
UNIX_SpanningTreeServiceProvider _dependentSpanningTreeServiceProvider;
UNIX_SwitchService _dependentSwitchService;
UNIX_SwitchServiceProvider _dependentSwitchServiceProvider;
UNIX_FileExportService _dependentFileExportService;
UNIX_FileExportServiceProvider _dependentFileExportServiceProvider;
UNIX_OperatingSystem _dependentOperatingSystem;
UNIX_OperatingSystemProvider _dependentOperatingSystemProvider;
UNIX_SWRFile _dependentSWRFile;
UNIX_SWRFileProvider _dependentSWRFileProvider;
UNIX_SWRPEP _dependentSWRPEP;
UNIX_SWRPEPProvider _dependentSWRPEPProvider;
UNIX_SWRDatabase _dependentSWRDatabase;
UNIX_SWRDatabaseProvider _dependentSWRDatabaseProvider;
UNIX_ProviderLibrary _dependentProviderLibrary;
UNIX_ProviderLibraryProvider _dependentProviderLibraryProvider;
UNIX_ClusteringSAP _dependentClusteringSAP;
UNIX_ClusteringSAPProvider _dependentClusteringSAPProvider;
UNIX_CredentialManagementSAP _dependentCredentialManagementSAP;
UNIX_CredentialManagementSAPProvider _dependentCredentialManagementSAPProvider;
UNIX_USBRedirectionSAP _dependentUSBRedirectionSAP;
UNIX_USBRedirectionSAPProvider _dependentUSBRedirectionSAPProvider;
UNIX_IPNetworkConnection _dependentIPNetworkConnection;
UNIX_IPNetworkConnectionProvider _dependentIPNetworkConnectionProvider;
UNIX_PolicyTransferServiceAccessPoint _dependentPolicyTransferServiceAccessPoint;
UNIX_PolicyTransferServiceAccessPointProvider _dependentPolicyTransferServiceAccessPointProvider;
UNIX_LaunchInContextSAP _dependentLaunchInContextSAP;
UNIX_LaunchInContextSAPProvider _dependentLaunchInContextSAPProvider;
UNIX_RemotePort _dependentRemotePort;
UNIX_RemotePortProvider _dependentRemotePortProvider;
UNIX_MPLSTunnelHop _dependentMPLSTunnelHop;
UNIX_MPLSTunnelHopProvider _dependentMPLSTunnelHopProvider;
UNIX_SoftwareIdentityResource _dependentSoftwareIdentityResource;
UNIX_SoftwareIdentityResourceProvider _dependentSoftwareIdentityResourceProvider;
UNIX_KVMRedirectionSAP _dependentKVMRedirectionSAP;
UNIX_KVMRedirectionSAPProvider _dependentKVMRedirectionSAPProvider;
UNIX_DHCPProtocolEndpoint _dependentDHCPProtocolEndpoint;
UNIX_DHCPProtocolEndpointProvider _dependentDHCPProtocolEndpointProvider;
UNIX_SSHProtocolEndpoint _dependentSSHProtocolEndpoint;
UNIX_SSHProtocolEndpointProvider _dependentSSHProtocolEndpointProvider;
UNIX_SCSIProtocolEndpoint _dependentSCSIProtocolEndpoint;
UNIX_SCSIProtocolEndpointProvider _dependentSCSIProtocolEndpointProvider;
UNIX_iSCSIProtocolEndpoint _dependentiSCSIProtocolEndpoint;
UNIX_iSCSIProtocolEndpointProvider _dependentiSCSIProtocolEndpointProvider;
UNIX_CLPProtocolEndpoint _dependentCLPProtocolEndpoint;
UNIX_CLPProtocolEndpointProvider _dependentCLPProtocolEndpointProvider;
UNIX_IPXProtocolEndpoint _dependentIPXProtocolEndpoint;
UNIX_IPXProtocolEndpointProvider _dependentIPXProtocolEndpointProvider;
UNIX_IPsecSAEndpoint _dependentIPsecSAEndpoint;
UNIX_IPsecSAEndpointProvider _dependentIPsecSAEndpointProvider;
UNIX_IKESAEndpoint _dependentIKESAEndpoint;
UNIX_IKESAEndpointProvider _dependentIKESAEndpointProvider;
UNIX_LANEndpoint _dependentLANEndpoint;
UNIX_LANEndpointProvider _dependentLANEndpointProvider;
UNIX_WiFiEndpoint _dependentWiFiEndpoint;
UNIX_WiFiEndpointProvider _dependentWiFiEndpointProvider;
UNIX_MPLSProtocolEndpoint _dependentMPLSProtocolEndpoint;
UNIX_MPLSProtocolEndpointProvider _dependentMPLSProtocolEndpointProvider;
UNIX_WirelessLANEndpoint _dependentWirelessLANEndpoint;
UNIX_WirelessLANEndpointProvider _dependentWirelessLANEndpointProvider;
UNIX_UDPProtocolEndpoint _dependentUDPProtocolEndpoint;
UNIX_UDPProtocolEndpointProvider _dependentUDPProtocolEndpointProvider;
UNIX_TCPProtocolEndpoint _dependentTCPProtocolEndpoint;
UNIX_TCPProtocolEndpointProvider _dependentTCPProtocolEndpointProvider;
UNIX_OSPFVirtualInterface _dependentOSPFVirtualInterface;
UNIX_OSPFVirtualInterfaceProvider _dependentOSPFVirtualInterfaceProvider;
UNIX_OSPFProtocolEndpoint _dependentOSPFProtocolEndpoint;
UNIX_OSPFProtocolEndpointProvider _dependentOSPFProtocolEndpointProvider;
UNIX_VLANEndpoint _dependentVLANEndpoint;
UNIX_VLANEndpointProvider _dependentVLANEndpointProvider;
UNIX_LinkAggregator8023ad _dependentLinkAggregator8023ad;
UNIX_LinkAggregator8023adProvider _dependentLinkAggregator8023adProvider;
UNIX_ATAProtocolEndpoint _dependentATAProtocolEndpoint;
UNIX_ATAProtocolEndpointProvider _dependentATAProtocolEndpointProvider;
UNIX_IPEncapsulationInterface _dependentIPEncapsulationInterface;
UNIX_IPEncapsulationInterfaceProvider _dependentIPEncapsulationInterfaceProvider;
UNIX_IPSubinterface _dependentIPSubinterface;
UNIX_IPSubinterfaceProvider _dependentIPSubinterfaceProvider;
UNIX_SwitchVirtualInterface _dependentSwitchVirtualInterface;
UNIX_SwitchVirtualInterfaceProvider _dependentSwitchVirtualInterfaceProvider;
UNIX_IPLoopback _dependentIPLoopback;
UNIX_IPLoopbackProvider _dependentIPLoopbackProvider;
UNIX_BGPProtocolEndpoint _dependentBGPProtocolEndpoint;
UNIX_BGPProtocolEndpointProvider _dependentBGPProtocolEndpointProvider;
UNIX_SwitchPort _dependentSwitchPort;
UNIX_SwitchPortProvider _dependentSwitchPortProvider;
UNIX_DNSProtocolEndpoint _dependentDNSProtocolEndpoint;
UNIX_DNSProtocolEndpointProvider _dependentDNSProtocolEndpointProvider;
UNIX_LAGPort8023ad _dependentLAGPort8023ad;
UNIX_LAGPort8023adProvider _dependentLAGPort8023adProvider;
UNIX_BatchSAP _dependentBatchSAP;
UNIX_BatchSAPProvider _dependentBatchSAPProvider;
UNIX_TextRedirectionSAP _dependentTextRedirectionSAP;
UNIX_TextRedirectionSAPProvider _dependentTextRedirectionSAPProvider;
UNIX_MediaRedirectionSAP _dependentMediaRedirectionSAP;
UNIX_MediaRedirectionSAPProvider _dependentMediaRedirectionSAPProvider;
UNIX_PrintSAP _dependentPrintSAP;
UNIX_PrintSAPProvider _dependentPrintSAPProvider;
UNIX_ServiceAccessURI _dependentServiceAccessURI;
UNIX_ServiceAccessURIProvider _dependentServiceAccessURIProvider;
UNIX_ObjectManagerCommunicationMechanism _dependentObjectManagerCommunicationMechanism;
UNIX_ObjectManagerCommunicationMechanismProvider _dependentObjectManagerCommunicationMechanismProvider;
UNIX_CIMXMLCommunicationMechanism _dependentCIMXMLCommunicationMechanism;
UNIX_CIMXMLCommunicationMechanismProvider _dependentCIMXMLCommunicationMechanismProvider;
UNIX_VLAN _dependentVLAN;
UNIX_VLANProvider _dependentVLANProvider;
UNIX_BootSAP _dependentBootSAP;
UNIX_BootSAPProvider _dependentBootSAPProvider;
UNIX_Process _dependentProcess;
UNIX_ProcessProvider _dependentProcessProvider;
UNIX_ProcessorCore _dependentProcessorCore;
UNIX_ProcessorCoreProvider _dependentProcessorCoreProvider;
UNIX_iSCSISession _dependentiSCSISession;
UNIX_iSCSISessionProvider _dependentiSCSISessionProvider;
UNIX_iSCSIConnection _dependentiSCSIConnection;
UNIX_iSCSIConnectionProvider _dependentiSCSIConnectionProvider;
UNIX_HardwareThread _dependentHardwareThread;
UNIX_HardwareThreadProvider _dependentHardwareThreadProvider;
UNIX_FileSystem _dependentFileSystem;
UNIX_FileSystemProvider _dependentFileSystemProvider;
UNIX_DatabaseStorageArea _dependentDatabaseStorageArea;
UNIX_DatabaseStorageAreaProvider _dependentDatabaseStorageAreaProvider;
UNIX_LocalFileSystem _dependentLocalFileSystem;
UNIX_LocalFileSystemProvider _dependentLocalFileSystemProvider;
UNIX_RemoteFileSystem _dependentRemoteFileSystem;
UNIX_RemoteFileSystemProvider _dependentRemoteFileSystemProvider;
UNIX_NFS _dependentNFS;
UNIX_NFSProvider _dependentNFSProvider;
UNIX_Thread _dependentThread;
UNIX_ThreadProvider _dependentThreadProvider;
UNIX_Account _dependentAccount;
UNIX_AccountProvider _dependentAccountProvider;
UNIX_BGPAttributes _dependentBGPAttributes;
UNIX_BGPAttributesProvider _dependentBGPAttributesProvider;
UNIX_ResourcePool _dependentResourcePool;
UNIX_ResourcePoolProvider _dependentResourcePoolProvider;
UNIX_StoragePool _dependentStoragePool;
UNIX_StoragePoolProvider _dependentStoragePoolProvider;
UNIX_AdministrativeDistance _dependentAdministrativeDistance;
UNIX_AdministrativeDistanceProvider _dependentAdministrativeDistanceProvider;
UNIX_SoftwareFeature _dependentSoftwareFeature;
UNIX_SoftwareFeatureProvider _dependentSoftwareFeatureProvider;
UNIX_VideoBIOSFeature _dependentVideoBIOSFeature;
UNIX_VideoBIOSFeatureProvider _dependentVideoBIOSFeatureProvider;
UNIX_BIOSFeature _dependentBIOSFeature;
UNIX_BIOSFeatureProvider _dependentBIOSFeatureProvider;
UNIX_AGPSoftwareFeature _dependentAGPSoftwareFeature;
UNIX_AGPSoftwareFeatureProvider _dependentAGPSoftwareFeatureProvider;
UNIX_BGPRouteMap _dependentBGPRouteMap;
UNIX_BGPRouteMapProvider _dependentBGPRouteMapProvider;
UNIX_OSPFAreaConfiguration _dependentOSPFAreaConfiguration;
UNIX_OSPFAreaConfigurationProvider _dependentOSPFAreaConfigurationProvider;
UNIX_FIFOPipeFile _dependentFIFOPipeFile;
UNIX_FIFOPipeFileProvider _dependentFIFOPipeFileProvider;
UNIX_Directory _dependentDirectory;
UNIX_DirectoryProvider _dependentDirectoryProvider;
UNIX_DataFile _dependentDataFile;
UNIX_DataFileProvider _dependentDataFileProvider;
UNIX_SymbolicLink _dependentSymbolicLink;
UNIX_SymbolicLinkProvider _dependentSymbolicLinkProvider;
UNIX_DeviceFile _dependentDeviceFile;
UNIX_DeviceFileProvider _dependentDeviceFileProvider;
UNIX_SpareGroup _dependentSpareGroup;
UNIX_SpareGroupProvider _dependentSpareGroupProvider;
UNIX_ExtraCapacityGroup _dependentExtraCapacityGroup;
UNIX_ExtraCapacityGroupProvider _dependentExtraCapacityGroupProvider;
UNIX_StorageRedundancyGroup _dependentStorageRedundancyGroup;
UNIX_StorageRedundancyGroupProvider _dependentStorageRedundancyGroupProvider;
UNIX_AccessControlInformation _dependentAccessControlInformation;
UNIX_AccessControlInformationProvider _dependentAccessControlInformationProvider;
UNIX_PrintFinisher _dependentPrintFinisher;
UNIX_PrintFinisherProvider _dependentPrintFinisherProvider;
UNIX_PrintMarker _dependentPrintMarker;
UNIX_PrintMarkerProvider _dependentPrintMarkerProvider;
UNIX_PrintSupply _dependentPrintSupply;
UNIX_PrintSupplyProvider _dependentPrintSupplyProvider;
UNIX_PrintInterlock _dependentPrintInterlock;
UNIX_PrintInterlockProvider _dependentPrintInterlockProvider;
UNIX_PrintChannel _dependentPrintChannel;
UNIX_PrintChannelProvider _dependentPrintChannelProvider;
UNIX_PrintInputTray _dependentPrintInputTray;
UNIX_PrintInputTrayProvider _dependentPrintInputTrayProvider;
UNIX_PrintOutputTray _dependentPrintOutputTray;
UNIX_PrintOutputTrayProvider _dependentPrintOutputTrayProvider;
UNIX_PrintInterpreter _dependentPrintInterpreter;
UNIX_PrintInterpreterProvider _dependentPrintInterpreterProvider;
UNIX_PrintMediaPath _dependentPrintMediaPath;
UNIX_PrintMediaPathProvider _dependentPrintMediaPathProvider;
UNIX_SoftwareIdentity _dependentSoftwareIdentity;
UNIX_SoftwareIdentityProvider _dependentSoftwareIdentityProvider;
UNIX_SoftwareElement _dependentSoftwareElement;
UNIX_SoftwareElementProvider _dependentSoftwareElementProvider;
UNIX_BIOSElement _dependentBIOSElement;
UNIX_BIOSElementProvider _dependentBIOSElementProvider;
UNIX_VideoBIOSElement _dependentVideoBIOSElement;
UNIX_VideoBIOSElementProvider _dependentVideoBIOSElementProvider;
UNIX_ConcreteJob _dependentConcreteJob;
UNIX_ConcreteJobProvider _dependentConcreteJobProvider;
UNIX_BatchJob _dependentBatchJob;
UNIX_BatchJobProvider _dependentBatchJobProvider;
UNIX_PrintJob _dependentPrintJob;
UNIX_PrintJobProvider _dependentPrintJobProvider;
UNIX_FilterList _dependentFilterList;
UNIX_FilterListProvider _dependentFilterListProvider;
UNIX_RoutingPolicy _dependentRoutingPolicy;
UNIX_RoutingPolicyProvider _dependentRoutingPolicyProvider;
UNIX_StaticForwardingEntry _dependentStaticForwardingEntry;
UNIX_StaticForwardingEntryProvider _dependentStaticForwardingEntryProvider;
UNIX_File _dependentFile;
UNIX_FileProvider _dependentFileProvider;
UNIX_BGPPathAttributes _dependentBGPPathAttributes;
UNIX_BGPPathAttributesProvider _dependentBGPPathAttributesProvider;

#	include "UNIX_AssociatedCacheMemoryPrivate.h"


};

#endif /* UNIX_ASSOCIATEDCACHEMEMORY */
