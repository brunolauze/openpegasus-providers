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
The CIM_MappingProtocolControllerView instance is a view that is derived from CIM_LogicalPort, CIM_ProtocolController, CIM_ProtocolEndpoint, CIM_AuthorizedPrivilege and CIM_StorageHardwareID.
CIM_ElementView may associate CIM_MappingProtocolControllerView to its underlying elements (regardless of whether or not they are instantiated).
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

			UNIX_MappingProtocolControllerView:
				PCSystemCreationClassName String
				PCSystemName String
				PCCreationClassName String
				PCDeviceID String
				SHIDInstanceID String
				SHIDStorageID String
				SHIDIDType UInt16
				PEPSystemCreationClassName String
				PEPCreationClassName String
				PEPSystemName String
				PEPName String
				PEPProtocolIFType UInt16
				PEPOtherTypeDescription String
				PEPRole UInt16
				PEPConnectionType UInt16
				APInstanceID String
				APPrivilegeGranted Boolean
				APActivities UInt16
				APElementName String
				LPSystemCreationClassName String
				LPSystemName String
				LPCreationClassName String
				LPDeviceID String
				LPOperationalStatus UInt16
				LPUsageRestriction UInt16
				LPPortType UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_View:

			CIM_LogicalDeviceView:

			UNIX_MappingProtocolControllerView:


*/

#ifndef __UNIX_MAPPINGPROTOCOLCONTROLLERVIEW_H
#define __UNIX_MAPPINGPROTOCOLCONTROLLERVIEW_H


#include "CIM_LogicalDeviceView.h"

#include "UNIX_MappingProtocolControllerViewDeps.h"


#ifndef PROPERTY_P_CSYSTEM_CREATION_CLASS_NAME
#define PROPERTY_P_CSYSTEM_CREATION_CLASS_NAME \
					"PCSystemCreationClassName"
#endif

#ifndef PROPERTY_P_CSYSTEM_NAME
#define PROPERTY_P_CSYSTEM_NAME \
					"PCSystemName"
#endif

#ifndef PROPERTY_P_C_CREATION_CLASS_NAME
#define PROPERTY_P_C_CREATION_CLASS_NAME \
					"PCCreationClassName"
#endif

#ifndef PROPERTY_P_C_DEVICE_ID
#define PROPERTY_P_C_DEVICE_ID \
					"PCDeviceID"
#endif

#ifndef PROPERTY_S_H_ID_INSTANCE_ID
#define PROPERTY_S_H_ID_INSTANCE_ID \
					"SHIDInstanceID"
#endif

#ifndef PROPERTY_S_H_ID_STORAGE_ID
#define PROPERTY_S_H_ID_STORAGE_ID \
					"SHIDStorageID"
#endif

#ifndef PROPERTY_S_H_ID_ID_TYPE
#define PROPERTY_S_H_ID_ID_TYPE \
					"SHIDIDType"
#endif

#ifndef PROPERTY_P_E_P_SYSTEM_CREATION_CLASS_NAME
#define PROPERTY_P_E_P_SYSTEM_CREATION_CLASS_NAME \
					"PEPSystemCreationClassName"
#endif

#ifndef PROPERTY_P_E_P_CREATION_CLASS_NAME
#define PROPERTY_P_E_P_CREATION_CLASS_NAME \
					"PEPCreationClassName"
#endif

#ifndef PROPERTY_P_E_P_SYSTEM_NAME
#define PROPERTY_P_E_P_SYSTEM_NAME \
					"PEPSystemName"
#endif

#ifndef PROPERTY_P_E_P_NAME
#define PROPERTY_P_E_P_NAME \
					"PEPName"
#endif

#ifndef PROPERTY_P_E_P_PROTOCOL_I_F_TYPE
#define PROPERTY_P_E_P_PROTOCOL_I_F_TYPE \
					"PEPProtocolIFType"
#endif

#ifndef PROPERTY_P_E_P_OTHER_TYPE_DESCRIPTION
#define PROPERTY_P_E_P_OTHER_TYPE_DESCRIPTION \
					"PEPOtherTypeDescription"
#endif

#ifndef PROPERTY_P_E_P_ROLE
#define PROPERTY_P_E_P_ROLE \
					"PEPRole"
#endif

#ifndef PROPERTY_P_E_P_CONNECTION_TYPE
#define PROPERTY_P_E_P_CONNECTION_TYPE \
					"PEPConnectionType"
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

#ifndef PROPERTY_L_P_SYSTEM_CREATION_CLASS_NAME
#define PROPERTY_L_P_SYSTEM_CREATION_CLASS_NAME \
					"LPSystemCreationClassName"
#endif

#ifndef PROPERTY_L_P_SYSTEM_NAME
#define PROPERTY_L_P_SYSTEM_NAME \
					"LPSystemName"
#endif

#ifndef PROPERTY_L_P_CREATION_CLASS_NAME
#define PROPERTY_L_P_CREATION_CLASS_NAME \
					"LPCreationClassName"
#endif

#ifndef PROPERTY_L_P_DEVICE_ID
#define PROPERTY_L_P_DEVICE_ID \
					"LPDeviceID"
#endif

#ifndef PROPERTY_L_P_OPERATIONAL_STATUS
#define PROPERTY_L_P_OPERATIONAL_STATUS \
					"LPOperationalStatus"
#endif

