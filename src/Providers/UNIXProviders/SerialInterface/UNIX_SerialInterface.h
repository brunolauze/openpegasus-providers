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
CIM::Device::Controller
*/


/* **** Description *** */
/*
SerialInterface is a ControlledBy relationship that indicates which Devices are accessed through the SerialController and describes the characteristics of this access.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			CIM_DeviceConnection:
				NegotiatedSpeed UInt64
				NegotiatedDataWidth UInt32

			CIM_ControlledBy:
				AccessState UInt16
				TimeOfDeviceReset DateTime
				NumberOfHardResets UInt32
				NumberOfSoftResets UInt32
				DeviceNumber String
				AccessMode UInt16
				AccessPriority UInt16

			UNIX_SerialInterface:
				NumberOfStopBits UInt16
				ParityInfo UInt16
				FlowControlInfo UInt16


*/


/*
			 *** Methods ***

			CIM_Dependency:

			CIM_DeviceConnection:

			CIM_ControlledBy:

			UNIX_SerialInterface:


*/

#ifndef __UNIX_SERIALINTERFACE_H
#define __UNIX_SERIALINTERFACE_H


#include "CIM_ControlledBy.h"
#include <SerialController/UNIX_SerialControllerProvider.h>
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

#include "UNIX_SerialInterfaceDeps.h"


#ifndef PROPERTY_NUMBER_OF_STOP_BITS
#define PROPERTY_NUMBER_OF_STOP_BITS \
					"NumberOfStopBits"
#endif

#ifndef PROPERTY_PARITY_INFO
#define PROPERTY_PARITY_INFO \
					"ParityInfo"
#endif

#ifndef PROPERTY_FLOW_CONTROL_INFO
#define PROPERTY_FLOW_CONTROL_INFO \
					"FlowControlInfo"
#endif



class UNIX_SerialInterface :
	public CIM_ControlledBy
{
public:

	UNIX_SerialInterface();
	~UNIX_SerialInterface();

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
	virtual Boolean getNegotiatedSpeed(CIMProperty&) const;
	virtual Uint64 getNegotiatedSpeed() const;
	virtual void setNegotiatedSpeed(Uint64&);
	virtual Boolean getNegotiatedDataWidth(CIMProperty&) const;
	virtual Uint32 getNegotiatedDataWidth() const;
	virtual void setNegotiatedDataWidth(Uint32&);
	virtual Boolean getAccessState(CIMProperty&) const;
	virtual Uint16 getAccessState() const;
	virtual void setAccessState(Uint16&);
	virtual Boolean getTimeOfDeviceReset(CIMProperty&) const;
	virtual CIMDateTime getTimeOfDeviceReset() const;
	virtual void setTimeOfDeviceReset(CIMDateTime&);
	virtual Boolean getNumberOfHardResets(CIMProperty&) const;
	virtual Uint32 getNumberOfHardResets() const;
	virtual void setNumberOfHardResets(Uint32&);
	virtual Boolean getNumberOfSoftResets(CIMProperty&) const;
	virtual Uint32 getNumberOfSoftResets() const;
	virtual void setNumberOfSoftResets(Uint32&);
	virtual Boolean getDeviceNumber(CIMProperty&) const;
	virtual String getDeviceNumber() const;
	virtual void setDeviceNumber(String&);
	virtual Boolean getAccessMode(CIMProperty&) const;
	virtual Uint16 getAccessMode() const;
	virtual void setAccessMode(Uint16&);
	virtual Boolean getAccessPriority(CIMProperty&) const;
	virtual Uint16 getAccessPriority() const;
	virtual void setAccessPriority(Uint16&);
	virtual Boolean getNumberOfStopBits(CIMProperty&) const;
	virtual Uint16 getNumberOfStopBits() const;
	virtual void setNumberOfStopBits(Uint16&);
	virtual Boolean getParityInfo(CIMProperty&) const;
	virtual Uint16 getParityInfo() const;
	virtual void setParityInfo(Uint16&);
	virtual Boolean getFlowControlInfo(CIMProperty&) const;
	virtual Uint16 getFlowControlInfo() const;
	virtual void setFlowControlInfo(Uint16&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _antecedent;
	CIMInstance _dependent;
	Uint64 _negotiatedSpeed;
	Uint32 _negotiatedDataWidth;
	Uint16 _accessState;
	CIMDateTime _timeOfDeviceReset;
	Uint32 _numberOfHardResets;
	Uint32 _numberOfSoftResets;
	String _deviceNumber;
	Uint16 _accessMode;
	Uint16 _accessPriority;
	Uint16 _numberOfStopBits;
	Uint16 _parityInfo;
	Uint16 _flowControlInfo;

UNIX_SerialController _antecedentSerialController;
UNIX_SerialControllerProvider _antecedentSerialControllerProvider;

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

#	include "UNIX_SerialInterfacePrivate.h"


};

#endif /* UNIX_SERIALINTERFACE */
