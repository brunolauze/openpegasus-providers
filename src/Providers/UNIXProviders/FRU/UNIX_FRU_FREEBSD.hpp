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


UNIX_FRU::UNIX_FRU(void)
{
}

UNIX_FRU::~UNIX_FRU(void)
{
}

Boolean UNIX_FRU::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_FRU::getInstanceID() const
{
	return _instanceID;
}

void UNIX_FRU::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_FRU::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_FRU::getCaption() const
{
	return _caption;
}

void UNIX_FRU::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_FRU::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_FRU::getDescription() const
{
	return _description;
}

void UNIX_FRU::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_FRU::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_FRU::getElementName() const
{
	return _elementName;
}

void UNIX_FRU::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_FRU::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_FRU::getGeneration() const
{
	return _generation;
}

void UNIX_FRU::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_FRU::getFRUNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_F_R_U_NUMBER, getFRUNumber());
	return true;
}

String UNIX_FRU::getFRUNumber() const
{
	return _fRUNumber;
}

void UNIX_FRU::setFRUNumber(String &value)
{
	_fRUNumber = value;
}

Boolean UNIX_FRU::getIdentifyingNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_NUMBER, getIdentifyingNumber());
	return true;
}

String UNIX_FRU::getIdentifyingNumber() const
{
	return _identifyingNumber;
}

void UNIX_FRU::setIdentifyingNumber(String &value)
{
	_identifyingNumber = value;
}

Boolean UNIX_FRU::getVendor(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR, getVendor());
	return true;
}

String UNIX_FRU::getVendor() const
{
	return _vendor;
}

void UNIX_FRU::setVendor(String &value)
{
	_vendor = value;
}

Boolean UNIX_FRU::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_FRU::getName() const
{
	return _name;
}

void UNIX_FRU::setName(String &value)
{
	_name = value;
}

Boolean UNIX_FRU::getRevisionLevel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REVISION_LEVEL, getRevisionLevel());
	return true;
}

String UNIX_FRU::getRevisionLevel() const
{
	return _revisionLevel;
}

void UNIX_FRU::setRevisionLevel(String &value)
{
	_revisionLevel = value;
}

Boolean UNIX_FRU::getCustomerReplaceable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CUSTOMER_REPLACEABLE, getCustomerReplaceable());
	return true;
}

Boolean UNIX_FRU::getCustomerReplaceable() const
{
	return _customerReplaceable;
}

void UNIX_FRU::setCustomerReplaceable(Boolean &value)
{
	_customerReplaceable = value;
}


void UNIX_FRU::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("FRU");
	_generation = Uint64(0);
	_fRUNumber = String ("");
	_identifyingNumber = String ("");
	_vendor = String ("");
	_name = String ("");
	_revisionLevel = String ("");
	_customerReplaceable = Boolean(false);

}

Boolean UNIX_FRU::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "FRUNumber"))
			{
				String fRUNumberValue;
				property.getValue().get(fRUNumberValue);
				setFRUNumber(fRUNumberValue);
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
			else if (String::equal(property.getName().getString(), "Name"))
			{
				String nameValue;
				property.getValue().get(nameValue);
				setName(nameValue);
			}
			else if (String::equal(property.getName().getString(), "RevisionLevel"))
			{
				String revisionLevelValue;
				property.getValue().get(revisionLevelValue);
				setRevisionLevel(revisionLevelValue);
			}
			else if (String::equal(property.getName().getString(), "CustomerReplaceable"))
			{
				Boolean customerReplaceableValue;
				property.getValue().get(customerReplaceableValue);
				setCustomerReplaceable(customerReplaceableValue);
			}
	}
	return true;
}


Boolean UNIX_FRU::initialize()
{
	return false;
}

Boolean UNIX_FRU::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("FRU");
	_generation = Uint64(0);
	_fRUNumber = String ("");
	_identifyingNumber = String ("");
	_vendor = String ("");
	_name = String ("");
	_revisionLevel = String ("");
	_customerReplaceable = Boolean(false);
	
	return false;
}

Boolean UNIX_FRU::finalize()
{
	return false;
}

Boolean UNIX_FRU::loadByName(const String name)
{
	return false;
}

Boolean UNIX_FRU::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String fRUNumberKey;
	String identifyingNumberKey;
	String vendorKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_F_R_U_NUMBER)) fRUNumberKey = kb.getValue();
		else if (keyName.equal(PROPERTY_IDENTIFYING_NUMBER)) identifyingNumberKey = kb.getValue();
		else if (keyName.equal(PROPERTY_VENDOR)) vendorKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getFRUNumber(), fRUNumberKey)) && 
			(String::equalNoCase(getIdentifyingNumber(), identifyingNumberKey)) && 
			(String::equalNoCase(getVendor(), vendorKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_FRU::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FRU::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FRU::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FRU::validateInstance()
{
	return true;
}

