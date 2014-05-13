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
2.28.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Core::Software
*/


/* **** Description *** */
/*
A subclass of capabilities that defines the capabilities of a SoftwareInstallationService. A single instance of SoftwareInstallationServiceCapabilities is associated with a SoftwareInstallationService using ElementCapabilities.
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

			UNIX_SoftwareInstallationServiceCapabilities:
				SupportedAsynchronousActions UInt16
				SupportedSynchronousActions UInt16
				SupportedTargetTypes String
				SupportedExtendedResourceTypes UInt16
				CanAddToCollection Boolean
				SupportedInstallOptions UInt16
				OtherSupportedExtendedResourceTypeDescriptions String
				SupportedExtendedResourceTypesMajorVersions UInt16
				SupportedExtendedResourceTypesMinorVersions UInt16
				SupportedExtendedResourceTypesRevisionNumbers UInt16
				SupportedExtendedResourceTypesBuildNumbers UInt16
				SupportedURISchemes UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Capabilities:
				CreateGoalSettings UInt16

			UNIX_SoftwareInstallationServiceCapabilities:


*/

#ifndef __UNIX_SOFTWAREINSTALLATIONSERVICECAPABILITIES_H
#define __UNIX_SOFTWAREINSTALLATIONSERVICECAPABILITIES_H


#include "CIM_Capabilities.h"

#include "UNIX_SoftwareInstallationServiceCapabilitiesDeps.h"


#ifndef PROPERTY_SUPPORTED_ASYNCHRONOUS_ACTIONS
#define PROPERTY_SUPPORTED_ASYNCHRONOUS_ACTIONS \
					"SupportedAsynchronousActions"
#endif

#ifndef PROPERTY_SUPPORTED_SYNCHRONOUS_ACTIONS
#define PROPERTY_SUPPORTED_SYNCHRONOUS_ACTIONS \
					"SupportedSynchronousActions"
#endif

#ifndef PROPERTY_SUPPORTED_TARGET_TYPES
#define PROPERTY_SUPPORTED_TARGET_TYPES \
					"SupportedTargetTypes"
#endif

#ifndef PROPERTY_SUPPORTED_EXTENDED_RESOURCE_TYPES
#define PROPERTY_SUPPORTED_EXTENDED_RESOURCE_TYPES \
					"SupportedExtendedResourceTypes"
#endif

#ifndef PROPERTY_CAN_ADD_TO_COLLECTION
#define PROPERTY_CAN_ADD_TO_COLLECTION \
					"CanAddToCollection"
#endif

#ifndef PROPERTY_SUPPORTED_INSTALL_OPTIONS
#define PROPERTY_SUPPORTED_INSTALL_OPTIONS \
					"SupportedInstallOptions"
#endif

#ifndef PROPERTY_OTHER_SUPPORTED_EXTENDED_RESOURCE_TYPE_DESCRIPTIONS
#define PROPERTY_OTHER_SUPPORTED_EXTENDED_RESOURCE_TYPE_DESCRIPTIONS \
					"OtherSupportedExtendedResourceTypeDescriptions"
#endif

#ifndef PROPERTY_SUPPORTED_EXTENDED_RESOURCE_TYPES_MAJOR_VERSIONS
#define PROPERTY_SUPPORTED_EXTENDED_RESOURCE_TYPES_MAJOR_VERSIONS \
					"SupportedExtendedResourceTypesMajorVersions"
#endif

#ifndef PROPERTY_SUPPORTED_EXTENDED_RESOURCE_TYPES_MINOR_VERSIONS
#define PROPERTY_SUPPORTED_EXTENDED_RESOURCE_TYPES_MINOR_VERSIONS \
					"SupportedExtendedResourceTypesMinorVersions"
#endif

#ifndef PROPERTY_SUPPORTED_EXTENDED_RESOURCE_TYPES_REVISION_NUMBERS
#define PROPERTY_SUPPORTED_EXTENDED_RESOURCE_TYPES_REVISION_NUMBERS \
					"SupportedExtendedResourceTypesRevisionNumbers"
#endif

