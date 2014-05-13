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


UNIX_MPLSBuffers::UNIX_MPLSBuffers(void)
{
}

UNIX_MPLSBuffers::~UNIX_MPLSBuffers(void)
{
}

Boolean UNIX_MPLSBuffers::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_MPLSBuffers::getInstanceID() const
{
	return _instanceID;
}

void UNIX_MPLSBuffers::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_MPLSBuffers::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_MPLSBuffers::getCaption() const
{
	return _caption;
}

void UNIX_MPLSBuffers::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_MPLSBuffers::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_MPLSBuffers::getDescription() const
{
	return _description;
}

void UNIX_MPLSBuffers::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_MPLSBuffers::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_MPLSBuffers::getElementName() const
{
	return _elementName;
}

void UNIX_MPLSBuffers::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_MPLSBuffers::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_MPLSBuffers::getGeneration() const
{
	return _generation;
}

void UNIX_MPLSBuffers::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_MPLSBuffers::getCollectionID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COLLECTION_ID, getCollectionID());
	return true;
}

String UNIX_MPLSBuffers::getCollectionID() const
{
	return _collectionID;
}

void UNIX_MPLSBuffers::setCollectionID(String &value)
{
	_collectionID = value;
}

Boolean UNIX_MPLSBuffers::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_MPLSBuffers::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_MPLSBuffers::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_MPLSBuffers::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_MPLSBuffers::getName() const
{
	return _name;
}

void UNIX_MPLSBuffers::setName(String &value)
{
	_name = value;
}

Boolean UNIX_MPLSBuffers::getBufferSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BUFFER_SIZE, getBufferSize());
	return true;
}

Uint16 UNIX_MPLSBuffers::getBufferSize() const
{
	return _bufferSize;
}

void UNIX_MPLSBuffers::setBufferSize(Uint16 &value)
{
	_bufferSize = value;
}

Boolean UNIX_MPLSBuffers::getSizeOfBuffers(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SIZE_OF_BUFFERS, getSizeOfBuffers());
	return true;
}

Uint32 UNIX_MPLSBuffers::getSizeOfBuffers() const
{
	return _sizeOfBuffers;
}

void UNIX_MPLSBuffers::setSizeOfBuffers(Uint32 &value)
{
	_sizeOfBuffers = value;
}

Boolean UNIX_MPLSBuffers::getTotalBuffers(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_BUFFERS, getTotalBuffers());
	return true;
}

Uint32 UNIX_MPLSBuffers::getTotalBuffers() const
{
	return _totalBuffers;
}

void UNIX_MPLSBuffers::setTotalBuffers(Uint32 &value)
{
	_totalBuffers = value;
}

Boolean UNIX_MPLSBuffers::getAvailableBuffers(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_BUFFERS, getAvailableBuffers());
	return true;
}

Uint32 UNIX_MPLSBuffers::getAvailableBuffers() const
{
	return _availableBuffers;
}

void UNIX_MPLSBuffers::setAvailableBuffers(Uint32 &value)
{
	_availableBuffers = value;
}

Boolean UNIX_MPLSBuffers::getSharedBuffers(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SHARED_BUFFERS, getSharedBuffers());
	return true;
}

Uint32 UNIX_MPLSBuffers::getSharedBuffers() const
{
	return _sharedBuffers;
}

void UNIX_MPLSBuffers::setSharedBuffers(Uint32 &value)
{
	_sharedBuffers = value;
}

Boolean UNIX_MPLSBuffers::getMaxAllocMultiplier(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_ALLOC_MULTIPLIER, getMaxAllocMultiplier());
	return true;
}

Uint16 UNIX_MPLSBuffers::getMaxAllocMultiplier() const
{
	return _maxAllocMultiplier;
}

void UNIX_MPLSBuffers::setMaxAllocMultiplier(Uint16 &value)
{
	_maxAllocMultiplier = value;
}

Boolean UNIX_MPLSBuffers::getResourceClasses(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESOURCE_CLASSES, getResourceClasses());
	return true;
}

