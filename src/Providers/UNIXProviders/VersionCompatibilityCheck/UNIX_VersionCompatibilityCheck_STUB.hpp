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


UNIX_VersionCompatibilityCheck::UNIX_VersionCompatibilityCheck(void)
{
}

UNIX_VersionCompatibilityCheck::~UNIX_VersionCompatibilityCheck(void)
{
}

Boolean UNIX_VersionCompatibilityCheck::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_VersionCompatibilityCheck::getInstanceID() const
{
	return _instanceID;
}

void UNIX_VersionCompatibilityCheck::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_VersionCompatibilityCheck::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_VersionCompatibilityCheck::getCaption() const
{
	return _caption;
}

void UNIX_VersionCompatibilityCheck::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_VersionCompatibilityCheck::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_VersionCompatibilityCheck::getDescription() const
{
	return _description;
}

void UNIX_VersionCompatibilityCheck::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_VersionCompatibilityCheck::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_VersionCompatibilityCheck::getElementName() const
{
	return _elementName;
}

void UNIX_VersionCompatibilityCheck::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_VersionCompatibilityCheck::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_VersionCompatibilityCheck::getGeneration() const
{
	return _generation;
}

void UNIX_VersionCompatibilityCheck::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_VersionCompatibilityCheck::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_VersionCompatibilityCheck::getName() const
{
	return _name;
}

void UNIX_VersionCompatibilityCheck::setName(String &value)
{
	_name = value;
}

Boolean UNIX_VersionCompatibilityCheck::getVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERSION, getVersion());
	return true;
}

String UNIX_VersionCompatibilityCheck::getVersion() const
{
	return _version;
}

void UNIX_VersionCompatibilityCheck::setVersion(String &value)
{
	_version = value;
}

Boolean UNIX_VersionCompatibilityCheck::getSoftwareElementState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SOFTWARE_ELEMENT_STATE, getSoftwareElementState());
	return true;
}

Uint16 UNIX_VersionCompatibilityCheck::getSoftwareElementState() const
{
	return _softwareElementState;
}

void UNIX_VersionCompatibilityCheck::setSoftwareElementState(Uint16 &value)
{
	_softwareElementState = value;
}

Boolean UNIX_VersionCompatibilityCheck::getSoftwareElementID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SOFTWARE_ELEMENT_ID, getSoftwareElementID());
	return true;
}

String UNIX_VersionCompatibilityCheck::getSoftwareElementID() const
{
	return _softwareElementID;
}

void UNIX_VersionCompatibilityCheck::setSoftwareElementID(String &value)
{
	_softwareElementID = value;
}

Boolean UNIX_VersionCompatibilityCheck::getTargetOperatingSystem(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TARGET_OPERATING_SYSTEM, getTargetOperatingSystem());
	return true;
}

Uint16 UNIX_VersionCompatibilityCheck::getTargetOperatingSystem() const
{
	return _targetOperatingSystem;
}

void UNIX_VersionCompatibilityCheck::setTargetOperatingSystem(Uint16 &value)
{
	_targetOperatingSystem = value;
}

Boolean UNIX_VersionCompatibilityCheck::getCheckID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHECK_ID, getCheckID());
	return true;
}

String UNIX_VersionCompatibilityCheck::getCheckID() const
{
	return _checkID;
}

void UNIX_VersionCompatibilityCheck::setCheckID(String &value)
{
	_checkID = value;
}

Boolean UNIX_VersionCompatibilityCheck::getCheckMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHECK_MODE, getCheckMode());
	return true;
}

Boolean UNIX_VersionCompatibilityCheck::getCheckMode() const
{
	return _checkMode;
}

void UNIX_VersionCompatibilityCheck::setCheckMode(Boolean &value)
{
	_checkMode = value;
}

Boolean UNIX_VersionCompatibilityCheck::getAllowDownVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOW_DOWN_VERSION, getAllowDownVersion());
	return true;
}

