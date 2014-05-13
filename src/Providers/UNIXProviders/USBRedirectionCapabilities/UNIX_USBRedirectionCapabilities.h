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
2.22.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Network::USBRedirection
*/


/* **** Description *** */
/*
USBRedirectionCapabilities describes the capabilities of the USB Redirection Service.
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

			CIM_RedirectionServiceCapabilities:
				SharingModeSupported UInt16

			UNIX_USBRedirectionCapabilities:
				ConnectionModesSupported UInt16
				USBVersionsSupported UInt16
				ClassesSupported UInt8
				SubClassesSupported UInt8
				MaxDevicesSupported UInt16
				MaxDevicesPerSAP UInt16
				SAPCapabilitiesSupported UInt16
				RequestedStatesSupportedForCreatedSAP UInt16
				InfoFormatsSupported UInt16
				SingleClassPerSAP Boolean


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Capabilities:
				CreateGoalSettings UInt16

			CIM_EnabledLogicalElementCapabilities:

			CIM_RedirectionServiceCapabilities:

			UNIX_USBRedirectionCapabilities:


*/

#ifndef __UNIX_USBREDIRECTIONCAPABILITIES_H
#define __UNIX_USBREDIRECTIONCAPABILITIES_H


#include "CIM_RedirectionServiceCapabilities.h"

#include "UNIX_USBRedirectionCapabilitiesDeps.h"


#ifndef PROPERTY_CONNECTION_MODES_SUPPORTED
#define PROPERTY_CONNECTION_MODES_SUPPORTED \
					"ConnectionModesSupported"
#endif

#ifndef PROPERTY_USB_VERSIONS_SUPPORTED
#define PROPERTY_USB_VERSIONS_SUPPORTED \
					"USBVersionsSupported"
#endif

#ifndef PROPERTY_CLASSES_SUPPORTED
#define PROPERTY_CLASSES_SUPPORTED \
					"ClassesSupported"
#endif

#ifndef PROPERTY_SUB_CLASSES_SUPPORTED
#define PROPERTY_SUB_CLASSES_SUPPORTED \
					"SubClassesSupported"
#endif

#ifndef PROPERTY_MAX_DEVICES_SUPPORTED
#define PROPERTY_MAX_DEVICES_SUPPORTED \
					"MaxDevicesSupported"
#endif

#ifndef PROPERTY_MAX_DEVICES_PER_SAP
#define PROPERTY_MAX_DEVICES_PER_SAP \
					"MaxDevicesPerSAP"
#endif

#ifndef PROPERTY_SAP_CAPABILITIES_SUPPORTED
#define PROPERTY_SAP_CAPABILITIES_SUPPORTED \
					"SAPCapabilitiesSupported"
#endif

#ifndef PROPERTY_REQUESTED_STATES_SUPPORTED_FOR_CREATED_SAP
#define PROPERTY_REQUESTED_STATES_SUPPORTED_FOR_CREATED_SAP \
					"RequestedStatesSupportedForCreatedSAP"
#endif

#ifndef PROPERTY_INFO_FORMATS_SUPPORTED
#define PROPERTY_INFO_FORMATS_SUPPORTED \
					"InfoFormatsSupported"
#endif

#ifndef PROPERTY_SINGLE_CLASS_PER_SAP
#define PROPERTY_SINGLE_CLASS_PER_SAP \
					"SingleClassPerSAP"
#endif



class UNIX_USBRedirectionCapabilities :
	public CIM_RedirectionServiceCapabilities
{
public:

	UNIX_USBRedirectionCapabilities();
	~UNIX_USBRedirectionCapabilities();

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
	virtual Boolean getSharingModeSupported(CIMProperty&) const;
	virtual Array<Uint16> getSharingModeSupported() const;
	virtual void setSharingModeSupported(Array<Uint16>&);
	virtual Boolean getConnectionModesSupported(CIMProperty&) const;
	virtual Array<Uint16> getConnectionModesSupported() const;
	virtual void setConnectionModesSupported(Array<Uint16>&);
	virtual Boolean getUSBVersionsSupported(CIMProperty&) const;
	virtual Array<Uint16> getUSBVersionsSupported() const;
	virtual void setUSBVersionsSupported(Array<Uint16>&);
	virtual Boolean getClassesSupported(CIMProperty&) const;
	virtual Array<Uint8> getClassesSupported() const;
	virtual void setClassesSupported(Array<Uint8>&);
	virtual Boolean getSubClassesSupported(CIMProperty&) const;
	virtual Array<Uint8> getSubClassesSupported() const;
	virtual void setSubClassesSupported(Array<Uint8>&);
	virtual Boolean getMaxDevicesSupported(CIMProperty&) const;
	virtual Array<Uint16> getMaxDevicesSupported() const;
	virtual void setMaxDevicesSupported(Array<Uint16>&);
	virtual Boolean getMaxDevicesPerSAP(CIMProperty&) const;
	virtual Array<Uint16> getMaxDevicesPerSAP() const;
	virtual void setMaxDevicesPerSAP(Array<Uint16>&);
	virtual Boolean getSAPCapabilitiesSupported(CIMProperty&) const;
	virtual Array<Uint16> getSAPCapabilitiesSupported() const;
	virtual void setSAPCapabilitiesSupported(Array<Uint16>&);
	virtual Boolean getRequestedStatesSupportedForCreatedSAP(CIMProperty&) const;
	virtual Array<Uint16> getRequestedStatesSupportedForCreatedSAP() const;
	virtual void setRequestedStatesSupportedForCreatedSAP(Array<Uint16>&);
	virtual Boolean getInfoFormatsSupported(CIMProperty&) const;
	virtual Array<Uint16> getInfoFormatsSupported() const;
	virtual void setInfoFormatsSupported(Array<Uint16>&);
	virtual Boolean getSingleClassPerSAP(CIMProperty&) const;
	virtual Boolean getSingleClassPerSAP() const;
	virtual void setSingleClassPerSAP(Boolean&);

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
	Array<Uint16> _sharingModeSupported;
	Array<Uint16> _connectionModesSupported;
	Array<Uint16> _uSBVersionsSupported;
	Array<Uint8> _classesSupported;
	Array<Uint8> _subClassesSupported;
	Array<Uint16> _maxDevicesSupported;
	Array<Uint16> _maxDevicesPerSAP;
	Array<Uint16> _sAPCapabilitiesSupported;
	Array<Uint16> _requestedStatesSupportedForCreatedSAP;
	Array<Uint16> _infoFormatsSupported;
	Boolean _singleClassPerSAP;

#	include "UNIX_USBRedirectionCapabilitiesPrivate.h"


};

#endif /* UNIX_USBREDIRECTIONCAPABILITIES */
