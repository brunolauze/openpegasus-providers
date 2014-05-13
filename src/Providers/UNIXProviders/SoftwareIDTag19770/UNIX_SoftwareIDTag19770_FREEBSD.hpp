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


UNIX_SoftwareIDTag19770::UNIX_SoftwareIDTag19770(void)
{
}

UNIX_SoftwareIDTag19770::~UNIX_SoftwareIDTag19770(void)
{
}

Boolean UNIX_SoftwareIDTag19770::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_SoftwareIDTag19770::getInstanceID() const
{
	return _instanceID;
}

void UNIX_SoftwareIDTag19770::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_SoftwareIDTag19770::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_SoftwareIDTag19770::getCaption() const
{
	return _caption;
}

void UNIX_SoftwareIDTag19770::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_SoftwareIDTag19770::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_SoftwareIDTag19770::getDescription() const
{
	return _description;
}

void UNIX_SoftwareIDTag19770::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_SoftwareIDTag19770::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_SoftwareIDTag19770::getElementName() const
{
	return _elementName;
}

void UNIX_SoftwareIDTag19770::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_SoftwareIDTag19770::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_SoftwareIDTag19770::getGeneration() const
{
	return _generation;
}

void UNIX_SoftwareIDTag19770::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_SoftwareIDTag19770::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_SoftwareIDTag19770::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_SoftwareIDTag19770::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_SoftwareIDTag19770::getSWIDTagID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_W_ID_TAG_ID, getSWIDTagID());
	return true;
}

String UNIX_SoftwareIDTag19770::getSWIDTagID() const
{
	return _sWIDTagID;
}

void UNIX_SoftwareIDTag19770::setSWIDTagID(String &value)
{
	_sWIDTagID = value;
}

Boolean UNIX_SoftwareIDTag19770::getSoftwareIDTag19770(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SOFTWARE_ID_TAG_1_9_7_7_0, getSoftwareIDTag19770());
	return true;
}

String UNIX_SoftwareIDTag19770::getSoftwareIDTag19770() const
{
	return _softwareIDTag19770;
}

void UNIX_SoftwareIDTag19770::setSoftwareIDTag19770(String &value)
{
	_softwareIDTag19770 = value;
}


void UNIX_SoftwareIDTag19770::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("SoftwareIDTag19770");
	_generation = Uint64(0);
	_creationClassName = String("UNIX_SoftwareIDTag19770");
	_sWIDTagID = String ("");
	_softwareIDTag19770 = String ("");

}

Boolean UNIX_SoftwareIDTag19770::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "CreationClassName"))
			{
				String creationClassNameValue;
				property.getValue().get(creationClassNameValue);
				setCreationClassName(creationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "SWIDTagID"))
			{
				String sWIDTagIDValue;
				property.getValue().get(sWIDTagIDValue);
				setSWIDTagID(sWIDTagIDValue);
			}
			else if (String::equal(property.getName().getString(), "SoftwareIDTag19770"))
			{
				String softwareIDTag19770Value;
				property.getValue().get(softwareIDTag19770Value);
				setSoftwareIDTag19770(softwareIDTag19770Value);
			}
	}
	return true;
}


Boolean UNIX_SoftwareIDTag19770::initialize()
{
	return false;
}

Boolean UNIX_SoftwareIDTag19770::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("SoftwareIDTag19770");
	_generation = Uint64(0);
	_creationClassName = String("UNIX_SoftwareIDTag19770");
	_sWIDTagID = String ("");
	_softwareIDTag19770 = String ("");
	
	return false;
}

Boolean UNIX_SoftwareIDTag19770::finalize()
{
	return false;
}


Boolean UNIX_SoftwareIDTag19770::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String creationClassNameKey;
	String sWIDTagIDKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_S_W_ID_TAG_ID)) sWIDTagIDKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getCreationClassName(), creationClassNameKey)) && 
			(String::equalNoCase(getSWIDTagID(), sWIDTagIDKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_SoftwareIDTag19770::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SoftwareIDTag19770::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SoftwareIDTag19770::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SoftwareIDTag19770::validateInstance()
{
	return true;
}

