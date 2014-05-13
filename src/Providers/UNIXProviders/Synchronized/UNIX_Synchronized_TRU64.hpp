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


using PROVIDER_LIB_NS::CIMHelper;


UNIX_Synchronized::UNIX_Synchronized(void)
{
}

UNIX_Synchronized::~UNIX_Synchronized(void)
{
}

Boolean UNIX_Synchronized::getSystemElement(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_ELEMENT, getSystemElement());
	return true;
}

CIMInstance UNIX_Synchronized::getSystemElement() const
{
	return _systemElement;
}

void UNIX_Synchronized::setSystemElement(CIMInstance &value)
{
	_systemElement = value;
}

Boolean UNIX_Synchronized::getSyncedElement(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYNCED_ELEMENT, getSyncedElement());
	return true;
}

CIMInstance UNIX_Synchronized::getSyncedElement() const
{
	return _syncedElement;
}

void UNIX_Synchronized::setSyncedElement(CIMInstance &value)
{
	_syncedElement = value;
}

Boolean UNIX_Synchronized::getWhenSynced(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WHEN_SYNCED, getWhenSynced());
	return true;
}

CIMDateTime UNIX_Synchronized::getWhenSynced() const
{
	return _whenSynced;
}

void UNIX_Synchronized::setWhenSynced(CIMDateTime &value)
{
	_whenSynced = value;
}

Boolean UNIX_Synchronized::getSyncMaintained(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYNC_MAINTAINED, getSyncMaintained());
	return true;
}

Boolean UNIX_Synchronized::getSyncMaintained() const
{
	return _syncMaintained;
}

void UNIX_Synchronized::setSyncMaintained(Boolean &value)
{
	_syncMaintained = value;
}

Boolean UNIX_Synchronized::getCopyState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COPY_STATE, getCopyState());
	return true;
}

Uint16 UNIX_Synchronized::getCopyState() const
{
	return _copyState;
}

void UNIX_Synchronized::setCopyState(Uint16 &value)
{
	_copyState = value;
}

Boolean UNIX_Synchronized::getMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MODE, getMode());
	return true;
}

Uint16 UNIX_Synchronized::getMode() const
{
	return _mode;
}

void UNIX_Synchronized::setMode(Uint16 &value)
{
	_mode = value;
}

Boolean UNIX_Synchronized::getPercentSynced(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERCENT_SYNCED, getPercentSynced());
	return true;
}

Uint16 UNIX_Synchronized::getPercentSynced() const
{
	return _percentSynced;
}

void UNIX_Synchronized::setPercentSynced(Uint16 &value)
{
	_percentSynced = value;
}

Boolean UNIX_Synchronized::getProgressStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROGRESS_STATUS, getProgressStatus());
	return true;
}

Uint16 UNIX_Synchronized::getProgressStatus() const
{
	return _progressStatus;
}

void UNIX_Synchronized::setProgressStatus(Uint16 &value)
{
	_progressStatus = value;
}

Boolean UNIX_Synchronized::getRequestedCopyState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_COPY_STATE, getRequestedCopyState());
	return true;
}

Uint16 UNIX_Synchronized::getRequestedCopyState() const
{
	return _requestedCopyState;
}

void UNIX_Synchronized::setRequestedCopyState(Uint16 &value)
{
	_requestedCopyState = value;
}

Boolean UNIX_Synchronized::getSyncType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYNC_TYPE, getSyncType());
	return true;
}

Uint16 UNIX_Synchronized::getSyncType() const
{
	return _syncType;
}

void UNIX_Synchronized::setSyncType(Uint16 &value)
{
	_syncType = value;
}

Boolean UNIX_Synchronized::getWhenActivated(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WHEN_ACTIVATED, getWhenActivated());
	return true;
}

CIMDateTime UNIX_Synchronized::getWhenActivated() const
{
	return _whenActivated;
}

void UNIX_Synchronized::setWhenActivated(CIMDateTime &value)
{
	_whenActivated = value;
}

Boolean UNIX_Synchronized::getWhenDeactivated(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WHEN_DEACTIVATED, getWhenDeactivated());
	return true;
}

CIMDateTime UNIX_Synchronized::getWhenDeactivated() const
{
	return _whenDeactivated;
}

void UNIX_Synchronized::setWhenDeactivated(CIMDateTime &value)
{
	_whenDeactivated = value;
}

