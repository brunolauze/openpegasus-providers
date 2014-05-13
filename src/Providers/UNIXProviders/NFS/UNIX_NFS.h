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


/* **** Deprecated *** */
/*
CIM_FileShare
*/


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
A class derived from RemoteFileSystem representing that the FileSystem is mounted, using the NFS protocol, from a ComputerSystem. The properties of the NFS object deal with the operational aspects of the mount and represent the client-side configuration for NFS access. The FileSystemType (inherited from FileSystem) should be set to indicate the type of this FileSystem as it appears to the client. 
This has been deprecated by CIM_FileShare, which works with the hosted service model. The HostedShare association will specify how the remote entity is imported and the ImportedFileShareSetting class provides the resources needed for the share to function. The properties of ImportedFileShareSetting deprecate specific properties of this class. All properties except "Interrupt" have been deprecated - it is not clear what or how this property should be deprecated.
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

			CIM_EnabledLogicalElement:
				EnabledState UInt16
				OtherEnabledState String
				RequestedState UInt16
				EnabledDefault UInt16
				TimeOfLastStateChange DateTime
				AvailableRequestedStates UInt16
				TransitioningToState UInt16

			UNIX_FileSystem:
				CSCreationClassName String
				CSName String
				CreationClassName String
				Root String
				BlockSize UInt64
				FileSystemSize UInt64
				AvailableSpace UInt64
				ReadOnly Boolean
				EncryptionMethod String
				CompressionMethod String
				CaseSensitive Boolean
				CasePreserved Boolean
				CodeSet UInt16
				MaxFileNameLength UInt32
				ClusterSize UInt32
				FileSystemType String
				PersistenceType UInt16
				OtherPersistenceType String
				NumberOfFiles UInt64
				IsFixedSize UInt16
				ResizeIncrement UInt64

			UNIX_RemoteFileSystem:

			UNIX_NFS:
				HardMount Boolean
				ForegroundMount Boolean
				Interrupt Boolean
				MountFailureRetries UInt16
				RetransmissionAttempts UInt16
				RetransmissionTimeout UInt32
				ReadBufferSize UInt64
				WriteBufferSize UInt64
				ServerCommunicationPort UInt32
				AttributeCaching Boolean
				AttributeCachingForRegularFilesMin UInt16
				AttributeCachingForRegularFilesMax UInt16
				AttributeCachingForDirectoriesMin UInt16
				AttributeCachingForDirectoriesMax UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_ManagedSystemElement:

			CIM_LogicalElement:

			CIM_EnabledLogicalElement:
				RequestStateChange UInt32

			UNIX_FileSystem:

			UNIX_RemoteFileSystem:

			UNIX_NFS:


*/

#ifndef __UNIX_NFS_H
#define __UNIX_NFS_H


#include <RemoteFileSystem/UNIX_RemoteFileSystem.h>
#include <ConcreteJob/UNIX_ConcreteJob.h>

#include "UNIX_NFSDeps.h"


#ifndef PROPERTY_HARD_MOUNT
#define PROPERTY_HARD_MOUNT \
					"HardMount"
#endif

#ifndef PROPERTY_FOREGROUND_MOUNT
#define PROPERTY_FOREGROUND_MOUNT \
					"ForegroundMount"
#endif

#ifndef PROPERTY_INTERRUPT
#define PROPERTY_INTERRUPT \
					"Interrupt"
#endif

#ifndef PROPERTY_MOUNT_FAILURE_RETRIES
#define PROPERTY_MOUNT_FAILURE_RETRIES \
					"MountFailureRetries"
#endif

#ifndef PROPERTY_RETRANSMISSION_ATTEMPTS
#define PROPERTY_RETRANSMISSION_ATTEMPTS \
					"RetransmissionAttempts"
#endif

#ifndef PROPERTY_RETRANSMISSION_TIMEOUT
#define PROPERTY_RETRANSMISSION_TIMEOUT \
					"RetransmissionTimeout"
#endif

#ifndef PROPERTY_READ_BUFFER_SIZE
#define PROPERTY_READ_BUFFER_SIZE \
					"ReadBufferSize"
#endif

#ifndef PROPERTY_WRITE_BUFFER_SIZE
#define PROPERTY_WRITE_BUFFER_SIZE \
					"WriteBufferSize"
#endif

#ifndef PROPERTY_SERVER_COMMUNICATION_PORT
#define PROPERTY_SERVER_COMMUNICATION_PORT \
					"ServerCommunicationPort"
#endif

#ifndef PROPERTY_ATTRIBUTE_CACHING
#define PROPERTY_ATTRIBUTE_CACHING \
					"AttributeCaching"
#endif

#ifndef PROPERTY_ATTRIBUTE_CACHING_FOR_REGULAR_FILES_MIN
#define PROPERTY_ATTRIBUTE_CACHING_FOR_REGULAR_FILES_MIN \
					"AttributeCachingForRegularFilesMin"
#endif

#ifndef PROPERTY_ATTRIBUTE_CACHING_FOR_REGULAR_FILES_MAX
#define PROPERTY_ATTRIBUTE_CACHING_FOR_REGULAR_FILES_MAX \
					"AttributeCachingForRegularFilesMax"
