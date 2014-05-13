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


/* **** Association *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.39.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Core::CoreElements
*/


/* **** Description *** */
/*
Indicates that two ManagedElements were aligned or made to be equivalent at the specified point in time. If the Boolean property SyncMaintained is true, then synchronization of the Elements is preserved. Both like and unlike objects can be synchronized. For example, two WatchDog timers can be aligned, or the contents of a LogicalFile can be synchronized with the contents of a StorageExtent.
*/


/*
			 *** Properties ***

			UNIX_Synchronized:
				SystemElement Reference
				SyncedElement Reference
				WhenSynced DateTime
				SyncMaintained Boolean
				CopyState UInt16
				Mode UInt16
				PercentSynced UInt16
				ProgressStatus UInt16
				RequestedCopyState UInt16
				SyncType UInt16
				WhenActivated DateTime
				WhenDeactivated DateTime
				WhenEstablished DateTime
				WhenSuspended DateTime
				WhenSynchronized DateTime
				CopyRecoveryMode UInt16
				FailedCopyStopsHostIO Boolean


*/


/*
			 *** Methods ***

			UNIX_Synchronized:


*/

#ifndef __UNIX_SYNCHRONIZED_H
#define __UNIX_SYNCHRONIZED_H


#include "CIM_ClassBase.h"

#include "UNIX_SynchronizedDeps.h"


#ifndef PROPERTY_SYSTEM_ELEMENT
#define PROPERTY_SYSTEM_ELEMENT \
					"SystemElement"
#endif

#ifndef PROPERTY_SYNCED_ELEMENT
#define PROPERTY_SYNCED_ELEMENT \
					"SyncedElement"
#endif

#ifndef PROPERTY_WHEN_SYNCED
#define PROPERTY_WHEN_SYNCED \
					"WhenSynced"
#endif

#ifndef PROPERTY_SYNC_MAINTAINED
#define PROPERTY_SYNC_MAINTAINED \
					"SyncMaintained"
#endif

#ifndef PROPERTY_COPY_STATE
#define PROPERTY_COPY_STATE \
					"CopyState"
#endif

#ifndef PROPERTY_MODE
#define PROPERTY_MODE \
					"Mode"
#endif

#ifndef PROPERTY_PERCENT_SYNCED
#define PROPERTY_PERCENT_SYNCED \
					"PercentSynced"
#endif

#ifndef PROPERTY_PROGRESS_STATUS
#define PROPERTY_PROGRESS_STATUS \
					"ProgressStatus"
#endif

#ifndef PROPERTY_REQUESTED_COPY_STATE
#define PROPERTY_REQUESTED_COPY_STATE \
					"RequestedCopyState"
#endif

#ifndef PROPERTY_SYNC_TYPE
#define PROPERTY_SYNC_TYPE \
					"SyncType"
#endif

#ifndef PROPERTY_WHEN_ACTIVATED
#define PROPERTY_WHEN_ACTIVATED \
					"WhenActivated"
#endif

#ifndef PROPERTY_WHEN_DEACTIVATED
#define PROPERTY_WHEN_DEACTIVATED \
					"WhenDeactivated"
#endif

#ifndef PROPERTY_WHEN_ESTABLISHED
#define PROPERTY_WHEN_ESTABLISHED \
					"WhenEstablished"
#endif

#ifndef PROPERTY_WHEN_SUSPENDED
#define PROPERTY_WHEN_SUSPENDED \
					"WhenSuspended"
#endif

#ifndef PROPERTY_WHEN_SYNCHRONIZED
#define PROPERTY_WHEN_SYNCHRONIZED \
					"WhenSynchronized"
#endif

#ifndef PROPERTY_COPY_RECOVERY_MODE
#define PROPERTY_COPY_RECOVERY_MODE \
					"CopyRecoveryMode"
#endif

#ifndef PROPERTY_FAILED_COPY_STOPS_HOST_IO
#define PROPERTY_FAILED_COPY_STOPS_HOST_IO \
					"FailedCopyStopsHostIO"
