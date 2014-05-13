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


UNIX_StatusCollection::UNIX_StatusCollection(void)
{
}

UNIX_StatusCollection::~UNIX_StatusCollection(void)
{
}

Boolean UNIX_StatusCollection::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_StatusCollection::getInstanceID() const
{
	return _instanceID;
}

void UNIX_StatusCollection::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_StatusCollection::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_StatusCollection::getCaption() const
{
	return _caption;
}

void UNIX_StatusCollection::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_StatusCollection::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_StatusCollection::getDescription() const
{
	return _description;
}

void UNIX_StatusCollection::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_StatusCollection::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_StatusCollection::getElementName() const
{
	return _elementName;
}

void UNIX_StatusCollection::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_StatusCollection::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_StatusCollection::getGeneration() const
{
	return _generation;
}

void UNIX_StatusCollection::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_StatusCollection::getCollectionPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COLLECTION_PRIMARY_STATUS, getCollectionPrimaryStatus());
	return true;
}

Uint16 UNIX_StatusCollection::getCollectionPrimaryStatus() const
{
	return _collectionPrimaryStatus;
}

void UNIX_StatusCollection::setCollectionPrimaryStatus(Uint16 &value)
{
	_collectionPrimaryStatus = value;
}

Boolean UNIX_StatusCollection::getCollectionName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COLLECTION_NAME, getCollectionName());
	return true;
}

String UNIX_StatusCollection::getCollectionName() const
{
	return _collectionName;
}

void UNIX_StatusCollection::setCollectionName(String &value)
{
	_collectionName = value;
}


void UNIX_StatusCollection::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("StatusCollection");
	_generation = Uint64(0);
	_collectionPrimaryStatus = Uint16(0);
	_collectionName = String ("");

}

Boolean UNIX_StatusCollection::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "CollectionPrimaryStatus"))
			{
				Uint16 collectionPrimaryStatusValue;
				property.getValue().get(collectionPrimaryStatusValue);
				setCollectionPrimaryStatus(collectionPrimaryStatusValue);
			}
			else if (String::equal(property.getName().getString(), "CollectionName"))
			{
				String collectionNameValue;
				property.getValue().get(collectionNameValue);
				setCollectionName(collectionNameValue);
			}
	}
	return true;
}


Boolean UNIX_StatusCollection::initialize()
{
	return false;
}

Boolean UNIX_StatusCollection::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("StatusCollection");
	_generation = Uint64(0);
	_collectionPrimaryStatus = Uint16(0);
	_collectionName = String ("");
	
	return false;
}

Boolean UNIX_StatusCollection::finalize()
{
	return false;
}


Boolean UNIX_StatusCollection::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_StatusCollection::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StatusCollection::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StatusCollection::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StatusCollection::validateInstance()
{
	return true;
}

