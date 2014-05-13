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


/* **** Deprecated *** */
/*
CIM_DisplayController, CIM_VideoHead
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
Note: The use of the CIM_VideoController class has been deprecated in lieu of CIM_DisplayController. Deprecated description: Capabilities and management of the VideoController.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_ManagedSystemElement:
				InstallDate DateTime
				Name String
				OperationalStatus UInt16
				StatusDescriptions String
				Status String
				HealthState UInt16
				CommunicationStatus UInt16
				DetailedStatus UInt16
				OperatingStatus UInt16
				PrimaryStatus UInt16

			CIM_LogicalElement:

			CIM_EnabledLogicalElement:
				EnabledState UInt16
				OtherEnabledState String
				RequestedState UInt16
				EnabledDefault UInt16
				TimeOfLastStateChange DateTime
				AvailableRequestedStates UInt16
				TransitioningToState UInt16

			CIM_AllocatedLogicalElement:
				AllocationState String

			CIM_LogicalDevice:
				SystemCreationClassName String
				SystemName String
				CreationClassName String
				DeviceID String
				PowerManagementSupported Boolean
				PowerManagementCapabilities UInt16
				Availability UInt16
				StatusInfo UInt16
				LastErrorCode UInt32
				ErrorDescription String
				ErrorCleared Boolean
				OtherIdentifyingInfo String
				PowerOnHours UInt64
				TotalPowerOnHours UInt64
				IdentifyingDescriptions String
				AdditionalAvailability UInt16
				MaxQuiesceTime UInt64
				LocationIndicator UInt16

			CIM_Controller:
				TimeOfLastReset DateTime
				ProtocolSupported UInt16
				MaxNumberControlled UInt32
				ProtocolDescription String

			CIM_VideoController:
				VideoProcessor String
				VideoMemoryType UInt16
				NumberOfVideoPages UInt32
				MaxMemorySupported UInt32
				AcceleratorCapabilities UInt16
				CapabilityDescriptions String
				CurrentBitsPerPixel UInt32
				CurrentHorizontalResolution UInt32
				CurrentVerticalResolution UInt32
				MaxRefreshRate UInt32
				MinRefreshRate UInt32
				CurrentRefreshRate UInt32
				CurrentScanMode UInt16
				CurrentNumberOfRows UInt32
				CurrentNumberOfColumns UInt32
				CurrentNumberOfColors UInt64


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_ManagedSystemElement:

			CIM_LogicalElement:

			CIM_EnabledLogicalElement:
				RequestStateChange UInt32

			CIM_AllocatedLogicalElement:

			CIM_LogicalDevice:
				SetPowerState UInt32
				Reset UInt32
				EnableDevice UInt32
				OnlineDevice UInt32
				QuiesceDevice UInt32
				SaveProperties UInt32
				RestoreProperties UInt32

			CIM_Controller:

			CIM_VideoController:


*/

#ifndef __CIM_VIDEOCONTROLLER_H
#define __CIM_VIDEOCONTROLLER_H


#include "CIM_Controller.h"
#include <ConcreteJob/UNIX_ConcreteJob.h>


#ifndef PROPERTY_VIDEO_PROCESSOR
#define PROPERTY_VIDEO_PROCESSOR \
					"VideoProcessor"
#endif

#ifndef PROPERTY_VIDEO_MEMORY_TYPE
#define PROPERTY_VIDEO_MEMORY_TYPE \
					"VideoMemoryType"
#endif

#ifndef PROPERTY_NUMBER_OF_VIDEO_PAGES
#define PROPERTY_NUMBER_OF_VIDEO_PAGES \
					"NumberOfVideoPages"
#endif

#ifndef PROPERTY_MAX_MEMORY_SUPPORTED
#define PROPERTY_MAX_MEMORY_SUPPORTED \
					"MaxMemorySupported"
#endif

#ifndef PROPERTY_ACCELERATOR_CAPABILITIES
#define PROPERTY_ACCELERATOR_CAPABILITIES \
					"AcceleratorCapabilities"
#endif

#ifndef PROPERTY_CAPABILITY_DESCRIPTIONS
#define PROPERTY_CAPABILITY_DESCRIPTIONS \
					"CapabilityDescriptions"
#endif

#ifndef PROPERTY_CURRENT_BITS_PER_PIXEL
#define PROPERTY_CURRENT_BITS_PER_PIXEL \
					"CurrentBitsPerPixel"
#endif

#ifndef PROPERTY_CURRENT_HORIZONTAL_RESOLUTION
#define PROPERTY_CURRENT_HORIZONTAL_RESOLUTION \
					"CurrentHorizontalResolution"
#endif

#ifndef PROPERTY_CURRENT_VERTICAL_RESOLUTION
#define PROPERTY_CURRENT_VERTICAL_RESOLUTION \
					"CurrentVerticalResolution"
#endif

#ifndef PROPERTY_MAX_REFRESH_RATE
#define PROPERTY_MAX_REFRESH_RATE \
					"MaxRefreshRate"
#endif

#ifndef PROPERTY_MIN_REFRESH_RATE
#define PROPERTY_MIN_REFRESH_RATE \
					"MinRefreshRate"
#endif

#ifndef PROPERTY_CURRENT_REFRESH_RATE
#define PROPERTY_CURRENT_REFRESH_RATE \
					"CurrentRefreshRate"
#endif

