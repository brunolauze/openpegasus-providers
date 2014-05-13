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


UNIX_ProviderCapabilities::UNIX_ProviderCapabilities(void)
{
}

UNIX_ProviderCapabilities::~UNIX_ProviderCapabilities(void)
{
}

Boolean UNIX_ProviderCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_ProviderCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_ProviderCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_ProviderCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_ProviderCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_ProviderCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_ProviderCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_ProviderCapabilities::getDescription() const
{
	return _description;
}

void UNIX_ProviderCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_ProviderCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_ProviderCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_ProviderCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_ProviderCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_ProviderCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_ProviderCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_ProviderCapabilities::getClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASS_NAME, getClassName());
	return true;
}

String UNIX_ProviderCapabilities::getClassName() const
{
	return _className;
}

void UNIX_ProviderCapabilities::setClassName(String &value)
{
	_className = value;
}

Boolean UNIX_ProviderCapabilities::getProviderTypes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROVIDER_TYPES, getProviderTypes());
	return true;
}

Array<Uint16> UNIX_ProviderCapabilities::getProviderTypes() const
{
	return _providerTypes;
}

void UNIX_ProviderCapabilities::setProviderTypes(Array<Uint16> &value)
{
	_providerTypes = value;
}

Boolean UNIX_ProviderCapabilities::getOtherProviderTypes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_PROVIDER_TYPES, getOtherProviderTypes());
	return true;
}

Array<String> UNIX_ProviderCapabilities::getOtherProviderTypes() const
{
	return _otherProviderTypes;
}

void UNIX_ProviderCapabilities::setOtherProviderTypes(Array<String> &value)
{
	_otherProviderTypes = value;
}

Boolean UNIX_ProviderCapabilities::getSupportedProperties(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_PROPERTIES, getSupportedProperties());
	return true;
}

Array<String> UNIX_ProviderCapabilities::getSupportedProperties() const
{
	return _supportedProperties;
}

void UNIX_ProviderCapabilities::setSupportedProperties(Array<String> &value)
{
	_supportedProperties = value;
}

Boolean UNIX_ProviderCapabilities::getSupportedMethods(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_METHODS, getSupportedMethods());
	return true;
}

Array<String> UNIX_ProviderCapabilities::getSupportedMethods() const
{
	return _supportedMethods;
}

void UNIX_ProviderCapabilities::setSupportedMethods(Array<String> &value)
{
	_supportedMethods = value;
}


void UNIX_ProviderCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("ProviderCapabilities");
	_generation = Uint64(0);
	_className = String ("");
	_providerTypes.clear();
	_otherProviderTypes.clear();
	_supportedProperties.clear();
	_supportedMethods.clear();

}

Boolean UNIX_ProviderCapabilities::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "ClassName"))
			{
				String classNameValue;
				property.getValue().get(classNameValue);
				setClassName(classNameValue);
			}
			else if (String::equal(property.getName().getString(), "ProviderTypes"))
			{
				Array<Uint16> providerTypesValue;
				property.getValue().get(providerTypesValue);
				setProviderTypes(providerTypesValue);
			}
			else if (String::equal(property.getName().getString(), "OtherProviderTypes"))
			{
				Array<String> otherProviderTypesValue;
				property.getValue().get(otherProviderTypesValue);
				setOtherProviderTypes(otherProviderTypesValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedProperties"))
			{
				Array<String> supportedPropertiesValue;
				property.getValue().get(supportedPropertiesValue);
				setSupportedProperties(supportedPropertiesValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedMethods"))
			{
				Array<String> supportedMethodsValue;
				property.getValue().get(supportedMethodsValue);
				setSupportedMethods(supportedMethodsValue);
			}
	}
	return true;
}

Uint16 UNIX_ProviderCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}


Boolean UNIX_ProviderCapabilities::initialize()
{
	return false;
}

Boolean UNIX_ProviderCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("ProviderCapabilities");
	_generation = Uint64(0);
	_className = String ("");
	_providerTypes.clear();
	_otherProviderTypes.clear();
	_supportedProperties.clear();
	_supportedMethods.clear();
	
	return false;
}

Boolean UNIX_ProviderCapabilities::finalize()
{
	return false;
}


Boolean UNIX_ProviderCapabilities::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_ProviderCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ProviderCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ProviderCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ProviderCapabilities::validateInstance()
{
	return true;
}

