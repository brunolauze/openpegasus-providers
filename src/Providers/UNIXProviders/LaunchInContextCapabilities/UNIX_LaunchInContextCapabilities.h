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
2.27.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Core::LaunchInContext
*/


/* **** Description *** */
/*
This class exposes the capabilities of the Launch in Context service.
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

			UNIX_LaunchInContextCapabilities:
				MaxRestrictionListSize UInt16
				MaxLaunchPoints UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Capabilities:
				CreateGoalSettings UInt16

			CIM_EnabledLogicalElementCapabilities:

			UNIX_LaunchInContextCapabilities:


*/

#ifndef __UNIX_LAUNCHINCONTEXTCAPABILITIES_H
#define __UNIX_LAUNCHINCONTEXTCAPABILITIES_H


#include "CIM_EnabledLogicalElementCapabilities.h"

#include "UNIX_LaunchInContextCapabilitiesDeps.h"


#ifndef PROPERTY_MAX_RESTRICTION_LIST_SIZE
#define PROPERTY_MAX_RESTRICTION_LIST_SIZE \
					"MaxRestrictionListSize"
#endif

#ifndef PROPERTY_MAX_LAUNCH_POINTS
#define PROPERTY_MAX_LAUNCH_POINTS \
					"MaxLaunchPoints"
#endif



class UNIX_LaunchInContextCapabilities :
	public CIM_EnabledLogicalElementCapabilities
{
public:

	UNIX_LaunchInContextCapabilities();
	~UNIX_LaunchInContextCapabilities();

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
	virtual Boolean getMaxRestrictionListSize(CIMProperty&) const;
	virtual Uint16 getMaxRestrictionListSize() const;
	virtual void setMaxRestrictionListSize(Uint16&);
	virtual Boolean getMaxLaunchPoints(CIMProperty&) const;
	virtual Uint16 getMaxLaunchPoints() const;
	virtual void setMaxLaunchPoints(Uint16&);

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
	Uint16 _maxRestrictionListSize;
	Uint16 _maxLaunchPoints;

#	include "UNIX_LaunchInContextCapabilitiesPrivate.h"


};

#endif /* UNIX_LAUNCHINCONTEXTCAPABILITIES */
