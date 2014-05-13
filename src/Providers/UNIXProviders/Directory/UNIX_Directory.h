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
CIM::System::Unix
*/


/* **** Description *** */
/*
UnixDirectory is a type of File that logically groups UnixFiles 'contained' in it.
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

			CIM_Directory:

			UNIX_Directory:
				FileSizeBits UInt64


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_ManagedSystemElement:

			CIM_LogicalElement:

			CIM_LogicalFile:

			CIM_Directory:

			UNIX_Directory:


*/

#ifndef __UNIX_DIRECTORY_H
#define __UNIX_DIRECTORY_H


#include "CIM_Directory.h"

#include "UNIX_DirectoryDeps.h"


#ifndef PROPERTY_FILE_SIZE_BITS
#define PROPERTY_FILE_SIZE_BITS \
					"FileSizeBits"
#endif



class UNIX_Directory :
	public CIM_Directory
{
public:

	UNIX_Directory();
	~UNIX_Directory();

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
	virtual Boolean getCSCreationClassName(CIMProperty&) const;
	virtual String getCSCreationClassName() const;
	virtual void setCSCreationClassName(String&);
	virtual Boolean getCSName(CIMProperty&) const;
	virtual String getCSName() const;
	virtual void setCSName(String&);
	virtual Boolean getFSCreationClassName(CIMProperty&) const;
	virtual String getFSCreationClassName() const;
	virtual void setFSCreationClassName(String&);
	virtual Boolean getFSName(CIMProperty&) const;
	virtual String getFSName() const;
	virtual void setFSName(String&);
	virtual Boolean getCreationClassName(CIMProperty&) const;
	virtual String getCreationClassName() const;
	virtual void setCreationClassName(String&);
	virtual Boolean getFileSize(CIMProperty&) const;
	virtual Uint64 getFileSize() const;
	virtual void setFileSize(Uint64&);
	virtual Boolean getCreationDate(CIMProperty&) const;
	virtual CIMDateTime getCreationDate() const;
	virtual void setCreationDate(CIMDateTime&);
	virtual Boolean getLastModified(CIMProperty&) const;
	virtual CIMDateTime getLastModified() const;
	virtual void setLastModified(CIMDateTime&);
	virtual Boolean getLastAccessed(CIMProperty&) const;
	virtual CIMDateTime getLastAccessed() const;
	virtual void setLastAccessed(CIMDateTime&);
	virtual Boolean getReadable(CIMProperty&) const;
	virtual Boolean getReadable() const;
	virtual void setReadable(Boolean&);
	virtual Boolean getWriteable(CIMProperty&) const;
	virtual Boolean getWriteable() const;
	virtual void setWriteable(Boolean&);
	virtual Boolean getExecutable(CIMProperty&) const;
	virtual Boolean getExecutable() const;
	virtual void setExecutable(Boolean&);
	virtual Boolean getCompressionMethod(CIMProperty&) const;
	virtual String getCompressionMethod() const;
	virtual void setCompressionMethod(String&);
	virtual Boolean getEncryptionMethod(CIMProperty&) const;
	virtual String getEncryptionMethod() const;
	virtual void setEncryptionMethod(String&);
	virtual Boolean getInUseCount(CIMProperty&) const;
	virtual Uint64 getInUseCount() const;
	virtual void setInUseCount(Uint64&);
	virtual Boolean getFileSizeBits(CIMProperty&) const;
	virtual Uint64 getFileSizeBits() const;
	virtual void setFileSizeBits(Uint64&);


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
	String _cSCreationClassName;
	String _cSName;
	String _fSCreationClassName;
	String _fSName;
	String _creationClassName;
	Uint64 _fileSize;
	CIMDateTime _creationDate;
	CIMDateTime _lastModified;
	CIMDateTime _lastAccessed;
	Boolean _readable;
	Boolean _writeable;
	Boolean _executable;
	String _compressionMethod;
	String _encryptionMethod;
	Uint64 _inUseCount;
	Uint64 _fileSizeBits;

#	include "UNIX_DirectoryPrivate.h"


};

#endif /* UNIX_DIRECTORY */