Uint32 UNIX_MPLSBuffers::getResourceClasses() const
{
	return _resourceClasses;
}

void UNIX_MPLSBuffers::setResourceClasses(Uint32 &value)
{
	_resourceClasses = value;
}


void UNIX_MPLSBuffers::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("MPLSBuffers");
	_generation = Uint64(0);
	_collectionID = String ("");
	_creationClassName = String("UNIX_MPLSBuffers");
	_name = String ("");
	_bufferSize = Uint16(0);
	_sizeOfBuffers = Uint32(0);
	_totalBuffers = Uint32(0);
	_availableBuffers = Uint32(0);
	_sharedBuffers = Uint32(0);
	_maxAllocMultiplier = Uint16(0);
	_resourceClasses = Uint32(0);

}

Boolean UNIX_MPLSBuffers::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "CreationClassName"))
			{
				String creationClassNameValue;
				property.getValue().get(creationClassNameValue);
				setCreationClassName(creationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "Name"))
			{
				String nameValue;
				property.getValue().get(nameValue);
				setName(nameValue);
			}
			else if (String::equal(property.getName().getString(), "BufferSize"))
			{
				Uint16 bufferSizeValue;
				property.getValue().get(bufferSizeValue);
				setBufferSize(bufferSizeValue);
			}
			else if (String::equal(property.getName().getString(), "SizeOfBuffers"))
			{
				Uint32 sizeOfBuffersValue;
				property.getValue().get(sizeOfBuffersValue);
				setSizeOfBuffers(sizeOfBuffersValue);
			}
			else if (String::equal(property.getName().getString(), "TotalBuffers"))
			{
				Uint32 totalBuffersValue;
				property.getValue().get(totalBuffersValue);
				setTotalBuffers(totalBuffersValue);
			}
			else if (String::equal(property.getName().getString(), "AvailableBuffers"))
			{
				Uint32 availableBuffersValue;
				property.getValue().get(availableBuffersValue);
				setAvailableBuffers(availableBuffersValue);
			}
			else if (String::equal(property.getName().getString(), "SharedBuffers"))
			{
				Uint32 sharedBuffersValue;
				property.getValue().get(sharedBuffersValue);
				setSharedBuffers(sharedBuffersValue);
			}
			else if (String::equal(property.getName().getString(), "MaxAllocMultiplier"))
			{
				Uint16 maxAllocMultiplierValue;
				property.getValue().get(maxAllocMultiplierValue);
				setMaxAllocMultiplier(maxAllocMultiplierValue);
			}
			else if (String::equal(property.getName().getString(), "ResourceClasses"))
			{
				Uint32 resourceClassesValue;
				property.getValue().get(resourceClassesValue);
				setResourceClasses(resourceClassesValue);
			}
	}
	return true;
}


Boolean UNIX_MPLSBuffers::initialize()
{
	return false;
}

Boolean UNIX_MPLSBuffers::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("MPLSBuffers");
	_generation = Uint64(0);
	_collectionID = String ("");
	_creationClassName = String("UNIX_MPLSBuffers");
	_name = String ("");
	_bufferSize = Uint16(0);
	_sizeOfBuffers = Uint32(0);
	_totalBuffers = Uint32(0);
	_availableBuffers = Uint32(0);
	_sharedBuffers = Uint32(0);
	_maxAllocMultiplier = Uint16(0);
	_resourceClasses = Uint32(0);
	
	return false;
}

Boolean UNIX_MPLSBuffers::finalize()
{
	return false;
}

Boolean UNIX_MPLSBuffers::loadByName(const String name)
{
	return false;
}

Boolean UNIX_MPLSBuffers::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String collectionIDKey;
	String creationClassNameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_COLLECTION_ID)) collectionIDKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getCollectionID(), collectionIDKey)) && 
			(String::equalNoCase(getCreationClassName(), creationClassNameKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_MPLSBuffers::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_MPLSBuffers::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_MPLSBuffers::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_MPLSBuffers::validateInstance()
{
	return true;
}

