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


UNIX_SoftwareElementVersionCheck::UNIX_SoftwareElementVersionCheck(void)
{
}

UNIX_SoftwareElementVersionCheck::~UNIX_SoftwareElementVersionCheck(void)
{
}

Boolean UNIX_SoftwareElementVersionCheck::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_SoftwareElementVersionCheck::getInstanceID() const
{
	return _instanceID;
}

void UNIX_SoftwareElementVersionCheck::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_SoftwareElementVersionCheck::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_SoftwareElementVersionCheck::getCaption() const
{
	return _caption;
}

void UNIX_SoftwareElementVersionCheck::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_SoftwareElementVersionCheck::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_SoftwareElementVersionCheck::getDescription() const
{
	return _description;
}

void UNIX_SoftwareElementVersionCheck::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_SoftwareElementVersionCheck::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_SoftwareElementVersionCheck::getElementName() const
{
	return _elementName;
}

void UNIX_SoftwareElementVersionCheck::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_SoftwareElementVersionCheck::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_SoftwareElementVersionCheck::getGeneration() const
{
	return _generation;
}

void UNIX_SoftwareElementVersionCheck::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_SoftwareElementVersionCheck::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_SoftwareElementVersionCheck::getName() const
{
	return _name;
}

void UNIX_SoftwareElementVersionCheck::setName(String &value)
{
	_name = value;
}

Boolean UNIX_SoftwareElementVersionCheck::getVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERSION, getVersion());
	return true;
}

String UNIX_SoftwareElementVersionCheck::getVersion() const
{
	return _version;
}

void UNIX_SoftwareElementVersionCheck::setVersion(String &value)
{
	_version = value;
}

Boolean UNIX_SoftwareElementVersionCheck::getSoftwareElementState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SOFTWARE_ELEMENT_STATE, getSoftwareElementState());
	return true;
}

Uint16 UNIX_SoftwareElementVersionCheck::getSoftwareElementState() const
{
	return _softwareElementState;
}

void UNIX_SoftwareElementVersionCheck::setSoftwareElementState(Uint16 &value)
{
	_softwareElementState = value;
}

Boolean UNIX_SoftwareElementVersionCheck::getSoftwareElementID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SOFTWARE_ELEMENT_ID, getSoftwareElementID());
	return true;
}

String UNIX_SoftwareElementVersionCheck::getSoftwareElementID() const
{
	return _softwareElementID;
}

void UNIX_SoftwareElementVersionCheck::setSoftwareElementID(String &value)
{
	_softwareElementID = value;
}

Boolean UNIX_SoftwareElementVersionCheck::getTargetOperatingSystem(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TARGET_OPERATING_SYSTEM, getTargetOperatingSystem());
	return true;
}

Uint16 UNIX_SoftwareElementVersionCheck::getTargetOperatingSystem() const
{
	return _targetOperatingSystem;
}

void UNIX_SoftwareElementVersionCheck::setTargetOperatingSystem(Uint16 &value)
{
	_targetOperatingSystem = value;
}

Boolean UNIX_SoftwareElementVersionCheck::getCheckID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHECK_ID, getCheckID());
	return true;
}

String UNIX_SoftwareElementVersionCheck::getCheckID() const
{
	return _checkID;
}

void UNIX_SoftwareElementVersionCheck::setCheckID(String &value)
{
	_checkID = value;
}

Boolean UNIX_SoftwareElementVersionCheck::getCheckMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHECK_MODE, getCheckMode());
	return true;
}

Boolean UNIX_SoftwareElementVersionCheck::getCheckMode() const
{
	return _checkMode;
}

void UNIX_SoftwareElementVersionCheck::setCheckMode(Boolean &value)
{
	_checkMode = value;
}

Boolean UNIX_SoftwareElementVersionCheck::getSoftwareElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SOFTWARE_ELEMENT_NAME, getSoftwareElementName());
	return true;
}

String UNIX_SoftwareElementVersionCheck::getSoftwareElementName() const
{
	return _softwareElementName;
}

void UNIX_SoftwareElementVersionCheck::setSoftwareElementName(String &value)
{
	_softwareElementName = value;
}

