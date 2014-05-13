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


UNIX_FingerprintTemplate::UNIX_FingerprintTemplate(void)
{
}

UNIX_FingerprintTemplate::~UNIX_FingerprintTemplate(void)
{
}

Boolean UNIX_FingerprintTemplate::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_FingerprintTemplate::getInstanceID() const
{
	return _instanceID;
}

void UNIX_FingerprintTemplate::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_FingerprintTemplate::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_FingerprintTemplate::getCaption() const
{
	return _caption;
}

void UNIX_FingerprintTemplate::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_FingerprintTemplate::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_FingerprintTemplate::getDescription() const
{
	return _description;
}

void UNIX_FingerprintTemplate::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_FingerprintTemplate::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_FingerprintTemplate::getElementName() const
{
	return _elementName;
}

void UNIX_FingerprintTemplate::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_FingerprintTemplate::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_FingerprintTemplate::getGeneration() const
{
	return _generation;
}

void UNIX_FingerprintTemplate::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_FingerprintTemplate::getIssued(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ISSUED, getIssued());
	return true;
}

CIMDateTime UNIX_FingerprintTemplate::getIssued() const
{
	return _issued;
}

void UNIX_FingerprintTemplate::setIssued(CIMDateTime &value)
{
	_issued = value;
}

Boolean UNIX_FingerprintTemplate::getExpires(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXPIRES, getExpires());
	return true;
}

CIMDateTime UNIX_FingerprintTemplate::getExpires() const
{
	return _expires;
}

void UNIX_FingerprintTemplate::setExpires(CIMDateTime &value)
{
	_expires = value;
}

Boolean UNIX_FingerprintTemplate::getValidFrom(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VALID_FROM, getValidFrom());
	return true;
}

CIMDateTime UNIX_FingerprintTemplate::getValidFrom() const
{
	return _validFrom;
}

void UNIX_FingerprintTemplate::setValidFrom(CIMDateTime &value)
{
	_validFrom = value;
}

Boolean UNIX_FingerprintTemplate::getTemplate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TEMPLATE, getTemplate());
	return true;
}

Array<Uint8> UNIX_FingerprintTemplate::getTemplate() const
{
	return _template;
}

void UNIX_FingerprintTemplate::setTemplate(Array<Uint8> &value)
{
	_template = value;
}

Boolean UNIX_FingerprintTemplate::getTemplateFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TEMPLATE_FORMAT, getTemplateFormat());
	return true;
}

Uint16 UNIX_FingerprintTemplate::getTemplateFormat() const
{
	return _templateFormat;
}

void UNIX_FingerprintTemplate::setTemplateFormat(Uint16 &value)
{
	_templateFormat = value;
}

Boolean UNIX_FingerprintTemplate::getOtherTemplateFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TEMPLATE_FORMAT, getOtherTemplateFormat());
	return true;
}

String UNIX_FingerprintTemplate::getOtherTemplateFormat() const
{
	return _otherTemplateFormat;
}

void UNIX_FingerprintTemplate::setOtherTemplateFormat(String &value)
{
	_otherTemplateFormat = value;
}


void UNIX_FingerprintTemplate::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("FingerprintTemplate");
	_generation = Uint64(0);
	_issued = CIMHelper::getCurrentTime();
	_expires = CIMHelper::getCurrentTime();
	_validFrom = CIMHelper::getCurrentTime();
	_template.clear();
	_templateFormat = Uint16(0);
	_otherTemplateFormat = String ("");

}

Boolean UNIX_FingerprintTemplate::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "Issued"))
			{
				CIMDateTime issuedValue;
				property.getValue().get(issuedValue);
				setIssued(issuedValue);
			}
			else if (String::equal(property.getName().getString(), "Expires"))
			{
				CIMDateTime expiresValue;
				property.getValue().get(expiresValue);
				setExpires(expiresValue);
			}
			else if (String::equal(property.getName().getString(), "ValidFrom"))
			{
				CIMDateTime validFromValue;
				property.getValue().get(validFromValue);
				setValidFrom(validFromValue);
			}
			else if (String::equal(property.getName().getString(), "Template"))
			{
				Array<Uint8> templateValue;
				property.getValue().get(templateValue);
				setTemplate(templateValue);
			}
			else if (String::equal(property.getName().getString(), "TemplateFormat"))
			{
				Uint16 templateFormatValue;
				property.getValue().get(templateFormatValue);
				setTemplateFormat(templateFormatValue);
			}
			else if (String::equal(property.getName().getString(), "OtherTemplateFormat"))
			{
				String otherTemplateFormatValue;
				property.getValue().get(otherTemplateFormatValue);
				setOtherTemplateFormat(otherTemplateFormatValue);
			}
	}
	return true;
}


Boolean UNIX_FingerprintTemplate::initialize()
{
	return false;
}

Boolean UNIX_FingerprintTemplate::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("FingerprintTemplate");
	_generation = Uint64(0);
	_issued = CIMHelper::getCurrentTime();
	_expires = CIMHelper::getCurrentTime();
	_validFrom = CIMHelper::getCurrentTime();
	_template.clear();
	_templateFormat = Uint16(0);
	_otherTemplateFormat = String ("");
	
	return false;
}

Boolean UNIX_FingerprintTemplate::finalize()
{
	return false;
}


Boolean UNIX_FingerprintTemplate::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_FingerprintTemplate::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FingerprintTemplate::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FingerprintTemplate::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FingerprintTemplate::validateInstance()
{
	return true;
}

