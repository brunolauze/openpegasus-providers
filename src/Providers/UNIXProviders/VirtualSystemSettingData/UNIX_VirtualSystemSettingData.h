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
2.38.0
*/


/* **** UMLPackagePath *** */
/*
CIM::System::SystemElements
*/


/* **** Description *** */
/*
CIM_VirtualSystemSettingData defines the virtual aspects of a virtual system through a set of virtualization specific properties. CIM_VirtualSystemSettingData is also used as the top level class of virtual system configurations. Virtual system configurations model configuration information about virtual systems and their components. A virtual system configuration consists of one top-level instance of class CIM_VirtualSystemSettingData that aggregates a number of instances of class CIM_ResourceAllocationSettingData, using association CIM_ConcreteComponent. 
Virtual system configurations may for example be used to reflect configurations of 
- virtual systems that are defined at a virtualization platform, 
- virtual systems that are currently active, 
- input requests to create new virtual systems, 
- input requests to modify existing virtual systems, or 
- snapshots of virtual systems.
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

			UNIX_VirtualSystemSettingData:
				VirtualSystemIdentifier String
				VirtualSystemType String
				Notes String
				CreationTime DateTime
				ConfigurationID String
				ConfigurationDataRoot String
				ConfigurationFile String
				SnapshotDataRoot String
				SuspendDataRoot String
				SwapFileDataRoot String
				LogDataRoot String
				AutomaticStartupAction UInt16
				AutomaticStartupActionDelay DateTime
				AutomaticStartupActionSequenceNumber UInt16
				AutomaticShutdownAction UInt16
				AutomaticRecoveryAction UInt16
				RecoveryFile String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_SettingData:

			UNIX_VirtualSystemSettingData:


*/

#ifndef __UNIX_VIRTUALSYSTEMSETTINGDATA_H
#define __UNIX_VIRTUALSYSTEMSETTINGDATA_H


#include "CIM_SettingData.h"

#include "UNIX_VirtualSystemSettingDataDeps.h"


#ifndef PROPERTY_VIRTUAL_SYSTEM_IDENTIFIER
#define PROPERTY_VIRTUAL_SYSTEM_IDENTIFIER \
					"VirtualSystemIdentifier"
#endif

#ifndef PROPERTY_VIRTUAL_SYSTEM_TYPE
#define PROPERTY_VIRTUAL_SYSTEM_TYPE \
					"VirtualSystemType"
#endif

#ifndef PROPERTY_NOTES
#define PROPERTY_NOTES \
					"Notes"
#endif

#ifndef PROPERTY_CREATION_TIME
#define PROPERTY_CREATION_TIME \
					"CreationTime"
#endif

#ifndef PROPERTY_CONFIGURATION_ID
#define PROPERTY_CONFIGURATION_ID \
					"ConfigurationID"
#endif

#ifndef PROPERTY_CONFIGURATION_DATA_ROOT
#define PROPERTY_CONFIGURATION_DATA_ROOT \
					"ConfigurationDataRoot"
#endif

#ifndef PROPERTY_CONFIGURATION_FILE
#define PROPERTY_CONFIGURATION_FILE \
					"ConfigurationFile"
#endif

#ifndef PROPERTY_SNAPSHOT_DATA_ROOT
#define PROPERTY_SNAPSHOT_DATA_ROOT \
					"SnapshotDataRoot"
#endif

#ifndef PROPERTY_SUSPEND_DATA_ROOT
#define PROPERTY_SUSPEND_DATA_ROOT \
					"SuspendDataRoot"
#endif

#ifndef PROPERTY_SWAP_FILE_DATA_ROOT
#define PROPERTY_SWAP_FILE_DATA_ROOT \
					"SwapFileDataRoot"
#endif

#ifndef PROPERTY_LOG_DATA_ROOT
#define PROPERTY_LOG_DATA_ROOT \
					"LogDataRoot"
#endif

#ifndef PROPERTY_AUTOMATIC_STARTUP_ACTION
#define PROPERTY_AUTOMATIC_STARTUP_ACTION \
					"AutomaticStartupAction"
#endif

#ifndef PROPERTY_AUTOMATIC_STARTUP_ACTION_DELAY
#define PROPERTY_AUTOMATIC_STARTUP_ACTION_DELAY \
					"AutomaticStartupActionDelay"
#endif

#ifndef PROPERTY_AUTOMATIC_STARTUP_ACTION_SEQUENCE_NUMBER
#define PROPERTY_AUTOMATIC_STARTUP_ACTION_SEQUENCE_NUMBER \
					"AutomaticStartupActionSequenceNumber"
#endif

