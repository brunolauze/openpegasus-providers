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


UNIX_ReplicationGroup::UNIX_ReplicationGroup(void)
{
}

UNIX_ReplicationGroup::~UNIX_ReplicationGroup(void)
{
}

Boolean UNIX_ReplicationGroup::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_ReplicationGroup::getInstanceID() const
{
	return _instanceID;
}

void UNIX_ReplicationGroup::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_ReplicationGroup::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_ReplicationGroup::getCaption() const
{
	return _caption;
}

void UNIX_ReplicationGroup::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_ReplicationGroup::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_ReplicationGroup::getDescription() const
{
	return _description;
}

void UNIX_ReplicationGroup::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_ReplicationGroup::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_ReplicationGroup::getElementName() const
{
	return _elementName;
}

void UNIX_ReplicationGroup::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_ReplicationGroup::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_ReplicationGroup::getGeneration() const
{
	return _generation;
}

void UNIX_ReplicationGroup::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_ReplicationGroup::getPersistent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERSISTENT, getPersistent());
	return true;
}

Boolean UNIX_ReplicationGroup::getPersistent() const
{
	return _persistent;
}

void UNIX_ReplicationGroup::setPersistent(Boolean &value)
{
	_persistent = value;
}

Boolean UNIX_ReplicationGroup::getDeleteOnEmptyElement(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELETE_ON_EMPTY_ELEMENT, getDeleteOnEmptyElement());
	return true;
}

Boolean UNIX_ReplicationGroup::getDeleteOnEmptyElement() const
{
	return _deleteOnEmptyElement;
}

void UNIX_ReplicationGroup::setDeleteOnEmptyElement(Boolean &value)
{
	_deleteOnEmptyElement = value;
}

Boolean UNIX_ReplicationGroup::getDeleteOnUnassociated(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELETE_ON_UNASSOCIATED, getDeleteOnUnassociated());
	return true;
}

Boolean UNIX_ReplicationGroup::getDeleteOnUnassociated() const
{
	return _deleteOnUnassociated;
}

void UNIX_ReplicationGroup::setDeleteOnUnassociated(Boolean &value)
{
	_deleteOnUnassociated = value;
}

Boolean UNIX_ReplicationGroup::getConsistentPointInTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONSISTENT_POINT_IN_TIME, getConsistentPointInTime());
	return true;
}

Boolean UNIX_ReplicationGroup::getConsistentPointInTime() const
{
	return _consistentPointInTime;
}

void UNIX_ReplicationGroup::setConsistentPointInTime(Boolean &value)
{
	_consistentPointInTime = value;
}


void UNIX_ReplicationGroup::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("ReplicationGroup");
	_generation = Uint64(0);
	_persistent = Boolean(false);
	_deleteOnEmptyElement = Boolean(false);
	_deleteOnUnassociated = Boolean(false);
	_consistentPointInTime = Boolean(false);

}

Boolean UNIX_ReplicationGroup::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "Persistent"))
			{
				Boolean persistentValue;
				property.getValue().get(persistentValue);
				setPersistent(persistentValue);
			}
			else if (String::equal(property.getName().getString(), "DeleteOnEmptyElement"))
			{
				Boolean deleteOnEmptyElementValue;
				property.getValue().get(deleteOnEmptyElementValue);
				setDeleteOnEmptyElement(deleteOnEmptyElementValue);
			}
			else if (String::equal(property.getName().getString(), "DeleteOnUnassociated"))
			{
				Boolean deleteOnUnassociatedValue;
				property.getValue().get(deleteOnUnassociatedValue);
				setDeleteOnUnassociated(deleteOnUnassociatedValue);
			}
			else if (String::equal(property.getName().getString(), "ConsistentPointInTime"))
			{
				Boolean consistentPointInTimeValue;
				property.getValue().get(consistentPointInTimeValue);
				setConsistentPointInTime(consistentPointInTimeValue);
			}
	}
	return true;
}


Boolean UNIX_ReplicationGroup::initialize()
{
	return false;
}

Boolean UNIX_ReplicationGroup::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("ReplicationGroup");
	_generation = Uint64(0);
	_persistent = Boolean(false);
	_deleteOnEmptyElement = Boolean(false);
	_deleteOnUnassociated = Boolean(false);
	_consistentPointInTime = Boolean(false);
	
	return false;
}

Boolean UNIX_ReplicationGroup::finalize()
{
	return false;
}


Boolean UNIX_ReplicationGroup::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_ReplicationGroup::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ReplicationGroup::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ReplicationGroup::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ReplicationGroup::validateInstance()
{
	return true;
}

