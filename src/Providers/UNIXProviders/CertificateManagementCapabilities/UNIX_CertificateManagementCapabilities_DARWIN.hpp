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


UNIX_CertificateManagementCapabilities::UNIX_CertificateManagementCapabilities(void)
{
}

UNIX_CertificateManagementCapabilities::~UNIX_CertificateManagementCapabilities(void)
{
}

Boolean UNIX_CertificateManagementCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_CertificateManagementCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_CertificateManagementCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_CertificateManagementCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_CertificateManagementCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_CertificateManagementCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_CertificateManagementCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_CertificateManagementCapabilities::getDescription() const
{
	return _description;
}

void UNIX_CertificateManagementCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_CertificateManagementCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_CertificateManagementCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_CertificateManagementCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_CertificateManagementCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_CertificateManagementCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_CertificateManagementCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_CertificateManagementCapabilities::getElementNameEditSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME_EDIT_SUPPORTED, getElementNameEditSupported());
	return true;
}

Boolean UNIX_CertificateManagementCapabilities::getElementNameEditSupported() const
{
	return _elementNameEditSupported;
}

void UNIX_CertificateManagementCapabilities::setElementNameEditSupported(Boolean &value)
{
	_elementNameEditSupported = value;
}

Boolean UNIX_CertificateManagementCapabilities::getMaxElementNameLen(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_ELEMENT_NAME_LEN, getMaxElementNameLen());
	return true;
}

Uint16 UNIX_CertificateManagementCapabilities::getMaxElementNameLen() const
{
	return _maxElementNameLen;
}

void UNIX_CertificateManagementCapabilities::setMaxElementNameLen(Uint16 &value)
{
	_maxElementNameLen = value;
}

Boolean UNIX_CertificateManagementCapabilities::getRequestedStatesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATES_SUPPORTED, getRequestedStatesSupported());
	return true;
}

Array<Uint16> UNIX_CertificateManagementCapabilities::getRequestedStatesSupported() const
{
	return _requestedStatesSupported;
}

void UNIX_CertificateManagementCapabilities::setRequestedStatesSupported(Array<Uint16> &value)
{
	_requestedStatesSupported = value;
}

Boolean UNIX_CertificateManagementCapabilities::getElementNameMask(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME_MASK, getElementNameMask());
	return true;
}

String UNIX_CertificateManagementCapabilities::getElementNameMask() const
{
	return _elementNameMask;
}

void UNIX_CertificateManagementCapabilities::setElementNameMask(String &value)
{
	_elementNameMask = value;
}

Boolean UNIX_CertificateManagementCapabilities::getStateAwareness(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATE_AWARENESS, getStateAwareness());
	return true;
}

Array<Uint16> UNIX_CertificateManagementCapabilities::getStateAwareness() const
{
	return _stateAwareness;
}

void UNIX_CertificateManagementCapabilities::setStateAwareness(Array<Uint16> &value)
{
	_stateAwareness = value;
}

Boolean UNIX_CertificateManagementCapabilities::getSupportedMethods(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_METHODS, getSupportedMethods());
	return true;
}

Array<Uint16> UNIX_CertificateManagementCapabilities::getSupportedMethods() const
{
	return _supportedMethods;
}

void UNIX_CertificateManagementCapabilities::setSupportedMethods(Array<Uint16> &value)
{
	_supportedMethods = value;
}

Boolean UNIX_CertificateManagementCapabilities::getCumulativePrivilegeMethodology(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CUMULATIVE_PRIVILEGE_METHODOLOGY, getCumulativePrivilegeMethodology());
	return true;
}

Uint16 UNIX_CertificateManagementCapabilities::getCumulativePrivilegeMethodology() const
{
	return _cumulativePrivilegeMethodology;
}

void UNIX_CertificateManagementCapabilities::setCumulativePrivilegeMethodology(Uint16 &value)
{
	_cumulativePrivilegeMethodology = value;
}

Boolean UNIX_CertificateManagementCapabilities::getKeyAlgorithmSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_KEY_ALGORITHM_SUPPORTED, getKeyAlgorithmSupported());
	return true;
}

Array<Uint16> UNIX_CertificateManagementCapabilities::getKeyAlgorithmSupported() const
{
	return _keyAlgorithmSupported;
}

void UNIX_CertificateManagementCapabilities::setKeyAlgorithmSupported(Array<Uint16> &value)
{
	_keyAlgorithmSupported = value;
}

Boolean UNIX_CertificateManagementCapabilities::getInputFormatsSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INPUT_FORMATS_SUPPORTED, getInputFormatsSupported());
	return true;
}

Array<Uint16> UNIX_CertificateManagementCapabilities::getInputFormatsSupported() const
{
	return _inputFormatsSupported;
}

