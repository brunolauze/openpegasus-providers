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


UNIX_FingerprintMatchingServiceCapabilities::UNIX_FingerprintMatchingServiceCapabilities(void)
{
}

UNIX_FingerprintMatchingServiceCapabilities::~UNIX_FingerprintMatchingServiceCapabilities(void)
{
}

Boolean UNIX_FingerprintMatchingServiceCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_FingerprintMatchingServiceCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_FingerprintMatchingServiceCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_FingerprintMatchingServiceCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_FingerprintMatchingServiceCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_FingerprintMatchingServiceCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_FingerprintMatchingServiceCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_FingerprintMatchingServiceCapabilities::getDescription() const
{
	return _description;
}

void UNIX_FingerprintMatchingServiceCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_FingerprintMatchingServiceCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_FingerprintMatchingServiceCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_FingerprintMatchingServiceCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_FingerprintMatchingServiceCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_FingerprintMatchingServiceCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_FingerprintMatchingServiceCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_FingerprintMatchingServiceCapabilities::getElementNameEditSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME_EDIT_SUPPORTED, getElementNameEditSupported());
	return true;
}

Boolean UNIX_FingerprintMatchingServiceCapabilities::getElementNameEditSupported() const
{
	return _elementNameEditSupported;
}

void UNIX_FingerprintMatchingServiceCapabilities::setElementNameEditSupported(Boolean &value)
{
	_elementNameEditSupported = value;
}

Boolean UNIX_FingerprintMatchingServiceCapabilities::getMaxElementNameLen(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_ELEMENT_NAME_LEN, getMaxElementNameLen());
	return true;
}

Uint16 UNIX_FingerprintMatchingServiceCapabilities::getMaxElementNameLen() const
{
	return _maxElementNameLen;
}

void UNIX_FingerprintMatchingServiceCapabilities::setMaxElementNameLen(Uint16 &value)
{
	_maxElementNameLen = value;
}

Boolean UNIX_FingerprintMatchingServiceCapabilities::getRequestedStatesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATES_SUPPORTED, getRequestedStatesSupported());
	return true;
}

Array<Uint16> UNIX_FingerprintMatchingServiceCapabilities::getRequestedStatesSupported() const
{
	return _requestedStatesSupported;
}

void UNIX_FingerprintMatchingServiceCapabilities::setRequestedStatesSupported(Array<Uint16> &value)
{
	_requestedStatesSupported = value;
}

Boolean UNIX_FingerprintMatchingServiceCapabilities::getElementNameMask(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME_MASK, getElementNameMask());
	return true;
}

String UNIX_FingerprintMatchingServiceCapabilities::getElementNameMask() const
{
	return _elementNameMask;
}

void UNIX_FingerprintMatchingServiceCapabilities::setElementNameMask(String &value)
{
	_elementNameMask = value;
}

Boolean UNIX_FingerprintMatchingServiceCapabilities::getStateAwareness(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATE_AWARENESS, getStateAwareness());
	return true;
}

Array<Uint16> UNIX_FingerprintMatchingServiceCapabilities::getStateAwareness() const
{
	return _stateAwareness;
}

void UNIX_FingerprintMatchingServiceCapabilities::setStateAwareness(Array<Uint16> &value)
{
	_stateAwareness = value;
}

Boolean UNIX_FingerprintMatchingServiceCapabilities::getCompressionAlgorithmsSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPRESSION_ALGORITHMS_SUPPORTED, getCompressionAlgorithmsSupported());
	return true;
}

Array<Uint16> UNIX_FingerprintMatchingServiceCapabilities::getCompressionAlgorithmsSupported() const
{
	return _compressionAlgorithmsSupported;
}

void UNIX_FingerprintMatchingServiceCapabilities::setCompressionAlgorithmsSupported(Array<Uint16> &value)
{
	_compressionAlgorithmsSupported = value;
}

Boolean UNIX_FingerprintMatchingServiceCapabilities::getTemplateFormatsSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TEMPLATE_FORMATS_SUPPORTED, getTemplateFormatsSupported());
	return true;
}

