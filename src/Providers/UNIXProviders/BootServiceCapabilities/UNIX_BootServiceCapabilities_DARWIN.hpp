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


UNIX_BootServiceCapabilities::UNIX_BootServiceCapabilities(void)
{
}

UNIX_BootServiceCapabilities::~UNIX_BootServiceCapabilities(void)
{
}

Boolean UNIX_BootServiceCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_BootServiceCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_BootServiceCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_BootServiceCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_BootServiceCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_BootServiceCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_BootServiceCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_BootServiceCapabilities::getDescription() const
{
	return _description;
}

void UNIX_BootServiceCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_BootServiceCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_BootServiceCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_BootServiceCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_BootServiceCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_BootServiceCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_BootServiceCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_BootServiceCapabilities::getElementNameEditSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME_EDIT_SUPPORTED, getElementNameEditSupported());
	return true;
}

Boolean UNIX_BootServiceCapabilities::getElementNameEditSupported() const
{
	return _elementNameEditSupported;
}

void UNIX_BootServiceCapabilities::setElementNameEditSupported(Boolean &value)
{
	_elementNameEditSupported = value;
}

Boolean UNIX_BootServiceCapabilities::getMaxElementNameLen(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_ELEMENT_NAME_LEN, getMaxElementNameLen());
	return true;
}

Uint16 UNIX_BootServiceCapabilities::getMaxElementNameLen() const
{
	return _maxElementNameLen;
}

void UNIX_BootServiceCapabilities::setMaxElementNameLen(Uint16 &value)
{
	_maxElementNameLen = value;
}

Boolean UNIX_BootServiceCapabilities::getRequestedStatesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATES_SUPPORTED, getRequestedStatesSupported());
	return true;
}

Array<Uint16> UNIX_BootServiceCapabilities::getRequestedStatesSupported() const
{
	return _requestedStatesSupported;
}

void UNIX_BootServiceCapabilities::setRequestedStatesSupported(Array<Uint16> &value)
{
	_requestedStatesSupported = value;
}

Boolean UNIX_BootServiceCapabilities::getElementNameMask(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME_MASK, getElementNameMask());
	return true;
}

String UNIX_BootServiceCapabilities::getElementNameMask() const
{
	return _elementNameMask;
}

void UNIX_BootServiceCapabilities::setElementNameMask(String &value)
{
	_elementNameMask = value;
}

Boolean UNIX_BootServiceCapabilities::getStateAwareness(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATE_AWARENESS, getStateAwareness());
	return true;
}

Array<Uint16> UNIX_BootServiceCapabilities::getStateAwareness() const
{
	return _stateAwareness;
}

void UNIX_BootServiceCapabilities::setStateAwareness(Array<Uint16> &value)
{
	_stateAwareness = value;
}

Boolean UNIX_BootServiceCapabilities::getBootConfigCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BOOT_CONFIG_CAPABILITIES, getBootConfigCapabilities());
	return true;
}

Array<Uint16> UNIX_BootServiceCapabilities::getBootConfigCapabilities() const
{
	return _bootConfigCapabilities;
}

void UNIX_BootServiceCapabilities::setBootConfigCapabilities(Array<Uint16> &value)
{
	_bootConfigCapabilities = value;
}

Boolean UNIX_BootServiceCapabilities::getOtherBootConfigCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_BOOT_CONFIG_CAPABILITIES, getOtherBootConfigCapabilities());
	return true;
}

Array<String> UNIX_BootServiceCapabilities::getOtherBootConfigCapabilities() const
{
	return _otherBootConfigCapabilities;
}

void UNIX_BootServiceCapabilities::setOtherBootConfigCapabilities(Array<String> &value)
{
	_otherBootConfigCapabilities = value;
}

Boolean UNIX_BootServiceCapabilities::getBootStringsSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BOOT_STRINGS_SUPPORTED, getBootStringsSupported());
	return true;
}

Array<Uint16> UNIX_BootServiceCapabilities::getBootStringsSupported() const
{
	return _bootStringsSupported;
}

void UNIX_BootServiceCapabilities::setBootStringsSupported(Array<Uint16> &value)
{
	_bootStringsSupported = value;
}

Boolean UNIX_BootServiceCapabilities::getBootCapabilitiesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BOOT_CAPABILITIES_SUPPORTED, getBootCapabilitiesSupported());
	return true;
}

Array<Uint16> UNIX_BootServiceCapabilities::getBootCapabilitiesSupported() const
{
	return _bootCapabilitiesSupported;
}

void UNIX_BootServiceCapabilities::setBootCapabilitiesSupported(Array<Uint16> &value)
{
	_bootCapabilitiesSupported = value;
}

