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
2.8.1000
*/


/* **** UMLPackagePath *** */
/*
CIM::Core::ProductFRU
*/


/* **** Description *** */
/*
CIM_Product is a concrete class that aggregates PhysicalElements, software (SoftwareIdentity and SoftwareFeatures), Services and/or other Products, and is acquired as a unit. Acquisition implies an agreement between supplier and consumer which may have implications to Product licensing, support and warranty. Non-commercial (e.g., in-house developed Products) should also be identified as an instance of CIM_Product. 
Note that software is handled a bit differently in the list of aggregated entities, above. This is because software can be viewed as a tangible asset (similar to PhysicalElements) AND/ OR as a set of features that make up a Product and are deployed. These are two different concepts, usually managed by different units in a business' organization. When software 'features' are described, the CIM_SoftwareFeature class from the Application Model is instantiated (where Features are Weak to/scoped by a Product). When a specific piece of software is acquired and perhaps warrantied as part of a Product, this is addressed by the class, SoftwareIdentity.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			UNIX_Product:
				Name String
				IdentifyingNumber String
				Vendor String
				Version String
				SKUNumber String
				WarrantyStartDate DateTime
				WarrantyDuration UInt32
				Family String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			UNIX_Product:


*/

#ifndef __UNIX_PRODUCT_H
#define __UNIX_PRODUCT_H


#include "CIM_ManagedElement.h"

#include "UNIX_ProductDeps.h"


#ifndef PROPERTY_NAME
#define PROPERTY_NAME \
					"Name"
#endif

#ifndef PROPERTY_IDENTIFYING_NUMBER
#define PROPERTY_IDENTIFYING_NUMBER \
					"IdentifyingNumber"
#endif

#ifndef PROPERTY_VENDOR
#define PROPERTY_VENDOR \
					"Vendor"
#endif

#ifndef PROPERTY_VERSION
#define PROPERTY_VERSION \
					"Version"
#endif

#ifndef PROPERTY_S_K_U_NUMBER
#define PROPERTY_S_K_U_NUMBER \
					"SKUNumber"
#endif

#ifndef PROPERTY_WARRANTY_START_DATE
#define PROPERTY_WARRANTY_START_DATE \
					"WarrantyStartDate"
#endif

#ifndef PROPERTY_WARRANTY_DURATION
#define PROPERTY_WARRANTY_DURATION \
					"WarrantyDuration"
#endif

#ifndef PROPERTY_FAMILY
#define PROPERTY_FAMILY \
					"Family"
#endif



class UNIX_Product :
	public CIM_ManagedElement
{
public:

	UNIX_Product();
	~UNIX_Product();

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
	virtual Boolean getName(CIMProperty&) const;
	virtual String getName() const;
	virtual void setName(String&);
	virtual Boolean getIdentifyingNumber(CIMProperty&) const;
	virtual String getIdentifyingNumber() const;
	virtual void setIdentifyingNumber(String&);
	virtual Boolean getVendor(CIMProperty&) const;
	virtual String getVendor() const;
	virtual void setVendor(String&);
	virtual Boolean getVersion(CIMProperty&) const;
	virtual String getVersion() const;
	virtual void setVersion(String&);
	virtual Boolean getSKUNumber(CIMProperty&) const;
	virtual String getSKUNumber() const;
	virtual void setSKUNumber(String&);
	virtual Boolean getWarrantyStartDate(CIMProperty&) const;
	virtual CIMDateTime getWarrantyStartDate() const;
	virtual void setWarrantyStartDate(CIMDateTime&);
	virtual Boolean getWarrantyDuration(CIMProperty&) const;
	virtual Uint32 getWarrantyDuration() const;
	virtual void setWarrantyDuration(Uint32&);
	virtual Boolean getFamily(CIMProperty&) const;
	virtual String getFamily() const;
	virtual void setFamily(String&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	String _name;
	String _identifyingNumber;
	String _vendor;
	String _version;
	String _sKUNumber;
	CIMDateTime _warrantyStartDate;
	Uint32 _warrantyDuration;
	String _family;

#	include "UNIX_ProductPrivate.h"


};

#endif /* UNIX_PRODUCT */
