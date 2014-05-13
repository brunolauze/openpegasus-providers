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
CIM::Application::InstalledProduct
*/


/* **** Description *** */
/*
The InstalledProduct object allows the grouping of SoftwareFeatures and SoftwareElements that represent the result of the installation of a purchased Product. InstalledProduct is defined to be Weak to a Product. 
Often, Products are purchased once but may be installed several times in different locations on one or more systems. All of the SoftwareElements and SoftwareFeatures of a single install are grouped by an instance of InstalledProduct. These are defined using the associations, CollectedSoftwareFeatures and Collected SoftwareElements.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_Collection:

			UNIX_InstalledProduct:
				ProductIdentifyingNumber String
				ProductName String
				ProductVendor String
				ProductVersion String
				SystemID String
				CollectionID String
				Name String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Collection:

			UNIX_InstalledProduct:


*/

#ifndef __UNIX_INSTALLEDPRODUCT_H
#define __UNIX_INSTALLEDPRODUCT_H


#include "CIM_Collection.h"

#include "UNIX_InstalledProductDeps.h"


#ifndef PROPERTY_PRODUCT_IDENTIFYING_NUMBER
#define PROPERTY_PRODUCT_IDENTIFYING_NUMBER \
					"ProductIdentifyingNumber"
#endif

#ifndef PROPERTY_PRODUCT_NAME
#define PROPERTY_PRODUCT_NAME \
					"ProductName"
#endif

#ifndef PROPERTY_PRODUCT_VENDOR
#define PROPERTY_PRODUCT_VENDOR \
					"ProductVendor"
#endif

#ifndef PROPERTY_PRODUCT_VERSION
#define PROPERTY_PRODUCT_VERSION \
					"ProductVersion"
#endif

#ifndef PROPERTY_SYSTEM_ID
#define PROPERTY_SYSTEM_ID \
					"SystemID"
#endif

#ifndef PROPERTY_COLLECTION_ID
#define PROPERTY_COLLECTION_ID \
					"CollectionID"
#endif

#ifndef PROPERTY_NAME
#define PROPERTY_NAME \
					"Name"
#endif



class UNIX_InstalledProduct :
	public CIM_Collection
{
public:

	UNIX_InstalledProduct();
	~UNIX_InstalledProduct();

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
	virtual Boolean getProductIdentifyingNumber(CIMProperty&) const;
	virtual String getProductIdentifyingNumber() const;
	virtual void setProductIdentifyingNumber(String&);
	virtual Boolean getProductName(CIMProperty&) const;
	virtual String getProductName() const;
	virtual void setProductName(String&);
	virtual Boolean getProductVendor(CIMProperty&) const;
	virtual String getProductVendor() const;
	virtual void setProductVendor(String&);
	virtual Boolean getProductVersion(CIMProperty&) const;
	virtual String getProductVersion() const;
	virtual void setProductVersion(String&);
	virtual Boolean getSystemID(CIMProperty&) const;
	virtual String getSystemID() const;
	virtual void setSystemID(String&);
	virtual Boolean getCollectionID(CIMProperty&) const;
	virtual String getCollectionID() const;
	virtual void setCollectionID(String&);
	virtual Boolean getName(CIMProperty&) const;
	virtual String getName() const;
	virtual void setName(String&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	String _productIdentifyingNumber;
	String _productName;
	String _productVendor;
	String _productVersion;
	String _systemID;
	String _collectionID;
	String _name;

#	include "UNIX_InstalledProductPrivate.h"


};

#endif /* UNIX_INSTALLEDPRODUCT */