#ifndef PROPERTY_SUPPORTED_EXTENDED_RESOURCE_TYPES_BUILD_NUMBERS
#define PROPERTY_SUPPORTED_EXTENDED_RESOURCE_TYPES_BUILD_NUMBERS \
					"SupportedExtendedResourceTypesBuildNumbers"
#endif

#ifndef PROPERTY_SUPPORTED_U_R_I_SCHEMES
#define PROPERTY_SUPPORTED_U_R_I_SCHEMES \
					"SupportedURISchemes"
#endif



class UNIX_SoftwareInstallationServiceCapabilities :
	public CIM_Capabilities
{
public:

	UNIX_SoftwareInstallationServiceCapabilities();
	~UNIX_SoftwareInstallationServiceCapabilities();

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
	virtual Boolean getSupportedTargetTypes(CIMProperty&) const;
	virtual Array<String> getSupportedTargetTypes() const;
	virtual void setSupportedTargetTypes(Array<String>&);
	virtual Boolean getSupportedExtendedResourceTypes(CIMProperty&) const;
	virtual Array<Uint16> getSupportedExtendedResourceTypes() const;
	virtual void setSupportedExtendedResourceTypes(Array<Uint16>&);
	virtual Boolean getCanAddToCollection(CIMProperty&) const;
	virtual Boolean getCanAddToCollection() const;
	virtual void setCanAddToCollection(Boolean&);
	virtual Boolean getSupportedInstallOptions(CIMProperty&) const;
	virtual Array<Uint16> getSupportedInstallOptions() const;
	virtual void setSupportedInstallOptions(Array<Uint16>&);
	virtual Boolean getOtherSupportedExtendedResourceTypeDescriptions(CIMProperty&) const;
	virtual Array<String> getOtherSupportedExtendedResourceTypeDescriptions() const;
	virtual void setOtherSupportedExtendedResourceTypeDescriptions(Array<String>&);
	virtual Boolean getSupportedExtendedResourceTypesMajorVersions(CIMProperty&) const;
	virtual Array<Uint16> getSupportedExtendedResourceTypesMajorVersions() const;
	virtual void setSupportedExtendedResourceTypesMajorVersions(Array<Uint16>&);
	virtual Boolean getSupportedExtendedResourceTypesMinorVersions(CIMProperty&) const;
	virtual Array<Uint16> getSupportedExtendedResourceTypesMinorVersions() const;
	virtual void setSupportedExtendedResourceTypesMinorVersions(Array<Uint16>&);
	virtual Boolean getSupportedExtendedResourceTypesRevisionNumbers(CIMProperty&) const;
	virtual Array<Uint16> getSupportedExtendedResourceTypesRevisionNumbers() const;
	virtual void setSupportedExtendedResourceTypesRevisionNumbers(Array<Uint16>&);
	virtual Boolean getSupportedExtendedResourceTypesBuildNumbers(CIMProperty&) const;
	virtual Array<Uint16> getSupportedExtendedResourceTypesBuildNumbers() const;
	virtual void setSupportedExtendedResourceTypesBuildNumbers(Array<Uint16>&);
	virtual Boolean getSupportedURISchemes(CIMProperty&) const;
	virtual Array<Uint16> getSupportedURISchemes() const;
	virtual void setSupportedURISchemes(Array<Uint16>&);

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
	Array<String> _supportedTargetTypes;
	Array<Uint16> _supportedExtendedResourceTypes;
	Boolean _canAddToCollection;
	Array<Uint16> _supportedInstallOptions;
	Array<String> _otherSupportedExtendedResourceTypeDescriptions;
	Array<Uint16> _supportedExtendedResourceTypesMajorVersions;
	Array<Uint16> _supportedExtendedResourceTypesMinorVersions;
	Array<Uint16> _supportedExtendedResourceTypesRevisionNumbers;
	Array<Uint16> _supportedExtendedResourceTypesBuildNumbers;
	Array<Uint16> _supportedURISchemes;

#	include "UNIX_SoftwareInstallationServiceCapabilitiesPrivate.h"


};

#endif /* UNIX_SOFTWAREINSTALLATIONSERVICECAPABILITIES */
