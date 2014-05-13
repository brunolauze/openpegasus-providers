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
2.18.0
*/


/* **** UMLPackagePath *** */
/*
CIM::User::Privilege
*/


/* **** Description *** */
/*
A subclass of Capabilities that defines the capabilities of the Privilege Management Service.
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

			UNIX_PrivilegeManagementCapabilities:
				SharedPrivilegeSupported Boolean
				ActivitiesSupported UInt16
				ActivityQualifiersSupported String
				QualifierFormatsSupported UInt16
				SupportedMethods UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Capabilities:
				CreateGoalSettings UInt16

			UNIX_PrivilegeManagementCapabilities:


*/

#ifndef __UNIX_PRIVILEGEMANAGEMENTCAPABILITIES_H
#define __UNIX_PRIVILEGEMANAGEMENTCAPABILITIES_H


#include "CIM_Capabilities.h"

#include "UNIX_PrivilegeManagementCapabilitiesDeps.h"


#ifndef PROPERTY_SHARED_PRIVILEGE_SUPPORTED
#define PROPERTY_SHARED_PRIVILEGE_SUPPORTED \
					"SharedPrivilegeSupported"
#endif

#ifndef PROPERTY_ACTIVITIES_SUPPORTED
#define PROPERTY_ACTIVITIES_SUPPORTED \
					"ActivitiesSupported"
#endif

#ifndef PROPERTY_ACTIVITY_QUALIFIERS_SUPPORTED
#define PROPERTY_ACTIVITY_QUALIFIERS_SUPPORTED \
					"ActivityQualifiersSupported"
#endif

#ifndef PROPERTY_QUALIFIER_FORMATS_SUPPORTED
#define PROPERTY_QUALIFIER_FORMATS_SUPPORTED \
					"QualifierFormatsSupported"
#endif

#ifndef PROPERTY_SUPPORTED_METHODS
#define PROPERTY_SUPPORTED_METHODS \
					"SupportedMethods"
#endif



class UNIX_PrivilegeManagementCapabilities :
	public CIM_Capabilities
{
public:

	UNIX_PrivilegeManagementCapabilities();
	~UNIX_PrivilegeManagementCapabilities();

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
	virtual Boolean getSharedPrivilegeSupported(CIMProperty&) const;
	virtual Boolean getSharedPrivilegeSupported() const;
	virtual void setSharedPrivilegeSupported(Boolean&);
	virtual Boolean getActivitiesSupported(CIMProperty&) const;
	virtual Array<Uint16> getActivitiesSupported() const;
	virtual void setActivitiesSupported(Array<Uint16>&);
	virtual Boolean getActivityQualifiersSupported(CIMProperty&) const;
	virtual Array<String> getActivityQualifiersSupported() const;
	virtual void setActivityQualifiersSupported(Array<String>&);
	virtual Boolean getQualifierFormatsSupported(CIMProperty&) const;
	virtual Array<Uint16> getQualifierFormatsSupported() const;
	virtual void setQualifierFormatsSupported(Array<Uint16>&);
	virtual Boolean getSupportedMethods(CIMProperty&) const;
	virtual Array<Uint16> getSupportedMethods() const;
	virtual void setSupportedMethods(Array<Uint16>&);

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
	Boolean _sharedPrivilegeSupported;
	Array<Uint16> _activitiesSupported;
	Array<String> _activityQualifiersSupported;
	Array<Uint16> _qualifierFormatsSupported;
	Array<Uint16> _supportedMethods;

#	include "UNIX_PrivilegeManagementCapabilitiesPrivate.h"


};

#endif /* UNIX_PRIVILEGEMANAGEMENTCAPABILITIES */
