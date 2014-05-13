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


/* **** Abstract *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.10.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::Modems
*/


/* **** Description *** */
/*
CIM_CallBasedModem is the superclass for grouping the numerous types of call-based modems. The POTSModem is a type of call- based Modem.
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

			CIM_Modem:

			CIM_CallBasedModem:
				FallbackEnabled Boolean
				CompressionSupported UInt16
				OtherCompressionDescription String
				CompressionInfo UInt16
				OtherCompressionInfoDescription String
				ModulationSupported UInt16
				OtherModulationDescription String
				ModulationScheme UInt16
				OtherSchemeDescription String
				ErrorControlSupported UInt16
				OtherErrorControlDescription String
				ErrorControlInfo UInt16
				OtherErrorControlInfoDescription String
				TimeOfLastReset DateTime
				CallSpeed UInt32
				CallStatus UInt16
				CharsSent UInt32
				CharsReceived UInt32
				CharsLost UInt32
				BlocksSent UInt32
				BlocksResent UInt32
				BlocksReceived UInt32
				BlockErrors UInt32
				CallLength DateTime
				NumberDialed String


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

			CIM_Modem:

			CIM_CallBasedModem:


*/

#ifndef __CIM_CALLBASEDMODEM_H
#define __CIM_CALLBASEDMODEM_H


#include "CIM_Modem.h"
#include <ConcreteJob/UNIX_ConcreteJob.h>


#ifndef PROPERTY_FALLBACK_ENABLED
#define PROPERTY_FALLBACK_ENABLED \
					"FallbackEnabled"
#endif

#ifndef PROPERTY_COMPRESSION_SUPPORTED
#define PROPERTY_COMPRESSION_SUPPORTED \
					"CompressionSupported"
#endif

#ifndef PROPERTY_OTHER_COMPRESSION_DESCRIPTION
#define PROPERTY_OTHER_COMPRESSION_DESCRIPTION \
					"OtherCompressionDescription"
#endif

#ifndef PROPERTY_COMPRESSION_INFO
#define PROPERTY_COMPRESSION_INFO \
					"CompressionInfo"
#endif

#ifndef PROPERTY_OTHER_COMPRESSION_INFO_DESCRIPTION
#define PROPERTY_OTHER_COMPRESSION_INFO_DESCRIPTION \
					"OtherCompressionInfoDescription"
#endif

#ifndef PROPERTY_MODULATION_SUPPORTED
#define PROPERTY_MODULATION_SUPPORTED \
					"ModulationSupported"
#endif

#ifndef PROPERTY_OTHER_MODULATION_DESCRIPTION
#define PROPERTY_OTHER_MODULATION_DESCRIPTION \
					"OtherModulationDescription"
#endif

#ifndef PROPERTY_MODULATION_SCHEME
#define PROPERTY_MODULATION_SCHEME \
					"ModulationScheme"
#endif

#ifndef PROPERTY_OTHER_SCHEME_DESCRIPTION
#define PROPERTY_OTHER_SCHEME_DESCRIPTION \
					"OtherSchemeDescription"
#endif

#ifndef PROPERTY_ERROR_CONTROL_SUPPORTED
#define PROPERTY_ERROR_CONTROL_SUPPORTED \
					"ErrorControlSupported"
#endif

#ifndef PROPERTY_OTHER_ERROR_CONTROL_DESCRIPTION
#define PROPERTY_OTHER_ERROR_CONTROL_DESCRIPTION \
					"OtherErrorControlDescription"
#endif

#ifndef PROPERTY_ERROR_CONTROL_INFO
#define PROPERTY_ERROR_CONTROL_INFO \
					"ErrorControlInfo"
#endif

#ifndef PROPERTY_OTHER_ERROR_CONTROL_INFO_DESCRIPTION
#define PROPERTY_OTHER_ERROR_CONTROL_INFO_DESCRIPTION \
					"OtherErrorControlInfoDescription"
#endif

#ifndef PROPERTY_TIME_OF_LAST_RESET
#define PROPERTY_TIME_OF_LAST_RESET \
					"TimeOfLastReset"
#endif

#ifndef PROPERTY_CALL_SPEED
#define PROPERTY_CALL_SPEED \
					"CallSpeed"
#endif

#ifndef PROPERTY_CALL_STATUS
#define PROPERTY_CALL_STATUS \
					"CallStatus"
#endif

#ifndef PROPERTY_CHARS_SENT
#define PROPERTY_CHARS_SENT \
					"CharsSent"
#endif

#ifndef PROPERTY_CHARS_RECEIVED
#define PROPERTY_CHARS_RECEIVED \
					"CharsReceived"
#endif

#ifndef PROPERTY_CHARS_LOST
#define PROPERTY_CHARS_LOST \
					"CharsLost"
#endif

#ifndef PROPERTY_BLOCKS_SENT
#define PROPERTY_BLOCKS_SENT \
					"BlocksSent"
#endif

#ifndef PROPERTY_BLOCKS_RESENT
#define PROPERTY_BLOCKS_RESENT \
					"BlocksResent"
#endif

#ifndef PROPERTY_BLOCKS_RECEIVED
#define PROPERTY_BLOCKS_RECEIVED \
					"BlocksReceived"
#endif

#ifndef PROPERTY_BLOCK_ERRORS
#define PROPERTY_BLOCK_ERRORS \
					"BlockErrors"
