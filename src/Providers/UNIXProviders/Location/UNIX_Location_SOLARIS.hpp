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


UNIX_Location::UNIX_Location(void)
{
}

UNIX_Location::~UNIX_Location(void)
{
}

Boolean UNIX_Location::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_Location::getInstanceID() const
{
	return _instanceID;
}

void UNIX_Location::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_Location::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_Location::getCaption() const
{
	return _caption;
}

void UNIX_Location::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_Location::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_Location::getDescription() const
{
	return _description;
}

void UNIX_Location::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_Location::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_Location::getElementName() const
{
	return _elementName;
}

void UNIX_Location::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_Location::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_Location::getGeneration() const
{
	return _generation;
}

void UNIX_Location::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_Location::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_Location::getName() const
{
	return _name;
}

void UNIX_Location::setName(String &value)
{
	_name = value;
}

Boolean UNIX_Location::getPhysicalPosition(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PHYSICAL_POSITION, getPhysicalPosition());
	return true;
}

String UNIX_Location::getPhysicalPosition() const
{
	return _physicalPosition;
}

void UNIX_Location::setPhysicalPosition(String &value)
{
	_physicalPosition = value;
}

Boolean UNIX_Location::getAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESS, getAddress());
	return true;
}

String UNIX_Location::getAddress() const
{
	return _address;
}

void UNIX_Location::setAddress(String &value)
{
	_address = value;
}


void UNIX_Location::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("Location");
	_generation = Uint64(0);
	_name = String ("");
	_physicalPosition = String ("");
	_address = String ("");

}

Boolean UNIX_Location::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "Name"))
			{
				String nameValue;
				property.getValue().get(nameValue);
				setName(nameValue);
			}
			else if (String::equal(property.getName().getString(), "PhysicalPosition"))
			{
				String physicalPositionValue;
				property.getValue().get(physicalPositionValue);
				setPhysicalPosition(physicalPositionValue);
			}
			else if (String::equal(property.getName().getString(), "Address"))
			{
				String addressValue;
				property.getValue().get(addressValue);
				setAddress(addressValue);
			}
	}
	return true;
}


Boolean UNIX_Location::initialize()
{
	return false;
}

Boolean UNIX_Location::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("Location");
	_generation = Uint64(0);
	_name = String ("");
	_physicalPosition = String ("");
	_address = String ("");
	
	return false;
}

Boolean UNIX_Location::finalize()
{
	return false;
}

Boolean UNIX_Location::loadByName(const String name)
{
	return false;
}

Boolean UNIX_Location::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String nameKey;
	String physicalPositionKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_PHYSICAL_POSITION)) physicalPositionKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getName(), nameKey)) && 
			(String::equalNoCase(getPhysicalPosition(), physicalPositionKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_Location::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Location::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Location::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Location::validateInstance()
{
	return true;
}

