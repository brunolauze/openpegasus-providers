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


/* **** Experimental *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.8.1000
*/


/* **** UMLPackagePath *** */
/*
CIM::System::FileServices
*/


/* **** Description *** */
/*
The ImportedFileShareSetting describes the attribute values that were set when a FileShare was created for a LogicalFile by a FileImportService. These settings are associated with the created Share via the ElementSettingData association. These settings can also be associated with an ImportedFileShareCapabilities element via SettingAssociatedToCapabilities. If the setting is associated with a FileShare, it cannot have undefined or NULL properties. If it is associated with an ImportedFileShareCapabilities, a null property indicates that the property is not supported or that the value is a vendor-specific context-dependent default that may not be set.
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

			UNIX_ImportedFileShareSetting:
				FileSharingProtocol UInt16
				ProtocolVersions String
				InitialEnabledState UInt16
				OtherEnabledState String
				RequestRetryPolicy UInt16
				TransmissionRetriesMax UInt32
				RetransmissionTimeoutMin UInt32
				ImportFailurePolicy UInt16
				ImportRetriesMax UInt32
				ReadBufferSizeMin UInt32
				ReadBufferSizeMax UInt32
				WriteBufferSizeMin UInt32
				WriteBufferSizeMax UInt32
				AttributeCaching UInt16
				AttributeCachingObjects UInt16
				AttributeCachingTimeMin UInt32
				AttributeCachingTimeMax UInt32
				AccessPoints UInt16
				ReadWritePolicy UInt16
				CIFSLocksSupportPolicy UInt16
				CifsNotificationPolicy UInt16
				AccessPolicies UInt16
				OtherAccessPoliciesParameters String
				CifsLockPolicy UInt16
				CachingOptions UInt16
				ImportOnServiceStart UInt16
				ReadWritePref String
				ExecutePref UInt16
				RootAccessPref String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_SettingData:

			UNIX_ImportedFileShareSetting:


*/

#ifndef __UNIX_IMPORTEDFILESHARESETTING_H
#define __UNIX_IMPORTEDFILESHARESETTING_H


#include "CIM_SettingData.h"

#include "UNIX_ImportedFileShareSettingDeps.h"


#ifndef PROPERTY_FILE_SHARING_PROTOCOL
#define PROPERTY_FILE_SHARING_PROTOCOL \
					"FileSharingProtocol"
#endif

#ifndef PROPERTY_PROTOCOL_VERSIONS
#define PROPERTY_PROTOCOL_VERSIONS \
					"ProtocolVersions"
#endif

#ifndef PROPERTY_INITIAL_ENABLED_STATE
#define PROPERTY_INITIAL_ENABLED_STATE \
					"InitialEnabledState"
#endif

#ifndef PROPERTY_OTHER_ENABLED_STATE
#define PROPERTY_OTHER_ENABLED_STATE \
					"OtherEnabledState"
#endif

#ifndef PROPERTY_REQUEST_RETRY_POLICY
#define PROPERTY_REQUEST_RETRY_POLICY \
					"RequestRetryPolicy"
#endif

#ifndef PROPERTY_TRANSMISSION_RETRIES_MAX
#define PROPERTY_TRANSMISSION_RETRIES_MAX \
					"TransmissionRetriesMax"
#endif

#ifndef PROPERTY_RETRANSMISSION_TIMEOUT_MIN
#define PROPERTY_RETRANSMISSION_TIMEOUT_MIN \
					"RetransmissionTimeoutMin"
#endif

#ifndef PROPERTY_IMPORT_FAILURE_POLICY
#define PROPERTY_IMPORT_FAILURE_POLICY \
					"ImportFailurePolicy"
#endif

#ifndef PROPERTY_IMPORT_RETRIES_MAX
#define PROPERTY_IMPORT_RETRIES_MAX \
					"ImportRetriesMax"
#endif

#ifndef PROPERTY_READ_BUFFER_SIZE_MIN
#define PROPERTY_READ_BUFFER_SIZE_MIN \
					"ReadBufferSizeMin"
#endif

#ifndef PROPERTY_READ_BUFFER_SIZE_MAX
#define PROPERTY_READ_BUFFER_SIZE_MAX \
					"ReadBufferSizeMax"
#endif

#ifndef PROPERTY_WRITE_BUFFER_SIZE_MIN
#define PROPERTY_WRITE_BUFFER_SIZE_MIN \
					"WriteBufferSizeMin"
#endif

#ifndef PROPERTY_WRITE_BUFFER_SIZE_MAX
#define PROPERTY_WRITE_BUFFER_SIZE_MAX \
					"WriteBufferSizeMax"
#endif

#ifndef PROPERTY_ATTRIBUTE_CACHING
#define PROPERTY_ATTRIBUTE_CACHING \
					"AttributeCaching"
#endif

#ifndef PROPERTY_ATTRIBUTE_CACHING_OBJECTS
#define PROPERTY_ATTRIBUTE_CACHING_OBJECTS \
					"AttributeCachingObjects"
