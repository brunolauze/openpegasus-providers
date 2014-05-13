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


UNIX_MediaPhysicalStatInfo::UNIX_MediaPhysicalStatInfo(void)
{
}

UNIX_MediaPhysicalStatInfo::~UNIX_MediaPhysicalStatInfo(void)
{
}

Boolean UNIX_MediaPhysicalStatInfo::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_MediaPhysicalStatInfo::getInstanceID() const
{
	return _instanceID;
}

void UNIX_MediaPhysicalStatInfo::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_MediaPhysicalStatInfo::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_MediaPhysicalStatInfo::getCaption() const
{
	return _caption;
}

void UNIX_MediaPhysicalStatInfo::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_MediaPhysicalStatInfo::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_MediaPhysicalStatInfo::getDescription() const
{
	return _description;
}

void UNIX_MediaPhysicalStatInfo::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_MediaPhysicalStatInfo::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_MediaPhysicalStatInfo::getElementName() const
{
	return _elementName;
}

void UNIX_MediaPhysicalStatInfo::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_MediaPhysicalStatInfo::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_MediaPhysicalStatInfo::getGeneration() const
{
	return _generation;
}

void UNIX_MediaPhysicalStatInfo::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_MediaPhysicalStatInfo::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_MediaPhysicalStatInfo::getName() const
{
	return _name;
}

void UNIX_MediaPhysicalStatInfo::setName(String &value)
{
	_name = value;
}

Boolean UNIX_MediaPhysicalStatInfo::getPhysicalCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PHYSICAL_CREATION_CLASS_NAME, getPhysicalCreationClassName());
	return true;
}

String UNIX_MediaPhysicalStatInfo::getPhysicalCreationClassName() const
{
	return _physicalCreationClassName;
}

void UNIX_MediaPhysicalStatInfo::setPhysicalCreationClassName(String &value)
{
	_physicalCreationClassName = value;
}

Boolean UNIX_MediaPhysicalStatInfo::getTag(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TAG, getTag());
	return true;
}

String UNIX_MediaPhysicalStatInfo::getTag() const
{
	return _tag;
}

void UNIX_MediaPhysicalStatInfo::setTag(String &value)
{
	_tag = value;
}

Boolean UNIX_MediaPhysicalStatInfo::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_MediaPhysicalStatInfo::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_MediaPhysicalStatInfo::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_MediaPhysicalStatInfo::getScanSuccesses(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SCAN_SUCCESSES, getScanSuccesses());
	return true;
}

Uint64 UNIX_MediaPhysicalStatInfo::getScanSuccesses() const
{
	return _scanSuccesses;
}

void UNIX_MediaPhysicalStatInfo::setScanSuccesses(Uint64 &value)
{
	_scanSuccesses = value;
}

Boolean UNIX_MediaPhysicalStatInfo::getScanFailures(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SCAN_FAILURES, getScanFailures());
	return true;
}

Uint64 UNIX_MediaPhysicalStatInfo::getScanFailures() const
{
	return _scanFailures;
}

void UNIX_MediaPhysicalStatInfo::setScanFailures(Uint64 &value)
{
	_scanFailures = value;
}

Boolean UNIX_MediaPhysicalStatInfo::getScanRetries(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SCAN_RETRIES, getScanRetries());
	return true;
}

Uint64 UNIX_MediaPhysicalStatInfo::getScanRetries() const
{
	return _scanRetries;
}

void UNIX_MediaPhysicalStatInfo::setScanRetries(Uint64 &value)
{
	_scanRetries = value;
}

Boolean UNIX_MediaPhysicalStatInfo::getPickSuccesses(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PICK_SUCCESSES, getPickSuccesses());
	return true;
}

Uint64 UNIX_MediaPhysicalStatInfo::getPickSuccesses() const
{
	return _pickSuccesses;
}

void UNIX_MediaPhysicalStatInfo::setPickSuccesses(Uint64 &value)
{
	_pickSuccesses = value;
}

Boolean UNIX_MediaPhysicalStatInfo::getPickFailures(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PICK_FAILURES, getPickFailures());
	return true;
}

Uint64 UNIX_MediaPhysicalStatInfo::getPickFailures() const
{
	return _pickFailures;
}

void UNIX_MediaPhysicalStatInfo::setPickFailures(Uint64 &value)
{
	_pickFailures = value;
}

Boolean UNIX_MediaPhysicalStatInfo::getPickRetries(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PICK_RETRIES, getPickRetries());
	return true;
}

Uint64 UNIX_MediaPhysicalStatInfo::getPickRetries() const
{
	return _pickRetries;
}

void UNIX_MediaPhysicalStatInfo::setPickRetries(Uint64 &value)
{
	_pickRetries = value;
}

Boolean UNIX_MediaPhysicalStatInfo::getPutSuccesses(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PUT_SUCCESSES, getPutSuccesses());
	return true;
}

Uint64 UNIX_MediaPhysicalStatInfo::getPutSuccesses() const
{
	return _putSuccesses;
}

void UNIX_MediaPhysicalStatInfo::setPutSuccesses(Uint64 &value)
{
	_putSuccesses = value;
}

Boolean UNIX_MediaPhysicalStatInfo::getPutFailures(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PUT_FAILURES, getPutFailures());
	return true;
}

Uint64 UNIX_MediaPhysicalStatInfo::getPutFailures() const
{
	return _putFailures;
}

void UNIX_MediaPhysicalStatInfo::setPutFailures(Uint64 &value)
{
	_putFailures = value;
}

