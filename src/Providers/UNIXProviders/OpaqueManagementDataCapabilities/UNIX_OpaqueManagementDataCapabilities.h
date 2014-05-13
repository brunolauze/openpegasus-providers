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
2.23.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Core::OpaqueManagementData
*/


/* **** Description *** */
/*
CIM_OpaqueManagementDataCapabilities describes the capabilities of CIM_OpaqueManagementDataService.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_Capabilities:

			CIM_EnabledLogicalElementCapabilities:
				ElementNameEditSupported Boolean
				MaxElementNameLen UInt16
				RequestedStatesSupported UInt16
				ElementNameMask String
				StateAwareness UInt16

			UNIX_OpaqueManagementDataCapabilities:
				MaxAvailableStorage UInt64
				MaxReadLength UInt64
				MaxWriteLength UInt64
				SupportedExportURISchemes UInt16
				SupportedImportURISchemes UInt16
				SupportedMethods UInt16
				TruncationSupported Boolean
				MaxInstancesSupported UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Capabilities:
				CreateGoalSettings UInt16

			CIM_EnabledLogicalElementCapabilities:

			UNIX_OpaqueManagementDataCapabilities:


*/

#ifndef __UNIX_OPAQUEMANAGEMENTDATACAPABILITIES_H
#define __UNIX_OPAQUEMANAGEMENTDATACAPABILITIES_H


#include "CIM_EnabledLogicalElementCapabilities.h"

#include "UNIX_OpaqueManagementDataCapabilitiesDeps.h"


#ifndef PROPERTY_MAX_AVAILABLE_STORAGE
#define PROPERTY_MAX_AVAILABLE_STORAGE \
					"MaxAvailableStorage"
#endif

#ifndef PROPERTY_MAX_READ_LENGTH
#define PROPERTY_MAX_READ_LENGTH \
					"MaxReadLength"
#endif

#ifndef PROPERTY_MAX_WRITE_LENGTH
#define PROPERTY_MAX_WRITE_LENGTH \
					"MaxWriteLength"
#endif

#ifndef PROPERTY_SUPPORTED_EXPORT_U_R_I_SCHEMES
#define PROPERTY_SUPPORTED_EXPORT_U_R_I_SCHEMES \
					"SupportedExportURISchemes"
#endif

#ifndef PROPERTY_SUPPORTED_IMPORT_U_R_I_SCHEMES
#define PROPERTY_SUPPORTED_IMPORT_U_R_I_SCHEMES \
					"SupportedImportURISchemes"
#endif

#ifndef PROPERTY_SUPPORTED_METHODS
#define PROPERTY_SUPPORTED_METHODS \
					"SupportedMethods"
#endif

#ifndef PROPERTY_TRUNCATION_SUPPORTED
#define PROPERTY_TRUNCATION_SUPPORTED \
					"TruncationSupported"
#endif

#ifndef PROPERTY_MAX_INSTANCES_SUPPORTED
#define PROPERTY_MAX_INSTANCES_SUPPORTED \
					"MaxInstancesSupported"
#endif



class UNIX_OpaqueManagementDataCapabilities :
	public CIM_EnabledLogicalElementCapabilities
{
public:

	UNIX_OpaqueManagementDataCapabilities();
	~UNIX_OpaqueManagementDataCapabilities();

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
	virtual Boolean getElementNameEditSupported(CIMProperty&) const;
	virtual Boolean getElementNameEditSupported() const;
	virtual void setElementNameEditSupported(Boolean&);
	virtual Boolean getMaxElementNameLen(CIMProperty&) const;
	virtual Uint16 getMaxElementNameLen() const;
	virtual void setMaxElementNameLen(Uint16&);
	virtual Boolean getRequestedStatesSupported(CIMProperty&) const;
	virtual Array<Uint16> getRequestedStatesSupported() const;
	virtual void setRequestedStatesSupported(Array<Uint16>&);
	virtual Boolean getElementNameMask(CIMProperty&) const;
	virtual String getElementNameMask() const;
	virtual void setElementNameMask(String&);
	virtual Boolean getStateAwareness(CIMProperty&) const;
	virtual Array<Uint16> getStateAwareness() const;
	virtual void setStateAwareness(Array<Uint16>&);
	virtual Boolean getMaxAvailableStorage(CIMProperty&) const;
	virtual Uint64 getMaxAvailableStorage() const;
	virtual void setMaxAvailableStorage(Uint64&);
	virtual Boolean getMaxReadLength(CIMProperty&) const;
	virtual Uint64 getMaxReadLength() const;
	virtual void setMaxReadLength(Uint64&);
	virtual Boolean getMaxWriteLength(CIMProperty&) const;
	virtual Uint64 getMaxWriteLength() const;
	virtual void setMaxWriteLength(Uint64&);
	virtual Boolean getSupportedExportURISchemes(CIMProperty&) const;
	virtual Array<Uint16> getSupportedExportURISchemes() const;
	virtual void setSupportedExportURISchemes(Array<Uint16>&);
	virtual Boolean getSupportedImportURISchemes(CIMProperty&) const;
	virtual Array<Uint16> getSupportedImportURISchemes() const;
	virtual void setSupportedImportURISchemes(Array<Uint16>&);
	virtual Boolean getSupportedMethods(CIMProperty&) const;
	virtual Array<Uint16> getSupportedMethods() const;
	virtual void setSupportedMethods(Array<Uint16>&);
	virtual Boolean getTruncationSupported(CIMProperty&) const;
	virtual Boolean getTruncationSupported() const;
	virtual void setTruncationSupported(Boolean&);
	virtual Boolean getMaxInstancesSupported(CIMProperty&) const;
	virtual Uint16 getMaxInstancesSupported() const;
	virtual void setMaxInstancesSupported(Uint16&);

	virtual Uint16 invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	);



private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	Boolean _elementNameEditSupported;
	Uint16 _maxElementNameLen;
	Array<Uint16> _requestedStatesSupported;
	String _elementNameMask;
	Array<Uint16> _stateAwareness;
	Uint64 _maxAvailableStorage;
	Uint64 _maxReadLength;
	Uint64 _maxWriteLength;
	Array<Uint16> _supportedExportURISchemes;
	Array<Uint16> _supportedImportURISchemes;
	Array<Uint16> _supportedMethods;
	Boolean _truncationSupported;
	Uint16 _maxInstancesSupported;

#	include "UNIX_OpaqueManagementDataCapabilitiesPrivate.h"


};

#endif /* UNIX_OPAQUEMANAGEMENTDATACAPABILITIES */
