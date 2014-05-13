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


/* **** Experimental *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.28.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device
*/


/* **** Description *** */
/*
The CIM_MaskingMappingView instance is a view that is derived from CIM_StorageHardwareID, CIM_AuthorizedSubject, CIM_AuthorizedPrivilege, CIM_AuthorizedTarget, CIM_SCSIProtocolController, CIM_SAPAvailableForElement, CIM_SCSIProtocolEndpoint, CIM_ProtocolControllerForUnit and CIM_LogicalDevice.
*/


/*
			 *** Properties ***

			UNIX_MaskingMappingView:
				StorageHardwareID Reference
				LogicalDevice Reference
				ProtocolEndpoint Reference
				SHIDStorageID String
				SHIDIDType UInt16
				LDDeviceID String
				SPEPSystemCreationClassName String
				SPEPCreationClassName String
				SPEPSystemName String
				SPEPName String
				SPEPProtocolIFType UInt16
				SPEPOtherTypeDescription String
				SPEPConnectionType UInt16
				SPEPRole UInt16
				APInstanceID String
				APPrivilegeGranted Boolean
				APActivities UInt16
				APElementName String
				SPCSystemCreationClassName String
				SPCCreationClassName String
				SPCSystemName String
				SPCDeviceID String
				PCFUDeviceNumber String
				PCFUDeviceAccess UInt16


*/


/*
			 *** Methods ***

			UNIX_MaskingMappingView:


*/

#ifndef __UNIX_MASKINGMAPPINGVIEW_H
#define __UNIX_MASKINGMAPPINGVIEW_H


#include "CIM_ClassBase.h"

#include "UNIX_MaskingMappingViewDeps.h"


#ifndef PROPERTY_STORAGE_HARDWARE_ID
#define PROPERTY_STORAGE_HARDWARE_ID \
					"StorageHardwareID"
#endif

#ifndef PROPERTY_LOGICAL_DEVICE
#define PROPERTY_LOGICAL_DEVICE \
					"LogicalDevice"
#endif

#ifndef PROPERTY_PROTOCOL_ENDPOINT
#define PROPERTY_PROTOCOL_ENDPOINT \
					"ProtocolEndpoint"
#endif

#ifndef PROPERTY_S_H_ID_STORAGE_ID
#define PROPERTY_S_H_ID_STORAGE_ID \
					"SHIDStorageID"
#endif

#ifndef PROPERTY_S_H_ID_ID_TYPE
#define PROPERTY_S_H_ID_ID_TYPE \
					"SHIDIDType"
#endif

#ifndef PROPERTY_L_D_DEVICE_ID
#define PROPERTY_L_D_DEVICE_ID \
					"LDDeviceID"
#endif

#ifndef PROPERTY_S_P_E_P_SYSTEM_CREATION_CLASS_NAME
#define PROPERTY_S_P_E_P_SYSTEM_CREATION_CLASS_NAME \
					"SPEPSystemCreationClassName"
#endif

#ifndef PROPERTY_S_P_E_P_CREATION_CLASS_NAME
#define PROPERTY_S_P_E_P_CREATION_CLASS_NAME \
					"SPEPCreationClassName"
#endif

#ifndef PROPERTY_S_P_E_P_SYSTEM_NAME
#define PROPERTY_S_P_E_P_SYSTEM_NAME \
					"SPEPSystemName"
#endif

#ifndef PROPERTY_S_P_E_P_NAME
#define PROPERTY_S_P_E_P_NAME \
					"SPEPName"
#endif

#ifndef PROPERTY_S_P_E_P_PROTOCOL_I_F_TYPE
#define PROPERTY_S_P_E_P_PROTOCOL_I_F_TYPE \
					"SPEPProtocolIFType"
#endif

#ifndef PROPERTY_S_P_E_P_OTHER_TYPE_DESCRIPTION
#define PROPERTY_S_P_E_P_OTHER_TYPE_DESCRIPTION \
					"SPEPOtherTypeDescription"
