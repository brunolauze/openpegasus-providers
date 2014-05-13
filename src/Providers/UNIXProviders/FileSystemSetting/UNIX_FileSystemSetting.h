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
2.10.0
*/


/* **** UMLPackagePath *** */
/*
CIM::System::FilesystemServices
*/


/* **** Description *** */
/*
The FileSystemSetting describes the attribute values set when creating a FileSystem by a FileSystemConfigurationService. These settings can be associated via the ElementSettingData association with the created FileSystem. If the setting is associated via SettingAssociatedToCapabilities to a FileSystemCapabilities, it is one of the canned settings supported by this capabilities instance. A setting can also be an embedded instance parameter to a method (for instance, when used as a Goal parameter). 
A NULL value for a property in a canned setting indicates support for a vendor-specific default. A NULL value for a property when the setting is used as a Goal parameter to a method indicates that the client does not care what value that property will have on creation and will accept any vendor-supplied default. When used with a FileSystem, a NULL value for a property must be interpreted as "Unknown". The ActualFileSystemType property cannot have a default value in any context. If this Setting is associated with a FileSystemCapabilities element via SettingAssociatedToCapabilities, the value of ActualFileSystemType in the Setting and the Capabilities MUST match. 
This class also supports persistence and recoverability of a FileSystem and its contained elements as defined in CIM 2.8 for the use of DatabaseStorageArea.
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

			UNIX_FileSystemSetting:
				ActualFileSystemType UInt16
				DataExtentsSharing UInt16
				CopyTarget UInt16
				FilenameCaseAttributes UInt16
				ObjectTypes UInt16
				NumberOfObjectsMin UInt64
				NumberOfObjectsMax UInt64
				NumberOfObjects UInt64
				ObjectSize UInt64
				ObjectSizeMin UInt64
				ObjectSizeMax UInt64
				FilenameStreamFormats UInt16
				FilenameFormats UInt16
				FilenameLengthMax UInt16
				FilenameReservedCharacterSet String
				SupportedLockingSemantics UInt16
				SupportedAuthorizationProtocols UInt16
				SupportedAuthenticationProtocols UInt16
				PersistenceTypes UInt16
				OtherPersistenceTypes String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_SettingData:

			UNIX_FileSystemSetting:


*/

#ifndef __UNIX_FILESYSTEMSETTING_H
#define __UNIX_FILESYSTEMSETTING_H


#include "CIM_SettingData.h"

#include "UNIX_FileSystemSettingDeps.h"


#ifndef PROPERTY_ACTUAL_FILE_SYSTEM_TYPE
#define PROPERTY_ACTUAL_FILE_SYSTEM_TYPE \
					"ActualFileSystemType"
#endif

#ifndef PROPERTY_DATA_EXTENTS_SHARING
#define PROPERTY_DATA_EXTENTS_SHARING \
					"DataExtentsSharing"
#endif

#ifndef PROPERTY_COPY_TARGET
#define PROPERTY_COPY_TARGET \
					"CopyTarget"
#endif

#ifndef PROPERTY_FILENAME_CASE_ATTRIBUTES
#define PROPERTY_FILENAME_CASE_ATTRIBUTES \
					"FilenameCaseAttributes"
#endif

#ifndef PROPERTY_OBJECT_TYPES
#define PROPERTY_OBJECT_TYPES \
					"ObjectTypes"
#endif

#ifndef PROPERTY_NUMBER_OF_OBJECTS_MIN
#define PROPERTY_NUMBER_OF_OBJECTS_MIN \
					"NumberOfObjectsMin"
#endif

#ifndef PROPERTY_NUMBER_OF_OBJECTS_MAX
#define PROPERTY_NUMBER_OF_OBJECTS_MAX \
					"NumberOfObjectsMax"
#endif

#ifndef PROPERTY_NUMBER_OF_OBJECTS
#define PROPERTY_NUMBER_OF_OBJECTS \
					"NumberOfObjects"
