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
2.20.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::StorageServices
*/


/* **** Description *** */
/*
A subclass of Capabilities that defines the Capabilities of a SpareConfigurationService. An instance of SpareConfigurationCapabilities is associated with a top level ComputerSystem using ElementCapabilities. This allows systems that automatically manage sparing to describe their capabilities without implementing a SpareConfigurationService instance.
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

			UNIX_SpareConfigurationCapabilities:
				SupportedAsynchronousActions UInt16
				SupportedSynchronousActions UInt16
				SystemConfiguredSpares Boolean
				AutomaticFailOver Boolean
				MaximumSpareStorageExtents UInt32
				SupportedStorageElementCheck UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Capabilities:
				CreateGoalSettings UInt16

			UNIX_SpareConfigurationCapabilities:


*/

#ifndef __UNIX_SPARECONFIGURATIONCAPABILITIES_H
#define __UNIX_SPARECONFIGURATIONCAPABILITIES_H


#include "CIM_Capabilities.h"

#include "UNIX_SpareConfigurationCapabilitiesDeps.h"


#ifndef PROPERTY_SUPPORTED_ASYNCHRONOUS_ACTIONS
#define PROPERTY_SUPPORTED_ASYNCHRONOUS_ACTIONS \
					"SupportedAsynchronousActions"
#endif

#ifndef PROPERTY_SUPPORTED_SYNCHRONOUS_ACTIONS
#define PROPERTY_SUPPORTED_SYNCHRONOUS_ACTIONS \
					"SupportedSynchronousActions"
#endif

#ifndef PROPERTY_SYSTEM_CONFIGURED_SPARES
#define PROPERTY_SYSTEM_CONFIGURED_SPARES \
					"SystemConfiguredSpares"
#endif

#ifndef PROPERTY_AUTOMATIC_FAIL_OVER
#define PROPERTY_AUTOMATIC_FAIL_OVER \
					"AutomaticFailOver"
#endif

#ifndef PROPERTY_MAXIMUM_SPARE_STORAGE_EXTENTS
#define PROPERTY_MAXIMUM_SPARE_STORAGE_EXTENTS \
					"MaximumSpareStorageExtents"
#endif

#ifndef PROPERTY_SUPPORTED_STORAGE_ELEMENT_CHECK
#define PROPERTY_SUPPORTED_STORAGE_ELEMENT_CHECK \
					"SupportedStorageElementCheck"
#endif



class UNIX_SpareConfigurationCapabilities :
	public CIM_Capabilities
{
public:

	UNIX_SpareConfigurationCapabilities();
	~UNIX_SpareConfigurationCapabilities();

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
	virtual Boolean getSupportedAsynchronousActions(CIMProperty&) const;
	virtual Array<Uint16> getSupportedAsynchronousActions() const;
	virtual void setSupportedAsynchronousActions(Array<Uint16>&);
	virtual Boolean getSupportedSynchronousActions(CIMProperty&) const;
	virtual Array<Uint16> getSupportedSynchronousActions() const;
	virtual void setSupportedSynchronousActions(Array<Uint16>&);
	virtual Boolean getSystemConfiguredSpares(CIMProperty&) const;
	virtual Boolean getSystemConfiguredSpares() const;
	virtual void setSystemConfiguredSpares(Boolean&);
	virtual Boolean getAutomaticFailOver(CIMProperty&) const;
	virtual Boolean getAutomaticFailOver() const;
	virtual void setAutomaticFailOver(Boolean&);
	virtual Boolean getMaximumSpareStorageExtents(CIMProperty&) const;
	virtual Uint32 getMaximumSpareStorageExtents() const;
	virtual void setMaximumSpareStorageExtents(Uint32&);
	virtual Boolean getSupportedStorageElementCheck(CIMProperty&) const;
	virtual Array<Uint16> getSupportedStorageElementCheck() const;
	virtual void setSupportedStorageElementCheck(Array<Uint16>&);

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
	Array<Uint16> _supportedAsynchronousActions;
	Array<Uint16> _supportedSynchronousActions;
	Boolean _systemConfiguredSpares;
	Boolean _automaticFailOver;
	Uint32 _maximumSpareStorageExtents;
	Array<Uint16> _supportedStorageElementCheck;

#	include "UNIX_SpareConfigurationCapabilitiesPrivate.h"


};

#endif /* UNIX_SPARECONFIGURATIONCAPABILITIES */