#endif

#ifndef PROPERTY_S_P_E_P_CONNECTION_TYPE
#define PROPERTY_S_P_E_P_CONNECTION_TYPE \
					"SPEPConnectionType"
#endif

#ifndef PROPERTY_S_P_E_P_ROLE
#define PROPERTY_S_P_E_P_ROLE \
					"SPEPRole"
#endif

#ifndef PROPERTY_A_P_INSTANCE_ID
#define PROPERTY_A_P_INSTANCE_ID \
					"APInstanceID"
#endif

#ifndef PROPERTY_A_P_PRIVILEGE_GRANTED
#define PROPERTY_A_P_PRIVILEGE_GRANTED \
					"APPrivilegeGranted"
#endif

#ifndef PROPERTY_A_P_ACTIVITIES
#define PROPERTY_A_P_ACTIVITIES \
					"APActivities"
#endif

#ifndef PROPERTY_A_P_ELEMENT_NAME
#define PROPERTY_A_P_ELEMENT_NAME \
					"APElementName"
#endif

#ifndef PROPERTY_S_P_CSYSTEM_CREATION_CLASS_NAME
#define PROPERTY_S_P_CSYSTEM_CREATION_CLASS_NAME \
					"SPCSystemCreationClassName"
#endif

#ifndef PROPERTY_S_P_C_CREATION_CLASS_NAME
#define PROPERTY_S_P_C_CREATION_CLASS_NAME \
					"SPCCreationClassName"
#endif

#ifndef PROPERTY_S_P_CSYSTEM_NAME
#define PROPERTY_S_P_CSYSTEM_NAME \
					"SPCSystemName"
#endif

#ifndef PROPERTY_S_P_C_DEVICE_ID
#define PROPERTY_S_P_C_DEVICE_ID \
					"SPCDeviceID"
#endif

#ifndef PROPERTY_P_C_F_U_DEVICE_NUMBER
#define PROPERTY_P_C_F_U_DEVICE_NUMBER \
					"PCFUDeviceNumber"
#endif

#ifndef PROPERTY_P_C_F_U_DEVICE_ACCESS
#define PROPERTY_P_C_F_U_DEVICE_ACCESS \
					"PCFUDeviceAccess"
#endif



