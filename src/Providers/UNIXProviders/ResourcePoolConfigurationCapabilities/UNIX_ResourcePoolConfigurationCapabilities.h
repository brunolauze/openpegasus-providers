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
CIM::Core::Resource
*/


/* **** Description *** */
/*
This class exposes the supported capabilities of a ResourcePoolConfigurationService. Not all implementations will support all methods on the service. Clients may use instances of this class to determine which methods are supported. The same method must not be listed in both lists. Implementations must either be non-blocking and use a Job for long running operations, or always block until the operation completes.
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

			UNIX_ResourcePoolConfigurationCapabilities:
				AsynchronousMethodsSupported UInt32
				SynchronousMethodsSupported UInt32


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Capabilities:
				CreateGoalSettings UInt16

			UNIX_ResourcePoolConfigurationCapabilities:


*/

#ifndef __UNIX_RESOURCEPOOLCONFIGURATIONCAPABILITIES_H
#define __UNIX_RESOURCEPOOLCONFIGURATIONCAPABILITIES_H


#include "CIM_Capabilities.h"

#include "UNIX_ResourcePoolConfigurationCapabilitiesDeps.h"


#ifndef PROPERTY_ASYNCHRONOUS_METHODS_SUPPORTED
#define PROPERTY_ASYNCHRONOUS_METHODS_SUPPORTED \
					"AsynchronousMethodsSupported"
#endif

#ifndef PROPERTY_SYNCHRONOUS_METHODS_SUPPORTED
#define PROPERTY_SYNCHRONOUS_METHODS_SUPPORTED \
					"SynchronousMethodsSupported"
#endif



class UNIX_ResourcePoolConfigurationCapabilities :
	public CIM_Capabilities
{
public:

	UNIX_ResourcePoolConfigurationCapabilities();
	~UNIX_ResourcePoolConfigurationCapabilities();

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
	virtual Boolean getAsynchronousMethodsSupported(CIMProperty&) const;
	virtual Array<Uint32> getAsynchronousMethodsSupported() const;
	virtual void setAsynchronousMethodsSupported(Array<Uint32>&);
	virtual Boolean getSynchronousMethodsSupported(CIMProperty&) const;
	virtual Array<Uint32> getSynchronousMethodsSupported() const;
	virtual void setSynchronousMethodsSupported(Array<Uint32>&);

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
	Array<Uint32> _asynchronousMethodsSupported;
	Array<Uint32> _synchronousMethodsSupported;

#	include "UNIX_ResourcePoolConfigurationCapabilitiesPrivate.h"


};

#endif /* UNIX_RESOURCEPOOLCONFIGURATIONCAPABILITIES */