#endif

#ifndef PROPERTY_OBJECT_SIZE
#define PROPERTY_OBJECT_SIZE \
					"ObjectSize"
#endif

#ifndef PROPERTY_OBJECT_SIZE_MIN
#define PROPERTY_OBJECT_SIZE_MIN \
					"ObjectSizeMin"
#endif

#ifndef PROPERTY_OBJECT_SIZE_MAX
#define PROPERTY_OBJECT_SIZE_MAX \
					"ObjectSizeMax"
#endif

#ifndef PROPERTY_FILENAME_STREAM_FORMATS
#define PROPERTY_FILENAME_STREAM_FORMATS \
					"FilenameStreamFormats"
#endif

#ifndef PROPERTY_FILENAME_FORMATS
#define PROPERTY_FILENAME_FORMATS \
					"FilenameFormats"
#endif

#ifndef PROPERTY_FILENAME_LENGTH_MAX
#define PROPERTY_FILENAME_LENGTH_MAX \
					"FilenameLengthMax"
#endif

#ifndef PROPERTY_FILENAME_RESERVED_CHARACTER_SET
#define PROPERTY_FILENAME_RESERVED_CHARACTER_SET \
					"FilenameReservedCharacterSet"
#endif

#ifndef PROPERTY_SUPPORTED_LOCKING_SEMANTICS
#define PROPERTY_SUPPORTED_LOCKING_SEMANTICS \
					"SupportedLockingSemantics"
#endif

#ifndef PROPERTY_SUPPORTED_AUTHORIZATION_PROTOCOLS
#define PROPERTY_SUPPORTED_AUTHORIZATION_PROTOCOLS \
					"SupportedAuthorizationProtocols"
#endif

#ifndef PROPERTY_SUPPORTED_AUTHENTICATION_PROTOCOLS
#define PROPERTY_SUPPORTED_AUTHENTICATION_PROTOCOLS \
					"SupportedAuthenticationProtocols"
#endif

#ifndef PROPERTY_PERSISTENCE_TYPES
#define PROPERTY_PERSISTENCE_TYPES \
					"PersistenceTypes"
#endif

#ifndef PROPERTY_OTHER_PERSISTENCE_TYPES
#define PROPERTY_OTHER_PERSISTENCE_TYPES \
					"OtherPersistenceTypes"
#endif



