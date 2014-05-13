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
2.6.0
*/


/* **** UMLPackagePath *** */
/*
CIM::User::Role
*/


/* **** Description *** */
/*
The OtherRoleInformation class is used to provide additional information about an associated Role instance. This class is defined so as to incorporate commonly-used LDAP attributes to permit implementations to easily derive this information from LDAP-accessible directories.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			UNIX_OtherRoleInformation:
				CreationClassName String
				Name String
				ObjectClass String
				BusinessCategory String
				CommonName String
				Descriptions String
				DestinationIndicator String
				FacsimileTelephoneNumber String
				InternationaliSDNNumber String
				OU String
				PhysicalDeliveryOfficeName String
				PostalAddress String
				PostalCode String
				PostOfficeBox String
				PreferredDeliveryMethod String
				RegisteredAddress String
				SeeAlso String
				StateOrProvince String
				Street String
				TelephoneNumber String
				TeletexTerminalIdentifier String
				TelexNumber String
				X121Address String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			UNIX_OtherRoleInformation:


*/

#ifndef __UNIX_OTHERROLEINFORMATION_H
#define __UNIX_OTHERROLEINFORMATION_H


#include "CIM_ManagedElement.h"

#include "UNIX_OtherRoleInformationDeps.h"


#ifndef PROPERTY_CREATION_CLASS_NAME
#define PROPERTY_CREATION_CLASS_NAME \
					"CreationClassName"
#endif

#ifndef PROPERTY_NAME
#define PROPERTY_NAME \
					"Name"
#endif

#ifndef PROPERTY_OBJECT_CLASS
#define PROPERTY_OBJECT_CLASS \
					"ObjectClass"
#endif

#ifndef PROPERTY_BUSINESS_CATEGORY
#define PROPERTY_BUSINESS_CATEGORY \
					"BusinessCategory"
#endif

#ifndef PROPERTY_COMMON_NAME
#define PROPERTY_COMMON_NAME \
					"CommonName"
#endif

#ifndef PROPERTY_DESCRIPTIONS
#define PROPERTY_DESCRIPTIONS \
					"Descriptions"
#endif

#ifndef PROPERTY_DESTINATION_INDICATOR
#define PROPERTY_DESTINATION_INDICATOR \
					"DestinationIndicator"
#endif

#ifndef PROPERTY_FACSIMILE_TELEPHONE_NUMBER
#define PROPERTY_FACSIMILE_TELEPHONE_NUMBER \
					"FacsimileTelephoneNumber"
#endif

#ifndef PROPERTY_INTERNATIONALI_S_D_N_NUMBER
#define PROPERTY_INTERNATIONALI_S_D_N_NUMBER \
					"InternationaliSDNNumber"
#endif

#ifndef PROPERTY_OU
#define PROPERTY_OU \
					"OU"
#endif

#ifndef PROPERTY_PHYSICAL_DELIVERY_OFFICE_NAME
#define PROPERTY_PHYSICAL_DELIVERY_OFFICE_NAME \
					"PhysicalDeliveryOfficeName"
#endif

#ifndef PROPERTY_POSTAL_ADDRESS
#define PROPERTY_POSTAL_ADDRESS \
					"PostalAddress"
#endif

#ifndef PROPERTY_POSTAL_CODE
#define PROPERTY_POSTAL_CODE \
					"PostalCode"
#endif

#ifndef PROPERTY_POST_OFFICE_BOX
#define PROPERTY_POST_OFFICE_BOX \
					"PostOfficeBox"
#endif

#ifndef PROPERTY_PREFERRED_DELIVERY_METHOD
#define PROPERTY_PREFERRED_DELIVERY_METHOD \
					"PreferredDeliveryMethod"
#endif

#ifndef PROPERTY_REGISTERED_ADDRESS
#define PROPERTY_REGISTERED_ADDRESS \
					"RegisteredAddress"
#endif

#ifndef PROPERTY_SEE_ALSO
#define PROPERTY_SEE_ALSO \
					"SeeAlso"
#endif

#ifndef PROPERTY_STATE_OR_PROVINCE
#define PROPERTY_STATE_OR_PROVINCE \
					"StateOrProvince"
#endif

#ifndef PROPERTY_STREET
#define PROPERTY_STREET \
					"Street"
#endif

#ifndef PROPERTY_TELEPHONE_NUMBER
#define PROPERTY_TELEPHONE_NUMBER \
					"TelephoneNumber"
#endif

#ifndef PROPERTY_TELETEX_TERMINAL_IDENTIFIER
#define PROPERTY_TELETEX_TERMINAL_IDENTIFIER \
					"TeletexTerminalIdentifier"
#endif

#ifndef PROPERTY_TELEX_NUMBER
#define PROPERTY_TELEX_NUMBER \
					"TelexNumber"
#endif

#ifndef PROPERTY_X_1_2_1_ADDRESS
#define PROPERTY_X_1_2_1_ADDRESS \
					"X121Address"
#endif



