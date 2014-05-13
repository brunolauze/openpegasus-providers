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


UNIX_SecuritySensitivity::UNIX_SecuritySensitivity(void)
{
}

UNIX_SecuritySensitivity::~UNIX_SecuritySensitivity(void)
{
}

Boolean UNIX_SecuritySensitivity::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_SecuritySensitivity::getInstanceID() const
{
	return _instanceID;
}

void UNIX_SecuritySensitivity::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_SecuritySensitivity::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_SecuritySensitivity::getCaption() const
{
	return _caption;
}

void UNIX_SecuritySensitivity::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_SecuritySensitivity::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_SecuritySensitivity::getDescription() const
{
	return _description;
}

void UNIX_SecuritySensitivity::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_SecuritySensitivity::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_SecuritySensitivity::getElementName() const
{
	return _elementName;
}

void UNIX_SecuritySensitivity::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_SecuritySensitivity::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_SecuritySensitivity::getGeneration() const
{
	return _generation;
}

void UNIX_SecuritySensitivity::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_SecuritySensitivity::getSecurityLevel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SECURITY_LEVEL, getSecurityLevel());
	return true;
}

String UNIX_SecuritySensitivity::getSecurityLevel() const
{
	return _securityLevel;
}

void UNIX_SecuritySensitivity::setSecurityLevel(String &value)
{
	_securityLevel = value;
}

Boolean UNIX_SecuritySensitivity::getSecurityCategories(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SECURITY_CATEGORIES, getSecurityCategories());
	return true;
}

Array<String> UNIX_SecuritySensitivity::getSecurityCategories() const
{
	return _securityCategories;
}

void UNIX_SecuritySensitivity::setSecurityCategories(Array<String> &value)
{
	_securityCategories = value;
}

Boolean UNIX_SecuritySensitivity::getLabelExpiration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LABEL_EXPIRATION, getLabelExpiration());
	return true;
}

CIMDateTime UNIX_SecuritySensitivity::getLabelExpiration() const
{
	return _labelExpiration;
}

void UNIX_SecuritySensitivity::setLabelExpiration(CIMDateTime &value)
{
	_labelExpiration = value;
}


void UNIX_SecuritySensitivity::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("SecuritySensitivity");
	_generation = Uint64(0);
	_securityLevel = String ("");
	_securityCategories.clear();
	_labelExpiration = CIMHelper::getCurrentTime();

}

Boolean UNIX_SecuritySensitivity::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "SecurityLevel"))
			{
				String securityLevelValue;
				property.getValue().get(securityLevelValue);
				setSecurityLevel(securityLevelValue);
			}
			else if (String::equal(property.getName().getString(), "SecurityCategories"))
			{
				Array<String> securityCategoriesValue;
				property.getValue().get(securityCategoriesValue);
				setSecurityCategories(securityCategoriesValue);
			}
			else if (String::equal(property.getName().getString(), "LabelExpiration"))
			{
				CIMDateTime labelExpirationValue;
				property.getValue().get(labelExpirationValue);
				setLabelExpiration(labelExpirationValue);
			}
	}
	return true;
}


Boolean UNIX_SecuritySensitivity::initialize()
{
	return false;
}

Boolean UNIX_SecuritySensitivity::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("SecuritySensitivity");
	_generation = Uint64(0);
	_securityLevel = String ("");
	_securityCategories.clear();
	_labelExpiration = CIMHelper::getCurrentTime();
	
	return false;
}

Boolean UNIX_SecuritySensitivity::finalize()
{
	return false;
}


Boolean UNIX_SecuritySensitivity::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_SecuritySensitivity::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SecuritySensitivity::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SecuritySensitivity::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SecuritySensitivity::validateInstance()
{
	return true;
}

