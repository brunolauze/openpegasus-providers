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


UNIX_DHCPCapabilities::UNIX_DHCPCapabilities(void)
{
}

UNIX_DHCPCapabilities::~UNIX_DHCPCapabilities(void)
{
}

Boolean UNIX_DHCPCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_DHCPCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_DHCPCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_DHCPCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_DHCPCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_DHCPCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_DHCPCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_DHCPCapabilities::getDescription() const
{
	return _description;
}

void UNIX_DHCPCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_DHCPCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_DHCPCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_DHCPCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_DHCPCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_DHCPCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_DHCPCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_DHCPCapabilities::getElementNameEditSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME_EDIT_SUPPORTED, getElementNameEditSupported());
	return true;
}

Boolean UNIX_DHCPCapabilities::getElementNameEditSupported() const
{
	return _elementNameEditSupported;
}

void UNIX_DHCPCapabilities::setElementNameEditSupported(Boolean &value)
{
	_elementNameEditSupported = value;
}

Boolean UNIX_DHCPCapabilities::getMaxElementNameLen(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_ELEMENT_NAME_LEN, getMaxElementNameLen());
	return true;
}

Uint16 UNIX_DHCPCapabilities::getMaxElementNameLen() const
{
	return _maxElementNameLen;
}

void UNIX_DHCPCapabilities::setMaxElementNameLen(Uint16 &value)
{
	_maxElementNameLen = value;
}

Boolean UNIX_DHCPCapabilities::getRequestedStatesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATES_SUPPORTED, getRequestedStatesSupported());
	return true;
}

Array<Uint16> UNIX_DHCPCapabilities::getRequestedStatesSupported() const
{
	return _requestedStatesSupported;
}

void UNIX_DHCPCapabilities::setRequestedStatesSupported(Array<Uint16> &value)
{
	_requestedStatesSupported = value;
}

Boolean UNIX_DHCPCapabilities::getElementNameMask(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME_MASK, getElementNameMask());
	return true;
}

String UNIX_DHCPCapabilities::getElementNameMask() const
{
	return _elementNameMask;
}

void UNIX_DHCPCapabilities::setElementNameMask(String &value)
{
	_elementNameMask = value;
}

Boolean UNIX_DHCPCapabilities::getStateAwareness(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATE_AWARENESS, getStateAwareness());
	return true;
}

Array<Uint16> UNIX_DHCPCapabilities::getStateAwareness() const
{
	return _stateAwareness;
}

void UNIX_DHCPCapabilities::setStateAwareness(Array<Uint16> &value)
{
	_stateAwareness = value;
}

Boolean UNIX_DHCPCapabilities::getOptionsSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPTIONS_SUPPORTED, getOptionsSupported());
	return true;
}

Array<Uint16> UNIX_DHCPCapabilities::getOptionsSupported() const
{
	return _optionsSupported;
}

void UNIX_DHCPCapabilities::setOptionsSupported(Array<Uint16> &value)
{
	_optionsSupported = value;
}

Boolean UNIX_DHCPCapabilities::getIPv6OptionsSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IPV_6_OPTIONS_SUPPORTED, getIPv6OptionsSupported());
	return true;
}

Array<Uint16> UNIX_DHCPCapabilities::getIPv6OptionsSupported() const
{
	return _iPv6OptionsSupported;
}

void UNIX_DHCPCapabilities::setIPv6OptionsSupported(Array<Uint16> &value)
{
	_iPv6OptionsSupported = value;
}


void UNIX_DHCPCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("DHCPCapabilities");
	_generation = Uint64(0);
	_elementNameEditSupported = Boolean(false);
	_maxElementNameLen = Uint16(0);
	_requestedStatesSupported.clear();
	_elementNameMask = String ("");
	_stateAwareness.clear();
	_optionsSupported.clear();
	_iPv6OptionsSupported.clear();

}

Boolean UNIX_DHCPCapabilities::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "OptionsSupported"))
			{
				Array<Uint16> optionsSupportedValue;
				property.getValue().get(optionsSupportedValue);
				setOptionsSupported(optionsSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "IPv6OptionsSupported"))
			{
				Array<Uint16> iPv6OptionsSupportedValue;
				property.getValue().get(iPv6OptionsSupportedValue);
				setIPv6OptionsSupported(iPv6OptionsSupportedValue);
			}
	}
	return true;
}

Uint16 UNIX_DHCPCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}


Boolean UNIX_DHCPCapabilities::initialize()
{
	return false;
}

Boolean UNIX_DHCPCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("DHCPCapabilities");
	_generation = Uint64(0);
	_elementNameEditSupported = Boolean(false);
	_maxElementNameLen = Uint16(0);
	_requestedStatesSupported.clear();
	_elementNameMask = String ("");
	_stateAwareness.clear();
	_optionsSupported.clear();
	_iPv6OptionsSupported.clear();
	
	return false;
}

Boolean UNIX_DHCPCapabilities::finalize()
{
	return false;
}


Boolean UNIX_DHCPCapabilities::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_DHCPCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DHCPCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DHCPCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DHCPCapabilities::validateInstance()
{
	return true;
}

