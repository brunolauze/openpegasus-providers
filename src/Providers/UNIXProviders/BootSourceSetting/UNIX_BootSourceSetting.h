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
2.19.0
*/


/* **** UMLPackagePath *** */
/*
CIM::System::Boot
*/


/* **** Description *** */
/*
A class derived from SettingData that provides the information necessary to describe a boot source. This may be optionally associated to a bootable logical device, such as a hard disk partition, or a network device. The information from this class instance is used by the boot manager, such as BIOS/EFI or OS Loader to initiate the boot process, when this instance appears in a BootConfigSetting collection.
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

			UNIX_BootSourceSetting:
				BootString String
				BIOSBootString String
				StructuredBootString String
				FailThroughSupported UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_SettingData:

			UNIX_BootSourceSetting:


*/

#ifndef __UNIX_BOOTSOURCESETTING_H
#define __UNIX_BOOTSOURCESETTING_H


#include "CIM_SettingData.h"

#include "UNIX_BootSourceSettingDeps.h"


#ifndef PROPERTY_BOOT_STRING
#define PROPERTY_BOOT_STRING \
					"BootString"
#endif

#ifndef PROPERTY_BIOS_BOOT_STRING
#define PROPERTY_BIOS_BOOT_STRING \
					"BIOSBootString"
#endif

#ifndef PROPERTY_STRUCTURED_BOOT_STRING
#define PROPERTY_STRUCTURED_BOOT_STRING \
					"StructuredBootString"
#endif

#ifndef PROPERTY_FAIL_THROUGH_SUPPORTED
#define PROPERTY_FAIL_THROUGH_SUPPORTED \
					"FailThroughSupported"
#endif



class UNIX_BootSourceSetting :
	public CIM_SettingData
{
public:

	UNIX_BootSourceSetting();
	~UNIX_BootSourceSetting();

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
	virtual Boolean getBootString(CIMProperty&) const;
	virtual String getBootString() const;
	virtual void setBootString(String&);
	virtual Boolean getBIOSBootString(CIMProperty&) const;
	virtual String getBIOSBootString() const;
	virtual void setBIOSBootString(String&);
	virtual Boolean getStructuredBootString(CIMProperty&) const;
	virtual String getStructuredBootString() const;
	virtual void setStructuredBootString(String&);
	virtual Boolean getFailThroughSupported(CIMProperty&) const;
	virtual Uint16 getFailThroughSupported() const;
	virtual void setFailThroughSupported(Uint16&);


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
	String _bootString;
	String _bIOSBootString;
	String _structuredBootString;
	Uint16 _failThroughSupported;

#	include "UNIX_BootSourceSettingPrivate.h"


};

#endif /* UNIX_BOOTSOURCESETTING */
