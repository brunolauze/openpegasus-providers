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


UNIX_OSVersionCheck::UNIX_OSVersionCheck(void)
{
}

UNIX_OSVersionCheck::~UNIX_OSVersionCheck(void)
{
}

Boolean UNIX_OSVersionCheck::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_OSVersionCheck::getInstanceID() const
{
	return _instanceID;
}

void UNIX_OSVersionCheck::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_OSVersionCheck::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_OSVersionCheck::getCaption() const
{
	return _caption;
}

void UNIX_OSVersionCheck::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_OSVersionCheck::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_OSVersionCheck::getDescription() const
{
	return _description;
}

void UNIX_OSVersionCheck::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_OSVersionCheck::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_OSVersionCheck::getElementName() const
{
	return _elementName;
}

void UNIX_OSVersionCheck::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_OSVersionCheck::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_OSVersionCheck::getGeneration() const
{
	return _generation;
}

void UNIX_OSVersionCheck::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_OSVersionCheck::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_OSVersionCheck::getName() const
{
	return _name;
}

void UNIX_OSVersionCheck::setName(String &value)
{
	_name = value;
}

Boolean UNIX_OSVersionCheck::getVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERSION, getVersion());
	return true;
}

String UNIX_OSVersionCheck::getVersion() const
{
	return _version;
}

void UNIX_OSVersionCheck::setVersion(String &value)
{
	_version = value;
}

Boolean UNIX_OSVersionCheck::getSoftwareElementState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SOFTWARE_ELEMENT_STATE, getSoftwareElementState());
	return true;
}

Uint16 UNIX_OSVersionCheck::getSoftwareElementState() const
{
	return _softwareElementState;
}

void UNIX_OSVersionCheck::setSoftwareElementState(Uint16 &value)
{
	_softwareElementState = value;
}

Boolean UNIX_OSVersionCheck::getSoftwareElementID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SOFTWARE_ELEMENT_ID, getSoftwareElementID());
	return true;
}

String UNIX_OSVersionCheck::getSoftwareElementID() const
{
	return _softwareElementID;
}

void UNIX_OSVersionCheck::setSoftwareElementID(String &value)
{
	_softwareElementID = value;
}

Boolean UNIX_OSVersionCheck::getTargetOperatingSystem(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TARGET_OPERATING_SYSTEM, getTargetOperatingSystem());
	return true;
}

Uint16 UNIX_OSVersionCheck::getTargetOperatingSystem() const
{
	return _targetOperatingSystem;
}

void UNIX_OSVersionCheck::setTargetOperatingSystem(Uint16 &value)
{
	_targetOperatingSystem = value;
}

Boolean UNIX_OSVersionCheck::getCheckID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHECK_ID, getCheckID());
	return true;
}

String UNIX_OSVersionCheck::getCheckID() const
{
	return _checkID;
}

void UNIX_OSVersionCheck::setCheckID(String &value)
{
	_checkID = value;
}

Boolean UNIX_OSVersionCheck::getCheckMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHECK_MODE, getCheckMode());
	return true;
}

Boolean UNIX_OSVersionCheck::getCheckMode() const
{
	return _checkMode;
}

void UNIX_OSVersionCheck::setCheckMode(Boolean &value)
{
	_checkMode = value;
}

Boolean UNIX_OSVersionCheck::getMinimumVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MINIMUM_VERSION, getMinimumVersion());
	return true;
}

String UNIX_OSVersionCheck::getMinimumVersion() const
{
	return _minimumVersion;
}

void UNIX_OSVersionCheck::setMinimumVersion(String &value)
{
	_minimumVersion = value;
}

Boolean UNIX_OSVersionCheck::getMaximumVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAXIMUM_VERSION, getMaximumVersion());
	return true;
}

String UNIX_OSVersionCheck::getMaximumVersion() const
{
	return _maximumVersion;
}

void UNIX_OSVersionCheck::setMaximumVersion(String &value)
{
	_maximumVersion = value;
}


void UNIX_OSVersionCheck::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("OSVersionCheck");
	_generation = Uint64(0);
	_name = String ("");
	_version = String ("");
	_softwareElementState = Uint16(0);
	_softwareElementID = String ("");
	_targetOperatingSystem = Uint16(0);
	_checkID = String ("");
	_checkMode = Boolean(false);
	_minimumVersion = String ("");
	_maximumVersion = String ("");

}

Boolean UNIX_OSVersionCheck::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "MinimumVersion"))
			{
				String minimumVersionValue;
				property.getValue().get(minimumVersionValue);
				setMinimumVersion(minimumVersionValue);
			}
			else if (String::equal(property.getName().getString(), "MaximumVersion"))
			{
				String maximumVersionValue;
				property.getValue().get(maximumVersionValue);
				setMaximumVersion(maximumVersionValue);
			}
	}
	return true;
}

Uint32 UNIX_OSVersionCheck::invokeInvoke()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method Invoke */
	
	
	
	return returnValue;
}

Uint32 UNIX_OSVersionCheck::invokeInvokeOnSystem(
		CIMInstance &inTargetSystem
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ComputerSystem inTargetSystemObject;
	inTargetSystemObject.loadInstance(inTargetSystem);
	
	/* Execute method InvokeOnSystem */
	
	
	
	return returnValue;
}


Boolean UNIX_OSVersionCheck::initialize()
{
	return false;
}

Boolean UNIX_OSVersionCheck::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("OSVersionCheck");
	_generation = Uint64(0);
	_name = String ("");
	_version = String ("");
	_softwareElementState = Uint16(0);
	_softwareElementID = String ("");
	_targetOperatingSystem = Uint16(0);
	_checkID = String ("");
	_checkMode = Boolean(false);
	_minimumVersion = String ("");
	_maximumVersion = String ("");
	
	return false;
}

Boolean UNIX_OSVersionCheck::finalize()
{
	return false;
}

Boolean UNIX_OSVersionCheck::loadByName(const String name)
{
	return false;
}

Boolean UNIX_OSVersionCheck::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_OSVersionCheck::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_OSVersionCheck::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_OSVersionCheck::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_OSVersionCheck::validateInstance()
{
	return true;
}