#ifndef PROPERTY_AUTOMATIC_SHUTDOWN_ACTION
#define PROPERTY_AUTOMATIC_SHUTDOWN_ACTION \
					"AutomaticShutdownAction"
#endif

#ifndef PROPERTY_AUTOMATIC_RECOVERY_ACTION
#define PROPERTY_AUTOMATIC_RECOVERY_ACTION \
					"AutomaticRecoveryAction"
#endif

#ifndef PROPERTY_RECOVERY_FILE
#define PROPERTY_RECOVERY_FILE \
					"RecoveryFile"
#endif



class UNIX_VirtualSystemSettingData :
	public CIM_SettingData
{
public:

	UNIX_VirtualSystemSettingData();
	~UNIX_VirtualSystemSettingData();

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
	virtual Boolean getVirtualSystemIdentifier(CIMProperty&) const;
	virtual String getVirtualSystemIdentifier() const;
	virtual void setVirtualSystemIdentifier(String&);
	virtual Boolean getVirtualSystemType(CIMProperty&) const;
	virtual String getVirtualSystemType() const;
	virtual void setVirtualSystemType(String&);
	virtual Boolean getNotes(CIMProperty&) const;
	virtual Array<String> getNotes() const;
	virtual void setNotes(Array<String>&);
	virtual Boolean getCreationTime(CIMProperty&) const;
	virtual CIMDateTime getCreationTime() const;
	virtual void setCreationTime(CIMDateTime&);
	virtual Boolean getConfigurationID(CIMProperty&) const;
	virtual String getConfigurationID() const;
	virtual void setConfigurationID(String&);
	virtual Boolean getConfigurationDataRoot(CIMProperty&) const;
	virtual String getConfigurationDataRoot() const;
	virtual void setConfigurationDataRoot(String&);
	virtual Boolean getConfigurationFile(CIMProperty&) const;
	virtual String getConfigurationFile() const;
	virtual void setConfigurationFile(String&);
	virtual Boolean getSnapshotDataRoot(CIMProperty&) const;
	virtual String getSnapshotDataRoot() const;
	virtual void setSnapshotDataRoot(String&);
	virtual Boolean getSuspendDataRoot(CIMProperty&) const;
	virtual String getSuspendDataRoot() const;
	virtual void setSuspendDataRoot(String&);
	virtual Boolean getSwapFileDataRoot(CIMProperty&) const;
	virtual String getSwapFileDataRoot() const;
	virtual void setSwapFileDataRoot(String&);
	virtual Boolean getLogDataRoot(CIMProperty&) const;
	virtual String getLogDataRoot() const;
	virtual void setLogDataRoot(String&);
	virtual Boolean getAutomaticStartupAction(CIMProperty&) const;
	virtual Uint16 getAutomaticStartupAction() const;
	virtual void setAutomaticStartupAction(Uint16&);
	virtual Boolean getAutomaticStartupActionDelay(CIMProperty&) const;
	virtual CIMDateTime getAutomaticStartupActionDelay() const;
	virtual void setAutomaticStartupActionDelay(CIMDateTime&);
	virtual Boolean getAutomaticStartupActionSequenceNumber(CIMProperty&) const;
	virtual Uint16 getAutomaticStartupActionSequenceNumber() const;
	virtual void setAutomaticStartupActionSequenceNumber(Uint16&);
	virtual Boolean getAutomaticShutdownAction(CIMProperty&) const;
	virtual Uint16 getAutomaticShutdownAction() const;
	virtual void setAutomaticShutdownAction(Uint16&);
	virtual Boolean getAutomaticRecoveryAction(CIMProperty&) const;
	virtual Uint16 getAutomaticRecoveryAction() const;
	virtual void setAutomaticRecoveryAction(Uint16&);
	virtual Boolean getRecoveryFile(CIMProperty&) const;
	virtual String getRecoveryFile() const;
	virtual void setRecoveryFile(String&);


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
	String _virtualSystemIdentifier;
	String _virtualSystemType;
	Array<String> _notes;
	CIMDateTime _creationTime;
	String _configurationID;
	String _configurationDataRoot;
	String _configurationFile;
	String _snapshotDataRoot;
	String _suspendDataRoot;
	String _swapFileDataRoot;
	String _logDataRoot;
	Uint16 _automaticStartupAction;
	CIMDateTime _automaticStartupActionDelay;
	Uint16 _automaticStartupActionSequenceNumber;
	Uint16 _automaticShutdownAction;
	Uint16 _automaticRecoveryAction;
	String _recoveryFile;

#	include "UNIX_VirtualSystemSettingDataPrivate.h"


};

#endif /* UNIX_VIRTUALSYSTEMSETTINGDATA */
