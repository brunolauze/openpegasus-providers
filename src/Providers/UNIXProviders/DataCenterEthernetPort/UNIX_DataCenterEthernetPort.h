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
2.34.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::Ports
*/


/* **** Description *** */
/*
This class defines the current configuration of a data center ethernet (DCE) port.
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

			CIM_LogicalPort:
				Speed UInt64
				MaxSpeed UInt64
				RequestedSpeed UInt64
				UsageRestriction UInt16
				PortType UInt16
				OtherPortType String

			UNIX_NetworkPort:
				OtherNetworkPortType String
				PortNumber UInt16
				LinkTechnology UInt16
				OtherLinkTechnology String
				PermanentAddress String
				NetworkAddresses String
				FullDuplex Boolean
				AutoSense Boolean
				SupportedMaximumTransmissionUnit UInt64
				ActiveMaximumTransmissionUnit UInt64

			UNIX_EthernetPort:
				MaxDataSize UInt32
				Capabilities UInt16
				CapabilityDescriptions String
				EnabledCapabilities UInt16
				OtherEnabledCapabilities String
				PortDiscriminator String
				PVID UInt16
				PoEPowerEntityType UInt16

			UNIX_LLDPEthernetPort:
				ConfigPortVlanTxEnable Boolean
				ConfigManVidTxEnable Boolean
				MessageTxInterval UInt16
				MessageTxHoldMultiplier UInt8
				ReinitDelay UInt8
				NotificationInterval UInt16
				TxCreditMax UInt8
				MessageFastTx UInt16
				TxFastInit UInt8
				DestMacAddress String
				PortConfigAdminStatus UInt8
				PortConfigNotificationEnable Boolean
				PortConfigPortDescriptionTLVTxEnable Boolean
				PortConfigSystemNameTLVTxEnable Boolean
				PortConfigSystemDescriptionTLVTxEnable Boolean
				PortConfigSystemCapabilitiesTLVTxEnable Boolean
				ManAddrConfigDestAddress String
				ManAddrConfigLocManAddrSubtype UInt16
				ManAddrConfigLocManAddr String
				ManAddrConfigTxEnable Boolean
				LocChassisIdSubtype UInt8
				LocChassisId String
				LocSysName String
				LocSysDesc String
				LocSysCapSupported UInt8
				LocSysCapEnabled Boolean
				LocPortIdSubtype UInt8
				LocPortID String
				LocPortDesc String
				LocTxSystemValue UInt16
				RemTxSystemValueEcho UInt16
				LocRxSystemValue UInt16
				RemRxSystemValueEcho UInt16
				LocFbSystemValue UInt16
				RemTxSystemValue UInt16
				LocTxSystemValueEcho UInt16
				RemRxSystemValue UInt16
				LocRxSystemValueEcho UInt16
				LocResolvedTxSystemValue UInt16
				LocResolvedRxSystemValue UInt16
				MaximumFrameSizeTLVEnabled Boolean
				LocManAddrSubType UInt16
				LocManAddr String
				LocManAddrIfSubtype UInt16
				LocManAddrIfId UInt32
				RemLocalDestMacAddress String
				RemManAddrSubType UInt16
				RemManAddr String
				RemManAddrIfSubtype UInt16
				RemManAddrIfId UInt32
				RemChassisIdSubtype UInt8
				RemChassisId String
				RemSysName String
				RemSysDesc String
				RemSysCapSupported UInt8
				RemSysCapEnabled Boolean
				RemPortIdSubtype UInt8
				RemPortID String
				RemPortDesc String

			UNIX_DataCenterEthernetPort:
				PfcLinkDelayAllowance UInt32
				ETSConfigurationTxEnable Boolean
				ETSRecommendationTxEnable Boolean
				PFCTxEnable Boolean
				ApplicationPriorityTxEnable Boolean
				LocETSConCreditBasedShaperSupport Boolean
				LocETSConTrafficClassesSupported UInt8
				LocETSConWilling Boolean
				LocETSConPriority UInt8
				LocETSConPriTrafficClass UInt8
				LocETSConTrafficClass UInt8
				LocETSConTrafficClassBandwidth UInt8
				LocETSConTSATrafficClass UInt8
				LocETSConTrafficSelectionAlgorithm UInt8
				LocETSRecoTrafficClass UInt8
				LocETSRecoTrafficClassBandwidth UInt64
				LocETSRecoTSATrafficClass UInt8
				LocETSRecoTrafficSelectionAlgorithm UInt8
				LocPFCWilling Boolean
				LocPFCMBC Boolean
				LocPFCCap UInt8
				LocPFCEnablePriority UInt8
				LocPFCEnableEnabled Boolean
				LocApplicationPriorityAESelector UInt16
				LocApplicationPriorityAEProtocol UInt16
				LocApplicationPriorityAEPriority UInt8
				RemETSConCreditBasedShaperSupport Boolean
				RemETSConTrafficClassesSupported UInt8
				RemETSConWilling Boolean
				RemETSConPriority UInt8
				RemETSConPriTrafficClass UInt8
				RemETSConTrafficClass UInt8
				RemETSConTrafficClassBandwidth UInt8
				RemETSConTSATrafficClass UInt8
				RemETSConTrafficSelectionAlgorithm UInt8
				RemETSRecoTrafficClass UInt8
				RemETSRecoTrafficClassBandwidth UInt64
				RemETSRecoTSATrafficClass UInt8
				RemETSRecoTrafficSelectionAlgorithm UInt8
				RemPFCWilling Boolean
				RemPFCMBC Boolean
				RemPFCCap UInt8
				RemPFCEnablePriority UInt8
				RemPFCEnableEnabled Boolean
				RemApplicationPriorityAESelector UInt16
				RemApplicationPriorityAEProtocol UInt16
				RemApplicationPriorityAEPriority UInt8
				AdminETSConCreditBasedShaperSupport Boolean
				AdminETSConTrafficClassesSupported UInt8
				AdminETSConWilling Boolean
				AdminETSConPriority UInt8
				AdminETSConPriTrafficClass UInt8
				AdminETSConTrafficClass UInt8
				AdminETSConTrafficClassBandwidth UInt8
				AdminETSConTSATrafficClass UInt8
				AdminETSConTrafficSelectionAlgorithm UInt8
				AdminETSRecoTrafficClass UInt8
				AdminETSRecoTrafficClassBandwidth UInt64
				AdminETSRecoTSATrafficClass UInt8
				AdminETSRecoTrafficSelectionAlgorithm UInt8
				AdminPFCWilling Boolean
				AdminPFCMBC Boolean
				AdminPFCCap UInt8
				AdminPFCEnablePriority UInt8
				AdminPFCEnableEnabled Boolean
				AdminApplicationPriorityAESelector UInt16
				AdminApplicationPriorityAEProtocol UInt16
				AdminApplicationPriorityAEPriority UInt8


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

			CIM_LogicalPort:

			UNIX_NetworkPort:

			UNIX_EthernetPort:

			UNIX_LLDPEthernetPort:

			UNIX_DataCenterEthernetPort:


*/

#ifndef __UNIX_DATACENTERETHERNETPORT_H
#define __UNIX_DATACENTERETHERNETPORT_H


#include <LLDPEthernetPort/UNIX_LLDPEthernetPort.h>
#include <ConcreteJob/UNIX_ConcreteJob.h>

#include "UNIX_DataCenterEthernetPortDeps.h"


#ifndef PROPERTY_PFC_LINK_DELAY_ALLOWANCE
#define PROPERTY_PFC_LINK_DELAY_ALLOWANCE \
					"PfcLinkDelayAllowance"
#endif

#ifndef PROPERTY_E_T_S_CONFIGURATION_TX_ENABLE
#define PROPERTY_E_T_S_CONFIGURATION_TX_ENABLE \
					"ETSConfigurationTxEnable"
#endif

#ifndef PROPERTY_E_T_S_RECOMMENDATION_TX_ENABLE
#define PROPERTY_E_T_S_RECOMMENDATION_TX_ENABLE \
					"ETSRecommendationTxEnable"
