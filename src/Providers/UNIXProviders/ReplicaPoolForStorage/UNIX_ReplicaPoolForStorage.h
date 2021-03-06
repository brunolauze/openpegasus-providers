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
2.9.1000
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::StorageServices
*/


/* **** Description *** */
/*
A specialized pool for replicas is associated exclusively to one source storage element or globally to the StorageConfigurationService. Such a pool is typically used to provide storage for delta replica space consumed in small chunks by replica elements. Elements representing the storage are not required to be made explicit.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			UNIX_ReplicaPoolForStorage:


*/


/*
			 *** Methods ***

			CIM_Dependency:

			UNIX_ReplicaPoolForStorage:


*/

#ifndef __UNIX_REPLICAPOOLFORSTORAGE_H
#define __UNIX_REPLICAPOOLFORSTORAGE_H


#include "CIM_Dependency.h"
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
#include <CacheMemory/UNIX_CacheMemoryProvider.h>
#include <VolatileStorage/UNIX_VolatileStorageProvider.h>
#include <NonVolatileStorage/UNIX_NonVolatileStorageProvider.h>
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
#include <StoragePool/UNIX_StoragePoolProvider.h>

#include "UNIX_ReplicaPoolForStorageDeps.h"




class UNIX_ReplicaPoolForStorage :
	public CIM_Dependency
{
public:

	UNIX_ReplicaPoolForStorage();
	~UNIX_ReplicaPoolForStorage();

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


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _antecedent;
	CIMInstance _dependent;

UNIX_MPLSLSP _antecedentMPLSLSP;
UNIX_MPLSLSPProvider _antecedentMPLSLSPProvider;
UNIX_CommonDatabase _antecedentCommonDatabase;
UNIX_CommonDatabaseProvider _antecedentCommonDatabaseProvider;
UNIX_MPLSTunnel _antecedentMPLSTunnel;
UNIX_MPLSTunnelProvider _antecedentMPLSTunnelProvider;
UNIX_ReplicationEntity _antecedentReplicationEntity;
UNIX_ReplicationEntityProvider _antecedentReplicationEntityProvider;
UNIX_PrintQueue _antecedentPrintQueue;
UNIX_PrintQueueProvider _antecedentPrintQueueProvider;
UNIX_JobQueue _antecedentJobQueue;
UNIX_JobQueueProvider _antecedentJobQueueProvider;
UNIX_ReusablePolicyContainer _antecedentReusablePolicyContainer;
UNIX_ReusablePolicyContainerProvider _antecedentReusablePolicyContainerProvider;
UNIX_PolicyRepository _antecedentPolicyRepository;
UNIX_PolicyRepositoryProvider _antecedentPolicyRepositoryProvider;
UNIX_AutonomousSystem _antecedentAutonomousSystem;
UNIX_AutonomousSystemProvider _antecedentAutonomousSystemProvider;
UNIX_RoutingProtocolDomain _antecedentRoutingProtocolDomain;
UNIX_RoutingProtocolDomainProvider _antecedentRoutingProtocolDomainProvider;
UNIX_OSPFArea _antecedentOSPFArea;
UNIX_OSPFAreaProvider _antecedentOSPFAreaProvider;
UNIX_Network _antecedentNetwork;
UNIX_NetworkProvider _antecedentNetworkProvider;
UNIX_VLANNetwork _antecedentVLANNetwork;
UNIX_VLANNetworkProvider _antecedentVLANNetworkProvider;
UNIX_TierDomain _antecedentTierDomain;
UNIX_TierDomainProvider _antecedentTierDomainProvider;
UNIX_ApplicationSystem _antecedentApplicationSystem;
UNIX_ApplicationSystemProvider _antecedentApplicationSystemProvider;
UNIX_DatabaseSystem _antecedentDatabaseSystem;
UNIX_DatabaseSystemProvider _antecedentDatabaseSystemProvider;
UNIX_StorageLibrary _antecedentStorageLibrary;
UNIX_StorageLibraryProvider _antecedentStorageLibraryProvider;
UNIX_VirtualComputerSystem _antecedentVirtualComputerSystem;
UNIX_VirtualComputerSystemProvider _antecedentVirtualComputerSystemProvider;
UNIX_Cluster _antecedentCluster;
UNIX_ClusterProvider _antecedentClusterProvider;
UNIX_ComputerSystem _antecedentComputerSystem;
UNIX_ComputerSystemProvider _antecedentComputerSystemProvider;
UNIX_SCSIArbitraryLogicalUnit _antecedentSCSIArbitraryLogicalUnit;
UNIX_SCSIArbitraryLogicalUnitProvider _antecedentSCSIArbitraryLogicalUnitProvider;
UNIX_Button _antecedentButton;
UNIX_ButtonProvider _antecedentButtonProvider;
UNIX_PowerSupply _antecedentPowerSupply;
UNIX_PowerSupplyProvider _antecedentPowerSupplyProvider;
UNIX_UninterruptiblePowerSupply _antecedentUninterruptiblePowerSupply;
UNIX_UninterruptiblePowerSupplyProvider _antecedentUninterruptiblePowerSupplyProvider;
UNIX_Battery _antecedentBattery;
UNIX_BatteryProvider _antecedentBatteryProvider;
UNIX_TapeDrive _antecedentTapeDrive;
UNIX_TapeDriveProvider _antecedentTapeDriveProvider;
UNIX_CDROMDrive _antecedentCDROMDrive;
UNIX_CDROMDriveProvider _antecedentCDROMDriveProvider;
UNIX_WORMDrive _antecedentWORMDrive;
UNIX_WORMDriveProvider _antecedentWORMDriveProvider;
UNIX_DiskDrive _antecedentDiskDrive;
UNIX_DiskDriveProvider _antecedentDiskDriveProvider;
UNIX_DVDDrive _antecedentDVDDrive;
UNIX_DVDDriveProvider _antecedentDVDDriveProvider;
UNIX_DisketteDrive _antecedentDisketteDrive;
UNIX_DisketteDriveProvider _antecedentDisketteDriveProvider;
UNIX_MagnetoOpticalDrive _antecedentMagnetoOpticalDrive;
UNIX_MagnetoOpticalDriveProvider _antecedentMagnetoOpticalDriveProvider;
UNIX_USBDevice _antecedentUSBDevice;
UNIX_USBDeviceProvider _antecedentUSBDeviceProvider;
UNIX_USBHub _antecedentUSBHub;
UNIX_USBHubProvider _antecedentUSBHubProvider;
UNIX_PowerConnectionPoint _antecedentPowerConnectionPoint;
UNIX_PowerConnectionPointProvider _antecedentPowerConnectionPointProvider;
UNIX_LabelReader _antecedentLabelReader;
UNIX_LabelReaderProvider _antecedentLabelReaderProvider;
UNIX_LogicalDisk _antecedentLogicalDisk;
UNIX_LogicalDiskProvider _antecedentLogicalDiskProvider;
UNIX_Snapshot _antecedentSnapshot;
UNIX_SnapshotProvider _antecedentSnapshotProvider;
UNIX_VTOCDiskPartition _antecedentVTOCDiskPartition;
UNIX_VTOCDiskPartitionProvider _antecedentVTOCDiskPartitionProvider;
UNIX_GPTDiskPartition _antecedentGPTDiskPartition;
UNIX_GPTDiskPartitionProvider _antecedentGPTDiskPartitionProvider;
UNIX_DiskPartition _antecedentDiskPartition;
UNIX_DiskPartitionProvider _antecedentDiskPartitionProvider;
UNIX_TapePartition _antecedentTapePartition;
UNIX_TapePartitionProvider _antecedentTapePartitionProvider;
UNIX_CompositeExtent _antecedentCompositeExtent;
UNIX_CompositeExtentProvider _antecedentCompositeExtentProvider;
UNIX_ProtectedSpaceExtent _antecedentProtectedSpaceExtent;
UNIX_ProtectedSpaceExtentProvider _antecedentProtectedSpaceExtentProvider;
UNIX_PhysicalExtent _antecedentPhysicalExtent;
UNIX_PhysicalExtentProvider _antecedentPhysicalExtentProvider;
UNIX_DatabaseSegment _antecedentDatabaseSegment;
UNIX_DatabaseSegmentProvider _antecedentDatabaseSegmentProvider;
UNIX_AggregatePExtent _antecedentAggregatePExtent;
UNIX_AggregatePExtentProvider _antecedentAggregatePExtentProvider;
UNIX_VolumeSet _antecedentVolumeSet;
UNIX_VolumeSetProvider _antecedentVolumeSetProvider;
UNIX_OpaqueManagementData _antecedentOpaqueManagementData;
UNIX_OpaqueManagementDataProvider _antecedentOpaqueManagementDataProvider;
UNIX_AggregatePSExtent _antecedentAggregatePSExtent;
UNIX_AggregatePSExtentProvider _antecedentAggregatePSExtentProvider;
UNIX_CacheMemory _antecedentCacheMemory;
UNIX_CacheMemoryProvider _antecedentCacheMemoryProvider;
UNIX_VolatileStorage _antecedentVolatileStorage;
UNIX_VolatileStorageProvider _antecedentVolatileStorageProvider;
UNIX_NonVolatileStorage _antecedentNonVolatileStorage;
UNIX_NonVolatileStorageProvider _antecedentNonVolatileStorageProvider;
UNIX_Printer _antecedentPrinter;
UNIX_PrinterProvider _antecedentPrinterProvider;
UNIX_CurrentSensor _antecedentCurrentSensor;
UNIX_CurrentSensorProvider _antecedentCurrentSensorProvider;
UNIX_TemperatureSensor _antecedentTemperatureSensor;
UNIX_TemperatureSensorProvider _antecedentTemperatureSensorProvider;
UNIX_VoltageSensor _antecedentVoltageSensor;
UNIX_VoltageSensorProvider _antecedentVoltageSensorProvider;
UNIX_Tachometer _antecedentTachometer;
UNIX_TachometerProvider _antecedentTachometerProvider;
UNIX_MultiStateSensor _antecedentMultiStateSensor;
UNIX_MultiStateSensorProvider _antecedentMultiStateSensorProvider;
UNIX_BinarySensor _antecedentBinarySensor;
UNIX_BinarySensorProvider _antecedentBinarySensorProvider;
UNIX_DiscreteSensor _antecedentDiscreteSensor;
UNIX_DiscreteSensorProvider _antecedentDiscreteSensorProvider;
UNIX_CableModem _antecedentCableModem;
UNIX_CableModemProvider _antecedentCableModemProvider;
UNIX_ADSLModem _antecedentADSLModem;
UNIX_ADSLModemProvider _antecedentADSLModemProvider;
UNIX_VDSLModem _antecedentVDSLModem;
UNIX_VDSLModemProvider _antecedentVDSLModemProvider;
UNIX_HDSLModem _antecedentHDSLModem;
UNIX_HDSLModemProvider _antecedentHDSLModemProvider;
UNIX_SDSLModem _antecedentSDSLModem;
UNIX_SDSLModemProvider _antecedentSDSLModemProvider;
UNIX_Unimodem _antecedentUnimodem;
UNIX_UnimodemProvider _antecedentUnimodemProvider;
UNIX_ISDNModem _antecedentISDNModem;
UNIX_ISDNModemProvider _antecedentISDNModemProvider;
UNIX_Keyboard _antecedentKeyboard;
UNIX_KeyboardProvider _antecedentKeyboardProvider;
UNIX_PointingDevice _antecedentPointingDevice;
UNIX_PointingDeviceProvider _antecedentPointingDeviceProvider;
UNIX_DesktopMonitor _antecedentDesktopMonitor;
UNIX_DesktopMonitorProvider _antecedentDesktopMonitorProvider;
UNIX_FlatPanel _antecedentFlatPanel;
UNIX_FlatPanelProvider _antecedentFlatPanelProvider;
UNIX_Processor _antecedentProcessor;
UNIX_ProcessorProvider _antecedentProcessorProvider;
UNIX_VideoHead _antecedentVideoHead;
UNIX_VideoHeadProvider _antecedentVideoHeadProvider;
UNIX_FingerprintReader _antecedentFingerprintReader;
UNIX_FingerprintReaderProvider _antecedentFingerprintReaderProvider;
UNIX_Door _antecedentDoor;
UNIX_DoorProvider _antecedentDoorProvider;
UNIX_SmartCard _antecedentSmartCard;
UNIX_SmartCardProvider _antecedentSmartCardProvider;
UNIX_NetworkPort _antecedentNetworkPort;
UNIX_NetworkPortProvider _antecedentNetworkPortProvider;
UNIX_WiFiPort _antecedentWiFiPort;
UNIX_WiFiPortProvider _antecedentWiFiPortProvider;
UNIX_EthernetPort _antecedentEthernetPort;
UNIX_EthernetPortProvider _antecedentEthernetPortProvider;
UNIX_LLDPEthernetPort _antecedentLLDPEthernetPort;
UNIX_LLDPEthernetPortProvider _antecedentLLDPEthernetPortProvider;
UNIX_DataCenterEthernetPort _antecedentDataCenterEthernetPort;
UNIX_DataCenterEthernetPortProvider _antecedentDataCenterEthernetPortProvider;
UNIX_SASPort _antecedentSASPort;
UNIX_SASPortProvider _antecedentSASPortProvider;
UNIX_IBPort _antecedentIBPort;
UNIX_IBPortProvider _antecedentIBPortProvider;
UNIX_FCPort _antecedentFCPort;
UNIX_FCPortProvider _antecedentFCPortProvider;
UNIX_WirelessPort _antecedentWirelessPort;
UNIX_WirelessPortProvider _antecedentWirelessPortProvider;
UNIX_TokenRingPort _antecedentTokenRingPort;
UNIX_TokenRingPortProvider _antecedentTokenRingPortProvider;
UNIX_DAPort _antecedentDAPort;
UNIX_DAPortProvider _antecedentDAPortProvider;
UNIX_SerialPort _antecedentSerialPort;
UNIX_SerialPortProvider _antecedentSerialPortProvider;
UNIX_ATAPort _antecedentATAPort;
UNIX_ATAPortProvider _antecedentATAPortProvider;
UNIX_USBPort _antecedentUSBPort;
UNIX_USBPortProvider _antecedentUSBPortProvider;
UNIX_PCIPort _antecedentPCIPort;
UNIX_PCIPortProvider _antecedentPCIPortProvider;
UNIX_SPIPort _antecedentSPIPort;
UNIX_SPIPortProvider _antecedentSPIPortProvider;
UNIX_ParallelPort _antecedentParallelPort;
UNIX_ParallelPortProvider _antecedentParallelPortProvider;
UNIX_FibrePort _antecedentFibrePort;
UNIX_FibrePortProvider _antecedentFibrePortProvider;
UNIX_Watchdog _antecedentWatchdog;
UNIX_WatchdogProvider _antecedentWatchdogProvider;
UNIX_EthernetAdapter _antecedentEthernetAdapter;
UNIX_EthernetAdapterProvider _antecedentEthernetAdapterProvider;
UNIX_TokenRingAdapter _antecedentTokenRingAdapter;
UNIX_TokenRingAdapterProvider _antecedentTokenRingAdapterProvider;
UNIX_FibreChannelAdapter _antecedentFibreChannelAdapter;
UNIX_FibreChannelAdapterProvider _antecedentFibreChannelAdapterProvider;
UNIX_IndicatorLED _antecedentIndicatorLED;
UNIX_IndicatorLEDProvider _antecedentIndicatorLEDProvider;
UNIX_ElectricalSwitch _antecedentElectricalSwitch;
UNIX_ElectricalSwitchProvider _antecedentElectricalSwitchProvider;
UNIX_ProtocolController _antecedentProtocolController;
UNIX_ProtocolControllerProvider _antecedentProtocolControllerProvider;
UNIX_SCSIProtocolController _antecedentSCSIProtocolController;
UNIX_SCSIProtocolControllerProvider _antecedentSCSIProtocolControllerProvider;
UNIX_WiFiRadio _antecedentWiFiRadio;
UNIX_WiFiRadioProvider _antecedentWiFiRadioProvider;
UNIX_InterLibraryPort _antecedentInterLibraryPort;
UNIX_InterLibraryPortProvider _antecedentInterLibraryPortProvider;
UNIX_LimitedAccessPort _antecedentLimitedAccessPort;
UNIX_LimitedAccessPortProvider _antecedentLimitedAccessPortProvider;
UNIX_SmartCardReader _antecedentSmartCardReader;
UNIX_SmartCardReaderProvider _antecedentSmartCardReaderProvider;
UNIX_PCIBridge _antecedentPCIBridge;
UNIX_PCIBridgeProvider _antecedentPCIBridgeProvider;
UNIX_PCIeSwitch _antecedentPCIeSwitch;
UNIX_PCIeSwitchProvider _antecedentPCIeSwitchProvider;
UNIX_PortController _antecedentPortController;
UNIX_PortControllerProvider _antecedentPortControllerProvider;
UNIX_IBPortController _antecedentIBPortController;
UNIX_IBPortControllerProvider _antecedentIBPortControllerProvider;
UNIX_ParallelController _antecedentParallelController;
UNIX_ParallelControllerProvider _antecedentParallelControllerProvider;
UNIX_InfraredController _antecedentInfraredController;
UNIX_InfraredControllerProvider _antecedentInfraredControllerProvider;
UNIX_ManagementController _antecedentManagementController;
UNIX_ManagementControllerProvider _antecedentManagementControllerProvider;
UNIX_SSAController _antecedentSSAController;
UNIX_SSAControllerProvider _antecedentSSAControllerProvider;
UNIX_AGPVideoController _antecedentAGPVideoController;
UNIX_AGPVideoControllerProvider _antecedentAGPVideoControllerProvider;
UNIX_PCVideoController _antecedentPCVideoController;
UNIX_PCVideoControllerProvider _antecedentPCVideoControllerProvider;
UNIX_SerialController _antecedentSerialController;
UNIX_SerialControllerProvider _antecedentSerialControllerProvider;
UNIX_DisplayController _antecedentDisplayController;
UNIX_DisplayControllerProvider _antecedentDisplayControllerProvider;
UNIX_AGPVideoDisplayController _antecedentAGPVideoDisplayController;
UNIX_AGPVideoDisplayControllerProvider _antecedentAGPVideoDisplayControllerProvider;
UNIX_USBController _antecedentUSBController;
UNIX_USBControllerProvider _antecedentUSBControllerProvider;
UNIX_IDEController _antecedentIDEController;
UNIX_IDEControllerProvider _antecedentIDEControllerProvider;
UNIX_PCMCIAController _antecedentPCMCIAController;
UNIX_PCMCIAControllerProvider _antecedentPCMCIAControllerProvider;
UNIX_SCSIController _antecedentSCSIController;
UNIX_SCSIControllerProvider _antecedentSCSIControllerProvider;
UNIX_ESCONController _antecedentESCONController;
UNIX_ESCONControllerProvider _antecedentESCONControllerProvider;
UNIX_DeviceTray _antecedentDeviceTray;
UNIX_DeviceTrayProvider _antecedentDeviceTrayProvider;
UNIX_PassThroughModule _antecedentPassThroughModule;
UNIX_PassThroughModuleProvider _antecedentPassThroughModuleProvider;
UNIX_AlarmDevice _antecedentAlarmDevice;
UNIX_AlarmDeviceProvider _antecedentAlarmDeviceProvider;
UNIX_Fan _antecedentFan;
UNIX_FanProvider _antecedentFanProvider;
UNIX_Refrigeration _antecedentRefrigeration;
UNIX_RefrigerationProvider _antecedentRefrigerationProvider;
UNIX_HeatPipe _antecedentHeatPipe;
UNIX_HeatPipeProvider _antecedentHeatPipeProvider;
UNIX_TPM _antecedentTPM;
UNIX_TPMProvider _antecedentTPMProvider;
UNIX_Scanner _antecedentScanner;
UNIX_ScannerProvider _antecedentScannerProvider;
UNIX_Provider _antecedentProvider;
UNIX_ProviderProvider _antecedentProviderProvider;
UNIX_IRQ _antecedentIRQ;
UNIX_IRQProvider _antecedentIRQProvider;
UNIX_PortResource _antecedentPortResource;
UNIX_PortResourceProvider _antecedentPortResourceProvider;
UNIX_MemoryResource _antecedentMemoryResource;
UNIX_MemoryResourceProvider _antecedentMemoryResourceProvider;
UNIX_DMA _antecedentDMA;
UNIX_DMAProvider _antecedentDMAProvider;
UNIX_NFSShare _antecedentNFSShare;
UNIX_NFSShareProvider _antecedentNFSShareProvider;
UNIX_CIFSShare _antecedentCIFSShare;
UNIX_CIFSShareProvider _antecedentCIFSShareProvider;
UNIX_MessageLog _antecedentMessageLog;
UNIX_MessageLogProvider _antecedentMessageLogProvider;
UNIX_DiagnosticLog _antecedentDiagnosticLog;
UNIX_DiagnosticLogProvider _antecedentDiagnosticLogProvider;
UNIX_DiagnosticsLog _antecedentDiagnosticsLog;
UNIX_DiagnosticsLogProvider _antecedentDiagnosticsLogProvider;
UNIX_FibreProtocolService _antecedentFibreProtocolService;
UNIX_FibreProtocolServiceProvider _antecedentFibreProtocolServiceProvider;
UNIX_WakeUpService _antecedentWakeUpService;
UNIX_WakeUpServiceProvider _antecedentWakeUpServiceProvider;
UNIX_VirtualSystemSnapshotService _antecedentVirtualSystemSnapshotService;
UNIX_VirtualSystemSnapshotServiceProvider _antecedentVirtualSystemSnapshotServiceProvider;
UNIX_ResourcePoolConfigurationService _antecedentResourcePoolConfigurationService;
UNIX_ResourcePoolConfigurationServiceProvider _antecedentResourcePoolConfigurationServiceProvider;
UNIX_FileSystemConfigurationService _antecedentFileSystemConfigurationService;
UNIX_FileSystemConfigurationServiceProvider _antecedentFileSystemConfigurationServiceProvider;
UNIX_HelpService _antecedentHelpService;
UNIX_HelpServiceProvider _antecedentHelpServiceProvider;
UNIX_StorageRelocationService _antecedentStorageRelocationService;
UNIX_StorageRelocationServiceProvider _antecedentStorageRelocationServiceProvider;
UNIX_MPLSService _antecedentMPLSService;
UNIX_MPLSServiceProvider _antecedentMPLSServiceProvider;
UNIX_PolicyActivationService _antecedentPolicyActivationService;
UNIX_PolicyActivationServiceProvider _antecedentPolicyActivationServiceProvider;
UNIX_SCSIPathConfigurationService _antecedentSCSIPathConfigurationService;
UNIX_SCSIPathConfigurationServiceProvider _antecedentSCSIPathConfigurationServiceProvider;
UNIX_BIOSService _antecedentBIOSService;
UNIX_BIOSServiceProvider _antecedentBIOSServiceProvider;
UNIX_PowerManagementService _antecedentPowerManagementService;
UNIX_PowerManagementServiceProvider _antecedentPowerManagementServiceProvider;
UNIX_NetworkPortConfigurationService _antecedentNetworkPortConfigurationService;
UNIX_NetworkPortConfigurationServiceProvider _antecedentNetworkPortConfigurationServiceProvider;
UNIX_WiFiPortConfigurationService _antecedentWiFiPortConfigurationService;
UNIX_WiFiPortConfigurationServiceProvider _antecedentWiFiPortConfigurationServiceProvider;
UNIX_VRFConfigurationService _antecedentVRFConfigurationService;
UNIX_VRFConfigurationServiceProvider _antecedentVRFConfigurationServiceProvider;
UNIX_ReplicationService _antecedentReplicationService;
UNIX_ReplicationServiceProvider _antecedentReplicationServiceProvider;
UNIX_AccountManagementService _antecedentAccountManagementService;
UNIX_AccountManagementServiceProvider _antecedentAccountManagementServiceProvider;
UNIX_VerificationService _antecedentVerificationService;
UNIX_VerificationServiceProvider _antecedentVerificationServiceProvider;
UNIX_CertificateAuthority _antecedentCertificateAuthority;
UNIX_CertificateAuthorityProvider _antecedentCertificateAuthorityProvider;
UNIX_Notary _antecedentNotary;
UNIX_NotaryProvider _antecedentNotaryProvider;
UNIX_KeyBasedCredentialManagementService _antecedentKeyBasedCredentialManagementService;
UNIX_KeyBasedCredentialManagementServiceProvider _antecedentKeyBasedCredentialManagementServiceProvider;
UNIX_CertificateManagementService _antecedentCertificateManagementService;
UNIX_CertificateManagementServiceProvider _antecedentCertificateManagementServiceProvider;
UNIX_KerberosKeyDistributionCenter _antecedentKerberosKeyDistributionCenter;
UNIX_KerberosKeyDistributionCenterProvider _antecedentKerberosKeyDistributionCenterProvider;
UNIX_PublicKeyManagementService _antecedentPublicKeyManagementService;
UNIX_PublicKeyManagementServiceProvider _antecedentPublicKeyManagementServiceProvider;
UNIX_SharedSecretService _antecedentSharedSecretService;
UNIX_SharedSecretServiceProvider _antecedentSharedSecretServiceProvider;
UNIX_IdentityManagementService _antecedentIdentityManagementService;
UNIX_IdentityManagementServiceProvider _antecedentIdentityManagementServiceProvider;
UNIX_StorageHardwareIDManagementService _antecedentStorageHardwareIDManagementService;
UNIX_StorageHardwareIDManagementServiceProvider _antecedentStorageHardwareIDManagementServiceProvider;
UNIX_AuthorizationService _antecedentAuthorizationService;
UNIX_AuthorizationServiceProvider _antecedentAuthorizationServiceProvider;
UNIX_PrivilegeManagementService _antecedentPrivilegeManagementService;
UNIX_PrivilegeManagementServiceProvider _antecedentPrivilegeManagementServiceProvider;
UNIX_RoleBasedAuthorizationService _antecedentRoleBasedAuthorizationService;
UNIX_RoleBasedAuthorizationServiceProvider _antecedentRoleBasedAuthorizationServiceProvider;
UNIX_AccessControlService _antecedentAccessControlService;
UNIX_AccessControlServiceProvider _antecedentAccessControlServiceProvider;
UNIX_WBEMServer _antecedentWBEMServer;
UNIX_WBEMServerProvider _antecedentWBEMServerProvider;
UNIX_LaunchInContextService _antecedentLaunchInContextService;
UNIX_LaunchInContextServiceProvider _antecedentLaunchInContextServiceProvider;
UNIX_VirtualSystemManagementService _antecedentVirtualSystemManagementService;
UNIX_VirtualSystemManagementServiceProvider _antecedentVirtualSystemManagementServiceProvider;
UNIX_MetricService _antecedentMetricService;
UNIX_MetricServiceProvider _antecedentMetricServiceProvider;
UNIX_StorageNameBindingService _antecedentStorageNameBindingService;
UNIX_StorageNameBindingServiceProvider _antecedentStorageNameBindingServiceProvider;
UNIX_ZoneService _antecedentZoneService;
UNIX_ZoneServiceProvider _antecedentZoneServiceProvider;
UNIX_ControllerConfigurationService _antecedentControllerConfigurationService;
UNIX_ControllerConfigurationServiceProvider _antecedentControllerConfigurationServiceProvider;
UNIX_GroupMaskingMappingService _antecedentGroupMaskingMappingService;
UNIX_GroupMaskingMappingServiceProvider _antecedentGroupMaskingMappingServiceProvider;
UNIX_DatabaseService _antecedentDatabaseService;
UNIX_DatabaseServiceProvider _antecedentDatabaseServiceProvider;
UNIX_DiskPartitionConfigurationService _antecedentDiskPartitionConfigurationService;
UNIX_DiskPartitionConfigurationServiceProvider _antecedentDiskPartitionConfigurationServiceProvider;
UNIX_ConfigurationReportingService _antecedentConfigurationReportingService;
UNIX_ConfigurationReportingServiceProvider _antecedentConfigurationReportingServiceProvider;
UNIX_PowerTopologyService _antecedentPowerTopologyService;
UNIX_PowerTopologyServiceProvider _antecedentPowerTopologyServiceProvider;
UNIX_NetworkPolicyService _antecedentNetworkPolicyService;
UNIX_NetworkPolicyServiceProvider _antecedentNetworkPolicyServiceProvider;
UNIX_BasicExecutionService _antecedentBasicExecutionService;
UNIX_BasicExecutionServiceProvider _antecedentBasicExecutionServiceProvider;
UNIX_SpareConfigurationService _antecedentSpareConfigurationService;
UNIX_SpareConfigurationServiceProvider _antecedentSpareConfigurationServiceProvider;
UNIX_StorageElementCompositionService _antecedentStorageElementCompositionService;
UNIX_StorageElementCompositionServiceProvider _antecedentStorageElementCompositionServiceProvider;
UNIX_OpaqueManagementDataService _antecedentOpaqueManagementDataService;
UNIX_OpaqueManagementDataServiceProvider _antecedentOpaqueManagementDataServiceProvider;
UNIX_FingerprintMatchingService _antecedentFingerprintMatchingService;
UNIX_FingerprintMatchingServiceProvider _antecedentFingerprintMatchingServiceProvider;
UNIX_ProtocolService _antecedentProtocolService;
UNIX_ProtocolServiceProvider _antecedentProtocolServiceProvider;
UNIX_WBEMProtocolService _antecedentWBEMProtocolService;
UNIX_WBEMProtocolServiceProvider _antecedentWBEMProtocolServiceProvider;
UNIX_TierService _antecedentTierService;
UNIX_TierServiceProvider _antecedentTierServiceProvider;
UNIX_TierPolicyService _antecedentTierPolicyService;
UNIX_TierPolicyServiceProvider _antecedentTierPolicyServiceProvider;
UNIX_IndicationService _antecedentIndicationService;
UNIX_IndicationServiceProvider _antecedentIndicationServiceProvider;
UNIX_FileImportService _antecedentFileImportService;
UNIX_FileImportServiceProvider _antecedentFileImportServiceProvider;
UNIX_VTLStatisticalDataService _antecedentVTLStatisticalDataService;
UNIX_VTLStatisticalDataServiceProvider _antecedentVTLStatisticalDataServiceProvider;
UNIX_DropThresholdCalculationService _antecedentDropThresholdCalculationService;
UNIX_DropThresholdCalculationServiceProvider _antecedentDropThresholdCalculationServiceProvider;
UNIX_TokenBucketMeterService _antecedentTokenBucketMeterService;
UNIX_TokenBucketMeterServiceProvider _antecedentTokenBucketMeterServiceProvider;
UNIX_EWMAMeterService _antecedentEWMAMeterService;
UNIX_EWMAMeterServiceProvider _antecedentEWMAMeterServiceProvider;
UNIX_AverageRateMeterService _antecedentAverageRateMeterService;
UNIX_AverageRateMeterServiceProvider _antecedentAverageRateMeterServiceProvider;
UNIX_ToSMarkerService _antecedentToSMarkerService;
UNIX_ToSMarkerServiceProvider _antecedentToSMarkerServiceProvider;
UNIX_Priority8021QMarkerService _antecedentPriority8021QMarkerService;
UNIX_Priority8021QMarkerServiceProvider _antecedentPriority8021QMarkerServiceProvider;
UNIX_DSCPMarkerService _antecedentDSCPMarkerService;
UNIX_DSCPMarkerServiceProvider _antecedentDSCPMarkerServiceProvider;
UNIX_PreambleMarkerService _antecedentPreambleMarkerService;
UNIX_PreambleMarkerServiceProvider _antecedentPreambleMarkerServiceProvider;
UNIX_ClassifierService _antecedentClassifierService;
UNIX_ClassifierServiceProvider _antecedentClassifierServiceProvider;
UNIX_ClassifierElement _antecedentClassifierElement;
UNIX_ClassifierElementProvider _antecedentClassifierElementProvider;
UNIX_PacketSchedulingService _antecedentPacketSchedulingService;
UNIX_PacketSchedulingServiceProvider _antecedentPacketSchedulingServiceProvider;
UNIX_NonWorkConservingSchedulingService _antecedentNonWorkConservingSchedulingService;
UNIX_NonWorkConservingSchedulingServiceProvider _antecedentNonWorkConservingSchedulingServiceProvider;
UNIX_REDDropperService _antecedentREDDropperService;
UNIX_REDDropperServiceProvider _antecedentREDDropperServiceProvider;
UNIX_HeadTailDropper _antecedentHeadTailDropper;
UNIX_HeadTailDropperProvider _antecedentHeadTailDropperProvider;
UNIX_WeightedREDDropperService _antecedentWeightedREDDropperService;
UNIX_WeightedREDDropperServiceProvider _antecedentWeightedREDDropperServiceProvider;
UNIX_QueuingService _antecedentQueuingService;
UNIX_QueuingServiceProvider _antecedentQueuingServiceProvider;
UNIX_BootService _antecedentBootService;
UNIX_BootServiceProvider _antecedentBootServiceProvider;
UNIX_AFService _antecedentAFService;
UNIX_AFServiceProvider _antecedentAFServiceProvider;
UNIX_EFService _antecedentEFService;
UNIX_EFServiceProvider _antecedentEFServiceProvider;
UNIX_FlowService _antecedentFlowService;
UNIX_FlowServiceProvider _antecedentFlowServiceProvider;
UNIX_Hdr8021PService _antecedentHdr8021PService;
UNIX_Hdr8021PServiceProvider _antecedentHdr8021PServiceProvider;
UNIX_PrecedenceService _antecedentPrecedenceService;
UNIX_PrecedenceServiceProvider _antecedentPrecedenceServiceProvider;
UNIX_PrintService _antecedentPrintService;
UNIX_PrintServiceProvider _antecedentPrintServiceProvider;
UNIX_TimeService _antecedentTimeService;
UNIX_TimeServiceProvider _antecedentTimeServiceProvider;
UNIX_SoftwareInstallationService _antecedentSoftwareInstallationService;
UNIX_SoftwareInstallationServiceProvider _antecedentSoftwareInstallationServiceProvider;
UNIX_VLANService _antecedentVLANService;
UNIX_VLANServiceProvider _antecedentVLANServiceProvider;
UNIX_Specific802dot1QVLANService _antecedentSpecific802dot1QVLANService;
UNIX_Specific802dot1QVLANServiceProvider _antecedentSpecific802dot1QVLANServiceProvider;
UNIX_PowerUtilizationManagementService _antecedentPowerUtilizationManagementService;
UNIX_PowerUtilizationManagementServiceProvider _antecedentPowerUtilizationManagementServiceProvider;
UNIX_ClusteringService _antecedentClusteringService;
UNIX_ClusteringServiceProvider _antecedentClusteringServiceProvider;
UNIX_SharedDeviceManagementService _antecedentSharedDeviceManagementService;
UNIX_SharedDeviceManagementServiceProvider _antecedentSharedDeviceManagementServiceProvider;
UNIX_BatchService _antecedentBatchService;
UNIX_BatchServiceProvider _antecedentBatchServiceProvider;
UNIX_iSCSIConfigurationService _antecedentiSCSIConfigurationService;
UNIX_iSCSIConfigurationServiceProvider _antecedentiSCSIConfigurationServiceProvider;
UNIX_OOBAlertService _antecedentOOBAlertService;
UNIX_OOBAlertServiceProvider _antecedentOOBAlertServiceProvider;
UNIX_StorageConfigurationService _antecedentStorageConfigurationService;
UNIX_StorageConfigurationServiceProvider _antecedentStorageConfigurationServiceProvider;
UNIX_IPConfigurationService _antecedentIPConfigurationService;
UNIX_IPConfigurationServiceProvider _antecedentIPConfigurationServiceProvider;
UNIX_VirtualSystemMigrationService _antecedentVirtualSystemMigrationService;
UNIX_VirtualSystemMigrationServiceProvider _antecedentVirtualSystemMigrationServiceProvider;
UNIX_MPLSCrossConnect _antecedentMPLSCrossConnect;
UNIX_MPLSCrossConnectProvider _antecedentMPLSCrossConnectProvider;
UNIX_PlatformWatchdogService _antecedentPlatformWatchdogService;
UNIX_PlatformWatchdogServiceProvider _antecedentPlatformWatchdogServiceProvider;
UNIX_FCHBADiagnosticTest _antecedentFCHBADiagnosticTest;
UNIX_FCHBADiagnosticTestProvider _antecedentFCHBADiagnosticTestProvider;
UNIX_RAIDDiagnosticTest _antecedentRAIDDiagnosticTest;
UNIX_RAIDDiagnosticTestProvider _antecedentRAIDDiagnosticTestProvider;
UNIX_CPUDiagnosticTest _antecedentCPUDiagnosticTest;
UNIX_CPUDiagnosticTestProvider _antecedentCPUDiagnosticTestProvider;
UNIX_EthernetNICDiagnosticTest _antecedentEthernetNICDiagnosticTest;
UNIX_EthernetNICDiagnosticTestProvider _antecedentEthernetNICDiagnosticTestProvider;
UNIX_OpticalDriveDiagnosticTest _antecedentOpticalDriveDiagnosticTest;
UNIX_OpticalDriveDiagnosticTestProvider _antecedentOpticalDriveDiagnosticTestProvider;
UNIX_OpticalDriveDiagnosticSettingData _antecedentOpticalDriveDiagnosticSettingData;
UNIX_OpticalDriveDiagnosticSettingDataProvider _antecedentOpticalDriveDiagnosticSettingDataProvider;
UNIX_DiskDriveDiagnosticTest _antecedentDiskDriveDiagnosticTest;
UNIX_DiskDriveDiagnosticTestProvider _antecedentDiskDriveDiagnosticTestProvider;
UNIX_IBSubnetManager _antecedentIBSubnetManager;
UNIX_IBSubnetManagerProvider _antecedentIBSubnetManagerProvider;
UNIX_ObjectManager _antecedentObjectManager;
UNIX_ObjectManagerProvider _antecedentObjectManagerProvider;
UNIX_ObjectManagerAdapter _antecedentObjectManagerAdapter;
UNIX_ObjectManagerAdapterProvider _antecedentObjectManagerAdapterProvider;
UNIX_ProviderObjectManagerAdapter _antecedentProviderObjectManagerAdapter;
UNIX_ProviderObjectManagerAdapterProvider _antecedentProviderObjectManagerAdapterProvider;
UNIX_ProtocolAdapter _antecedentProtocolAdapter;
UNIX_ProtocolAdapterProvider _antecedentProtocolAdapterProvider;
UNIX_FileSystemStatisticsService _antecedentFileSystemStatisticsService;
UNIX_FileSystemStatisticsServiceProvider _antecedentFileSystemStatisticsServiceProvider;
UNIX_BlockStatisticsService _antecedentBlockStatisticsService;
UNIX_BlockStatisticsServiceProvider _antecedentBlockStatisticsServiceProvider;
UNIX_USBRedirectionService _antecedentUSBRedirectionService;
UNIX_USBRedirectionServiceProvider _antecedentUSBRedirectionServiceProvider;
UNIX_TextRedirectionService _antecedentTextRedirectionService;
UNIX_TextRedirectionServiceProvider _antecedentTextRedirectionServiceProvider;
UNIX_BGPService _antecedentBGPService;
UNIX_BGPServiceProvider _antecedentBGPServiceProvider;
UNIX_OSPFService _antecedentOSPFService;
UNIX_OSPFServiceProvider _antecedentOSPFServiceProvider;
UNIX_NATService _antecedentNATService;
UNIX_NATServiceProvider _antecedentNATServiceProvider;
UNIX_TransparentBridgingService _antecedentTransparentBridgingService;
UNIX_TransparentBridgingServiceProvider _antecedentTransparentBridgingServiceProvider;
UNIX_SourceRoutingService _antecedentSourceRoutingService;
UNIX_SourceRoutingServiceProvider _antecedentSourceRoutingServiceProvider;
UNIX_SpanningTreeService _antecedentSpanningTreeService;
UNIX_SpanningTreeServiceProvider _antecedentSpanningTreeServiceProvider;
UNIX_SwitchService _antecedentSwitchService;
UNIX_SwitchServiceProvider _antecedentSwitchServiceProvider;
UNIX_FileExportService _antecedentFileExportService;
UNIX_FileExportServiceProvider _antecedentFileExportServiceProvider;
UNIX_OperatingSystem _antecedentOperatingSystem;
UNIX_OperatingSystemProvider _antecedentOperatingSystemProvider;
UNIX_SWRFile _antecedentSWRFile;
UNIX_SWRFileProvider _antecedentSWRFileProvider;
UNIX_SWRPEP _antecedentSWRPEP;
UNIX_SWRPEPProvider _antecedentSWRPEPProvider;
UNIX_SWRDatabase _antecedentSWRDatabase;
UNIX_SWRDatabaseProvider _antecedentSWRDatabaseProvider;
UNIX_ProviderLibrary _antecedentProviderLibrary;
UNIX_ProviderLibraryProvider _antecedentProviderLibraryProvider;
UNIX_ClusteringSAP _antecedentClusteringSAP;
UNIX_ClusteringSAPProvider _antecedentClusteringSAPProvider;
UNIX_CredentialManagementSAP _antecedentCredentialManagementSAP;
UNIX_CredentialManagementSAPProvider _antecedentCredentialManagementSAPProvider;
UNIX_USBRedirectionSAP _antecedentUSBRedirectionSAP;
UNIX_USBRedirectionSAPProvider _antecedentUSBRedirectionSAPProvider;
UNIX_IPNetworkConnection _antecedentIPNetworkConnection;
UNIX_IPNetworkConnectionProvider _antecedentIPNetworkConnectionProvider;
UNIX_PolicyTransferServiceAccessPoint _antecedentPolicyTransferServiceAccessPoint;
UNIX_PolicyTransferServiceAccessPointProvider _antecedentPolicyTransferServiceAccessPointProvider;
UNIX_LaunchInContextSAP _antecedentLaunchInContextSAP;
UNIX_LaunchInContextSAPProvider _antecedentLaunchInContextSAPProvider;
UNIX_RemotePort _antecedentRemotePort;
UNIX_RemotePortProvider _antecedentRemotePortProvider;
UNIX_MPLSTunnelHop _antecedentMPLSTunnelHop;
UNIX_MPLSTunnelHopProvider _antecedentMPLSTunnelHopProvider;
UNIX_SoftwareIdentityResource _antecedentSoftwareIdentityResource;
UNIX_SoftwareIdentityResourceProvider _antecedentSoftwareIdentityResourceProvider;
UNIX_KVMRedirectionSAP _antecedentKVMRedirectionSAP;
UNIX_KVMRedirectionSAPProvider _antecedentKVMRedirectionSAPProvider;
UNIX_DHCPProtocolEndpoint _antecedentDHCPProtocolEndpoint;
UNIX_DHCPProtocolEndpointProvider _antecedentDHCPProtocolEndpointProvider;
UNIX_SSHProtocolEndpoint _antecedentSSHProtocolEndpoint;
UNIX_SSHProtocolEndpointProvider _antecedentSSHProtocolEndpointProvider;
UNIX_SCSIProtocolEndpoint _antecedentSCSIProtocolEndpoint;
UNIX_SCSIProtocolEndpointProvider _antecedentSCSIProtocolEndpointProvider;
UNIX_iSCSIProtocolEndpoint _antecedentiSCSIProtocolEndpoint;
UNIX_iSCSIProtocolEndpointProvider _antecedentiSCSIProtocolEndpointProvider;
UNIX_CLPProtocolEndpoint _antecedentCLPProtocolEndpoint;
UNIX_CLPProtocolEndpointProvider _antecedentCLPProtocolEndpointProvider;
UNIX_IPXProtocolEndpoint _antecedentIPXProtocolEndpoint;
UNIX_IPXProtocolEndpointProvider _antecedentIPXProtocolEndpointProvider;
UNIX_IPsecSAEndpoint _antecedentIPsecSAEndpoint;
UNIX_IPsecSAEndpointProvider _antecedentIPsecSAEndpointProvider;
UNIX_IKESAEndpoint _antecedentIKESAEndpoint;
UNIX_IKESAEndpointProvider _antecedentIKESAEndpointProvider;
UNIX_LANEndpoint _antecedentLANEndpoint;
UNIX_LANEndpointProvider _antecedentLANEndpointProvider;
UNIX_WiFiEndpoint _antecedentWiFiEndpoint;
UNIX_WiFiEndpointProvider _antecedentWiFiEndpointProvider;
UNIX_MPLSProtocolEndpoint _antecedentMPLSProtocolEndpoint;
UNIX_MPLSProtocolEndpointProvider _antecedentMPLSProtocolEndpointProvider;
UNIX_WirelessLANEndpoint _antecedentWirelessLANEndpoint;
UNIX_WirelessLANEndpointProvider _antecedentWirelessLANEndpointProvider;
UNIX_UDPProtocolEndpoint _antecedentUDPProtocolEndpoint;
UNIX_UDPProtocolEndpointProvider _antecedentUDPProtocolEndpointProvider;
UNIX_TCPProtocolEndpoint _antecedentTCPProtocolEndpoint;
UNIX_TCPProtocolEndpointProvider _antecedentTCPProtocolEndpointProvider;
UNIX_OSPFVirtualInterface _antecedentOSPFVirtualInterface;
UNIX_OSPFVirtualInterfaceProvider _antecedentOSPFVirtualInterfaceProvider;
UNIX_OSPFProtocolEndpoint _antecedentOSPFProtocolEndpoint;
UNIX_OSPFProtocolEndpointProvider _antecedentOSPFProtocolEndpointProvider;
UNIX_VLANEndpoint _antecedentVLANEndpoint;
UNIX_VLANEndpointProvider _antecedentVLANEndpointProvider;
UNIX_LinkAggregator8023ad _antecedentLinkAggregator8023ad;
UNIX_LinkAggregator8023adProvider _antecedentLinkAggregator8023adProvider;
UNIX_ATAProtocolEndpoint _antecedentATAProtocolEndpoint;
UNIX_ATAProtocolEndpointProvider _antecedentATAProtocolEndpointProvider;
UNIX_IPEncapsulationInterface _antecedentIPEncapsulationInterface;
UNIX_IPEncapsulationInterfaceProvider _antecedentIPEncapsulationInterfaceProvider;
UNIX_IPSubinterface _antecedentIPSubinterface;
UNIX_IPSubinterfaceProvider _antecedentIPSubinterfaceProvider;
UNIX_SwitchVirtualInterface _antecedentSwitchVirtualInterface;
UNIX_SwitchVirtualInterfaceProvider _antecedentSwitchVirtualInterfaceProvider;
UNIX_IPLoopback _antecedentIPLoopback;
UNIX_IPLoopbackProvider _antecedentIPLoopbackProvider;
UNIX_BGPProtocolEndpoint _antecedentBGPProtocolEndpoint;
UNIX_BGPProtocolEndpointProvider _antecedentBGPProtocolEndpointProvider;
UNIX_SwitchPort _antecedentSwitchPort;
UNIX_SwitchPortProvider _antecedentSwitchPortProvider;
UNIX_DNSProtocolEndpoint _antecedentDNSProtocolEndpoint;
UNIX_DNSProtocolEndpointProvider _antecedentDNSProtocolEndpointProvider;
UNIX_LAGPort8023ad _antecedentLAGPort8023ad;
UNIX_LAGPort8023adProvider _antecedentLAGPort8023adProvider;
UNIX_BatchSAP _antecedentBatchSAP;
UNIX_BatchSAPProvider _antecedentBatchSAPProvider;
UNIX_TextRedirectionSAP _antecedentTextRedirectionSAP;
UNIX_TextRedirectionSAPProvider _antecedentTextRedirectionSAPProvider;
UNIX_MediaRedirectionSAP _antecedentMediaRedirectionSAP;
UNIX_MediaRedirectionSAPProvider _antecedentMediaRedirectionSAPProvider;
UNIX_PrintSAP _antecedentPrintSAP;
UNIX_PrintSAPProvider _antecedentPrintSAPProvider;
UNIX_ServiceAccessURI _antecedentServiceAccessURI;
UNIX_ServiceAccessURIProvider _antecedentServiceAccessURIProvider;
UNIX_ObjectManagerCommunicationMechanism _antecedentObjectManagerCommunicationMechanism;
UNIX_ObjectManagerCommunicationMechanismProvider _antecedentObjectManagerCommunicationMechanismProvider;
UNIX_CIMXMLCommunicationMechanism _antecedentCIMXMLCommunicationMechanism;
UNIX_CIMXMLCommunicationMechanismProvider _antecedentCIMXMLCommunicationMechanismProvider;
UNIX_VLAN _antecedentVLAN;
UNIX_VLANProvider _antecedentVLANProvider;
UNIX_BootSAP _antecedentBootSAP;
UNIX_BootSAPProvider _antecedentBootSAPProvider;
UNIX_Process _antecedentProcess;
UNIX_ProcessProvider _antecedentProcessProvider;
UNIX_ProcessorCore _antecedentProcessorCore;
UNIX_ProcessorCoreProvider _antecedentProcessorCoreProvider;
UNIX_iSCSISession _antecedentiSCSISession;
UNIX_iSCSISessionProvider _antecedentiSCSISessionProvider;
UNIX_iSCSIConnection _antecedentiSCSIConnection;
UNIX_iSCSIConnectionProvider _antecedentiSCSIConnectionProvider;
UNIX_HardwareThread _antecedentHardwareThread;
UNIX_HardwareThreadProvider _antecedentHardwareThreadProvider;
UNIX_FileSystem _antecedentFileSystem;
UNIX_FileSystemProvider _antecedentFileSystemProvider;
UNIX_DatabaseStorageArea _antecedentDatabaseStorageArea;
UNIX_DatabaseStorageAreaProvider _antecedentDatabaseStorageAreaProvider;
UNIX_LocalFileSystem _antecedentLocalFileSystem;
UNIX_LocalFileSystemProvider _antecedentLocalFileSystemProvider;
UNIX_RemoteFileSystem _antecedentRemoteFileSystem;
UNIX_RemoteFileSystemProvider _antecedentRemoteFileSystemProvider;
UNIX_NFS _antecedentNFS;
UNIX_NFSProvider _antecedentNFSProvider;
UNIX_Thread _antecedentThread;
UNIX_ThreadProvider _antecedentThreadProvider;
UNIX_Account _antecedentAccount;
UNIX_AccountProvider _antecedentAccountProvider;

UNIX_StoragePool _dependentStoragePool;
UNIX_StoragePoolProvider _dependentStoragePoolProvider;

#	include "UNIX_ReplicaPoolForStoragePrivate.h"


};

#endif /* UNIX_REPLICAPOOLFORSTORAGE */
