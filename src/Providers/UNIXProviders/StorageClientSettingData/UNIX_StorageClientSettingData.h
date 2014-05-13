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
2.37.0
*/


/* **** UMLPackagePath *** */
/*
CIM::User::StorageHardwareID
*/


/* **** Description *** */
/*
This class models host environment factors that influence the behavior of Storage Systems. For example, a disk array has different SCSI responses for clients (initiators) configured as AIX verses HPUX. Instances of this setting class can be associated via ElementSettingData to a storage system's LogicalPort, ProtocolController, or Volume instances when these elements have host awareness. These associations are created by the management instrumentation provider to reflect the current configuration. A client deletes/creates these associations to request changes in element host-awareness. This settings class can also be associated with StorageHardwareID instances when that HW ID is configured with host information. An instance of this setting may include several ClientType values if the storage system treats them identically. The storage system exposes all supported setting instances to a WBEM Enumerate request; the client uses the returned settings to determine which types are available.
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

			UNIX_StorageClientSettingData:
				ClientTypes UInt16
				OtherClientTypeDescriptions String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_SettingData:

			UNIX_StorageClientSettingData:


*/

#ifndef __UNIX_STORAGECLIENTSETTINGDATA_H
#define __UNIX_STORAGECLIENTSETTINGDATA_H


#include "CIM_SettingData.h"

#include "UNIX_StorageClientSettingDataDeps.h"


#ifndef PROPERTY_CLIENT_TYPES
#define PROPERTY_CLIENT_TYPES \
					"ClientTypes"
#endif

#ifndef PROPERTY_OTHER_CLIENT_TYPE_DESCRIPTIONS
#define PROPERTY_OTHER_CLIENT_TYPE_DESCRIPTIONS \
					"OtherClientTypeDescriptions"
#endif



class UNIX_StorageClientSettingData :
	public CIM_SettingData
{
public:

	UNIX_StorageClientSettingData();
	~UNIX_StorageClientSettingData();

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
	virtual Boolean getClientTypes(CIMProperty&) const;
	virtual Array<Uint16> getClientTypes() const;
	virtual void setClientTypes(Array<Uint16>&);
	virtual Boolean getOtherClientTypeDescriptions(CIMProperty&) const;
	virtual Array<String> getOtherClientTypeDescriptions() const;
	virtual void setOtherClientTypeDescriptions(Array<String>&);


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
	Array<Uint16> _clientTypes;
	Array<String> _otherClientTypeDescriptions;

#	include "UNIX_StorageClientSettingDataPrivate.h"


};

#endif /* UNIX_STORAGECLIENTSETTINGDATA */
