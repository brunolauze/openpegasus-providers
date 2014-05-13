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


UNIX_iSCSICapabilities::UNIX_iSCSICapabilities(void)
{
}

UNIX_iSCSICapabilities::~UNIX_iSCSICapabilities(void)
{
}

Boolean UNIX_iSCSICapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_iSCSICapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_iSCSICapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_iSCSICapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_iSCSICapabilities::getCaption() const
{
	return _caption;
}

void UNIX_iSCSICapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_iSCSICapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_iSCSICapabilities::getDescription() const
{
	return _description;
}

void UNIX_iSCSICapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_iSCSICapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_iSCSICapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_iSCSICapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_iSCSICapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_iSCSICapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_iSCSICapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_iSCSICapabilities::getMinimumSpecificationVersionSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MINIMUM_SPECIFICATION_VERSION_SUPPORTED, getMinimumSpecificationVersionSupported());
	return true;
}

Uint8 UNIX_iSCSICapabilities::getMinimumSpecificationVersionSupported() const
{
	return _minimumSpecificationVersionSupported;
}

void UNIX_iSCSICapabilities::setMinimumSpecificationVersionSupported(Uint8 &value)
{
	_minimumSpecificationVersionSupported = value;
}

Boolean UNIX_iSCSICapabilities::getMaximumSpecificationVersionSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAXIMUM_SPECIFICATION_VERSION_SUPPORTED, getMaximumSpecificationVersionSupported());
	return true;
}

Uint8 UNIX_iSCSICapabilities::getMaximumSpecificationVersionSupported() const
{
	return _maximumSpecificationVersionSupported;
}

void UNIX_iSCSICapabilities::setMaximumSpecificationVersionSupported(Uint8 &value)
{
	_maximumSpecificationVersionSupported = value;
}

Boolean UNIX_iSCSICapabilities::getAuthenticationMethodsSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTHENTICATION_METHODS_SUPPORTED, getAuthenticationMethodsSupported());
	return true;
}

Array<Uint16> UNIX_iSCSICapabilities::getAuthenticationMethodsSupported() const
{
	return _authenticationMethodsSupported;
}

void UNIX_iSCSICapabilities::setAuthenticationMethodsSupported(Array<Uint16> &value)
{
	_authenticationMethodsSupported = value;
}

Boolean UNIX_iSCSICapabilities::getOtherSupportedFeatures(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SUPPORTED_FEATURES, getOtherSupportedFeatures());
	return true;
}

Array<String> UNIX_iSCSICapabilities::getOtherSupportedFeatures() const
{
	return _otherSupportedFeatures;
}

void UNIX_iSCSICapabilities::setOtherSupportedFeatures(Array<String> &value)
{
	_otherSupportedFeatures = value;
}

Boolean UNIX_iSCSICapabilities::getSupportedFeatures(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_FEATURES, getSupportedFeatures());
	return true;
}

Array<Uint16> UNIX_iSCSICapabilities::getSupportedFeatures() const
{
	return _supportedFeatures;
}

void UNIX_iSCSICapabilities::setSupportedFeatures(Array<Uint16> &value)
{
	_supportedFeatures = value;
}


void UNIX_iSCSICapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("iSCSICapabilities");
	_generation = Uint64(0);
	_minimumSpecificationVersionSupported = Uint8(0);
	_maximumSpecificationVersionSupported = Uint8(0);
	_authenticationMethodsSupported.clear();
	_otherSupportedFeatures.clear();
	_supportedFeatures.clear();

}

Boolean UNIX_iSCSICapabilities::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "MinimumSpecificationVersionSupported"))
			{
				Uint8 minimumSpecificationVersionSupportedValue;
				property.getValue().get(minimumSpecificationVersionSupportedValue);
				setMinimumSpecificationVersionSupported(minimumSpecificationVersionSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "MaximumSpecificationVersionSupported"))
			{
				Uint8 maximumSpecificationVersionSupportedValue;
				property.getValue().get(maximumSpecificationVersionSupportedValue);
				setMaximumSpecificationVersionSupported(maximumSpecificationVersionSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "AuthenticationMethodsSupported"))
			{
				Array<Uint16> authenticationMethodsSupportedValue;
				property.getValue().get(authenticationMethodsSupportedValue);
				setAuthenticationMethodsSupported(authenticationMethodsSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "OtherSupportedFeatures"))
			{
				Array<String> otherSupportedFeaturesValue;
				property.getValue().get(otherSupportedFeaturesValue);
				setOtherSupportedFeatures(otherSupportedFeaturesValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedFeatures"))
			{
				Array<Uint16> supportedFeaturesValue;
				property.getValue().get(supportedFeaturesValue);
				setSupportedFeatures(supportedFeaturesValue);
			}
	}
	return true;
}

Uint16 UNIX_iSCSICapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}


Boolean UNIX_iSCSICapabilities::initialize()
{
	return false;
}

Boolean UNIX_iSCSICapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("iSCSICapabilities");
	_generation = Uint64(0);
	_minimumSpecificationVersionSupported = Uint8(0);
	_maximumSpecificationVersionSupported = Uint8(0);
	_authenticationMethodsSupported.clear();
	_otherSupportedFeatures.clear();
	_supportedFeatures.clear();
	
	return false;
}

Boolean UNIX_iSCSICapabilities::finalize()
{
	return false;
}


Boolean UNIX_iSCSICapabilities::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_iSCSICapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_iSCSICapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_iSCSICapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_iSCSICapabilities::validateInstance()
{
	return true;
}

