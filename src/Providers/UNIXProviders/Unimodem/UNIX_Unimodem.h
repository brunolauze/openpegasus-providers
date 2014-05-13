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
Unimodem is a POTSModem that supports the Unimodem 1.0 Specification.
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

			UNIX_Unimodem:
				CallSetupResultCode UInt16
				MultiMediaMode UInt16
				DTEDCEInterfaceMode UInt16
				TransmitCarrierNegotiation UInt16
				ReceiveCarrierNegotiation UInt16
				InitialTransmitCarrierDataRate UInt32
				InitialReceiveCarrierDataRate UInt32
				CarrierRetrainsRequested UInt8
				CarrierRetrainsGranted UInt8
				FinalTransmitCarrierDataRate UInt32
				FinalReceiveCarrierDataRate UInt32
				TerminationCause UInt16
				UnimodemRevision String
				EstimatedNoiseLevel UInt32
				NormalizedMeanSquaredError UInt32
				TemporaryCarrierLossEventCount UInt8
				CarrierRenegotiationEventCount UInt8
				ErrorControlFrameSize UInt16
				ErrorControlLinkTimeouts UInt8
				ErrorControlLinkNAKs UInt8
				TransmitFlowControl UInt16
				ReceiveFlowControl UInt16
				TransmitCharsSentFromDTE UInt64
				ReceiveCharsSentToDTE UInt64
				TransmitCharsLost UInt64
				ReceiveCharsLost UInt64
				TransmitIFrameCount UInt64
				ReceiveIFrameCount UInt64
				TransmitIFrameErrorCount UInt64
				ReceivedIFrameErrorCount UInt64
				CallWaitingEventCount UInt8


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

			UNIX_Unimodem:


*/

#ifndef __UNIX_UNIMODEM_H
#define __UNIX_UNIMODEM_H


#include "CIM_POTSModem.h"
#include <ConcreteJob/UNIX_ConcreteJob.h>

#include "UNIX_UnimodemDeps.h"


#ifndef PROPERTY_CALL_SETUP_RESULT_CODE
#define PROPERTY_CALL_SETUP_RESULT_CODE \
					"CallSetupResultCode"
#endif

#ifndef PROPERTY_MULTI_MEDIA_MODE
#define PROPERTY_MULTI_MEDIA_MODE \
					"MultiMediaMode"
#endif

#ifndef PROPERTY_D_T_E_D_C_E_INTERFACE_MODE
#define PROPERTY_D_T_E_D_C_E_INTERFACE_MODE \
					"DTEDCEInterfaceMode"
#endif

#ifndef PROPERTY_TRANSMIT_CARRIER_NEGOTIATION
#define PROPERTY_TRANSMIT_CARRIER_NEGOTIATION \
					"TransmitCarrierNegotiation"
#endif

#ifndef PROPERTY_RECEIVE_CARRIER_NEGOTIATION
#define PROPERTY_RECEIVE_CARRIER_NEGOTIATION \
					"ReceiveCarrierNegotiation"
#endif

#ifndef PROPERTY_INITIAL_TRANSMIT_CARRIER_DATA_RATE
#define PROPERTY_INITIAL_TRANSMIT_CARRIER_DATA_RATE \
					"InitialTransmitCarrierDataRate"
#endif

#ifndef PROPERTY_INITIAL_RECEIVE_CARRIER_DATA_RATE
#define PROPERTY_INITIAL_RECEIVE_CARRIER_DATA_RATE \
					"InitialReceiveCarrierDataRate"
#endif

#ifndef PROPERTY_CARRIER_RETRAINS_REQUESTED
#define PROPERTY_CARRIER_RETRAINS_REQUESTED \
					"CarrierRetrainsRequested"
#endif

#ifndef PROPERTY_CARRIER_RETRAINS_GRANTED
#define PROPERTY_CARRIER_RETRAINS_GRANTED \
					"CarrierRetrainsGranted"
#endif

#ifndef PROPERTY_FINAL_TRANSMIT_CARRIER_DATA_RATE
#define PROPERTY_FINAL_TRANSMIT_CARRIER_DATA_RATE \
					"FinalTransmitCarrierDataRate"
#endif

#ifndef PROPERTY_FINAL_RECEIVE_CARRIER_DATA_RATE
#define PROPERTY_FINAL_RECEIVE_CARRIER_DATA_RATE \
					"FinalReceiveCarrierDataRate"
#endif

