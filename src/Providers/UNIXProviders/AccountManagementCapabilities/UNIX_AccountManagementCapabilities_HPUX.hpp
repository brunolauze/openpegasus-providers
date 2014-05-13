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


UNIX_AccountManagementCapabilities::UNIX_AccountManagementCapabilities(void)
{
}

UNIX_AccountManagementCapabilities::~UNIX_AccountManagementCapabilities(void)
{
}

Boolean UNIX_AccountManagementCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_AccountManagementCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_AccountManagementCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_AccountManagementCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_AccountManagementCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_AccountManagementCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_AccountManagementCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_AccountManagementCapabilities::getDescription() const
{
	return _description;
}

void UNIX_AccountManagementCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_AccountManagementCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_AccountManagementCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_AccountManagementCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_AccountManagementCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_AccountManagementCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_AccountManagementCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_AccountManagementCapabilities::getElementNameEditSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME_EDIT_SUPPORTED, getElementNameEditSupported());
	return true;
}

Boolean UNIX_AccountManagementCapabilities::getElementNameEditSupported() const
{
	return _elementNameEditSupported;
}

void UNIX_AccountManagementCapabilities::setElementNameEditSupported(Boolean &value)
{
	_elementNameEditSupported = value;
}

Boolean UNIX_AccountManagementCapabilities::getMaxElementNameLen(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_ELEMENT_NAME_LEN, getMaxElementNameLen());
	return true;
}

Uint16 UNIX_AccountManagementCapabilities::getMaxElementNameLen() const
{
	return _maxElementNameLen;
}

void UNIX_AccountManagementCapabilities::setMaxElementNameLen(Uint16 &value)
{
	_maxElementNameLen = value;
}

Boolean UNIX_AccountManagementCapabilities::getRequestedStatesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATES_SUPPORTED, getRequestedStatesSupported());
	return true;
}

Array<Uint16> UNIX_AccountManagementCapabilities::getRequestedStatesSupported() const
{
	return _requestedStatesSupported;
}

void UNIX_AccountManagementCapabilities::setRequestedStatesSupported(Array<Uint16> &value)
{
	_requestedStatesSupported = value;
}

Boolean UNIX_AccountManagementCapabilities::getElementNameMask(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME_MASK, getElementNameMask());
	return true;
}

String UNIX_AccountManagementCapabilities::getElementNameMask() const
{
	return _elementNameMask;
}

void UNIX_AccountManagementCapabilities::setElementNameMask(String &value)
{
	_elementNameMask = value;
}

Boolean UNIX_AccountManagementCapabilities::getStateAwareness(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATE_AWARENESS, getStateAwareness());
	return true;
}

Array<Uint16> UNIX_AccountManagementCapabilities::getStateAwareness() const
{
	return _stateAwareness;
}

void UNIX_AccountManagementCapabilities::setStateAwareness(Array<Uint16> &value)
{
	_stateAwareness = value;
}

Boolean UNIX_AccountManagementCapabilities::getOperationsSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONS_SUPPORTED, getOperationsSupported());
	return true;
}

Array<Uint16> UNIX_AccountManagementCapabilities::getOperationsSupported() const
{
	return _operationsSupported;
}

void UNIX_AccountManagementCapabilities::setOperationsSupported(Array<Uint16> &value)
{
	_operationsSupported = value;
}

Boolean UNIX_AccountManagementCapabilities::getOtherSupportedUserPasswordEncryptionAlgorithms(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SUPPORTED_USER_PASSWORD_ENCRYPTION_ALGORITHMS, getOtherSupportedUserPasswordEncryptionAlgorithms());
	return true;
}

Array<String> UNIX_AccountManagementCapabilities::getOtherSupportedUserPasswordEncryptionAlgorithms() const
{
	return _otherSupportedUserPasswordEncryptionAlgorithms;
}

void UNIX_AccountManagementCapabilities::setOtherSupportedUserPasswordEncryptionAlgorithms(Array<String> &value)
{
	_otherSupportedUserPasswordEncryptionAlgorithms = value;
}

Boolean UNIX_AccountManagementCapabilities::getSupportedUserPasswordEncryptionAlgorithms(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_USER_PASSWORD_ENCRYPTION_ALGORITHMS, getSupportedUserPasswordEncryptionAlgorithms());
	return true;
}

Array<Uint16> UNIX_AccountManagementCapabilities::getSupportedUserPasswordEncryptionAlgorithms() const
{
	return _supportedUserPasswordEncryptionAlgorithms;
}

void UNIX_AccountManagementCapabilities::setSupportedUserPasswordEncryptionAlgorithms(Array<Uint16> &value)
{
	_supportedUserPasswordEncryptionAlgorithms = value;
}

Boolean UNIX_AccountManagementCapabilities::getUserPasswordEncryptionSalt(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_PASSWORD_ENCRYPTION_SALT, getUserPasswordEncryptionSalt());
	return true;
}