Boolean UNIX_Synchronized::getWhenEstablished(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WHEN_ESTABLISHED, getWhenEstablished());
	return true;
}

CIMDateTime UNIX_Synchronized::getWhenEstablished() const
{
	return _whenEstablished;
}

void UNIX_Synchronized::setWhenEstablished(CIMDateTime &value)
{
	_whenEstablished = value;
}

Boolean UNIX_Synchronized::getWhenSuspended(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WHEN_SUSPENDED, getWhenSuspended());
	return true;
}

CIMDateTime UNIX_Synchronized::getWhenSuspended() const
{
	return _whenSuspended;
}

void UNIX_Synchronized::setWhenSuspended(CIMDateTime &value)
{
	_whenSuspended = value;
}

Boolean UNIX_Synchronized::getWhenSynchronized(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WHEN_SYNCHRONIZED, getWhenSynchronized());
	return true;
}

CIMDateTime UNIX_Synchronized::getWhenSynchronized() const
{
	return _whenSynchronized;
}

void UNIX_Synchronized::setWhenSynchronized(CIMDateTime &value)
{
	_whenSynchronized = value;
}

Boolean UNIX_Synchronized::getCopyRecoveryMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COPY_RECOVERY_MODE, getCopyRecoveryMode());
	return true;
}

Uint16 UNIX_Synchronized::getCopyRecoveryMode() const
{
	return _copyRecoveryMode;
}

void UNIX_Synchronized::setCopyRecoveryMode(Uint16 &value)
{
	_copyRecoveryMode = value;
}

Boolean UNIX_Synchronized::getFailedCopyStopsHostIO(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FAILED_COPY_STOPS_HOST_IO, getFailedCopyStopsHostIO());
	return true;
}

Boolean UNIX_Synchronized::getFailedCopyStopsHostIO() const
{
	return _failedCopyStopsHostIO;
}

void UNIX_Synchronized::setFailedCopyStopsHostIO(Boolean &value)
{
	_failedCopyStopsHostIO = value;
}


void UNIX_Synchronized::clearInstance()
{

	// _systemElement = CIMInstance(CIMName("CIM_ManagedElement"));
	// _syncedElement = CIMInstance(CIMName("CIM_ManagedElement"));
	_whenSynced = CIMHelper::getCurrentTime();
	_syncMaintained = Boolean(false);
	_copyState = Uint16(0);
	_mode = Uint16(0);
	_percentSynced = Uint16(0);
	_progressStatus = Uint16(0);
	_requestedCopyState = Uint16(0);
	_syncType = Uint16(0);
	_whenActivated = CIMHelper::getCurrentTime();
	_whenDeactivated = CIMHelper::getCurrentTime();
	_whenEstablished = CIMHelper::getCurrentTime();
	_whenSuspended = CIMHelper::getCurrentTime();
	_whenSynchronized = CIMHelper::getCurrentTime();
	_copyRecoveryMode = Uint16(0);
	_failedCopyStopsHostIO = Boolean(false);

}

