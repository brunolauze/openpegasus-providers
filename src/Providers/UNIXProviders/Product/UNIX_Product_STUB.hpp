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


UNIX_Product::UNIX_Product(void)
{
}

UNIX_Product::~UNIX_Product(void)
{
}

Boolean UNIX_Product::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_Product::getInstanceID() const
{
	return _instanceID;
}

void UNIX_Product::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_Product::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_Product::getCaption() const
{
	return _caption;
}

void UNIX_Product::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_Product::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_Product::getDescription() const
{
	return _description;
}

void UNIX_Product::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_Product::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_Product::getElementName() const
{
	return _elementName;
}

void UNIX_Product::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_Product::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_Product::getGeneration() const
{
	return _generation;
}

void UNIX_Product::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_Product::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_Product::getName() const
{
	return _name;
}

void UNIX_Product::setName(String &value)
{
	_name = value;
}

Boolean UNIX_Product::getIdentifyingNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_NUMBER, getIdentifyingNumber());
	return true;
}

String UNIX_Product::getIdentifyingNumber() const
{
	return _identifyingNumber;
}

void UNIX_Product::setIdentifyingNumber(String &value)
{
	_identifyingNumber = value;
}

Boolean UNIX_Product::getVendor(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR, getVendor());
	return true;
}

String UNIX_Product::getVendor() const
{
	return _vendor;
}

void UNIX_Product::setVendor(String &value)
{
	_vendor = value;
}

Boolean UNIX_Product::getVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERSION, getVersion());
	return true;
}

String UNIX_Product::getVersion() const
{
	return _version;
}

void UNIX_Product::setVersion(String &value)
{
	_version = value;
}

Boolean UNIX_Product::getSKUNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_K_U_NUMBER, getSKUNumber());
	return true;
}

String UNIX_Product::getSKUNumber() const
{
	return _sKUNumber;
}

void UNIX_Product::setSKUNumber(String &value)
{
	_sKUNumber = value;
}

Boolean UNIX_Product::getWarrantyStartDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WARRANTY_START_DATE, getWarrantyStartDate());
	return true;
}

CIMDateTime UNIX_Product::getWarrantyStartDate() const
{
	return _warrantyStartDate;
}

void UNIX_Product::setWarrantyStartDate(CIMDateTime &value)
{
	_warrantyStartDate = value;
}

Boolean UNIX_Product::getWarrantyDuration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WARRANTY_DURATION, getWarrantyDuration());
	return true;
}

Uint32 UNIX_Product::getWarrantyDuration() const
{
	return _warrantyDuration;
}

void UNIX_Product::setWarrantyDuration(Uint32 &value)
{
	_warrantyDuration = value;
}

Boolean UNIX_Product::getFamily(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FAMILY, getFamily());
	return true;
}

String UNIX_Product::getFamily() const
{
	return _family;
}

void UNIX_Product::setFamily(String &value)
{
	_family = value;
}


void UNIX_Product::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("Product");
	_generation = Uint64(0);
	_name = String ("");
	_identifyingNumber = String ("");
	_vendor = String ("");
	_version = String ("");
	_sKUNumber = String ("");
	_warrantyStartDate = CIMHelper::getCurrentTime();
	_warrantyDuration = Uint32(0);
	_family = String ("");

}

Boolean UNIX_Product::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "Name"))
			{
				String nameValue;
				property.getValue().get(nameValue);
				setName(nameValue);
			}
			else if (String::equal(property.getName().getString(), "IdentifyingNumber"))
			{
				String identifyingNumberValue;
				property.getValue().get(identifyingNumberValue);
				setIdentifyingNumber(identifyingNumberValue);
			}
			else if (String::equal(property.getName().getString(), "Vendor"))
			{
				String vendorValue;
				property.getValue().get(vendorValue);
				setVendor(vendorValue);
			}
			else if (String::equal(property.getName().getString(), "Version"))
			{
				String versionValue;
				property.getValue().get(versionValue);
				setVersion(versionValue);
			}
			else if (String::equal(property.getName().getString(), "SKUNumber"))
			{
				String sKUNumberValue;
				property.getValue().get(sKUNumberValue);
				setSKUNumber(sKUNumberValue);
			}
			else if (String::equal(property.getName().getString(), "WarrantyStartDate"))
			{
				CIMDateTime warrantyStartDateValue;
				property.getValue().get(warrantyStartDateValue);
				setWarrantyStartDate(warrantyStartDateValue);
			}
			else if (String::equal(property.getName().getString(), "WarrantyDuration"))
			{
				Uint32 warrantyDurationValue;
				property.getValue().get(warrantyDurationValue);
				setWarrantyDuration(warrantyDurationValue);
			}
			else if (String::equal(property.getName().getString(), "Family"))
			{
				String familyValue;
				property.getValue().get(familyValue);
				setFamily(familyValue);
			}
	}
	return true;
}


Boolean UNIX_Product::initialize()
{
	return false;
}

Boolean UNIX_Product::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("Product");
	_generation = Uint64(0);
	_name = String ("");
	_identifyingNumber = String ("");
	_vendor = String ("");
	_version = String ("");
	_sKUNumber = String ("");
	_warrantyStartDate = CIMHelper::getCurrentTime();
	_warrantyDuration = Uint32(0);
	_family = String ("");
	
	return false;
}

Boolean UNIX_Product::finalize()
{
	return false;
}

Boolean UNIX_Product::loadByName(const String name)
{
	return false;
}

Boolean UNIX_Product::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String nameKey;
	String identifyingNumberKey;
	String vendorKey;
	String versionKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_IDENTIFYING_NUMBER)) identifyingNumberKey = kb.getValue();
		else if (keyName.equal(PROPERTY_VENDOR)) vendorKey = kb.getValue();
		else if (keyName.equal(PROPERTY_VERSION)) versionKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getName(), nameKey)) && 
			(String::equalNoCase(getIdentifyingNumber(), identifyingNumberKey)) && 
			(String::equalNoCase(getVendor(), vendorKey)) && 
			(String::equalNoCase(getVersion(), versionKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_Product::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Product::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Product::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Product::validateInstance()
{
	return true;
}