class UNIX_MaskingMappingView :
	public CIM_ClassBase
{
public:

	UNIX_MaskingMappingView();
	~UNIX_MaskingMappingView();

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

	virtual Boolean getStorageHardwareID(CIMProperty&) const;
	virtual CIMInstance getStorageHardwareID() const;
	virtual void setStorageHardwareID(CIMInstance&);
	virtual Boolean getLogicalDevice(CIMProperty&) const;
	virtual CIMInstance getLogicalDevice() const;
	virtual void setLogicalDevice(CIMInstance&);
	virtual Boolean getProtocolEndpoint(CIMProperty&) const;
	virtual CIMInstance getProtocolEndpoint() const;
	virtual void setProtocolEndpoint(CIMInstance&);
	virtual Boolean getSHIDStorageID(CIMProperty&) const;
	virtual String getSHIDStorageID() const;
	virtual void setSHIDStorageID(String&);
	virtual Boolean getSHIDIDType(CIMProperty&) const;
	virtual Uint16 getSHIDIDType() const;
	virtual void setSHIDIDType(Uint16&);
	virtual Boolean getLDDeviceID(CIMProperty&) const;
	virtual String getLDDeviceID() const;
	virtual void setLDDeviceID(String&);
	virtual Boolean getSPEPSystemCreationClassName(CIMProperty&) const;
	virtual String getSPEPSystemCreationClassName() const;
	virtual void setSPEPSystemCreationClassName(String&);
	virtual Boolean getSPEPCreationClassName(CIMProperty&) const;
	virtual String getSPEPCreationClassName() const;
	virtual void setSPEPCreationClassName(String&);
	virtual Boolean getSPEPSystemName(CIMProperty&) const;
	virtual String getSPEPSystemName() const;
	virtual void setSPEPSystemName(String&);
	virtual Boolean getSPEPName(CIMProperty&) const;
	virtual String getSPEPName() const;
	virtual void setSPEPName(String&);
	virtual Boolean getSPEPProtocolIFType(CIMProperty&) const;
	virtual Uint16 getSPEPProtocolIFType() const;
	virtual void setSPEPProtocolIFType(Uint16&);
	virtual Boolean getSPEPOtherTypeDescription(CIMProperty&) const;
	virtual String getSPEPOtherTypeDescription() const;
	virtual void setSPEPOtherTypeDescription(String&);
	virtual Boolean getSPEPConnectionType(CIMProperty&) const;
	virtual Uint16 getSPEPConnectionType() const;
	virtual void setSPEPConnectionType(Uint16&);
	virtual Boolean getSPEPRole(CIMProperty&) const;
	virtual Uint16 getSPEPRole() const;
	virtual void setSPEPRole(Uint16&);
	virtual Boolean getAPInstanceID(CIMProperty&) const;
	virtual String getAPInstanceID() const;
	virtual void setAPInstanceID(String&);
	virtual Boolean getAPPrivilegeGranted(CIMProperty&) const;
	virtual Boolean getAPPrivilegeGranted() const;
	virtual void setAPPrivilegeGranted(Boolean&);
	virtual Boolean getAPActivities(CIMProperty&) const;
	virtual Array<Uint16> getAPActivities() const;
	virtual void setAPActivities(Array<Uint16>&);
	virtual Boolean getAPElementName(CIMProperty&) const;
	virtual String getAPElementName() const;
	virtual void setAPElementName(String&);
	virtual Boolean getSPCSystemCreationClassName(CIMProperty&) const;
	virtual String getSPCSystemCreationClassName() const;
	virtual void setSPCSystemCreationClassName(String&);
	virtual Boolean getSPCCreationClassName(CIMProperty&) const;
	virtual String getSPCCreationClassName() const;
	virtual void setSPCCreationClassName(String&);
	virtual Boolean getSPCSystemName(CIMProperty&) const;
	virtual String getSPCSystemName() const;
	virtual void setSPCSystemName(String&);
	virtual Boolean getSPCDeviceID(CIMProperty&) const;
	virtual String getSPCDeviceID() const;
	virtual void setSPCDeviceID(String&);
	virtual Boolean getPCFUDeviceNumber(CIMProperty&) const;
	virtual String getPCFUDeviceNumber() const;
	virtual void setPCFUDeviceNumber(String&);
	virtual Boolean getPCFUDeviceAccess(CIMProperty&) const;
	virtual Uint16 getPCFUDeviceAccess() const;
	virtual void setPCFUDeviceAccess(Uint16&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _storageHardwareID;
	CIMInstance _logicalDevice;
	CIMInstance _protocolEndpoint;
	String _sHIDStorageID;
	Uint16 _sHIDIDType;
	String _lDDeviceID;
	String _sPEPSystemCreationClassName;
	String _sPEPCreationClassName;
	String _sPEPSystemName;
	String _sPEPName;
	Uint16 _sPEPProtocolIFType;
	String _sPEPOtherTypeDescription;
	Uint16 _sPEPConnectionType;
	Uint16 _sPEPRole;
	String _aPInstanceID;
	Boolean _aPPrivilegeGranted;
	Array<Uint16> _aPActivities;
	String _aPElementName;
	String _sPCSystemCreationClassName;
	String _sPCCreationClassName;
	String _sPCSystemName;
	String _sPCDeviceID;
	String _pCFUDeviceNumber;
	Uint16 _pCFUDeviceAccess;

#	include "UNIX_MaskingMappingViewPrivate.h"


};

#endif /* UNIX_MASKINGMAPPINGVIEW */
