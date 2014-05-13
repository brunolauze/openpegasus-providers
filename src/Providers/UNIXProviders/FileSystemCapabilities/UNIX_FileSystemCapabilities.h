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
2.39.0
*/


/* **** UMLPackagePath *** */
/*
CIM::System::FilesystemServices
*/


/* **** Description *** */
/*
FileSystemCapabilities specifies the combination of properties that a FileSystemService can support when creating or maintaining FileSystems. Each supported combination of properties is specified by a FileSystemSetting that is associated with the FileSystemCapabilities element via ElementSettingData. 
A FileSystemCapabilities element specifies the properties supported when using it. 
This class provides a CreateGoal method that can be used to create a FileSystemSetting element that can be used as a goal for creating or modifying a filesystem. This class also supports persistence and recoverability of a FileSystem and its contained elements as defined in CIM 2.8 for the use of DatabaseStorageArea.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_Capabilities:

			UNIX_FileSystemCapabilities:
				SupportedPersistenceTypes UInt16
				SupportedOtherPersistenceTypes String
				ActualFileSystemType UInt16
				SupportedProperties UInt16
				SupportedOperations UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Capabilities:
				CreateGoalSettings UInt16

			UNIX_FileSystemCapabilities:
				CreateGoal UInt16
				GetRequiredStorageSize UInt64
				GetElementNameCapabilities UInt32


*/

#ifndef __UNIX_FILESYSTEMCAPABILITIES_H
#define __UNIX_FILESYSTEMCAPABILITIES_H


#include "CIM_Capabilities.h"
#include <ConcreteJob/UNIX_ConcreteJob.h>

#include "UNIX_FileSystemCapabilitiesDeps.h"


#ifndef PROPERTY_SUPPORTED_PERSISTENCE_TYPES
#define PROPERTY_SUPPORTED_PERSISTENCE_TYPES \
					"SupportedPersistenceTypes"
#endif

#ifndef PROPERTY_SUPPORTED_OTHER_PERSISTENCE_TYPES
#define PROPERTY_SUPPORTED_OTHER_PERSISTENCE_TYPES \
					"SupportedOtherPersistenceTypes"
#endif

#ifndef PROPERTY_ACTUAL_FILE_SYSTEM_TYPE
#define PROPERTY_ACTUAL_FILE_SYSTEM_TYPE \
					"ActualFileSystemType"
#endif

#ifndef PROPERTY_SUPPORTED_PROPERTIES
#define PROPERTY_SUPPORTED_PROPERTIES \
					"SupportedProperties"
#endif

#ifndef PROPERTY_SUPPORTED_OPERATIONS
#define PROPERTY_SUPPORTED_OPERATIONS \
					"SupportedOperations"
#endif



class UNIX_FileSystemCapabilities :
	public CIM_Capabilities
{
public:

	UNIX_FileSystemCapabilities();
	~UNIX_FileSystemCapabilities();

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
	virtual Boolean getSupportedPersistenceTypes(CIMProperty&) const;
	virtual Array<Uint16> getSupportedPersistenceTypes() const;
	virtual void setSupportedPersistenceTypes(Array<Uint16>&);
	virtual Boolean getSupportedOtherPersistenceTypes(CIMProperty&) const;
	virtual Array<String> getSupportedOtherPersistenceTypes() const;
	virtual void setSupportedOtherPersistenceTypes(Array<String>&);
	virtual Boolean getActualFileSystemType(CIMProperty&) const;
	virtual Uint16 getActualFileSystemType() const;
	virtual void setActualFileSystemType(Uint16&);
	virtual Boolean getSupportedProperties(CIMProperty&) const;
	virtual Array<Uint16> getSupportedProperties() const;
	virtual void setSupportedProperties(Array<Uint16>&);
	virtual Boolean getSupportedOperations(CIMProperty&) const;
	virtual Array<Uint16> getSupportedOperations() const;
	virtual void setSupportedOperations(Array<Uint16>&);

	virtual Uint16 invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	);

	virtual Uint16 invokeCreateGoal(
		CIMInstance &inJob,
		String &inTemplateGoal,
		String &inSupportedGoal
	);

	virtual Uint64 invokeGetRequiredStorageSize(
		String &inFileSystemGoal,
		String &inExtentSetting,
		Uint64 &inExpectedSize,
		Uint64 &inMinimumSizeAcceptable,
		Uint64 &inMaximumSizeUsable
	);

	virtual Uint32 invokeGetElementNameCapabilities(
		Array<Uint32> &inSupportedFeatures,
		String &inElementNameMask,
		Uint16 &inMaxElementNameLen
	);



private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	Array<Uint16> _supportedPersistenceTypes;
	Array<String> _supportedOtherPersistenceTypes;
	Uint16 _actualFileSystemType;
	Array<Uint16> _supportedProperties;
	Array<Uint16> _supportedOperations;

#	include "UNIX_FileSystemCapabilitiesPrivate.h"


};

#endif /* UNIX_FILESYSTEMCAPABILITIES */
