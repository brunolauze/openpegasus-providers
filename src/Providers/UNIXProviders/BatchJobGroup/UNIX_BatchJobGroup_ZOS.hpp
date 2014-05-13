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


UNIX_BatchJobGroup::UNIX_BatchJobGroup(void)
{
}

UNIX_BatchJobGroup::~UNIX_BatchJobGroup(void)
{
}

Boolean UNIX_BatchJobGroup::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_BatchJobGroup::getInstanceID() const
{
	return _instanceID;
}

void UNIX_BatchJobGroup::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_BatchJobGroup::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_BatchJobGroup::getCaption() const
{
	return _caption;
}

void UNIX_BatchJobGroup::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_BatchJobGroup::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_BatchJobGroup::getDescription() const
{
	return _description;
}

void UNIX_BatchJobGroup::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_BatchJobGroup::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_BatchJobGroup::getElementName() const
{
	return _elementName;
}

void UNIX_BatchJobGroup::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_BatchJobGroup::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_BatchJobGroup::getGeneration() const
{
	return _generation;
}

void UNIX_BatchJobGroup::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_BatchJobGroup::getGroupStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GROUP_STATUS, getGroupStatus());
	return true;
}

Uint16 UNIX_BatchJobGroup::getGroupStatus() const
{
	return _groupStatus;
}

void UNIX_BatchJobGroup::setGroupStatus(Uint16 &value)
{
	_groupStatus = value;
}

Boolean UNIX_BatchJobGroup::getGroupStatusDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GROUP_STATUS_DESCRIPTION, getGroupStatusDescription());
	return true;
}

String UNIX_BatchJobGroup::getGroupStatusDescription() const
{
	return _groupStatusDescription;
}

void UNIX_BatchJobGroup::setGroupStatusDescription(String &value)
{
	_groupStatusDescription = value;
}


void UNIX_BatchJobGroup::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("BatchJobGroup");
	_generation = Uint64(0);
	_groupStatus = Uint16(0);
	_groupStatusDescription = String ("");

}

Boolean UNIX_BatchJobGroup::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "GroupStatus"))
			{
				Uint16 groupStatusValue;
				property.getValue().get(groupStatusValue);
				setGroupStatus(groupStatusValue);
			}
			else if (String::equal(property.getName().getString(), "GroupStatusDescription"))
			{
				String groupStatusDescriptionValue;
				property.getValue().get(groupStatusDescriptionValue);
				setGroupStatusDescription(groupStatusDescriptionValue);
			}
	}
	return true;
}


Boolean UNIX_BatchJobGroup::initialize()
{
	return false;
}

Boolean UNIX_BatchJobGroup::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("BatchJobGroup");
	_generation = Uint64(0);
	_groupStatus = Uint16(0);
	_groupStatusDescription = String ("");
	
	return false;
}

Boolean UNIX_BatchJobGroup::finalize()
{
	return false;
}


Boolean UNIX_BatchJobGroup::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_BatchJobGroup::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BatchJobGroup::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BatchJobGroup::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BatchJobGroup::validateInstance()
{
	return true;
}