#ifndef PROPERTY_CURRENT_SCAN_MODE
#define PROPERTY_CURRENT_SCAN_MODE \
					"CurrentScanMode"
#endif

#ifndef PROPERTY_CURRENT_NUMBER_OF_ROWS
#define PROPERTY_CURRENT_NUMBER_OF_ROWS \
					"CurrentNumberOfRows"
#endif

#ifndef PROPERTY_CURRENT_NUMBER_OF_COLUMNS
#define PROPERTY_CURRENT_NUMBER_OF_COLUMNS \
					"CurrentNumberOfColumns"
#endif

#ifndef PROPERTY_CURRENT_NUMBER_OF_COLORS
#define PROPERTY_CURRENT_NUMBER_OF_COLORS \
					"CurrentNumberOfColors"
#endif



class CIM_VideoController :
	public CIM_Controller
{
public:

	virtual Boolean initialize()=0;
	virtual Boolean load(int&)=0;
	virtual Boolean loadByName(const String)=0;
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

	virtual Boolean getDescription(CIMProperty&) const=0;
	virtual String getDescription() const=0;
	virtual void setDescription(String&)=0;
	virtual Boolean getVideoProcessor(CIMProperty&) const=0;
	virtual String getVideoProcessor() const=0;
	virtual void setVideoProcessor(String&)=0;
	virtual Boolean getVideoMemoryType(CIMProperty&) const=0;
	virtual Uint16 getVideoMemoryType() const=0;
	virtual void setVideoMemoryType(Uint16&)=0;
	virtual Boolean getNumberOfVideoPages(CIMProperty&) const=0;
	virtual Uint32 getNumberOfVideoPages() const=0;
	virtual void setNumberOfVideoPages(Uint32&)=0;
	virtual Boolean getMaxMemorySupported(CIMProperty&) const=0;
	virtual Uint32 getMaxMemorySupported() const=0;
	virtual void setMaxMemorySupported(Uint32&)=0;
	virtual Boolean getAcceleratorCapabilities(CIMProperty&) const=0;
	virtual Array<Uint16> getAcceleratorCapabilities() const=0;
	virtual void setAcceleratorCapabilities(Array<Uint16>&)=0;
	virtual Boolean getCapabilityDescriptions(CIMProperty&) const=0;
	virtual Array<String> getCapabilityDescriptions() const=0;
	virtual void setCapabilityDescriptions(Array<String>&)=0;
	virtual Boolean getCurrentBitsPerPixel(CIMProperty&) const=0;
	virtual Uint32 getCurrentBitsPerPixel() const=0;
	virtual void setCurrentBitsPerPixel(Uint32&)=0;
	virtual Boolean getCurrentHorizontalResolution(CIMProperty&) const=0;
	virtual Uint32 getCurrentHorizontalResolution() const=0;
	virtual void setCurrentHorizontalResolution(Uint32&)=0;
	virtual Boolean getCurrentVerticalResolution(CIMProperty&) const=0;
	virtual Uint32 getCurrentVerticalResolution() const=0;
	virtual void setCurrentVerticalResolution(Uint32&)=0;
	virtual Boolean getMaxRefreshRate(CIMProperty&) const=0;
	virtual Uint32 getMaxRefreshRate() const=0;
	virtual void setMaxRefreshRate(Uint32&)=0;
	virtual Boolean getMinRefreshRate(CIMProperty&) const=0;
	virtual Uint32 getMinRefreshRate() const=0;
	virtual void setMinRefreshRate(Uint32&)=0;
	virtual Boolean getCurrentRefreshRate(CIMProperty&) const=0;
	virtual Uint32 getCurrentRefreshRate() const=0;
	virtual void setCurrentRefreshRate(Uint32&)=0;
	virtual Boolean getCurrentScanMode(CIMProperty&) const=0;
	virtual Uint16 getCurrentScanMode() const=0;
	virtual void setCurrentScanMode(Uint16&)=0;
	virtual Boolean getCurrentNumberOfRows(CIMProperty&) const=0;
	virtual Uint32 getCurrentNumberOfRows() const=0;
	virtual void setCurrentNumberOfRows(Uint32&)=0;
	virtual Boolean getCurrentNumberOfColumns(CIMProperty&) const=0;
	virtual Uint32 getCurrentNumberOfColumns() const=0;
	virtual void setCurrentNumberOfColumns(Uint32&)=0;
	virtual Boolean getCurrentNumberOfColors(CIMProperty&) const=0;
	virtual Uint64 getCurrentNumberOfColors() const=0;
	virtual void setCurrentNumberOfColors(Uint64&)=0;

	virtual Uint32 invokeRequestStateChange(
		Uint16 &inRequestedState,
		CIMInstance &inJob,
		CIMDateTime &inTimeoutPeriod
	)=0;

	virtual Uint32 invokeSetPowerState(
		Uint16 &inPowerState,
		CIMDateTime &inTime
	)=0;

	virtual Uint32 invokeReset()=0;

	virtual Uint32 invokeEnableDevice(
		Boolean &inEnabled
	)=0;

	virtual Uint32 invokeOnlineDevice(
		Boolean &inOnline
	)=0;

	virtual Uint32 invokeQuiesceDevice(
		Boolean &inQuiesce
	)=0;

	virtual Uint32 invokeSaveProperties()=0;

	virtual Uint32 invokeRestoreProperties()=0;



private:

};

#endif /* CIM_VIDEOCONTROLLER */
