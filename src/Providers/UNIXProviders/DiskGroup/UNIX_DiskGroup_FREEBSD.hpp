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


UNIX_DiskGroup::UNIX_DiskGroup(void)
{
}

UNIX_DiskGroup::~UNIX_DiskGroup(void)
{
}

Boolean UNIX_DiskGroup::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_DiskGroup::getInstanceID() const
{
	return _instanceID;
}

void UNIX_DiskGroup::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_DiskGroup::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_DiskGroup::getCaption() const
{
	return _caption;
}

void UNIX_DiskGroup::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_DiskGroup::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_DiskGroup::getDescription() const
{
	return _description;
}

void UNIX_DiskGroup::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_DiskGroup::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_DiskGroup::getElementName() const
{
	return _elementName;
}

void UNIX_DiskGroup::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_DiskGroup::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_DiskGroup::getGeneration() const
{
	return _generation;
}

void UNIX_DiskGroup::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_DiskGroup::getCollectionID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COLLECTION_ID, getCollectionID());
	return true;
}

String UNIX_DiskGroup::getCollectionID() const
{
	return _collectionID;
}

void UNIX_DiskGroup::setCollectionID(String &value)
{
	_collectionID = value;
}


void UNIX_DiskGroup::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("DiskGroup");
	_generation = Uint64(0);
	_collectionID = String ("");

}

Boolean UNIX_DiskGroup::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "CollectionID"))
			{
				String collectionIDValue;
				property.getValue().get(collectionIDValue);
				setCollectionID(collectionIDValue);
			}
	}
	return true;
}


Boolean UNIX_DiskGroup::initialize()
{
	return false;
}

Boolean UNIX_DiskGroup::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("DiskGroup");
	_generation = Uint64(0);
	_collectionID = String ("");
	
	return false;
}

Boolean UNIX_DiskGroup::finalize()
{
	return false;
}


Boolean UNIX_DiskGroup::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String collectionIDKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_COLLECTION_ID)) collectionIDKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getCollectionID(), collectionIDKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_DiskGroup::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DiskGroup::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DiskGroup::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DiskGroup::validateInstance()
{
	return true;
}