String UNIX_AccountManagementCapabilities::getUserPasswordEncryptionSalt() const
{
	return _userPasswordEncryptionSalt;
}

void UNIX_AccountManagementCapabilities::setUserPasswordEncryptionSalt(String &value)
{
	_userPasswordEncryptionSalt = value;
}

Boolean UNIX_AccountManagementCapabilities::getMaximumAccountsSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAXIMUM_ACCOUNTS_SUPPORTED, getMaximumAccountsSupported());
	return true;
}

Uint16 UNIX_AccountManagementCapabilities::getMaximumAccountsSupported() const
{
	return _maximumAccountsSupported;
}

void UNIX_AccountManagementCapabilities::setMaximumAccountsSupported(Uint16 &value)
{
	_maximumAccountsSupported = value;
}

Boolean UNIX_AccountManagementCapabilities::getSupportedUserPasswordEncodings(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_USER_PASSWORD_ENCODINGS, getSupportedUserPasswordEncodings());
	return true;
}

Array<Uint32> UNIX_AccountManagementCapabilities::getSupportedUserPasswordEncodings() const
{
	return _supportedUserPasswordEncodings;
}

void UNIX_AccountManagementCapabilities::setSupportedUserPasswordEncodings(Array<Uint32> &value)
{
	_supportedUserPasswordEncodings = value;
}


void UNIX_AccountManagementCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("AccountManagementCapabilities");
	_generation = Uint64(0);
	_elementNameEditSupported = Boolean(false);
	_maxElementNameLen = Uint16(0);
	_requestedStatesSupported.clear();
	_elementNameMask = String ("");
	_stateAwareness.clear();
	_operationsSupported.clear();
	_otherSupportedUserPasswordEncryptionAlgorithms.clear();
	_supportedUserPasswordEncryptionAlgorithms.clear();
	_userPasswordEncryptionSalt = String ("");
	_maximumAccountsSupported = Uint16(0);
	_supportedUserPasswordEncodings.clear();

}

Boolean UNIX_AccountManagementCapabilities::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "OperationsSupported"))
			{
				Array<Uint16> operationsSupportedValue;
				property.getValue().get(operationsSupportedValue);
				setOperationsSupported(operationsSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "OtherSupportedUserPasswordEncryptionAlgorithms"))
			{
				Array<String> otherSupportedUserPasswordEncryptionAlgorithmsValue;
				property.getValue().get(otherSupportedUserPasswordEncryptionAlgorithmsValue);
				setOtherSupportedUserPasswordEncryptionAlgorithms(otherSupportedUserPasswordEncryptionAlgorithmsValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedUserPasswordEncryptionAlgorithms"))
			{
				Array<Uint16> supportedUserPasswordEncryptionAlgorithmsValue;
				property.getValue().get(supportedUserPasswordEncryptionAlgorithmsValue);
				setSupportedUserPasswordEncryptionAlgorithms(supportedUserPasswordEncryptionAlgorithmsValue);
			}
			else if (String::equal(property.getName().getString(), "UserPasswordEncryptionSalt"))
			{
				String userPasswordEncryptionSaltValue;
				property.getValue().get(userPasswordEncryptionSaltValue);
				setUserPasswordEncryptionSalt(userPasswordEncryptionSaltValue);
			}
			else if (String::equal(property.getName().getString(), "MaximumAccountsSupported"))
			{
				Uint16 maximumAccountsSupportedValue;
				property.getValue().get(maximumAccountsSupportedValue);
				setMaximumAccountsSupported(maximumAccountsSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedUserPasswordEncodings"))
			{
				Array<Uint32> supportedUserPasswordEncodingsValue;
				property.getValue().get(supportedUserPasswordEncodingsValue);
				setSupportedUserPasswordEncodings(supportedUserPasswordEncodingsValue);
			}
	}
	return true;
}

Uint16 UNIX_AccountManagementCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}


Boolean UNIX_AccountManagementCapabilities::initialize()
{
	return false;
}

Boolean UNIX_AccountManagementCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("AccountManagementCapabilities");
	_generation = Uint64(0);
	_elementNameEditSupported = Boolean(false);
	_maxElementNameLen = Uint16(0);
	_requestedStatesSupported.clear();
	_elementNameMask = String ("");
	_stateAwareness.clear();
	_operationsSupported.clear();
	_otherSupportedUserPasswordEncryptionAlgorithms.clear();
	_supportedUserPasswordEncryptionAlgorithms.clear();
	_userPasswordEncryptionSalt = String ("");
	_maximumAccountsSupported = Uint16(0);
	_supportedUserPasswordEncodings.clear();
	
	return false;
}

Boolean UNIX_AccountManagementCapabilities::finalize()
{
	return false;
}


Boolean UNIX_AccountManagementCapabilities::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_AccountManagementCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AccountManagementCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AccountManagementCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AccountManagementCapabilities::validateInstance()
{
	return true;
}

