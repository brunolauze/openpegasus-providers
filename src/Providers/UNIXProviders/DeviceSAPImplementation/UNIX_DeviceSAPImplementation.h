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
2.10.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Core::Device
*/


/* **** Description *** */
/*
An association between a ServiceAccessPoint (SAP) and how it is implemented. The cardinality of this association is many-to-many. A SAP can be provided by more than one LogicalDevice, operating in conjunction. And, any Device can provide more than one ServiceAccessPoint. When many LogicalDevices are associated with a single SAP, it is assumed that these elements operate in conjunction to provide the AccessPoint. If different implementations of a SAP exist, each of these implementations would result in individual instantiations of the ServiceAccessPoint object. These individual instantiations would then have associations to the unique implementations.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			UNIX_DeviceSAPImplementation:


*/


/*
			 *** Methods ***

			CIM_Dependency:

			UNIX_DeviceSAPImplementation:


*/

#ifndef __UNIX_DEVICESAPIMPLEMENTATION_H
#define __UNIX_DEVICESAPIMPLEMENTATION_H


#include "CIM_Dependency.h"
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

#include "UNIX_DeviceSAPImplementationDeps.h"




class UNIX_DeviceSAPImplementation :
	public CIM_Dependency
{
public:

	UNIX_DeviceSAPImplementation();
	~UNIX_DeviceSAPImplementation();

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

#	include "UNIX_DeviceSAPImplementationPrivate.h"


};

#endif /* UNIX_DEVICESAPIMPLEMENTATION */
