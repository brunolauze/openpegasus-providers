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
The POTSModem class represents a Device that translates binary data into wave modulations for sound-based transmission. It connects to the POTS (Plain Old Telephone System) network.
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

			CIM_POTSModem:
				Capabilities UInt16
				CapabilityDescriptions String
				EnabledCapabilities UInt16
				MaxBaudRateToSerialPort UInt32
				MaxBaudRateToPhone UInt32
				SupportsSynchronousConnect Boolean
				DialType UInt16
				InactivityTimeout UInt32
				SpeakerVolumeInfo UInt16
				CountriesSupported String
				CountrySelected String
				RingsBeforeAnswer UInt8
				MaxNumberOfPasswords UInt16
				CurrentPasswords String
				SupportsCallback Boolean
				AnswerMode UInt16
				Equalization UInt16
				BlackListedNumbers String


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

			CIM_POTSModem:


*/

#ifndef __CIM_POTSMODEM_H
#define __CIM_POTSMODEM_H


#include "CIM_CallBasedModem.h"
#include <ConcreteJob/UNIX_ConcreteJob.h>


#ifndef PROPERTY_CAPABILITIES
#define PROPERTY_CAPABILITIES \
					"Capabilities"
#endif

#ifndef PROPERTY_CAPABILITY_DESCRIPTIONS
#define PROPERTY_CAPABILITY_DESCRIPTIONS \
					"CapabilityDescriptions"
#endif

#ifndef PROPERTY_ENABLED_CAPABILITIES
#define PROPERTY_ENABLED_CAPABILITIES \
					"EnabledCapabilities"
#endif

#ifndef PROPERTY_MAX_BAUD_RATE_TO_SERIAL_PORT
#define PROPERTY_MAX_BAUD_RATE_TO_SERIAL_PORT \
					"MaxBaudRateToSerialPort"
#endif

#ifndef PROPERTY_MAX_BAUD_RATE_TO_PHONE
#define PROPERTY_MAX_BAUD_RATE_TO_PHONE \
					"MaxBaudRateToPhone"
#endif

#ifndef PROPERTY_SUPPORTS_SYNCHRONOUS_CONNECT
#define PROPERTY_SUPPORTS_SYNCHRONOUS_CONNECT \
					"SupportsSynchronousConnect"
#endif

#ifndef PROPERTY_DIAL_TYPE
#define PROPERTY_DIAL_TYPE \
					"DialType"
#endif

#ifndef PROPERTY_INACTIVITY_TIMEOUT
#define PROPERTY_INACTIVITY_TIMEOUT \
					"InactivityTimeout"
#endif

#ifndef PROPERTY_SPEAKER_VOLUME_INFO
#define PROPERTY_SPEAKER_VOLUME_INFO \
					"SpeakerVolumeInfo"
#endif

#ifndef PROPERTY_COUNTRIES_SUPPORTED
#define PROPERTY_COUNTRIES_SUPPORTED \
					"CountriesSupported"
#endif

#ifndef PROPERTY_COUNTRY_SELECTED
#define PROPERTY_COUNTRY_SELECTED \
					"CountrySelected"
#endif

#ifndef PROPERTY_RINGS_BEFORE_ANSWER
#define PROPERTY_RINGS_BEFORE_ANSWER \
					"RingsBeforeAnswer"
#endif

#ifndef PROPERTY_MAX_NUMBER_OF_PASSWORDS
#define PROPERTY_MAX_NUMBER_OF_PASSWORDS \
					"MaxNumberOfPasswords"
#endif

#ifndef PROPERTY_CURRENT_PASSWORDS
#define PROPERTY_CURRENT_PASSWORDS \
					"CurrentPasswords"
#endif

#ifndef PROPERTY_SUPPORTS_CALLBACK
#define PROPERTY_SUPPORTS_CALLBACK \
					"SupportsCallback"
#endif

#ifndef PROPERTY_ANSWER_MODE
#define PROPERTY_ANSWER_MODE \
					"AnswerMode"
#endif

#ifndef PROPERTY_EQUALIZATION
#define PROPERTY_EQUALIZATION \
					"Equalization"
