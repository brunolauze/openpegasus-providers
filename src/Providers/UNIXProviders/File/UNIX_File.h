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
The UnixFile class holds properties that are valid for various subclasses of LogicalFile, in a Unix environment. This is defined as a separate and unique class since it is applicable to Unix files, directories, etc. It is associated via a FileIdentity relationship to these subclasses of LogicalFile. Unless this approach of creating and associating a separate class is used, it is necessary to subclass each of the inheritance hierarchies under LogicalFile, duplicating the properties in this class. The referenced _PC* and _POSIX* constants are defined in unistd.h. Some properties indicate whether the UNIX implementation support a feature such as asynchronous I/O or priority I/O. If supported, sysconf returns the value as defined in the appropriate header file such as unistd.h. If a feature is not supported, then pathconf returns a -1. In this case, the corresponding property should be returned without any value.
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

			UNIX_File:
				CSCreationClassName String
				CSName String
				FSCreationClassName String
				FSName String
				LFCreationClassName String
				LFName String
				UserID String
				GroupID String
				SaveText Boolean
				LinkCount UInt64
				FileInodeNumber String
				SetUid Boolean
				SetGid Boolean
				LastModifiedInode DateTime
				LinkMax UInt64
				NameMax UInt64
				PathMax UInt64
				PosixChownRestricted UInt64
				PosixNoTrunc UInt64
				PosixAsyncIo UInt64
				PosixPrioIo UInt64
				PosixSyncIo UInt64


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_ManagedSystemElement:

			CIM_LogicalElement:

			UNIX_File:


*/

#ifndef __UNIX_FILE_H
#define __UNIX_FILE_H


#include "CIM_LogicalElement.h"

#include "UNIX_FileDeps.h"


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

#ifndef PROPERTY_L_FCREATION_CLASS_NAME
#define PROPERTY_L_FCREATION_CLASS_NAME \
					"LFCreationClassName"
#endif

#ifndef PROPERTY_L_F_NAME
#define PROPERTY_L_F_NAME \
					"LFName"
#endif

#ifndef PROPERTY_USER_ID
#define PROPERTY_USER_ID \
					"UserID"
#endif

#ifndef PROPERTY_GROUP_ID
#define PROPERTY_GROUP_ID \
					"GroupID"
#endif

#ifndef PROPERTY_SAVE_TEXT
#define PROPERTY_SAVE_TEXT \
					"SaveText"
#endif

#ifndef PROPERTY_LINK_COUNT
#define PROPERTY_LINK_COUNT \
					"LinkCount"
#endif

#ifndef PROPERTY_FILE_INODE_NUMBER
#define PROPERTY_FILE_INODE_NUMBER \
					"FileInodeNumber"
#endif

#ifndef PROPERTY_SET_UID
#define PROPERTY_SET_UID \
					"SetUid"
#endif

#ifndef PROPERTY_SET_GID
#define PROPERTY_SET_GID \
					"SetGid"
#endif

#ifndef PROPERTY_LAST_MODIFIED_INODE
#define PROPERTY_LAST_MODIFIED_INODE \
					"LastModifiedInode"
#endif

#ifndef PROPERTY_LINK_MAX
#define PROPERTY_LINK_MAX \
					"LinkMax"
#endif

#ifndef PROPERTY_NAME_MAX
#define PROPERTY_NAME_MAX \
					"NameMax"
#endif

#ifndef PROPERTY_PATH_MAX
#define PROPERTY_PATH_MAX \
					"PathMax"
#endif

#ifndef PROPERTY_POSIX_CHOWN_RESTRICTED
#define PROPERTY_POSIX_CHOWN_RESTRICTED \
					"PosixChownRestricted"
#endif

#ifndef PROPERTY_POSIX_NO_TRUNC
#define PROPERTY_POSIX_NO_TRUNC \
					"PosixNoTrunc"
#endif

#ifndef PROPERTY_POSIX_ASYNC_IO
#define PROPERTY_POSIX_ASYNC_IO \
					"PosixAsyncIo"
#endif

