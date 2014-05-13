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


UNIX_BufferPool::UNIX_BufferPool(void)
{
}

UNIX_BufferPool::~UNIX_BufferPool(void)
{
}

Boolean UNIX_BufferPool::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_BufferPool::getInstanceID() const
{
	return _instanceID;
}

void UNIX_BufferPool::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_BufferPool::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_BufferPool::getCaption() const
{
	return _caption;
}

void UNIX_BufferPool::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_BufferPool::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_BufferPool::getDescription() const
{
	return _description;
}

void UNIX_BufferPool::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_BufferPool::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_BufferPool::getElementName() const
{
	return _elementName;
}

void UNIX_BufferPool::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_BufferPool::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_BufferPool::getGeneration() const
{
	return _generation;
}

void UNIX_BufferPool::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_BufferPool::getCollectionID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COLLECTION_ID, getCollectionID());
	return true;
}

String UNIX_BufferPool::getCollectionID() const
{
	return _collectionID;
}

void UNIX_BufferPool::setCollectionID(String &value)
{
	_collectionID = value;
}

Boolean UNIX_BufferPool::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_BufferPool::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_BufferPool::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_BufferPool::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_BufferPool::getName() const
{
	return _name;
}

void UNIX_BufferPool::setName(String &value)
{
	_name = value;
}

Boolean UNIX_BufferPool::getBufferSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BUFFER_SIZE, getBufferSize());
	return true;
}

Uint16 UNIX_BufferPool::getBufferSize() const
{
	return _bufferSize;
}

void UNIX_BufferPool::setBufferSize(Uint16 &value)
{
	_bufferSize = value;
}

Boolean UNIX_BufferPool::getSizeOfBuffers(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SIZE_OF_BUFFERS, getSizeOfBuffers());
	return true;
}

Uint32 UNIX_BufferPool::getSizeOfBuffers() const
{
	return _sizeOfBuffers;
}

void UNIX_BufferPool::setSizeOfBuffers(Uint32 &value)
{
	_sizeOfBuffers = value;
}

Boolean UNIX_BufferPool::getTotalBuffers(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_BUFFERS, getTotalBuffers());
	return true;
}

Uint32 UNIX_BufferPool::getTotalBuffers() const
{
	return _totalBuffers;
}

void UNIX_BufferPool::setTotalBuffers(Uint32 &value)
{
	_totalBuffers = value;
}

Boolean UNIX_BufferPool::getAvailableBuffers(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_BUFFERS, getAvailableBuffers());
	return true;
}

Uint32 UNIX_BufferPool::getAvailableBuffers() const
{
	return _availableBuffers;
}

void UNIX_BufferPool::setAvailableBuffers(Uint32 &value)
{
	_availableBuffers = value;
}

Boolean UNIX_BufferPool::getSharedBuffers(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SHARED_BUFFERS, getSharedBuffers());
	return true;
}

Uint32 UNIX_BufferPool::getSharedBuffers() const
{
	return _sharedBuffers;
}

void UNIX_BufferPool::setSharedBuffers(Uint32 &value)
{
	_sharedBuffers = value;
}


void UNIX_BufferPool::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("BufferPool");
	_generation = Uint64(0);
	_collectionID = String ("");
	_creationClassName = String("UNIX_BufferPool");
	_name = String ("");
	_bufferSize = Uint16(0);
	_sizeOfBuffers = Uint32(0);
	_totalBuffers = Uint32(0);
	_availableBuffers = Uint32(0);
	_sharedBuffers = Uint32(0);

}

Boolean UNIX_BufferPool::loadInstance(const CIMInstance &instance)
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
	}
	return true;
}


Boolean UNIX_BufferPool::initialize()
{
	return false;
}

Boolean UNIX_BufferPool::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("BufferPool");
	_generation = Uint64(0);
	_collectionID = String ("");
	_creationClassName = String("UNIX_BufferPool");
	_name = String ("");
	_bufferSize = Uint16(0);
	_sizeOfBuffers = Uint32(0);
	_totalBuffers = Uint32(0);
	_availableBuffers = Uint32(0);
	_sharedBuffers = Uint32(0);
	
	return false;
}

Boolean UNIX_BufferPool::finalize()
{
	return false;
}

Boolean UNIX_BufferPool::loadByName(const String name)
{
	return false;
}

Boolean UNIX_BufferPool::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_BufferPool::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BufferPool::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BufferPool::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BufferPool::validateInstance()
{
	return true;
}

