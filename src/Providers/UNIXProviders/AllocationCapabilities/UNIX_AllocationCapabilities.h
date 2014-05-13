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
2.22.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Core::Capabilities
*/


/* **** Description *** */
/*
CIM_AllocationCapabilities extends the CIM_Capabilities class for the purposes of expressing the resource allocation capabilities of the associated managed element for the allocation of a specific Resource Type. This class describes the supported types of allocations allowed, specific or general, the sharing modes supported for the device, dedicated and or shared and the system states where the addition or removal of the Resource Type is allowed.
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

			UNIX_AllocationCapabilities:
				ResourceType UInt16
				OtherResourceType String
				ResourceSubType String
				RequestTypesSupported UInt16
				SharingMode UInt16
				SupportedAddStates UInt16
				SupportedRemoveStates UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Capabilities:
				CreateGoalSettings UInt16

			UNIX_AllocationCapabilities:


*/

#ifndef __UNIX_ALLOCATIONCAPABILITIES_H
#define __UNIX_ALLOCATIONCAPABILITIES_H


#include "CIM_Capabilities.h"

#include "UNIX_AllocationCapabilitiesDeps.h"


#ifndef PROPERTY_RESOURCE_TYPE
#define PROPERTY_RESOURCE_TYPE \
					"ResourceType"
#endif

#ifndef PROPERTY_OTHER_RESOURCE_TYPE
#define PROPERTY_OTHER_RESOURCE_TYPE \
					"OtherResourceType"
#endif

#ifndef PROPERTY_RESOURCE_SUB_TYPE
#define PROPERTY_RESOURCE_SUB_TYPE \
					"ResourceSubType"
#endif

#ifndef PROPERTY_REQUEST_TYPES_SUPPORTED
#define PROPERTY_REQUEST_TYPES_SUPPORTED \
					"RequestTypesSupported"
#endif

#ifndef PROPERTY_SHARING_MODE
#define PROPERTY_SHARING_MODE \
					"SharingMode"
#endif

#ifndef PROPERTY_SUPPORTED_ADD_STATES
#define PROPERTY_SUPPORTED_ADD_STATES \
					"SupportedAddStates"
#endif

#ifndef PROPERTY_SUPPORTED_REMOVE_STATES
#define PROPERTY_SUPPORTED_REMOVE_STATES \
					"SupportedRemoveStates"
#endif



class UNIX_AllocationCapabilities :
	public CIM_Capabilities
{
public:

	UNIX_AllocationCapabilities();
	~UNIX_AllocationCapabilities();

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
	virtual Boolean getResourceType(CIMProperty&) const;
	virtual Uint16 getResourceType() const;
	virtual void setResourceType(Uint16&);
	virtual Boolean getOtherResourceType(CIMProperty&) const;
	virtual String getOtherResourceType() const;
	virtual void setOtherResourceType(String&);
	virtual Boolean getResourceSubType(CIMProperty&) const;
	virtual String getResourceSubType() const;
	virtual void setResourceSubType(String&);
	virtual Boolean getRequestTypesSupported(CIMProperty&) const;
	virtual Uint16 getRequestTypesSupported() const;
	virtual void setRequestTypesSupported(Uint16&);
	virtual Boolean getSharingMode(CIMProperty&) const;
	virtual Uint16 getSharingMode() const;
	virtual void setSharingMode(Uint16&);
	virtual Boolean getSupportedAddStates(CIMProperty&) const;
	virtual Array<Uint16> getSupportedAddStates() const;
	virtual void setSupportedAddStates(Array<Uint16>&);
	virtual Boolean getSupportedRemoveStates(CIMProperty&) const;
	virtual Array<Uint16> getSupportedRemoveStates() const;
	virtual void setSupportedRemoveStates(Array<Uint16>&);

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
	Uint16 _resourceType;
	String _otherResourceType;
	String _resourceSubType;
	Uint16 _requestTypesSupported;
	Uint16 _sharingMode;
	Array<Uint16> _supportedAddStates;
	Array<Uint16> _supportedRemoveStates;

#	include "UNIX_AllocationCapabilitiesPrivate.h"


};

#endif /* UNIX_ALLOCATIONCAPABILITIES */