Boolean UNIX_SoftwareElementVersionCheck::getLowerSoftwareElementVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOWER_SOFTWARE_ELEMENT_VERSION, getLowerSoftwareElementVersion());
	return true;
}

String UNIX_SoftwareElementVersionCheck::getLowerSoftwareElementVersion() const
{
	return _lowerSoftwareElementVersion;
}

void UNIX_SoftwareElementVersionCheck::setLowerSoftwareElementVersion(String &value)
{
	_lowerSoftwareElementVersion = value;
}

Boolean UNIX_SoftwareElementVersionCheck::getUpperSoftwareElementVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UPPER_SOFTWARE_ELEMENT_VERSION, getUpperSoftwareElementVersion());
	return true;
}

String UNIX_SoftwareElementVersionCheck::getUpperSoftwareElementVersion() const
{
	return _upperSoftwareElementVersion;
}

void UNIX_SoftwareElementVersionCheck::setUpperSoftwareElementVersion(String &value)
{
	_upperSoftwareElementVersion = value;
}

Boolean UNIX_SoftwareElementVersionCheck::getSoftwareElementStateDesired(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SOFTWARE_ELEMENT_STATE_DESIRED, getSoftwareElementStateDesired());
	return true;
}

Uint16 UNIX_SoftwareElementVersionCheck::getSoftwareElementStateDesired() const
{
	return _softwareElementStateDesired;
}

void UNIX_SoftwareElementVersionCheck::setSoftwareElementStateDesired(Uint16 &value)
{
	_softwareElementStateDesired = value;
}

Boolean UNIX_SoftwareElementVersionCheck::getTargetOperatingSystemDesired(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TARGET_OPERATING_SYSTEM_DESIRED, getTargetOperatingSystemDesired());
	return true;
}

Uint16 UNIX_SoftwareElementVersionCheck::getTargetOperatingSystemDesired() const
{
	return _targetOperatingSystemDesired;
}

void UNIX_SoftwareElementVersionCheck::setTargetOperatingSystemDesired(Uint16 &value)
{
	_targetOperatingSystemDesired = value;
}


void UNIX_SoftwareElementVersionCheck::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("SoftwareElementVersionCheck");
	_generation = Uint64(0);
	_name = String ("");
	_version = String ("");
	_softwareElementState = Uint16(0);
	_softwareElementID = String ("");
	_targetOperatingSystem = Uint16(0);
	_checkID = String ("");
	_checkMode = Boolean(false);
	_softwareElementName = String ("");
	_lowerSoftwareElementVersion = String ("");
	_upperSoftwareElementVersion = String ("");
	_softwareElementStateDesired = Uint16(0);
	_targetOperatingSystemDesired = Uint16(0);

}