#endif



class UNIX_Synchronized :
	public CIM_ClassBase
{
public:

	UNIX_Synchronized();
	~UNIX_Synchronized();

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

	virtual Boolean getSystemElement(CIMProperty&) const;
	virtual CIMInstance getSystemElement() const;
	virtual void setSystemElement(CIMInstance&);
	virtual Boolean getSyncedElement(CIMProperty&) const;
	virtual CIMInstance getSyncedElement() const;
	virtual void setSyncedElement(CIMInstance&);
	virtual Boolean getWhenSynced(CIMProperty&) const;
	virtual CIMDateTime getWhenSynced() const;
	virtual void setWhenSynced(CIMDateTime&);
	virtual Boolean getSyncMaintained(CIMProperty&) const;
	virtual Boolean getSyncMaintained() const;
	virtual void setSyncMaintained(Boolean&);
	virtual Boolean getCopyState(CIMProperty&) const;
	virtual Uint16 getCopyState() const;
	virtual void setCopyState(Uint16&);
	virtual Boolean getMode(CIMProperty&) const;
	virtual Uint16 getMode() const;
	virtual void setMode(Uint16&);
	virtual Boolean getPercentSynced(CIMProperty&) const;
	virtual Uint16 getPercentSynced() const;
	virtual void setPercentSynced(Uint16&);
	virtual Boolean getProgressStatus(CIMProperty&) const;
	virtual Uint16 getProgressStatus() const;
	virtual void setProgressStatus(Uint16&);
	virtual Boolean getRequestedCopyState(CIMProperty&) const;
	virtual Uint16 getRequestedCopyState() const;
	virtual void setRequestedCopyState(Uint16&);
	virtual Boolean getSyncType(CIMProperty&) const;
	virtual Uint16 getSyncType() const;
	virtual void setSyncType(Uint16&);
	virtual Boolean getWhenActivated(CIMProperty&) const;
	virtual CIMDateTime getWhenActivated() const;
	virtual void setWhenActivated(CIMDateTime&);
	virtual Boolean getWhenDeactivated(CIMProperty&) const;
	virtual CIMDateTime getWhenDeactivated() const;
	virtual void setWhenDeactivated(CIMDateTime&);
	virtual Boolean getWhenEstablished(CIMProperty&) const;
	virtual CIMDateTime getWhenEstablished() const;
	virtual void setWhenEstablished(CIMDateTime&);
	virtual Boolean getWhenSuspended(CIMProperty&) const;
	virtual CIMDateTime getWhenSuspended() const;
	virtual void setWhenSuspended(CIMDateTime&);
	virtual Boolean getWhenSynchronized(CIMProperty&) const;
	virtual CIMDateTime getWhenSynchronized() const;
	virtual void setWhenSynchronized(CIMDateTime&);
	virtual Boolean getCopyRecoveryMode(CIMProperty&) const;
	virtual Uint16 getCopyRecoveryMode() const;
	virtual void setCopyRecoveryMode(Uint16&);
	virtual Boolean getFailedCopyStopsHostIO(CIMProperty&) const;
	virtual Boolean getFailedCopyStopsHostIO() const;
	virtual void setFailedCopyStopsHostIO(Boolean&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _systemElement;
	CIMInstance _syncedElement;
	CIMDateTime _whenSynced;
	Boolean _syncMaintained;
	Uint16 _copyState;
	Uint16 _mode;
	Uint16 _percentSynced;
	Uint16 _progressStatus;
	Uint16 _requestedCopyState;
	Uint16 _syncType;
	CIMDateTime _whenActivated;
	CIMDateTime _whenDeactivated;
	CIMDateTime _whenEstablished;
	CIMDateTime _whenSuspended;
	CIMDateTime _whenSynchronized;
	Uint16 _copyRecoveryMode;
	Boolean _failedCopyStopsHostIO;

#	include "UNIX_SynchronizedPrivate.h"


};

#endif /* UNIX_SYNCHRONIZED */