void UNIX_CertificateManagementCapabilities::setInputFormatsSupported(Array<Uint16> &value)
{
	_inputFormatsSupported = value;
}

Boolean UNIX_CertificateManagementCapabilities::getOutputFormatsSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OUTPUT_FORMATS_SUPPORTED, getOutputFormatsSupported());
	return true;
}

Array<Uint16> UNIX_CertificateManagementCapabilities::getOutputFormatsSupported() const
{
	return _outputFormatsSupported;
}

void UNIX_CertificateManagementCapabilities::setOutputFormatsSupported(Array<Uint16> &value)
{
	_outputFormatsSupported = value;
}

Boolean UNIX_CertificateManagementCapabilities::getAsymmetricKeyGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ASYMMETRIC_KEY_GENERATION, getAsymmetricKeyGeneration());
	return true;
}

Boolean UNIX_CertificateManagementCapabilities::getAsymmetricKeyGeneration() const
{
	return _asymmetricKeyGeneration;
}

void UNIX_CertificateManagementCapabilities::setAsymmetricKeyGeneration(Boolean &value)
{
	_asymmetricKeyGeneration = value;
}

Boolean UNIX_CertificateManagementCapabilities::getSupportedSignatureAlgorithms(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_SIGNATURE_ALGORITHMS, getSupportedSignatureAlgorithms());
	return true;
}

Array<Uint16> UNIX_CertificateManagementCapabilities::getSupportedSignatureAlgorithms() const
{
	return _supportedSignatureAlgorithms;
}

void UNIX_CertificateManagementCapabilities::setSupportedSignatureAlgorithms(Array<Uint16> &value)
{
	_supportedSignatureAlgorithms = value;
}


void UNIX_CertificateManagementCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("CertificateManagementCapabilities");
	_generation = Uint64(0);
	_elementNameEditSupported = Boolean(false);
	_maxElementNameLen = Uint16(0);
	_requestedStatesSupported.clear();
	_elementNameMask = String ("");
	_stateAwareness.clear();
	_supportedMethods.clear();
	_cumulativePrivilegeMethodology = Uint16(0);
	_keyAlgorithmSupported.clear();
	_inputFormatsSupported.clear();
	_outputFormatsSupported.clear();
	_asymmetricKeyGeneration = Boolean(false);
	_supportedSignatureAlgorithms.clear();

}

Boolean UNIX_CertificateManagementCapabilities::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "KeyAlgorithmSupported"))
			{
				Array<Uint16> keyAlgorithmSupportedValue;
				property.getValue().get(keyAlgorithmSupportedValue);
				setKeyAlgorithmSupported(keyAlgorithmSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "InputFormatsSupported"))
			{
				Array<Uint16> inputFormatsSupportedValue;
				property.getValue().get(inputFormatsSupportedValue);
				setInputFormatsSupported(inputFormatsSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "OutputFormatsSupported"))
			{
				Array<Uint16> outputFormatsSupportedValue;
				property.getValue().get(outputFormatsSupportedValue);
				setOutputFormatsSupported(outputFormatsSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "AsymmetricKeyGeneration"))
			{
				Boolean asymmetricKeyGenerationValue;
				property.getValue().get(asymmetricKeyGenerationValue);
				setAsymmetricKeyGeneration(asymmetricKeyGenerationValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedSignatureAlgorithms"))
			{
				Array<Uint16> supportedSignatureAlgorithmsValue;
				property.getValue().get(supportedSignatureAlgorithmsValue);
				setSupportedSignatureAlgorithms(supportedSignatureAlgorithmsValue);
			}
	}
	return true;
}

Uint16 UNIX_CertificateManagementCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}


Boolean UNIX_CertificateManagementCapabilities::initialize()
{
	return false;
}

Boolean UNIX_CertificateManagementCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("CertificateManagementCapabilities");
	_generation = Uint64(0);
	_elementNameEditSupported = Boolean(false);
	_maxElementNameLen = Uint16(0);
	_requestedStatesSupported.clear();
	_elementNameMask = String ("");
	_stateAwareness.clear();
	_supportedMethods.clear();
	_cumulativePrivilegeMethodology = Uint16(0);
	_keyAlgorithmSupported.clear();
	_inputFormatsSupported.clear();
	_outputFormatsSupported.clear();
	_asymmetricKeyGeneration = Boolean(false);
	_supportedSignatureAlgorithms.clear();
	
	return false;
}

Boolean UNIX_CertificateManagementCapabilities::finalize()
{
	return false;
}


Boolean UNIX_CertificateManagementCapabilities::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_CertificateManagementCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_CertificateManagementCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_CertificateManagementCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_CertificateManagementCapabilities::validateInstance()
{
	return true;
}