Boolean UNIX_SoftwareElementVersionCheck::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "Version"))
			{
				String versionValue;
				property.getValue().get(versionValue);
				setVersion(versionValue);
			}
			else if (String::equal(property.getName().getString(), "SoftwareElementState"))
			{
				Uint16 softwareElementStateValue;
				property.getValue().get(softwareElementStateValue);
				setSoftwareElementState(softwareElementStateValue);
			}
			else if (String::equal(property.getName().getString(), "SoftwareElementID"))
			{
				String softwareElementIDValue;
				property.getValue().get(softwareElementIDValue);
				setSoftwareElementID(softwareElementIDValue);
			}
			else if (String::equal(property.getName().getString(), "TargetOperatingSystem"))
			{
				Uint16 targetOperatingSystemValue;
				property.getValue().get(targetOperatingSystemValue);
				setTargetOperatingSystem(targetOperatingSystemValue);
			}
			else if (String::equal(property.getName().getString(), "CheckID"))
			{
				String checkIDValue;
				property.getValue().get(checkIDValue);
				setCheckID(checkIDValue);
			}
			else if (String::equal(property.getName().getString(), "CheckMode"))
			{
				Boolean checkModeValue;
				property.getValue().get(checkModeValue);
				setCheckMode(checkModeValue);
			}
			else if (String::equal(property.getName().getString(), "SoftwareElementName"))
			{
				String softwareElementNameValue;
				property.getValue().get(softwareElementNameValue);
				setSoftwareElementName(softwareElementNameValue);
			}
			else if (String::equal(property.getName().getString(), "LowerSoftwareElementVersion"))
			{
				String lowerSoftwareElementVersionValue;
				property.getValue().get(lowerSoftwareElementVersionValue);
				setLowerSoftwareElementVersion(lowerSoftwareElementVersionValue);
			}
			else if (String::equal(property.getName().getString(), "UpperSoftwareElementVersion"))
			{
				String upperSoftwareElementVersionValue;
				property.getValue().get(upperSoftwareElementVersionValue);
				setUpperSoftwareElementVersion(upperSoftwareElementVersionValue);
			}
			else if (String::equal(property.getName().getString(), "SoftwareElementStateDesired"))
			{
				Uint16 softwareElementStateDesiredValue;
				property.getValue().get(softwareElementStateDesiredValue);
				setSoftwareElementStateDesired(softwareElementStateDesiredValue);
			}
			else if (String::equal(property.getName().getString(), "TargetOperatingSystemDesired"))
			{
				Uint16 targetOperatingSystemDesiredValue;
				property.getValue().get(targetOperatingSystemDesiredValue);
				setTargetOperatingSystemDesired(targetOperatingSystemDesiredValue);
			}
	}
	return true;
}

Uint32 UNIX_SoftwareElementVersionCheck::invokeInvoke()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method Invoke */
	
	
	
	return returnValue;
}

Uint32 UNIX_SoftwareElementVersionCheck::invokeInvokeOnSystem(
		CIMInstance &inTargetSystem
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ComputerSystem inTargetSystemObject;
	inTargetSystemObject.loadInstance(inTargetSystem);
	
	/* Execute method InvokeOnSystem */
	
	
	
	return returnValue;
}


Boolean UNIX_SoftwareElementVersionCheck::initialize()
{
	return false;
}

Boolean UNIX_SoftwareElementVersionCheck::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("SoftwareElementVersionCheck");
	_generation = Uint64(0);
	_name = String ("");
	_version = String ("");
	_softwareElementState = Uint16(0);
	_softwareElementID = String ("");
	_targetOperatingSystem = Uint16(0);
	_checkID = String ("");
	_checkMode = Boolean(false);
	_softwareElementName = String ("");
	_lowerSoftwareElementVersion = String ("");
	_upperSoftwareElementVersion = String ("");
	_softwareElementStateDesired = Uint16(0);
	_targetOperatingSystemDesired = Uint16(0);
	
	return false;
}

Boolean UNIX_SoftwareElementVersionCheck::finalize()
{
	return false;
}

Boolean UNIX_SoftwareElementVersionCheck::loadByName(const String name)
{
	return false;
}

Boolean UNIX_SoftwareElementVersionCheck::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String nameKey;
	String versionKey;
	String softwareElementStateKey;
	String softwareElementIDKey;
	String targetOperatingSystemKey;
	String checkIDKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_VERSION)) versionKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SOFTWARE_ELEMENT_STATE)) softwareElementStateKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SOFTWARE_ELEMENT_ID)) softwareElementIDKey = kb.getValue();
		else if (keyName.equal(PROPERTY_TARGET_OPERATING_SYSTEM)) targetOperatingSystemKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CHECK_ID)) checkIDKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getName(), nameKey)) && 
			(String::equalNoCase(getVersion(), versionKey)) && 
			(String::equalNoCase(String(std::to_string(getSoftwareElementState()).c_str()), softwareElementStateKey)) && 
			(String::equalNoCase(getSoftwareElementID(), softwareElementIDKey)) && 
			(String::equalNoCase(String(std::to_string(getTargetOperatingSystem()).c_str()), targetOperatingSystemKey)) && 
			(String::equalNoCase(getCheckID(), checkIDKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_SoftwareElementVersionCheck::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SoftwareElementVersionCheck::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SoftwareElementVersionCheck::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SoftwareElementVersionCheck::validateInstance()
{
	return true;
}