#endif

#ifndef PROPERTY_P_FC_TX_ENABLE
#define PROPERTY_P_FC_TX_ENABLE \
					"PFCTxEnable"
#endif

#ifndef PROPERTY_APPLICATION_PRIORITY_TX_ENABLE
#define PROPERTY_APPLICATION_PRIORITY_TX_ENABLE \
					"ApplicationPriorityTxEnable"
#endif

#ifndef PROPERTY_LOC_E_T_S_CON_CREDIT_BASED_SHAPER_SUPPORT
#define PROPERTY_LOC_E_T_S_CON_CREDIT_BASED_SHAPER_SUPPORT \
					"LocETSConCreditBasedShaperSupport"
#endif

#ifndef PROPERTY_LOC_E_T_S_CON_TRAFFIC_CLASSES_SUPPORTED
#define PROPERTY_LOC_E_T_S_CON_TRAFFIC_CLASSES_SUPPORTED \
					"LocETSConTrafficClassesSupported"
#endif

#ifndef PROPERTY_LOC_E_T_S_CON_WILLING
#define PROPERTY_LOC_E_T_S_CON_WILLING \
					"LocETSConWilling"
#endif

#ifndef PROPERTY_LOC_E_T_S_CON_PRIORITY
#define PROPERTY_LOC_E_T_S_CON_PRIORITY \
					"LocETSConPriority"
#endif

#ifndef PROPERTY_LOC_E_T_S_CON_PRI_TRAFFIC_CLASS
#define PROPERTY_LOC_E_T_S_CON_PRI_TRAFFIC_CLASS \
					"LocETSConPriTrafficClass"
#endif

#ifndef PROPERTY_LOC_E_T_S_CON_TRAFFIC_CLASS
#define PROPERTY_LOC_E_T_S_CON_TRAFFIC_CLASS \
					"LocETSConTrafficClass"
#endif

#ifndef PROPERTY_LOC_E_T_S_CON_TRAFFIC_CLASS_BANDWIDTH
#define PROPERTY_LOC_E_T_S_CON_TRAFFIC_CLASS_BANDWIDTH \
					"LocETSConTrafficClassBandwidth"
#endif

#ifndef PROPERTY_LOC_E_T_S_CON_T_S_A_TRAFFIC_CLASS
#define PROPERTY_LOC_E_T_S_CON_T_S_A_TRAFFIC_CLASS \
					"LocETSConTSATrafficClass"
#endif

#ifndef PROPERTY_LOC_E_T_S_CON_TRAFFIC_SELECTION_ALGORITHM
#define PROPERTY_LOC_E_T_S_CON_TRAFFIC_SELECTION_ALGORITHM \
					"LocETSConTrafficSelectionAlgorithm"
#endif

#ifndef PROPERTY_LOC_E_T_S_RECO_TRAFFIC_CLASS
#define PROPERTY_LOC_E_T_S_RECO_TRAFFIC_CLASS \
					"LocETSRecoTrafficClass"
#endif

#ifndef PROPERTY_LOC_E_T_S_RECO_TRAFFIC_CLASS_BANDWIDTH
#define PROPERTY_LOC_E_T_S_RECO_TRAFFIC_CLASS_BANDWIDTH \
					"LocETSRecoTrafficClassBandwidth"
#endif

#ifndef PROPERTY_LOC_E_T_S_RECO_T_S_A_TRAFFIC_CLASS
#define PROPERTY_LOC_E_T_S_RECO_T_S_A_TRAFFIC_CLASS \
					"LocETSRecoTSATrafficClass"
#endif

#ifndef PROPERTY_LOC_E_T_S_RECO_TRAFFIC_SELECTION_ALGORITHM
#define PROPERTY_LOC_E_T_S_RECO_TRAFFIC_SELECTION_ALGORITHM \
					"LocETSRecoTrafficSelectionAlgorithm"
#endif

#ifndef PROPERTY_LOC_P_FC_WILLING
#define PROPERTY_LOC_P_FC_WILLING \
					"LocPFCWilling"
#endif

#ifndef PROPERTY_LOC_P_FC_M_B_C
#define PROPERTY_LOC_P_FC_M_B_C \
					"LocPFCMBC"
#endif

#ifndef PROPERTY_LOC_P_FC_CAP
#define PROPERTY_LOC_P_FC_CAP \
					"LocPFCCap"
#endif

#ifndef PROPERTY_LOC_P_FC_ENABLE_PRIORITY
#define PROPERTY_LOC_P_FC_ENABLE_PRIORITY \
					"LocPFCEnablePriority"
#endif

#ifndef PROPERTY_LOC_P_FC_ENABLE_ENABLED
#define PROPERTY_LOC_P_FC_ENABLE_ENABLED \
					"LocPFCEnableEnabled"
#endif

#ifndef PROPERTY_LOC_APPLICATION_PRIORITY_A_E_SELECTOR
#define PROPERTY_LOC_APPLICATION_PRIORITY_A_E_SELECTOR \
					"LocApplicationPriorityAESelector"
#endif

#ifndef PROPERTY_LOC_APPLICATION_PRIORITY_A_E_PROTOCOL
#define PROPERTY_LOC_APPLICATION_PRIORITY_A_E_PROTOCOL \
					"LocApplicationPriorityAEProtocol"
#endif

#ifndef PROPERTY_LOC_APPLICATION_PRIORITY_A_E_PRIORITY
#define PROPERTY_LOC_APPLICATION_PRIORITY_A_E_PRIORITY \
					"LocApplicationPriorityAEPriority"
#endif

#ifndef PROPERTY_REM_E_T_S_CON_CREDIT_BASED_SHAPER_SUPPORT
#define PROPERTY_REM_E_T_S_CON_CREDIT_BASED_SHAPER_SUPPORT \
					"RemETSConCreditBasedShaperSupport"
#endif

#ifndef PROPERTY_REM_E_T_S_CON_TRAFFIC_CLASSES_SUPPORTED
#define PROPERTY_REM_E_T_S_CON_TRAFFIC_CLASSES_SUPPORTED \
					"RemETSConTrafficClassesSupported"
#endif

#ifndef PROPERTY_REM_E_T_S_CON_WILLING
#define PROPERTY_REM_E_T_S_CON_WILLING \
					"RemETSConWilling"
#endif

#ifndef PROPERTY_REM_E_T_S_CON_PRIORITY
#define PROPERTY_REM_E_T_S_CON_PRIORITY \
					"RemETSConPriority"
#endif

#ifndef PROPERTY_REM_E_T_S_CON_PRI_TRAFFIC_CLASS
#define PROPERTY_REM_E_T_S_CON_PRI_TRAFFIC_CLASS \
					"RemETSConPriTrafficClass"
#endif

#ifndef PROPERTY_REM_E_T_S_CON_TRAFFIC_CLASS
#define PROPERTY_REM_E_T_S_CON_TRAFFIC_CLASS \
					"RemETSConTrafficClass"
#endif

#ifndef PROPERTY_REM_E_T_S_CON_TRAFFIC_CLASS_BANDWIDTH
#define PROPERTY_REM_E_T_S_CON_TRAFFIC_CLASS_BANDWIDTH \
					"RemETSConTrafficClassBandwidth"
#endif

#ifndef PROPERTY_REM_E_T_S_CON_T_S_A_TRAFFIC_CLASS
#define PROPERTY_REM_E_T_S_CON_T_S_A_TRAFFIC_CLASS \
					"RemETSConTSATrafficClass"
#endif

#ifndef PROPERTY_REM_E_T_S_CON_TRAFFIC_SELECTION_ALGORITHM
#define PROPERTY_REM_E_T_S_CON_TRAFFIC_SELECTION_ALGORITHM \
					"RemETSConTrafficSelectionAlgorithm"
#endif

#ifndef PROPERTY_REM_E_T_S_RECO_TRAFFIC_CLASS
#define PROPERTY_REM_E_T_S_RECO_TRAFFIC_CLASS \
					"RemETSRecoTrafficClass"