class UNIX_OtherRoleInformation :
	public CIM_ManagedElement
{
public:

	UNIX_OtherRoleInformation();
	~UNIX_OtherRoleInformation();

	virtual Boolean initialize();
	virtual Boolean load(int&);
	virtual Boolean loadByName(const String);
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
	virtual Boolean getCreationClassName(CIMProperty&) const;
	virtual String getCreationClassName() const;
	virtual void setCreationClassName(String&);
	virtual Boolean getName(CIMProperty&) const;
	virtual String getName() const;
	virtual void setName(String&);
	virtual Boolean getObjectClass(CIMProperty&) const;
	virtual Array<String> getObjectClass() const;
	virtual void setObjectClass(Array<String>&);
	virtual Boolean getBusinessCategory(CIMProperty&) const;
	virtual Array<String> getBusinessCategory() const;
	virtual void setBusinessCategory(Array<String>&);
	virtual Boolean getCommonName(CIMProperty&) const;
	virtual Array<String> getCommonName() const;
	virtual void setCommonName(Array<String>&);
	virtual Boolean getDescriptions(CIMProperty&) const;
	virtual Array<String> getDescriptions() const;
	virtual void setDescriptions(Array<String>&);
	virtual Boolean getDestinationIndicator(CIMProperty&) const;
	virtual Array<String> getDestinationIndicator() const;
	virtual void setDestinationIndicator(Array<String>&);
	virtual Boolean getFacsimileTelephoneNumber(CIMProperty&) const;
	virtual Array<String> getFacsimileTelephoneNumber() const;
	virtual void setFacsimileTelephoneNumber(Array<String>&);
	virtual Boolean getInternationaliSDNNumber(CIMProperty&) const;
	virtual Array<String> getInternationaliSDNNumber() const;
	virtual void setInternationaliSDNNumber(Array<String>&);
	virtual Boolean getOU(CIMProperty&) const;
	virtual Array<String> getOU() const;
	virtual void setOU(Array<String>&);
	virtual Boolean getPhysicalDeliveryOfficeName(CIMProperty&) const;
	virtual Array<String> getPhysicalDeliveryOfficeName() const;
	virtual void setPhysicalDeliveryOfficeName(Array<String>&);
	virtual Boolean getPostalAddress(CIMProperty&) const;
	virtual Array<String> getPostalAddress() const;
	virtual void setPostalAddress(Array<String>&);
	virtual Boolean getPostalCode(CIMProperty&) const;
	virtual Array<String> getPostalCode() const;
	virtual void setPostalCode(Array<String>&);
	virtual Boolean getPostOfficeBox(CIMProperty&) const;
	virtual Array<String> getPostOfficeBox() const;
	virtual void setPostOfficeBox(Array<String>&);
	virtual Boolean getPreferredDeliveryMethod(CIMProperty&) const;
	virtual String getPreferredDeliveryMethod() const;
	virtual void setPreferredDeliveryMethod(String&);
	virtual Boolean getRegisteredAddress(CIMProperty&) const;
	virtual Array<String> getRegisteredAddress() const;
	virtual void setRegisteredAddress(Array<String>&);
	virtual Boolean getSeeAlso(CIMProperty&) const;
	virtual Array<String> getSeeAlso() const;
	virtual void setSeeAlso(Array<String>&);
	virtual Boolean getStateOrProvince(CIMProperty&) const;
	virtual Array<String> getStateOrProvince() const;
	virtual void setStateOrProvince(Array<String>&);
	virtual Boolean getStreet(CIMProperty&) const;
	virtual Array<String> getStreet() const;
	virtual void setStreet(Array<String>&);
	virtual Boolean getTelephoneNumber(CIMProperty&) const;
	virtual Array<String> getTelephoneNumber() const;
	virtual void setTelephoneNumber(Array<String>&);
	virtual Boolean getTeletexTerminalIdentifier(CIMProperty&) const;
	virtual Array<String> getTeletexTerminalIdentifier() const;
	virtual void setTeletexTerminalIdentifier(Array<String>&);
	virtual Boolean getTelexNumber(CIMProperty&) const;
	virtual Array<String> getTelexNumber() const;
	virtual void setTelexNumber(Array<String>&);
	virtual Boolean getX121Address(CIMProperty&) const;
	virtual Array<String> getX121Address() const;
	virtual void setX121Address(Array<String>&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	String _creationClassName;
	String _name;
	Array<String> _objectClass;
	Array<String> _businessCategory;
	Array<String> _commonName;
	Array<String> _descriptions;
	Array<String> _destinationIndicator;
	Array<String> _facsimileTelephoneNumber;
	Array<String> _internationaliSDNNumber;
	Array<String> _oU;
	Array<String> _physicalDeliveryOfficeName;
	Array<String> _postalAddress;
	Array<String> _postalCode;
	Array<String> _postOfficeBox;
	String _preferredDeliveryMethod;
	Array<String> _registeredAddress;
	Array<String> _seeAlso;
	Array<String> _stateOrProvince;
	Array<String> _street;
	Array<String> _telephoneNumber;
	Array<String> _teletexTerminalIdentifier;
	Array<String> _telexNumber;
	Array<String> _x121Address;

#	include "UNIX_OtherRoleInformationPrivate.h"


};

#endif /* UNIX_OTHERROLEINFORMATION */
