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


UNIX_WiFiEndpointCapabilities::UNIX_WiFiEndpointCapabilities(void)
{
}

UNIX_WiFiEndpointCapabilities::~UNIX_WiFiEndpointCapabilities(void)
{
}

Boolean UNIX_WiFiEndpointCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_WiFiEndpointCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_WiFiEndpointCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_WiFiEndpointCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_WiFiEndpointCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_WiFiEndpointCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_WiFiEndpointCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_WiFiEndpointCapabilities::getDescription() const
{
	return _description;
}

void UNIX_WiFiEndpointCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_WiFiEndpointCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_WiFiEndpointCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_WiFiEndpointCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_WiFiEndpointCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_WiFiEndpointCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_WiFiEndpointCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_WiFiEndpointCapabilities::getElementNameEditSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME_EDIT_SUPPORTED, getElementNameEditSupported());
	return true;
}

Boolean UNIX_WiFiEndpointCapabilities::getElementNameEditSupported() const
{
	return _elementNameEditSupported;
}

void UNIX_WiFiEndpointCapabilities::setElementNameEditSupported(Boolean &value)
{
	_elementNameEditSupported = value;
}

Boolean UNIX_WiFiEndpointCapabilities::getMaxElementNameLen(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_ELEMENT_NAME_LEN, getMaxElementNameLen());
	return true;
}

Uint16 UNIX_WiFiEndpointCapabilities::getMaxElementNameLen() const
{
	return _maxElementNameLen;
}

void UNIX_WiFiEndpointCapabilities::setMaxElementNameLen(Uint16 &value)
{
	_maxElementNameLen = value;
}

Boolean UNIX_WiFiEndpointCapabilities::getRequestedStatesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATES_SUPPORTED, getRequestedStatesSupported());
	return true;
}

Array<Uint16> UNIX_WiFiEndpointCapabilities::getRequestedStatesSupported() const
{
	return _requestedStatesSupported;
}

void UNIX_WiFiEndpointCapabilities::setRequestedStatesSupported(Array<Uint16> &value)
{
	_requestedStatesSupported = value;
}

Boolean UNIX_WiFiEndpointCapabilities::getElementNameMask(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME_MASK, getElementNameMask());
	return true;
}

String UNIX_WiFiEndpointCapabilities::getElementNameMask() const
{
	return _elementNameMask;
}

void UNIX_WiFiEndpointCapabilities::setElementNameMask(String &value)
{
	_elementNameMask = value;
}

Boolean UNIX_WiFiEndpointCapabilities::getStateAwareness(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATE_AWARENESS, getStateAwareness());
	return true;
}

Array<Uint16> UNIX_WiFiEndpointCapabilities::getStateAwareness() const
{
	return _stateAwareness;
}

void UNIX_WiFiEndpointCapabilities::setStateAwareness(Array<Uint16> &value)
{
	_stateAwareness = value;
}

Boolean UNIX_WiFiEndpointCapabilities::getSupportedEncryptionMethods(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_ENCRYPTION_METHODS, getSupportedEncryptionMethods());
	return true;
}

Array<Uint16> UNIX_WiFiEndpointCapabilities::getSupportedEncryptionMethods() const
{
	return _supportedEncryptionMethods;
}

void UNIX_WiFiEndpointCapabilities::setSupportedEncryptionMethods(Array<Uint16> &value)
{
	_supportedEncryptionMethods = value;
}

Boolean UNIX_WiFiEndpointCapabilities::getOtherSupportedEncryptionMethods(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SUPPORTED_ENCRYPTION_METHODS, getOtherSupportedEncryptionMethods());
	return true;
}

Array<String> UNIX_WiFiEndpointCapabilities::getOtherSupportedEncryptionMethods() const
{
	return _otherSupportedEncryptionMethods;
}

void UNIX_WiFiEndpointCapabilities::setOtherSupportedEncryptionMethods(Array<String> &value)
{
	_otherSupportedEncryptionMethods = value;
}