class UNIX_FileSystemSetting :
	public CIM_SettingData
{
public:

	UNIX_FileSystemSetting();
	~UNIX_FileSystemSetting();

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
	virtual Boolean getActualFileSystemType(CIMProperty&) const;
	virtual Uint16 getActualFileSystemType() const;
	virtual void setActualFileSystemType(Uint16&);
	virtual Boolean getDataExtentsSharing(CIMProperty&) const;
	virtual Uint16 getDataExtentsSharing() const;
	virtual void setDataExtentsSharing(Uint16&);
	virtual Boolean getCopyTarget(CIMProperty&) const;
	virtual Uint16 getCopyTarget() const;
	virtual void setCopyTarget(Uint16&);
	virtual Boolean getFilenameCaseAttributes(CIMProperty&) const;
	virtual Uint16 getFilenameCaseAttributes() const;
	virtual void setFilenameCaseAttributes(Uint16&);
	virtual Boolean getObjectTypes(CIMProperty&) const;
	virtual Array<Uint16> getObjectTypes() const;
	virtual void setObjectTypes(Array<Uint16>&);
	virtual Boolean getNumberOfObjectsMin(CIMProperty&) const;
	virtual Array<Uint64> getNumberOfObjectsMin() const;
	virtual void setNumberOfObjectsMin(Array<Uint64>&);
	virtual Boolean getNumberOfObjectsMax(CIMProperty&) const;
	virtual Array<Uint64> getNumberOfObjectsMax() const;
	virtual void setNumberOfObjectsMax(Array<Uint64>&);
	virtual Boolean getNumberOfObjects(CIMProperty&) const;
	virtual Array<Uint64> getNumberOfObjects() const;
	virtual void setNumberOfObjects(Array<Uint64>&);
	virtual Boolean getObjectSize(CIMProperty&) const;
	virtual Array<Uint64> getObjectSize() const;
	virtual void setObjectSize(Array<Uint64>&);
	virtual Boolean getObjectSizeMin(CIMProperty&) const;
	virtual Array<Uint64> getObjectSizeMin() const;
	virtual void setObjectSizeMin(Array<Uint64>&);
	virtual Boolean getObjectSizeMax(CIMProperty&) const;
	virtual Array<Uint64> getObjectSizeMax() const;
	virtual void setObjectSizeMax(Array<Uint64>&);
	virtual Boolean getFilenameStreamFormats(CIMProperty&) const;
	virtual Array<Uint16> getFilenameStreamFormats() const;
	virtual void setFilenameStreamFormats(Array<Uint16>&);
	virtual Boolean getFilenameFormats(CIMProperty&) const;
	virtual Array<Uint16> getFilenameFormats() const;
	virtual void setFilenameFormats(Array<Uint16>&);
	virtual Boolean getFilenameLengthMax(CIMProperty&) const;
	virtual Array<Uint16> getFilenameLengthMax() const;
	virtual void setFilenameLengthMax(Array<Uint16>&);
	virtual Boolean getFilenameReservedCharacterSet(CIMProperty&) const;
	virtual Array<String> getFilenameReservedCharacterSet() const;
	virtual void setFilenameReservedCharacterSet(Array<String>&);
	virtual Boolean getSupportedLockingSemantics(CIMProperty&) const;
	virtual Array<Uint16> getSupportedLockingSemantics() const;
	virtual void setSupportedLockingSemantics(Array<Uint16>&);
	virtual Boolean getSupportedAuthorizationProtocols(CIMProperty&) const;
	virtual Array<Uint16> getSupportedAuthorizationProtocols() const;
	virtual void setSupportedAuthorizationProtocols(Array<Uint16>&);
	virtual Boolean getSupportedAuthenticationProtocols(CIMProperty&) const;
	virtual Array<Uint16> getSupportedAuthenticationProtocols() const;
	virtual void setSupportedAuthenticationProtocols(Array<Uint16>&);
	virtual Boolean getPersistenceTypes(CIMProperty&) const;
	virtual Array<Uint16> getPersistenceTypes() const;
	virtual void setPersistenceTypes(Array<Uint16>&);
	virtual Boolean getOtherPersistenceTypes(CIMProperty&) const;
	virtual Array<String> getOtherPersistenceTypes() const;
	virtual void setOtherPersistenceTypes(Array<String>&);


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
	Uint16 _actualFileSystemType;
	Uint16 _dataExtentsSharing;
	Uint16 _copyTarget;
	Uint16 _filenameCaseAttributes;
	Array<Uint16> _objectTypes;
	Array<Uint64> _numberOfObjectsMin;
	Array<Uint64> _numberOfObjectsMax;
	Array<Uint64> _numberOfObjects;
	Array<Uint64> _objectSize;
	Array<Uint64> _objectSizeMin;
	Array<Uint64> _objectSizeMax;
	Array<Uint16> _filenameStreamFormats;
	Array<Uint16> _filenameFormats;
	Array<Uint16> _filenameLengthMax;
	Array<String> _filenameReservedCharacterSet;
	Array<Uint16> _supportedLockingSemantics;
	Array<Uint16> _supportedAuthorizationProtocols;
	Array<Uint16> _supportedAuthenticationProtocols;
	Array<Uint16> _persistenceTypes;
	Array<String> _otherPersistenceTypes;

#	include "UNIX_FileSystemSettingPrivate.h"


};

#endif /* UNIX_FILESYSTEMSETTING */