Boolean UNIX_VersionCompatibilityCheck::getAllowDownVersion() const
{
	return _allowDownVersion;
}

void UNIX_VersionCompatibilityCheck::setAllowDownVersion(Boolean &value)
{
	_allowDownVersion = value;
}

Boolean UNIX_VersionCompatibilityCheck::getAllowMultipleVersions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOW_MULTIPLE_VERSIONS, getAllowMultipleVersions());
	return true;
}

Boolean UNIX_VersionCompatibilityCheck::getAllowMultipleVersions() const
{
	return _allowMultipleVersions;
}

void UNIX_VersionCompatibilityCheck::setAllowMultipleVersions(Boolean &value)
{
	_allowMultipleVersions = value;
}

Boolean UNIX_VersionCompatibilityCheck::getReinstall(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REINSTALL, getReinstall());
	return true;
}

Boolean UNIX_VersionCompatibilityCheck::getReinstall() const
{
	return _reinstall;
}

void UNIX_VersionCompatibilityCheck::setReinstall(Boolean &value)
{
	_reinstall = value;
}


void UNIX_VersionCompatibilityCheck::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("VersionCompatibilityCheck");
	_generation = Uint64(0);
	_name = String ("");
	_version = String ("");
	_softwareElementState = Uint16(0);
	_softwareElementID = String ("");
	_targetOperatingSystem = Uint16(0);
	_checkID = String ("");
	_checkMode = Boolean(false);
	_allowDownVersion = Boolean(false);
	_allowMultipleVersions = Boolean(false);
	_reinstall = Boolean(false);

}

Boolean UNIX_VersionCompatibilityCheck::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "AllowDownVersion"))
			{
				Boolean allowDownVersionValue;
				property.getValue().get(allowDownVersionValue);
				setAllowDownVersion(allowDownVersionValue);
			}
			else if (String::equal(property.getName().getString(), "AllowMultipleVersions"))
			{
				Boolean allowMultipleVersionsValue;
				property.getValue().get(allowMultipleVersionsValue);
				setAllowMultipleVersions(allowMultipleVersionsValue);
			}
			else if (String::equal(property.getName().getString(), "Reinstall"))
			{
				Boolean reinstallValue;
				property.getValue().get(reinstallValue);
				setReinstall(reinstallValue);
			}
	}
	return true;
}

Uint32 UNIX_VersionCompatibilityCheck::invokeInvoke()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method Invoke */
	
	
	
	return returnValue;
}

Uint32 UNIX_VersionCompatibilityCheck::invokeInvokeOnSystem(
		CIMInstance &inTargetSystem
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ComputerSystem inTargetSystemObject;
	inTargetSystemObject.loadInstance(inTargetSystem);
	
	/* Execute method InvokeOnSystem */
	
	
	
	return returnValue;
}


Boolean UNIX_VersionCompatibilityCheck::initialize()
{
	return false;
}

Boolean UNIX_VersionCompatibilityCheck::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("VersionCompatibilityCheck");
	_generation = Uint64(0);
	_name = String ("");
	_version = String ("");
	_softwareElementState = Uint16(0);
	_softwareElementID = String ("");
	_targetOperatingSystem = Uint16(0);
	_checkID = String ("");
	_checkMode = Boolean(false);
	_allowDownVersion = Boolean(false);
	_allowMultipleVersions = Boolean(false);
	_reinstall = Boolean(false);
	
	return false;
}

Boolean UNIX_VersionCompatibilityCheck::finalize()
{
	return false;
}

Boolean UNIX_VersionCompatibilityCheck::loadByName(const String name)
{
	return false;
}

Boolean UNIX_VersionCompatibilityCheck::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_VersionCompatibilityCheck::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VersionCompatibilityCheck::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VersionCompatibilityCheck::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VersionCompatibilityCheck::validateInstance()
{
	return true;
}

