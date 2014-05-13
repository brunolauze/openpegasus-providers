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
2.29.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::Views
*/


/* **** Description *** */
/*
The CIM_DiskDriveView instance is a view that is derived from CIM_StorageExtent, CIM_MediaPresent, CIM_DiskDrive, CIM_Realizes, CIM_PhysicalPackage, CIM_ElementSoftwareIdentity and CIM_SoftwareIdentity.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_View:

			CIM_LogicalDeviceView:

			UNIX_DiskDriveView:
				SESystemCreationClassName String
				SESystemName String
				SECreationClassName String
				SEDeviceID String
				SEBlockSize UInt64
				SENumberOfBlocks UInt64
				SEConsumableBlocks UInt64
				SEExtentStatus UInt16
				SEOperationalStatus UInt16
				DDSystemCreationClassName String
				DDSystemName String
				DDCreationClassName String
				DDDeviceID String
				DDName String
				DDOperationalStatus UInt16
				PPCreationClassName String
				PPTag String
				PPManufacturer String
				PPModel String
				SIInstanceID String
				SIVersionString String
				DDLocationIndicator UInt16
				PPSerialNumber String
				PPPartNumber String
				SIManufacturer String
				SIBuildNumber UInt16
				SIMajorVersion UInt16
				SIRevisionNumber UInt16
				SIMinorVersion UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_View:

			CIM_LogicalDeviceView:

			UNIX_DiskDriveView:


*/

#ifndef __UNIX_DISKDRIVEVIEW_H
#define __UNIX_DISKDRIVEVIEW_H


#include "CIM_LogicalDeviceView.h"

#include "UNIX_DiskDriveViewDeps.h"


#ifndef PROPERTY_S_E_SYSTEM_CREATION_CLASS_NAME
#define PROPERTY_S_E_SYSTEM_CREATION_CLASS_NAME \
					"SESystemCreationClassName"
#endif

#ifndef PROPERTY_S_E_SYSTEM_NAME
#define PROPERTY_S_E_SYSTEM_NAME \
					"SESystemName"
#endif

#ifndef PROPERTY_S_E_CREATION_CLASS_NAME
#define PROPERTY_S_E_CREATION_CLASS_NAME \
					"SECreationClassName"
#endif

#ifndef PROPERTY_S_E_DEVICE_ID
#define PROPERTY_S_E_DEVICE_ID \
					"SEDeviceID"
#endif

#ifndef PROPERTY_S_E_BLOCK_SIZE
#define PROPERTY_S_E_BLOCK_SIZE \
					"SEBlockSize"
#endif

#ifndef PROPERTY_S_E_NUMBER_OF_BLOCKS
#define PROPERTY_S_E_NUMBER_OF_BLOCKS \
					"SENumberOfBlocks"
#endif

#ifndef PROPERTY_S_E_CONSUMABLE_BLOCKS
#define PROPERTY_S_E_CONSUMABLE_BLOCKS \
					"SEConsumableBlocks"
#endif

#ifndef PROPERTY_S_E_EXTENT_STATUS
#define PROPERTY_S_E_EXTENT_STATUS \
					"SEExtentStatus"
#endif

#ifndef PROPERTY_S_E_OPERATIONAL_STATUS
#define PROPERTY_S_E_OPERATIONAL_STATUS \
					"SEOperationalStatus"
#endif

#ifndef PROPERTY_D_D_SYSTEM_CREATION_CLASS_NAME
#define PROPERTY_D_D_SYSTEM_CREATION_CLASS_NAME \
					"DDSystemCreationClassName"
#endif

#ifndef PROPERTY_D_D_SYSTEM_NAME
#define PROPERTY_D_D_SYSTEM_NAME \
					"DDSystemName"
#endif

#ifndef PROPERTY_D_D_CREATION_CLASS_NAME
#define PROPERTY_D_D_CREATION_CLASS_NAME \
					"DDCreationClassName"
#endif

#ifndef PROPERTY_D_D_DEVICE_ID
#define PROPERTY_D_D_DEVICE_ID \
					"DDDeviceID"
#endif

#ifndef PROPERTY_D_D_NAME
#define PROPERTY_D_D_NAME \
					"DDName"
#endif

#ifndef PROPERTY_D_D_OPERATIONAL_STATUS
#define PROPERTY_D_D_OPERATIONAL_STATUS \
					"DDOperationalStatus"
