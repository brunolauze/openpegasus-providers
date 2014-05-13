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
The CIM_MaskingMappingExposedDeviceView instance is a view that is derived from CIM_SAPAvailableForElement, CIM_SCSIProtocolController and CIM_ProtocolControllerForUnit.
CIM_ElementView may associate CIM_MaskingMappingExposedDeviceView to its underlying elements (regardless of whether or not they are instantiated).
*/


/*
			 *** Properties ***

			UNIX_MaskingMappingExposedDeviceView:
				ProtocolEndpoint Reference
				LogicalDevice Reference
				SPCSystemCreationClassName String
				SPCSystemName String
				SPCCreationClassName String
				SPCDeviceID String
				PCFUDeviceNumber String
				PCFUDeviceAccess UInt16


*/


/*
			 *** Methods ***

			UNIX_MaskingMappingExposedDeviceView:


*/

#ifndef __UNIX_MASKINGMAPPINGEXPOSEDDEVICEVIEW_H
#define __UNIX_MASKINGMAPPINGEXPOSEDDEVICEVIEW_H


#include "CIM_ClassBase.h"

#include "UNIX_MaskingMappingExposedDeviceViewDeps.h"


#ifndef PROPERTY_PROTOCOL_ENDPOINT
#define PROPERTY_PROTOCOL_ENDPOINT \
					"ProtocolEndpoint"
#endif

#ifndef PROPERTY_LOGICAL_DEVICE
#define PROPERTY_LOGICAL_DEVICE \
					"LogicalDevice"
#endif

#ifndef PROPERTY_S_P_CSYSTEM_CREATION_CLASS_NAME
#define PROPERTY_S_P_CSYSTEM_CREATION_CLASS_NAME \
					"SPCSystemCreationClassName"
#endif

#ifndef PROPERTY_S_P_CSYSTEM_NAME
#define PROPERTY_S_P_CSYSTEM_NAME \
					"SPCSystemName"
#endif

#ifndef PROPERTY_S_P_C_CREATION_CLASS_NAME
#define PROPERTY_S_P_C_CREATION_CLASS_NAME \
					"SPCCreationClassName"
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



class UNIX_MaskingMappingExposedDeviceView :
	public CIM_ClassBase
{
public:

	UNIX_MaskingMappingExposedDeviceView();
	~UNIX_MaskingMappingExposedDeviceView();

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

	virtual Boolean getProtocolEndpoint(CIMProperty&) const;
	virtual CIMInstance getProtocolEndpoint() const;
	virtual void setProtocolEndpoint(CIMInstance&);
	virtual Boolean getLogicalDevice(CIMProperty&) const;
	virtual CIMInstance getLogicalDevice() const;
	virtual void setLogicalDevice(CIMInstance&);
	virtual Boolean getSPCSystemCreationClassName(CIMProperty&) const;
	virtual String getSPCSystemCreationClassName() const;
	virtual void setSPCSystemCreationClassName(String&);
	virtual Boolean getSPCSystemName(CIMProperty&) const;
	virtual String getSPCSystemName() const;
	virtual void setSPCSystemName(String&);
	virtual Boolean getSPCCreationClassName(CIMProperty&) const;
	virtual String getSPCCreationClassName() const;
	virtual void setSPCCreationClassName(String&);
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
	CIMInstance _protocolEndpoint;
	CIMInstance _logicalDevice;
	String _sPCSystemCreationClassName;
	String _sPCSystemName;
	String _sPCCreationClassName;
	String _sPCDeviceID;
	String _pCFUDeviceNumber;
	Uint16 _pCFUDeviceAccess;

#	include "UNIX_MaskingMappingExposedDeviceViewPrivate.h"


};

#endif /* UNIX_MASKINGMAPPINGEXPOSEDDEVICEVIEW */
