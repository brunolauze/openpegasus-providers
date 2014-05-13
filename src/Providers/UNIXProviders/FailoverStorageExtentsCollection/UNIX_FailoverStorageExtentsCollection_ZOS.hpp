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


UNIX_FailoverStorageExtentsCollection::UNIX_FailoverStorageExtentsCollection(void)
{
}

UNIX_FailoverStorageExtentsCollection::~UNIX_FailoverStorageExtentsCollection(void)
{
}

Boolean UNIX_FailoverStorageExtentsCollection::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_FailoverStorageExtentsCollection::getInstanceID() const
{
	return _instanceID;
}

void UNIX_FailoverStorageExtentsCollection::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_FailoverStorageExtentsCollection::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_FailoverStorageExtentsCollection::getCaption() const
{
	return _caption;
}

void UNIX_FailoverStorageExtentsCollection::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_FailoverStorageExtentsCollection::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_FailoverStorageExtentsCollection::getDescription() const
{
	return _description;
}

void UNIX_FailoverStorageExtentsCollection::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_FailoverStorageExtentsCollection::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_FailoverStorageExtentsCollection::getElementName() const
{
	return _elementName;
}

void UNIX_FailoverStorageExtentsCollection::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_FailoverStorageExtentsCollection::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_FailoverStorageExtentsCollection::getGeneration() const
{
	return _generation;
}

void UNIX_FailoverStorageExtentsCollection::setGeneration(Uint64 &value)
{
	_generation = value;
}


void UNIX_FailoverStorageExtentsCollection::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("FailoverStorageExtentsCollection");
	_generation = Uint64(0);

}

Boolean UNIX_FailoverStorageExtentsCollection::loadInstance(const CIMInstance &instance)
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
	}
	return true;
}


Boolean UNIX_FailoverStorageExtentsCollection::initialize()
{
	return false;
}

Boolean UNIX_FailoverStorageExtentsCollection::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("FailoverStorageExtentsCollection");
	_generation = Uint64(0);
	
	return false;
}

Boolean UNIX_FailoverStorageExtentsCollection::finalize()
{
	return false;
}


Boolean UNIX_FailoverStorageExtentsCollection::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_FailoverStorageExtentsCollection::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FailoverStorageExtentsCollection::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FailoverStorageExtentsCollection::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FailoverStorageExtentsCollection::validateInstance()
{
	return true;
}