Boolean UNIX_WiFiEndpointCapabilities::getSupportedAuthenticationMethods(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_AUTHENTICATION_METHODS, getSupportedAuthenticationMethods());
	return true;
}

Array<Uint16> UNIX_WiFiEndpointCapabilities::getSupportedAuthenticationMethods() const
{
	return _supportedAuthenticationMethods;
}

void UNIX_WiFiEndpointCapabilities::setSupportedAuthenticationMethods(Array<Uint16> &value)
{
	_supportedAuthenticationMethods = value;
}

Boolean UNIX_WiFiEndpointCapabilities::getOtherSupportedAuthenticationMethods(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SUPPORTED_AUTHENTICATION_METHODS, getOtherSupportedAuthenticationMethods());
	return true;
}

Array<String> UNIX_WiFiEndpointCapabilities::getOtherSupportedAuthenticationMethods() const
{
	return _otherSupportedAuthenticationMethods;
}

void UNIX_WiFiEndpointCapabilities::setOtherSupportedAuthenticationMethods(Array<String> &value)
{
	_otherSupportedAuthenticationMethods = value;
}


void UNIX_WiFiEndpointCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("WiFiEndpointCapabilities");
	_generation = Uint64(0);
	_elementNameEditSupported = Boolean(false);
	_maxElementNameLen = Uint16(0);
	_requestedStatesSupported.clear();
	_elementNameMask = String ("");
	_stateAwareness.clear();
	_supportedEncryptionMethods.clear();
	_otherSupportedEncryptionMethods.clear();
	_supportedAuthenticationMethods.clear();
	_otherSupportedAuthenticationMethods.clear();

}

Boolean UNIX_WiFiEndpointCapabilities::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "SupportedEncryptionMethods"))
			{
				Array<Uint16> supportedEncryptionMethodsValue;
				property.getValue().get(supportedEncryptionMethodsValue);
				setSupportedEncryptionMethods(supportedEncryptionMethodsValue);
			}
			else if (String::equal(property.getName().getString(), "OtherSupportedEncryptionMethods"))
			{
				Array<String> otherSupportedEncryptionMethodsValue;
				property.getValue().get(otherSupportedEncryptionMethodsValue);
				setOtherSupportedEncryptionMethods(otherSupportedEncryptionMethodsValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedAuthenticationMethods"))
			{
				Array<Uint16> supportedAuthenticationMethodsValue;
				property.getValue().get(supportedAuthenticationMethodsValue);
				setSupportedAuthenticationMethods(supportedAuthenticationMethodsValue);
			}
			else if (String::equal(property.getName().getString(), "OtherSupportedAuthenticationMethods"))
			{
				Array<String> otherSupportedAuthenticationMethodsValue;
				property.getValue().get(otherSupportedAuthenticationMethodsValue);
				setOtherSupportedAuthenticationMethods(otherSupportedAuthenticationMethodsValue);
			}
	}
	return true;
}

Uint16 UNIX_WiFiEndpointCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}


Boolean UNIX_WiFiEndpointCapabilities::initialize()
{
	return false;
}

Boolean UNIX_WiFiEndpointCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("WiFiEndpointCapabilities");
	_generation = Uint64(0);
	_elementNameEditSupported = Boolean(false);
	_maxElementNameLen = Uint16(0);
	_requestedStatesSupported.clear();
	_elementNameMask = String ("");
	_stateAwareness.clear();
	_supportedEncryptionMethods.clear();
	_otherSupportedEncryptionMethods.clear();
	_supportedAuthenticationMethods.clear();
	_otherSupportedAuthenticationMethods.clear();
	
	return false;
}

Boolean UNIX_WiFiEndpointCapabilities::finalize()
{
	return false;
}


Boolean UNIX_WiFiEndpointCapabilities::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_WiFiEndpointCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_WiFiEndpointCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_WiFiEndpointCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_WiFiEndpointCapabilities::validateInstance()
{
	return true;
}