#endif

#ifndef PROPERTY_ATTRIBUTE_CACHING_TIME_MIN
#define PROPERTY_ATTRIBUTE_CACHING_TIME_MIN \
					"AttributeCachingTimeMin"
#endif

#ifndef PROPERTY_ATTRIBUTE_CACHING_TIME_MAX
#define PROPERTY_ATTRIBUTE_CACHING_TIME_MAX \
					"AttributeCachingTimeMax"
#endif

#ifndef PROPERTY_ACCESS_POINTS
#define PROPERTY_ACCESS_POINTS \
					"AccessPoints"
#endif

#ifndef PROPERTY_READ_WRITE_POLICY
#define PROPERTY_READ_WRITE_POLICY \
					"ReadWritePolicy"
#endif

#ifndef PROPERTY_C_I_FS_LOCKS_SUPPORT_POLICY
#define PROPERTY_C_I_FS_LOCKS_SUPPORT_POLICY \
					"CIFSLocksSupportPolicy"
#endif

#ifndef PROPERTY_CIFS_NOTIFICATION_POLICY
#define PROPERTY_CIFS_NOTIFICATION_POLICY \
					"CifsNotificationPolicy"
#endif

#ifndef PROPERTY_ACCESS_POLICIES
#define PROPERTY_ACCESS_POLICIES \
					"AccessPolicies"
#endif

#ifndef PROPERTY_OTHER_ACCESS_POLICIES_PARAMETERS
#define PROPERTY_OTHER_ACCESS_POLICIES_PARAMETERS \
					"OtherAccessPoliciesParameters"
#endif

#ifndef PROPERTY_CIFS_LOCK_POLICY
#define PROPERTY_CIFS_LOCK_POLICY \
					"CifsLockPolicy"
#endif

#ifndef PROPERTY_CACHING_OPTIONS
#define PROPERTY_CACHING_OPTIONS \
					"CachingOptions"
#endif

#ifndef PROPERTY_IMPORT_ON_SERVICE_START
#define PROPERTY_IMPORT_ON_SERVICE_START \
					"ImportOnServiceStart"
#endif

#ifndef PROPERTY_READ_WRITE_PREF
#define PROPERTY_READ_WRITE_PREF \
					"ReadWritePref"
#endif

#ifndef PROPERTY_EXECUTE_PREF
#define PROPERTY_EXECUTE_PREF \
					"ExecutePref"
#endif

#ifndef PROPERTY_ROOT_ACCESS_PREF
#define PROPERTY_ROOT_ACCESS_PREF \
					"RootAccessPref"
#endif