Boolean UNIX_Synchronized::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "SystemElement"))
			{
				CIMInstance systemElementValue;
				property.getValue().get(systemElementValue);
				setSystemElement(systemElementValue);
			}
			else if (String::equal(property.getName().getString(), "SyncedElement"))
			{
				CIMInstance syncedElementValue;
				property.getValue().get(syncedElementValue);
				setSyncedElement(syncedElementValue);
			}
			else if (String::equal(property.getName().getString(), "WhenSynced"))
			{
				CIMDateTime whenSyncedValue;
				property.getValue().get(whenSyncedValue);
				setWhenSynced(whenSyncedValue);
			}
			else if (String::equal(property.getName().getString(), "SyncMaintained"))
			{
				Boolean syncMaintainedValue;
				property.getValue().get(syncMaintainedValue);
				setSyncMaintained(syncMaintainedValue);
			}
			else if (String::equal(property.getName().getString(), "CopyState"))
			{
				Uint16 copyStateValue;
				property.getValue().get(copyStateValue);
				setCopyState(copyStateValue);
			}
			else if (String::equal(property.getName().getString(), "Mode"))
			{
				Uint16 modeValue;
				property.getValue().get(modeValue);
				setMode(modeValue);
			}
			else if (String::equal(property.getName().getString(), "PercentSynced"))
			{
				Uint16 percentSyncedValue;
				property.getValue().get(percentSyncedValue);
				setPercentSynced(percentSyncedValue);
			}
			else if (String::equal(property.getName().getString(), "ProgressStatus"))
			{
				Uint16 progressStatusValue;
				property.getValue().get(progressStatusValue);
				setProgressStatus(progressStatusValue);
			}
			else if (String::equal(property.getName().getString(), "RequestedCopyState"))
			{
				Uint16 requestedCopyStateValue;
				property.getValue().get(requestedCopyStateValue);
				setRequestedCopyState(requestedCopyStateValue);
			}
			else if (String::equal(property.getName().getString(), "SyncType"))
			{
				Uint16 syncTypeValue;
				property.getValue().get(syncTypeValue);
				setSyncType(syncTypeValue);
			}
			else if (String::equal(property.getName().getString(), "WhenActivated"))
			{
				CIMDateTime whenActivatedValue;
				property.getValue().get(whenActivatedValue);
				setWhenActivated(whenActivatedValue);
			}
			else if (String::equal(property.getName().getString(), "WhenDeactivated"))
			{
				CIMDateTime whenDeactivatedValue;
				property.getValue().get(whenDeactivatedValue);
				setWhenDeactivated(whenDeactivatedValue);
			}
			else if (String::equal(property.getName().getString(), "WhenEstablished"))
			{
				CIMDateTime whenEstablishedValue;
				property.getValue().get(whenEstablishedValue);
				setWhenEstablished(whenEstablishedValue);
			}
			else if (String::equal(property.getName().getString(), "WhenSuspended"))
			{
				CIMDateTime whenSuspendedValue;
				property.getValue().get(whenSuspendedValue);
				setWhenSuspended(whenSuspendedValue);
			}
			else if (String::equal(property.getName().getString(), "WhenSynchronized"))
			{
				CIMDateTime whenSynchronizedValue;
				property.getValue().get(whenSynchronizedValue);
				setWhenSynchronized(whenSynchronizedValue);
			}
			else if (String::equal(property.getName().getString(), "CopyRecoveryMode"))
			{
				Uint16 copyRecoveryModeValue;
				property.getValue().get(copyRecoveryModeValue);
				setCopyRecoveryMode(copyRecoveryModeValue);
			}
			else if (String::equal(property.getName().getString(), "FailedCopyStopsHostIO"))
			{
				Boolean failedCopyStopsHostIOValue;
				property.getValue().get(failedCopyStopsHostIOValue);
				setFailedCopyStopsHostIO(failedCopyStopsHostIOValue);
			}
	}
	return true;
}


Boolean UNIX_Synchronized::initialize()
{
	return false;
}

Boolean UNIX_Synchronized::load(int &pIndex)
{
	
	// _systemElement = CIMInstance(CIMName("CIM_ManagedElement"));
	// _syncedElement = CIMInstance(CIMName("CIM_ManagedElement"));
	_whenSynced = CIMHelper::getCurrentTime();
	_syncMaintained = Boolean(false);
	_copyState = Uint16(0);
	_mode = Uint16(0);
	_percentSynced = Uint16(0);
	_progressStatus = Uint16(0);
	_requestedCopyState = Uint16(0);
	_syncType = Uint16(0);
	_whenActivated = CIMHelper::getCurrentTime();
	_whenDeactivated = CIMHelper::getCurrentTime();
	_whenEstablished = CIMHelper::getCurrentTime();
	_whenSuspended = CIMHelper::getCurrentTime();
	_whenSynchronized = CIMHelper::getCurrentTime();
	_copyRecoveryMode = Uint16(0);
	_failedCopyStopsHostIO = Boolean(false);
	
	return false;
}

Boolean UNIX_Synchronized::finalize()
{
	return false;
}


Boolean UNIX_Synchronized::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String systemElementKey;
	String syncedElementKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SYSTEM_ELEMENT)) systemElementKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SYNCED_ELEMENT)) syncedElementKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getSystemElement().getPath().toString(), systemElementKey)) && 
			(String::equalNoCase(getSyncedElement().getPath().toString(), syncedElementKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_Synchronized::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Synchronized::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Synchronized::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Synchronized::validateInstance()
{
	return true;
}