#endif

#ifndef PROPERTY_P_P_CREATION_CLASS_NAME
#define PROPERTY_P_P_CREATION_CLASS_NAME \
					"PPCreationClassName"
#endif

#ifndef PROPERTY_P_P_TAG
#define PROPERTY_P_P_TAG \
					"PPTag"
#endif

#ifndef PROPERTY_P_P_MANUFACTURER
#define PROPERTY_P_P_MANUFACTURER \
					"PPManufacturer"
#endif

#ifndef PROPERTY_P_P_MODEL
#define PROPERTY_P_P_MODEL \
					"PPModel"
#endif

#ifndef PROPERTY_S_I_INSTANCE_ID
#define PROPERTY_S_I_INSTANCE_ID \
					"SIInstanceID"
#endif

#ifndef PROPERTY_S_I_VERSION_STRING
#define PROPERTY_S_I_VERSION_STRING \
					"SIVersionString"
#endif

#ifndef PROPERTY_D_D_LOCATION_INDICATOR
#define PROPERTY_D_D_LOCATION_INDICATOR \
					"DDLocationIndicator"
#endif

#ifndef PROPERTY_P_P_SERIAL_NUMBER
#define PROPERTY_P_P_SERIAL_NUMBER \
					"PPSerialNumber"
#endif

#ifndef PROPERTY_P_P_PART_NUMBER
#define PROPERTY_P_P_PART_NUMBER \
					"PPPartNumber"
#endif

#ifndef PROPERTY_S_I_MANUFACTURER
#define PROPERTY_S_I_MANUFACTURER \
					"SIManufacturer"
#endif

#ifndef PROPERTY_S_IBUILD_NUMBER
#define PROPERTY_S_IBUILD_NUMBER \
					"SIBuildNumber"
#endif

#ifndef PROPERTY_S_I_MAJOR_VERSION
#define PROPERTY_S_I_MAJOR_VERSION \
					"SIMajorVersion"
#endif

#ifndef PROPERTY_S_I_REVISION_NUMBER
#define PROPERTY_S_I_REVISION_NUMBER \
					"SIRevisionNumber"
#endif

#ifndef PROPERTY_S_I_MINOR_VERSION
#define PROPERTY_S_I_MINOR_VERSION \
					"SIMinorVersion"
#endif



