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


UNIX_StorageHardwareID::UNIX_StorageHardwareID(void)
{
}

UNIX_StorageHardwareID::~UNIX_StorageHardwareID(void)
{
}

Boolean UNIX_StorageHardwareID::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_StorageHardwareID::getInstanceID() const
{
	return _instanceID;
}

void UNIX_StorageHardwareID::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_StorageHardwareID::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_StorageHardwareID::getCaption() const
{
	return _caption;
}

void UNIX_StorageHardwareID::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_StorageHardwareID::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_StorageHardwareID::getDescription() const
{
	return _description;
}

void UNIX_StorageHardwareID::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_StorageHardwareID::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_StorageHardwareID::getElementName() const
{
	return _elementName;
}

void UNIX_StorageHardwareID::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_StorageHardwareID::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_StorageHardwareID::getGeneration() const
{
	return _generation;
}

void UNIX_StorageHardwareID::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_StorageHardwareID::getCurrentlyAuthenticated(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENTLY_AUTHENTICATED, getCurrentlyAuthenticated());
	return true;
}

Boolean UNIX_StorageHardwareID::getCurrentlyAuthenticated() const
{
	return _currentlyAuthenticated;
}

void UNIX_StorageHardwareID::setCurrentlyAuthenticated(Boolean &value)
{
	_currentlyAuthenticated = value;
}

Boolean UNIX_StorageHardwareID::getStorageID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STORAGE_ID, getStorageID());
	return true;
}

String UNIX_StorageHardwareID::getStorageID() const
{
	return _storageID;
}

void UNIX_StorageHardwareID::setStorageID(String &value)
{
	_storageID = value;
}

Boolean UNIX_StorageHardwareID::getIDType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ID_TYPE, getIDType());
	return true;
}

Uint16 UNIX_StorageHardwareID::getIDType() const
{
	return _iDType;
}

void UNIX_StorageHardwareID::setIDType(Uint16 &value)
{
	_iDType = value;
}

Boolean UNIX_StorageHardwareID::getOtherIDType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ID_TYPE, getOtherIDType());
	return true;
}

String UNIX_StorageHardwareID::getOtherIDType() const
{
	return _otherIDType;
}

void UNIX_StorageHardwareID::setOtherIDType(String &value)
{
	_otherIDType = value;
}


void UNIX_StorageHardwareID::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("StorageHardwareID");
	_generation = Uint64(0);
	_currentlyAuthenticated = Boolean(false);
	_storageID = String ("");
	_iDType = Uint16(0);
	_otherIDType = String ("");

}

Boolean UNIX_StorageHardwareID::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "CurrentlyAuthenticated"))
			{
				Boolean currentlyAuthenticatedValue;
				property.getValue().get(currentlyAuthenticatedValue);
				setCurrentlyAuthenticated(currentlyAuthenticatedValue);
			}
			else if (String::equal(property.getName().getString(), "StorageID"))
			{
				String storageIDValue;
				property.getValue().get(storageIDValue);
				setStorageID(storageIDValue);
			}
			else if (String::equal(property.getName().getString(), "IDType"))
			{
				Uint16 iDTypeValue;
				property.getValue().get(iDTypeValue);
				setIDType(iDTypeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherIDType"))
			{
				String otherIDTypeValue;
				property.getValue().get(otherIDTypeValue);
				setOtherIDType(otherIDTypeValue);
			}
	}
	return true;
}


Boolean UNIX_StorageHardwareID::initialize()
{
	return false;
}

Boolean UNIX_StorageHardwareID::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("StorageHardwareID");
	_generation = Uint64(0);
	_currentlyAuthenticated = Boolean(false);
	_storageID = String ("");
	_iDType = Uint16(0);
	_otherIDType = String ("");
	
	return false;
}

Boolean UNIX_StorageHardwareID::finalize()
{
	return false;
}


Boolean UNIX_StorageHardwareID::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String instanceIDKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_INSTANCE_ID)) instanceIDKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getInstanceID(), instanceIDKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_StorageHardwareID::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StorageHardwareID::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StorageHardwareID::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StorageHardwareID::validateInstance()
{
	return true;
}

