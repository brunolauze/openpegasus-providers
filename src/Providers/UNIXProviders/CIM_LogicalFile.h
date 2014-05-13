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
2.6.0
*/


/* **** UMLPackagePath *** */
/*
CIM::System::FileElements
*/


/* **** Description *** */
/*
A LogicalFile is a named collection of data or executable code, or represents a LogicalDevice or Directory. It is located within the context of a FileSystem, on a Storage Extent.
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

			CIM_LogicalFile:
				CSCreationClassName String
				CSName String
				FSCreationClassName String
				FSName String
				CreationClassName String
				FileSize UInt64
				CreationDate DateTime
				LastModified DateTime
				LastAccessed DateTime
				Readable Boolean
				Writeable Boolean
				Executable Boolean
				CompressionMethod String
				EncryptionMethod String
				InUseCount UInt64


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_ManagedSystemElement:

			CIM_LogicalElement:

			CIM_LogicalFile:


*/

#ifndef __CIM_LOGICALFILE_H
#define __CIM_LOGICALFILE_H


#include "CIM_LogicalElement.h"


#ifndef PROPERTY_CS_CREATION_CLASS_NAME
#define PROPERTY_CS_CREATION_CLASS_NAME \
					"CSCreationClassName"
#endif

#ifndef PROPERTY_CS_NAME
#define PROPERTY_CS_NAME \
					"CSName"
#endif

#ifndef PROPERTY_FS_CREATION_CLASS_NAME
#define PROPERTY_FS_CREATION_CLASS_NAME \
					"FSCreationClassName"
#endif

#ifndef PROPERTY_FS_NAME
#define PROPERTY_FS_NAME \
					"FSName"
#endif

#ifndef PROPERTY_CREATION_CLASS_NAME
#define PROPERTY_CREATION_CLASS_NAME \
					"CreationClassName"
#endif

#ifndef PROPERTY_FILE_SIZE
#define PROPERTY_FILE_SIZE \
					"FileSize"
#endif

#ifndef PROPERTY_CREATION_DATE
#define PROPERTY_CREATION_DATE \
					"CreationDate"
#endif

#ifndef PROPERTY_LAST_MODIFIED
#define PROPERTY_LAST_MODIFIED \
					"LastModified"
#endif

#ifndef PROPERTY_LAST_ACCESSED
#define PROPERTY_LAST_ACCESSED \
					"LastAccessed"
#endif

#ifndef PROPERTY_READABLE
#define PROPERTY_READABLE \
					"Readable"
#endif

#ifndef PROPERTY_WRITEABLE
#define PROPERTY_WRITEABLE \
					"Writeable"
#endif

#ifndef PROPERTY_EXECUTABLE
#define PROPERTY_EXECUTABLE \
					"Executable"
#endif

#ifndef PROPERTY_COMPRESSION_METHOD
#define PROPERTY_COMPRESSION_METHOD \
					"CompressionMethod"
#endif

#ifndef PROPERTY_ENCRYPTION_METHOD
#define PROPERTY_ENCRYPTION_METHOD \
					"EncryptionMethod"
#endif

#ifndef PROPERTY_IN_USE_COUNT
#define PROPERTY_IN_USE_COUNT \
					"InUseCount"
#endif



class CIM_LogicalFile :
	public CIM_LogicalElement
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

	virtual Boolean getCSCreationClassName(CIMProperty&) const=0;
	virtual String getCSCreationClassName() const=0;
	virtual void setCSCreationClassName(String&)=0;
	virtual Boolean getCSName(CIMProperty&) const=0;
	virtual String getCSName() const=0;
	virtual void setCSName(String&)=0;
	virtual Boolean getFSCreationClassName(CIMProperty&) const=0;
	virtual String getFSCreationClassName() const=0;
	virtual void setFSCreationClassName(String&)=0;
	virtual Boolean getFSName(CIMProperty&) const=0;
	virtual String getFSName() const=0;
	virtual void setFSName(String&)=0;
	virtual Boolean getCreationClassName(CIMProperty&) const=0;
	virtual String getCreationClassName() const=0;
	virtual void setCreationClassName(String&)=0;
	virtual Boolean getName(CIMProperty&) const=0;
	virtual String getName() const=0;
	virtual void setName(String&)=0;
	virtual Boolean getFileSize(CIMProperty&) const=0;
	virtual Uint64 getFileSize() const=0;
	virtual void setFileSize(Uint64&)=0;
	virtual Boolean getCreationDate(CIMProperty&) const=0;
	virtual CIMDateTime getCreationDate() const=0;
	virtual void setCreationDate(CIMDateTime&)=0;
	virtual Boolean getLastModified(CIMProperty&) const=0;
	virtual CIMDateTime getLastModified() const=0;
	virtual void setLastModified(CIMDateTime&)=0;
	virtual Boolean getLastAccessed(CIMProperty&) const=0;
	virtual CIMDateTime getLastAccessed() const=0;
	virtual void setLastAccessed(CIMDateTime&)=0;
	virtual Boolean getReadable(CIMProperty&) const=0;
	virtual Boolean getReadable() const=0;
	virtual void setReadable(Boolean&)=0;
	virtual Boolean getWriteable(CIMProperty&) const=0;
	virtual Boolean getWriteable() const=0;
	virtual void setWriteable(Boolean&)=0;
	virtual Boolean getExecutable(CIMProperty&) const=0;
	virtual Boolean getExecutable() const=0;
	virtual void setExecutable(Boolean&)=0;
	virtual Boolean getCompressionMethod(CIMProperty&) const=0;
	virtual String getCompressionMethod() const=0;
	virtual void setCompressionMethod(String&)=0;
	virtual Boolean getEncryptionMethod(CIMProperty&) const=0;
	virtual String getEncryptionMethod() const=0;
	virtual void setEncryptionMethod(String&)=0;
	virtual Boolean getInUseCount(CIMProperty&) const=0;
	virtual Uint64 getInUseCount() const=0;
	virtual void setInUseCount(Uint64&)=0;


private:

};

#endif /* CIM_LOGICALFILE */
