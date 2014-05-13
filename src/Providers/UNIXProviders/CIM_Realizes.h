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
2.6.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Core::Device
*/


/* **** Description *** */
/*
CIM_Realizes is the association that defines the mapping between LogicalDevices and the PhysicalElements that implement them.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			CIM_Realizes:


*/


/*
			 *** Methods ***

			CIM_Dependency:

			CIM_Realizes:


*/

#ifndef __CIM_REALIZES_H
#define __CIM_REALIZES_H


#include "CIM_Dependency.h"
#include <PhysicalMedia/UNIX_PhysicalMediaProvider.h>
#include <PhysicalTape/UNIX_PhysicalTapeProvider.h>
#include <Chip/UNIX_ChipProvider.h>
#include <PhysicalMemory/UNIX_PhysicalMemoryProvider.h>
#include <PhysicalConnector/UNIX_PhysicalConnectorProvider.h>
#include <Slot/UNIX_SlotProvider.h>
#include <PhysicalLink/UNIX_PhysicalLinkProvider.h>
#include <Card/UNIX_CardProvider.h>
#include <SystemBusCard/UNIX_SystemBusCardProvider.h>
#include <Chassis/UNIX_ChassisProvider.h>
#include <Rack/UNIX_RackProvider.h>
#include <PackageLocation/UNIX_PackageLocationProvider.h>
#include <StorageMediaLocation/UNIX_StorageMediaLocationProvider.h>
#include <Magazine/UNIX_MagazineProvider.h>
#include <ComponentBay/UNIX_ComponentBayProvider.h>
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




class CIM_Realizes :
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

#endif /* CIM_REALIZES */
