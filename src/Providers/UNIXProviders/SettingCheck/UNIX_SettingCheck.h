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
CIM::Application::CheckAction
*/


/* **** Description *** */
/*
This class specifies information needed to verify a particular 'setting' file, for a specific entry in the file. The file entry is checked whether it contains or matches the value defined in EntryValue. All compares are assumed to be case insensitive.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_Check:
				Name String
				Version String
				SoftwareElementState UInt16
				SoftwareElementID String
				TargetOperatingSystem UInt16
				CheckID String
				CheckMode Boolean

			UNIX_SettingCheck:
				SectionKey String
				EntryName String
				EntryValue String
				CheckType UInt16
				FileName String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Check:
				Invoke UInt32
				InvokeOnSystem UInt32

			UNIX_SettingCheck:


*/

#ifndef __UNIX_SETTINGCHECK_H
#define __UNIX_SETTINGCHECK_H


#include "CIM_Check.h"
#include <ComputerSystem/UNIX_ComputerSystem.h>

#include "UNIX_SettingCheckDeps.h"


#ifndef PROPERTY_SECTION_KEY
#define PROPERTY_SECTION_KEY \
					"SectionKey"
#endif

#ifndef PROPERTY_ENTRY_NAME
#define PROPERTY_ENTRY_NAME \
					"EntryName"
#endif

#ifndef PROPERTY_ENTRY_VALUE
#define PROPERTY_ENTRY_VALUE \
					"EntryValue"
#endif

#ifndef PROPERTY_CHECK_TYPE
#define PROPERTY_CHECK_TYPE \
					"CheckType"
#endif

#ifndef PROPERTY_FILE_NAME
#define PROPERTY_FILE_NAME \
					"FileName"
#endif



class UNIX_SettingCheck :
	public CIM_Check
{
public:

	UNIX_SettingCheck();
	~UNIX_SettingCheck();

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
	virtual Boolean getName(CIMProperty&) const;
	virtual String getName() const;
	virtual void setName(String&);
	virtual Boolean getVersion(CIMProperty&) const;
	virtual String getVersion() const;
	virtual void setVersion(String&);
	virtual Boolean getSoftwareElementState(CIMProperty&) const;
	virtual Uint16 getSoftwareElementState() const;
	virtual void setSoftwareElementState(Uint16&);
	virtual Boolean getSoftwareElementID(CIMProperty&) const;
	virtual String getSoftwareElementID() const;
	virtual void setSoftwareElementID(String&);
	virtual Boolean getTargetOperatingSystem(CIMProperty&) const;
	virtual Uint16 getTargetOperatingSystem() const;
	virtual void setTargetOperatingSystem(Uint16&);
	virtual Boolean getCheckID(CIMProperty&) const;
	virtual String getCheckID() const;
	virtual void setCheckID(String&);
	virtual Boolean getCheckMode(CIMProperty&) const;
	virtual Boolean getCheckMode() const;
	virtual void setCheckMode(Boolean&);
	virtual Boolean getSectionKey(CIMProperty&) const;
	virtual String getSectionKey() const;
	virtual void setSectionKey(String&);
	virtual Boolean getEntryName(CIMProperty&) const;
	virtual String getEntryName() const;
	virtual void setEntryName(String&);
	virtual Boolean getEntryValue(CIMProperty&) const;
	virtual String getEntryValue() const;
	virtual void setEntryValue(String&);
	virtual Boolean getCheckType(CIMProperty&) const;
	virtual Uint16 getCheckType() const;
	virtual void setCheckType(Uint16&);
	virtual Boolean getFileName(CIMProperty&) const;
	virtual String getFileName() const;
	virtual void setFileName(String&);

	virtual Uint32 invokeInvoke();

	virtual Uint32 invokeInvokeOnSystem(
		CIMInstance &inTargetSystem
	);



private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	String _name;
	String _version;
	Uint16 _softwareElementState;
	String _softwareElementID;
	Uint16 _targetOperatingSystem;
	String _checkID;
	Boolean _checkMode;
	String _sectionKey;
	String _entryName;
	String _entryValue;
	Uint16 _checkType;
	String _fileName;

#	include "UNIX_SettingCheckPrivate.h"


};

#endif /* UNIX_SETTINGCHECK */
