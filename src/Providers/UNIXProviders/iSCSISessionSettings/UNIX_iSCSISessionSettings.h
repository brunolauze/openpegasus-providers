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
2.11.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Network::iSCSI
*/


/* **** Description *** */
/*
The default negotiation settings for an iSCSI Session. These properties are used as the starting position for login negotiations between initiator and target nodes. The properties describing the resulting outcome of the login negotiation are in the iSCSISession class. Depending on a given implementation an instance of iSCSISessionSettings will be associated by ElementSettingData to one or more instances of iSCSIProtocolEndpoint, SCSIProtocolController, or ComputerSystem.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_SettingData:
				ConfigurationName String
				ChangeableType UInt16
				ComponentSetting String
				SoID String
				SoOrgID String

			UNIX_iSCSISessionSettings:
				MaxConnectionsPerSession UInt32
				InitialR2TPreference Boolean
				ImmediateDataPreference Boolean
				MaxOutstandingR2T UInt32
				MaxUnsolicitedFirstDataBurstLength UInt32
				MaxDataBurstLength UInt32
				DataSequenceInOrderPreference Boolean
				DataPDUInOrderPreference Boolean
				DefaultTimeToWaitPreference UInt32
				DefaultTimeToRetainPreference UInt32
				ErrorRecoveryLevelPreference UInt32


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_SettingData:

			UNIX_iSCSISessionSettings:


*/

#ifndef __UNIX_ISCSISESSIONSETTINGS_H
#define __UNIX_ISCSISESSIONSETTINGS_H


#include "CIM_SettingData.h"

#include "UNIX_iSCSISessionSettingsDeps.h"


#ifndef PROPERTY_MAX_CONNECTIONS_PER_SESSION
#define PROPERTY_MAX_CONNECTIONS_PER_SESSION \
					"MaxConnectionsPerSession"
#endif

#ifndef PROPERTY_INITIAL_R_2_T_PREFERENCE
#define PROPERTY_INITIAL_R_2_T_PREFERENCE \
					"InitialR2TPreference"
#endif

#ifndef PROPERTY_IMMEDIATE_DATA_PREFERENCE
#define PROPERTY_IMMEDIATE_DATA_PREFERENCE \
					"ImmediateDataPreference"
#endif

#ifndef PROPERTY_MAX_OUTSTANDING_R_2_T
#define PROPERTY_MAX_OUTSTANDING_R_2_T \
					"MaxOutstandingR2T"
#endif

#ifndef PROPERTY_MAX_UNSOLICITED_FIRST_DATA_BURST_LENGTH
#define PROPERTY_MAX_UNSOLICITED_FIRST_DATA_BURST_LENGTH \
					"MaxUnsolicitedFirstDataBurstLength"
#endif

#ifndef PROPERTY_MAX_DATA_BURST_LENGTH
#define PROPERTY_MAX_DATA_BURST_LENGTH \
					"MaxDataBurstLength"
#endif

#ifndef PROPERTY_DATA_SEQUENCE_IN_ORDER_PREFERENCE
#define PROPERTY_DATA_SEQUENCE_IN_ORDER_PREFERENCE \
					"DataSequenceInOrderPreference"
#endif

#ifndef PROPERTY_DATA_P_D_U_IN_ORDER_PREFERENCE
#define PROPERTY_DATA_P_D_U_IN_ORDER_PREFERENCE \
					"DataPDUInOrderPreference"
#endif

#ifndef PROPERTY_DEFAULT_TIME_TO_WAIT_PREFERENCE
#define PROPERTY_DEFAULT_TIME_TO_WAIT_PREFERENCE \
					"DefaultTimeToWaitPreference"
#endif

#ifndef PROPERTY_DEFAULT_TIME_TO_RETAIN_PREFERENCE
#define PROPERTY_DEFAULT_TIME_TO_RETAIN_PREFERENCE \
					"DefaultTimeToRetainPreference"
#endif

#ifndef PROPERTY_ERROR_RECOVERY_LEVEL_PREFERENCE
#define PROPERTY_ERROR_RECOVERY_LEVEL_PREFERENCE \
					"ErrorRecoveryLevelPreference"
#endif