class UNIX_DiskDriveView :
	public CIM_LogicalDeviceView
{
public:

	UNIX_DiskDriveView();
	~UNIX_DiskDriveView();

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
	virtual Boolean getSESystemCreationClassName(CIMProperty&) const;
	virtual String getSESystemCreationClassName() const;
	virtual void setSESystemCreationClassName(String&);
	virtual Boolean getSESystemName(CIMProperty&) const;
	virtual String getSESystemName() const;
	virtual void setSESystemName(String&);
	virtual Boolean getSECreationClassName(CIMProperty&) const;
	virtual String getSECreationClassName() const;
	virtual void setSECreationClassName(String&);
	virtual Boolean getSEDeviceID(CIMProperty&) const;
	virtual String getSEDeviceID() const;
	virtual void setSEDeviceID(String&);
	virtual Boolean getSEBlockSize(CIMProperty&) const;
	virtual Uint64 getSEBlockSize() const;
	virtual void setSEBlockSize(Uint64&);
	virtual Boolean getSENumberOfBlocks(CIMProperty&) const;
	virtual Uint64 getSENumberOfBlocks() const;
	virtual void setSENumberOfBlocks(Uint64&);
	virtual Boolean getSEConsumableBlocks(CIMProperty&) const;
	virtual Uint64 getSEConsumableBlocks() const;
	virtual void setSEConsumableBlocks(Uint64&);
	virtual Boolean getSEExtentStatus(CIMProperty&) const;
	virtual Array<Uint16> getSEExtentStatus() const;
	virtual void setSEExtentStatus(Array<Uint16>&);
	virtual Boolean getSEOperationalStatus(CIMProperty&) const;
	virtual Array<Uint16> getSEOperationalStatus() const;
	virtual void setSEOperationalStatus(Array<Uint16>&);
	virtual Boolean getDDSystemCreationClassName(CIMProperty&) const;
	virtual String getDDSystemCreationClassName() const;
	virtual void setDDSystemCreationClassName(String&);
	virtual Boolean getDDSystemName(CIMProperty&) const;
	virtual String getDDSystemName() const;
	virtual void setDDSystemName(String&);
	virtual Boolean getDDCreationClassName(CIMProperty&) const;
	virtual String getDDCreationClassName() const;
	virtual void setDDCreationClassName(String&);
	virtual Boolean getDDDeviceID(CIMProperty&) const;
	virtual String getDDDeviceID() const;
	virtual void setDDDeviceID(String&);
	virtual Boolean getDDName(CIMProperty&) const;
	virtual String getDDName() const;
	virtual void setDDName(String&);
	virtual Boolean getDDOperationalStatus(CIMProperty&) const;
	virtual Array<Uint16> getDDOperationalStatus() const;
	virtual void setDDOperationalStatus(Array<Uint16>&);
	virtual Boolean getPPCreationClassName(CIMProperty&) const;
	virtual String getPPCreationClassName() const;
	virtual void setPPCreationClassName(String&);
	virtual Boolean getPPTag(CIMProperty&) const;
	virtual String getPPTag() const;
	virtual void setPPTag(String&);
	virtual Boolean getPPManufacturer(CIMProperty&) const;
	virtual String getPPManufacturer() const;
	virtual void setPPManufacturer(String&);
	virtual Boolean getPPModel(CIMProperty&) const;
	virtual String getPPModel() const;
	virtual void setPPModel(String&);
	virtual Boolean getSIInstanceID(CIMProperty&) const;
	virtual String getSIInstanceID() const;
	virtual void setSIInstanceID(String&);
	virtual Boolean getSIVersionString(CIMProperty&) const;
	virtual String getSIVersionString() const;
	virtual void setSIVersionString(String&);
	virtual Boolean getDDLocationIndicator(CIMProperty&) const;
	virtual Uint16 getDDLocationIndicator() const;
	virtual void setDDLocationIndicator(Uint16&);
	virtual Boolean getPPSerialNumber(CIMProperty&) const;
	virtual String getPPSerialNumber() const;
	virtual void setPPSerialNumber(String&);
	virtual Boolean getPPPartNumber(CIMProperty&) const;
	virtual String getPPPartNumber() const;
	virtual void setPPPartNumber(String&);
	virtual Boolean getSIManufacturer(CIMProperty&) const;
	virtual String getSIManufacturer() const;
	virtual void setSIManufacturer(String&);
	virtual Boolean getSIBuildNumber(CIMProperty&) const;
	virtual Uint16 getSIBuildNumber() const;
	virtual void setSIBuildNumber(Uint16&);
	virtual Boolean getSIMajorVersion(CIMProperty&) const;
	virtual Uint16 getSIMajorVersion() const;
	virtual void setSIMajorVersion(Uint16&);
	virtual Boolean getSIRevisionNumber(CIMProperty&) const;
	virtual Uint16 getSIRevisionNumber() const;
	virtual void setSIRevisionNumber(Uint16&);
	virtual Boolean getSIMinorVersion(CIMProperty&) const;
	virtual Uint16 getSIMinorVersion() const;
	virtual void setSIMinorVersion(Uint16&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	String _sESystemCreationClassName;
	String _sESystemName;
	String _sECreationClassName;
	String _sEDeviceID;
	Uint64 _sEBlockSize;
	Uint64 _sENumberOfBlocks;
	Uint64 _sEConsumableBlocks;
	Array<Uint16> _sEExtentStatus;
	Array<Uint16> _sEOperationalStatus;
	String _dDSystemCreationClassName;
	String _dDSystemName;
	String _dDCreationClassName;
	String _dDDeviceID;
	String _dDName;
	Array<Uint16> _dDOperationalStatus;
	String _pPCreationClassName;
	String _pPTag;
	String _pPManufacturer;
	String _pPModel;
	String _sIInstanceID;
	String _sIVersionString;
	Uint16 _dDLocationIndicator;
	String _pPSerialNumber;
	String _pPPartNumber;
	String _sIManufacturer;
	Uint16 _sIBuildNumber;
	Uint16 _sIMajorVersion;
	Uint16 _sIRevisionNumber;
	Uint16 _sIMinorVersion;

#	include "UNIX_DiskDriveViewPrivate.h"


};

#endif /* UNIX_DISKDRIVEVIEW */