Boolean UNIX_MediaPhysicalStatInfo::getPutRetries(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PUT_RETRIES, getPutRetries());
	return true;
}

Uint64 UNIX_MediaPhysicalStatInfo::getPutRetries() const
{
	return _putRetries;
}

void UNIX_MediaPhysicalStatInfo::setPutRetries(Uint64 &value)
{
	_putRetries = value;
}


void UNIX_MediaPhysicalStatInfo::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("MediaPhysicalStatInfo");
	_generation = Uint64(0);
	_name = String ("");
	_physicalCreationClassName = String ("");
	_tag = String ("");
	_creationClassName = String("UNIX_MediaPhysicalStatInfo");
	_scanSuccesses = Uint64(0);
	_scanFailures = Uint64(0);
	_scanRetries = Uint64(0);
	_pickSuccesses = Uint64(0);
	_pickFailures = Uint64(0);
	_pickRetries = Uint64(0);
	_putSuccesses = Uint64(0);
	_putFailures = Uint64(0);
	_putRetries = Uint64(0);

}

Boolean UNIX_MediaPhysicalStatInfo::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "PhysicalCreationClassName"))
			{
				String physicalCreationClassNameValue;
				property.getValue().get(physicalCreationClassNameValue);
				setPhysicalCreationClassName(physicalCreationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "Tag"))
			{
				String tagValue;
				property.getValue().get(tagValue);
				setTag(tagValue);
			}
			else if (String::equal(property.getName().getString(), "CreationClassName"))
			{
				String creationClassNameValue;
				property.getValue().get(creationClassNameValue);
				setCreationClassName(creationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "ScanSuccesses"))
			{
				Uint64 scanSuccessesValue;
				property.getValue().get(scanSuccessesValue);
				setScanSuccesses(scanSuccessesValue);
			}
			else if (String::equal(property.getName().getString(), "ScanFailures"))
			{
				Uint64 scanFailuresValue;
				property.getValue().get(scanFailuresValue);
				setScanFailures(scanFailuresValue);
			}
			else if (String::equal(property.getName().getString(), "ScanRetries"))
			{
				Uint64 scanRetriesValue;
				property.getValue().get(scanRetriesValue);
				setScanRetries(scanRetriesValue);
			}
			else if (String::equal(property.getName().getString(), "PickSuccesses"))
			{
				Uint64 pickSuccessesValue;
				property.getValue().get(pickSuccessesValue);
				setPickSuccesses(pickSuccessesValue);
			}
			else if (String::equal(property.getName().getString(), "PickFailures"))
			{
				Uint64 pickFailuresValue;
				property.getValue().get(pickFailuresValue);
				setPickFailures(pickFailuresValue);
			}
			else if (String::equal(property.getName().getString(), "PickRetries"))
			{
				Uint64 pickRetriesValue;
				property.getValue().get(pickRetriesValue);
				setPickRetries(pickRetriesValue);
			}
			else if (String::equal(property.getName().getString(), "PutSuccesses"))
			{
				Uint64 putSuccessesValue;
				property.getValue().get(putSuccessesValue);
				setPutSuccesses(putSuccessesValue);
			}
			else if (String::equal(property.getName().getString(), "PutFailures"))
			{
				Uint64 putFailuresValue;
				property.getValue().get(putFailuresValue);
				setPutFailures(putFailuresValue);
			}
			else if (String::equal(property.getName().getString(), "PutRetries"))
			{
				Uint64 putRetriesValue;
				property.getValue().get(putRetriesValue);
				setPutRetries(putRetriesValue);
			}
	}
	return true;
}

Uint32 UNIX_MediaPhysicalStatInfo::invokeResetCounter(
		Uint16 &inSelectedCounter
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ResetCounter */
	
	
	
	return returnValue;
}


Boolean UNIX_MediaPhysicalStatInfo::initialize()
{
	return false;
}

Boolean UNIX_MediaPhysicalStatInfo::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("MediaPhysicalStatInfo");
	_generation = Uint64(0);
	_name = String ("");
	_physicalCreationClassName = String ("");
	_tag = String ("");
	_creationClassName = String("UNIX_MediaPhysicalStatInfo");
	_scanSuccesses = Uint64(0);
	_scanFailures = Uint64(0);
	_scanRetries = Uint64(0);
	_pickSuccesses = Uint64(0);
	_pickFailures = Uint64(0);
	_pickRetries = Uint64(0);
	_putSuccesses = Uint64(0);
	_putFailures = Uint64(0);
	_putRetries = Uint64(0);
	
	return false;
}

Boolean UNIX_MediaPhysicalStatInfo::finalize()
{
	return false;
}

Boolean UNIX_MediaPhysicalStatInfo::loadByName(const String name)
{
	return false;
}

Boolean UNIX_MediaPhysicalStatInfo::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String physicalCreationClassNameKey;
	String tagKey;
	String creationClassNameKey;
	String nameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_PHYSICAL_CREATION_CLASS_NAME)) physicalCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_TAG)) tagKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getPhysicalCreationClassName(), physicalCreationClassNameKey)) && 
			(String::equalNoCase(getTag(), tagKey)) && 
			(String::equalNoCase(getCreationClassName(), creationClassNameKey)) && 
			(String::equalNoCase(getName(), nameKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_MediaPhysicalStatInfo::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_MediaPhysicalStatInfo::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_MediaPhysicalStatInfo::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_MediaPhysicalStatInfo::validateInstance()
{
	return true;
}