Array<Uint16> UNIX_FingerprintMatchingServiceCapabilities::getTemplateFormatsSupported() const
{
	return _templateFormatsSupported;
}

void UNIX_FingerprintMatchingServiceCapabilities::setTemplateFormatsSupported(Array<Uint16> &value)
{
	_templateFormatsSupported = value;
}

Boolean UNIX_FingerprintMatchingServiceCapabilities::getOtherTemplateFormats(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TEMPLATE_FORMATS, getOtherTemplateFormats());
	return true;
}

Array<String> UNIX_FingerprintMatchingServiceCapabilities::getOtherTemplateFormats() const
{
	return _otherTemplateFormats;
}

void UNIX_FingerprintMatchingServiceCapabilities::setOtherTemplateFormats(Array<String> &value)
{
	_otherTemplateFormats = value;
}

Boolean UNIX_FingerprintMatchingServiceCapabilities::getMatchingAlgorithmsSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MATCHING_ALGORITHMS_SUPPORTED, getMatchingAlgorithmsSupported());
	return true;
}

Array<String> UNIX_FingerprintMatchingServiceCapabilities::getMatchingAlgorithmsSupported() const
{
	return _matchingAlgorithmsSupported;
}

void UNIX_FingerprintMatchingServiceCapabilities::setMatchingAlgorithmsSupported(Array<String> &value)
{
	_matchingAlgorithmsSupported = value;
}


void UNIX_FingerprintMatchingServiceCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("FingerprintMatchingServiceCapabilities");
	_generation = Uint64(0);
	_elementNameEditSupported = Boolean(false);
	_maxElementNameLen = Uint16(0);
	_requestedStatesSupported.clear();
	_elementNameMask = String ("");
	_stateAwareness.clear();
	_compressionAlgorithmsSupported.clear();
	_templateFormatsSupported.clear();
	_otherTemplateFormats.clear();
	_matchingAlgorithmsSupported.clear();

}

Boolean UNIX_FingerprintMatchingServiceCapabilities::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "CompressionAlgorithmsSupported"))
			{
				Array<Uint16> compressionAlgorithmsSupportedValue;
				property.getValue().get(compressionAlgorithmsSupportedValue);
				setCompressionAlgorithmsSupported(compressionAlgorithmsSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "TemplateFormatsSupported"))
			{
				Array<Uint16> templateFormatsSupportedValue;
				property.getValue().get(templateFormatsSupportedValue);
				setTemplateFormatsSupported(templateFormatsSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "OtherTemplateFormats"))
			{
				Array<String> otherTemplateFormatsValue;
				property.getValue().get(otherTemplateFormatsValue);
				setOtherTemplateFormats(otherTemplateFormatsValue);
			}
			else if (String::equal(property.getName().getString(), "MatchingAlgorithmsSupported"))
			{
				Array<String> matchingAlgorithmsSupportedValue;
				property.getValue().get(matchingAlgorithmsSupportedValue);
				setMatchingAlgorithmsSupported(matchingAlgorithmsSupportedValue);
			}
	}
	return true;
}

Uint16 UNIX_FingerprintMatchingServiceCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}


Boolean UNIX_FingerprintMatchingServiceCapabilities::initialize()
{
	return false;
}

Boolean UNIX_FingerprintMatchingServiceCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("FingerprintMatchingServiceCapabilities");
	_generation = Uint64(0);
	_elementNameEditSupported = Boolean(false);
	_maxElementNameLen = Uint16(0);
	_requestedStatesSupported.clear();
	_elementNameMask = String ("");
	_stateAwareness.clear();
	_compressionAlgorithmsSupported.clear();
	_templateFormatsSupported.clear();
	_otherTemplateFormats.clear();
	_matchingAlgorithmsSupported.clear();
	
	return false;
}

Boolean UNIX_FingerprintMatchingServiceCapabilities::finalize()
{
	return false;
}


Boolean UNIX_FingerprintMatchingServiceCapabilities::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_FingerprintMatchingServiceCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FingerprintMatchingServiceCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FingerprintMatchingServiceCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FingerprintMatchingServiceCapabilities::validateInstance()
{
	return true;
}