#endif

#ifndef PROPERTY_BLACK_LISTED_NUMBERS
#define PROPERTY_BLACK_LISTED_NUMBERS \
					"BlackListedNumbers"
#endif



class CIM_POTSModem :
	public CIM_CallBasedModem
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

	virtual Boolean getCapabilities(CIMProperty&) const=0;
	virtual Array<Uint16> getCapabilities() const=0;
	virtual void setCapabilities(Array<Uint16>&)=0;
	virtual Boolean getCapabilityDescriptions(CIMProperty&) const=0;
	virtual Array<String> getCapabilityDescriptions() const=0;
	virtual void setCapabilityDescriptions(Array<String>&)=0;
	virtual Boolean getEnabledCapabilities(CIMProperty&) const=0;
	virtual Array<Uint16> getEnabledCapabilities() const=0;
	virtual void setEnabledCapabilities(Array<Uint16>&)=0;
	virtual Boolean getMaxBaudRateToSerialPort(CIMProperty&) const=0;
	virtual Uint32 getMaxBaudRateToSerialPort() const=0;
	virtual void setMaxBaudRateToSerialPort(Uint32&)=0;
	virtual Boolean getMaxBaudRateToPhone(CIMProperty&) const=0;
	virtual Uint32 getMaxBaudRateToPhone() const=0;
	virtual void setMaxBaudRateToPhone(Uint32&)=0;
	virtual Boolean getSupportsSynchronousConnect(CIMProperty&) const=0;
	virtual Boolean getSupportsSynchronousConnect() const=0;
	virtual void setSupportsSynchronousConnect(Boolean&)=0;
	virtual Boolean getDialType(CIMProperty&) const=0;
	virtual Uint16 getDialType() const=0;
	virtual void setDialType(Uint16&)=0;
	virtual Boolean getInactivityTimeout(CIMProperty&) const=0;
	virtual Uint32 getInactivityTimeout() const=0;
	virtual void setInactivityTimeout(Uint32&)=0;
	virtual Boolean getSpeakerVolumeInfo(CIMProperty&) const=0;
	virtual Uint16 getSpeakerVolumeInfo() const=0;
	virtual void setSpeakerVolumeInfo(Uint16&)=0;
	virtual Boolean getCountriesSupported(CIMProperty&) const=0;
	virtual Array<String> getCountriesSupported() const=0;
	virtual void setCountriesSupported(Array<String>&)=0;
	virtual Boolean getCountrySelected(CIMProperty&) const=0;
	virtual String getCountrySelected() const=0;
	virtual void setCountrySelected(String&)=0;
	virtual Boolean getRingsBeforeAnswer(CIMProperty&) const=0;
	virtual Uint8 getRingsBeforeAnswer() const=0;
	virtual void setRingsBeforeAnswer(Uint8&)=0;
	virtual Boolean getMaxNumberOfPasswords(CIMProperty&) const=0;
	virtual Uint16 getMaxNumberOfPasswords() const=0;
	virtual void setMaxNumberOfPasswords(Uint16&)=0;
	virtual Boolean getCurrentPasswords(CIMProperty&) const=0;
	virtual Array<String> getCurrentPasswords() const=0;
	virtual void setCurrentPasswords(Array<String>&)=0;
	virtual Boolean getSupportsCallback(CIMProperty&) const=0;
	virtual Boolean getSupportsCallback() const=0;
	virtual void setSupportsCallback(Boolean&)=0;
	virtual Boolean getAnswerMode(CIMProperty&) const=0;
	virtual Uint16 getAnswerMode() const=0;
	virtual void setAnswerMode(Uint16&)=0;
	virtual Boolean getEqualization(CIMProperty&) const=0;
	virtual Uint16 getEqualization() const=0;
	virtual void setEqualization(Uint16&)=0;
	virtual Boolean getBlackListedNumbers(CIMProperty&) const=0;
	virtual Array<String> getBlackListedNumbers() const=0;
	virtual void setBlackListedNumbers(Array<String>&)=0;

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

#endif /* CIM_POTSMODEM */