#endif

#ifndef PROPERTY_CALL_LENGTH
#define PROPERTY_CALL_LENGTH \
					"CallLength"
#endif

#ifndef PROPERTY_NUMBER_DIALED
#define PROPERTY_NUMBER_DIALED \
					"NumberDialed"
#endif



class CIM_CallBasedModem :
	public CIM_Modem
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

	virtual Boolean getFallbackEnabled(CIMProperty&) const=0;
	virtual Boolean getFallbackEnabled() const=0;
	virtual void setFallbackEnabled(Boolean&)=0;
	virtual Boolean getCompressionSupported(CIMProperty&) const=0;
	virtual Array<Uint16> getCompressionSupported() const=0;
	virtual void setCompressionSupported(Array<Uint16>&)=0;
	virtual Boolean getOtherCompressionDescription(CIMProperty&) const=0;
	virtual String getOtherCompressionDescription() const=0;
	virtual void setOtherCompressionDescription(String&)=0;
	virtual Boolean getCompressionInfo(CIMProperty&) const=0;
	virtual Uint16 getCompressionInfo() const=0;
	virtual void setCompressionInfo(Uint16&)=0;
	virtual Boolean getOtherCompressionInfoDescription(CIMProperty&) const=0;
	virtual String getOtherCompressionInfoDescription() const=0;
	virtual void setOtherCompressionInfoDescription(String&)=0;
	virtual Boolean getModulationSupported(CIMProperty&) const=0;
	virtual Array<Uint16> getModulationSupported() const=0;
	virtual void setModulationSupported(Array<Uint16>&)=0;
	virtual Boolean getOtherModulationDescription(CIMProperty&) const=0;
	virtual String getOtherModulationDescription() const=0;
	virtual void setOtherModulationDescription(String&)=0;
	virtual Boolean getModulationScheme(CIMProperty&) const=0;
	virtual Uint16 getModulationScheme() const=0;
	virtual void setModulationScheme(Uint16&)=0;
	virtual Boolean getOtherSchemeDescription(CIMProperty&) const=0;
	virtual String getOtherSchemeDescription() const=0;
	virtual void setOtherSchemeDescription(String&)=0;
	virtual Boolean getErrorControlSupported(CIMProperty&) const=0;
	virtual Array<Uint16> getErrorControlSupported() const=0;
	virtual void setErrorControlSupported(Array<Uint16>&)=0;
	virtual Boolean getOtherErrorControlDescription(CIMProperty&) const=0;
	virtual String getOtherErrorControlDescription() const=0;
	virtual void setOtherErrorControlDescription(String&)=0;
	virtual Boolean getErrorControlInfo(CIMProperty&) const=0;
	virtual Uint16 getErrorControlInfo() const=0;
	virtual void setErrorControlInfo(Uint16&)=0;
	virtual Boolean getOtherErrorControlInfoDescription(CIMProperty&) const=0;
	virtual String getOtherErrorControlInfoDescription() const=0;
	virtual void setOtherErrorControlInfoDescription(String&)=0;
	virtual Boolean getTimeOfLastReset(CIMProperty&) const=0;
	virtual CIMDateTime getTimeOfLastReset() const=0;
	virtual void setTimeOfLastReset(CIMDateTime&)=0;
	virtual Boolean getCallSpeed(CIMProperty&) const=0;
	virtual Uint32 getCallSpeed() const=0;
	virtual void setCallSpeed(Uint32&)=0;
	virtual Boolean getCallStatus(CIMProperty&) const=0;
	virtual Uint16 getCallStatus() const=0;
	virtual void setCallStatus(Uint16&)=0;
	virtual Boolean getCharsSent(CIMProperty&) const=0;
	virtual Uint32 getCharsSent() const=0;
	virtual void setCharsSent(Uint32&)=0;
	virtual Boolean getCharsReceived(CIMProperty&) const=0;
	virtual Uint32 getCharsReceived() const=0;
	virtual void setCharsReceived(Uint32&)=0;
	virtual Boolean getCharsLost(CIMProperty&) const=0;
	virtual Uint32 getCharsLost() const=0;
	virtual void setCharsLost(Uint32&)=0;
	virtual Boolean getBlocksSent(CIMProperty&) const=0;
	virtual Uint32 getBlocksSent() const=0;
	virtual void setBlocksSent(Uint32&)=0;
	virtual Boolean getBlocksResent(CIMProperty&) const=0;
	virtual Uint32 getBlocksResent() const=0;
	virtual void setBlocksResent(Uint32&)=0;
	virtual Boolean getBlocksReceived(CIMProperty&) const=0;
	virtual Uint32 getBlocksReceived() const=0;
	virtual void setBlocksReceived(Uint32&)=0;
	virtual Boolean getBlockErrors(CIMProperty&) const=0;
	virtual Uint32 getBlockErrors() const=0;
	virtual void setBlockErrors(Uint32&)=0;
	virtual Boolean getCallLength(CIMProperty&) const=0;
	virtual CIMDateTime getCallLength() const=0;
	virtual void setCallLength(CIMDateTime&)=0;
	virtual Boolean getNumberDialed(CIMProperty&) const=0;
	virtual String getNumberDialed() const=0;
	virtual void setNumberDialed(String&)=0;

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

#endif /* CIM_CALLBASEDMODEM */
