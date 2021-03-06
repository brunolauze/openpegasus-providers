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
2.18.1
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::StorageServices
*/


/* **** Description *** */
/*
This class defines the asymmetric characteristics and capabilites of a redundant storage server. The properties in this class guide client algorithms in the interpretation of the instances of StorageResourceLoadGroup, TargetPortGroup, StorageProcessorAffinity, and AsymmetricAccessibility, and also determining support for methods that affect assignment of storage resources to storage processors.
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

			UNIX_StorageServerAsymmetryCapabilities:
				StorageResourceSymmetryCapability UInt16
				StorageResourceType UInt16
				StorageResourceAffinityAssignable Boolean
				PortGroupFailoverBehavior UInt16
				TargetPortSymmetryCapability UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Capabilities:
				CreateGoalSettings UInt16

			UNIX_StorageServerAsymmetryCapabilities:


*/

#ifndef __UNIX_STORAGESERVERASYMMETRYCAPABILITIES_H
#define __UNIX_STORAGESERVERASYMMETRYCAPABILITIES_H


#include "CIM_Capabilities.h"

#include "UNIX_StorageServerAsymmetryCapabilitiesDeps.h"


#ifndef PROPERTY_STORAGE_RESOURCE_SYMMETRY_CAPABILITY
#define PROPERTY_STORAGE_RESOURCE_SYMMETRY_CAPABILITY \
					"StorageResourceSymmetryCapability"
#endif

#ifndef PROPERTY_STORAGE_RESOURCE_TYPE
#define PROPERTY_STORAGE_RESOURCE_TYPE \
					"StorageResourceType"
#endif

#ifndef PROPERTY_STORAGE_RESOURCE_AFFINITY_ASSIGNABLE
#define PROPERTY_STORAGE_RESOURCE_AFFINITY_ASSIGNABLE \
					"StorageResourceAffinityAssignable"
#endif

#ifndef PROPERTY_PORT_GROUP_FAILOVER_BEHAVIOR
#define PROPERTY_PORT_GROUP_FAILOVER_BEHAVIOR \
					"PortGroupFailoverBehavior"
#endif

#ifndef PROPERTY_TARGET_PORT_SYMMETRY_CAPABILITY
#define PROPERTY_TARGET_PORT_SYMMETRY_CAPABILITY \
					"TargetPortSymmetryCapability"
#endif



class UNIX_StorageServerAsymmetryCapabilities :
	public CIM_Capabilities
{
public:

	UNIX_StorageServerAsymmetryCapabilities();
	~UNIX_StorageServerAsymmetryCapabilities();

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
	virtual Boolean getStorageResourceSymmetryCapability(CIMProperty&) const;
	virtual Uint16 getStorageResourceSymmetryCapability() const;
	virtual void setStorageResourceSymmetryCapability(Uint16&);
	virtual Boolean getStorageResourceType(CIMProperty&) const;
	virtual Uint16 getStorageResourceType() const;
	virtual void setStorageResourceType(Uint16&);
	virtual Boolean getStorageResourceAffinityAssignable(CIMProperty&) const;
	virtual Boolean getStorageResourceAffinityAssignable() const;
	virtual void setStorageResourceAffinityAssignable(Boolean&);
	virtual Boolean getPortGroupFailoverBehavior(CIMProperty&) const;
	virtual Uint16 getPortGroupFailoverBehavior() const;
	virtual void setPortGroupFailoverBehavior(Uint16&);
	virtual Boolean getTargetPortSymmetryCapability(CIMProperty&) const;
	virtual Uint16 getTargetPortSymmetryCapability() const;
	virtual void setTargetPortSymmetryCapability(Uint16&);

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
	Uint16 _storageResourceSymmetryCapability;
	Uint16 _storageResourceType;
	Boolean _storageResourceAffinityAssignable;
	Uint16 _portGroupFailoverBehavior;
	Uint16 _targetPortSymmetryCapability;

#	include "UNIX_StorageServerAsymmetryCapabilitiesPrivate.h"


};

#endif /* UNIX_STORAGESERVERASYMMETRYCAPABILITIES */