class UNIX_ImportedFileShareSetting :
	public CIM_SettingData
{
public:

	UNIX_ImportedFileShareSetting();
	~UNIX_ImportedFileShareSetting();

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
	virtual Boolean getFileSharingProtocol(CIMProperty&) const;
	virtual Uint16 getFileSharingProtocol() const;
	virtual void setFileSharingProtocol(Uint16&);
	virtual Boolean getProtocolVersions(CIMProperty&) const;
	virtual Array<String> getProtocolVersions() const;
	virtual void setProtocolVersions(Array<String>&);
	virtual Boolean getInitialEnabledState(CIMProperty&) const;
	virtual Uint16 getInitialEnabledState() const;
	virtual void setInitialEnabledState(Uint16&);
	virtual Boolean getOtherEnabledState(CIMProperty&) const;
	virtual String getOtherEnabledState() const;
	virtual void setOtherEnabledState(String&);
	virtual Boolean getRequestRetryPolicy(CIMProperty&) const;
	virtual Uint16 getRequestRetryPolicy() const;
	virtual void setRequestRetryPolicy(Uint16&);
	virtual Boolean getTransmissionRetriesMax(CIMProperty&) const;
	virtual Uint32 getTransmissionRetriesMax() const;
	virtual void setTransmissionRetriesMax(Uint32&);
	virtual Boolean getRetransmissionTimeoutMin(CIMProperty&) const;
	virtual Uint32 getRetransmissionTimeoutMin() const;
	virtual void setRetransmissionTimeoutMin(Uint32&);
	virtual Boolean getImportFailurePolicy(CIMProperty&) const;
	virtual Uint16 getImportFailurePolicy() const;
	virtual void setImportFailurePolicy(Uint16&);
	virtual Boolean getImportRetriesMax(CIMProperty&) const;
	virtual Uint32 getImportRetriesMax() const;
	virtual void setImportRetriesMax(Uint32&);
	virtual Boolean getReadBufferSizeMin(CIMProperty&) const;
	virtual Uint32 getReadBufferSizeMin() const;
	virtual void setReadBufferSizeMin(Uint32&);
	virtual Boolean getReadBufferSizeMax(CIMProperty&) const;
	virtual Uint32 getReadBufferSizeMax() const;
	virtual void setReadBufferSizeMax(Uint32&);
	virtual Boolean getWriteBufferSizeMin(CIMProperty&) const;
	virtual Uint32 getWriteBufferSizeMin() const;
	virtual void setWriteBufferSizeMin(Uint32&);
	virtual Boolean getWriteBufferSizeMax(CIMProperty&) const;
	virtual Uint32 getWriteBufferSizeMax() const;
	virtual void setWriteBufferSizeMax(Uint32&);
	virtual Boolean getAttributeCaching(CIMProperty&) const;
	virtual Array<Uint16> getAttributeCaching() const;
	virtual void setAttributeCaching(Array<Uint16>&);
	virtual Boolean getAttributeCachingObjects(CIMProperty&) const;
	virtual Array<Uint16> getAttributeCachingObjects() const;
	virtual void setAttributeCachingObjects(Array<Uint16>&);
	virtual Boolean getAttributeCachingTimeMin(CIMProperty&) const;
	virtual Array<Uint32> getAttributeCachingTimeMin() const;
	virtual void setAttributeCachingTimeMin(Array<Uint32>&);
	virtual Boolean getAttributeCachingTimeMax(CIMProperty&) const;
	virtual Array<Uint32> getAttributeCachingTimeMax() const;
	virtual void setAttributeCachingTimeMax(Array<Uint32>&);
	virtual Boolean getAccessPoints(CIMProperty&) const;
	virtual Uint16 getAccessPoints() const;
	virtual void setAccessPoints(Uint16&);
	virtual Boolean getReadWritePolicy(CIMProperty&) const;
	virtual Uint16 getReadWritePolicy() const;
	virtual void setReadWritePolicy(Uint16&);
	virtual Boolean getCIFSLocksSupportPolicy(CIMProperty&) const;
	virtual Array<Uint16> getCIFSLocksSupportPolicy() const;
	virtual void setCIFSLocksSupportPolicy(Array<Uint16>&);
	virtual Boolean getCifsNotificationPolicy(CIMProperty&) const;
	virtual Array<Uint16> getCifsNotificationPolicy() const;
	virtual void setCifsNotificationPolicy(Array<Uint16>&);
	virtual Boolean getAccessPolicies(CIMProperty&) const;
	virtual Array<Uint16> getAccessPolicies() const;
	virtual void setAccessPolicies(Array<Uint16>&);
	virtual Boolean getOtherAccessPoliciesParameters(CIMProperty&) const;
	virtual Array<String> getOtherAccessPoliciesParameters() const;
	virtual void setOtherAccessPoliciesParameters(Array<String>&);
	virtual Boolean getCifsLockPolicy(CIMProperty&) const;
	virtual Uint16 getCifsLockPolicy() const;
	virtual void setCifsLockPolicy(Uint16&);
	virtual Boolean getCachingOptions(CIMProperty&) const;
	virtual Uint16 getCachingOptions() const;
	virtual void setCachingOptions(Uint16&);
	virtual Boolean getImportOnServiceStart(CIMProperty&) const;
	virtual Uint16 getImportOnServiceStart() const;
	virtual void setImportOnServiceStart(Uint16&);
	virtual Boolean getReadWritePref(CIMProperty&) const;
	virtual String getReadWritePref() const;
	virtual void setReadWritePref(String&);
	virtual Boolean getExecutePref(CIMProperty&) const;
	virtual Uint16 getExecutePref() const;
	virtual void setExecutePref(Uint16&);
	virtual Boolean getRootAccessPref(CIMProperty&) const;
	virtual String getRootAccessPref() const;
	virtual void setRootAccessPref(String&);


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
	Uint16 _fileSharingProtocol;
	Array<String> _protocolVersions;
	Uint16 _initialEnabledState;
	String _otherEnabledState;
	Uint16 _requestRetryPolicy;
	Uint32 _transmissionRetriesMax;
	Uint32 _retransmissionTimeoutMin;
	Uint16 _importFailurePolicy;
	Uint32 _importRetriesMax;
	Uint32 _readBufferSizeMin;
	Uint32 _readBufferSizeMax;
	Uint32 _writeBufferSizeMin;
	Uint32 _writeBufferSizeMax;
	Array<Uint16> _attributeCaching;
	Array<Uint16> _attributeCachingObjects;
	Array<Uint32> _attributeCachingTimeMin;
	Array<Uint32> _attributeCachingTimeMax;
	Uint16 _accessPoints;
	Uint16 _readWritePolicy;
	Array<Uint16> _cIFSLocksSupportPolicy;
	Array<Uint16> _cifsNotificationPolicy;
	Array<Uint16> _accessPolicies;
	Array<String> _otherAccessPoliciesParameters;
	Uint16 _cifsLockPolicy;
	Uint16 _cachingOptions;
	Uint16 _importOnServiceStart;
	String _readWritePref;
	Uint16 _executePref;
	String _rootAccessPref;

#	include "UNIX_ImportedFileShareSettingPrivate.h"


};

#endif /* UNIX_IMPORTEDFILESHARESETTING */
