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
2.8.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Database::Storage
*/


/* **** Description *** */
/*
This class defines the attributes that affect the growth of a DatabaseSegment. The attributes are tied to the DatabaseSegment through an ElementSettingData association. 
This class can also be used to specify the default settings for all DatabaseSegment instances that are created within a CommonDatabase through an ElementSettingData association to the CommonDatabase. Processes that create new instances of DatabaseSegment and the associated setting data should check for a DatabaseSegmentSettingData instance that is associated with the CommonDatabase and should create a new instance of DatabaseSegmentSettingData that is specific to the DatabaseSegment only if the default settings need to be overridden or frozen for the specific DatabaseSegment instance.
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

			CIM_ScopedSettingData:

			UNIX_DatabaseSegmentSettingData:
				InitialExtentSize UInt64
				MinimumExtents UInt64
				MaximumExtents UInt64
				NextExtentSize UInt64
				PercentIncrease UInt16
				NumberOfFreeLists UInt32


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_SettingData:

			CIM_ScopedSettingData:

			UNIX_DatabaseSegmentSettingData:


*/

#ifndef __UNIX_DATABASESEGMENTSETTINGDATA_H
#define __UNIX_DATABASESEGMENTSETTINGDATA_H


#include "CIM_ScopedSettingData.h"

#include "UNIX_DatabaseSegmentSettingDataDeps.h"


#ifndef PROPERTY_INITIAL_EXTENT_SIZE
#define PROPERTY_INITIAL_EXTENT_SIZE \
					"InitialExtentSize"
#endif

#ifndef PROPERTY_MINIMUM_EXTENTS
#define PROPERTY_MINIMUM_EXTENTS \
					"MinimumExtents"
#endif

#ifndef PROPERTY_MAXIMUM_EXTENTS
#define PROPERTY_MAXIMUM_EXTENTS \
					"MaximumExtents"
#endif

#ifndef PROPERTY_NEXT_EXTENT_SIZE
#define PROPERTY_NEXT_EXTENT_SIZE \
					"NextExtentSize"
#endif

#ifndef PROPERTY_PERCENT_INCREASE
#define PROPERTY_PERCENT_INCREASE \
					"PercentIncrease"
#endif

#ifndef PROPERTY_NUMBER_OF_FREE_LISTS
#define PROPERTY_NUMBER_OF_FREE_LISTS \
					"NumberOfFreeLists"
#endif



class UNIX_DatabaseSegmentSettingData :
	public CIM_ScopedSettingData
{
public:

	UNIX_DatabaseSegmentSettingData();
	~UNIX_DatabaseSegmentSettingData();

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
	virtual Boolean getInitialExtentSize(CIMProperty&) const;
	virtual Uint64 getInitialExtentSize() const;
	virtual void setInitialExtentSize(Uint64&);
	virtual Boolean getMinimumExtents(CIMProperty&) const;
	virtual Uint64 getMinimumExtents() const;
	virtual void setMinimumExtents(Uint64&);
	virtual Boolean getMaximumExtents(CIMProperty&) const;
	virtual Uint64 getMaximumExtents() const;
	virtual void setMaximumExtents(Uint64&);
	virtual Boolean getNextExtentSize(CIMProperty&) const;
	virtual Uint64 getNextExtentSize() const;
	virtual void setNextExtentSize(Uint64&);
	virtual Boolean getPercentIncrease(CIMProperty&) const;
	virtual Uint16 getPercentIncrease() const;
	virtual void setPercentIncrease(Uint16&);
	virtual Boolean getNumberOfFreeLists(CIMProperty&) const;
	virtual Uint32 getNumberOfFreeLists() const;
	virtual void setNumberOfFreeLists(Uint32&);


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
	Uint64 _initialExtentSize;
	Uint64 _minimumExtents;
	Uint64 _maximumExtents;
	Uint64 _nextExtentSize;
	Uint16 _percentIncrease;
	Uint32 _numberOfFreeLists;

#	include "UNIX_DatabaseSegmentSettingDataPrivate.h"


};

#endif /* UNIX_DATABASESEGMENTSETTINGDATA */
