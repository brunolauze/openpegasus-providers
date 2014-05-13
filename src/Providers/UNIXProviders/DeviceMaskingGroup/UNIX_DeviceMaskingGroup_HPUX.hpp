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


UNIX_DeviceMaskingGroup::UNIX_DeviceMaskingGroup(void)
{
}

UNIX_DeviceMaskingGroup::~UNIX_DeviceMaskingGroup(void)
{
}

Boolean UNIX_DeviceMaskingGroup::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_DeviceMaskingGroup::getInstanceID() const
{
	return _instanceID;
}

void UNIX_DeviceMaskingGroup::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_DeviceMaskingGroup::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_DeviceMaskingGroup::getCaption() const
{
	return _caption;
}

void UNIX_DeviceMaskingGroup::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_DeviceMaskingGroup::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_DeviceMaskingGroup::getDescription() const
{
	return _description;
}

void UNIX_DeviceMaskingGroup::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_DeviceMaskingGroup::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_DeviceMaskingGroup::getElementName() const
{
	return _elementName;
}

void UNIX_DeviceMaskingGroup::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_DeviceMaskingGroup::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_DeviceMaskingGroup::getGeneration() const
{
	return _generation;
}

void UNIX_DeviceMaskingGroup::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_DeviceMaskingGroup::getDeleteOnEmpty(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELETE_ON_EMPTY, getDeleteOnEmpty());
	return true;
}

Boolean UNIX_DeviceMaskingGroup::getDeleteOnEmpty() const
{
	return _deleteOnEmpty;
}

void UNIX_DeviceMaskingGroup::setDeleteOnEmpty(Boolean &value)
{
	_deleteOnEmpty = value;
}

Boolean UNIX_DeviceMaskingGroup::getDeleteWhenBecomesUnassociated(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELETE_WHEN_BECOMES_UNASSOCIATED, getDeleteWhenBecomesUnassociated());
	return true;
}

Boolean UNIX_DeviceMaskingGroup::getDeleteWhenBecomesUnassociated() const
{
	return _deleteWhenBecomesUnassociated;
}

void UNIX_DeviceMaskingGroup::setDeleteWhenBecomesUnassociated(Boolean &value)
{
	_deleteWhenBecomesUnassociated = value;
}


void UNIX_DeviceMaskingGroup::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("DeviceMaskingGroup");
	_generation = Uint64(0);
	_deleteOnEmpty = Boolean(false);
	_deleteWhenBecomesUnassociated = Boolean(false);

}

Boolean UNIX_DeviceMaskingGroup::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "DeleteOnEmpty"))
			{
				Boolean deleteOnEmptyValue;
				property.getValue().get(deleteOnEmptyValue);
				setDeleteOnEmpty(deleteOnEmptyValue);
			}
			else if (String::equal(property.getName().getString(), "DeleteWhenBecomesUnassociated"))
			{
				Boolean deleteWhenBecomesUnassociatedValue;
				property.getValue().get(deleteWhenBecomesUnassociatedValue);
				setDeleteWhenBecomesUnassociated(deleteWhenBecomesUnassociatedValue);
			}
	}
	return true;
}


Boolean UNIX_DeviceMaskingGroup::initialize()
{
	return false;
}

Boolean UNIX_DeviceMaskingGroup::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("DeviceMaskingGroup");
	_generation = Uint64(0);
	_deleteOnEmpty = Boolean(false);
	_deleteWhenBecomesUnassociated = Boolean(false);
	
	return false;
}

Boolean UNIX_DeviceMaskingGroup::finalize()
{
	return false;
}


Boolean UNIX_DeviceMaskingGroup::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_DeviceMaskingGroup::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DeviceMaskingGroup::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DeviceMaskingGroup::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DeviceMaskingGroup::validateInstance()
{
	return true;
}

