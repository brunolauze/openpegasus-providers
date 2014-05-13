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
The ExportedFileShareSetting describes the attribute values that were set when a FileShare was created for a LogicalFile by a FileExportService. These settings may be associated with the created Share via the ElementSettingData association; or, associated with an ExportedFileShareCapabilities element via SettingAssociatedToCapabilities; or, used as an EmbeddedInstanceparameter in a method (for instance, as a Goal). If the setting is associated with a FileShare, it cannot have undefined or NULL properties. If it is associated with an ExportedFileShareCapabilities, a NULL property indicates that the property is not supported or that the value is a vendor-specific context-dependent default that may not be changed. The FileSharingProtocol and ProtocolVersions properties cannot have a default value. If this Setting is associated with a ExportedFileShareCapabilities element via SettingAssociatedToCapabilities, the corresponding FileSharingProtocol and ProtocolVersions properties must match.
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

			UNIX_ExportedFileShareSetting:
				FileSharingProtocol UInt16
				ProtocolVersions String
				InitialEnabledState UInt16
				OtherEnabledState String
				DefaultReadWrite UInt16
				DefaultExecute UInt16
				ExecuteSupport UInt16
				DefaultUserIdSupported UInt16
				RootAccess UInt16
				WritePolicy UInt16
				AccessPoints UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_SettingData:

			UNIX_ExportedFileShareSetting:


*/

#ifndef __UNIX_EXPORTEDFILESHARESETTING_H
#define __UNIX_EXPORTEDFILESHARESETTING_H


#include "CIM_SettingData.h"

#include "UNIX_ExportedFileShareSettingDeps.h"


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

#ifndef PROPERTY_DEFAULT_READ_WRITE
#define PROPERTY_DEFAULT_READ_WRITE \
					"DefaultReadWrite"
#endif

#ifndef PROPERTY_DEFAULT_EXECUTE
#define PROPERTY_DEFAULT_EXECUTE \
					"DefaultExecute"
#endif

#ifndef PROPERTY_EXECUTE_SUPPORT
#define PROPERTY_EXECUTE_SUPPORT \
					"ExecuteSupport"
#endif

#ifndef PROPERTY_DEFAULT_USER_ID_SUPPORTED
#define PROPERTY_DEFAULT_USER_ID_SUPPORTED \
					"DefaultUserIdSupported"
#endif

#ifndef PROPERTY_ROOT_ACCESS
#define PROPERTY_ROOT_ACCESS \
					"RootAccess"
#endif

#ifndef PROPERTY_WRITE_POLICY
#define PROPERTY_WRITE_POLICY \
					"WritePolicy"
#endif

#ifndef PROPERTY_ACCESS_POINTS
#define PROPERTY_ACCESS_POINTS \
					"AccessPoints"
#endif



class UNIX_ExportedFileShareSetting :
	public CIM_SettingData
{
public:

	UNIX_ExportedFileShareSetting();
	~UNIX_ExportedFileShareSetting();

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
	virtual Boolean getDefaultReadWrite(CIMProperty&) const;
	virtual Uint16 getDefaultReadWrite() const;
	virtual void setDefaultReadWrite(Uint16&);
	virtual Boolean getDefaultExecute(CIMProperty&) const;
	virtual Uint16 getDefaultExecute() const;
	virtual void setDefaultExecute(Uint16&);
	virtual Boolean getExecuteSupport(CIMProperty&) const;
	virtual Uint16 getExecuteSupport() const;
	virtual void setExecuteSupport(Uint16&);
	virtual Boolean getDefaultUserIdSupported(CIMProperty&) const;
	virtual Uint16 getDefaultUserIdSupported() const;
	virtual void setDefaultUserIdSupported(Uint16&);
	virtual Boolean getRootAccess(CIMProperty&) const;
	virtual Uint16 getRootAccess() const;
	virtual void setRootAccess(Uint16&);
	virtual Boolean getWritePolicy(CIMProperty&) const;
	virtual Uint16 getWritePolicy() const;
	virtual void setWritePolicy(Uint16&);
	virtual Boolean getAccessPoints(CIMProperty&) const;
	virtual Uint16 getAccessPoints() const;
	virtual void setAccessPoints(Uint16&);


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
	Uint16 _defaultReadWrite;
	Uint16 _defaultExecute;
	Uint16 _executeSupport;
	Uint16 _defaultUserIdSupported;
	Uint16 _rootAccess;
	Uint16 _writePolicy;
	Uint16 _accessPoints;

#	include "UNIX_ExportedFileShareSettingPrivate.h"


};

#endif /* UNIX_EXPORTEDFILESHARESETTING */