#ifndef PROPERTY_TERMINATION_CAUSE
#define PROPERTY_TERMINATION_CAUSE \
					"TerminationCause"
#endif

#ifndef PROPERTY_UNIMODEM_REVISION
#define PROPERTY_UNIMODEM_REVISION \
					"UnimodemRevision"
#endif

#ifndef PROPERTY_ESTIMATED_NOISE_LEVEL
#define PROPERTY_ESTIMATED_NOISE_LEVEL \
					"EstimatedNoiseLevel"
#endif

#ifndef PROPERTY_NORMALIZED_MEAN_SQUARED_ERROR
#define PROPERTY_NORMALIZED_MEAN_SQUARED_ERROR \
					"NormalizedMeanSquaredError"
#endif

#ifndef PROPERTY_TEMPORARY_CARRIER_LOSS_EVENT_COUNT
#define PROPERTY_TEMPORARY_CARRIER_LOSS_EVENT_COUNT \
					"TemporaryCarrierLossEventCount"
#endif

#ifndef PROPERTY_CARRIER_RENEGOTIATION_EVENT_COUNT
#define PROPERTY_CARRIER_RENEGOTIATION_EVENT_COUNT \
					"CarrierRenegotiationEventCount"
#endif

#ifndef PROPERTY_ERROR_CONTROL_FRAME_SIZE
#define PROPERTY_ERROR_CONTROL_FRAME_SIZE \
					"ErrorControlFrameSize"
#endif

#ifndef PROPERTY_ERROR_CONTROL_LINK_TIMEOUTS
#define PROPERTY_ERROR_CONTROL_LINK_TIMEOUTS \
					"ErrorControlLinkTimeouts"
#endif

#ifndef PROPERTY_ERROR_CONTROL_LINK_N_A_KS
#define PROPERTY_ERROR_CONTROL_LINK_N_A_KS \
					"ErrorControlLinkNAKs"
#endif

#ifndef PROPERTY_TRANSMIT_FLOW_CONTROL
#define PROPERTY_TRANSMIT_FLOW_CONTROL \
					"TransmitFlowControl"
#endif

#ifndef PROPERTY_RECEIVE_FLOW_CONTROL
#define PROPERTY_RECEIVE_FLOW_CONTROL \
					"ReceiveFlowControl"
#endif

#ifndef PROPERTY_TRANSMIT_CHARS_SENT_FROM_D_T_E
#define PROPERTY_TRANSMIT_CHARS_SENT_FROM_D_T_E \
					"TransmitCharsSentFromDTE"
#endif

#ifndef PROPERTY_RECEIVE_CHARS_SENT_TO_D_T_E
#define PROPERTY_RECEIVE_CHARS_SENT_TO_D_T_E \
					"ReceiveCharsSentToDTE"
#endif

#ifndef PROPERTY_TRANSMIT_CHARS_LOST
#define PROPERTY_TRANSMIT_CHARS_LOST \
					"TransmitCharsLost"
#endif

#ifndef PROPERTY_RECEIVE_CHARS_LOST
#define PROPERTY_RECEIVE_CHARS_LOST \
					"ReceiveCharsLost"
#endif

#ifndef PROPERTY_TRANSMIT_I_FRAME_COUNT
#define PROPERTY_TRANSMIT_I_FRAME_COUNT \
					"TransmitIFrameCount"
#endif

#ifndef PROPERTY_RECEIVE_I_FRAME_COUNT
#define PROPERTY_RECEIVE_I_FRAME_COUNT \
					"ReceiveIFrameCount"
#endif

#ifndef PROPERTY_TRANSMIT_I_FRAME_ERROR_COUNT
#define PROPERTY_TRANSMIT_I_FRAME_ERROR_COUNT \
					"TransmitIFrameErrorCount"
#endif

#ifndef PROPERTY_RECEIVED_I_FRAME_ERROR_COUNT
#define PROPERTY_RECEIVED_I_FRAME_ERROR_COUNT \
					"ReceivedIFrameErrorCount"
#endif

#ifndef PROPERTY_CALL_WAITING_EVENT_COUNT
#define PROPERTY_CALL_WAITING_EVENT_COUNT \
					"CallWaitingEventCount"
#endif



