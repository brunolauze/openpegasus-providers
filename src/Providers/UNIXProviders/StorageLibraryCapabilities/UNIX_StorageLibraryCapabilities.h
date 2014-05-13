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
CIM::Device::StorageLib
*/


/* **** Description *** */
/*
Capabilities of Storage Library systems.
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

			UNIX_ImplementationCapabilities:
				SupportedCapacityOptimizations String
				SupportedViews String
				SupportedElementNameCodeSet UInt16

			UNIX_StorageLibraryCapabilities:
				Capabilities UInt16
				MaxAuditTime UInt64


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Capabilities:
				CreateGoalSettings UInt16

			UNIX_ImplementationCapabilities:

			UNIX_StorageLibraryCapabilities:


*/

#ifndef __UNIX_STORAGELIBRARYCAPABILITIES_H
#define __UNIX_STORAGELIBRARYCAPABILITIES_H


#include <ImplementationCapabilities/UNIX_ImplementationCapabilities.h>

#include "UNIX_StorageLibraryCapabilitiesDeps.h"


#ifndef PROPERTY_CAPABILITIES
#define PROPERTY_CAPABILITIES \
					"Capabilities"
#endif

#ifndef PROPERTY_MAX_AUDIT_TIME
#define PROPERTY_MAX_AUDIT_TIME \
					"MaxAuditTime"
#endif



class UNIX_StorageLibraryCapabilities :
	public UNIX_ImplementationCapabilities
{
public:

	UNIX_StorageLibraryCapabilities();
	~UNIX_StorageLibraryCapabilities();

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
	virtual Boolean getSupportedCapacityOptimizations(CIMProperty&) const;
	virtual Array<String> getSupportedCapacityOptimizations() const;
	virtual void setSupportedCapacityOptimizations(Array<String>&);
	virtual Boolean getSupportedViews(CIMProperty&) const;
	virtual Array<String> getSupportedViews() const;
	virtual void setSupportedViews(Array<String>&);
	virtual Boolean getSupportedElementNameCodeSet(CIMProperty&) const;
	virtual Uint16 getSupportedElementNameCodeSet() const;
	virtual void setSupportedElementNameCodeSet(Uint16&);
	virtual Boolean getCapabilities(CIMProperty&) const;
	virtual Array<Uint16> getCapabilities() const;
	virtual void setCapabilities(Array<Uint16>&);
	virtual Boolean getMaxAuditTime(CIMProperty&) const;
	virtual Uint64 getMaxAuditTime() const;
	virtual void setMaxAuditTime(Uint64&);

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
	Array<String> _supportedCapacityOptimizations;
	Array<String> _supportedViews;
	Uint16 _supportedElementNameCodeSet;
	Array<Uint16> _capabilities;
	Uint64 _maxAuditTime;

#	include "UNIX_StorageLibraryCapabilitiesPrivate.h"


};

#endif /* UNIX_STORAGELIBRARYCAPABILITIES */
