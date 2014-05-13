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
2.39.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Interop
*/


/* **** Description *** */
/*
A RegisteredProfile describes a set of CIM Schema classes with required properties and/or methods, necessary to manage a real-world entity or to support a usage scenario, in an interoperable fashion. RegisteredProfiles can be defined by the DMTF or other standards organizations. Note that this class should not be confused with CIM_Profile, which collects SettingData instances, to be applied as a 'configuration profile' for an element. 
A RegisteredProfile is a named 'standard' for CIM-based management of a particular System, subsystem, Service or other entity, for a specified set of uses. It is a complete, standalone definition, as opposed to the subclass RegisteredSubProfile, which requires a scoping profile for context. 
The uses for a RegisteredProfile or SubProfile MUST be specified in the document that defines the profile. Examples of Profiles are to manage various aspects of an Operating System, Storage Array, or Database. The name of the profile is defined and scoped by its authoring organization.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			UNIX_RegisteredSpecification:
				SpecificationType UInt16
				OtherSpecificationType String
				RegisteredOrganization UInt16
				OtherRegisteredOrganization String
				RegisteredName String
				RegisteredVersion String
				AdvertiseTypes UInt16
				AdvertiseTypeDescriptions String

			UNIX_RegisteredProfile:
				ImplementedFeatures String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			UNIX_RegisteredSpecification:

			UNIX_RegisteredProfile:
				CloseConformantInstances UInt32
				OpenConformantInstances UInt32
				PullConformantInstances UInt32
				GetCentralInstances UInt8


*/

#ifndef __UNIX_REGISTEREDPROFILE_H
#define __UNIX_REGISTEREDPROFILE_H


#include <RegisteredSpecification/UNIX_RegisteredSpecification.h>

#include "UNIX_RegisteredProfileDeps.h"


#ifndef PROPERTY_IMPLEMENTED_FEATURES
#define PROPERTY_IMPLEMENTED_FEATURES \
					"ImplementedFeatures"
#endif



class UNIX_RegisteredProfile :
	public UNIX_RegisteredSpecification
{
public:

	UNIX_RegisteredProfile();
	~UNIX_RegisteredProfile();

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
	virtual Boolean getSpecificationType(CIMProperty&) const;
	virtual Uint16 getSpecificationType() const;
	virtual void setSpecificationType(Uint16&);
	virtual Boolean getOtherSpecificationType(CIMProperty&) const;
	virtual String getOtherSpecificationType() const;
	virtual void setOtherSpecificationType(String&);
	virtual Boolean getRegisteredOrganization(CIMProperty&) const;
	virtual Uint16 getRegisteredOrganization() const;
	virtual void setRegisteredOrganization(Uint16&);
	virtual Boolean getOtherRegisteredOrganization(CIMProperty&) const;
	virtual String getOtherRegisteredOrganization() const;
	virtual void setOtherRegisteredOrganization(String&);
	virtual Boolean getRegisteredName(CIMProperty&) const;
	virtual String getRegisteredName() const;
	virtual void setRegisteredName(String&);
	virtual Boolean getRegisteredVersion(CIMProperty&) const;
	virtual String getRegisteredVersion() const;
	virtual void setRegisteredVersion(String&);
	virtual Boolean getAdvertiseTypes(CIMProperty&) const;
	virtual Array<Uint16> getAdvertiseTypes() const;
	virtual void setAdvertiseTypes(Array<Uint16>&);
	virtual Boolean getAdvertiseTypeDescriptions(CIMProperty&) const;
	virtual Array<String> getAdvertiseTypeDescriptions() const;
	virtual void setAdvertiseTypeDescriptions(Array<String>&);
	virtual Boolean getImplementedFeatures(CIMProperty&) const;
	virtual Array<String> getImplementedFeatures() const;
	virtual void setImplementedFeatures(Array<String>&);

	virtual Uint32 invokeCloseConformantInstances(
		String &inEnumerationContext
	);

	virtual Uint32 invokeOpenConformantInstances(
		String &inResultClass,
		Array<String> &inIncludedPropertyList,
		Uint32 &inOperationTimeout,
		Boolean &inContinueOnError,
		Uint32 &inMaxObjectCount,
		String &inEnumerationContext,
		Boolean &inEndOfSequence,
		Array<Uint16> &inInstanceType,
		Array<String> &inInstanceWithPathList
	);

	virtual Uint32 invokePullConformantInstances(
		Uint32 &inMaxObjectCount,
		String &inEnumerationContext,
		Boolean &inEndOfSequence,
		Array<Uint16> &inInstanceType,
		Array<String> &inInstanceWithPathList
	);

	virtual Uint8 invokeGetCentralInstances(
		CIMInstance &inCentralInstances
	);



private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	Uint16 _specificationType;
	String _otherSpecificationType;
	Uint16 _registeredOrganization;
	String _otherRegisteredOrganization;
	String _registeredName;
	String _registeredVersion;
	Array<Uint16> _advertiseTypes;
	Array<String> _advertiseTypeDescriptions;
	Array<String> _implementedFeatures;

#	include "UNIX_RegisteredProfilePrivate.h"


};

#endif /* UNIX_REGISTEREDPROFILE */