#ifndef PROPERTY_L_P_USAGE_RESTRICTION
#define PROPERTY_L_P_USAGE_RESTRICTION \
					"LPUsageRestriction"
#endif

#ifndef PROPERTY_L_P_PORT_TYPE
#define PROPERTY_L_P_PORT_TYPE \
					"LPPortType"
#endif



class UNIX_MappingProtocolControllerView :
	public CIM_LogicalDeviceView
{
public:

	UNIX_MappingProtocolControllerView();
	~UNIX_MappingProtocolControllerView();

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
	virtual Boolean getPCSystemCreationClassName(CIMProperty&) const;
	virtual String getPCSystemCreationClassName() const;
	virtual void setPCSystemCreationClassName(String&);
	virtual Boolean getPCSystemName(CIMProperty&) const;
	virtual String getPCSystemName() const;
	virtual void setPCSystemName(String&);
	virtual Boolean getPCCreationClassName(CIMProperty&) const;
	virtual String getPCCreationClassName() const;
	virtual void setPCCreationClassName(String&);
	virtual Boolean getPCDeviceID(CIMProperty&) const;
	virtual String getPCDeviceID() const;
	virtual void setPCDeviceID(String&);
	virtual Boolean getSHIDInstanceID(CIMProperty&) const;
	virtual String getSHIDInstanceID() const;
	virtual void setSHIDInstanceID(String&);
	virtual Boolean getSHIDStorageID(CIMProperty&) const;
	virtual String getSHIDStorageID() const;
	virtual void setSHIDStorageID(String&);
	virtual Boolean getSHIDIDType(CIMProperty&) const;
	virtual Uint16 getSHIDIDType() const;
	virtual void setSHIDIDType(Uint16&);
	virtual Boolean getPEPSystemCreationClassName(CIMProperty&) const;
	virtual String getPEPSystemCreationClassName() const;
	virtual void setPEPSystemCreationClassName(String&);
	virtual Boolean getPEPCreationClassName(CIMProperty&) const;
	virtual String getPEPCreationClassName() const;
	virtual void setPEPCreationClassName(String&);
	virtual Boolean getPEPSystemName(CIMProperty&) const;
	virtual String getPEPSystemName() const;
	virtual void setPEPSystemName(String&);
	virtual Boolean getPEPName(CIMProperty&) const;
	virtual String getPEPName() const;
	virtual void setPEPName(String&);
	virtual Boolean getPEPProtocolIFType(CIMProperty&) const;
	virtual Uint16 getPEPProtocolIFType() const;
	virtual void setPEPProtocolIFType(Uint16&);
	virtual Boolean getPEPOtherTypeDescription(CIMProperty&) const;
	virtual String getPEPOtherTypeDescription() const;
	virtual void setPEPOtherTypeDescription(String&);
	virtual Boolean getPEPRole(CIMProperty&) const;
	virtual Uint16 getPEPRole() const;
	virtual void setPEPRole(Uint16&);
	virtual Boolean getPEPConnectionType(CIMProperty&) const;
	virtual Uint16 getPEPConnectionType() const;
	virtual void setPEPConnectionType(Uint16&);
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
	virtual Boolean getLPSystemCreationClassName(CIMProperty&) const;
	virtual String getLPSystemCreationClassName() const;
	virtual void setLPSystemCreationClassName(String&);
	virtual Boolean getLPSystemName(CIMProperty&) const;
	virtual String getLPSystemName() const;
	virtual void setLPSystemName(String&);
	virtual Boolean getLPCreationClassName(CIMProperty&) const;
	virtual String getLPCreationClassName() const;
	virtual void setLPCreationClassName(String&);
	virtual Boolean getLPDeviceID(CIMProperty&) const;
	virtual String getLPDeviceID() const;
	virtual void setLPDeviceID(String&);
	virtual Boolean getLPOperationalStatus(CIMProperty&) const;
	virtual Array<Uint16> getLPOperationalStatus() const;
	virtual void setLPOperationalStatus(Array<Uint16>&);
	virtual Boolean getLPUsageRestriction(CIMProperty&) const;
	virtual Uint16 getLPUsageRestriction() const;
	virtual void setLPUsageRestriction(Uint16&);
	virtual Boolean getLPPortType(CIMProperty&) const;
	virtual Uint16 getLPPortType() const;
	virtual void setLPPortType(Uint16&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	String _pCSystemCreationClassName;
	String _pCSystemName;
	String _pCCreationClassName;
	String _pCDeviceID;
	String _sHIDInstanceID;
	String _sHIDStorageID;
	Uint16 _sHIDIDType;
	String _pEPSystemCreationClassName;
	String _pEPCreationClassName;
	String _pEPSystemName;
	String _pEPName;
	Uint16 _pEPProtocolIFType;
	String _pEPOtherTypeDescription;
	Uint16 _pEPRole;
	Uint16 _pEPConnectionType;
	String _aPInstanceID;
	Boolean _aPPrivilegeGranted;
	Array<Uint16> _aPActivities;
	String _aPElementName;
	String _lPSystemCreationClassName;
	String _lPSystemName;
	String _lPCreationClassName;
	String _lPDeviceID;
	Array<Uint16> _lPOperationalStatus;
	Uint16 _lPUsageRestriction;
	Uint16 _lPPortType;

#	include "UNIX_MappingProtocolControllerViewPrivate.h"


};

#endif /* UNIX_MAPPINGPROTOCOLCONTROLLERVIEW */