class UNIX_iSCSISessionSettings :
	public CIM_SettingData
{
public:

	UNIX_iSCSISessionSettings();
	~UNIX_iSCSISessionSettings();

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
	virtual Boolean getConfigurationName(CIMProperty&) const;
	virtual String getConfigurationName() const;
	virtual void setConfigurationName(String&);
	virtual Boolean getChangeableType(CIMProperty&) const;
	virtual Uint16 getChangeableType() const;
	virtual void setChangeableType(Uint16&);
	virtual Boolean getComponentSetting(CIMProperty&) const;
	virtual Array<String> getComponentSetting() const;
	virtual void setComponentSetting(Array<String>&);
	virtual Boolean getSoID(CIMProperty&) const;
	virtual String getSoID() const;
	virtual void setSoID(String&);
	virtual Boolean getSoOrgID(CIMProperty&) const;
	virtual String getSoOrgID() const;
	virtual void setSoOrgID(String&);
	virtual Boolean getMaxConnectionsPerSession(CIMProperty&) const;
	virtual Uint32 getMaxConnectionsPerSession() const;
	virtual void setMaxConnectionsPerSession(Uint32&);
	virtual Boolean getInitialR2TPreference(CIMProperty&) const;
	virtual Boolean getInitialR2TPreference() const;
	virtual void setInitialR2TPreference(Boolean&);
	virtual Boolean getImmediateDataPreference(CIMProperty&) const;
	virtual Boolean getImmediateDataPreference() const;
	virtual void setImmediateDataPreference(Boolean&);
	virtual Boolean getMaxOutstandingR2T(CIMProperty&) const;
	virtual Uint32 getMaxOutstandingR2T() const;
	virtual void setMaxOutstandingR2T(Uint32&);
	virtual Boolean getMaxUnsolicitedFirstDataBurstLength(CIMProperty&) const;
	virtual Uint32 getMaxUnsolicitedFirstDataBurstLength() const;
	virtual void setMaxUnsolicitedFirstDataBurstLength(Uint32&);
	virtual Boolean getMaxDataBurstLength(CIMProperty&) const;
	virtual Uint32 getMaxDataBurstLength() const;
	virtual void setMaxDataBurstLength(Uint32&);
	virtual Boolean getDataSequenceInOrderPreference(CIMProperty&) const;
	virtual Boolean getDataSequenceInOrderPreference() const;
	virtual void setDataSequenceInOrderPreference(Boolean&);
	virtual Boolean getDataPDUInOrderPreference(CIMProperty&) const;
	virtual Boolean getDataPDUInOrderPreference() const;
	virtual void setDataPDUInOrderPreference(Boolean&);
	virtual Boolean getDefaultTimeToWaitPreference(CIMProperty&) const;
	virtual Uint32 getDefaultTimeToWaitPreference() const;
	virtual void setDefaultTimeToWaitPreference(Uint32&);
	virtual Boolean getDefaultTimeToRetainPreference(CIMProperty&) const;
	virtual Uint32 getDefaultTimeToRetainPreference() const;
	virtual void setDefaultTimeToRetainPreference(Uint32&);
	virtual Boolean getErrorRecoveryLevelPreference(CIMProperty&) const;
	virtual Uint32 getErrorRecoveryLevelPreference() const;
	virtual void setErrorRecoveryLevelPreference(Uint32&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	String _configurationName;
	Uint16 _changeableType;
	Array<String> _componentSetting;
	String _soID;
	String _soOrgID;
	Uint32 _maxConnectionsPerSession;
	Boolean _initialR2TPreference;
	Boolean _immediateDataPreference;
	Uint32 _maxOutstandingR2T;
	Uint32 _maxUnsolicitedFirstDataBurstLength;
	Uint32 _maxDataBurstLength;
	Boolean _dataSequenceInOrderPreference;
	Boolean _dataPDUInOrderPreference;
	Uint32 _defaultTimeToWaitPreference;
	Uint32 _defaultTimeToRetainPreference;
	Uint32 _errorRecoveryLevelPreference;

#	include "UNIX_iSCSISessionSettingsPrivate.h"


};

#endif /* UNIX_ISCSISESSIONSETTINGS */