#endif

#ifndef PROPERTY_ATTRIBUTE_CACHING_FOR_DIRECTORIES_MIN
#define PROPERTY_ATTRIBUTE_CACHING_FOR_DIRECTORIES_MIN \
					"AttributeCachingForDirectoriesMin"
#endif

#ifndef PROPERTY_ATTRIBUTE_CACHING_FOR_DIRECTORIES_MAX
#define PROPERTY_ATTRIBUTE_CACHING_FOR_DIRECTORIES_MAX \
					"AttributeCachingForDirectoriesMax"
#endif



class UNIX_NFS :
	public UNIX_RemoteFileSystem
{
public:

	UNIX_NFS();
	~UNIX_NFS();

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
	virtual Boolean getEnabledState(CIMProperty&) const;
	virtual Uint16 getEnabledState() const;
	virtual void setEnabledState(Uint16&);
	virtual Boolean getOtherEnabledState(CIMProperty&) const;
	virtual String getOtherEnabledState() const;
	virtual void setOtherEnabledState(String&);
	virtual Boolean getRequestedState(CIMProperty&) const;
	virtual Uint16 getRequestedState() const;
	virtual void setRequestedState(Uint16&);
	virtual Boolean getEnabledDefault(CIMProperty&) const;
	virtual Uint16 getEnabledDefault() const;
	virtual void setEnabledDefault(Uint16&);
	virtual Boolean getTimeOfLastStateChange(CIMProperty&) const;
	virtual CIMDateTime getTimeOfLastStateChange() const;
	virtual void setTimeOfLastStateChange(CIMDateTime&);
	virtual Boolean getAvailableRequestedStates(CIMProperty&) const;
	virtual Array<Uint16> getAvailableRequestedStates() const;
	virtual void setAvailableRequestedStates(Array<Uint16>&);
	virtual Boolean getTransitioningToState(CIMProperty&) const;
	virtual Uint16 getTransitioningToState() const;
	virtual void setTransitioningToState(Uint16&);
	virtual Boolean getCSCreationClassName(CIMProperty&) const;
	virtual String getCSCreationClassName() const;
	virtual void setCSCreationClassName(String&);
	virtual Boolean getCSName(CIMProperty&) const;
	virtual String getCSName() const;
	virtual void setCSName(String&);
	virtual Boolean getCreationClassName(CIMProperty&) const;
	virtual String getCreationClassName() const;
	virtual void setCreationClassName(String&);
	virtual Boolean getRoot(CIMProperty&) const;
	virtual String getRoot() const;
	virtual void setRoot(String&);
	virtual Boolean getBlockSize(CIMProperty&) const;
	virtual Uint64 getBlockSize() const;
	virtual void setBlockSize(Uint64&);
	virtual Boolean getFileSystemSize(CIMProperty&) const;
	virtual Uint64 getFileSystemSize() const;
	virtual void setFileSystemSize(Uint64&);
	virtual Boolean getAvailableSpace(CIMProperty&) const;
	virtual Uint64 getAvailableSpace() const;
	virtual void setAvailableSpace(Uint64&);
	virtual Boolean getReadOnly(CIMProperty&) const;
	virtual Boolean getReadOnly() const;
	virtual void setReadOnly(Boolean&);
	virtual Boolean getEncryptionMethod(CIMProperty&) const;
	virtual String getEncryptionMethod() const;
	virtual void setEncryptionMethod(String&);
	virtual Boolean getCompressionMethod(CIMProperty&) const;
	virtual String getCompressionMethod() const;
	virtual void setCompressionMethod(String&);
	virtual Boolean getCaseSensitive(CIMProperty&) const;
	virtual Boolean getCaseSensitive() const;
	virtual void setCaseSensitive(Boolean&);
	virtual Boolean getCasePreserved(CIMProperty&) const;
	virtual Boolean getCasePreserved() const;
	virtual void setCasePreserved(Boolean&);
	virtual Boolean getCodeSet(CIMProperty&) const;
	virtual Array<Uint16> getCodeSet() const;
	virtual void setCodeSet(Array<Uint16>&);
	virtual Boolean getMaxFileNameLength(CIMProperty&) const;
	virtual Uint32 getMaxFileNameLength() const;
	virtual void setMaxFileNameLength(Uint32&);
	virtual Boolean getClusterSize(CIMProperty&) const;
	virtual Uint32 getClusterSize() const;
	virtual void setClusterSize(Uint32&);
	virtual Boolean getFileSystemType(CIMProperty&) const;
	virtual String getFileSystemType() const;
	virtual void setFileSystemType(String&);
	virtual Boolean getPersistenceType(CIMProperty&) const;
	virtual Uint16 getPersistenceType() const;
	virtual void setPersistenceType(Uint16&);
	virtual Boolean getOtherPersistenceType(CIMProperty&) const;
	virtual String getOtherPersistenceType() const;
	virtual void setOtherPersistenceType(String&);
	virtual Boolean getNumberOfFiles(CIMProperty&) const;
	virtual Uint64 getNumberOfFiles() const;
	virtual void setNumberOfFiles(Uint64&);
	virtual Boolean getIsFixedSize(CIMProperty&) const;
	virtual Uint16 getIsFixedSize() const;
	virtual void setIsFixedSize(Uint16&);
	virtual Boolean getResizeIncrement(CIMProperty&) const;
	virtual Uint64 getResizeIncrement() const;
	virtual void setResizeIncrement(Uint64&);
	virtual Boolean getHardMount(CIMProperty&) const;
	virtual Boolean getHardMount() const;
	virtual void setHardMount(Boolean&);
	virtual Boolean getForegroundMount(CIMProperty&) const;
	virtual Boolean getForegroundMount() const;
	virtual void setForegroundMount(Boolean&);
	virtual Boolean getInterrupt(CIMProperty&) const;
	virtual Boolean getInterrupt() const;
	virtual void setInterrupt(Boolean&);
	virtual Boolean getMountFailureRetries(CIMProperty&) const;
	virtual Uint16 getMountFailureRetries() const;
	virtual void setMountFailureRetries(Uint16&);
	virtual Boolean getRetransmissionAttempts(CIMProperty&) const;
	virtual Uint16 getRetransmissionAttempts() const;
	virtual void setRetransmissionAttempts(Uint16&);
	virtual Boolean getRetransmissionTimeout(CIMProperty&) const;
	virtual Uint32 getRetransmissionTimeout() const;
	virtual void setRetransmissionTimeout(Uint32&);
	virtual Boolean getReadBufferSize(CIMProperty&) const;
	virtual Uint64 getReadBufferSize() const;
	virtual void setReadBufferSize(Uint64&);
	virtual Boolean getWriteBufferSize(CIMProperty&) const;
	virtual Uint64 getWriteBufferSize() const;
	virtual void setWriteBufferSize(Uint64&);
	virtual Boolean getServerCommunicationPort(CIMProperty&) const;
	virtual Uint32 getServerCommunicationPort() const;
	virtual void setServerCommunicationPort(Uint32&);
	virtual Boolean getAttributeCaching(CIMProperty&) const;
	virtual Boolean getAttributeCaching() const;
	virtual void setAttributeCaching(Boolean&);
	virtual Boolean getAttributeCachingForRegularFilesMin(CIMProperty&) const;
	virtual Uint16 getAttributeCachingForRegularFilesMin() const;
	virtual void setAttributeCachingForRegularFilesMin(Uint16&);
	virtual Boolean getAttributeCachingForRegularFilesMax(CIMProperty&) const;
	virtual Uint16 getAttributeCachingForRegularFilesMax() const;
	virtual void setAttributeCachingForRegularFilesMax(Uint16&);
	virtual Boolean getAttributeCachingForDirectoriesMin(CIMProperty&) const;
	virtual Uint16 getAttributeCachingForDirectoriesMin() const;
	virtual void setAttributeCachingForDirectoriesMin(Uint16&);
	virtual Boolean getAttributeCachingForDirectoriesMax(CIMProperty&) const;
	virtual Uint16 getAttributeCachingForDirectoriesMax() const;
	virtual void setAttributeCachingForDirectoriesMax(Uint16&);

	virtual Uint32 invokeRequestStateChange(
		Uint16 &inRequestedState,
		CIMInstance &inJob,
		CIMDateTime &inTimeoutPeriod
	);



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
	Uint16 _enabledState;
	String _otherEnabledState;
	Uint16 _requestedState;
	Uint16 _enabledDefault;
	CIMDateTime _timeOfLastStateChange;
	Array<Uint16> _availableRequestedStates;
	Uint16 _transitioningToState;
	String _cSCreationClassName;
	String _cSName;
	String _creationClassName;
	String _root;
	Uint64 _blockSize;
	Uint64 _fileSystemSize;
	Uint64 _availableSpace;
	Boolean _readOnly;
	String _encryptionMethod;
	String _compressionMethod;
	Boolean _caseSensitive;
	Boolean _casePreserved;
	Array<Uint16> _codeSet;
	Uint32 _maxFileNameLength;
	Uint32 _clusterSize;
	String _fileSystemType;
	Uint16 _persistenceType;
	String _otherPersistenceType;
	Uint64 _numberOfFiles;
	Uint16 _isFixedSize;
	Uint64 _resizeIncrement;
	Boolean _hardMount;
	Boolean _foregroundMount;
	Boolean _interrupt;
	Uint16 _mountFailureRetries;
	Uint16 _retransmissionAttempts;
	Uint32 _retransmissionTimeout;
	Uint64 _readBufferSize;
	Uint64 _writeBufferSize;
	Uint32 _serverCommunicationPort;
	Boolean _attributeCaching;
	Uint16 _attributeCachingForRegularFilesMin;
	Uint16 _attributeCachingForRegularFilesMax;
	Uint16 _attributeCachingForDirectoriesMin;
	Uint16 _attributeCachingForDirectoriesMax;

#	include "UNIX_NFSPrivate.h"


};

#endif /* UNIX_NFS */