#ifndef PROPERTY_POSIX_PRIO_IO
#define PROPERTY_POSIX_PRIO_IO \
					"PosixPrioIo"
#endif

#ifndef PROPERTY_POSIX_SYNC_IO
#define PROPERTY_POSIX_SYNC_IO \
					"PosixSyncIo"
#endif



class UNIX_File :
	public CIM_LogicalElement
{
public:

	UNIX_File();
	~UNIX_File();

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
	virtual Boolean getLFCreationClassName(CIMProperty&) const;
	virtual String getLFCreationClassName() const;
	virtual void setLFCreationClassName(String&);
	virtual Boolean getLFName(CIMProperty&) const;
	virtual String getLFName() const;
	virtual void setLFName(String&);
	virtual Boolean getUserID(CIMProperty&) const;
	virtual String getUserID() const;
	virtual void setUserID(String&);
	virtual Boolean getGroupID(CIMProperty&) const;
	virtual String getGroupID() const;
	virtual void setGroupID(String&);
	virtual Boolean getSaveText(CIMProperty&) const;
	virtual Boolean getSaveText() const;
	virtual void setSaveText(Boolean&);
	virtual Boolean getLinkCount(CIMProperty&) const;
	virtual Uint64 getLinkCount() const;
	virtual void setLinkCount(Uint64&);
	virtual Boolean getFileInodeNumber(CIMProperty&) const;
	virtual String getFileInodeNumber() const;
	virtual void setFileInodeNumber(String&);
	virtual Boolean getSetUid(CIMProperty&) const;
	virtual Boolean getSetUid() const;
	virtual void setSetUid(Boolean&);
	virtual Boolean getSetGid(CIMProperty&) const;
	virtual Boolean getSetGid() const;
	virtual void setSetGid(Boolean&);
	virtual Boolean getLastModifiedInode(CIMProperty&) const;
	virtual CIMDateTime getLastModifiedInode() const;
	virtual void setLastModifiedInode(CIMDateTime&);
	virtual Boolean getLinkMax(CIMProperty&) const;
	virtual Uint64 getLinkMax() const;
	virtual void setLinkMax(Uint64&);
	virtual Boolean getNameMax(CIMProperty&) const;
	virtual Uint64 getNameMax() const;
	virtual void setNameMax(Uint64&);
	virtual Boolean getPathMax(CIMProperty&) const;
	virtual Uint64 getPathMax() const;
	virtual void setPathMax(Uint64&);
	virtual Boolean getPosixChownRestricted(CIMProperty&) const;
	virtual Uint64 getPosixChownRestricted() const;
	virtual void setPosixChownRestricted(Uint64&);
	virtual Boolean getPosixNoTrunc(CIMProperty&) const;
	virtual Uint64 getPosixNoTrunc() const;
	virtual void setPosixNoTrunc(Uint64&);
	virtual Boolean getPosixAsyncIo(CIMProperty&) const;
	virtual Uint64 getPosixAsyncIo() const;
	virtual void setPosixAsyncIo(Uint64&);
	virtual Boolean getPosixPrioIo(CIMProperty&) const;
	virtual Uint64 getPosixPrioIo() const;
	virtual void setPosixPrioIo(Uint64&);
	virtual Boolean getPosixSyncIo(CIMProperty&) const;
	virtual Uint64 getPosixSyncIo() const;
	virtual void setPosixSyncIo(Uint64&);


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
	String _lFCreationClassName;
	String _lFName;
	String _userID;
	String _groupID;
	Boolean _saveText;
	Uint64 _linkCount;
	String _fileInodeNumber;
	Boolean _setUid;
	Boolean _setGid;
	CIMDateTime _lastModifiedInode;
	Uint64 _linkMax;
	Uint64 _nameMax;
	Uint64 _pathMax;
	Uint64 _posixChownRestricted;
	Uint64 _posixNoTrunc;
	Uint64 _posixAsyncIo;
	Uint64 _posixPrioIo;
	Uint64 _posixSyncIo;

#	include "UNIX_FilePrivate.h"


};

#endif /* UNIX_FILE */