class UNIX_Unimodem :
	public CIM_POTSModem
{
public:

	UNIX_Unimodem();
	~UNIX_Unimodem();

	virtual Boolean initialize();
	virtual Boolean load(int&);
	virtual Boolean loadByName(const String);
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

	virtual Boolean getInstanceID(CIMProperty&) const;
	virtual String getInstanceID() const;
	virtual void setInstanceID(String&);
	virtual Boolean getCaption(CIMProperty&) const;
	virtual String getCaption() const;
	virtual void setCaption(String&);
	virtual Boolean getDescription(CIMProperty&) const;
	virtual String getDescription() const;
	virtual void setDescription(String&);
	virtual Boolean getElementName(CIMProperty&) const;
	virtual String getElementName() const;
	virtual void setElementName(String&);
	virtual Boolean getGeneration(CIMProperty&) const;
	virtual Uint64 getGeneration() const;
	virtual void setGeneration(Uint64&);
	virtual Boolean getInstallDate(CIMProperty&) const;
	virtual CIMDateTime getInstallDate() const;
	virtual void setInstallDate(CIMDateTime&);
	virtual Boolean getName(CIMProperty&) const;
	virtual String getName() const;
	virtual void setName(String&);
	virtual Boolean getOperationalStatus(CIMProperty&) const;
	virtual Array<Uint16> getOperationalStatus() const;
	virtual void setOperationalStatus(Array<Uint16>&);
	virtual Boolean getStatusDescriptions(CIMProperty&) const;
	virtual Array<String> getStatusDescriptions() const;
	virtual void setStatusDescriptions(Array<String>&);
	virtual Boolean getStatus(CIMProperty&) const;
	virtual String getStatus() const;
	virtual void setStatus(String&);
	virtual Boolean getHealthState(CIMProperty&) const;
	virtual Uint16 getHealthState() const;
	virtual void setHealthState(Uint16&);
	virtual Boolean getCommunicationStatus(CIMProperty&) const;
	virtual Uint16 getCommunicationStatus() const;
	virtual void setCommunicationStatus(Uint16&);
	virtual Boolean getDetailedStatus(CIMProperty&) const;
	virtual Uint16 getDetailedStatus() const;
	virtual void setDetailedStatus(Uint16&);
	virtual Boolean getOperatingStatus(CIMProperty&) const;
	virtual Uint16 getOperatingStatus() const;
	virtual void setOperatingStatus(Uint16&);
	virtual Boolean getPrimaryStatus(CIMProperty&) const;
	virtual Uint16 getPrimaryStatus() const;
	virtual void setPrimaryStatus(Uint16&);
	virtual Boolean getEnabledState(CIMProperty&) const;
	virtual Uint16 getEnabledState() const;
	virtual void setEnabledState(Uint16&);
	virtual Boolean getOtherEnabledState(CIMProperty&) const;
	virtual String getOtherEnabledState() const;
	virtual void setOtherEnabledState(String&);
	virtual Boolean getRequestedState(CIMProperty&) const;
	virtual Uint16 getRequestedState() const;
	virtual void setRequestedState(Uint16&);
	virtual Boolean getEnabledDefault(CIMProperty&) const;
	virtual Uint16 getEnabledDefault() const;
	virtual void setEnabledDefault(Uint16&);
	virtual Boolean getTimeOfLastStateChange(CIMProperty&) const;
	virtual CIMDateTime getTimeOfLastStateChange() const;
	virtual void setTimeOfLastStateChange(CIMDateTime&);
	virtual Boolean getAvailableRequestedStates(CIMProperty&) const;
	virtual Array<Uint16> getAvailableRequestedStates() const;
	virtual void setAvailableRequestedStates(Array<Uint16>&);
	virtual Boolean getTransitioningToState(CIMProperty&) const;
	virtual Uint16 getTransitioningToState() const;
	virtual void setTransitioningToState(Uint16&);
	virtual Boolean getAllocationState(CIMProperty&) const;
	virtual String getAllocationState() const;
	virtual void setAllocationState(String&);
	virtual Boolean getSystemCreationClassName(CIMProperty&) const;
	virtual String getSystemCreationClassName() const;
	virtual void setSystemCreationClassName(String&);
	virtual Boolean getSystemName(CIMProperty&) const;
	virtual String getSystemName() const;
	virtual void setSystemName(String&);
	virtual Boolean getCreationClassName(CIMProperty&) const;
	virtual String getCreationClassName() const;
	virtual void setCreationClassName(String&);
	virtual Boolean getDeviceID(CIMProperty&) const;
	virtual String getDeviceID() const;
	virtual void setDeviceID(String&);
	virtual Boolean getPowerManagementSupported(CIMProperty&) const;
	virtual Boolean getPowerManagementSupported() const;
	virtual void setPowerManagementSupported(Boolean&);
	virtual Boolean getPowerManagementCapabilities(CIMProperty&) const;
	virtual Array<Uint16> getPowerManagementCapabilities() const;
	virtual void setPowerManagementCapabilities(Array<Uint16>&);
	virtual Boolean getAvailability(CIMProperty&) const;
	virtual Uint16 getAvailability() const;
	virtual void setAvailability(Uint16&);
	virtual Boolean getStatusInfo(CIMProperty&) const;
	virtual Uint16 getStatusInfo() const;
	virtual void setStatusInfo(Uint16&);
	virtual Boolean getLastErrorCode(CIMProperty&) const;
	virtual Uint32 getLastErrorCode() const;
	virtual void setLastErrorCode(Uint32&);
	virtual Boolean getErrorDescription(CIMProperty&) const;
	virtual String getErrorDescription() const;
	virtual void setErrorDescription(String&);
	virtual Boolean getErrorCleared(CIMProperty&) const;
	virtual Boolean getErrorCleared() const;
	virtual void setErrorCleared(Boolean&);
	virtual Boolean getOtherIdentifyingInfo(CIMProperty&) const;
	virtual Array<String> getOtherIdentifyingInfo() const;
	virtual void setOtherIdentifyingInfo(Array<String>&);
	virtual Boolean getPowerOnHours(CIMProperty&) const;
	virtual Uint64 getPowerOnHours() const;
	virtual void setPowerOnHours(Uint64&);
	virtual Boolean getTotalPowerOnHours(CIMProperty&) const;
	virtual Uint64 getTotalPowerOnHours() const;
	virtual void setTotalPowerOnHours(Uint64&);
	virtual Boolean getIdentifyingDescriptions(CIMProperty&) const;
	virtual Array<String> getIdentifyingDescriptions() const;
	virtual void setIdentifyingDescriptions(Array<String>&);
	virtual Boolean getAdditionalAvailability(CIMProperty&) const;
	virtual Array<Uint16> getAdditionalAvailability() const;
	virtual void setAdditionalAvailability(Array<Uint16>&);
	virtual Boolean getMaxQuiesceTime(CIMProperty&) const;
	virtual Uint64 getMaxQuiesceTime() const;
	virtual void setMaxQuiesceTime(Uint64&);
	virtual Boolean getLocationIndicator(CIMProperty&) const;
	virtual Uint16 getLocationIndicator() const;
	virtual void setLocationIndicator(Uint16&);
	virtual Boolean getFallbackEnabled(CIMProperty&) const;
	virtual Boolean getFallbackEnabled() const;
	virtual void setFallbackEnabled(Boolean&);
	virtual Boolean getCompressionSupported(CIMProperty&) const;
	virtual Array<Uint16> getCompressionSupported() const;
	virtual void setCompressionSupported(Array<Uint16>&);
	virtual Boolean getOtherCompressionDescription(CIMProperty&) const;
	virtual String getOtherCompressionDescription() const;
	virtual void setOtherCompressionDescription(String&);
	virtual Boolean getCompressionInfo(CIMProperty&) const;
	virtual Uint16 getCompressionInfo() const;
	virtual void setCompressionInfo(Uint16&);
	virtual Boolean getOtherCompressionInfoDescription(CIMProperty&) const;
	virtual String getOtherCompressionInfoDescription() const;
	virtual void setOtherCompressionInfoDescription(String&);
	virtual Boolean getModulationSupported(CIMProperty&) const;
	virtual Array<Uint16> getModulationSupported() const;
	virtual void setModulationSupported(Array<Uint16>&);
	virtual Boolean getOtherModulationDescription(CIMProperty&) const;
	virtual String getOtherModulationDescription() const;
	virtual void setOtherModulationDescription(String&);
	virtual Boolean getModulationScheme(CIMProperty&) const;
	virtual Uint16 getModulationScheme() const;
	virtual void setModulationScheme(Uint16&);
	virtual Boolean getOtherSchemeDescription(CIMProperty&) const;
	virtual String getOtherSchemeDescription() const;
	virtual void setOtherSchemeDescription(String&);
	virtual Boolean getErrorControlSupported(CIMProperty&) const;
	virtual Array<Uint16> getErrorControlSupported() const;
	virtual void setErrorControlSupported(Array<Uint16>&);
	virtual Boolean getOtherErrorControlDescription(CIMProperty&) const;
	virtual String getOtherErrorControlDescription() const;
	virtual void setOtherErrorControlDescription(String&);
	virtual Boolean getErrorControlInfo(CIMProperty&) const;
	virtual Uint16 getErrorControlInfo() const;
	virtual void setErrorControlInfo(Uint16&);
	virtual Boolean getOtherErrorControlInfoDescription(CIMProperty&) const;
	virtual String getOtherErrorControlInfoDescription() const;
	virtual void setOtherErrorControlInfoDescription(String&);
	virtual Boolean getTimeOfLastReset(CIMProperty&) const;
	virtual CIMDateTime getTimeOfLastReset() const;
	virtual void setTimeOfLastReset(CIMDateTime&);
	virtual Boolean getCallSpeed(CIMProperty&) const;
	virtual Uint32 getCallSpeed() const;
	virtual void setCallSpeed(Uint32&);
	virtual Boolean getCallStatus(CIMProperty&) const;
	virtual Uint16 getCallStatus() const;
	virtual void setCallStatus(Uint16&);
	virtual Boolean getCharsSent(CIMProperty&) const;
	virtual Uint32 getCharsSent() const;
	virtual void setCharsSent(Uint32&);
	virtual Boolean getCharsReceived(CIMProperty&) const;
	virtual Uint32 getCharsReceived() const;
	virtual void setCharsReceived(Uint32&);
	virtual Boolean getCharsLost(CIMProperty&) const;
	virtual Uint32 getCharsLost() const;
	virtual void setCharsLost(Uint32&);
	virtual Boolean getBlocksSent(CIMProperty&) const;
	virtual Uint32 getBlocksSent() const;
	virtual void setBlocksSent(Uint32&);
	virtual Boolean getBlocksResent(CIMProperty&) const;
	virtual Uint32 getBlocksResent() const;
	virtual void setBlocksResent(Uint32&);
	virtual Boolean getBlocksReceived(CIMProperty&) const;
	virtual Uint32 getBlocksReceived() const;
	virtual void setBlocksReceived(Uint32&);
	virtual Boolean getBlockErrors(CIMProperty&) const;
	virtual Uint32 getBlockErrors() const;
	virtual void setBlockErrors(Uint32&);
	virtual Boolean getCallLength(CIMProperty&) const;
	virtual CIMDateTime getCallLength() const;
	virtual void setCallLength(CIMDateTime&);
	virtual Boolean getNumberDialed(CIMProperty&) const;
	virtual String getNumberDialed() const;
	virtual void setNumberDialed(String&);
	virtual Boolean getCapabilities(CIMProperty&) const;
	virtual Array<Uint16> getCapabilities() const;
	virtual void setCapabilities(Array<Uint16>&);
	virtual Boolean getCapabilityDescriptions(CIMProperty&) const;
	virtual Array<String> getCapabilityDescriptions() const;
	virtual void setCapabilityDescriptions(Array<String>&);
	virtual Boolean getEnabledCapabilities(CIMProperty&) const;
	virtual Array<Uint16> getEnabledCapabilities() const;
	virtual void setEnabledCapabilities(Array<Uint16>&);
	virtual Boolean getMaxBaudRateToSerialPort(CIMProperty&) const;
	virtual Uint32 getMaxBaudRateToSerialPort() const;
	virtual void setMaxBaudRateToSerialPort(Uint32&);
	virtual Boolean getMaxBaudRateToPhone(CIMProperty&) const;
	virtual Uint32 getMaxBaudRateToPhone() const;
	virtual void setMaxBaudRateToPhone(Uint32&);
	virtual Boolean getSupportsSynchronousConnect(CIMProperty&) const;
	virtual Boolean getSupportsSynchronousConnect() const;
	virtual void setSupportsSynchronousConnect(Boolean&);
	virtual Boolean getDialType(CIMProperty&) const;
	virtual Uint16 getDialType() const;
	virtual void setDialType(Uint16&);
	virtual Boolean getInactivityTimeout(CIMProperty&) const;
	virtual Uint32 getInactivityTimeout() const;
	virtual void setInactivityTimeout(Uint32&);
	virtual Boolean getSpeakerVolumeInfo(CIMProperty&) const;
	virtual Uint16 getSpeakerVolumeInfo() const;
	virtual void setSpeakerVolumeInfo(Uint16&);
	virtual Boolean getCountriesSupported(CIMProperty&) const;
	virtual Array<String> getCountriesSupported() const;
	virtual void setCountriesSupported(Array<String>&);
	virtual Boolean getCountrySelected(CIMProperty&) const;
	virtual String getCountrySelected() const;
	virtual void setCountrySelected(String&);
	virtual Boolean getRingsBeforeAnswer(CIMProperty&) const;
	virtual Uint8 getRingsBeforeAnswer() const;
	virtual void setRingsBeforeAnswer(Uint8&);
	virtual Boolean getMaxNumberOfPasswords(CIMProperty&) const;
	virtual Uint16 getMaxNumberOfPasswords() const;
	virtual void setMaxNumberOfPasswords(Uint16&);
	virtual Boolean getCurrentPasswords(CIMProperty&) const;
	virtual Array<String> getCurrentPasswords() const;
	virtual void setCurrentPasswords(Array<String>&);
	virtual Boolean getSupportsCallback(CIMProperty&) const;
	virtual Boolean getSupportsCallback() const;
	virtual void setSupportsCallback(Boolean&);
	virtual Boolean getAnswerMode(CIMProperty&) const;
	virtual Uint16 getAnswerMode() const;
	virtual void setAnswerMode(Uint16&);
	virtual Boolean getEqualization(CIMProperty&) const;
	virtual Uint16 getEqualization() const;
	virtual void setEqualization(Uint16&);
	virtual Boolean getBlackListedNumbers(CIMProperty&) const;
	virtual Array<String> getBlackListedNumbers() const;
	virtual void setBlackListedNumbers(Array<String>&);
	virtual Boolean getCallSetupResultCode(CIMProperty&) const;
	virtual Uint16 getCallSetupResultCode() const;
	virtual void setCallSetupResultCode(Uint16&);
	virtual Boolean getMultiMediaMode(CIMProperty&) const;
	virtual Uint16 getMultiMediaMode() const;
	virtual void setMultiMediaMode(Uint16&);
	virtual Boolean getDTEDCEInterfaceMode(CIMProperty&) const;
	virtual Uint16 getDTEDCEInterfaceMode() const;
	virtual void setDTEDCEInterfaceMode(Uint16&);
	virtual Boolean getTransmitCarrierNegotiation(CIMProperty&) const;
	virtual Uint16 getTransmitCarrierNegotiation() const;
	virtual void setTransmitCarrierNegotiation(Uint16&);
	virtual Boolean getReceiveCarrierNegotiation(CIMProperty&) const;
	virtual Uint16 getReceiveCarrierNegotiation() const;
	virtual void setReceiveCarrierNegotiation(Uint16&);
	virtual Boolean getInitialTransmitCarrierDataRate(CIMProperty&) const;
	virtual Uint32 getInitialTransmitCarrierDataRate() const;
	virtual void setInitialTransmitCarrierDataRate(Uint32&);
	virtual Boolean getInitialReceiveCarrierDataRate(CIMProperty&) const;
	virtual Uint32 getInitialReceiveCarrierDataRate() const;
	virtual void setInitialReceiveCarrierDataRate(Uint32&);
	virtual Boolean getCarrierRetrainsRequested(CIMProperty&) const;
	virtual Uint8 getCarrierRetrainsRequested() const;
	virtual void setCarrierRetrainsRequested(Uint8&);
	virtual Boolean getCarrierRetrainsGranted(CIMProperty&) const;
	virtual Uint8 getCarrierRetrainsGranted() const;
	virtual void setCarrierRetrainsGranted(Uint8&);
	virtual Boolean getFinalTransmitCarrierDataRate(CIMProperty&) const;
	virtual Uint32 getFinalTransmitCarrierDataRate() const;
	virtual void setFinalTransmitCarrierDataRate(Uint32&);
	virtual Boolean getFinalReceiveCarrierDataRate(CIMProperty&) const;
	virtual Uint32 getFinalReceiveCarrierDataRate() const;
	virtual void setFinalReceiveCarrierDataRate(Uint32&);
	virtual Boolean getTerminationCause(CIMProperty&) const;
	virtual Uint16 getTerminationCause() const;
	virtual void setTerminationCause(Uint16&);
	virtual Boolean getUnimodemRevision(CIMProperty&) const;
	virtual String getUnimodemRevision() const;
	virtual void setUnimodemRevision(String&);
	virtual Boolean getEstimatedNoiseLevel(CIMProperty&) const;
	virtual Uint32 getEstimatedNoiseLevel() const;
	virtual void setEstimatedNoiseLevel(Uint32&);
	virtual Boolean getNormalizedMeanSquaredError(CIMProperty&) const;
	virtual Uint32 getNormalizedMeanSquaredError() const;
	virtual void setNormalizedMeanSquaredError(Uint32&);
	virtual Boolean getTemporaryCarrierLossEventCount(CIMProperty&) const;
	virtual Uint8 getTemporaryCarrierLossEventCount() const;
	virtual void setTemporaryCarrierLossEventCount(Uint8&);
	virtual Boolean getCarrierRenegotiationEventCount(CIMProperty&) const;
	virtual Uint8 getCarrierRenegotiationEventCount() const;
	virtual void setCarrierRenegotiationEventCount(Uint8&);
	virtual Boolean getErrorControlFrameSize(CIMProperty&) const;
	virtual Uint16 getErrorControlFrameSize() const;
	virtual void setErrorControlFrameSize(Uint16&);
	virtual Boolean getErrorControlLinkTimeouts(CIMProperty&) const;
	virtual Uint8 getErrorControlLinkTimeouts() const;
	virtual void setErrorControlLinkTimeouts(Uint8&);
	virtual Boolean getErrorControlLinkNAKs(CIMProperty&) const;
	virtual Uint8 getErrorControlLinkNAKs() const;
	virtual void setErrorControlLinkNAKs(Uint8&);
	virtual Boolean getTransmitFlowControl(CIMProperty&) const;
	virtual Uint16 getTransmitFlowControl() const;
	virtual void setTransmitFlowControl(Uint16&);
	virtual Boolean getReceiveFlowControl(CIMProperty&) const;
	virtual Uint16 getReceiveFlowControl() const;
	virtual void setReceiveFlowControl(Uint16&);
	virtual Boolean getTransmitCharsSentFromDTE(CIMProperty&) const;
	virtual Uint64 getTransmitCharsSentFromDTE() const;
	virtual void setTransmitCharsSentFromDTE(Uint64&);
	virtual Boolean getReceiveCharsSentToDTE(CIMProperty&) const;
	virtual Uint64 getReceiveCharsSentToDTE() const;
	virtual void setReceiveCharsSentToDTE(Uint64&);
	virtual Boolean getTransmitCharsLost(CIMProperty&) const;
	virtual Uint64 getTransmitCharsLost() const;
	virtual void setTransmitCharsLost(Uint64&);
	virtual Boolean getReceiveCharsLost(CIMProperty&) const;
	virtual Uint64 getReceiveCharsLost() const;
	virtual void setReceiveCharsLost(Uint64&);
	virtual Boolean getTransmitIFrameCount(CIMProperty&) const;
	virtual Uint64 getTransmitIFrameCount() const;
	virtual void setTransmitIFrameCount(Uint64&);
	virtual Boolean getReceiveIFrameCount(CIMProperty&) const;
	virtual Uint64 getReceiveIFrameCount() const;
	virtual void setReceiveIFrameCount(Uint64&);
	virtual Boolean getTransmitIFrameErrorCount(CIMProperty&) const;
	virtual Uint64 getTransmitIFrameErrorCount() const;
	virtual void setTransmitIFrameErrorCount(Uint64&);
	virtual Boolean getReceivedIFrameErrorCount(CIMProperty&) const;
	virtual Uint64 getReceivedIFrameErrorCount() const;
	virtual void setReceivedIFrameErrorCount(Uint64&);
	virtual Boolean getCallWaitingEventCount(CIMProperty&) const;
	virtual Uint8 getCallWaitingEventCount() const;
	virtual void setCallWaitingEventCount(Uint8&);

	virtual Uint32 invokeRequestStateChange(
		Uint16 &inRequestedState,
		CIMInstance &inJob,
		CIMDateTime &inTimeoutPeriod
	);

	virtual Uint32 invokeSetPowerState(
		Uint16 &inPowerState,
		CIMDateTime &inTime
	);

	virtual Uint32 invokeReset();

	virtual Uint32 invokeEnableDevice(
		Boolean &inEnabled
	);

	virtual Uint32 invokeOnlineDevice(
		Boolean &inOnline
	);

	virtual Uint32 invokeQuiesceDevice(
		Boolean &inQuiesce
	);

	virtual Uint32 invokeSaveProperties();

	virtual Uint32 invokeRestoreProperties();



private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	CIMDateTime _installDate;
	String _name;
	Array<Uint16> _operationalStatus;
	Array<String> _statusDescriptions;
	String _status;
	Uint16 _healthState;
	Uint16 _communicationStatus;
	Uint16 _detailedStatus;
	Uint16 _operatingStatus;
	Uint16 _primaryStatus;
	Uint16 _enabledState;
	String _otherEnabledState;
	Uint16 _requestedState;
	Uint16 _enabledDefault;
	CIMDateTime _timeOfLastStateChange;
	Array<Uint16> _availableRequestedStates;
	Uint16 _transitioningToState;
	String _allocationState;
	String _systemCreationClassName;
	String _systemName;
	String _creationClassName;
	String _deviceID;
	Boolean _powerManagementSupported;
	Array<Uint16> _powerManagementCapabilities;
	Uint16 _availability;
	Uint16 _statusInfo;
	Uint32 _lastErrorCode;
	String _errorDescription;
	Boolean _errorCleared;
	Array<String> _otherIdentifyingInfo;
	Uint64 _powerOnHours;
	Uint64 _totalPowerOnHours;
	Array<String> _identifyingDescriptions;
	Array<Uint16> _additionalAvailability;
	Uint64 _maxQuiesceTime;
	Uint16 _locationIndicator;
	Boolean _fallbackEnabled;
	Array<Uint16> _compressionSupported;
	String _otherCompressionDescription;
	Uint16 _compressionInfo;
	String _otherCompressionInfoDescription;
	Array<Uint16> _modulationSupported;
	String _otherModulationDescription;
	Uint16 _modulationScheme;
	String _otherSchemeDescription;
	Array<Uint16> _errorControlSupported;
	String _otherErrorControlDescription;
	Uint16 _errorControlInfo;
	String _otherErrorControlInfoDescription;
	CIMDateTime _timeOfLastReset;
	Uint32 _callSpeed;
	Uint16 _callStatus;
	Uint32 _charsSent;
	Uint32 _charsReceived;
	Uint32 _charsLost;
	Uint32 _blocksSent;
	Uint32 _blocksResent;
	Uint32 _blocksReceived;
	Uint32 _blockErrors;
	CIMDateTime _callLength;
	String _numberDialed;
	Array<Uint16> _capabilities;
	Array<String> _capabilityDescriptions;
	Array<Uint16> _enabledCapabilities;
	Uint32 _maxBaudRateToSerialPort;
	Uint32 _maxBaudRateToPhone;
	Boolean _supportsSynchronousConnect;
	Uint16 _dialType;
	Uint32 _inactivityTimeout;
	Uint16 _speakerVolumeInfo;
	Array<String> _countriesSupported;
	String _countrySelected;
	Uint8 _ringsBeforeAnswer;
	Uint16 _maxNumberOfPasswords;
	Array<String> _currentPasswords;
	Boolean _supportsCallback;
	Uint16 _answerMode;
	Uint16 _equalization;
	Array<String> _blackListedNumbers;
	Uint16 _callSetupResultCode;
	Uint16 _multiMediaMode;
	Uint16 _dTEDCEInterfaceMode;
	Uint16 _transmitCarrierNegotiation;
	Uint16 _receiveCarrierNegotiation;
	Uint32 _initialTransmitCarrierDataRate;
	Uint32 _initialReceiveCarrierDataRate;
	Uint8 _carrierRetrainsRequested;
	Uint8 _carrierRetrainsGranted;
	Uint32 _finalTransmitCarrierDataRate;
	Uint32 _finalReceiveCarrierDataRate;
	Uint16 _terminationCause;
	String _unimodemRevision;
	Uint32 _estimatedNoiseLevel;
	Uint32 _normalizedMeanSquaredError;
	Uint8 _temporaryCarrierLossEventCount;
	Uint8 _carrierRenegotiationEventCount;
	Uint16 _errorControlFrameSize;
	Uint8 _errorControlLinkTimeouts;
	Uint8 _errorControlLinkNAKs;
	Uint16 _transmitFlowControl;
	Uint16 _receiveFlowControl;
	Uint64 _transmitCharsSentFromDTE;
	Uint64 _receiveCharsSentToDTE;
	Uint64 _transmitCharsLost;
	Uint64 _receiveCharsLost;
	Uint64 _transmitIFrameCount;
	Uint64 _receiveIFrameCount;
	Uint64 _transmitIFrameErrorCount;
	Uint64 _receivedIFrameErrorCount;
	Uint8 _callWaitingEventCount;

#	include "UNIX_UnimodemPrivate.h"


};

#endif /* UNIX_UNIMODEM */