Boolean UNIX_BootServiceCapabilities::getOtherBootCapabilitiesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_BOOT_CAPABILITIES_SUPPORTED, getOtherBootCapabilitiesSupported());
	return true;
}

Array<String> UNIX_BootServiceCapabilities::getOtherBootCapabilitiesSupported() const
{
	return _otherBootCapabilitiesSupported;
}

void UNIX_BootServiceCapabilities::setOtherBootCapabilitiesSupported(Array<String> &value)
{
	_otherBootCapabilitiesSupported = value;
}


void UNIX_BootServiceCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("BootServiceCapabilities");
	_generation = Uint64(0);
	_elementNameEditSupported = Boolean(false);
	_maxElementNameLen = Uint16(0);
	_requestedStatesSupported.clear();
	_elementNameMask = String ("");
	_stateAwareness.clear();
	_bootConfigCapabilities.clear();
	_otherBootConfigCapabilities.clear();
	_bootStringsSupported.clear();
	_bootCapabilitiesSupported.clear();
	_otherBootCapabilitiesSupported.clear();

}

Boolean UNIX_BootServiceCapabilities::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "ElementNameEditSupported"))
			{
				Boolean elementNameEditSupportedValue;
				property.getValue().get(elementNameEditSupportedValue);
				setElementNameEditSupported(elementNameEditSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "MaxElementNameLen"))
			{
				Uint16 maxElementNameLenValue;
				property.getValue().get(maxElementNameLenValue);
				setMaxElementNameLen(maxElementNameLenValue);
			}
			else if (String::equal(property.getName().getString(), "RequestedStatesSupported"))
			{
				Array<Uint16> requestedStatesSupportedValue;
				property.getValue().get(requestedStatesSupportedValue);
				setRequestedStatesSupported(requestedStatesSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "ElementNameMask"))
			{
				String elementNameMaskValue;
				property.getValue().get(elementNameMaskValue);
				setElementNameMask(elementNameMaskValue);
			}
			else if (String::equal(property.getName().getString(), "StateAwareness"))
			{
				Array<Uint16> stateAwarenessValue;
				property.getValue().get(stateAwarenessValue);
				setStateAwareness(stateAwarenessValue);
			}
			else if (String::equal(property.getName().getString(), "BootConfigCapabilities"))
			{
				Array<Uint16> bootConfigCapabilitiesValue;
				property.getValue().get(bootConfigCapabilitiesValue);
				setBootConfigCapabilities(bootConfigCapabilitiesValue);
			}
			else if (String::equal(property.getName().getString(), "OtherBootConfigCapabilities"))
			{
				Array<String> otherBootConfigCapabilitiesValue;
				property.getValue().get(otherBootConfigCapabilitiesValue);
				setOtherBootConfigCapabilities(otherBootConfigCapabilitiesValue);
			}
			else if (String::equal(property.getName().getString(), "BootStringsSupported"))
			{
				Array<Uint16> bootStringsSupportedValue;
				property.getValue().get(bootStringsSupportedValue);
				setBootStringsSupported(bootStringsSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "BootCapabilitiesSupported"))
			{
				Array<Uint16> bootCapabilitiesSupportedValue;
				property.getValue().get(bootCapabilitiesSupportedValue);
				setBootCapabilitiesSupported(bootCapabilitiesSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "OtherBootCapabilitiesSupported"))
			{
				Array<String> otherBootCapabilitiesSupportedValue;
				property.getValue().get(otherBootCapabilitiesSupportedValue);
				setOtherBootCapabilitiesSupported(otherBootCapabilitiesSupportedValue);
			}
	}
	return true;
}

Uint16 UNIX_BootServiceCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}


Boolean UNIX_BootServiceCapabilities::initialize()
{
	return false;
}

Boolean UNIX_BootServiceCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("BootServiceCapabilities");
	_generation = Uint64(0);
	_elementNameEditSupported = Boolean(false);
	_maxElementNameLen = Uint16(0);
	_requestedStatesSupported.clear();
	_elementNameMask = String ("");
	_stateAwareness.clear();
	_bootConfigCapabilities.clear();
	_otherBootConfigCapabilities.clear();
	_bootStringsSupported.clear();
	_bootCapabilitiesSupported.clear();
	_otherBootCapabilitiesSupported.clear();
	
	return false;
}

Boolean UNIX_BootServiceCapabilities::finalize()
{
	return false;
}


Boolean UNIX_BootServiceCapabilities::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_BootServiceCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BootServiceCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BootServiceCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BootServiceCapabilities::validateInstance()
{
	return true;
}

