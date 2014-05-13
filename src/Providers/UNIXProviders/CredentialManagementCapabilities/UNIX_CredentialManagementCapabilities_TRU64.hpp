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


UNIX_CredentialManagementCapabilities::UNIX_CredentialManagementCapabilities(void)
{
}

UNIX_CredentialManagementCapabilities::~UNIX_CredentialManagementCapabilities(void)
{
}

Boolean UNIX_CredentialManagementCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_CredentialManagementCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_CredentialManagementCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_CredentialManagementCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_CredentialManagementCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_CredentialManagementCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_CredentialManagementCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_CredentialManagementCapabilities::getDescription() const
{
	return _description;
}

void UNIX_CredentialManagementCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_CredentialManagementCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_CredentialManagementCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_CredentialManagementCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_CredentialManagementCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_CredentialManagementCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_CredentialManagementCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_CredentialManagementCapabilities::getElementNameEditSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME_EDIT_SUPPORTED, getElementNameEditSupported());
	return true;
}

Boolean UNIX_CredentialManagementCapabilities::getElementNameEditSupported() const
{
	return _elementNameEditSupported;
}

void UNIX_CredentialManagementCapabilities::setElementNameEditSupported(Boolean &value)
{
	_elementNameEditSupported = value;
}

Boolean UNIX_CredentialManagementCapabilities::getMaxElementNameLen(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_ELEMENT_NAME_LEN, getMaxElementNameLen());
	return true;
}

Uint16 UNIX_CredentialManagementCapabilities::getMaxElementNameLen() const
{
	return _maxElementNameLen;
}

void UNIX_CredentialManagementCapabilities::setMaxElementNameLen(Uint16 &value)
{
	_maxElementNameLen = value;
}

Boolean UNIX_CredentialManagementCapabilities::getRequestedStatesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATES_SUPPORTED, getRequestedStatesSupported());
	return true;
}

Array<Uint16> UNIX_CredentialManagementCapabilities::getRequestedStatesSupported() const
{
	return _requestedStatesSupported;
}

void UNIX_CredentialManagementCapabilities::setRequestedStatesSupported(Array<Uint16> &value)
{
	_requestedStatesSupported = value;
}

Boolean UNIX_CredentialManagementCapabilities::getElementNameMask(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME_MASK, getElementNameMask());
	return true;
}

String UNIX_CredentialManagementCapabilities::getElementNameMask() const
{
	return _elementNameMask;
}

void UNIX_CredentialManagementCapabilities::setElementNameMask(String &value)
{
	_elementNameMask = value;
}

Boolean UNIX_CredentialManagementCapabilities::getStateAwareness(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATE_AWARENESS, getStateAwareness());
	return true;
}

Array<Uint16> UNIX_CredentialManagementCapabilities::getStateAwareness() const
{
	return _stateAwareness;
}

void UNIX_CredentialManagementCapabilities::setStateAwareness(Array<Uint16> &value)
{
	_stateAwareness = value;
}

Boolean UNIX_CredentialManagementCapabilities::getSupportedMethods(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_METHODS, getSupportedMethods());
	return true;
}

Array<Uint16> UNIX_CredentialManagementCapabilities::getSupportedMethods() const
{
	return _supportedMethods;
}

void UNIX_CredentialManagementCapabilities::setSupportedMethods(Array<Uint16> &value)
{
	_supportedMethods = value;
}

Boolean UNIX_CredentialManagementCapabilities::getCumulativePrivilegeMethodology(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CUMULATIVE_PRIVILEGE_METHODOLOGY, getCumulativePrivilegeMethodology());
	return true;
}

Uint16 UNIX_CredentialManagementCapabilities::getCumulativePrivilegeMethodology() const
{
	return _cumulativePrivilegeMethodology;
}

void UNIX_CredentialManagementCapabilities::setCumulativePrivilegeMethodology(Uint16 &value)
{
	_cumulativePrivilegeMethodology = value;
}


void UNIX_CredentialManagementCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("CredentialManagementCapabilities");
	_generation = Uint64(0);
	_elementNameEditSupported = Boolean(false);
	_maxElementNameLen = Uint16(0);
	_requestedStatesSupported.clear();
	_elementNameMask = String ("");
	_stateAwareness.clear();
	_supportedMethods.clear();
	_cumulativePrivilegeMethodology = Uint16(0);

}

Boolean UNIX_CredentialManagementCapabilities::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "SupportedMethods"))
			{
				Array<Uint16> supportedMethodsValue;
				property.getValue().get(supportedMethodsValue);
				setSupportedMethods(supportedMethodsValue);
			}
			else if (String::equal(property.getName().getString(), "CumulativePrivilegeMethodology"))
			{
				Uint16 cumulativePrivilegeMethodologyValue;
				property.getValue().get(cumulativePrivilegeMethodologyValue);
				setCumulativePrivilegeMethodology(cumulativePrivilegeMethodologyValue);
			}
	}
	return true;
}

Uint16 UNIX_CredentialManagementCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}


Boolean UNIX_CredentialManagementCapabilities::initialize()
{
	return false;
}

Boolean UNIX_CredentialManagementCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("CredentialManagementCapabilities");
	_generation = Uint64(0);
	_elementNameEditSupported = Boolean(false);
	_maxElementNameLen = Uint16(0);
	_requestedStatesSupported.clear();
	_elementNameMask = String ("");
	_stateAwareness.clear();
	_supportedMethods.clear();
	_cumulativePrivilegeMethodology = Uint16(0);
	
	return false;
}

Boolean UNIX_CredentialManagementCapabilities::finalize()
{
	return false;
}


Boolean UNIX_CredentialManagementCapabilities::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_CredentialManagementCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_CredentialManagementCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_CredentialManagementCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_CredentialManagementCapabilities::validateInstance()
{
	return true;
}

