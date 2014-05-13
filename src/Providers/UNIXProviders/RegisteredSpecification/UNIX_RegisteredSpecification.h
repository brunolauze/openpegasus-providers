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
A RegisteredSpecification is used to advertise the implementation of a specification within a WBEM server. The specification may be authored by the DMTF or another standards organization. In this context, specification is used to describe a named and versioned set of constraints. There may be a one to one correspondence between the set of constraints and the document in which they are published. An example of a one to one correspondence is the mechanism used by the DMTF to publish its profiles. An example of one to many documents to specifications is an SMI-S book published by SNIA.
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


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			UNIX_RegisteredSpecification:


*/

#ifndef __UNIX_REGISTEREDSPECIFICATION_H
#define __UNIX_REGISTEREDSPECIFICATION_H


#include "CIM_ManagedElement.h"

#include "UNIX_RegisteredSpecificationDeps.h"


#ifndef PROPERTY_SPECIFICATION_TYPE
#define PROPERTY_SPECIFICATION_TYPE \
					"SpecificationType"
#endif

#ifndef PROPERTY_OTHER_SPECIFICATION_TYPE
#define PROPERTY_OTHER_SPECIFICATION_TYPE \
					"OtherSpecificationType"
#endif

#ifndef PROPERTY_REGISTERED_ORGANIZATION
#define PROPERTY_REGISTERED_ORGANIZATION \
					"RegisteredOrganization"
#endif

#ifndef PROPERTY_OTHER_REGISTERED_ORGANIZATION
#define PROPERTY_OTHER_REGISTERED_ORGANIZATION \
					"OtherRegisteredOrganization"
#endif

#ifndef PROPERTY_REGISTERED_NAME
#define PROPERTY_REGISTERED_NAME \
					"RegisteredName"
#endif

#ifndef PROPERTY_REGISTERED_VERSION
#define PROPERTY_REGISTERED_VERSION \
					"RegisteredVersion"
#endif

#ifndef PROPERTY_ADVERTISE_TYPES
#define PROPERTY_ADVERTISE_TYPES \
					"AdvertiseTypes"
#endif

#ifndef PROPERTY_ADVERTISE_TYPE_DESCRIPTIONS
#define PROPERTY_ADVERTISE_TYPE_DESCRIPTIONS \
					"AdvertiseTypeDescriptions"
#endif



class UNIX_RegisteredSpecification :
	public CIM_ManagedElement
{
public:

	UNIX_RegisteredSpecification();
	~UNIX_RegisteredSpecification();

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

#	include "UNIX_RegisteredSpecificationPrivate.h"


};

#endif /* UNIX_REGISTEREDSPECIFICATION */
