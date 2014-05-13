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
2.8.1000
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::StorageNameBinding
*/


/* **** Description *** */
/*
StorageNameBindingCapabilities describes the current implementation's support for optional behavior.
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

			UNIX_StorageNameBindingCapabilities:
				ValidBindingTypes UInt16
				ActivateBindingRequiresReset Boolean
				CanMapAddresses Boolean
				CanBindAllLuns Boolean
				AutoDiscovery Boolean
				CanSetOSDeviceName Boolean


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Capabilities:
				CreateGoalSettings UInt16

			UNIX_StorageNameBindingCapabilities:


*/

#ifndef __UNIX_STORAGENAMEBINDINGCAPABILITIES_H
#define __UNIX_STORAGENAMEBINDINGCAPABILITIES_H


#include "CIM_Capabilities.h"

#include "UNIX_StorageNameBindingCapabilitiesDeps.h"


#ifndef PROPERTY_VALID_BINDING_TYPES
#define PROPERTY_VALID_BINDING_TYPES \
					"ValidBindingTypes"
#endif

#ifndef PROPERTY_ACTIVATE_BINDING_REQUIRES_RESET
#define PROPERTY_ACTIVATE_BINDING_REQUIRES_RESET \
					"ActivateBindingRequiresReset"
#endif

#ifndef PROPERTY_CAN_MAP_ADDRESSES
#define PROPERTY_CAN_MAP_ADDRESSES \
					"CanMapAddresses"
#endif

#ifndef PROPERTY_CAN_BIND_ALL_LUNS
#define PROPERTY_CAN_BIND_ALL_LUNS \
					"CanBindAllLuns"
#endif

#ifndef PROPERTY_AUTO_DISCOVERY
#define PROPERTY_AUTO_DISCOVERY \
					"AutoDiscovery"
#endif

#ifndef PROPERTY_CAN_SET_OS_DEVICE_NAME
#define PROPERTY_CAN_SET_OS_DEVICE_NAME \
					"CanSetOSDeviceName"
#endif



class UNIX_StorageNameBindingCapabilities :
	public CIM_Capabilities
{
public:

	UNIX_StorageNameBindingCapabilities();
	~UNIX_StorageNameBindingCapabilities();

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
	virtual Boolean getValidBindingTypes(CIMProperty&) const;
	virtual Array<Uint16> getValidBindingTypes() const;
	virtual void setValidBindingTypes(Array<Uint16>&);
	virtual Boolean getActivateBindingRequiresReset(CIMProperty&) const;
	virtual Boolean getActivateBindingRequiresReset() const;
	virtual void setActivateBindingRequiresReset(Boolean&);
	virtual Boolean getCanMapAddresses(CIMProperty&) const;
	virtual Boolean getCanMapAddresses() const;
	virtual void setCanMapAddresses(Boolean&);
	virtual Boolean getCanBindAllLuns(CIMProperty&) const;
	virtual Boolean getCanBindAllLuns() const;
	virtual void setCanBindAllLuns(Boolean&);
	virtual Boolean getAutoDiscovery(CIMProperty&) const;
	virtual Boolean getAutoDiscovery() const;
	virtual void setAutoDiscovery(Boolean&);
	virtual Boolean getCanSetOSDeviceName(CIMProperty&) const;
	virtual Boolean getCanSetOSDeviceName() const;
	virtual void setCanSetOSDeviceName(Boolean&);

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
	Array<Uint16> _validBindingTypes;
	Boolean _activateBindingRequiresReset;
	Boolean _canMapAddresses;
	Boolean _canBindAllLuns;
	Boolean _autoDiscovery;
	Boolean _canSetOSDeviceName;

#	include "UNIX_StorageNameBindingCapabilitiesPrivate.h"


};

#endif /* UNIX_STORAGENAMEBINDINGCAPABILITIES */
