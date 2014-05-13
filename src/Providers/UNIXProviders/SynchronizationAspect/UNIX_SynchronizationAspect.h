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
2.34.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::StorageServices
*/


/* **** Description *** */
/*
A class to keep track of the source of a copy operation. Additionally, the class has a series of properties to indicate the SyncType that was used and the date and time of the point-in-time if it applies to the SyncType.
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

			UNIX_SynchronizationAspect:
				SyncType UInt16
				ConsistencyEnabled Boolean
				ConsistencyType UInt16
				CopyStatus UInt16
				CopyMethodology UInt16
				WhenPointInTime DateTime
				SourceElement String
				AutoDelete Boolean
				TimeBeforeRemoval DateTime


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_SettingData:

			UNIX_SynchronizationAspect:


*/

#ifndef __UNIX_SYNCHRONIZATIONASPECT_H
#define __UNIX_SYNCHRONIZATIONASPECT_H


#include "CIM_SettingData.h"

#include "UNIX_SynchronizationAspectDeps.h"


#ifndef PROPERTY_SYNC_TYPE
#define PROPERTY_SYNC_TYPE \
					"SyncType"
#endif

#ifndef PROPERTY_CONSISTENCY_ENABLED
#define PROPERTY_CONSISTENCY_ENABLED \
					"ConsistencyEnabled"
#endif

#ifndef PROPERTY_CONSISTENCY_TYPE
#define PROPERTY_CONSISTENCY_TYPE \
					"ConsistencyType"
#endif

#ifndef PROPERTY_COPY_STATUS
#define PROPERTY_COPY_STATUS \
					"CopyStatus"
#endif

#ifndef PROPERTY_COPY_METHODOLOGY
#define PROPERTY_COPY_METHODOLOGY \
					"CopyMethodology"
#endif

#ifndef PROPERTY_WHEN_POINT_IN_TIME
#define PROPERTY_WHEN_POINT_IN_TIME \
					"WhenPointInTime"
#endif

#ifndef PROPERTY_SOURCE_ELEMENT
#define PROPERTY_SOURCE_ELEMENT \
					"SourceElement"
#endif

#ifndef PROPERTY_AUTO_DELETE
#define PROPERTY_AUTO_DELETE \
					"AutoDelete"
#endif

#ifndef PROPERTY_TIME_BEFORE_REMOVAL
#define PROPERTY_TIME_BEFORE_REMOVAL \
					"TimeBeforeRemoval"
#endif



class UNIX_SynchronizationAspect :
	public CIM_SettingData
{
public:

	UNIX_SynchronizationAspect();
	~UNIX_SynchronizationAspect();

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
	virtual Boolean getSyncType(CIMProperty&) const;
	virtual Uint16 getSyncType() const;
	virtual void setSyncType(Uint16&);
	virtual Boolean getConsistencyEnabled(CIMProperty&) const;
	virtual Boolean getConsistencyEnabled() const;
	virtual void setConsistencyEnabled(Boolean&);
	virtual Boolean getConsistencyType(CIMProperty&) const;
	virtual Uint16 getConsistencyType() const;
	virtual void setConsistencyType(Uint16&);
	virtual Boolean getCopyStatus(CIMProperty&) const;
	virtual Uint16 getCopyStatus() const;
	virtual void setCopyStatus(Uint16&);
	virtual Boolean getCopyMethodology(CIMProperty&) const;
	virtual Uint16 getCopyMethodology() const;
	virtual void setCopyMethodology(Uint16&);
	virtual Boolean getWhenPointInTime(CIMProperty&) const;
	virtual CIMDateTime getWhenPointInTime() const;
	virtual void setWhenPointInTime(CIMDateTime&);
	virtual Boolean getSourceElement(CIMProperty&) const;
	virtual String getSourceElement() const;
	virtual void setSourceElement(String&);
	virtual Boolean getAutoDelete(CIMProperty&) const;
	virtual Boolean getAutoDelete() const;
	virtual void setAutoDelete(Boolean&);
	virtual Boolean getTimeBeforeRemoval(CIMProperty&) const;
	virtual CIMDateTime getTimeBeforeRemoval() const;
	virtual void setTimeBeforeRemoval(CIMDateTime&);


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
	Uint16 _syncType;
	Boolean _consistencyEnabled;
	Uint16 _consistencyType;
	Uint16 _copyStatus;
	Uint16 _copyMethodology;
	CIMDateTime _whenPointInTime;
	String _sourceElement;
	Boolean _autoDelete;
	CIMDateTime _timeBeforeRemoval;

#	include "UNIX_SynchronizationAspectPrivate.h"


};

#endif /* UNIX_SYNCHRONIZATIONASPECT */
