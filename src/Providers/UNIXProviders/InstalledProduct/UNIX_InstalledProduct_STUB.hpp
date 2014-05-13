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


using PROVIDER_LIB_NS::CIMHelper;


UNIX_InstalledProduct::UNIX_InstalledProduct(void)
{
}

UNIX_InstalledProduct::~UNIX_InstalledProduct(void)
{
}

Boolean UNIX_InstalledProduct::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_InstalledProduct::getInstanceID() const
{
	return _instanceID;
}

void UNIX_InstalledProduct::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_InstalledProduct::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_InstalledProduct::getCaption() const
{
	return _caption;
}

void UNIX_InstalledProduct::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_InstalledProduct::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_InstalledProduct::getDescription() const
{
	return _description;
}

void UNIX_InstalledProduct::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_InstalledProduct::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_InstalledProduct::getElementName() const
{
	return _elementName;
}

void UNIX_InstalledProduct::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_InstalledProduct::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_InstalledProduct::getGeneration() const
{
	return _generation;
}

void UNIX_InstalledProduct::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_InstalledProduct::getProductIdentifyingNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRODUCT_IDENTIFYING_NUMBER, getProductIdentifyingNumber());
	return true;
}

String UNIX_InstalledProduct::getProductIdentifyingNumber() const
{
	return _productIdentifyingNumber;
}

void UNIX_InstalledProduct::setProductIdentifyingNumber(String &value)
{
	_productIdentifyingNumber = value;
}

Boolean UNIX_InstalledProduct::getProductName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRODUCT_NAME, getProductName());
	return true;
}

String UNIX_InstalledProduct::getProductName() const
{
	return _productName;
}

void UNIX_InstalledProduct::setProductName(String &value)
{
	_productName = value;
}

Boolean UNIX_InstalledProduct::getProductVendor(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRODUCT_VENDOR, getProductVendor());
	return true;
}

String UNIX_InstalledProduct::getProductVendor() const
{
	return _productVendor;
}

void UNIX_InstalledProduct::setProductVendor(String &value)
{
	_productVendor = value;
}

Boolean UNIX_InstalledProduct::getProductVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRODUCT_VERSION, getProductVersion());
	return true;
}

String UNIX_InstalledProduct::getProductVersion() const
{
	return _productVersion;
}

void UNIX_InstalledProduct::setProductVersion(String &value)
{
	_productVersion = value;
}

Boolean UNIX_InstalledProduct::getSystemID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_ID, getSystemID());
	return true;
}

String UNIX_InstalledProduct::getSystemID() const
{
	return _systemID;
}

void UNIX_InstalledProduct::setSystemID(String &value)
{
	_systemID = value;
}

Boolean UNIX_InstalledProduct::getCollectionID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COLLECTION_ID, getCollectionID());
	return true;
}

String UNIX_InstalledProduct::getCollectionID() const
{
	return _collectionID;
}

void UNIX_InstalledProduct::setCollectionID(String &value)
{
	_collectionID = value;
}

Boolean UNIX_InstalledProduct::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_InstalledProduct::getName() const
{
	return _name;
}

void UNIX_InstalledProduct::setName(String &value)
{
	_name = value;
}


void UNIX_InstalledProduct::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("InstalledProduct");
	_generation = Uint64(0);
	_productIdentifyingNumber = String ("");
	_productName = String ("");
	_productVendor = String ("");
	_productVersion = String ("");
	_systemID = String ("");
	_collectionID = String ("");
	_name = String ("");

}

Boolean UNIX_InstalledProduct::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "InstanceID"))
			{
				String instanceIDValue;
				property.getValue().get(instanceIDValue);
				setInstanceID(instanceIDValue);
			}
			else if (String::equal(property.getName().getString(), "Caption"))
			{
				String captionValue;
				property.getValue().get(captionValue);
				setCaption(captionValue);
			}
			else if (String::equal(property.getName().getString(), "Description"))
			{
				String descriptionValue;
				property.getValue().get(descriptionValue);
				setDescription(descriptionValue);
			}
			else if (String::equal(property.getName().getString(), "ElementName"))
			{
				String elementNameValue;
				property.getValue().get(elementNameValue);
				setElementName(elementNameValue);
			}
			else if (String::equal(property.getName().getString(), "Generation"))
			{
				Uint64 generationValue;
				property.getValue().get(generationValue);
				setGeneration(generationValue);
			}
			else if (String::equal(property.getName().getString(), "ProductIdentifyingNumber"))
			{
				String productIdentifyingNumberValue;
				property.getValue().get(productIdentifyingNumberValue);
				setProductIdentifyingNumber(productIdentifyingNumberValue);
			}
			else if (String::equal(property.getName().getString(), "ProductName"))
			{
				String productNameValue;
				property.getValue().get(productNameValue);
				setProductName(productNameValue);
			}
			else if (String::equal(property.getName().getString(), "ProductVendor"))
			{
				String productVendorValue;
				property.getValue().get(productVendorValue);
				setProductVendor(productVendorValue);
			}
			else if (String::equal(property.getName().getString(), "ProductVersion"))
			{
				String productVersionValue;
				property.getValue().get(productVersionValue);
				setProductVersion(productVersionValue);
			}
			else if (String::equal(property.getName().getString(), "SystemID"))
			{
				String systemIDValue;
				property.getValue().get(systemIDValue);
				setSystemID(systemIDValue);
			}
			else if (String::equal(property.getName().getString(), "CollectionID"))
			{
				String collectionIDValue;
				property.getValue().get(collectionIDValue);
				setCollectionID(collectionIDValue);
			}
			else if (String::equal(property.getName().getString(), "Name"))
			{
				String nameValue;
				property.getValue().get(nameValue);
				setName(nameValue);
			}
	}
	return true;
}


Boolean UNIX_InstalledProduct::initialize()
{
	return false;
}

Boolean UNIX_InstalledProduct::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("InstalledProduct");
	_generation = Uint64(0);
	_productIdentifyingNumber = String ("");
	_productName = String ("");
	_productVendor = String ("");
	_productVersion = String ("");
	_systemID = String ("");
	_collectionID = String ("");
	_name = String ("");
	
	return false;
}

Boolean UNIX_InstalledProduct::finalize()
{
	return false;
}

Boolean UNIX_InstalledProduct::loadByName(const String name)
{
	return false;
}

Boolean UNIX_InstalledProduct::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String productIdentifyingNumberKey;
	String productNameKey;
	String productVendorKey;
	String productVersionKey;
	String systemIDKey;
	String collectionIDKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_PRODUCT_IDENTIFYING_NUMBER)) productIdentifyingNumberKey = kb.getValue();
		else if (keyName.equal(PROPERTY_PRODUCT_NAME)) productNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_PRODUCT_VENDOR)) productVendorKey = kb.getValue();
		else if (keyName.equal(PROPERTY_PRODUCT_VERSION)) productVersionKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SYSTEM_ID)) systemIDKey = kb.getValue();
		else if (keyName.equal(PROPERTY_COLLECTION_ID)) collectionIDKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getProductIdentifyingNumber(), productIdentifyingNumberKey)) && 
			(String::equalNoCase(getProductName(), productNameKey)) && 
			(String::equalNoCase(getProductVendor(), productVendorKey)) && 
			(String::equalNoCase(getProductVersion(), productVersionKey)) && 
			(String::equalNoCase(getSystemID(), systemIDKey)) && 
			(String::equalNoCase(getCollectionID(), collectionIDKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_InstalledProduct::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_InstalledProduct::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_InstalledProduct::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_InstalledProduct::validateInstance()
{
	return true;
}