#endif

#ifndef PROPERTY_REM_E_T_S_RECO_TRAFFIC_CLASS_BANDWIDTH
#define PROPERTY_REM_E_T_S_RECO_TRAFFIC_CLASS_BANDWIDTH \
					"RemETSRecoTrafficClassBandwidth"
#endif

#ifndef PROPERTY_REM_E_T_S_RECO_T_S_A_TRAFFIC_CLASS
#define PROPERTY_REM_E_T_S_RECO_T_S_A_TRAFFIC_CLASS \
					"RemETSRecoTSATrafficClass"
#endif

#ifndef PROPERTY_REM_E_T_S_RECO_TRAFFIC_SELECTION_ALGORITHM
#define PROPERTY_REM_E_T_S_RECO_TRAFFIC_SELECTION_ALGORITHM \
					"RemETSRecoTrafficSelectionAlgorithm"
#endif

#ifndef PROPERTY_REM_P_FC_WILLING
#define PROPERTY_REM_P_FC_WILLING \
					"RemPFCWilling"
#endif

#ifndef PROPERTY_REM_P_FC_M_B_C
#define PROPERTY_REM_P_FC_M_B_C \
					"RemPFCMBC"
#endif

#ifndef PROPERTY_REM_P_FC_CAP
#define PROPERTY_REM_P_FC_CAP \
					"RemPFCCap"
#endif

#ifndef PROPERTY_REM_P_FC_ENABLE_PRIORITY
#define PROPERTY_REM_P_FC_ENABLE_PRIORITY \
					"RemPFCEnablePriority"
#endif

#ifndef PROPERTY_REM_P_FC_ENABLE_ENABLED
#define PROPERTY_REM_P_FC_ENABLE_ENABLED \
					"RemPFCEnableEnabled"
#endif

#ifndef PROPERTY_REM_APPLICATION_PRIORITY_A_E_SELECTOR
#define PROPERTY_REM_APPLICATION_PRIORITY_A_E_SELECTOR \
					"RemApplicationPriorityAESelector"
#endif

#ifndef PROPERTY_REM_APPLICATION_PRIORITY_A_E_PROTOCOL
#define PROPERTY_REM_APPLICATION_PRIORITY_A_E_PROTOCOL \
					"RemApplicationPriorityAEProtocol"
#endif

#ifndef PROPERTY_REM_APPLICATION_PRIORITY_A_E_PRIORITY
#define PROPERTY_REM_APPLICATION_PRIORITY_A_E_PRIORITY \
					"RemApplicationPriorityAEPriority"
#endif

#ifndef PROPERTY_ADMIN_E_T_S_CON_CREDIT_BASED_SHAPER_SUPPORT
#define PROPERTY_ADMIN_E_T_S_CON_CREDIT_BASED_SHAPER_SUPPORT \
					"AdminETSConCreditBasedShaperSupport"
#endif

#ifndef PROPERTY_ADMIN_E_T_S_CON_TRAFFIC_CLASSES_SUPPORTED
#define PROPERTY_ADMIN_E_T_S_CON_TRAFFIC_CLASSES_SUPPORTED \
					"AdminETSConTrafficClassesSupported"
#endif

#ifndef PROPERTY_ADMIN_E_T_S_CON_WILLING
#define PROPERTY_ADMIN_E_T_S_CON_WILLING \
					"AdminETSConWilling"
#endif

#ifndef PROPERTY_ADMIN_E_T_S_CON_PRIORITY
#define PROPERTY_ADMIN_E_T_S_CON_PRIORITY \
					"AdminETSConPriority"
#endif

#ifndef PROPERTY_ADMIN_E_T_S_CON_PRI_TRAFFIC_CLASS
#define PROPERTY_ADMIN_E_T_S_CON_PRI_TRAFFIC_CLASS \
					"AdminETSConPriTrafficClass"
#endif

#ifndef PROPERTY_ADMIN_E_T_S_CON_TRAFFIC_CLASS
#define PROPERTY_ADMIN_E_T_S_CON_TRAFFIC_CLASS \
					"AdminETSConTrafficClass"
#endif

#ifndef PROPERTY_ADMIN_E_T_S_CON_TRAFFIC_CLASS_BANDWIDTH
#define PROPERTY_ADMIN_E_T_S_CON_TRAFFIC_CLASS_BANDWIDTH \
					"AdminETSConTrafficClassBandwidth"
#endif

#ifndef PROPERTY_ADMIN_E_T_S_CON_T_S_A_TRAFFIC_CLASS
#define PROPERTY_ADMIN_E_T_S_CON_T_S_A_TRAFFIC_CLASS \
					"AdminETSConTSATrafficClass"
#endif

#ifndef PROPERTY_ADMIN_E_T_S_CON_TRAFFIC_SELECTION_ALGORITHM
#define PROPERTY_ADMIN_E_T_S_CON_TRAFFIC_SELECTION_ALGORITHM \
					"AdminETSConTrafficSelectionAlgorithm"
#endif

#ifndef PROPERTY_ADMIN_E_T_S_RECO_TRAFFIC_CLASS
#define PROPERTY_ADMIN_E_T_S_RECO_TRAFFIC_CLASS \
					"AdminETSRecoTrafficClass"
#endif

#ifndef PROPERTY_ADMIN_E_T_S_RECO_TRAFFIC_CLASS_BANDWIDTH
#define PROPERTY_ADMIN_E_T_S_RECO_TRAFFIC_CLASS_BANDWIDTH \
					"AdminETSRecoTrafficClassBandwidth"
#endif

#ifndef PROPERTY_ADMIN_E_T_S_RECO_T_S_A_TRAFFIC_CLASS
#define PROPERTY_ADMIN_E_T_S_RECO_T_S_A_TRAFFIC_CLASS \
					"AdminETSRecoTSATrafficClass"
#endif

#ifndef PROPERTY_ADMIN_E_T_S_RECO_TRAFFIC_SELECTION_ALGORITHM
#define PROPERTY_ADMIN_E_T_S_RECO_TRAFFIC_SELECTION_ALGORITHM \
					"AdminETSRecoTrafficSelectionAlgorithm"
#endif

#ifndef PROPERTY_ADMIN_P_FC_WILLING
#define PROPERTY_ADMIN_P_FC_WILLING \
					"AdminPFCWilling"
#endif

#ifndef PROPERTY_ADMIN_P_FC_M_B_C
#define PROPERTY_ADMIN_P_FC_M_B_C \
					"AdminPFCMBC"
#endif

#ifndef PROPERTY_ADMIN_P_FC_CAP
#define PROPERTY_ADMIN_P_FC_CAP \
					"AdminPFCCap"
#endif

#ifndef PROPERTY_ADMIN_P_FC_ENABLE_PRIORITY
#define PROPERTY_ADMIN_P_FC_ENABLE_PRIORITY \
					"AdminPFCEnablePriority"
#endif

#ifndef PROPERTY_ADMIN_P_FC_ENABLE_ENABLED
#define PROPERTY_ADMIN_P_FC_ENABLE_ENABLED \
					"AdminPFCEnableEnabled"
#endif

#ifndef PROPERTY_ADMIN_APPLICATION_PRIORITY_A_E_SELECTOR
#define PROPERTY_ADMIN_APPLICATION_PRIORITY_A_E_SELECTOR \
					"AdminApplicationPriorityAESelector"
#endif

#ifndef PROPERTY_ADMIN_APPLICATION_PRIORITY_A_E_PROTOCOL
#define PROPERTY_ADMIN_APPLICATION_PRIORITY_A_E_PROTOCOL \
					"AdminApplicationPriorityAEProtocol"
#endif

#ifndef PROPERTY_ADMIN_APPLICATION_PRIORITY_A_E_PRIORITY
#define PROPERTY_ADMIN_APPLICATION_PRIORITY_A_E_PRIORITY \
					"AdminApplicationPriorityAEPriority"
#endif



