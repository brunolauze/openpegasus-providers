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


UNIX_PCIPortGroup::UNIX_PCIPortGroup(void)
{
}

UNIX_PCIPortGroup::~UNIX_PCIPortGroup(void)
{
}

Boolean UNIX_PCIPortGroup::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_PCIPortGroup::getInstanceID() const
{
	return _instanceID;
}

void UNIX_PCIPortGroup::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_PCIPortGroup::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_PCIPortGroup::getCaption() const
{
	return _caption;
}

void UNIX_PCIPortGroup::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_PCIPortGroup::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_PCIPortGroup::getDescription() const
{
	return _description;
}

void UNIX_PCIPortGroup::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_PCIPortGroup::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_PCIPortGroup::getElementName() const
{
	return _elementName;
}

void UNIX_PCIPortGroup::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_PCIPortGroup::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_PCIPortGroup::getGeneration() const
{
	return _generation;
}

void UNIX_PCIPortGroup::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_PCIPortGroup::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_PCIPortGroup::getName() const
{
	return _name;
}

void UNIX_PCIPortGroup::setName(String &value)
{
	_name = value;
}

Boolean UNIX_PCIPortGroup::getNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_FORMAT, getNameFormat());
	return true;
}

String UNIX_PCIPortGroup::getNameFormat() const
{
	return _nameFormat;
}

void UNIX_PCIPortGroup::setNameFormat(String &value)
{
	_nameFormat = value;
}

Boolean UNIX_PCIPortGroup::getOtherNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_NAME_FORMAT, getOtherNameFormat());
	return true;
}

String UNIX_PCIPortGroup::getOtherNameFormat() const
{
	return _otherNameFormat;
}

void UNIX_PCIPortGroup::setOtherNameFormat(String &value)
{
	_otherNameFormat = value;
}

Boolean UNIX_PCIPortGroup::getBusNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BUS_NUMBER, getBusNumber());
	return true;
}

Uint8 UNIX_PCIPortGroup::getBusNumber() const
{
	return _busNumber;
}

void UNIX_PCIPortGroup::setBusNumber(Uint8 &value)
{
	_busNumber = value;
}


void UNIX_PCIPortGroup::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PCIPortGroup");
	_generation = Uint64(0);
	_name = String ("");
	_nameFormat = String ("");
	_otherNameFormat = String ("");
	_busNumber = Uint8(0);

}

Boolean UNIX_PCIPortGroup::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "NameFormat"))
			{
				String nameFormatValue;
				property.getValue().get(nameFormatValue);
				setNameFormat(nameFormatValue);
			}
			else if (String::equal(property.getName().getString(), "OtherNameFormat"))
			{
				String otherNameFormatValue;
				property.getValue().get(otherNameFormatValue);
				setOtherNameFormat(otherNameFormatValue);
			}
			else if (String::equal(property.getName().getString(), "BusNumber"))
			{
				Uint8 busNumberValue;
				property.getValue().get(busNumberValue);
				setBusNumber(busNumberValue);
			}
	}
	return true;
}


Boolean UNIX_PCIPortGroup::initialize()
{
	return false;
}

Boolean UNIX_PCIPortGroup::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PCIPortGroup");
	_generation = Uint64(0);
	_name = String ("");
	_nameFormat = String ("");
	_otherNameFormat = String ("");
	_busNumber = Uint8(0);
	
	return false;
}

Boolean UNIX_PCIPortGroup::finalize()
{
	return false;
}

Boolean UNIX_PCIPortGroup::loadByName(const String name)
{
	return false;
}

Boolean UNIX_PCIPortGroup::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_PCIPortGroup::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PCIPortGroup::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PCIPortGroup::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PCIPortGroup::validateInstance()
{
	return true;
}

