#!/bin/sh

#//%LICENSE////////////////////////////////////////////////////////////////
#//
#// Licensed to The Open Group (TOG) under one or more contributor license
#// agreements.  Refer to the OpenPegasusNOTICE.txt file distributed with
#// this work for additional information regarding copyright ownership.
#// Each contributor licenses this file to you under the OpenPegasus Open
#// Source License; you may not use this file except in compliance with the
#// License.
#//
#// Permission is hereby granted, free of charge, to any person obtaining a
#// copy of this software and associated documentation files (the "Software"),
#// to deal in the Software without restriction, including without limitation
#// the rights to use, copy, modify, merge, publish, distribute, sublicense,
#// and/or sell copies of the Software, and to permit persons to whom the
#// Software is furnished to do so, subject to the following conditions:
#//
#// The above copyright notice and this permission notice shall be included
#// in all copies or substantial portions of the Software.
#//
#// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
#// OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
#// MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
#// IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
#// CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
#// TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
#// SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
#//
#//////////////////////////////////////////////////////////////////////////
#//
#//%/////////////////////////////////////////////////////////////////////////

cd bin/Debug && LD_LIBRARY_PATH=../../../../../AllocatedResource/bin/Debug:../../../../../IRQ/bin/Debug:../../../../../PortResource/bin/Debug:../../../../../MemoryResource/bin/Debug:../../../../../DMA/bin/Debug:../../../../../SCSIArbitraryLogicalUnit/bin/Debug:../../../../../Button/bin/Debug:../../../../../PowerSupply/bin/Debug:../../../../../UninterruptiblePowerSupply/bin/Debug:../../../../../Battery/bin/Debug:../../../../../TapeDrive/bin/Debug:../../../../../CDROMDrive/bin/Debug:../../../../../WORMDrive/bin/Debug:../../../../../DiskDrive/bin/Debug:../../../../../DVDDrive/bin/Debug:../../../../../DisketteDrive/bin/Debug:../../../../../MagnetoOpticalDrive/bin/Debug:../../../../../USBDevice/bin/Debug:../../../../../USBHub/bin/Debug:../../../../../PowerConnectionPoint/bin/Debug:../../../../../LabelReader/bin/Debug:../../../../../LogicalDisk/bin/Debug:../../../../../Snapshot/bin/Debug:../../../../../VTOCDiskPartition/bin/Debug:../../../../../GPTDiskPartition/bin/Debug:../../../../../DiskPartition/bin/Debug:../../../../../TapePartition/bin/Debug:../../../../../CompositeExtent/bin/Debug:../../../../../ProtectedSpaceExtent/bin/Debug:../../../../../PhysicalExtent/bin/Debug:../../../../../DatabaseSegment/bin/Debug:../../../../../AggregatePExtent/bin/Debug:../../../../../VolumeSet/bin/Debug:../../../../../OpaqueManagementData/bin/Debug:../../../../../AggregatePSExtent/bin/Debug:../../../../../CacheMemory/bin/Debug:../../../../../VolatileStorage/bin/Debug:../../../../../NonVolatileStorage/bin/Debug:../../../../../Printer/bin/Debug:../../../../../CurrentSensor/bin/Debug:../../../../../TemperatureSensor/bin/Debug:../../../../../VoltageSensor/bin/Debug:../../../../../Tachometer/bin/Debug:../../../../../MultiStateSensor/bin/Debug:../../../../../BinarySensor/bin/Debug:../../../../../DiscreteSensor/bin/Debug:../../../../../CableModem/bin/Debug:../../../../../ADSLModem/bin/Debug:../../../../../VDSLModem/bin/Debug:../../../../../HDSLModem/bin/Debug:../../../../../SDSLModem/bin/Debug:../../../../../Unimodem/bin/Debug:../../../../../ISDNModem/bin/Debug:../../../../../Keyboard/bin/Debug:../../../../../PointingDevice/bin/Debug:../../../../../DesktopMonitor/bin/Debug:../../../../../FlatPanel/bin/Debug:../../../../../Processor/bin/Debug:../../../../../VideoHead/bin/Debug:../../../../../FingerprintReader/bin/Debug:../../../../../Door/bin/Debug:../../../../../SmartCard/bin/Debug:../../../../../NetworkPort/bin/Debug:../../../../../WiFiPort/bin/Debug:../../../../../EthernetPort/bin/Debug:../../../../../LLDPEthernetPort/bin/Debug:../../../../../DataCenterEthernetPort/bin/Debug:../../../../../SASPort/bin/Debug:../../../../../IBPort/bin/Debug:../../../../../FCPort/bin/Debug:../../../../../WirelessPort/bin/Debug:../../../../../TokenRingPort/bin/Debug:../../../../../DAPort/bin/Debug:../../../../../SerialPort/bin/Debug:../../../../../ATAPort/bin/Debug:../../../../../USBPort/bin/Debug:../../../../../PCIPort/bin/Debug:../../../../../SPIPort/bin/Debug:../../../../../ParallelPort/bin/Debug:../../../../../FibrePort/bin/Debug:../../../../../Watchdog/bin/Debug:../../../../../EthernetAdapter/bin/Debug:../../../../../TokenRingAdapter/bin/Debug:../../../../../FibreChannelAdapter/bin/Debug:../../../../../IndicatorLED/bin/Debug:../../../../../ElectricalSwitch/bin/Debug:../../../../../ProtocolController/bin/Debug:../../../../../SCSIProtocolController/bin/Debug:../../../../../WiFiRadio/bin/Debug:../../../../../InterLibraryPort/bin/Debug:../../../../../LimitedAccessPort/bin/Debug:../../../../../SmartCardReader/bin/Debug:../../../../../PCIBridge/bin/Debug:../../../../../PCIeSwitch/bin/Debug:../../../../../PortController/bin/Debug:../../../../../IBPortController/bin/Debug:../../../../../ParallelController/bin/Debug:../../../../../InfraredController/bin/Debug:../../../../../ManagementController/bin/Debug:../../../../../SSAController/bin/Debug:../../../../../AGPVideoController/bin/Debug:../../../../../PCVideoController/bin/Debug:../../../../../SerialController/bin/Debug:../../../../../DisplayController/bin/Debug:../../../../../AGPVideoDisplayController/bin/Debug:../../../../../USBController/bin/Debug:../../../../../IDEController/bin/Debug:../../../../../PCMCIAController/bin/Debug:../../../../../SCSIController/bin/Debug:../../../../../ESCONController/bin/Debug:../../../../../DeviceTray/bin/Debug:../../../../../PassThroughModule/bin/Debug:../../../../../AlarmDevice/bin/Debug:../../../../../Fan/bin/Debug:../../../../../Refrigeration/bin/Debug:../../../../../HeatPipe/bin/Debug:../../../../../TPM/bin/Debug:../../../../../Scanner/bin/Debug:/usr/local/lib/pegasus/lib:/usr/local/lib:/usr/lib:/lib ./TestUNIX_AllocatedResource