class UNIX_DataCenterEthernetPort :
	public UNIX_LLDPEthernetPort
{
public:

	UNIX_DataCenterEthernetPort();
	~UNIX_DataCenterEthernetPort();

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
	virtual Boolean getSpeed(CIMProperty&) const;
	virtual Uint64 getSpeed() const;
	virtual void setSpeed(Uint64&);
	virtual Boolean getMaxSpeed(CIMProperty&) const;
	virtual Uint64 getMaxSpeed() const;
	virtual void setMaxSpeed(Uint64&);
	virtual Boolean getRequestedSpeed(CIMProperty&) const;
	virtual Uint64 getRequestedSpeed() const;
	virtual void setRequestedSpeed(Uint64&);
	virtual Boolean getUsageRestriction(CIMProperty&) const;
	virtual Uint16 getUsageRestriction() const;
	virtual void setUsageRestriction(Uint16&);
	virtual Boolean getPortType(CIMProperty&) const;
	virtual Uint16 getPortType() const;
	virtual void setPortType(Uint16&);
	virtual Boolean getOtherPortType(CIMProperty&) const;
	virtual String getOtherPortType() const;
	virtual void setOtherPortType(String&);
	virtual Boolean getOtherNetworkPortType(CIMProperty&) const;
	virtual String getOtherNetworkPortType() const;
	virtual void setOtherNetworkPortType(String&);
	virtual Boolean getPortNumber(CIMProperty&) const;
	virtual Uint16 getPortNumber() const;
	virtual void setPortNumber(Uint16&);
	virtual Boolean getLinkTechnology(CIMProperty&) const;
	virtual Uint16 getLinkTechnology() const;
	virtual void setLinkTechnology(Uint16&);
	virtual Boolean getOtherLinkTechnology(CIMProperty&) const;
	virtual String getOtherLinkTechnology() const;
	virtual void setOtherLinkTechnology(String&);
	virtual Boolean getPermanentAddress(CIMProperty&) const;
	virtual String getPermanentAddress() const;
	virtual void setPermanentAddress(String&);
	virtual Boolean getNetworkAddresses(CIMProperty&) const;
	virtual Array<String> getNetworkAddresses() const;
	virtual void setNetworkAddresses(Array<String>&);
	virtual Boolean getFullDuplex(CIMProperty&) const;
	virtual Boolean getFullDuplex() const;
	virtual void setFullDuplex(Boolean&);
	virtual Boolean getAutoSense(CIMProperty&) const;
	virtual Boolean getAutoSense() const;
	virtual void setAutoSense(Boolean&);
	virtual Boolean getSupportedMaximumTransmissionUnit(CIMProperty&) const;
	virtual Uint64 getSupportedMaximumTransmissionUnit() const;
	virtual void setSupportedMaximumTransmissionUnit(Uint64&);
	virtual Boolean getActiveMaximumTransmissionUnit(CIMProperty&) const;
	virtual Uint64 getActiveMaximumTransmissionUnit() const;
	virtual void setActiveMaximumTransmissionUnit(Uint64&);
	virtual Boolean getMaxDataSize(CIMProperty&) const;
	virtual Uint32 getMaxDataSize() const;
	virtual void setMaxDataSize(Uint32&);
	virtual Boolean getCapabilities(CIMProperty&) const;
	virtual Array<Uint16> getCapabilities() const;
	virtual void setCapabilities(Array<Uint16>&);
	virtual Boolean getCapabilityDescriptions(CIMProperty&) const;
	virtual Array<String> getCapabilityDescriptions() const;
	virtual void setCapabilityDescriptions(Array<String>&);
	virtual Boolean getEnabledCapabilities(CIMProperty&) const;
	virtual Array<Uint16> getEnabledCapabilities() const;
	virtual void setEnabledCapabilities(Array<Uint16>&);
	virtual Boolean getOtherEnabledCapabilities(CIMProperty&) const;
	virtual Array<String> getOtherEnabledCapabilities() const;
	virtual void setOtherEnabledCapabilities(Array<String>&);
	virtual Boolean getPortDiscriminator(CIMProperty&) const;
	virtual Array<String> getPortDiscriminator() const;
	virtual void setPortDiscriminator(Array<String>&);
	virtual Boolean getPVID(CIMProperty&) const;
	virtual Uint16 getPVID() const;
	virtual void setPVID(Uint16&);
	virtual Boolean getPoEPowerEntityType(CIMProperty&) const;
	virtual Uint16 getPoEPowerEntityType() const;
	virtual void setPoEPowerEntityType(Uint16&);
	virtual Boolean getConfigPortVlanTxEnable(CIMProperty&) const;
	virtual Boolean getConfigPortVlanTxEnable() const;
	virtual void setConfigPortVlanTxEnable(Boolean&);
	virtual Boolean getConfigManVidTxEnable(CIMProperty&) const;
	virtual Boolean getConfigManVidTxEnable() const;
	virtual void setConfigManVidTxEnable(Boolean&);
	virtual Boolean getMessageTxInterval(CIMProperty&) const;
	virtual Uint16 getMessageTxInterval() const;
	virtual void setMessageTxInterval(Uint16&);
	virtual Boolean getMessageTxHoldMultiplier(CIMProperty&) const;
	virtual Uint8 getMessageTxHoldMultiplier() const;
	virtual void setMessageTxHoldMultiplier(Uint8&);
	virtual Boolean getReinitDelay(CIMProperty&) const;
	virtual Uint8 getReinitDelay() const;
	virtual void setReinitDelay(Uint8&);
	virtual Boolean getNotificationInterval(CIMProperty&) const;
	virtual Uint16 getNotificationInterval() const;
	virtual void setNotificationInterval(Uint16&);
	virtual Boolean getTxCreditMax(CIMProperty&) const;
	virtual Uint8 getTxCreditMax() const;
	virtual void setTxCreditMax(Uint8&);
	virtual Boolean getMessageFastTx(CIMProperty&) const;
	virtual Uint16 getMessageFastTx() const;
	virtual void setMessageFastTx(Uint16&);
	virtual Boolean getTxFastInit(CIMProperty&) const;
	virtual Uint8 getTxFastInit() const;
	virtual void setTxFastInit(Uint8&);
	virtual Boolean getDestMacAddress(CIMProperty&) const;
	virtual Array<String> getDestMacAddress() const;
	virtual void setDestMacAddress(Array<String>&);
	virtual Boolean getPortConfigAdminStatus(CIMProperty&) const;
	virtual Array<Uint8> getPortConfigAdminStatus() const;
	virtual void setPortConfigAdminStatus(Array<Uint8>&);
	virtual Boolean getPortConfigNotificationEnable(CIMProperty&) const;
	virtual Array<Boolean> getPortConfigNotificationEnable() const;
	virtual void setPortConfigNotificationEnable(Array<Boolean>&);
	virtual Boolean getPortConfigPortDescriptionTLVTxEnable(CIMProperty&) const;
	virtual Array<Boolean> getPortConfigPortDescriptionTLVTxEnable() const;
	virtual void setPortConfigPortDescriptionTLVTxEnable(Array<Boolean>&);
	virtual Boolean getPortConfigSystemNameTLVTxEnable(CIMProperty&) const;
	virtual Array<Boolean> getPortConfigSystemNameTLVTxEnable() const;
	virtual void setPortConfigSystemNameTLVTxEnable(Array<Boolean>&);
	virtual Boolean getPortConfigSystemDescriptionTLVTxEnable(CIMProperty&) const;
	virtual Array<Boolean> getPortConfigSystemDescriptionTLVTxEnable() const;
	virtual void setPortConfigSystemDescriptionTLVTxEnable(Array<Boolean>&);
	virtual Boolean getPortConfigSystemCapabilitiesTLVTxEnable(CIMProperty&) const;
	virtual Array<Boolean> getPortConfigSystemCapabilitiesTLVTxEnable() const;
	virtual void setPortConfigSystemCapabilitiesTLVTxEnable(Array<Boolean>&);
	virtual Boolean getManAddrConfigDestAddress(CIMProperty&) const;
	virtual Array<String> getManAddrConfigDestAddress() const;
	virtual void setManAddrConfigDestAddress(Array<String>&);
	virtual Boolean getManAddrConfigLocManAddrSubtype(CIMProperty&) const;
	virtual Array<Uint16> getManAddrConfigLocManAddrSubtype() const;
	virtual void setManAddrConfigLocManAddrSubtype(Array<Uint16>&);
	virtual Boolean getManAddrConfigLocManAddr(CIMProperty&) const;
	virtual Array<String> getManAddrConfigLocManAddr() const;
	virtual void setManAddrConfigLocManAddr(Array<String>&);
	virtual Boolean getManAddrConfigTxEnable(CIMProperty&) const;
	virtual Array<Boolean> getManAddrConfigTxEnable() const;
	virtual void setManAddrConfigTxEnable(Array<Boolean>&);
	virtual Boolean getLocChassisIdSubtype(CIMProperty&) const;
	virtual Uint8 getLocChassisIdSubtype() const;
	virtual void setLocChassisIdSubtype(Uint8&);
	virtual Boolean getLocChassisId(CIMProperty&) const;
	virtual String getLocChassisId() const;
	virtual void setLocChassisId(String&);
	virtual Boolean getLocSysName(CIMProperty&) const;
	virtual String getLocSysName() const;
	virtual void setLocSysName(String&);
	virtual Boolean getLocSysDesc(CIMProperty&) const;
	virtual String getLocSysDesc() const;
	virtual void setLocSysDesc(String&);
	virtual Boolean getLocSysCapSupported(CIMProperty&) const;
	virtual Array<Uint8> getLocSysCapSupported() const;
	virtual void setLocSysCapSupported(Array<Uint8>&);
	virtual Boolean getLocSysCapEnabled(CIMProperty&) const;
	virtual Array<Boolean> getLocSysCapEnabled() const;
	virtual void setLocSysCapEnabled(Array<Boolean>&);
	virtual Boolean getLocPortIdSubtype(CIMProperty&) const;
	virtual Uint8 getLocPortIdSubtype() const;
	virtual void setLocPortIdSubtype(Uint8&);
	virtual Boolean getLocPortID(CIMProperty&) const;
	virtual String getLocPortID() const;
	virtual void setLocPortID(String&);
	virtual Boolean getLocPortDesc(CIMProperty&) const;
	virtual String getLocPortDesc() const;
	virtual void setLocPortDesc(String&);
	virtual Boolean getLocTxSystemValue(CIMProperty&) const;
	virtual Uint16 getLocTxSystemValue() const;
	virtual void setLocTxSystemValue(Uint16&);
	virtual Boolean getRemTxSystemValueEcho(CIMProperty&) const;
	virtual Uint16 getRemTxSystemValueEcho() const;
	virtual void setRemTxSystemValueEcho(Uint16&);
	virtual Boolean getLocRxSystemValue(CIMProperty&) const;
	virtual Uint16 getLocRxSystemValue() const;
	virtual void setLocRxSystemValue(Uint16&);
	virtual Boolean getRemRxSystemValueEcho(CIMProperty&) const;
	virtual Uint16 getRemRxSystemValueEcho() const;
	virtual void setRemRxSystemValueEcho(Uint16&);
	virtual Boolean getLocFbSystemValue(CIMProperty&) const;
	virtual Uint16 getLocFbSystemValue() const;
	virtual void setLocFbSystemValue(Uint16&);
	virtual Boolean getRemTxSystemValue(CIMProperty&) const;
	virtual Uint16 getRemTxSystemValue() const;
	virtual void setRemTxSystemValue(Uint16&);
	virtual Boolean getLocTxSystemValueEcho(CIMProperty&) const;
	virtual Uint16 getLocTxSystemValueEcho() const;
	virtual void setLocTxSystemValueEcho(Uint16&);
	virtual Boolean getRemRxSystemValue(CIMProperty&) const;
	virtual Uint16 getRemRxSystemValue() const;
	virtual void setRemRxSystemValue(Uint16&);
	virtual Boolean getLocRxSystemValueEcho(CIMProperty&) const;
	virtual Uint16 getLocRxSystemValueEcho() const;
	virtual void setLocRxSystemValueEcho(Uint16&);
	virtual Boolean getLocResolvedTxSystemValue(CIMProperty&) const;
	virtual Uint16 getLocResolvedTxSystemValue() const;
	virtual void setLocResolvedTxSystemValue(Uint16&);
	virtual Boolean getLocResolvedRxSystemValue(CIMProperty&) const;
	virtual Uint16 getLocResolvedRxSystemValue() const;
	virtual void setLocResolvedRxSystemValue(Uint16&);
	virtual Boolean getMaximumFrameSizeTLVEnabled(CIMProperty&) const;
	virtual Boolean getMaximumFrameSizeTLVEnabled() const;
	virtual void setMaximumFrameSizeTLVEnabled(Boolean&);
	virtual Boolean getLocManAddrSubType(CIMProperty&) const;
	virtual Array<Uint16> getLocManAddrSubType() const;
	virtual void setLocManAddrSubType(Array<Uint16>&);
	virtual Boolean getLocManAddr(CIMProperty&) const;
	virtual Array<String> getLocManAddr() const;
	virtual void setLocManAddr(Array<String>&);
	virtual Boolean getLocManAddrIfSubtype(CIMProperty&) const;
	virtual Array<Uint16> getLocManAddrIfSubtype() const;
	virtual void setLocManAddrIfSubtype(Array<Uint16>&);
	virtual Boolean getLocManAddrIfId(CIMProperty&) const;
	virtual Array<Uint32> getLocManAddrIfId() const;
	virtual void setLocManAddrIfId(Array<Uint32>&);
	virtual Boolean getRemLocalDestMacAddress(CIMProperty&) const;
	virtual Array<String> getRemLocalDestMacAddress() const;
	virtual void setRemLocalDestMacAddress(Array<String>&);
	virtual Boolean getRemManAddrSubType(CIMProperty&) const;
	virtual Array<Uint16> getRemManAddrSubType() const;
	virtual void setRemManAddrSubType(Array<Uint16>&);
	virtual Boolean getRemManAddr(CIMProperty&) const;
	virtual Array<String> getRemManAddr() const;
	virtual void setRemManAddr(Array<String>&);
	virtual Boolean getRemManAddrIfSubtype(CIMProperty&) const;
	virtual Array<Uint16> getRemManAddrIfSubtype() const;
	virtual void setRemManAddrIfSubtype(Array<Uint16>&);
	virtual Boolean getRemManAddrIfId(CIMProperty&) const;
	virtual Array<Uint32> getRemManAddrIfId() const;
	virtual void setRemManAddrIfId(Array<Uint32>&);
	virtual Boolean getRemChassisIdSubtype(CIMProperty&) const;
	virtual Array<Uint8> getRemChassisIdSubtype() const;
	virtual void setRemChassisIdSubtype(Array<Uint8>&);
	virtual Boolean getRemChassisId(CIMProperty&) const;
	virtual Array<String> getRemChassisId() const;
	virtual void setRemChassisId(Array<String>&);
	virtual Boolean getRemSysName(CIMProperty&) const;
	virtual Array<String> getRemSysName() const;
	virtual void setRemSysName(Array<String>&);
	virtual Boolean getRemSysDesc(CIMProperty&) const;
	virtual Array<String> getRemSysDesc() const;
	virtual void setRemSysDesc(Array<String>&);
	virtual Boolean getRemSysCapSupported(CIMProperty&) const;
	virtual Array<Uint8> getRemSysCapSupported() const;
	virtual void setRemSysCapSupported(Array<Uint8>&);
	virtual Boolean getRemSysCapEnabled(CIMProperty&) const;
	virtual Array<Boolean> getRemSysCapEnabled() const;
	virtual void setRemSysCapEnabled(Array<Boolean>&);
	virtual Boolean getRemPortIdSubtype(CIMProperty&) const;
	virtual Array<Uint8> getRemPortIdSubtype() const;
	virtual void setRemPortIdSubtype(Array<Uint8>&);
	virtual Boolean getRemPortID(CIMProperty&) const;
	virtual Array<String> getRemPortID() const;
	virtual void setRemPortID(Array<String>&);
	virtual Boolean getRemPortDesc(CIMProperty&) const;
	virtual Array<String> getRemPortDesc() const;
	virtual void setRemPortDesc(Array<String>&);
	virtual Boolean getPfcLinkDelayAllowance(CIMProperty&) const;
	virtual Uint32 getPfcLinkDelayAllowance() const;
	virtual void setPfcLinkDelayAllowance(Uint32&);
	virtual Boolean getETSConfigurationTxEnable(CIMProperty&) const;
	virtual Boolean getETSConfigurationTxEnable() const;
	virtual void setETSConfigurationTxEnable(Boolean&);
	virtual Boolean getETSRecommendationTxEnable(CIMProperty&) const;
	virtual Boolean getETSRecommendationTxEnable() const;
	virtual void setETSRecommendationTxEnable(Boolean&);
	virtual Boolean getPFCTxEnable(CIMProperty&) const;
	virtual Boolean getPFCTxEnable() const;
	virtual void setPFCTxEnable(Boolean&);
	virtual Boolean getApplicationPriorityTxEnable(CIMProperty&) const;
	virtual Boolean getApplicationPriorityTxEnable() const;
	virtual void setApplicationPriorityTxEnable(Boolean&);
	virtual Boolean getLocETSConCreditBasedShaperSupport(CIMProperty&) const;
	virtual Boolean getLocETSConCreditBasedShaperSupport() const;
	virtual void setLocETSConCreditBasedShaperSupport(Boolean&);
	virtual Boolean getLocETSConTrafficClassesSupported(CIMProperty&) const;
	virtual Uint8 getLocETSConTrafficClassesSupported() const;
	virtual void setLocETSConTrafficClassesSupported(Uint8&);
	virtual Boolean getLocETSConWilling(CIMProperty&) const;
	virtual Boolean getLocETSConWilling() const;
	virtual void setLocETSConWilling(Boolean&);
	virtual Boolean getLocETSConPriority(CIMProperty&) const;
	virtual Array<Uint8> getLocETSConPriority() const;
	virtual void setLocETSConPriority(Array<Uint8>&);
	virtual Boolean getLocETSConPriTrafficClass(CIMProperty&) const;
	virtual Array<Uint8> getLocETSConPriTrafficClass() const;
	virtual void setLocETSConPriTrafficClass(Array<Uint8>&);
	virtual Boolean getLocETSConTrafficClass(CIMProperty&) const;
	virtual Array<Uint8> getLocETSConTrafficClass() const;
	virtual void setLocETSConTrafficClass(Array<Uint8>&);
	virtual Boolean getLocETSConTrafficClassBandwidth(CIMProperty&) const;
	virtual Array<Uint8> getLocETSConTrafficClassBandwidth() const;
	virtual void setLocETSConTrafficClassBandwidth(Array<Uint8>&);
	virtual Boolean getLocETSConTSATrafficClass(CIMProperty&) const;
	virtual Array<Uint8> getLocETSConTSATrafficClass() const;
	virtual void setLocETSConTSATrafficClass(Array<Uint8>&);
	virtual Boolean getLocETSConTrafficSelectionAlgorithm(CIMProperty&) const;
	virtual Array<Uint8> getLocETSConTrafficSelectionAlgorithm() const;
	virtual void setLocETSConTrafficSelectionAlgorithm(Array<Uint8>&);
	virtual Boolean getLocETSRecoTrafficClass(CIMProperty&) const;
	virtual Array<Uint8> getLocETSRecoTrafficClass() const;
	virtual void setLocETSRecoTrafficClass(Array<Uint8>&);
	virtual Boolean getLocETSRecoTrafficClassBandwidth(CIMProperty&) const;
	virtual Array<Uint64> getLocETSRecoTrafficClassBandwidth() const;
	virtual void setLocETSRecoTrafficClassBandwidth(Array<Uint64>&);
	virtual Boolean getLocETSRecoTSATrafficClass(CIMProperty&) const;
	virtual Array<Uint8> getLocETSRecoTSATrafficClass() const;
	virtual void setLocETSRecoTSATrafficClass(Array<Uint8>&);
	virtual Boolean getLocETSRecoTrafficSelectionAlgorithm(CIMProperty&) const;
	virtual Array<Uint8> getLocETSRecoTrafficSelectionAlgorithm() const;
	virtual void setLocETSRecoTrafficSelectionAlgorithm(Array<Uint8>&);
	virtual Boolean getLocPFCWilling(CIMProperty&) const;
	virtual Boolean getLocPFCWilling() const;
	virtual void setLocPFCWilling(Boolean&);
	virtual Boolean getLocPFCMBC(CIMProperty&) const;
	virtual Boolean getLocPFCMBC() const;
	virtual void setLocPFCMBC(Boolean&);
	virtual Boolean getLocPFCCap(CIMProperty&) const;
	virtual Uint8 getLocPFCCap() const;
	virtual void setLocPFCCap(Uint8&);
	virtual Boolean getLocPFCEnablePriority(CIMProperty&) const;
	virtual Array<Uint8> getLocPFCEnablePriority() const;
	virtual void setLocPFCEnablePriority(Array<Uint8>&);
	virtual Boolean getLocPFCEnableEnabled(CIMProperty&) const;
	virtual Array<Boolean> getLocPFCEnableEnabled() const;
	virtual void setLocPFCEnableEnabled(Array<Boolean>&);
	virtual Boolean getLocApplicationPriorityAESelector(CIMProperty&) const;
	virtual Array<Uint16> getLocApplicationPriorityAESelector() const;
	virtual void setLocApplicationPriorityAESelector(Array<Uint16>&);
	virtual Boolean getLocApplicationPriorityAEProtocol(CIMProperty&) const;
	virtual Array<Uint16> getLocApplicationPriorityAEProtocol() const;
	virtual void setLocApplicationPriorityAEProtocol(Array<Uint16>&);
	virtual Boolean getLocApplicationPriorityAEPriority(CIMProperty&) const;
	virtual Array<Uint8> getLocApplicationPriorityAEPriority() const;
	virtual void setLocApplicationPriorityAEPriority(Array<Uint8>&);
	virtual Boolean getRemETSConCreditBasedShaperSupport(CIMProperty&) const;
	virtual Boolean getRemETSConCreditBasedShaperSupport() const;
	virtual void setRemETSConCreditBasedShaperSupport(Boolean&);
	virtual Boolean getRemETSConTrafficClassesSupported(CIMProperty&) const;
	virtual Uint8 getRemETSConTrafficClassesSupported() const;
	virtual void setRemETSConTrafficClassesSupported(Uint8&);
	virtual Boolean getRemETSConWilling(CIMProperty&) const;
	virtual Boolean getRemETSConWilling() const;
	virtual void setRemETSConWilling(Boolean&);
	virtual Boolean getRemETSConPriority(CIMProperty&) const;
	virtual Array<Uint8> getRemETSConPriority() const;
	virtual void setRemETSConPriority(Array<Uint8>&);
	virtual Boolean getRemETSConPriTrafficClass(CIMProperty&) const;
	virtual Array<Uint8> getRemETSConPriTrafficClass() const;
	virtual void setRemETSConPriTrafficClass(Array<Uint8>&);
	virtual Boolean getRemETSConTrafficClass(CIMProperty&) const;
	virtual Array<Uint8> getRemETSConTrafficClass() const;
	virtual void setRemETSConTrafficClass(Array<Uint8>&);
	virtual Boolean getRemETSConTrafficClassBandwidth(CIMProperty&) const;
	virtual Array<Uint8> getRemETSConTrafficClassBandwidth() const;
	virtual void setRemETSConTrafficClassBandwidth(Array<Uint8>&);
	virtual Boolean getRemETSConTSATrafficClass(CIMProperty&) const;
	virtual Array<Uint8> getRemETSConTSATrafficClass() const;
	virtual void setRemETSConTSATrafficClass(Array<Uint8>&);
	virtual Boolean getRemETSConTrafficSelectionAlgorithm(CIMProperty&) const;
	virtual Array<Uint8> getRemETSConTrafficSelectionAlgorithm() const;
	virtual void setRemETSConTrafficSelectionAlgorithm(Array<Uint8>&);
	virtual Boolean getRemETSRecoTrafficClass(CIMProperty&) const;
	virtual Array<Uint8> getRemETSRecoTrafficClass() const;
	virtual void setRemETSRecoTrafficClass(Array<Uint8>&);
	virtual Boolean getRemETSRecoTrafficClassBandwidth(CIMProperty&) const;
	virtual Array<Uint64> getRemETSRecoTrafficClassBandwidth() const;
	virtual void setRemETSRecoTrafficClassBandwidth(Array<Uint64>&);
	virtual Boolean getRemETSRecoTSATrafficClass(CIMProperty&) const;
	virtual Array<Uint8> getRemETSRecoTSATrafficClass() const;
	virtual void setRemETSRecoTSATrafficClass(Array<Uint8>&);
	virtual Boolean getRemETSRecoTrafficSelectionAlgorithm(CIMProperty&) const;
	virtual Array<Uint8> getRemETSRecoTrafficSelectionAlgorithm() const;
	virtual void setRemETSRecoTrafficSelectionAlgorithm(Array<Uint8>&);
	virtual Boolean getRemPFCWilling(CIMProperty&) const;
	virtual Boolean getRemPFCWilling() const;
	virtual void setRemPFCWilling(Boolean&);
	virtual Boolean getRemPFCMBC(CIMProperty&) const;
	virtual Boolean getRemPFCMBC() const;
	virtual void setRemPFCMBC(Boolean&);
	virtual Boolean getRemPFCCap(CIMProperty&) const;
	virtual Uint8 getRemPFCCap() const;
	virtual void setRemPFCCap(Uint8&);
	virtual Boolean getRemPFCEnablePriority(CIMProperty&) const;
	virtual Array<Uint8> getRemPFCEnablePriority() const;
	virtual void setRemPFCEnablePriority(Array<Uint8>&);
	virtual Boolean getRemPFCEnableEnabled(CIMProperty&) const;
	virtual Array<Boolean> getRemPFCEnableEnabled() const;
	virtual void setRemPFCEnableEnabled(Array<Boolean>&);
	virtual Boolean getRemApplicationPriorityAESelector(CIMProperty&) const;
	virtual Array<Uint16> getRemApplicationPriorityAESelector() const;
	virtual void setRemApplicationPriorityAESelector(Array<Uint16>&);
	virtual Boolean getRemApplicationPriorityAEProtocol(CIMProperty&) const;
	virtual Array<Uint16> getRemApplicationPriorityAEProtocol() const;
	virtual void setRemApplicationPriorityAEProtocol(Array<Uint16>&);
	virtual Boolean getRemApplicationPriorityAEPriority(CIMProperty&) const;
	virtual Array<Uint8> getRemApplicationPriorityAEPriority() const;
	virtual void setRemApplicationPriorityAEPriority(Array<Uint8>&);
	virtual Boolean getAdminETSConCreditBasedShaperSupport(CIMProperty&) const;
	virtual Boolean getAdminETSConCreditBasedShaperSupport() const;
	virtual void setAdminETSConCreditBasedShaperSupport(Boolean&);
	virtual Boolean getAdminETSConTrafficClassesSupported(CIMProperty&) const;
	virtual Uint8 getAdminETSConTrafficClassesSupported() const;
	virtual void setAdminETSConTrafficClassesSupported(Uint8&);
	virtual Boolean getAdminETSConWilling(CIMProperty&) const;
	virtual Boolean getAdminETSConWilling() const;
	virtual void setAdminETSConWilling(Boolean&);
	virtual Boolean getAdminETSConPriority(CIMProperty&) const;
	virtual Array<Uint8> getAdminETSConPriority() const;
	virtual void setAdminETSConPriority(Array<Uint8>&);
	virtual Boolean getAdminETSConPriTrafficClass(CIMProperty&) const;
	virtual Array<Uint8> getAdminETSConPriTrafficClass() const;
	virtual void setAdminETSConPriTrafficClass(Array<Uint8>&);
	virtual Boolean getAdminETSConTrafficClass(CIMProperty&) const;
	virtual Array<Uint8> getAdminETSConTrafficClass() const;
	virtual void setAdminETSConTrafficClass(Array<Uint8>&);
	virtual Boolean getAdminETSConTrafficClassBandwidth(CIMProperty&) const;
	virtual Array<Uint8> getAdminETSConTrafficClassBandwidth() const;
	virtual void setAdminETSConTrafficClassBandwidth(Array<Uint8>&);
	virtual Boolean getAdminETSConTSATrafficClass(CIMProperty&) const;
	virtual Array<Uint8> getAdminETSConTSATrafficClass() const;
	virtual void setAdminETSConTSATrafficClass(Array<Uint8>&);
	virtual Boolean getAdminETSConTrafficSelectionAlgorithm(CIMProperty&) const;
	virtual Array<Uint8> getAdminETSConTrafficSelectionAlgorithm() const;
	virtual void setAdminETSConTrafficSelectionAlgorithm(Array<Uint8>&);
	virtual Boolean getAdminETSRecoTrafficClass(CIMProperty&) const;
	virtual Array<Uint8> getAdminETSRecoTrafficClass() const;
	virtual void setAdminETSRecoTrafficClass(Array<Uint8>&);
	virtual Boolean getAdminETSRecoTrafficClassBandwidth(CIMProperty&) const;
	virtual Array<Uint64> getAdminETSRecoTrafficClassBandwidth() const;
	virtual void setAdminETSRecoTrafficClassBandwidth(Array<Uint64>&);
	virtual Boolean getAdminETSRecoTSATrafficClass(CIMProperty&) const;
	virtual Array<Uint8> getAdminETSRecoTSATrafficClass() const;
	virtual void setAdminETSRecoTSATrafficClass(Array<Uint8>&);
	virtual Boolean getAdminETSRecoTrafficSelectionAlgorithm(CIMProperty&) const;
	virtual Array<Uint8> getAdminETSRecoTrafficSelectionAlgorithm() const;
	virtual void setAdminETSRecoTrafficSelectionAlgorithm(Array<Uint8>&);
	virtual Boolean getAdminPFCWilling(CIMProperty&) const;
	virtual Boolean getAdminPFCWilling() const;
	virtual void setAdminPFCWilling(Boolean&);
	virtual Boolean getAdminPFCMBC(CIMProperty&) const;
	virtual Boolean getAdminPFCMBC() const;
	virtual void setAdminPFCMBC(Boolean&);
	virtual Boolean getAdminPFCCap(CIMProperty&) const;
	virtual Uint8 getAdminPFCCap() const;
	virtual void setAdminPFCCap(Uint8&);
	virtual Boolean getAdminPFCEnablePriority(CIMProperty&) const;
	virtual Array<Uint8> getAdminPFCEnablePriority() const;
	virtual void setAdminPFCEnablePriority(Array<Uint8>&);
	virtual Boolean getAdminPFCEnableEnabled(CIMProperty&) const;
	virtual Array<Boolean> getAdminPFCEnableEnabled() const;
	virtual void setAdminPFCEnableEnabled(Array<Boolean>&);
	virtual Boolean getAdminApplicationPriorityAESelector(CIMProperty&) const;
	virtual Array<Uint16> getAdminApplicationPriorityAESelector() const;
	virtual void setAdminApplicationPriorityAESelector(Array<Uint16>&);
	virtual Boolean getAdminApplicationPriorityAEProtocol(CIMProperty&) const;
	virtual Array<Uint16> getAdminApplicationPriorityAEProtocol() const;
	virtual void setAdminApplicationPriorityAEProtocol(Array<Uint16>&);
	virtual Boolean getAdminApplicationPriorityAEPriority(CIMProperty&) const;
	virtual Array<Uint8> getAdminApplicationPriorityAEPriority() const;
	virtual void setAdminApplicationPriorityAEPriority(Array<Uint8>&);

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
	Uint64 _speed;
	Uint64 _maxSpeed;
	Uint64 _requestedSpeed;
	Uint16 _usageRestriction;
	Uint16 _portType;
	String _otherPortType;
	String _otherNetworkPortType;
	Uint16 _portNumber;
	Uint16 _linkTechnology;
	String _otherLinkTechnology;
	String _permanentAddress;
	Array<String> _networkAddresses;
	Boolean _fullDuplex;
	Boolean _autoSense;
	Uint64 _supportedMaximumTransmissionUnit;
	Uint64 _activeMaximumTransmissionUnit;
	Uint32 _maxDataSize;
	Array<Uint16> _capabilities;
	Array<String> _capabilityDescriptions;
	Array<Uint16> _enabledCapabilities;
	Array<String> _otherEnabledCapabilities;
	Array<String> _portDiscriminator;
	Uint16 _pVID;
	Uint16 _poEPowerEntityType;
	Boolean _configPortVlanTxEnable;
	Boolean _configManVidTxEnable;
	Uint16 _messageTxInterval;
	Uint8 _messageTxHoldMultiplier;
	Uint8 _reinitDelay;
	Uint16 _notificationInterval;
	Uint8 _txCreditMax;
	Uint16 _messageFastTx;
	Uint8 _txFastInit;
	Array<String> _destMacAddress;
	Array<Uint8> _portConfigAdminStatus;
	Array<Boolean> _portConfigNotificationEnable;
	Array<Boolean> _portConfigPortDescriptionTLVTxEnable;
	Array<Boolean> _portConfigSystemNameTLVTxEnable;
	Array<Boolean> _portConfigSystemDescriptionTLVTxEnable;
	Array<Boolean> _portConfigSystemCapabilitiesTLVTxEnable;
	Array<String> _manAddrConfigDestAddress;
	Array<Uint16> _manAddrConfigLocManAddrSubtype;
	Array<String> _manAddrConfigLocManAddr;
	Array<Boolean> _manAddrConfigTxEnable;
	Uint8 _locChassisIdSubtype;
	String _locChassisId;
	String _locSysName;
	String _locSysDesc;
	Array<Uint8> _locSysCapSupported;
	Array<Boolean> _locSysCapEnabled;
	Uint8 _locPortIdSubtype;
	String _locPortID;
	String _locPortDesc;
	Uint16 _locTxSystemValue;
	Uint16 _remTxSystemValueEcho;
	Uint16 _locRxSystemValue;
	Uint16 _remRxSystemValueEcho;
	Uint16 _locFbSystemValue;
	Uint16 _remTxSystemValue;
	Uint16 _locTxSystemValueEcho;
	Uint16 _remRxSystemValue;
	Uint16 _locRxSystemValueEcho;
	Uint16 _locResolvedTxSystemValue;
	Uint16 _locResolvedRxSystemValue;
	Boolean _maximumFrameSizeTLVEnabled;
	Array<Uint16> _locManAddrSubType;
	Array<String> _locManAddr;
	Array<Uint16> _locManAddrIfSubtype;
	Array<Uint32> _locManAddrIfId;
	Array<String> _remLocalDestMacAddress;
	Array<Uint16> _remManAddrSubType;
	Array<String> _remManAddr;
	Array<Uint16> _remManAddrIfSubtype;
	Array<Uint32> _remManAddrIfId;
	Array<Uint8> _remChassisIdSubtype;
	Array<String> _remChassisId;
	Array<String> _remSysName;
	Array<String> _remSysDesc;
	Array<Uint8> _remSysCapSupported;
	Array<Boolean> _remSysCapEnabled;
	Array<Uint8> _remPortIdSubtype;
	Array<String> _remPortID;
	Array<String> _remPortDesc;
	Uint32 _pfcLinkDelayAllowance;
	Boolean _eTSConfigurationTxEnable;
	Boolean _eTSRecommendationTxEnable;
	Boolean _pFCTxEnable;
	Boolean _applicationPriorityTxEnable;
	Boolean _locETSConCreditBasedShaperSupport;
	Uint8 _locETSConTrafficClassesSupported;
	Boolean _locETSConWilling;
	Array<Uint8> _locETSConPriority;
	Array<Uint8> _locETSConPriTrafficClass;
	Array<Uint8> _locETSConTrafficClass;
	Array<Uint8> _locETSConTrafficClassBandwidth;
	Array<Uint8> _locETSConTSATrafficClass;
	Array<Uint8> _locETSConTrafficSelectionAlgorithm;
	Array<Uint8> _locETSRecoTrafficClass;
	Array<Uint64> _locETSRecoTrafficClassBandwidth;
	Array<Uint8> _locETSRecoTSATrafficClass;
	Array<Uint8> _locETSRecoTrafficSelectionAlgorithm;
	Boolean _locPFCWilling;
	Boolean _locPFCMBC;
	Uint8 _locPFCCap;
	Array<Uint8> _locPFCEnablePriority;
	Array<Boolean> _locPFCEnableEnabled;
	Array<Uint16> _locApplicationPriorityAESelector;
	Array<Uint16> _locApplicationPriorityAEProtocol;
	Array<Uint8> _locApplicationPriorityAEPriority;
	Boolean _remETSConCreditBasedShaperSupport;
	Uint8 _remETSConTrafficClassesSupported;
	Boolean _remETSConWilling;
	Array<Uint8> _remETSConPriority;
	Array<Uint8> _remETSConPriTrafficClass;
	Array<Uint8> _remETSConTrafficClass;
	Array<Uint8> _remETSConTrafficClassBandwidth;
	Array<Uint8> _remETSConTSATrafficClass;
	Array<Uint8> _remETSConTrafficSelectionAlgorithm;
	Array<Uint8> _remETSRecoTrafficClass;
	Array<Uint64> _remETSRecoTrafficClassBandwidth;
	Array<Uint8> _remETSRecoTSATrafficClass;
	Array<Uint8> _remETSRecoTrafficSelectionAlgorithm;
	Boolean _remPFCWilling;
	Boolean _remPFCMBC;
	Uint8 _remPFCCap;
	Array<Uint8> _remPFCEnablePriority;
	Array<Boolean> _remPFCEnableEnabled;
	Array<Uint16> _remApplicationPriorityAESelector;
	Array<Uint16> _remApplicationPriorityAEProtocol;
	Array<Uint8> _remApplicationPriorityAEPriority;
	Boolean _adminETSConCreditBasedShaperSupport;
	Uint8 _adminETSConTrafficClassesSupported;
	Boolean _adminETSConWilling;
	Array<Uint8> _adminETSConPriority;
	Array<Uint8> _adminETSConPriTrafficClass;
	Array<Uint8> _adminETSConTrafficClass;
	Array<Uint8> _adminETSConTrafficClassBandwidth;
	Array<Uint8> _adminETSConTSATrafficClass;
	Array<Uint8> _adminETSConTrafficSelectionAlgorithm;
	Array<Uint8> _adminETSRecoTrafficClass;
	Array<Uint64> _adminETSRecoTrafficClassBandwidth;
	Array<Uint8> _adminETSRecoTSATrafficClass;
	Array<Uint8> _adminETSRecoTrafficSelectionAlgorithm;
	Boolean _adminPFCWilling;
	Boolean _adminPFCMBC;
	Uint8 _adminPFCCap;
	Array<Uint8> _adminPFCEnablePriority;
	Array<Boolean> _adminPFCEnableEnabled;
	Array<Uint16> _adminApplicationPriorityAESelector;
	Array<Uint16> _adminApplicationPriorityAEProtocol;
	Array<Uint8> _adminApplicationPriorityAEPriority;

#	include "UNIX_DataCenterEthernetPortPrivate.h"


};

#endif /* UNIX_DATACENTERETHERNETPORT */
