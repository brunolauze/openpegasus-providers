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
2.17.0
*/


/* **** UMLPackagePath *** */
/*
CIM::System::Virtualization
*/


/* **** Description *** */
/*
Capabilities of a CIM_VirtualSystemMigrationService.
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

			UNIX_VirtualSystemMigrationCapabilities:
				SynchronousMethodsSupported UInt16
				AsynchronousMethodsSupported UInt16
				DestinationHostFormatsSupported UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Capabilities:
				CreateGoalSettings UInt16

			UNIX_VirtualSystemMigrationCapabilities:


*/

#ifndef __UNIX_VIRTUALSYSTEMMIGRATIONCAPABILITIES_H
#define __UNIX_VIRTUALSYSTEMMIGRATIONCAPABILITIES_H


#include "CIM_Capabilities.h"

#include "UNIX_VirtualSystemMigrationCapabilitiesDeps.h"


#ifndef PROPERTY_SYNCHRONOUS_METHODS_SUPPORTED
#define PROPERTY_SYNCHRONOUS_METHODS_SUPPORTED \
					"SynchronousMethodsSupported"
#endif

#ifndef PROPERTY_ASYNCHRONOUS_METHODS_SUPPORTED
#define PROPERTY_ASYNCHRONOUS_METHODS_SUPPORTED \
					"AsynchronousMethodsSupported"
#endif

#ifndef PROPERTY_DESTINATION_HOST_FORMATS_SUPPORTED
#define PROPERTY_DESTINATION_HOST_FORMATS_SUPPORTED \
					"DestinationHostFormatsSupported"
#endif



class UNIX_VirtualSystemMigrationCapabilities :
	public CIM_Capabilities
{
public:

	UNIX_VirtualSystemMigrationCapabilities();
	~UNIX_VirtualSystemMigrationCapabilities();

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
	virtual Boolean getSynchronousMethodsSupported(CIMProperty&) const;
	virtual Array<Uint16> getSynchronousMethodsSupported() const;
	virtual void setSynchronousMethodsSupported(Array<Uint16>&);
	virtual Boolean getAsynchronousMethodsSupported(CIMProperty&) const;
	virtual Array<Uint16> getAsynchronousMethodsSupported() const;
	virtual void setAsynchronousMethodsSupported(Array<Uint16>&);
	virtual Boolean getDestinationHostFormatsSupported(CIMProperty&) const;
	virtual Array<Uint16> getDestinationHostFormatsSupported() const;
	virtual void setDestinationHostFormatsSupported(Array<Uint16>&);

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
	Array<Uint16> _synchronousMethodsSupported;
	Array<Uint16> _asynchronousMethodsSupported;
	Array<Uint16> _destinationHostFormatsSupported;

#	include "UNIX_VirtualSystemMigrationCapabilitiesPrivate.h"


};

#endif /* UNIX_VIRTUALSYSTEMMIGRATIONCAPABILITIES */
